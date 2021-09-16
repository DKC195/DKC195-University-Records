/* WAP to calculate electricity bill for domestic consumers.
      Units           Charge/Unit
      0-20              3.00
     21-30              7.00
     31-50              8.50
     51-150            10.00
    151 – 250          11.00
    215 – 400          12.00
    Above 400          13.00 */
#include <stdio.h>

int main() {
  float units,calc,diff;
  int x;
  calc=0;
  printf("Enter the units of electricity consumed: ");
  scanf("%f",&units);
  if(0<units && units<21) x=6;
  else if(units<31) x=5;
  else if(units<51) x=4;
  else if(units<151) x=3;
  else if(units<251) x=2;
  else if(units<401) x=1;
  else if(400<units) x=0;
  else x=7;
  switch(x) {
    case 0:
      diff = units-400;
      units = units-diff;
      calc = diff*13;
    case 1:
      diff = units-250;
      units = units-diff;
      calc = calc+diff*12;
    case 2:
      diff = units-150;
      units = units-diff;
      calc = calc+units*11;
    case 3:
      diff = units-50;
      units = units-diff;
      calc = calc+units*10;
    case 4:
      diff = units-30;
      units = units-diff;
      calc = calc+units*8.5;
    case 5:
      diff = units-20;
      units = units-diff;
      calc = calc+units*7;
    case 6:
      calc = calc+units*3;
      printf("Your bill is %.2f",calc);
    break;
    default:
      printf("Units can't be negative");
    }
        return 0;
}
