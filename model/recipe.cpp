#include "recipe.hpp"

using namespace crecipe::model;

recipe::recipe(std::string name) : m_name(name)
{

}

void recipe::set_name(std::string name)
{
    recipe::m_name = name;
}

std::string recipe::get_name()
{
    return recipe::m_name;
}

void recipe::set_description(std::string description)
{
    recipe::m_description = description;
}

std::string recipe::get_description()
{
    return recipe::m_description;
}

void recipe::set_rating(int rating)
{
    recipe::m_rating = rating;
}

int recipe::get_rating()
{
    return recipe::m_rating;
}
