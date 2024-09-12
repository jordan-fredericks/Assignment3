
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
	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS] = {
		{ "Dune", "Unknown", 0, 0 },
		{ "Reboot", "Amy Tintera", 2013, 365 },
		{ "The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 1979, 216 },
		{ "Ender's Game", "Orson Scott Card", 1985, 324 }
	};

	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << i + 1 << ". " << books[i].Title << "\n";
		cout << "Author: " << books[i].Author << "\n";
		cout << "Year Published: " << books[i].YearPublished << "\n";
		cout << "Number of Pages: " << books[i].NumPages << "\n\n";
	}

	(void)_getch();
	return 0;
}
