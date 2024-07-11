#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
class PhanTichVanBan {
private:
    string vanBan; // Lưu trữ đoạn văn
    vector<string> cau; // Lưu trữ các câu trong đoạn văn
    vector<vector<string>> tuTrongCau; // Lưu trữ các từ trong mỗi câu
    map<string, int> demTu; // Lưu trữ số lần xuất hiện của mỗi từ

public:
    // Hàm khởi tạo đọc đoạn văn từ file
    PhanTichVanBan(string tenFile);

    // Hàm phân tích đoạn văn
    void phanTich();

    // Hàm tách các câu trong đoạn văn
    void tachCau();

    // Hàm đếm số lượng từ trong mỗi câu và số lần xuất hiện của mỗi từ
    void demSoTu();

    // Hàm sắp xếp các từ trong mỗi câu theo thứ tự từ điển
    void sapXepTu();

    // Toán tử overloading để in kết quả ra file hoặc ra màn hình
    friend ostream& operator<<(ostream& os, const PhanTichVanBan& phanTich);
};
// Định nghĩa toán tử overloading <<
ostream& operator<<(ostream& os, const PhanTichVanBan& phanTich) {
    os << phanTich.cau.size() << endl; // In số lượng câu
    for (vector<string> cacTu : phanTich.tuTrongCau) { // In số lượng từ trong mỗi câu
        os << cacTu.size() << endl;
    }
    int demLonNhat = 0; // Tìm số lần xuất hiện nhiều nhất của một từ
    for (auto const& x : phanTich.demTu) {
        if (x.second > demLonNhat) demLonNhat = x.second;
    }
    for (auto const& x : phanTich.demTu) { // In các từ xuất hiện nhiều nhất
        if (x.second == demLonNhat) os << x.first << " ";
    }
    os << endl;
    for (vector<string> cacTu : phanTich.tuTrongCau) { // In đoạn văn sau khi đã sắp xếp
        for (string motTu : cacTu) {
            os << motTu << " ";
        }
        os << endl;
    }
    return os;
}
PhanTichVanBan::PhanTichVanBan(string tenFile){
        ifstream file(tenFile);
        if (file.is_open()) {
            getline(file, vanBan, '\0');
            file.close();
        }
        else {
            cout << "Không thể mở file";
        }
}
void PhanTichVanBan::phanTich(){
       tachCau();
       demSoTu();
       sapXepTu();
}
void PhanTichVanBan::tachCau(){
       string motCau = "";
        for (char c : vanBan) {
            if (c == '.' || c == '!' || c == '?') {
                cau.push_back(motCau);
                motCau = "";
            }
            else {
                motCau += c;
            }
        }
}
void PhanTichVanBan::demSoTu(){
       for (string motCau : cau) {
            vector<string> cacTu;
            string motTu = "";
            for (char c : motCau) {
                if (c == ' ') {
                    cacTu.push_back(motTu);
                    demTu[motTu]++;
                    motTu = "";
                }
                else {
                    motTu += c;
                }
            }
            if (motTu != "") {
                cacTu.push_back(motTu);
                demTu[motTu]++;
            }
            tuTrongCau.push_back(cacTu);
        }
}
void PhanTichVanBan::sapXepTu(){
        for (vector<string>& cacTu : tuTrongCau) {
            sort(cacTu.begin(), cacTu.end());
        }
}
int main() {
    PhanTichVanBan phanTich("input.txt"); // Khởi tạo đối tượng phân tích văn bản
    phanTich.phanTich(); // Phân tích đoạn văn
    ofstream file("output.txt"); // Mở file để ghi kết quả
    if (file.is_open()) {
        file << phanTich; // Ghi kết quả ra file
        file.close();
    }
}
