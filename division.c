/* division.c */
#include"primeset.h"
int division(int a[2], int k){

  int tmp;
  int tm1[2];

  tm1[1] = a[1] / k;

  if( a[1] % k == 0){ 
    if( a[0] % k == 0) tm1[0] = a[0] / k;
    else   return 1;
  }else{
    tmp = (a[1] % k) * N + a[0];
    if( tmp % k == 0) tm1[0] = tmp / k;
    else  return 1;
  }
  a[0] = tm1[0];
  a[1] = tm1[1];
  return 0;
}
