//1주사위를 6000번 던질때 1부터 6이 나오는 횟수를 시물레이션 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
    int i, r;
    srand(time(NULL));
    for (i = 0; i < 6000; i++) {
        r = rand() % 6; 
        printf("%d ", r+1);
    }
}
