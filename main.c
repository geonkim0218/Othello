#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 6
int gameboard[N][N];
void main(int argc, char *argv[]) {

	int a, b;//�ʿ��� ������ ����-> a: ����, b:���� ��ǥ 
	
	init_othello();//���� �ʱ�ȭ
	
	while (isGameEnd() == 0) {//game ���� ���� Ȯ��
		print_othello();//��ġ ���� ��� ��
		
		if (a[a][b]=0)// ��ġ�� ������ ĭ�� �ִ��� Ȯ��)
			continue;//�� player ��� ��ġ�� �Ұ����ϸ� �ݺ����� ������������
			
		printf("put a new white othello : ");
		scanf("%d %d", &a, &b); //��ġ�� ��ǥ �Է¹ޱ�
			
			if (a[a][b]!=0)//�Է���ǥ�� �������� üũ(���ڸ����� Ȯ��)
				if(������ �õ�) {
					

					printf("*flip result*\n");
					printf(" W: E: S: NW: NE: SW: SE: \n", );//��� ���⿡�� �������� ����� ��µǴ°� 
					printf(" white has flipped ? othellos!\n");//�̹� turn���� �� � ���������� ���
					print_othello;//������ ��ġ ���� ��� 
					
					printf("put a new black othello : ");
					scanf("%d %d", &a, &b);//�� �ٲ�
				}
				
			else
				printf("invalid input! (no flip happens)\n");//�������� �Է����� ���
	} 		
	check_result();//��� ��� 
	
	return 0;
}
