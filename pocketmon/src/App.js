import logo from './logo.svg';
import './App.css';
import {motion, AnimatePresence, filterProps} from 'framer-motion'
import 'bootstrap/dist/css/bootstrap.min.css';
import React, { useState, memo, useEffect,useMemo ,useRef, createContext, useContext} from 'react';
import {Button, Navbar, Container, Nav, Card, NavItem,NavDropdown,Form} from 'react-bootstrap'
import {Routes,Route,Link, Outlet, useNavigate} from 'react-router-dom'
import TypeAnimation from 'react-type-animation';
import { useParams } from 'react-router-dom'
import {Page,Page2,Page3,Page4,Page5,Page6} from './page'
import NavScrollExample from './Navbar';
import {dict} from './dict';


function App() {
  let [name,setname] = useState('')
  let [people,setpeople] = useState([['김문영','/치람.png'],['이윤수','/이윤수.png'],['김민재','/이어롭.png']])
  let [id,setid] = useState('')
  
  
  
  

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
      <Route path='poketmon' element={<div><Poketmon name = {name} id = {id} people = {people}> </Poketmon> </div>}> </Route>
      </Route>
      <Route path='second/third/:id/forth/main/dict' element={<div><Dict dict={dict}></Dict></div>}></Route>
      <Route path='second/third/:id/forth/main/dict/:id' element={<div><Detailpage> dict={dict}</Detailpage></div>}></Route>
      <Route path="second/third/:id/forth/main/hunt" element = {<div><Hunt></Hunt> </div>}></Route>
      
      </Routes>
      
      

  );
}




function Page7(props){


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

function Dict(){
let [target,settarget] = useState("")
let [look,setlook] = useState([{'name':''}])
let copy =  dict.filter(function(a){
  {return a['name'] == target}
  })


useEffect(function()

{ if(copy.length != 0 ){setlook(copy)
 
}
else{setlook([{'name':'','id':''}])}

},[target])
console.log(look[0]['id'])




return <div className='background'>
<NavScrollExample target = {target} settarget = {settarget}> </NavScrollExample>

{target == "" ? dict.map(function(a){
  return <div className='box'><p className='naming'>{a['name']}</p>
    <Link to={String(a['id'])}><img src={a['img']} style={{margin:'auto', display:'block'}}></img></Link></div>
}) : <div className='box'> <p className='naming'>{look[0]['name']}</p> <Link to={String(look[0]['id'])}><img src={look[0]['img'] }style={{margin:'auto', display:'block'}}></img></Link></div>

}

</div>}


function Detailpage(){
 let {id} = useParams()
 let navigate = useNavigate()


  return  <div className='detailpage'>
    <p >{dict[id-1]['name']}</p>
    <img src={dict[id-1]['img'] } className='center'></img>
    <p >타입 :{dict[id-1]['type']}</p>
    <p >신장 :{dict[id-1]['height']}</p>
    <p >몸무게 : {dict[id-1]['weight']}</p>
    <button
    onClick={function(){
    navigate(-1)
    }}> 도감으로 돌아가기</button>
    

  </div>
}

function Hunt(){
  let navigate = useNavigate()
  let getRandom = (min, max) => Math.floor(Math.random() * (max - min) + min);
  let random = getRandom(0,dict.length)
  let term = Math.random()
  console.log(term)
  


  return <div className='hunt'>
    <p> 야생의 포켓몬 {dict[random]['name']}이(가) 나타났다.</p>
    <img src={dict[random]['img']} style={{display:'block'}}></img>

    <button onClick={
      function(){
        if(term>0.5){alert('포켓몬이 도망가버렸다.')
        window.location.reload()
      }
        
        else{alert('포획되었다.')
        navigate(-1)
      }
        
        
      }

    } >포획하기</button>
    
    
     </div>
  

}









export default App;
