/* 1 2 3
4 5 6
7 8 9 
��Խ��� 1+5+9��ֵ*/
//ѭ�����룬���Կ�������ľ�����[1][1],[2][2]......


#include <stdio.h>
main(){
	int shu[2][2];//��ά���� 3*3����
	
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			scanf("%d",&shu[i][j]);
		}
	}//��������
	
	
	int a1=0,a2;
	for(int k=0;k<=2;k++)//ѭ�����
	{
		a2=a1+shu[k][k];
		a1=a2;//�ۼ����
		
		if(k<2)//Ϊ������һ�½���
		{
			printf("%d+",shu[k][k]);
			
		}
		else if(k=2){
			printf("%d",shu[2][2]);
		}
		
	}
	printf("=%d",a1);
}