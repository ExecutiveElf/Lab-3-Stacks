/* Benjamin Roe
 C++ Fall 2019
 Due 2/28/2020
 Lab 2 Stacks
  A stack is an abstract data type in which elements are added
  and removed from only one end; a “last in, first out” structure.
  This stack must be implemented as a linked structure (ie using pointers).  
*/

#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack list; //Constructs the stack.
	list.Push(1); //Puts "1" on top of the stack.
	list.Push(2); //Puts "2" on top of the stack.
	list.Push(3); //Puts "3" on top of the stack.
	cout << list.Top() << endl; //Displays the top of the stack, in this case, 3.
	list.Pop(); //Removes the top of the stack, 3 in this case.
	cout << list.Top() << endl; //Displays the top of the stack, in this case, 2.
	cout << list.IsFull() << endl; //Checks if the stack is full. It isn't.
	list.~Stack(); //Empties the stack to deconstruct it.
	cout << list.IsEmpty(); //Checks if the stack is empty. It is.
	return 0;
}