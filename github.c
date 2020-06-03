#include <stdio.h>
int main(){
	printf("Hello World");
return 0;
}

#include <stdio.h>
int main(){
	int x,y,result = 0;
	scanf("%d %d", &x, &y);
	
	result = x + y;
	printf("%d + %d = %d", x, y, result);

	result = x - y;
	printf("%d - %d = %d", x, y, result);

	result = x * y;
	printf("%d * %d = %d", x, y, result);
	
	result = x / y;
	printf("%d / %d = %d", x, y, result);
return 0;
}

#include <stdio.h>
int main(){
	int x,y,result = 0;
	scanf("%d %d", &x, &y);

	result = x % y;
	printf("³ª¸ÓÁö = %d", result);
return 0;
}