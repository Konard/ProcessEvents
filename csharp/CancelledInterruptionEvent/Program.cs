using System;
using System.Threading;

namespace CancelledInterruptionEvent
{
    class Program
    {
        static void OnInterruption(object sender, ConsoleCancelEventArgs e)
        {
            if (e.SpecialKey == ConsoleSpecialKey.ControlC)
            {
                e.Cancel = true;
                Console.WriteLine("Interruption cancelled.");
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
