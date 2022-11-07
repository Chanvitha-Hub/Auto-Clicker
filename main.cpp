#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char * argv[] )

{
    int n = 1;
    int x;
    int y;
    int times;
    int done;
    int sleepy;
    string choice;


    start:

    cout << "Speed Clicker Version 1.1" << endl;
    cout << "   " << endl;

    cout << "How many times do you want to click?" << endl;
    cout << " : ";

cin >> times;

cout << "How much time should be between clicks? (Milliseconds)" << endl;
cout << "(MS)";
cin >> sleepy;
done = 0;


cout << "starting in 5..." << endl;
Sleep(1000);
cout << "starting in 4..." << endl;
Sleep(1000);
cout << "starting in 3..." << endl;
Sleep(1000);
cout << "starting in 2..." << endl;
Sleep(1000);
cout << "starting in 1..." << endl;
Sleep(1000);

    while (done <= times)
    {
        Sleep(sleepy);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x ,y ,0 ,0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        done++;
    }

    cout << "Auto clicking has finished." << endl;

    cout << "Application written by Chanvitha." << endl;
    cout << "   " << endl;
    Sleep(1000);
    cout << "Again? (y) or (n)" << endl;
    cin >> choice;

    //ahh...bit my tongue...

    if (choice == "y")
    {
        system("cls");
        goto start;

    }

    cin.get();















}
