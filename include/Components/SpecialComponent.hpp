/*
** EPITECH PROJECT, 2023
** SpecialComponent
** File description:
** The header contains all the SpecialComponent classes.
*/

#pragma once

#include "AComponent.hpp"

namespace nts
{
    class SpecialComponent : public Acomponent {};

    class InputComponent : public SpecialComponent
    {
    public:
        InputComponent();
        void setState(Tristate state);
        void simulate(std::size_t tick);
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> clone();
    protected:
        Tristate _state;
        bool _changed;
    };

    class OutputComponent : public SpecialComponent
    {
    public:
        OutputComponent();
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> clone();
    };

    class TrueComponent : public SpecialComponent
    {
    public:
        TrueComponent();
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> clone();
    };

    class FalseComponent : public SpecialComponent
    {
    public:
        FalseComponent();
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> clone();
    };

    class ClockComponent : public SpecialComponent
    {
    public:
        ClockComponent();
        void setState(Tristate state);
        void simulate(std::size_t tick);
        Tristate compute(std::size_t pin);
        std::unique_ptr<nts::IComponent> clone();
    protected:
        Tristate _state;
        bool _changed;
    };
}
