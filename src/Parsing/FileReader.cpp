/*
** EPITECH PROJECT, 2023
** FileReader
** File description:
** The file contains all the methods of the file reader class.
*/

#include "FileReader.hpp"

nts::FileReader::InvalidFileError::InvalidFileError(std::string msg) : _msg(msg)
{
}

const char *nts::FileReader::InvalidFileError::what()
{
    return (_msg.c_str());
}

nts::FileReader::FileReader(std::string file, Circuit &circuit) : _file(file), _circuit(circuit)
{
    std::size_t found = file.rfind('.');

    if (found == file.npos)
        throw InvalidFileError("Invalid file extension.");
    if (file.substr(found, file.size()).compare(".nts") != 0)
        throw InvalidFileError("Invalid file extension.");;
}

void nts::FileReader::readChipsetLine(std::string line)
{
    std::stringstream stream;
    std::string type;
    std::string name;
    std::string comment;

    stream << line;
    type = parsing::read_string(stream);
    if (parsing::is_valid(type))
        return;
    name = parsing::read_string(stream);
    if (!parsing::is_valid(stream))
        throw InvalidFileError("Invalid file configuration.");
    _circuit.addComponent(type, name);
}

void nts::FileReader::readLinkLine(std::string line)
{
    std::stringstream stream;
    std::string comp1;
    std::size_t pin1;
    std::string comp2;
    std::size_t pin2;

    if (parsing::is_valid(parsing::erase_padding(line)))
        return;
    stream << line;
    comp1 = parsing::read_until(stream, ':');
    pin1 = parsing::read_int(stream);
    comp2 = parsing::read_until(stream, ':');
    pin2 = parsing::read_int(stream);
    _circuit.linkComponent(comp1, pin1, comp2, pin2);
}

void nts::FileReader::read()
{
    std::ifstream file(_file);
    std::string line;

    if (!getline(file, line))
        throw InvalidFileError("Invalid file.");
    if (line.compare(".chipsets:") != 0)
        throw InvalidFileError("Invalid file configuration");
    while (1)
    {
        if (!getline(file, line))
            throw InvalidFileError("Invalid file configuration");
        if (line.compare(".links:") == 0)
            break;
        if (parsing::erase_padding(line).compare("") != 0)
            readChipsetLine(line);
    }
    while (getline(file, line))
        if (parsing::erase_padding(line).compare("") != 0)
            readLinkLine(line);
}