#include <iostream>
#include <thread>
#include <signal.h>

void on_interruption(int value)
{
    if (value == SIGINT) 
    {
        std::cout << "Interrupted." << std::endl;
        exit(-1073741510); // First CTRL+C does not interrupt the execution of main function on Windows 10.
    }
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
