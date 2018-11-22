load LEGO_motor_data %loader data til workspace

data = iddata(simout.signals.values,simout1.signals.values,'Ts',0.01);
sys=tfest(data,2,0);%Find overføringsfunktion, 2 poler, 0 nulpunkter
disp(sys.den)
[A,B,C,D]=tf2ss(sys.num, [1 9.8340 0]);
sysss=ss(A,B,C,D);

sysssD=c2d(sysss,0.01); %Discret version af state space model
k=place(sysssD.a,sysssD.b,[0.9 0.7]) %Find gains

%Define feedback gains and new state matrix
aa=A-B*k;
%Plot the response
sys=ss(aa,B,C,D);
step(sys)