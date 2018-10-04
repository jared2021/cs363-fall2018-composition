#include <iostream>
#include "Array.h"
//#include "Fixed_Array.h"
//#include "Stack.h"
//#include "Queue.h"
int main()
{
	Array <char> *char_array=new Array <char>(5,'1');
	//for(int i=0; i==(*char_array).size();++i)
	//{
		//std::cout<<(*char_array)[i];
	//}
	//std::cout<<'\n';
	//Array <char> *char_array_two=new Array <char> (5,'1');
	//for(int i=0;i==(*char_array_two).size();++i)
	//{
		//std::cout<<(*char_array_two)[i];
	//}
	//std::cout<<'\n';
	//if(char_array==char_array_two)
	//{
		//std::cout<<"These arrays are equal."<<'\n';
	//}
	//(*char_array).resize(10);
	//if(char_array==char_array_two)
	//{
		//std::cout<<"These arrays are equal."<<'\n';
	//}
	//else
	//{
		//std::cout<<"These arrays are not equal."<<'\n';
	//}
	//for(int i=0;i==5;++i)
	//{
		//std::cout<<(*char_array)[i];
	//}
	//std::cout<<'\n';
	//for(int i=0;i==(*char_array_two).size();++i)
	//{
		//std::cout<<(*char_array_two)[i];
	//}
	//std::cout<<'\n';
	//(*char_array_two).resize(10);
	//if(char_array!=char_array_two)
	//{
		//std::cout<<"These arrays are not equal."<<'\n';
	//}
	//else
	//{
		//std::cout<<"These arrays are equal"<<'\n';
	//}
	//std::cout<<(*char_array).find(0)<<'\n';
	delete char_array;
	//delete char_array_two;
	//Array <int> *one= new Array <int> ();
	//Array <int> *two= new Array <int> ();
	//if(one==two)
	//{
		//std::cout<<"These arrays are equal."<<'\n';
	//}
	//(*one).resize(1);
	//if(one!=two)
	//{
		//std::cout<<"These arrays are not equal."<<'\n';
	//}
	//(*two).resize(1);
	//if(one==two)
	//{
		//std::cout<<"These arrays are equal."<<'\n';
	//}
	//Fixed_Array <int, 5> *f_array= new Fixed_Array <int, 5>();
	//Fixed_Array <int, 5> *c_array= new Fixed_Array <int, 5>(5);
	//f_array=c_array;
	//for (int i=0; i<(*f_array).size();++i)
	//{
		//std::cout<<(*f_array)[i];
	//}
	//std::cout<<'\n';
	//for (int i=0;i<(*c_array).size();++i)
	//{
		//std::cout<<(*c_array)[i];
	//}
	//std::cout<<'\n';
	//Fixed_Array <int, 5> *copy_array= new Fixed_Array<int, 5>(*c_array);
	//for(int i=0;i<(*copy_array).size();++i)
	//{
		//std::cout<<(*copy_array)[i];
	//}
	//std::cout<<'\n';
	//delete f_array;
	//delete c_array;
	//delete copy_array;
	//Stack <int> *myStack= new Stack <int>();
	//(*myStack).pop();
	//(*myStack).push(5);
	//Stack <int> *copyStack= new Stack<int>(*myStack);
	//for(int i=0;i<(*myStack->myArray).size();++i)
	//{
		//std::cout<<(*myStack->myArray)[i];
	//}
	//std::cout<<'\n';
	//for(int i=0;i<(*copyStack->myArray).size();++i)
	//{
		//std::cout<<(*copyStack->myArray)[i];
	//}
	//std::cout<<'\n';
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//(*copyStack).push(5);
	//delete myStack;
	//delete copyStack;
	//for(int i=0;i<(*copyStack).size();++i)
	//{
		//std::cout<<(*copyStack->myArray)[i];
	//}
	//Queue <int> *myQueue= new Queue <int>();
	//(*myQueue).enqueue(5);
	//Queue <int> *copyQueue= new Queue<int>(*myQueue);
	//for(int i=0;i<(*copyQueue->myArray).size();++i)
	//{
		//std::cout<<(*copyQueue->myArray)[i]<<'\n';
	//}
	//(*copyQueue).dequeue();
	//if((*copyQueue).is_empty()==true)
	//{
		//std::cout<<"Something is wrong"<<'\n';
	//}
	//(*copyQueue).enqueue(5);
	//(*copyQueue).enqueue(5);
	//std::cout<<(*copyQueue).size()<<'\n';
	//(*copyQueue).clear();
	//for(int i=0;i<(*copyQueue->myArray).size();++i)
	//{
		//std::cout<<(*copyQueue->myArray)[i]<<'\n';
	//}
	//(*copyQueue).enqueue(0);
	//(*copyQueue).dequeue();
	//(*copyQueue).enqueue(1);
	//(*copyQueue).enqueue(2);
	//(*copyQueue).enqueue(3);
	//(*copyQueue).enqueue(4);
	//(*copyQueue).enqueue(5);
	//(*copyQueue).enqueue(6);
	//(*copyQueue).enqueue(7);
	//(*copyQueue).enqueue(8);
	//(*copyQueue).enqueue(9);
	//(*copyQueue).enqueue(0);
	//for(int i=0;i<(*copyQueue->myArray).size();++i)
	//{
		//std::cout<<(*copyQueue->myArray)[i];
	//}
	//delete myQueue;
	//delete copyQueue;
	return 0;	
}
