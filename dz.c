//������� 17
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int n;
    double x, sum = 0.0;

    // ���� ��������������� ����� x
    printf("������� �������������� ����� x: ");
    scanf("%lf", &x);
    
    // ���� ������������ ����� n
    printf("������� ����������� ����� n: ");
    scanf("%d", &n);

    // ���������� �����
    for (int i = 1; i <= n; i++) {
        sum += sin(pow(x, i));
    }

    printf("%s%lf\n", "����� �����: ",  sum);
   
}
