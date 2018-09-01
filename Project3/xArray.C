#include <stdlib.h>
#include <stddef.h>
#include <memory.h>
#include <iostream>
#include "xArray.h"
using namespace std;

  // Constructors
   xArray::xArray() {
   len = 0;
   data = new int[10];
   arraySize = 10;

   xArray();
   xArray(const xArray& a);
   xArray(const int x);

   xArray(const int * a, size_t n);

}
  // Destructor
   xArray::~xArray() {

    ~xArray();
   
    xArray& operator=(const xArray& right);

    xArray& operator=(const int c);

    xArray& operator+=(const xArray& right);

    xArray& operator+=(const int c);

    size_t PushBack(const int c);
    
    void Clear(void);

    int operator[](size_t idx) const;

    size_t Length() const { return len; }

    ostream& operator<<(ostream& out, const xArray& a){

    return a
 }

    istream& operator>>(istream& in, xArray& a){
    
    }   
    delete [] data;
}
