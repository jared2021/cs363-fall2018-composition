#include <iostream>
#include "Array.h"
#include "Fixed_Array.h"
#include "Stack.h"
int main()
{
	Array <char> *char_array=new Array <char>(5,'1');
	for(int i=0; i==(*char_array).size();++i)
	{
		std::cout<<(*char_array)[i];
	}
	std::cout<<'\n';
	Array <char> *char_array_two=new Array <char> (5,'1');
	for(int i=0;i==(*char_array_two).size();++i)
	{
		std::cout<<(*char_array_two)[i];
	}
	std::cout<<'\n';
	if(char_array==char_array_two)
	{
		std::cout<<"These arrays are equal."<<'\n';
	}
	(*char_array).resize(10);
	if(char_array==char_array_two)
	{
		std::cout<<"These arrays are equal."<<'\n';
	}
	else
	{
		std::cout<<"These arrays are not equal."<<'\n';
	}
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
	(*char_array_two).resize(10);
	if(char_array!=char_array_two)
	{
		std::cout<<"These arrays are not equal."<<'\n';
	}
	else
	{
		std::cout<<"These arrays are equal"<<'\n';
	}
	//std::cout<<(*char_array).find(0)<<'\n';
	//delete char_array;
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
	Fixed_Array <int, 5> *f_array= new Fixed_Array <int, 5>();
	Fixed_Array <int, 5> *c_array= new Fixed_Array <int, 5>(5);
	f_array=c_array;
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
	Fixed_Array <int, 5> *copy_array= new Fixed_Array<int, 5>(*c_array);
	//for(int i=0;i<(*copy_array).size();++i)
	//{
		//std::cout<<(*copy_array)[i];
	//}
	//std::cout<<'\n';
	Stack <int> *myStack= new Stack <int>();
	//(*myStack).pop();
	(*myStack).push(5);
	Stack <int> *copyStack= new Stack<int>(*myStack);
	for(int i=0;i<(*myStack->myArray).size();++i)
	{
		std::cout<<(*myStack->myArray)[i];
	}
	std::cout<<'\n';
	for(int i=0;i<(*copyStack->myArray).size();++i)
	{
		std::cout<<(*copyStack->myArray)[i];
	}
	std::cout<<'\n';
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	(*copyStack).push(5);
	//for(int i=0;i<(*copyStack).size();++i)
	//{
		//std::cout<<(*copyStack->myArray)[i];
	//}
	return 0;	
}
