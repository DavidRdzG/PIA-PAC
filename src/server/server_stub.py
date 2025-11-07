# !/usr/bin/env python3
# Servidor HTTP para pruebas locales. Responde a GET /status con un JSON.
# Autor: Jair Eliud Flores Puente

from http.server import BaseHTTPRequestHandler, HTTPServer
import json

class Handler(BaseHTTPRequestHandler):
    def do_GET(self):
        if self.path == '/status':
            payload = {"status": "ok", "message": "Servidor de pruebas - PIA Tarea 6"}
            body = json.dumps(payload).encode('utf-8')
            self.send_response(200)
            self.send_header('Content-Type', 'application/json')
            self.send_header('Content-Length', str(len(body)))
            self.end_headers()
            self.wfile.write(body)
        else:
            self.send_response(404)
            self.end_headers()

if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser(description='Server Stub para PIA Tarea 6')
    parser.add_argument('--host', default='127.0.0.1')
    parser.add_argument('--port', type=int, default=8000)
    args = parser.parse_args()

    server = HTTPServer((args.host, args.port), Handler)
    print('Server Stub en escucha {}:{}'.format(args.host, args.port))
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print('\nShutting down')
        server.server_close()
