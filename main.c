#include <stdio.h>
#include <stdlib.h>
#include <GL/glxint.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/freeglut.h>

void generar();
void sol();
void cesped();
void tronco();
void hoja();
void pared();
void techo();
void borde();
void puerta();
void decoracionPuerta();
void bordeTecho();
void marcoVentana();
void ventana();
void bordeVentana();
void bordeArbol();


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(200, 200);
    glutInitWindowSize(420, 420);
    glutCreateWindow("Casita");
    glClearColor(135/255.0, 206/255.0, 250/255.0, 1.0);
    glutDisplayFunc(generar);
    glutMainLoop();
    return 0;
}

void generar(){
    glClear(GL_COLOR_BUFFER_BIT);
    
    sol();
    cesped();
    tronco();
    hoja();
    bordeArbol();
    pared();
    puerta();
    decoracionPuerta();
    borde();
    ventana();
    marcoVentana();
    bordeVentana();
    techo();
    bordeTecho();
    

    glFlush();
}

void cesped(){
    glColor3f(50/255.0, 205/255.0, 50/255.0); 
    glBegin(GL_QUADS);
    //Suelo de la casa
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);

    glEnd();

    glColor3f(1,1,1);
    glRasterPos2f(-0.2,-0.8);
    glutBitmapString(GLUT_BITMAP_HELVETICA_18,"AM19133");
}

void hoja(){
    glColor3f(30/255.0, 120/255.0, 30/255.0); // Valores más bajos para obtener un verde más oscuro
    glBegin(GL_TRIANGLES);
    //Base de Hojas de Triangulo
    glVertex2f(0.7,0);
    glVertex2f(0.85,0.4);
    glVertex2f(1,0);
    //Medio de Hojas de Triangulo
    glVertex2f(1,0.2);
    glVertex2f(0.7,0.2);
    glVertex2f(0.85,0.6);
    //Punta de Hojas de Triangulo
    glVertex2f(1,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.85,0.7);

    glEnd();
}

void tronco(){
    glColor3f(139/255.0, 69/255.0, 19/255.0); // Valores normalizados para un tono de café
    glBegin(GL_QUADS);
    //Tronco de Arbol
    glVertex2f(0.9,-0.2);
    glVertex2f(0.9,0);
    glVertex2f(0.8,0);
    glVertex2f(0.8,-0.2);

    glEnd();
}

void pared(){
    glColor3f(132/255.0, 130/255.0, 127/255.0); // Valores normalizados para un gris rata
    glBegin(GL_QUADS);
    //Pared de Cochera
    glVertex2f(-0.8,0);
    glVertex2f(0,0);
    glVertex2f(0,-0.4);
    glVertex2f(-0.8,-0.4);
    //Pared Principal
    glVertex2f(0,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,-0.4);
    glVertex2f(0,-0.4);

    glEnd();
}

void techo(){
    glColor3f(204/255.0, 78/255.0, 92/255.0); // Valores normalizados para un tono de ladrillo más claro
    glBegin(GL_TRIANGLES);
    //Techo de Cochera
    glVertex2f(-0.9,0);
    glVertex2f(0.1,0);
    glVertex2f(-0.4,0.5);
    //Techo Principal
    glVertex2f(-0.1,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(0.35,0.9);
    
    glEnd();
}

void borde(){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    //Lineado de Cochera
    glVertex2f(-0.8,0);
    glVertex2f(0,0);
    glVertex2f(0,-0.4);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.8,0);
    glVertex2f(-0.8,-0.4);
    glVertex2f(0,0);
    glVertex2f(0,-0.4);
    //Lineado de Pared Principal
    glVertex2f(0,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,-0.4);
    glVertex2f(0,-0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,-0.4);
    glVertex2f(0,0.4);
    glVertex2f(0,-0.4);
    //Lineado de Puerta
    glVertex2f(-0.7,-0.4);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.1,-0.1);
    glVertex2f(-0.1,-0.4);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.1,-0.1);
    //Decorado del Porton
    glVertex2f(-0.65,-0.15);
    glVertex2f(-0.15,-0.15);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.15,-0.2);
    glVertex2f(-0.65,-0.25);
    glVertex2f(-0.15,-0.25);
    glVertex2f(-0.65,-0.3);
    glVertex2f(-0.15,-0.3);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.15,-0.35);
    //Lineado de Puerta
    glVertex2f(0.25,-0.4);
    glVertex2f(0.25,-0.05);
    glVertex2f(0.45,-0.05);
    glVertex2f(0.45,-0.4);
    glVertex2f(0.25,-0.05);
    glVertex2f(0.45,-0.05);
    //Decorado de la Puerta
    glVertex2f(0.3,-0.1);
    glVertex2f(0.4,-0.1);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,-0.35);
    glVertex2f(0.4,-0.1);
    glVertex2f(0.4,-0.35);
    glVertex2f(0.3,-0.35);
    glVertex2f(0.4,-0.35);
    //Tronco de Arbol
    glVertex2f(0.9,-0.2);
    glVertex2f(0.9,0);
    glVertex2f(0.9,0);
    glVertex2f(0.8,0);
    glVertex2f(0.8,0);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.9,-0.2);

    glEnd();
}

