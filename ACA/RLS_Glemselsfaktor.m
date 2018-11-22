%% funktion, der bruger rekursionsformen og RLS algoritmen.
clear all;
close all;
% Find den diskrete overføringsfunktion
load datafil %loader data til workspace

data = iddata(output',Step','Ts',0.01);
sys=tfest(data,2,0);%Find overføringsfunktion, 2 poler, 0 nulpunkter

% Find de diskrete parametre
sysD=c2d(sys,0.01); %samplingstiden er 0.01s

%Opskriv regressionsformen
Theta=[sysD.den(2:end) sysD.num(2:end)];% Parameter vektor

%Initializer signalvektor
Phi_y=zeros(1,length(sysD.den)-1);% vælg mængden af a'er
Phi_u=zeros(1,length(sysD.num)-1);% vælg mængden af b'er
Phi=[Phi_y Phi_u];% konkataner a'er og b'er i en vektor

%Implementation af det digitale filter
for n = 2:length(Step)% step=output 
    Phi_y = [-output(n-1) Phi_y(1:end-1)];%indsæt sample i y
    Phi_u = [Step(n) Phi_u(1:end-1)];%indsæt sample i u
    Phi = [Phi_y Phi_u];%konkataner
end

%% Implementer en Online RLS med glemselsfaktor form
ThetaHat = Theta';
p = eye(4);
lambda = 0.98;
for n =1:30
Q=p/(lambda+Phi*p*Phi');
p=1/lambda*(p-(p*Phi'*Phi*p)/(lambda+Phi*p*Phi'));
k=Q*Phi'; 
ThetaHat = ThetaHat+k*(output(n)-ThetaHat'*Phi');
ThetaFacit(n,:) = ThetaHat;
n_vector(n) = n;
end

%% plot udviklingen af parametre som en funktion af n
 
plot(n_vector,ThetaFacit(:,1))