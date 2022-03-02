# BGT3xxx Linux Drivers

Tested for kernels up to v5.13.

## Installation Instructions

### Install Prerequisites

```
sudo apt install -y make gcc libelf-dev dkms flex bison
```

### Clone Repository

```
cd /usr/src
sudo git clone https://github.com/DragonQ/BGT3xxx-fork-for-cxd2837.git
```

### Test Build

```
cd BGT3xxx-fork-for-cxd2837
sudo ./build.sh
```

### DKMS Installation

```
cd /usr/src
sudo cp BGT3xxx-fork-for-cxd2837/bgt-linux-pcie-fw/dvb-fe-tda10048-1.0.fw /lib/firmware/
sudo ln -s BGT3xxx-fork-for-cxd2837/bgt-linux-pcie-drv/ BGT3xxx-1.0.0.0Fixed
sudo dkms add -m BGT3xxx -v 1.0.0.0Fixed
sudo dkms build -m BGT3xxx -v 1.0.0.0Fixed
sudo dkms install -m BGT3xxx -v 1.0.0.0Fixed
sudo modprobe tda18272
sudo modprobe cxd2843
sudo modprobe saa7231_core
sudo modprobe saa7231_drv
```

## Debugging

First unload all the drivers:

```
sudo rmmod saa7231_drv
sudo rmmod saa7231_core
sudo rmmod cxd2843
sudo rmmod tda18272
sudo rmmod stv6110x
```

Open another terminal session and enter the following command to watch debug messages:

```
watch -n 0.1 "dmesg | tail -n $((LINES-10))"
```

Now reload the drivers in debug mode:

```
sudo modprobe tda18272 verbose=4
sudo modprobe cxd2843 verbose=4
sudo modprobe saa7231_core
sudo modprobe saa7231_drv verbose=5
```

NOTE: This will show a **lot** of information!
