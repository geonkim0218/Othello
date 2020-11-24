/*배치 상태 출력 함수*/ 
#define N 6
extern int a, b;
extern void print_othello(int gameboard[N][N]) {
	
	int i, j;//i: 가로줄, j: 세로줄  
	
	/*gameboard 출력*/ 
	if (i!=a && j!=b) {
		printf(" |");
		printf("%c|", gameboard[i][j]);
		printf("\n");
	}
		
	return 0;
}
