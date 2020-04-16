#include <iostream>
#include <thread>
#include <signal.h>

void on_break(int value)
{
    if (value == SIGBREAK)
    {
        std::cout << "Break." << std::endl;
        exit(-1073741510); // First CTRL+Break does not interrupt the execution of main function on Windows 10.
    }
}

int main()
{
    signal(SIGBREAK, on_break);

    int i = 0;
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << i++ << std::endl;
    }
}
