/*
** EPITECH PROJECT, 2023
** IComponent
** File description:
** The header contains the Icomponent interface class.
*/

#pragma once

#include <cstddef>
#include <memory>
#include <vector>
#include <iostream>

namespace nts
{
    enum Tristate
    {
        Undefined = (-true),
        True = true,
        False = false
    };
    class Link
    {
    public:
        Link(class IComponent *comp, std::size_t pin) : _comp(comp), _pin(pin) {}
        Tristate compute();

    private:
        IComponent *_comp;
        std::size_t _pin;
    };

    class Pin
    {
    public:
        Pin();
        Tristate compute();
        void setLink(Link link);
        Tristate getState() const;
        void setState(Tristate state);

    private:
        bool _computed;
        Tristate _state;
        std::vector<Link> _links;
    };

    class IComponent
    {
    public:
        class LinkError : public std::exception
        {
        public:
            LinkError(std::string msg);
            const char *what();

        private:
            const std::string _msg;
        };

        virtual ~IComponent() = default;
        virtual void simulate(std::size_t tick) = 0;
        virtual nts::Tristate compute(std::size_t pin) = 0;
        virtual void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) = 0;
        virtual void setState(nts::Tristate state) = 0;
        virtual Pin &getPin(std::size_t pin) = 0;
        virtual std::unique_ptr<nts::IComponent> clone() = 0;
    };
}

std::ostream &operator<<(std ::ostream &s, nts ::Tristate v);
