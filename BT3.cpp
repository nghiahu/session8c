#include <stdio.h>
int main(){
	int sum = 0;
	int n , find_array;
	printf("nhap so phan tu cua mang : ");
	scanf("%d",&n);
	printf("nhap vao gia tri find_array : ");
	scanf("%d",&find_array);
	int array[n];
	for(int i = 0 ; i < n ; i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	for(int i = 0 ; i < n ; i++){
		if(array[i] == find_array){
			sum += array[i];
		}
	}
	printf("\n");
	printf("tong cac phan tu do la %d",sum);
}
