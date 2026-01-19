# Projetos em Linguagem C


Repositório educativo desenvolvido como parte da minha jornada de aprendizagem em Linguagem C, com foco em lógica de programação, estruturas de repetição, funções, recursão e organização de código.

Atualmente, o repositório contém dois projetos principais, organizados por níveis de dificuldade.


---
## 🃏 Projeto 1 — Super Trunfo em C

Projeto inspirado no jogo Super Trunfo, desenvolvido para praticar conceitos fundamentais da linguagem C.

Cada nível introduz novos conceitos de programação, evoluindo desde entrada e saída básicas até cálculos, funções e comparações completas entre cartas.

### 🌱 Nível Novato

📌 **Objetivo**: apenas entrada e saída de dados.
- O usuário cadastra manualmente duas cartas
- Exibição dos atributos cadastrados
- Não há cálculos automáticos nem comparações

---
### 🌍 Nível Aventureiro

📌 **Objetivo**: introduzir cálculos automáticos sem usar laços ou condicionais.

Atributos calculados automaticamente:

- **Densidade populacional:** `população / área`

- **PIB per capita:** `PIB / população`

As cartas ainda são cadastradas manualmente, mas agora ganham atributos derivados.

---
### 🏆 Nível Mestre
📌 **Objetivo:** comparar cartas e determinar vencedores.

O código agora inclui:

#### ✔️ Comparação entre atributos

Para cada atributo, o programa indica qual carta é vencedora:

- **Densidade populacional:** menor valor vence.

- **Todos os outros atributos:** maior valor vence.

#### ✔️ Cálculo do Super Poder

Soma ponderada dos principais atributos de cada carta:

Inclui:

- População

- Área

- PIB

- Pontos turísticos

- PIB per capita

- Densidade invertida (`1 / densidade`), para manter o critério “maior vence”

A carta com maior Super Poder é a campeã.

## Projeto 2 — Desafio de Xadrez em C (MateCheck)

Projeto focado em estruturas de repetição, funções recursivas e controle de fluxo, simulando a movimentação das peças de xadrez.

Cada nível aumenta a complexidade lógica e técnica do código

### 🌱 Nível Novato
📌 **Objetivo**: praticar estruturas de repetição simples.

Peças implementadas:

- Bispo → diagonal superior direita
- Torre → movimento horizontal
- Rainha → movimento horizontal oposto

Conceitos trabalhados:

- `for`, `while` e `do-while`

- Constantes (`#define`)

- Saída organizada com `printf`

---

### Nível Aventureiro

📌 **Objetivo**: trabalhar loops aninhados.

Peça implementada:

- Cavalo → movimentação em L (baixo e esquerda)

Conceitos trabalhados:

- Loops aninhados

- Combinação de direções

- Organização e legibilidade do código

---

### 🏆 Nível Mestre

📌 **Objetivo**: aplicar conceitos avançados da linguagem C.

Implementações:

- Bispo, Torre e Rainha usando funções recursivas

- Cavalo usando loops com múltiplas variáveis e condições

- Uso de `break` e `continue`

Conceitos trabalhados:

- Recursão

- Modularização do código

- Controle avançado de fluxo

## 🚢 Projeto 3 — Batalha Naval em C
Projeto inspirado no clássico jogo de Batalha Naval, desenvolvido para praticar vetores bidimensionais, estruturas de repetição aninhadas e padrões em matrizes. Cada nível introduz novos desafios e habilidades, evoluindo da lógica básica até efeitos especiais no tabuleiro.

### 🌱 Nível Novato
📌 Objetivo: posicionar navios em um tabuleiro usando vetores bidimensionais.

Funcionalidades:

- Tabuleiro 10x10 representado por matriz

- Dois navios posicionados manualmente:

    - Um vertical

    - Um horizontal

- Exibição das coordenadas de cada parte dos navios com printf

Conceitos trabalhados:

- Matrizes

- Coordenadas X e Y

- Saída organizada

## 🌍 Nível Aventureiro
📌 Objetivo: adicionar complexidade ao posicionamento e exibir o tabuleiro completo.

Funcionalidades:

- Quatro navios posicionados:

- Vertical

- Horizontal

- Diagonal ↘

- Diagonal ↙

Exibição completa do tabuleiro:

- 0 para posições livres

- 3 para posições ocupadas

Conceitos trabalhados:

- Matrizes 10x10

- Loops simples

- Organização visual do tabuleiro

### 🏆 Nível Mestre
📌 Objetivo: implementar habilidades especiais com padrões geométricos em matrizes.

Funcionalidades:

- Três habilidades especiais:

    - Cone

    - Cruz

    - Octaedro

- Cada habilidade ocupa uma área distinta do tabuleiro

Exibição das áreas afetadas:

- 1 para áreas atingidas

- 0 para áreas livres

Conceitos trabalhados:

- Estruturas de repetição aninhadas

- Condições com abs() para formar padrões

- Modularização das habilidades

- Combinação de navios e poderes no mesmo tabuleiro

## 📁 Estrutura do Repositório
```
linguagem-c/
│
├── supertrunfo/
│   ├── nivel-novato/
│   │   └── main.c
│   ├── nivel-aventureiro/
│   │   └── main2.c
│   └── nivel-mestre/
│       └── main3.c
│
├── supertrunfo2/
│   ├── nivel-novato.c
│   ├── nivel-aventureiro.c
│   └── nivel-mestre.c
│
├── xadrez/
│   ├── novato.c
│   ├── aventureiro.c
│   └── mestre.c
│
└── batalha_naval/
    ├── novato.c
    ├── aventureiro.c
    └── mestre.c
```

📌 A pasta **supertrunfo2/** contém versões mais recentes e organizadas do projeto original.

---
## 💻 Tecnologias Utilizadas

- Linguagem C

- Biblioteca `stdio.h`

- Constantes (`#define`)

- Estruturas de repetição

- Funções e recursão

- Organização modular de código


---
## 💖 Autora
Projeto desenvolvido por **Maria N. V. Borges**,

estudante de Ciência da Computação, apaixonada por programação, jogos, tecnologia e aprendizado contínuo.


---
## ✨ Contribuições

Fique à vontade para:

- Abrir issues

- Sugerir melhorias

- Fazer pull requests

Toda contribuição é bem-vinda! 💫
