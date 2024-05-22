// Приклад 1
#include<stdio.h>
#include<math.h>
double Geron (double a,double b,double c); /*оголошення функцiї- прототипу*/
double Geron (double a, double b, double c) { /*реалізація функції*/
double p; /* локальна змiнна */
p= (a + b + c)/2;
return sqrt(p*(p-a)*(p-b)*(p-c));/*обчислити вираз i повернути результат*/
}
int main ( ) 
{ double u, v, w;
double s;
printf ("Vvedit storonu trikutnika"); /* у консолі введіть значення 2, 3, 4 */
scanf ("%lf %lf %lf",&u, &v,&w);
s=Geron(u,v,w); /*викликається функцiя Geron. До аргументiв a,b,c
передаються значення змiнних u,v,w. Результат виклику присвоюється змiннiй s*/
printf("Ploscha 1 trikutnika %lf\n",s);
s=Geron (10.3,8.1,9.7); /* викликається функцiя Geron. До аргументiв a,b,c
передаються константи */
printf("Ploscha 2 trikutnika %lf\n",s);
s=Geron(u+10.3,v+w,w*1.7); /* викликається функцiя Geron. До аргументiв
передаються значення виразiв */
printf("Ploscha 3 trikutnika %lf\n",s);
return 0;
} 
// -------------------------------------------------------------------------------------------------------
// Vvedit storonu trikutnika 15 15 15
// Ploscha 1 trikutnika 97.427858
// Ploscha 2 trikutnika 36.928095
// Ploscha 3 trikutnika 307.460239

// Приклад 2
#include<stdio.h>
#include<math.h>
double fract(int,int);
double factorial(int);
int main( ) {
 int m,n,s;
 scanf ("%d %d",&m,&n);
 printf ("%lf\n",fract(m+1,n+1));
 return 0;}
double fract(int x, int y) {
 double t;
 t=factorial(x+y)/(x*y);
 return t;}
double factorial (int n) {
 int i;
 double p;
 p=1;
 for(i=1;i<=n;++i)
 p*=i;
 return p;}
// -------------------------------------------------------------------------------------------------------
// 1 2
// 20.000000


// Приклад 3
#include <stdio.h>
#include <windows.h>
int func(int x);
char str[50];
void main(){
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int a = 0;
	printf("Введіть строку: ");
	scanf("%s",&str);
	printf("Введіть скільки символів повинно вивести: ");
	scanf("%d",&a);
	func(a);
}
int func(int x){
	for(int i=0;i<x;i++){
		printf("%c",str[i]);	
	}
}
// -------------------------------------------------------------------------------------------------------
// Введіть строку: Hello
// Введіть скільки символів повинно вивести: 2
// He 

