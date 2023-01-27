from flask import Flask, render_template
from flask import request
from datetime import datetime
now = datetime.now()
date = now.date()


app = Flask(__name__)

@app.route("/")
def view_template():
	return render_template("index.html")

@app. route("/tomorrow")
def view_tomorrow():
    
    dept = request.args.get('dept')
    e_mail = request.args.get('E-mail')
    name = request.args.get('pname')
    
    
    return render_template("nextweek.html" , dept = dept, e_mail = e_mail, name = name, date = date)

@app. route("/next")
def view_next():
    return render_template("next.html", date = date)

if __name__ == "__main__":
    app.run(host = "0.0.0.0", port = 5002, debug = True)
    


  
  
  