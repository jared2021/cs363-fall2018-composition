// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//
// Fixed_Array
//Default constructor
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
:Array_Base<T>()
{

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
:Array_Base<T>(arr)
{
	for(int i=0;i<(*this).cur_size_;++i)
	{
		(*this).data_[i]=(arr).data_[i];
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
:Array_Base<T>(N,fill)
{

}
//
// ~Fixed_Array
//Destructor
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	
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
		for(int i=0;i<(*this).cur_size_;++i)
		{
			(*this).data_[i]=(rhs).data_[i];
		}
		return *this;
	}
}

