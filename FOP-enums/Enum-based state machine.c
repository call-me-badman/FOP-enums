
#include <stdio.h>

enum GameState { Idle, Playing, Paused, GameOver };

int main() {
    enum GameState state = Idle;

    for (int i = 0; i < 6; i++) {
        switch (state) {
            case Idle:
                printf("State: Idle\n");
                state = Playing;
                break;

            case Playing:
                printf("State: Playing\n");
                state = Paused;
                break;

            case Paused:
                printf("State: Paused\n");
                state = Playing;
                break;

            case GameOver:
                printf("State: GameOver\n");
                return 0;
        }
    }

    return 0;
}
