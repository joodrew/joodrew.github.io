
      {/*CERTIFICADOS*/}
      <div id="cer" className="jcertificados gradiente container-fluid text-center">
        <br />
        <h1> CERTIFICADOS</h1>
        <p className="lead">“APRENDER É A ÚNICA COISA DE QUE A MENTE NUNCA SE CANSA, NUNCA TEM MEDO E NUNCA SE ARREPENDE“
          <br /> <em>LEONADOR DA VINCI</em>
        </p>
        <section className="jcert">
          <div>
            {/*HTML*/}
            <a href="./CERTIFICADOS/HTML Fundamentals.pdf" target="_blank">
              <img alt="Certificado HTML Fundamentals" src="./img/c-html.png" />
            </a>
          </div>
          <div>
            {/*JAVASCRIPT */}
            <a href="./CERTIFICADOS/JavaScript Tutorial.pdf" target="_blank">
              <img alt="Certificado JavaScript Tutorial" src="./img/c-js.png" />
            </a>
          </div>
          <div>
            {/*PHP */}
            <a href="./CERTIFICADOS/PHP Tutorial.pdf" target="_blank">
              <img alt="Certificado PHP Tutorial" src="./img/c-php.png" />
            </a>
          </div>
          <div>
            {/*C */}
            <a href="./CERTIFICADOS/C Tutorial.pdf.pdf" target="_blank">
              <img alt="Certificado C Tutorial" src="./img/c-c.png" />
            </a>
          </div>
          <div>
            {/*CSS */}
            <a href="./CERTIFICADOS/CSS Fundamentals.pdf" target="_blank">
              <img alt="Certificado CSS Fundamentals" src="./img/c-css.png" />
            </a>
          </div>
          <div>
            {/*SQL */}
            <a href="./CERTIFICADOS/SQL Fundamentals.pdf" target="_blank">
              <img alt="Certificado SQL Fundamentals" src="./img/c-sql.png" />
            </a>
          </div>
          <div>
            {/*RESPONSIVE WEB DESIGN */}
            <a href="https://www.freecodecamp.org/certification/jff/responsive-web-design" target="_blank">
              <img alt="Certificado Responsive Web Design" src="./img/c-wdr.png" />
            </a>
          </div>
          {/*ITE CISCO */}
          <div>
            <a href="./CERTIFICADOS/IT Essentials Certficado.pdf" target="_blank">
              <img alt="IT Essentials" src="./img/c-cisco.png" />
            </a>
          </div>
          {/*OFFICE */}
          <div>
            <a href="./CERTIFICADOS/Administração com Informatica Basica - Certificado.jpeg" target="_blank">
              <img alt="Assitente Administrativo com Informatica " src="./img/c-aa.png" />
            </a>
          </div>
          {/*ACCESS */}
          <div>
            <a href="./CERTIFICADOS/Aperfeiçoamento Access - Certificado.jpeg" target="_blank">
              <img alt="Certificado Aperfeiçoamento Profissional Access" src="./img/c-access.png" />
            </a>
          </div>
        </section><br />
        <button type="button" className="btn-light btn btn-lg  bio" data-toggle="modal" data-target="#modalcert">Ver Todos
        </button>
      </div>
      {/* MODAL CERTIFICADOS */}
      <div className="modal fade" id="modalcert" tabIndex={-1} role="dialog" aria-labelledby="exampleModalCenterTitle" aria-hidden="true">
        <div className="modal-dialog modal-dialog-centered" role="document">
          <div className="modal-content">
            <div className="modal-header">
              <h5 className="modal-title " style={{fontFamily: '"monoton",cursive', color: 'black'}}>CERTIFICADOS</h5>
              <button type="button" className="close" data-dismiss="modal" aria-label="Close">
                <span aria-hidden="true">×</span>
              </button>
            </div>
            <div className="modal-body">
              <div className="row"><img src="./img/c-c.png" /><a href="./CERTIFICADOS/C Tutorial.pdf">
                  C Tutorial</a></div>
              <div className="row"><img src="./img/c-css.png" /><a href="./CERTIFICADOS/CSS Fundamentals.pdf">
                  CSS Fundamentals</a></div>
              <div className="row"><img src="./img/c-js.png" /><a href="./CERTIFICADOS/JavaScript Tutorial.pdf">
                  JavaScript
                  Tutorial</a></div>
              <div className="row"><img src="./img/c-php.png" /><a href="./CERTIFICADOS/PHP Tutorial.pdf">
                  PHP Tutorial</a></div>
              <div className="row"><img src="./img/c-sql.png" /><a href="./CERTIFICADOS/SQL Fundamentals.pdf">
                  SQL Fundamentals</a></div>
              <div className="row"><img src="./img/c-wdr.png" /><a href="https://www.freecodecamp.org/certification/jff/responsive-web-design">
                  Web Design Responsive</a></div>
              <div className="row"><img src="./img/c-cisco.png" /><a href="./CERTIFICADOS/IT Essentials Certficado.pdf">IT
                  Essentials - Certificado</a><a href="./CERTIFICADOS/IT Essentials Carta.pdf"> - Carta</a></div>
              <div className="row"><img src="./img/c-aa.png" /><a href="./CERTIFICADOS/Administração com Informatica Basica - Certificado.jpeg.jpeg">
                  Assistente Administrativo - Certificado </a><a href="./CERTIFICADOS/Administração com Informatica Basica - Conteudo Programatico.jpeg">
                  - Conteudo</a></div>
              <div className="row"><img src="./img/c-access.png" /><a href="./CERTIFICADOS/Aperfeiçoamento Access - Certificado.jpeg">Aperfeiçoamento
                  Access - Certificado </a><a href="./CERTIFICADOS/Aperfeiçoamento Access - Conteudo Programatico.jpeg"> - Conteudo</a></div>
            </div>
          </div>
        </div>
      </div>