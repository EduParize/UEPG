#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int **q, *p, x=10;
    p=&x;
    q=&p;
   printf("%d", **q);

    return 0;
}
