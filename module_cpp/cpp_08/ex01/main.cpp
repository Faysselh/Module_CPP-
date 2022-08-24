/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 22:19:48 by Fayel-ha          #+#    #+#             */
/*   Updated: 2022/01/04 22:19:49 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

int main()
{
    try
    {
        Span span(4);
        span.addNumber(3);
        span.addNumber(4);
        span.addNumber(5);
        span.addNumber(7);
        span.print();
        std::cout << "Try to add another nb..." << std::endl;
        span.addNumber(10);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "---------------" << std::endl << std::endl;

    try
    {
        Span span(4);
        span.addNumber(3);
        span.addNumber(4);
        span.addNumber(5);
        span.addNumber(7);
        span.print();
        std::cout << "The shortest span is : " << span.shortestSpan() << std::endl;
        std::cout << "The longest span is : " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "-------SHORT/LONGEST SPAN ON TOO SMALL--------" << std::endl << std::endl;

    try
    {
        Span span(4);
        span.addNumber(3);
        span.print();
        std::cout << "The shortest span is : " << span.shortestSpan() << std::endl;
        std::cout << "The longest span is : " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Span span(4);
        span.print();               // PRINT NOTHING BECAUSE SPAN IS EMPTY
        std::cout << "The longest span is : " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "-------SHORT/LONGEST SPAN ON VERY BIG--------" << std::endl << std::endl;

    try
    {
        Span span(10501);
        span.addNumber(0, 10500);
        std::cout << "The shortest span is : " << span.shortestSpan() << std::endl;
        std::cout << "The longest span is : " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "-------ADD ON EMPTY--------" << std::endl << std::endl;

    try
    {
        Span span(0);
        span.addNumber(0, 10500);
        std::cout << "The shortest span is : " << span.shortestSpan() << std::endl;
        std::cout << "The longest span is : " << span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "-------SUBJECT TEST--------" << std::endl << std::endl;

    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
