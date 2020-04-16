using System;

namespace UnhandledExceptionEvent
{
    class Program
    {
        private static void OnUnhandledException(object sender, UnhandledExceptionEventArgs e)
        {
            Console.WriteLine("Unhandled exception.");
        }

        static void Main()
        {
            AppDomain.CurrentDomain.UnhandledException += OnUnhandledException;
            throw new Exception("error");
        }
    }
}
