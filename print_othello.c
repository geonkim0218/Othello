/*��ġ ���� ��� �Լ�*/ 
#define N 6

void print_othello(int a, int b, int color, int m[N][N]) {
	
	int i, j; //i: ������, j: ������
	
	//��� Ʋ ¥��  
	printf("  0 1 2 3 4 5 \n");  
	printf("�ѤѤѤѤѤѤ�\n");  
	
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {	
			m[i][j]=' '; //���Ӻ��� �� ĭ(��� ��ĭ ��ĭ)�� ���� �Է��ϱ�
			
			//O:white, X:black
			m[2][2]='O'; //�� �� �ʱ��ġ 
			m[2][3]='X'; //�� �� �ʱ��ġ 
			m[3][2]='X'; //�� �� �ʱ��ġ 
			m[3][3]='O'; //�� �� �ʱ��ġ 
			
			//�Է¹��� ��ǥ�� �� ���� gameboard�� ����ϱ� 
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
		printf("�ѤѤѤѤѤѤ�\n");
	}
	
	return 0;
}
