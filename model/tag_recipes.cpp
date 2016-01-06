#include "tag_recipes.hpp"

using namespace crecipe::model;

tag_recipes::tag_recipes(std::string tag, std::vector<recipe> recipes
                         = std::vector<recipe>()) : m_tag(tag),
                                                    m_recipes(recipes)
{

}

std::string tag_recipes::tag_recipes::get_tag()
{
    return tag_recipes::m_tag;
}

void tag_recipes::add_recipe(recipe recipe)
{
    tag_recipes::m_recipes.push_back(recipe);
}
