#include <stdio.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[100005];
    for(int i = 0l i<n;i++){
        scanf("%d", &a[i]);
    } int gas = k;  int ans = 0; int now = 0;
    for(int i = 0; i<n;i++){
        if(gas >= a[i] - now){
            gas = gas - (a[i] - now);
        }
        else { ans++;
        gas = k;
        if(gas >= a[i] - now){
            gas = gas - (a[i] - now); else {  
                printf("The Legend Falls.\n");
                return 0;
        }}
        now = a[i];
        }
    }
    printf("%d\n", ans);
}