#include <stdio.h>

int main(void){
	int a[3],i,fd,sd;
	char h[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char b[6];
	for(i = 0;i < 3;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i < 6;i = i + 2){
		fd = a[i/2]/16;
		b[i] = h[fd];
		sd = a[i/2] % 16;
		b[i + 1] = h[sd];
	}
	printf("The hex code is #");
	for(i = 0;i < 6;i++){
		printf("%c",b[i]);
	}
	return 0;
}
