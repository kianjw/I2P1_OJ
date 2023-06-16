#include <stdio.h>

int lb(long long int *arr, int l, int r, long long int x){ 
    while(l<r){ 
    int m = (l+r)/2;
    if(arr[m] >= x) r = m;
    else l = m + 1;

}
return l;
}
int main(){
    int n, k, q;
    scanf("%d%d%d", &n, &k,&q);
    long long int a[n];
    for(int i = 0; i<n;i++) scanf("%lld", &a[(i+n-k)%n]);

    while(q--){
        long long int f;
        scanf("%lld", &f);
        int A = lb(a, 0, n-k, f);
        int B = lb(a,n-k,n, f);
        if(A== n-k) printf("gan ni nya sai bau\n");
        else if(B == n) printf("%d\n", A+1);
        else {
         if(a[A] == a[B]) printf("%d\n", A+1);
         else if(a[A] < a[B]) printf("%d\n", A+1);
         else printf("%d\n", B+1);
        }

    }
}