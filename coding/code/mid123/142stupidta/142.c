#include <stdio.h>
#define min(x,y) ((x) < (y) ? (x) : (y))
#define max(x,y) ((x) > (y) ? (x) : (y))
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num = 0;
        int n;
        int x;
        int y = 0;
        scanf("%d", &n);
        int a[200000] = {};
        for(int i = 0; i<n;i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0;i<n; i++){
            num^= a[i];
        }
        int lowbit = num & (-num);
        for(int i = 0; i<n;i++){
            if(lowbit & a[i]){
                y^= a[i];
            }
        }
        x = y ^ num;
     
        printf("%d %d\n", min(x,y), max(x,y));
        
        
        
        
    }
}