C     from CRHGE.INC   
C     RCHRES module common
C            GENERAL section
      COMMON/SCRTCH/HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ,PFLAG,BFLAG,DUMY,PIVL,BIVL,
     $              PYREND,BYREND,RCHPFG,RCHBFG,UUNITS,IUNITS,OUNITS,
     $              PUNIT,BUNIT,MESSU,MSGFL,RCHNO,RCHID,DELT,DELT60,
     $              DELTS,NDAY,NDAYS,LKFG,NEXITS,HRFG,DAYFG,STFG,
     $              EDAYFG,EMONFG,EPYRFG,EBYRFG,YR,MON,DAY,HR,MIN,IVL,
     $              IVL1,PIVLNO,BIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,SPOUT,SPNUND,DUMGEN,DUMRCH
      INTEGER       HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ(2),PFLAG(11),BFLAG(11),
     $              DUMY(1),PIVL,BIVL,PYREND,BYREND,RCHPFG,RCHBFG,
     $              UUNITS,IUNITS,OUNITS,PUNIT(2),BUNIT(2),MESSU,
     $              MSGFL,RCHNO,RCHID(5),NDAY(12),NDAYS,LKFG,NEXITS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,EBYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,BIVLNO,NXTMON,
     $              SPAFP,SPAKND,SPIVL,SPOPNO,SPOUT,SPNUND,DUMGEN(13)
      REAL          DELT,DELT60,DELTS
      INTEGER       DUMRCH(17889)
C
      EQUIVALENCE   (ASVEC,HYDRFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR)
      INTEGER       ASVEC(11),UNIT(5),TIMFG(6),DATIM(5)
C     end byte:  72000 word:18000
