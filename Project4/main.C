// main.C -- Driver program to test Project 4.
// Version: rev3.2
// Copyright (c) Philip Conrad, 2016. All rights reserved.
// Licensed under the MIT License.

// HOW TO USE THIS PROGRAM
// Uncomment each "#define OP_XXXXX" declaration below as you implement the
// assignment. This "turns on" each code section.
//
// You will need to implement all 3 constructors and the = and << operators 
// before most of the code will work.

// BUGFIX LOG
// Note: All bugs in this list have been fixed.
// ---------------------------------------------------------------------------
// Bug # | Reporter       | Bug Description
// ---------------------------------------------------------------------------
//  1    | Ethan Harmon   | Copy/paste bug.
//  2    | Ethan Harmon   | Typo in example math for +.
//  3    | Eric Formica   | Typo in assignment operator test case output.
//  4    | Michael Morris | Typo in example math for -.
// ---------------------------------------------------------------------------

// edited by, Ian Osea 27 March, 2016

#include <iostream>
#include "LargeInt.h"

using namespace std;


#define CONSTRUCTOR_DEFAULT
#define CONSTRUCTOR_LONGLONG
#define CONSTRUCTOR_COPY

#define OP_OUTPUT
#define OP_ASSIGN

//#define OP_LE
//#define OP_GE
//#define OP_LT
//#define OP_GT
//#define OP_EQ
//#define OP_NE
//#define OP_NOT

//#define OP_PLUS 
//#define OP_MINUS
//#define OP_PLUSEQ
//#define OP_MINUSEQ
//#define OP_INCR_PRE
//#define OP_DECR_PRE
//#define OP_INCR_POST
//#define OP_DECR_POST



