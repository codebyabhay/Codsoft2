#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	
	
int opr;
int num1,num2,x;

do{
	cout<<"SELECT OPERATION";
	cout<<"\n1 = Addition";
	cout<<"\n2 = Subtraction";
	cout<<"\n3 = Multiplication";
	cout<<"\n4 = Divison";
	cout<<"\n5 = Exit";
	cout<<"\n\n Make a choise : ";
	cin>>opr;
	
	switch(opr){
		case 1:
			cout<<"You have selected the Addition Operation";
			cout<<" Please enter two number : \n";
			cin>>num1>>num2;
			x=num1 + num2;
			cout<<"Sum of two number = "<<x;
			break;

        case 2:
			cout<<"You have selected the Subtraction Operation";
			cout<<" Please enter two number : \n";
			cin>>num1>>num2;
			x=num1 - num2;
			cout<<"Subtraction of two number = "<<x;
			break;
			
         case 3:
			cout<<"You have selected the Multiplication Operation";
			cout<<" Please enter two number : \n";
			cin>>num1>>num2;
			x=num1 * num2;
			cout<<"Product of two number = "<<x;
			break;
			
			
          case 4:
			cout<<"You have selected the Division Operation";
			cout<<" Please enter two number : \n";
			cin>>num1>>num2;
			x=num1 + num2;
			cout<<"Division of two number = "<<x;
			break;						
				
			case 5 : exit(0);
			break;	
	
	}
	cout<<"\n-------------------------------------------------------\n";
	
}while(opr!=6);
 getch();
}