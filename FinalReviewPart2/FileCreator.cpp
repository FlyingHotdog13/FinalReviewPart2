#include "FileCreator.h"
FileCreator::FileCreator(string f)
{
	this->MyFile.open(f);

}
void FileCreator::FileWrite(string n, double tp, double ttax, double stax)
{
	this->MyFile << n << "," << tp << "," << ttax << "," << stax << endl;
}
void FileCreator::HeaderWrite()
{
	this->MyFile << "Product, TotalPrice, TotalTax, SalesTax" << endl;

}
void FileCreator::CloseFile()
{
	this->MyFile.close();
}