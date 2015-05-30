/* largest_prime.c */
#include<stdio.h>
#include"primeset.h"

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
