#include <iostream>
#include <algorithm>

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
*/

/* 1.12
    int sum = 0;
    for(int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;
    return 0;
*/

/* 1.13
    int sum = 0;
    for(int i = 50; i <= 100; i++)
        sum += i;
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;

    for(int i = 10; i >=0; --i)
        std::cout << i << std::endl;
    return 0;

    int v1 = 0, v2 = 0, min = 0, maj = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    maj = std::max(v1, v2);
    min = std::min(v1, v2);
    for(int i = min; i <= maj; ++i)
        std::cout << i << std::endl;
    return 0;
*/

/* 1.16 while难跳出，需要ctrl+z+enter
    int sum = 0, value = 0;
    std::cout << "Enter numbers to be add:" << std::endl;
    while(std::cin >> value)
        sum += value;
    std::cout << "The sum of numbers is " << sum << std::endl;
    return 0;
*/

/* 1.17 和1.16一样的问题，最后一项需要结束符 */
    int currVal = 0, val = 0;
    if(std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(val == currVal)
                ++cnt;
            else{
                std::cout << currVal << " ocurrs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " ocurrs " << cnt << " times" << std::endl;
    }
    return 0;


}
