/*ͳ�Ƶ�����Ŀ*/ 
#include <stdio.h>
int main()
{
 char s[81],c;//�����ַ�������ĳ���Ϊ81 
 int i,num=0,word=0;
 printf("������Ӣ��:");
 gets(s);
 for(i=0;(c=s[i])!='\0';i++)//�ж��ǲ��Ǿ�β����β����/0��β�� 
 if(c==' ')
	word=0;//�ո�0
  else
	if(word==0)//�ո��ж�ǰû�ո�
    {
      word=1;//��λ���жϿո����
      num++;//ǰ�ո񵥴�����1
    }
 printf("%s\n",s);
 printf("���й�%d����.\n",num);
}
