#include<stdio.h>
#include"per.h"
void tea_read(TEA *p)
{
	FILE *fp=fopen("tea_data","r+");
	tea_num=fread(p,sizeof(TEA),100,fp);
	fclose(fp);

}
void stu_read(STU *p)
{
	FILE *fp;
	fopen("stu_data","r+");
	stu_num=fread(p,sizeof(struct student),100,fp);
	fclose(fp);
}
void teasave(TEA *p)
{
	FILE *fp=fopen("tea_data","w+");
	fwrite(p,sizeof(TEA),tea_num,fp);
    fclose(fp);

}
void stusave(STU *p)
{
	FILE *fp;
	fp=fopen("stu_data","w+");
    fwrite(p,sizeof(STU),stu_num,fp);
    fclose(fp); 
}


