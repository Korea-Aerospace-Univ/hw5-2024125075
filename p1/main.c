#include <stdio.h>

int main(void){

  int N; // 
  bool count = false; // 조건의 참거짓을 판단하기위한 bool 사용 
  
  scanf("%d", &N); //금액(정수)입력받기
  
  for(int a = 1; a * 900 <= N; a++) { // 세 개 반복문 돌려 모든 경우의 수 확인, 
     for(int b = 2; (b * 750) <= N; b+= 2) {  //b의 금액은 항상 짝수여서 초기값을 2부터 잡고 증감식으로는 +2를 한다. 그리고 
         for(int c = 1; (c * 200) <= N; c++) {  // c의 수량은 1개부터 구매가능하니 초기값을 1로 주고, 증감식은 +1로 한다. 
          //조건식은 a,b,c의 금액의 총합이 입력된 N보다 작거나 같아야 구매가능해서 이와같이 조건식을 작성한다.
             
             if((a* 900) + (b * 750) + (c * 200) == N) { // 총합이 N인가?
                 if (c < a || c < b) { //c수량은 a보다 적거나 b보다 작아야함.
                    printf("%d %d %d\n", a, b, c);
                    count = true; 
                 }
             }
         }
     }
  }
  
  if (!count ) { // 아무것도 살 수 없을 때는 count가 0으로 false이므로 if문이 적용되어 none을 출력한다.
      printf("none\n"); // none을 출력한다.
  }
  
  return 0;
}
