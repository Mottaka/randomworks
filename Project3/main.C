#include "xArray.h"


int main() {

    int* tmp = new int[40];
    for (int i = 0; i < 40; i++) tmp[i] = i;

    xArray a;
    // uncomment the following lines one by one once you have implemented the
    // functionality.

   xArray d(tmp, 40);
   // cout << "First d: " << d << endl;
    
   // xArray b(10);
   // xArray c(d);
   // cout << "First c: " << c << endl;

   a = 0;
   for (int i = 0; i < 10; i++) a += i;
   cout << "First a: " << a << endl;
    
   // b = a;
   // cout << "First b: " << b << endl;

   // d = b;
   // cout << "Second d:" << d << endl;

   // b+=a;
   // cout << "Second b:" << b << endl;

   // b+=1000;
   // cout << "Third b: " << b << endl;

   // cout << "The fifth element of b is " << b[4] << endl;

   // b.Clear();

   // cout << "Please input an int: ";
   // cin >> b;
   // cout << "Forth b: " << b << endl;

    delete [] tmp;
    return 0;
}
