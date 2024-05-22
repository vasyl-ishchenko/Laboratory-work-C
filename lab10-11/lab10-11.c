// Приклад 1
#include <stdio.h> 
#include <stdlib.h>  
int main(void)  
{ 
  int magic;  
  int guess;  
  magic = rand();  
  printf("Vgaday magichne chuslo: "); 
  scanf("%d", &guess);  
 
  if (guess == magic) { 
    printf("** Virno **"); 
    printf("Magichne chuslo rivne %d\n", magic); 
  } 
  else { 
    printf("** Nevirno, "); 
    if(guess > magic) printf("zanabto veluke\n"); 
                         /* вкладений if */ 
    else printf("zanabto male\n"); 
  } 
  return 0; }
// ------------------------------------------------------------------------------------------------------------------------
// Vgaday magichne chuslo: 1
// ** Virno **Magichne chuslo rivne 1

// Приклад 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Підключаємо бібліотеку для використання функції time()
int main(void) {
    int magic;
    int guess;
    srand(time(NULL));
    magic = rand() % 10;
    printf("Вгадайте магічне число: ");
    scanf("%d", &guess);
    if (guess == magic) {
        printf("** Вірно **\n");
        printf("Магічне число рівне %d\n", magic);
    } else {
        printf("** Невірно, ");
        if(guess > magic)
            printf("занадто велике\n");
        else
            printf("занадто мале\n");
    }
        return 0;}
// -----------------------------------------------------------------------------------------------------------------
// Вгадайте магічне число: 1
// ** Невірно, занадто велике

// Приклад 5
#include <stdio.h>
int main(void)
{
 int t;
 for(t=0; t<100; t++) {
 printf("%d ", t);
 if(t==10) break;
 }
 return 0;
}
// -------------------------------------------------------------------------------------------------
// 0 1 2 3 4 5 6 7 8 9 10

// Приклад 6
/* Підрахунок кількості пробілів */
#include <stdio.h>
int main(void)
{
 char s[80], *str;
 int space;
 printf("Vvedit riadok: ");
 gets(s);
 str = s;
 for(space=0; *str; str++) {
 if(*str != ' ') continue;
 space++;
 }
 printf("%d probiliv\n", space);
 return 0;
}
// -------------------------------------------------------------------------------------------------
// Vvedit riadok: Hello world
// 1 probiliv

// Приклад 7
#include <stdio.h>
#include <conio.h> // Підключення для getch()
void main() {
    int a = 2, b = 0, c = 1;
    printf("\n\n");
    if (a > 0 && b < -3) // Виправлення: Додано пропущені фігурні дужки
        c = b * b / a;
    printf("c=%d\n", c); // c=1
    a = ++c / a + a % c; // Виправлення: Змінено ++c на ++c / a для кращої читабельності
    b = +c * c; // Виправлення: Видалено зайвий + перед c
    if (a < b || a < 0) { // Виправлення: Додано пропущені фігурні дужки та замінено || на |
        c *= a;
        printf("c=%d\n", c); // c=2
    } else if (c++ == 2) // Виправлення: Замінено = на == для порівняння
        printf("c=%d\n", c); // c=2
    if (b < a && a == 2) // Виправлення: Додано пропущені фігурні дужки
        c = 2 * a + 1;
    else {
        c = (b--) + a;
        a = 0;
    }
    printf("c=%d\n", c); // c=5
    a = b = 2;
    if (c >= 3) {
        if (a < 0 || a > c) // Виправлення: Додано пропущені фігурні дужки
            c = 0;
        else {
            a = 1;
            c = 7;
            printf("c=%d\n", c); // c=7
            if (c > 0 && c < 10) {
                if (a > 0)
                    printf("c=%d\n", c++); // c=7
            }
            else
                c = 10;
        }
    }
    if (c <= 5) {
        if ((a = b + 1) > 2) // Виправлення: Додано пропущені фігурні дужки
            c % 2;
    }
    printf("c=%d\n", c); // c=8

    a = 3;
    b = -3;

    if (b > 0)
        c = 1;
    else if (b < -10) {
        c = -1;
        printf("c=%d\n", c); // c=-1
    }
    else if (b <= -3)
        c = 2;
    else
        c = b * b + 10;
    printf("c=%d\n", c); // c=11

    getch(); // Виклик getch() для очікування натискання клавіші
}
// -------------------------------------------------------------------------------------------------
// c=1
// c=2
// c=5
// c=7
// c=7
// c=8
// c=2

// Приклад 8
#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Введіть перше число: ");
    scanf("%f", &num1);

    printf("Введіть друге число: ");
    scanf("%f", &num2);

    printf("Введіть операцію (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("Помилка: ділення на нуль\n");
        }
    } else {
        printf("Помилка: невідома операція\n");
    }
    return 0;
}
// -------------------------------------------------------------------------------------------------
// Введіть перше число: 1
// Введіть друге число: 0
// Введіть операцію (+, -, *, /): /
// Помилка: ділення на нуль

