/*Desktop AIRLINE booking & HELP Application*/

/*MADE BY:- GAURAV SAGAR*/
            /* B.Tech III SEM. (C.S.E.)*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
typedef struct info
{
		  char name[9999];
		  char address[MAX];
		  char phone_no[MAX];
		  char depart[25];
		  char arr[25];
		  char card[25];
		  char bno[19];
		  char date[10];
		  char fno[25];
		  char classe[19];
		  char cardn[12];
		  int ad;
		  int ch;
		  int inf;
		  int bf;
		  int ad_amount;
		  int ch_amount;
		  int net_amount;
		  int source;
          int destination;
          }inf;
void cardcheck(inf *);
void ans(int);
int value(int);
void help();
void dated(inf *dat);
int sou(inf *s,int *so);
int des(inf *s,int *de);
void cancel(inf *e);
int p,n,day,month,year;
void main()
{
FILE *fp,*fc;
FILE *fp1;
	  inf in;
	  char z[50],choice,car,clas;
	  int n,p,d,i,j=0,source,destination;
	  printf("\t\t    Welcome to AIR ASIA Booking Portal\n\n\n");
	  printf("   Please Enter your choice by presssing numerals prefixed to the options\n\n   1 <--HELPDESK\t    2 <--MANAGE A BOOKING\t3 <--CANCEL A BOOKING\n");
	  choice=getch();
	  fflush(stdin);
	  switch(choice)
	  {
						 case '1':
                              help();
                              break;
                         case '3':
                              cancel(&in);
                              break;
						 case '2':
      printf("enter your name\n");
	  gets(in.name);
	  printf("enter address\n");
	  gets(in.address);
	  printf("enter phone no. with country code\n");
	  gets(in.phone_no);
	  printf("\nYou have successfully entered your details as");
	  printf("\nname:%s\naddress:%s\nphone no.:%s",in.name,in.address,in.phone_no);
dated(&in);
fflush(stdin);
printf("\t\t\nOur flights ply b/w the following cities\n\n\t\t CITY                CODE");
printf("\n\t\tMUMBAI               1012\n");
printf("\n\t\tNEW DELHI            9087\n");
printf("\n\t\tBANGKOK              5543\n");
printf("\n\t\tSINGAPORE            4321\n");
printf("\n\t\tSHANGHAI             8973\n");
printf("\n\t\tTOKYO                7638\n");
printf("\n\t\tKAULA LAMPUR         5345\n");
printf("\n\t\tDUBAI                4323\n");
p=sou(&in,&source);
n=des(&in,&destination);
d=n+p;
switch(d)
{
case 1002:
in.bf=12009;
strcpy(in.fno,"GS-876");
break;
case 408:
in.bf=19009;
strcpy(in.fno,"GS-375");
break;
case 412:
in.bf=42001;
strcpy(in.fno,"GS-826");
break;
case 418:
in.bf=42602;
strcpy(in.fno,"GS-111");
break;
case 504:
in.bf=56504;
strcpy(in.fno,"GS-396");
break;
case 430:
in.bf=32104;
strcpy(in.fno,"GS-836");
break;
case 702:
in.bf=12304;
strcpy(in.fno,"GS-922");
break;
case 608:
in.bf=32806;
strcpy(in.fno,"GS-262");
break;
case 612:
in.bf=98750;
strcpy(in.fno,"GS-222");
break;
case 618:
in.bf=45400;
strcpy(in.fno,"GS-633");
break;
case 704:
in.bf=11840;
strcpy(in.fno,"GS-888");
break;
case 630:
in.bf=71240;
strcpy(in.fno,"GS-112");
break;
case 902:
in.bf=51340;
strcpy(in.fno,"GS-363");
break;
case 18:
in.bf=31440;
strcpy(in.fno,"GS-735");
break;
case 24:
in.bf=41540;
strcpy(in.fno,"GS-999");
break;
case 110:
in.bf=51640;
strcpy(in.fno,"GS-263"); 
break;
case 36:
in.bf=41740;
strcpy(in.fno,"GS-987"); 
break;
case 308:
in.bf=31840;
strcpy(in.fno,"GS-896");
break;
case 28:
in.bf=41940;
strcpy(in.fno,"GS-563");
break;
case 114:
in.bf=22004;
strcpy(in.fno,"GS-532");
break;
case 40:
in.bf=62140;
strcpy(in.fno,"GS-017");
break;
case 312:
in.bf=54220;
strcpy(in.fno,"GS-253");
break;
case 120:
in.bf=42430;
strcpy(in.fno,"GS-877"); 
break;
case 46:
in.bf=32440;
strcpy(in.fno,"GS-239"); 
break;
case 318:
in.bf=22504;
strcpy(in.fno,"GS-083");
break;
case 132:
in.bf=12460;
strcpy(in.fno,"GS-432");
break;
case 404:
in.bf=52740;
strcpy(in.fno,"GS-342");
break;
case 330:
in.bf=42840;
strcpy(in.fno,"GS-198");
break;
default:
printf("\n\n!!!ERROR:  You cant enter and depart to the same port,\nThe program will exit once u press a key!!!\n");
getch();
exit(1);
}
printf("\n\nPlease Specify your class of Travelling by Pressing the Corresponding keys\n\t1 <--BUSINESS CLASS\t\t  2 <--ECONOMY CLASS\n");
clas=getch();
switch(clas)
{
            case '1':
            strcpy(in.classe,"BUSSINESS CLASS");
     in.bf+=69985;
     break;
case '2':
strcpy(in.classe,"ECONOMY CLASS");
break;
default:
        printf("option not available in the list");
        getch();
        exit(0);}
printf("Flight available is %s at 15:45\nBase Fare is %d",in.fno,in.bf);
printf("\n\nEnter no. of adults, children & infants\n");
scanf("%d%d%d",&in.ad,&in.ch,&in.inf);
in.ad_amount=in.bf*in.ad;
in.ch_amount=(in.bf/2)*in.ch;
in.net_amount=in.ad_amount+in.ch_amount;
fflush(stdin);
printf("Net fare is %d\n\n",in.net_amount);
cardcheck(&in);
for(i=0;in.card[i]!='\0';i++)
{
if(i<12&&i>5)
{in.bno[j]=in.card[i];
j++;}
}
in.bno[j]='\0';                   
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tTransaction Processed Successfully\n\n");
printf("\n\n\t\t\tStatus:\tCONFIRMED\n\n\t\t\tBOOKING NO.:\t%s",in.bno);
printf("\n\n  A COPY OF YOUR E-TICKET HAS BEEN SAVED AS ticket.html ON YOUR COMPUTER.\n\t\tPLZ GET A PRINTOUT OF THE TICKET.\n\t   Refer to the TERMS N CONDITIONS FOR CHECK-IN\n\t\t        HAVE A NICE JOURNEY\n\n\n\n\n\n\n");                                
break;
								}
							    fp=fopen("ticket.html","w+");
  	if(fp==NULL)
  	{puts("Cant open source file");
  	exit(1);}
        fprintf(fp,"<html><body><br>",NULL);
	fprintf(fp,"<div align=center><IMG alt=Logo src=\"Ticket/AIRASIA.JPG\">",NULL);
	fprintf(fp,"<h2><b>AIR ASIA: NOW EVERYONE CAN FLY</b></h2></div><br><br>\n\n\t<b>CONTACT INFORMATION</b><br>\n<b>Name: </b>%s<br>\n<b>Address:</b> %s <br>\n<b>Phone no.:</b>%s<br><br>\n\n<b>No. of Adults:</b>%d     <b>FARE:</b> %d<b>INR<br>\nNO. OF CHILDREN:</b> %d <b> FARE:</b> %d<b>INR</b><br>\n",in.name,in.address,in.phone_no,in.ad,in.ad_amount,in.ch,in.ch_amount,in.inf,in.net_amount);
        fprintf(fp,"<b>No. of Infants:</b>%d    <b>FARE:</b>0.00<b>INR</b><br><br>\n\n\t<b>NET FARE</b>=%d<b>INR</b><br><b>PAID VIA:</b> %s<br><br>\n\nStatus:\t<b>CONFIRMED</b>",in.inf,in.net_amount,in.cardn);        fprintf(fp,"<br>\n<b>Date of Journey:</b> %s",in.date);
        fprintf(fp,"<br><br>\n\n<b>BOOKING NO.:</b>\t%s<br>\n",in.bno);
        fprintf(fp,"<br>\n<b>Flight no. :</b>%s<br><br>\nCLASS:<b> %s</b><br>\n",in.fno,in.classe);
        fprintf(fp,"<br>\n <b>DEPART:</b> %s(%d) at <b>15:45</b><br>\n<b> ARRIVE:</b> %s(%d) at <b>17:55<br><br>\n",in.depart,source,in.arr,destination);
fprintf(fp,"<div align=center><IMG alt=Logo src=\"Ticket/air.JPG\" align=\"left\">",NULL);        
fp1=fopen ( "Ticket/xyz1.txt","r");
                                while(fgets(z,10,fp1)!=NULL)
                                  {
                                  fprintf(fp,"%s",z);
                                  }
                                  fclose(fp1);

fclose(fp);
fc=fopen("record.txt","a+");
                                if(fc==NULL)
                                {puts("Unable to open file");
                                exit(1);}
                                fprintf(fc,"%s%s%s%d ",in.bno,in.date,in.fno,in.net_amount);
						fclose(fc);	
getch();
exit(0);							}
void help()
{
char str[MAX],abs[MAX];
int i,j=0,ascii=0,ps=0,n;
printf("\n\n\n\t\tWELCOME TO THE AUTOMATED CUSTOMER CELL\n\nENTER YOUR QUERY IN LOWER CASE\nquery: ");
gets(str);
printf("\n");
for(i=0;i<=strlen(str);i++)
{
if(str[i]==' '||str[i]=='\0')
{	 abs[i-j]='\0';
	 j=i+1;
     n=value(ascii);
     ps+=n;
     ascii=0;
     }
else
{
    abs[i-j]=str[i];
    ascii+=abs[i-j];}
}             
ans(ps);

getch();
}
     
int value(int ascii)
{
     int n;
switch(ascii)
{
case 764:  /*RESERVE*/
case 745:  /*BOOKING*/
case 427:  /*BOOK*/
     printf("Online booking is a convenient way of finding and booking your flights over the internet. Using Fly Asia online services you can:\n1)build an itinerary to suit your travel plans\n2)request a particular seat, special meal, or service \n3)pay online by credit card using our secure server\n\nTo book your Fly Asia flights online, select your travel cities and dates, choose a suitable flight, confirm your personal details, and decide how you'd like to pay.\n\n\n\n\n");
     main();
     break;
