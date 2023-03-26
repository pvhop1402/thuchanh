#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class SV;
class Date{
	int d,m,y;
	friend class SV;
	friend void in_2002(SV *sv1,int n);
};
class SV{
	char masv[10];
	char hoten[50];
	Date NS;
	char gt[10];
	char nganhhoc[50];
	float diemtk;
	public:
		void nhap();
		void xuat();
	//friend void in_diemmax(SV *sv1, int n);
	friend void in_2002(SV *sv1,int n);
	friend void chen_SV(SV *sv1, int &n);
};
void SV::nhap(){
	cout<<"Nhap ma sinh vien: ";fflush(stdin);gets(masv);
	cout<<"Nhap ho ten: ";fflush(stdin);gets(hoten);
	cout<<"Nhap ngay sinh: ";cin>>NS.d>>NS.m>>NS.y;
	cout<<"Nhap gioi tinh: ";fflush(stdin);gets(gt);
	cout<<"Nhap nganh hoc: ";fflush(stdin);gets(nganhhoc);
	cout<<"Nhap diem tong ket: ";cin>>diemtk;
}
void SV::xuat(){
		cout<<setw(10)<<masv<<setw(20)<<hoten<<setw(20)<<NS.d<<"/"<<NS.m<<"/"<<NS.y<<setw(20)<<gt<<setw(20)<<nganhhoc<<setw(25)<<diemtk<<endl;
}
/*void in_diemmax(SV *sv1, int n){
	int max = sv1[0].diemtk;
	for(int i=1;i<n;i++){
		if(sv1[i].diemtk>max){
			max=sv1[i].diemtk;
		}
	}
	for(int i=0;i<n;i++){
		if(sv1[i].diemtk==max){
			cout<<"Sinh vien co diem tong ket lon nhat"<<endl;
			cout<<setw(10)<<"Ma SV"<<setw(20)<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(25)<<"Gioi tinh"<<setw(22)<<"Nganh hoc"<<setw(23)<<"Diem TK"<<endl;
			sv1[i].xuat();
		}
	}
}*/
void in_2002(SV *sv1, int n)
{
	for(int i=0;i<n;i++){
		if(sv1[i].NS.y==2002){
			sv1[i].xuat();
		}
	}
}
void chen_SV(SV *sv1, int &n){
	int k;
	cout<<"Nhap vi tri can chen: ";cin>>k;
	SV sv_moi;
	cout<<"Nhap thong tin sv moi: "<<endl;
	sv_moi.nhap();
	if(k>=0&&k<=n){
		for(int i=n;i>=k;i--){
			sv1[i]=sv1[i-1];
		}
		sv1[k]=sv_moi;
		n++;
	}
	cout<<"\nDanh sach SV sau khi chen: "<<endl;
	cout<<setw(10)<<"Ma SV"<<setw(20)<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(25)<<"Gioi tinh"<<setw(22)<<"Nganh hoc"<<setw(23)<<"Diem TK"<<endl;
	for(int i=0;i<n;i++){
		sv1[i].xuat();
	}
}
int main()
{
	SV *sv1;
	int n;
	do{
		cout<<"Nhap so luong sv: ";
		cin>>n;
	}while(n<=0);
	sv1=new SV[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap sinh vien thu: "<<i+1<<endl;
		sv1[i].nhap();
	}
	cout<<setw(10)<<"Ma SV"<<setw(20)<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(25)<<"Gioi tinh"<<setw(22)<<"Nganh hoc"<<setw(23)<<"Diem TK"<<endl;
	for(int i=0;i<n;i++){
		sv1[i].xuat();
	}
	//in_diemmax(sv1,n);
	//cout<<"\nSinh vien cos nam sinh 2002 la:"<<endl;
	//cout<<setw(10)<<"Ma SV"<<setw(20)<<"Ho ten"<<setw(25)<<"Ngay sinh"<<setw(25)<<"Gioi tinh"<<setw(22)<<"Nganh hoc"<<setw(23)<<"Diem TK"<<endl;
	//in_2002(sv1,n);
	chen_SV(sv1,n);
	return 0;
}

