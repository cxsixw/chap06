/*
���ϸ�: assignment09.c
����: RGB ������ ������ ���ϴ� ���α׷�
�ۼ���: ������
�ۼ���: 2025-05-23
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(int rgb) {
    return (rgb >> 16) & 0xFF;
}

int get_green(int rgb) {
    return (rgb >> 8) & 0xFF;
}

int get_blue(int rgb) {
    return rgb & 0xFF;
}

int make_rgb(int red, int green, int blue) {
    return (red << 16) | (green << 8) | blue;
}

int main() {
    int rgb, r, g, b;
    int comp_rgb;

    printf("RGB ����? ");
    scanf("%x", &rgb);

    r = get_red(rgb);
    g = get_green(rgb);
    b = get_blue(rgb);

    comp_rgb = make_rgb(255 - r, 255 - g, 255 - b);

    printf("RGB %06X�� ����: %06X\n", rgb, comp_rgb);

    return 0;
}
