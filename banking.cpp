# include<iostream.h>
# include<conio.h>
# include<iomanip.h>

class bank
	{
	char name[20];
	int acno;
	char actype[4];
	float balance;
	public:
	void init();
	void deposit();
	void withdraw();
	void disp_det();
	};
//member functions of bank class
void bank :: init()
{
cout<<"

		New Account
";
cout<<"

Enter the Name of the depositor : ";
cin.get(name,19,'
');
cout<<"
Enter the Account Number : ";
cin>>acno;
cout<<"
Enter the Account Type : (CURR/SAVG/FD/RD/DMAT) ";
cin>>actype;
cout<<"
Enter the Amount to Deposit : ";
cin >>balance;
}
void bank :: deposit()
{
float more;
cout <<"
		Depositing
";
cout<<"

Enter the amount to deposit : ";
cin>>more;
balance+=more;
}
void bank :: withdraw()
{
float amt;
cout<<"
		Withdrwal
";
cout<<"

Enter the amount to withdraw : ";
cin>>amt;
balance-=amt;
}
void bank :: disp_det()
{
cout<<"

		Account Details

";
cout<<"Name of the depositor : "<<name<<endl;
cout<<"Account Number        : "<<acno<<endl;
cout<<"Account Type          : "<<actype<<endl;
cout<<"Balance               : $"<<balance<<endl;
}
// main function , exectution starts here
void main(void)
{
clrscr();
bank obj;
int choice  =1;
while (choice != 0 )
{
cout<<"

Enter 0 to exit
	1. Initialize a new acc.
	2. Deposit
	3.Withdraw
	4.See A/c Status";
cin>>choice;
switch(choice)
{
	case 0 :obj.disp_det();
		cout<<"

		EXITING PROGRAM.";
		break;
	case 1 : obj.init();
		break;
	case 2: obj.deposit();
		break;
	case 3 : obj.withdraw();
		break;
	case 4: obj.disp_det();
		break;
	default: cout<<"

Illegal Option"<<endl;
}
}
getch();
}
