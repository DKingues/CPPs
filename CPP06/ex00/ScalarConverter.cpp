/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:40:58 by retr0             #+#    #+#             */
/*   Updated: 2026/04/22 20:44:58 by retr0            ###   ########.fr       */
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
        return (static_cast<double>(value[0]));
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
    std::cout << "char: ";
    if (type > 0 && type < 128)
    {
        char c = type;
        std::cout <<  "'" << c << "'";
    }
    else if ((type < 1 || type > 127)&& !isLiteral)
        std::cout << "Non displayable";
    else
        std::cout << "impossible";
    std::cout << std::endl;
};

static void    printInt(double type)
{
    std::cout << "int: ";
    if (type >= INT_MIN && type <= INT_MAX)
    {
        int intNumber = type;
        std::cout << intNumber;
    }
    else
        std::cout << "impossible";
    std::cout << std::endl;
};

static void    printFloat(double type, bool &isLiteral)
{
    std::cout << "float: ";
    if (isLiteral && type != type)
        std::cout << "nanf";
    else if (std::isinf(type) && type < 0)
        std::cout << "-inff";
    else if (isLiteral && std::isinf(type))
        std::cout << "inff";
    else
        std::cout << std::fixed << std::setprecision(1) << type << "f";
    std::cout << std::endl;
};

static void    printDouble(double type, bool &isLiteral)
{
    isLiteral = isLiteral;
    std::cout << std::fixed << std::setprecision(1) << "double: " << type;
    std::cout << std::endl;
};

void ScalarConverter::convert(std::string value)
{
    bool isLiteral;
    double type = parseValue(value, isLiteral);

    std::cout << "Converted values:" << std::endl << std::endl;
    printChar(type, isLiteral);
    printInt(type);
    printFloat(type, isLiteral);
    printDouble(type, isLiteral);
};