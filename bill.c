#include<stdio.h>
struct electricity_bill{
    int bill_no;
    char name[30];
    int flatnum;
    int pending_amount;
};
int main(){
    int n,choice,billnum1,amountpaid1,billnum2,billnum3;
    printf("Enter number of customers\n");
    scanf("%d",&n);
    struct electricity_bill s[n];
    for(int i=0;i<n;i++){
        printf("Enter bill number\n");
        scanf("%d",&s[i].bill_no);
        printf("Enter name\n");
        scanf("%s",&s[i].name);
        printf("Enter your Flat Number\n");
        scanf("%d",&s[i].flatnum);
        printf("Enter pending amount\n");
        scanf("%d",&s[i].pending_amount);
    }
    // for user
    printf("Enter 1 to pay your pending bill\nEnter 2 to know your pending amount\nEnter 3 to know your details\n");
    scanf("%d",&choice);
    switch(choice){
    case 1: 
    printf("Enter your bill number\n");
    scanf("%d",&billnum1);
    for(int i=0;i<n;i++){
        if(billnum1==s[i].bill_no){
            printf("Your pending amount is %d\n",s[i].pending_amount);
            printf("Enter amount you want to pay\n");
            scanf("%d",&amountpaid1);
            printf("Amount paid is %d\n",amountpaid1);
            printf("Now remaining amount is %d\n",s[i].pending_amount-amountpaid1);
        }
    }
    break;
    case 2:
    printf("Enter your bill number\n");
    scanf("%d",&billnum2);
    for(int i=0;i<n;i++){
        if(billnum2==s[i].bill_no){
            printf("Your pending amount is %d\n",s[i].pending_amount);
        }
    }
    break;
    case 3:
    printf("Enter your bill number\n");
    scanf("%d",&billnum3);
    for(int i=0;i<n;i++){
        if(billnum3==s[i].bill_no){
            printf("Your registered name is %s\n",s[i].name);
            printf("Your bill number is %d\n",s[i].bill_no);
            printf("Your registered Flat Number is %d\n",s[i].flatnum);
            printf("Your pending amount is %d\n",s[i].pending_amount);
        }
    }
    break;
}
return 0;
}
