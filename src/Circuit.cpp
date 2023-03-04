/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Circuit
*/

#include "Circuit.hpp"

nts::Circuit::ComponentError::ComponentError(std::string msg) : _msg(msg)
{
}

const char *nts::Circuit::ComponentError::what()
{
    return (_msg.c_str());
}

nts::Circuit::Circuit() : _tick(0)
{
}

void nts::Circuit::addComponent(std::string type, std::string name)
{
    _components.insert({name, _factory.createComponent(type)});
}

void nts::Circuit::linkComponent(std::string comp1, std::size_t pin1, std::string comp2, std::size_t pin2)
{
    if (comp1.compare(comp2) == 0 && pin1 == pin2)
        throw nts::Circuit::ComponentError("Can't link the same component in the same pin.");
    if (_components.find(comp1) == _components.end())
        throw nts::Circuit::ComponentError("Unknow component name '" + comp1 + "'.");
    if (_components.find(comp2) == _components.end())
        throw nts::Circuit::ComponentError("Unknow component name '" + comp2 + "'.");
    _components[comp2]->setLink(pin2, *_components[comp1], pin1);
}

void nts::Circuit::simulate()
{
    _tick++;
    for (auto it = _components.begin(); it != _components.end(); ++it)
        (it->second)->simulate(1);
}

void nts::Circuit::setState(std::string name, nts::Tristate state)
{
    if (_components.find(name) == _components.end())  
        return;
    _components[name]->setState(state);
}

void nts::Circuit::display()
{
    std::cout << "tick: " << _tick << std::endl;
    std::cout << "input(s):" << std::endl;
    for (auto it = _components.begin(); it != _components.end(); ++it) {
        if (dynamic_cast<nts::InputComponent *>((it->second).get()) || (dynamic_cast<nts::ClockComponent *>((it->second).get())))
            std::cout << "\t" << it->first << ": " << it->second->compute(1) << std::endl;
    }
    std::cout << "output(s):" << std::endl;
    for (auto it = _components.begin(); it != _components.end(); ++it) {
        if (dynamic_cast<nts::OutputComponent *>((it->second).get()))
            std::cout << "\t" << it->first << ": " << it->second->compute(1) << std::endl;
    }
}

void nts::Circuit::loop()
{
    while (1){
        simulate();
        display();
    }
}
