# Plataforma2D

Proyecto final de Programación Orientada a Objetos (FICH - UNL).  
Juego de plataformas lateral infinito en 2D desarrollado en C++ con SFML, con modo de 1 o 2 jugadores.

## Descripción

El juego está organizado por escenas (menú, juego, pausa, game over y high score).  
El objetivo es avanzar, evitar obstáculos y sumar puntaje mientras el escenario se desplaza lateralmente.

## Tecnologías

- **C++**
- **SFML 2.x** (`graphics`, `window`, `audio`, `system`, `network`)
- **ZinjaI** como configuración principal del proyecto (`Prueba1.zpr`)

## Estructura del repositorio

- `/home/runner/work/Plataforma2D/Plataforma2D/CPP`: implementación principal (`main`, `Game`, escenas y objetos).
- `/home/runner/work/Plataforma2D/Plataforma2D/H`: headers principales del juego.
- `/home/runner/work/Plataforma2D/Plataforma2D/Scene_GameOver.*` y `/home/runner/work/Plataforma2D/Plataforma2D/Scene_HighScore.*`: escenas adicionales.
- `/home/runner/work/Plataforma2D/Plataforma2D/Textures`: sprites y fondos.
- `/home/runner/work/Plataforma2D/Plataforma2D/GameData.bin` y `/home/runner/work/Plataforma2D/Plataforma2D/SaveData.bin`: persistencia de puntajes.
- `/home/runner/work/Plataforma2D/Plataforma2D/Prueba1.zpr`: proyecto ZinjaI.

## Flujo general del juego

1. `main.cpp` crea `Game` con `Scene_Menu`.
2. `Game` maneja el loop principal: eventos, actualización y render.
3. Las escenas derivadas de `Scene` encapsulan cada estado del juego.
4. `Scene_Play` contiene la lógica principal de gameplay (movimiento, colisiones, score, pausa, game over).
5. `Data_Manager` guarda/carga high scores en binario.

## Controles (según implementación actual)

- **Jugador 1**
  - Mover: `Left` / `Right`
  - Saltar: `Up`
- **Jugador 2**
  - Mover: `A` / `D`
  - Saltar: `W`
- **Generales**
  - En juego: `Space` pausa
  - En pausa: `Enter` reanuda, `Escape` vuelve al menú
  - En menú/high score: `Escape` salir o volver según escena

## Compilación y ejecución

Este repositorio no incluye CMake ni Makefile en la raíz.  
La configuración principal está en ZinjaI (`Prueba1.zpr`) con perfiles de Debug/Release para Windows y Linux.

Para ejecutar:

1. Abrir `/home/runner/work/Plataforma2D/Plataforma2D/Prueba1.zpr` en ZinjaI.
2. Verificar que SFML esté instalada y configurada en el entorno.
3. Compilar con la configuración deseada y ejecutar.

## Estado del proyecto

Proyecto académico finalizado y funcional como base de juego de plataformas 2D.
