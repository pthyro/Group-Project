/*#######################################################
 * Function definition file - linkedlist.cpp
 *
 *  Programmed By: Monisha Pulimood for use in CSC 260
 *  Description: Program that illustrates Linked Lists
 * 
 *#######################################################*/


#include "LinkedList.h"


LinkedList::LinkedList() 
{
	// ensure pointer is initialized to a valid value
	headPtr = NULL;
	
}


//sorted version
void LinkedList::addElement (int item) 
{
    
    // add the code needed to safely add an element to the list, retaining 
    //         in sorted order
    

}


void LinkedList::removeElement (int item) 
{

    // add the code needed to safely remove an element from the list, retaining 
    //         in sorted order
    

}



ostream& operator << (ostream& outStr, LinkedList& rhs)
{
	nodePtr tmpPtr = rhs.headPtr;
	outStr << endl;
	if (rhs.isEmpty())
		outStr << "Sorry, the list is empty. Add some elements and then try again." << endl;
	else
		while (tmpPtr != NULL) 
		{
			outStr << tmpPtr->data << " " << endl;
			tmpPtr = tmpPtr->nextPtr;
		}
	return outStr;
}



