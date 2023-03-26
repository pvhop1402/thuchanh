#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class HH{
	int  mah;
	char tenh[20];
	long tientra;
	friend class PhieuMH;
};
class PhieuMH{
	int map;
	char tenkh[30];
	int n;
	//HH a[20];
	HH *a;
	public:
		void nhap();
		void xuat();
};
void PhieuMH::nhap(){
	cout<<"Nhap ma phieu: ";cin>>map;
	cout<<"Nhap ten khach hang: ";fflush(stdin);gets(tenkh);
	do{
		cout<<"Nhap so luong hang hoa: ";
		cin>>n;
	}while(n<=0);
	a = new HH[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap hang hoa thu "<<i+1<<endl;
		cout<<"Nhap ma hang: ";cin>>a[i].mah;
		cout<<"Nhap ten hang: ";fflush(stdin);gets(a[i].tenh);
		cout<<"Nhap tien tra: ";cin>>a[i].tientra;
	}
}
void PhieuMH::xuat(){
	cout<<"---------------------------------------"<<endl;
	cout<<"Ma phieu: "<<map<<endl;
	cout<<"Ten khach hang: "<<tenkh<<endl;
	cout<<setw(10)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"Tien tra"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(10)<<(a+i)->mah<<setw(20)<<a[i].tenh<<setw(20)<<a[i].tientra<<endl;
	}
	long tong=0;
	for(int i=0;i<n;i++){
		tong=tong+a[i].tientra;
	}
	cout<<setw(40)<<"Tong tien hang: "<<tong<<endl;
	}
int main()
{
	PhieuMH phieu1, *p;
	p=&phieu1;
	p->nhap();
	p->xuat();
	return 0;
}