case 530:  /*MEALS*/
case 424:  /*FOOD*/
case 437:  /*MENU*/
case 649:  /*SERVED*/
case 549:  /*SERVE*/
case 633:  
     printf("We are proud to be known for offering some of the best food and entertainment in commercial aviation today. Right from Thai to continental, veg to non-veg, a classic range of exotic sweets n beverages, we serve them all with a smile. Please explore other sections of this site to learn more about our dining options and inflight entertainment. \n\n\n\n\n");
     main();
     break;
case 543:  /*SMOKE*/
case 760:  /*SMOKING*/
     printf("All our flights are non-smoking. All the codeshare flights are also non-smoking.\n\n\n\n\n");
     main();
     break;
case 1064:  /*ELECTRONIC*/
case 538:  /*PHONE*/
case 653:  /*PHONES*/
     printf("Devices such as mobile phones, mp3 players, CD players, radios, and televisions can interfere with the aircraft navigation system, so we ask that passengers refrain from using these devices during their flight. Laptop computers, handheld computer games, cassette recorders, and electric razors may be used during \nthe flight, though not during taxi, take-off, approach and landing. If in doubt \nabout a particular electronic device, please contact your local Emirates office. \n\n\n\n\n");
     main();
     break;
case 1406:  /*ENTERTAINMENT*/
case 761:  /*LEISURE*/
case 329:  /*FUN*/
case 985:  /*ENJOYMENT*/
     printf("We are proud to be known for offering some of the best entertainment in commercial aviation today. With an updated Jukebox, you also get an option to stream audio and video. Further you get a host of latest magazines with us. Explore us and know us better! \n\n\n\n\n");
     main();
     break;
