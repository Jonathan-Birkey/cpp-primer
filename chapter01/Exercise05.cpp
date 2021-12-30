/**
 * @file Exercise01.cpp
 * 
 * @brief Exercise1.5
 * We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.
 * 
 * @author Jonathan Birkey
 * Contact: jonathan.birkey@gmail.com
 * 
 */

#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << std::ends;
    std::cout << v1 << std::ends;
    std::cout << " and " << std::ends;
    std::cout << v2 << std::ends;
    std::cout << " is " << std::ends;
    std::cout << v1 * v2 << std::endl;
    return 0;
}