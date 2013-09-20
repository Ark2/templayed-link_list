#include <windows.h>
#include <iostream>
#include <conio.h>
#include "stack.h"
#include "Quee.h"
using namespace std ;

int main()
{
	HANDLE hOut;
	COORD NewSBSize;
	SMALL_RECT Area = {0, 0, 0, 0};

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	NewSBSize = GetLargestConsoleWindowSize(hOut);

	SetConsoleScreenBufferSize(hOut, NewSBSize);

	Area.Right = NewSBSize.X - 1;
	Area.Bottom = NewSBSize.Y - 1;

	SetConsoleWindowInfo(hOut, TRUE,  &Area);

	//cout<<"This is It.";
	quee<int> abr2 ;
	stack<int> abr ;
	abr2.enquee_s(10) ;
	abr2.enquee_s(19);
	//abr2.push(15);
	cout<<"-----------------------"<< endl ;
	cout <<  abr2.dequee_S()  << endl;
	cout <<  abr2.dequee_S()  << endl;
	//cout <<  abr2.pop()  << endl;


	return 0;
}