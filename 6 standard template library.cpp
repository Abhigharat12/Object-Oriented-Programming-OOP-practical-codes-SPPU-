#include <iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

class record{
    vector<string>id,name,dob,phone;
    vector<string>::iterator i,j,k,l;
    public:
    void get();
    void searchr();
    void display();
    void sortR();
};
void record::get(){
    int count;
    string n,p,r,q;
    cout<<"Enter the number of enteries you wanna eneter: ";
    cin>>count;
    for(int i=0;i<count;i++){
        cout<<"Enter details"<<endl<<"Name: ";
        cin>>n;
        name.push_back(n);
        cout<<"DOB: ";
        cin>>q;
        dob.push_back(q);
        cout<<"Tele phone number: ";
        cin>>r;
        phone.push_back(r);
        cout<<"ID: ";
        cin>>p;
        id.push_back(p);
        cout<<endl<<endl;
            }            
}
void record::searchr(){
    string g,h;
    int flag=0;
    cout<<"for searching an id Enter ID no.: ";
    cin>>g;
    i=id.begin();
    j=name.begin();
    k=dob.begin();
    l=phone.begin();
    cout<<endl<<endl;
    while(i!=id.end()){
        if(*i==g){
            cout<<"the information of the id "<<g<<" is as follows: "<<endl<<"Name: "<<*j<<endl<<"DOB :"<<*k<<endl<<"telephone Number: "<<*l<<endl;
            flag=1;
            break;
        }
        else{
            i++;
            j++;
            k++;
            l++;
        }
    }
    if(flag==0){
        cout<<" incorrect information!!, no data matched with our search engine!!"<<endl;
    }
    cout<<endl<<endl;
}
void record::display(){
    i=id.begin();
    j=name.begin();
    k=dob.begin();
    l=phone.begin();
    sortR();
    cout<<endl<<endl<<"Displaying the data in sorted order:";
    while(i!=id.end()){
        cout<<"ID: "<<*i<<endl<<"Name: "<<*j<<endl<<"DOB :"<<*k<<endl<<"telephone Number: "<<*l<<endl;
        i++;
        j++;
        k++;
        l++;
    }
}
void record::sortR(){
    // cout<<" the below list is sorted with respective ID numbers: "<<endl;
    size_t n =id.size();
    i=id.begin();
    j=name.begin();
    k=dob.begin();
    l=phone.begin();
    for(size_t i=0;i<n-1;i++){
        for(size_t j=0;j<n-i-1;j++){
            if (id[j]>id[j+1]){
                swap(id[j],id[j+1]);
                swap(name[j],name[j+1]);
                swap(dob[j],dob[j+1]);
                swap(phone[j],phone[j+1]);
            }
        }
    }
    
}
void swap(int *x, int *y){
    int *temp;
    temp = x;
    x=y;
    y=temp;
}
int main(){
    record r;
    r.get();
    r.searchr();
    r.display();
    cout<<endl<<endl;
    r.sortR();
    return 0;
}