void puerta(){
    glColor3f(192/255.0, 192/255.0, 192/255.0); // Valores normalizados para un gris claro
    glBegin(GL_QUADS);
    //Porton de Cochera
    glVertex2f(-0.7,-0.4);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.1,-0.1);
    glVertex2f(-0.1,-0.4);
    //Puerta Principal
    glVertex2f(0.25,-0.4);
    glVertex2f(0.25,-0.05);
    glVertex2f(0.45,-0.05);
    glVertex2f(0.45,-0.4);

    glEnd();
}

void decoracionPuerta(){
    glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,-0.35);
    glVertex2f(0.4,-0.35);
    glVertex2f(0.4,-0.1);

    glEnd();
}

void bordeTecho(){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    //Lineado de techo cochera
    glVertex2f(-0.9,0);
    glVertex2f(0.1,0);
    glVertex2f(-0.9,0);
    glVertex2f(-0.4,0.5);
    glVertex2f(0.1,0);
    glVertex2f(-0.4,0.5);
    //Lineado de techo Principal
    glVertex2f(-0.1,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(-0.1,0.4);
    glVertex2f(0.35,0.9);
    glVertex2f(0.8,0.4);
    glVertex2f(0.35,0.9);

    glEnd();
}

void marcoVentana(){
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    //marcoSuperior1
    glVertex2f(0.02,0);
    glVertex2f(0.22,0);
    glVertex2f(0.22,-0.02);
    glVertex2f(0.02,-0.02);
    //marcoLateral<-1
    glVertex2f(0.05,-0.02);
    glVertex2f(0.065,-0.02);
    glVertex2f(0.065,-0.18);
    glVertex2f(0.05,-0.18);
    //marcoInferior1
    glVertex2f(0.02,-0.2);
    glVertex2f(0.22,-0.2);
    glVertex2f(0.22,-0.18);
    glVertex2f(0.02,-0.18);
    //marcoLateral->1
    glVertex2f(0.18,-0.02);
    glVertex2f(0.195,-0.02);
    glVertex2f(0.195,-0.18);
    glVertex2f(0.18,-0.18);
    //marcoSuperior2
    glVertex2f(0.48,0);
    glVertex2f(0.68,0);
    glVertex2f(0.68,-0.02);
    glVertex2f(0.48,-0.02);
    //marcoLateral<-2
    glVertex2f(0.51,-0.02);
    glVertex2f(0.525,-0.02);
    glVertex2f(0.525,-0.18);
    glVertex2f(0.51,-0.18);
    //marcoInferior2
    glVertex2f(0.48,-0.2);
    glVertex2f(0.68,-0.2);
    glVertex2f(0.68,-0.18);
    glVertex2f(0.48,-0.18);
    //marcoLateral->2
    glVertex2f(0.64,-0.02);
    glVertex2f(0.655,-0.02);
    glVertex2f(0.655,-0.18);
    glVertex2f(0.64,-0.18);
    //marcoSuperior3
    glVertex2f(0.02,0.36);
    glVertex2f(0.22,0.36);
    glVertex2f(0.22,0.34);
    glVertex2f(0.02,0.34);
    //marcoLateral<-3
    glVertex2f(0.05,0.34);
    glVertex2f(0.065,0.34);
    glVertex2f(0.065,0.18);
    glVertex2f(0.05,0.18);
    //marcoInferior3
    glVertex2f(0.02,0.2);
    glVertex2f(0.22,0.2);
    glVertex2f(0.22,0.18);
    glVertex2f(0.02,0.18);
    //marcoLateral->3
    glVertex2f(0.18,0.34);
    glVertex2f(0.195,0.34);
    glVertex2f(0.195,0.18);
    glVertex2f(0.18,0.18);
    //marcoSuperior4
    glVertex2f(0.48,0.36);
    glVertex2f(0.68,0.36);
    glVertex2f(0.68,0.34);
    glVertex2f(0.48,0.34);
    //marcoLateral<-4
    glVertex2f(0.51,0.34);
    glVertex2f(0.525,0.34);
    glVertex2f(0.525,0.18);
    glVertex2f(0.51,0.18);
    //marcoInferior4
    glVertex2f(0.48,0.2);
    glVertex2f(0.68,0.2);
    glVertex2f(0.68,0.18);
    glVertex2f(0.48,0.18);
    //marcoLateral->4
    glVertex2f(0.64,0.34);
    glVertex2f(0.655,0.34);
    glVertex2f(0.655,0.18);
    glVertex2f(0.64,0.18);
    glEnd();
}

void ventana(){
    glColor3f(0.53, 0.81, 0.98);  // Azul claro, similar a un color de ventana
    glBegin(GL_QUADS);
    //ventana1
    glVertex2f(0.05,-0.02);
    glVertex2f(0.18,-0.02);
    glVertex2f(0.18,-0.18);
    glVertex2f(0.05,-0.18);
    //ventana2
    glVertex2f(0.51,-0.02);
    glVertex2f(0.645,-0.02);
    glVertex2f(0.645,-0.18);
    glVertex2f(0.51,-0.18);
    //ventana3
    glVertex2f(0.05,0.34);
    glVertex2f(0.18,0.34);
    glVertex2f(0.18,0.18);
    glVertex2f(0.05,0.18);
    //ventana4
    glVertex2f(0.51,0.34);
    glVertex2f(0.645,0.34);
    glVertex2f(0.645,0.18);
    glVertex2f(0.51,0.18);

    glEnd();
}

void bordeVentana(){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    //MarcoExterior1
    glVertex2f(0.02,0);
    glVertex2f(0.22,0);
    glVertex2f(0.22,0);
    glVertex2f(0.22,-0.02);
    glVertex2f(0.22,-0.02);
    glVertex2f(0.195,-0.02);
    glVertex2f(0.195,-0.02);
    glVertex2f(0.195,-0.18);
    glVertex2f(0.195,-0.18);
    glVertex2f(0.22,-0.18);
    glVertex2f(0.22,-0.18);
    glVertex2f(0.22,-0.2);
    glVertex2f(0.22,-0.2);
    glVertex2f(0.02,-0.2);
    glVertex2f(0.02,-0.2);
    glVertex2f(0.02,-0.18);
    glVertex2f(0.02,-0.18);
    glVertex2f(0.05,-0.18);
    glVertex2f(0.05,-0.18);
    glVertex2f(0.05,-0.02);
    glVertex2f(0.05,-0.02);
    glVertex2f(0.02,-0.02);
    glVertex2f(0.02,-0.02);
    glVertex2f(0.02,0);
    //marcoInterior1
    glVertex2f(0.065,-0.02);
    glVertex2f(0.18,-0.02);
    glVertex2f(0.18,-0.02);
    glVertex2f(0.18,-0.18);
    glVertex2f(0.18,-0.18);
    glVertex2f(0.065,-0.18);
    glVertex2f(0.065,-0.18);
    glVertex2f(0.065,-0.02);
    //marcoExterior2
    glVertex2f(0.48,0);
    glVertex2f(0.68,0);
    glVertex2f(0.68,0);
    glVertex2f(0.68,-0.02);
    glVertex2f(0.68,-0.02);
    glVertex2f(0.655,-0.02);
    glVertex2f(0.655,-0.02);
    glVertex2f(0.655,-0.18);
    glVertex2f(0.655,-0.18);
    glVertex2f(0.68,-0.18);
    glVertex2f(0.68,-0.18);
    glVertex2f(0.68,-0.2);
    glVertex2f(0.68,-0.2);
    glVertex2f(0.48,-0.2);
    glVertex2f(0.48,-0.2);
    glVertex2f(0.48,-0.18);
    glVertex2f(0.48,-0.18);
    glVertex2f(0.51,-0.18);
    glVertex2f(0.51,-0.18);
    glVertex2f(0.51,-0.02);
    glVertex2f(0.51,-0.02);
    glVertex2f(0.48,-0.02);
    glVertex2f(0.48,-0.02);
    glVertex2f(0.48,0);
    //marcoInterior2
    glVertex2f(0.525,-0.02);
    glVertex2f(0.64,-0.02);
    glVertex2f(0.64,-0.02);
    glVertex2f(0.64,-0.18);
    glVertex2f(0.64,-0.18);
    glVertex2f(0.525,-0.18);
    glVertex2f(0.525,-0.18);
    glVertex2f(0.525,-0.02);
    //MarcoExterior3
    glVertex2f(0.02,0.36);
    glVertex2f(0.22,0.36);
    glVertex2f(0.22,0.36);
    glVertex2f(0.22,0.34);
    glVertex2f(0.22,0.34);
    glVertex2f(0.195,0.34);
    glVertex2f(0.195,0.34);
    glVertex2f(0.195,0.2);
    glVertex2f(0.195,0.2);
    glVertex2f(0.22,0.2);
    glVertex2f(0.22,0.2);
    glVertex2f(0.22,0.18);
    glVertex2f(0.22,0.18);
    glVertex2f(0.02,0.18);
    glVertex2f(0.02,0.18);
    glVertex2f(0.02,0.2);
    glVertex2f(0.02,0.2);
    glVertex2f(0.05,0.2);
    glVertex2f(0.05,0.2);
    glVertex2f(0.05,0.34);
    glVertex2f(0.05,0.34);
    glVertex2f(0.02,0.34);
    glVertex2f(0.02,0.34);
    glVertex2f(0.02,0.36);
    //marcoInterior3
    glVertex2f(0.065,0.34);
    glVertex2f(0.18,0.34);
    glVertex2f(0.18,0.34);
    glVertex2f(0.18,0.2);
    glVertex2f(0.18,0.2);
    glVertex2f(0.065,0.2);
    glVertex2f(0.065,0.2);
    glVertex2f(0.065,0.34);
    //marcoExterior4
    glVertex2f(0.48,0.36);
    glVertex2f(0.68,0.36);
    glVertex2f(0.68,0.36);
    glVertex2f(0.68,0.34);
    glVertex2f(0.68,0.34);
    glVertex2f(0.655,0.34);
    glVertex2f(0.655,0.34);
    glVertex2f(0.655,0.2);
    glVertex2f(0.655,0.2);
    glVertex2f(0.68,0.2);
    glVertex2f(0.68,0.2);
    glVertex2f(0.68,0.18);
    glVertex2f(0.68,0.18);
    glVertex2f(0.48,0.18);
    glVertex2f(0.48,0.18);
    glVertex2f(0.48,0.2);
    glVertex2f(0.48,0.2);
    glVertex2f(0.51,0.2);
    glVertex2f(0.51,0.2);
    glVertex2f(0.51,0.34);
    glVertex2f(0.51,0.34);
    glVertex2f(0.48,0.34);
    glVertex2f(0.48,0.34);
    glVertex2f(0.48,0.36);
    //marcoInterior4
    glVertex2f(0.525,0.34);
    glVertex2f(0.64,0.34);
    glVertex2f(0.64,0.34);
    glVertex2f(0.64,0.2);
    glVertex2f(0.64,0.2);
    glVertex2f(0.525,0.2);
    glVertex2f(0.525,0.2);
    glVertex2f(0.525,0.34);
    //ventana1
    glVertex2f(0.12,-0.02);
    glVertex2f(0.12,-0.18);
    glVertex2f(0.065,-0.1);
    glVertex2f(0.18,-0.1);
    //ventana2
    glVertex2f(0.585,-0.02);
    glVertex2f(0.585,-0.18);
    glVertex2f(0.525,-0.1);
    glVertex2f(0.64,-0.1);
    //ventana3
    glVertex2f(0.12,0.34);
    glVertex2f(0.12,0.2);
    glVertex2f(0.065,0.27);
    glVertex2f(0.18,0.27);
    //ventana4
    glVertex2f(0.585,0.34);
    glVertex2f(0.585,0.2);
    glVertex2f(0.525,0.27);
    glVertex2f(0.64,0.27);
    glEnd();
}

void bordeArbol(){
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.7,0);
    glVertex2f(1,0);
    glVertex2f(1,0);
    glVertex2f(0.92,0.2);
    glVertex2f(0.92,0.2);
    glVertex2f(1,0.2);
    glVertex2f(1,0.2);
    glVertex2f(0.92,0.4);
    glVertex2f(0.92,0.4);
    glVertex2f(1,0.4);
    glVertex2f(1,0.4);
    glVertex2f(0.85,0.7);
    glVertex2f(0.85,0.7);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.78,0.4);
    glVertex2f(0.78,0.4);
    glVertex2f(0.7,0.2);
    glVertex2f(0.7,0.2);
    glVertex2f(0.78,0.2);
    glVertex2f(0.78,0.2);
    glVertex2f(0.7,0);
    glEnd();
}

void sol(){
    glColor3f(1,1,0);
    glEnable(GL_POINT_SMOOTH);//Habilita el suavizado de puntos.
    glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);//Establece un hint (indicación) para el suavizado de puntos.
    glPointSize(75);
    glBegin(GL_POINTS);
    glVertex2f(-0.8, 0.8);
    glEnd();

}
