//This program is to book a train ticket and print the ticket
#include<stdio.h>
#include<stdlib.h>
#include "String.h"
//declaring functions
void printStationDetails();
void printTicketDetails();
void printTicket(float ticketprice , float ticketdistance, int count ,char name[]);
int getNumberOfTickets(int no);
float insertDetails();
float calculateTicket(float distance);
float calculateDiscount(float ticketprice);

//declaring a global variable
int number;

//function main begins
int main(){
    //declaring variables
    int count = 1;
    int num = 0;
    char name[20];
    char startstation;
    char destination;
    char choice = 'Y';
    float ticketPrice;
    float ticketDist = 0;



    //displaying outputs for user to input
    printf("--------------------------------------------------------------------------------\n");
    printf("------------------------Train Booking System Generator--------------------------\n");
    printf("************                                                        ************\n");
    printf("************                                                        ************\n");
    printf("************                                                        ************\n");
    printf("************                Welcome to the system                   ************\n");

    //loop
    while(choice == 'Y' || choice == 'y'){
        //calling declared functions
        //calling PrintStationDetails function
        printStationDetails();

        //calling insertDetails function
        ticketDist = insertDetails();

        //calling PrintTicketDetails function
        printTicketDetails();

        //calling calculateTicket function
        ticketPrice = ticketPrice + calculateTicket(ticketDist);


        //calling getNumberOfTickets function
        num = num + getNumberOfTickets(number);
        number = 0;

        //asking to continue or not
        printf("Do you want to continue? Type [Yes = Y || No = N] :");
        scanf(" %c", &choice);

        //validations
        if( choice == 'Y' || choice == 'y'){
            count++;
        }
        else if(choice == 'N' || choice == 'n' ){
            break;
        }
        else{
            printf("/nInvalid Input");
            break;
        }


        printf("\n");
        printf("\n");
        printf("\n");
    }

    printf("Enter the Name of the Ticket Owner :");
    scanf("%s", &name);

    //calling printTicket function
    printTicket(ticketPrice,ticketDist,num,name);

    //displaying ending outputs
    printf("---------------------------------------------------------------------------------\n");
    printf("************                                                        ************\n");
    printf("************                                                        ************\n");
    printf("************            Hope you enjoyed our service!               ************\n");
    printf("************                      Thank You!                        ************\n");
    printf("************                                                        ************\n");
    printf("************                                                        ************\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("-----------------------------Train Booking System Generator----------------------\n");
    printf("---------------------------------------------------------------------------------\n");
    return 0;
}
//function main ends

//function printStationDetails begins
void printStationDetails(){
    printf("\t\t\t| Station Name  | Station Code  |\n");
    printf("\t\t\t|---------------|---------------|\n");
    printf("\t\t\t| Colombo       |      [C]      |\n");
    printf("\t\t\t| Mathara       |      [M]      |\n");
    printf("\t\t\t| Hatton        |      [H]      |\n");
    printf("\t\t\t| Jaffna        |      [J]      |\n");
    printf("\t\t\t| Kandy         |      [K]      |\n");
    printf("\t\t\t| Polgahawela   |      [P]      |\n");
}
//function printStationDetails ends

//function printTicketDetails begins
void printTicketDetails(){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t| Ticket Class  |  Ticket Code  | Ticket price for 10KM |\n");
    printf("\t\t\t|---------------|---------------|-----------------------|\n");
    printf("\t\t\t| 1st class     |       1       |           75          |\n");
    printf("\t\t\t| 2nd class     |       2       |           50          |\n");
    printf("\t\t\t| 3rd class     |       3       |           25          |\n");
    printf("\t\t\t| A/C class     |       4       |           100         |\n");
}
//function printStationDetails ends

//function insertDetails begins
float insertDetails(){
    //declaring variables
    char st,des;
    float distance;

    printf("\nType the Station code------------");
    printf("\nWhat is your Starting Station? :");
    scanf(" %c", &st);
    printf("\nWhat is your destination?      :");
    scanf(" %c", &des);

    //checking conditions
    if( st == des){
        printf("\n!!!!!!!Problem!!!!!!!!!!\n");
        printf("Your destination and starting stations are same\n");
    }
    else if( st == 'C' || st == 'c'){
        if(des == 'P' || des == 'p'){
            printf("\nYour Destination is Polgahawela");
            printf("\nDistance for your destination is 70 Km");
            distance = 70.0;
        }
        else if(des == 'K' || des == 'k'){
            printf("\nYour Destination is Kandy");
            printf("\nDistance for your destination is 100 Km");
            distance = 100.0;
        }
        else if(des == 'H' || des == 'h'){
            printf("\nYour Destination is Hatton");
            printf("\nDistance for your destination is 125 Km");
            distance = 125.0;
        }
        else if(des == 'M' || des == 'm'){
            printf("\nYour Destination is Mathara");
            printf("\nDistance for your destination is 160 Km");
            distance = 160.0;
        }
        else if(des == 'J' || des == 'j'){
            printf("\nYour Destination is Jaffna");
            printf("\nDistance for your destination is 350 Km");
            distance = 350.0;
        }
        else{
            printf("\nInvalid Destination");
            printf("\nDistance for your destination is 0 Km");
            distance = 0.0;
        }
    }
    else if( st == 'P' || st == 'p'){
        if(des == 'C' || des == 'c'){
            printf("\nYour Destination is Colombo");
            printf("\nDistance for your destination is 70 Km");
            distance = 70.0;
        }
        else if(des == 'K' || des == 'k'){
            printf("\nYour Destination is Kandy");
            printf("\nDistance for your destination is 50 Km");
            distance = 50.0;
        }
        else if(des == 'H' || des == 'h'){
            printf("\nYour Destination is Hatton");
            printf("\nDistance for your destination is 100 Km");
            distance = 100.0;
        }
        else if(des == 'M' || des == 'm'){
            printf("\nYour Destination is Mathara");
            printf("\nDistance for your destination is 230 Km");
            distance = 230.0;
        }
        else if(des == 'J' || des == 'j'){
            printf("\nYour Destination is Jaffna");
            printf("\nDistance for your destination is 320 Km");
            distance = 320.0;
        }
        else{
            printf("\nInvalid Destination");
            printf("\nDistance for your destination is 0 Km");
            distance = 0.0;
        }
    }
    else if( st == 'K' || st == 'k'){
        if(des == 'P' || des == 'p'){
            printf("\nYour Destination is Polgahawela");
            printf("\nDistance for your destination is 50 Km");
            distance = 50.0;
        }
        else if(des == 'C' || des == 'c'){
            printf("\nYour Destination is Colombo");
            printf("\nDistance for your destination is 100 Km");
            distance = 100.0;
        }
        else if(des == 'H' || des == 'h'){
            printf("\nYour Destination is Hatton");
            printf("\nDistance for your destination is 50 Km");
            distance = 50.0;
        }
        else if(des == 'M' || des == 'm'){
            printf("\nYour Destination is Mathara");
            printf("\nDistance for your destination is 240 Km");
            distance = 240.0;
        }
        else if(des == 'J' || des == 'j'){
            printf("\nYour Destination is Jaffna");
            printf("\nDistance for your destination is 370 Km");
            distance = 370.0;
        }
        else{
            printf("\nInvalid Destination");
            printf("\nDistance for your destination is 0 Km");
            distance = 0.0;
        }
    }
    else if( st == 'H' || st == 'h'){
        if(des == 'P' || des == 'p'){
            printf("\nYour Destination is Polgahawela");
            printf("\nDistance for your destination is 100 Km");
            distance = 100.0;
        }
        else if(des == 'K' || des == 'k'){
            printf("\nYour Destination is Kandy");
            printf("\nDistance for your destination is 50 Km");
            distance = 50.0;
        }
        else if(des == 'C' || des == 'c'){
            printf("\nYour Destination is Colombo");
            printf("\nDistance for your destination is 125 Km");
            distance = 125.0;
        }
        else if(des == 'M' || des == 'm'){
            printf("\nYour Destination is Mathara");
            printf("\nDistance for your destination is 340 Km");
            distance = 340.0;
        }
        else if(des == 'J' || des == 'j'){
            printf("\nYour Destination is Jaffna");
            printf("\nDistance for your destination is 420 Km");
            distance = 420.0;
        }
        else{
            printf("\nInvalid Destination");
            printf("\nDistance for your destination is 0 Km");
            distance = 0.0;
        }
    }
    else if( st == 'M' || st == 'm'){
        if(des == 'P' || des == 'p'){
            printf("\nYour Destination is Polgahawela");
            printf("\nDistance for your destination is 230 Km");
            distance = 230.0;
        }
        else if(des == 'K' || des == 'k'){
            printf("\nYour Destination is Kandy");
            printf("\nDistance for your destination is 250 Km");
            distance = 250.0;
        }
        else if(des == 'H' || des == 'h'){
            printf("\nYour Destination is Hatton");
            printf("\nDistance for your destination is 190 Km");
            distance = 190.0;
        }
        else if(des == 'C' || des == 'c'){
            printf("\nYour Destination is Colombo");
            printf("\nDistance for your destination is 160 Km");
            distance = 160.0;
        }
        else if(des == 'J' || des == 'j'){
            printf("\nYour Destination is Jaffna");
            printf("\nDistance for your destination is 550 Km");
            distance = 550.0;
        }
        else{
            printf("\nInvalid Destination");
            printf("\nDistance for your destination is 0 Km");
            distance = 0.0;
        }
    }
    else if( st == 'J' || st == 'j'){
        if(des == 'P' || des == 'p'){
            printf("\nYour Destination is Polgahawela");
            printf("\nDistance for your destination is 320 Km");
            distance = 320.0;
        }
        else if(des == 'K' || des == 'k'){
            printf("\nYour Destination is Kandy");
            printf("\nDistance for your destination is 370 Km");
            distance = 370.0;
        }
        else if(des == 'H' || des == 'h'){
            printf("\nYour Destination is Hatton");
            printf("\nDistance for your destination is 420 Km");
            distance = 420.0;
        }
        else if(des == 'M' || des == 'm'){
            printf("\nYour Destination is Mathara");
            printf("\nDistance for your destination is 550 Km");
            distance = 550.0;
        }
        else if(des == 'C' || des == 'c'){
            printf("\nYour Destination is Colombo");
            printf("\nDistance for your destination is 350 Km");
            distance = 350.0;
        }
        else{
            printf("\nInvalid Destination");
            printf("\nDistance for your destination is 0 Km");
            distance = 0.0;
        }
    }

    return distance;
}
//function insertDetails ends

//function calculateTicket begins
float calculateTicket(float distance){
    //declaring variables
    int clz;
    float dist = distance;
    float price;

    printf("\nEnter ticket details------------");
    printf("\nEnter your ticket class? :");
    scanf(" %d", &clz);
    printf("\nEnter number of tickets you want?  :");
    scanf(" %d", &number);

    switch(clz){
    case 1:
        price = (dist/10) * number * 75;
        printf("You selected a 1st class ticket\n");
        break;
    case 2:
        price = (dist/10) * number * 50;
        printf("You selected a 2nd class ticket\n");
        break;
    case 3:
        price = (dist/10) * number * 25;
        printf("You selected a 3rd class ticket\n");
        break;
    case 4:
        price = (dist/10) * number * 100;
        printf("You selected a A/C class ticket\n");
        break;
    default:
        printf("\nInvalid Ticket class. Try again!!!!!!!");
        price = 0.00;
    }
    return price;

}
//function calculateTicket ends

//function calculateDiscount begins
float calculateDiscount(float ticketprice){
    //declaring variables
    int method;
    float tktPrice = ticketprice;
    float discount = 0;

    printf("\n");
    printf("\t\t\t|       Discount Options      |  Dicount Code  | Discount percentage   |\n");
    printf("\t\t\t|-----------------------------|----------------|-----------------------|\n");
    printf("\t\t\t|  Paying by Debit card       |       1        |           20          |\n");
    printf("\t\t\t|  Paying by Credit card      |       2        |           10          |\n");
    printf("\t\t\t|  Paying by Cash             |       3        |            5          |\n");

    printf("\nEnter Paying method  : ");
    scanf(" %d", &method);

    switch(method){
    case 1:
        discount = tktPrice * 0.2;
        printf("You have got 20 percent discount\n");
        break;
    case 2:
        discount = tktPrice * 0.1;
        printf("You have got 10 percent discount\n");
        break;
    case 3:
        discount = tktPrice * 0.05;
        printf("You have got 5 percent discount\n");
        break;
    default:
        printf("\nInvalid Payment option. Try again!!!!!!!");
        discount = 0.00;
    }

    return discount;

}
//function calculateDiscount ends

//function getNumberOfTickets begins
int getNumberOfTickets(int no){
    //declaring variables
    int tickets;

    tickets = no;
    return no;
}
//function getNumberOfTickets ends

//function printTicket begins
void printTicket(float ticketprice, float ticketdistance, int count , char name[]){

    //declaring functions
    float newTicketPrice;
    float discount = 0;

    //calling calculateDiscount function
    discount = calculateDiscount(ticketprice);

    //calculation
    newTicketPrice = (ticketprice - discount);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("***************              Your Ticket                       ***************\n");
    printf(" Name of the Ticket Owner   -------------------------------------    %s       \n",name);
    printf(" Traveling Distance         -------------------------------------    %.2f     \n",ticketdistance);
    printf(" Number of Tickets          -------------------------------------    %d       \n",count);
    printf(" Train Ticket Price         -------------------------------------    %.2f     \n",ticketprice);
    printf(" Discount                   -------------------------------------    %.2f     \n",discount);
    printf(" Total Price for Ticket     -------------------------------------    %.2f     \n",newTicketPrice);
    printf("----------------------------------------------------------------------------------\n");
}
//function printTicket ends
