%define state matrixes
a=[-1 1 0; 0 1 0; 0 0 2];
b=[0; 0;1];
c=[1 0 0];
d=0;
%find controlability matrix
cm = ctrb(a,b);
Rank = rank(cm)
%check hvis n = Rank. n er lig med antallet af x-vektorer(eller states) i
%systemet