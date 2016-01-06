#include <string>
namespace crecipe
{
    namespace model
    {
        class recipe
        {
        private:
            std::string m_name;
            std::string m_description;
            int m_rating;
        public:
            recipe(std::string name);
            void set_name(std::string name);
            std::string get_name();
            void set_description(std::string description);
            std::string get_description();
            void set_rating(int rating);
            int get_rating();
        };
    }
}
