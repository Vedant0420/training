<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
$brand = "Volvo";
$color = "Green";

function getCarInfo($brand, $color) {
    return "Color :" . $color . ", Brand:" . $brand . ".";

}

echo getCarInfo($brand, $color);
echo "<br>";
echo getCarInfo("BMW", "Blue");
?>
</body>
</html>

