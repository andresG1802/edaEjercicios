#include<iostream>
//fifo
#include<queue>
using namespace std;
void printQueue(queue<string> queue)
{
    int index=1;
    while(!queue.empty())
    {
        cout<<index<<":"<<queue.front()<<endl;       
        index++;
        queue.pop();
    }
    cout<<endl;
}

int main()
{
    int answer;
    bool contin = false;
    string task;
    queue<string> myQueue;
     
    
    while(true)
    {
        cout<<"Add your Task: ";
        cin.ignore();
        cin>>task;
       
        myQueue.push(task);
        cout<<"Do you want to continue(1/0): ";
        cin>>answer;
        if(answer == 0) break;
    } 
    printQueue(myQueue);   
    
    return 0;
}