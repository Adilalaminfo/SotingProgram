#include <iostream>
using namespace std;

#define ARRAY_SIZE 5
 
int main()
{
    int num[ARRAY_SIZE], i ,j ,temp;

	cout<<"Program for Sorting (Asending Order) In Array\n";

	// Read Input
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>num[i];
    }
        
    // Array Sorting - Asensding Order
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (num[i] > num[j])
            {
                temp =  num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < ARRAY_SIZE; ++i)
        cout<<num[i]<<endl;
        
    return 0;
}