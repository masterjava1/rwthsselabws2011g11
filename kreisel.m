close all;
clear all;
clc;
for i=1:10;x0(i) = 1E-20;end;
[wi ti] = rkf45(@RHS,0,x0',100,[1E-14 1E-2 1E-2]);
