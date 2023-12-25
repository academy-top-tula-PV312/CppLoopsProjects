#include <iostream>

int main()
{
    /*
    int n{ 1000 };
    int amount{};
    
    int j{ 1 };
    while(j <= n)
        amount += j++;
    
    amount = 0;
    int i;
    
    for( i = 2; i <= n; i += 2)
        //if(i % 2 == 0)
            amount += i;
        
    std::cout << "amount = " << amount << "\n";
    std::cout << i << "\n";
    */
    
    /*
    int amount{};
    
    for(int i { 1 }; i <= 40; i++)
    {
        std::cout << "i = " << i << "\n";
        if(i % 5 == 0)
            continue;
        if(i == 38)
            break;
        
        amount += i;
        std::cout << "current amount = " << amount << "\n";
    }
    */

    /*
    int number;
    while(true)
    {
        std::cout << "input nunber: ";
        std::cin >> number;
        
        if(number == 0)
            break;
        
        amount += number;
    }
    */
    //std::cout << "Amount = " << amount << "\n";
    
    /*
    int size;
    char symbol;
    
    std::cout << "input size of string: ";
    std::cin >> size;
    
    std::cout << "input symbol for fill: ";
    std::cin >> symbol;
    
    for(int i {}; i < size; i++)
        std::cout << symbol;
    std::cout << "\n";
        
    std::cout << "Hello";
    
    */
    std::cout << "-----------------------------------------\n";
    std::cout << "| Фамилия\t| " << "Группа\t" << "Оценка\t" << "\n";
    std::cout << "-----------------------------------------\n";
    std::cout << "| Петров\t| " << "БВ-443\t" << "11\t" << "\n";
    std::cout << "| Петров\t| БВ-443\t12\t\n";
    std::cout << "-----------------------------------------\n";
    
    
    
    
    
    return 0;
}
