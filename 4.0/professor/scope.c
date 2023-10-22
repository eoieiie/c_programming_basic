#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, z = 30;
    printf("%3d%3d%3d\n", x, y, z); // 10, 20, 30

    {
        int y = 40;
        double z = 50.0;
        printf("%3d%3d%5.1f\n", x, y, z); //10, 40, 50.0
        x = y; //스코프 안에서 x가 정의되지 않았기 때문에 원래의 x값 40으로 변경

        {
            int z;
            z = y; 
            printf("%3d%3d%3d\n", x, y, z); //40, 40, 40
        }
        
        printf("%3d%3d%5.1f\n", x, y, z); //40, 40, 50.0
    }

    printf("%3d%3d%3d\n", x, y ,z); //40, 20, 30
}

