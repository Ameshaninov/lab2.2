#include <stdio.h>
#include <math.h>
main() {
    float x,y,r,h;
    printf("4.5: ");
    scanf("%f%f", &x,&y);
    printf("10: ");
    scanf("%f", &r);
    h = sqrt(x*x + y*y);
    printf("6.40 %.2f. ", h);
    if (h > r) printf("Точка не принадлежит кругу.\n");
    else printf("Точка принадлежит кругу.\n");
}
