#include<stdio.h>
#include<string.h>
int main(){
	char m[]="Nguyen DInh Quan";
	int leng = strlen(m);
	int sum = 1;
	for (int i = 0;i< leng;i++){
		if (m[i]==' '){
			sum++;
		}
	}
	printf("chuoi co %d tu",sum);
	return 0;
}
