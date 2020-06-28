#include<stdio.h>
#include<string.h>
#include"per.h"
int student()
{
    char a[20],b[20];
  	int j=0;
	  while(j<3)
	  {
        printf("请输入用户名：");
        scanf("%s",a);
        printf("请输入用户密码：");
        scanf("%s",b);
   		 for(int i=0;i<100;i++)
		 {
        	 if(strcmp(a,stu[i].name)==0  &&  strcmp(b,stu[i].code)==0)
        	 {
       	    	 printf("         欢迎%s学生登录管理系统        \n",stu[i].name);

	   	 		stumulu(i);return 0;
        	 }
       		 
		 }
		 printf("用户名或密码输入错误\n");
		 j++;
	  }
	return 0;
}        
