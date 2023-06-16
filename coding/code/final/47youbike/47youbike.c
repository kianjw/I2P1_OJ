#include <stdio.h>
int main(){
    int n, k;
    int now = 0;
    scanf("%d%d", &n, &k);
    int a[n];
    int  ans = 0;
    int gas = k;
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n;i++){
        if(gas >= a[i] - now) {
            gas = gas - (a[i] - now);
        }
        else{ ans++;
            gas  = k;
            if(gas >= a[i] - now) {
            gas = gas - (a[i] - now);}
            else {printf("The Legend Falls.\n");
            return 0;}
            
        }
    now = a[i];
    }


printf("%d\n", ans);
}