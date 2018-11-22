%% funktion, der bruger rekursionsformen og RLS algoritmen.
% Find den diskrete overf�ringsfunktion
load LEGO_motor_data %loader data til workspace

data = iddata(simout.signals.values,simout1.signals.values,'Ts',0.01);
sys=tfest(data,2,0);%Find overf�ringsfunktion, 2 poler, 0 nulpunkter

% Find de diskrete parametre
sysD=c2d(sys,0.01); %samplingstiden er 0.01s

%Opskriv regressionsformen
Theta=[sysD.den(2:end) sysD.num(2:end)];% Parameter vektor
%her fra og op er et eksempel p� en facit liste.
%% Find step svar af overf�ringsfunktion

Step=[zeros(1, 10), ones(1, 90)];% Lav et step input, burde findes i datafil

%Initializer signalvektor
Psi_y=zeros(1,length(sysD.den)-1);% v�lg m�ngden af a'er
Psi_u=zeros(1,length(sysD.num)-1);% v�lg m�ngden af b'er
Psi=[Psi_y Psi_u];% konkataner a'er og b'er i en vektor
output(1)=0;% initierer matrixen s� matlab indexering passer


%Initializering PsiPsi

PsiPsi = Psi'*Psi;% Psi transposeret med sig selv
PsiY = Psi'.*output(1); % 

%Implementation af det digitale filter
for n = 2:length(Step)% step=output 
    Psi_y = [-output(n-1) Psi_y(1:end-1)];%inds�t sample i y
    Psi_u = [Step(n) Psi_u(1:end-1)];%inds�t sample i u
    Psi = [Psi_y Psi_u];%konkataner
    output(n) = squeeze(Theta)*Psi';%find n�ste output via facit fra tidligere, ignorer
    
    %The RLS algorithm
    PsiY = PsiY+Psi'.*output(n); %opdater vektor
    PsiPsi = PsiPsi+Psi'*Psi; %opdater matrixe
end

%We find the estimate of the RLS algorithm for Theta 
Thetahat = (PsiPsi)^(-1)*PsiY;