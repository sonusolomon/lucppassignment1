// Program to Find Greater of Two Numbers.

#include<iostream>
using namespace std;
int main()
{
    // Here We are Initaializing the x.
    int x; 

    // Here We are Initaializing the y.
    int y; 

    // Here Goes the User Input
    cout<<"Enter The Numbers 'x' and 'y': ";

    // Now well read the values given by the user and assign them to the varialbles x and y.
    cin>>x >>y;

    // Now the Decision will be made whether to Execute the 'if' block or the 'else'.
    // If the 'if' evaluated to be True then the ouput will print x < y, but if its not the output will print the 'else' block saying x < y
    if (x>y)
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<x <<" is Greater than "<<y<<".";
    }

    else
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<x<<" is Less than "<<y<<".";
    }
}