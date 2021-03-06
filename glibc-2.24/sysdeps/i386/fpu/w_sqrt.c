/* The inline __ieee754_sqrt is not correctly rounding; it's OK for
   most internal uses in glibc, but not for sqrt itself.  */
#define __ieee754_sqrt __avoid_ieee754_sqrt
#include <math.h>
#include <math_private.h>
#undef __ieee754_sqrt
extern double __ieee754_sqrt (double);
#include <math/w_sqrt.c>
