#include<iostream>
using namespace std;
int main ()
{
	int a,b,x,y,z;
	
	cout<<"==================="<<endl;
	cout<<"Gambar Bangun Datar"<<endl;
	cout<<"==================="<<endl;
	
	cout<<"1. kotak bolong"<<endl;
	cout<<"2. segitiga"<<endl;

	cout<<"pilih   :";cin>>a;

	
	switch(a) 
	
	{
	case 1:
		cout<<"Panjang   :";cin>>a ;
	cout<<"Lebar  :";cin>>b ;
	for (x=1 ; x<=a ; x++)
	{

	for (y=1 ; y<=b; y++)
		
		{
		if (x==1 || x==a || y==1 || y==b)
			
			{
		
				cout<<"*";
			}
	else
			{
				cout<<" ";
			}
		}
				cout<<endl ;
	}

break;
	
	case 2 :

cout<<"Tinggi    :";cin>>a ;
	
	for(y= 1 ; y<=a ; y++)
	{
		z=1 ; 
		
		cout<<y ;
	
	for(x=1 ; x<y ;x++){
			
		cout<<" "<<y+(a*x)-z ;
		
	
	z=z+x+1 ;
		}
		
		cout<<endl ;
	}
}
}
