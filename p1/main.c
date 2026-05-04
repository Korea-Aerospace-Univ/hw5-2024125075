#include <stdio.h>

int main(void){
{
  int N;
  int found = 0; // 가능한 경우 체크
  int a, b, c; // 세가지 상품의 
  int count = 0; // 조건에 맞는 경우의 수를 체크하기 위해
  
  scanf("%d", &N); //금액입력받기
  
  for(a = 1; a * 900 <= N; a++) { // 세 개 반복문 돌려 모든 경우의 수 확인
     for(b = 2; (a * 900) + (b * 750) <= N; b+= 2) {
         for(c = 1; (a * 900) + (b * 750) + (c * 200) <= N; c++) {  
             
             if((a* 900) + (b * 750) + (c * 200) == N) { // 총합이 N인가?
                 if (c < a || c < b) { //c수량은 a보다 적거나 b보다 작아야함.
                    printf("%d %d %d\n", a, b, c);
                    count++; 
                 }
             }
         }
     }
  }
  
  if (count == 0 ) {
      printf("none\n");
  }
  
  return 0;
}
