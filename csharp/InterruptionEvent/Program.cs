using System;
using System.Threading;

namespace InterruptionEvent
{
    class Program
    {
        static void OnInterruption(object sender, ConsoleCancelEventArgs e)
        {
            if (e.SpecialKey == ConsoleSpecialKey.ControlC)
            {
                Console.WriteLine("Interrupted.");
            }
        }

        static void Main()
        {
            Console.CancelKeyPress += OnInterruption;

            int i = 0;
            while (true)
            {
                Thread.Sleep(TimeSpan.FromSeconds(1));
                Console.WriteLine(i++);
            }
        }
    }
}
