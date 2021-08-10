#include<stdio.h>
#include<conio.h>
void abc(void);
void total(void);
void call(void);	
int qty[7]={0};
char item[7][10]={"tea","vadapav","samosa","misal","dosa","pohe","colddrink"};
int price[7]={6,10,10,17,22,15,17};
int a,b,c,d,e,f,g;
char other;
void main()
{
       int i,choice;
      clrscr();
      printf("\t********** Welcome of Canteen Billing System **********\n\t\t\t\t\t\n");
      printf("\nEnter Choice\n1:Choice\n2:bill\n");
      scanf("%d",&choice);
      clrscr();
       if(choice==1)
      {	
             abc();
      }
      else if(choice==2)
      total();
      else
      printf("Enter 1 for choice and 2 for Bill");
}
void call(void)
{
       int choice;
      clrscr();
      printf("\nEnter Choice\n1:Choice\n2:bill\n");
      scanf("%d",&choice);
      clrscr();
      if(choice==1)
      {
           abc();
      }
      else if(choice==2)
          total();
      else
      printf("Enter 1 for choice and 2 for Bill");
}
void abc(void)
{
        int i;
        printf("\t\twhat do you want...???\t\t");       
        printf("\n1:Tea=6\n2:Vadapav=10\n3:Samosa=10\n4:Misal= 17\n5:Dosa=22\n6:Pohe=15\n7:colddrink=17\n");
       scanf("%d",&i);
       switch(i)
      {
              case 1:
                         printf("\nEnter quantity of Tea\n");
                         scanf("%d",&qty[0]);
                         a=price[0]*qty[0];
                         call();
                         break;
              case 2:
                         printf("\nEnter quantity of Vadapav\n");
                         scanf("%d",&qty[1]);
                         b=price[1]*qty[1];
                         call();
                         break;
              case 3:
                         printf("\nEnter quantity of Samosa\n");
                         scanf("%d",&qty[2]);
                         c=price[2]*qty[2];
                         call();
                         break;
              case 4:
                         printf("\nEnter quantity of Misal\n");
                         scanf("%d",&qty[3]);
                        d=price[3]*qty[3];
                        call();
                        break;
              case 5:
                         printf("\nEnter quantity of Dosa\n");
                         scanf("%d",&qty[4]);
                         e=price[4]*qty[4];
                         call();
                         break;
              case 6:
                         printf("\nEnter quantity of Pohe\n");
                         scanf("%d",&qty[5]);
                         f=price[5]*qty[5];
                         call();
                         break;
              case 7:
                          printf("\nEnter quantity of Colddrink\n");
                          scanf("%d",&qty[6]);
                          g=price[6]*qty[6];
                          call();
                          break;
              default:
                          printf("\nNot Available\n");
                          call();
      }
}
void total(void)
{
        int i,bill;
       printf("Items\t\t\tQuantity\t\tAmount");
       if(qty[0]!=0)
       printf("\nTea\t\t\t%d\t\t\t%d",qty[0],a);
       if(qty[1]!=0)
       printf("\nVadapav\t\t\t%d\t\t\t%d",qty[1],b);
       if(qty[2]!=0)
       printf("\nSamosa\t\t\t%d\t\t\t%d",qty[2],c);
       if(qty[3]!=0)
       printf("\nMisal\t\t\t%d\t\t\t%d",qty[3],d);
       if(qty[4]!=0)
       printf("\nDosa\t\t\t%d\t\t\t%d",qty[4],e);
       if(qty[5]!=0)
       printf("\nPohe\t\t\t%d\t\t\t%d",qty[5],f);
       if(qty[6]!=0)
       printf("\nColddrik\t\t%d\t\t\t%d",qty[6],g);
       bill=a+b+c+d+e+f+g;
       printf("\n\n\tTotal Bill= %d",bill);
       printf("\n\t\t********** Thanks For Visiting**********");
       getch();
}

