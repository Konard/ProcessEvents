using System;
using System.Threading;

namespace BreakEvent
{
    class Program
    {
        static void OnBreak(object sender, ConsoleCancelEventArgs e)
        {
            if (e.SpecialKey == ConsoleSpecialKey.ControlBreak)
            {
                Console.WriteLine("Break.");
            }
        }

        static void Main()
        {
            Console.CancelKeyPress += OnBreak;

            int i = 0;
            while (true)
            {
                Thread.Sleep(TimeSpan.FromSeconds(1));
                Console.WriteLine(i++);
            }
        }
    }
}
