#include<iostream>
#include <stdio.h>
using namespace std;
char staticKey;

void CycleKey(char data)
{
  

    staticKey += data;

    if (staticKey & 0x80)
    {
        staticKey ^= 0xD8;
    }
    else
    {
        staticKey += 0x8B;
    }
}

void ResetCipher(const char * key)
{
    staticKey = 0;

    while (*key)
    {
        CycleKey(*key);
        key++;
    }
}

void Encrypt(const char * plaintext, char * encrypted)
{
    while (*plaintext)
    {
        *encrypted = *plaintext + staticKey;

        CycleKey(*encrypted);

        encrypted++;
        plaintext++;
    }

    *encrypted = '\0';
}

void Decrypt(char * plaintext, const char * encrypted)
{
    while (*encrypted)
    {
        *plaintext = *encrypted - staticKey;

        CycleKey(*encrypted);

        plaintext++;
        encrypted++;
    }

    *plaintext = '\0';
}

int main(void)
{
    char * key = "123";
    char * message = "Hello, World!";
    char encrypted[20];
    char decrypted[20];

    ResetCipher(key);
    Encrypt(message, encrypted);

    ResetCipher(key);
    Decrypt(decrypted, encrypted);
    cout<<"output: "<<decrypted<<" \n";
   

    return 0;
}


