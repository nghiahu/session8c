#include <stdio.h>
int main(){
	int sum = 0;
	int row , col;
	printf("nhap vao so hang va cot cua mang 2 chieu :\n");
	scanf("%d %d", &row , &col);

	int array[row][col];
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}

	printf("Gia tri cac phan tu trong mang 2 chieu \n");
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			printf("%d \t",array[i][j]);
		}
		printf("\n");
	}

	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			if(array[i][j] % 2 == 0){
				sum += array[i][j];
			}
		}
	}
	printf("%d",sum);
}
