#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char user_c, char computer_c) {
    if (user_c == computer_c)
        return -1;

    if (user_c == 't' && computer_c == 'k')
        return 0;
    else if (user_c == 'k' && computer_c == 't')
        return 1;

    if (user_c == 't' && computer_c == 'm')
        return 1;
    else if (user_c == 'm' && computer_c == 't')
        return 0;

    if (user_c == 'k' && computer_c == 'm')
        return 0;
    else if (user_c == 'm' && computer_c == 'k')
        return 1;
}

int main() {
    int n;
    char user_c, computer_c, result_c;
    srand(time(NULL));

    while (1) {
        n = rand() % 100;

        if (n < 33) {
            computer_c = 't';
        } else if (n > 33 && n < 66) {
            computer_c = 'k';
        } else {
            computer_c = 'm';
        }

        printf("\n\n\t\t tas: t, kagit: k, makas: m\n\n\t\t");
        scanf(" %c", &user_c);

        result_c = game(user_c, computer_c);

        if (result_c == -1) {
            printf("\n\n\t\t ....tekrar....\n\n\t\t");
        } else if (result_c == 1) {
            printf("\n\n\t\t....kazandın....\n\n\t\t");
        } else {
            printf("\n\n\t\t....kaybettin....\n\n\t\t");
        }
        printf("\t\tsecimin: %c ve bilgisayarin secimi: %c\n", user_c, computer_c);

        char play_again;
        printf("\nTekrar oynamak ister misiniz? (e/h): ");
        scanf(" %c", &play_again);

        if (play_again != 'e' && play_again != 'E') {
            break;
        }
    }

    return 0;
}
