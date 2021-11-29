
#include<iostream>
#include<conio.h>
#include<fstream>

#include<string.h>





using namespace std;

class employee
{
	private:
		int armyno; 
	    char name[30];  
	    char rank[10];  //rank of the employee
	    char crtpost[35];  //current posted area(branch)
	    char unit[50];  //unit
	    char email[30];  //Email
	    char endate[15];  //enroll date
	    char dob[15];
	    float sal;
    public:
        int getarmyno();
        int salary();
		void getdata();
		void putdata();
		int getarmy_no();
		void modify();
		void paybill();

}emp,emp1;
int employee::salary()
{
	string payband;
	int gradepay;
	int gppay;
	int mspay;
	int total;
	cout<<"tecnical group enter y/n: ";
 char x; cin>>x;
	if(strcmp(rank,"sepoy")==00)
	{
		payband="pb-1(5200-20200)" ;
		gradepay=1800;//btw 5200-20200
		if(x=='y')
		{
			gppay=1400;
		}
		else gppay=00;
		mspay=2000;
		total=25000;
	}
  else if(strcmp(rank,"lance_naik")==00)
	{
		payband="pb-1(5200-20200)" ;
		gradepay=2000;//btw 5200-20200
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=2000;
		
	    total=30000;
	}     	
	else if(strcmp(rank,"naik")==00)
	{
		payband="pb-1(5200-20200)" ;
		gradepay=2400;//btw 5200-20200
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=2000;
		
         total=35000;
	}  
	else if(strcmp(rank,"havaldar")==00)
	{
		payband="pb-1(5200-20200)" ;
		gradepay=2800;
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=2000;
		
	     total=40000;
	}    
	else if(strcmp(rank,"naib_subedar")==00)
	{
		payband= "pb-2(29300-34800)";
		gradepay=4200;
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=2000;
		
		 total=45000;
	}   
	else if(strcmp(rank,"subedar")==00)
	{
		payband="pb-2(29300-34800)" ;
		gradepay=4600;
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=2000;
	     total=50000;
	}  
	 else if(strcmp(rank,"subedar_major")==00)
	{
		payband= "pb-2(29300-34800)";
		gradepay=4800;//btw 5200-20200
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=2000;
		
		 total=65000;
	}   
	else if(strcmp(rank,"lieutenant")==00)
	{
		payband="pb-3(15600-39100)" ;
		gradepay=5400;//btw 5200-20200
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=6000;
		
		 total=68000;
	}  
	else if(strcmp(rank,"captain")==00)
	{
		payband= "pb-3(15600-39100)";
		gradepay=6000;//btw 5200-20200
		if(x=='y')
		{
			gppay=1400;
			
		}
		else gppay=00;
		mspay=6000;
		
		  total=75000;
	}   
	 else if(strcmp(rank,"major")==00)
	{
		payband="pb-3(15600-39100)" ;
		gradepay=5400;//btw 5200-20200
		mspay=6000;
		
		 total=100000;
	}   
		else if(strcmp(rank,"lieutenant_colonel")==00)
	{
		payband="pb-4(37400-67000)" ;
		gradepay=8000;//btw 5200-20200
		mspay=6000;
		
		 total=112000;
	}  
	else if(strcmp(rank,"colonel")==00)
	{
		payband="pb-4(37400-67000)" ;
		gradepay=8700;//btw 5200-20200
		mspay=6000;
		
		 total=130000;
	}  
	else if(strcmp(rank,"brigadier")==00)
	{
		payband="pb-4(37400-67000)" ;
		gradepay=8000;//btw 5200-20200
		mspay=6000;
		
		 total=150000;
	}  
	else if(strcmp(rank,"major_general")==00)
	{
		payband="pb-4(37400-67000)" ;
		gradepay=10000;
		mspay=00;
		
		 total=175000;
	}
	  else if(strcmp(rank,"lieutenant_general")==00)
	{
		payband="pb-4(37400-67000)";
		gradepay=00;
		mspay=00;
		  total=200000;
		  
		 
	}
	float ntotal=gradepay+mspay+total;
	 return ntotal;
}
 int allowance()
 {
 	cout<<" checking allowance..(y/n)";
 	char ans;
 	int ta=0;
 	cin>>ans;
   cout<<"hard area allowance:y/n";
   cin>>ans;
   if(ans=='y') 
   ta+=6750;
    else ta+=00;
   cout<<"high area allowance:y/n";
   cin>>ans;
   if(ans=='y') 
   ta+=11200;
    else ta+=00;
   cout<<"high active area allowance:y/n";
   cin>>ans;
   if(ans=='y') 
   ta+=6780;
    else ta+=00;
   cout<<"active parachute BNs/regt allowance:y/n";
   cin>>ans;
   if(ans=='y') 
   ta+=9000;
    else ta+=00;
  cout<<"special allowance :y/n";
   cin>>ans;
   if(ans=='y') 
   ta+=9000;
    else ta+=00;
   cout<<" transport allowance :y/n";
   cin>>ans;
   if(ans=='y') 
   ta+=3200;
    else ta+=00;
  /*cout<<"govt accommodation provided :y/n";
   cin>>ans;
    if(ans=='n')
   ta+=0.1*(total+gradepay+mspay);
    else ta+=00;*/

   cout<<"uniform allowance :y/n";
   cin>>ans;
   if (ans=='y')
  ta+=1000;
   else ta+=00;
   return ta;
 }
