#include <iostream>

using namespace std;

int main()
{
    int n=0,i=0,j=0;
    int row=0,col=0;
    cin>>row>>col;
    
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1||i==row||j==1||j==col)
            {cout<<"*";}
            else
            {cout<<" ";}
        }
       
        cout<<"\n";
    }
    

    return 0;
}
(HOLLOW RECTANGLE)

*****
*   *
*   *
*   *
*****

