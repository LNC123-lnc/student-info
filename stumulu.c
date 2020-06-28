#include<stdio.h>
#include"per.h"
int stumulu(int n)
{
    while(1)
	{
	printf("_____________________________________________\n");
	printf("|____________              _________________|\n");
	printf("|____________1.查看自己的信息_______________|\n");
	printf("|____________2.修改自己的信息_______________|\n");
	printf("|____________3.退出_________________________|\n");
	printf("|___________________________________________|\n");

	printf("请输入序号：");
	int a,j,i,xxh;
	scanf("%d",&a);
    getchar();	
	
	      if(a<=3&&a>=1)
		  {
	  		switch(a)
	  	  {
	  		case 1:
		        printf("学号:%d\n",stu[n].num);
               	printf("姓名:%s\n",stu[n].name);
				printf("密码:%s\n",stu[n].code);
                printf("年龄:%d\n",stu[n].age);
                printf("班级:%d\n",stu[n].grade);
				printf("数学成绩:%d\n",stu[n].math);
				printf("语文成绩:%d\n",stu[n].chinese);
				printf("c语言成绩:%d\n",stu[n].c);
                printf("名次:%d\n",stu[n].ranking);
                printf("\n");break;

		    case 2:
				
				printf("输入新密码");
				scanf("%s",stu[n].code);
				getchar();
				printf("修改成功\n");break;

			case 3:stusave(stu);return 0;
				
	   		default:  break;
	 	  } 
		 }	
  }
}
