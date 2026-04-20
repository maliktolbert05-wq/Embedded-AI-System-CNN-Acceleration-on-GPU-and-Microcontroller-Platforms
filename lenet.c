#include "lenet.h"

static int out[10];

void run_inference(unsigned char img[28][28]){
    for(int i=0;i<10;i++) out[i]=0;

    for(int i=0;i<28;i++){
        for(int j=0;j<28;j++){
            out[(i+j)%10]+=img[i][j];
        }
    }
}

int predict(){
    int m=0,idx=0;
    for(int i=0;i<10;i++){
        if(out[i]>m){
            m=out[i];
            idx=i;
        }
    }
    return idx;
}
