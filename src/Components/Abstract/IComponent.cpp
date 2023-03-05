/*
** EPITECH PROJECT, 2023
** IComponent
** File description:
** The file contains all the methods of the IComponents classes.
*/

#include "IComponent.hpp"

nts::IComponent::LinkError::LinkError(std::string msg) : _msg(msg)
{
}

const char *nts::IComponent::LinkError::what()
{
    return (_msg.c_str());
}

std::ostream &operator<<(std ::ostream &s, nts ::Tristate v)
{
    if (v == nts::Undefined)
        return (s << 'U');
    return (s << static_cast<int>(v));
}
