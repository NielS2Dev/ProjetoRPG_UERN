@charset "UTF-8";

/* Estilos Globais e Reset */
*{
    padding: 0px;
    margin: 0px;
    box-sizing: border-box; /* Adicionado para melhor controle de layout */
}

body {
    margin: 0;
    padding: 0;
    overflow-x: hidden;
    font-family: Arial, Helvetica, sans-serif;
    background-color: #000; /* Cor de fundo de fallback */
}

/* Vídeo de Fundo */
#meuvideo {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    object-fit: cover;
    z-index: -1;
}

/* --- Cabeçalho --- */
#cabecalho {
    width: 100%;
    height: 250px;
}

#cabecalho_flex{
    padding-bottom: 3px;
    backdrop-filter: blur(7px);
    width: 100%;
    height: 100%;
    display: flex;
    flex-direction: row;
    align-items: center;
    position: relative;
    
    background-image: 
        linear-gradient(to bottom, 
            rgb(28, 63, 70) 0%, 
            transparent 100%
        ), 
        linear-gradient(to top, transparent, transparent);
}

.uern{
    width: 350px;
    height: 140px;
    margin-top: 30px;
    margin-left: 120px;
    margin-bottom: 35px;
    transition: filter 0.3s, width 0.3s, height 0.3s;
}

.uern:hover{
    filter: drop-shadow(0px 0px 10px rgb(5, 201, 54));
    cursor: pointer;
    width: 380px;
    height: 150px;
}

#texoCabe{
    font-family: Arial, Helvetica, sans-serif;
    margin-left: 60px;
    color: white;
    font-size: 0.5em;
    width: 550px;
    display: flex;
    flex-direction: column;
    text-align: center;
    transition: filter 0.3s, font-size 0.3s;
}

#texoCabe:hover{
    filter: drop-shadow(0px 0px 10px rgb(0, 255, 55));
    font-size: 0.55em;
}

#descr{
    color: white;
}

.nielpequeno {
    right: 0;
    margin-right: 10px;
    position: absolute;
    border-radius: 50%; 
    width: 200px;
    height: 200px;
    transition: filter 0.3s, width 0.3s, height 0.3s;
    display: block; 
    overflow: hidden; 
}

.nielpequeno:hover {
    filter: drop-shadow(0px 0px 10px rgb(0, 255, 55));
    width: 250px;
    height: 250px;
}

.nielpequeno img {
    width: 100%;
    height: 100%;
    object-fit: cover;
    border: none; 
}

/* --- Main Content --- */
main {
    width: 900px; /* Aumentado para melhor visualização da documentação */
    margin: 50px auto; 
    display: flex;
    flex-direction: column;
    align-items: center;
    backdrop-filter: blur(15px);
    background-color: rgba(0, 0, 0, 0.4); /* Leve fundo para contraste */
    border-radius: 25px;
    padding: 30px;
}

/* Estilos de Tipografia e Blocos de Documentação */
.documentacao-structs {
    width: 100%;
    color: #f2f2f2;
    font-family: 'Segoe UI', sans-serif;
    text-align: justify;
}

.documentacao-structs h1 {
    color: #00bcd4; /* Cor primária de destaque */
    text-align: center;
    margin-bottom: 30px;
}

.struct-bloco {
    padding: 20px;
    margin-bottom: 30px;
    border-left: 5px solid #00ff55; /* Linha de destaque neon */
    background-color: rgba(0, 0, 0, 0.3);
    border-radius: 5px;
}

.struct-bloco h2 {
    color: #00ff55; /* Destaque para o nome da struct */
    margin-top: 0;
    margin-bottom: 5px;
    font-size: 1.8em;
}

.struct-bloco h3 {
    color: #00bcd4;
    font-size: 1.1em;
    font-weight: normal;
    margin-top: 5px;
    margin-bottom: 15px;
}

.struct-bloco p {
    margin-bottom: 15px;
    line-height: 1.6;
}

/* Estilo para código inline */
code {
    background-color: rgba(0, 255, 85, 0.1);
    color: #00ff55;
    padding: 2px 5px;
    border-radius: 5px;
    font-family: "Consolas", monospace;
}

/* Tabelas de Campos (Structs) */
.tabela-container {
    overflow-x: auto;
    margin-top: 20px;
    margin-bottom: 20px;
}

.tabela-container table {
    width: 100%;
    border-collapse: collapse;
    font-size: 1em;
}

.tabela-container th, .tabela-container td {
    padding: 12px 15px;
    text-align: left;
    border-bottom: 1px solid rgba(255, 255, 255, 0.1);
}

.tabela-container th {
    background-color: rgba(0, 255, 85, 0.2);
    color: #00ff55;
    font-weight: bold;
    text-transform: uppercase;
}

.tabela-container tr:hover {
    background-color: rgba(255, 255, 255, 0.05);
}

/* --- Rodapé --- */
footer {
    text-align: center;
    margin-top: 20px;
    padding: 10px 0; 
    background-color: black; 
    color: white; 
}

footer a {
    color: inherit; 
    text-decoration: none; 
    display: inline-block; 
}

footer p {
    font-size: 1.1em;
    color: white; 
    padding: 5px;
    transition: font-size 0.3s; 
}


footer a:hover p {
    text-decoration: underline;
    opacity: 0.9;
    font-size: 1.2em;
}

/* --- Media Queries (Responsividade) --- */
@media (max-width: 1300px) { 
    #texoCabe {
        display: none;
    }
    .uern {
        margin-left: 50px;
    }
}

@media (max-width: 950px) {
    main {
        width: 95%;
        padding: 20px;
    }
    .uern {
        margin-left: 20px;
    }
}

@media (max-width: 710px){
    .nielpequeno{
        display: none;
    }
}