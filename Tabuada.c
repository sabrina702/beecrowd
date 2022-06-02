#include <stdio.h>

int main(){
	int num,cont,mult;
	scanf("%d",&num);
	for(cont=1;cont<=1000;cont++){
		cont++;
		mult=cont*num;
	}
	printf("%d x %d = %d",cont,num,mult);
	return 0;
}
