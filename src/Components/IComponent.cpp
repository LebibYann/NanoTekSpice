/*
** EPITECH PROJECT, 2023
** IComponent
** File description:
** The file contains all the operator methods of the IComponents classes.
*/

#include "IComponent.hpp"

std::ostream &operator<<(std ::ostream &s, nts ::Tristate v)
{
    if (v == nts::Undefined)
        return (s << 'U');
    return (s << static_cast<int>(v));
}
