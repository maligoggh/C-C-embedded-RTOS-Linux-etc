int switch_version(int x) {
    switch (x) {
        case 0: return 10;
        case 1: return 20;
        case 2: return 30;
        case 3: return 40;
        case 4: return 50;
        case 5: return 60;
        case 6: return 70;
        case 7: return 80;
        case 8: return 90;
        case 9: return 100;
        case 10: return 110;
        case 11: return 120;
        case 12: return 130;
        case 13: return 140;
        case 14: return 150;
        default: return 0;
    }
}

int ifelse_version(int x) {
    if (x == 0) return 10;
    else if (x == 1) return 20;
    else if (x == 2) return 30;
    else if (x == 3) return 40;
    else if (x == 4) return 50;
    else if (x == 5) return 60;
    else if (x == 6) return 70;
    else if (x == 7) return 80;
    else if (x == 8) return 90;
    else if (x == 9) return 100;
    else if (x == 10) return 110;
    else if (x == 11) return 120;
    else if (x == 12) return 130;
    else if (x == 13) return 140;
    else if (x == 14) return 150;
    else return 0;
}