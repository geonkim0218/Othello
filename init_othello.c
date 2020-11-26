/*게임 초기화*/ 
#define N 6
char init_othello(char a[N][N]) {
	
	int i, j; // i: 가로줄, j: 세로줄 
	
	//출력 틀 짜기
	printf("  0 1 2 3 4 5 \n");  
	printf("ㅡㅡㅡㅡㅡㅡㅡ\n");  
	
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {	
		
			a[i][j]=' '; //게임보드 각 칸(행렬 한칸 한칸)에 공백 입력하기->초기화 
			//O:white, X:black
			a[2][2]='O'; //흰 돌 초기배치 
			a[2][3]='X'; //흑 돌 초기배치 
			a[3][2]='X'; //흑 돌 초기배치 
			a[3][3]='O'; //흰 돌 초기배치 
		}
		printf("%d|%c|%c|%c|%c|%c|%c|\n", i, a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], a[i][5]);
		printf("ㅡㅡㅡㅡㅡㅡㅡ\n");			
	}
	
	return 0;
}

