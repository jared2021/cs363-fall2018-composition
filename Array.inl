// -*- C++ -*-
// $Id: Array.inl 828 2011-02-07 14:21:52Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Array <T>::size (void) const
{
	return cur_size_;
}
template <typename T>
inline
void Array <T>::set_size (size_t n)
{
	cur_size_=n;
}
//
// max_size
//
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
	return max_size_;
}
template <typename T>
inline
void Array <T>::set_max_size (size_t n)
{
	max_size_=n;
}
template <typename T>
inline 
void Array <T>::delete_data_ ()
{
        delete data_;
}
