#include <iostream>

int main()
{
    int amount{};
    /*
    int number{ 1 };
    
    while(number <= 1000)
    {
        amount += number;
        number++;
    }
    */
    
    int number;
    /*
    while(number != 0)
    {
        std::cout << "input number (0 - exit): ";
        std::cin >> number;
        amount += number;
    }
    */
    
    do
    {
        std::cout << "input number (0 - exit): ";
        std::cin >> number;
        amount += number;
        
    }while(number != 0);
    
    std::cout << "Amount = " << amount << "\n";
    
    int n;
    std::cout << "input n: ";
    std::cin >> n;
    
    number = 1;
    long long fact{ 1 };
    
    while(number <= n)
    {
        fact *= number;
        number++;
    }
    
    std::cout << "fact = " << fact << "\n";
    
    fact{ 1 }
    while(n > 0)
    {
        fact *= n;
        //n--;
    }
    
    
    return 0;
}
