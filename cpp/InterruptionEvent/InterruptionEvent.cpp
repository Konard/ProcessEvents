#include <iostream>
#include <thread>
#include <csignal>

void on_interruption(int signal_value)
{
    if (signal_value == SIGINT)
    {
        std::cout << "Interrupted." << std::endl;
        std::raise(SIGINT); // First CTRL+C does not interrupt the execution of main function on Windows 10.
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
