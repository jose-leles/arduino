// circuito
// https://www.tinkercad.com/things/a9GFdpWnCuo-mighty-bombul/editel?tenant=circuits

// verde, amarelo, vermelho 
int semaforoPrincipal[] = {2, 3, 4};
int semaforoTranversal[] = {11, 12, 13};

#define VERDE 0
#define AMARELO 1
#define VERMELHO 2

void setup() {
  //semaforo esquerdo
  pinMode(semaforoPrincipal[0],OUTPUT);
  pinMode(semaforoPrincipal[1],OUTPUT);
  pinMode(semaforoPrincipal[2],OUTPUT);

  //semaforo direito
  pinMode(semaforoTranversal[0],OUTPUT);
  pinMode(semaforoTranversal[1],OUTPUT);
  pinMode(semaforoTranversal[2],OUTPUT);
  
}

void loop() {
    trocarEstadoSemaforo(semaforoPrincipal, VERMELHO);
    trocarEstadoSemaforo(semaforoTranversal, VERDE);
    delay(11 * 1000);
    trocarEstadoSemaforo(semaforoPrincipal, VERMELHO);
    trocarEstadoSemaforo(semaforoTranversal, AMARELO);
    delay(4 * 1000);
    trocarEstadoSemaforo(semaforoPrincipal, VERDE);
    trocarEstadoSemaforo(semaforoTranversal, VERMELHO);
    delay(20 * 1000);
    trocarEstadoSemaforo(semaforoPrincipal, AMARELO);
    trocarEstadoSemaforo(semaforoTranversal, VERMELHO);
    delay(4 * 1000);
}

void trocarEstadoSemaforo(int semaforo[], int lampada){
  digitalWrite(semaforo[0], LOW);
  digitalWrite(semaforo[1], LOW);
  digitalWrite(semaforo[2], LOW);

  digitalWrite(semaforo[lampada], HIGH);
}
