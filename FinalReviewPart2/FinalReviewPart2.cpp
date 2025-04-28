#include <iostream>
#include "FileCreator.h"

int main()
{
	string f;
	string n;
	int tp;
	float ttax;
	float stax;
	cout << "Enter File Name(.csv)==> ";
	cin >> f;
	FileCreator Karma(f);
	Karma.HeaderWrite();
	for (int r = 1; r <= 5; r++)
	{
		cout << "Enter name of Product " << r << " ==> ";
		cin >> n;
		cout << "Enter Totalttax of Product " << r << " ==> ";
		cin >> tp;
		cout << "Enter TotalTax of Product " << r << " ==> ";
		cin >> ttax;
		cout << endl;
		stax = ttax / tp;
		Karma.FileWrite(f, tp, ttax, stax);
	}
	Karma.CloseFile();

}