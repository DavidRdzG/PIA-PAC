# Tarea 5 - Primer avance PIA - Grupo 5: David Alejandro Rodriguez  Garcia, Jair Eliud Flores Puente

**Resumen del proyecto:** Desarrollar un payload controlado para evaluación defensiva que ejecute comandos limitados en un entorno aislado y reporte resultados cifrados al operador.

**Alcance y límites**
- Ejecución de comandos de inventario del sistema (OS, procesos, puertos locales), lectura de archivos en rutas del sistema, captura de logs, canal de retorno cifrado. El programa debe ser ejecutado dentro del entorno virtual de prueba.

**Plan de trabajo por fases (hasta el siguiente avance)**
- **Fase 1 :** definición de requisitos del agente, configuracion del entorno virtual.
- **Fase 2 :** agente que corre en VM, ejecuta comandos y retorna salida a servidor de prueba un logging estructurado.
- **Fase 3 :** demo en VM.
- **Entregables:** código, README y evidencias.

**Distribución de tareas**
- **David Rdz:** definir requisitos del agente, estructuracion del codigo, .
- **Jair Flores** estructuracion del codigo, requisitos de VM, configuracion del entorno de pruebas.

**Medidas éticas y de seguridad**
- Ejecución solo en VM aisladas sin puentes; red de laboratorio.
- **Snapshots** restauración de la snapshot tras la ejecucion del codigo.
- **Sin persistencia**: no escribir claves en disco.
- **Trazabilidad**: registro de acciones tomadas por el programa.
