#include <iostream>
#include <string>
using namespace std;
//cau1
class CanBo {
	protected:
		string maCanBo, hoTen, donVi;
		float heSoLuong;
	public:
		//phuog thuc thiet lap
		void setMaCanBo(string mcb) : maCanBo(mcb){}
		void setHoTen(string ht) : hoTen(ht){}
		void setDonVi(string dv) : donVi(dv){}
		void setHeSoLuong(float hsl) : heSoLuong(hsl){}
		//lay thong tin
		string getMaCanBo() return maCanBo;
		string getHoTen() return hoTen;
		string getDonVi() return donVi;
		float getHeSoLuong() return heSoLuong;
		//phuong thuc nhap du lieu cho cac thuoc tinh
		void nhapDuLieu() {
			cout << "Nhap ma can bo: ";
			getline(cin, maCanBo);
			cout << "Nhap Ho Ten: ";
			getline(cin, hoTen);
			cout << "Nhap Don vi: ";
			getline(cin, donVi);
			cout << "Nhap He so luong: ";
			cin >> heSoLuong;
		}
		//hien thi thong tin ve cac can bo
		void hienThiThongTin(){
			cout << "Ma can bo: " << maCanBo << endl;
			cout << "Ho Ten: " << hoTen << endl;
			cout << "Don vi: " << donVi << endl;
			cout << "He so luong: " << heSoLuong << endl;
		}
		//toan tu boi de so sanh ho ten
		
};
