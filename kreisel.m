close all;
clear all;
clc;
% x = [my; lambda; ny; xi; omikron; theta; phi; psi; xc; yc]
x0 = [0 0 250 0 0 0.1 0 0 0 0];

% [wi ti] = rkf45(@RHS,0,x0',0.25,[1E-16 1E-2 1E-6]);
[wi ti] = rkv56(@RHS,0,x0',0.2,[1E-8 1E-4 1E-6]);