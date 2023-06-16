#include <stdio.h>
long long int pre[1000001] = {};
int main(){
    int t;
    int mid;
    int count = 0;
    scanf("%d", &t);
    for(int i = 1; i<= 1000000;i++ ){ count = 0;
        mid = i;
        while(mid > 0){
            if(mid % 10 == 1){
                count++;
            }
            mid/=10;

        }
        pre[i] = pre[i-1] + count;}
    

    while(t--){
        int a,b;
        scanf("%d%d", &a, &b );
        printf("%lld\n", pre[b] - pre[a-1]);

    }
}