// $Id: ``Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
:myArray(new Array<T>)
{
		
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
:myArray(new Array<T> (*stack.myArray))
{

}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
	delete (*myArray);
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	if((*myArray).cur_size_!=(*myArray).max_size)
	{
		(*myArray).data[(*myArray).cur_size_]=element;
		(*myArray).cur_size_=(*myArray).cur_size_+1;
	}
	else
	{
		
	}
}
//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if((*myArray).cur_size_!=0)
	{
		(*myArray).cur_size_=(*myArray).cur_size_-1;
	}
}
//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{

}
