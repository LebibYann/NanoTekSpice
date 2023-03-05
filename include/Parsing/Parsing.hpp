/*
** EPITECH PROJECT, 2023
** parsing
** File description:
** The header contains all the functions prototype of the parsing namespace.
*/

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <exception>

namespace parsing
{
    class ParsingError : public std::exception
    {
    public:
        ParsingError(std::string msg);
        const char *what();

    private:
        const std::string _msg;
    };
    std::string read_string(std::stringstream &stream);
    std::string read_until(std::stringstream &stream, char token);
    int read_int(std::stringstream &stream);
    bool is_valid(std::stringstream &stream);
    bool is_valid(std::string str);
    std::string erase_padding(std::string str);
}