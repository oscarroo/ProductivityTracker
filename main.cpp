#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    std::cout << "Hello world" << std::endl;
    int chromeTimeSeconds = 0; // tracks how long you use


    while (true)
    {
        HWND hwnd = GetForegroundWindow();
        char windowTitle[256];
        GetWindowTextA(hwnd, windowTitle, sizeof(windowTitle));

        std::string test(windowTitle);



        if (test.find("chrome") != std::string::npos)
        {
            chromeTimeSeconds++;
        }
        else if (test.find("Chrome") != std::string::npos)
        {
            chromeTimeSeconds++;
        }

        std::cout << "Active Application: " << windowTitle << std::endl;
        std::cout << "chrome time spent: " << chromeTimeSeconds << std::endl;

        Sleep(1000);

    }
    return 0;
}