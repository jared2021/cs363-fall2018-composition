//Honor Pledge:
//
//I pledge that I have neither given nor received any help
//on this assignment.


template <typename T>
Queue <T>::Queue (void)
:first_ (0),
 last_ (0),
 size_ (0)
{

}


template <typename T>
Queue <T>::Queue (const Queue & queue)
:myArray(queue.myArray),
 first_ ((queue).first_),
 last_ ((queue).last_),
 size_ ((queue).size_)
{

}


template <typename T>
Queue <T>::~Queue (void)
{
		
}


template <typename T>
void Queue <T>:: enqueue (T element)
{
  // COMMENT The queue should grow if it out of space.
  // RESPONSE queue now grows if it runs out of space.
	if(last_==(myArray).max_size()-1&&first_==0)
	{
		(myArray).resize((size_+2));
		(myArray).set(last_%(myArray).max_size(),element);
		last_=last_+1;
		size_=size_+1;
	}
	else if(last_==first_-1)
	{
		(myArray).resize((size_+2));
		last_=size_-1;
		(myArray).set(last_%(myArray).max_size(),element);
		last_=last_+1;
		size_=size_+1;
	}
  
  // COMMENT You could use the % operator to simplify your indexing algorithm.
  // RESPONSE Added % to simplify indexing algorithm. 
	else
	{
		(myArray).set(last_%(myArray).max_size(),element);
		last_=last_+1;
		size_=size_+1;
		(myArray).set_size((myArray).size()+1);
	}
}


template <typename T>
T Queue <T>:: dequeue()
{
	if((myArray).size()!=0)
	{
		(myArray).set_size((myArray).size()-1);
		size_=size_-1;
		first_=first_+1;
		return (myArray)[(myArray).size()];
	}
	else
	{
		std::out_of_range("This queue is empty.");
	}
}


template <typename T>
bool Queue <T>::is_empty()
{
	if((myArray).size()==0)
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
	return (myArray).size();
}


template <typename T>
void Queue <T>::clear()
{
	(myArray).set_size(0);
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
		for(int i=0;i<(myArray).cur_size_;++i)
		{
			(myArray).data_[i]=(rhs).data_[i];
		}
		return *this;
	}
}
