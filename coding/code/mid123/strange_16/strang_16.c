#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        int s =0;
        int i;
        scanf("%d%d", &a, &b);
        for(i = 0; i<a;i++){
             s^= i;
        }
        //printf("%d", i);
        if((s^b) == 0) printf("%d\n", a );
        else if((s^b) == a) printf("%d\n", a+2);
        else printf("%d\n", a+1);
    }
}