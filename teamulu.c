#include<stdio.h>
#include<string.h>
#include"per.h"
void teamulu(int n)
{   
	int i,j,k,l,xh,m=0,b=0;char a[32],ch;
    while(1)
	{
	printf("*      1查看自己的信息      *\n");
	printf("*      2修改密码            *\n");
	printf("*      3查看所有学生信息    *\n");
	printf("*      4修改学生的信息      *\n");
    printf("*      5返回                *\n");
	scanf("%d",&l);getchar();
	switch(l)
	{
		case 1:
		  printf("教工号：%d",tea[n].num);
		  printf("姓名：%s",tea[n].name);
		  printf("班级：%d",tea[n].grade);
		  printf("密码: %s\n",tea[n].code);
		  break;

		case 2:
		  printf("输入新密码:");
		  scanf("%s",tea[n].code);getchar();
		  printf("修改成功!\n");
		  break;
		case 3:
		  while(1)
		{
		  printf("------1请输入你要查找学生的姓名------\n");
		  printf("------2查看全部学生信息--------------\n");
		  scanf("%d",&k);getchar();
		  switch(k)
		  {
		  	case 1:		
			  scanf("%s",a);getchar();
			  for(i=0;i<stu_num;i++)
			  {
			  	if(strcmp(a,stu[i].name)==0)
				{
				  j=1;
					        printf("学号：%-4d  ",stu[i].num);
			     		    printf("语文: %-4d  ",stu[i].chinese);
				            printf("名次: %-4d  ",stu[i].ranking);
			     			printf("姓名: %-4s  ",stu[i].name);
			  		    	printf("密码: %-4s  ",stu[i].code);
			      		 	printf("年龄: %-4d  ",stu[i].age);
			     		 	printf("班级: %-4d  ",stu[i].grade);
			     		 	printf("C语言:%-4d  ",stu[i].c);
			     		 	printf("数学: %-4d  \n",stu[i].math);
				}
			  
			  }
			  if(j!=1)
			  {
				printf("没有该学生，清重新输入。\n");
			  }
			   while(1)
               {
		         printf("是否继续查找(y/n)\n");
        		 scanf("%c",&ch);
        		 getchar();
        		 if(ch=='y')
         		 {
            		break;
         		 }
         		 else if(ch=='n')
         		 {
                    return ;
                 }
               }
			   break;

			  case 2:display();		  break;   
	 	      default :break;
		   }
		}
		
		case 4: amend();break;

		case 5: stusave(stu);teasave(tea); return;
		default:break; 
	  
	}
	}
}
