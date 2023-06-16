#include <stdio.h>
int m;

long long int getans(long long int base, long long int y){
    long long int result = 1 %m;
    while(y>0){
        if(y%2 == 1) result =  (result * base) %m;
        base = ( base * base ) % m;
        y/=2;
    }
    return result;
}

int main(){ 
long long int x,y;
scanf("%lld%lld%d", &x, &y, &m);
int base = x % m;
printf("%lld", getans(base,y));

}