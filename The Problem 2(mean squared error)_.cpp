#include <iostream>
using namespace std;
int main()
{
int i,n;
cout<<"the size of the arrays is"<<endl;
cin>>n;
float fact;
float seq1[n],seq2[n];
cout<<"Please input the first arrays"<<endl;
for (i=1;i<=n;i=i+1)
{
  cin>>seq1[i];
}
cout<<"Please input the second arrays"<<endl;
for (i=1;i<=n;i=i+1)
{
  cin>>seq2[i];
}
for (fact=0,i=1;i<=n;i=i+1)
{
  fact=fact+(seq1[i]-seq2[i])*(seq1[i]-seq2[i]);
}
cout<<"The the mean-squared error of the two arrays is ";
cout<<fact/n<<endl;
return 0;
}
