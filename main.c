#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 6
int gameboard[N][N];
void main(int argc, char *argv[]) {

	int a, b;//필요한 변수들 정의-> a: 가로, b:세로 좌표 
	
	init_othello();//게임 초기화
	
	while (isGameEnd() == 0) {//game 종료 조건 확인
		print_othello();//배치 상태 출력 등
		
		if (a[a][b]=0)// 배치가 가능한 칸이 있는지 확인)
			continue;//두 player 모두 배치가 불가능하면 반복문을 빠져나가야함
			
		printf("put a new white othello : ");
		scanf("%d %d", &a, &b); //배치할 좌표 입력받기
			
			if (a[a][b]!=0)//입력좌표가 적절한지 체크(빈자리인지 확인)
				if(뒤집기 시도) {
					

					printf("*flip result*\n");
					printf(" W: E: S: NW: NE: SW: SE: \n", );//어느 방향에서 뒤집히는 결과가 출력되는가 
					printf(" white has flipped ? othellos!\n");//이번 turn에서 총 몇개 뒤집었는지 출력
					print_othello;//뒤집힌 배치 상태 출력 
					
					printf("put a new black othello : ");
					scanf("%d %d", &a, &b);//턴 바꿈
				}
				
			else
				printf("invalid input! (no flip happens)\n");//부적절한 입력임을 출력
	} 		
	check_result();//결과 출력 
	
	return 0;
}
