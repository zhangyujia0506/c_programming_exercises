/*统计单词数目*/ 
#include <stdio.h>
int main()
{
 char s[81],c;//定义字符型数组的长度为81 
 int i,num=0,word=0;
 printf("请输入英文:");
 gets(s);
 for(i=0;(c=s[i])!='\0';i++)//判断是不是句尾（句尾是用/0结尾） 
 if(c==' ')
	word=0;//空格0
  else
	if(word==0)//空格判断前没空格
    {
      word=1;//复位用判断空格否存关
      num++;//前空格单词数加1
    }
 printf("%s\n",s);
 printf("本行共%d单词.\n",num);
}
