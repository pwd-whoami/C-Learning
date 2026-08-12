#include<iostream>
#include<string>
using namespace std;

int main()
{
	int attempts = 3;
	string username = "john", password = "doe123";
	string inputuser, inputpass;
	
	do 
	{
		cout<<"\n Enter Your Username: ";
		cin>>inputuser;
		cout<<"\n Enter Your Password: ";
		cin>>inputpass;
		
		if (inputuser == username && inputpass == password)
		{
			cout<<"\n Login Successful! ";
			return 0;
		}
		else
		{
			cout<<"\n Invalid Username or Password. Please Try Again! You have "<<attempts -1<<" attempts left."<<endl;
			attempts --;
		}
	} while (attempts > 3);
	
	if(attempts == 3)
	{
		cout<<"\n You Exceed Maximun Attempts. Try Again!";
	}
	
	return 0;
}
