#include <iostream>

void int_to_str(int n, char str[], int& pos) {
    if (n < 10) {
        str[pos] = char('0' + n);
        return;
    }

    int_to_str(n / 10, str, pos);
    pos++;
    str[pos] = char('0' + (n % 10));

}

void rle_encode(const char str[], char rle[])  {
    if (str[0] == '\0') {
        rle[0] = '\0';
        return;
    }

    int pos = 0, counter = 0, i = 0;
    char c = str[0];

    while (str[i] != '\0') {
        if (str[i] != c) {
            int_to_str(counter, rle, pos);
            rle[pos + 1] = c;

            pos += 2;
            c = str[i];
            counter = 1;

        } else {
            counter++;
        }   

        i++;
    }

    int_to_str(counter, rle, pos);
    rle[pos + 1] = c;
    rle[pos + 2] = '\0';

}
    

int main(){
    std::cout << "coco";
    return 0;
}