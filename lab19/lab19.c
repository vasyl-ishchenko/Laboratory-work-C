// 1. Дослідити та дати пояснення прикладів, викладених нижче.
//А)
#include <stdio.h> 
#include <windows.h>
int main() { 
SetConsoleCP(65001);
SetConsoleOutputCP(65001);
FILE *in; //Опис вказівника на файл 
int ch; 
if(in=fopen("proba.txt","r")!=NULL){ 
	while((ch=getc(in)!=EOF))// Отримується символ із in 
	printf("%c",ch);
	putc(ch,stdout);// Виведення символа в стандартний потік на екран. 
	fclose(in); } 
else 
printf("Файл proba не відкривається \n"); }
//Б)
#include <stdio.h> 
int main( ) { 
FILE *ff;  
int base; 
ff = fopen("proba.txt" , "r");   
// відкривається файл із іменем sam, який ідентифікується зі вказівником на ff . 
fscanf( ff, " %d" , &base);   // ff вказує на файл із іменем sam  
fclose(ff); 
ff = fopen("data", "a");   // доповнення 
fprintf( ff, "sam is %d.\n", base);   /* ff вказує на data */ 
fclose(ff); }

//В)
#include <stdio.h>
#define LINE 80
int main( ){
FILE *ff;
char *string[LINE];
ff = fopen(" opus", "r");
while ( fgets(string, LINE, ff) != NULL)
 puts(string); }

//Г)
Приклад читання форматованих даних з файлу "C:\\temp\\sample.txt":
/* Читання форматованих даних за допомогою функції fscanf(). */
#include <stdlib.h>
#include <stdio.h>
int main(){
 int f1, f2, f3, f4, f5; 
 FILE *fp;
fp = fopen("C:\\temp\\sample.txt", "r"); /*Відкриття файлу в режимі 
читання*/
/*Читання з файлу */
fscanf(fp, "%d\n%d\n%d\n%d\n%d\n", &f1, &f2, &f3, &f4, &f5);
printf("The values are %d, %d, %d, %d, %d \n.",f1, f2, f3, f4, f5);
fclose(fp); /* Закриття файлу fp*/}

// Завдання 3
//Запис даних в файл proba.txt
#include <stdio.h>
int main (void)
{
 FILE *pf;
 int k;
if ((pf = fopen ("proba.txt","w")) ==NULL){
 perror("proba.txt");
 return 1;
 }
 for (k=0; k<=5; k++)
 fprintf(pf, "%d %d\n", k, k*k*k*k);
 fclose(pf);
 return 0;
 }
//Читання даних із файлу proba.txt
#include <stdio.h>
int main (void)
{
FILE *pf;
int n, nn, l;
if ((pf = fopen ("proba.txt","r")) ==NULL)
{
   perror("proba.txt");
   return 1;
}
for (l=0; l<=5; l++){
fscanf(pf, "%d %d\n", &n, &nn);}
fclose(pf);
return 0;
}

// Завдання 4
//Запис даних в файл proba.txt
#include <stdio.h>
int main (void)
{
int a[8]={1,2,3,4,5,6,7,8};
FILE *pf;
int k;
if ((pf = fopen ("proba.txt","w")) ==NULL)
{
perror("proba.txt");
return 1;
}
for (k=0; k<8; k++)
fprintf(pf, "%d\n", a[k]);
fclose(pf);
return 0;
}

//Читання даних із файлу proba.txt
#include <stdio.h>
int main (void)
{
int b[8]={};
FILE *pf;
int n, l, i;
if ((pf = fopen ("proba.txt","r")) ==NULL)
{
   perror("proba.txt");
   return 1;
}
for (l=0; l<8; l++){
fscanf(pf, "%d\n", &b[l]);}
fclose(pf);
for (i = 0; i<8; i++){
printf("%d\n", b[i]);}
return 0;
}

