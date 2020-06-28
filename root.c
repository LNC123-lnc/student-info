#include<stdio.h>
#include<string.h>
#include"per.h"
int root()
{
    char a[20],b[20];
    char c1[20]={"admin"};char c2[20]={"123456"};
    int i=0;
	
	while(1)
	{
	  if(i==3)
	  {
	  	break;
	  }
		printf("请输入用户名：");
 	    scanf("%s",a);getchar();
 	    printf("请输入用户密码：");
   	    scanf("%s",b);getchar();
      if(strcmp(a,c1)==0  &&  strcmp(b,c2)==0)
      { 
        printf("欢迎管理员登录!\n");
		rootmulu(); 
		return 0;
      }
      else
	  {
		printf("密码输入错误!\n");
	    i++;
	  }
	}
	return 0;
}     
