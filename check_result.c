/*��ü �ݺ�(����)�� ������ ���Ӱ�� ���*/ 
#define N 6
int check_result(int a[N][N]) {
	
	int i, j;
	int totalwhite=0; //���Ӱ��, �� ���� �� ���� 
	int totalblack=0; //���Ӱ��, ���� ���� ȫ ���� 
	
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
	
	printf("STATUS - WHITE : %d, BLACK : %d\n", totalwhite, totalblack); //�ݺ����� ���� ��, �� ���� ���� ���� �� ���� ���  
	
	if (totalwhite>totalblack)
		printf("The winner is white player!\n"); //��ü ���, �� ���� ���� ������ ���� ���, ����:white player 
	
	else if (totalwhite<totalblack)
		printf("The winner is black player!\n"); //��ü ���, ���� ���� �� ������ ���� ���, ����:black player
	
	else 
		printf("There is no winner!\n"); //��ü ���, ���� ���� ���� �� ���� ���� ���� ���, �� �º� 
}

