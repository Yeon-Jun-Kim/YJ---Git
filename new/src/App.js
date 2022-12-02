import React, { useState, useEffect, useTransition } from "react";
import ReactDOM from "react-dom";
import { InView, useInView } from "react-intersection-observer";

import "./styles.css";


let idx = 10

function App() {
  


  
  let [ref,inview] =  useInView()
  function range(start, end) {
    let array = [];
    for (let i = start; i < end; ++i) {
      array.push(i);
    }
    return array;
  }
 
  let [count, setcount] = useState(range(1,idx))

  useEffect(
   function(){
    
    if(inview == true){

     idx += 10
     console.log(idx)
      setcount(range(1,idx))

    }
   }
   ,[inview]
  )
  

 

  return <div>
    <div>

    </div>
    {
    count.map(function(a){
    return <div ref={ref} className="ListItem">{a}</div>

  })}
</div>



    
}

export default App