void employee::paybill()
{
salary();
allowance();

float ftotal=salary()+allowance();
cout<<"salary:";
cout<<ftotal;	
}
void employee::getdata()
{
	cout<<"\n\n\tEnter Army Number: ";		        cin>>armyno;
	cout<<"\tEnter Enroll Date: ";				cin>>endate;
	cout<<"\tEnter Name: ";		                cin>>name;
	cout<<"\tEnter Date Of Birth: ";			    cin>>dob;
	cout<<"\tEnter Unit: ";		                cin>>unit;
	cout<<"\tEnter Rank: ";		                cin>>rank;
	cout<<"\tEnter Current Posted Area: ";		cin>>crtpost;
	cout<<"\tEnter Email: ";		                cin>>email;	
}

void employee::putdata()
{
	cout<<"\n\n\n\t Army Number:          "<<armyno;
	cout<<"\n\t Enroll Date:          "<<endate;
	cout<<"\n\t Name:                 "<<name;
	cout<<"\n\t Date Of Birth:        "<<dob;
	cout<<"\n\t Unit:                 "<<unit;
	cout<<"\n\t Rank:                 "<<rank;
	cout<<"\n\t Current Posted Area:  "<<crtpost;
	cout<<"\n\t Email:                "<<email<<"\n\n\t";
				
}

int employee::getarmyno()
{
	return armyno;
}

void employee::modify()
{
	cout<<"\n\tRank:                  "<<rank<<endl;
	cout<<"\n\tCurrent Posted Area:   "<<crtpost<<endl;
	cout<<"\n\tEmail:                 "<<email<<endl;
	cout<<"\n\tEnter new details. "<<endl;
	char nr[10]=" ",np[35]=" ",ne[30]=" ";
	cout<<"\n\tNew Rank(enter '.' to retain old one:         ";
	cin>>nr;
	cout<<"\n\tNew Posted Area(enter '.' to retain old one:  ";
	cin>>np;
	cout<<"\n\tNew Email(enter '.' to retain old one:        ";
	cin>>ne;
	if(strcmp(nr,".")!=0)
	strcpy(rank,nr);
	if(strcmp(np,".")!=0)
	strcpy(crtpost,np);
	if(strcmp(ne,".")!=0)
	strcpy(email,ne);
}

void displaydata()
{
	char t;
}
void gettrash()
{
 ifstream fin;
 fin.open("Trashemp.dat",ios::in|ios::binary);
 while(fin.read((char*)&emp,sizeof(emp)))
 {
  emp.putdata();
 }
 fin.close();
 cout<<"\n\nData Reading from Trash File Successfully Done....\n";
}

int searchrec()
{
int en;
	char found='n';
	ifstream fi("empl.dat",ios::in);
	cout<<"\n\n\t\tEnter Army number to be searched for: ";
	cin>>en;
	while(!fi.eof())
	{
		fi.read((char*)&emp,sizeof(emp));
		if(emp.getarmyno()==en)
		{
			emp.putdata();
			found='y';
			break;
		}
	}
	if(found=='n')
	cout<<"\n\t\tArmy number not found in file!!!!!!!!"<<endl;
	fi.close();
    return 0;	
}

int insertrec()
{
	ofstream fo("empl.dat",ios::out|ios::binary);
	char ans='y';
	while(ans=='y')
	{
		emp.getdata();
		fo.write((char*)&emp,sizeof(emp));
		cout<<"\n\t\tRecord added to file."<<endl;
		cout<<"\t\tWant to enter more records?... \n\t\t";
		cin>>ans;
	}
	fo.close();
	return 0;
}

int delrec()
{
	ifstream fio("empl.dat",ios::in);
	ofstream file("temp.dat",ios::out);
	int eno;
	char foun='f',confirm='n';
	cout<<"\t\tEnter employee number of employee whose record is to be deleted"<<endl;
	cin>>eno;
	while(!fio.eof())
	{
		fio.read((char*)&emp, sizeof(emp));
		if(emp.getarmyno()==eno)
		{
			emp.putdata();
			foun='t';
			cout<<"\n\t\tAre you sure, you want to delete this record?(y/n)... ";
			cin>>confirm;
			if(confirm=='n')
			file.write((char*)&emp,sizeof(emp));
		}
		else
		file.write((char*)&emp,sizeof(emp));
	}
	if(foun=='f')
	cout<<"\n\t\tRecord not found!!!!\n";
	fio.close();
	file.close();
	remove("empl.dat");
	rename("temp.dat","emp.dat");
	fio.open("empl.dat",ios::in);
	cout<<"\n\t\tNow the file contains";
	while(!fio.eof())
	{
		fio.read((char*)&emp1,sizeof(emp1));
		if(fio.eof())break;
		emp1.putdata();
	}
	fio.close();
	return 0;

}

