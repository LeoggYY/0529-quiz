#include <stdio.h>
int isprime(int n)//專門判斷是否為質數用的
{
 int k;
 for(k=2; k<n; k++)
  if(n%k==0) break;
  
 return k==n;
}
int main()
{
 int n, n1, n2;
 while(scanf("%d", &n)!=EOF)
 {
  if(isprime(n))//第一先判斷這個值本身是不是質數
  {
   n1=n;
   n2=0;
   while(n1)//交換數字的位置
   {
    n2=n2*10+n1%10;
    n1/=10;
   }
  if(n2!=n && isprime(n2))//如果交換完還是質數且跟交換前的數字不一樣的話
   printf("%d is emirp.\n", n);
  else //只符合一開始是質數
   printf("%d is prime.\n", n);
  }
  else printf("%d is not prime.\n", n);
 }
}
