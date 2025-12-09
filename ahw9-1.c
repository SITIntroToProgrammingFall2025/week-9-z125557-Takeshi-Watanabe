#include <stdio.h>
#include <math.h>

int main(void){
	int i, a[3];
	double d[5],min;
	char c[5][10] = {"Black","Red","Green","Blue","White"};
	min = 1000000; 
	for(i = 0;i < 3;i++){
		scanf("%d",&a[i]);
	}
	d[0] = sqrt((a[0] - 0)*(a[0] - 0) + (a[1] - 0)*(a[1] - 0) + (a[2] - 0)*(a[2] - 0));
	d[1] = sqrt((a[0] - 255)*(a[0] - 255) + (a[1] - 0)*(a[1] - 0) + (a[2] - 0)*(a[2] - 0));
	d[2] = sqrt((a[0] - 0)*(a[0] - 0) + (a[1] - 255)*(a[1] - 255) + (a[2] - 0)*(a[2] - 0));
	d[3] = sqrt((a[0] - 0)*(a[0] - 0) + (a[1] - 0)*(a[1] - 0) + (a[2] - 255)*(a[2] - 255));
	d[4] = sqrt((a[0] - 255)*(a[0] - 255) + (a[1] - 255)*(a[1] - 255) + (a[2] - 255)*(a[2] - 255));
	for(i = 0;i < 5;i++){
		if(min > d[i]){
			min = d[i];
		}
	}
	for(i = 0;i < 5;i++){
		if(min == d[i]){
			printf("The nearest color is %s\n",c[i]);
		}
	}
	return 0;
}
