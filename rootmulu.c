#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"per.h"
void addtea();
void deltea();
void display();
void found();
void amend();
void amendtea();
void showtea();
void add();
void foundtea();
void del();
void rootmulu()
{

    while(1)
	{
	printf("_____________________________________________\n");
	printf("|____________      学生    _________________|\n");
	printf("|____________1.录入学生信息_________________|\n");
	printf("|____________2.删除学生信息_________________|\n");
	printf("|____________3.修改学生信息_________________|\n");
	printf("|____________4.查找学生信息_________________|\n");
	printf("|____________5.显示所有学生信息_____________|\n");
	printf("|____________6.保存学生信息_________________|\n");
	printf("|__________________教师_____________________|\n");
	printf("|____________7.录入教师信息_________________|\n");
	printf("|____________8.删除教师信息_________________|\n");
	printf("|____________9.修改教师信息_________________|\n");
	printf("|____________10.显示所有教师信息____________|\n");
	printf("|____________11.查找教师信息________________|\n");
	printf("|____________12.保存教师信息________________|\n");
	printf("|____________13.退出________________________|\n");
	printf("|___________________________________________|\n");

	printf("请输入序号：");
	int a,i,j;char ch;
	scanf("%d",&a);
	getchar();
	while(a<1||a>14)
	{
	  printf("您输入的序号错误，清重新输入！");
	  scanf("%d",&a);
	  getchar();
	}
	
	  switch(a)
	 {
		case 1:  add();break;
		case 2:  del();break;
		case 3:  amend();break;
		case 4:  found();break;
		case 5:  display();break;
		case 6:  stusave(stu);printf("保存成功\n");break;
		case 7:  addtea();break;
		case 8:  deltea();break;
		case 9:  amendtea();break;
		case 10: showtea();break;
		case 11: foundtea();break;
		case 12: teasave(tea);printf("保存成功\n");break;
		case 13: printf("是否保存信息(y/n)\n");
				 scanf("%c",&ch);
				 getchar();
				 if(ch=='y')
				 {
				   stusave(stu);
				   teasave(tea);
				   printf("保存成功");
				   return ;
				 }
				 else if(ch=='n')
				 {
				   return ;
				 }
				 else 
				   break;
		default:  break;
	    
	}  
	}
}
void amendtea()//修改教师
{
	
			int a,i,m=0,n=0,x,xjg,j;
			char ch;
			while(1)
			{
		      printf("输入教工号");
     		 scanf("%d",&a);
			 getchar();
    		 for(i=0;i<tea_num;i++)
      		 {
               if(a==tea[i].num)
              {
                x=i;m=1;
                printf("输入新教工号：");
                scanf("%d",&xjg);
                getchar();
                for(j=0;j<tea_num;j++)
                {
                  if(xjg==tea[j].num)
                  {
					n=1;
                    printf("学号输入重复！\n");
                    break;
                  }
                }
			    if(n!=1)
             	{
				   tea[x].num=xjg;
			  	   printf("输入新名字：");
             	   scanf("%s",tea[x].name);
				   getchar();
             	   printf("输入新密码：");
            	   scanf("%s",tea[x].code);
				   getchar();
            	   printf("输入新班级：");
              	   scanf("%d",&tea[x].grade);
			  	   getchar();
			  	   printf("修改成功！\n");
			   	  return ;
			    }
               }
			  }
              if(m!=1)
			  printf("没有你输入的教工号\n");
			 while(1)
			 {
			 	printf("是否继续删除(y/n)");
				scanf("%c",&ch);
				if(ch=='y')
				{
				  break;
				}
				else if(ch=='n')
				  return;
			 }
			}
}
void showtea()//显示老师信息
{
	          	int i,j;
				int jgh[tea_num];
				for(i=0;i<tea_num;i++)
				{
					jgh[i]=tea[i].num;
				}
				for(i=0;i<tea_num-1;i++)
				{
					for(j=0;j<tea_num-1-i;j++)
					{
					  if(jgh[j]>jgh[j+1])
					  {
						jgh[j]=jgh[j]+jgh[j+1];
						jgh[j+1]=jgh[j]-jgh[j+1];
						jgh[j]=jgh[j]-jgh[j+1];
					  }
					}
				}
				for(i=0;i<tea_num;i++)
				{
				  for(j=0;j<tea_num;j++)
				  {
				     if(tea[j].num==jgh[i])
					 {
						printf("教工号:%d   ",tea[j].num);
						printf("姓名:%s   ",tea[j].name);
						printf("密码:%s   ",tea[j].code);
						printf("班级:%d   \n",tea[j].grade);
					 }
				  }
				}
				return ;
}

