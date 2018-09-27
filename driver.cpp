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
//	Fixed_Array <char> *char_fixed_array= new Array <char> (5);
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
	return 0;	
}
