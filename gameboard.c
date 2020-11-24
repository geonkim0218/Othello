//O:white, X:black
#define N 6
int gameboard[N][N]={
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0} };

extern void init_othello(int gameboard[N][N]) {
	int i, j;
	
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {	
			gameboard[i][j]='_';
		}
	}
		
	gameboard[3][3]='O';
	gameboard[4][4]='O';
	gameboard[3][4]='X';
	gameboard[4][3]='X';
	
	printf("%c", gameboard[i][j]);
	return 0;
}
