#include <stdio.h>

int main(void){
	int a[3][3],b[3][3],i,j;
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0;i < 3;i++){
		for(j = 2;j >= 0;j--){
			b[i][2 - j] = a[i][j];
		}
	}
	printf("You entered\n");
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Output\n");
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
