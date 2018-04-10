# SOI

Examen de diagnostico
¿Que es un sistema operativo?
	El sistema operativo es el
¿que sistemas operativos conoces?
	Windows,Lunix,Ubuntu,Mac,Adroid
¿que diferencias entre los sistemas operativos identificas?
	que unos son de codigo abierto, y otros no, se usan para diferentes cosas
¿que hay diferencia hay entre la memoria logica y fisica?
	
¿que tipo de sistemas de archivo conoce?
	FAT32
	NTFS
¿que es la criptografia?
	que es un tipo de seguridad 



________________________________________________________________________________________________________________________________________________________
Procesador
(RDIM), y un registro de datos 
de memoria 
(RDAM), que contiene los dato
es un diccionario
_______________________________________________________________________________________________________________________________________
conceptos

Carga
Es una parte que asigna el sistema operativo el cual ubica en la memoria principal el tipo de archivos que se va a ejecutar se puede realizar de tres maneras

Carga absoluta
 este tipo de carga consiste en que el módulo de carga ocupara siempre la misma posición en memoria principal

Carga reubicable
 el ensamblador o el compilador no generan direcciones reales sino directas relativas a algún punto conocido

Carga dinámica
 en tiempo real un programa se carga en cualquier región de la memoria principal, el programa se puede intercambiar entre disco y memoria

compactación
El proceso de compactación son unas instancias particulares del problema de asignación de memoria dinámica, y esta se  refiere a  satisfacer  una necesidad de tamaño (N) en una lista de huecos libres.
La idea de compartición de recursos no es nueva ni aparece en el marco de los sistemas distribuidos. Los sistemas multiusuario clásicos desde siempre han provisto compartición de recursos entre sus usuarios. Sin embargo, los recursos de una computadora multiusuario se comparten de manera natural entre todos sus usuarios. Por el contrario, los usuarios de estaciones de trabajo monousuario o computadoras personales dentro de un sistema distribuido no obtienen automáticamente los beneficios de la compartición de recursos.

Enlaces
Es el que establece la combinación de programas mencionada y también crea una imagen de carga a memoria, que resguarda en el almacenamiento secundario (disco), para usos futuros.
Resulta ser muy ventajoso en ambientes de producción, pues la carga inmediata de la imagen de memoria anteriormente producida, impide un nuevo proceso de combinación de programas previo a cada ejecución. 

Enlace dinámico
El ligado dinámico ofrece algunas ventajas sobre los otros tipos de ligado. Proporciona la posibilidad de cargar las rutinas sólo cuando y si se necesitan. SI las subrutinas son grandes o tienen muchas referencias externas, se pueden conseguir ahorros considerables de tiempo y espacio de memoria.

enlazado
Un enlace dinámico es aquel en el cual una biblioteca de código es enlazada cuando un determinado programa se ejecuta (en oposición a un enlace estático, que se produce en tiempo de compilación). La ventaja de este tipo de enlace es que el programa es más liviano, y que evita la duplicación de código (por ejemplo, cuando dos programas requieren usar la misma biblioteca, se necesita sólo una copia de ésta).

Fragmentación interna:
La fragmentación interna es la pérdida de espacio en disco debido al hecho de que el
tamaño de un determinado archivo sea inferior al tamaño del cluster, ya que teóricamente el
archivo estaría obligado a ser referenciado como un cluster completo.

Fragmentación externa:
Este tipo de fragmentación aparece como consecuencia de las distintas políticas de ajuste de bloques que tiene un sistema de ficheros, o al utilizar asignaciones dinámicas de bloques en el caso de la memoria. En el sistema de ficheros, la sucesiva creación y eliminación de ficheros de distintos tamaños puede conducir al aislamiento de los bloques libres de un disco y, dependiendo de la política de ajuste, su no elección para futuros ficheros.
En la memoria del sistema la fragmentación se produce cuando los procesos
asignados han ocupado posiciones no contiguas de memoria dejando demasiados bloques libres de pequeño tamaño, en los que no "caben" nuevos procesos.

Gestión de la memoria
La administración de memoria representa un vínculo delicado entre el rendimiento (tiempo de acceso) y la cantidad (espacio disponible). Siempre se busca obtener el mayor espacio disponible en la memoria, pero pocas veces existe la predisposición para comprometer el rendimiento. 
La administración de memoria debe realizar diversas funciones, como permitir que la memoria se comparta (en sistemas de multiprocesos), asignar bloques de espacio de memoria a distintas tareas, proteger los espacios de memoria utilizados (por ejemplo, evitar que un usuario modifique una tarea realizada por otro usuario), optimizar la cantidad de memoria disponible (específicamente a través de sistemas de expansión de memoria). 

