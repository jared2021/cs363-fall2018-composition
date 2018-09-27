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
	if((*myArray).size()!=(*myArray).max_size())
	{
		(*this->myArray).data_[(*this->myArray).cur_size_]=element;
		(*this->myArray).cur_size_=(*this->myArray).size()+1;
	}
	else
	{
		throw std::out_of_range("Stack is full cannot push any more.");
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
	else
	{
		throw std::out_of_range("No items in stack to pop.");
	}
}
//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	if(this==&rhs)
	{
		return *this;
	}
	else
	{
		for(int i=0;i<(*myArray).cur_size_;++i)
		{
			(*myArray).data_[i]=(rhs).data_[i];
		}
		return *this;
	}
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
	(*myArray).cur_size_=0;
}
