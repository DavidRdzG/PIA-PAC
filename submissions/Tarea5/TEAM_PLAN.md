# Tarea 5 - Primer avance PIA - Grupo 5: David Alejandro Rodriguez  Garcia, Jair Eliud Flores Puente

**Resumen del proyecto:** El objetivo general de este proyecto es demostrar de forma educativa los principios básicos de la esteganografía digital, mediante la inserción y extracción de mensajes benignos en archivos de imagen de prueba, utilizando el lenguaje C++.

**Alcance y límites**

*Alcance*
- El proyecto implementa un prototipo educativo en C++ capaz de incrustar y extraer mensajes de texto dentro de imágenes de prueba (por ejemplo, en formato BMP o PNG).
- La herramienta está diseñada con fines exclusivamente académicos, para la comprensión de los fundamentos teóricos y prácticos de la esteganografía.
- El código se estructura de forma modular, facilitando su análisis, experimentación y ampliación con otros métodos de esteganografía en futuras versiones.

*Limites*
- El proyecto no tiene fines de seguridad ni cifrado real de información, ya que el mensaje no se protege mediante criptografía; únicamente se oculta.
- El prototipo trabaja con imágenes de prueba y no está optimizado para grandes volúmenes de datos ni formatos comprimidos (como JPEG).
- No se garantiza resistencia frente a técnicas de detección o manipulación, ya que el objetivo es educativo, no de ocultamiento avanzado o forense.

**Plan de trabajo por fases (hasta el siguiente avance)**
- **Fase 1:** Configuración y entorno
- **Fase 2:** Implementación básica de esteganografía
- **Fase 3:** Pruebas y documentación técnica
- **Fase 4:** Revisión y entrega

**Distribución de tareas**
- Jair Eliud Flores	Puente:
  - Desarrollar módulo base de esteganografía (funciones de inserción y extracción).
  - Escribir y comentar el código en /src/steg.cpp.
  - Compilar el binario de prueba y generar evidencia en /evidence/.
  - Implementar cliente C++ mínimo funcional (GET /status).
  - Crear Makefile o build.sh con comandos reproducibles.
  - Verificar compatibilidad en Windows y WSL.
- David Alejandro Rordriguez Garcia:
  - Documentar pruebas en docs/tests.md con capturas.
  - Redactar y actualizar README.md con comandos exactos de compilación y ejecución.
  - Apoyar en revisión de CHANGELOG.md y control de versiones.
  - Revisar y mantener ETHICS.md actualizado.
  - Verificar que no se utilicen datos reales ni rutas externas.
  - Coordinar commit final con mensaje oficial y etiquetado del avance.

**Medidas éticas y de seguridad**
-Uso educativo exclusivo: El proyecto se desarrollará únicamente con fines académicos, para ilustrar conceptos de ocultamiento de información sin propósitos de evasión, espionaje o manipulación.

- Entorno controlado: Todas las pruebas se realizarán dentro de máquinas virtuales aisladas, sin conexión a redes públicas.

- Datos de prueba: Se usarán imágenes de muestra y mensajes benignos (sin datos personales ni sensibles).
Los archivos no contendrán metadatos reales ni información de identificación.

- Transparencia del código: Todo el código fuente estará comentado, documentado y disponible para revisión.
No se incluirán binarios externos, librerías no verificadas ni funciones de red innecesarias.

- Cumplimiento de ETHICS.md: El documento ETHICS.md se actualizará para reflejar las nuevas pruebas y reafirmar el compromiso ético del equipo con la seguridad, privacidad y uso responsable del conocimiento.

- Seguridad en el repositorio: No se publicarán direcciones IP reales, nombres de host, credenciales ni rutas personales.
Cualquier dirección IP usada en pruebas será anónima o simulada (ej. 192.168.x.x).

**SHA de commit inicial**
- b928b4870a84f5eb2befa187a036998e0831fa97
