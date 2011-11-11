#include <GL/glut.h>
#include<math.h>
#include "transformation.h"
//#include "matrix.h"
/*
vector scale(Matrix *sc,vector *v)
{
  return multiply_vector(sc,v);
}
*/
Matrix return_translate(float x,float y,float z)
{
  //Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  Matrix M;
  float array[4][4]={{1.0,0.0,0.0,x},{0.0,1.0,0.0,y},{0.0,0.0,1.0,z},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      M.A[i][j]=array[i][j];
    }
  }
  return M;
}


vector translate(vector *v,float x,float y, float z)
{
  /*
  Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  float array[4][4]={{1.0,0.0,0.0,x},{0.0,1.0,0.0,y},{0.0,0.0,1.0,z},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      M->A[i][j]=array[i][j];
    }
  }
  */
    Matrix m1=return_translate(x,y,z);

    return multiply_vector(&m1,v);
}

Matrix return_rotate_x(float theta)
{
  //Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  Matrix M;
  float array[4][4]={{1.0,0.0,0.0,0.0},{0.0,cos(theta),-sin(theta),0.0},{0,sin(theta),cos(theta),0.0},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M.A[i][j]=array[i][j];

  return M;
}

vector rotate_x(vector *v,float theta)
{
  // right now it i doing rotation along Y i need to fix this*/ 
  /*
  Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  float array[4][4]={{1.0,0.0,0.0,0.0},{0.0,cos(theta),-sin(theta),0.0},{0,sin(theta),cos(theta),0.0},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M->A[i][j]=array[i][j];
    */
    Matrix m1=return_rotate_x(theta);

  return multiply_vector(&m1,v);
 }
 


Matrix return_rotate_y(float theta)
{
  //Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  Matrix M;
  float array[4][4]={{cos(theta),0.0,sin(theta),0.0},{0.0,1.0,0.0,0.0},{-sin(theta),0.0,cos(theta),0.0},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M.A[i][j]=array[i][j];

  return M;
}


vector rotate_y(vector *v,float theta)
{
/*    Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  float array[4][4]={{cos(theta),0.0,sin(theta),0.0},{0.0,1.0,0.0,0.0},{-sin(theta),0.0,cos(theta),0.0},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M->A[i][j]=array[i][j];
*/    
  Matrix m1=return_rotate_y(theta);
  return multiply_vector(&m1,v);
}

Matrix return_rotate_z(float theta)
{
  //Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  Matrix M;
  float array[4][4]={{cos(theta),-sin(theta),0.0,0.0},{sin(theta),cos(theta),0.0,0.0},{0.0,0.0,1.0,0.0},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M.A[i][j]=array[i][j];

  return M;
}

vector rotate_z(vector *v,float theta)
{
  /*
    Matrix *M=(Matrix*)malloc(sizeof(Matrix));
  float array[4][4]={{cos(theta),-sin(theta),0.0,0.0},{sin(theta),cos(theta),0.0,0.0},{0.0,0.0,1.0,0.0},{0.0,0.0,0.0,1.0}};
  int i,j;
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M->A[i][j]=array[i][j];
*/
  Matrix m1=return_rotate_z(theta);
  return multiply_vector(&m1,v);
}


vector create_scale_Matrix(vector *v,float factor_x,float factor_y,float factor_z)
{
  Matrix M;
  int i,j;
  float array[4][4]={{factor_x,0.0,0.0,0.0},{0.0,factor_y,0.0,0.0},{0.0,0.0,factor_z,0.0},{0.0,0.0,0.0,1.0}};
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      M.A[i][j]=array[i][j];
    }
  } 
  return multiply_vector(&M,v);
}

Matrix return_scale_Matrix(float factor_x,float factor_y,float factor_z)
{
  Matrix M;
  int i,j;
  float array[4][4]={{factor_x,0.0,0.0,0.0},{0.0,factor_y,0.0,0.0},{0.0,0.0,factor_z,0.0},{0.0,0.0,0.0,1.0}};
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      M.A[i][j]=array[i][j];
    }
  } 
  return M;
}

Matrix create_translate_Matrix(float x, float y, float z)
{
  Matrix M;
  int i,j;
  float array[4][4]={{1.0,0.0,0.0,x},{0.0,1.0,0.0,y},{0.0,0.0,1.0,z},{0.0,0.0,0.0,1.0}};
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      M.A[i][j]=array[i][j];
  return M;
}
