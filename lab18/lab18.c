// Приклад 1
#include <stdio.h>
int main(void) { 
struct { 
int a; 
int b;
 } x, y; 
x.a = 10; 
y = x; /* присвоювання одної структури другій */ 
printf("%d", y.a); return 0; }
// -------------------------------------------------------------------------------------------------------
// 10

// Приклад 2
#include <stdio.h> 
/* визначення структури*/ 
struct student
{
 char name[30];
 int kurs;
 int age;
};
int main()
{
 /* оголошення змінної stud1 типу struct student*/
 struct student stud1;
 printf("Vvedit imya:");
 gets(stud1.name);
 printf("Vvedit vik:");
 scanf("%d", &stud1.age);
 printf("Vvedit kyrs:");
 scanf("%d", &stud1.kurs);
 printf("Student %s\n", stud1.name);
 printf("Kyrs %d\n", stud1.kurs);
 printf("Vik %d\n", stud1.age);
}
// -------------------------------------------------------------------------------------------------------
// Vvedit imya:vasyl
// Vvedit vik:19
// Vvedit kyrs:1
// Student vasyl
// Kyrs 1
// Vik 19

// Приклад 3
#include <stdio.h> 
struct student /* визначення структури*/
{
 char name[30];
 int kurs;
 int age;
};
int main()
{
struct student stud[10]; /* оголошення масиву на 10 структур */
 int i, n;
 printf("Kilkict studentiv:");
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
 printf("Vvedit imya:");
 scanf("%s", stud[i].name);
 printf("Vvedit vik:");
 scanf("%d", &stud[i].age);
 printf("Vvedit kurs:");
 scanf("%d", &stud[i].kurs);
 }
 for(i=0;i<n;i++)/* Виведення */
 {
 printf("Student %s\n", stud[i].name);
 printf("Kurs %d\n", stud[i].kurs);
 printf("Vik %d\n", stud[i].age);
 }
}
// -------------------------------------------------------------------------------------------------------
// Kilkict studentiv:2
// Vvedit imya:1
// Vvedit vik:1
// Vvedit kurs:1
// Vvedit imya:2
// Vvedit vik:2
// Vvedit kurs:2
// ------------------------
// Student 1
// Kurs 1
// Vik 1
// Student 2
// Kurs 2
// Vik 2

// 3. Написати програму для виведення нижчепредставленої інформації шляхом використання структури. 
// Ім’я, вага, висота, вік – вводяться з клавіатури ( вказати довільні дані). 
// Інформація про працівника Ім’я 
// ---------------------------------------- 
// Вага 
// Висота 
// Вік
#include <stdio.h>
#include <windows.h> 
struct worker{
 char name[30];
 int weight;
 int growth;
 int age;
};
int main(){
 SetConsoleCP(65001);
 SetConsoleOutputCP(65001);
 struct worker w1;
 printf("Введіть імя: ");
 gets(w1.name);
 printf("Введіть вагу: ");
 scanf("%d", &w1.weight);
 printf("Введіть зріст: ");
 scanf("%d", &w1.growth);
 printf("Введіть вік: ");
 scanf("%d", &w1.age);
 printf("Інформація про працівника\n%Імя - s\n", w1.name);
 printf("Вага - %d кг\n", w1.weight);
 printf("Зріст - %d см\n", w1.growth);
 printf("Вік - %d\n", w1.age);
}
// -------------------------------------------------------------------------------------------------------
// Введіть імя: Василь
// Введіть вагу: 85
// Введіть зріст: 177
// Введіть вік: 19
// Інформація про працівника
// Імя - Василь
// Вага - 85 кг
// Зріст - 177 см
// Вік – 19
