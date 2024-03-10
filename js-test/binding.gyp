{
  "targets": [
    {
      "target_name": "CarJS",
      "sources": [ "../car_wrap.cxx", "../car.cpp" ],
      "include_dirs" : [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}