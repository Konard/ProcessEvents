#include <iostream>

void on_exit()
{
    std::cout << "Exit." << std::endl;
}

int main()
{
    atexit(on_exit);
    std::cout << "Main." << std::endl;
}
