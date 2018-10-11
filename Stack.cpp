// $Id: ``Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

// Stack
//
template <typename T>
Stack <T>::Stack (void)
{
		
}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
:myArray(stack.myArray)
{
	
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
		
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
  // COMMENT The stack should be allowed to grow if no more space.
  // RESPONSE Stack can now grow if it has no more space.

	if((myArray).size()!=(myArray).max_size())
	{
		(myArray).set((myArray).size(),element);
		(myArray).set_size((myArray).size()+1);
	}
	else if ((myArray).size()==(myArray).max_size())
	{
		(myArray).resize((myArray).max_size()+1);
		(myArray).set((myArray).size(),element);
		(myArray).set_size((myArray).size()+1);
	}
}
//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if((myArray).size()!=0)
	{
		(myArray).set_size((myArray).size()-1);
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
		for(int i=0;i<(myArray).cur_size_;++i)
		{
			(myArray).data_[i]=(rhs).data_[i];
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
	(myArray).cur_size_=0;
}
