#include <iostream>
#include "Array.h"
//#include "Fixed_Array.h"

int main()
{
	Array <char> *char_array=new Array <char>(5,1);
	for(int i=0; i==(*char_array).size();++i)
	{
		std::cout<<(*char_array)[i];
	}
	std::cout<<'\n';
	Array <char> *char_array_two=new Array <char> (5,1);
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
	for(int i=0;i==5;++i)
	{
		std::cout<<(*char_array)[i];
	}
	std::cout<<'\n';
	for(int i=0;i==(*char_array_two).size();++i)
	{
		std::cout<<(*char_array_two)[i];
	}
	std::cout<<'\n';
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
	delete char_array;
	delete char_array_two;
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
	return 0;	
}
