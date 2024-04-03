#include <stdio.h>

int countLetter(char* sentence, char letter) {
    int count = 0;
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == letter) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char sentence[100];
    char letter;

    printf("Введите предложение: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Введите букву: ");
    scanf("%c", &letter);

    int letterCount = countLetter(sentence, letter);

    printf("Количество появлений буквы '%c' в предложении: %d\n", letter, letterCount);

    return 0;
}