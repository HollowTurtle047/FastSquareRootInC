/**************************************************************/
#include <math.h>  /* only for sqrt()   */
#include <stdio.h> /* only for printf() */
unsigned int iii;  /* test variable     */
/**************************************************************/
unsigned int root(unsigned int x) {
  unsigned int a, b;
  b = x;
  a = x = 0x3f;
  x = b / x;
  a = x = (x + a) >> 1;
  x = b / x;
  a = x = (x + a) >> 1;
  x = b / x;
  x = (x + a) >> 1;
  return (x);
}
/**************************************************************/
void main(void) { /* creates text data file for Excel */
  for (iii = 0; iii < (0xfffc); iii = iii + 4) {
    printf("\n %3.1f; %u ", (float)sqrt(iii), root(iii));
  }
}
/********************************************************/
