#include<stdio.h>
#include"per.h"
void login()
{
 	tea_read(tea); 
	stu_read(stu);
    int i,j=0;
    do
	{
	printf("********************\n");
	printf("*   1.超级管理员   *\n");
	printf("*   2.老师         *\n");
	printf("*   3.学生         *\n");
	printf("*   4.退出         *\n");
	printf("********************\n");
  
	printf("请输入身份：");
	scanf("%d",&i);
	
	switch(i)
	{
	  case 1: root();break;
      case 2: teacher();break;
	  case 3: student();break;
	  case 4: return;
    default:  j++;
			  printf("输入错误，清重新输入!\n");
			  break;
	}
	}while(j<3);
	return ;
	
}
