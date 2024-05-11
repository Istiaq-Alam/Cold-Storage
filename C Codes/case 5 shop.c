//Shop For Pendrive & Ram
 #include<stdio.h>
 int main()
 {
 int amount,price,ch;
 float net,discount,amountToBePaid;
 printf("\tShop\n1.Pendrive purchase\n2.Ram purchase\n");
 printf("Enter your choice");
 scanf("%d",&ch);
 printf("\n Enter purchased amount: ");
 scanf("%d",&amount);
 printf("Enter the price per item: ");
 scanf("%d", &price);
 net = amount * price;
 switch(ch)
{
 case 1:
 if(amount<=100)
 {
 amountToBePaid = net;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 else if(amount>=101 && amount<=200)
 {
 discount = (net*5)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 else if(amount>=201 && amount<=300)
 {
 discount = (net*7.5)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 else if(amount>300)
 {
 discount = (net*10)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 break;
 case 2:
 if(amount<=100)
 {
 discount = (net*5)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 else if(amount>=101 && amount<=200)
 {
 discount = (net*7.5)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 else if(amount>=201 && amount<=300)
 {
 discount = (net*10)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 else if(amount>300)
 {
 discount = (net*15)/100;
 amountToBePaid = net-discount;
 printf("After applying the discount, you have to pay: %0.2f", amountToBePaid);
 }
 break;
 }
 getch();
}
