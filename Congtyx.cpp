#include "congtyx.h"
	
int main(){
		
		OfficeWorker *ow;
		ow = new OfficeWorker;
		
		ProduceWorker *pw;
		pw = new ProduceWorker;
		
		LeftEmployee *le;
		le = new LeftEmployee;
		
		int Choose;
		while(true){
			system("cls");
			cout << "Chao mung den voi chuong trinh quan ly cong ty x, ban muon lam gi?" << endl;
			cout << "1. Them thanh vien" << endl;
			cout << "2. Xet duyet roi cong ty" << endl;
			cout << "3. Lich nghi cua doi tuong cong nhan" << endl;
			cout << "4. Hien thi danh sach nhan vien" << endl;
			cout << "5. Hien thi thong tin nhan vien" << endl;
			cout << "6. Thoat chuong trinh" << endl;
			cin >> Choose;
				
			switch(Choose){
				case 1:
					system("cls");
					int choose;
					cout << "Ban muon them nhan vien o vi tri ..." << endl;
					cout << "1. Nhan vien van phong" << endl;
					cout << "2. Cong nhan san xuat" << endl;
					cout << "3. Huy them" << endl;
					cin >> choose;
					
					switch(choose){
						case 1:
							system("cls");
							ow[OfficeWorker::Quantity].Input();
							cout << "Nhan vien van phong " << ow[OfficeWorker::Quantity].Name << " da duoc them." << endl;
							OfficeWorker::Quantity++;
							break;
						case 2:
							system("cls");
							pw[ProduceWorker::Quantity].Input();
							cout << "Cong nhan san xuat " << pw[ProduceWorker::Quantity].Name << " da duoc them." << endl;
							ProduceWorker::Quantity++;
							break;
					}
					
					break;
						case 6:
	            			system("cls");
	            			cout << "Cam on da su dung dich vu.";
	           				exit(0);
			}
		}
		
		delete[] ow;
		delete[] pw;
		delete[] le;
}
