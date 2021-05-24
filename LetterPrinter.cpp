#include <iostream>
#include <string>
using namespace std;

void tab(string Word) {
	cout << Word;

	for (int i = 0; i < 20-Word.length(); i++)
	{
		cout << " ";
	}
}

void tab(char Word) {
	cout << Word;

	for (int i = 0; i < 19; i++)
	{
		cout << " ";
	}
}

void tab(int IntWord) {
	string Word = to_string(IntWord);
	cout << Word;
	for (int i = 0; i < 20 - Word.length(); i++)
	{
		cout << " ";
	}
}

int main()
{
	cout << "Massive CharMap!" << endl;
	char PrintingValue = 25;
	for (int Identifier = 0; Identifier < 256; Identifier++)
	{
		//assigning values
		PrintingValue = Identifier;

		//Printing
		tab(Identifier); cout << "|"; tab(PrintingValue); cout << "|" << endl;
	}
	
	tab("Hello there");

	cout << "s";

	return 0;
}