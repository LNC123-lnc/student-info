#ifndef  _PER_H_
#define _PER_H_
typedef struct student
{
    int num ;
    char name[128];
    char code[32];
    int age;
    int grade;
	int math;
	int c;
	int chinese;
	int ranking;
	int total;
}STU;
typedef struct teacher
{
	int num;
	char name[128];
	char code[32];
	int grade;
}TEA;
int stu_num;
int tea_num;
STU stu[100];
TEA tea[100];
void stusave(STU *p);
void stu_read(STU *p);
void teasave(TEA *p);
void tea_read(TEA *p);
void amend();
int  teacher();
void amendtea();
void login();
int  root();
void rootmulu();
int  student();
int stumulu(int n);
void teamulu(int n);
void display();     
                              

#endif


