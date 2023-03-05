/*
** EPITECH PROJECT, 2023
** parsing
** File description:
** The file contains all the functions of the parsing program
*/

#include "Parsing.hpp"

namespace parsing
{
    ParsingError::ParsingError(std::string msg) : _msg(msg)
    {
    }

    const char *ParsingError::what()
    {
        return (_msg.c_str());
    }

    std::string read_string(std::stringstream &stream)
    {
        std::string str;

        if (!stream.good())
            throw ParsingError("Invalid file format");
        stream >> str;
        return (str);
    }

    std::string read_until(std::stringstream &stream, char token)
    {
        std::string str;

        if (!stream.good())
            throw ParsingError("Invalid file format");
        ;
        getline(stream, str, token);
        return (erase_padding(str));
    }

    int read_int(std::stringstream &stream)
    {
        int nbr;

        if (!stream.good())
            throw ParsingError("Invalid file format");
        stream >> nbr;
        return (nbr);
    }

    bool is_valid(std::stringstream &stream)
    {
        std::string str;

        if (!stream.good())
            return (true);
        stream >> str;
        if (*str.begin() == '#')
            return (true);
        return (false);
    }

    bool is_valid(std::string str)
    {
        if (*str.begin() == '#')
            return (true);
        return (false);
    }

    std::string erase_padding(std::string str)
    {
        str.erase(0, str.find_first_not_of(" \t"));
        str.erase(str.find_last_not_of(" \t") + 1);
        return (str);
    }
}
