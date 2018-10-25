#include <iostream>
#include "Stack.h"
#include "Queue.h"
int main()
{
	Stack <int> *stack= new Stack <int> ();
	(*stack).push(5);
	std::cout<<"Pushing a 5 onto the stack."<<'\n';
	(*stack).print();
	Stack <int> *copy_stack= new Stack <int>(*stack);
	(*copy_stack).print();
	std::cout<<"Stack copy worked."<<'\n';
	(*stack).pop();
	std::cout<<"Popped off the Stack.";
	(*stack).print();
	(*stack)=(*copy_stack);
	std::cout<<"Stack and Copy Stack same now.";
	(*stack).print();
	(*stack).clear();
	std::cout<<"Cleared Stack.";
	(*stack).print();
	delete stack;
	delete copy_stack;
	return 0;	
}
