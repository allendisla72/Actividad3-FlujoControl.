# Actividad 3: Flujo de Control (Parte 2)

**Asignatura:** Programación I  
**Profesor:** Gamalier Reyes del Carmen  

## Resumen del Proyecto
Este programa en C++ está diseñado para gestionar el flujo de calificaciones de una cantidad `n` de estudiantes utilizando bucles y condicionales. El sistema permite registrar las 4 notas de cada alumno de manera dinámica utilizando un bucle `for`, calcula el promedio matemático de forma automática y evalúa mediante una estructura `if-else` si el estudiante está **Aprobado** (nota mayor o igual a 70) o **Reprobado**.

Para cumplir con los requisitos de diseño solicitados, se investigó y aplicó el uso de la librería `<iomanip>` junto con el manipulador `setw()`. Esto permite definir anchos fijos para las columnas de la consola, garantizando que los datos de salida se organicen en una estructura de tabla perfecta y alineada, evitando las desalineaciones comunes del tabulador tradicional `\t`.

## Escenarios de Ejecución

### Escenario 1: Estudiante Aprobado y Reprobado (Caso Base)
En este escenario se ingresaron los datos de ejemplo del mandato para verificar la correcta alineación de la tabla y la asignación del estatus de aprobación.
![Escenario Base](./capturas/escenario1.png)

### Escenario 2: Múltiples Estudiantes con Notas Decimales
En este escenario se probó el comportamiento del programa al introducir notas con decimales, asegurando que el promedio se calcule con precisión y mantenga el formato de la tabla impecable.
![Escenario Decimales](./capturas/escenario2.png)
