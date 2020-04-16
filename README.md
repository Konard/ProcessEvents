# ProcessEvents
C# and C++ comparison of process events. This repository was created to research the ways of translation of events handling from C# to C++.

## Notes

Execute all test programs without debugging to get correct results.

## Discoveries

Every event handler is standalone, so no other event handler is called at the same time.

So, all these events lead to program termination in a unique way:
* ExitEvent ([C#](https://github.com/Konard/ProcessEvents/blob/master/csharp/ExitEvent/Program.cs), [C++](https://github.com/Konard/ProcessEvents/blob/master/cpp/ExitEvent/ExitEvent.cpp))
* UnhandledExceptionEvent ([C#](https://github.com/Konard/ProcessEvents/blob/master/csharp/UnhandledExceptionEvent/Program.cs), [C++](https://github.com/Konard/ProcessEvents/blob/master/cpp/UnhandledExceptionEvent/UnhandledExceptionEvent.cpp))
* InterruptionEvent ([C#](https://github.com/Konard/ProcessEvents/blob/master/csharp/InterruptionEvent/Program.cs), [C++](https://github.com/Konard/ProcessEvents/blob/master/cpp/InterruptionEvent/InterruptionEvent.cpp))
* BreakEvent ([C#](https://github.com/Konard/ProcessEvents/blob/master/csharp/BreakEvent/Program.cs), [C++](https://github.com/Konard/ProcessEvents/blob/master/cpp/BreakEvent/BreakEvent.cpp))

And these events do not terminate the program:
* CancelledInterruptionEvent ([C#](https://github.com/Konard/ProcessEvents/blob/master/csharp/CancelledInterruptionEvent/Program.cs), [C++](https://github.com/Konard/ProcessEvents/blob/master/cpp/CancelledInterruptionEvent/CancelledInterruptionEvent.cpp))
* CancelledBreakEvent ([C#](https://github.com/Konard/ProcessEvents/blob/master/csharp/CancelledBreakEvent/Program.cs), [C++](https://github.com/Konard/ProcessEvents/blob/master/cpp/CancelledBreakEvent/CancelledBreakEvent.cpp))
