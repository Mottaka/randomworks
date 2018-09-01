#ifndef XARRAY_H_
#define XARRAY_H_

#include <stddef.h>
#include <memory.h>
#include <iostream>
using namespace std;

class xArray{                 
  size_t len;                  
  size_t arraySize; 

  //data of int array
  int* data;                 
public:
  // Constructors
  xArray();                   
  xArray(const xArray& a);   
  xArray(const int x);//create an array with x elements

  //copy constructor to get n integer from an C style array, 
  //n is assumed to be < the length of of that array
  xArray(const int * a, size_t n); 

  // Destructor
  ~xArray();                   

  // Assignment and modification operators
  xArray& operator=(const xArray& right); 

  //make the array hold only one integer
  xArray& operator=(const int c); 

  //merge two arrays, append all elements from right to the end of this
  xArray& operator+=(const xArray& right); 

  //add c to the end of this array
  xArray& operator+=(const int c); 

  // Put an int at the end of data, can be used by operators "+=", ">>" 
  size_t PushBack(const int c);

  // set len to 0, i.e. the array is cleared
  void Clear(void);             
                 
  // index operator, if idx over bound, print message and quit
  int operator[](size_t idx) const;

  //get the length of the xArray& 
  size_t Length() const { return len; } 

  //overloaded << operator, print all elements of the array. A line can at most
  //hold 20 elements
  friend ostream& operator<<(ostream& out, const xArray& a);

  //>> operator, get one int and put it at the end of the array
  friend istream& operator>>(istream& in, xArray& a);

};

#endif