void foundtea()//查找老师信息

{  
  while(1)
  {
	printf("------1按教工号查找-------\n");
	printf("------2按姓名查找-------\n");
	printf("------3按班级查找-------\n");
	int i,j,k,l,a;char b[20];
	printf("请输入序号：");
	scanf("%d",&a);

	switch(a)
	{
	case 1 :  printf("请输入教工号");
			  scanf("%d",&l);getchar();
			for(i=0;i<tea_num;i++)
			{
			   if(l==tea[i].num)
			   {
				 k=1;
			      printf("教工号:%d \n",tea[i].num);
				  printf("姓名:%s \n",tea[i].name);
				  printf("班级;%d \n",tea[i].grade);
				  
			   }
			
			}
			if(k!=1)
			{
			  printf("没有该教工号！\n");
			}
			break;
	case 2 :  printf("请输入姓名");
                scanf("%s",b);
			    getchar();
              for(i=0;i<tea_num;i++)
              {
                 if(strcmp(b,tea[i].name)==0)
                 {
                   k=1;
                    printf("学号: %d \n",tea[i].num);
                    printf("姓名: %s \n",tea[i].name);
                    printf("班级: %d \n",tea[i].grade);  
                 }         
              }
              if(k!=1)
              {
                printf("没有该教师！\n");
              }
              break;
     case 3 :   printf("请输入班级");
                scanf("%d",&l);getchar();
              for(i=0;i<tea_num;i++)
              {
                 if(l==tea[i].grade)
                 {
                   k=1;
                    printf("学号:%d \n",tea[i].num);
                    printf("姓名:%s \n",tea[i].name);
                    printf("班级:%d \n",tea[i].grade);
                    
                 }    
              }
              if(k!=1)
              {
                printf("没有该班级！\n");
              }
              break;
	  default :break;
	}
	char ch;
	while(1)
	{
		printf("是否继续查找");
		scanf("%c",&ch);
		if(ch=='y')
		 break;
		else if(ch=='n')
		  return;
	}
  }
}
void add()//录入学生
{
  int j=0,i=0,t=0;char ch;struct student temp;
  while(1)
  { 
	int n=stu_num;
    printf("请输入学号:");
	scanf("%d",&stu[n].num);getchar();
	for(;j<stu_num;j++)
	{
		if(stu[n].num==stu[j].num)
		{
		  i=1;
		  printf("该学号已存在！\n");
			return ;
		}
		
    }
	if(i!=1)
	{		
  			printf("请输入名字：");
			scanf("%s",stu[n].name);
			getchar();
	  		printf("请输入密码：");
			scanf("%s",stu[n].code);
			getchar();
  			printf("请输入年龄：");
			scanf("%d",&stu[n].age);
			getchar();
  			printf("请输入班级：");
			scanf("%d",&stu[n].grade);
			getchar();
  			printf("请输入数学成绩：");
			scanf("%d",&stu[n].math);
			getchar();
  			printf("请输入C成绩：");
			scanf("%d",&stu[n].c);
			getchar();
  			printf("请输入语文成绩：");
			scanf("%d",&stu[n].chinese);
			getchar();
		stu_num++;
	}
	    for(i=0;i<stu_num;i++)//计算名次
        {
            stu[i].total=(stu[i].math+stu[i].c+stu[i].chinese);
		}
		for(i=0;i<stu_num-1;i++)
		  for(j=0;j<stu_num-1-i;j++)
			if(stu[j].total<stu[j+1].total)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		  for(i=0;i<stu_num;i++)
			stu[i].ranking=i+1;
		while(1)
		{
		  printf("是否继续录入(y/n)");
		  scanf("%c",&ch);getchar();
		  if(ch=='y')
		  {
			t=1;
			break;
		  }
		  else if(ch=='n')
		  {
		  	return ;
		  }
		 
		}
    
         }
  }

