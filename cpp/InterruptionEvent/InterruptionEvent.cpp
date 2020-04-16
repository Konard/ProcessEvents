#include <iostream>
#include <thread>
#include <signal.h>

void on_interruption(int value)
{
    std::cout << "Interrupted. Value = " << value << "." << std::endl;
}

int main()
{
    signal(SIGINT, on_interruption);

    int i = 0;
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << i++ << std::endl;
    }
}
