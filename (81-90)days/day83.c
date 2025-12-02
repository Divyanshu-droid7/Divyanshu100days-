#include <stdio.h>

int main() {
    enum Months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    int days;

    for (int m = JAN; m <= DEC; m++) {
        switch(m) {
            case JAN: days = 31; break;
            case FEB: days = 28; break;
            case MAR: days = 31; break;
            case APR: days = 30; break;
            case MAY: days = 31; break;
            case JUN: days = 30; break;
            case JUL: days = 31; break;
            case AUG: days = 31; break;
            case SEP: days = 30; break;
            case OCT: days = 31; break;
            case NOV: days = 30; break;
            case DEC: days = 31; break;
        }
        printf("Month %d has %d days\n", m, days);
    }

    return 0;
}
