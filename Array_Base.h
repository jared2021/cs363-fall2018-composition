//Honor Pledge:
//
//I pledge that I have neither given nor received any help
//on this assignment.

#ifndef _ARRAY_BASE_H_
#define _ARRAY_BASE_H_

#include <cstring>

class Array_Base
{
public:
  
  virtual const Array_Base & operator = (const Array_Base & rhs)=0;
  
  virtual size_t size (void) const=0;

  virtual void set_size (size_t n)=0;

  virtual void max_size (void) const=0;

  virtual void set_max_size (size_t n)=0;

  virtual bool operator ==(const Array_Base & rhs) const=0;

  virtual bool operator !=(const Array_Base & rhs) const=0;
};
#endif
