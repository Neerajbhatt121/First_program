#include<iostream>
#include<string>
#include<vector>
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
        cout<<">>>>>>>>>>>Wrong user id password<<<<<<<<<<";
       }
    }

void select_type(){
   string type[100] = {"Bike" , "Car" };
   cout<<"\t\t 1. Bike      2. Car\n";
}

void show_car(){
    
  for(int i=0 ;i<7;++i){
    cout<<"\t\t\t";
    cout<<"Enter "<<i+1<<"\t- To Select  "<<company[i]<<endl;
}
} 

void car_detail(int choice){
    cout<<model[choice]<<endl;
    cout<<price[choice]<<endl;
    cout<<speed[choice]<<endl;
}

void color(){
    string colour[200]= {"Red", "Black", "White", "Blue"};
    for(int i=0; i<4; i++){
        cout<<"Number: "<<i+1<<"  colour: "<<colour[i]<<endl;
    }
}

void payment(int choice){
    cout<<"  DO REALY WANT TO RENT THIS VEHICAL ";
    string per; int time, dur;
    cin>>per;
    if("yes"){

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
system("CLS");
System user;
//user.login();
user.show_car();
user.color();
int n; cin>>n;
user.car_detail(n-1);

    return 0;
}