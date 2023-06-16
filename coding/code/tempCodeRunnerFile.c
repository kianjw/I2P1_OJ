#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int pre[200000] = {};
        int f[200000] = {};
        int  sum[200000] = {};
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        for(int i = a;  i<= b;i++){
            f[i+b]++;
            f[i+c+1]--;
        }
        for(int i = 1;  i<=   200000;i++){
            sum[i] = f[i] + sum[i-1];
        }
        for(int i = 1;  i<= 200000;i++){
            pre[i] = sum[i] + pre[i-1];
        } long long int ans = 0; int limit;
        for(int i  =  c ; i<=d;i++){ ((i%2 ==0 ) ? 1.5 * i - 1 : 1.5*i)
            ans += pre[limit]  - pre[i];
        }
        printf("%lld", ans);
    }
}