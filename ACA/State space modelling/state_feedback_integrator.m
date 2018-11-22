%Define the system

a=[0 1; -7 -9];
b=[0;1];
c=[4 1];
d=0;
%define the extended system with integrator
syms s k1 k2 ke
a_ex=[0-(0*k1) 1-(0*k2) 0*ke; -7-(1*k1) -9-(1*k2) 1*ke; -4 -1 0]
%find the state feedback equation
A=[0 -1; -(7+k1) -(9+k2)];
disp("state feedback equation is:")
det(A)

%find desired poles
syms Omega G
Damp = 0.6;
eqn = 2 == 4/(Damp*Omega);
O = solve(eqn, Omega);
ch_eqn = s^2+2*Damp*O*s+O^2
P = roots([1 4 100/9])
%equate poles to desired k values
k = place(a, b, P)
k_alt = place(a, b, P)
%Define feedback gains and new state matrix
aa=a-b*k;
aa_alt=a-b*k_alt;
%Plot the response
sys=ss(aa,b,c,d);
sys2= ss(aa_alt,b,c,d);
step(sys)