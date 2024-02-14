#include <stdio.h>

int main()
{
int number = 0,choice;
printf("Enter Your Phone Number : ");
scanf("%d",&number);
 start:
printf("\v \v _____________________________ \a");
 
printf("Your Phone Number : \t +91 %d",number);
  printf("\n\t Instructions");
  printf("\n1] Change Language");
  printf("\n2] Check Balance");
  printf("\n3] My Offer");
  printf("\n4] My Account Info");
  printf("\n5] Recharge");
  printf("\n6] Other Services");
  printf("\n7] DTH cable service ");
  printf("\n8] Airtel Payments Bank");
  printf("\n9] Aritel Thanks App");
  printf("\n0] Exit");
  printf("\n\n\n Enter your choice  : ");

  scanf("%d",&choice);
     int choicelang;

  switch(choice)

    {
      case 1:
            printf("_____________________");
            printf("\n Select Language");
            printf("\n1] English \n");
            printf("2] Hindi \n");
            printf("3] Marathi \n");
            
            printf("Choice : ");
            scanf("%d",&choicelang);
        switch(choicelang)
        {
        case 1: 
                printf("_________________\n");
        goto start;
        break;
        default:
        printf("_________________\n");
        printf("No Language available For Now :-(\n");
        goto start;
        break;        
        }

            break;
      case 2:
            printf("_______________________");
            printf("\n balance");
        printf("\nCurrent balence : 0.00 Rs\n");
        printf("Validity : 1 - jan - 2025\n");
        printf("Unlimited Calling\n");
        printf("Unlimited Massege\n");
        printf("2 GB data Per Day \n");                
                    printf("_______________________\n");
        goto start;
            break;

      case 3:
            printf("_____________________\n");
            printf("\n my offer\n");
        printf("No Any offer Available For Now \n");
        goto start;
            break;

      case 4:            
      printf("_____________________\n");
            printf("\n My Account Info");
printf("\nYour Phone Number : \t +91 %d",number);            
        goto start;
            break;

      case 5:
                  printf("_____________________\n");
            printf("\n Recharge\n");
printf("Your Currrent Recharge ammount is : 29999\n");
        printf("Validity : 1 - jan - 2025\n");
        goto start;
            break;

      case 6:
                  printf("_____________________\n");
            printf("\n other service\n");
            printf("For More Information Goto Our Wbsite - \n");
            printf("www.airtel.com\n");
        goto start;            
            break;

      case 7:
                  printf("_____________________\n");
            printf("\n DTH");
            printf("\nToll Free No  : 54633\n");
        goto start;
            break;

      case 8 :
                  printf("_____________________\n");
            printf("\nAirtel Payments Bank");
            printf("\n Download Airtel Payment Bank \n Download From Link And Get 50 Rs cashback \n");
            printf("www.airtelpymentapp.com/refere50");
        goto start;            
            break;

      case 9:
                  printf("_____________________\n");
            printf("\n Airtel Thanks App\n");
        printf("Download Airtel Thanks App And Get 2 GB Data For Free\n");
        printf("www.airtelthanksapp.com/2gb");
        goto start;
            break;

      case 0:
      printf("_____________________\n");
      printf("Exiting. . .\n");
      printf("Thank You ");

            return 0;

      break;
      default:
            printf("_____________________");
              printf("\n please enter correct choice\n\n");
      goto start;
      break;

    }
return 0;
}