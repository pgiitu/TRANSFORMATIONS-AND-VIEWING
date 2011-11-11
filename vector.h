typedef struct
{
float A[4];
}vector;

void homogenize(vector *v);

vector addition(vector *v1,vector *v2);

vector subtraction(vector *v1,vector *v2);

vector cross_product(vector v1,vector v2);

vector normalize(vector v1);

void print_vector(vector v);