/*
���ϸ�: assignment19.c
����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷��� ���, 0~9999 ���� ���� ���� 3�� ���� �� ������ 100���� ���
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#include <stdio.h>

void graph(int value, int scale) {
    int stars = value / scale;
    printf("%d ", value);
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    graph(6880, 100);
    graph(3052, 100);
    graph(5113, 100);
    return 0;
}
