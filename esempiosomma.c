#include <stdio.h>
int sum(int a, int b){
 return a + b;
}

int main()
{
int x=40 , y=50;
int s= sum(x,y);
printf("La somma di %d e %d è %d\n",x,y,s);
return 0;
}
