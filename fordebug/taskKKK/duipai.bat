@echo off  
:loop
    datagene.exe
    SPOJ4302_AE2B.exe < dataK.txt > myout.txt
    test3.exe < dataK.txt > stdout.txt
    fc /n myout.txt stdout.txt
if not errorlevel 1 goto loop  
pause
goto loop