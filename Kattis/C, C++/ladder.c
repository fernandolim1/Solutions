#include <stdio.h>
#include <math.h>

int main() {
    int h, a;
    float PI = 3.14159265;
    scanf("%d %d", &h, &a);
    double rad = a*(PI/180.0);
    printf("%ld\n", (long int) ceil(h/sin(rad)));
    return 0;
}