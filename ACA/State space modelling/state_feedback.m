%Define the system
a=[0 1; -6.523 -1];
b=[0;1];
c=[0.09667 0];
d=0;

%find the state feedback equation
syms s k1 k2
A=[0 1; --(6.523+k1) -(1+k2)];
disp("state feedback equation is:")
det(A)

%find desired poles
syms Omega G
OS=10;% desired overshoot in percent
Ts=0.5; %desired settling time in seconds
Damp=-log(OS/100)/sqrt(pi^2+(log(OS/100)^2)); %desired damping ratio
eqn = 0.78 == 4/(Damp*Omega);
O = solve(eqn, Omega);
ch_eqn = s^2+2*Damp*O*s+O^2
P = roots([400/39 50706024009129176059868128215040000/673800865544790702006676541814609])
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
