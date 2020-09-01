#include "meadSong.h"

using namespace std;
void meadSong (){
    for(int i = 99; i > -1; i--){
        if(i > 1)
            cout << i << " botteles of the mead on the wall," << i << " bottles of mead. \nTake one down and pass it around, " << i - 1 << " bottles of mead on the wall.\n\n";
        if(i == 1)
            cout << i << " bottle of the mead on the wall," << i << " bottle of mead. \nTake it down and pass it around, " << " 1 bottle of mead on the wall.\n\n";
        if(i < 1)
            cout << "No more bottles of the mead on the wall, no more bottles of mead. \nGo to the store and buy some more, " << "99 bottles of mead on the wall.\n";
    }
}
