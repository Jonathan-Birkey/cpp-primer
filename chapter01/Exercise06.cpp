/**
 * @file Exercise06.cpp
 * 
 * @brief Exercise1.6
 * Explain whether the following program fragment is legal.
 * 
 * std::cout << "The sum of " << v1;
 *           << " and " << v2;
 *           << " is " << v1 + v2 << std::endl;
 * 
 * If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?
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
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}