//// ���� Ž�� ����
//// reutrn �� ����ϸ� �ش� �Լ����� �����. �� �Լ��� �����Ų��.
//
//#include <stdio.h>
//int main(void) {
//	int target, low, high, mid;
//	int data[10] = { 3,4,6,8,14,28,58,89,90,98 };
//
//	scanf_s("%d", &target);
//	low = 0;
//    high = 9;
//
//	while (low <= high) {
//		mid = (low + high) / 2;
//		if (target == data[mid]) {
//			printf("%d �� %d ��° index�� �ֽ��ϴ�.", target, mid);
//			return 0;
//		}
//		else if (target < data[mid]) {
//			high = mid - 1;
//		}
//		else if (target > data[mid]) {
//			low = mid + 1;
//		}
//	}
//	printf("%d �� �������� �ʽ��ϴ�.", target);
//
//	return 0;
//}