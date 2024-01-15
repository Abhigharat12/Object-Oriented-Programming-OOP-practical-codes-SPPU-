
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class person 
{
private:
 char name[40],dob[15],bdg[15];
 int h,w;
public:
 static int count;
 friend class personal;
person() 
{
 char * name=new char[40]; 
 char * dob=new char[80]; 
 char * bdg=new char[15]; 
 h=w=0; 
 }
 static void recordcount() 
{
 cout << "\n Total number of records: " << count;
 }
};
class personal
{
private:
char add[70],telephone[15],policy_no[10];
public:
personal()
{
strcpy(add, "");
 strcpy(telephone, "");
 strcpy(policy_no, "");
}
void getdata(person *obj);
void displaydata(person *obj);
friend class person;
};
int person::count=0;
void personal::getdata(person *obj) 
{
cout << "\nEnter Name of Person: ";
 cin >>obj-> name;
 cout << "\nEnter Date of Birth of Person: ";
 cin >>obj-> dob;
 cout << "\nEnter Blood group of Person: ";
 cin >>obj-> bdg;
 cout << "\nEnter Height and Weight of Person: ";
 cin >>obj->h>>obj->w;
 cout << "\nEnter Contact No of Person: ";
 cin >>this->telephone;
 cout << "\nEnter Address of Person=";
 cin >>this-> add;
 cout << "\nEnter the Insurance Policy No: ";
 cin >>this->policy_no;
 obj->count++;
}
void personal::displaydata(person *obj)
{
 cout<<obj->name<<"\t"<<obj->dob<<"\t"<<obj->bdg<<"\t\t"<<obj->h<<"\t"<<obj->w<<"\t\t"
 <<this->telephone<<"\t\t"<<this->policy_no<<"\t"<<this-> add;
}
int main()
{
personal *p1[30];
person *p2[30];
int n=0,ch,i;
do
{
cout << "\nMenu";
 cout << "\n1. Information of Person\n2. Display Information\n3. Exit\n";
 cout << "Enter your choice: ";
 cin >> ch;
switch(ch)
{
 case 1:
 cout << "\nEnter the Information:\n";
 cout <<"\n";
 p1[n]= new personal;
 p2[n]=new person;
 p1[n]->getdata(p2[n]);
 n++;
 person::recordcount();
 break;
 case 2:
 cout <<"\n";
 cout<<"NAME"<<"\t\t"<<"DATE OF BIRTH"<<"\t"<<"BLOOD GROUP"<<"\t"<< "HEIGHT AND WEIGHT"<<"\t"<<"TELEPHONE NO" <<"\t" << "INSU.POLICY_NO" <<"\t" <<"ADDRESS \n";
 cout <<"\n";
for(i=0;i<n;i++)
{
 p1[i]->displaydata(p2[i]);
 
 }
 person::recordcount();
 
 break;
 }
 }
 while(ch!=4);
 return 0;
 }
 
