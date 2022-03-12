#include "Convert.hpp"

void all_convertion(Convert& str)
{
    str.toChar();
    str.toInt();
    str.toFloat();
    str.toDouble();
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of args\nInput one argument(number) after programm name\n";
        return -1;
    }
    Convert str(argv[1]);
    all_convertion(str);
    return 0;
}