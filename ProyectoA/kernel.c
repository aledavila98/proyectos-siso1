int main() {
    char line1[23];
    char line2[48];
    char line3[20];
    char line4[26];
    char line5[80];
    unsigned int c;
    unsigned int array_pos;
    unsigned int pos;
 
    line1[0] = 'S';
    line1[1] = 'I';
    line1[2] = 'S';
    line1[3] = 'T';
    line1[6] = 'E';
    line1[7] = 'M';
    line1[8] = 'A';
    line1[9] = 'S';
    line1[10] = ' ';
    line1[11] = 'O';
    line1[12] = 'P';
    line1[13] = 'E';
    line1[14] = 'R';
    line1[15] = 'A';
    line1[16] = 'T';
    line1[17] = 'I';
    line1[18] = 'V';
    line1[19] = 'O';
    line1[20] = 'S';
    line1[21] = ' ';
    line1[22] = 'I';

    line2[0] = 'U';
    line2[1] = 'N';
    line2[2] = 'I';
    line2[3] = 'V';
    line2[4] = 'E';
    line2[5] = 'R';
    line2[6] = 'S';
    line2[7] = 'I';
    line2[8] = 'D';
    line2[9] = 'A';
    line2[10] = 'D';
    line2[11] = ' ';
    line2[12] = 'T';
    line2[13] = 'E';
    line2[14] = 'C';
    line2[15] = 'N';
    line2[16] = 'O';
    line2[17] = 'L';
    line2[18] = 'O';
    line2[19] = 'G';
    line2[20] = 'I';
    line2[21] = 'C';
    line2[22] = 'A';
    line2[23] = ' ';
    line2[24] = 'C';
    line2[25] = 'E';
    line2[26] = 'N';
    line2[27] = 'T';
    line2[28] = 'R';
    line2[29] = 'O';
    line2[30] = 'A';
    line2[31] = 'M';
    line2[32] = 'E';
    line2[33] = 'R';
    line2[34] = 'I';
    line2[35] = 'C';
    line2[36] = 'A';
    line2[37] = 'N';
    line2[38] = 'A';
    line2[39] = ' ';
    line2[40] = '(';
    line2[41] = 'U';
    line2[42] = 'N';
    line2[43] = 'I';
    line2[44] = 'T';
    line2[45] = 'E';
    line2[46] = 'C';
    line2[47] = ')';

    line3[0] = '2';
    line3[1] = '1';
    line3[2] = '6';
    line3[3] = '2';
    line3[4] = '1';
    line3[5] = '0';
    line3[6] = '6';
    line3[7] = '2';
    line3[8] = ' ';
    line3[9] = '-';
    line3[10] = ' ';
    line3[11] = 'A';
    line3[12] = 'l';
    line3[13] = 'e';
    line3[14] = 'j';
    line3[15] = 'a';
    line3[16] = 'n';
    line3[17] = 'd';
    line3[18] = 'r';
    line3[19] = 'o';
    
    line4[0] = 'M';
    line4[1] = 'i';
    line4[2] = ' ';
    line4[3] = 'p';
    line4[4] = 'r';
    line4[5] = 'i';
    line4[6] = 'm';
    line4[7] = 'e';
    line4[8] = 'r';
    line4[9] = ' ';
    line4[10] = 's';
    line4[11] = 'i';
    line4[12] = 's';
    line4[13] = 't';
    line4[14] = 'e';
    line4[15] = 'm';
    line4[16] = 'a';
    line4[17] = 'o';
    line4[18] = 'p';
    line4[19] = 'e';
    line4[20] = 'r';
    line4[21] = 'a';
    line4[22] = 't';
    line4[23] = 'i';
    line4[24] = 'v';
    line4[25] = 'o';
    
    for (c = 0; c < 80; c++) {
        line5[c] = '-';
    }

    for (pos = 0; pos < 2000; pos++) {
        if (pos < 80) {
            if (pos < 28 || pos > 51 ) {
                array_pos = 0;
                putInMemory(0xB000, 0x8000 + (2*pos), ' ');
            } else {
                putInMemory(0xB000, 0x8000 + (2*pos), line1[array_pos]);
                putInMemory(0xB000, 0x8001 + (2*pos), 0x7);
                array_pos++;
            }
        } else if (pos < 160) {
            if (pos < 96 || pos > 144) {
                array_pos = 0;
                putInMemory(0xB000, 0x8000 + (2*pos), ' ');
            } else {
                putInMemory(0xB000, 0x8000 + (2*pos), line2[array_pos]);
                putInMemory(0xB000, 0x8001 + (2*pos), 0x7);
                array_pos++;
            }
        } else if (pos < 240) {
            if (pos < 190 || pos > 210) {
                array_pos = 0;
                putInMemory(0xB000, 0x8000 + (2*pos), ' ');
            } else {
                putInMemory(0xB000, 0x8000 + (2*pos), line3[array_pos]);
                putInMemory(0xB000, 0x8001 + (2*pos), 0x7);
                array_pos++;
            }
        } else if (pos < 320) {
            if (pos < 267 || pos > 293) {
                array_pos = 0;
                putInMemory(0xB000, 0x8000 + (2*pos), ' ');
            } else {
                putInMemory(0xB000, 0x8000 + (2*pos), line4[array_pos]);
                putInMemory(0xB000, 0x8001 + (2*pos), 0x7);
                array_pos++;
            }
        } else if (pos < 400) {
            putInMemory(0xB000, 0x8000 + (2*pos), line5[array_pos]);
            putInMemory(0xB000, 0x8001 + (2*pos), 0x7);
            array_pos++;
        }
    }

    return 0; 
}