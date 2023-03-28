#include <stdio.h>
#include <conio.h>

struct HonSo
{
	int SoNguyen, MauSo, TuSo;
};

typedef struct HonSo HONSO;

void NhapHonSo(HONSO&);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs)
{
	printf("\nNhap So Nguyen: ");
	scanf("%d", &hs.SoNguyen);
	printf("\nNhap Tu So: ");
	scanf("%d", &hs.TuSo);
	do
	{
	printf("\nNhap Mau So: ");
    scanf("%d", &hs.MauSo);
    
	    if(hs.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
		}while(hs.MauSo == 0);
}
void XuatHonSo(HONSO hs)
{
	printf("%d(%d/%d)", hs.SoNguyen, hs.TuSo, hs.MauSo);
}
int main()
{
	HONSO hs;
	NhapHonSo(hs);
	XuatHonSo(hs);
	
	return 0;
	getch();
}
