#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;
	if (x>0)
		x=function(x);
	else
		return x;
}

int main(){
	int a=30, i=0;
	a=function(a);
	i++;
	printf("%d", i);
	return 0;	
}

