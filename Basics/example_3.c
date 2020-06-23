//Convert deg F to deg C from 0 300 deg F,  with steps of 20

#include <stdio.h>

void main(){
  float C, F;
  float temperature = 0;

  while (temperature<=300){
    C = (temperature-32)*5/9;
    temperature += 20;
    printf ("Deg F %f is Deg C %f \n",temperature,C);
  }
}


/*PS C:\Users\Sandesh Gawde\github\sandesh-gawde\Intro_to _C_and_software_design\Basics> gcc -o example_3 example_3.c
PS C:\Users\Sandesh Gawde\github\sandesh-gawde\Intro_to _C_and_software_design\Basics> .\example_3.exe
Deg F 20.000000 is Deg C -17.777779
Deg F 40.000000 is Deg C -6.666667
Deg F 60.000000 is Deg C 4.444445
Deg F 80.000000 is Deg C 15.555555
Deg F 100.000000 is Deg C 26.666666
Deg F 120.000000 is Deg C 37.777779
Deg F 140.000000 is Deg C 48.888889
Deg F 160.000000 is Deg C 60.000000
Deg F 180.000000 is Deg C 71.111115
Deg F 200.000000 is Deg C 82.222221
Deg F 220.000000 is Deg C 93.333336
Deg F 240.000000 is Deg C 104.444443
Deg F 260.000000 is Deg C 115.555557
Deg F 280.000000 is Deg C 126.666664
Deg F 300.000000 is Deg C 137.777771
Deg F 320.000000 is Deg C 148.888885*/
