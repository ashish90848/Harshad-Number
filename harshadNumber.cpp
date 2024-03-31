#include<iostream>
using namespace std;
void harshadNo(int n, int sum){
    int n1=n;
    while (n>0)
    {
    sum= sum+n%10;
    n=n/10;
    }
    n1=n1/sum;
    if(n1%2==0){
        cout<<"number is harshad"<<endl;
        cout<<n1;
    }
    else{
        cout<<"number is not harshad"<<endl;
    cout<<-1;
    }

}
int main(){
    int n,sum;
    cin>>n;
    sum=0;
    harshadNo(n,sum);
}