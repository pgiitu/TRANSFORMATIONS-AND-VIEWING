#include<stdio.h>
#include"vector.h"

void homogenize(vector *v)
{
 int i;
 for(i=0;i<4;i++)
 {
   v->A[i]=v->A[i]/v->A[3];
 }
}


vector addition(vector *v1,vector *v2)
{
  vector v;
 int i;
 for(i=0;i<4;i++)
 {
   v.A[i]=v1->A[i]+v2->A[i];
 }
  return v;
}


vector subtraction(vector *v1,vector *v2)
{
  vector v;
 int i;
 for(i=0;i<4;i++)
 {
   v.A[i]=v1->A[i]-v2->A[i];
 }
  return v;
}


vector cross_product(vector v1,vector v2)
{
  vector v;
  v.A[0]=v1.A[1]*v2.A[2]-v1.A[2]*v2.A[1];
  v.A[1]=v1.A[2]*v2.A[0]-v1.A[0]*v2.A[2];
  v.A[2]=v1.A[0]*v2.A[1]-v1.A[1]*v2.A[0];
  v.A[3]=1.0;
  return v;
  
}

void print_vector(vector v)
{
  int i;
  for(i=0;i<4;i++)
  {
    printf("%f  ",v.A[i]);
  }
  printf("\n");
}

vector normalize(vector v1)
{
  float k=sqrt(v1.A[0]*v1.A[0]+v1.A[1]*v1.A[1]+v1.A[2]*v1.A[2]);
  vector v;
  v.A[0]=v1.A[0]/k;
  v.A[1]=v1.A[1]/k;
  v.A[2]=v1.A[2]/k;
  v.A[3]=1.0;
  return v;
}