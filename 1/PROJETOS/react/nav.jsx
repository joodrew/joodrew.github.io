
            {/*NAV*/ }
            < nav className = "navbar baixo navbar-expand-lg navbar-dark gradiente bg-dark" >
                <a className="navbar-brand" href="#">JOELSON FELIPE FIRMINO</a>
                <button className="navbar-toggler d-none d-md-flex d-lg-none " type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                    <span className="navbar-toggler-icon" />
                </button>
                <div className="collapse navbar-collapse " id="navbarNav">
                    <ul className="navbar-nav ml-auto">
                        <li className="nav-item ">
                            <a className="nav-link" href="#">INICIO </a>
                        </li>
                        <li className="nav-item">
                            <a className="nav-link" href="#res">RESUMO</a>
                        </li>
                        <li className="nav-item">
                            <a className="nav-link" href="#cer">CERTIFICADOS</a>
                        </li>
                        <li className="nav-item">
                            <a className="nav-link" href="#pro">PROJETOS</a>
                        </li>
                        <li className="nav-item">
                            <a className="nav-link" href="#con">CONTATOS</a>
                        </li>
                    </ul>
                </div>
        </nav >

        {/*NavbarMobile */}
        <nav style={{padding: '0.3rem  0.2rem 0.2rem 0.2rem'}} className="nmobi navbar d-block d-md-none fixed-bottom cima navbar-expand-lg navbar-dark gradiente bg-dark">
          <ul id="nmobi" className="navbar-nav flex-row ml-auto justify-content-between">
            <li className="nav-item ">
              <a className="nav-link" href="#"><img src="./img/n-home.png" />INICIO</a>
            </li>
            <li className="nav-item">
              <a className="nav-link" href="#res"><img src="./img/n-resumo.png" />RESUMO</a>
            </li>
            <li className="nav-item">
              <a className="nav-link" href="#cer"><img src="./img/n-certificados.png" />CERTIFICADOS</a>
            </li>
            <li className="nav-item">
              <a className="nav-link" href="#pro"><img src="./img/n-projetos.png" />PROJETOS</a> 
            </li>
            <li className="nav-item">
              <a className="nav-link" href="#con"><img src="./img/n-contatos.png" />CONTATOS</a>
            </li>
          </ul>
        </nav>