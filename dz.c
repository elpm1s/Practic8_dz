//вариант 17
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int n;
    double x, sum = 0.0;

    // Ввод действительного числа x
    printf("Введите действительное число x: ");
    scanf("%lf", &x);
    
    // Ввод натурального числа n
    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    // Вычисление суммы
    for (int i = 1; i <= n; i++) {
        sum += sin(pow(x, i));
    }

    printf("%s%lf\n", "Сумма равна: ",  sum);
   
}
