/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Factory
*/

#pragma once

#include "AComponent.hpp"
#include <map>
#include <functional>

class Factory
{
public:
    Factory();
    ~Factory();

    std::unique_ptr<nts::IComponent> createComponent(const std::string &type, const std::string &value);

    std::map<std::string, std::unique_ptr<nts::IComponent>> getMap() const;

    std::unique_ptr<nts::IComponent> addComponent(const std::string &type, std::unique_ptr<nts::IComponent> component);

protected:
private:
    std::map<std::string, std::unique_ptr<nts::IComponent>> _map;
};
