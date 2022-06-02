#include <stdio.h>

int main(){
	int num,cont=1,mult;
	scanf("%d",&num);
	while(cont<100){
		cont++;
		mult=cont*num;
	}
	printf("%d x %d = %d",cont,num,mult);
	return 0;
}