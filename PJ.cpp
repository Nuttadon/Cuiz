#include<iostream>
#include<string>
#include<stdio.h>
#include <windows.h>
#include "conio.h"
int c;
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
int Guess;
int Total;

class Question
{
 private :
     string Question_Text;
     string Answer_1;
     string Answer_2;
     string Answer_3;
     string Answer_4;

    int Correct_Answer;
    int Question_Score;


 public :
    void setValues (string, string, string, string,string, int, int);
    void askQuestion ();


};
void gotoXY(int x, int y);
int main()
{
    gotoXY(32,2);cout<< " # # # # # # # # # # # # # # # # # # # # # # # # # " << endl;
    gotoXY(32,3);cout<< " #                                               # " << endl;
    gotoXY(32,4);cout<< " #                                               # " << endl;
    gotoXY(32,5);cout<< " #        $$ WELCOME TO THE QUIZ GAME $$         # " << endl;
    gotoXY(32,6);cout<< " #    --------------------------------------     # " << endl;
    gotoXY(32,7);cout<< " #                  By Group 6                   # " << endl;
    gotoXY(32,8);cout<< " #                                               # " << endl;
    gotoXY(32,9);cout<< " #                                               # " << endl;
    gotoXY(32,10);cout<< " # # # # # # # # # # # # # # # # # # # # # # # # #  " << endl;

    cout<< endl;

     gotoXY(42,13);cout<< " Press Enter to start the quiz " << endl;
     gotoXY(35,14);cin.get();

    string Name;
    int Age;
     gotoXY(35,15);cout << " What's your name? " << endl;
     gotoXY(35,16);cin >> Name;
     gotoXY(35,17);cout << endl;
     gotoXY(35,18);cout << " How old are you? " << endl;
     gotoXY(35,19);cin >> Age;
     gotoXY(35,20);cout << endl;
    string Respond;
     gotoXY(35,21);cout << " Are you ready to take the Quiz " << Name << "? Yes/No."<<endl;
     gotoXY(35,22);cin >> Respond;
    if (Respond == "yes"||"Yes"||"YES"||"YeS"||"yES"||"yEs"||"YEs"||"yeS")
    {
         gotoXY(35,23);cout <<endl;
         gotoXY(35,24);cout << " Ok, Good Luck! " << endl;
         gotoXY(35,25);cin.get();
         Sleep(500);
         system("cls");
 gotoXY(48,3);printf("Please select choice\n");
 gotoXY(47,4); printf("**********************\n");
 gotoXY(48,6); printf("1. Funny riddles \n");
 gotoXY(48,7); printf("2. Fruit \n");
 gotoXY(48,8);printf("3. Animal \n");
 gotoXY(48,9);printf("4. Thai Food \n");
 gotoXY(48,11);printf("Select : ");
 gotoXY(57,11);scanf("%d",&c);
 system("cls");
 switch(c)
 {
  case 1 : gotoXY(48,1);printf("Funny riddles");
  {
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;

   q1.setValues("1. What word is always pronounced wrong?",

                     "So good",
                     "Wow!",
                     "Right",
                     "Wrong",
                     4,
                     20);

    q2.setValues("2. Name two things you can never eat for breakfast?",
                     "Lunch and dinner",
                     "Bread and Tea",
                     "Steak and Wine",
                     "Fruit and Salads",
                     1,
                     20);

    q3.setValues("3. If you threw a green shoe into the Red Sea, what would it become?",
                     "Float",
                     "Drown",
                     "Wet",
                     "Lost",
                     3,
                     20);

    q4.setValues("4. What two words contain thousands of letters?",
                     "Police Station",
                     "Mail box",
                     "Post office",
                     "White house",
                     3,
                     20);

    q5.setValues("5. Before Mt. Everest was discovered, what was the highest mountain in the world?",
                     "Mt.Fuji",
                     "Mt. Everest",
                     "Doi Inthanon",
                     "Mt.Himalaya",
                     2,
                     20);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();

  }
  break;
  case 2 : gotoXY(48,1);printf("Fruit");
  {

        Question q6;
        Question q7;
        Question q8;
        Question q9;
        Question q10;

    q6.setValues("1. What fruits have eyes around?",
                     "Pineapple",
                     "Orange",
                     "Kiwi",
                     "Grape",
                     1,
                     20);

    q7.setValues("2. What fruits open green, find open white, find black, sweet taste?",
                     "Peach",
                     "Water melon",
                     "Custard apple",
                     "Pear",
                     3,
                     20);

    q8.setValues("3. What fruits the skin is thorny, but the inside is sweet yellow?",
                     "Berries",
                     "Durian",
                     "Pomegranate",
                     "Lemon",
                     2,
                     20);

    q9.setValues("4. What fruits the skin is red and has small eyes around it?",
                     "Avocados",
                     "Mango",
                     "Plum",
                     "Strawberry",
                     4,
                     20);

    q10.setValues("5. What fruits the brown balls are   groups and so sweet?",
                     "Grape",
                     "Cherry",
                     "Blackberries",
                     "Longan",
                     4,
                     20);

    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
  }
  break;
  case 3 : gotoXY(48,1);printf("Animal");
  {
        Question q11;
        Question q12;
        Question q13;
        Question q14;
        Question q15;

    q11.setValues("1. Which bird can fly straight up, down, and backward?",
                     "Butterfly",
                     "Chicken",
                     "Bird",
                     "Hummingbird",
                     4,
                     20);

    q12.setValues("2. Which animal's group is known as a pride?",
                     "Alpaca",
                     "Tiger",
                     "lion",
                     "Alligator",
                     3,
                     20);

    q13.setValues("3. Which animal leaps out of the water to communicate with others of its kind?",
                     "Walrus",
                     "Whale",
                     "Shark",
                     "Dolphin",
                     2,
                     20);

    q14.setValues("4. Which animal's baby is known as a cygnet?",
                     "Grasshopper",
                     "Swan",
                     "Mallard",
                     "Hippopotamus",
                     2,
                     20);

    q15.setValues("5. Which bamboo-eating bear has a baby that weighs less than an apple?",
                     "Panda bear",
                     "Hamster",
                     "Koala",
                     "Pig",
                     1,
                     20);

    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();
  }
  break;
  case 4 : gotoXY(48,1);printf("Thai Food");
  {
        Question q16;
        Question q17;
        Question q18;
        Question q19;
        Question q20;

    q16.setValues("1. Thai famous food With shrimp as a component?",
                     "Omelette",
                     "Tom Yum Kung",
                     "Fried rice",
                     "Chicken rice",
                     2,
                     20);

    q17.setValues("2. Gang Tai Pla or Nam Prik ong , which one is the northern food?",
                     "Tom Saap",
                     "Gang Tai Pla",
                     "Nam Prik ong",
                     "Kua Kling",
                     3,
                     20);

    q18.setValues("3. What Gang color is green  with coconut milk, famous in Thailand?",
                     "Fried Chicken",
                     "Green Curry",
                     "Chicken in Coconut Soup",
                     "Green papaya salad",
                     2,
                     20);

    q19.setValues("4. Thai dessert made from egg yolks looks like angle hair?",
                     "Khanom Chun",
                     "Tong Yip",
                     "Tong Yord",
                     "Foi Thong",
                     4,
                     20);

    q20.setValues("5. What Yen-Ta-Four be called to eat in the morning?",
                     "Yen-Ta-Four",
                     "Evening-Ta-Four",
                     "Morning-Ta-Four",
                     "Goodnight-Ta-Four",
                     1,
                     20);

    q16.askQuestion();
    q17.askQuestion();
    q18.askQuestion();
    q19.askQuestion();
    q20.askQuestion();
  }
  break;
  default : printf("Please select 1-4 only");
  Sleep(4000);
  return 0;
  break;

 }


    gotoXY(41,2);cout << "Your Total Score is " << Total << " out of 100" << endl;
    gotoXY(35,3);cout << endl;

        if(Total >= 60)
        {
            gotoXY(45,9);cout << "Great you passed the quiz!" <<endl;
            gotoXY(35,10);cout << endl;
            gotoXY(35,11);cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $" << endl;
            gotoXY(35,12);cout << "$                                           $" << endl;
            gotoXY(35,13);cout << "$           * CONGRATULATIONS  *            $" << endl;
            gotoXY(35,14);cout << "$                                           $" << endl;
            gotoXY(35,15);cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $" << endl;
        }
        else
        {
            gotoXY(44,10);cout << "Sorry, you failed the quiz." << endl;
            gotoXY(44,11);cout << endl;
            gotoXY(46,12);cout << "Better luck next time!" << endl;
            gotoXY(35,13);cin.get();
        }
        Sleep(10000);
        return 0;

}

        else
        {
            gotoXY(35,24);cout << " Ok, Goodbye! " << endl;
            cin.get();
            Sleep(10000);
            return 0;
        }
}
void gotoXY(int x, int y);
void Question::setValues (string q, string a1,string a2,string a3,string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}
void gotoXY(int x, int y);
void Question::askQuestion()
{
    cout << endl;
    gotoXY(35,3);cout << Question_Text << endl;
    gotoXY(35,5);cout << "1. " << Answer_1 << endl;
    gotoXY(35,6);cout << "2. " << Answer_2 << endl;
    gotoXY(35,7);cout << "3. " << Answer_3 << endl;
    gotoXY(35,8);cout << "4. " << Answer_4 << endl;
    cout << endl;
    gotoXY(35,10);cout << "What is your answer?" << endl;
    gotoXY(35,11);cin >> Guess;

    if (Guess == Correct_Answer)
    {
        cout << endl;
        gotoXY(35,13);cout << "Great! You are correct." << endl;
        Total = Total + Question_Score;
        gotoXY(35,14);cout << "Score: " << Total << " Out of 100!" << endl;
        cout << endl;
        Sleep(2000);
        system("cls");
        gotoXY(50,8);cout << "Next Question in 3"<<endl;
        Sleep(1000);
        gotoXY(50,10);cout << "Next Question in 2"<<endl;
        Sleep(1000);
        gotoXY(50,12);cout << "Next Question in 1"<<endl;
        system("cls");
    }
    else
    {
     cout << endl;
     gotoXY(35,13);cout << "Oh No! You are Wrong." << endl;
     gotoXY(35,14); cout << "Score " << Total << " Out of 100!"  << endl;
     gotoXY(35,15);cout << "The correct answer is " << Correct_Answer << "." << endl;
     cout << endl;
     Sleep(3000);
     system("cls");
     gotoXY(50,8);cout << "Next Question in 3"<<endl;
     Sleep(1000);
     gotoXY(50,10);cout << "Next Question in 2"<<endl;
     Sleep(1000);
     gotoXY(50,12);cout << "Next Question in 1"<<endl;
     system("cls");
    }
}
void gotoXY(int x, int y)
{
CursorPosition.X = x;
CursorPosition.Y = y;
SetConsoleCursorPosition(console,CursorPosition);
}
void clock()
{
    Sleep(1000);
    printf("1");
    Sleep(1000);
    printf("2");
    Sleep(1000);
    printf("3");
    Sleep(1000);
    printf("4");
    Sleep(1000);
    printf("5");
}
