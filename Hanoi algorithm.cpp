#include<iostream>
#include<cmath>
using namespace std;
int cont=0;
void hanoi(int n, int from, int mid, int to)
{
  if(n==1){
        cout<<from<<"-->"<<to<<endl;
        cont++;
    }
  else{
    hanoi(n-1,from,to,mid);
    hanoi(1,from,mid,to);
    hanoi(n-1,mid,from,to);
  }
}

int main()
{
    int n;
    cout<<"Quanti dischi? ";
    cin>>n;
    hanoi(n,1,2,3);
    cout<<cont<<endl;
    cout<<pow(2,n)-1;
    return 0;
}
