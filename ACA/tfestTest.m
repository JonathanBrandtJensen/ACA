
%% motor test 1
load('MotorTest1_60');
x1= simout.signals.values;

data1 = iddata(x1,(ones(1,length(x1)).*60)',0.1);
%% motor test 2
load('MotorTest2_10');
x2= simout.signals.values;
data2 = iddata(x2,(ones(1,length(x2)).*60)',0.1);
%% motor test 3
load('MotorTest3_80');
x3 = simout.signals.values;
data3 = iddata(x3,(ones(1,length(x3)).*60)',0.1);
%% motor test 4
load('MotorTest4_40');
x4= simout.signals.values;
data4 = iddata(x4,(ones(1,length(x4)).*60)',0.1);


%% create transfer functions
sys1=tfest(data1,1,0)
sys2=tfest(data2,1,0)
sys3=tfest(data3,1,0)
sys4=tfest(data4,1,0)