<?php
  class Car {

    //Properties / Fields
    public $brand;
    public $color;
    public $vehicletype = "car";

    //Constructor
    public function __construct($brand, $color)
    {
      $this->brand = $brand;
      $this->color = $color;
    }

  }

  $car01 = new Car("Toyota", "Black");
  echo $car01->brand;
  $car01->vehicletype;
  
?>
