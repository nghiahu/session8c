#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int array[n];
	 for (int i = 0; i < n; i++) {
      printf("array[%d]=",i);
      scanf("%d", &array[i]);
  }
	int max = array[0];
	for(int i = 0 ; i < n ; i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	printf("max = %d \n",max);

	int min = array[0];
	for(int i = 0 ; i < n ; i++){
		if(min > array[i]){
			min = array[i];
		}
	}
	printf("min = %d \n",min);
}
