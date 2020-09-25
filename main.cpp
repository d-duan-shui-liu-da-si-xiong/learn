#include <iostream>
static int32_t g_switch = 0; 

int main()
{
    if (g_switch) {
        std::cout << "open" << std::endl;
    } else {
        std::cout << "close" << std::endl;
    }
    
    std::cout << "Hello World." << std::endl;
}