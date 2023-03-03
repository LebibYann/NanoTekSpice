/*
** EPITECH PROJECT, 2023
** IComponent
** File description:
** The header contains the Icomponent interface class.
*/

#pragma once

#include <cstddef>
#include <iostream>

namespace nts
{
    enum Tristate
    {
        Undefined = (-true),
        True = true,
        False = false
    };
    class IComponent
    {
    public:
        virtual ~IComponent() = default;
        virtual void simulate(std::size_t tick) = 0;
        virtual nts::Tristate compute(std::size_t pin) = 0;
        virtual void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) = 0;
        virtual void setState(nts::Tristate state) = 0;
        virtual std::unique_ptr<nts::IComponent> clone() = 0;
    };
}
