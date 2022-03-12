#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class  Convert
{
    private:
        std::string str;
        bool isNumber;
        float float_vision;

    public:
        Convert(std::string str);
        Convert(const Convert& copy);
        Convert& operator=(const Convert& source);
        ~Convert();

        void setStr(std::string str);
        std::string getStr(void) const;
        float getFloat(void) const;
        bool getNumberStatus(void) const;

        void toChar();
        void toInt();
        void toFloat();
        void toDouble();
};