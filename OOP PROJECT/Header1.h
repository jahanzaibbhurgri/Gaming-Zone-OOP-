#include "iostream"
#include "windows.h"
using namespace std;
void STYLE (char *string_a, int length)
{
	cout<<"\n\n\n\n\n\t\t\t    ";
    int i; char ch = 179;
    
	for(i = 0; i < 10; i++)
        cout<<ch;
    ch--;
    for(i = 0; i < 10; i++)
        cout<<ch;
    ch--;
    for(i = 0; i < 10; i++)
        cout<<ch;
    fflush(stdout);
    for (i = 0; i < length; i++) {
        cout<<(*(string_a + i));
        Sleep(50);
    }

    for(i = 0; i < 10; i++)
        cout<<ch;

    ch++;
    for( i = 0; i < 10; i++)
        cout<<ch;

    ch++;
    for( i = 0;i < 10; i++)
        cout<<ch;

}
void STYLE1 (char *string_a, int length)
{
    int i;

    fflush(stdout);
    for (i = 0; i < length; i++) {
        cout<<(*(string_a + i));
        Sleep(36);
    }
}
void gotoxy( int column, int line )
{
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

void gn()
{
	gotoxy(64,16);
	Sleep(100);
	cout<<"*";
	gotoxy(63,17);
	Sleep(100);
	cout<<"*";
	gotoxy(61,18);
	Sleep(100);
	cout<<"*";
	gotoxy(59,18);
	Sleep(100);
	cout<<"*";
	gotoxy(58,19);
	Sleep(100);
	cout<<"*";
	gotoxy(57,20);
	Sleep(100);
	cout<<"*";
	gotoxy(51,24);
	Sleep(100);
	cout<<"*";
	gotoxy(52,23);
	Sleep(100);
	cout<<"*";
	gotoxy(53,22);
	Sleep(100);
	cout<<"*";
	gotoxy(54,21);
	Sleep(100);
	cout<<"*";
	gotoxy(55,20);
	Sleep(100);
	cout<<"*";
	gotoxy(53,20);
	Sleep(100);
	cout<<"*";
    gotoxy(52,26);
    Sleep(100);
	cout<<"*";
	gotoxy(51,27);
	Sleep(100);
	cout<<"*";
	gotoxy(53,28);
	Sleep(100);
	cout<<"*";
	gotoxy(54,29);
	Sleep(100);
	cout<<"*";
	gotoxy(56,30);
	Sleep(100);
	cout<<"*";
	gotoxy(57,29);
	Sleep(100);
	cout<<"*";
    gotoxy(56,29);
	Sleep(100);
	cout<<"*";
	gotoxy(55,29);
	Sleep(100);
	cout<<"*";
	gotoxy(56,28);
	Sleep(100);
	cout<<"*";
	gotoxy(55,27);
	Sleep(100);
	cout<<"*";
	gotoxy(54,26);
	Sleep(100);
	cout<<"*";
	gotoxy(54,26);
	Sleep(100);
	cout<<"*";
	
	gotoxy(56,25);
	Sleep(100);
	cout<<"*";
	gotoxy(57,24);
	Sleep(100);
	cout<<"*";
	gotoxy(58,23);
	Sleep(100);
	cout<<"*";
	gotoxy(59,23);
		Sleep(100);
	cout<<"*";
	gotoxy(60,24);
		Sleep(100);
	cout<<"*";
	gotoxy(61,23);
		Sleep(100);
	cout<<"*";
	gotoxy(60,22);
		Sleep(100);
	cout<<"*";
	gotoxy(59,21);
		Sleep(100);
	cout<<"*";

	gotoxy(59,21);
	Sleep(100);
	cout<<"*";
	gotoxy(60,19);
	Sleep(100);
	cout<<"*";
	gotoxy(61,18);
	Sleep(100);
	cout<<"*";
	gotoxy(62,18);
	Sleep(100);
	cout<<"*";
	gotoxy(63,17);
	Sleep(100);
	cout<<"*";
	gotoxy(60,19);
	Sleep(100);
	cout<<"*";
	gotoxy(64,16);
	Sleep(100);
	cout<<"*";
	gotoxy(64,16);
	Sleep(100);
	cout<<"*";
	gotoxy(63,17);
	Sleep(100);
	cout<<"*";
	gotoxy(62,18);
	Sleep(100);
	cout<<"*";
	
}

