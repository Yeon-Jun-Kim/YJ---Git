import logo from './logo.svg';

import './App.css';
import axios from 'axios';
import { useEffect, useState } from 'react';
import { throttle } from 'lodash';


function App() {

 
let [scr,setscr] = useState('')

useEffect(function(){
throttle(window.addEventListener('scroll',
function(){
  setscr("nav2")
}
),500)
return setscr("")
}



,[])
  

  return (

    <div >
    <nav className = {'nav ' + scr} > 자몽</nav>
    <div className="first">
   

    </div>

    </div>

  
  );
}

export default App;
