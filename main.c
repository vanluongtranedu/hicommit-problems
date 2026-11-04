#include <stdio.h>
int main() {
  float dtb;
  int drl, phanloaihocluc, phanloaidrl;
  phanloaihocluc =0;
  phanloaidrl=0;
    scanf("%f %d", &dtb, &drl );
  if(dtb>=9.0){
    phanloaihocluc=1;
  }
  else if(dtb >=8.0){
    phanloaihocluc=2;
  }
  else if(dtb >=7.0){
    phanloaihocluc=3;
  }
  else{
    phanloaihocluc=4;
  }
  if(drl >= 90){
    phanloaidrl =1;
  }
  else if(drl>=80){
    phanloaidrl =2;
  }
  else if(drl>=70){
    phanloaidrl =3;
  }
  else(drl < 70){
    phanloaidrl =4;
  }
  if(phanloaihocluc==1 && phanloaidrl==1){
    printf("HOC_BONG_XUAT_SAC");
  }
  if(phanloaihocluc==2 && phanloaidrl==1 || phanloaidrl==2){
    printf("HOC_BONG_GIOI");
  }
  if(phanloaihocluc==1 && phanloaidrl==2){
    printf("HOC_BONG_GIOI");
  }
  else if(phanloaihocluc==3 && phanloaidrl==1 || phanloaidrl==2 || phanloaidrl==3){
    printf("HOC_BONG_KHA");
  }
  else if(phanloaihocluc==1 || phanloaihocluc==2 &&  phanloaidrl==3){
    printf("HOC_BONG_KHA");
  }
  else{
    printf("KHONG_DAT");
  }
  return 0;
}