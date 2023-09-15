#include<iostream>
#include<string>
using namespace std;

class System{
    public:

    string company[200]= {"Toyota", "BMW", "Audi", "KIA", "Tesla", "TATA", "Mercedes"};
    string model[200]= {"Rxz", "Self_down", "A_6", "TRV", "i_12", "Thar","Next_Gen"};
    string price[200]= {"10000Rs.", "15000Rs.", "14000Rs", "6000Rs.", "9000Rs", "18000Rs", "15000Rs."};
    string speed[200]= {"150km.", "120km.", "120km.", "180km.", "100km.", "130km.", "220km."};
    
void login(){
        string user_n;  int pass;
        cout<<"____________Enter the Username___________\n";
        cout<<"\t\t  "; cin>>user_n;
       cout<<"\n\n_________Enter the company password_______\n";
        cout<<"\t\t  ";  cin>>pass;
       if(pass == 1234){
        cout<<">>>>>>>>>>>Correct password<<<<<<<<<<";
       }else{
        cout<<">>>>>>>>>>>Wrong use dddr id password<<<<<<<<<<";
       }
    }


    void user_details(){
     string name, add, phone_no;
    cout<<" Enter the details of basic details ";
    cout<<"Enter full name      - "; cin>>name; cout<<endl;
    cout<<"Enter the Addresh    - "; cin>>add; cout<<endl;
    cout<<"Enter the phone no.  - "; cin>>phone_no; cout<<endl;

}

};

int main(){
system("CLs");
System user;
//user.login();

int n; cin>>n;


    return 0;
}