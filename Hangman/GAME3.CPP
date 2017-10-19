#include <conio.h>
#include <stdio.h>

void easy();
void normal();
void hard();

char ch;

void main (void)
{
textbackground(0);
clrscr();
do{
gotoxy(37,2);
printf("HANGMAN\n");
printf("Select Your Mode: \n(1) EASY\n(2) NORMAL\n(3) HARD\n");


int mode;
scanf("%d",&mode);


 if(mode==1)
{
easy();
 }

else
  if(mode==2)
{
normal();
}
else
{
hard();
}

printf("\nWant to Play Again (y/n)\n\n");
ch=getch();
}while(ch=='y');


getch();
}

void easy() {
      textbackground(19);
      textcolor(2);
      clrscr();

   gotoxy(29,8);
    textcolor(0);
    cprintf("****Five Letter Game****\n");

     char hidden[]={"snake"};
     printf("\n");

     char hidden1[]="**a**";
      textcolor(0);
      cputs(hidden1);
      printf("\n");
      char *save[5];
      int counter=0;
      int i=5;
      int wrong=17;

   do{


       char ch=getch();
       int row=1;
	int pos=-1;
	 int winh=5;
	 int wins=0;

     for(int c=0; c<5; c++) {

       if(ch==hidden[c]) {
       gotoxy(row,10);
       printf("%c",hidden[c]);
	 pos=c;
	save[c]=&hidden[c];
	 }
       row++;
       }

       if(pos==-1)
      { gotoxy(1,11);
       textcolor(0);
       cprintf("Wrong Alphabet:");
       gotoxy(wrong,11);
       textcolor(0);
       cprintf("%c",ch);
	wrong++;
	}


     { gotoxy(1,12);
      printf("Chances Left: %d",i);
      i--;
      }

      counter++;

     for(int s=0; s<5; s++) {
	 if(*save[s]==hidden[s])
	 {  wins=wins+1;   }
	 }


      if(wins==winh)
     {
      textcolor(4+BLINK);
      cprintf("\n\nYou Win");
      break;            }


     } while(counter!=6);


     if(counter==6)
      {
      { textcolor(4+BLINK);
	gotoxy(36,14);
	cprintf("\n\nGame over");}
	textcolor(4);
	gotoxy(33,16);
	cprintf("\nThe word was");
	cprintf("'%s'",hidden);
	}
}

 void normal() {
     textbackground(19);
     clrscr();
     gotoxy(29,8);
     textcolor(0);
     cprintf("*****Six Letter Game*****\n");


     char hidden[]={"russia"};
     printf("\n");

     char hidden1[]="**s***";
     textcolor(0);
      cputs(hidden1);
      printf("\n");
      char *save[6];
      int counter=0;
      int i=6;
      int wrong=17;

   do{


       char ch=getch();
       int row=1;
	int pos=-1;
	 int winh=6;
	 int wins=0;

     for(int c=0; c<6; c++) {

       if(ch==hidden[c]) {
       gotoxy(row,10);
       printf("%c",hidden[c]);
	 pos=c;
	save[c]=&hidden[c];
	 }
       row++;
       }

       if(pos==-1)
      { gotoxy(1,11);
       textcolor(0);
	cprintf("Wrong Alphabet:");
       gotoxy(wrong,11);
       textcolor(0);
       cprintf("%c",ch);
	wrong++;

	}


     { gotoxy(1,12);
      printf("Chances Left: %d",i);
      i--;}

      counter++;

     for(int s=0; s<6; s++) {
	 if(*save[s]==hidden[s])
	 {  wins=wins+1;   }
	 }


      if(wins==winh)
     {
      textcolor(4+BLINK);
      cprintf("\n\nYou Win");
      break;            }


     } while(counter!=7);


     if(counter==7)
      {
	 { textcolor(4+BLINK);
	gotoxy(36,14);
	cprintf("\n\nGame over");}
	textcolor(4);
	gotoxy(33,16);
	cprintf("\nThe word was");
	cprintf("'%s'",hidden);

	}




}

  void hard() {
     textbackground(19);
     clrscr();
     gotoxy(29,8);
     textcolor(0);
     cprintf("****Eight Letter Game****\n");


     char hidden[]={"pakistan"};
     printf("\n");

     char hidden1[]="******a*";
     textcolor(0);
      cputs(hidden1);
      printf("\n");
      char *save[8];
      int counter=0;
      int i=8;
      int wrong=17;

   do{


       char ch=getch();
       int row=1;
	int pos=-1;
	 int winh=8;
	 int wins=0;

     for(int c=0; c<8; c++) {

       if(ch==hidden[c]) {
       gotoxy(row,10);
       printf("%c",hidden[c]);
	 pos=c;
	save[c]=&hidden[c];
	 }
       row++;
       }

       if(pos==-1)
      { gotoxy(1,11);
       textcolor(0);
	cprintf("Wrong Alphabet:");
       gotoxy(wrong,11);
       textcolor(0);
       cprintf("%c",ch);
	wrong++;

	}


     { gotoxy(1,12);
      printf("Chances Left: %d",i);
      i--;}

      counter++;

     for(int s=0; s<8; s++) {
	 if(*save[s]==hidden[s])
	 {  wins=wins+1;   }
	 }


      if(wins==winh)
     {
      textcolor(4+BLINK);
      cprintf("\n\nYou Win");
      break;            }


     } while(counter!=9);


     if(counter==9)
      {
       { textcolor(4+BLINK);
	gotoxy(36,14);
	cprintf("\n\nGame over");}
	textcolor(4);
	gotoxy(33,16);
	cprintf("\nThe word was");
	cprintf("'%s'",hidden);

      }


}




