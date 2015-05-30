#include<stdio.h>
#define N0 475143
#define N1 600851
#define N 1000000
//N0とN1を合わせて600851475143を表現する
 
/* ----- prototype ----- */
void largest_prime(int a[2],int p[10000]);
void make_prime(int a[10000]);
int division(int a[2],int k);
/* ----- main ----- */
int main(void){
  int longint[2];
  int prime[10000];
  make_prime(prime);
  longint[0] = N0;
  longint[1] = N1;
  largest_prime(longint,prime);
}
/* ----- function ----- */
 
void largest_prime(int a[2],int p[10000]){
  int b[2];
  int i;
  
  i = 0;

  while(1){

    if( division(a,p[i]) != 0) i++; //素数p[i]で割り切れなかった場合
    else printf("%d ",p[i]);

    if( p[i]==-1 ){ printf("失敗"); break;}     //素数が限界にきたら失敗
    if(a[0]==1 && a[1]==0){ printf("成功"); break;} //割り切れたら成功
  }

  printf("\n");
}

 
 
void make_prime(int a[10000]){
  int i,k,j;
  a[0] = 3;
  k = 1;
  
  for(i=3;i<10000;i+=2){ //2は明らかに素因数ではないので除外
    for(j=3;j<i;j+=2){ //自分自身(j)以外の約数がないか調べる
      if( (i%j==0) && (i!=j) ) break; //素数でないのでループから抜ける
      if(j >= i-2)   a[k++] = i;  
    }
  }

  a[k] = -1; //配列の最後を示す
 
}

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
