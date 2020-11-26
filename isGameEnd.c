#define N 6
int isGameEnd(int a[N][N]) {
	
	int i, j;
	int t;
	t=0;
	
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {
			if (a[i][j] = ' ') {
				t++;	
			}		
		}
	}
	return t;
}

