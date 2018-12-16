    clear all;

load('MotorTest3_80.mat', 'simout')
x= simout.signals.values;
x2= simout.time;
load('MotorTest1_60.mat', 'simout')
t= simout.signals.values;
t2= simout.time;
load('MotorTest2_10.mat', 'simout')
h= simout.signals.values;
h2= simout.time;
load('MotorTest4_40.mat', 'simout')
f= simout.signals.values;
f2= simout.time;

% for i=2:(length(x))
%     p(i-1) = trapz(x(1:i))
% end
% p = [0 p];
plot(x2, x);
hold on
plot(t2, t);
plot(h2, h);
plot(f2, f);
