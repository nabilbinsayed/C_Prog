#include <stdio.h>

struct cmplx {
  float real;
  float img;
};

struct cmplx add(struct cmplx c1, struct cmplx c2)
{
  struct cmplx ans;
  ans.real = c1.real + c2.real;
  ans.img = c1.img + c2.img;
  return ans;
}

int main()
{
  struct cmplx c1, c2, c3, ans;
  printf("Enter real part of first complex number: ");
  scanf("%f", &c1.real);
  printf("Enter imaginary part of first complex number: ");
  scanf("%f", &c1.img);

  printf("Enter real part of second complex number: ");
  scanf("%f", &c2.real);
  printf("Enter imaginary part of second complex number: ");
  scanf("%f", &c2.img);
  c3 = add(c1, c2);
  printf("%.2f+%.2fi\n", c3.real, c3.img);
}