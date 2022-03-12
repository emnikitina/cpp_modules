#ifndef DATA_HPP
# define DATA_HPP
#include <iostream>

class Data
{
    private:
        std::string data;
    
    public:
        Data(std::string data = "");
        Data(const Data& copy);
        Data& operator=(const Data& source);
        ~Data();

        void setData(std::string data);
        std::string getData(void) const;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif