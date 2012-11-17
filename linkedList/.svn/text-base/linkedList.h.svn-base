/*########################################################
 *  Class definition file - linkedlist.h
 *
 *  Programmed By: Monisha Pulimood for use in CSC 260
 *  Description: Program that illustrates Linked Lists
 * 
 *########################################################*/


#include <iostream>
using namespace std;

// Structure that stores data of type integer.
struct Node 
{
	int data;
	Node *nextPtr;
};

typedef Node *nodePtr;



/* ################################################################
 *
 * The class has the following methods:
 *
 * LinkedList()
 *        default constructor that creates an empty list
 *
 * addElement(int)
 *   Parameters: item, integer, data to be inserted into the list
 *   Precondition: Object is a valid list
 *   Postcondition: item is inserted into the list - list remains in sorted order
 *
 * removeElement(int)
 *   Parameters: none
 *   Precondition: List is not empty
 *   Postcondition: specified item is removed from the list if found 
 *                  - list remains in sorted order
 *
 * isEmpty()
 *   Parameters: none
 *   Postcondition: return true if list is empty, false otherwise
 * 
 * clearList()
 *   Parameters: none
 *   Postcondition: return empty list
 *
 * overloaded operator << () - friend function
 *   Parameters: outStr, ostream, output stream
 *               rhs, LinkedList object
 *   Precondition: List is not empty
 *   Postcondition: items in the list are displayed on the screen
 *
 * ################################################################ */


class LinkedList
{
private:
	nodePtr headPtr;
	
public:
	LinkedList();
	void addElement (int);
	void removeElement (int);
	friend ostream& operator << (ostream&, LinkedList&);
    // add other methods needed for safe memory management
};
