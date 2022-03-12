#include "Convert.hpp"

Convert::Convert(std::string str)
{
    this->str = str;
    this->isNumber = false;

    if (str.size() == 1 && str.find_first_of("0123456789", 0) == std::string::npos)
    {
        this->float_vision = static_cast<float>(str[0]);
        this->isNumber = true;
    }
    else
    {
        if (str[str.size() - 1] == 'f')
            str = str.substr(0, str.size() - 1);
        std::string tmp = str;
        if (tmp[0] == '-' || tmp[0] == '+')
            tmp = tmp.substr(1);
        size_t pos = tmp.find_first_not_of("0123456789", 0);
        if (pos == std::string::npos || (tmp[pos] == '.' && (tmp.substr(pos + 1)).find_first_not_of("0123456789", 0) == std::string::npos))
            this->isNumber = true;
            
        if (this->isNumber)
        {
            std::istringstream istr(str);
            istr >> this->float_vision;
        }
        else
        {
            this->float_vision = std::numeric_limits<float>::quiet_NaN();
            if (this->str == "inf" || this->str == "+inf" || this->str == "inff")
                this->float_vision = std::numeric_limits<float>::infinity();
            else if (this->str == "-inf" || this->str == "-inff")
                this->float_vision = -std::numeric_limits<float>::infinity();
        }
    }
};

Convert::Convert(const Convert& copy)
{
    this->str = copy.getStr();
    this->isNumber = copy.getNumberStatus();
    this->float_vision = copy.getFloat();
};
Convert& Convert::operator=(const Convert& source)
{
    if (this == &source)
        return (*this);
    
    this->str = source.getStr();
    this->isNumber = source.getNumberStatus();
    this->float_vision = source.getFloat();
    return (*this);
};

Convert::~Convert() {};

void Convert::setStr(std::string str)
{
    this->str = str;
};

std::string Convert::getStr(void) const
{
    return this->str;
};

float Convert::getFloat(void) const
{
    return this->float_vision;
};

bool Convert::getNumberStatus(void) const
{
    return this->isNumber;
};

void Convert::toChar()
{
    std::cout << "char: ";
    if (this->isNumber)
    {
        if (this->float_vision > 31 && this->float_vision < 127)
            std::cout << "'" << static_cast<unsigned char>(this->float_vision) << "'" << std::endl;
        else if (this->float_vision >=0 && this->float_vision < 255)
            std::cout << "Non displayable\n";
        else
            std::cout << "impossible\n";
    }
    else
    {
        if (this->str.size() == 1)
            std::cout << "'" << static_cast<char>(this->str[0]) << "'" << std::endl;
        else
            std::cout << "impossible\n";  

    }
};

void Convert::toInt()
{
    std::cout << "int: ";
    if (!this->isNumber)
        std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(this->float_vision) << std::endl;
};

void Convert::toFloat()
{
    std::cout << "float: " << static_cast<float>(this->float_vision) << "f\n";
};

void Convert::toDouble()
{
    std::cout << "double: " << static_cast<double>(this->float_vision) << std::endl;
};