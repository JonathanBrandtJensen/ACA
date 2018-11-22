%% Example state feedback + integral control design
%% Define the system
a=[0 1;-7 -9];
b=[0;1];
c=[4 1];
d=0;
%% Define requirements and desired location of poles
OS=10;% desired overshoot in percent
Ts=2; %desired settling time in seconds
zeta=-log(OS/100)/sqrt(pi^2+(log(OS/100)^2)) %desired damping ratio
zeta_alt = zeta;
wn=4/zeta_alt/Ts; %desired natural frequency
s=tf('s');
ch_eqn=s^2+2*zeta_alt*wn*s+wn^2;
[p,z,gain] = zpkdata(ch_eqn);
poles=cell2mat(p)'; %desired 2nd order poles for the closed loop system
%p3=20*real(poles(1));% desired location for 3rd pole
p3=-4;
pp=[poles p3];
%% Find feedback gains for the desired poles
a_new=[a [0;0];-c 0]; % A matrix after adding an extra state
b_new=[b;0]; % B matrix after adding an extra state
k=place(a_new,b_new,pp);
K=[k(1) k(2)];
Ke=-k(3);
%% Define closed loop system
a_cl=[a-b*K b*Ke;-c 0];
b_cl=[0;0;1];
c_cl=[c 0];
sys_cl=ss(a_cl,b_cl,c_cl,d); %closed loop system
step(sys_cl)% unit step response of the system 