
//11873
//muhammad.umar


#include<iostream>
#include<math.h>
using namespace std;
 	int limit;
	double result;
	double value[0];
	double valueOne;
	double valueTwo;
	
	
	void add(){
		cout<<"\nHow many digits you want to add : ";
		cin>>limit;
		value[limit];
		for(int i = 1; i <= limit; i++){
			cout<<"\nEnter value "<<i<<" : ";
			cin>>value[i];
			result += value[i];
		}
		cout<<"\n\nSum is : "<<result<<endl;
	}
	
	void subtract(){
		cout<<"\nHow many values you want to subtact : ";
		cin>>limit;
		int totalValue;
		cout<<"\nEnter the Total value to subtract other values : ";
		cin>>totalValue;
		value[limit];
		for(int i = 1; i<= limit; i++){
			cout<<"\nEnter value "<<i<<" : ";
			cin>>value[i];
			totalValue -= value[i];
			result = totalValue;
			
		}
		cout<<"\n\nSubtraction is : "<<result<<endl;
	}
	
	void divide(){
		cout<<"\nEnter value 1 : ";cin>>valueOne;
		cout<<"\nEnter value 2 : ";cin>>valueTwo;
		if(valueTwo != 0){
		result = valueOne;
		result = result / valueTwo;
		cout<<"\n\nDivision is : "<<result;
		}
		else{
			cout<<"\n\ncan't divide by zero.";
		}
	}
	
	void mod(){
		cout<<"\nEnter value 1 : ";cin>>valueOne;
		cout<<"\nEnter value 2 : ";cin>>valueTwo;
		result = static_cast<int>(valueOne) % static_cast<int>(valueTwo);
		cout<<"\n\nMod is : "<<result;
	}

	void sqt(){
		cout<<"\nEnter value : ";
		cin>>valueOne;
		result = sqrt(valueOne);
		cout<<"\n\nSquare root is : "<<result;
	}
	
	void power(){
		int pow;
		cout<<"\nEnter vaue : ";cin>>valueOne;
		cout<<"\nEnter power : ";cin>>pow;
		result=valueOne;
		for(int i = 0; i < pow-1; i++){
				result = result * valueOne;
		}
		cout<<"\n\nPower is : "<<result;
	}
	
	void avg(){
		cout<<"\nEnter the limit of numbers : ";
		cin>>limit;
		value[limit];
		for(int i = 1; i <= limit; i++){
			cout<<"\nEnter value "<<i<<" : ";
			cin>>value[i];
			result += value[i];
		}
		result = result/limit;
		cout<<"\n\nAverage is : "<<result;
	}

	
        void percentage(){
		double total,obtain;
		cout<<"\nEnter total number : "; cin>>total;
		cout<<"\nEnter obtain : "; cin>>obtain;
		result = (obtain*100) / total;
		cout<<"\n\nPercentage is : "<<result<<"%";
	}
	
	void cube(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = valueOne * valueOne * valueOne;
		cout<<"\n\nCube of "<<valueOne<<" is : "<<result;	
	}
	
		
	void _sin(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = sin(valueOne);
		cout<<"\n\nSin value is : "<<result;
	}
	
	void _tan(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = tan(valueOne);
		cout<<"\n\ntan value is : "<<result;
	}
	
	void _cos(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = cos(valueOne);
		cout<<"\n\ncos value is : "<<result;
	}
	
	void _acos(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = acos(valueOne);
		cout<<"\n\nacos value is : "<<result;
	}
	
	void _asin(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = asin(valueOne);
		cout<<"\n\nasin value is : "<<result;
	}
	
	void _atan(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = atan(valueOne);
		cout<<"\n\natan value is : "<<result;
	}
	
	
	void _log(){
		cout<<"\nEnter value : "; cin>>valueOne;
		result = log(valueOne);
		cout<<"\n\nLogrithm is : "<<result;
	}
	

