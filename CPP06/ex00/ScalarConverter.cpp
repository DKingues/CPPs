/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:40:58 by retr0             #+#    #+#             */
/*   Updated: 2026/04/21 20:14:41 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "[ScalarConverter default constructor]" << std::endl;
};

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << "[ScalarConverter copy constructor]" << std::endl;
    *this = other;
};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    std::cout << "[ScalarConverter assignment operator]" << std::endl;
    if (this != &other)
    {
        
    }
    return (*this);
};

ScalarConverter::~ScalarConverter()
{
    std::cout << "[ScalarConverter destructor]" << std::endl;
};

static double  parseValue(std::string &value, bool &isLiteral)
{
    if (value.length() == 1 && !isdigit(value[0]))
        return (atof(value.c_str()));
    else if (value == "nan" || value == "nanf")
    {
        isLiteral = true;
        return(std::strtod("nan", NULL));
    }
    else if (value == "inf" || value == "inff" || value == "+inf" || value == "+inff")
    {
        isLiteral = true;
        return (std::strtod("inf", NULL));
    }
    else if (value == "-inf" || value == "-inff")
    {
        isLiteral = true;
        return (std::strtod("-inf", NULL));
    }
    else
        return (std::strtod(value.c_str(), NULL));
};

static void    printChar(double type, bool &isLiteral)
{
    std::cout << "Char: ";
    if (isLiteral)
        std::cout << "heyo" << std::endl;
    std::cout << type << std::endl;
};

// static void    printInt(double type, bool &isLiteral)
// {
    
// };

// static void    printFloat(double type, bool &isLiteral)
// {
    
// };

// static void    printDouble(double type, bool &isLiteral)
// {
    
// };

void ScalarConverter::convert(std::string value)
{
    bool isLiteral;
    double type = parseValue(value, isLiteral);

    printChar(type, isLiteral);
    // printInt(type, isLiteral);
    // printFloat(type, isLiteral);
    // printDouble(type, isLiteral);
};