/*��дһ�����򣬴Ӽ�������x��y��z���ж�x+y=z�Ƿ����������������롰x+y=z����������������롰x+y!=z����*/
#include<stdio.h>
void main()
{
	int x,y,z;//����x,y,z������ 
	scanf("%d%d%d",&x,&y,&z);//����x,y,z������ 
	if(x+y==z)//�ж������� ���x+y=z 
		printf("%d+%d=%d",x,y,z);//����������� 
	else
		printf("%d+%d!=%d",x,y,z);//���򲻵��������� 
}
