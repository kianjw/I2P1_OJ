#include <stdio.h>
#define max(x,y) ((x) > (y) ? (x) : (y) )

int gcd(int a, int b){
    if (b==0) return a;
    else return gcd(b,a%b);    
}

int main(){
    int a[1001];
    int n;
    int ans = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
   { scanf("%d", &a[i]);}
    for(int i=0; i<n;i++){
        for(int j = i+1; j<n;j++){
            ans = max(ans, gcd(a[i], a[j]));
        }
    }
printf("%d\n", ans);


}


