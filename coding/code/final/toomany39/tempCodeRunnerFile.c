#include <stdio.h>
typedef struct _point{
    int a, b;
}point;

int cmp(const void * a, const void*b){
    point aa = *(point*)a;
    point bb = *(point*)b;
    return (aa.a - aa.b) - (bb.a - bb.b);
}

int main(){
    int n, k;
    point arr;
    scanf("%d%d", &n,&k);
    for(int i = 0; i< n;i++){
        scanf("%d", &arr[i].a);
    }
    for(int i = 0; i< n;i++){
        scanf("%d", &arr[i].b);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    long long int ans = 0;
    for(int i = 0; i<n;i++){
        if(i<k || arr[i].a < arr[i].b) ans += arr[i].a;
        else ans+= arr[i].b;
    }
    printf("%lld\n", ans);

}