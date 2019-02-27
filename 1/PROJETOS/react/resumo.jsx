var Resumo = React.createClass({
    render: function() {
      return (
        <div>
          {/*RESUMO*/}
          <div id="res" className="jresumo cima container-fluid text-center">
            <h1>RESUMO</h1>
            <p className="lead">"TENHO EM MIM TODOS OS SONHOS DO MUNDO"</p>
            <div className="jresdiv conteiner text-left">
              <div className="row ">
                <div className="col-md-1" />
                <div className=" jfotod col-xs-12  col-md-3 ">
                  <figure className="figure">
                    <img style={{MozTransform: 'scaleX(-1)', OTransform: 'scaleX(-1)', WebkitTransform: 'scaleX(-1)', transform: 'scaleX(-1)'}} src="./img/minhafoto.jpg" className="figure-img img-fluid rounded" alt="Uma foto minha bem bonita." />
                  </figure>
                </div>
                <div className="col-xs-12 col-md-7">
                  <p>Meu nome é Joelson Felipe Firmino, tenho 2 lindos filhos e uma linda esposa.
                    <br />Sou um profissional competente e de confiança, comprometido com o trabalho de qualidade.
                    <br />Tambem versátil na resolução de problemas maximizando recursos.
                    <br />Muito entusiasmado, confiável e auto motivado.
                    <br />Me considero hábil em lidar com o público, com diplomacia e profissionalismo.
                    <br />Com alta capacidade de adaptação a novos equipamentos e tecnologias.
                    <br />Excelentes capacidades de análise, escrita, raciocínio e de tecnologia da informação.
                  </p>
                </div>
              </div>
            </div>
            {/*LinhaDoTempo*/}
            {/*
      <button type="button" class="gradiente btn btn-lg btn-primary bio" data-toggle="collapse" data-target="#timeline">Minha
        Historia </button>
     <div id="timeline" class="collapse">
        <div class="row">
          <div class="col-1"></div>
          <div class="col-10">
            <ul class="timeline text-left ">
              <li>
                <a target="_blank" href="https://www.totoprayogo.com/#">New Web Design</a>
                <a href="#" class="float-right">21 March, 2014</a><br>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque scelerisque diam non nisi semper, et
                  elementum lorem ornare. Maecenas placerat facilisis mollis. Duis sagittis ligula in sodales
                  vehicula....</p>
              </li>
              <li>
                <a href="#">21 000 Job Seekers</a>
                <a href="#" class="float-right">4 March, 2014</a><br>
                <p>Curabitur purus sem, malesuada eu luctus eget, suscipit sed turpis. Nam pellentesque felis vitae justo
                  accumsan, sed semper nisi sollicitudin...</p>
              </li>
              <li> 
                <a href="#">Awesome Employers</a>
                <a href="#" class="float-right">1 April, 2014</a><br>
                <p>Fusce ullamcorper ligula sit amet quam accumsan aliquet. Sed nulla odio, tincidunt vitae nunc vitae,
                  mollis pharetra velit. Sed nec tempor nibh...</p>
              </li>
            </ul>
          </div>
          <div class="col-1"></div>
        </div>
      </div>*/}
          </div>
          <div className="baixo container-fluid"><br /></div>
        </div>
      );
    }
  });