case 742:  /*DETAILS*/
case 1189:  /*IMFORMATION*/
     n=3102;
     break;
case 614:  /*CHANGE*/
case 648:  /*MODIFY*/
case 729:  /*CHANGES*/
     n=99;
     break;
case 635:  /*CREDIT*/
case 520:  /*DEBIT*/
case 766:  /*PAYMENT*/
case 330:  /*PAY*/
     n=3;
     break;
case 647:  /*SECURE*/
case 415:  /*SAFE*/
case 888:  /*SECURITY*/
     n=7;
     break;
case 524:  /*SPACE*/
case 445:  /*ROOM*/
     printf("The only Economy Class seats that have extra space on our aircraft are those at the emergency exits or in the bulkhead row. Emergency exit seating \nis only assigned at check-in at the discretion of our airport staff. These \nseats cannot be pre-requested or reserved at any time before arrival at the airport.\nThe bulkhead row at the front of the cabin is reserved for passengers with infants\nas this is where the bassinet positions are located, and we are therefore unable to \nassign these seats before departure unless you are travelling with an infant.\n\n\n\n\n"); 
     main();
     break;
case 555:  /*RULES or TERMS*/
case 1082:  /*CONDITIONS*/
case 1197:  /*LIMITATIONS*/
     printf("Emirates will charge your credit card in the currency that is given on the booking confirmation. If you are are not using a credit card based in the country of departure of the ticket, your card issuer may apply charge a fee for transactions in a foreign currency, and also apply different exchange rates compared to those given by the Currency Converter on our site. Please check with your credit card issuer for any fees and their applicable exchange rates.\n\n4.All air tickets have Fare Conditions attached to them which determine the price of that ticket. The most common conditions to be aware of are those governing whether a ticket is refundable and whether additional charges will be imposed in the event that your travel plans change. Different fares will have different conditions, and a ticket that allows you to change the dates of your travel without charge or to receive a full refund if you cancel your travel plans will be more expensive, but still possibly desirable if flexibility is important to your plans. Be sure to ask your reservations agent about the Fare Conditions associated with the flights you are considering. If you are booking online, simply click ‘Fare Conditions’ to view the rules relating to any given flight before adding it to your itinerary. If you do have any queries about these conditions, please contact your local Emirates office, as these conditions will apply after purchase.\n\n\n\n\n");
     main();
     break;    
