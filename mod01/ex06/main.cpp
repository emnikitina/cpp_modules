#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen new_karen;

    if (argc == 2)
        new_karen.complain(argv[1]);
    else
        std::cout << "Wrong number of args" << std::endl;
    return (0);
}