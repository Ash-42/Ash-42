#ifndef PIPE_H
#define PIPE_H

#include <SDL2/SDL.h>
#include <stdlib.h>
#include <time.h>

#include "bird.h"

extern const int WIDTH;
extern const int HEIGHT;

typedef struct {
    int x;
    int gap;
    int speed;
    int width;
    int top_len;
    int bot_len;
    int seen;
    int isActive;
    SDL_Rect top;
    SDL_Rect bot;
} Pipe;

long random_at_most(long);

void PipeInit(Pipe *, int);
void UpdatePipe(Pipe *, double, int);
int CheckCollision(Pipe *, Bird *);

#endif  // PIPE_H