case 898:  /*STOPOVER*/
     printf("If your itinerary takes you via another city and you'd like to spend some time there before continuing to your final destination, tell your reservations agent or use the Stopover tab on the main Make a Booking page. For example, if your route is Dubai to Melbourne via Singapore, you may choose to stop over in Singapore. Generally, stopovers can be added to your ticket free of charge. Be sure to ask your reservations agent about exclusive hotel rates and offers for our stopover passengers.\n\n\n\n\n");     
     main();
     break;
case 435:  /*VISA*/
case 892:  /*PASSPORT*/
     printf("PASSPORT is an official document, certifing the holder's identity and citizensip, and authorising travel abroad\n\nVISA is an endorsement on a passport esp. allowing entry to or from a country\n\n\n\n\n");
     main();
     break;
case 630:  /*HEALTH*/
case 968:  /*INSURANCE*/
     printf("We recommend the purchase of adequate travel insurance for all overseas travel. Immunisation may be recommended or required for your destination or stopover points—you can use the IATA vaccination requirements search, or check with your physician. \n\n\n\n\n"); 
     main();
     break;
case 422:  /*DUAL*/
     n=47;
     break;
case 1194:  /*CITIZENSHIP*/
case 788:  /*COUNTRY*/
     n=153;
     break;     
case 966:  /*DEVELOPER*/
case 975:  /*PROGRAMER*/
     printf("This program has been developed by Gaurav Sagar. Contact at gaurav.sgr@gmail.com or call 09997662735\n\n\n\n\n");
     break; 
case 702:  /*BAGGAGE*/
     printf("You may transport the checked baggage free of charge upto a Max. weight of 15 Kg. In any event each checked in baggage would not exceed 32 Kg. Infants arn't entitled to any baggage\n\n\n\n\n");    
     main();
     break;
case 425:  /*FUCK*/
     printf("\n\nDear Customer,\n Do u know that the world's only Mother Fucker is you asshole, you asshole. Damn you suffer from Piles and Leprosy and ur dick grows so long\n that you die fucking your very own asshole Bastard\nNOW U KNOW WHAT IT MEANS TO SAY THE f WORD, Fuck off.\n");
     getch();
     exit(1);
