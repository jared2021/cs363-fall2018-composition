#include <iostream>
#include "Array.h"
#include "Fixed_Array.h"
#include "Stack.h"
//#include "Queue.h"
int main()
{
	Array <int> *char_array=new Array <int>(5,1);
	for(int i=0; i<(*char_array).size();++i)
	{
		std::cout<<(*char_array)[i];
	}
	std::cout<<'\n';
	Array <int> *copy_array=new Array <int>(*char_array);
	for (int i=0; i<(*copy_array).size();++i)
	{
		std::cout<<(*copy_array)[i];
	}
	std::cout<<'\n';
	if(char_array==copy_array)
	{
		std::cout<<"These arrays are equal."<<'\n';
	}
	else if(char_array!=copy_array)
	{
		std::cout<<"There is something wrong here."<<'\n';
	}
	Fixed_Array <int,5> *fixed_array= new Fixed_Array <int,5>(5);
	Stack <int> *stack= new Stack <int> ();
	Queue <int> *queue= new Queue <int> ();
	delete char_array;
	delete copy_array;
	delete fixed_array;
	delete stack;
	delete queue;
	return 0;	
}
