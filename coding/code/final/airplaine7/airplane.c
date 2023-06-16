#include <stdio.h>

int cmp(const  void*a, const void*b){
    int *aa = (int*)a;
    int *bb  = (int*)b;
    if(aa[0] != bb[0]) return aa[0] - bb[0];
    if(aa[1] != bb[1])  return aa[1] -  bb[1];
    else return aa[2] - bb[2];

}

int  main(){
    int n;
    scanf("%d", &n);
    int a[100005][3];
    for(int i = 0 ; i<n;i++){
        scanf("%d%d", &a[i][0], &a[i][1]);
        a[i][2] =  i +1;
    }
    qsort(a,n,sizeof(a[0]), cmp);
    for(int i = 0; i<n;i++){
        if( i == n - 1) printf("%d\n", a[i][2]);
        else printf("%d ", a[i][2]);
    }
}   