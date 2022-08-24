/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:10:22 by Fayel-ha          #+#    #+#             */
/*   Updated: 2021/12/30 16:10:24 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void    *serialize(void)
{
    void    *data = new char[20];
    char    *tmp_char = reinterpret_cast<char*>(data);
    int     *tmp_int = reinterpret_cast<int*>(data);

    if (data == NULL)
        return (NULL);

    srand(time(NULL));

    std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < 8; i++)
        tmp_char[i] = alphabet[rand() % alphabet.length()];
    tmp_int[2] = rand() % INT_MAX;
    for (int i = 0; i < 8; i++)
        tmp_char[12 + i] = alphabet[rand() % alphabet.length()];

    std::cout   << "----GENERATE DATA----" << std::endl
                << "s1 => " << std::string(tmp_char, 8) << std::endl
                << "n  => " << tmp_int[2] << std::endl
                << "s2 => " << std::string(&tmp_char[12], 8) << std::endl
                << "---------------------" << std::endl
                << std::endl;
    return data;  
}

Data    *deserialize(void *raw)
{
    if (raw == NULL)
    {
        std::cout << "Error: Cannot deserialize null data" << std::endl;
        return NULL;
    }
    Data    *data = new Data;
    data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    data->n = (reinterpret_cast<int*>(raw))[2];
    data->s2 = std::string(&(reinterpret_cast<char*>(raw))[12], 8);
    return data;
}

int main()
{
    void    *raw = serialize();
    Data    *data = deserialize(raw);

    if (data)
    {
        std::cout << data->s1 << std::endl;
        std::cout << data->n << std::endl;
        std::cout << data->s2 << std::endl;
    }
    //void    *raw1 = serialize();
    std::cout << std::endl << std::endl;
    Data    *data2 = deserialize(NULL);
    if (data2)
    {
        std::cout << data2->s1 << std::endl;
        std::cout << data2->n << std::endl;
        std::cout << data2->s2 << std::endl;
    }

    delete data;
    delete static_cast<char*>(raw);

    return (0);
}