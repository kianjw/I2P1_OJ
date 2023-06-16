#include <stdio.h>
#include <string.h>

int cmp(const void*a, const void*b){
  return strlen(*(char**)a) - strlen(*(char**)b);
}
int main(){  int flag = 0;
    int n;
    scanf("%d", &n);
    char ans[1001][1001]= {};
    char *pans[1001] ={};
    for(int i = 0; i<n;i++){
        scanf("%s", ans[i]);
        pans[i] = ans[i];
    }
    qsort(pans, n, sizeof(pans[0]), cmp);
    for(int i = 0;i<n-1;i++){
        if(strstr(pans[i+1], pans[i]) != NULL){
            flag = 1;
          
        }
        else {
            flag = 0;
            break;
        }
    }

    if(flag==1) { printf("YES\n");
                for(int  i   = 0;i<n;i++){
        printf("%s\n", pans[i]);
    }}
    else  printf("NO\n");
     
}