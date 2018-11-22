%Define the system
a=[0 1; -7 -9];
b=[0;1];
c=[4 1];
d=0;

%find the state feedback equation
syms s k1 k2
A=[0 -1;-(7+k1) -(9+k2)];
disp("state feedback equation is:")
det(A)

% Define requirements and desired location of poles
OS=10;% desired overshoot in percent
Ts=2; %desired settling time in seconds
zeta=-log(OS/100)/sqrt(pi^2+(log(OS/100)^2)); %desired damping ratio
wn=4/zeta/Ts; %desired natural frequency
s=tf('s');
ch_eqn=s^2+2*zeta*wn*s+wn^2;
[p,z,gain] = zpkdata(ch_eqn);
poles=cell2mat(p)' %desired 2nd order poles for the closed loop system
%equate poles to desired k values
k = place(a, b, poles)
%k_alt = place(a, b, poles)
%Define feedback gains and new state matrix
aa=a-b*k;
%aa_alt=a-b*k_alt;
%Plot the response
sys=ss(aa,b,c,d);
%sys2= ss(aa_alt,b,c,d);
step(sys)