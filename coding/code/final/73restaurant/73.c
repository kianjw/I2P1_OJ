#include <stdio.h>
#include <string.h>
#define m 1000000007
typedef struct _point{
  long long int  mat[2][2];
}point;

point initial = {{{0,1}, {1,1}}};

point mul(point l, point r){ point res;
    memset(res.mat, 0, sizeof(res.mat));
    for(int i = 0; i < 2;i++){
        for(int j = 0; j<2; j++){
            for(int k = 0; k < 2;k++){
                res.mat[i][k] += (l.mat[i][j] * r.mat[j][k])%m;
                res.mat[i][k] %= m;
            }
        }
 
    } return res; 
}

point fps(point initial, long long int y){
    if(y==1) return initial;
    else{
        point temp = fps(initial, y/2);
        if(y%2  == 1) return mul(mul(temp,temp), initial);
        else return mul(temp,temp);

    }
}

int main(){
long long int t;
while(scanf("%lld", &t) != EOF){
    if(t<=2){
        printf("1\n");
        continue;
    }
    else{ 

point temp =    fps(initial , t-2);
long long int ans  = (temp.mat[1][0] + temp.mat[1][1])%m;
printf("%lld\n", ans);

}}
}