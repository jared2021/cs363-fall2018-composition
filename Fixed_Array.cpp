// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
{
	Array <T>();	
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
{
	Array <T>(const Array & array);
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
{
	Array <T>(size_t <M>);		
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
	Array <T>(size_t <N>, T fill); 
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	Array <T>::~Array(void);	
}

//
// operator =
//
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
//
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
template <typename T>
void Fixed_Array <typename T, size_t N>::resize (size_t new_size)
{
	return -1;
}
