using System;

namespace ExitEvent
{
    class Program
    {
        static void OnExit(object sender, EventArgs e)
        {
            Console.WriteLine("Exit.");
        }

        static void Main()
        {
            AppDomain.CurrentDomain.ProcessExit += OnExit;
            Console.WriteLine("Main.");
        }
    }
}
