/*
** EPITECH PROJECT, 2023
** FileReader
** File description:
** The header contains the declaration of the FileReader class.
*/

#pragma once

#include <fstream>

#include "Parsing.hpp"
#include "Circuit.hpp"

namespace nts
{
    class FileReader
    {
    public:
        class InvalidFileError : public std::exception
        {
        public:
            InvalidFileError(std::string msg);
            const char *what();

        private:
            const std::string _msg;
        };
        FileReader(std::string file, Circuit &circuit);
        void readChipsetLine(std::string line);
        void readLinkLine(std::string line);
        void read();

    private:
        std::string _file;
        Circuit &_circuit;
    };
}
