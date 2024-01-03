#include<iostream>
using namespace std;
long operation(){
    float  num1,num2;
    char oprn;
    int time;
     cout<<"enter how many operations you want to perform:";
     cin>>time;
    while(time--){
        cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the operation:"<<endl;
     cin>>oprn;
     cout<<"enter the second number"<<endl;
     cin>>num2;
   
        if (oprn=='+'){
    cout<<"addition of two numbers is:"<<num1+num2<<endl;
    
}
else if (oprn=='-'){
    cout<<"subtraction of two number is :"<<num1-num2<<endl;
   
}
else if (oprn=='/'){
    cout<<"division of two number is:"<<num1/num2<<endl;
  
}
else if(oprn=='*') {
    cout<<"mutiplication of two numbers is: "<<num1*num2<<endl;
   
}
else{
    cout<<"invalid choice"; 
}
    }

}


int main(){
    operation();
}
