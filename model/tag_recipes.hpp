#pragma once

#include <string>
#include <vector>

#include "recipe.hpp"

namespace crecipe
{
    namespace model
    {
        class tag_recipes
        {
        private:
            std::string m_tag;
            std::vector<recipe> m_recipes;


        public:
            tag_recipes(std::string tag, std::vector<recipe> recipes);
            std::string get_tag();
            void add_recipe(recipe recipe);

        };
    }
}
