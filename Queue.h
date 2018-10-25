/**Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */

#ifndef _QUEQUE_H_
#define _QUEQUE_H



template <typename T>
class Queue
{
public:
  ////Type definition of the type.
  typedef T type;
  
  /// Default constructor.
  Queue (void);

  /// Copy constructor.
  Queue (const Queue & q);

  /// Destructor.
  ~Queue (void);

  /**
   * Assignment operator 
   *
   * @param[in]		rhs 		Right-hand side of operator
   * @return 		Reference to self
   */
  const Queue & operator = (const Queue & rhs);

  /**
   * Adds an element to the end of the list.
   *
   * @param[in]		element		Element to add to the end of the list.
   */
  void enqueue (T element);

  /**
   *Removes the element at the front of the list.
   *If there are not elements in the queue,
   *this method throws empty_esception, similar to stack.
   */
  T dequeue();

  /**
   * tests if the queue is empty. If the queue is empty,
   * then this method returns true. Otherwise, it returns false.
   */
  bool is_empty();

  /**
   * returns the number of elements in the queue
   */
  size_t size();

  /**
   * removes all elements from the queue
   */
  void clear();

  void print(void);

  // COMMENT This variable should be in your private section.
  // RESPONSE myArray now in private section.

  // COMMENT There is no need to allocate the array on the heap. Always try to
  // allocate on the stack to reduce the complexity of your code.
  // RESPONSE Array is now located on the stack. 

private:

  Array<T> myArray;

  int first_;

  int last_;

  int size_;
};

#include "Queue.cpp"

#endif
