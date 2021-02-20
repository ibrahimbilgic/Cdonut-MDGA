#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include <unistd.h>

void makeDonutReverse(){
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
   
    for(;;) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = cos(i);
                float d = sin(j);
                float e = cos(A);
                float f = cos(j);
                float g = sin(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = sin(i);
                float m = sin(B);
                float n = cos(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = "424242424242"[N > 0 ? N : 0]; // Answer to the Ultimate 
                                            // Question of Life, The Universe, and Everything
                }
            }
        }

        printf("\033[0;37m"); // to change color
        
        printf("\x1b[H");
        for(k = 1761; k > 0; k--) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }
}

int main(void) {

    makeDonutReverse(); // M D G A!
    
    return 0;
}