Marcas De Sistemas Operativos
1) DOS: El famoso DOS, que quiere decir Disk Operating System (sistema operativo de disco), es más conocido por los nombres de PC-DOS y MS-DOS. MS-DOS fue hecho por la compañía de software Microsoft y es en esencia el mismo SO que el PC-DOS.
La razón de su continua popularidad se debe al aplastante volumen de software disponible y a la base instalada de computadoras con procesador Intel.
Cuando Intel liberó el 80286, DOS se hizo tan popular y firme en el mercado que DOS y las aplicaciones DOS representaron la mayoría del mercado de software para PC. En aquel tiempo, la compatibilidad IBM, fue una necesidad para que los productos tuvieran éxito, y la "compatibilidad IBM" significaba computadoras que corrieran DOS tan bien como las computadoras IBM lo hacían.


Organización lógica
La mayoría de las computadoras organizan los archivos en jerarquías llamadas carpetas, directorios o catálogos. (El concepto es el mismo independientemente de la terminología usada.) Cada carpeta puede contener un número arbitrario de archivos, y también puede contener otras carpetas. Las otras carpetas pueden contener todavía más archivos y carpetas, y así sucesivamente, construyéndose una estructura en árbol en la que una «carpeta raíz» (el nombre varía de una computadora a otra) puede contener cualquier número de niveles de otras carpetas y archivos. A las carpetas se les puede dar nombre exactamente igual que a los archivos (excepto para la carpeta raíz, que a menudo no tiene nombre). El uso de carpetas hace más fácil organizar los archivos de una manera lógica.
La mayor parte de las estructuras de organizaciones alternativas de archivos se encuentran dentro de estas cinco categorías:
Pilas

Organización física
Los datos son arreglados por su adyacencia física, es decir, de acuerdo con el dispositivo de almacenamiento secundario. Los registros son de tamaño fijo o de tamaño variable y pueden organizarse de varias formas para constituir archivos físicos. 

Cinta magnética
En este dispositivo el archivo físico está formado por un conjunto de registros físicos, y los bloques están organizados en forma consecutiva, ya que se asigna en igual forma.
Además, tales registros pueden contener etiquetas que permitan un mayor control sobre los datos almacenados, y son las siguientes:
•	Etiqueta de volumen. - Contiene información que permite identificar la cinta, el nombre del propietario y cualquier información general requerida.
•	Etiqueta de archivo. - Se utilizan por pares para indicar el inicio y fin del archivo, contiene información acerca del nombre del archivo, fecha de creación.
•	Etiqueta de usuario. - Sirven para guardar información adicional de importancia para el usuario; no son procesados por el sistema operativo.


Discos Magnéticos
El archivo físico en un disco es una colección de registros físicos de igual tamaño, los cuales pueden estar organizados en forma consecutiva, ligada o con una tabla de mapeo. 

En la organización contigua, el archivo utiliza registros físicos contiguos, siguiendo la secuencia normal de direcciones.
La organización encadenada consiste un conjunto de bloques, cada uno de los cuales tiene un campo destinado para indicar la dirección del siguiente registro, o sea, para lo que se ha llamado enlace o liga.
Otra forma de organización es la tabla de mapeo que consiste en una tabla de apuntadores a los registros físicos que forman el archivo.

Pagina 
INFORMÁTICA Cada una de las partes en que se organiza la memoria en un ordenador.
 
Paginación 
• La paginación permite que la memoria de un proceso no sea contigua, y que a un proceso se le asigne memoria física donde quiera que ésta esté disponible. 
• La paginación evita el gran problema de acomodar trozos de memoria de tamaño variable en el almacenamiento auxiliar.
• Cuando es necesario intercambiar fragmento de códigos o datos que residen en la memoria principal, hay que encontrarles espacio en el almacenamiento auxiliar. Por sus ventajas la 
paginación es de uso común en muchos SO.


