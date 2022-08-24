import { memo, useEffect,useState } from 'react'
import {motion} from 'framer-motion'
import {Link,useParams} from 'react-router-dom'
import TypeAnimation from 'react-type-animation';
import useInterval from './useinterval';
import { Button,Container,Form,Nav,Navbar,NavDropdown } from 'react-bootstrap';
import './App.css'
function Page(props){

  
    return <div className='first'>
      
         
    <img src='/oh.png' className='oh'></img>
    <Type1></Type1>
    
    <input type={'text'}  className = 'text' onChange = {function(e){
     let copy = [...props.name]
     copy = e.target.value;
     props.setname(copy);
     sessionStorage.setItem('name',copy)
    
     e.stopPropagation();
  
  
    }}></input>
    <button style={{display:'block', margin:'auto'}}> <Link to={"second"}> 결정</Link>  </button>
  
  
     </div>
  }
  function Page2(props){
    console.log(sessionStorage.getItem('name'))
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
  
      return <motion.div animate = {{opacity:[0,1]}} transition={{duration:2.0}} className='poketmon'> <Link to = {"" + i}><img className = 'poketmon2'src={a[1]}>
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

    props.setid(id)
    sessionStorage.setItem('id',id)
    
    
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
  let id= sessionStorage.getItem('id')
  let name = sessionStorage.getItem('name')


  
 

  
return <div className='second'>
  <div className='detailbox'>
<div className='div1 relative'>
  <p className='name_2'> {name}</p>
  <div></div><img src = '/금선.png' className='girl'></img></div>
  <div className='div2 relative'>
   <p className='name_2'> {props.people[id][0]}</p> 
   
    <img src= {props.people[id][1]} className = {'monster '+fade}   draggable='true'></img></div>
  <div style={{clear:'both'}}></div>
  <Button variant="outline-dark" className='info relative'><Link to={'information/player'}> 플레이어 정보</Link></Button>
  <Button variant="outline-dark" className='info relative'><Link to={'information/poketmon'}> 포켓몬 정보 </Link></Button>

  <div className='outside relative'>
 <Button variant="outline-dark" className='boxing' >
    <Link to={'dict'}>포켓몬 도감</Link>
    </Button>
    </div>
    <div className='outside relative' >
    <Button variant="outline-dark" className='boxing'><Link to={'hunt'} >포켓몬 잡으러 가기</Link></Button>
    </div>
    <div className='outside relative' >
    <Button variant="outline-dark" className='boxing'><Link to={'information/box'} >포켓몬 보관함</Link></Button>
    </div>
   

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