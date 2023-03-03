/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Circuit
*/

#pragma once

#include "AComponent.hpp"
#include "Factory.hpp"
#include <map>

class Circuit : public nts::IComponent
{
public:
    Circuit();
    ~Circuit();

    void addComponent(std::string &name, std::unique_ptr<nts::IComponent> component);
    void simulate();
    void display();

protected:
private:
    std::map<std::string, std::unique_ptr<nts::IComponent>> _components;
    Factory _factory;
};
