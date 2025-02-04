# OOP-UIT
## Bài tập thực hành tuần 1 – Ôn tập về lập trình C(BTH1)

1. Viết chương trình nhập vào một phân số, rút gọn phân số và xuất kết quả.
2. Viết chương trình nhập vào hai phân số, tìm phân số lớn nhất và xuất kết quả.
3. Viết chương trình nhập vào hai phân số. Tính tổng, hiệu, tích, thương giữa chúng 
và xuất kết quả.
4. Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.
5. Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. Tính điểm 
trung bình và xuất kết quả.
## Bài tập thực hành tuần 2 – Bài tập cơ bản về lớp(BTH1)
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
## Bài tập thực hành tuần 3 – Bài tập cơ bản về lớp(BTH2)
1. Thiết lập lớp biểu diễn khái niệm điểm trong mặt phẳng với hai thành phần dữ 
liệu hoành độ và tung độ. Viết các phương thức thiết lập, các hàm thành phần 
cho phép thay đổi nội dung của điểm, lấy hoành độ, tung độ, tịnh tiến, nhập, xuất 
một điểm, hàm vẽ điểm trong chế độ đồ họa.
2. Viết định nghĩa lớp TamGiac để biểu diễn khái niệm tam giác trong mặt phẳng 
với các phương thức thiết lập, huỷ bỏ (nếu có). Các hàm thành phần nhập, xuất, 
tịnh tiến, quay, phóng to, thu nhỏ và vẽ tam giác.
3. Viết định nghĩa lớp DaGiac để biểu diễn khái niệm đa giác trong mặt phẳng với 
các hàm thành phần tương tự như lớp TamGiac
## Bài tập thực hành tuần 4 – Bài tập cơ bản về lớp(BTH2)
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
## Bài tập thực hành tuần 5 – Bài tập cơ bản về lớp(BTH3)
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
## Bài tập thực hành tuần 6 - Bài tập overloading(BTH4)
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
## Bài tập thực hành tuần 7 – Bài tập về kế thừa(BTH5)
1. Giả sử Công ty có hai loại nhân viên: Nhân viên văn phòng và Nhân viên sản 
xuất. Viết chương trình quản lý và tính lương cho từng nhân viên của công ty:
Mỗi nhân viên cần quản lý các thông tin sau: Họ tên, ngày sinh, lương
Công ty cần tính lương cho nhân viên như sau:
- Đối với nhân viên sản xuất: 
 Lương=lương căn bản + số sản phẩm * 5.000
- Đối nhân viên văn phòng: 
 lương = số ngày làm việc * 100.000
