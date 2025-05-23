/*
���ϸ�: assignment05.c
����: ¦���� Ȧ�� ������ ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int is_odd(int n) {
    return n % 2 != 0;
}

int main() {
    int num;
    int even_count = 0, odd_count = 0;

    printf("������ ��ĭ���� �����ؼ� �Է��ϼ���. (�������� 0 �Է�)\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (is_even(num))
            even_count++;
        else if (is_odd(num))
            odd_count++;
    }

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even_count, odd_count);

    return 0;
}
