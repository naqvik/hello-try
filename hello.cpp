#include <iostream>
#include "cmath"

int main()
{
    std::cout << "hello world!\n";
    std::cout << "Angle (rad)    sin(angle)\n";
    for (int i = 0; i < 10; i++) {
	float angle = i*.1;
	std::cout << angle << "\t" << sin(angle) << "\n";
    }
}
