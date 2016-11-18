#POO (Programación Orientada a Objetos)
Es el paradigma (una forma de ver las cosas) de la programación que nos permite ver nuestros programas como objetos.

Los objetos pueden tener dos clases de elementos, atributos (variables) que contienen datos acerca del objeto, por ejemplo, en un objeto "pelota" sus atributos podrían ser el color, el material, el radio, etc.
Además de atributos, los objetos pueden tener métodos o funciones miembro (cosas que pueden hacer), por ejemplo, una pelota puede rebotar, deslizarse sobre el suelo, ser lanzada por el aire, etc.

Los objetos además permiten crear programas con menos código y un alto nivel de abstracción.

##Clases

La estructura de un objeto se declara en una clase, que es una estructura de código donde se definen los métodos y atributos del mismo.

###Instancias

Se conoce como una instancia de un objeto a cada una de las entidades creadas en base a una clase, es decir, se puede declarar una clase "Persona",
y de ella, se pueden crear mas de una instancias, en este caso, varias "personas".
P. Ej., si se crea la clase "Persona" con el atributo "nombre" y el método "decirNombre", se pueden crear multiples personas, cada una con su propio nombre,
y en cada una de ellas se puede llamar al método "decirNombre", y dirá el que fue asignado como su propio nombre.
Por lo tanto podemos concluir que una clase actúa como una plantilla que describe todos los elementos de un objeto, y una instancia es un objeto en si mismo, 
por lo que a menudo los autores suelen usar los tres términos (o al menos dos de ellos) indistintamente.

###Constructor y destructor
Son un par de funciones miembro o métodos de un objeto que deben ser definidos en su clase (de no hacerlo un compilador moderno los creará por defecto), como su nombre lo indica, el constructor es una función que se ejecuta al crear una instancia, y el destructor al eliminarla, por lo tanto, el constructor recibe los parámetros con los que se crea el objeto (el constructor por defecto no requiere parámetros) y luego realiza las primeras acciones del mimo, el destructor por su parte, no recibe parámetros en ningún caso, pero suele usarse para liberar la memoria dinámica apartada. 

##Encapsulamiento

Se conoce así a la capacidad de un objeto de ocultar ciertos métodos y atributos o mantenerlos "privados" solo para su propio uso y funcionamiento interno,
en muchos casos es necesario crear variables que solo existirán o serán necesarios para realizar procesos internos de un objeto, 
por lo tanto el encapsulamiento es un requisito necesario dentro de la POO.

##Interfaz

Por otro lado, se conoce como interfaz al conjunto de métodos y atributos "públicos" con los cuales un objeto puede interactuar con el resto.

##Herencia

Es la cualidad que tienen los objetos de poder heredar o ser heredados de métodos y atributos de otras clases, esto permite ahorrar código,
en el ejemplo, la clase "Estudiante" hereda de la clase "Persona" los atributos nombre y edad, asi como los métodos getName y getType, 
por lo que un objeto "Estudiante" puede hacer hacer uso de sus esos métodos y atributos como propios, sin necesidad de reescribir todo ese código.
Cuando se habla de Herencia, se dice que una clase hereda de otra clase "Base", en C++ se permite "Herencia multiple", es decir, 
se permite que una clase herede de mas de una clase base.

##Polimorfismo 

Es la cualidad de los objetos de una clase padre o base de almacenar datos de un objeto que hereda de su misma clase.
Dicho de otra forma un objeto de clase "Estudiante" contiene atributos como edad y nombre, que están definidos en la clase "Persona",
por lo tanto se pueden crear objetos de clase "Persona", con el constructor de la clase "Estudiante", este concepto se explica mejor en el ejemplo.

#Compilación

En el ejemplo, cada clase ha sido escrita de forma independiente en un par de archivos, uno con la extensión cpp, y otro con la extension h, ambos con el mismo nombre.
Esto permitirá mas adelante usar las clases del mismo modo que las librerías, y es de hecho, el método que se usa para crear las mismas.

###El archivo <nombre_clase>.h
A este archivo se le conoce como el archivo de cabecera (header), contiene la mínima definición de una clase y se usa para enlazarla con nuestro código.

###El archivo <nombre_clase>.cpp
Este archivo contiene de una forma más extensa la definición de como funciona cada uno de los métodos de la clase dada, incluye el archivo de cabecera y las librerías necesarias,
lo que permite que pueda ser compilado individualmente.

Los archivos .h son compilados sin supervisión, dejando indicado aquello que no se pudo compilar completamente, esto permite compilar las librerías por separado aun que sus funciones todavia no sean invocadas en un programa, y a los programas les permite compilar por separado sin supervisar que las funciones necesarias estén correctamente definidas en el archivo fuente de la librería. Lo que ahorra tiempo de compilación, pero requiere tener un mayor cuidado a la hora de crear y usar nuestras librerías.

##Compilar una clase

El comando de compilación de una clase es:

```batch
g++ -c <nombre_clase>.cpp -o clase.o 
```

Es necesario incluir el archivo .h en el .cpp para que el linker funcione posteriormente.

El resultado será un archivo de código objeto (ensamblador) listo para ser enlazado con nuestro programa principal y generar un ejecutable.
Debe generar todos los .o de cada clase antes de compilar el programa principal.

##Compilación final

Para la compilación final, es necesario incluir en el código principal los archivos de cabecera de cada clase, para que el linker pueda enlazarlo con los archivos .o, en el caso de las librerías estándar esto ultimo no se nota por que el compilador busca el .o en su ubicación por defecto.

El comando para compilar el programa principal incluyendo las clases previamente compiladas es:

```batch
g++ <nombre_clase_1>.o <nombre_clase_2>.o <nombre_codigo_principal>.cpp -o <nombre_programa_ejecutable>
```

##Ejecución

El comando para ejecutar el programa:

```batch
<nombre_del_programa>
```
