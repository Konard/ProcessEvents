#include <iostream>
#include <thread>
#include <csignal>

void on_interruption(int signal_value)
{
    if (signal_value == SIGINT)
    {
        std::signal(SIGINT, on_interruption);
        std::cout << "Interruption cancelled." << std::endl;
    }
}

int main()
{
    std::signal(SIGINT, on_interruption);

    int i = 0;
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << i++ << std::endl;
    }
}
