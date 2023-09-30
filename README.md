# min-pvz-emulator

This is a minimum reproducible example of [Dnartz's PvZ Emulator](https://github.com/dnartz/PvZ-Emulator/tree/master).

## Prerequisites

Have a c++ compiler installed and configured.

## How to use

```powershell
g++ -O3 -o hello hello.cpp -I. -Ilib -Lbuild -lpvzemu; ./hello > hello.json
```

Note: This is a Windows powershell command tested with `g++.exe (Rev6, Built by MSYS2 project) 13.1.0`.