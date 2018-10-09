//Honor Pledge:
//
//I pledge that I have neither given nor received any help
//on this assignment.

#ifndef _ARRAY_BASE_H_
#define _ARRAY_BASE_H_

#include <cstring>
#include <stdexcept>

// COMMENT Do not place implementation code directly in the header file.

template<typename T>
class Array_Base
{
public:
	Array_Base(void)
	:data_(new T[max_size_]),
	 cur_size_(0),
	 max_size_(10)
	{

	}

	Array_Base(size_t length)
	:data_(new T[length]),
	 cur_size_(0),
	 max_size_(length)
	{

	}

	Array_Base(size_t length, T fill)
	:data_(new T[length]),
	 cur_size_(length),
	 max_size_(length)
	{
		for(int i=0;i<cur_size_;++i)
		{
			data_[i]=fill;
		}
	}

	Array_Base(const Array_Base & array_base)
	:data_(new T[max_size_]),
	 cur_size_((array_base).size()),
	 max_size_((array_base).max_size())
	{
		for(int i=0;i<cur_size_;++i)
		{
			data_[i]=(array_base).data_[i];
		}
	}

	virtual ~Array_Base(void)
	{
		delete data_;
	}
  
	size_t size (void) const
	{
		return cur_size_;
	}

  	void set_size (size_t n)
	{
		cur_size_=n;
	}

  	size_t max_size (void) const
	{
		return max_size_;
	}

  	void set_max_size (size_t n)
	{
		max_size_=n;
	}
	
	T & get (size_t index)
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

	T & data (size_t index) const
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

	T set (size_t index, T value)
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
	int find (T element)const
	{
		bool found=false;
		int i=0;
		while(i<cur_size_)
		{
			if(data_[i]==element)
			{
				return i;
				found=true;
				i=cur_size_;
			}
			else
			{
				i=i+i;
			}
		}
		if(found==false)
		{
			return -1;
		}
	}

	int find (T element, size_t start)const
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
				if(data_[i]==element)
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
	
	void fill (T value)
	{
		for (int i=0;i<max_size_;++i)
		{
			data_[i]=value;
			cur_size_=max_size_;
		}
	}

protected:
  T* data_;

  size_t cur_size_;

  size_t max_size_;
};
#endif
