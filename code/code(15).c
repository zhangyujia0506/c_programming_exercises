/*ͳ�Ƶ�����Ŀ*/ 
#include <stdio.h>
void main()
{
	char szBuff[32]={0};//��ʼ���ַ����鳤��Ϊ32 
	int i=0;
	int iNum=0;
	gets(szBuff); 
	for(i=0;szBuff[i]!='\0';++i) //�ж��ǲ��Ǿ�ĩ 
		switch(szBuff[i])//��������ԭ�������ո񣬾���һ������ 
		{
			case' ':
			case',':
			case'.'://�⼸��case�������ǣ����ƾ�β�Ľ����� 
			case'!':
			case'?':
				iNum++;
				break;
			default:
				break;
		}
		
	printf("���ʣ�%s,����������%d",szBuff,iNum); //�����������	
}
