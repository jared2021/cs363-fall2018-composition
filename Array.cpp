// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>
//
// Array
//
template <typename T>
Array <T>::Array (void)
:data_(new T[max_size_]),
 cur_size_(0),
 max_size_(10)
{
	
}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
:data_(new T[length]),
 cur_size_(0),
 max_size_(length)
{

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
:data_(new T[length]),
 cur_size_(length),
 max_size_(length)
{
	for(int i=0;i<cur_size_;++i)
	{
		data_[i]=fill;
	}
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
:cur_size_((array).size()),
 max_size_((array).max_size()),
 data_(new T[max_size_])
{
	for(int i=0;i<cur_size_;++i)
	{
		data_[i]=(array).data_[i];
	}
}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
	delete data_;
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
	if(this==&rhs)
	{
		return *this;
	}
	else
	{
		for(int i=0;i<cur_size_;++i)
		{
			data_[i]=(rhs).data_[i];
		}
		return *this;
	}
}

//
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index)
{
	if(index>max_size_)
	{
		throw std::out_of_range("That index is bigger than the array itself.");
	}
	else
	{
		return data_[index];
	}
}

//
// operator [] 
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
	if(index>max_size_)
	{
		throw std::out_of_range("That index is bigger than the array itself.");
	}
	else
	{
		return data_[index];
	}
}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const
{
	if(index>max_size_)
	{
		throw std::out_of_range("That index is bigger than the array itself.");
	}
	else
	{
		return data_[index];
	}
}

//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value)
{
	if(index>max_size_)
	{
		throw std::out_of_range("That index is bigger than the array itself.");
	}
	else
	{
		data_[index]=value;
	}
}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
	if(new_size>max_size_)
	{
		std::cout<<"Resizing array.";
		T *temp= new T [new_size];
		for(int i=0;i<cur_size_;++i)
		{
			temp[i]=data_[i];
		}
		for(int i=0;i<cur_size_;++i)
		{
			std::cout<<temp[i];
		}
		max_size_=new_size;
		T *data_=new T [max_size_];
		for(int i=0;i<max_size_;++i)
		{
			data_[i]=temp[i];
		}
	}
	else
	{
		cur_size_=new_size;
		max_size_=new_size;
	}
}

//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const
{
	bool found=false;
	int i=0;
	while(i<cur_size_)
	{
		if(data_[i]==value)
		{
			return i;
			found=true;
			i=cur_size_;
		}
		else
		{
			i=i+1;
		}
	}
	if(found==false)
	{
		return -1;
	}
}

//
// find (char, size_t) 
//
template <typename T>
int Array <T>::find (T val, size_t start) const
{
	if(start>cur_size_)
	{
		throw std::out_of_range("That index is bigger than the array itself.");
	}
	else
	{
		bool found=false;
		int i=start;
		while(i<cur_size_)
		{
			if(data_[i]==val)
			{
				found=true;
				return i;
				i=cur_size_;
			}
			else
			{
				i=i+1;
			}
		}
		if(found==false)
		{
			return -1;
		}
	}
}

//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
	bool equal=true;
	if(this==&rhs)
	{
		return true;
	}
	else if((data_).cur_size_!=(rhs).cur_size_)
	{
		return false;
	}
	else if(this!=&rhs)
	{
		for(int i=0;i<cur_size_;++i)
		{
		 	if(data_[i]!=(rhs).data_[i])
			{
				equal=false;
				return false;
			}
		}
	}
	if(equal==true)
	{
		return true;
	}
}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{
	return !((*this)==rhs);
}

//
// fill
//
template <typename T>
void Array <T>::fill (T value)
{
	for(int i=0;i<max_size_;++i)
	{
		data_[i]=value;
		cur_size_=max_size_;
	}
}