default:
        n=0;
}
return n;}

void ans(int ps)
{
if(ps==3102)
printf("On booking a ticket, we send an e-copy of the ticket for print out, Please take it as your full imformation report \n\n");
else if(ps==3201)
printf("You may be able to change some travel details (your contact details, meal preferences, requested seats, frequent flyer number or Chauffeur-drive booking) on the Manage a Booking page. If you have not yet paid for your ticket, please note that prices and availability may have changed since booking. If you need to make changes beyond what is available there, contact your local Fly Asia Office. If you have booked through a travel agent and have not yet commenced travel\non your booking, we recommend that you contact them to \neffect any changes. There may be a fee associated with making changes\n to your ticket depending on the fare conditions of your ticket.\n\nYou may cancell your ticket any time six hours before the journey by contacting the cancellation department. You may receive a refund on an online booking only if allowed by the fare conditions of the booking. We will refund the credit card used to purchase the ticket. However, there may be a cancellation penalty, which will be deducted from the refund. Please be sure to check the fare conditions before making a purchase.\n\n");  
else if(ps==3)
printf("Now you may pay via a credit or a debit card provided they are recognised globally. Other cards such as Maestro and JCB may lead to errors while booking.\n\n");
else if(ps==10||ps==7)
printf("We employs industry-standard Secure Socket Layer (SSL) technology to encrypt all personal data that is sent over the internet from your computer to the asia.com server. All information is kept on a secure server and is\n protected by a firewall. As an added precaution, the firewall is monitored for security breach attempts.\n\n");
else if(ps==200)
printf("If you carry more than one valid passport, you must use the one you intend to carry on your travels to make your reservation. \n\n");
else
printf("Oops, No Match Found\nTry Confining Your query\n");
printf("\nFor further enquires and detailed imformation please call our customer care at\n1800-2432-2423 or email at help@.flyasia.com\n\nThanks for visiting the ONLINE PORTAL\n\n\n\n\n\n");
main();
}

void dated(inf *dat)
{
     int i,flag;
     printf("\n\nEnter date of departure: ");
     fflush(stdin);
     gets(dat->date);
     if(strlen(dat->date)!=8)
     {printf("Please Enter in The correct Format of the Date\n");
     dated(dat);} 
     if((dat->date[7]!=56)&&(dat->date[7]!=57))
     {printf("Wrong Year entred\n");
     dated(dat);
     fflush(stdin);}
     else if(dat->date[6]!=48)
     {printf("Wrong Year entred\n");
     dated(dat);
     fflush(stdin);}
     else if((dat->date[3]==49)&&(dat->date[4]>50))
     {printf("Wrong Month entred\n");
     dated(dat);
     fflush(stdin);}
     else if((dat->date[3]==48)&&(dat->date[4]>57))
     {printf("Wrong Month entred\n");
     dated(dat);
     fflush(stdin);}
     else if(dat->date[3]>50)
     {printf("Wrong Month entred\n");
     dated(dat);}
     else if((dat->date[0]==48)&&(dat->date[1]>58))
     {printf("Wrong Day entred\n");
     dated(dat);}
     else if((dat->date[0]==49)&&(dat->date[1]>58))
     {printf("Wrong Day entred\n");
     dated(dat);}
     else if((dat->date[0]==50)&&(dat->date[1]>58))
     {printf("Wrong Day entred\n");
     dated(dat);}
     else if((dat->date[0]==51)&&(dat->date[1]>50))
     {printf("Wrong Day entred\n");
     dated(dat);}
     else if((dat->date[0]!=51)&&(dat->date[0]!=50)&&(dat->date[0]!=48)&&(dat->date[0]!=49))
     {printf("Wrong Day entred, They have either 0,1,2 or 3 at the first place\n");
     dated(dat);}
     else if((dat->date[2]!=45)&&(dat->date[5]!=47))
     {printf("Our date format recognises only '-' & '/'\nPlease Enter the Date again\n");
     dated(dat);}} 
     
     int sou(inf *s,int *so)
     {
fflush(stdin);
printf("\n\nPlease enter the city code of DEPARTURE  ");
scanf("%d",&*so);
switch(*so)
{
case 1012:
p=401;
strcpy(s->depart,"MUMBAI");
break;
case 9087:
p=601;
strcpy(s->depart,"NEW DELHI");
break;
case 5543:
p=7;
strcpy(s->depart,"BANGKOK");
break;
case 4321:
p=11;
strcpy(s->depart,"SINGAPORE");
break;
case 8973:
p=17;
strcpy(s->depart,"SHANGHAI");
break;
case 7638:
p=103;
strcpy(s->depart,"TOKYO");
break;
case 5345:
p=29;
strcpy(s->depart,"KAULA LAMPUR");
break;
case 4323:
p=301;
strcpy(s->depart,"DUBAI");
break;
default:
        printf("Code entered is not in the list,check it again");
        sou(s,so);
}       
return p;
}

