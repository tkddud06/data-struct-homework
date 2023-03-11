#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
// int�� ���� i, int�� ������ ���� ptr, int�� ���������� ���� dptr ����
i = 1234; // i�� 1234�� �����Ͽ� �ʱ�ȭ
// ptr, dptr�� ���� �����Ⱚ ����

printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i); // i�� ���� 1234 ��� 
printf("address of i == %p\n", &i); // i�� �ּڰ� ��� 
printf("value of ptr == %p\n", ptr); // ptr�� ���� ���� �����Ⱚ ��� 
printf("address of ptr == %p\n", &ptr); // ptr�� �ּڰ� ��� 

ptr = &i; // ptr�� i�� �ּڰ� ����

printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i); // 1234 ��� (�������� ����)
printf("address of i == %p\n", &i); // i�� �ּڰ� ��� (�������� ����)
printf("value of ptr == %p\n", ptr); // ptr�� ���� �� ��� (i�� �ּڰ� ��µ�)
printf("address of ptr == %p\n", &ptr); // ptr�� �ּڰ� ��� (�������� ����)
printf("value of *ptr == %d\n", *ptr); // ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 1234 ���

dptr = &ptr; // dptr�� ptr�� �ּڰ� ����

printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i); // 1234 ��� (�������� ����)
printf("address of i == %p\n", &i); // i�� �ּڰ� ��� (�������� ����)
printf("value of ptr == %p\n", ptr); // ptr�� ���� �� ��� (i�� �ּڰ� ��µ�)
printf("address of ptr == %p\n", &ptr); // ptr�� �ּڰ� ��� (�������� ����)
printf("value of *ptr == %d\n", *ptr); // ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 1234 ��� (�������� ����)
printf("value of dptr == %p\n", dptr); // dptr�� ���� �� ��� (ptr�� �ּڰ� ��µ�)
printf("address of dptr == %p\n", &dptr); // dptr�� �ּڰ� ���
printf("value of *dptr == %p\n", *dptr); // dptr�� ptr�� ����Ű�� �����Ƿ�, ptr�� ���� i�� �ּڰ� ���
printf("value of **dptr == %d\n", **dptr); // dptr�� ptr�� ����Ű�� �ְ�, ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 1234 ���

*ptr = 7777; // *ptr�� �� ���� (ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 7777�� ����)

printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i); // 7777 ���
printf("value of *ptr == %d\n", *ptr); // ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 7777 ���
printf("value of **dptr == %d\n", **dptr); // dptr�� ptr�� ����Ű�� �ְ�, ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 7777 ���

**dptr = 8888; // **dptr�� �� ���� (dptr�� ptr�� ����Ű�� �ְ�, ptr�� i�� ��Ű���� �����Ƿ�, i�� ���� 8888�� ����)

printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); // 8888 ���
printf("value of *ptr == %d\n", *ptr); // ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 8888 ���
printf("value of **dptr == %d\n", **dptr); // dptr�� ptr�� ����Ű�� �ְ�, ptr�� i�� ����Ű�� �����Ƿ�, i�� ���� 8888 ���

printf("[----- [�ֻ�]  [2022041062] -----]");

return 0;
}