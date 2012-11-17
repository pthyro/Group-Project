//  LinkedListDriver.cpp
//  Driver program to test the implementation of the LinkedList class
//  To demonstrate dynamic memory management
//  Programmed by: Dr. Monisha Pulimood
//  Modified by:

//  ** Add your maintenance documentation as appropriate **

#include <iostream>
#include <fstream>
#include "LinkedList.h"

using namespace std;

bool inputFmFile (LinkedList &);

int main(void)
{
	
    LinkedList list1, list2, list3;
	
	cout << "Enter data for the first list. " << endl;
	
	if (inputFmFile(list1)) 
		cout << "The data in the first list is: " << endl << list1 << endl;
	else 
		cout << "Error reading data from file." << endl;
	
	cout << "Enter data for the second list. " << endl;
	if (inputFmFile(list2)) 
		cout << "The data in the second list is: " << endl << list2 << endl;
	else 
		cout << "Error reading data from file." << endl;
		
	list3 = list1;
	cout << "After list3 = list1, list3 is: " << endl << list3 << endl;
	cout << "After list3 = list1, list1 is: " << endl << list1 << endl;

	list3 = list1.merge(list2);
	cout << "The result of merging list1 and list2 is: " << endl << list3 << endl;

	list2 = list2;
	cout << "After list2 = list2, list2 is: " << endl << list2 << endl;
	
	
	LinkedList list4 (list1);
	cout << "list4 created as a copy of list1 is: " << endl 
	<< list4 << endl;
	

	// DO: Add a few lines to test that removeElement() works.
	//     Be sure to test by removing at least one element from the front, 
	//     one from the middle, one from the end, one that is not in the list,
	//     and one from an empty list.
	
	cout << endl;
	cout << "Exiting program." << endl;
	return 0;
}


bool inputFmFile (LinkedList &inputList)
{
	bool worked = true;
	string inFileName;
	ifstream inStr;
	int element = 0;
	
	do 
	{
		cout << "Enter name of file to read from: ";
		cin >> inFileName;
		
		inStr.open (inFileName.c_str());
		if (inStr.fail())
		{
			cerr << "Error opening file. Try again." << endl;
			inStr.clear();
			inStr.ignore(80, '\n');
			worked = false;
		}
		else 
			worked = true;
		
	} while (!worked);
	
	while (!inStr.eof())
	{
		inStr >> element;
		inputList.addElement(element);
	}
	
	inStr.close();
	return worked;
}
