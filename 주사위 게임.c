//1�ֻ����� 6000�� ������ 1���� 6�� ������ Ƚ���� �ù����̼� 
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