void del()
{
	int a,i,j,n=0,t=0,cs=0;
	char ch;struct student temp;
	while(1)
	{
	  if(t==1)
	  {
		break ;
	  }
    printf("请输入要删除学生的学号\n");
	scanf("%d",&a);
	getchar();
	for(i=0;i<stu_num;i++)
	{
		if(a==stu[i].num)
		{
		    n=1;
			if(i==stu_num-1)
			  stu_num-=1;
			else
			{
			  for(j=i;j<stu_num-1;j++)
			  {
				stu[j]=stu[j+1];
			  }
				stu_num-=1;

			}
		}
	}
	 for(i=0;i<stu_num;i++)//计算名次
        {
            stu[i].total=(stu[i].math+stu[i].c+stu[i].chinese);
		}
        for(i=0;i<stu_num-1;i++)
          for(j=0;j<stu_num-1-i;j++)
            if(stu[j].total<stu[j+1].total)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
          for(i=0;i<stu_num;i++)
            stu[i].ranking=i+1;

	if(n!=1)
	{
	  printf("没有该学号!\n");
	}

	  while(cs<3)
	  {
		printf("是否继续删除(y/n)\n");
         scanf("%c",&ch);
		 getchar();
		 if(ch=='y')
		 {
		 	t=2;break;
		 }
		 else if(ch=='n')
		 {
		 	t=1; break ;
		 }
		 else
		 {
		   cs++;
		 }
	  }
	}
}



void amend()//修改学生信息
{
	int a,i,n=0,x,xxh,j,k=0;
	struct student temp;
    printf("输入学号");
	scanf("%d",&a);
	getchar();
	for(i=0;i<stu_num;i++)
	{
		if(a==stu[i].num)
		{
		  x=i;k=1;
		  printf("输入新学号：");
		  scanf("%d",&xxh);
		  getchar();
		  for(j=0;j<stu_num;j++)
		  {
			if(xxh==stu[j].num)
			{
			  n=1;
			  printf("学号输入重复！\n");
			  break;
			}
	      }		 
        	if(n!=1)
        	{
			  stu[x].num=xxh;
			  printf("输入新名字：");
	 		  scanf("%s",stu[x].name);
			  getchar();
			  printf("输入新密码：");
		      scanf("%s",stu[x].code);
		      getchar();
		      printf("输入新年龄：");
		  	  scanf("%d",&stu[x].age);
		  	  getchar();
		  	  printf("输入数学成绩：");
		      scanf("%d",&stu[x].math);
		      getchar();
		      printf("输入新C成绩：");
		      scanf("%d",&stu[x].c);
		      getchar();
		      printf("输入新语文成绩：");
		      scanf("%d",&stu[x].chinese);
		      getchar(); 
		      printf("修改完成\n");
	         }
 for(i=0;i<stu_num;i++)//计算名次
        {   
            stu[i].total=(stu[i].math+stu[i].c+stu[i].chinese);
		}
        for(i=0;i<stu_num-1;i++)                                                                                                   
          for(j=0;j<stu_num-1-i;j++)
            if(stu[j].total<stu[j+1].total)
            {   
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }   
          for(i=0;i<stu_num;i++)
            stu[i].ranking=i+1;

			 return ;
		}
	}
	if(k!=1)
	  printf("没有该学号！");
	return ;
}



