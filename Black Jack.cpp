#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <process.h>
using namespace std;

char card1char, card1suit, card2char, card2suit,newcardsuit,newcardchar;
int card1no,card2no, /*su,eu,*/ playerstat,numbcard,wu,newcardno,sumnewcard;


class start{
private:	
string username;

public:
void accept(){
	cout<<" Enter username: ";
	cin>> username;
    cout<< "\n\n Welcome "<<username<<", To Blackjack game.\n\n";}
};

class gameplay: public start{
public:
 void dispcard(){
	
  // Card 1
  srand(time(0));
  /*su=rand()%2;
  if (su==0){
	const card1no= (rand()%10)+1;
 	cout<<" Your card is the "<< card1no;}
  if (su==1){
  cout<< " Your card is the ";
   int tu=rand()%3;
  if(tu==0){ card1char='K';}
  if(tu==1){ card1char='Q';}
  if(tu==2){ card1char='J';}
  cout<< card1char;}*/	
  
 card1no= rand()%13 + 1;
 if(card1no<=10){
	cout<<"\n Your card is the "  <<card1no;}
 if( card1no>10){
	if(card1no== 11){card1char='J';}
    if(card1no== 12){card1char='Q';}
    if(card1no== 13){card1char='K';}
  cout<< "\n Your card is the "<<card1char;}

 int ru=rand()%4;
  if(ru==0){ card1suit=char(4);}
  if(ru==1){ card1suit=char(6);}
  if(ru==2){ card1suit=char(5);}
  if(ru==3){ card1suit=char(3);} 
  cout<<" of "<< card1suit<< " and ";

 


  // Card 2
 
  /*eu=rand()%2;
  if (eu==0){
	card2no = (rand()%10)+1;
 	cout<<" the "<< card2no;}
  if (eu==1){
 	cout<< " the ";
   int fu=rand()%3;
  if(fu==0){ card2char='K';}
  if(fu==1){ card2char='Q';}
  if(fu==2){ card2char='J';}
  cout<< card2char;}  */	
 	
 card2no= rand()%13 + 1;
 if(card2no<=10){
	cout<<"the "  <<card2no;}
 if( card2no>10){
	if(card2no== 11){card2char='J';}
    if(card2no== 12){card2char='Q';}
    if(card2no== 13){card2char='K';}
  cout<< "the "<<card2char;}

 int yu=rand()%4;
  if(yu==0){ card2suit=char(4);}
  if(yu==1){ card2suit=char(6);}
  if(yu==2){ card2suit=char(5);}
  if(yu==3){ card2suit=char(3);} 
  cout<<" of "<< card2suit;

 }

void help(){
	 ifstream in_file;
     in_file.open("help.txt");
     char ch;
     while(!in_file.eof())
 {
                   in_file.get(ch);
                   cout<<ch;
 }
  in_file.close();
  getch();
}


};


