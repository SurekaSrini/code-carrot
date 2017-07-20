#include<stdio.h>
	int main()
	{
	char passengername,trainname;
	int time,date,seatnum,ticket,choice;
	char scr,dest;
	{
	printf("Ticket reservation");
	printf("Menu");
	printf("1.bookin\t2.Canelling\t3.exit\n");
	printf("enter your choice");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1:
	printf("enter the trainname");
	scanf("%s",&trainname);
	printf("enter the passengername");
	scanf("%s",&passengername);
	printf("enter the ticket number");
	scanf("%d",&ticket);
	printf("enter the seat number");
	scanf("%d",&seatnum);
	printf("source place");
	scanf("%s",&scr);
	printf("destination place");
	scanf("%s",&dest);
	printf("\n...........................................");
	printf("\n..............booked sucessfully...............");
	break;
	
	case 2:
	printf("enter the train name");
	scanf("%s",&trainname);
	printf("enter the passenger name");
	scanf("%s",&passengername);
	printf("enter the ticket number");
	scanf("%d",&ticket);
  }
  }
  }
