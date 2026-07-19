# Plataforma2D

Proyecto final de Programación Orientada a Objetos (FICH - UNL) desarrollado en C++ con SFML.

Se trata de un juego de plataformas lateral 2D de desplazamiento infinito, con soporte para 1 o 2 jugadores.

## Características principales

- Juego de plataformas 2D con avance lateral continuo.
- Modo de 1 jugador o 2 jugadores.
- Menú principal con selección de cantidad de jugadores.
- Sistema de puntaje y guardado de datos.
- Escenas de pausa, game over y high scores.

## Tecnologías utilizadas

- **Lenguaje:** C++
- **Librería gráfica/multimedia:** SFML (graphics, window, audio, system, network)
- **IDE/proyecto original:** ZinjaI (`Prueba1.zpr`)

## Controles

### Jugador 1
- Moverse: **Flecha Izquierda / Flecha Derecha**
- Saltar: **Flecha Arriba**

### Jugador 2
- Moverse: **A / D**
- Saltar: **W**

### Generales
- **Space:** Pausar juego
- **Enter:** Reanudar desde pausa
- **Escape:** Volver al menú / salir según la escena
- **Mouse:** Interacción con botones del menú

## Estructura general del proyecto

- `/CPP`: implementación de escenas, juego y objetos.
- `/H`: encabezados de clases principales.
- `/Textures`: sprites y recursos gráficos.
- `Data_Manager.*` y `Data_Struct.h`: gestión de datos y puntajes.
- `Scene_GameOver.*` y `Scene_HighScore.*`: escenas adicionales.
- `Prueba1.zpr`: configuración del proyecto en ZinjaI.

## Requisitos

- Compilador de C++ compatible con el estándar usado por SFML.
- SFML instalada (módulos: `graphics`, `window`, `audio`, `system`, `network`).
- Recursos del juego (texturas, fuentes, archivos binarios) disponibles en el directorio raíz del proyecto.

## Compilación y ejecución

El repositorio no incluye un sistema de build moderno (CMake/Makefile), ya que el proyecto fue preparado para ZinjaI.

Opciones recomendadas:

1. Abrir `Prueba1.zpr` en **ZinjaI** y compilar con la configuración deseada.
2. O compilar manualmente enlazando SFML y respetando la estructura de carpetas y recursos.

## Estado del proyecto

Proyecto académico finalizado y funcional como entrega de POO.

