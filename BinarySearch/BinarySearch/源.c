#include<stdio.h>
int binarySearch(int n, int  arr[], int key);
int binarySearch(int n, int arr[], int key) {
	int low = 0;
	int high = n - 1;
	while (low <= high) {
		//�м�λ�ü���,low+ ���λ�ü�ȥ���λ��,����һλ,�൱�ڳ�2.Ҳ������(high+low)/2
		int middle = low + ((high - low) >> 1);
		// int middle=(low+high)/2;
		//�����м�����ֽ����ж�,�Ƿ����,��ȵĻ��ͷ��ض�Ӧ�������±�.
		if (key == arr[middle]) {
			return middle;
			//���С�ڵĻ����ƶ���߲��"ָ��"
		}
		else if (key < arr[middle]) {
			high = middle - 1;
			//�ƶ���͵�"ָ��"
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