// +--------------------------------------------------------------------+
// | YOU SHOULD NOT NEED TO MODIFY CODE INSIDE THIS PROGRAM'S main()!!! |
// +--------------------------------------------------------------------+
int main() { 
    /*
    LargeInt a;
    LargeInt b;
    LargeInt c;
    LargeInt d;
    LargeInt e;
    LargeInt f;
    LargeInt g;
    LargeInt h;

#ifdef OP_OUTPUT
    cout << "TEST: operator <<" << endl;
    cout << "  CASE: cout << a" << endl;
    a = LargeInt(12345);

    cout << "    EXPECTING: 12,345" << endl;
    cout << "    RESULT:    " << a << endl;

    cout << "DONE" << endl;
#endif

#ifdef OP_ASSIGN
    cout << "TEST: operator =" << endl;
    a = LargeInt(12345);
    b = LargeInt();

    cout << "  CASE: b = a " << endl;
    cout << "    EXPECTING: " << a << endl;
    b = a;
    cout << "    RESULT:    " << b << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_LE
    cout << "TEST: operator <=" << endl;
    a = LargeInt(1);
    b = LargeInt(2);
    c = LargeInt(1);
    d = LargeInt(-1);

    cout << "  CASE: 1 <= 2";
    if (a <= b) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 2 <= 1";
    if (!(b <= a)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 1 <= 1";
    if (a <= c) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: -1 <= 1";
    if (d <= a) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "DONE" << endl;
#endif
#ifdef OP_GE
    cout << "TEST: operator >=" << endl;
    a = LargeInt(1);
    b = LargeInt(2);
    c = LargeInt(1);
    d = LargeInt(-1);

    cout << "  CASE: 1 >= 2";
    if (!(a >= b)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 2 >= 1";
    if (b >= a) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 1 >= 1";
    if (a >= c) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: -1 >= 1";
    if (!(d >= a)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }
 
    cout << "DONE" << endl;
#endif
#ifdef OP_LT
    cout << "TEST: operator <" << endl;
    a = LargeInt(1);
    b = LargeInt(2);
    c = LargeInt(1);
    d = LargeInt(-1);

    cout << "  CASE: 1 < 2";
    if (a < b) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 2 < 1";
    if (!(b < a)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 1 < 1";
    if (!(a < c)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: -1 < 1";
    if (d < a) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }   

    cout << "DONE" << endl;
#endif
#ifdef OP_GT
    cout << "TEST: operator >" << endl;
    a = LargeInt(1);
    b = LargeInt(2);
    c = LargeInt(1);
    d = LargeInt(-1);

    cout << "  CASE: 1 > 2";
    if (!(a > b)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 2 > 1";
    if (b > a) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 1 > 1";
    if (!(a > c)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: -1 > 1";
    if (!(d > a)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "DONE" << endl;
#endif
#ifdef OP_EQ
    cout << "TEST: operator ==" << endl;
    a = LargeInt(1);
    b = LargeInt(2);
    c = LargeInt(1);
    d = LargeInt(-1);

    cout << "  CASE: 1 == 2";
    if (!(a == b)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 1 == 1";
    if (a == c) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "DONE" << endl;
#endif
#ifdef OP_NE
    cout << "TEST: operator !=" << endl;
    a = LargeInt(1);
    b = LargeInt(2);
    c = LargeInt(1);
    d = LargeInt(-1);

    cout << "  CASE: 1 != 2";
    if (a != b) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: 1 != 1";
    if (!(a != c)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "DONE" << endl;
#endif
#ifdef OP_NOT
    cout << "TEST: operator !" << endl;
    a = LargeInt(1);
    b = LargeInt(0);

    cout << "  CASE: !(1)";
    if (!(!a)) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "  CASE: !(0)";
    if (!b) {
        cout << "  PASSED" << endl;
    } else {
        cout << "  FAILED" << endl;
    }

    cout << "DONE" << endl;
#endif

#ifdef OP_PLUS 
    cout << "TEST: operator +" << endl;
    a = LargeInt(11529);
    b = LargeInt(489);
    c = LargeInt(9223372036854775807L);
    d = LargeInt(-11529);
    e = LargeInt(-489);
    f = LargeInt(9223372036854775807L);

    cout << "  CASE: 11529 + 489 = 12018" << endl;
    cout << "    RESULT: " << (a + b) << endl;

    cout << "  CASE: -11529 + -489 = -12018" << endl;
    cout << "    RESULT: " << (d + e) << endl;

    cout << "  CASE: -11529 + 489 = -11040" << endl;
    cout << "    RESULT: " << (d + b) << endl;

    cout << "  CASE: 11529 + -489 = 11040" << endl;
    cout << "    RESULT: " << (a + e) << endl;

    cout << "  CASE: 9223372036854775807 + 9223372036854775807 = 18446744073709551614" << endl;
    cout << "    RESULT: " << (c + f) << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_MINUS
    cout << "TEST: operator -" << endl;
    a = LargeInt(11529);
    b = LargeInt(489);
    c = LargeInt(-9223372036854775807L);
    d = LargeInt(-11529);
    e = LargeInt(-489);
    f = LargeInt(9223372036854775807L);

    cout << "  CASE: 11529 - 489 = 11040" << endl;
    cout << "    RESULT: " << (a - b) << endl;

    cout << "  CASE: -11529 - -489 = -11040" << endl;
    cout << "    RESULT: " << (d - e) << endl;

    cout << "  CASE: -11529 - 489 = -12018" << endl;
    cout << "    RESULT: " << (d - b) << endl;

    cout << "  CASE: 11529 - -489 = 12018" << endl;
    cout << "    RESULT: " << (a - e) << endl;

    cout << "  CASE: -9223372036854775807 - 9223372036854775807 = -18446744073709551614" << endl;
    cout << "    RESULT: " << (c - f) << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_PLUSEQ
    cout << "TEST: operator +=" << endl;
    a = LargeInt(11529);
    b = LargeInt(489);
    c = LargeInt(9223372036854775807L);
    d = LargeInt(-11529);
    e = LargeInt(-489);
    f = LargeInt(9223372036854775807L);

    cout << "  CASE: 11529 += 489 = 12018" << endl;
    a += b;
    cout << "    RESULT: " << a << endl;
    a = LargeInt(11529);

    cout << "  CASE: -11529 += -489 = -12018" << endl;
    d += e;
    cout << "    RESULT: " << d << endl;
    d = LargeInt(-11529);


    cout << "  CASE: -11529 += 489 = -11040" << endl;
    d += b;
    cout << "    RESULT: " << d << endl;
    d = LargeInt(-11529);

    cout << "  CASE: 11529 += -489 = 11040" << endl;
    a += e;
    cout << "    RESULT: " << a << endl;
    a = LargeInt(11529);

    cout << "  CASE: 9223372036854775807 += 9223372036854775807 = 18446744073709551614" << endl;
    c += f;
    cout << "    RESULT: " << c << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_MINUSEQ
    cout << "TEST: operator -=" << endl;
    a = LargeInt(11529);
    b = LargeInt(489);
    c = LargeInt(-9223372036854775807L);
    d = LargeInt(-11529);
    e = LargeInt(-489);
    f = LargeInt(9223372036854775807L);

    cout << "  CASE: 11529 -= 489 = 11040" << endl;
    a -= b;
    cout << "    RESULT: " << a << endl;
    a = LargeInt(11529);

    cout << "  CASE: -11529 -= -489 = -11040" << endl;
    d -= e;
    cout << "    RESULT: " << d << endl;
    d = LargeInt(-11529);

    cout << "  CASE: -11529 -= 489 = -12018" << endl;
    d -= b;
    cout << "    RESULT: " << d << endl;
    d = LargeInt(-11529);

    cout << "  CASE: 11529 -= -489 = 12018" << endl;
    a -= e;
    cout << "    RESULT: " << a << endl;
    a = LargeInt(11529);

    cout << "  CASE: -9223372036854775807 -= 9223372036854775807 = -18446744073709551614" << endl;
    c -= f;
    cout << "    RESULT: " << c << endl;
    c = LargeInt(-9223372036854775807L);

    cout << "DONE" << endl;
#endif
#ifdef OP_INCR_PRE
    cout << "TEST: operator ++()" << endl;
    a = LargeInt(100);

    ++a;

    cout << "  CASE: ++100 = 101" << endl;
    cout << "    RESULT: " << a << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_INCR_POST
    cout << "TEST: operator ()++" << endl;
    a = LargeInt(100);

    a++;

    cout << "  CASE: 100++ = 101" << endl;
    cout << "    RESULT: " << a << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_DECR_PRE
    cout << "TEST: operator --()" << endl;
    a = LargeInt(100);

    --a;

    cout << "  CASE: --100 = 99" << endl;
    cout << "    RESULT: " << a << endl;

    cout << "DONE" << endl;
#endif
#ifdef OP_DECR_POST
    cout << "TEST: operator ()--" << endl;
    a = LargeInt(100);

    a--;

    cout << "  CASE: 100-- = 99" << endl;
    cout << "    RESULT: " << a << endl;

    cout << "DONE" << endl;
#endif

    return 0;
*/

}
