#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *p, a=10;
    p=&a;
    printf("%d\n", a);
    printf("%x\n", p);
    printf("%d\n", *p);
    printf("%x\n", &p);
    return 0;
}
