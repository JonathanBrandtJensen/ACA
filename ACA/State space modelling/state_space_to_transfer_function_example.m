A= [1 2; -2 1];
B= [1; 0];
C= [1 1];
D= 0;
[b, a] = ss2tf(A,B,C,D);

disp('tf is:')
disp(b)
disp(a)