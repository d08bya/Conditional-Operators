// C Program To Find Maximum Of Three Numbers

#include <stdio.h>

void main(){
	int a, b, c;
	printf("Enter The First Number : ");
	scanf("%d", &a);
	printf("Enter The Second Number : ");
	scanf("%d", &b);
	printf("Enter The Third Number : ");
	scanf("%d", &c);
	(a > b)? printf("Maximum Number Is : %d", a);
	(b > a)? printf("Maximum Number Is : %d", b);
}