#include<stdio.h>
#include<conio.h>
struct set{
int a1[10];
int a2[10];
int n;
}
set;
void makeset()
{
int i;
for(i=0;i<set.n;i++)
set.a1[i]=i;
set.a2[i]=0;
}
void displayset()
{
int i;
printf("\na1 array\n");
for(i=0;i<set.n;i++)
{
    int j;
    for(j=0;j<set.n;i++)
    set.a1[j]=j;
    set.a2[j]=0;
}
void displayset()
{
    int j;
    printf("\na2 array\n");
    for(j=0;j<set.n;i++)
}
void union()
{
    int i,j,[a1][a2]
    for(i=0;i<set.n;i++)
        for(j=0;j<set.n;i++)
        printf(i[a1]union[a2])
}
void intersection()
{
    int i,j,[a1][a2]
    for(i=0;i<set.n;i++)
        for(j=0;j<set.n;i++)
        printf(i[a1]intersection[a2])

}
void difference()
{
    int i,j,[a1][a2]
    for(i=0;i<set.n;i++)
        for(j=0;j<set.n;i++)
        print(i[a-j]-[a2])

}
int main()
{
int x,y,n;
printf("\nenter number of elements :\n");
scanf("%d",&set.n);
makeset();
int ch,w;
do{
printf("\n1.UNION\n2.INTERSECTION \n3.DIFFRENCE");
printf("\n enter choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:
    printf("\n enter elements to perform union :");
    scanf("%d%d",&x,&y);
    Union(x,y);
    break;
case 2:
    printf("\n enter elements to perform intersection :");
    scanf("%d%d",&x,&y);
    intersection((x)n(y));
    break;
case 3:
    printf("\n enter elements to perform difference :")
    scanf("%d%d,&x,&y");
    difference((x)-(y));
}
while(w==1);
return 0;
}


