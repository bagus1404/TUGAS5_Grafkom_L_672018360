#include <GL/glu.h>
#include <GL/glut.h>

void init(void);
void rumah(void);
void jendeladanpintu();
void Furniture(void);
void tekanhilang(void);
void menghilangkan(void);
void tampilan(void);
void display(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xrotasi = 0.0f;
float yrotasi = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(1.5f);
}

void rumah(void)
{
    //genting kanan
    glBegin(GL_POLYGON);
    glColor3ub(205, 133, 63);
    glVertex3f(80,30,20);
    glVertex3f(80,30,-80);
    glVertex3f(-20,90,-30);
    glEnd();
    //genting kiri
    glBegin(GL_POLYGON);
    glColor3ub(205, 133, 63);
    glVertex3f(-120,30,20);
    glVertex3f(-120,30,-80);
    glVertex3f(-20,90,-30);
    glEnd();
    //genting belakang
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(205, 133, 63);
    glVertex3f(-120,30,-80);
    glVertex3f(-20,90,-30);
    glVertex3f(80,30,-80);
    glEnd();
    //genting depan
    glBegin(GL_POLYGON);
    glColor3ub(205, 133, 63);
    glVertex3f(-120,30,20);
    glVertex3f(80,30,20);
    glVertex3f(-20,90,- 30);
    glEnd();
    //ternit
    glBegin(GL_QUADS);
    glColor3ub(189, 183, 107);
    glVertex3f(-120,30,20);
    glVertex3f(80,30,20);
    glVertex3f(80,30,-80);
    glVertex3f(-120,30,-80);
    //ternit 1
    glBegin(GL_QUADS);
    glColor3ub(240, 230, 140);
    glVertex3f(-30,29.5,-0);
    glVertex3f(60,29.5,-0);
    glVertex3f(60,29.5,-60);
    glVertex3f(-30,29.5,-60);
    //ternit 2
    glBegin(GL_QUADS);
    glColor3ub(240, 230, 140);
    glVertex3f(-110,29.5,-0);
    glVertex3f(-50,29.5,-0);
    glVertex3f(-50,29.5,-60);
    glVertex3f(-110,29.5,-60);
    //tembok belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(250, 250, 210) ;
    glVertex3f(-115,-50,-80);
    glVertex3f(-115,30,-80);
    glVertex3f(70,30,-80);
    glVertex3f(70,-50,-80);
    glEnd();
    //tembok kanan
    glBegin(GL_QUADS);
    glColor3ub(250, 250, 210);
    glVertex3f(70,30,20);
    glVertex3f(70,-50,20);
    glVertex3f(70,-50,-80);
    glVertex3f(70,30,-80);
    glEnd();
    //tembok kamar tengah
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-40,30,20);
    glVertex3f(-40,-50,20);
    glVertex3f(-40,-50,-80);
    glVertex3f(-40,30,-80);
    glEnd();
    //pintu kamar tengah kiri
    glBegin(GL_QUADS);
    glColor3ub(200, 184, 135);
    glVertex3f(-41,10,10);
    glVertex3f(-41,-50,10);
    glVertex3f(-41,-50,-10);
    glVertex3f(-41,10,-10);
    glEnd();
    //tepi pintu kamar tengah kiri
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3f(-41,10,10);
    glVertex3f(-41,-50,10);
    glVertex3f(-41,-50,-10);
    glVertex3f(-41,10,-10);
    glEnd();
    //pintu kamar tengah kanan
    glBegin(GL_QUADS);
    glColor3ub(200, 184, 135);
    glVertex3f(-39,10,10);
    glVertex3f(-39,-50,10);
    glVertex3f(-39,-50,-10);
    glVertex3f(-39,10,-10);
    glEnd();
    //tepi pintu kamar tengah kiri
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3f(-39,10,10);
    glVertex3f(-39,-50,10);
    glVertex3f(-39,-50,-10);
    glVertex3f(-39,10,-10);
    glEnd();
    //kunci pintu kamar tengah kiri
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-38,-20,10);
    glVertex3f(-38,-25,10);
    glVertex3f(-38,-25,5);
    glVertex3f(-38,-20,5);
    glEnd();
    //kunci pintu kamar tengah kiri
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-42,-20,10);
    glVertex3f(-42,-25,10);
    glVertex3f(-42,-25,5);
    glVertex3f(-42,-20,5);
    glEnd();
    //tembok kiri
    glBegin(GL_QUADS);
    glColor3ub(250, 250, 210);
    glVertex3f(-115,30,20);
    glVertex3f(-115,-50,20);
    glVertex3f(-115,-50,-80);
    glVertex3f(-115,30,-80);
    glEnd();
    //lantai
    glBegin(GL_QUADS);
    glColor3ub(189, 183, 107);
    glVertex3f(-125,-50,70);
    glVertex3f(75,-50,70);
    glVertex3f(75,-50,-85);
    glVertex3f(-125,-50,-85);

    glEnd();

}
void jendeladanpintu(void)
{
    //jendela tembok kiri luar
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(-116,20,-10);
    glVertex3f(-116,-20,-10);
    glVertex3f(-116,-20,-50);
    glVertex3f(-116,20,-50);
    glEnd();
    //tepi jendela tembok kiri luar
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(-116,20,-10);
    glVertex3f(-116,-20,-10);
    glVertex3f(-116,-20,-50);
    glVertex3f(-116,20,-50);
    glEnd();
    //jendela tembok kiri dalam
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(-114,20,-10);
    glVertex3f(-114,-20,-10);
    glVertex3f(-114,-20,-50);
    glVertex3f(-114,20,-50);
    glEnd();
    //tepi jendela tembok kiri dalam
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(-114,20,-10);
    glVertex3f(-114,-20,-10);
    glVertex3f(-114,-20,-50);
    glVertex3f(-114,20,-50);
    glEnd();

    //jendela tembok kanan luar
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(71,20,-10);
    glVertex3f(71,-20,-10);
    glVertex3f(71,-20,-50);
    glVertex3f(71,20,-50);
    glEnd();
    //tepi jendela tembok kanan luar
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(71,20,-10);
    glVertex3f(71,-20,-10);
    glVertex3f(71,-20,-50);
    glVertex3f(71,20,-50);
    glEnd();
    //jendela tembok kanan dalam
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(69,20,-10);
    glVertex3f(69,-20,-10);
    glVertex3f(69,-20,-50);
    glVertex3f(69,20,-50);
    glEnd();
    //jendela tembok kanan dalam
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(69,20,-10);
    glVertex3f(69,-20,-10);
    glVertex3f(69,-20,-50);
    glVertex3f(69,20,-50);
    glEnd();
    //jendela tembok belakang luar
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(-20,25,-81);
    glVertex3f(-20,5,-81);
    glVertex3f(51,5,-81);
    glVertex3f(51,25,-81);
    glEnd();
    //jendela tembok belakang luar
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(-20,25,-81);
    glVertex3f(-20,5,-81);
    glVertex3f(51,5,-81);
    glVertex3f(51,25,-81);
    glEnd();
    //jendela tembok belakang dalam
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(-20,25,-79);
    glVertex3f(-20,5,-79);
    glVertex3f(51,5,-79);
    glVertex3f(51,25,-79);
    glEnd();
    //jendela tembok belakang dalam
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(-20,25,-79);
    glVertex3f(-20,5,-79);
    glVertex3f(51,5,-79);
    glVertex3f(51,25,-79);
    glEnd();
}
void Furniture(void)
{
    //TV
    glBegin(GL_QUADS);
    glColor3ub(220, 220, 220);
    glVertex3f(-110,-30,-70);
    glVertex3f(-110,5,-70);
    glVertex3f(-70,5,-70);
    glVertex3f(-70,-30,-70);
    glEnd();
    //garis TV
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-110,-30,-70);
    glVertex3f(-110,5,-70);
    glVertex3f(-70,5,-70);
    glVertex3f(-70,-30,-70);
    glEnd();
    //meja
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-110,-30,-55);
    glVertex3f(-110,-50,-55);
    glVertex3f(-70,-50,-55);
    glVertex3f(-70,-30,-55);
    glEnd();
    //atap meja
    glBegin(GL_QUADS);
    glColor3ub(11, 4, 50);
    glVertex3f(-110,-30,-80);
    glVertex3f(-70,-30,-80);
    glVertex3f(-70,-30,-55);
    glVertex3f(-110,-30,-55);
    glEnd();
    //meja kanan
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-70,-50,-55);
    glVertex3f(-70,-50,-80);
    glVertex3f(-70,-30,-80);
    glVertex3f(-70,-30,-55);
    glEnd();
    //meja kiri
    glBegin(GL_QUADS);
    glColor3ub(222, 184, 135);
    glVertex3f(-110,-50,-55);
    glVertex3f(-110,-50,-80);
    glVertex3f(-110,-30,-80);
    glVertex3f(-110,-30,-55);
    glEnd();
    //kasur depan
    glBegin(GL_QUADS);
    glColor3ub(178, 34, 33);
    glVertex3f(-110,-40,15);
    glVertex3f(-110,-50,15);
    glVertex3f(-60,-50,15);
    glVertex3f(-60,-40,15);
    glEnd();
    //kasur belakang
    glBegin(GL_QUADS);
    glColor3ub(178, 34, 33);
    glVertex3f(-110,-40,-40);
    glVertex3f(-110,-50,-40);
    glVertex3f(-60,-50,-40);
    glVertex3f(-60,-40,-40);
    glEnd();
    //kasur kanan
    glBegin(GL_QUADS);
    glColor3ub(178, 34, 33);
    glVertex3f(-60,-50,15);
    glVertex3f(-60,-50,-40);
    glVertex3f(-60,-40,-40);
    glVertex3f(-60,-40,15);
    glEnd();
    //kasur kiri
    glBegin(GL_QUADS);
    glColor3ub(178, 34, 33);
    glVertex3f(-110,-50,15);
    glVertex3f(-110,-50,-40);
    glVertex3f(-100,-40,-40);
    glVertex3f(-100,-40,15);
    glEnd();
    //kasur
    glBegin(GL_QUADS);
    glColor3ub(205, 92, 92);
    glVertex3f(-110,-40,15);
    glVertex3f(-110,-40,-40);
    glVertex3f(-60,-40,-40);
    glVertex3f(-60,-40,15);
    glEnd();
    //lemari belakang
    glBegin(GL_QUADS);
    glColor3ub(173, 255, 48);
    glVertex3f(-30,-50,-75);
    glVertex3f(-30,5,-75);
    glVertex3f(5,5,-75);
    glVertex3f(5,-50,-75);
    glEnd();
    //lemari kiri
    glBegin(GL_QUADS);
    glColor3ub(191, 129, 31);
    glVertex3f(-30,-50,-80);
    glVertex3f(-30,5,-80);
    glVertex3f(-30,5,-60);
    glVertex3f(-30,-50,-60);
    glEnd();
    //lemari kanan
    glBegin(GL_QUADS);
    glColor3ub(191, 129, 31);
    glVertex3f(5,-50,-80);
    glVertex3f(5,5,-80);
    glVertex3f(5,5,-60);
    glVertex3f(5,-50,-60);
    glEnd();
    //lemari atas
    glBegin(GL_QUADS);
    glColor3ub(191, 129, 31);
    glVertex3f(-30,5,-80);
    glVertex3f(5,5,-80);
    glVertex3f(5,5,-60);
    glVertex3f(-30,5,-60);
    glEnd();
    //lemari bawah
    glBegin(GL_QUADS);
    glColor3ub(115, 77, 16);
    glVertex3f(-30,-45,-80);
    glVertex3f(5,-45,-80);
    glVertex3f(5,-45,-60);
    glVertex3f(-30,-45,-60);
    glEnd();
    //rak lemari
    glBegin(GL_QUADS);
    glColor3ub(115, 77, 16);
    glVertex3f(-30,-30,-80);
    glVertex3f(5,-30,-80);
    glVertex3f(5,-30,-60);
    glVertex3f(-30,-30,-60);
    glEnd();
    //rak lemari
    glBegin(GL_QUADS);
    glColor3ub(115, 77, 16);
    glVertex3f(-30,-10,-80);
    glVertex3f(5,-10,-80);
    glVertex3f(5,-10,-60);
    glVertex3f(-30,-10,-60);
    glEnd();
    //kulkas belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(65,-50,-75);
    glVertex3f(65,5,-75);
    glVertex3f(40,5,-75);
    glVertex3f(40,-50,-75);
    glEnd();
    //kulkas kanan
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(65,-50,-80);
    glVertex3f(65,5,-80);
    glVertex3f(65,5,-60);
    glVertex3f(65,-50,-60);
    glEnd();
    //kulkas kiri
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(40,-50,-80);
    glVertex3f(40,5,-80);
    glVertex3f(40,5,-60);
    glVertex3f(40,-50,-60);
    glEnd();
    //kulkas atas
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(65,5,-80);
    glVertex3f(40,5,-80);
    glVertex3f(40,5,-60);
    glVertex3f(65,5,-60);
    glEnd();
    //kulkas bawah
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(65,-50,-80);
    glVertex3f(40,-50,-80);
    glVertex3f(40,-50,-60);
    glVertex3f(65,-50,-60);
    glEnd();
    //kulkas depan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(65,-50,-60);
    glVertex3f(65,-20,-60);
    glVertex3f(40,-20,-60);
    glVertex3f(40,-50,-60);
    glEnd();
    //kulkas depan
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(65,-20,-60);
    glVertex3f(65,-15,-60);
    glVertex3f(40,-15,-60);
    glVertex3f(40,-20,-60);
    glEnd();
    //kulkas depan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(65,5,-60);
    glVertex3f(65,-15,-60);
    glVertex3f(40,-15,-60);
    glVertex3f(40,5,-60);
    glEnd();
    //ac belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-110,25,-78);
    glVertex3f(-110,15,-78);
    glVertex3f(-75,15,-78);
    glVertex3f(-75,25,-78);
    glEnd();
    //ac kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-110,15,-80);
    glVertex3f(-110,25,-80);
    glVertex3f(-110,25,-70);
    glVertex3f(-110,15,-70);
    glEnd();
    //ac kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-75,25,-80);
    glVertex3f(-75,15,-80);
    glVertex3f(-75,15,-70);
    glVertex3f(-75,25,-70);
    glEnd();
    //ac bawah
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-110,15,-80);
    glVertex3f(-75,15,-80);
    glVertex3f(-75,15,-75);
    glVertex3f(-110,15,-75);
    glEnd();
    //ac depan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-110,25,-70);
    glVertex3f(-110,15,-70);
    glVertex3f(-75,15,-70);
    glVertex3f(-75,25,-70);
    glEnd();
    //ac depan
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3f(-110,25,-70);
    glVertex3f(-110,15,-70);
    glVertex3f(-75,15,-70);
    glVertex3f(-75,25,-70);
    glEnd();
    //ac depan
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex3f(-110,20,-69);
    glVertex3f(-110,20,-69);
    glVertex3f(-75,20,-69);
    glVertex3f(-75,20,-69);
    glEnd();
    //ac atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-110,25,-80);
    glVertex3f(-75,25,-80);
    glVertex3f(-75,25,-70);
    glVertex3f(-110,25,-70);
    glEnd();
    //kasur depan
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(-110,-40,15);
    glVertex3f(-110,-50,15);
    glVertex3f(-60,-50,15);
    glVertex3f(-60,-40,15);
    glEnd();
    //kasur depan
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(-110,-40,-40);
    glVertex3f(-110,-50,-40);
    glVertex3f(-60,-50,-40);
    glVertex3f(-60,-40,-40);
    glEnd();
    //kayu meja makan kiri
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(20,-60,15);
    glVertex3f(20,-60,-30);
    glVertex3f(30,-30,-30);
    glVertex3f(30,-30,15);
    glEnd();
    //kayu meja makan kanan
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(50,-60,15);
    glVertex3f(50,-60,-30);
    glVertex3f(40,-30,-30);
    glVertex3f(40,-30,15);
    glEnd();
    //meja makan
    glBegin(GL_QUADS);
    glColor3ub(253, 215, 3);
    glVertex3f(50,-30,15);
    glVertex3f(50,-30,-30);
    glVertex3f(20,-30,-30);
    glVertex3f(20,-30,15);
    glEnd();
    //kursi makan
    glBegin(GL_QUADS);
    glColor3ub(253, 215, 3);
    glVertex3f(15,-40,15);
    glVertex3f(15,-40,-30);
    glVertex3f(-5,-40,-30);
    glVertex3f(-5,-40,15);
    glEnd();
    //kayu kursi makan kanan
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(15,-60,15);
    glVertex3f(15,-60,-30);
    glVertex3f(10,-40,-30);
    glVertex3f(10,-40,15);
    glEnd();
    //kayu meja makan kiri
    glBegin(GL_QUADS);
    glColor3ub(171, 114, 50);
    glVertex3f(-5,-60,15);
    glVertex3f(-5,-60,-30);
    glVertex3f(0,-40,-30);
    glVertex3f(0,-40,15);
    glEnd();

}
void tekanhilang(void)
{
    //tembokdepan
    glBegin(GL_QUADS);
    glColor3ub(250, 250, 210);
    glVertex3f(-115,-50,20);
    glVertex3f(-115,30,20);
    glVertex3f(70,30,20);
    glVertex3f(70,-50,20);
    glEnd();
    //atap cagak
    glBegin(GL_QUADS);
    glColor3ub(205, 133, 63);
    glVertex3f(-120,30,70);
    glVertex3f(80,30,70);
    glVertex3f(80,30,20);
    glVertex3f(-120,30,20);
    //cagak kanan
    glBegin(GL_QUADS);
    glColor3ub(210, 105, 30);
    glVertex3f(60,30,60);
    glVertex3f(60,-50,60);
    glVertex3f(65,-50,60);
    glVertex3f(65,30,60);
    glEnd();
    //cagak kiri
    glBegin(GL_QUADS);
    glColor3ub(210, 105, 30);
    glVertex3f(-110,30,60);
    glVertex3f(-110,-50,60);
    glVertex3f(-115,-50,60);
    glVertex3f(-115,30,60);
    glEnd();
    //pintu kiri luar
    glBegin(GL_QUADS);
    glColor3ub(210, 105, 30);
    glVertex3f(-5,-50,21);
    glVertex3f(-25,-50,21);
    glVertex3f(-25,15,21);
    glVertex3f(-5,20,21);
    glEnd();
    //kunci pintu kiri luar
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-5,-20,22);
    glVertex3f(-8,-20,22);
    glVertex3f(-8,-15,22);
    glVertex3f(-5,-15,22);
    glEnd();
    //pintu kiri dalam
    glBegin(GL_QUADS);
    glColor3ub(210, 105, 30);
    glVertex3f(-5,-50,19);
    glVertex3f(-25,-50,19);
    glVertex3f(-25,15,19);
    glVertex3f(-5,20,19);
    glEnd();
    //kunci pintu kiri dalam
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-5,-20,18);
    glVertex3f(-8,-20,18);
    glVertex3f(-8,-15,18);
    glVertex3f(-5,-15,18);
    glEnd();
    //pintu kanan luar
    glBegin(GL_QUADS);
    glColor3ub(210, 105, 30);
    glVertex3f(15,-50,21);
    glVertex3f(-5,-50,21);
    glVertex3f(-5,20,21);
    glVertex3f(15,15,21);
    glEnd();
    //kunci pintu kiri luar
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-5,-20,22);
    glVertex3f(-2,-20,22);
    glVertex3f(-2,-15,22);
    glVertex3f(-5,-15,22);
    glEnd();
    //pintu kanan dalam
    glBegin(GL_QUADS);
    glColor3ub(210, 105, 30);
    glVertex3f(15,-50,19);
    glVertex3f(-5,-50,19);
    glVertex3f(-5,20,19);
    glVertex3f(15,15,19);
    glEnd();
    //kunci pintu kiri luar
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(-5,-20,18);
    glVertex3f(-2,-20,18);
    glVertex3f(-2,-15,18);
    glVertex3f(-5,-15,18);
    glEnd();
    //tepi pintu kiri
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-5,-49,21.5);
    glVertex3f(-25,-49,21.5);
    glVertex3f(-25,15,21.5);
    glVertex3f(-5,20,21.5);
    glEnd();
    //tepipintu kanan
    glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex3f(-5,-49,21.5);
    glVertex3f(15,-49,21.5);
    glVertex3f(15,15,21.5);
    glVertex3f(-5,20,21.5);
    glEnd();
     //jendela kanan
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(55,-20,21);
    glVertex3f(25,-20,21);
    glVertex3f(25,15,21);
    glVertex3f(55,15,21);
    glEnd();
    //tepijendelakanan
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(55,-20,21);
    glVertex3f(25,-20,21);
    glVertex3f(25,15,21);
    glVertex3f(55,15,21);
    glEnd();
    //jendela kiri
    glBegin(GL_QUADS);
    glColor3ub(224, 255, 255);
    glVertex3f(-55,-20,20.5);
    glVertex3f(-95,-20,20.5);
    glVertex3f(-95,15,20.5);
    glVertex3f(-55,15,20.5);
    glEnd();
    //tepijendelakiri
    glBegin(GL_LINE_LOOP);
    glColor3ub(210, 105, 30);
    glVertex3f(-95,-20,21);
    glVertex3f(-55,-20,21);
    glVertex3f(-55,15,21);
    glVertex3f(-95,15,21);
    glEnd();
    //tepijendela
    glBegin(GL_LINE_STRIP);
    glColor3ub(210, 105, 30);
    glVertex3f(-95,5,21);
    glVertex3f(-55,5,21);
    glEnd();
}


