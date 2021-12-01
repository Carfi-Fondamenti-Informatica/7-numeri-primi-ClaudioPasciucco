#include "lib.h"


bool Primo (int i, int n){
    if (i == n){
        return true;
    } else if (n==1) {
        return false;
    } else if (n%i==0) {
        return false;
    } else {
        return Primo(i+1,n);
            }
}
