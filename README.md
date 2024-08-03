# OOP-UIT
## Bài tập thực hành tuần 1 – Ôn tập về lập trình C

1. Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.
2. Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.
3. Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa chúng 
và xuất kết quả.
4. Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.
5. Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. Tính điểm 
trung bình và xuất kết quả.
## Bài tập thực hành tuần 2 – Bài tập cơ bản về lớp
1. Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu 
tử số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các 
hàm thành phần xuất, nhập, định giá trị cho phân số. Viết chương trình cho 
phép nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai 
phân số kể trên.
2. Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo
và các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân, 
chia hai số phức. Viết chương trình cho phép nhập vào hai số phức, in ra kết quả 
các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
Ví dụ: Cho hai số phức A(a1, a2), B(b1, b2)

### ![image](https://github.com/user-attachments/assets/acc0801f-2382-44bf-8f38-3e1e06c0e55c)

4. Xây dựng lớp Candidate (Thí sinh) gồm các thuộc tính: mã, tên, ngày tháng năm 
sinh, điểm thi Toán, Văn, Anh và các phương thức cần thiết.
Xây dựng lớp TestCandidate để kiểm tra lớp trên:
- Nhập vào n thí sinh (n do người dùng nhập)
- In ra thông tin về các thí sinh có tổng điểm lớn hơn 15
## Bài tập thực hành tuần 3 – Bài tập cơ bản về lớp
1. Thiết lập lớp biểu diễn khái niệm điểm trong mặt phẳng với hai thành phần dữ 
liệu hoành độ và tung độ. Viết các phương thức thiết lập, các hàm thành phần 
cho phép thay đổi nội dung của điểm, lấy hoành độ, tung độ, tịnh tiến, nhập, xuất 
một điểm, hàm vẽ điểm trong chế độ đồ họa.
2. Viết định nghĩa lớp TamGiac để biểu diễn khái niệm tam giác trong mặt phẳng 
với các phương thức thiết lập, huỷ bỏ (nếu có). Các hàm thành phần nhập, xuất, 
tịnh tiến, quay, phóng to, thu nhỏ và vẽ tam giác.
3. Viết định nghĩa lớp DaGiac để biểu diễn khái niệm đa giác trong mặt phẳng với 
các hàm thành phần tương tự như lớp TamGiac
## Bài tập thực hành tuần 4 – Bài tập cơ bản về lớp
1. Định nghĩa lớp dữ liệu CTimeSpan để biểu diễn khái niệm khoảng thời gian, các 
hàm thành phần và các phép toán cần thiết (+, -, ==, !=, >, >=, <, <=), hàm xuất, 
nhập. Lưu ý viết theo dạng hàm: cong, tru, ...; không dùng overloading operator
2. Định nghĩa lớp CTime biểu diễn khái niệm thời điểm có các thành phần giờ phút 
giây. Định nghĩa các phép toán +, - (cộng, trừ thêm một số nguyên giây), - (phép 
trừ hai CTime để được một CTimSpan), ++, -- (thêm bớt một giây) , hàm xuất, 
nhập. Lưu ý viết theo dạng hàm: cong, tru, ...; không dùng overloading operator
3. Định nghĩa lớp CDate biểu diễn khái niệm ngày, tháng, năm với các phép toán +, 
- (cộng, trừ thêm một số ngày), ++, -- (thêm bớt một ngày), - (khoảng cách giữa 
hai CDate tính bằng ngày), hàm xuất, nhập. Lưu ý viết theo dạng hàm: cong, tru, 
...; không dùng overloading operator
4. Định nghĩa lớp biểu diễn khái niệm đa thức có bậc bất kỳ với các hàm thành 
phần và phép toán cần thiết.
## Bài tập thực hành tuần 5 – Bài tập cơ bản về lớp
1. Viết định nghĩa lớp String để biểu diễn khái niệm chuỗi ký tự với các phương 
thức thiết lập và huỷ bỏ, các hàm thành phần tính chiều dài chuỗi, nối hai chuỗi, 
đảo chuỗi, nhập và xuất chuỗi.
2. Áp dụng các lớp string và vector trong thư viện STL để xây dựng chương trình thống kê
đoạn văn như sau:
- Đọc một đoạn văn từ file văn bản.
- Đếm số lượng câu trong đoạn văn (câu kết thúc thúc bởi dấu ., !, ?).
- Đếm số lượng từ trong mỗi câu (từ tách biệt so với các từ khác bởi khoảng trắng).
- Tìm từ xuất hiện nhiều nhất trong đoạn văn (có thể có nhiều từ).
- Sắp xếp tăng dần các từ (theo thứ tự từ điển) trong mỗi câu.
- Kết xuất kết quả ra file văn bản theo cấu trúc sau:
• Dòng đầu tiên chứa C là số lượng câu.
• C dòng tiếp theo chứa Ti là số lượng từ trong câu thứ i (1 <= i <= C).
• Dòng kế tiếp chứa các từ xuất hiện nhiều nhất.
• Các dòng kế tiếp chứa đoạn văn sau khi đã sắp xếp.
## Bài tập thực hành tuần 6 - Bài tập overloading
1. Làm lại bài số phức với một phương thức thiết lập duy nhất cho phép quan điểm 
một số thực như một số phức đặc biệt (phần ảo bằng 0). Định nghĩa các phép 
toán +, -, *, /, = =, !=, >, >=, <, <= trên số phức. Định nghĩa phép toán << và >> 
để xuất và nhập dữ liệu vào số phức.
2. Làm lại bài phân số với các phương thức thiết lập cho phép sử dụng một số 
nguyên như một phân số đặc biệt (mẫu số bằng 1). Định nghĩa các phép toán +, -, 
*, /, = =, != , >, >=, <, <= trên phân số. Định nghĩa phép toán << và >> để xuất 
và nhập dữ liệu vào phân số.
3. Định nghĩa lớp dữ liệu CTimeSpan để biểu diễn khái niệm khoảng thời gian, các 
hàm thành phần và các phép toán cần thiết (+, -, ==, !=, >, >=, <, <=). 
4. Định nghĩa lớp CTime biểu diễn khái niệm thời điểm có các thành phần giờ phút 
giây. Định nghĩa các phép toán +, - (cộng, trừ thêm một số nguyên giây), - (phép 
trừ hai CTime để được một CTimSpan), ++, -- (thêm bớt một giây). Phép toán 
<<, >> để xuất, nhập dữ liệu loại CTime. 
5. Định nghĩa lớp CDate biểu diễn khái niệm ngày, tháng, năm với các phép toán +, 
- (cộng, trừ thêm một số ngày), ++, -- (thêm bớt một ngày), - (khoảng cách giữa 
hai CDate tính bằng ngày). Phép toán <<, >> để xuất, nhập dữ liệu loại CDate. 
6. Hãy định nghĩa lớp CString biểu diễn khái niệm chuỗi ký tự với các phương thức 
thiết lập, huỷ bỏ, các hàm thành phần và các phép toán cần thiết (+, gán, so sánh 
hai chuỗi).
7. Định nghĩa lớp biểu diễn khái niệm đa thức có bậc bất kỳ với các hàm thành 
phần và phép toán cần thiết.
8. Định nghĩa lớp CVector biểu diễn khái niệm vector trong không gian có số chiều 
bất kỳ với các hàm thành phần và các phép toán cần thiết.
