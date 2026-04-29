<!DOCTYPE html>
<html>
<head>
  <title>Our Love Story ❤️</title>
</head>
<body>

<h2>Enter Our Special Date 💖</h2>
<input type="password" id="pass">
<button onclick="check()">Unlock</button>

<script>
function check() {
  var p = document.getElementById("pass").value;

  if(p === "14Feb2023") {
    window.location.href = "home.html";
  } else {
    alert("Wrong password 💔");
  }
}
</script>

</body>
</html>
