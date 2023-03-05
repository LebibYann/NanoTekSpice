/*
** EPITECH PROJECT, 2023
** B-OOP-400-PAR-4-1-tekspice-ethan.nguyen
** File description:
** main
*/

#include "Terminal.hpp"
#include "FileReader.hpp"

int main(int argc, char **argv)
{
    nts::Circuit circuit;

    if (argc != 2)
        return (84);
    try{
        nts::FileReader reader(argv[1], circuit);
        reader.read();
    } catch (nts::Circuit::ComponentError &e)
    {
        std::cerr << e.what() << std::endl;
        return (84);
    } catch (parsing::ParsingError &e)
    {
        std::cerr << e.what() << std::endl;
        return (84);
    } catch (nts::FileReader::InvalidFileError &e)
    {
        std::cerr << e.what() << std::endl;
        return (84);
    } catch (nts::Factory::InvalidNameError &e)
    {
        std::cerr << e.what() << std::endl;
        return (84);
    } catch(nts::IComponent::LinkError &e){
        std::cerr << e.what() << std::endl;
        return (84);
    }
    nts::Terminal terminal(circuit);
    terminal.Start();
    return (0);
}