/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Circuit
*/

#pragma once

#include "IComponent.hpp"
#include "Factory.hpp"
#include "SpecialComponent.hpp"

#include <map>
#include <exception>

namespace nts
{
    class Circuit
    {
    public:
        class ComponentError : public std::exception
        {
        public:
            ComponentError(std::string msg);
            const char *what();

        private:
            const std::string _msg;
        };

        Circuit();

        void addComponent(std::string type, std::string name);
        void linkComponent(std::string comp1, std::size_t pin1, std::string comp2, std::size_t pin2);
        void setState(std::string name, nts::Tristate state);
        void simulate();
        void display();
        void loop();

    private:
        std::map<std::string, std::unique_ptr<nts::IComponent>> _components;
        Factory _factory;
        std::size_t _tick;
    };
}