#include<iostream>
//lifo
#include<stack>
using namespace std;

void printStackElements(stack<int> stack)
{
    while(!stack.empty())
    {
        cout<<stack.top()<<endl;
        stack.pop();
    }
}
int main()
{
    int num,conti;
    stack<int>numbersStack;
    
    while(true)
    {
        cout<<"number: ";
        
        cin>>num;
        
        numbersStack.push(num);
        
        cout<<"\ncontinue(1/0): ";
        cin>>conti;
        
        if(conti == 0) break;
    }

    printStackElements(numbersStack);

    return 0;
}