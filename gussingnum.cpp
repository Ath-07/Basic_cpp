#include<iostream>
using namespace std;

int main(){

    int left = 0; 
    int right = 100; 
    int mid = -1; 
    int num;
    int it = 1;
    char response;

    cout<<"Think of a number between 0 and 100:";
    cin>>num;

    while (left <= right)
    {
        mid = (right + left)/2;
    
        cout<<"Your response "<<mid<<"? y for Yes, h for higher, l for lower";
        cin>>response;

        if (response == 'y')
        {
            cout<<"Guessed your number in "<<it<<" tries. You thought of number "<<mid<<"!"<<endl;
            break;
        }
        else if (response == 'h')
        {
            cout<<"Your number is higher than "<<mid<<endl;
            left = mid + 1;
        }
        else if (response == 'l')
        {
            cout<<"Your number is lower than "<<mid<<endl; 
            right = mid - 1;
        }
        else
        {
            cout<<"Response should be one of y OR h OR l"<<endl;
        }
        it = it + 1;
    }
    return 0;
}