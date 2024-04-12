#include<iostream>
using namespace std;
int main()
{
	int no1, no2, choice, ans;
	
	do
	{
		cout<<"\n Enter no1: "<<endl;
		cin>>no1;
		
		cout<<"\n Enter no2: "<<endl;
		cin>>no2;
		
		cout<<"\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION"<<endl;
		cout<<"\n Enter your choice: "<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1: ans=no1+no2;
					cout<<"\n Addition of "<<no1<<" + "<<no2<<" : "<<ans<<endl;
					break;
					
			case 2: ans=no1-no2;
					cout<<"\n Substraction of "<<no1<<" - "<<no2<<" : "<<ans<<endl;
					break;
					
			case 3: ans=no1*no2;
					cout<<"\n Multiplication of "<<no1<<" * "<<no2<<" : "<<ans<<endl;
					break;
					
			case 4: ans=no1/no2;
					cout<<"\n Division of "<<no1<<" / "<<no2<<" : "<<ans<<endl;
					break;
					
			default : cout<<"\n Invalid Input"<<endl;
		}
		cout<<"\n Enter 1 to continue and 0 to exit: "<<endl;
		cin>>choice;
		
	}while(choice!=0);
	
	return 0;
}
