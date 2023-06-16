#include <stdio.h>
#include <string.h>
int t, x;
long long int length;
long long int tmp[5000005];
int ans;
char s[501] = {};
long long int up = 1000000000 + 7;
int flag;

int count(long long int now , long long int length){
   long long int newlength = length + (tmp[now]-1)*(length - now -1);
   if(length <=1000000 && flag == 1) {
    for(int i = length; i<newlength; i++){
        tmp[i] = tmp[i-length+now +1];
    }}
    if(newlength < 0) newlength += up;
    else if(newlength>up) {newlength = newlength % up; flag = 0;
    }
    if(now == x) return length;
    else return count(now+1,newlength);

   
}


int main(){
    scanf("%d", &t);
while(t--){ flag = 1;
    scanf("%d", &x);
    scanf("%s", s);
    length = strlen(s);
    for(int i = 0; i<length; i++){
        tmp[i] = (s[i]-48);
        //printf("%d", tmp[i]);
    }
    printf("%d\n", count(0,length));
}
}