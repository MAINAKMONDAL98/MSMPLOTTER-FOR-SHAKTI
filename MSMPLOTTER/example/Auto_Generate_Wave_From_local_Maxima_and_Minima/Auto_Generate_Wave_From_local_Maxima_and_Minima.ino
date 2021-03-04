#include<MSMPLOTTER.h>
void setup() {
  Serial.begin(115200);
  uint16_t arr[]={2,4,6,6,10,4,5.5,5,4,8,7,5,14,0,5,3};
uint16_t p=(sizeof(arr) / sizeof(arr[0]));
//Serial.println(p);
char* name_of_Graph="MxMn_WAVE";
char* x_axis="X";
char* y_axis="Y";
MSMPLOTTER MPLOTTER;
MPLOTTER.msmplotter(arr,p,name_of_Graph,x_axis,y_axis);
delay(20000);

}

void loop() {
  // put your main code here, to run repeatedly:

}
