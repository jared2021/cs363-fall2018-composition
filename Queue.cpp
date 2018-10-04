//Honor Pledge:
//
//I pledge that I have neither given nor received any help
//on this assignment.


template <typename T>
Queue <T>::Queue (void)
:myArray(new Array<T>),
 first_ (0),
 last_ (0),
 size_ (0)
{

}


template <typename T>
Queue <T>::Queue (const Queue & queue)
:myArray(new Array<T> (*queue.myArray)),
 first_ ((queue).first_),
 last_ ((queue).last_),
 size_ ((queue).size_)
{

}


template <typename T>
Queue <T>::~Queue (void)
:delete (*this_>myArray)
{
	
}


template <typename T>
void Queue <T>:: enqueue (T element)
{
	if(last_==(*this->myArray).max_size()-1&&first_==0)
	{
		std::out_of_range("Queue is full");
	}
	else if(last_==first_-1)
	{
		std::out_of_range("Queue is full");
	}
	else if(last_==(*this->myArray).max_size()-1&&first_!=0)
	{
		(*this->myArray).set(0,element);
		last_=0;
		size_=size_+1;
		(*this->myArray).set_size((*this->myArray).size()+1);
	}
	else
	{
		(*this->myArray).set(last_,element);
		last_=last_+1;
		size_=size_+1;
		(*this->myArray).set_size((*this->myArray).size()+1);
	}
}


template <typename T>
T Queue <T>:: dequeue()
{
	if((*this->myArray).size()!=0)
	{
		return (*this->myArray).get(first_);
		(*this->myArray).set_size((*this->myArray).size()-1);
		size_=size_-1;
		first_=first_+1;
		//return (*this->myArray)[(*this->myArray).size()];
	}
	else
	{
		std::out_of_range("This queue is empty.");
	}
}


template <typename T>
bool Queue <T>::is_empty()
{
	if((*this->myArray).size()==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


template <typename T>
size_t Queue <T>::size()
{
	return (*this->myArray).size();
}


template <typename T>
void Queue <T>::clear()
{
	(*this->myArray).set_size(0);
	size_=0;
	first_=0;
	last_=0;
}


template <typename T>
const Queue<T> & Queue <T>::operator = (const Queue & rhs)
{
	if (this==&rhs)
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
