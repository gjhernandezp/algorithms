<!DOCTYPE html>
<html>
<body>

<h2>JavaScript Alert</h2>

<button onclick="myFunction()">Click to sum 1 to 10.</button>

<script>
function myFunction() {
  let s= 0;
  for (let i = 0; i < 10; i++) {
  s += i;}
  alert("Sum 1 to 10 = "+s) ;
}
</script>

</body>
</html>
