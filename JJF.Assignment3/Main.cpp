
// Assignment 3 - Library Book Manager
// Jordan Fredericks

#include <iostream>
#include <conio.h>

using namespace std;

struct Book
{
	string Title;
	string Author;
	int YearPublished;
	int NumPages;
};


int main()
{
	//create the array and add it's values

	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS] = {
		{ "Dune", "Unknown", 0, 0 },
		{ "Reboot", "Amy Tintera", 2013, 365 },
		{ "The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 1979, 216 },
		{ "Ender's Game", "Orson Scott Card", 1985, 324 }
	};

	//Display every book and it's information

	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << i + 1 << ". " << books[i].Title << "\n";
		cout << "Author: " << books[i].Author << "\n";
		cout << "Year Published: " << books[i].YearPublished << "\n";
		cout << "Number of Pages: " << books[i].NumPages << "\n\n";
	}

	//Update the books information

	int ID = 0;
	string tempAuthor;
	int tempYear;
	int tempPage;
	char YN = 'n'; //Yes or no to save changes
	cout << "Enter the ID of the book you would like to update (1-" << NUM_BOOKS << "): ";
	cin >> ID;
	cout << ID << ". " << books[ID - 1].Title << "\n";
	cout << "Enter the Author (" << books[ID - 1].Author << "): ";
	cin >> tempAuthor;
	cout << "Enter the Year Published: (" << books[ID - 1].YearPublished << "): ";
	cin >> tempYear;
	cout << "Enter the Number of Pages: (" << books[ID - 1].NumPages << "): ";
	cin >> tempPage;
	
	//Ensures user enters y or n

	/*while (YN != 'y' || YN != 'n')
	{
		cout << "\nSave these changes? (Y/N): ";
		cin >> YN;
	}*/

	(void)_getch();
	return 0;
}
