#include<stdio.h>
int find_lcm(int,int);
int main()
{
printf("\n\n\t\tstudytonight-best place to learn\n\n\n");
inta,b,lcm;
printf("\n\nEnter 2 integers to find LCM of:\n");
scanf("%d%d",&a,&b);
lcm=finf_lcm(a,b);
printf("\n\n LCM of %d and %d is: %d\n\n",a,b,lcm);
printf("\n\n\t\t\tcoding is Fun !\n\n\n");
return 0;
}
int find_lcm(int a,intb)
{
static int temp=1;
if(temp%a==0 && temp%b ==0)
{
  return temp;
}
  else
  {
    temp++;
    find_lcm(a,b);
    return temp;
  }
}
