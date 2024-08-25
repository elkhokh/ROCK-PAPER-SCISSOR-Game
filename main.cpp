#include <iostream>
#include <ctime>
using namespace std;

int main ()
{
    srand(time(0));
    int userscore = 0;
    int computerscore = 0;
    //loop for play many times
    while (true){
    //set computer random move
    int computermove = rand() % 3;
    //set user move
    int usermove;
    cout<<"choose your shape\n1- rock\n2- paper\n3- scissors"<<"\n";
    cin>>usermove;
    //win condition
    if (usermove == computermove)
    {
        cout<<"tieeeeeee"<<"\n";
    }
    else if ((usermove == 1 && computermove == 3)||
    (usermove==3 && computermove==2)||
    (usermove==2 && computermove==1))
    {
        cout<<"user wins"<<"\n";
        userscore++;
    }
    else
    {
        cout<<"computer wins"<<"\n";
        computerscore++;
    }
    //show result
    cout<<"userscore is "<<userscore<<"\t"<<"computerscore is "<<computerscore<<"\n";
    }
    return 0;
}
