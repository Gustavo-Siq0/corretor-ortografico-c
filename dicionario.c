#include <string.h>
#include "dicionario.h"

int carregarDicionario(Palavra *dic) {

    // Grupo: casa, caso, cama, cana, mesa
    strcpy(dic[0].palavra, "casa");
    strcpy(dic[0].significado, "Construcao destinada a moradia.");
    strcpy(dic[1].palavra, "caso");
    strcpy(dic[1].significado, "Acontecimento ou situacao.");
    strcpy(dic[2].palavra, "cama");
    strcpy(dic[2].significado, "Movel onde se dorme.");
    strcpy(dic[3].palavra, "cana");
    strcpy(dic[3].significado, "Planta da qual se extrai o acucar.");
    strcpy(dic[4].palavra, "mesa");
    strcpy(dic[4].significado, "Movel com tampo para refeicoes ou trabalho.");

    // Grupo: gato, rato, pato, prato, mato
    strcpy(dic[5].palavra, "gato");
    strcpy(dic[5].significado, "Animal domestico felino.");
    strcpy(dic[6].palavra, "rato");
    strcpy(dic[6].significado, "Pequeno roedor.");
    strcpy(dic[7].palavra, "pato");
    strcpy(dic[7].significado, "Ave aquatica domestica.");
    strcpy(dic[8].palavra, "prato");
    strcpy(dic[8].significado, "Recipiente onde se serve a comida.");
    strcpy(dic[9].palavra, "mato");
    strcpy(dic[9].significado, "Vegetacao rasteira e densa.");

    // Grupo: pasta, pasto, programa, programar
    strcpy(dic[10].palavra, "pasta");
    strcpy(dic[10].significado, "Mistura macia ou capa para guardar papeis.");
    strcpy(dic[11].palavra, "pasto");
    strcpy(dic[11].significado, "Terreno coberto de capim para o gado.");
    strcpy(dic[12].palavra, "programa");
    strcpy(dic[12].significado, "Conjunto de instrucoes executadas por um computador.");
    strcpy(dic[13].palavra, "programar");
    strcpy(dic[13].significado, "Escrever instrucoes para um computador.");

    // Palavras variadas
    strcpy(dic[14].palavra, "livro");
    strcpy(dic[14].significado, "Conjunto de folhas impressas e encadernadas.");
    strcpy(dic[15].palavra, "livre");
    strcpy(dic[15].significado, "Que tem liberdade.");
    strcpy(dic[16].palavra, "janela");
    strcpy(dic[16].significado, "Abertura na parede para entrada de luz e ar.");
    strcpy(dic[17].palavra, "agua");
    strcpy(dic[17].significado, "Liquido transparente essencial a vida.");
    strcpy(dic[18].palavra, "fogo");
    strcpy(dic[18].significado, "Calor e luz produzidos pela combustao.");
    strcpy(dic[19].palavra, "terra");
    strcpy(dic[19].significado, "Planeta onde vivemos ou o solo.");

    // Grupo: serra, ferro, sapato, sabao, salada, sala
    strcpy(dic[20].palavra, "serra");
    strcpy(dic[20].significado, "Cadeia de montanhas ou ferramenta de corte.");
    strcpy(dic[21].palavra, "ferro");
    strcpy(dic[21].significado, "Metal usado na construcao.");
    strcpy(dic[22].palavra, "sapato");
    strcpy(dic[22].significado, "Calcado que cobre o pe.");
    strcpy(dic[23].palavra, "sabao");
    strcpy(dic[23].significado, "Produto usado para lavar.");
    strcpy(dic[24].palavra, "salada");
    strcpy(dic[24].significado, "Prato feito com vegetais crus.");
    strcpy(dic[25].palavra, "sala");
    strcpy(dic[25].significado, "Comodo da casa para receber pessoas.");

    // Grupo: mala, bala, bola, bolo
    strcpy(dic[26].palavra, "mala");
    strcpy(dic[26].significado, "Bolsa grande usada em viagens.");
    strcpy(dic[27].palavra, "bala");
    strcpy(dic[27].significado, "Doce pequeno ou projetil de arma.");
    strcpy(dic[28].palavra, "bola");
    strcpy(dic[28].significado, "Objeto redondo usado em jogos.");
    strcpy(dic[29].palavra, "bolo");
    strcpy(dic[29].significado, "Massa doce assada.");

    // Grupo: solo, sol, sal, mar, lua, luz, rua
    strcpy(dic[30].palavra, "solo");
    strcpy(dic[30].significado, "Superficie da terra.");
    strcpy(dic[31].palavra, "sol");
    strcpy(dic[31].significado, "Estrela que ilumina a Terra.");
    strcpy(dic[32].palavra, "sal");
    strcpy(dic[32].significado, "Tempero branco usado na comida.");
    strcpy(dic[33].palavra, "mar");
    strcpy(dic[33].significado, "Grande extensao de agua salgada.");
    strcpy(dic[34].palavra, "lua");
    strcpy(dic[34].significado, "Satelite natural da Terra.");
    strcpy(dic[35].palavra, "luz");
    strcpy(dic[35].significado, "Claridade que permite ver.");
    strcpy(dic[36].palavra, "rua");
    strcpy(dic[36].significado, "Via publica das cidades.");

    // Grupo: porta, porto, parte, carta, carro, carne
    strcpy(dic[37].palavra, "porta");
    strcpy(dic[37].significado, "Abertura por onde se entra ou sai.");
    strcpy(dic[38].palavra, "porto");
    strcpy(dic[38].significado, "Local onde os navios atracam.");
    strcpy(dic[39].palavra, "parte");
    strcpy(dic[39].significado, "Pedaco de um todo.");
    strcpy(dic[40].palavra, "carta");
    strcpy(dic[40].significado, "Mensagem escrita enviada a alguem.");
    strcpy(dic[41].palavra, "carro");
    strcpy(dic[41].significado, "Veiculo de passeio com quatro rodas.");
    strcpy(dic[42].palavra, "carne");
    strcpy(dic[42].significado, "Alimento de origem animal.");

    // Palavras variadas
    strcpy(dic[43].palavra, "pedra");
    strcpy(dic[43].significado, "Fragmento duro de rocha.");
    strcpy(dic[44].palavra, "verde");
    strcpy(dic[44].significado, "Cor resultante da combinação do amarelo com o azul.");
    strcpy(dic[45].palavra, "vento");
    strcpy(dic[45].significado, "Ar em movimento.");
    strcpy(dic[46].palavra, "tempo");
    strcpy(dic[46].significado, "Duracao das coisas ou condicao do clima.");
    strcpy(dic[47].palavra, "tela");
    strcpy(dic[47].significado, "Superficie onde aparecem imagens.");
    strcpy(dic[48].palavra, "teclado");
    strcpy(dic[48].significado, "Conjunto de teclas do computador.");
    strcpy(dic[49].palavra, "mouse");
    strcpy(dic[49].significado, "Aparelho usado para mover o cursor na tela.");

    return 50;
}