int des(inf *s,int *de)
{
fflush(stdin);
printf("\nPlease enter the city code of arrival  ");
    scanf("%d",&*de);
switch(*de)
{
case 1012:
n=401;
strcpy(s->arr,"MUMBAI");
break;
case 9087:
n=601;
strcpy(s->arr,"NEW DELHI");
break;
case 5543:
n=7;
strcpy(s->arr,"BANGKOK");
break;
case 4321:
n=11;
strcpy(s->arr,"SINGAPORE");
break;
case 8973:
n=17;
strcpy(s->arr,"SHANGHAI");
break;
case 7638:
n=103;
strcpy(s->arr,"TOKYO");
break;
case 5345:
n=29;
strcpy(s->arr,"KAULA LAMPUR");
break;
case 4323:
n=301;
strcpy(s->arr,"DUBAI");
break;
default:
        printf("Code entered is not in the list,check it again");
        des(s,de);}
return n;
}
 
void cancel(inf *e)
{
char name[MAX],bono[MAX],usbono[MAX],date[12],amstr[MAX],fn[9],bell[15];
     FILE *ft;
     int lamount=0,amount,i,tdays,j=0,k=0,l,dayp=20,monthp=11,yearp=8;
     printf("\nPlease Enter your booking no.  ");
     gets(usbono);
     ft=fopen("record.txt","r+");
     if(ft==NULL)
     {
       puts("cant open file");
       exit(1);
       }
while(fgets(e->name,MAX,ft)!=NULL)
for(i=0;i<=strlen(e->name);i++)
{
if(e->name[i]==' '||e->name[i]=='\0')
{	 bono[i-j]='\0';
	 j=i+1;
	 if((bono[0]==usbono[0])&&(bono[1]==usbono[1])&&(bono[2]==usbono[2])&&(bono[3]==usbono[3])&&(bono[4]==usbono[4])&&(bono[5]==usbono[5]))
     {
     date[0]=bono[6];date[1]=bono[7];date[2]=bono[8];date[3]=bono[9];date[4]=bono[10];date[5]=bono[11];date[6]=bono[12];date[7]=bono[13];date[8]='\0';
     fn[0]=bono[14];fn[1]=bono[15];fn[2]=bono[16];fn[3]=bono[17];fn[4]=bono[18];fn[5]=bono[19];fn[6]='\0';
     printf("\nCHECKING VALIDITY OF YOUR NO\n.....................................\n.....................................\n\nCHECKED\n\n\n");
     fflush(stdin);
     for(l=20;bono[l]!='\0';l++)
     {amstr[k]=bono[l];
     k++;}
     amstr[k]='\0';
     printf("As per your booking no. , fare details are as follows:-\n\n");
     printf("\ndate of your journey is: %s\n",date);
     printf("\nYour flight no. is %s\n\nThe net amount you paid is: %sINR\n",fn,amstr);
     printf("\n.....................................\n.....................................\n");
     printf("\nPlease confirm your cancellation \n\nBy entring your phone no. ");
     gets(bell);
     printf("By entring the amount paid ");
     scanf("%d",&amount);
     printf("\nBy entring the date of journey in format <day month year> ");
     scanf("%d%d%d",&day,&month,&year);
     if((year!=8&&year!=9)||(month>12||month<1)||(day>31))
{printf("WRONG DATE ENTERED\tWRONG DATE ENTERED\tWRONG DATE ENTERED\n\nPLEASE ENTER THE DETAILS ALL OVER AGAIN, WE'RE SORRY FOR THE INCONVINIENCE\n");
fflush(stdin);
cancel(e);}
else if(yearp==year)
tdays=(month-monthp)*30+(day-dayp);
else if(yearp!=year)
tdays=(month*30)+(12-monthp)*30+day+(31-dayp);
if(tdays>=130)
{lamount=(.9*amount);
printf("Since you have more than 3 months(approx.) left for your date of journey,\nyou will get 90 percent refund ie= %dINR\nYou will be called within a short while by our cancellation departement and then a refund would be transferred to your bank account",lamount);}
else if(tdays>=90)
{lamount=(.75*amount);
printf("Since you have still 3 months(approx.) left for your date of journey,\nyou will get 75 percent refund ie= %dINR\nYou will be called within a short while by our cancellation departement and then a refund would be transferred to your bank account",lamount);}
else if(tdays<90&&tdays>45)
{lamount=(.68*amount);
printf("Since you have more than 2 and a 1/2 month(approx.) left for your date of journey,\nyou will get 68 percent refund ie= %dINR\nYou will be called within a short while by our cancellation departement and then a refund would be transferred to your bank account",lamount);}
else if(tdays<45&&tdays>33)
{lamount=(.5*amount);
printf("Since you have more a month(approx.) left for your date of journey,\nyou will get 50 percent refund ie= %dINR\nYou will be called within a short while by our cancellation departement and then a refund would be transferred to your bank account",lamount);}
else if(tdays<33&&tdays>=7)
{lamount=(.25*amount);
printf("Since you have more than a week(approx.) left for your date of journey,\nyou will get 25 percent refund ie= %dINR\nYou will be called within a short while by our cancellation departement and then a refund would be transferred to your bank account",lamount);}
else if(tdays<7&&tdays>1)
{lamount=(.1*amount);
printf("Since you have more than 2 and a 1/2 month(approx.) left for your date of journey,\nyou will get 10 percent refund ie= %dINR\nYou will be called within a short while by our cancellation departement and then a refund would be transferred to your bank account",lamount);}
else
printf("Since you bave only a day or less left, you wount get any refund as per our refundig policies");
printf("\n\nTHANYOU FOR GIVING US A CHANCE TO HELP!");
getch();
exit(0);
     }
     }
else
    bono[i-j]=e->name[i];            
}
}


