#include <stdio.h>
main(){
	char a[3][4];
	//����4�У�ÿ��4��
	
	printf("������һ�����֣����Զ�����");
	
	for(int i=0;i<3;i++)//��
	{
		
		for(int j=0;j<4;j++)//ÿ�е�����
		{
			scanf("%c",&a[i][j]);
			
		}
		
	}//��ȡ����
	
	for(int s=0;s<3;s++)
	{
		
		for(int b=0;b<4;b++)
		{
			printf("%c",a[s][b]);
			
		}
		printf("\n");
		
		
	}//�ظ��������
	
}