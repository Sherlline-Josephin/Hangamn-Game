#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void main()
{
        /*variables for the program*/
void inst();
        char s[10][20],a[10][20],b[10][20],c[10][20],d[10][20],e[10][20],f[10][20],g[10][20],h[10][20],k[10][20],l[10][20],guess[20],ch;
        int index,len,i,n,j,l1;
        int total=0;

        /* displayimg the title*/

        printf("\n\t\t\t\t\t\t *      *      * *      * *     *  * * * * *  * *   * *      * *      * *     * ");
        printf("\n\t\t\t\t\t\t *      *     *   *     *  *    *  *          *  * *  *     *   *     *  *    * ");
        printf("\n\t\t\t\t\t\t * * * **    * * * *    *   *   *  *     ***  *   *   *    * * * *    *   *   * ");
        printf("\n\t\t\t\t\t\t *      *   *       *   *    *  *  *       *  *       *   *       *   *    *  * ");
        printf("\n\t\t\t\t\t\t *      *  *         *  *     * *  * * * * *  *       *  *         *  *     * * ");
        printf("\n\n");

        /*game starts*/

        printf("\n\t\t\t\t\t\t\t 1.PLAY \n\t\t\t\t\t\t\t 2.INSTRUCTIONS \n\t\t\t\t\t\t\t 3.QUIT");
        printf("\n\n\t\t\t\t\t\t\t Press the number:");
        scanf("%d",&n);

        if(n==1)
        {
  l1:   while(n==1)
        {
                /* variables to be redeclared if the user wants to play again*/

                 int quit=0;
                 int lives=5;
                 int crt=0;
                 int newcrt=0;
                 char guess[20]={0};
	   srand(time(0));

                /*topics for the user to choose*/

                printf("\n\t\t\t\t\t\t\tTOPICS");
                printf("\n\t\t\t\t\t\t a. Web browsers \n\t\t\t\t\t\t b. Social Media \n\t\t\t\t\t\t c. Colours \n\t\t\t\t\t\t d. Indian Cricketers");
                printf("\n\t\t\t\t\t\t e. Freedom Fighters \n\t\t\t\t\t\t f. States of India \n\t\t\t\t\t\t g. Sports");
                printf("\n\t\t\t\t\t\t h. Politicians \n\t\t\t\t\t\t k. Rivers in India \n\t\t\t\t\t\t l. Indian Languages");
                printf("\n\n\t\t\t\t  choose the topic:");
                scanf("%*c");
                scanf("%c",&ch);

	 /*chosen topic is taken for the user to play using switch*/
                switch(ch)
                {
                        case 'a':
                        {
                                char a[10][20]={"safari","chrome","internetexplorer","opera","mozillafirefox","maxthon","slimjet","netscape","ucbrowser","seamonkey"};
                                index=rand()%10;
                                len=strlen(a[index]);
                                printf("\n\n\t\t\t\t\t\t\t WEB BROWSERS");
                                 for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],a[i]);
                                 }

                                break;
                        }

                        case 'b':
                        {
                                char b[10][20]={"instagram","facebook","twitter","whatsapp","telegram","snapchat","googleplus","pininterest","hike","skype"};
                                index=rand()%10;
                                len=strlen(b[index]);
                                printf("\n\n\t\t\t\t\t\t\t SOCIAL MEDIA");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],b[i]);
                                 }
	   break;
                        }

                        case 'c':
                        {
                                char c[10][20]={"blue","yellow","black","white","pink","brown","orange","green","violet","purple"};
                                index=rand()%10;
                                len=strlen(c[index]);
                                printf("\n\n\t\t\t\t\t\t\t COLOURS");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],c[i]);
                                 }

                                break;
                        }

                        case 'd':
                        {
                                char d[10][20]={"msdhoni","sachintendukar","kapildev","viratkohli","rohitsharma","yuvarajsingh","ashwin","jadeja","hardikpandya","rahul"};
                                index=rand()%10;
                                len=strlen(d[index]);
                                printf("\n\n\t\t\t\t\t\t\t INDIAN CRICKETERS");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],d[i]);
                                 }
                                 break;
                        }

                        case 'e':
                        {
                                char e[10][20]={"gandhiji","subashchandrabose","bhagatsingh","jhansirani","mangalpandey","bharathiyar","kattabomman","tipusultan","jawa"};
                                index=rand()%10;
                                len=strlen(e[index]);
                                printf("\n\n\t\t\t\t\t\t\t FREEDOM FIGHTERS");
	 for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],e[i]);
                                 }
                                 break;
                        }

                        case 'f':
                        {
                        char f[10][20]={"tamilnadu","kerala","andrapradesh","karnataka","maharashta","rajasthan","gujarat","uttarpradesh","punjab","westbengal"};
                                index=rand()%10;
                                len=strlen(f[index]);
                                printf("\n\n\t\t\t\t\t\t\t STATES OF INDIA");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],f[i]);
                                 }
                                 break;
                        }

		 case 'g':
                        {
                                char g[10][20]={"volleyball","basketball","throwball","football","cricket","tennis","badminton","hockey","kabbadi","baseball"};
                                index=rand()%10;
                                len=strlen(g[index]);
                                printf("\n\n\t\t\t\t\t\t\t SPORTS");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],g[i]);
                                 }
                                 break;
                        }

                        case 'h':
                        {
                        char h[10][20]={"narendramodi","jayalalitha","karunanithi","rajivgandhi","indiragandhi","kamarajar","annadurai","vajpayee","manmohansingh","lal"};
                                index=rand()%10;
                                len=strlen(h[index]);
                                printf("\n\n\t\t\t\t\t\t\t POLITICIANS");
                                for(i=0;i<10;i++)
			 {
                                        strcpy(s[i],h[i]);
                                 }
                                 break;
                        }

                        case 'k':
                        {
                                char k[10][20]={"ganges","brahmaputra","godavari","narmada","indus","yamuna","kaveri","mahanadi","tapti","krishna"};
                                index=rand()%10;
                                len=strlen(k[index]);
                                printf("\n\n\t\t\t\t\t\t\t RIVERS IN INDIA");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],k[i]);
                                 }
                                 break;
                        }

		  case 'l':
                        {
                        char l[10][20]={"tamil","telugu","malayalam","hindi","kanada","sanskrit","punjabi","bengali","oriya","konkani"};
                                index=rand()%10;
                                len=strlen(l[index]);
                                printf("\n\n\t\t\t\t\t\t\t INDIAN LANGUAGES");
                                for(i=0;i<10;i++)
                                 {
                                        strcpy(s[i],l[i]);
                                 }
                                 break;
                        }
                }

        /*printf("\n word:%s",s[index]);
        printf("\n random index:%d",index);
        printf("\nlength:%d",len);

        while loop is used for accepting the guessed letters and checking whether it is correct or wrong */

		  while(crt<len)
        {
                printf("\n");
                for(i=0;i<len;i++)
                {
                        if(guess[i]==1)
                        {
                                printf("%c",s[index][i]);
                        }
                        else
                        {
                                printf("_ ");
                        }
                }
                printf("\n");

                printf("\n\nenter a guess letter: ");
                scanf("%s",&ch);

                /* if the user wishes to quit in the mid of the game*/


                if(ch=='0')
                {
                        quit=1;
                        break;
                }

                /* newcrt variable is used to check if the user has made a wrong guess"*/

                newcrt=crt;

                for(i=0;i<len;i++)
                {
                        if(guess[i]==1)      /*guess[i] is assigned 1 to make sure the letter guessed is already used*/
                        {
                                continue;
                        }

                        if(s[index][i]==ch) /*for each correct guess crt variable gets incremented*/
                        {
                                guess[i]=1;
          crt++;
                        }
                }

                if(newcrt==crt)           /*for wrong guess lives variable gets decremented*/
                {
                        lives--;
                        printf("\n\nWRONG GUESS");
                        printf("\n\nNumber lives remaining =%d\n",lives);

                        /* when lives becomes null the hangman is hung*/

                        if(lives==0)
                        {
                                printf("\n\t\t\t _______");
                                printf("\n\t\t\t|       |");
                                printf("\n\t\t\t|       0");
                                printf("\n\t\t\t|      /|\\");
                                printf("\n\t\t\t|       |");
                                printf("\n\t\t\t|      / \\");
			     break;
                        }
                }

                else
                {
                        printf("\n\nCORRECT GUESS\n");
                }

                /* as lives get decremented the hangman figure comes into full picture*/

                if(lives==5)
                {
                        printf("\n\t\t\t _______");
                        printf("\n\t\t\t|       |");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
		                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                }
                if(lives==4)
                {
                        printf("\n\t\t\t _______");
                        printf("\n\t\t\t|       |");
                        printf("\n\t\t\t|       0");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                }
                if(lives==3)
                {
                        printf("\n\t\t\t _______");
                        printf("\n\t\t\t|       |");
                        printf("\n\t\t\t|       0");
                        printf("\n\t\t\t|       |");
                        printf("\n\t\t\t|");
		              printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                }
                if(lives==2)
                {
                        printf("\n\t\t\t _______");
                        printf("\n\t\t\t|       |");
                        printf("\n\t\t\t|       0");
                        printf("\n\t\t\t|      /|\\");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                }
                if(lives==1)
                {
                        printf("\n\t\t\t _______");
                        printf("\n\t\t\t|       |");
                        printf("\n\t\t\t|       0");
                        printf("\n\t\t\t|      /|\\");
                        printf("\n\t\t\t|       |");
	                    printf("\n\t\t\t|");
                        printf("\n\t\t\t|");
                }
        }

        if(quit==1)
        {
                printf("\n\n\t\t\t\tTHE USER QUIT QUICKLY\n");
        }
        else if(lives==0)
        {
                printf("\n\n\t\t\t\t YOU LOST :( \n");
                printf(" \n\n The correct word : %s",s[index]);
        }
        else
        {
                printf("\n\n You guessed the word %s correctly",s[index]);
                printf("\n\n\t\t\t\t YOU WON!!!\n");
                printf("\n\t\t\t\t CONGRATULATIONS :)\n");

                /* to print the final score of the user*/

                total=total+10;

                if(lives==4)
                {
                        total=total-1;
                }
                if(lives==3)
                {
                        total=total-2;
                }
                if(lives==2)
                {
                        total=total-3;
                }
                if(lives==1)
                {
                        total=total-5;
                }
	        }

        printf("\n\n\t\t\t\t YOUR SCORE : %d\n",total);

        /* this is used if the user wants to play again or quit the game*/

        printf("\n\n\t\t Press 1 if you want to continue 0R  Press 3 if you want to quit\n");
        scanf("%d",&n);
}
}

        /* to display the instructions of the game*/

        if(n==2)
        {
                inst();
                
				printf("\n\n Press 1 to start the game:");
                scanf("%d",&n);

                /* goto statement is used to go back to the play block */

                if(n==1)
                {
                        goto l1;
                }
        }

        /*game over*/

        if(n==3)
        {

        }

        /*game over*/

        if(n==3)
        {
                printf("\n\n\t\t\t\t\t\t\t\t\t ***THANK YOU***\n\n");
        }
}



void inst()
{
printf("\n\n\t\t INSTRUCTIONS:");
                printf("\n\n\t\t * The USER is asked to choose a topic to play with.");
                printf("\n\n\t\t * Then the USER must guess the word related to the topic by guessing the letters one by one.");
                printf("\n\n\t\t * The USER will be given 5 chances if he/she makes a wrong guess.");
		               printf("\n\n\t\t * If the USER guesses the word correctly , the USER wins else loses.");
                printf("\n\n\t\t * The USER will be rewarded 10 points if the USER all the guesses are correct.");
                printf("\n\n\t\t * The USER will lose 1 point for each of the wrong guess.");
                printf("\n\n\t\t * If the user wants to quit in the middle press '0'.");
                printf("\n\n\t\t\t\t ALL THE BEST!!!");
                
}
