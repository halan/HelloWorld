#include
using namespace std;

/*
 *
 * Criação do mundo segundo ataqlibert, em suas fases de roedeira
 *
 * */

/* No início, apenas o VACUO existia!*/
#define VACUO 0x00

int main()
{
  /* Do VACUO, surgiu a energia */
  char energia = ~VACUO;

  /* E da desernigação surgiu a particula */
  char particula = energia - energia - energia;

  /* Que por sua vez se uniu à outra partícula */
  char multiparticula = particula + particula;

  /* E então surgiu o bem */
  char bem = particula | multiparticula | (particula << multiparticula) | ((particula << particula) << multiparticula);

  /* E em contrário do bem, surgiu o mal */
  char mal = ~bem;

  /* Em seguida veio o espaço */
  char espaco = multiparticula << (multiparticula + multiparticula);

  /* E os todos outros elementos... */
  char H = (espaco << particula) | (espaco >> multiparticula);
  char o = ~(H << particula);
  char d = (o & mal) | (particula << multiparticula);
  char e = d | particula;
  char l = d | ((particula << multiparticula) << particula);
  char r = (o & mal) | multiparticula | particula << (multiparticula + multiparticula);
  char W = (e << (multiparticula + multiparticula)) | (r >> (multiparticula + multiparticula));

  /* Que por sua vez foram unídos */
  char frase[]={H,e,l,l,o,espaco,W,o,r,l,d,VACUO};

  /* Voilá! */
  cout << frase << endl;

  /* E no sábado eu descansei */
  return(VACUO);
}

// Sei que isso é inútil, mas as vezes é preciso relaxar 
