//Honor Pledge:
//
//I pledge that I have neither given nor received any help
//on this assignment.

#ifndef _ARRAY_BASE_H_
#define _ARRAY_BASE_H_

#include <cstring>

template <typename T>
class Array_Base
{
public:
  
  typedef T type;

  virtual const Array_Base & operator = (const Array_Base & rhs)=0;
  
  virtual size_t size (void) const=0;

  virtual void set_size (size_t n)=0;

  virtual void max_size (void) const=0;

  virtual void set_max_size (size_t n)=0;

  virtual T & operator [] (size_t index)=0;

  virtual const T & operator [](size_t index)const =0;

  virtual T get(size_t index) const=0;

  virtual void set(size_t index, T value)=0;

  virtual int find(T element)const =0;

  virtual int find(T element,size_t start)const =0;

  virtual bool operator ==(const Array_Base & rhs) const=0;

  virtual bool operator !=(const Array_Base & rhs) const=0;

  virtual void fill (T element)=0;
protected:

  T*data_;

  size_t cur_size_;

  size_t max_size_;
};
#endif
