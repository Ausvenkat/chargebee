var startDate = new Date("2017-10-01");
var endDate = new Date("2017-10-07");
var getDateArray = function(start, end) {

  
  var  arr = new Array();
    var dt = new Date(start);

  while (dt <= end) {
    arr.push(new Date(dt));
    dt.setDate(dt.getDate() + 1);
  }

  return arr;

}
var dateArr = getDateArray(startDate, endDate);

// Output
// document.write("<p>Start Date: " + startDate + "</p>");
// document.write("<p>End Date: " + endDate + "</p>");
// document.write("<p>Date Array</p>")
for (var i = 0; i < dateArr.length; i++) {
    document.write("<p>" + dateArr[i] + "</p>");
}
