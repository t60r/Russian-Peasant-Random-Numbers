//RUSSIAN PEASANT METHOD PROGRAM
//DEMONSTRATES RANDOM NUMBERS, AND THE RUSSIAN PEASANT METHOD FOR MULTIPLYING NUMBERS


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
using namespace std;
int main()

{
	srand(static_cast<unsigned int>(time(0)));//we're probably going to want this.
	int first = 0;
	int second = 100;
	std::cout << "Welcome to the Russian Peasant program!\n\nLet's multiply two numbers using the Russian Peasant method!" << endl;
	cout << "You pick the first number, I'll pick the second.\n";
	cout << "Please enter an integer 1 - 100:\n";
	cin >> first;
	cout << endl;
	second = (rand()%100);//random mod 100
	cout << first << " Is a good number.  " << "I'll pick " << second << "." << endl;
	while (getchar() != '\n');
	cout << "\nNow it's time to show you how to do this.\n";
	cout << "We will write two columns\n";
	cout << "Our smallest number will go first\n";
	if (first > second)
	{
		int temp = first;
		first = second;
		second = temp;
	}
	cout << first << endl;
	while (getchar() != '\n');
	cout << "Our largest number will go second\n";
	cout << first << "	" << second << endl;
	while (getchar() != '\n');
	cout << "Divide the first number by two, leaving out the remainder\n";
	cout << "Write the result below the original\n";
	cout << first << "	" << second << endl;
	cout << (first/2) << endl;
	while (getchar() != '\n');
	cout << "Multiply the largest number by 2\n";
	cout << "Write the result below\n";
	cout << first << "	" << second << endl;
	cout << (first/2) << "	" << (second*2)<< endl;
	while (getchar() != '\n');
	cout << "Continue doing this until the number in the bottom of the first column is '1'.\n";
	//LOOP TO FILL ARRAYS WITH THE COLUMNS
	const int COL = 7;//prevents going out of index
	
	int col1[COL] = {0,0,0,0,0,0,0};
	int col2[COL] = {0,0,0,0,0,0,0};
	
	for (int i = 0; i < COL; ++i)
	{
		col1[i] = first;
		col2[i] = second;
		cout << col1[i] << "    " << col2[i] ;
		cout << endl;
		first = (first/2);
		second = (second*2);
	}
	while (getchar() != '\n');
	cout << "Find any odd numbers in the first column, and mark them.\n";
	for (int i = 0; i < COL; ++i)
	{
		cout << col1[i] << "    " << col2[i] ;
		cout << endl;
	}
	//FUNCTION TO FIND ODD NUMBERS
	int col1Good[COL] = {0,0,0,0,0,0,0};
	for (int i = 0; i< COL;++i)
	{
		if ((col1[i]%2) == 1)
		{
			col1Good[i] = col1[i];
			cout << col1Good[i];
		}
		cout << endl;
	}
	cout << "Find the corresponding number to the right\n";
	cout << "in the second row, and mark them respectively.\n";
	for (int i = 0; i < COL; ++i)
	{
		cout << col1[i] << "    " << col2[i] ;
		cout << endl;
	}
	while (getchar() != '\n');
	cout << "Find any odd numbers in the first column, and mark them.\n";
	for (int i = 0; i < COL; ++i)
	{
		cout << col1[i] << "    " << col2[i] ;
		cout << endl;
	}
	//FUNCTION TO FIND ODD NUMBERS
	
	for (int i = 0; i< COL;++i)
	{
		if ((col1[i]%2) == 1)
		{
			col1Good[i] = col1[i];
			cout << col1Good[i];//interesting side-effect
		}
		cout << endl;
	}
	int col2Good[COL] = {0,0,0,0,0,0,0};
	for (int i = 0; i< COL;++i)
	{
		if ((col1Good[i]) != 0)
		{
			col2Good[i] = col2[i];
			cout << col2Good[i];
		}
		cout << endl;
	}
	cout << "Finally, write out the hilighted numbers in the second row,\n";
	cout << "and add them together.\n" << endl;;
	while (getchar() != '\n');
	//ADD INDEXES OF THE GOOD ARRAY
	int answer = 0;
	for (int i = 0; i<COL; ++i)
	{
		answer = (col2Good[i] + answer);
	}
	cout << "Thats it! The sum of the 'good' numbers from the second row\n";
	cout << "equal the product of the two original numbers that you and I have made up!\n";
	cout << "Our Final answer is " << answer << "!!!" << endl;
	while (getchar() != '\n');
}