2. Xây dựng các loại đối tượng sinh viên, học sinh, công nhân, nghệ sĩ, ca sĩ. Viết 
chương trình cho phép nhập vào một trong các loại đối tượng kể trên. In thông 
tin đối tượng đó.
3. Tạo một danh sách các đối tượng, mỗi đối tượng thuộc một trong các loại: sinh 
viên, học sinh, công nhân, nghệ sĩ, ca sĩ. Viết chương trình cho phép nhập danh 
sách kể trên, in thông tin của từng đối tượng trong danh sách.
4. Xây dựng lớp biểu diễn khái niệm hình ellipse và hình tròn. Viết chương trình 
cho phép nhập vào một hình tròn. Vẽ hình tròn đó.
5. Xây dựng các loại đối tượng hình thang, hình bình hành, hình chữ nhật, hình 
vuông. Chỉ xét các hình thang, hình bình hành có đáy song song với trục hoành, 
chỉ xét hình chữ nhật và hình vuông có cạnh song song với trục toạ độ. Viết 
chương trình cho phép nhập vào một trong các hình kể trên. Vẽ hình đó. 
6. Một nông trại chăn nuôi có 3 loại gia súc: bò, cừu, và dê. Mỗi loại gia súc đều
có thể sinh con, cho sữa và phát ra tiếng kêu riêng của chúng. Khi đói, các gia
súc sẽ phát ra tiếng kêu để đòi ăn. Sau một thời gian chăn nuôi, người chủ nông
trại muốn thống kê xem trong nông trại có bao nhiêu gia súc ở mỗi loại, tổng số 
lit sữa mà tất cả các gia súc của ông đã cho.
Áp dụng kế thừa, xây dựng chương trình cho phép người chủ nông trại nhập vào
số lượng gia súc ban đầu ở mỗi loại.
a. Một hôm người chủ nông trại đi vắng, tất cả gia súc trong nông trại đều
đói. Hãy cho biết những tiếng kêu nghe được trong nông trại.
b. Chương trình sẽ đưa ra thống kê các thông tin người chủ mong muốn
(nêu trên) sau một lứa sinh và một lược cho sữa của tất cả gia súc. Biết rằng:
- Tất cả gia súc ở mỗi loại đều sinh con.
- Số lượng sinh của mỗi gia súc là ngẫu nhiên.
- Tất cả gia súc ở mỗi loại đều cho sữa.
- Số lit sữa mỗi gia súc cho là ngẫu nhiên nhưng trong giới hạn sau:
• Bò: 0 – 20 lít.
• Cừu: 0 – 5 lít.
• Dê: 0 – 10 lít.
##  Bài tập về đa hình(BTH6)
1. Giả sử Trường ĐH CNTT TP.HCM đào tạo sinh viên theo 2 hệ là hệ cao đẳng 
và hệ đại học. Thông tin cần quản lí của một sinh viên cao đẳng bao gồm: mã số 
sinh viên, họ tên, địa chỉ, tổng số tín chỉ, điểm trung bình, điểm thi tốt nghiệp. 
Thông tin cần quản lí của một sinh viên đại học bao gồm: mã số sinh viên, họ 
tên, địa chỉ, tổng số tín chỉ, điểm trung bình, tên luận văn, điểm luận văn.
Cách xét tốt nghiệp của sinh viên mỗi hệ là khác nhau:
- Sinh viên hệ cao đẳng tốt nghiệp khi có tổng số tín chỉ từ 120 trở lên, điểm 
trung bình từ 5 trở lên và điểm thi tốt nghiệp phải đạt từ 5 trở lên.
- Sinh viên hệ đại học tốt nghiệp khi có tổng số tín chỉ từ 170 trở lên, điểm 
trung bình từ 5 trở lên và phải bảo vệ luận văn với điểm số đạt được từ 5 
điểm trở lên.
Hãy thiết kế các lớp và cài đặt chương trình bằng C++ cho phép thực hiện các 
yêu cầu sau:
a. Nhập vào danh sách các sinh viên
b. Xuất danh sách các sinh viên
c. Xuất danh sách sinh viên đủ điều kiện tốt nghiệp
d. Xuất danh sách sinh viên không đủ điều kiện tốt nghiệp
e. Cho biết sinh viên đại học nào có điểm trung bình cao nhất
f. Cho biết sinh viên cao đẳng nào có điểm trung bình cao nhất
g. Với mỗi loại, cho biết có bao nhiêu sinh viên không đủ điều kiện tốt nghiệp
2. Giả sử công ty phần mềm Hoàn cầu có 2 loại nhân viên: các lập trình viên là 
những người sẽ viết mã nguồn cho các ứng dụng, các kiểm chứng viên có nhiệm 
vụ kiểm tra mã nguồn và chương trình mà lập trình viên viết ra, để tìm các lỗi 
trước khi giao sản phẩm cho khách hàng. Hiện tại, để quản lý thông tin của các 
nhân viên của mình, công ty phần mềm Hoàn cầu lưu trữ các thông tin sau:
- Đối với lập trình viên: mã nhân viên, họ tên, tuổi, số điện thoại, email, lương 
cơ bản, số giờ overtime.
- Đối với kiểm chứng viên: mã nhân viên, họ tên, tuổi, số điện thoại, email, 
lương cơ bản, số lỗi phát hiện được.
Do tính chất công việc khác nhau, nên lương hàng tháng của lập trình viên và 
kiểm chứng viên cũng khác nhau. Cụ thể:
- Lương (lập trình viên) = lương cơ bản + số giờ làm thêm * 200.000
- Lương (kiểm chứng viên) = lương cơ bản + số lỗi * 50.000
Hãy đề xuất thiết kế các lớp đối tượng cần thiết để quản lý danh sách các nhân 
viên của Công ty và viết chương trình cho phép thực hiện các yêu cầu sau:
a. Nhập vào danh sách nhân viên
b. Xuất danh sách nhân viên
c. Xuất danh sách các nhân viên có lương thấp hơn mức lương trung bình của 
các nhân viên trong công ty
d. Xuất thông tin nhân viên có lương cao nhất
e. Xuất thông tin nhân viên có lương thấp nhất
f. Xuất thông tin lập trình viên có lương cao nhất
g. Xuất thông tin kiểm chứng viên có lương thấp nhất
3. Áp dụng liên kết động để làm lại bài tập tuần 5 (bài nông trại). Hãy so sánh
giữa 2 cách làm (không dùng liên kết động và có dùng liên kết động) và rút ra
ưu điểm của cách dùng liên kết động.
4. Công ty XYZ quản lý việc mua hàng của 3 loại khách hàng:
- Loại A: Khách hàng bình thường (gồm x khách hàng): 
Số tiền khách hàng trả = Số lượng hàng * đơn giá hàng + Thuế VAT (10%)
- Loại B: Khách hàng thân thiết (gồm y khách hàng):
Phần trăm khuyến mãi = MAX (Số năm thân thiết * 5%, 50%)
Số tiền khách hàng trả = (Số lượng hàng * đơn giá hàng) * (100% - Phần trăm 
khuyến mãi) + Thuế VAT (10%) 
- Loại C: Khách hàng đặc biệt (gồm z khách hàng):
Số tiền khách hàng trả = (Số lượng hàng*đơn giá hàng)*50%+Thuế VAT (10%) 
Viết chương trình thực hiện các yêu cầu sau:
1) Nhập danh sách khách hàng từ file văn bản XYZ.INP. 0< x,y,z<1000. 
2) Tổng số tiền mỗi khách hàng trong danh sách phải trả. Xuất kết quả ra file 
XYZ.OUT dưới định dạng theo quy định.
3) Thiết kế và xây dựng các lớp để giải quyết bài toán tính Tổng số tiền công 
ty thu được. Xuất kết quả ra file XYZ.OUT dưới định dạng theo quy định.
