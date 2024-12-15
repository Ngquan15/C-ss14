#include<stdio.h>
#include<string.h>
int main(){
	char m[]="Nguyen Dinh Quan";
	int length = strlen(m);
	
	for(int i = 0;i<length;i++){
		printf("%c ",m[i]);
	} 
	return 0;
}
