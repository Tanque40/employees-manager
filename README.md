# Employees Manager

Primera tarea de la clase de gráficas por computadora en C++

## Tarea 1

Escribir un programa en C o C++ para manipular una nómina de empleados. La información a almacenar por cada empleado es:

- Nombres del empleado(string).
- Apellidos del empleado (string).
- Identificación del empleado con número de ingreso (entero)
- Dirección. Este a su vez debe ser una estructura con:
  - Calle o avenida
  - Numero externo
  - Código postal
  - Ciudad
  - País
- Salario (real)
- Género (caracter)
- Estado civil (carácter)
- Número de hijos (entero)

Los campos string deben ser arreglos de caracteres (aconsejable usar la librería string.h). Inicialmente la lista de empleados está vacía y se carga la información, de cada empleado, por teclado. Para ello debe haber un menú simple para interactuar con el usuario (sin interfaz gráfica). Las funciones o procedimientos que deben escribirse son:

| Funcion | Uso |
|---------|-----|
| crear_empleado: | Solicita el espacio necesario y almacena la información del empleado capturado por teclado. La función retorna un apuntador al empleado recién creado o un código de error si falla la habilitación de memoria. Esta función debería ser llamada por insertar_empleado. |
|insertar_empleado: | Agrega un nuevo empleado (ordenado por su identificación). El procedimiento recibe, al menos, el apuntador a la lista de empleados. Retorna error si no hay memoria disponible. |
| borrar_empleado: | Elimina un empleado por su identificación. Recibe como parámetro el identificador del empleado y la lista. Debe retorna código de error si el empleado no está en la lista. |
| num_empleados: | Retorna el número de empleados que contiene la lista. También como las demás funciones y procedimiento anteriores debe recibir parámetros |
| mostrar_empleado: | Muestra por pantalla la información de un empleado particular. Retorna un código de error si el empleado no está en la lista. |
| los_empleados: | Muestra por pantalla la información de todos los empleados. Retorna un código de error si la lista está vacía. |


Pueden desarrollar su programa en ANSI-C o extenderlo a C++ para hacerlo orientado objeto. Cualquiera de las dos opciones es válida, sin embargo, si lo realiza en C++, no puede usar librerías que manipulen estructuras dinámicas automáticamente, es decir, debe construir manualmente las listas usando apuntadores. Por otro lado, debe hacer uso adecuado de los parámetros (pasaje por valor y pasaje por referencia) en las funciones o procedimientos, cuando la funcionalidad de la subrutina así lo amerite. Deben manejar los errores posibles que se pueden presentar cuando se maneja una estructura dinámica (falta de memoria) y errores propios de la lógica del programa. Será considerada en el criterio de corrección la modularidad, pase de parámetros y retorno correcto de valores.
