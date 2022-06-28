# CHexDump
CHexDump is a minimal C & C++ library to memory hexdump. You can hexdump file or any pointer. To hexdump a file:
```c
FILE_HEX_DUMP(FILE_NAME);
```

Or to hexdump a string for example:
```c
char *s = "Wow such a day!";
HEX_DUMP(s, strlen(s));
```
And the result is:
```
-------- CHexDump v1.0 By Armin Asefi --------
00000000:  57 6f 77 20  73 75 63 68  20 61 20 64  61 79 21 00  |Wow such a day!.|
```