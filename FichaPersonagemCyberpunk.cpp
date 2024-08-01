#include <iostream>
#include <string>

int main() {
    // Dados do personagem
    std::string predefinidos[40] = {
        "Nome do Personagem",
        "Apelido",
        "Lugar de Origem",
        "Data de Nascimento",
        "Sexo do Personagem",
        "Classe Social do Personagem",
        "Ocupação do Personagem",
        "Historia do Personagem",
        "Motivação do Personagem",
        "Aparencia do Personagem",

        //Atributos do personagem
        "Nivel de Força do Personagem",
        "Destreza do Personagem",
        "Resitencia e Saúde do Personagem",
        "Nivel de Inteligencia do Personagem",
        "Percepção e Intuição do Personagem",
        "Carisma do Personagem",

        //Habilidades adiquiridas pelo personagem
        "Habilidades com Armas de Fogo do Personagem",
        "Habilidades com Armas Brancas do Personagem",
        "Nivel de Atletismo do Personagem",
        "Nivel de Furtividade do Personagem",
        "Habilidade de Infiltração do Personagem",
        "Habilidade de Luta do Personagem",
        "Habilidade em Tratar Feridas",
        "Habilidade de Persuasão",
        "Habiliade de Usar Tecnologia",
        "Habilidade de dirigir veiculos",
        "Familiaridade do Personagem com Regras Sociais",
        "Linguas que o Personagem fala",

        //Implante cibernético
        "Nome do Implante Cibernetico do Personagem",
        "Onde Esta Localizado o Implante no Corpo do Personagem",
        "O Que o Implante Faz",
        "Quanto Custou o Implante do Personagem em Creditos ",

        //Armas do jogador
        "As Armas que o Personagem Possui",
        "Armaduras que o Personagem Possui",
        "Equipamentos que o personagem possui",

        //Custo durante o jogo
        "Quanto de Creditos o Personagem Possui",

        //Informações adicionais
        "A Reputação do Personagem",
        "A Qual Gaugue o Personagem Faz Parte",
        "Contatos e Aliados do Personagem",
        "Confirmar a lista?"
    };
    
    std::string entradaUsuario;
    std::string resultado;

    std::cout << "Crie a ficha do seu personagem:\n";

    for (int i = 0; i < 40; ++i) {
        std::cout << "Linha " << i + 1 << ": " << predefinidos[i] << " - ";
        std::getline(std::cin, entradaUsuario);
        resultado += "Linha " + std::to_string(i + 1) + ": " + predefinidos[i] + " - " + entradaUsuario + "\n";
    }

    std::cout << "\nVocê digitou:\n" << resultado;

    return 0;
}

