#include "walletManager.h"

Wallet *createWallet (const int septims) {
    Wallet* wal = new Wallet;
    wal->septims = septims;
    return wal;
}

void destroyWallet (Wallet *wal) {
    delete (wal);
}

Wallet *createWallets (const int amount) {
    return new Wallet [amount];
}

void destroyWallets (Wallet *wals) {
    delete [] (wals);
}
