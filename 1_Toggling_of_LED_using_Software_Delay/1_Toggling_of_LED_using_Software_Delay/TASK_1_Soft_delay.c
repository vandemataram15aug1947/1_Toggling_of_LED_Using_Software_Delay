
/////////////////////////////////////////    Task-1  //////////////////////////////////////////////
Toggling of LED using Software Delay

 */
#include "F28x_Project.h"
#define LED1 GpioDataRegs.GPBDAT.bit.GPIO34
#define LED2 GpioDataRegs.GPADAT.bit.GPIO31

////////////////////    Vande    //////////////////////////
void main(){
    //Initialization of System Control
    InitSysCtrl();
    //Initialization of General Purpose Input Output Pins
    InitGpio();
    EALLOW;

    //////    Vande   //////
    //Configure GPIO34 and  GPIO31 as an Output
    GpioCtrlRegs.GPAMUX2.bit.GPIO31 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO31 = 1;
    GpioCtrlRegs.GPBMUX1.bit.GPIO34 = 0;
    GpioCtrlRegs.GPBDIR.bit.GPIO34 = 1;
    GpioDataRegs.GPASET.bit.GPIO31 = 0; //Initially BLUE LED will turn ON
    GpioDataRegs.GPBSET.bit.GPIO34 = 0; //Initially RED LED will turn OFF
    EDIS;
    while(1)
    {
        /////////  Vande   //////////

        //  using software delay
        LED_1=1;
        DELAY_US(2000000);
        LED_1=0;
        DELAY_US(2000000);
        LED_1=0;
        DELAY_US(2000000);
        LED_2=0;
        DELAY_US(2000000);

    }
}
