#include <stdio.h>
int main()
{
char charType;
int integerType;
float floatType;
double doubleType;
// char�� ���� charType, int�� ���� integerType, float�� ���� floatType, double�� ���� doubleType ����
// �ʱ�ȭ�� ���� �ʾ����Ƿ�, �����Ⱚ�� ��� ���� ����

printf("Size of char: %ld byte\n",sizeof(charType)); // charType�� char �ڷ����̹Ƿ�, 1����Ʈ ���
printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType�� int �ڷ����̹Ƿ�, 4����Ʈ ���
printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType�� float �ڷ����̹Ƿ�, 4����Ʈ ���
printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType�� double �ڷ����̹Ƿ�, 8����Ʈ ���

printf("-----------------------------------------\n");

// ���� ������. char �ڷ����� 1����Ʈ, int �ڷ����� 4����Ʈ, float �ڷ����� 4����Ʈ, double �ڷ����� 8����Ʈ ���
printf("Size of char: %ld byte\n",sizeof(char));
printf("Size of int: %ld bytes\n",sizeof(int));
printf("Size of float: %ld bytes\n",sizeof(float));
printf("Size of double: %ld bytes\n",sizeof(double));

printf("-----------------------------------------\n");

// ������ �������� ũ��� ��� ������. 32��Ʈ ȯ���� ��� 4����Ʈ, 64��Ʈ ȯ���� ��� 8����Ʈ�� ���.
// �޸� �ּ� ���̸�ŭ�� ũ����.
// ������ ���, 32��Ʈ ȯ���̹Ƿ� 4����Ʈ ��µ�
printf("Size of char*: %ld byte\n",sizeof(char*));
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));

printf("[----- [�ֻ�]  [2022041062] -----]\n");
// ������ �ּڰ��� ���� �ø��� ���� �� ����
return 0;
}