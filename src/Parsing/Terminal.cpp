/*
** EPITECH PROJECT, 2023
** The file contains all the methods of the terminal class.
** File description:
** Terminal
*/

#include "Terminal.hpp"

nts::Terminal::Terminal(Circuit &circuit) : _circuit(circuit)
{
}

bool nts::Terminal::readLine()
{
    std::string line;
    std::size_t pars;
    std::string name;
    std::string value;

    std::cout << "> ";
    if (!std::getline(std::cin, line))
        return (false);
    line = parsing::erase_padding(line);
    if (line.compare("exit") == 0)
        return (false);
    else if (line.compare("display") == 0)
        _circuit.display();
    else if (line.compare("simulate") == 0)
        _circuit.simulate();
    else if (line.compare("loop") == 0)
        _circuit.loop();
    else if ((pars = line.find("=")) != std::string::npos){
        name = line.substr(0, pars);
        value = line.substr(pars + 1);
        name = parsing::erase_padding(name);
        value = parsing::erase_padding(value);
        if (value.compare("U") == 0)
            _circuit.setState(name, nts::Undefined);
        else if (value.compare("1") == 0)
            _circuit.setState(name, nts::True);
        else if (value.compare("0") == 0)
            _circuit.setState(name, nts::False);
    }
    return (true);
}

void nts::Terminal::Start()
{
    std::signal(SIGINT, signal_handler);
    while (readLine());
}