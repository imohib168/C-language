#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void help();
void highestPoint();
void scoreReset();
void editScore(int, char[]);
//
int sports_quiz();
int generalKnowledgeQuiz();
int generalIslamicQuiz();
int generalFoodQuiz();
int generalMaths();
int programmingLanguage();

int main()
{
    int count1, iSupporter1;
    int score = 0;
    char choice;
    char username[20];

mainhome:
    system("cls");
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t-------------------------------------");
    printf("\n\t\t\t\t\t======= Welcome To Quiz Game =======\n");
    printf("\t\t\t\t\t-------------------------------------\n\n\n");

    printf("\t\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t\tTo start the game Press 'S'..\n");
    printf("\t\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t\tTo Quit the game Press 'Q'..\n");
    printf("\t\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t\tTo View the Last Highest pints get by user Press 'P'..\n");
    printf("\t\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t\tTo reset the score Press 'R'..\n");
    printf("\t\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t\tTo get the help Press 'H'..\n");
    printf("\t\t\t\t\t------------------------------------------------------\n");

    printf("\n\n\n\n\t\t\t\t\t------------------------------------------------------\n");
    printf("\t\t\t\t\tYour Choice: ");

    choice = toupper(getch());
    switch (choice)
    {
    case 'H':
        help();
        getch();
        goto mainhome;
        break;

    case 'Q':
        system("cls");
        printf("\n\n\nExiting the Game....\n\n\n\n\n");
        sleep(3000);
        exit(0);

    case 'P':
        highestPoint();
        getchar();
        goto mainhome;

    case 'R':
        scoreReset();
        getchar();
        goto mainhome;

    case 'S':
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tPlease Enter your Name: ");
        gets(username);

        system("cls");
        printf("____________________________________________\n");
        printf("\n======== Welcome %s to the Game ========\n", username);
        printf("____________________________________________\n\n");

        printf("\nHere are some Tips for you before playing....\n");
        printf("______________________________________________\n\n");

        printf("As you will proceed further you'll be asked three Questions\n");
        printf("out of which 2 should must be given correct else you won't be\n");
        printf("able to play the Game. There are total 6 categories and 1 can\n");
        printf("be selected at a time and after completing the Quiz you'll be\n");
        printf("asked to rather Go to Main home or Again go to Categories and\n");
        printf("select another category and then again play the Game.\n\n");

        printf("You will be given 4 options and you have to\n");
        printf("press A, B ,C or D for right option.\n");

        printf("\n\n_____________________________________________________\n\n");
        printf("If you want to start the game then press 'Y'...\n");
        printf("If you wanna go to HOME screen then press any key...\n");
        printf("_____________________________________________________\n\n");
        printf("What is your Choice: ");

        if (toupper(getchar()) == 'Y')
        {
            system("cls");
            goto game;
        }
        else
        {
            goto mainhome;
            system("cls");
        }
    game:
        system("cls");
        count1 = 0;
        int i;
        for (i = 1; i <= 3; i++)
        {
            system("cls");
            iSupporter1 = i;
            switch (iSupporter1)
            {
            case 1:
                printf("\nWhen was the first cricket game played?\n");
                printf("\n\n\tA)19 March 1877\t\tB)20 April 2077\n\n\tC)30 June 1960\t\tD)19 March 1899");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nYou selected the Right Answer....\n\n");
                    count1++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nYour Answer is wrong....!");
                    getch();
                    break;
                }

            case 2:
                printf("\nWhich animal laughs like Human?\n");
                printf("\n\n\tA)Monkey\t\tB)Hyena\n\n\tC)Donkey\t\tD)Chimpanze");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nYou selected the Right Answer....\n\n");
                    count1++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nYour Answer is wrong....!");
                    getch();
                    break;
                }

            case 3:
                printf("\nFirst China war was fought between?\n");
                printf("\n\n\tA)China & Britain\t\tB)China & France\n\n\tC)China % egypt\t\tD)China & Greek");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nYou selected the Right Answer....\n\n");
                    count1++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nYour Answer is wrong....!");
                    getch();
                    break;
                }
            }
        }
        if (count1 >= 2)
        {
            goto mainGame;
        }
        else
        {
            system("cls");
            printf("\nYou can't proceed further..!!");
            printf("\nPress any key to go to Main home...\n");
            getch();
            goto mainhome;
        }

    mainGame:
        system("cls");
        printf("------------------------------------------------\n");
        printf("Welcome %s to the Next Stage of the Game...\n", username);
        printf("------------------------------------------------\n");

        printf("\n----------------------------------------\n");
        printf("What Category would you like to choose? \n");
        printf("----------------------------------------\n");

        printf("\n----------------------------------------------");
        printf("\nPress 'S' to play Sports Quiz");
        printf("\nPress 'G' to play General Knowledge Quiz");
        printf("\nPress 'I' to play Islamic Quiz");
        printf("\nPress 'F' to play General Food Quiz");
        printf("\nPress 'M' to play General Maths Quiz");
        printf("\nPress 'P' to play Programming language Quiz");
        printf("\n----------------------------------------------");
        printf("\nYour Choice: ");
        char ch;
        ch = toupper(getch());

        switch (ch)
        {
        case 'S':
            score = sports_quiz() * 100;
            if (score >= 0 && score < 600)
            {
                printf("___________________________________\n");
                printf("\nYour Score is: %d", score);
                printf("\nYou didn't perform well in quiz\n");
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score >= 600 && score < 1000)
            {
                printf("___________________________________\n");
                printf("\nYou performed Excellent in quiz\n");
                printf("\nYour Score is: %d", score);
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score == 1000)
            {
                printf("____________________________________________________________________\n");
                printf("\nYou performed extremely Well and awarded with $1000 by our team...\n");
                printf("\nYour Score is: %d", score);
                printf("____________________________________________________________________\n");
                goto playAgain;
            }
            break;
        case 'G':
            score = generalKnowledgeQuiz() * 100;
            if (score >= 0 && score < 600)
            {
                printf("___________________________________\n");
                printf("\nYour Score is: %d", score);
                printf("\nYou didn't perform well in quiz\n");
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score >= 600 && score < 1000)
            {
                printf("___________________________________\n");
                printf("\nYou performed Excellent in quiz\n");
                printf("\nYour Score is: %d", score);
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score == 1000)
            {
                printf("____________________________________________________________________\n");
                printf("\nYou performed extremely Well and awarded with $1000 by our team...\n");
                printf("\nYour Score is: %d", score);
                printf("____________________________________________________________________\n");
                goto playAgain;
            }
            break;

        case 'I':
            score = generalIslamicQuiz() * 100;
            if (score >= 0 && score < 600)
            {
                printf("___________________________________\n");
                printf("\nYour Score is: %d", score);
                printf("\nYou didn't perform well in quiz\n");
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score >= 600 && score < 1000)
            {
                printf("___________________________________\n");
                printf("\nYou performed Excellent in quiz\n");
                printf("\nYour Score is: %d", score);
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score == 1000)
            {
                printf("____________________________________________________________________\n");
                printf("\nYou performed extremely Well and awarded with $1000 by our team...\n");
                printf("\nYour Score is: %d", score);
                printf("____________________________________________________________________\n");
                goto playAgain;
            }
            break;

        case 'F':
            score = generalFoodQuiz() * 100;
            if (score >= 0 && score < 600)
            {
                printf("___________________________________\n");
                printf("\nYour Score is: %d", score);
                printf("\nYou didn't perform well in quiz\n");
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score >= 600 && score < 1000)
            {
                printf("___________________________________\n");
                printf("\nYou performed Excellent in quiz\n");
                printf("\nYour Score is: %d", score);
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score == 1000)
            {
                printf("____________________________________________________________________\n");
                printf("\nYou performed extremely Well and awarded with $1000 by our team...\n");
                printf("\nYour Score is: %d", score);
                printf("____________________________________________________________________\n");
                goto playAgain;
            }
            break;

        case 'M':
            score = generalMaths() * 100;
            if (score >= 0 && score < 600)
            {
                printf("___________________________________\n");
                printf("\nYour Score is: %d", score);
                printf("\nYou didn't perform well in quiz\n");
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score >= 600 && score < 1000)
            {
                printf("___________________________________\n");
                printf("\nYou performed Excellent in quiz\n");
                printf("\nYour Score is: %d", score);
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score == 1000)
            {
                printf("____________________________________________________________________\n");
                printf("\nYou performed extremely Well and awarded with $1000 by our team...\n");
                printf("\nYour Score is: %d", score);
                printf("____________________________________________________________________\n");
                goto playAgain;
            }
            break;

        case 'P':
            score = programmingLanguage() * 100;
            if (score >= 0 && score < 600)
            {
                printf("___________________________________\n");
                printf("\nYour Score is: %d", score);
                printf("\nYou didn't perform well in quiz\n");
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score >= 600 && score < 1000)
            {
                printf("___________________________________\n");
                printf("\nYou performed Excellent in quiz\n");
                printf("\nYour Score is: %d", score);
                printf("___________________________________\n");
                goto playAgain;
            }
            else if (score == 1000)
            {
                printf("____________________________________________________________________\n");
                printf("\nYou performed extremely Well and awarded with $1000 by our team...\n");
                printf("\nYour Score is: %d", score);
                printf("____________________________________________________________________\n");
                goto playAgain;
            }
            break;

        default:
            goto mainhome;
        }

    playAgain:
        printf("\n\n\n------------------------------------\n");
        printf("Press Y if you want to play next game");
        printf("\nPress any key if you want to go main menu");
        printf("\n------------------------------------\n");

        if (toupper(getch()) == 'Y')
            goto mainGame;
        else
        {
            editScore(score, username);
            goto mainhome;
        }
    }
}

