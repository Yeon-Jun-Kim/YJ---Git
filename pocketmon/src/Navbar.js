import Button from 'react-bootstrap/Button';
import Container from 'react-bootstrap/Container';
import Form from 'react-bootstrap/Form';
import Nav from 'react-bootstrap/Nav';
import Navbar from 'react-bootstrap/Navbar';
import NavDropdown from 'react-bootstrap/NavDropdown';
import {useNavigate} from 'react-router-dom';

function NavScrollExample(props) {
  let navigate = useNavigate()
  return (
    <Navbar bg="light" expand="lg"  className='searchbar'>
      <Container fluid>
        <Navbar.Brand href="#">포켓몬 도감</Navbar.Brand>
        <Navbar.Toggle aria-controls="navbarScroll" />
        <Navbar.Collapse id="navbarScroll" style={{paddingTop:'20px'}}>
         
       
          <Form className="d-flex" style={{width:'30%'}}>
            <Form.Control
              type="search"
              placeholder="Search"
              className="me-2"
              aria-label="Search"
              onChange={function(e){
              props.settarget(e.target.value)
              }}
            />
            
          </Form>

          <img src='/back.png' className='backbutton_2' onClick={()=>{
      navigate(-1)

    }}></img>
          
        </Navbar.Collapse>
      </Container>
    </Navbar>
  );
}

export default NavScrollExample;