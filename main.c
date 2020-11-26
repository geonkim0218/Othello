#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[N][N];
extern char init_othello(char a[N][N]);
extern int isGameEnd();
extern int checkFlip(int startX, int startY, int color);
extern int check_result(int a[N][N]);
extern int turnpass();

void main(int argc, char *argv[]) {
	
	int a, b; //필요한 변수들 정의-> 새로 입력받은 돌의 위치 a: 가로, b:세로 좌표
	int whitestone=2; //반복문을 돌 때마다 바뀌는 흰 돌의 개수 
	int blackstone=2; //반복문을 돌 때마다 바뀌는 검은 돌의 개수 
	int white, black; //color
	
	init_othello(gameboard);//게임 초기화
	
	while (isGameEnd(gameboard) > 0) {//game 종료 조건 확인
		
		if (turnpass() == 0) {// 배치가 가능한 칸이 있는지 확인) 
			printf("Turn pass!\n");
			continue; //두 player 모두 배치가 불가능하면 반복문을 빠져나가야함
		}
		
		printf("STATUS - WHITE : %d, BLACK : %d\n", whitestone, blackstone); //매 반복문을 반복한 뒤, 흰 돌과 검은 돌의 개수 출력 
		printf("put a new white othello : ");
		scanf("%d %d", &a, &b); //배치할 좌표 입력받기
			
		if (checkFlip(a, b, white) == 1) { //입력좌표가 적절한지 체크(이웃돌이 존재하는가)
			
			if(checkFlip(a, b, white) == 0) { //뒤집을 수 있는, 기존에 배치된 알이 존재하는가 
				//뒤집기 시도 
				gameboard[a][b]='O' 
				  
				printf("*flip result*\n");
				printf("E: W: S: N: NW: NE: SW: SE: \n");//어느 방향에서 뒤집히는 결과가 출력되는가 
				printf(" white has flipped ? othellos!\n");//이번 turn에서 총 몇개 뒤집었는지 출력
				print_othello(a, b, white, gameboard);//뒤집힌 배치 상태 출력 
				
				//턴 바꿈	
				printf("put a new black othello : ");
				scanf("%d %d", &a, &b); 
				}
		}
				
		else
			printf("invalid input! (no flip happens)\n");//부적절한 입력임을 출력
			 
	}
	check_result(gameboard);//결과 출력 
	
	return 0;
}
