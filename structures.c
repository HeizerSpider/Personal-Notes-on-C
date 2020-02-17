#include "cclass.h"

int main(int argc, char** argv){
    struct Vector_int{
        int x;
        int y;
        int z;
        char name[64];
    };

    struct Vector_int v1;

    v1.x = 2;
    v1.y = 3;
    v1.z = 10;
    sprintf(v1.name, "Vector 1");

    struct Vector_int v2 = {3,5,11,"Vector v2"};

    printf("Values of v1 is x:%d y:%d z:%d name: %s\n", v1.x, v1.y, v1.z, v1.name);
    printf("Values of v2 is x:%d y:%d z:%d name: %s\n", v2.x, v2.y, v2.z, v2.name);
    
    //struct within struct can also be made
    struct Info{
        char name[32];
        int age;
        struct address{
            char area_name[32];
            int house_no;
            char district[32];
        } address;
    };

    struct Info my_Info = {"Alice", 25, "Somapah Road", 8, "Upper Changi"};

    printf("Name: %s, age %d, area name %s, house number %d, district %s\n", my_Info.name, my_Info.age, my_Info.address.area_name, my_Info.address.house_no, my_Info.address.district);

    //STRUCT SIZE IS MOSTLY A SUMMATION OF THE SIZES OF ITS MEMBERS

    //typedef is used to assign alternative variable names to existing dataypes (struct info to Infodata)
    //array of structures possible as well
    
    typedef struct Info Infodata;
    Infodata many_info[3]={{"Alice", 25, "Somapah Road", 8, "Upper Changi"},
                            {"Bob", 22, "Somapah Road", 19, "Upper Changi"},
                            {"Michael", 30, "Another Road", 25, "East Changi"}};

    for (int i = 0; i < 3; i++)
    {
    printf("Name: %s, age %d, area name %s, house number %d, district %s\n", many_info[i].name, many_info[i].age, many_info[i].address.area_name, many_info[i].address.house_no, many_info[i].address.district);
    };
}