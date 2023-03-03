/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Factory
*/

#include "Factory.hpp"

Factory::Factory() {}

Factory::~Factory() {}

std::unique_ptr<nts::IComponent> Factory::createComponent(const std::string &type, const std::string &value)
{
    if (_map.find(type) == _map.end())
        return nullptr;
    return _map[type].second->clone(value);
}
