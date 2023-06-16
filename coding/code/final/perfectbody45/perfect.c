#include <stdio.h>
int n;
int pre[300005] = {};
int cmp(const void *a, const void*b){
        int *aa = (int*)a;
        int *bb = (int*)b;
        return (*aa) - (*bb);
}


int main(){
    int t; int ans = 0;
    scanf("%d", &t);
    while(t--){
        int  p, k;
        scanf("%d%d%d",&n,&p,&k);
     int a[300005] = {};
        for(int i = 0;i<n;i++){
            scanf("%lld", &a[i]);
        }
        qsort(a, n, sizeof(a[0]),cmp);
        for(int i = 0;i<n;i++){
            if(i>=k-1) {
                pre[i] = pre[i-k] + a[i];
            }  else if(i==0) pre[i] = a[i];
            else pre[i] = pre[i-1] + a[i];
         
        }
    int flag = 0;
  for(int i=0;i<n;i++)
        {
            if(p>=pre[i])
               ans=i+1;
      		if(p<a[i]) flag++;
            
        }
  if(flag == n) printf("0\n");     
else printf("%d\n",ans);
    }
}