void cardcheck(inf *c)
{
     char car;int i;
     printf("\nHow would you like to pay for the ticket\n\n 1 <--Credit Card (VISA, MASTER CARD, AMERICAN EXPRESS)\n\n 2 <--Debit Card (VISA, MASTER CARD, AMERICAN EXPRESS)\n");
car=getch();
fflush(stdin);
switch(car)
{
     case '1':
      printf("\n\nEnter the credit card no.\n");
     gets(c->card);
     strcpy(c->cardn,"CREDIT CARD");
     for(i=0;c->card[i]!='\0';i++)
     {if(c->card[i]<48&&c->card>57)
     {printf("Your card no. is not valid, Please enter the details correctly...\n");
     getch();
     fflush(stdin);
     cardcheck(c);}}
     if((strlen(c->card)!=19)&&(strlen(c->card)!=16)&&(strlen(c->card)!=12))
     {printf("Your card no. is not valid, Please enter the details correctly...\n");
     getch();
     cardcheck(c);}
     break;
     case '2':
           printf("\n\nEnter the debit card no.\n");
     gets(c->card);
     strcpy(c->cardn,"DEBIT CARD");
     for(i=0;c->card[i]!='\0';i++)
     {if(c->card[i]<48&&c->card>57)
     {printf("Your card no. is not valid, Please enter the details correctly...\n");
     getch();
     fflush(stdin);
     cardcheck(c);}}
     if((strlen(c->card)!=19)&&(strlen(c->card)!=16)&&(strlen(c->card)!=12))
     {printf("Your card no. is not valid, Please enter the details correctly...\n");
     getch();
     cardcheck(c);}
     break;
     default:
             printf("\nWrong Choice Entred\n");
             cardcheck(c);
             }}
