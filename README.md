# ProcessEvents
C# and C++ comparison of process events

## Notes

Execute all test programs without debugging to get correct results.

## Discoveries

UnhandledExceptionEvent does not call handler for ExitEvent.

InterruptionEvent on C# does not call handler for ExitEvent, but the C++ version can call such handler as a side effect.
