#include <iostream>
#include <string>
#include <regex>

const char* SEPARATOR = " ";

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Pass a regex..." << std::endl;
        return 1;
    }

    std::regex pattern(argv[1]); 

    for (std::string line; std::getline(std::cin, line);)
    {
        std::smatch matches;
        if (std::regex_search(line, matches, pattern))
        {
            for (size_t i = 1; i < matches.size(); ++i)
            {
                if (i>1)
                {
                    std::cout << SEPARATOR;
                }
                std::cout << matches[i].str();
                if (i==(matches.size()-1))
                {
                    std::cout << std::endl;
                }
            }
        }
    }

    return 0;
}



