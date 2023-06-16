#include <stdio.h>
  
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
       int f[200000] = {};
     int pre[200000] = {};
   int sum[200000] = {};
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        for(int i = a; i<=b;i++){
            f[i+b]++;
            f[i+c+1]--;
        }
        for(int i = 1; i<= 200000;i++ ){
            sum[i] = f[i] + sum[i-1];
        }
        for(int i = 1; i<=200000;i++){
            pre[i] = pre[i-1] + sum[i];
        } long long int ans =  0;
        for(int i = c; i  <= d;i++){
            ans += pre[200000] - pre[i];
        }
        printf("%lld\n", ans);

    }
}