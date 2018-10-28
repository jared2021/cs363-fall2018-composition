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
	Queue <int> *queue= new Queue <int> ();
	(*queue).enqueue(5);
	std::cout<<"Enqueued a 5.";
	(*queue).print();
	(*queue).dequeue();
	std::cout<<"Dequeued a 5";
	(*queue).print();
	if((*queue).is_empty())
	{
		std::cout<<"Queue is empty."<<'\n';
	}
	(*queue).enqueue(4);
	(*queue).enqueue(3);
	(*queue).print();
	(*queue).clear();
	(*queue).print();
	Queue <int> *test_queue= new Queue <int> ();
	(*test_queue)=(*queue);
	(*test_queue).print();
	delete queue;

	std::cout<<"Test two";
	Stack <int> *test_stack= new Stack <int> ();
	(*test_stack).push(5);
	(*test_stack).push(4);
	(*test_stack).push(3);
	(*test_stack).push(2);
	(*test_stack).push(1);
	(*test_stack).print();
	int a=(*test_stack).pop();
	std::cout<<a<<'\n';
	(*test_stack).print();
	return 0;	
}
