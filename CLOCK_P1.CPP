#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int hour, minute, seconde, a, err;
    err = a = 0;
    while (err == 0)
    {
        cout << "Enter hour: " << endl;
        cin >> hour;
        cout << "Enter minutes: " << endl;
        cin >> minute;
        cout << "Enter secode: " << endl;
        cin >> seconde;
        if (hour < 24 && minute < 60 && seconde < 60)
        {
            err++;
        }
        else
        {
            system("cls");
        }
    }
    while (a == 0)
    {
        system("cls");
        cout << hour << ":" << minute << ":" << seconde << endl;
        Sleep(1000);
        seconde++;
        if (seconde > 59)
        {
            seconde = 0;
            minute++;
        }
        if (minute > 59)
        {
            minute = 0;
            hour++;
        }
        if (hour > 24)
        {
            hour = 0;
        }
    }

    return 0;
}