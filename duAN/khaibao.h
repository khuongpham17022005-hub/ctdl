#ifndef KHAIBAO_H
#define KHAIBAO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct SinhVien {
    string mssv;
    string hoTen;
    double diemTB;
};
// Khai báo các hàm chức năng
void nhapSinhVien(SinhVien& sv);
void inSinhVien(const SinhVien& sv);
void nhapDanhSach(vector<SinhVien>& ds);
void inDanhSach(const vector<SinhVien>& ds);
int timKiemSinhVien(const vector<SinhVien>& ds, string mssvCanTim);
#endif