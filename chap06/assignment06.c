/*
���ϸ�: assignment06.c
����: �޴� ���� ���α׷�
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu() {
    int choice;
    while (1) {
        printf("[1.���� ���� 2.���� ���� 3. �μ� 0. ����] ����? ");
        scanf("%d", &choice);
        if (choice >= 0 && choice <= 3)
            return choice;
    }
}

int main() {
    int selected = choose_menu();

    switch (selected) {
    case 1:
        printf("���� ���⸦ �����մϴ�.\n");
        break;
    case 2:
        printf("���� ������ �����մϴ�.\n");
        break;
    case 3:
        printf("�μ⸦ �����մϴ�.\n");
        break;
    case 0:
        break;
    }

    return 0;
}