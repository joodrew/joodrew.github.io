var Projetos = React.createClass({
    render: function() {
      return (
        <div>
          {/*PROJETOS*/}
          <div id="pro" className="jprojetos carousel cima container-fluid text-center">
            <h1> Projetos</h1>
            <section className="jproj">
              <div>
                <img src="./img/p-js.png" alt="ALT NAME" className="img-responsive" />
                <div className="projtext">
                  <h3>Brincando com JS</h3>
                  <p>Manipulando DOM com algumas propriedades simples muito utilizadas em JavaScript juntamente com jQuery e
                    Bootstrap.</p>
                  <br />
                  <p><br /><a target="_blank" href="./PROJETOS/JS/index.html" className="gradiente btn btn-primary btn-block">Abrir</a>
                  </p>
                </div>
              </div>
              <div>
                <img src="./img/p-c.png" alt="ALT NAME" className="img-responsive" />
                <div className="projtext">
                  <h3>APA</h3>
                  <p>Utilizando C em 30+ mini projetos, utilizando Vetores, Matrizes, Struct e bibliotecas para execução de
                    funções especificas.</p>
                  <br /><br />
                  <p><a href="./PROJETOS/APA/APA.zip" className="gradiente btn btn-primary btn-block">Abrir</a>
                  </p>
                </div>
              </div>
              <div>
                <img src="./img/p-dp.png" alt="ALT NAME" className="img-responsive" />
                <div className="projtext">
                  <h3>DP Revange</h3>
                  <p>A vingança da DP é um jogo baseado em JavaScript estilo mata-mosca em homenagem a alguns professores da
                    FATEC - Americana</p>
                  <br /><br />
                  <p><a href="./PROJETOS/DPREVANGE/index.html" className="gradiente btn btn-primary btn-block">Abrir</a>
                  </p>
                </div>
              </div>
            </section>
            <button type="button" className="gradiente btn btn-lg btn-primary bio"><a className="style-none" target="_blank" href="https://github.com/joodrew/joodrew.github.io/tree/master/PROJETOS">Mais
                Projetos</a></button>
          </div>
          <div className="baixo container-fluid"><br /></div>
        </div>
      );
    }
  });