void found()
{   
  while(1)
  {
	printf("------1按学号查找-------\n");
	printf("------2按姓名查找-------\n");
	printf("------3按班级查找-------\n");
	int i,j,k,l,a;char b[20],ch;
	printf("请输入序号：");
	scanf("%d",&a);
    getchar();
	switch(a)
	{
	case 1 :  printf("请输入学号");
			  scanf("%d",&l);
			  getchar();
			for(i=0;i<stu_num;i++)
			{
			   if(l==stu[i].num)
			   {
				 k=1;
			      printf("学号:%d \n",stu[i].num);
				  printf("姓名:%s \n",stu[i].name);
				  printf("年龄:%d \n",stu[i].age);
				  printf("班级;%d \n",stu[i].grade);
			      printf("名次;%d \n",stu[i].ranking);

			   }

			}
			if(k!=1)
			{
			  printf("没有该学号！\n");
			}
			break;
	case 2 :  printf("请输入姓名");
                scanf("%s",b);
			    getchar();
              for(i=0;i<stu_num;i++)
              {
                 if(strcmp(b,stu[i].name)==0)
                 {
                   k=1;
                    printf("学号: %d \n",stu[i].num);
                    printf("姓名: %s \n",stu[i].name);
                    printf("年龄: %d \n",stu[i].age);
                    printf("班级: %d \n",stu[i].grade);
                    printf("名次: %d \n",stu[i].ranking);

                 }

              }
             if(k!=1)
              {
                printf("没有该学生！\n");
              }
              break;

     case 3 :   printf("请输入班级");
                scanf("%d",&l);
				getchar();
              for(i=0;i<stu_num;i++)
              {
                 if(l==stu[i].grade)
                 {
                   k=1;
                    printf("学号:%d \n",stu[i].num);
                    printf("姓名:%s \n",stu[i].name);
                    printf("年龄:%d \n",stu[i].age);
                    printf("班级:%d \n",stu[i].grade);
                    printf("名次:%d \n",stu[i].ranking);

                 }

              }
              if(k!=1)
              {
                printf("没有该班级！\n");
              }
              break;
	  default : break;
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
  }	
}

void display()
{
	printf("1.按学号顺序显示\n");
	printf("2.按名次顺序显示\n");
	printf("3.按某科成绩显示\n");
    int a,i,j,k;
	char n[128],c[32];
	float sumyw=0,sumcyy=0,sumsx=0; 
	struct student temp;
	printf("请输入序号;");
	scanf("%d",&a);
	getchar();
	 for(i=0;i<stu_num;i++)//计算名次
        {   
            stu[i].total=(stu[i].math+stu[i].c+stu[i].chinese);
		}
        for(i=0;i<stu_num-1;i++)                                                                                                   
          for(j=0;j<stu_num-1-i;j++)
            if(stu[j].total<stu[j+1].total)
            {   
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }   
          for(i=0;i<stu_num;i++)
            stu[i].ranking=i+1;

	switch(a)
	{
				 	case 1: 
						for(i=0;i<stu_num-1;i++)
					    {
				          for(j=0;j<stu_num-1-i;j++)
				          {
							if(stu[j].num>stu[j+1].num)
							{
								temp=stu[j];
								stu[j]=stu[j+1];
								stu[j+1]=temp;
							}
						  }
						}
						for(j=0;j<stu_num;j++)
					      {
			     		    printf("学号：%-4d  ",stu[j].num);
			     		    printf("语文: %-4d  ",stu[j].chinese);
				            printf("名次: %-4d  ",stu[j].ranking);
			     			printf("姓名: %-4s  ",stu[j].name);
			  		    	printf("密码: %-4s  ",stu[j].code);
			      		 	printf("年龄: %-4d  ",stu[j].age);
			     		 	printf("班级: %-4d  ",stu[j].grade);
			     		 	printf("C语言:%-4d  ",stu[j].c);
			     		 	printf("数学: %-4d  \n",stu[j].math);

					      }
						  break;
		
	  
		case 2: 
			for(i=1;i<stu_num+1;i++)
				 {
				   for(j=0;j<stu_num;j++)
				   {
				     if(stu[j].ranking==i)
					  {
				         printf("名次: %-4d  ",stu[j].ranking);
			     		 printf("学号：%-4d  ",stu[j].num);
			     		 printf("姓名: %-4s  ",stu[j].name);
			  		     printf("密码: %-4s  ",stu[j].code);
			      		 printf("年龄: %-4d  ",stu[j].age);
			     		 printf("班级: %-4d  ",stu[j].grade);
			     		 printf("C语言:%-4d  ",stu[j].c);
			     		 printf("数学: %-4d  ",stu[j].math);
			     		 printf("语文: %-4d  \n",stu[j].chinese);

					  }
				   }	 
				 }break;

		case 3:
				 printf("*             1.按语文成绩排序             *\n");
				 printf("*             2.按c语言成绩排序            *\n");
				 printf("*             3.按数学成绩排序             *\n");
				 printf("              input num:             \n");
				 scanf("%d",&k);
				 getchar();
				 switch(k)
				 {
				 	case 1: 
					  
					for(i=0;i<stu_num-1;i++)
    				{
        				for(j=0;j<stu_num-i-1;j++)
        				{
            				if(stu[j].chinese<stu[j+1].chinese)
            				{
                				temp=stu[j];
                				stu[j]=stu[j+1];
                				stu[j+1]=temp;
                
            				}
        				}
    				}
	
						 for(j=0;j<stu_num;j++)				            
					      {
			     		    printf("语文: %-4d  ",stu[j].chinese);
				            printf("名次: %-4d  ",stu[j].ranking);
			     		    printf("学号：%-4d  ",stu[j].num);
			     			printf("姓名: %-4s  ",stu[j].name);
			  		    	printf("密码: %-4s  ",stu[j].code);
			      		 	printf("年龄: %-4d  ",stu[j].age);
			     		 	printf("班级: %-4d  ",stu[j].grade);
			     		 	printf("C语言:%-4d  ",stu[j].c);
			     		 	printf("数学: %-4d  \n",stu[j].math);

					      }
						for(i=0;i<stu_num;i++)
						{
							sumyw+=stu[i].chinese;
						}
						printf("语文平均分:%0.2f\n",(sumyw/stu_num));
						

						break;


					case 2: 
					for(i=0;i<stu_num-i;i++)
                    {
        				for(j=0;j<stu_num-i-1;j++)
        				{
           					 if(stu[j].c<stu[j+1].c)
            				 {
                               temp=stu[j];
                               stu[j]=stu[j+1];
                               stu[j+1]=temp;

                              } 
						}
					}
						for(j=0;j<stu_num;j++)
						{ 
						  
						    printf("C语言:%-4d   ",stu[j].c);
			     		    printf("语文: %-4d   ",stu[j].chinese);
				            printf("名次: %-4d   ",stu[j].ranking);
			     		    printf("学号：%-4d   ",stu[j].num);
			     			printf("姓名: %-4s   ",stu[j].name);
			  		    	printf("密码: %-4s   ",stu[j].code);
			      		 	printf("年龄: %-4d   ",stu[j].age);
			     		 	printf("班级: %-4d   ",stu[j].grade);
			     		 	printf("数学: %-4d  \n",stu[j].math);
						}
						for(i=0;i<stu_num;i++)
                        {                                                                                                          
                            sumcyy+=stu[i].c;
                        }   
                        printf("C语言平均分:%0.2f\n",(sumcyy/stu_num));

						break;
				 
					case 3:
					     for(i=0;i<stu_num-1;i++)
     					 {
                            for(j=0;j<stu_num-i-1;j++)
                            {
                              if(stu[j].math<stu[j+1].math)
                               {
                                  temp=stu[j];
                                  stu[j]=stu[j+1];
                                  stu[j+1]=temp;
                
							   }
							}
						 }

						for(j=0;j<stu_num;j++)
						{
			     		 	printf("数学: %-4d  ",stu[j].math);
			     		    printf("语文: %-4d  ",stu[j].chinese);
				            printf("名次: %-4d  ",stu[j].ranking);
			     		    printf("学号：%-4d  ",stu[j].num);
			     			printf("姓名: %-4s  ",stu[j].name);
			  		    	printf("密码: %-4s  ",stu[j].code);
			      		 	printf("年龄: %-4d  ",stu[j].age);
			     		 	printf("班级: %-4d  ",stu[j].grade);
			     		 	printf("C语言:%-4d  \n",stu[j].c);

					      }
						for(i=0;i<stu_num;i++)
                        {                                                                                                          
                            sumsx+=stu[i].math;
                        }   
                        printf("数学平均分:%0.2f\n",(sumsx/stu_num));

						break;
				 
				 } 
					default :  break;
	}
		
}

void deltea()
{

	int a,i,n,cs=0,t=0;
	char x;
	while(1)
	{
	  
    printf("请输入要删除教师的教工号");
	scanf("%d",&a);
	getchar();
	for(i=0;i<tea_num;i++)
	{
		if(a==tea[i].num)
		{
		  n=1;
			if(i==tea_num-1)
			  tea_num-=1;
			else
			{
			  for(int j=i;j<tea_num-1;j++)
			  {
				tea[j]=tea[j+1];
			  }
				tea_num-=1;
			}

		}
	}
	if(n!=1)
	    printf("没有该教工号!\n");
	   while(1)
	   {
		 printf("是否继续删除(y/n)\n");
         scanf("%c",&x);
	     getchar();
	    if(x=='y')
	    {
	    	break;
	    }
	    else if(x=='n')
	    {
	    	return;
	    }

	   }

	}
      
}

void addtea()
{
  while(1)
  {
  int n=tea_num;
  int j=0,i=0;
  char ch;
  	printf("请输入教工号:");
	scanf("%d",&tea[n].num);
	getchar();
	for(;j<tea_num;j++)
	{
		if(tea[n].num==tea[j].num)
		{
            i=1;    
			printf("该教工号已存在！\n");
		}
    
	}
	if(i!=1)
	{
	        printf("请输入名字：");
			scanf("%s",tea[n].name);
			getchar();
	  		printf("请输入密码：");
			scanf("%s",tea[n].code);
			getchar();
  			printf("请输入班级：");
			scanf("%d",&tea[n].grade);
			getchar();
			tea_num++;
	}
	 while(1)
      {
        printf("是否继续录入(y/n)\n");
         scanf("%c",&ch);
         getchar();
         if(ch=='y')
         {
            break;
         }
         else if(ch=='n')
         {
            return;
         }
	  }
    }
}









