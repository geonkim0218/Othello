/*전체 반복(게임)이 끝나고 게임결과 출력*/ 
#define N 6
int check_result(int a[N][N]) {
	
	int i, j;
	int totalwhite=0; //게임결과, 흰 돌의 총 개수 
	int totalblack=0; //게임결과, 검은 돌의 홍 개수 
	
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {
			if (a[i][j] = 'O') {
				totalwhite++;
			}	
			if (a[i][j] = 'X') {
				totalblack++;
			}	
		}
	}
	
	printf("STATUS - WHITE : %d, BLACK : %d\n", totalwhite, totalblack); //반복문이 끝난 뒤, 흰 돌과 검은 돌의 총 개수 출력  
	
	if (totalwhite>totalblack)
		printf("The winner is white player!\n"); //전체 결과, 흰 돌이 검은 돌보다 많은 경우, 승자:white player 
	
	else if (totalwhite<totalblack)
		printf("The winner is black player!\n"); //전체 결과, 검은 돌이 흰 돌보다 많은 경우, 승자:black player
	
	else 
		printf("There is no winner!\n"); //전체 결과, 검은 돌의 수와 흰 돌의 수가 같은 경우, 무 승부 
}

