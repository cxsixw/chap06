/*
���ϸ�: assignment01.c
����: ���ο� ������ ���̸� �޾� ���簢���� �ѷ��� ����ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int height) {
    return 2 * (width + height);
}

int main() {
    int width, height;

    printf("����? ");
    scanf("%d", &width);

    printf("����? ");
    scanf("%d", &height);

    int perimeter = get_perimeter(width, height);
    printf("���簢���� �ѷ�: %d\n", perimeter);

    return 0;
}