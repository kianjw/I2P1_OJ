#include <stdio.h>

int  gcd( int x,  int  y){
    if(  y ==  0)  return x;
    else  return gcd(y, x%y);
}

int main(){
    int n, k;
    while(scanf("%d%d", &n,&k) != EOF){
        int a[100005]; int  b[100005];
        int present, base;
        int tmp = k;
        for(int i = 0; i<n;i++){
            scanf("%d", &a[i]);
            b[i] = a[i] % k;
            present = gcd(gcd(k,b[i]), tmp);
        }
        base = k/present;
        printf("%d\n",  base);
        for(int i  = 0 ;i < base ;i++){
            if(i  ==  base  - 1)  printf("%d\n",  i*present);
            else  printf("%d ", present *i);
        }
    }
}