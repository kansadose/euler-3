#include<stdio.h>
#include"primeset.h"
//N0とN1を合わせて600851475143を表現する

int main(void){
  int longint[2];
  int prime[10000];
  make_prime(prime);
  longint[0] = N0;
  longint[1] = N1;
  largest_prime(longint,prime);
}
