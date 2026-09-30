# Jogo da Forca em C++

Jogo da forca para terminal, para dois jogadores. Um jogador digita a palavra
secreta e o outro tenta descobrir as letras antes de acabarem as chances.

## Como funciona
- O jogador 1 digita a palavra secreta (a tela é limpa em seguida)
- A palavra aparece escondida, com um traço para cada letra
- O jogador 2 tem 6 chances e digita uma letra por vez
- Letra correta: aparece nas posições certas. Letra errada: perde uma chance
- Ao final, o jogo diz se você ganhou ou perdeu e pergunta se quer jogar de novo

## Requisitos
- Windows
- Compilador C++ (ex.: g++ do MinGW)

> O jogo usa `system("cls")` e `system("pause")`, comandos do Windows.
> Em Linux ou macOS, esses comandos não funcionam do mesmo jeito.

## Como compilar e executar
```bash
g++ forca.cpp -o forca
forca.exe
```
## Ideias futuras
- Sortear a palavra de uma lista ou de um arquivo
- Desenhar a forca em ASCII
- Compatibilidade com Linux e macOS

##Autor
- Bruno -  https://github.com/bruno07c1
