//// 이진 탐색 연습
//// reutrn 을 사용하면 해당 함수에서 벗어난다. 즉 함수를 종료시킨다.
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
//			printf("%d 는 %d 번째 index에 있습니다.", target, mid);
//			return 0;
//		}
//		else if (target < data[mid]) {
//			high = mid - 1;
//		}
//		else if (target > data[mid]) {
//			low = mid + 1;
//		}
//	}
//	printf("%d 는 존재하지 않습니다.", target);
//
//	return 0;
//}