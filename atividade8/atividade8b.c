#include "raylib.h"
#include "entidade.h"
#include <stdlib.h>

#define LARGURA_JANELA 800
#define ALTURA_JANELA  600

int main(void) {
    InitWindow(LARGURA_JANELA, ALTURA_JANELA, "Atividade 8B - Reutilizacao de Modulo");
    SetTargetFPS(60);

    Entidade *jogador = entidadeCriar(ENTIDADE_JOGADOR, (Vector2){ 200.0f, 300.0f });
    Entidade *inimigo = entidadeCriar(ENTIDADE_INIMIGO, (Vector2){ 400.0f, 300.0f });
    Entidade *item    = entidadeCriar(ENTIDADE_ITEM,    (Vector2){ 600.0f, 300.0f });

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        entidadeDesenhar(jogador);
        entidadeDesenhar(inimigo);
        entidadeDesenhar(item);

        DrawText("Atividade 8B - Reaproveitando o Modulo Entidade", 150, 50, 20, DARKGRAY);
        DrawText("Pressione ESC para sair", 280, 550, 16, GRAY);

        EndDrawing();
    }

    free(jogador);
    free(inimigo);
    free(item);

    CloseWindow();
    return 0;
}