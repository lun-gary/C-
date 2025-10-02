#include <iostream>

int main()
{
/* 1.9
    int sum = 0 , val = 50;
    while(val <= 100){
        sum += val;
        ++val;
    }
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;
*/

/* 1.10
    int sum = 0 , val = 10;
    while(val >= 0){
        std::cout << val << std::endl;
        --val;
    }
    return 0;
*/

/* 1.11
*/
    int min = 0, maj = 0, v1 = 0, v2 = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    if(v1 >= v2){
        maj = v1;
        min = v2;
    }
    else{
        maj = v2;
        min = v1;
    }
    while(min <= maj){
        std::cout << min << std::endl;
        ++min;
    }
    return 0;
}
