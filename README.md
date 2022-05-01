## Information-Security-Practicals

### 1. Implement the error correcting code.
### 2. Implement the error detecting code.
### 3. Implement caeser cipher substitution operation.
### 4. Implement monoalphabetic and polyalphabetic cipher substitution operation.
### 5. Implement playfair cipher substitution operation.
### 6. Implement hill cipher substitution operation.
### 7. Implement rail fence cipher transposition operation.
### 8. Implement row transposition cipher transposition operation.
### 9. Implement product cipher transposition operation.
### 10. Illustrate the Ciphertext only and Known Plaintext attacks.
### 11. Implement a stream cipher technique


#### ANSWER-10 
#### CipherText-only Attack
##### In cryptography, a ciphertext-only attack (COA) or known ciphertext attack is an attack model for cryptanalysis where the attacker is assumed to have access only to a set of ciphertexts.The attack is completely successful if the corresponding plaintexts can be deduced, or even better, the key. The ability to obtain any information at all about the underlying plaintext is still considered a success. For example, if an adversary is sending ciphertext continuously to maintain traffic-flow security, it would be very useful to be able to distinguish real messages from nulls. Even making an informed guess of the existence of real messages would facilitate traffic analysis. Every modern cipher attempts to provide protection against ciphertextonly attacks. The vetting process for a new cipher design standard usually takes many years and includes exhaustive testing of large quantities of ciphertext for any statistical departure from random noise. Encryption Standard process. Also, the field of steganography evolved, in part, to develop methods like mimic functions that allow one piece of data to adopt the statistical profile of another. Nonetheless poor cipherusage or reliance on home-grown proprietary algorithms that have notbeen subject to thorough scrutiny has resulted in many computer-age encryption systems that are still subject to ciphertext-only attack.
 
#### Known Plaintext Attack
##### The known-plaintext attack (KPA) or crib is an attack model for cryptanalysis where the attacker has samples of both the plaintext and its encrypted version (ciphertext), and is at liberty to make use of them to reveal further secret information such as secret keys and code books. The term "crib" originated at Bletchley Park, the British World War II decryption operation. Classical ciphers are typically vulnerable to known-plaintext attack. For example, a Caesar cipher can be solved using a single letter of corresponding plaintext and ciphertext to decrypt entirely. A general monoalphabetic substitution cipher needs several character pairs and some guessing if there are fewer than 26 distinct pairs. Modern ciphers such as Advanced Encryption Standard are not susceptible to known-plaintext attacks.
