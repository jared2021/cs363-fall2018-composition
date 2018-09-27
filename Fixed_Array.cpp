// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Array.h"
//
// Fixed_Array
//Default constructor
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
:cur_size_(0),	
 max_size_(0)
{
	T *data_=new T [max_size_];
}

//
// Fixed_Array
/**
 * Copy constructor
 *
 * @param[in]	arr	Source array
 */
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
:cur_size_((arr).size()),
 max_size_((arr).max_size())
{
	T *data_=new T [max_size_];
	for(int i=0;i<cur_size_;++i)
	{
		data_[i]=(arr).data_[i];
	}
}

//
// Fixed_Array
/**
 * Initializing constructor. The source array can be of any size
 * as long as they are of the same type.
 *
 * @param[in]	arr 	Source array
 */
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
:cur_size_((arr).size()),
 max_size_((arr).max_size())
{
	T *data_=new T [max_size_];
	for(int i=0;i<cur_size_;++i)
	{
		data_[i]=(arr).data_[i];
	}
}

//
// Fixed_Array
/**
 * Initializing constructor. Fills the contents of the
 * array with the specified \a fill value.
 *
 * @param[in]	fill	The file value
 */
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
:cur_size_(N)
 max_size_(N)
{
	T *data_=new T [max_size_];
	for(int i=0;i<cur_size_;++i)
	{
		data_[i]=fill;
	}
}

//
// ~Fixed_Array
//Destructor
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	delete data_;
}

//
// operator =
/**
 * Assignment operator
 *
 * @param[in]	rhs	Right-hand side of operator.
 */
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
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
// operator =
/**
 * Assignment operator
 *
 * @param[in]	rhs	Right-hand side of operator.
 */
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
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
template <typename T, size_t N>
void Fixed_Array <typename T, size_t N>::resize (size_t new_size)
{
	return -1;
}
