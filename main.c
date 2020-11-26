#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[N][N];
extern char init_othello(char a[N][N]);
extern int isGameEnd();
extern int checkFlip(int startX, int startY, int color);
extern int check_result(int a[N][N]);
extern int turnpass();

void main(int argc, char *argv[]) {
	
	int a, b; //�ʿ��� ������ ����-> ���� �Է¹��� ���� ��ġ a: ����, b:���� ��ǥ
	int whitestone=2; //�ݺ����� �� ������ �ٲ�� �� ���� ���� 
	int blackstone=2; //�ݺ����� �� ������ �ٲ�� ���� ���� ���� 
	int white, black; //color
	
	init_othello(gameboard);//���� �ʱ�ȭ
	
	while (isGameEnd(gameboard) > 0) {//game ���� ���� Ȯ��
		
		if (turnpass() == 0) {// ��ġ�� ������ ĭ�� �ִ��� Ȯ��) 
			printf("Turn pass!\n");
			continue; //�� player ��� ��ġ�� �Ұ����ϸ� �ݺ����� ������������
		}
		
		printf("STATUS - WHITE : %d, BLACK : %d\n", whitestone, blackstone); //�� �ݺ����� �ݺ��� ��, �� ���� ���� ���� ���� ��� 
		printf("put a new white othello : ");
		scanf("%d %d", &a, &b); //��ġ�� ��ǥ �Է¹ޱ�
			
		if (checkFlip(a, b, white) == 1) { //�Է���ǥ�� �������� üũ(�̿����� �����ϴ°�)
			
			if(checkFlip(a, b, white) == 0) { //������ �� �ִ�, ������ ��ġ�� ���� �����ϴ°� 
				//������ �õ� 
				gameboard[a][b]='O' 
				  
				printf("*flip result*\n");
				printf("E: W: S: N: NW: NE: SW: SE: \n");//��� ���⿡�� �������� ����� ��µǴ°� 
				printf(" white has flipped ? othellos!\n");//�̹� turn���� �� � ���������� ���
				print_othello(a, b, white, gameboard);//������ ��ġ ���� ��� 
				
				//�� �ٲ�	
				printf("put a new black othello : ");
				scanf("%d %d", &a, &b); 
				}
		}
				
		else
			printf("invalid input! (no flip happens)\n");//�������� �Է����� ���
			 
	}
	check_result(gameboard);//��� ��� 
	
	return 0;
}
