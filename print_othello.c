/*��ġ ���� ��� �Լ�*/ 
#define N 6
extern int a, b;
extern void print_othello(int gameboard[N][N]) {
	
	int i, j;//i: ������, j: ������  
	
	/*gameboard ���*/ 
	if (i!=a && j!=b) {
		printf(" |");
		printf("%c|", gameboard[i][j]);
		printf("\n");
	}
		
	return 0;
}
