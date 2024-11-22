#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void oa();
void cb();
void da();
void wa();

struct bank
{
    char hname[20];int accnum;float accbal;
};
struct bank bokk[5];

int main()
{
    int q;

    printf("------> Bharat Bank <-----\n");
    printf("---------------------------\n");
    printf("1. Open Account \n");
    printf("2. Check Balance\n");
    printf("3. Deposit Amount\n");
    printf("4. Withdraw Amount\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d",&q);
    fflush(stdin);
    system("cls");
    switch(q)
    {
        case 1:
        printf("Account Open Service\n");
        printf("_________________________________________________________\n");
        printf("   \n");
        printf("Please Enter Name,Account number and Balance carefully\n");
        printf("   \n");
        oa();
        break;
        case 2:
        printf("Balance Check Service\n");
        printf("_________________________________________________________\n");
        printf("   \n");
        cb();
        break;
        case 3:
        printf("Amount Deposit Service\n");
        printf("_________________________________________________________\n");
        printf("   \n");
        da();
        break;
        case 4:
        printf("Amount Withdraw Service\n");
        printf("_________________________________________________________\n");
        printf("   \n");
        wa();
        break;
    };


}
void oa()
{
    int a,s,d;
    for(a=1;a<=2;a++)
    {
        fflush(stdin);
        printf("Enter name of the %d Customer: ",a);
        scanf("%s",bokk[a].hname);
        fflush(stdin);
        printf("Enter Account no of the %d Customer: ",a);
        scanf("%d",&bokk[a].accnum);
        fflush(stdin);
        printf("Enter Balance of the %d Customer: ",a);
        scanf("%f",&bokk[a].accbal);
    }
    printf(".......\n");
    printf("........\n");
    system("cls");
    printf("Entered Customer list ....\n");
    for(s=1;s<=2;s++)
    {
        printf("%d  %s  %d  %f \n",s,bokk[s].hname,bokk[s].accnum,bokk[s].accbal);
    }
    printf("For repeating programm press 1 of for exit press 2:");
    scanf("%d",&d);
    system("cls");
    switch(d)
    {
        case 1:
        main();
        case 2:
        exit(0);
    }

}
void cb()
{
    int m,l,r;
    system("cls");
    printf("Enter Account no. whose balance to be check: ");
    scanf("%d",&m);
    for(l=0;l<=2;l++)
    {
        if(m==bokk[l].accnum)
        {
            printf("Avilable Balance is ==> %f\n",bokk[l].accbal);
        }

    }
    printf("For repeating program press 1 and for exit press 2: ");
    scanf("%d",&r);
    fflush(stdin);
    system("cls");
    switch(r)
    {
        case 1:
        main();
        case 2:
        exit(0);
    }  
}
void da()
{
    int z,x,c;
    float t;
    system("cls");
    printf("Please Enter Account no of the customer who want to deposit money: ");
    scanf("%d",&z);
    fflush(stdin);
    printf("Enter amount: ");
    scanf("%f",&t);
    fflush(stdin);
    for(x=0;x<=2;x++)
    {
        if(z==bokk[x].accnum)
        {
            printf("Avilable Balance is ==> %f\n",bokk[x].accbal);
            printf("  \n");
            printf("----------------------------------------");
            printf(" \n");
            bokk[x].accbal=bokk[x].accbal+t;
            printf("After Deposit Balance is >> %f\n",bokk[x].accbal);
        }
    }
    printf("Press 1 for repeat and 2 for exit:");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
        case 1:
        main();
        case 2:
        exit(0);
    }

}
void wa()
{
    int z,x,c;
    float t;
    system("cls");
    printf("Please Enter Account no of the customer who want to Withdraw money: ");
    scanf("%d",&z);
    fflush(stdin);
    printf("Enter amount: ");
    scanf("%f",&t);
    fflush(stdin);
    for(x=0;x<=2;x++)
    {
        if(z==bokk[x].accnum)
        {
            printf("Avilable Balance is ==> %f\n",bokk[x].accbal);
            printf("  \n");
            printf("----------------------------------------");
            printf(" \n");
            if(t<=bokk[x].accbal)
            {
                bokk[x].accbal=bokk[x].accbal-t;
                printf("After Withdraw Balance is >> %f\n",bokk[x].accbal);
            }
            else
            {
                printf("Balance not avilable\n");
            }

        }
    }
    printf("Press 1 for repeat and 2 for exit:");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
        case 1:
        main();
        case 2:
        exit(0);
    }

}