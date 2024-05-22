// Приклад 1
#include <stdio.h>
#include <string.h>
int main(void) {
    char s1[80], s2[80];
        printf("Введіть перший рядок:");
    fgets(s1, sizeof(s1), stdin);
        printf("Введіть другий рядок: ");
    fgets(s2, sizeof(s2), stdin);
        printf("Довжина:%zu %zu\n", strlen(s1), strlen(s2));
        if (!strcmp(s1, s2))
        printf("Рядки рівні:\n");
        strcat(s1, s2);
    printf("%s\n", s1);
        strcpy(s1, "Перевірка.\n");
    printf("%s", s1);
        return 0;
}
// -------------------------------------------------------------------------------------------------------
// Введіть перший рядок: Hello
// Введіть другий рядок: World
// Довжина:6 6
// Hello
// World
// Перевірка.

// Приклад 2
#include <stdio.h>
int main(void) {
int x[100]; //оголошення масиву цілого типу з 100 чисел
int t;
for(t=0;t<100;++t) x[t]=t; //присвоєння значення від0 до 99
for(t=0;t<100;++t) printf("%d\n",x[t]);}
// -------------------------------------------------------------------------------------------------------
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 
// 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72  
// 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99

// Приклад 3
#include<stdio.h>
int main(void){
int t,i, num[3][4];
for(t=0;t<3;++t)
for(i=0;i<4;++i)
num[t][i]=(t*4)+i+1;
//вивід на екран
for(t=0;t<3;++t){
for(i=0;i<4;++i)
printf("%3d",num[t][i]);
printf("\n");
}
return 0;
}
// -------------------------------------------------------------------------------------------------------
//   1  2  3  4
//   5  6  7  8
//   9 10 11 12 

// Приклад 4
#include <stdio.h>
#define MAX 100
#define LEN 80
char text[MAX][LEN];
int main(void) {
    int t, i, j;
    printf("Для виходу введіть пустий рядок.\n");
    for (t = 0; t < MAX; t++) {
        printf("%d: ", t);
        gets(text[t]);
        if (!*text[t]) break; } // вихід при пустому рядку    
    for (i = 0; i < t; i++) {
        for (j = 0; text[i][j]; j++)
            putchar(text[i][j]);
        putchar('\n');    }
    return 0;}
// -------------------------------------------------------------------------------------------------------
// Для виходу введіть пустий рядок.
// 0: Hello
// 1: World
// 2:
// Hello
// World
 
// Приклад 5
#include <stdio.h>
#include<windows.h>
#define SIZE 10
int main(void) {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int arr[SIZE];
    int sum = 0;
    printf("Введіть %d цілих чисел:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];}
    printf("Введений масив: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);}
    printf("\nСума елементів масиву: %d\n", sum);
    return 0;} 
// -------------------------------------------------------------------------------------------------------
// Введіть 10 цілих чисел:
// Елемент 1: 1
// Елемент 2: 2
// Елемент 3: 3
// Елемент 4: 4
// Елемент 5: 5
// Елемент 6: 6
// Елемент 7: 7
// Елемент 8: 8
// Елемент 9: 9
// Елемент 10: 10
// Введений масив: 1 2 3 4 5 6 7 8 9 10
// Сума елементів масиву: 55 