int main() {
	char ch;
	int option;
	do{
		system("cls");
		cout<<"Press 1 for addition."<<endl;
		cout<<"Press 2 for Subtaction."<<endl;
		cout<<"Press 3 for Division."<<endl;
		cout<<"Press 4 for Mod."<<endl;
		cout<<"Press 5 for Square root."<<endl;
		cout<<"Press 6 for Power."<<endl;
		cout<<"Press 7 for Cube."<<endl;
		cout<<"Press 8 for average of numbers."<<endl;
		cout<<"Press 9 for Percentage."<<endl;
		cout<<"Press 10 for Sin."<<endl;
		cout<<"Press 11 for tan."<<endl;
		cout<<"Press 12 for cos."<<endl;
		cout<<"Press 13 for acos."<<endl;
		cout<<"Press 14 for asin."<<endl;
		cout<<"Press 15 for atan."<<endl;
		cout<<"Press 16 for Logrithm."<<endl;
		cout<<"\n\nSELECT OPTION : ";
		cin>>option;
		switch(option){
			case 1:
				system("cls");
				cout<<"\t\t\t\taddition"<<endl;
				cout<<"\t\t\t\t--------";
				add();
				break;
			case 2:
				system("cls");
				cout<<"\t\t\t\tSubtraction"<<endl;
				cout<<"\t\t\t\t-----------";
				subtract();
				break;
			case 3:
				system("cls");
				cout<<"\t\t\t\tDivision"<<endl;
				cout<<"\t\t\t\t--------";
				divide();
				break;
			case 4:
				system("cls");
				cout<<"\t\t\t\tMod"<<endl;
				cout<<"\t\t\t\t---";
				mod();
				break;
			case 5:
				system("cls");
				cout<<"\t\t\t\tSqare root"<<endl;
				cout<<"\t\t\t\t----------";
				sqt();
				break;
			case 6:
				system("cls");
				cout<<"\t\t\t\tPower"<<endl;
				cout<<"\t\t\t\t-----";
				power();
				break;
			case 7:
				system("cls");
				cout<<"\t\t\t\tCube"<<endl;
				cout<<"\t\t\t\t----";
				cube();
				break;
			case 8:
				system("cls");
				cout<<"\t\t\t\taverage of Number"<<endl;
				cout<<"\t\t\t\t-----------------";
				avg();
				break;
			case 9:
				system("cls");
				cout<<"\t\t\t\tPercentage"<<endl;
				cout<<"\t\t\t\t----------";
				percentage();
				break;
			case 10:
				system("cls");
				cout<<"\t\t\t\tSin"<<endl;
				cout<<"\t\t\t\t---";
				_sin();
				break;
			case 11:
				system("cls");
				cout<<"\t\t\t\ttan"<<endl;
				cout<<"\t\t\t\t---";
				_tan();
				break;
			case 12:
				system("cls");
				cout<<"\t\t\t\tCos"<<endl;
				cout<<"\t\t\t\t---";
				_cos();
				break;
			case 13:
				system("cls");
				cout<<"\t\t\t\tacos"<<endl;
				cout<<"\t\t\t\t----";
				_acos();
				break;
			case 14:
				system("cls");
				cout<<"\t\t\t\tasin"<<endl;
				cout<<"\t\t\t\t----";
				_asin();
				break;
			case 15:
				system("cls");
				cout<<"\t\t\t\tatan"<<endl;
				cout<<"\t\t\t\t----";
				_atan();
				break;
			case 16:
				system("cls");
				cout<<"\t\t\t\tLogrithm"<<endl;
				cout<<"\t\t\t\t--------";
				_log();
				break;
			
				
			default:
				cout<<"\nInvalid Entry";
			
		}
		cout<<endl<<endl;
		cout<<"\nDo you want to continue y/n : "; cin>>ch;
	}while(ch == 'y' || ch == 'Y');
}
