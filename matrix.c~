#include<stdio.h>
#include "matrix.h"


Matrix add_scalar(Matrix *m,float k)
{
  Matrix m1;
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      m1.A[i][j]=m->A[i][j]+k;
    
    return m1;
}

Matrix Sub_scalar(Matrix *m,float k)
{
  Matrix m1;
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      m1.A[i][j]=m->A[i][j]-k;
    
    return m1;
  
}

void print(Matrix m)
{
  int i,j;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%f  ",m.A[i][j]);
    }
    printf("\n");
  }
}

Matrix multiply(Matrix m1,Matrix m2)
{
  Matrix M;
  int i,j,k;
  float sum;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      sum=0.0;
      for(k=0;k<4;k++)
      {
	sum=sum+m1.A[i][k]*m2.A[k][j];
      }
      M.A[i][j]=sum;
    }
  }
  return M;
}

vector multiply_vector(Matrix *m, vector *v)
{
  int i,j;
  float sum;
  vector V;
  for(i=0;i<4;i++)
  {
    sum=0.0;
    for(j=0;j<4;j++)
    {
      sum=sum+m->A[i][j]*v->A[j];
    }
    V.A[i]=sum;
    
  }
  return V;
}

Matrix transpose(Matrix *m)
{
  Matrix M;
  int i,j;
  for(i=0;i<4;i++)
  {
    //sum=0.0;
    for(j=0;j<4;j++)
    {
      M.A[i][j]=m->A[j][i];
    }
  }
  return M;
}


Matrix inverse(Matrix *m)
{
  //need to write this
  Matrix M;
  return M;
}