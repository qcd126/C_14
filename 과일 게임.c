//2�� ���� 5�� �߿� ��ǻ�Ͱ� �ϳ��� �����ϵ��� �ϰ�, ���ߴ� ������ c���� �ڵ��ϼ��� 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
    int num;
    char *f[] = {"Apple", "Banana", "Kiwi", "mango", "peach"};
    char in[10];
    printf("%d\n", time(NULL));
    srand(time(NULL));
    num = rand() % 5;
    printf("Apple, Banana, Kiwi, mango, peach �� �ϳ��� �����Ͽ����ϴ�. ���纸����!\n");
    while (1) {
        printf("���� �̸��� �Է��ϼ���: ");
        scanf("%s", in);
        if (strcmp(in, f[num]) == 0) {
            printf("�����մϴ�! �����Դϴ�.\n");
            break;
        }
        else {
            printf("Ʋ�Ƚ��ϴ�. �ٽ� �õ��غ�����.\n");
        }
    }
    return 0;
}
