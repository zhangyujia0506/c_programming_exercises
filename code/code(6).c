/*��д����������¹��ܣ��Ӽ�������4������������������ĺ���С����ֵ��*/
#include <stdio.h>
void main()
{
	int iA=0,iB=0,iC=0,iD=0;//�����ĸ��� 
	int iMin=0;//�������ֵ���� 
	int iMax=0;//������Сֵ���� 
	printf("�������һ������");//�����һ���������ֵ��������Сֵ���� 
	scanf("%d",&iA);
	iMin=iA;
	iMax=iA;
	printf("������ڶ�������");//����ڶ����� 
	scanf("%d",&iB);
	if(iMin>iB)//���������бȽ� 
		iMin=iB;//����������ֵ��iMin����ߵ����Դ����� 
	if(iMax<iB)
		iMax=iB;
	printf("���������������");
	scanf("%d",&iC);
	if(iMin>iC)
		iMin=iC;
	if(iMax<iC)
		iMax=iC;
	printf("��������ĸ�����");
	scanf("%d",&iD);
	if(iMin>iD)
		iMin=iD;
	if(iMax<iD)
		iMax=iD;
	printf("��СֵΪ=%d\n���ֵΪ=%d",iMin,iMax);//������������С�� 
}
