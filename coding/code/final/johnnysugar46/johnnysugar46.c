#include <stdio.h>
#define max(x,y) ((x) > (y) ? (x)  : (y) )
#define min(x,y) ((x) <  (y) ? (x) : (y))
int main(){
  int n;
  int atleastrow = 0;
  int atleastcol ;
  int ansrow[1001] = {};
  int anscol[1001] = {};
  scanf("%d", &n);
  int a[1001][1001] ={};
  for(int i = 0; i< n;i++){ 
    for(int j = 0; j<n;j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i = 0; i< n;i++){
    for(int j = 0; j<n;j++){
      atleastrow = max(atleastrow,a[i][j]); //printf("%d", atleastrow);
    }
    ansrow[i] = atleastrow; //printf("%d ", atleastrow);
    atleastrow = 0;
    if(i == n-1) printf("%d\n", ansrow[i]);
    else printf("%d ",ansrow[i]);
  }
  for(int j = 0; j < n;j++){ atleastcol = 0x3f3f3f3f;
    for(int i = 0; i<n;i++){
      atleastcol = min(atleastcol,a[i][j]);
    }
    anscol[j] = atleastcol;
    if(j == n-1) printf("%d\n", anscol[j]);
    else printf("%d ",anscol[j]);
  }



}