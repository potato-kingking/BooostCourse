#include <stdio.h>

void sort(int myNum, int myArr[]);
void chk(int chkN, int chkArr[]);

int main() 
{
	int n = 7;

	int arr[7] = { 0,25,10,17,6,12,9 };

	sort(n, arr);
	chk(n, arr); //버블정렬 여부를 판단해 줄 함수

	return 0;
}

void sort(int myN, int myArr[])
{
	int* temp; // 배열의 주소를 임시로 연동할 포인터변수
	int mem; // 주소가 가리키는 값을 임시로 저장할 변수

	for (int i = 0; i < myN; i++) {
		for (int j = 0; j < myN - 1; j++) {
			if (myArr[j] > myArr[j + 1]) {
				temp = &myArr[j]; // j번째 배열의 주소를 temp에 저장시키고
				mem = *temp; // 해당 주소가 가리키는 값을 mem에 저장

				temp = &myArr[j + 1]; // j+1번째 배열의 주소를 temp에 저장시키고
				myArr[j] = *temp; // 해당 주소가 가리키는 값을 j번째 배열에 저장

				*temp = mem; // mem에 저장되었던 j번째 배열의 값을 temp주소가 가리키는 값, 즉 j+1번째 배열에 저장 
			}
		}
	}
}

void chk(int chkN,int chkArr[])
{
	for (int l = 0; l < chkN-1; l++) {
		if (chkArr[l] > chkArr[l + 1]) { // l번째 배열의 값이 l+1번째 배열의 값보다 크면
			printf("버블정렬 실패"); // "실패"출력한 다음 탈출
			break;
		}			
	}
	printf(" 버블정렬 성공"); // 반복문이 모두 정상 수행되면 "성공" 출력
}
