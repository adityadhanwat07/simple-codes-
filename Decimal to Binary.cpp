
#include <stdio.h>
int main(){
    int n=10,b[10],i=0;
    while(n>0){ b[i++]=n%2; n/=2; }
    for(int j=i-1;j>=0;j--) printf("%d",b[j]);
    return 0;
}
