#include<stdio.h>
#include<string.h>
int main(){
	char m[]="Nguyen Ddinh Quan";
	int length = strlen(m);
	int sum = 0;
	for (int i = 0;i< length;i++){
		if (m[i]==' '){
			
		}else{
			sum++;
		}
	}
	printf("chuoi co %d ki tu",sum);
	return 0;
}
