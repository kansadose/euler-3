/* make_prime.c  */

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
