#include <iostream>

int main()
{
/* 1.3
   std::cout << "Hello, World." << std::endl;
   return 0;
*/
    
/* 1.4
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0 ;
    std::cin >> v1 >> v2;
    std::cout << "The multipy of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
    return 0;
*/

/* 1.5
*/
    std::cout << "Enter two numbers: ";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The multipy of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;

}