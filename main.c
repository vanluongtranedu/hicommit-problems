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
  if(dtb >=8.0 && dtb < 9.0){
    phanloaihocluc=2
  }
  if(dtb >=7.0 && dtb < 8.0){
    phanloaihocluc=2
  }
  if(dtb < 7.0){
    phanloaihocluc=3
  }
  if(drl >= 90){
    phanloaidrl =1;
  }
  if(drl>=80 && drl > 90){
    phanloaidrl =2;
  }
  if(drl>=80 && drl < 90){
    phanloaidrl =2;
  }
  if(drl>=70 && drl < 80){
    phanloaidrl =2;
  }
  if(drl < 70 ){
    phanloaidrl =3;
  }



  return 0;
}