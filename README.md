# tp1

## Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? 

El archivo .gitignore es una herramienta fundamental para todo desarrollo de software gestionado con Git. Se encarga de especificar archivos y directorios que se deben ignorar. Es conveniente incluirlo ya que:

- Evita el ruido en el repositorio: Usualmente, los proyectos de software producen una gran cantidad de archivos que no contribuyen directamente a la funcionalidad del programa (archivos de compilación, dependencias de terceros, temporales, configuraciones locales, etc.) La inclusión de estos archivos en el repositorio puede complicar la comprensión de los cambios importantes en el código.


- Mejora la portabilidad: Al especificar qué archivos y directorios deben ser ignorados por Git, se asegura de que el proyecto sea más portable. Los archivos específicos de plataformas o configuraciones locales no se propagarán a través del repositorio, lo que facilita el uso del proyecto en diferentes entornos de desarrollo.

- Evita la inclusión accidental de datos sensibles: Al ignorar archivos que contienen información sensible, como claves de acceso, tokens de autenticación o información de configuración local, se reduce el riesgo de incluir accidentalmente esta información en el repositorio y exponerla a otros usuarios. 

## ¿Cuándo se debe incorporar está inclusión?
La inclusión del archivo .gitignore es necesaria desde el inicio del proyecto.


## ¿Cómo configuraría el archivo .gitignore?
Para configurar el archivo .gitignore, es necesario especificar los archivos y directorios que se quiere que Git ignore. Basta con escribir los nombres de estos archivos y directorios en el archivo .gitignore. Por ejemplo:

### Ignorar archivos de compilación:
*.o
*.out

### Ignorar el directorio de dependencias de Node.js:
/node_modules/

### Ignorar archivos de configuración local:
config.json
.env

## 3g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?
El resultado es el mismo porque el puntero contiene la dirección de memoria de "variable". En el punto 4 obtenemos la dirección de memoria del puntero, la cual es diferente de la dirección de memoria de la variable. 








