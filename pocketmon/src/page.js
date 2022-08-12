import { memo } from 'react'
import {Link} from 'react-router-dom'
import TypeAnimation from 'react-type-animation';
function Page(props){
    return <div className='first'>
      
         
    <img src='/oh.png' className='oh'></img>
    <Type1></Type1>
    
    <input type={'text'}  className = 'text' onChange = {function(e){
     let copy = [...props.name]
     copy = e.target.value;
     props.setname(copy);
     e.stopPropagation();
  
  
    }}></input>
    <button style={{display:'block', margin:'auto'}}> <Link to={"second"}> 결정</Link>  </button>
  
  
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
  export {Page};