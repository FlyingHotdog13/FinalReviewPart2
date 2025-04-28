#pragma once
#include <fstream>
#include <iostream>
using namespace std;

class FileCreator
{
private:
	ofstream MyFile;
public:
	FileCreator(string);
	void FileWrite(string, double, double, double);
	void HeaderWrite();
	void CloseFile();

};