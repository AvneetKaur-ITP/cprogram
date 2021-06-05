#include <stdio.h>
#include <stdlib.h>

int main()
{
    scan("m");
 print (“0 1”);
 fibonacci (m - 2);
 }
 int fibonacci (int n)
 {
 static int el1 = 0, el2 = 1;
 static int new_el;
 if (n > 0)
 {
 new_el = el1 + el2;
 el1 = el2; //swapping places of elements to get the last element on the place of the preceding one
 el2 = new_el; //same as above
 print (" %d", new_el);
 fibonacci (n - 1);
 }
 return 0;
}
