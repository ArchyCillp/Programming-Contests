@echo off  
:loop  
    ran.exe %random% > data.txt
    task.exe < data.txt > myout.txt
    stand.exe < data.txt > stdout.txt
    fc myout.txt stdout.txt
if not errorlevel 1 goto loop  
pause
goto loop