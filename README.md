# Libft

## Instrucciones generales
- Tu proyecto deberá estar escrito en C.

- Tu proyecto debe estar escrito siguiendo la Norma. Si tienes archivos o funciones adicionales, estas están incluidas en la verificación de la Norma y tendrás un 0 si hay algún error de norma en cualquiera de ellos.

- Tus funciones no deben terminar de forma inesperada (segfault, bus error, double free, etc) excepto en el caso de comportamientos indefinidos. Si esto sucede, tu proyecto será considerado no funcional y recibirás un 0 durante la evaluación.

- Toda la memoria asignada en el heap deberá liberarse adecuadamente cuando sea necesario. No se permitirán leaks de memoria.

- Si el enunciado lo requiere, deberás entregar un `Makefile` que compilará tus archivos fuente al output requerido con las flags `-Wall`, `-Werror` y `-Wextra`, utilizar `cc` y por supuesto tu `Makefile` no debe hacer relink.

- Tu `Makefile` debe contener al menos las normas `$(NAME)`, `all`, `clean`, `fclean` y `re`.

- Para entregar los bonus de tu proyecto deberás incluir una regla `bonus` en tu `Makefile`, en la que añadirás todos los headers, librerías o funciones que estén prohibidas en la parte principal del proyecto. Los bonus deben estar en archivos distintos `_bonus.{c/h}`. La parte obligatoria y los bonus se evalúan por separado.

- Si tu proyecto permite el uso de la `libft`, deberás copiar su fuente y sus `Makefile` asociados en un directorio `libft` con su correspondiente `Makefile`. El `Makefile` de tu proyecto debe compilar primero la librería utilizando su `Makefile`, y después compilar el proyecto.

- Te recomendamos crear programas de prueba para tu proyecto, aunque este trabajo no será entregado ni evaluado. Te dará la oportunidad de verificar que tu programa funciona correctamente durante tu evaluación y la de otros compañeros. Y sí, tienes permitido utilizar estas pruebas durante tu evaluación o la de otros compañeros.

- Entrega tu trabajo en tu repositorio Git asignado. Solo el trabajo de tu repositorio Git será evaluado. Si Deepthought evalúa tu trabajo, lo hará después de tus compañeros. Si se encuentra un error durante la evaluación de Deepthought, esta habrá terminado.

## Parte obligatoria
Escribe tu propia librería: un conjunto de funciones que será una herramienta muy útil a lo largo del cursus.

Nombre de programa: `libft.a`

Archivos a entregar: `Makefile`, `libft.h`, `ft_*.c`

Makefile: `NAME`, `all`, `clean`, `fclean`, `re`

### Consideraciones técnicas
- Declarar variables globales está prohibido.

- Si necesitas separar una función compleja en varias, asegúrate de utilizar la palabra `static` para ello. De esta forma, las funciones se quedarán en el archivo apropiado.

- Pon todos tus archivos en la raíz de tu repositorio.
- Se prohibe entregar archivos no utilizados.

- Todos los archivos `.c` deben compilarse con las flags `-Wall -Werror -Wextra`.

- Debes utilizar el comando `ar` para generar la librería. El uso de `libtool` queda prohibido.

- Tu `libft.a` tiene que ser creado en la raíz del repositorio.