int sports_quiz()
{
    int count = 0;
    int i;
    int x;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        x = i;
        switch (x)
        {
        case 1:
            printf("\nQ1.What was total number of matches played in 1975 worldcup?\n");
            printf("\n\n\tA)15\t\tB)18\n\n\tC)20\t\tD)13\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 2:
            printf("\nQ2.First Olympic game was held in?\n");
            printf("\n\n\tA)England\t\tB)Australia\n\n\tC)Germany\t\tD)Canada\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 3:
            printf("\nQ3.Which term is commonly used in Badminton & Volley Ball?\n");
            printf("\n\n\tA)Dummy\t\tB)Dribble\n\n\tC)Deuce\t\tD)Double\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 4:
            printf("\nQ4.If we're using the following words in a game. Which game are we playing?\n");
            printf("\n\nBreak, Cue, In off, jigger, Scratch\n\n");
            printf("\n\n\tA)Polo\t\tB)Billiards\n\n\tC)Bridge\t\tD)Baseball\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 5:
            printf("\nQ5.Strike word is related to which game?\n");
            printf("\n\n\tA)Baseball\t\tB)Chess\n\n\tC)Cricket\t\tD)Tennis\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYour Answer is wrong....!\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("Your Answer is wrong....!");
                getch();
                break;
            }

        case 6:
            printf("\nQ6.Ronaldo is player of which country?\n");
            printf("\n\n\tA)Brazil\t\tB)Real Madrid\n\n\tC)Portugal\t\tD)Argentina\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 7:
            printf("\nQ7.When was hockey introduced in Asian games?\n");
            printf("\n\n\tA)1951\t\tB)1958\n\n\tC)1954\t\tD)1962\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 8:
            printf("\nQ8.Which of the following is the highet Award in Sports in the World?\n");
            printf("\n\n\tA)Arjuna Award\t\tB)Jesse Owens Award\n\n\tC)Dronacharya Award\t\tD)Olympic Order\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 9:
            printf("\nQ9.Pakistan Cricket Team has won the ODI World cup in?\n");
            printf("\n\n\tA)1999\t\tB)2009\n\n\tC)1992\t\tD)None of the Above\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 10:
            printf("\nQ10.Which player has scored the fastest ODI century till date?\n");
            printf("\n\n\tA)Shahid Afridi\t\tB)Corey Anderson\n\n\tC)AB Devilliers\t\tD)Chris Gayle\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        }
    }
    return count;
}

int generalKnowledgeQuiz()
{
    int count = 0;
    int i;
    int x;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        x = i;
        switch (x)
        {
        case 1:
            printf("\nQ1.Who is the author of 'The myth of Independance'?\n");
            printf("\n\n\tA)Zulfiqar Ali Bhutto\t\tB)Imran Khan party\n\n\tC)Ayesha Jalal\t\tD)Nawaz Sharif\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 2:
            printf("\nQ2.Famous british physicist Stephen Hawking died at the age of?\n");
            printf("\n\n\tA)86\t\tB)96\n\n\tC)76\t\tD)66\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 3:
            printf("\nQ3.Which is world's smallest underground lake?\n");
            printf("\n\n\tA)Dragon's Breath Cave\t\tB)Sovetskaya Lake\n\n\tC)Craighead Caverns\t\tD)Moqua Well\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 4:
            printf("\nQ4.What is the current share of Pakistan in World Population?\n");
            printf("\n\n\tA)2.63%\t\tB)2.30%\n\n\tC)2.40%\t\tD)2.20%\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 5:
            printf("\nQ5.National predator of Pakistan is?\n");
            printf("\n\n\tA)All of these\t\tB)Lion\n\n\tC)Snow Leopard\t\tD)Snow Bear\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYour Answer is wrong....!\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("Your Answer is wrong....!");
                getch();
                break;
            }

        case 6:
            printf("\nQ6.National Vegetable of Pakistan is?\n");
            printf("\n\n\tA)Potato\t\tB)Carrot\n\n\tC)Lady finger\t\tD)All of these\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 7:
            printf("\nQ7.FIR stands for?\n");
            printf("\n\n\tA)Fact Interrogation Report\t\tB)First Information Report\n\n\tC)19Final Information Report\t\tD)Field Information Report\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 8:
            printf("\nQ8.Which Islamic country's National Language is english?\n");
            printf("\n\n\tA)Nigeria\t\tB)Libya\n\n\tC)Somaliya\t\tD)Brunei\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 9:
            printf("\nQ9.Pakistan's National Game is?\n");
            printf("\n\n\tA)Cricket\t\tB)Hockey\n\n\tC)Football\t\tD)Badminton\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 10:
            printf("\nQ10.Pakistan's National Anthem was written by?\n");
            printf("\n\n\tA)Hafeez jalandhri\t\tB)Allama Iqbal\n\n\tC)Sir Syed Ahmed Khan\t\tD)Choudhray Brothers\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        }
    }
    return count;
}

int generalIslamicQuiz()
{
    int count = 0;
    int i;
    int x;
    for (i = 1; i <= 10; i++)
    {
        system("cls");

        x = i;
        switch (x)
        {
        case 1:
            printf("\nQ1. The word Quran literally means?\n");
            printf("\n\n\tA)noble\t\tB)instruction\n\n\tC)recitation\t\tD)direction\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 2:
            printf("\nQ2.Prophet Muhammad (PBUH) belonged to which family?\n");
            printf("\n\n\tA)Hashmi\t\tB)Quraishi\n\n\tC)Makki\t\tD)Madni\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 3:
            printf("\nQ3.Which Prophet is called the Father of Muslims�?\n");
            printf("\n\n\tA)prophet Adam (A.S)\t\tB)prophet Ibraheem (A.S)\n\n\tC)prophet Ismaeel (A.S)\t\tD)printf Sulaiman (A.S)\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 4:
            printf("\nQ4.Which Prophet was able to talk with animals and jinns?");
            printf("\n\n\tA)Prophet Adam (A.S)\t\tB)Prophet Ibraheem (A.S)\n\n\tC)printf Sulaiman (A.S)\t\tD)printf Daniyal (A.S)\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 5:
            printf("\nQ5. In the Sacrilegious wars”, when Prophet Muhammad (PBUH) was 20 years of age, Quraish and their allies were lead by\n");
            printf("\n\n\tA)Abu Jahal\t\tB)Abu Lahab\n\n\tC)Umayah bin Khalaf\t\tD)Harb bin Umayah\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYour Answer is wrong....!\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("Your Answer is wrong....!");
                getch();
                break;
            }

        case 6:
            printf("\nQ6.Which companion of Prophet (PBUH) was awarded with the title of The sold of Allah�?\n");
            printf("\n\n\tA)Abu Bakr Siddique (R.A)\t\tB)Umar Farooque (R.A)\n\n\tC)Ali Al-Murtaza (R.A)\t\tD)Khalid bin Waleed (R.A)\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 7:
            printf("\nQ7.What was the name of Imam Bukhari (R.A)?\n");
            printf("\n\n\tA)Muhammad bin Ismaeel\t\tB)Muhammad Ismaeel\n\n\tC)Muhammad Ibraheem\t\tD)Ismaeel bin Ibraheem\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 8:
            printf("\nQ8.Khateeb-ul-Ambia was the title of\n");
            printf("\n\n\tA)Prophet Dawood (A.S)\t\tB)Prophet Nooh (A.S)\n\n\tC)Prophet Yaqoob (A.S)\t\tD)Prophet Shoaib (A.S)\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 9:
            printf("\nQ9.________ takes out souls of life bearing creatures.\n");
            printf("\n\n\tA)Jibrael (A.S)\t\tB)Mikael (A.S)\n\n\tC)Israfeel (A.S)\t\tD)Izraeel (A.S)\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 10:
            printf("\nQ10.The Cave of Hira is in the ________ mountain.\n");
            printf("\n\n\tA)As-Safa\t\tB)Sil\n\n\tC)Uhud\t\tD)An-Noor\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        }
    }
    return count;
}

int generalFoodQuiz()
{
    int count = 0;
    int i;
    int x;
    for (i = 1; i <= 10; i++)
    {
        system("cls");

        x = i;
        switch (x)
        {

        case 1:
            printf("\nQ1. Which type of beans are used to make baked beans?\n");
            printf("\n\n\tA)Borlotti beans\t\tB)Haricot beans\n\n\tC)Cannellini beans\t\tD)Flageolet beans\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 2:
            printf("\nQ2.What does IPA stand for?\n");
            printf("\n\n\tA)Intensely potent ale\t\tB)India pale ale\n\n\tC)India premium ale\t\tD)International porter association\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 3:
            printf("\nQ3.Bobotie is the national dish of which country?\n");
            printf("\n\n\tA)Nigeria\t\tB)Ethiopia\n\n\tC)South Africa\t\tD)Kenya\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 4:
            printf("\nQ4.Which year did The Great British Bake Off first appear on TV?");
            printf("\n\n\tA)2009\t\tB)2010\n\n\tC)2011\t\tD)2012\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 5:
            printf("\nQ5. Which of the following does not feature on the ingredients list of Worcestershire Sauce?\n");
            printf("\n\n\tA)Tamarind\t\tB)Anchovies\n\n\tC)Molasses\t\tD)Tomatoes\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYour Answer is wrong....!\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("Your Answer is wrong....!");
                getch();
                break;
            }

        case 6:
            printf("\nQ6. Which of these chocolate bars does not contain nuts in its ingredient list?\n");
            printf("\n\n\tA)Snickers\t\tB)Double Decker\n\n\tC)Picnic\t\tD)Toblerone\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 7:
            printf("\nQ7.Which flower does the spice saffron come from?\n");
            printf("\n\n\tA)Orchid\t\tB)Crocus\n\n\tC)Nasturtium\t\tD)Poppy\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 8:
            printf("\nQ8.A Whitby Bun is flavoured with what?\n");
            printf("\n\n\tA)Raspberry\t\tB)Coffee\n\n\tC)Cinnamon\t\tD)Lemon\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 9:
            printf("\nQ9.Gruy�re is a cheese from which country?\n");
            printf("\n\n\tA)France\t\tB)Switzerland\n\n\tC)Austria\t\tD)Germany\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 10:
            printf("\nQ10.What are the two main ingredients in the dish Cullen Skink?\n");
            printf("\n\n\tA)Smoked haddock and parsnips\t\tB)Cabbage and potatoes\n\n\tC)Smoked haddock and potatoes\t\tD)Smoked salmon and potatoes\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        }
    }
    return count;
}

int generalMaths()
{
    int count = 0;
    int i;
    int x;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        x = i;
        switch (x)
        {
        case 1:
            printf("\nQ1.What is the average of first 150 natural numbers?\n");
            printf("\n\n\tA)70\t\tB)70.5\n\n\tC)75\t\tD)75.5\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 2:
            printf("\nQ2.0.003 x 0.02 = ?\n");
            printf("\n\n\tA)0.06\t\tB)0.006\n\n\tC)0.0006\t\tD)0.00006\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 3:
            printf("\nQ3.What is the average of the numbers: 0,0,4,10,5, and 5?\n");
            printf("\n\n\tA)2\t\tB)3\n\n\tC)4\t\tD)5\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 4:
            printf("\nQ4.|-4| + |4| -4 + 4 = ?\n");
            printf("\n\n\tA)0\t\tB)2\n\n\tC)4\t\tD)8\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 5:
            printf("\nQ5.If 10 workers can make 10 tables in 10 days, then how many days would it take for 5 workers to make 5 tables?\n");
            printf("\n\n\tA)1\t\tB)5\n\n\tC)10\t\tD)25\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYour Answer is wrong....!\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("Your Answer is wrong....!");
                getch();
                break;
            }

        case 6:
            printf("\nQ6.A parallelogram containing a right angle is called a ?\n");
            printf("\n\n\tA)Square\t\tB)Quadrilateral\n\n\tC)Equilateral\t\tD)Rectangle\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 7:
            printf("\nQ7.The midpoint of the diameter of a circle is called ?\n");
            printf("\n\n\tA)Chord\t\tB)Center\n\n\tC)Radius\t\tD)Tangent\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 8:
            printf("\nQ8.An equilateral rectangle is called a?\n");
            printf("\n\n\tA)Quadilateral\t\tB)Square\n\n\tC)Parallelogram\t\tD)Polygon\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 9:
            printf("\nQ9.What is 1004 divided by 2?\n");
            printf("\n\n\tA)52\t\tB)502\n\n\tC)520\t\tD)5002\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 10:
            printf("\nQ10.106 x 106 - 94 x 94 = ?\n");
            printf("\n\n\tA)2004\t\tB)2400\n\n\tC)1904\t\tD)1906\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        }
    }
    return count;
}

int programmingLanguage()
{
    int count = 0;
    int i;
    int x;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        x = i;
        switch (x)
        {
        case 1:
            printf("\nQ1.What is the only thing computers understand?\n");
            printf("\n\n\tA)Machine Code\t\tB)Low Level Languages\n\n\tC)High Level Languages\t\tD)Algorithms\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 2:
            printf("\nQ2.A list of instructions that enable a computer to perform a specific task?\n");
            printf("\n\n\tA)Computer Program\t\tB)Algorithm\n\n\tC)Machine Code\t\tD)Bimary Code\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        case 3:
            printf("\nQ3.Resolving errors in a program is known as?\n");
            printf("\n\n\tA)Debugging\t\tB)Refixing\n\n\tC)Error Checking\t\tD)Problem Solving\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 4:
            printf("\nQ4.Which of the following is not a high level programming language?\n");
            printf("\n\n\tA)Assembly\t\tB)C++\n\n\tC)Java\t\tD)Python\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 5:
            printf("\nQ5.What does binary code means?\n");
            printf("\n\n\tA)a coding system using the binary digits 0 and 1\t\tB)a coding system using the binary digits 1-10\n\n\tC)1000100100\t\tD)code.org\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nYour Answer is wrong....!\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("Your Answer is wrong....!");
                getch();
                break;
            }

        case 6:
            printf("\nQ6.What is the smallest unit of measurement used to quantify computer data?\n");
            printf("\n\n\tA)a bride\t\tB)a bit\n\n\tC)marble\t\tD)a tablespoon\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 7:
            printf("\nQ7.Java,Python,PHP, and C++ are examples of?\n");
            printf("\n\n\tA)low level languages\t\tB)medium level languages\n\n\tC)Graphic arts languages\t\tD)high level languages\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 8:
            printf("\nQ8.How many bits make up one letter in binary code?\n");
            printf("\n\n\tA)4\t\tB)6\n\n\tC)8\t\tD)10\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 9:
            printf("\nQ9.Python is a clear and powerful __________-oriented programming languuage?\n");
            printf("\n\n\tA)software\t\tB)object\n\n\tC)snake\t\tD)source\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }

        case 10:
            printf("\nQ10.Which generation of languages started in the 1950s?\n");
            printf("\n\n\tA)First\t\tB)Second\n\n\tC)Third\t\tD)Fourth\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nYou selected the Right Answer....\n\n");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nYour Answer is wrong....!\n");
                getch();
                break;
            }
        }
    }
    return count;
}

void help()
{
    system("cls");
    printf("-------------------------------------------------");
    printf("\n ==================== Help ==================== \n");
    printf("-------------------------------------------------");

    printf("\n\nThere will be a Home Screen in which there are Multiple Options to choose...");
    printf("\nif you want to start the then Press 'S' and the game will start...");
    printf("\nIn the Beginning you'll be asked 3 Questions and you've to answer at least 2 of");
    printf("\nthe questions correctly... If you pass the test then you'll be taken to the next");
    printf("\nlevel of the game and the Menu will appear on your screen and there are 6 categories ");
    printf("\nout there and you can select any category(one at a time) and you can check your");
    printf("\nknowledge about the topic and after the quiz you'll be able to see your score and");
    printf("\nyour performance remarks and after that you'll be asked");
    printf("\nto play again the quiz or go to Main Home...");
    printf("\nIf you want to check the last highest points you scored then there's");
    printf("\na option you can select and check your highest points and if you want");
    printf("\nto somehow reset the score then there's one more option available to reset the ");
    printf("\nscore to 0 and if you want to quit the game then you can Exit it by Pressing 'Q'....\n\n");
}

void highestPoint()
{
    system("cls");
    char name[20] = "Unknown";
    int score = 0;
    FILE *getScoreAndName;
    getScoreAndName = fopen("result.txt", "r");
    fscanf(getScoreAndName, "%s%d", &name, &score);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t %s your last Highest Score is: %d", name, score);
    printf("\n\n\t\t*************************************************************");
    fclose(getScoreAndName);
    getch();
}

void scoreReset()
{
    system("cls");
    FILE *resetScore;
    int score = 0;
    char name[20] = "Unknown";
    resetScore = fopen("result.txt", "w");
    fprintf(resetScore, "%s\t%d", name, score);
    printf("\nSuccessfully Resetted the score...!\n");
    fclose(resetScore);
}

void editScore(int score, char usNm[20])
{
    system("cls");
    FILE *editFile;
    int scr = score;
    editFile = fopen("result.txt", "w");
    fprintf(editFile, "%s\t%d", usNm, scr);
    fclose(editFile);
}