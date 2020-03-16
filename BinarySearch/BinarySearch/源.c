#include<stdio.h>
int binarySearch(int n, int  arr[], int key);
int binarySearch(int n, int arr[], int key) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		//中间位置计算,low+ 最高位置减去最低位置,右移一位,相当于除2.也可以用(high+low)/2
		int middle = low + ((high - low) >> 1);
		// int middle=(low+high)/2;
		//与最中间的数字进行判断,是否相等,相等的话就返回对应的数组下标.
		if (key == arr[middle]) {
			return middle;
			//如果小于的话则移动最高层的"指针"
		}
		else if (key < arr[middle]) {
			high = middle - 1;
			//移动最低的"指针"
		}
		else {
			low = middle + 1;
		}
	}
	return 0;
}
int main() {
	int n = 9, x = 20;
	int T[] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d", binarySearch(n, T, x));
	return 0;
}