void updaterec()
{
	fstream fio("empl.dat",ios::in|ios::out|ios::binary);
	int eno;
	long pos;
	char fou='f';
	cout<<"\n\t\tEnter Army number whose record is to be modified"<<endl;
	cin>>eno;
	while(!fio.eof())
	{
		pos=fio.tellg();
		fio.read((char*)&emp,sizeof(emp));
		if(emp.getarmyno()==eno)
		{
			emp.modify();
			fio.seekg(pos);
			fio.write((char*)&emp,sizeof(emp));
			fou='t';
			break;
		}
	}
	if(fou=='f')
	cout<<"\n\t\tRecord not found!!!!"<<endl;
	fio.seekg(0);
	cout<<"\n\t\tNow the file contains"<<endl;
	while(!fio.eof())
	{
		fio.read((char*)&emp1,sizeof(emp1));
		emp1.putdata();
	}
	fio.close();
}

void title()
{
	char a='.';
    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t";
    cout<<"\n";
    cout<<"\t\t\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\t\t\t\t    |$|            PAYROLL MANAGEMENT SYSTEM             |$|\n";
    cout<<"\t\t\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"\n\n";
    cout<<"\t\t\t\t";
    cout<<"\n\n";
    cout<<"\t\t\t\t                  Press enter to continue.........";
    cout<<"\n\n";
    getchar();
	    cout<<"\r";
	    cout<<"\t\t\t\t\t\t\t";
	for (int i=0;i<=15;i++)
	{
		cout<<a;
		for (int j=0;j<=1e8;j++); 
	}
	system("cls");
}

void menu()
{
 int ch;
 do
 {
  system("cls");
  cout<<"\n\n\n\n\n\n";
  cout<<"\t\tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"<<endl;
  cout<<"\t\t||                                      MAIN MENU                                  ||\n";
  cout<<"\t\tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n";
  cout<<"\t\t0. Exit\n";
  cout<<"\t\t1. Insert Data in File\n";
  cout<<"\t\t2. Display All Records \n";
  cout<<"\t\t3. Search Record\n";
  cout<<"\t\t4. Delete Record\n";
  cout<<"\t\t5. Get Deleted Records from Trash file\n";
  cout<<"\t\t6. Modify Record\n";
  cout<<"\t\t7. pay bill \n\n";
  cout<<"\t\t\tEnter your choice  : ";
  cin>>ch;
  system("cls");
  switch(ch)
  {
   case 1: insertrec(); break;
   case 2: displaydata(); break;
   case 3: searchrec(); break;
   case 4: delrec(); break;
   case 5: gettrash(); break;
   case 6: updaterec(); break;
   case 7: emp.paybill(); break;
  }
  system("pause");
 }while(ch!=0);
}

void load()
 {
	system("color 0f");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tLogging in......\n\n";
	char a=177, b=219;
	cout<<"\t\t\t\t";
	for (int i=0;i<=50;i++)
		cout<<a;
	cout<<"\r";
	cout<<"\t\t\t\t";
	for (int i=0;i<=50;i++)
	{
		cout<<b;
		for (int j=0;j<=1e8;j++);
	}
	
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tYou have been successfully logged in :D\n\n";
	cout<<"\t\t\t";
	system("pause");
	menu();	
}

int logscreen()
{
	char username[30];
	char password[30];
	int t=0;
	int tru=1;
	do{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t";
        cout<<"Username: ";
        cin>>username;
        cout<<"\t\t\t\t\t";
        cout<<"\n";
        cout<<"\t\t\t\t\tpassword: ";
        cin>>password;

        	if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
       	    {
     			cout<<"\n\n\n\t\t\t\tACCESS GRANTED.................. \n\n" <<endl;
     			cout<<"\t\t\t\t";
     			system("pause");
     			system("cls");
     			load();
     			system("cls");
     			getch();
     			tru=0;
     	    }
	     else 
	     {
	 		system("cls");
	 		t=t+1;
	 		cout<<"\n\n\t\tNumber of attemps remaining:"<<3-t;
	 		fflush(stdin);
	 		if(t>=3)
	 		{
	 			cout<<"\n\t\tToo Many Unsuccessful attempts!!!!!!";
	 			getchar();
	 		}
	 }
    }
	while(tru==1);

}

int main()
{
	title();
	logscreen();
    return 0;
}
