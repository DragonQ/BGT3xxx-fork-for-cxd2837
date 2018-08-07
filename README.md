BGT3xxx
=======

Blackgold 3xxx Linux Drivers
 thanks to marcus for V4.2 update and fixes

Last updated for kernels up to v4.13

STANDARD INSTALL
================
./build.sh  


DKMS INSTALL (Auto recompile on kernel update)
==============================================
cd /usr/src  
sudo git clone http://www.cblinux.co.uk:5010/BGT3xxx.git  
sudo cp BGT3xxx/bgt-linux-pcie-fw/dvb-fe-tda10048-1.0.fw /lib/firmware/  
sudo ln -s  BGT3xxx/bgt-linux-pcie-drv/ BGT3xxx-1.0.0.0Fixed  
sudo dkms add -m BGT3xxx -v 1.0.0.0Fixed  
sudo dkms build -m BGT3xxx -v 1.0.0.0Fixed  
sudo dkms install -m BGT3xxx -v 1.0.0.0Fixed  
sudo modprobe saa7231_core 


FOR DEBUG LOADING 
==============================================================
first unload all the drive

rmmod saa7231_drv
rmmod saa7231_core
rmmod cxd2843
rmmod tda18272
rmmod stv6110x

then load them in debug information

but first open another ssh screen to have the dbug information showing up 
watch -n 0.1 "dmesg | tail -n $((LINES-10))"

modprobe tda18272 verbose=4
modprobe cxd2843 verbose=4
modprobe saa7231_core
modprobe saa7231_drv verbose=5

PLEASE REMEMBER THIS IS GOING TO SHOW A LOT OF INFORMATION