int main(){
	
	gameplay cla;  
   cla.accept();
 
 gamepla:
 	 system("color F");
        int cho;	
        cout<<"1.Start\n2.Help\n3.Settings\n Choose(1/2/3):";
		cin>>cho;
		
    switch(cho){
   case 1: goto yee;
           break;
   case 2:cout<<"\n";
          cla.help();
          system("cls");
          break;
   default: cout<< "\n Sorry not working\n";
    Sleep(1000);
    system("cls");
        goto gamepla;}



/*  if(cho== "Start"||"start"){
        goto yee;}
		
        else if(cho=="help"){       
        cla.help();}
		
        else{cout<< "\n Sorry not working";
        goto gamepla;}*/

yee:

 cla.dispcard();
cout<< " and\n ";

cout<<"\n Key-\n Diamonds="<<char(4)<<"\n Spades="<<char(6)<<"\n Clubs="<<char(5)<<"\n Hearts="<<char(3);

imill:
 string boo;
 cout<< "\n\nDo you wish to continue with gameplay?(Y/N): ";
 cin>> boo;
 if(boo=="Y"){
	   system("cls");
       goto lookatmenow;}
 else if(boo=="N"){
	   exit(0);}
 else{ cout<< char(7);
       system("color 4");
       cout<<"Enter correctly!";
       getch();
       system("cls");
       goto imill;} 

lookatmenow:
system("cls");
system("color F");
string answer;

cout<<"your cards(";
if(card1no<=10){cout<<card1no<<card1suit;}
else if(card1no>10){cout<<card1char<<card1suit;}

if(card2no<=10){cout<<"   "<<card2no<<card2suit<<")";}
else if(card2no>10){cout<<"  "<<card2char<<card2suit<<")";}
/*if (su==0){cout<<" "<<card1no;}
if (su==1){cout<<" "<<card1char;}
cout<<card1suit<<"\t";
if (eu==0){cout<<" "<<card2no;}
if (eu==1){cout<<" "<<card2char;}
cout<<card2suit<<")";*/

question:
cout<< "\n\nDo you want to hit/stand/check?";
cin>> answer;

if(answer=="hit"){cout<< "\n How many cards do you want?";
                  cin>>numbcard;                                                     //numbcard
                  cout<<" Your cards are: ";
         sumnewcard=0;
         
         for(int i=0;i<numbcard;i++){ 
         newcardno=0;       
         int newcardno= rand()%13+1;   

           if(newcardno<=10){
	          cout<<newcardno;}
              if(newcardno>10){
	          if(newcardno== 11){newcardchar='J';}                  // newcardno,newcardchar
              if(newcardno== 12){newcardchar='Q';}
              if(newcardno== 13){newcardchar='K';}
              cout<<newcardchar;}

         int wu=rand()%4;
         if(wu==0){ newcardsuit=char(4);}
         if(wu==1){ newcardsuit=char(6);}        //newcardsuit
         if(wu==2){ newcardsuit=char(5);}
         if(wu==3){ newcardsuit=char(3);}
         cout<<" of "<<newcardsuit<<"\n ";
          
     
     sumnewcard+= newcardno;}
    playerstat= sumnewcard + card1no + card2no; 
    goto stromae;                 //sumnewcard
    }
   

else if(answer=="stand"){cout<< " The dealer takes a card";
                         goto question;}


else if(answer=="check"){ 
       playerstat= card1no + card2no;
       goto stromae;}
       
else  {           system("color 4");
                  cout<< char(7);
                  cout<<"Enter correctly!";
                  getch();
                  system("cls");
                  goto lookatmenow;
      }



 stromae:
       cout<< "\n Your sum of cards is "<<playerstat;
       if(playerstat>21){cout<<" ,you are busted!\n";}
       if(playerstat==21){cout<<" ,you have Blackjack";}
	     
     Sleep(1000);
  	int dealerstat = rand()%10 + 13;
	cout<< "\n The dealer has "<< dealerstat;
 	
  if(dealerstat>21){ cout<<" ,the dealer is busted!";
                    if(playerstat>21)     { cout<<"\n\n You Lose";}
                   else if(playerstat<21) { cout<<"\n\n YOU WIN!"<<char(1);}
				   else if(playerstat==21){ cout<<"\n\n YOU WIN!"<<char(1);}}
  
  
  else if(dealerstat==21){ cout<<" ,the dealer has blackjack";
                           if(playerstat>21){cout<<"\n\n You Lose";}
                           else if(playerstat==21){cout<<"\n\n YOU WIN!"<<char(1);}
                           else{cout<<"\n\n You Lose";}}
                           
    


  else{   if(playerstat<=21){
          if(playerstat>dealerstat){ cout<<"\n\n YOU WIN! "<<char(1);}        
          else if(playerstat==dealerstat){cout<<"\n\nIts a Draw!";}
		  else if(playerstat<dealerstat){cout<< "\n\n You Lose";}}

         if(playerstat>21){cout<< "\n\n You Lose";} 
 }
  end:
  string yn;
   cout<<"\n\nPlay again(Y/N)?";
  cin>> yn;
  if(yn=="Y"){
	   system("cls");
       goto gamepla;}
  else if(yn=="N"){
	   exit(0);}
  else{ cout<< char(7);
       system("color 4");
       cout<<"Enter correctly!";
       getch();
       system("cls");
       goto end;}  




}
