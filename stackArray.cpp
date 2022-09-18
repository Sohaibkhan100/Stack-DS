#include<iostream>
using namespace std;
int size=10;
class StackArray{
private:
  int top;
  int *array;
  
public:
StackArray(){
    array =new int [size];
    top=-1;
}

   void push(int value){
    if(top==size-1){cout<<"stack overflow"<<endl;
    return;
   }
   else{top++;
   array[top]=value;}
};
 void pop(){
    if(top==-1){cout<<"stack underflow"<<endl;
    return;
   }
   else{top--;}
};
 int topElement(){
    if(top==-1){
         cout<<"stack underflow"<<endl;
         return -1;
    
   }else {
  return array[top];}
};




};
int main(){
    StackArray obj1;
    obj1.push(10);
    obj1.push(30);
    obj1.pop();
    cout<<obj1.topElement();
    obj1.pop();
    cout<<obj1.topElement();
    obj1.push(5);
    cout<<obj1.topElement();
    return 0;
    
     



}