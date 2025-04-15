#include <iostream>
#include <cmath>

namespace teste1{
    int cocomole = 2;
}

namespace teste2{
    int cocomole = 3;
}


void função(int coco){
    std::cout << "eu fiz coco " << coco << " vezes" << '\n';
}

double square(int num){
    return num*num;
}

int main(){
    //Como fazer outputs:
    std::cout << "cocozao" << '\n';
    std::cout << "xixi" << '\n';
    std::cout << '\n';

    //dá pra só declarar a variavel e só depois atribuir um valor fazer tudo num só passo
    //num só passo: int yellow = 5
    //declaração e atribuição: int yellow (e depois, em outra linha) yellow = 6

    //Mexendo com Ints:
    int yellow = 5;
    std::cout << yellow << '\n';
    std::cout << '\n';


    //Mexendo com floats:
    double decimal = 9.98638;
    std::cout << decimal << '\n';
    std::cout << '\n';


    //Mexendo com strings de len 0:
    char letra = 'e';
    std::cout << letra << '\n';
    std::cout << '\n';


    //Mexendo com booleans:
    bool caguei = true; //tambem serve com 1 e 0
    std::cout << caguei << '\n';
    std::cout << '\n';


    //Mexendo com strings:
    std:: string coco = "caguei demais";
    std::cout << "Eu " << coco << '\n';
    std::cout << '\n';


    //Mexendo com constantes:
    const int TAMANHO_DO_COCO = 20;
    // TAMANHO_DO_COCO = 19 ---> Vai dar erro
    std::cout << TAMANHO_DO_COCO << '\n';
    std::cout << '\n';


    //Namespaces:
    //namespaces basicamente são lugares que te permitem criar variáveis com o mesmo nome de uma outra variável já existente, por exemplo:
    const int cocomole = 9;
    std::cout << cocomole << '\n';
    std::cout << teste1::cocomole << '\n';

    //tambem dá para usar o namespace assim:
    using namespace teste2;
    std::cout << cocomole << '\n';  // neste caso não vai funcionar pq eu já tenhoo uma variavel com esse nome, se apagar a linha 61 e, consequentemente, a linha 62 já funciona
    std::cout << '\n';

    //conversão de variáveis:
    int y = 100;
    std::cout << (char) y; //vai retornar a letra d pq é a letra 100 no tabela ASCII
    std::cout << '\n';
    
    //Recebendo input do usuário:
    std::string name;
    double idade;
    std::cout << "Qual é o seu nome completo? ";
    std::getline(std::cin,name); // se não tiver o getline não entende espaços
    std::cout << '\n' << "Qual é a sua idade? ";
    std::cin >> idade; // como aqui não são precisos espaços, pode ser feito sem o getline
    std::cout << "Olá " << name << '\n';
    std::cout << "Vc tem " << idade << " anos";
    std::cout << '\n';

    //Fazendo condicionais:
    if(idade >= 18 and idade < 100){
        std::cout << name << " pode beber"<< '\n';
    }
    else if(idade < 0){
        std::cout << name << ", vc não nasceu ainda" << '\n';
    }
    else if(idade >= 100){
        std::cout << name << ", certeza que vc está vivo?" << '\n';
    }
    else{
        std::cout << name << " não pode beber" << '\n';
    }
    std::cout << '\n';

    //Utilizando o switch:
    int mês;
    std::cout << "Em que mês vc nasceu? (1-12)" << '\n';
    std::cin >> mês;
    switch (mês){
    case 1:
        std::cout << "Vc nasceu em Janeiro";
        break;
    case 2:
        std::cout << "Vc nasceu em Fevereiro";
        break;
    case 3:
        std::cout << "Vc nasceu em Março";
        break;
    case 4:
        std::cout << "Vc nasceu em Abril";
        break;
    case 5:
        std::cout << "Vc nasceu em Maio";
        break;
    case 6:
        std::cout << "Vc nasceu em Junho";
        break;
    case 7:
        std::cout << "Vc nasceu em Julho";
        break;
    case 8:
        std::cout << "Vc nasceu em Setembro";
        break;
    case 9:
        std::cout << "Vc nasceu em Agosto";
        break;
    case 10:
        std::cout << "Vc nasceu em Outubro";
        break;
    case 11:
        std::cout << "Vc nasceu em Novembro";
        break;
    case 12:
        std::cout << "Vc nasceu em Dezembro";
        break;
    default:
        std::cout << "Insira uma número entre 1 e 12.";
        break;
    }
    std::cout << '\n';

    //Ternário:
    int nota;
    std::cout << "Qual foi a sua nota: (1-100) ";
    std::cin >> nota;
    (nota >= 75) ? std::cout << "Vc passou!!!" : std::cout << "Vc é burro."; //é basicamente um if e else numa só linha
    //tambem dá para usar assim:
    //std::cout << (nota >= 75 ? "vc passou" : "vc é burro");
    std::cout << '\n';

    //Operações com strings:
    int tamanho;
    bool sera_que_esta_vazio;
    char primeira_letra;
    int onde_esta;
    tamanho = name.length(); //tamanho da string (não conta com espaços vazios no final)
    sera_que_esta_vazio = name.empty(); //devolve um valor de true ou false caso seja uma string vazia ou não
    name.append("@gmail.com"); //adiciona uma string no final da string principal
    primeira_letra = name.at(0); //devolve a letra no index x
    name.insert(3,"@"); //insere um caractere no index x
    onde_esta = name.find("@"); //devolve o index da primeira aparição de um caractere na string
    name.erase(0,3); //apaga um pedaço da string delimitado pelo index inicial e pelo index anterior ao final
    name.clear(); //apaga a string (deica ela vazia)

    //While loop:
    bool expressão = true;
    while(expressão){
        expressão = false;
    }
    std::cout << '\n';

    //Do-while loop:
    do{ //basicamente faz primeiro uma operação (ou mais)) e, se a expressão for verdadeira, repete a operação
        std::cout << "coco";
    }while(expressão);
    std::cout << '\n';


    //For loop:
    for (int i = 10; i >=! 1; i--){
        std::cout << i << '\n';
    }
    std::cout << "Happy New Year!" << '\n';

    //Creating Pseudo-ramdom numbers:
    srand(time(0));
    int rand_num = rand() % 5 +1; //devolve números aleatorios de um à 5
    
    //Creating a random event generator
    switch(rand_num){ //all of these cases are outputs but it could be any event
        case 1 : std::cout << "You won one dollar" << '\n';
                break;
        case 2 : std::cout << "You won two piles of poop" << '\n';
                break;
        case 3 : std::cout << "You won three trees" << '\n';
                break;
        case 4 : std::cout << "You won four nights at the holiday inn" << '\n';
                break;
        case 5 : std::cout << "You won five meals" << '\n';
                break;
    }
    std::cout << '\n';

    //Creating and implementing functions:
    função(4); // a parte de criar a função tá lá em cima
    double num2 = square(4);
    std::cout << num2 << '\n';
    std::cout << '\n';

    //Creating arrays:
    double prices[] = {1.22,2.33,4.55};//um array é basicamente uma lista com elementos de um só tipo
    std::cout << prices[1] << '\n';
    prices[3] = 9.99;
    prices[1] = 1.22;
    std::cout << prices[3] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << '\n';

    //Sizeof() operator
    std::string coiso = "ala";
    std::cout << sizeof(coiso) << '\n'; //neste caso vai retornar o número de bytes do adress da string coiso (como é um adress, é 32 bytes)
    double listinha[] = {2.3, 3.4, 5.6};
    std::cout << sizeof(listinha) << '\n'; // retornou a soma de bytes de cada item do array
    //para ter o número de elementos num array, vc pode simplesmete fazer o sizeof(array)/sizeof(tipo de cada elemento do array):
    std::cout << sizeof(listinha)/sizeof(double)<<'\n'; // retorna o número de elementos no array
    std::cout << '\n';

    //Iterando sobre um array:
    std::string coisinha[] = {"ola,","eu sou o","isaac"};

    for(int i = 0; i < sizeof(coisinha) / sizeof(std::string); i++){
        std::cout << coisinha[i] <<'\n';
    }
    std::cout << '\n';

    //Foreach loop:
    for(std::string frase : coisinha){ //é basicamente um for loop do python
        std::cout << frase << '\n';
    }
    std::cout << '\n';

    //Memory adress:
    int x = 0;
    std::cout << &x << '\n'; //o operador & faz devolver o adress de uma variável
    std::cout << '\n';

    //Se vc quiser alterar o valor de uma variavel de fora da função, é importante passar o adress dessa variavel envés de só o valor:
    /*
    int x = 0;

    void xixi(int y){
        y = 3
    }

    xixi(x); 

    x iria continuar como 0 pois apenas foi passado o valor de x para a função e não o adress de x

    void xixi(int &y){
        y = 3
    }

    xixi(x)

    desta forma x já seria 3
    */


    //Const parameters
    /*
    se vc quiser apenar ler os valores que forem passados para a função e não alterar nada, vc pode usar o const assim:

    int y = 9;
    void xixi(const int y){
        std::cout << y;
    }

    esta função não presica mudar nenhum valor que recebeu, por isso foi usado o const
    mesmo que tentassem mudar, iria dar erro
    */



    return 0;
}