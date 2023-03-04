/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Factory
*/

#include "Factory.hpp"

Factory::Factory()
{
    _register.insert({"input", std::make_unique<nts::InputComponent>()});
    _register.insert({"output", std::make_unique<nts::OutputComponent>()});
    _register.insert({"true", std::make_unique<nts::TrueComponent>()});
    _register.insert({"false", std::make_unique<nts::FalseComponent>()});
    _register.insert({"clock", std::make_unique<nts::ClockComponent>()});
    _register.insert({"and", std::make_unique<nts::AndComponent>()});
    _register.insert({"or", std::make_unique<nts::OrComponent>()});
    _register.insert({"xor", std::make_unique<nts::XorComponent>()});
    _register.insert({"not", std::make_unique<nts::NotComponent>()});
    _register.insert({"4001", std::make_unique<nts::Component4001>()});
    _register.insert({"4011", std::make_unique<nts::Component4011>()});
    _register.insert({"4030", std::make_unique<nts::Component4030>()});
    _register.insert({"4069", std::make_unique<nts::Component4069>()});
    _register.insert({"4071", std::make_unique<nts::Component4071>()});
    _register.insert({"4081", std::make_unique<nts::Component4081>()});
    _register.insert({"4008", std::make_unique<nts::Component4008>()});
    _register.insert({"4013", std::make_unique<nts::Component4013>()});
}

std::unique_ptr<nts::IComponent> Factory::createComponent(const std::string &type)
{
    if (_register.find(type) == _register.end())
        throw ;
    return (_register[type]->clone());
}
