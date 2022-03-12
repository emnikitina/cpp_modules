#include "span.hpp"

int main()
{
    {
        Span myVect(3);
        
        //myVect.addNumber(11);
        std::cout << "-Try to get shortest and longest span in empty store-\n";
        try
        {
            std::cout << "shortest=" << myVect.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "longest=" << myVect.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "-----------Create new store with size = 7------------\n";
        Span myVect(7);

        myVect.addNumber(11);
        myVect.addNumber(14);
        myVect.addNumber(40);
        myVect.addNumber(2);
        myVect.addNumber(17);
        myVect.addNumber(1);
        myVect.addNumber(24);

        
        std::cout << "-----------Try to add number to fulled store---------\n";
        try
        {
            myVect.addNumber(3);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "---------Try to add more numbers than store size-----\n";
        try
        {
            myVect.addNumberRange(5, 1, 9);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "-----Getting shortest and longest span in store------\n";
        try
        {
            std::cout << "longest=" << myVect.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "shortest=" << myVect.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Span myVect(14);

        myVect.addNumber(15);
        myVect.addNumber(4);
        myVect.addNumber(61);
        myVect.addNumber(12);
        myVect.addNumber(1);
        myVect.addNumber(6);
        myVect.addNumber(24);
        myVect.addNumber(45);
        std::cout << "-------------Change some numbers in store------------\n";
        try
        {
            myVect.addNumberRange(5, 6, 10);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "----Getting shortest and longest span in store-------\n";
        try
        {
            std::cout << "longest=" << myVect.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "shortest=" << myVect.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
        std::cout << "-----------Creating store with size = 10000----------\n";
        Span myVect(10010);
        
        try
        {
            myVect.addNumberRange(2, 0, 10010);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            myVect.addNumberRange(17, 5000, 8000);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "Store size =" << myVect.getStore().size() << std::endl;
        std::cout << "------Getting shortest and longest span in store-----\n";
        try
        {
            std::cout << "longest=" << myVect.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "shortest=" << myVect.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return 0;
}