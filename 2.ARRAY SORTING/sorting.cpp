#include <iostream>

using namespace std;

int main ()
{
	int n,i,j;
	cout<<"----------RANDOM NUMBER SORTING----------";
	cout<<"\n\nEnter the number of random numbers want to enter : ";
	cin>>n;
	float entered_array[n],temp;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the random value for number "<<i+1<<" : ";
		cin>>entered_array[i];
	}
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(entered_array[i]>entered_array[j])
			{
				temp=entered_array[i];
				entered_array[i]=entered_array[j];
				entered_array[j]=temp;
			}
		}
	}
	cout<<"\n\nAscending order"<<"\t\t"<<"Descending order";
	for(i=0,j=n-1;i<n,j>-1;i++,j--)
	{
		cout<<"\n"<<"\t"<<entered_array[i]<<"\t\t\t"<<entered_array[j];
	}
	return 0;
}
