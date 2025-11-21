# CHECKLIST.md

## README.md en la raíz
- [ ] Objetivo del proyecto en 2–3 líneas
- [ ] Plataforma objetivo y dependencias principales
- [ ] Comandos claros y probados para clonar, compilar y ejecutar paso a paso
- [ ] Enlace relativo al reporte final en /docs
- [ ] Instrucciones para localizar el video de presentación individual

## ETHICS.md en la raíz
- [ ] Declaración final de cumplimiento ético y de seguridad
- [ ] Medidas aplicadas en pruebas
- [ ] Lista de integrantes que firman la declaración

## METADATA.md en la raíz
- [ ] Configuración reproducible de VMs utilizadas
- [ ] IPs internas anónimas si el repositorio es público
- [ ] Sistema operativo y versiones
- [ ] Snapshots utilizados (ID y fecha)
- [ ] Versiones de compilador y herramientas de análisis

## CHANGELOG.md
- [ ] Registro resumido de commits clave
- [ ] Fechas y autores desde el inicio hasta la entrega final

## Código fuente completo en /src
- [ ] Código completo y organizado
- [ ] Comentarios en el código según corresponda
- [ ] README de compilación específico si aplica
- [ ] Makefile o script build.sh que compile las versiones en /bin con un solo comando reproducible

## Binarios en /bin
- [ ] Build con símbolos (no strip), por ejemplo: payload_debug_x64
- [ ] Build optimizada opcional: payload_release_x64
- [ ] Nombres claros y consistentes

## Reporte técnico final en /docs/report_final.pdf
- [ ] Extensión entre 6 y 12 páginas
- [ ] Resumen ejecutivo
- [ ] Descripción del payload y límites éticos
- [ ] Diseño e implementación técnica
- [ ] Metodología de pruebas
- [ ] Análisis estático
- [ ] Análisis dinámico
- [ ] Ingeniería inversa
- [ ] Riesgos y mitigaciones
- [ ] Conclusiones y trabajo futuro
- [ ] Referencias
- [ ] Anexos con tablas de IOCs y lista de archivos en /analysis y /evidence

## Registro de pruebas y resultados en /docs/tests.md
- [ ] Comandos exactos usados para compilar y ejecutar
- [ ] Salidas de consola relevantes
- [ ] Resultados de pruebas dinámicas
- [ ] Pasos para reproducir

## Análisis estático exportado en /analysis
- [ ] Proyecto exportado de Ghidra, Radare2 u otra herramienta
- [ ] Lista de strings extraídos (JSON o TXT)
- [ ] Capturas relevantes con nombres claros

## Análisis dinámico y registros en /analysis o /evidence
- [ ] Logs de ejecución
- [ ] Dumps de memoria
- [ ] Tráfico de red (pcapng) si aplica
- [ ] Resumen de IOCs

## Evidencias multimedia en /evidence
- [ ] Tres capturas: snapshot VM previo, ejecución en VM, análisis estático
- [ ] Video demo_short.mp4 de 2–5 minutos
- [ ] Nombres claros y referencia a estos archivos

## ETHICS final y verificación en /docs/METADATA.md
- [ ] Confirmación de pruebas en VMs aisladas
- [ ] Procedimiento de restauración de snapshots

## Checklist final
- [ ] Todos los elementos verificados
