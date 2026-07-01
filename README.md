# 🎓 StudentManagement — Quản lý Sinh viên (C++)

[![Language](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Status](https://img.shields.io/badge/Status-Active-brightgreen.svg)]()
[![Features](https://img.shields.io/badge/Features-5-purple.svg)]()

Dự án thực hành C++ cơ bản về quản lý danh sách sinh viên ứng dụng cấu trúc dữ liệu mảng động `std::vector`.

* 📝 [Lý thuyết](#nội-dung-chức-năng) · 💻 [Cài đặt](#cài-đặt--chạy) · 📁 [Cấu trúc](#cấu-trúc-dự-án) · 🤝 [Đóng góp](#đóng-góp)

---

## 📌 Giới thiệu

**StudentManagement** là một ứng dụng console nhỏ gọn giúp quản lý thông tin sinh viên được viết bằng chuẩn C++17 nhằm mục đích rèn luyện tư duy lập trình hướng thủ tục, quản lý struct và các thao tác cơ bản trên bộ lưu trữ mảng động:
* Cho phép lưu giữ linh hoạt danh sách sinh viên không giới hạn phần tử ban đầu nhờ `std::vector`.
* Giao diện tương tác menu trực quan, dễ sử dụng.
* Chuẩn GitHub: cấu trúc rõ ràng, mã nguồn viết sạch và có kèm file hướng dẫn đầy đủ.

---
## 📁 Cấu trúc Dự Án
```text
StudentManagement/
│
├── duAN/
│   ├── khaibao.h      # Khai báo cấu trúc SinhVien và các prototype của hàm
│   ├── caidat.cpp     # Triển khai chi tiết logic xử lý các hàm chức năng
│   └── ctc.cpp        # Hàm main điều hướng chương trình (Menu chính)
│
├── .gitignore         # Bộ lọc rác cấu hình hệ thống của Visual Studio
├── .gitattributes     # Định nghĩa thuộc tính Git cho các file
└── README.md          # Tài liệu hướng dẫn sử dụng hệ thống
## Chức Năng,Nội Dung Chính,Độ Phức Tạp

1,Nhập danh sách,Thêm mới một hoặc nhiều sinh viên vào hệ thống,O(N)
2,Hiển thị danh sách,"In toàn bộ dữ liệu (MSSV, Họ Tên, Điểm TB) ra màn hình",O(N)
3,Tìm kiếm sinh viên,Tìm vị trí sinh viên trong hệ thống theo Mã số sinh viên (MSSV),O(N)

## ⚙️ Cài Đặt & Chạy

Yêu cầu hệ thống
Compiler: g++ 9+ (C++17) hoặc MSVC (Visual Studio 2022)
OS: Windows, Linux, macOS
IDE gợi ý Visual Studio 2022, VS Code, CLion, Dev-C++

## 🤝 Đóng Góp

Mọi đóng góp nhằm tối ưu mã nguồn (ví dụ: bổ sung tính năng sắp xếp, xóa sinh viên) đều được chào đón!
Fork dự án
Tạo branch mới: git checkout -b feature/ten-tinh-nang
Commit thay đổi: git commit -m "feat: bổ sung tính năng X"
Push lên nhánh vừa tạo: git push origin feature/ten-tinh-nang
Tạo một Pull Request
