#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *p =  malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }
    for(int i=0;i<5;i++){
        printf("%d ", p[i]);
    }
printf("\n");
    p = realloc(p, 10*sizeof(int));
    for(int i=0;i<10;i++){
        p[i]=i+1;
    }
     for(int i=0;i<10;i++){
        printf("%d ", p[i]);
    }
    return 0;
}