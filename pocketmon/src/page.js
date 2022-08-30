import { memo, useEffect,useState } from 'react'
import {motion} from 'framer-motion'
import {Link,useParams} from 'react-router-dom'
import TypeAnimation from 'react-type-animation';
import useInterval from './useinterval';
import { Button,Container,Form,Nav,Navbar,NavDropdown } from 'react-bootstrap';
import './App.css'
import { useNavigate } from 'react-router-dom';
function Page(props){

  
    return <div className='first'>
      
         
    <img src='/Oh.png' className='oh'></img>
    <Type1></Type1>
    
    <input type={'text'}  className = 'text' onChange = {function(e){
     let copy = [...props.name]
     copy = e.target.value;
     props.setname(copy);
     sessionStorage.setItem('name',copy)
    
     e.stopPropagation();
  
  
    }}></input>
    <Link to={"second"}> <img src='nextbutton.png' className='arrow' style={{marginTop:'10px'}}></img></Link> 
  
  
     </div>
  }
  function Page2(props){
    console.log(sessionStorage.getItem('name'))
    return <div className='first'>
      
         
    <img src='/Oh.png' className='oh'></img>
    <TypeAnimation
        className='name'
        cursor={true}
        sequence={[props.name + '이구나']}
        wrapper="h2"
      />
    <Link to={"third"}><img src='/nextbutton.png' className='arrow'></img></Link>
  
  
     </div>
  }

  function Page3(props){
    return <div className='first'>
    <img src='/Oh.png' className='oh'></img>
    <h4 className='name'> 지금부터 너의 포켓몬을 선택해보자!</h4>
    {props.people.map(function(a,i){
  
      return <motion.div animate = {{opacity:[0,1]}} transition={{duration:2.0}} className='poketmon'> <Link to = {"" + i}><img className = 'poketmon2'src={a[1]}>
      </img></Link> <p className='outside'>{a[0]}</p> </motion.div>
        
  
    })
    
    }
  
    
     </div>
  }

function Page4(props){
  let {id} = useParams();
  let [ball, setball] = useState(['/monster.webp', '/Openmonster.png'])
 
  
  useEffect(function(){
    
    setTimeout( ()=>{setball(['/Openmonster.png', '/monster.webp'])}, 500);

    props.setid(id)
    sessionStorage.setItem('id',id)
    
    
  },[])
  

  return <div className='first'>
    
  
  <img src='/Oh.png' className='oh'></img>

  <h4 className='name'> 이게 너의 포켓몬이구나 </h4>
  <motion.div animate = {{opacity:[0,1]}} transition={{duration:2.0}} className='minza' > <img className = 'poketmon3'src = {props.people[id][1]}>
    </img> </motion.div>

    <div className='minza'><Link to={"forth"}><img className='poketmon4' src = {ball[0]} ></img></Link> </div>
    <p className='name' style={{marginTop:'70px'}}> 몬스터볼을 클릭해보자</p>
   </div>
   


}
function Page5(props){
  let [ball, setball] = useState(['/Openmonster.png', '/monster.webp'])
  let [talk,settalk] = useState("포켓몬이 포획되었다.")
  let [temp, settemp] = useState('너로 정했다.')
  useEffect(function(){
    
    setTimeout( ()=>{setball(['/monster.webp', '/Openmonster.png'])}, 500);
    setTimeout( ()=>{settalk(['도감에 등록됩니다.'])}, 1000);
    setTimeout( ()=>{settemp(<Link to={'main'}><img src='/nextbutton.png' className='arrow'></img></Link>)}, 1000);
    
  },[])
  
  
  return <div className='first'>
    
  
  <img src='/Oh.png' className='oh'></img>

  <h4 className='name'> {temp}</h4>
  <motion.div animate = {{opacity:[1,0]}} transition={{duration:2.0}} className='minza' > <img className = 'poketmon3'src = {props.people[props.id][1]}>
  </img></motion.div>

    <div className='minza'> <img className='poketmon3' src = {ball[0]} ></img> </div>
    <p className='name' style={{marginTop:'60px'}}> {talk} </p>
   </div>
   


}



function Page6(props){
  
  let [fade,setfade] = useState('')
  let id= sessionStorage.getItem('id')
  let name = sessionStorage.getItem('name')
  let Navigate = useNavigate()


  
 

  
return <div className='second'>

  <img className='mylogo' src='/YJ.png'></img>
  <div className='detailbox'>
  <div className='mainbox relative'> <p className='heightcenter'><button onClick={()=>{Navigate("information/poketmon")}} className='none'>포켓몬 정보</button></p></div>
  <div className='mainbox relative'> <p className='heightcenter'><button onClick={()=>{Navigate("information/player")}} className='none'>플레이어 정보</button></p></div>
  <div className='mainbox relative'> <p className='heightcenter'><button onClick={()=>{Navigate('dict')}} className = 'none'>포켓몬 도감</button></p></div>
  <div className='mainbox relative'> <p className='heightcenter'><button onClick={()=>{Navigate('hunt')}} className = 'none'>포켓몬 잡으러가기</button></p></div>
  <div className='mainbox relative'> <p className='heightcenter'><button onClick={()=>{Navigate('information/box')}} className = 'none'>포켓몬 보관함</button></p></div>
  <div className='mainbox relative'> <p className='heightcenter'><button onClick={()=>{Navigate('information/help')}} className=' none'>도움말</button></p></div>

    </div>


</div>

}
  let Type1 = memo(function Type1(){
    return <TypeAnimation
    className='question'
    cursor={true}
    sequence={['안녕 난 오박사',1000,'너의 이름은 뭐지?']}
    wrapper="h2"
  />
  
  })

  export {Page,Page2,Page3,Page4,Page5,Page6};