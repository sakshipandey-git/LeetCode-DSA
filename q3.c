#include<stdio.h>
int main() {
    int a, b, c, d,max;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d)
        max=a;
    else if (b >= a && b >= c && b >= d)
        max=b;
    else if (c >= a && c >= b && c >= d)
       max=c;
    else
        max=d;
        
    printf("MAXIMUM IS NUMBER %d",max);
}
