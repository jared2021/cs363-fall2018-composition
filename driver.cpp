#include <iostream>
#include "Stack.h"
#include "Queue.h"
int main()
{
	Array <int> test_array(5,1);
	for(int i=0; i<(test_array).size();++i)
	{
		std::cout<<test_array[i];
	}
	std::cout<<'\n';
	Array <int> *int_array=new Array <int>(5,1);
	std::cout<<(*int_array).size()<<'\n';
	for(int i=0; i<(*int_array).size();++i)
	{
		std::cout<<(*int_array)[i];
	}
	std::cout<<'\n';
	Array <int> *copy_array=new Array <int>(*int_array);
	for (int i=0; i<(*copy_array).size();++i)
	{
		std::cout<<(*copy_array)[i];
	}
	std::cout<<'\n';
	if(int_array==copy_array)
	{
		std::cout<<"These arrays are equal."<<'\n';
	}
	else if(int_array!=copy_array)
	{
		std::cout<<"There is something wrong here."<<'\n';
	}
	Stack <int> *stack= new Stack <int> ();
	(*stack).push(5);
	std::cout<<"Pushing a 5 onto the stack."<<'\n';
	//for(int i=0;i<(*stack->myArray).size();++i)
	//{
		//std::cout<<(*stack->myArray).get(i);
	//}
	std::cout<<'\n';
	Stack <int> *copy_stack= new Stack <int>(*stack);
	//for (int i=0; i<(*copy_stack->myArray).size();++i)
	//{
		//std::cout<<(*copy_stack->myArray).get(i);
	//}
	std::cout<<"Stack copy worked."<<'\n';
	(*stack).pop();
	Queue <int> *queue= new Queue <int> ();
	(*queue).enqueue(5);
	//for(int i=0;i<(*queue).size();++i)
	//{
		//std::cout<<(*queue).get(i);
	//}
	Queue <int> *copy_queue= new Queue <int> (*queue);
	//for (int i=0;i<(*copy_queue).size();++i)
	//{
		//std::cout<<(*copy_queue->myArray).get(i);
	//}
	std::cout<<"Queue copy worked."<<'\n';
	(*queue).dequeue();
	(*queue).enqueue(4);
	//for(int i=0;i<(*queue).size();++i)
	//{
		//std::cout<<(*queue->myArray).get(i);
	//}
	std::cout<<"Enqueue worked."<<'\n';
	delete int_array;
	delete copy_array;
	delete stack;
	delete copy_stack;
	delete queue;
	delete copy_queue;
	return 0;	
}
