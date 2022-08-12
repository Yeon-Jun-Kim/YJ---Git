import logo from './logo.svg';
import './App.css';
import {motion, AnimatePresence} from 'framer-motion'
import 'bootstrap/dist/css/bootstrap.min.css';
import React, { useState, memo, useEffect,useMemo ,useRef, createContext, useContext} from 'react';
import {Button, Navbar, Container, Nav, Card, NavItem} from 'react-bootstrap'
import {Routes,Route,Link, Outlet} from 'react-router-dom'
import TypeAnimation from 'react-type-animation';
import { useParams } from 'react-router-dom'
import {Page} from './page'
import mondata from './poketmon';



function App() {
  let [name,setname] = useState('')
  let [people,setpeople] = useState([['김문영','/치람.png'],['이윤수','/이윤수.png'],['김민재','/이어롭.png']])
  let [id,setid] = useState('')
  let time = Date()
  

  return (
      <Routes>
      <Route path="/" element={ <div><Page name = {name} setname={setname}></Page> </div>} /> 
      <Route path="second" element={ <div><Page2 name = {name} setname={setname}></Page2> </div>} />
      <Route path="second/third" element={ <div><Page3 people = {people}></Page3> </div>} />
      <Route path="second/third/:id" element={ <div><Page4 people = {people} setid = {setid} id = {id}></Page4> </div>} />
      <Route path="second/third/:id/forth" element={ <div><Page5 people = {people} id = {id} ></Page5> </div>} />
      <Route path="second/third/:id/forth/main" element={ <div><Page6 people = {people} id = {id} name ={name} ></Page6> </div>} ></Route>
      <Route path='second/third/:id/forth/main/information' element={ <Page7 people = {people} id = {id} name ={name} ></Page7>}>
      <Route path='player' element={<div><Player name={name} id = {id} people = {people} > </Player> </div>}> </Route>
      <Route path='poketmon' element={<div><Poketmon name = {name} id = {id} people = {people} time={time}> </Poketmon> </div>}> </Route>
      </Route>
      </Routes>
      
      

  );
}

function Page2(props){

  console.log(mondata)
  return <div className='first'>
    
       
  <img src='/oh.png' className='oh'></img>
  <TypeAnimation
      className='name'
      cursor={true}
      sequence={[props.name + '이구나']}
      wrapper="h2"
    />
  <button style={{display:'block', margin:'auto'}}><Link to={"third"}>다음</Link></button>


   </div>
}
function Page3(props){
  return <div className='first'>
  <img src='/oh.png' className='oh'></img>
  <h4 className='name'> 지금부터 너의 포켓몬을 선택해보자!</h4>
  {props.people.map(function(a,i){

    return <motion.div animate = {{opacity:[0,1]}} transition={{duration:2.0}} className='poketmon'> <Link to = {String(i)}><img className = 'poketmon2'src={a[1]}>
    </img></Link> <p>{a[0]}</p> </motion.div>
      

  })
  
  }

  
   </div>
}
function Page4(props){
  let {id} = useParams();
  let [ball, setball] = useState(['/몬스터볼.webp', '/열린몬스터볼.png'])
 
  
  useEffect(function(){
    
    setTimeout( ()=>{setball(['/열린몬스터볼.png', '/몬스터볼.webp'])}, 500);
    console.log(props.id)
    props.setid(id)
    
    
  },[])
  

  return <div className='first'>
    
  
  <img src='/oh.png' className='oh'></img>

  <h4 className='name'> 이게 너의 포켓몬이구나 </h4>
  <motion.div animate = {{opacity:[0,1]}} transition={{duration:2.0}} className='minza' > <img className = 'poketmon3'src = {props.people[id][1]}>
    </img> </motion.div>

    <div className='minza'><Link to={"forth"}><img className='poketmon3' src = {ball[0]} ></img></Link> </div>
    <p className='name'> 몬스터볼을 클릭해보자</p>
   </div>
   


}
function Page5(props){
  let [ball, setball] = useState(['/열린몬스터볼.png', '/몬스터볼.webp'])
  let [talk,settalk] = useState("포켓몬이 포획되었다.")
  let [temp, settemp] = useState('너로 정했다.')
  useEffect(function(){
    
    setTimeout( ()=>{setball(['/몬스터볼.webp', '/열린몬스터볼.png'])}, 500);
    setTimeout( ()=>{settalk(['도감에 등록됩니다.'])}, 1000);
    setTimeout( ()=>{settemp(<Link to={'main'}>다음</Link>)}, 1000);
    
  },[])
  
  
  return <div className='first'>
    
  
  <img src='/oh.png' className='oh'></img>

  <h4 className='name'> {temp}</h4>
  <motion.div animate = {{opacity:[1,0]}} transition={{duration:2.0}} className='minza' > <img className = 'poketmon3'src = {props.people[props.id][1]}>
  </img></motion.div>

    <div className='minza'> <img className='poketmon3' src = {ball[0]} ></img> </div>
    <p className='name'> {talk} </p>
   </div>
   


}



function Page6(props){
  
  let [fade,setfade] = useState('')
  
  useInterval(function(){
    if(fade == ''){setfade('monster2')}
    else{ setfade('')}
    

  },1000)

  
 

  
return <div className='second'>
<div className='div1'>
  <p className='name_2'> {props.name}</p>
  <div></div><img src = '/금선.png' className='girl'></img></div>
  <div className='div2'>
   <p className='name_2'> {props.people[props.id][0]}</p> 
    <img src= {props.people[props.id][1]} className = {'monster '+fade}   draggable='true'></img></div>
  <div style={{clear:'both'}}></div>
  <Button variant="outline-dark" className='info'><Link to={'information/player'}> 플레이어 정보</Link></Button>
  <Button variant="outline-dark" className='info'><Link to={'information/poketmon'}> 포켓몬 정보 </Link></Button>
  <div className='adventure'><Button variant="outline-dark" className='advenbutton'>모험을 시작한다</Button></div>




</div>

}

function Page7(props){
  console.log(props.name)

  return <div className='second'>
    <Outlet></Outlet>
     </div>

}

function Player(props){


  return <div><p> 이름 : {props.name}</p>
  <p>나이 : 17</p>
  <p> 스타팅 포켓몬 : {props.people[props.id][0]}</p>
  </div>


}
function Poketmon(props){


  return <div>
    <p> 이름 : {props.people[props.id][0]}</p>
    <p> 주인 : {props.name}</p>
    <p>만난 날 : </p>
  
  </div>


}





function useInterval(callback, delay) {
  const savedCallback = useRef();

  
  useEffect(() => {
    savedCallback.current = callback;
  }, [callback]);

  // Set up the interval.
  useEffect(() => {
    function tick() {
      savedCallback.current();
    }
    if (delay !== null) {
      let id = setInterval(tick, delay);
      return () => clearInterval(id);
    }
  }, [delay]);
}

export default App;
