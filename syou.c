#include<stdio.h>
#define N1 600851
#define N0 475143
#define N  1000000

int sho(int a[2],int k);

int main(void){
  int long1[2],long2[2];
  int k,l;

  scanf("%d",&k);
  long1[0] = long2[0] = N0;
  long1[1] = long2[1] = N1;

 
  if( sho(long1,k) == 0 )
  printf("%d %d / %d = %d %d \n",
         long2[1],long2[0],k,long1[1],long1[0]);
  else 
    printf("割り切れない　%d %d\n",long2[1],long2[0]);
}

int sho(int a[2], int k){

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
