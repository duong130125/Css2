#include<stdio.h>
int main(){
	int canh_hv = 4;
	int dai_hcn = 3;
	int rong_hcn = 2;
	float bk_htr = 5;
	const float PI = 3.14;
	int dt_hv = canh_hv*canh_hv;
	int cv_hv = canh_hv*4;
	int dt_hcn = dai_hcn * rong_hcn;
	int cv_hcn = (dai_hcn + rong_hcn)*2;
	float dt_htr = PI*bk_htr*bk_htr;
	float cv_htr = 2*PI*bk_htr;
	printf(" dien tich = %d,dien tich = %d,dien tich = %.1f", dt_hv,dt_hcn,dt_htr);
}
