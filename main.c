#include <stdio.h>

int main()
{
  int no1,no2,no3,no4,no5,no6,no7,no8,no9,result,ch;

  printf("\n Enter value for no1,no2,no3,no4,no5,no6,no7,no8,no9");
  scanf("%d%d%d%d%d%d%d%d%d",&no1,&no2,&no3,&no4,&no5,&no6,&no7,&no8,&no9);

  printf("\n\t send instructions");
  printf("\n1.change language");
  printf("\n2.balance");
  printf("\n3.my offer");
  printf("\n4.my account info");
  printf("\n5.recharge");
  printf("\n6.other service");
  printf("\n7.dth");
  printf("\n8.payments bank");
  printf("\n9.aritel thanks app");
  printf("\n Enter your choice");
  scanf("%d",&ch);

  switch(ch)

    {
      case1:
            result=no1;
            printf("\n change language");
            break;

      case2:
            result=no2;
            printf("\n balance");
            break;

      case3:
            result=no3;
            printf("\n my offer");
            break;
      
      case4:
            result=no4;
            printf("\n my account info");
            break;
      
      case5:
            result=no5;
            printf("\n recharge");
            break;
      
      case6:
            result=no6;
            printf("\n other service");
            break;

      case7:
            result=no7;
            printf("\n dth");
            break;

      case8:
            result=no8;
            printf("\n payments Bank");
            break;

      case9:
            result=no9;
            printf("\n airtel thanks app");
            break;

      default:
              printf("\n please enter correct choice");
      break;
      
    }
return 0;
}