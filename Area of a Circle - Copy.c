#include <stdio.h>
int main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 3.1416 * r * r;
    printf("Area of Circle = %.2f", area);
    return 0;
}
