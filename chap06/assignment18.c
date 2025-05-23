/*
���ϸ�: assignment18.c
����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� �Լ� �ۼ� �� 0~999 ���� ������ ���� 3�� ���� �� ���
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int num) {
    int count = 0;
    int divisors[1000];

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisors[count++] = i;
        }
    }

    printf("%d�� ���: ", num);
    for (int i = 0; i < count; i++) {
        printf("%d", divisors[i]);
        if (i != count - 1) {
            printf(" ");
        }
    }
    printf(" => �� %d��\n", count);
}

void generate_and_print_divisors() {
    int nums[3];
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        nums[i] = rand() % 1000;
    }

    for (int i = 0; i < 3; i++) {
        divisors(nums[i]);
    }
}

int main() {
    generate_and_print_divisors();
    return 0;
}