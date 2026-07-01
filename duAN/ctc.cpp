#include "khaibao.h"

int main() {
    vector<SinhVien> danhSachSV;
    int chon;

    do {
        cout << "\n MENU QUAN LY SINH VIEN\n";
        cout << "1. Nhap danh sach sinh vien\n";
        cout << "2. Hien thi danh sach sinh vien\n";
        cout << "3. Tim kiem sinh vien theo MSSV\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "Lua chon cua ban: ";
        cin >> chon;

        switch (chon) {
        case 1:
            nhapDanhSach(danhSachSV);
            break;
        case 2:
            inDanhSach(danhSachSV);
            break;
        case 3: {
            string mssv;
            cout << "Nhap MSSV can tim: ";
            cin >> mssv;
            int viTri = timKiemSinhVien(danhSachSV, mssv);
            if (viTri != -1) {
                cout << "=> Tim thay sinh vien tai vi tri " << viTri + 1 << ":\n";
                inSinhVien(danhSachSV[viTri]);
            }
            else {
                cout << "=> Không tìm thay sinh vien co MSSV: " << mssv << endl;
            }
            break;
        }
        case 0:
            cout << "Tam biet!\n";
            break;
        default:
            cout << "Lua chon khong hop le. Vui long chon lai!\n";
        }
    } while (chon != 0);

    return 0;
}