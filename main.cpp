#include <iostream>
using namespace std;

bool createPupyrka(bool pupyrka[12][12]){
    for(int i = 0; i < 12;i++){
        for(int y = 0; y < 12;y++){
            pupyrka[i][y] = true;
        }
    }
    return pupyrka;
}

bool popPupyrka(int x, int y, bool pupyrka[12][12]){
    for (int i = 0; i <= y; i++) {
        for (int j = x; j <= y; j++) {
            if(pupyrka[j][i]){
                cout << "Pop!";
                pupyrka[j][i] = false;
            }
        }
    }
    return pupyrka;
}

bool checkPupyrka(bool pupyrka[12][12], bool integrity){
    for(int i = 0; i < 12; i++){
        for(int y = 0; y < 12; y++){
            if(pupyrka[y][i]){
                integrity = true;
            }
            else {
                integrity = false;
            }
        }
    }
    return integrity;
}



int main() {
bool pupyrka [12][12];
int x, y;
bool integrity = true;

createPupyrka(pupyrka);

while(checkPupyrka(pupyrka, integrity)){

    for(;;){
        cout << "Enter the coordinate x";
        cin >> x;
        cout << "Enter the coordinate y";
        cin >> y;
        if ((x < 12 && x >= 0) && (y < 12 && y >= 0)){
            break;
        } else {
            cout << "The coordinate/s was entered incorrectly! Please try again.";
        }
    }

    popPupyrka(x,y,pupyrka);

    for(int i = 0; i < 12; i++){
        for(int y = 0; y < 12;y++){
            if(pupyrka[y][i]) {
                cout << 'o';
            } else {
                cout << 'x';
            }
        }
        cout << endl;
    }
}
}
