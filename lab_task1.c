#include<stdio.h>
void swap(int *p, int *q, int *r){
    int temp;
    temp = *p;
    *p = *r;
    *r = *q;
    *q = temp;
}
int main (){
    int a=5,b=6,c=7;
    printf("The value before swapping are :\n");
    printf("element1 = %d\n",a);
    printf("element1 = %d\n",b);
    printf("element1 = %d\n\n\n",c);
    printf("The value after swapping are :\n");
    swap(&a,&b,&c);
	printf("element1 = %d\n",a);
    printf("element1 = %d\n",b);
    printf("element1 = %d\n",c);
}
