# ETHICS.md — Declaración Ética y de Seguridad  
## Tarea 6: Herramienta de Esteganografía y Análisis Seguro

---

## 1. Propósito del Documento

Este documento establece los principios éticos, limitaciones y condiciones obligatorias del uso de la herramienta de esteganografía desarrollada para esta práctica.  
Todo el trabajo se realiza con fines académicos dentro del contexto de la materia de Seguridad en TI.

---

## 2. Declaración de Uso Exclusivamente Académico

La herramienta creada **solo tiene fines educativos**.

Está estrictamente prohibido:

- Utilizarla para ocultar datos maliciosos.  
- Emplearla en entornos reales o no autorizados.  
- Compartir binarios o código con terceros para fines no académicos.  
- Usarla contra sistemas, redes o archivos que no sean propiedad del alumno.  
- Alterar el código con propósitos ofensivos o evasivos.

---

## 3. Restricciones y Medidas de Aislamiento (Obligatorias)

Toda compilación, ejecución y análisis deben realizarse **exclusivamente** dentro de una máquina virtual aislada.  
Se aplicaron las siguientes medidas de seguridad:

### 3.1 Configuración estricta de la VM

- Red: **Host-Only** o **NAT** (nunca Bridge).  
- Sin carpetas compartidas.  
- Sin portapapeles bidireccional.  
- Sin arrastrar y soltar (Drag & Drop).  
- Sin montaje automático de dispositivos USB.  
- Snapshot creado **antes** de ejecutar el binario.  
- Sin acceso a datos reales del sistema host.  
- El binario **nunca** se ejecuta fuera de la VM.

---

## 4. Reglas Éticas de Manejo de Archivos

### 4.1 Archivos permitidos
- Imágenes creadas por el alumno.  
- Mensajes de texto de prueba generados para la práctica.  

### 4.2 Archivos prohibidos
- Información personal real.  
- Archivos con datos sensibles.  
- Información que no pertenezca al alumno.  
- Archivos con derechos de autor sin permiso.  
- Cualquier contenido no relacionado a pruebas académicas controladas.

---

## 5. Lineamientos del Análisis Estático y Dinámico

### 5.1 Análisis Estático
- No se agregó ni permitió comportamiento malicioso.  
- Se revisó acceso a archivos, uso de memoria y operaciones válidas de esteganografía.  
- No existen rutinas de red, persistencia o exfiltración.

### 5.2 Análisis Dinámico
Todo se ejecutó dentro de una VM observando:

- Accesos controlados únicamente dentro del directorio del proyecto.  
- Sin creación de procesos inesperados.  
- Sin modificaciones persistentes al sistema.  
- Si se detecta cualquier comportamiento anómalo, la VM debe restaurarse desde el snapshot.

---

## 6. Prohibiciones Absolutas

- No correr binarios en el host físico.  
- No distribuir herramientas fuera del entorno académico.  
- No usar la esteganografía para ocultar datos reales.  
- No aplicar la herramienta en escenarios prácticos fuera de la tarea.  
- No integrar capacidades ofensivas, de propagación ni de persistencia.

---

## 7. Transparencia y Evidencia

Toda la evidencia del trabajo se almacenó en:
```bash
/analysis
/evidence
/docs/tests.md
```

Incluyendo:

- Capturas de pantalla.  
- Registros de ejecución.  
- Exportaciones de análisis estático.  
- Comportamiento observado en sandbox/VM.  

---

## 8. Conclusión Ética

El equipo afirma que todo desarrollo, pruebas y análisis se realizó con responsabilidad, siguiendo lineamientos éticos y restricciones de seguridad.  
El objetivo es exclusivamente académico y no representa intento alguno de crear software malicioso.

Los integrantes confirman su cumplimiento:

- Jair Eliud Flores Puente
-  

---

