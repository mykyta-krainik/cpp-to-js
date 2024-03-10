{
  "targets": [
    {
      "target_name": "SwigJS",
      "sources": [ "../car_wrap.cxx", "../car.cpp" ],
      "include_dirs" : [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}