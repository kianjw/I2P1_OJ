#include <stdio.h>
long long int x, y;
int m;

long long int getans(long long int x,long long int y){
    if (y==0) return 1%m;
    else{
        if(y%2==0){ 
       return (getans(x,y/2)*getans(x,y/2))%m;
        }
        else {
            return ((getans(x,y/2)*(getans(x,y/2))%m)*x)%m;
        }
    }
}
int main(){
    scanf("%lld %lld %d",&x, &y,&m);
   printf("%lld\n", getans(x%m,y));

}