#include<iostream>
using namespace std;
int main(){




    cout<<" ********CALCULATOR********    "<<endl;
    float num1 , num2;
    char op;
    cout<<"Enter the value for num1 and num2"<<endl;
    cin>>num1>>num2;
    cout<<"Enter operator : + ,-,*,/"<<endl;
    cin>>op ;


    switch(op){
        case '+' :
        cout<<"The sum of "<<num1<<"and"<<num2<<"= "<<num1 + num2;
        break;


        case '-':
        cout<<"The subtraction of "<<num1<<"and"<<num2<<"="<<num1 - num2;
        break;


        case '*':
        cout<<"The multiplication of "<<num1<<"and"<<num2<<"="<<num1 * num2;
        break;


        case '/':
        cout<<"The division of "<<num1<<"and"<<num2<<"="<<num1/num2;
        break;

        default:
        cout<<"Error!Operator is not correct"<<endl;





    }

    return 0;

}