Particiones
Un disco duro puede dividirse en varias particiones. Cada partición funciona como si fuera un disco duro independiente. La idea es que si sólo se tiene un disco, y se quieren tener, digamos, dos sistemas operativos en él, se pueda dividir el disco en dos particiones. Cada sistema operativo utilizará su propia partición tal y como se desea, y no tocará la otra. De esta forma los dos sistemas operativos pueden coexistir pacíficamente en el mismo disco duro. Sin particiones se tendría que comprar un disco duro para cada sistema operativo.
Los disquetes generalmente no se particionan. No hay ninguna razón técnica para ello, pero dado que son tan pequeños, particionarlos sería útil sólo en extrañas ocasiones. Los CD-ROM tampoco se suelen particionar, ya que es más fácil utilizarlos como un disco grande, y raramente existe la necesidad de tener varios sistemas operativos en uno de ellos.


Particiones Fijas
El primer intento para posibilitar la multiprogramación fue la creación de particiones fijas o estáticas, en la memoria principal, una partición para cada tarea. El tamaño de la partición se especificaba al encender el sistema, cada partición podía re-configurarse al volver a encender el sistema o reiniciar el sistema.
Este esquema introdujo un factor esencial, la protección del espacio de memoria para la tarea. Una vez asignada una partición a una tarea, no se permitía que ninguna otra tarea entrara en sus fronteras. Este esquema de partición es más flexible que la de usuario único, porque permite que varios programas estén en memoria al mismo tiempo.


PARTICIONES DINÁMICAS
Las particiones dinámicas son variables en número y longitud, esto quiere decir que cuando se carga un proceso a memorial principal se le asigna el espacio que necesita en memoria y no más. Esta partición comienza siendo muy buena pero en el trascurso de uso deja un gran número de huecos pequeños en la memoria lo cual se le denomina fragmentación externa. Se debe usar la compactación para evitar esta fragmentación, el sistema operativo desplaza los procesos para que estén contiguos de forma que todos los espacios de memoria libre se agrupen en un bloque, es decir:

Protección
 La función principal de un Sistema Operativo (SO) es la de tomar todos los recursos físicos de un sistema de cómputo y brindarlos de manera virtual, esto es logrado por medio de una abstracción del hardware (HW). En la actualidad no es suficiente con permitir el manejo y uso del HW si no se maneja seguridad y protección. 
 Es importante en definir claramente las diferencias entre estos dos conceptos
La seguridad: es la ausencia de un riesgo. Aplicando esta definición a al tema correspondiente, se hace referencia al riesgo de accesos no autorizados, de manipulación de información, manipulación de las configuraciones, entre otros
La protección: son los diferentes mecanismos utilizados por el SO para cuidar la información, los procesos, los usuarios, etc.

Reubicación Estática
Implica generalmente que la reubicación es realizada antes o durante la carga del proceso en memoria. Las constantes (valores literales), los desplazamientos relativos al PC, no dependen de esta condición y no necesitan ser ajustados durante la reubicación.

Reubicación Dinámica
Implica que la correspondencia entre el espacio de direcciones virtuales y el espacio de direcciones físicas se efectúa en tiempo de ejecución. Usualmente con asistencia del hardware. Cuando el proceso en cuestión está siendo ejecutado, todas sus referencias a memoria son reubicadas durante la ejecución antes de acceder realmente a la memoria física.

Segmentación
Esquema de administración de memoria que soporta la visión del usuario de la memoria.
Un programa es una colección de segmentos. Un segmento es una unidad lógica como, por ejemplo:
•	Programa principal.
•	Procedimientos.
•	Funciones.
•	Variables locales, variables globales.
•	Bloques comunes.
•	Pila.
•	Tabla de símbolos, arreglos, etc.

Tabla de paginación
Las tablas de paginación o tablas de páginas son una parte integral del Sistema de Memoria Virtual en sistemas operativos, cuando se utiliza paginación. Son usadas para realizar las traducciones de direcciones de memoria virtual (o lógica) a memoria real (o física) y en general el sistema operativo mantiene una por cada proceso corriendo en el sistema.
En cada entrada de la tabla de paginación (en inglés PTE, Page Table Entry) existe un bit de presencia, que está activado cuando la página se encuentra en memoria principal. Otro bit que puede encontrarse es el de modificado, que advierte que la página ha sido modificada desde que fue traída del disco, y por lo tanto deberá guardarse si es elegida para abandonar la memoria principal; y el bit de accedido, usado en el algoritmo de reemplazo de páginas llamado Menos Usado Recientemente (LRU, least recently used). También podría haber otros bits indicando los permisos que tiene el proceso sobre la página (leer, escribir, ejecutar).




