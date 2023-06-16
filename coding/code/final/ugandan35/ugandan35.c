#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int cmp(const void*a, const void*b){
  char **aa = (char**)a;
  char **bb = (char**)b;
  char ans1[3000];
  char ans2[3000];
  strcpy(ans1, *aa);
  strcat(ans1, *bb);
   strcpy(ans2, *bb);
  strcat(ans2, *aa);
  return strcmp(ans2, ans1);
}
int main(){
    int n;
char ans[103][1005];
char* pans[103];
   while(scanf("%d", &n) != EOF){
    for(int i = 0;i<n;i++){
        scanf("%s", ans[i]);
        pans[i] = ans[i];
    }
    qsort(pans, n, sizeof(pans[0]), cmp);
    for(int i = 0; i<n; i++) printf("%s", pans[i]);
    printf("\n");

   }
}