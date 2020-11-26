#define N 6
/*따지고자 하는 특정 방향과 시작 칸을 입력 받아서 뒤집을 수 있는 돌의 개수와 돌의 색깔을 확인하는 함수*/

extern int gameboard[N][N];
int checkFlip(int startX, int startY, int color) {
	
	int i, j;
	int dx[8]={-1,-1,0,1,1,1,0,-1}; //북쪽부터 시계방향으로 8개 방향을 -1,1로 표시 
	int dy[8]={0,1,1,1,0,-1,-1,-1}; //북쪽부터 시계방향으로 8개 방향을 -1,1로 표시 

	if (color = 'white')
		gameboard[startX][startY]='O';	//흰 돌은 O로 
	else if (color = 'black')
		gameboard[startX][startY]='X'; //검은 돌은 X로 
	
	for (i=0;i<8;i++) { //8가지 방향에 대해 돌의 배치 상황을 확인 
		for (j=1;j<6;j++) {
			if ((startX+dx[i]*j<0) || (startY+dy[i]*j<0) || (startX+dx[i]*j>6) || (startY+dy[i]*j>6)) { 
				break;
			}   //돌의 위치가 게임판을 넘어가는 경우, 멈춤 
			
			if (gameboard[startX+dx[i]*j][startY+dy[i]*j] = gameboard[startX][startY]) {
				return 1;
				break;
			}   //입력받은 시작위치(a,b)에서 돌을 8개 방향으로 이동시키면서 동일한 색의 돌을 만나는 경우, 1 반환  
						
			if (gameboard[startX+dx[i]*j][startY+dy[i]*j] != gameboard[startX][startY]) {
				return 0;
				break;
			}	//입력받은 시작위치(a,b)에서 돌을 8개 방향으로 이동시키면서 다른 색의 돌을 만나는 경우, 0 반환
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
