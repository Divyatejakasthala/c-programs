
#include<stdio.h>
struct dob
{
    int day,mnth,year;
};
struct student
{
    int id;
    char name[20];
    float per;
    struct dob d;
};
int main()
{
    struct student s;
    printf("enter student id:\n");
    scanf("%d",&s.id);
    printf("enter student name:\n");
    scanf("%s",s.name);
    printf("enter student per:\n");
    scanf("%f",&s.per);
    printf("enter student date of birth:\n");
    scanf("%d%d%d",&s.d.day,&s.d.mnth,&s.d.year);
printf("the student details are:\n");
    printf("id=%d\n",s.id);
    printf("name=%s\n",s.name);
    printf("per=%f\n",s.per);
printf("day=%d\n",s.d.day);
printf("mnth=%d\n",s.d.mnth);
printf("year=%d\n",s.d.year);
}
