// 
// Rotate an ASCII art image - by Leon Pajk
// 
// You may use all or any part of the following code as long as you agree 
// to the Creative Commons Attribution 2.0 UK: England & Wales license.
// http://creativecommons.org/licenses/by/2.0/uk/
// 
#define F(i,x)for(i=a*x-!x;x?1+--i:a-++i;){
#define I(x,r)p=(t=index(r,*p))&&d&x?t+x:p;
main(a,b,d,i,j){
  scanf("%d\n",&b),a=b++;
  char*p,*s,*t,*y="|-|\\/\\P(d)P([{]}[{M6W9M6";
  asprintf(&t,"%%%dmc%%d",a*b);scanf(t,&s,&d);d/=90;
  F(i,(d/2))
    F(j,!!(-d&2))
      p=s+(d&1?i+b*j:i*b+j);
      I(d,"V<^>V<^")
      I(1,y)
      I(02,y+6)
      putchar(*p);
    }
    puts("");
  }
}
