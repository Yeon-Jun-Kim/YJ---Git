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
import useInterval from './useinterval';
import { useInView } from 'react-intersection-observer'


function App() {
  if(sessionStorage.getItem('box') == undefined){sessionStorage.setItem('box',JSON.stringify([]))}
  

  let [name,setname] = useState('')
  let [people,setpeople] = useState([['김문영','/Chi.png'],['이윤수','/Lee.png'],['김민재','/Ear.png']])
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
      <Route path='box' element={<Box></Box>}> </Route>
      <Route path='help' element={<Help></Help>}>  </Route>
      </Route>
      <Route path='second/third/:id/forth/main/dict' element={<div><Dict dict={dict}></Dict></div>}></Route>
      <Route path='second/third/:id/forth/main/dict/:id' element={<div><Detailpage> dict={dict}</Detailpage></div>}></Route>
      <Route path="second/third/:id/forth/main/hunt" element = {<div><Hunt></Hunt> </div>}></Route>
      
      </Routes>
      
      

  );
}




function Page7(props){
  let Navigate = useNavigate()


  return <div className='second'>
    
    <img src='/back.png' className='backbutton' onClick={()=>{
      Navigate(-1)

    }} ></img>
   
    <div className='detailbox'  >
      <Outlet></Outlet> </div>
     </div>

}

function Player(props){
  let name = sessionStorage.getItem('name')
  let id = sessionStorage.getItem('id')


  return <div style={{paddingTop:'100px'}} ><p className='outside relative'>이름 : {name}</p>
  <img src='/Girl.png' className='girl relative'></img>
  <p className='outside relative'>나이 : 17</p>
  <p className='outside relative'> 스타팅 포켓몬 : {props.people[id][0]}</p>
  </div>


}
function Poketmon(props){
  let name = sessionStorage.getItem('name')
  let id = sessionStorage.getItem('id')

  return <div style={{paddingTop:'100px'}}>
    <img src={props.people[id][1]} className='monster relative'></img>
    <p className='outside relative'> 이름 : {props.people[id][0]}</p>
    <p className='outside relative'> 주인 : {name}</p>
  
  </div>


}

function Dict(){
let [ref,inview] = useInView()
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







return <div className='background' >
<NavScrollExample target = {target} settarget = {settarget}> </NavScrollExample>

{target == "" ? dict.map(function(a){
  return  <div className='box' ><p className='naming'>{a['name']}</p>
    <Link to={String(a['id'])}><img src={a['img']} style={{margin:'auto', display:'block', height:'50%'}}></img></Link> </div>})

: <div className='box'> <p className='naming'>{look[0]['name']}</p> <Link to={String(look[0]['id'])}><img src={look[0]['img'] }style={{margin:'auto', display:'block', height:'50%'}}></img></Link></div>

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
   <img src='/back.png' style={{width:'10%'}} onClick={()=>{
    navigate(-1)

   }}></img>

  </div>
}

function Hunt(){
  let navigate = useNavigate()
  let getRandom = (min, max) => Math.floor(Math.random() * (max - min) + min);
  let random = getRandom(0,dict.length)
  let term = Math.random()

  


  return <div className='hunt'>
    <p className='outside' style={{marginTop:'5%'}}> 야생의 포켓몬 {dict[random]['name']}이(가) 나타났다.</p>
    <img src={dict[random]['img']} style={{display:'block' ,margin:'auto'}}></img>

    <img onClick={
      function(){
        if(term>0.5){alert('포켓몬이 도망가버렸다.')
        window.location.reload()
      }
        
        else{alert('포획되었다.')
        let box = sessionStorage.getItem('box')
        box = JSON.parse(box)
        
        box.push(random)
        console.log(box)
        sessionStorage.setItem('box',JSON.stringify(box))
        
        navigate(-1)
      }
        
        
      }

    } src={'/pocketball.png'} className='ball'></img>
    
    
     </div>
  


}

function Box(){
  let [fad, setfad] = useState('')
  let box = sessionStorage.getItem('box')
  box = JSON.parse(box)
  let Navigate = useNavigate()


  useInterval(function(){
    if(fad == ''){ setfad('fading')}
    else{ setfad('')}
  },1100)

  
  return <div>
    {box.map(function(x){
      return <div className='box'><p className='naming'>{dict[x]['name']}</p>
        <Link to={'/second/third/:id/forth/main/dict/' + (x + 1)}><img   className={'mypocketmon ' + fad} src={dict[x]['img'] 
      }></img></Link>
        
         </div>
    })}
  </div>
   
}


function Help(){

  return <div style={{paddingTop:"20px"}}>
    <p className='outside relative'  > 포켓몬 키우기 웹페이지 제작자 김연준입니다.</p>
    <p className='outside relative'> 포켓몬 정보는 스타팅 포켓몬의 정보를 나타냅니다. </p>
    <p className='outside relative'> 트레이너 정보는 트레이너의 정보를 나타냅니다.</p>
    <p className='outside relative'> 포켓몬 도감은 포켓몬 도감을 볼수 있고 검색 기능, 클릭하면 세부 정보를 볼 수 있습니다.</p>
    <p className='outside relative'> 포켓몬 잡으러가기를 통해서는 무작위로 포켓몬을 잡을 수 있고 확률은 50% 입니다. 클릭하면 해당 도감으로 이동합니다.</p>
    <p className='outside relative'> 이용해주셔서 감사합니다.</p>


  </div>
}








export default App;
