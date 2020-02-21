//GAME OF SNAKE & LADDERS.
//March 13,2018.
//By Pranjay Vats
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 randomize();
 int i,t,score1=0,score2=0;
 char name1[20],name2[20],ans,dice;
 cout<<"\n==============================================================================";
 cout<<"\n\n\t\t\tSNAKE AND LADDERS \n";
 cout<<"\n==============================================================================";
 cout<<"\n\tEnter the name of Player1: ";
 gets(name1);
 cout<<"\n\tEnter the name of Player2: ";
 gets(name2);
 cout<<"\n===============================================================================";
 label:
 {
  cout<<"\n\tOk,player1 "<<name1<<" and player2 "<<name2<<" are you ready to play?";
  cout<<"\n\t(press 'y' for 'YES' and 'n' for 'NO'): ";
  cin>>ans;
 }
 if(ans=='n')
   goto exit;
 else if(ans=='y')
 {
 cout<<"\n\tWell ok players, lets START THE GAME.\n";
 cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
 cout<<"\n\tBefore starting the game go through the position at which \n\tYou can either find a ladder or snake.";
 cout<<"\n\t1.At position '4',there is ladder which takes you at postion '39'";
 cout<<"\n\t2.At position '10',there is ladder which takes you at postion '95'";
 cout<<"\n\t3.At position '26',there is ladder which takes you at postion '75'";
 cout<<"\n\t4.At position '27',there is sanke which takes you at postion '5'";
 cout<<"\n\t5.At position '33',there is ladder which takes you at postion '52'";
 cout<<"\n\t6.At position '42',there is snake which takes you at postion '13'";
 cout<<"\n\t7.At position '50',there is snake which takes you at postion '36'";
 cout<<"\n\t8.At position '53',there is ladder which takes you at postion '69'";
 cout<<"\n\t9.At position '59',there is snake which takes you at postion '25'";
 cout<<"\n\t10.At position '68',there is snake which takes you at postion '50'";
 cout<<"\n\t11.At position '77',there is ladder which takes you at postion '86'";
 cout<<"\n\t12.At position '84',there is ladder which takes you at postion '92'";
 cout<<"\n\t13.At position '99',there is snake which takes you at postion '3'";
 cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
 cout<<"\n\tNow Lets PlAY THE GAME. ALL THE BEST PLAYERS....";
 label2:
 {
 for(score1=0,score2=0;score1<=100,score2<=100;score1++,score2++)
 {
  cout<<"\n\tPlayer1 ,its your turn,throw your dice.";
  cout<<"\n\tpress any key to throw your dice......";
  dice=getchar();//No significance but just to click enter by user on turn.
  t=random(7);
  if(t==0)
  t=t+1;
  /*As in this case random() can also give '0' which can not come on dice
  so putting t=1 rather than t=0.*/
  cout<<"\n\tYou got "<<t;
  score1+=t;
  switch(score1)
  {//cases for ladders and snakes on various positions.
   case 4:{
	   cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 4.";
	   score1=39;
	  }break;
   case 10:{
	    cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 10.";
	    score1=95;
	   }break;
   case 26:{
	    cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 26.";
	    score1=75;
	   }break;
   case 27:{
	    cout<<"\n\tOhh ! "<<name1<<" a snake has bitten you at position 27.";
	    score1=5;
	   }break;
   case 33:{
	    cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 33.";
	    score1=52;
	   }break;
   case 42:{
	    cout<<"\n\tOhh ! "<<name1<<" a snake has bitten you at position 42.";
	    score1=13;
	   }break;
   case 50:{
	    cout<<"\n\tOhh ! "<<name1<<" a snake has bitten you at position 50.";
	    score1=36;
	   }break;
   case 53:{
	    cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 53.";
	    score1=69;
	   }break;
   case 59:{
	    cout<<"\n\tOhh ! "<<name1<<" a snake has bitten you at position 59.";
	    score1=25;
	   }break;
   case 68:{
	    cout<<"\n\tOhh ! "<<name1<<" a snake has bitten you at position 68.";
	    score1=50;
	   }break;
   case 77:{
	    cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 77.";
	    score1=86;
	   }break;
   case 84:{
	    cout<<"\n\tWell done "<<name1<<" you have got a ladder at position 84.";
	    score1=92;
	   }break;
   case 99:{
	    cout<<"\n\tOhh ! "<<name1<<" a snake has bitten you at position 99.";
	    score1=3;
	   }break;
   case 100:cout<<"\n\tCongrats! "<<name1<<" you have won the game.";
  }
  if(score1<100)
  {
   cout<<"\n\tYou are at "<<score1<<" position";
   label1:
   {
    cout<<"\n\tNow Player2 ,its your turn,throw your dice.";
    dice=getchar();
    t=random(7);
    if(t==0)
    t=t+1;
    cout<<"\n\tYou got "<<t;
    score2+=t;
    switch(score2)
    {
     case 4:{
	     cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 4.";
	     score2=39;
	    }break;
     case 10:{
	      cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 10.";
	      score2=95;
	     }break;
     case 26:{
	      cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 26.";
	      score2=75;
	     }break;
     case 27:{
	      cout<<"\n\tOhh ! "<<name2<<" a snake has bitten you at position 27.";
	      score2=5;
	     }break;
     case 33:{
	      cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 33.";
	      score2=52;
	     }break;
     case 42:{
	      cout<<"\n\tOhh ! "<<name2<<" a snake has bitten you at position 42.";
	      score2=13;
	     }break;
     case 50:{
	      cout<<"\n\tOhh ! "<<name2<<" a snake has bitten you at position 50.";
	      score2=36;
	     }break;
     case 53:{
	      cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 53.";
	      score2=69;
	     }break;
     case 59:{
	      cout<<"\n\tOhh ! "<<name2<<" a snake has bitten you at position 59.";
	      score2=25;
	     }break;
     case 68:{
	      cout<<"\n\tOhh ! "<<name2<<" a snake has bitten you at position 68.";
	      score2=50;
	     }break;
     case 77:{
	      cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 77.";
	      score2=86;
	     }break;
     case 84:{
	      cout<<"\n\tWell done "<<name2<<" you have got a ladder at position 84.";
	      score2=92;
	     }break;
     case 99:{
	      cout<<"\n\tOhh ! "<<name2<<" a snake has bitten you at position 99.";
	      score2=3;
	     }break;
     case 100:cout<<"\n\tCongrats! "<<name2<<" you have won the game.";
    }
    if(score2<100)
     cout<<"\n\tYou are at "<<score2<<" position";
    else if(score2==100)
    {
     cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";
     cout<<"\n\tFinal score: ";
     cout<<"\n\t"<<name1<<" "<<score1;
     cout<<"\n\t"<<name2<<" "<<score2<<"(WINNER!!!!!)";
     break;
    }
    else
    {
     score2=score2-t;
     cout<<"\n\tYou are at "<<score2<<" position";
    }
   }
  }
  else if(score1==100)
  {
   cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";
   cout<<"\n\tFinal score: ";
   cout<<"\n\t"<<name1<<" "<<score1<<"(WINNER!!!!!)";
   cout<<"\n\t"<<name2<<" "<<score2;
   break;
  }
  else
  {
   score1=score1-t;
   cout<<"\n\tYou are at "<<score1<<" position";
   goto label1;
  }
  cout<<"\n-------------------------------------------------------------------------------";
  score1--,score2--;
 }
  cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";
  cout<<"\n\tDo you want to play again: ";
  cin>>ans;
  if(ans=='N'||ans=='n')
   cout<<"\n\tOk,thanks for playing.";
  else
   goto label2;
 }
 }
 exit:
 getch();
}
