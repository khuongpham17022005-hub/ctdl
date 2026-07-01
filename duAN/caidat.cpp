#include "khaibao.h"
// 1.Nh?p thông tin cho 1 sinh viên
void nhapSinhVien(SinhVien& sv) {
    cout << "Nhap MSSV: ";
    cin >> sv.mssv;
    cin.ignore(); 
    cout << "Nhap Ho ten: ";
    getline(cin, sv.hoTen);
    cout << "Nhap Diem TB: ";
    cin >> sv.diemTB;
}
// 2.In thông tin 1 sinh viên
void inSinhVien(const SinhVien& sv) {
    cout << "MSSV: " << sv.mssv
        << " | Ho ten: " << sv.hoTen
        << " | Diem TB: " << sv.diemTB << endl;
}
// 3.Nh?p danh sách nhi?u sinh viên
void nhapDanhSach(vector<SinhVien>& ds) {
    int n;
    cout << "Nhap so luong sinh vien muon them: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\n--- Nhap sinh vien thu " << i + 1 << " ---\n";
        SinhVien sv;
        nhapSinhVien(sv);
        ds.push_back(sv);
    }
}
// 4.In toàn b? danh sách sinh viên
void inDanhSach(const vector<SinhVien>& ds) {
    if (ds.empty()) {
        cout << "Danh sach sinh vien trong!\n";
        return;
    }
    cout << "\n======= DANH SACH SINH VIEN =======\n";
    for (const auto& sv : ds) {
        inSinhVien(sv);
    }
    cout << "===================================\n";
}
// 5.Tìm ki?m sinh viên theo MSSV, tr? v? ch? s? (index) n?u tìm th?y, ng??c l?i tr? v? -1
int timKiemSinhVien(const vector<SinhVien>& ds, string mssvCanTim) {
    for (size_t i = 0; i < ds.size(); i++) {
        if (ds[i].mssv == mssvCanTim) {
            return i; // Tìm th?y, tr? v? v? trí
        }
    }
    return -1; // Không tìm th?y
}