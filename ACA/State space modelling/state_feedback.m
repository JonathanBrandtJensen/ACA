%Define the system
a=[0 1 0; 0 0 1; 0 -4 -5];
b=[0; 0;1];
c=[100 20 0];
d=0;

%find the state feedback equation
syms s k1 k2 k3
A=[0 -1 0; 0 0 1; -k1 -(4+k2) -(5+k3)];
disp("state feedback equation is:")
det(A)

%find desired poles
syms Omega G
Damp = 0.55;
eqn = 0.78 == 4/(Damp*Omega);
O = solve(eqn, Omega);
ch_eqn = s^2+2*Damp*O*s+O^2
P = roots([1 400/39 16000000/184041])
%equate poles to desired k values
k = place(a, b, [P' -50])
k_alt = place(a, b, [P' -5])
%Define feedback gains and new state matrix
aa=a-b*k;
aa_alt=a-b*k_alt;
%Plot the response
sys=ss(aa,b,c,d);
sys2= ss(aa_alt,b,c,d);
step(sys, sys2)
