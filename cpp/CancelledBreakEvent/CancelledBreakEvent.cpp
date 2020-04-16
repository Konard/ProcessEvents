#include <iostream>
#include <thread>
#include <csignal>

void on_break(int signal_value)
{
    if (signal_value == SIGBREAK)
    {
        std::signal(SIGBREAK, on_break);
        std::cout << "Break cancelled." << std::endl;
    }
}

int main()
{
    std::signal(SIGBREAK, on_break);

    int i = 0;
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << i++ << std::endl;
    }
}