void menghilangkan(void)
{
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    rumah();
    jendeladanpintu();
    Furniture();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}
void letak()
{
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrotasi, 1.0f,0.0f, 0.0f);
    glRotatef(yrotasi, 0.0f, 1.0f, 0.0f);
}



void tampilan(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    rumah();
    jendeladanpintu();
    Furniture();
    tekanhilang();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void display(void)
{
    if (is_depth)
        tampilan();
    else
        menghilangkan();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'z':
        case 'Z':
            glTranslated(0,0,3);
            break;
        case 'v':
        case 'V':
            glTranslated(3,0,0);
            break;
        case 'x':
        case 'X':
            glTranslated(0,0,-3);
            break;
        case 'c':
        case 'C':
            glTranslated(-3,0,0);
            break;
        case '1':
            if(is_depth)
            {
                is_depth = 0;
                tampilan();
            }
            else
            {
                is_depth = 1;
                menghilangkan();
            }
            break;
        case '2':
            glRotated(2,0,1,0);
            break;
        case '3':
            glRotated(-2,0,1,0);
            break;
        case '4':
            glRotated(2,1,0,0);
            break;
        case '5':
            glRotated(-2,1,0,0);
            break;
        case '6':
            glTranslated(0,-3,0);
            break;
        case '7':
            glTranslated(0,3,0);
            break;
        case '8':
            glRotated(-2,0,0,1);
            break;
        case'9':
            glRotated(2,0,0,1);
            break;

    }
    display();
}

void idle()
{
    if (!mouseDown)
    {
        xrotasi == 0.3f;
        yrotasi == 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrotasi;
        ydiff = -y + xrotasi;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    letak();
    if (mouseDown)
    {
        yrotasi = x - xdiff;
        xrotasi = y + ydiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
    if(tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100, lebar / tinggi, 5, 1000);
    glTranslated(0, 0, -200);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(350, 100);
    glutInitWindowSize(900, 600);
    glutCreateWindow("Muhammad Bagus Rizki - 672018360");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}
