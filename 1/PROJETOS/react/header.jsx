
class Header extends React.Component {
  render() {
    return <div className="jbg">
      <div className="jheader container-dark container-fluid text-center">
        <h1 className="display-4">ANALISTA DE SISTEMAS</h1>
        <hr />
        <p className="lead">DESENVOLVER É DAR VIDA A IMAGINAÇÃO</p>
      </div>
    </div>
  }
}

ReactDOM.render(<Header />, document.getElementById('root'));
