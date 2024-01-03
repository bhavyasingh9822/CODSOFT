#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
  

  void  Guess_Number(){
  
      cout<<"Guess a random Number between 1-100:"<<endl;
      int tries;
       int guess;
      cout<<"enter the number of tries u want to guess the number correctly:"<<endl;
      cin>>tries;
        srand(time(0));
       int randnum=0+(rand()%101);/// this generates a random number between 0 to 100
       
        for (int i =1;i<=tries;i++){
            
          cout<<"guess a  number:";
          cin>>guess;
         if (guess==randnum){
            cout<<"Your guess is correct, you have guessed the number correctly in "<<i<<" tries"<<endl;
            break;
         }
         else if(guess<randnum)
         {
            cout<<"Your guess is smaller, please guess a higher number"<<endl;
         }
         else{
            cout<<"You have guessed a Higher number, please  guess a smaller number"<<endl;
         }
        }
       
  }

int main(){
   
   Guess_Number();
}
