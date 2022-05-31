#include<stdio.h>
#include<string.h>
struct vectors{int x; int y; int z;};
void prnt(struct vectors v){
    printf("%d %d %d",v.x,v.y,v.z);
    }
struct vectors vectoradd(struct vectors v1,struct vectors v2){
    struct vectors sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;
    return sum;}
int datproduct(struct vectors v1, struct vectors v2){
    struct vectors sum = vectoradd(v1,v2);
    return sum.x+sum.y+sum.z;}
float distance(struct vectors v1, struct vectors v2)
{ return sqrt(pow(v1.x-v2.x,2)+pow(v1.y-v2.y,2)+pow(v1.z-v2.z,2));
}
float deter(struct vectors v1, struct vectors v2, struct vectors v3){
return ((v1.x*v2.y*v3.z)+(v2.x*v3.y*v1.z)+(v3.x*v1.y*v2.z))-((v1.z*v2.y*v3.x)+(v2.z*v3.y*v1.x)+(v3.z*v1.y*v2.x));
}

int main(int argc, char *argv[])
{   
    struct vectors v1,v2,v3;
    v1.x=1;
    v1.y=2;
    v1.z=2;
    v2.x=-1;
    v2.y=0;
    v2.z=2;
    v3.x=0;
    v3.y=0;
    v3.z=1;
    prnt(v1);
    prnt(vectoradd(v1,v2));
    printf("\n %d",datproduct(v1,v2));
    printf("\n distance: %f",distance(v1,v2));
    printf("\n deter: %f", deter(v1,v2,v3));
}