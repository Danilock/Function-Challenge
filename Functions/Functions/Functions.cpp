# include<iostream>
# include <cmath>

int RedundantPowFunction(int& number, int pow);

int main(int argc, char* argv[])
{
    int number;
    
    std::cout << "Insert a number:";
    std::cin >> number;

    RedundantPowFunction(number, 3);

    std::cout << std::endl << number;
    
    return 0;
}

int RedundantPowFunction(int& number, int pow)
{
    number = std::pow(number,pow);
    
    return number;
}
