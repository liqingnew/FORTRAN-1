C======================================================================= 
C     BLOCK DATA PROGRAM FOR EXTRAN 
C======================================================================= 
      BLOCK DATA EXTBLK
      INCLUDE 'TAPES.INC'
      INCLUDE 'BD.INC'
      INCLUDE 'JUNC.INC'
      DATA IND/' ','*'/
C======================================================================= 
C     NORMALIZED CROSS-SECTIONAL AREA 
C======================================================================= 
      DATA ANORM/ 
     1 .0000,.0134,.0374,.0680,.1033,.1423,.1845,.2292,.2759,.3242,
     2 .3736,.4237,.4745,.5255,.5763,.6264,.6758,.7241,.7708,.8154, 
     3 .8576,.8967,.9320,.9626,.9866,1.000, 
     4 .0000,.0400,.0800,.1200,.1600,.2000,.2400,.2800,.3200,.3600, 
     5 .4000,.4400,.4800,.5200,.5600,.6000,.6400,.6800,.7200,.7600,
     6 .8000,.8400,.8800,.9200,.9600,1.000, 
     7 .0000,.0181,.0508,.0908,.1326,.1757,.2201,.2655,.3118,.3587,
     8 .4064,.4542,.5023,.5506,.5987,.6462,.6931,.7387,.7829,.8253, 
     9 .8652,.9022,.9356,.9645,.9873,1.000, 
     1 .0000,.0150,.0400,.0550,.0850,.1200,.1555,.1900,.2250,.2750,
     2 .3200,.3700,.4200,.4700,.5150,.5700,.6200,.6800,.7300,.7800, 
     3 .8350,.8850,.9250,.9550,.9800,1.000, 
     4 .0000,.0173,.0457,.0828,.1271,.1765,.2270,.2775,.3280,.3780,
     5 .4270,.4765,.5260,.5740,.6220,.6690,.7160,.7610,.8030,.8390, 
     6 .8770,.9110,.9410,.9680,.9880,1.000/                          
C======================================================================= 
C     NORMALIZED HYDRAULIC RADIUS                               
C     SECOND SHAPE IS RECTANGULAR - BUT DO NOT USE - CANNOT NORMALIZE
C     A GENERAL RECTANGULAR HYDRAULIC RADIUS                        
C======================================================================= 
      DATA HRNORM/ 
     1 .0100,.1048,.2052,.3016,.3944,.4824,.5664,.6456,.7204,.7912,
     2 .8568,.9176,.9736,1.024,1.070,1.110,1.144,1.174,1.194,1.210, 
     3 1.217,1.215,1.203,1.178,1.132,1.000,                         
     4 .0000,.0400,.0800,.1200,.1600,.2000,.2400,.2800,.3200,.3600, 
     5 .4000,.4400,.4800,.5200,.5600,.6000,.6400,.6800,.7200,.7600, 
     6 .8000,.8400,.8800,.9200,.9600,1.000,                         
     7 .0100,.1040,.2065,.3243,.4322,.5284,.6147,.6927,.7636,.8268, 
     8 .8873,.9417,.9905,1.036,1.077,1.113,1.143,1.169,1.189,1.202, 
     9 1.208,1.206,1.195,1.170,1.126,1.000,                         
     1 .0100,.0970,.2160,.3020,.3860,.4650,.5360,.6110,.6760,.7350, 
     2 .7910,.8540,.9040,.9410,1.008,1.045,1.076,1.115,1.146,1.162, 
     3 1.186,1.193,1.186,1.162,1.107,1.000,                         
     4 .0100,.0952,.1890,.2730,.3690,.4630,.5600,.6530,.7430,.8220, 
     5 .8830,.9490,.9990,1.055,1.095,1.141,1.161,1.188,1.206,1.206, 
     6 1.206,1.205,1.196,1.168,1.127,1.000/                         
C======================================================================= 
C     NORMALIZED SURFACE WIDTH 
C======================================================================= 
      DATA TWNORM/ 
     1 .3919,.3919,.5426,.6499,.7332,.8000,.8542,.8980,.9330,.9600, 
     2 .9798,.9928,.9992,.9992,.9928,.9798,.9600,.9330,.8980,.8542, 
     3 .8000,.7332,.6499,.5426,.3919,.3919, 
     4 1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000, 
     5 1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000,1.000, 
     6 1.000,1.000,1.000,1.000,1.000,1.000, 
     7 .5878,.5878,.8772,.8900,.9028,.9156,.9284,.9412,.9540,.9668, 
     8 .9798,.9928,.9992,.9992,.9928,.9798,.9600,.9330,.8980,.8542, 
     9 .8000,.7332,.6499,.5426,.3919,.3919, 
     1 .2980,.2980,.4330,.5080,.5820,.6420,.6960,.7460,.7910,.8360, 
     2 .8660,.8960,.9260,.9560,.9700,.9850,1.000,.9850,.9700,.9400,
     3 .8960,.8360,.7640,.6420,.3100,.3100,
     4 .4900,.4900,.6670,.8200,.9300,1.000,1.000,1.000,.9970,.9940,
     5 .9880,.9820,.9670,.9480,.9280,.9040,.8740,.8420,.7980,.7500, 
     6 .6970,.6370,.5670,.4670,.3420,.3420/
      END
