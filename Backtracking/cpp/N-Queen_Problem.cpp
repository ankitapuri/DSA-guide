#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<cstdlib>
#include<cwchar>
#include<iomanip>
#include<conio.h>
#include<dos.h>
using namespace std;
typedef struct _CONSOLE_FONT_INFOEX
{
    ULONG cbSize;
    DWORD nFont;
    COORD dwFontSize;
    UINT  FontFamily;
    UINT  FontWeight;
    WCHAR FaceName[LF_FACESIZE];
}CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;
#ifdef __cplusplus
extern "C" {
#endif
BOOL WINAPI SetCurrentConsoleFontEx(HANDLE hConsoleOutput, BOOL bMaximumWindow, PCONSOLE_FONT_INFOEX
lpConsoleCurrentFontEx);
#ifdef __cplusplus
}
#endif
int n;
//int** board=new int*[n];
int board[15][15];
void printboard()
{
	cout<<setw(70)<<"1.0 game";
	cout<<"\n\n\n";
	for(int i=0;i<n;i++)
	{
		//cout<<"\t\t\t\t\t";
		cout<<setw(50);

		for(int j=0;j<n;j++)
		{
			cout<<"|\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb|";
		}
		cout<<"\n\n";
		//cout<<"\t\t\t\t\t";
		cout<<setw(44);
		for(int j=0;j<n;j++)
		{

			cout<<"|     "<<board[i][j]<<"    |";
		}
		cout<<"\n\n";

	}
	//cout<<"\t\t\t\t\t";
	cout<<setw(50);
	for(int j=0;j<n;j++)
		{
			cout<<"|\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb|";
		}


}
bool completecheck()
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(board[i][j]==1)
			{
				c++;
			}
		}
	}
	if(c==n)
	{
		return 0;
	}
	else
	{
		return 1;

	}
}
bool check(int r,int c)
{
	for(int j=0;j<n;j++)
	{
		if(board[r][j]==1)
		{
			return 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(board[i][c]==1)
		{
			return 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(r+j==i+c||r-j==i-c)
			{
				if(board[i][j]==1)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}
void put(int r,int c)
{

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			board[r][c]=1;
		}
	}
}
void remove(int r,int c)
{
	if(board[r][c]==1)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				board[r][c]=0;
			}
		}
	}
	else
	{
		cout<<"You can only remove 1 if it is already at that position\n";
	}

}

int main()
{

	system("color 02");
	CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 200;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	cout<<setw(12)<<"1.0 GAME\n";
	cout<<"LOADING";
	for(int i=0;i<8;i++)
	{
		cout<<".";
		Sleep(500);
	}
	cout<<"\n";
	system("CLS");
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 35;
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		cout<<"INSTRUCTIONS\n";
		cout<<"->Put the 1 such that\n\t->It does not repeat in same row and column.\n\t->and it also should not be repeated diagonally.\n";
		cout<<"->Game can be win if there is 1 in every row.\n";
		cout<<"Press enter to continue\n";
		cin.ignore();
		system("CLS");
		int level;
		cout<<"SELECT LEVEL\n";
		cout<<"\n1.Easy\n2.Hard\n";
		cin>>level;
		system("CLS");
		cout<<"\n ";
		cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 200;                  // Height
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		cout<<setw(10)<<"ARE YOU READY?";
		Sleep(1000);
		system("CLS");
		for(int i=3;i>=1;i--)
		{
			cout<<"\n\t"<<i;
			Sleep(800);
			system("CLS");
		}
		system("CLS");
		switch(level)
		{
			case 1:
				n=4;
				break;
			case 2:
				n=8;
				break;
		}
//		for(int i=0;i<n;i++)
//	board[i]=new int[n];

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				board[i][j]=0;
			}
		}
		cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 20;                  // Height
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		while(completecheck())
	{
		printboard();
		int command;

		cout<<"\n1.Put the 1\n";
		cout<<"2.Remove the 1\n";
		cout<<"3.Quit\n";
		cin>>command;

		switch(command)
		{
			case 1:
				{

					int rowno,columnno;
					cout<<"enter the place number you want to put 1:\n";
					cout<<"\n enter in format rowno columnno\n";
					cin>>rowno>>columnno;
					if(check(rowno-1,columnno-1))
					{
						put(rowno-1,columnno-1);

					}
					else
					{
						cout<<"you cannot put 1 here";
						Sleep(800);
					}
					break;
				}
			case 2:
				{
					int rowno,columnno;
					cout<<"enter the place number you want to remove 1:\n";
					cout<<"\n enter in format rowno columnno\n";
					cin>>rowno>>columnno;
					remove(rowno-1,columnno-1);
					break;
				}
				case 3:
					exit(0);
				default:
					cout<<"choose correct option\n";
					break;
		}
		system("CLS");
	}
	printboard();
	cout<<"\nYOU WIN\n";
	cout<<"GAME OVER.....";
//	for(int i=0;i<n;i++)
//	delete[] board[i];
//	delete[] board;

	return 0;
}
