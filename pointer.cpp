#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int tempa = *a, tempb = *b;
    *a = tempa + tempb;
    *b = abs(tempa-tempb);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);  //why is this getting in the address of a and b rather than a and b?
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}