#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int **j, *p, a=10;
    p=&a;
    j=&p;
    printf("%d\n", a);
    printf("%x\n", p);
    printf("%d\n", *p);
    printf("%x\n", &p);
    printf("%x\n", j);
    printf("%x\n", *j);
    printf("%d\n", **j);

    return 0;
}
