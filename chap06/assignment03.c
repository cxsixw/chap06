/*
���ϸ�: assignment03.c
����: �� �� ������ ���� �Ÿ��� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2;

    printf("������ ������ ��ǥ? ");
    scanf("%d %d", &x1, &y1);

    printf("������ ���� ��ǥ? ");
    scanf("%d %d", &x2, &y2);

    double result = distance(x1, y1, x2, y2);
    printf("(%d, %d)~(%d, %d) ������ ����: %f\n", x1, y1, x2, y2, result);

    return 0;
}