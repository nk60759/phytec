/*#include<<stdio.h>
int main()
{
    struct simp
    {
        int i=6;
        char city[]="chennai";
            };
            struct simp s1;
            printf("%d",s1.city);
            printf("%d",s1.i);
            return 0;
}*/
/*#include<stdio.h>
int main()
{
    struct employee
    {
        int empid[5];
        int salary;
        int*s;

    }emp;
    printf("%d%d",sizeof(emp),sizeof(emp.empid));
    return 0;

}*/
/*#include<stdio.h>
#include<string.h>
struct player
{
    char pname[20];

}pl;
char*play(struct player*temp_pl)
{
    strcpy(temp_pl.>pname,"kholi");
    return temp_pl.>
}*/
/*#include<stdio.>
struct decl
{
    int n=100;

}d1;
int main()
{
    printf("%d",d1.n);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    struct zoho
    {
        int employees;
        char comp[5];
        struct founder
        {
            char ceo[10];
        }p;
    };
    struct zoho zs={4000,"zoho","sridhar"};
    printf("%d%s%s",zs.comp,zs.employees,zs.p.ceo);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    struct branch
    {
        char bran[10]="bangalore";
        int bpin=431;
    };
    struct headoff
    {
        char head[10];
        int hpin;
    };

}*/
#include<stdio.h>
int main()
{
    struct str;
    {
        int s1;
        char st[30];
    };
    struct str s[]={ {1,"struct1"},{2,"struct2"},{3,"struct3"} };
    printf("%d%s",s[2].s1,(*(s+2)).st);
}