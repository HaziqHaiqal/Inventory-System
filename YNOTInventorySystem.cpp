#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream login;
	login.open("StaffLogin.txt");
	fstream sales;

	
	fstream food;
	fstream sport;
	fstream beverage;
	fstream misc;
	fstream kitchen;
	fstream stationery;
	/////////////////////////////////////////////////
	struct foodS
	{
		string IDF;
		string nameF;
		float priceF;
		int quantF;
	};
	
	struct beveS
	{
		string IDB;
		string nameB;
		float priceB;
		int quantB;
	};	
		
	struct sportS
	{
		string IDS;
		string nameS;
		float priceS;
		int quantS;
	};
	
	struct miscS
	{
		string IDM;
		string nameM;
		float priceM;
		int quantM;
	};
	
	struct kitchenS
	{
		string IDK;
		string nameK;
		float priceK;
		int quantK;
	};
	
	struct statS
	{
		string IDT;
		string nameT;
		float priceT;
		int quantT;
	};
	

	/////////////////////////////////////////////////
	foodS foodArr[50];
	beveS beveArr[50];
	sportS sportArr[50];
	miscS miscArr[50];
	kitchenS kitchenArr[50];
	statS statArr[50];


	/////////////////////////////////////////////////
	string Ruser,Rpass,user,pass,SID,Sname;
	int counter=0,option,option2,option3,Squant;
	char ch;
	float Sprice;
	string FID,Fname,BID,Bname,SPID,SPname,MID,Mname,KID,Kname,TID,Tname;
	float Fprice,Bprice,SPprice,Mprice,Kprice,Tprice;
	int Fquant,Bquant,SPquant,Mquant,Kquant,Tquant;

	while(counter==0)
	{
		
	cout<<"============V5 Mart Inventory System============"<<endl<<endl;
	cout<<"Please Login using the correct username and password"<<endl;
	cout<<"Username :"<<endl;
	cin>>user;
	cout<<"Password :"<<endl;
	cin>>pass;
	
	login>>Ruser;
	login>>Rpass;
	
	if ((user==Ruser)&&(pass==Rpass))
	{
		system("CLS");
		counter++;
	}
	
	else 
	{
		system("CLS");
		cout<<"Login Error"<<endl;
		system("pause");
		system("CLS");
	}
	}
	/////////////////////////////////////////////////
counter=0;

