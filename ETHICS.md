# ETHICS - PIA

**Integrantes:**
David Alejandro Rodriguez Garcia
Jair Eliud Flores Puente

**Declaración de cumplimiento de medidas de seguridad:**
El equipo confirma que todas las pruebas del proyecto se realizarán en máquinas virtuales aisladas, sin acceso a redes ni información sensible.  
Cada prueba contará con snapshots previos y será restaurada después de cada ejecución. No se realizará ningún intento de explotación o persistencia fuera del entorno controlado.

El payload desarrollado tendrá fines exclusivamente académicos y defensivos.  
Su funcionalidad estará limitada a la recopilación de datos en entornos de prueba. No incluirá mecanismos de persistencia, escalamiento de privilegios ni evasión de controles de seguridad.  

**Restauracion de Snapshot**
Una vez cargada la maquina virtual en VirtualBox se captura el estado de la VM limpia y se nombra como clean_install para distinguirla de posibles snapshots futuras.
Una vez que se realizan acciones y se desea volver a un estado anterior de la VM, se selecciona la VM en la lista, luego se selecciona el menú Snapshots, se hace click derecho sobre la captura y se selecciona la opcion Restore.


**Firmas**

-  David Alejandro Rodriguez Garcia
- Jair Eliud Flores Puente
