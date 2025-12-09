#include <stdio.h>
#include <math.h>

int main(void){
	double a[2][3],b[3][2],c[2][2],sum;
	int i,j,k;
	sum = 0;
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	for(i = 0;i < 3;i++){
		for(j = 0;j < 2;j++){
			scanf("%lf",&b[i][j]);
		}
	}
	printf("The first matrix you entered is\n");
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			if(a[i][j] - floor(a[i][j]) > 0.00000000001){
				printf("%.1f ",a[i][j]);
			}
			else{
				printf("%.0f ",a[i][j]);
			}
		}
		printf("\n");
	}
	printf("The second matrix you entered is\n");
	for(i = 0;i < 3;i++){
		for(j = 0;j < 2;j++){
			if(b[i][j] - floor(b[i][j]) > 0.00000000001){
				printf("%.1f ",b[i][j]);
			}
			else{
				printf("%.0f ",b[i][j]);
			}
		}
		printf("\n");
	}
	for(k = 0;k < 2;k++){
		for(i = 0;i < 2;i++){
			for(j = 0;j < 3;j++){
				sum = sum + a[k][j]*b[j][i];
			}
			c[k][i] = sum;
			sum = 0;
		}	
	}
	printf("The multiplication product of matrix A and matrix B:\n");
		for(i = 0;i < 2;i++){
			for(j = 0;j < 2;j++){
				if(c[i][j] - floor(c[i][j]) > 0.00000000001){
					printf("%.1f ",c[i][j]);
				}
				else{
					printf("%.0f ",c[i][j]);
				}
			}
			printf("\n");
		}
	return 0;
}
