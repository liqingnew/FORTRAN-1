CIM   common block containing monthly base flow factors  2/96
CIM  MAXSETS - MAXIMUM NUMBER OF BASE FLOW SETS
CIM  MAXBFF  - MAXIMUM NUMBER OF BASE FLOW VALUES PER SET
      PARAMETER(MAXSETS=20,MAXBFF=120)
      COMMON/MOBFF/NUMSETS,NUMBFF(MAXSETS),INBFF(MAXSETS),BFFMO(MAXSETS,
     .MAXBFF),MONTHOLD
      COMMON/MOBFFE/IWHICH(NEE)
      COMMON/MOBFFT/IBFF(MAXSETS)
