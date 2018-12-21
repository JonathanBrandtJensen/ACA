clear all;
format long;
%% Define the system
a=[0 1 ; 0 -6.523];
syms s
b=[0;1];
c=[0.09667 0];
d=0;
tf = 0.09667/(s-6.523);
%find the state feedback equation
syms s k1
A=[0 1;0 -(6.523+k1)]
disp("state feedback equation is:")
det(A)

%find desired poles
syms Omega G
Damp = 0.591155;
Nat_freq = 13.52379;
eqn = 0.50 == 4/(Damp*Omega);
O = solve(eqn, Omega);
ch_eqn = s^2+2*Damp*O*s+O^2;

P = roots([1 16 5192296858534827628530496329220096/28351906945285738051209704560921]);
%equate poles to desired k values
k = place(a, b, P')
%Define feedback gains and new state matrix
aa=a-b*k;
%% define Observer
syms l1 l2 lambda
O_m = [c; c*a];
L = [l1; l2];
A_lc = a-L*c;
I = eye(size(a));
Ells=det(lambda.*I-A_lc);
vpa(Ells);
%% find the l values

l_1 = (2*Damp*(10*Nat_freq)-6.523)/0.09667;
l_2 = ((10*Nat_freq)^2-0.63058*l_1)/0.09667;
L_1 = [l_1; l_2];


