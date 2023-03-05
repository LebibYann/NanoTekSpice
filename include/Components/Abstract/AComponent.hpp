/*
** EPITECH PROJECT, 2023
** AComponent
** File description:
** The header contains the AComponent class.
*/

#pragma once

#include "IComponent.hpp"
#include <vector>
#include <memory>

namespace nts
{
    class Acomponent : public IComponent
    {
        public:
            void simulate(std::size_t tick);
            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin);
            void setState(nts::Tristate state);
            Pin &getPin(std::size_t pin);
        protected:
            std::size_t _npin;
            std::vector<Pin> _pins;
    };
}
