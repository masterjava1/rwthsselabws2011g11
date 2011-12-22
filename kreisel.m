close all;
clear all;
clc;
% x = [my; lambda; ny; xi; omikron; theta; phi; psi; xc; yc]
x0 = [0 0 250 0 0 0.1 0 0 0 0];
tic;
[wi ti] = rkf45(@RHS,0,x0',0.23,[1E-14 1E-2 1E-8]);
runtime = toc;