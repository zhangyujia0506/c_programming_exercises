/*��дһ������ʵ��������ɫ�����⣻��12�����У��к�ɫ��3ֻ����ɫ��3ֻ�ͺ�ɫ��6ֻ�����������12ֻ����ȡ��8ֻ�����ܵõ���������ɫ���䣻ÿ�ִ����и�����ɫ�����ж��١�*/
#include<stdio.h>
void main()
{
	int redball,writeball,blackball;//���������� 
	for(redball=0;redball<=3;redball++) //����û��Ҫ��������������һ�����ʸ���ɫ��ĳ�ʼֵ��0��1�� 
	for(writeball=0;writeball<=3;writeball++)
	for(blackball=0;blackball<=6;blackball++)
	if((redball+blackball+writeball)==8)//�����������ӵ���8 
		printf("����=%d,����=%d,����=%d\n",redball,blackball,writeball);//������������������� 
}