while(counter==0){
		/////////////////////////////////////////////////
	int counterF=0,counterB=0,counterS=0,counterM=0,counterT=0,counterK=0,counterR=0;

	food.open("Food.txt");
	int i=0;
	while(!food.eof())
	{
	food>>foodArr[i].IDF;
	food>>foodArr[i].nameF;
	food>>foodArr[i].priceF;
	food>>foodArr[i].quantF;
	i++;
	counterF++;
	}
	food.close();
	
	beverage.open("Beverage.txt");
	int j=0;
	while(!beverage.eof())
	{
	beverage>>beveArr[j].IDB;
	beverage>>beveArr[j].nameB;
	beverage>>beveArr[j].priceB;
	beverage>>beveArr[j].quantB;
	j++;
	counterB++;
	}
	beverage.close();
	
	sport.open("Sport.txt");
	int k=0;
	while(!sport.eof())
	{
	sport>>sportArr[k].IDS;
	sport>>sportArr[k].nameS;
	sport>>sportArr[k].priceS;
	sport>>sportArr[k].quantS;
	k++;
	counterS++;
	}
	sport.close();
	
	misc.open("Miscellaneous.txt");
	int l=0;
	while(!misc.eof())
	{
	misc>>miscArr[l].IDM;
	misc>>miscArr[l].nameM;
	misc>>miscArr[l].priceM;
	misc>>miscArr[l].quantM;
	l++;
	counterM++;
	}
	misc.close();
	
	kitchen.open("Kitchen.txt");
	int m=0;
	while(!kitchen.eof())
	{
	kitchen>>kitchenArr[m].IDK;
	kitchen>>kitchenArr[m].nameK;
	kitchen>>kitchenArr[m].priceK;
	kitchen>>kitchenArr[m].quantK;
	m++;
	counterK++;
	}
	kitchen.close();
	
	stationery.open("Stationery.txt");
	int n=0;
	while(!stationery.eof())
	{
	stationery>>statArr[n].IDT;
	stationery>>statArr[n].nameT;
	stationery>>statArr[n].priceT;
	stationery>>statArr[n].quantT;
	n++;
	counterT++;
	}
	stationery.close();
	/////////////////////////////////////////////////
system("CLS");
cout<<"=====Welcome to V5 inventory system====="<<endl;
cout<<"What would you like to do?"<<endl;
cout<<"===================================="<<endl;
cout<<"1 - View Inventory"<<endl;
cout<<"2 - Add Items to Inventory"<<endl;
cout<<"3 - View Sales Report"<<endl;
cout<<"4 - Make Sales"<<endl;
cout<<"===================================="<<endl;

cin>>option;				
switch (option)
{
	case 1:
		{
		system("CLS");
		cout<<"===================================="<<endl;
		cout<<"What category would you like to view?"<<endl;
		cout<<"1 - Food"<<endl;
		cout<<"2 - Beverage"<<endl;
		cout<<"3 - Sport"<<endl;
		cout<<"4 - Kitchen"<<endl;
		cout<<"5 - Stationery"<<endl;
		cout<<"6 - Miscellaneous"<<endl;
		cout<<"===================================="<<endl;
		cin>>option2;
		system("CLS");
			if(option2==1)
			{
				cout<<"====================Food===================="<<endl;
				cout<<"ID\t\tName\t\tPrice\tQuantity"<<endl;
				for(int ii=0;ii<counterF;ii++)
				{
					cout<<foodArr[ii].IDF<<"\t"<<foodArr[ii].nameF<<"\t"<<foodArr[ii].priceF<<"\t"<<foodArr[ii].quantF<<endl;
				}
				system("pause");
				system("CLS");
			}
			else if(option2==2)
			{
				cout<<"====================Beverage===================="<<endl;
				cout<<"ID\t\tName\t\t\tPrice\tQuantity"<<endl;
				for(int jj=0;jj<counterB;jj++)
				{
					cout<<beveArr[jj].IDB<<"\t"<<beveArr[jj].nameB<<"\t\t"<<beveArr[jj].priceB<<"\t"<<beveArr[jj].quantB<<endl;
				}
				system("pause");
				system("CLS");
			}
			else if(option2==3)
			{
				cout<<"====================Sport===================="<<endl;
				cout<<"ID\t\tName\t\t\tPrice\tQuantity"<<endl;
				for(int kk=0;kk<counterS;kk++)
				{
					cout<<sportArr[kk].IDS<<"\t"<<sportArr[kk].nameS<<"\t\t"<<sportArr[kk].priceS<<"\t"<<sportArr[kk].quantS<<endl;
				}
				system("pause");
				system("CLS");
			}
			else if(option2==4)
			{
				cout<<"====================Kitchen===================="<<endl;
				cout<<"ID\t\tName\t\tPrice\tQuantity"<<endl;
				for(int ll=0;ll<counterK;ll++)
				{
					cout<<kitchenArr[ll].IDK<<"\t"<<kitchenArr[ll].nameK<<"\t\t"<<kitchenArr[ll].priceK<<"\t"<<kitchenArr[ll].quantK<<endl;
				}
				system("pause");
				system("CLS");
			}
			else if(option2==5)
			{
				cout<<"====================Stationery===================="<<endl;
				cout<<"ID\t\tName\t\tPrice\tQuantity"<<endl;
				for(int mm=0;mm<counterT;mm++)
				{
					cout<<statArr[mm].IDT<<"\t"<<statArr[mm].nameT<<"\t\t"<<statArr[mm].priceT<<"\t"<<statArr[mm].quantT<<endl;
				}
				system("pause");
				system("CLS");
			}
			else if(option2==6)
			{
				cout<<"====================Miscellaneous===================="<<endl;
				cout<<"ID\t\tName\t\tPrice\tQuantity"<<endl;
				for(int nn=0;nn<counterM;nn++)
				{
					cout<<miscArr[nn].IDM<<"\t"<<miscArr[nn].nameM<<"\t\t"<<miscArr[nn].priceM<<"\t"<<miscArr[nn].quantM<<endl;
				}
				system("pause");
				system("CLS");
			}
			else
				{
				
				cout<<"Invalid Input, Please try again.";
				system("pause");
				system("CLS");
				}
				
			
		break;
		}
	case 2:
		{
		system("CLS");
		cout<<"===================================="<<endl;
		cout<<"What category would you like to add?"<<endl;
		cout<<"1 - Food"<<endl;
		cout<<"2 - Beverage"<<endl;
		cout<<"3 - Sport"<<endl;
		cout<<"4 - Kitchen"<<endl;
		cout<<"5 - Stationery"<<endl;
		cout<<"6 - Miscellaneous"<<endl;
		cout<<"===================================="<<endl;
		cin>>option3;
		system("CLS");
			if (option3==1)
			
			{
			food.open("Food.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Item(Food)===================="<<endl;
			cout<<"ID:";
			cin>>FID;
			food<<endl<<FID<<" ";
			cout<<"Item Name:";
			cin>>Fname;
			food<<Fname<<" ";
			cout<<"Price:";
			cin>>Fprice;
			food<<Fprice<<" ";
			cout<<"Quantity:";
			cin>>Fquant;
			food<<Fquant;
			system("CLS");
			
			food.close();
			}
			
			else if(option3==2)
			{
			beverage.open("Beverage.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Item(Beverage)===================="<<endl;
			cout<<"ID:";
			cin>>BID;
			beverage<<endl<<BID<<" ";
			cout<<"Item Name:";
			cin>>Bname;
			beverage<<Bname<<" ";
			cout<<"Price:";
			cin>>Bprice;
			beverage<<Bprice<<" ";
			cout<<"Quantity:";
			cin>>Bquant;
			beverage<<Bquant;
			system("CLS");
			
			beverage.close();
			}
			
			else if(option3==3)
			{
			sport.open("Sport.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Item(Sport)===================="<<endl;
			cout<<"ID:";
			cin>>SPID;
			sport<<endl<<SPID<<" ";
			cout<<"Item Name:";
			cin>>SPname;
			sport<<SPname<<" ";
			cout<<"Price:";
			cin>>SPprice;
			sport<<SPprice<<" ";
			cout<<"Quantity:";
			cin>>SPquant;
			sport<<SPquant;
			system("CLS");
			
			sport.close();
			}
			
			else if(option3==4)
			{
			kitchen.open("Kitchen.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Item(Kitchen)===================="<<endl;
			cout<<"ID:";
			cin>>KID;
			kitchen<<endl<<KID<<" ";
			cout<<"Item Name:";
			cin>>Kname;
			kitchen<<Kname<<" ";
			cout<<"Price:";
			cin>>Kprice;
			kitchen<<Kprice<<" ";
			cout<<"Quantity:";
			cin>>Kquant;
			kitchen<<Kquant;
			system("CLS");
			
			kitchen.close();
			}
			
			else if(option3==5)
			{
			stationery.open("Stationery.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Item(Stationery)===================="<<endl;
			cout<<"ID:";
			cin>>TID;
			stationery<<endl<<TID<<" ";
			cout<<"Item Name:";
			cin>>Tname;
			stationery<<Tname<<" ";
			cout<<"Price:";
			cin>>Tprice;
			stationery<<Tprice<<" ";
			cout<<"Quantity:";
			cin>>Tquant;
			stationery<<Tquant;
			system("CLS");
			
			stationery.close();
			}
			
			else if(option3==6)
			{
			misc.open("Miscellaneous.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Item(Miscellaneous)===================="<<endl;
			cout<<"ID:";
			cin>>MID;
			misc<<MID<<endl<<" ";
			cout<<"Item Name:";
			cin>>Mname;
			misc<<Mname<<" ";
			cout<<"Price:";
			cin>>Mprice;
			misc<<Mprice<<" ";
			cout<<"Quantity:";
			cin>>Mquant;
			misc<<Mquant;
			system("CLS");
			
			misc.close();
			}
			
			else
				{
				
				cout<<"Invalid Input, Please try again.";
				system("pause");
				system("CLS");
				}
			
			break;
			}
			
	case 3:{
			system("CLS");
		sales.open("Sales.txt", ios::in | ios::out | ios::app);
			struct salesR
			{
				string IDSales;
				string NameSales;
				float priceSales;
				int quantSales;
			};
			salesR salesArr[50];
			int q=0,counterQ=0;
			while(!sales.eof())
			{
				sales>>salesArr[q].IDSales;
				sales>>salesArr[q].NameSales;
				sales>>salesArr[q].priceSales;
				sales>>salesArr[q].quantSales;
				q++;
				counterQ++;
			}
			system("CLS");
			cout<<"====================Sales Report==================="<<endl;
			cout<<"ID\t\tName\t\tPrice\tQuantity"<<endl;
				for(int qq=0;qq<counterQ;qq++)
				{
					cout<<salesArr[qq].IDSales<<"\t"<<salesArr[qq].NameSales<<"\t\t"<<salesArr[qq].priceSales<<"\t"<<salesArr[qq].quantSales<<endl;
				}
				system("pause");
				system("CLS");
			sales.close();
			break;
			}
	case 4:{
			system("CLS");
		sales.open("Sales.txt", ios::in | ios::out | ios::app);

			cout<<"====================New Sales===================="<<endl;
			cout<<"ID:";
			cin>>SID;
			sales<<endl<<SID<<" ";
			cout<<"Item Name:";
			cin>>Sname;
			sales<<Sname<<" ";
			cout<<"Price:";
			cin>>Sprice;
			sales<<Sprice<<" ";
			cout<<"Quantity:";
			cin>>Squant;
			sales<<Squant;
			system("CLS");
			
			sales.close();
		break;
		}
			
	default:
			{
				cout<<"Invalid Input, Please try again.";
				system("pause");
				system("CLS");
				
			
			break;
			}
}
		



}


return 0;
}
