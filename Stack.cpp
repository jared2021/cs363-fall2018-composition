// $Id: ``Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

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
	delete myArray;		
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	if((*this->myArray).size()!=(*this->myArray).max_size())
	{
		(*myArray).set((*this->myArray).size(),element);
		(*myArray).set_size((*this->myArray).size()+1);
	}
	else if ((*this->myArray).size()==(*this->myArray).max_size())
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
	if((*this->myArray).size()!=0)
	{
		(*this->myArray).set_size((*this->myArray).size()-1);
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
		for(int i=0;i<(*this->myArray).cur_size_;++i)
		{
			(*this->myArray).data_[i]=(rhs).data_[i];
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
	(*this->myArray).cur_size_=0;
}
