- file system is set of rules used to decide how the data is stored and fetched in device,like harddrive or else
- the entire linux structure start from top(/) known as  root directory and it is not a user it is a directory
- some data storage formats are : EXT3,EXT4,BTRFS,XFS,and so on
- Mounting : it is a directory,that is created as part of root filesystem, it loads the files from drive to this directory
## / (Root filesystem):
- top level directory
- contains all files required to boot and and run the linux
- include all the required executables and libraries required to boot the remaining filesystem
## Other directories:
1. /bin : it contains binary files and executable files from linux and contains definations of all commands
2. /boot : contains static bootloader and kernal executable and configuration files required to boot a linux computer
3. /dev : linux treat each hardware as a file,so it coutains device files for every hardware devices attached to system
4. /etc : contains the local configurations files for the host of the computer
5. /home : storage for user files ,each user has a subdirectory in /home
6. /lib : contains shared library files that are required for softwares inn bin
7. /media : place to mount external removable media devices
8. /mnt : temporary mount point for regular file systems
9. /root : it is home directory for the root user
10. /tmp : used by the operating system and many programs to store temporary files
11. /usr : shareable , read only files , including executable binaries 