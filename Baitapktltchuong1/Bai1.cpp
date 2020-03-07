#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct DATE
{
    int day,month,year;
};
struct HS
{
    char MSHS[5];
    char Hoten[30];
    DATE Ngaysinh;
    char Diachi[50];
    char Gender[3];
    float Dtb;
};
void XuatHS(HS x);
void XuatLop(HS A[], int n);
void NhapSiSo(int &n);
void Readln(char A[], int max);
void NhapThongTinHS(HS &x);
void NhapThongTinHS(HS &x);
void NhapNgaySinh(HS &x);
void NhapLop(HS A[], int n);
int main()
{
    int ss;
    HS A[50];
    NhapSiSo(ss);
    NhapLop(A,ss);
    XuatLop(A,ss);
    return 0;
}
void XuatHS(HS x)
{
	printf("%s	%s	%d/%d/%d	%s	%s	%.2f",x.MSHS,x.Hoten,x.Ngaysinh.day,x.Ngaysinh.month,x.Ngaysinh.year,x.Diachi,x.Gender,x.Dtb);
}
void XuatLop(HS A[], int n)
{
	for(int i=0;i<n;i++)
		XuatHS(A[i]);
}
void NhapSiSo(int &n)
{
    printf("Nhap si so: ");
    scanf("%d",&n);
    if(n>50)
    {
        printf("lop qua dong :(( ");
        exit(1);
    }
}
void Readln(char A[], int max)
{
	if(fgets(A,max,stdin)!=NULL);
	if(fgets(A,max,stdin)!=NULL);
}
void NhapThongTinHS(HS &x)
{
    printf("Nhap ma so hoc sinh : ");
    Readln(x.MSHS,5);
    printf("Nhap ho ten hoc sinh : ");
    Readln(x.Hoten,30);
    NhapNgaySinh(x);
    printf("Nhap dia chi :");
    Readln(x.Diachi,50);
    printf("Nhap gio tinh :");
    Reanln(x.Gender,3);
    printf("Nhap diem trung binh : ");
    float diem;
    scanf("%f",&diem);
    x.Dtb=diem;
}
void NhapNgaySinh(HS &x)
{
	int d,m,y;
	printf("Nhap ngay sinh (dd mm yyyy) :");
	scanf("%d%d%d",&d,&m,&y);
	while(!KiemTraNgay(d,m,y))
	{
		printf("Nhap lai : ");
		scanf("%d%d%d",&d,&m,&y);
	}
	x.Ngaysinh.day=d;
	x.Ngaysinh.month=m;
	x.Ngaysinh.year=y;
}
void NhapLop(HS A[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap thong tin hoc sinh %d :",i);
        NhapThongTinHS(A[i]);
    }
}
