#include <stdio.h>
int main() {
    int a[100], n, key, i, flag=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(a[i]==key) { printf("Found at position %d", i+1); flag=1; break; }
    }
    if(!flag) printf("Not Found");
    return 0;
}

