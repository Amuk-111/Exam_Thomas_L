var nbrSquare
const input = document.getElementById("input") 

function ReadAndPrintMyFile() {
  var myFile = this.files[0]
  var reader = new FileReader()

  //function on click 
  echiquier.addEventListener("click", function (event) {
    var td_odd = document.getElementById("odd"); 
    var td_even = document.getElementById("even");
    var table = document.getElementById("table");
    console.log(event.table); 
    td_odd.style.backgroundcolor = 'red';
    td_even.style.backgroundcolor = 'blue';
  })

  reader.addEventListener("load", function (event) {
    var fileContentArray = event.target.result.split(/\r\n|\n/)
    var nbrSquare = parseInt(fileContentArray[0])
    var echiquier = ""

    echiquier += "<table id='table' border=1>"
    // First line with columns numbers
    // -------------------------------
    echiquier += "<tr>"
    echiquier += "<td></td>"
    for (var col = 1; col <= nbrSquare; col++) {
      echiquier += "<td>" + col + "</td>"
    }
    echiquier += "<td></td>"
    echiquier += "</tr>"

    // Every line with line letter before/after
    // -------------------------------
    for (var line = 1; line < fileContentArray.length; line++) {
      echiquier += "<tr>"
      var lineStr = fileContentArray[line]
      var col
      echiquier += "<td>" + lineStr.charAt(0) + "</td>"

      for (col = 1; col < lineStr.length; col++) {
        if ((col + line) % 2 == 0) 
          echiquier += "<td class='odd'><img src='xx' id='img" + line + col + "'></td>"
        else 
          echiquier += "<td class='even'><img src='yy' id='img" + line + col + "'></td>"
      }

      echiquier += "<td>" + lineStr.charAt(0) + "</td>"
      echiquier += "</tr>"
    }

    // Last line with columns numbers
    // -------------------------------
    echiquier += "<tr>"
    echiquier += "<td></td>"
    for (var col = 1; col <= nbrSquare; col++) {
      echiquier += "<td>" + col + "</td>"
    }
    echiquier += "<td></td>"
    echiquier += "</tr>"
    echiquier += "</table>"

    // Display the final result in a Div (so it takes the CSS)
    // -------------------------------------------------------
    document.getElementById("echiquier").innerHTML = echiquier;

    // placing the pawns on the chessboard
    //------------------------------------
    for (var line = 1; line < fileContentArray.length; line++) {
      var lineStr = fileContentArray[line]
      for (var col = 1; col < fileContentArray.length; col++) {
        var img = document.getElementById("img"+line+col)
        var imgurl = "images/"+lineStr.charAt(col) + ".png"
        console.log(("img"+line+col),imgurl,img.src)
        img.src = imgurl
      }
    }
  })
  reader.readAsText(myFile)
}

input.addEventListener("change", ReadAndPrintMyFile)
//document.addEventListener("DOMContentLoaded", walkmydog, false)
