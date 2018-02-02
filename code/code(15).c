/*统计单词数目*/ 
#include <stdio.h>
void main()
{
	char szBuff[32]={0};//初始化字符数组长度为32 
	int i=0;
	int iNum=0;
	gets(szBuff); 
	for(i=0;szBuff[i]!='\0';++i) //判断是不是句末 
		switch(szBuff[i])//计数单词原则，遇到空格，就算一个单词 
		{
			case' ':
			case',':
			case'.'://这几个case的作用是，控制句尾的结束符 
			case'!':
			case'?':
				iNum++;
				break;
			default:
				break;
		}
		
	printf("单词：%s,单词数量：%d",szBuff,iNum); //输出单词数量	
}
