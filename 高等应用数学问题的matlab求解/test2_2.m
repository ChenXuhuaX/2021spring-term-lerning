syms x s
f=x^5+3*x^4+4*x^3+2*x^2+3*x+6;
f1=subs(f,x,(s-1)/(s+1));
f2=simplify(f1);
expand(f2)
latex(f1)