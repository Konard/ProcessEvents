#include <iostream>

void on_unhandled_exception()
{
    std::cout << "Unhandled exception." << std::endl;
}

int main()
{
    std::set_terminate(on_unhandled_exception);
    throw std::runtime_error("error");
}
