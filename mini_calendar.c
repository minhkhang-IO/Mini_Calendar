#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
bool is_lead_year(int year){
if(year % 4 !=0){
  return false;
} 
else if( year % 100 !=0){
  return true;

}
else if ( year % 400 ==0){
  return false;
}
else{
  return true;
}

}
int days_in_month[]={0,30,28,31,30,31,30,31,31,30,30,31,30,31};
void add_days_to_date(int *mm, int *dd,int *yy, int days_left_to_add){

 
 int days_left_in_month;
 while (days_left_to_add>0){
  // tính số ngày trong tháng 
  days_left_in_month = days_in_month[*mm] - *dd;
 if (*mm==2 && is_lead_year(*yy)){ // Nếu là tháng 2 năm nhuận thì cộng thêm 1
  days_left_in_month++;
 // Nếu số ngày cộng vượt quá số ngày hiện tại
 }
 if (days_left_to_add > days_left_in_month){
  days_left_to_add -= days_left_in_month;
  days_left_to_add -= 1;
  *dd=1;

  if (*mm==12){
    *mm = 1;
    *yy+=1;
  }
  else {
    *mm=*mm+1;
  }
 }
 
 else {// Task 26: Nếu số ngày còn lại đủ nằm gọn trong tháng hiện tại
*dd += days_left_to_add;
days_left_to_add=0; 
 }
} 
}

int main() {
    setlocale(LC_ALL, "vi_VN.UTF-8");
  int mm;
  int dd;
  int yy;
  int days_left_to_add;
  

  int year;
printf (" Hãy nhập bất kỳ một năm vào:\n");
scanf("%d",&year );
printf("Đang tiến hành kiểm tra....");
if (is_lead_year (year)){
  printf(" Đây là năm nhuận\n");
}
else {

  printf("Đây là năm không nhuận\n");
}
 printf("Nhập ngày tháng năm hiện tại( 12/31/2023):\n");
 scanf("%d/%d/%d",&mm, &dd, &yy);
 // Nhập hàm muốn cộng vào
 printf("Nhập số ngày muốn cộng thêm:\n");
 scanf("%d", &days_left_to_add);
 add_days_to_date(&mm, &dd, &yy, days_left_to_add);
 printf("\n----Kết quả --------\n");
 printf("Ngày tháng năm hiện tại là: %02d/%02d/%02d\n", mm, dd, yy);
}