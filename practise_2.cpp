#include <iostream>
using namespace std;
int main()
{
	string name[3][3];
	int n1, n2;
	int i=0;
	cout<<"Enter the number of strings to be stored in row and column : "<<endl;
	cin>>n1>>n2;
	while(i<n1)
	{
		i++;
		cout<<"Enter string "<<i<<":"<<endl;
		for(int k=0; k<n2; k++){
		cout<<"Enter string "<<k<<":"<<endl;
		cin>>name[i][k];}
	}
	for(int j=0;j<=n1;j++)
	{
		for(int l=0; l<n2; l++)
		{
		cout<<name[j][l]<<"\t";
		}
	cout<<endl;
	}
}