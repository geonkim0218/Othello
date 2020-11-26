#define N 6
/*�������� �ϴ� Ư�� ����� ���� ĭ�� �Է� �޾Ƽ� ������ �� �ִ� ���� ������ ���� ������ Ȯ���ϴ� �Լ�*/

extern int gameboard[N][N];
int checkFlip(int startX, int startY, int color) {
	
	int i, j;
	int dx[8]={-1,-1,0,1,1,1,0,-1}; //���ʺ��� �ð�������� 8�� ������ -1,1�� ǥ�� 
	int dy[8]={0,1,1,1,0,-1,-1,-1}; //���ʺ��� �ð�������� 8�� ������ -1,1�� ǥ�� 

	if (color = 'white')
		gameboard[startX][startY]='O';	//�� ���� O�� 
	else if (color = 'black')
		gameboard[startX][startY]='X'; //���� ���� X�� 
	
	for (i=0;i<8;i++) { //8���� ���⿡ ���� ���� ��ġ ��Ȳ�� Ȯ�� 
		for (j=1;j<6;j++) {
			if ((startX+dx[i]*j<0) || (startY+dy[i]*j<0) || (startX+dx[i]*j>6) || (startY+dy[i]*j>6)) { 
				break;
			}   //���� ��ġ�� �������� �Ѿ�� ���, ���� 
			
			if (gameboard[startX+dx[i]*j][startY+dy[i]*j] = gameboard[startX][startY]) {
				return 1;
				break;
			}   //�Է¹��� ������ġ(a,b)���� ���� 8�� �������� �̵���Ű�鼭 ������ ���� ���� ������ ���, 1 ��ȯ  
						
			if (gameboard[startX+dx[i]*j][startY+dy[i]*j] != gameboard[startX][startY]) {
				return 0;
				break;
			}	//�Է¹��� ������ġ(a,b)���� ���� 8�� �������� �̵���Ű�鼭 �ٸ� ���� ���� ������ ���, 0 ��ȯ
		}
	}
	
}


int turnpass() {
	int k, h;
	int white, black;
	int r1, r2, r3, r4;
	
	r1=checkFlip(k, h, white);
	r2=checkFlip(k, h, white);
	r3=checkFlip(k, h, black);
	r4=checkFlip(k, h, black);
	
	for (k=0;k<6;k++) {
		for (h=0;h<6;h++) {
			if ( (r1 == 1) && (r2 == 0) )
				return 1;
			
			if ( (r3 == 1) && (r4 == 0) )
				return 1;			
		}
	}
}
