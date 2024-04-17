// Завдання 1:
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
#define EXP 2.71828182
void main(void){	
float y;
int N = 32;
float a = 0;
float b = 0;
for(int i=0; i < N; i++){
	y = pow(i,2) * pow(EXP,(-pow(i,2)/100))*sin((2*PI/N)*i);
 	res[i] = y;
 	b = max(b,y);
 	a = min(a,y);
 	printf("i = %d, y = %f\n",i,y);
 	}
	printf("max = %f\n",b);
	printf("min = %f",a);}
--------------------------------
// i = 0, y = 0.000000
// i = 1, y = 0.193149
// i = 2, y = 1.470713
// i = 3, y = 4.569777
// i = 4, y = 9.640906
// i = 5, y = 16.188730
// i = 6, y = 23.204479
// i = 7, y = 29.441893
// i = 8, y = 33.746716
// i = 9, y = 35.341129
// i = 10, y = 33.987629
// i = 11, y = 30.000978
// i = 12, y = 24.124784
// i = 13, y = 17.324791
// i = 14, y = 10.565220
// i = 15, y = 4.626533
// i = 16, y = 0.000000
// i = 17, y = -3.133448
// i = 18, y = -4.855909
// i = 19, y = -5.425541
// i = 20, y = -5.180445
// i = 21, y = -4.457038
// i = 22, y = -3.535700
// i = 23, y = -2.615844
// i = 24, y = -1.815040
// i = 25, y = -1.183351
// i = 26, y = -0.723988
// i = 27, y = -0.413587
// i = 28, y = -0.218239
// i = 29, y = -0.104020
// i = 30, y = -0.042504
// i = 31, y = -0.012572
// max = 35.341129
// min = -5.425541

// Завдання 2:
// (FOR)
#include<stdio.h>
#include<windows.h>
#include<math.h>
void main(void){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);
int i=1;
double precision,a;
precision = 1.0;
precision = precision/2;
a = 1.0 + precision;
for(int n; a>1;n++){
	precision = precision/2;
	a = 1.0 + precision;
	++i;	}
 printf("\nчисло ділень на 2: %6d\n",i);
 printf("машинний нуль: %e\n ",precision);}

// (WHILE)
#include<stdio.h>
#include<windows.h>
#include<math.h>
void main(void){
SetConsoleCP(65001); SetConsoleOutputCP(65001);
int i=1;
float precision,a;
precision = 1.0;
precision = precision/2;
a = 1.0 + precision;
while(a>1){
	precision = precision/2;
	a = 1.0 + precision;
	++i;	}
 printf("\nчисло ділень на 2: %6d\n",i);
 printf("машинний нуль: %e\n ",precision);}

// (DO WHILE)
#include<stdio.h>
#include<windows.h>
#include<math.h>
void main(void){
SetConsoleCP(65001); SetConsoleOutputCP(65001);
int i=0;
float precision,a;
precision = 1.0;
do{
	precision = precision/2;
	a = 1.0 + precision;
	++i;}
while(a>1);
 printf("\nчисло ділень на 2: %6d\n",i);
 printf("машинний нуль: %e\n ",precision);}
--------------------------------  
// число ділень на 2:     24
// машинний нуль: 5.960464e-008

// Завдання 3:
#include<stdio.h>
void main(){	
char x = 108;
for(int i = 1;i<10; i++){
	for(int j = 0;j<i;j++){
		printf("%c",x);}
	printf("\n");}}
--------------------------------
// l
// ll
// lll
// llll
// lllll
// llllll
// lllllll
// llllllll
// lllllllll
  
// Завдання 4: 
#include<stdio.h>
#include<math.h>
void main(){	
float S = 0;
long int N = 100 ;
for(int k = 1;k<N;k++){
	S += pow(-1,k+1)/(k*(k+1));}
printf("Sum = %f",S);
}
--------------------------------
// Sum = 0.386344

// Завдання 5:
#include <stdio.h>
#include <math.h>
#include <windows.h>
float factorial(float n);
float sin_x(float x,float y);
float cos_x(float x,float y);
float exp_x(float x,float y);
int z=0;
void main(){
 SetConsoleCP(65001);
 SetConsoleOutputCP(65001);
 float a = 0.00001;
 float x;
 printf("Введіть значення x в межах 0 ≤ X ≤ π/2:");
 scanf("%f",&x);
 printf("Значення sin(x) за допомогою ітераційного процесу: %f\n", sin_x(x, a));
 printf("%d\n", z);
 printf("Значення sin(x) за допомогою бібліотечної функції: %f\n\n", sin(x));
 printf("Значення cos(x) за допомогою ітераційного процесу: %f\n", cos_x(x, a));
 printf("%d\n", z);
 printf("Значення cos(x) за допомогою бібліотечної функції: %f\n\n", cos(x));
 printf("Значення cos(x) за допомогою ітераційного процесу: %f\n", exp_x(x, a));
 printf("%d\n", z);
 printf("Значення cos(x) за допомогою бібліотечної функції: %f\n", exp(x));}
float factorial(float n){
	if(n==0){
		return 1;}
	else{	
		return n*factorial(n-1);}}
float sin_x(float x,float y){
	float n = 0;
	float X = x;
	float sum = x;
	z=0;
	while (fabs(X)>y){
		n = n+1;
		X = pow(-1,n)*(pow(x,2*n+1)/factorial(2*n+1));
		sum = sum + X;
		z = z+1;}
	return sum;}
float cos_x(float x,float y){
	float n = 0;
	float X = x;
	float sum = 1;
	z=0;
	while (fabs(X)>y){
		n = n+1;
		X = pow(-1,n)*(pow(x,2*n)/factorial(2*n));
		sum = sum + X;
		z = z+1;}
	return sum;}
float exp_x(float x,float y){
	float n = 0;
	float X = x;
	float sum = 1;
	z=0;
	while (fabs(X)>y){
		n = n+1;
		X = (pow(x,n)/factorial(n));
		sum = sum + X;
		z = z+1;}
	return sum;}
-------------------------------------------------------------------------------------------------------
//   Введіть значення x в межах 0 ≤ X ≤ π/2:1
// 4
// Значення sin(x) за допомогою ітераційного процесу: 0.841471
// Значення sin(x) за допомогою бібліотечної функції: 0.841471
// 5
// Значення cos(x) за допомогою ітераційного процесу: 0.540302
// Значення cos(x) за допомогою бібліотечної функції: 0.540302
// 9
// Значення cos(x) за допомогою ітераційного процесу: 2.718282
// Значення cos(x) за допомогою бібліотечної функції: 2.718282

