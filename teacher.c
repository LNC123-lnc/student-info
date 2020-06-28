#include<stdio.h>
#include<string.h>
#include"per.h"
int  teacher()
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
		    if(strcmp(a,tea[i].name)==0  &&  strcmp(b,tea[i].code)==0)
     		 {
				printf("       欢迎%s老师登录管理系统   \n",tea[i].name);
				teamulu(i);return 0;
					
	  		 }
	 		if(strcmp(a,tea[i].name)!=0 || strcmp(b,tea[i].code)!=0)
	 	    {
	  	       j++;
	        }
	    }	
	  }
	  return 0;
		
}   
