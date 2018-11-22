%define OL system
A=[0 1 0; 0 0 1; -0.4 -4.2 -2.1];
B=[0;0;1];
C=[1 0 0];
D=0;
E_OL=eig(A);

%define Q and R
Q=[1 0 0;0 1 0;0 0 1]; 
Q_alt=[15 0 0;0 11 0;0 0 1]; 
R=0.01;
R2=0.1;
R3=1;

%LQR control
[K, S, E_cl] = lqr(A,B,Q,R);
[K2, S2, E_cl2] = lqr(A,B,Q,R2);
[K3, S3, E_cl3] = lqr(A,B,Q,R3);
[K_alt, S_alt, E_cl_alt] = lqr(A,B,Q_alt,R);
sys_cl = ss(A-B*K,B,C,D);
sys_cl2 = ss(A-B*K2,B,C,D);
sys_cl3 = ss(A-B*K3,B,C,D);
sys_cl_alt = ss(A-B*K_alt,B,C,D);
%initial values and plot the unforced response
x0=[1;1;1];
[y,t,x] = initial(sys_cl, x0);
[y2,t2,x2] = initial(sys_cl2, x0);
[y3,t3,x3] = initial(sys_cl3, x0);
[y_alt,t_alt,x_alt] = initial(sys_cl_alt, x0);
%plot(t,y(:,1),t2,y2(:,1),t3,y3(:,1));
%legend('R','R2','R3')
plot(t,y(:,1),t_alt,y_alt(:,1));
legend('Q','Q_alt');
figure;
%plot U matrix: u = -Kx
u = (-K*x')';
u_alt= (-K_alt*x_alt')';
plot(t,u(:,1),t_alt,u_alt(:,1));
legend('Q','Q_alt');
