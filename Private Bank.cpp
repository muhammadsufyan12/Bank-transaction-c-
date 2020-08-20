#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
	initialstart:
	system("color 0b");
	string ac_name[10]={"Haris xyz","Mohammad abc","Mohammad Ali","Mohammad Ahmed","Hassan qwe","Waqar mry","xyz Sheikh","Masood stu","Basharat opq","Mohammad lmn",};
	int ac_num[10]={1122,1133,1144,1155,1166,1177,1188,1199,2211,2221};
	int ac_pswrd[10]={1111,2222,3333,4444,5555,6666,7777,8888,9999,1234};
	int ac_amount[10]={500,1000,1500,2000,2500,3000,3500,4000,4500,5000};
	cout<<"\t\t";
	cout<<" Welcome to Private Bank ltd\n\n\n";
						Sleep(1000);
	cout<<"Please Enter Valid Account Number\n\n";
	int a,xxx=0;
	cin>>a;
						// nothing important section just kiding
						Sleep(750);
						cout<<"\tLoading ";
						Sleep(750);
						cout<<".";
						Sleep(750);
						cout<<".";
						Sleep(750);
						cout<<".\n\n";
	int i;
	for(i=0;i<10;i++)
	{
		if(a==ac_num[i])
		{
			int b;
			cout<<"\n\nPlease Enter Valid Pin Code"<<endl;
			cin>>b;
						// nothing important section just kiding
						Sleep(750);
						cout<<"\n\n\tChecking ";
						Sleep(750);
						cout<<".";
						Sleep(750);
						cout<<".";
						Sleep(750);
						cout<<".\n\n";
			if(b==ac_pswrd[i])
			{
				cout<<"\tWelcome Mr."<<ac_name[i]<<endl;
				cout<<"\n\nPress 1 For Deposite Cash : \nPress 2 For Receive Cash: \nPress 3 for Transfer Amount to another Account: \n";
				int d;
				cin>>d;
				if(d==1)
				{
					cout<<"\n\nEnter Deposite Amount : \n";
					int e;
					cin>>e;
					int f;
					f=ac_amount[i]+e;
					cout<<"\nyou have Deposited : "<<e<<" Rs.\n\nYour Total Account Balance is: "<<f<<"Rs."<<endl;
					ac_amount[i]=f;
					getch();
					system("cls");
			
					goto initialstart;
					
					break; 
					
				}
				if(d==2)
				{
					cout<<"Enter Amount For Cash Receive:"<<endl;
					int g;
					cin>>g;
					if(g<=ac_amount[i])
					{
						int h;
						h=ac_amount[i]-g;
						cout<<"\n\nyou Received "<<g<<" \n\nYour Remaining Account Balance is:"<<h<<endl;
						ac_amount[i]=h;
						break;
					}
					else
					{
						cout<<"\nYou Have Insufficiant Account Balance For This Transection:"<<endl;
				    	break;
					}
				}
				if(d==3)
				{
						int e1,f1,g1,h1,i1;
						cout<<"\n\nEnter Account Numbre in which Ammount would be Transfer:  \n";
						cin>>f1;
						for(g1=0;g1<10;g1++)
						{
						    if(f1==ac_num[g1])
						       {
								cout<<"\nEnter Amount from your account to transfer: \n";
								cin>>h1;
								if(h1<=ac_amount[i])
								{
									i1=0;
									i1=ac_amount[i]-h1;
									ac_amount[g1]=ac_amount[g1]+i1;
									cout<<"\n\nYou have transfered "<<h1<<" Rs."<<" to "<<f1<<endl;
									cout<<"\n\n Your remaining amount is "<<i1<<" Rs. ";
									xxx++;
									//break;
								}
								else
								{
									 xxx++;
			 				    	 cout<<"\n\nYou have insuficient balance for this transaction \n";
							    	 //break;
								}
						       }
						}
						if(g1>9 && xxx == 0)
						{
							cout<<"\n\n\tAccount number does not hold !\n";
							break;
						}
				}
				if(d<=0 && d>=4)
				{
					cout<<"\n\nPlease Choose Correct Option:"<<endl;
			    	break;
			    }
			}
			else
			{
				cout<<"\n\nYou Enter Invalid Pin Code:"<<endl;
		    	break;
		    }		    
		}
	}
	if(i>9 && xxx == 0 )
	{
	   cout<<"\n\nInvalid Account Number:"<<endl;
    }
    cout<<"\n         THANK YOU"<<endl;
int no;
cout<<"\n\n\n\n\n\n\n\n";
cin>>no;
}
