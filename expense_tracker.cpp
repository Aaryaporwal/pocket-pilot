#include <iostream>
#include<string>
#include <windows.h>
using namespace std;
class expense{
	int pocket_money;
	int total_money;
	int limit;
	string category[20];
	int amnt_category[20];
	int count_category;
	public:
	  void input(){
		cout<<"Enter your details\n";
		cout<<"Pocket money you have?\n";
		cin>>pocket_money;
		cout<<"How many categories covered by you like shopping entertainment.....\n";
		cin>>count_category;
		for(int i=0;i<count_category;i++){
			cout<<"Enter the categories now\n ";
			cin>>category[i];
		}
		for(int i=0;i<count_category;i++){
			cout<<"Enter the categories amount each \n";
			cin>>amnt_category[i];
		}
		cout<<"Tell your threshold of money ie limit";
		cin>>limit;
		
      }    
	 void show(){
        cout<<"Pocket money is: "
            << pocket_money << endl;
        cout<<"Category is:"<<endl;  
		for (int i = 0; i < count_category; i++) {
            cout << category[i] 
			<< " - "
            << amnt_category[i] 
			<< " rs"<<endl;
        }
	  
     }	
     void Total_expenses() {
        total_money = 0;

        for(int i = 0; i < count_category; i++) {
            total_money += amnt_category[i];
        }

        cout << "Total expenses is "
             << total_money
             << " rs" << endl;
    }
     void warning() {
     	int remaining;
     	remaining=pocket_money-total_money;
     	cout<<"amount left:"<<remaining;
        if(remaining<limit) {
            Beep(1000, 800);       
			Beep(1000, 800);
            Beep(1000, 800);

            cout << "\nWARNING!!! LIMIT CROSSED\n";
        }
    }
    void graph(){
    	cout<<"\n=======EXPENSE GRAPH======\n";
    	for(int i=0;i<count_category;i++){
    		cout<<category[i]<<" |";
    		for(int j=0;j<amnt_category[i]/100;j++){
    			cout<<"#";
			}
			cout << " (" << amnt_category[i] << " rs)"<< endl;
		}
	}
};
int main(){
	expense e; 
 
    e.input(); 
    e.show(); 
    e.Total_expenses(); 
    e.warning(); 
    e.graph();
 
    return 0;
}

    
    