/*배치 상태 출력 함수*/ 
#define N 6

void print_othello(int a, int b, int color, int m[N][N]) {
	
	int i, j; //i: 가로줄, j: 세로줄
	
	//출력 틀 짜기  
	printf("  0 1 2 3 4 5 \n");  
	printf("ㅡㅡㅡㅡㅡㅡㅡ\n");  
	
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {	
			m[i][j]=' '; //게임보드 각 칸(행렬 한칸 한칸)에 공백 입력하기
			
			//O:white, X:black
			m[2][2]='O'; //흰 돌 초기배치 
			m[2][3]='X'; //흑 돌 초기배치 
			m[3][2]='X'; //흑 돌 초기배치 
			m[3][3]='O'; //흰 돌 초기배치 
			
			//입력받은 좌표와 돌 색을 gameboard에 출력하기 
			if ((i==a) && (j==b)) {
				if (color='white') { 
					m[a][b]='O';
				}
				else if (color='black') {
					m[a][b]='X';
				}
			}
		}	
		printf("%d|%c|%c|%c|%c|%c|%c|\n", i, m[i][0], m[i][1], m[i][2], m[i][3], m[i][4], m[i][5]);
		printf("ㅡㅡㅡㅡㅡㅡㅡ\n");
	}
	
	return 0;
}
