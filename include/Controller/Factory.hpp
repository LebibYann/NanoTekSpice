/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** Factory
*/

#pragma once

#include "IComponent.hpp"
#include "SpecialComponent.hpp"
#include "ElementaryComponent.hpp"
#include "GateComponent.hpp"
#include "AdvancedComponent.hpp"
#include <map>
#include <functional>

namespace nts
{
    class Factory
    {
    public:
        class InvalidNameError : public std::exception
        {
        public:
            InvalidNameError(std::string msg);
            const char *what();

        private:
            const std::string _msg;
        };

        Factory();

        std::unique_ptr<nts::IComponent> createComponent(const std::string &name);

    private:
        std::map<std::string, std::unique_ptr<nts::IComponent>> _register;
    };
}