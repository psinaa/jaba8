#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
    setlocale(LC_ALL, "RUS");
//0
    char c, f;
    int n;
    printf("������� ����������� ��������� �������� � ��� ������� (����� ������):\n");
    scanf("%d %c %c", &n, &c, &f);


    //printf("|");
    for (int start = 1; start <= n; start++)
    {
    putchar(c);
    putchar('!');
    }
    for (int start = n; start <= n; start++) putchar('+');
    printf("|\t\n");

    for (int start = n; start <= n * 2; start++)
    {
    putchar(f);
    putchar('!');
    }
    printf("|\t\n");

//1

    int r, m,s=0;
    printf("������� 1 �����\n");
    scanf("%d", &r);
    printf("������� 2 �����\n");
    scanf("%d", &m);
    for (int i = m;m >= r;m--) {
    s += m;
    //printf("��������� %d ���",i+1);
    }
    printf("��������� %d",s);

    //2
    float t;
    double x = 2, res;
    printf("\n�������, ������� ���������� ���������: y = 2^x - 2x^2 - 1\n");
    printf("\t������� [2; 4]\n\n");
    printf("������� ��� ���������: ");
    scanf("%f", &t);
    printf("_____________\n");
    printf(" |  x  |  y  |\n");
    printf(" |_____|_____|\n");
    for (; x <= 4; x += t)
    {
        res = ((x * x) - (2 * x * x) - 1);
        printf(" | %.2lf|%.2lf|\n", x, res);
    }
}