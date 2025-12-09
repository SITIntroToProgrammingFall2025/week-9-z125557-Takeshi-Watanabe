#include <stdio.h>

int main(void){
	double a[5],max,min,min1,max1,mid,b[5];
	int i;
	min = 200000000000;
	max = -200000000000;
	min1 = 200000000000;
	max1 = -200000000000;
	printf("Input array:\n");
	for(i = 0;i < 5;i++){
		scanf("%lf",&a[i]);		
	}
	for(i = 0;i < 5;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	b[0] = min;
	for(i = 0;i < 5;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	b[4] = max;
	for(i = 0;i < 5;i++){
		if((min1 > a[i])&&(min != a[i])){
			min1 = a[i];
		}
	}
	b[1] = min1;
	for(i = 0;i < 5;i++){
		if((max1 < a[i])&&(max != a[i])){
			max1 = a[i];
		}
	}
	b[3] = max1;
	for(i = 0;i < 5;i++){
		if((a[i] != min)&&(a[i] != max)&&(a[i] != min1)&&(a[i] != max1)){
			mid = a[i];
		}
	}
	b[2] = mid;
	printf("sorted array:\n");
	for(i = 0;i < 5;i++){
		printf("%.0f ",b[i]);
	}
	return 0;
}
