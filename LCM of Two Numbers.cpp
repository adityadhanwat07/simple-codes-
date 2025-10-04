
#include <stdio.h>
int main(){
    int a=4,b=6,lcm;
    for(lcm=a>b?a:b; ; lcm++)
        if(lcm%a==0 && lcm%b==0) break;
    printf("LCM=%d",lcm);
    return 0;
}
