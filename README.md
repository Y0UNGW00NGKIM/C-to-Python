# C-to-Python

Various examples and short exercises on bridging Python and compiled code
  
Project 2a.
Examples above using pure Python and C reported 11.6 / 1.09 s, where my numpy version performed in 0.917s. (This was ran using python kernel, however, as due to rivanna maintenance from 6am 10/14 to 6am 10/15, I could not connect to 56xx kernel. Also couldn't load 56xx module on Rivanna). I achieved the speedup by vectorizing computation using streaming batches to avoid memory pressure. 

Projec 3.
Had to install cppyy by myself and include it in the shell, as "connecting to phys56xx" kernel was unavailable at the time of completing this project.
+ Due to recurring issue with the kernel 56xx, won't be using cppyy but ctype instead. (I believe it's due to the maintenance on Rivanna / Afton, it says my permission to access source file is deined as well)
+ Couldn't connect to 56xx environment on Rivanna terminal / desktop, couldn't connect to 56xx kernel on Jupiter laptop.
+ Had to add extern "C" and load it in python with .CDLL call. Although the code uses count3d_c, it is actually count3d_cpp. Please check mycpplib.cpp and .h for more details on this
+ 