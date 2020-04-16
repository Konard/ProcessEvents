# ProcessEvents
C# and C++ comparison of process events

## Notes

Execute all test programs without debugging to get correct results.

## Discoveries

Every event handler is standalone, so no other event handler is called at the same time.

So, all these events lead to program termination in a unique way:
* ExitEvent
* UnhandledExceptionEvent
* InterruptionEvent
* BreakEvent
