/*
Shell Sort là một giải thuật sắp xếp mang lại hiệu quả cao dựa trên giải thuật sắp xếp chèn (Insertion Sort). 
Giải thuật này tránh các trường hợp phải tráo đổi vị trí của hai phần tử xa nhau trong giải thuật sắp xếp chọn
 (nếu như phần tử nhỏ hơn ở vị trí bên phải khá xa so với phần tử lớn hơn bên trái).
Đầu tiên, giải thuật này sử dụng giải thuật sắp xếp chọn trên các phần tử có khoảng cách xa nhau, 
sau đó sắp xếp các phần tử có khoảng cách hẹp hơn. Khoảng cách này còn được gọi là khoảng (interval) – 
là số vị trí từ phần tử này tới phần tử khác. Khoảng này được tính dựa vào công thức Knuth như sau:
h=h*3+1;
 h là Khoảng (interval) với giá trị ban đâu là 1
 Bước 1: Khởi tạo giá trị h
Bước 2: Chia list thành các sublist nhỏ hơn tương ứng với h
Bước 3: Sắp xếp các sublist này bởi sử dụng sắp xếp chèn (Insertion Sort)
Bước 4: Lặp lại cho tới khi list đã được sắp xếp
*/
#include <iostream>
using namespace std;

int mainn (){

    return 0;
}