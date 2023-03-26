#include <iostream>
using namespace std;
class HinhTron{
	float r;
	public:
		HinhTron(){
			r=0.0;
		}
		HinhTron(float a){
			r=a;
		}
		float dientich(){
			return 3.14*r*r;
		}
		float operator+(HinhTron d){
			return dientich()+d.dientich();
		}
		float operator-(HinhTron d){
			return dientich()-d.dientich();
		}
		int operator>(HinhTron d){
			if(dientich()>d.dientich()){
				return 1;
			}
			return 0;
		}
		friend istream& operator>>(istream&in,HinhTron&d){
			in>>d.r;
			return in;
		}
		friend ostream& operator>>(ostream&out,HinhTron&d){
			out<<d.dientich();
			return out;
		}
};
int main()
{
	HinhTron P,Q;
	cout<<"Nhap ban kinh cua P: ";
	cin>>P;
	cout<<"Nhap ban kinh cua Q: ";
	cin>>Q;
	HinhTron T, H;
	T=P.dientich()+Q.dientich();
	H=P.dientich()-Q.dientich();
	cout<<"Tong = "<<T<<endl;
	cout<<"Hieu = "<<H<<endl;
	
	return 0;
}

