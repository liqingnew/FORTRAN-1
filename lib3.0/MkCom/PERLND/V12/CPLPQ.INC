C     from CPLPQ.INC   
C     PERLND module common
C            PQUAL section
      COMMON/SCRTCH/AIRTFG,SNOWFG,PWATFG,SEDFG,PSTFG,PWGFG,PQALFG,
     $              MSTLFG,PESTFG,NITRFG,PHOSFG,TRACFG,AGFG,PFLAG,
     $              PIVL,PYREND,PERPFG,UUNITS,IUNITS,OUNITS,PUNIT,
     $              MESSU,MSGFL,LSNO,LSID,DELT,DELT60,DELT5,NDAY,
     $              NDAYS,DUMW,HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,
     $              YR,MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,
     $              SPAKND,SPIVL,SPOPNO,SPOUT,SPNUND,DUMGEN,DUM1,
     $              PRECFP,DUM2,SNIF,DUM3,PWIF,DUM4,SLIFP,DUM5,ILIFP,
     $              DUM6,ALIFP,DUM7,PWCF1,DUM8,SOFP,IOFP,AOFP,POFP,
     $              DUM9,SDIF,SLSDFP,DUM10,SDCF1,DUM11,WSDFP,CSDFP,
     $              DUM12,LIFAC,DUM13,PQIF,SLIQSP,ILIQC,ALIQC,SLIQOX,
     $              SLIQSX,ILIQCX,ALIQCX,PQAFFP,PQACFP,NQUAL,NQSD,
     $              NQOF,NQIF,NQGW,PQADFG,QSDFG,QSDFP,VPFWFG,VPFSFG,
     $              QSOFG,QSOFP,VQOFG,QIFWFG,QIFWFP,VIQCFG,QAGWFG,
     $              QAGWFP,VAQCFG,QUALID,QTYID,PQAFXM,PQACNM,POTFWM,
     $              POTFSM,ACQOPM,REMQOM,WSFAC,IOQCM,AOQCM,SQO,POTFW,
     $              POTFS,ACQOP,REMQOP,IOQC,AOQC,SOQSP,IOQCE,AOQCE,
     $              SQOFP,SOQSPX,IOQCFP,AOQCFP,PQCF1,PQCF2,SOQS,PQCF3,
     $              SOQOC,SOQUAL,SOQC,PQCF4,PQCF5,POQUAL,POQC,PQCF6
      COMMON/SCRTCH/PQCF7,PQADEP,ISQO,WSQSFP,SCQSFP,SOQSFP,SOQOFP,
     $              SOQOCX,SOQFP,SOQCFP,IOQFP,AOQFP,POQFP,POQCFP,
     $              PQADDX,PQADWX,PQADPX,ISQOFP,DUMPER
      INTEGER       AIRTFG,SNOWFG,PWATFG,SEDFG,PSTFG,PWGFG,PQALFG,
     $              MSTLFG,PESTFG,NITRFG,PHOSFG,TRACFG,AGFG,PFLAG(12),
     $              PIVL,PYREND,PERPFG,UUNITS,IUNITS,OUNITS,PUNIT(2),
     $              MESSU,MSGFL,LSNO,LSID(5),NDAY(12),NDAYS,DUMW(2),
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,MON,DAY,
     $              HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,SPOUT,SPNUND,DUMGEN(13),PRECFP,SLIFP,ILIFP,
     $              ALIFP,SOFP,IOFP,AOFP,POFP,SLSDFP,WSDFP,CSDFP,
     $              SLIQOX(7),SLIQSX(7),ILIQCX(7),ALIQCX(7),
     $              PQAFFP(10),PQACFP(10),NQUAL,NQSD,NQOF,NQIF,NQGW,
     $              PQADFG(20),QSDFG(10),QSDFP(10),VPFWFG(7),
     $              VPFSFG(7),QSOFG(10),QSOFP(10),VQOFG(7),QIFWFG(10),
     $              QIFWFP(10),VIQCFG(7),QAGWFG(10),QAGWFP(10),
     $              VAQCFG(7),QUALID(3,10),QTYID(1,10),SQOFP(7),
     $              SOQSPX(7),IOQCFP(7),AOQCFP(7),WSQSFP(7),SCQSFP(7),
     $              SOQSFP(7),SOQOFP(7),SOQOCX(7),SOQFP(10),
     $              SOQCFP(10),IOQFP(7),AOQFP(7),POQFP(10),POQCFP(10),
     $              PQADDX(10),PQADWX(10),PQADPX(10),ISQOFP(7)
      REAL          DELT,DELT60,DELT5,SNIF(5),PWIF(5,5),PWCF1(6,5),
     $              SDIF(5),SDCF1(2,5),LIFAC(4),PQIF(7,5),SLIQSP(7),
     $              ILIQC(7),ALIQC(7),PQAFXM(12,10),PQACNM(12,10),
     $              POTFWM(12,7),POTFSM(12,7),ACQOPM(12,7),
     $              REMQOM(12,7),WSFAC(7),IOQCM(12,7),AOQCM(12,7),
     $              SQO(7),POTFW(7),POTFS(7),ACQOP(7),REMQOP(7),
     $              IOQC(7),AOQC(7),SOQSP(7),IOQCE(7),AOQCE(7),
     $              PQCF1(7,5),PQCF2(7,5),SOQS(7),PQCF3(7,5),SOQOC(7),
     $              SOQUAL(10),SOQC(10),PQCF4(7,5),PQCF5(7,5),
     $              POQUAL(10),POQC(10),PQCF6(10,5),PQCF7(10,5),
     $              PQADEP(10),ISQO(7)
      INTEGER       DUM1(3),DUM2(28),DUM3(170),DUM4,DUM5,DUM6,
     $              DUM7(554),DUM8(138),DUM9(27),DUM10(42),DUM11(11),
     $              DUM12(165),DUM13(82),DUMPER(14989)
C
      EQUIVALENCE   (ASVEC,AIRTFG),(PRTDAT,PFLAG),(UNIT,UUNITS),
     $              (TIMFG,HRFG),(DATIM,YR),(PREC,SNIF),
     $              (SURLI,PWIF(1,1)),(IFWLI,PWIF(3,1)),
     $              (AGWLI,PWIF(5,1)),(SURO,PWCF1(2,1)),
     $              (IFWO,PWCF1(3,1)),(AGWO,PWCF1(4,1)),
     $              (PERO,PWCF1(5,1)),(SLSED,SDIF),(WSSD,SDCF1(1,1)),
     $              (SCRSD,SDCF1(2,1)),(SLIQO, PQIF(1,1)),
     $              (WASHQS,PQCF1(1,1)),(SCRQS,PQCF2(1,1)),
     $              (SOQO,PQCF3(1,1)),(IOQUAL,PQCF4(1,1)),
     $              (AOQUAL,PQCF5(1,1)),(PQADDR,PQCF6(1,1))
      EQUIVALENCE   (PQADWT,PQCF7(1,1))
      INTEGER       ASVEC(12),PRTDAT(14),UNIT(5),TIMFG(6),DATIM(5)
      REAL          PREC,SURLI,IFWLI,AGWLI,SURO,IFWO,AGWO,PERO,SLSED,
     $              WSSD,SCRSD,SLIQO(7),WASHQS(7),SCRQS(7),SOQO(7),
     $              IOQUAL(7),AOQUAL(7),PQADDR(10),PQADWT(10)
C     end byte:  72000 word:18000
