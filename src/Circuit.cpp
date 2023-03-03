/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Circuit
*/

#include "Circuit.hpp"

Circuit::Circuit() {}

Circuit::~Circuit() {}

void Circuit::addComponent(std::string &name, std::unique_ptr<nts::IComponent> component)
{
    _components[name] = std::move(component);
}

void Circuit::simulate()
{
    for (auto &component : _components) {
        component.second->simulate();
    }
}

void Circuit::display()
{
    for (auto &component : _components) {
        component.second->display();
    }
}
