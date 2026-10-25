// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145298050 FUN_145298050 body=89 status=ok
// SIG undefined FUN_145298050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145298050(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_144ba24f0(0x26,0xc1,0x65,"crypto\\engine\\tb_asnmth.c",0x59);
  return 0;
}



// FUNCTION 1452980b0 FUN_1452980b0 body=197 status=ok
// SIG undefined FUN_1452980b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452980b0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  _local_10 = CONCAT44(1,param_3);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = param_2;
  iVar1 = FUN_144e986c0(&DAT_14c797584);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c797588;
  }
  if (iVar2 == 0) {
    FUN_144ba24f0(0x26,0xc5,0x41,"crypto\\engine\\tb_asnmth.c",0xc4);
    return 0;
  }
  FUN_144e98620(DAT_14c797590);
  FUN_145291490(DAT_14c7fc5b0,FUN_1452982b0,&local_28);
  if (local_28 != 0) {
    *(int *)(local_28 + 0x9c) = *(int *)(local_28 + 0x9c) + 1;
  }
  *param_1 = local_28;
  FUN_144e98640(DAT_14c797590);
  return uStack_20;
}



// FUNCTION 145298180 FUN_145298180 body=31 status=ok
// SIG undefined FUN_145298180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145298180(undefined4 param_1)

{
  FUN_145291360(&DAT_14c7fc5b0,param_1);
  return;
}



// FUNCTION 1452981a0 FUN_1452981a0 body=99 status=ok
// SIG undefined FUN_1452981a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452981a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c7fc5b0,FUN_145298290,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 145298210 FUN_145298210 body=125 status=ok
// SIG undefined FUN_145298210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145298210(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x50))(param_1,0,&local_res8,0);
    lVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(param_1 + 0x50))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          FUN_144ed2cf0(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 145298290 FUN_145298290 body=29 status=ok
// SIG undefined FUN_145298290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145298290(void)

{
  FUN_145291300(&DAT_14c7fc5b0);
  return;
}



// FUNCTION 1452982b0 FUN_1452982b0 body=214 status=ok
// SIG undefined FUN_1452982b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452982b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  longlong local_res20;
  
  if (param_4[1] == 0) {
    iVar5 = 0;
    iVar2 = FUN_144babbf0(param_2);
    if (0 < iVar2) {
      do {
        lVar3 = FUN_144babc00(param_2,iVar5);
        (**(code **)(lVar3 + 0x50))(lVar3,&local_res20,0,param_1);
        if (local_res20 != 0) {
          _Str1 = *(char **)(local_res20 + 0x10);
          cVar1 = *_Str1;
          pcVar6 = _Str1;
          for (uVar4 = 0; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          if (((uVar4 & 0x7fffffff) == *(uint *)(param_4 + 3)) &&
             (iVar2 = _strnicmp(_Str1,(char *)param_4[2],(longlong)(int)*(uint *)(param_4 + 3)),
             iVar2 == 0)) {
            param_4[1] = local_res20;
            *param_4 = lVar3;
            return;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_144babbf0(param_2);
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 145298390 FUN_145298390 body=39 status=ok
// SIG undefined FUN_145298390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145298390(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_145298640(0,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1452983c0 FUN_1452983c0 body=40 status=ok
// SIG undefined FUN_1452983c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452983c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_145298640(2,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1452983f0 FUN_1452983f0 body=31 status=ok
// SIG undefined FUN_1452983f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452983f0(undefined8 param_1,undefined8 param_2)

{
  FUN_145298890(2,param_1,param_2);
  return;
}



// FUNCTION 145298410 FUN_145298410 body=531 status=ok
// SIG undefined FUN_145298410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145298410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  uint local_228 [2];
  undefined8 local_220;
  undefined1 local_218 [224];
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  undefined1 local_b8 [96];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x145298427;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_220 = param_6;
  iVar2 = FUN_144ba03d0(param_2);
  uVar5 = ((int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3) + 8;
  lVar3 = FUN_144ea64e0(uVar5,"crypto\\bn\\bn_rand.c",0xdf);
  if (lVar3 != 0) {
    iVar2 = FUN_144ba09d0(param_3,local_b8,0x60);
    if (iVar2 < 0) {
      local_238 = CONCAT44(local_238._4_4_,0xea);
      FUN_144ba24f0(3,0x8c,0x75,"crypto\\bn\\bn_rand.c");
    }
    else {
      local_228[0] = 0;
      if (uVar5 != 0) {
        do {
          iVar2 = FUN_144bac8c0(local_138,0x40);
          if (iVar2 != 1) goto LAB_1452985ea;
          FUN_144edb680(local_218);
          FUN_144edb710(local_218,local_228,4);
          FUN_144edb710(local_218,local_b8,0x60);
          FUN_144edb710(local_218,param_4,param_5);
          FUN_144edb710(local_218,local_138,0x40);
          FUN_144edb820(local_f8,local_218);
          uVar1 = uVar5 - local_228[0];
          if (0x40 < uVar5 - local_228[0]) {
            uVar1 = 0x40;
          }
          memcpy((void *)((ulonglong)local_228[0] + lVar3),local_f8,(ulonglong)uVar1);
          local_228[0] = local_228[0] + uVar1;
          param_6 = local_220;
        } while (local_228[0] < uVar5);
      }
      lVar4 = FUN_144ba0740(lVar3,uVar5,param_1);
      if (lVar4 != 0) {
        local_238 = param_6;
        FUN_144eef830(0,param_1,param_1,param_2);
      }
    }
  }
LAB_1452985ea:
  FUN_144ea6530(lVar3,"crypto\\bn\\bn_rand.c",0x106);
  FUN_14259f0c0(local_b8,0x60);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_258);
}



// FUNCTION 145298640 FUN_145298640 body=581 status=ok
// SIG undefined FUN_145298640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145298640(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  byte local_res18 [16];
  
  lVar7 = 0;
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      FUN_144ba0bb0(param_2,0);
      return 1;
    }
  }
  else if ((-1 < param_3) && ((param_3 != 1 || (param_4 < 1)))) {
    iVar1 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
    lVar5 = (longlong)iVar1;
    uVar6 = param_3 - 1U & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    pbVar3 = (byte *)FUN_144ea64e0(lVar5,"crypto\\bn\\bn_rand.c",0x27);
    if (pbVar3 == (byte *)0x0) {
      FUN_144ba24f0(3,0x7f,0x41,"crypto\\bn\\bn_rand.c",0x29);
    }
    else {
      if (param_1 == 0) {
        iVar2 = FUN_144bac850();
      }
      else {
        iVar2 = FUN_144bac8c0(pbVar3,iVar1);
      }
      if (0 < iVar2) {
        if ((param_1 == 1) && (lVar4 = lVar7, 0 < lVar5)) {
          do {
            iVar2 = FUN_144bac850(local_res18,1);
            if (iVar2 < 1) goto LAB_14529881b;
            if ((local_res18[0] < 0x80) || (lVar4 < 1)) {
              if (local_res18[0] < 0x2a) {
                pbVar3[lVar4] = 0;
              }
              else if (local_res18[0] < 0x54) {
                pbVar3[lVar4] = 0xff;
              }
            }
            else {
              pbVar3[lVar4] = pbVar3[lVar4 + -1];
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < lVar5);
        }
        if (-1 < param_4) {
          if (param_4 == 0) {
            *pbVar3 = *pbVar3 | (byte)(1 << (uVar6 & 0x1f));
          }
          else if (uVar6 == 0) {
            pbVar3[1] = pbVar3[1] | 0x80;
            *pbVar3 = 1;
          }
          else {
            *pbVar3 = *pbVar3 | '\x03' << ((char)uVar6 - 1U & 0x1f);
          }
        }
        *pbVar3 = *pbVar3 & ~(byte)(0xff << ((char)uVar6 + 1U & 0x1f));
        if (param_5 != 0) {
          pbVar3[iVar1 + -1] = pbVar3[iVar1 + -1] | 1;
        }
        lVar4 = FUN_144ba0740(pbVar3,iVar1,param_2);
        lVar7 = 0;
        if (lVar4 != 0) {
          lVar7 = 1;
        }
      }
    }
LAB_14529881b:
    FUN_144ea66f0(pbVar3,lVar5,"crypto\\bn\\bn_rand.c",0x58);
    return lVar7;
  }
  FUN_144ba24f0(3,0x7f,0x76,"crypto\\bn\\bn_rand.c",0x5d);
  return 0;
}



// FUNCTION 145298890 FUN_145298890 body=452 status=ok
// SIG undefined FUN_145298890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145298890(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1452988a3;
  iVar3 = 100;
  if ((*(int *)(param_3 + 0x10) != 0) || (iVar1 = FUN_144ba0340(param_3), iVar1 != 0)) {
    FUN_144ba24f0(3,0x8a,0x73,"crypto\\bn\\bn_rand.c",0x77,uVar5);
    return 0;
  }
  iVar1 = FUN_144ba03d0(param_3);
  if (iVar1 == 1) {
    FUN_144ba0bb0(param_2,0);
  }
  else {
    iVar2 = FUN_144ba0d50(param_3,iVar1 + -2);
    if ((iVar2 == 0) && (iVar2 = FUN_144ba0d50(param_3,iVar1 + -3), iVar2 == 0)) {
      do {
        iVar2 = FUN_145298640(param_1,param_2,iVar1 + 1,0xffffffff,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_144ba0c40(param_2,param_3);
        if (-1 < iVar2) {
          iVar2 = FUN_144eee270(param_2,param_2,param_3);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = FUN_144ba0c40(param_2,param_3);
          if ((-1 < iVar2) && (iVar2 = FUN_144eee270(param_2,param_2,param_3), iVar2 == 0)) {
            return 0;
          }
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = 0x99;
LAB_145298a04:
          FUN_144ba24f0(3,0x8a,0x71,"crypto\\bn\\bn_rand.c",uVar4);
          return 0;
        }
        iVar2 = FUN_144ba0c40(param_2,param_3);
      } while (-1 < iVar2);
    }
    else {
      do {
        iVar2 = FUN_145298640(param_1,param_2,iVar1,0xffffffff,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = 0xa6;
          goto LAB_145298a04;
        }
        iVar2 = FUN_144ba0c40(param_2,param_3);
      } while (-1 < iVar2);
    }
  }
  return 1;
}



// FUNCTION 145298a60 FUN_145298a60 body=190 status=ok
// SIG undefined FUN_145298a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145298a60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x18;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145298aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x98))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = FUN_1454ed210();
        return uVar2;
      }
      uVar2 = FUN_1454edb90();
      return uVar2;
    }
    uVar2 = 0x1d;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x127,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x145298a6c);
  return 0;
}



// FUNCTION 145298b20 FUN_145298b20 body=198 status=ok
// SIG undefined FUN_145298b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145298b20(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa0) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x4c;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145298bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa0))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = FUN_1454ed5f0();
        return uVar2;
      }
      uVar2 = FUN_1454ede20();
      return uVar2;
    }
    uVar2 = 0x50;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x7b,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x145298b2c);
  return 0;
}



// FUNCTION 145298bf0 FUN_145298bf0 body=188 status=ok
// SIG undefined FUN_145298bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145298bf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0xa8) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    uVar2 = 0x6a;
    uVar3 = 0x42;
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145298c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0xa8))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) == 0x196) {
        uVar2 = FUN_1454ed8e0();
        return uVar2;
      }
      uVar2 = FUN_1454ee140();
      return uVar2;
    }
    uVar2 = 0x6e;
    uVar3 = 0x65;
  }
  FUN_144ba24f0(0x10,0x7a,uVar3,"crypto\\ec\\ec_oct.c",uVar2,0x145298bfc);
  return 0;
}



// FUNCTION 145298cb0 FUN_145298cb0 body=232 status=ok
// SIG undefined FUN_145298cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145298cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  lVar1 = FUN_145298b20();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_144ea64e0(lVar1,"crypto\\ec\\ec_oct.c",0x8b);
    if (lVar2 == 0) {
      FUN_144ba24f0(0x10,0x119,0x41,"crypto\\ec\\ec_oct.c",CONCAT44(uVar4,0x8c),uVar5);
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_145298b20(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar3 == 0) {
        FUN_144ea6530(lVar2,"crypto\\ec\\ec_oct.c",0x91);
        lVar3 = 0;
      }
      else {
        *param_4 = lVar2;
      }
    }
  }
  return lVar3;
}



// FUNCTION 145298da0 FUN_145298da0 body=8 status=ok
// SIG undefined FUN_145298da0(void)

undefined ** FUN_145298da0(void)

{
  return &PTR_s_OpenSSL_EC_KEY_method_149d0d2d0;
}



// FUNCTION 145298db0 FUN_145298db0 body=399 status=ok
// SIG undefined FUN_145298db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_145298db0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x145298dc0;
  plVar2 = (longlong *)FUN_144ea6670(0x50,"crypto\\ec\\ec_kmeth.c",0x4b);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x10,0xf5,0x41,"crypto\\ec\\ec_kmeth.c",0x4e,uVar6);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar2 + 7) = 1;
  lVar3 = FUN_144e985a0();
  plVar2[9] = lVar3;
  if (lVar3 == 0) {
    FUN_144ba24f0(0x10,0xf5,0x41,"crypto\\ec\\ec_kmeth.c",0x55,uVar6);
    FUN_144ea6530(plVar2,"crypto\\ec\\ec_kmeth.c",0x56);
    return (longlong *)0x0;
  }
  *plVar2 = (longlong)PTR_PTR_14c731ea8;
  if (param_1 == 0) {
    lVar3 = FUN_14529de10();
    plVar2[1] = lVar3;
LAB_145298ec8:
    if (plVar2[1] != 0) {
      lVar3 = FUN_14529de00();
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        uVar5 = 0x67;
        goto LAB_145298e88;
      }
    }
    *(undefined4 *)(plVar2 + 2) = 1;
    *(undefined4 *)((longlong)plVar2 + 0x34) = 4;
    iVar1 = FUN_144ea5c20(8,plVar2,plVar2 + 8);
    if (iVar1 == 0) goto LAB_145298ea4;
    if (*(code **)(*plVar2 + 0x10) == (code *)0x0) {
      return plVar2;
    }
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 != 0) {
      return plVar2;
    }
    uVar5 = 0x75;
    uVar4 = 0x46;
  }
  else {
    iVar1 = FUN_144ec6850(param_1);
    if (iVar1 != 0) {
      plVar2[1] = param_1;
      goto LAB_145298ec8;
    }
    uVar5 = 0x5e;
LAB_145298e88:
    uVar4 = 0x26;
  }
  FUN_144ba24f0(0x10,0xf5,uVar4,"crypto\\ec\\ec_kmeth.c",uVar5);
LAB_145298ea4:
  FUN_144ed2e50(plVar2);
  return (longlong *)0x0;
}



// FUNCTION 145298f40 FUN_145298f40 body=286 status=ok
// SIG undefined FUN_145298f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145298f40(void *param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                       code *param_5)

{
  int iVar1;
  void *pvVar2;
  ulonglong local_res10;
  void *local_res20;
  ulonglong local_18 [2];
  
  local_18[1] = 0x145298f50;
  local_res20 = (void *)0x0;
  local_res10 = param_2;
  if (*(code **)(*param_4 + 0x48) == (code *)0x0) {
    FUN_144ba24f0(0x10,0xf6,0x98,"crypto\\ec\\ec_kmeth.c",0x87);
  }
  else {
    if (0x7fffffff < param_2) {
      FUN_144ba24f0(0x10,0xf6,0xa1,"crypto\\ec\\ec_kmeth.c",0x8b);
      return 0;
    }
    iVar1 = (**(code **)(*param_4 + 0x48))(&local_res20,local_18);
    pvVar2 = local_res20;
    if (iVar1 != 0) {
      if (param_5 == (code *)0x0) {
        if (local_18[0] < local_res10) {
          local_res10 = local_18[0];
        }
        memcpy(param_1,local_res20,local_res10);
      }
      else {
        (*param_5)(local_res20,local_18[0],param_1,&local_res10);
        pvVar2 = local_res20;
      }
      FUN_144ea66f0(pvVar2,local_18[0],"crypto\\ec\\ec_kmeth.c",0x97);
      return local_res10 & 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 145299060 FUN_145299060 body=549 status=ok
// SIG undefined FUN_145299060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * FUN_145299060(longlong *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  
  puVar10 = (undefined1 *)0x0;
  iVar3 = FUN_144ba0340();
  if (iVar3 == 0) {
    if (param_2 - 1U < 7) {
      uVar7 = 1 << ((byte)param_2 & 0x1f);
      uVar2 = uVar7 * 2;
      iVar3 = FUN_144ba0ba0();
      cVar1 = '\x01';
      if (iVar3 != 0) {
        cVar1 = -1;
      }
      if ((*param_1 == 0) || ((int)param_1[1] == 0)) {
        uVar11 = 0x37;
      }
      else {
        iVar3 = FUN_144ba03d0(param_1);
        uVar9 = (ulonglong)iVar3;
        puVar10 = (undefined1 *)FUN_144ea64e0(uVar9 + 1,"crypto\\bn\\bn_intern.c",0x3c);
        if (puVar10 == (undefined1 *)0x0) {
          uVar11 = 0x42;
          uVar8 = 0x41;
          goto LAB_145299240;
        }
        uVar5 = *(uint *)*param_1 & uVar2 - 1;
        uVar6 = 0;
        do {
          if ((uVar5 == 0) && (uVar9 <= (longlong)param_2 + 1 + uVar6)) {
            if (uVar6 <= uVar9 + 1) {
              *param_3 = uVar6;
              return puVar10;
            }
            uVar11 = 0x82;
            goto LAB_14529923a;
          }
          uVar4 = 0;
          if ((uVar5 & 1) != 0) {
            uVar4 = uVar5;
            if (((uVar7 & uVar5) != 0) &&
               (uVar4 = uVar5 + uVar7 * -2, uVar9 <= (longlong)param_2 + 1 + uVar6)) {
              uVar4 = (int)(uVar2 - 1) >> 1 & uVar5;
            }
            if ((((int)uVar4 <= (int)-uVar7) || ((int)uVar7 <= (int)uVar4)) || ((uVar4 & 1) == 0)) {
              uVar11 = 0x65;
              goto LAB_14529923a;
            }
            uVar5 = uVar5 - uVar4;
            if (((uVar5 != 0) && (uVar5 != uVar2)) && (uVar5 != uVar7)) {
              uVar11 = 0x71;
              goto LAB_14529923a;
            }
          }
          puVar10[uVar6] = cVar1 * (char)uVar4;
          uVar6 = uVar6 + 1;
          iVar3 = FUN_144ba0d50(param_1,(int)uVar6 + param_2);
          uVar5 = ((int)uVar5 >> 1) + iVar3 * uVar7;
        } while ((int)uVar5 <= (int)uVar2);
        uVar11 = 0x7c;
      }
    }
    else {
      uVar11 = 0x2b;
    }
LAB_14529923a:
    uVar8 = 0x44;
  }
  else {
    puVar10 = (undefined1 *)FUN_144ea64e0(1,"crypto\\bn\\bn_intern.c",0x1f);
    if (puVar10 != (undefined1 *)0x0) {
      *puVar10 = 0;
      *param_3 = 1;
      return puVar10;
    }
    uVar11 = 0x21;
    uVar8 = 0x41;
    puVar10 = (undefined1 *)0x0;
  }
LAB_145299240:
  FUN_144ba24f0(3,0x8e,uVar8,"crypto\\bn\\bn_intern.c",uVar11);
  FUN_144ea6530(puVar10,"crypto\\bn\\bn_intern.c",0x89);
  return (undefined1 *)0x0;
}



// FUNCTION 145299290 FUN_145299290 body=4 status=ok
// SIG undefined FUN_145299290(void)

undefined4 FUN_145299290(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1452992a0 FUN_1452992a0 body=52 status=ok
// SIG undefined FUN_1452992a0(void)

void FUN_1452992a0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)(int)param_1[1];
  if ((int)param_1[1] < *(int *)((longlong)param_1 + 0xc)) {
    lVar3 = uVar2 * 8;
    do {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      *(undefined8 *)(lVar3 + *param_1) = 0;
      lVar3 = lVar3 + 8;
    } while ((int)uVar1 < *(int *)((longlong)param_1 + 0xc));
  }
  return;
}



// FUNCTION 1452992e0 FUN_1452992e0 body=98 status=ok
// SIG undefined FUN_1452992e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452992e0(void *param_1,undefined8 *param_2,int param_3)

{
  if (param_3 < *(int *)(param_2 + 1)) {
    return 0;
  }
  memset(param_1,0,(longlong)param_3 << 3);
  if ((void *)*param_2 != (void *)0x0) {
    memcpy(param_1,(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 3);
  }
  return 1;
}



// FUNCTION 145299350 FUN_145299350 body=4 status=ok
// SIG undefined FUN_145299350(void)

undefined8 FUN_145299350(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 145299360 FUN_145299360 body=145 status=ok
// SIG undefined FUN_145299360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145299360(undefined8 *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145299375;
  lVar1 = FUN_144ba1290(param_1,param_3);
  if (lVar1 == 0) {
    FUN_144ba24f0(3,0x90,0x41,"crypto\\bn\\bn_intern.c",0xbf,uVar2);
    return 0;
  }
  memcpy((void *)*param_1,param_2,(longlong)param_3 << 3);
  *(int *)(param_1 + 1) = param_3;
  FUN_144ba1350(param_1);
  return 1;
}



// FUNCTION 145299400 FUN_145299400 body=582 status=ok
// SIG undefined FUN_145299400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145299400(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  undefined8 uVar9;
  
  lVar8 = 0;
  bVar1 = false;
  iVar2 = FUN_144ba03d0(*(undefined8 *)(param_1 + 8));
  if (10000 < iVar2) {
    FUN_144ba24f0(5,0x67,0x67,"crypto\\dh\\dh_key.c",0x71);
    return 0;
  }
  lVar3 = FUN_144eedd20();
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar4 = lVar8;
  lVar5 = lVar8;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 == 0) {
      lVar4 = FUN_144ba05d0();
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      lVar5 = 0;
      if (lVar4 == 0) goto LAB_1452995cc;
      bVar1 = true;
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = FUN_144ba0570();
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      if (lVar5 == 0) goto LAB_1452995cc;
    }
    lVar6 = lVar8;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar6 = FUN_144eceb30(param_1 + 0x38,*(undefined8 *)(param_1 + 0x88),
                            *(undefined8 *)(param_1 + 8),lVar3);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      if (lVar6 == 0) goto LAB_1452995cc;
    }
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    if (bVar1) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar2 == 0) {
          iVar2 = FUN_144ba03d0(*(undefined8 *)(param_1 + 8));
          iVar2 = iVar2 + -1;
        }
        iVar2 = FUN_1452983c0(lVar4,iVar2,0,0);
        if ((iVar2 == 0) ||
           (((iVar2 = FUN_144ba0370(*(undefined8 *)(param_1 + 0x10),2), iVar2 != 0 &&
             (iVar2 = FUN_144ba0d50(*(undefined8 *)(param_1 + 8),2), iVar2 == 0)) &&
            (iVar2 = FUN_144ba0ff0(lVar4,0), iVar2 == 0)))) goto LAB_1452995cc;
      }
      else {
        do {
          do {
            iVar2 = FUN_1452983f0(lVar4,*(undefined8 *)(param_1 + 0x40));
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
            if (iVar2 == 0) goto LAB_1452995cc;
            iVar2 = FUN_144ba0340(lVar4);
          } while (iVar2 != 0);
          iVar2 = FUN_144ba0350(lVar4);
          uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
        } while (iVar2 != 0);
      }
    }
    lVar7 = FUN_144ba0570();
    if (lVar7 != 0) {
      FUN_144ba0240(lVar7,lVar4,4);
      uVar9 = *(undefined8 *)(param_1 + 8);
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))
                        (param_1,lVar5,*(undefined8 *)(param_1 + 0x10),lVar7,uVar9,lVar3,lVar6);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (iVar2 != 0) {
        FUN_144ba0630(lVar7);
        *(longlong *)(param_1 + 0x20) = lVar5;
        lVar8 = 1;
        *(longlong *)(param_1 + 0x28) = lVar4;
        goto LAB_1452995ec;
      }
      FUN_144ba0630(lVar7);
    }
  }
LAB_1452995cc:
  FUN_144ba24f0(5,0x67,3,"crypto\\dh\\dh_key.c",CONCAT44(uVar10,0xbb));
LAB_1452995ec:
  if (lVar5 != *(longlong *)(param_1 + 0x20)) {
    FUN_144ba0cd0(lVar5);
  }
  if (lVar4 != *(longlong *)(param_1 + 0x28)) {
    FUN_144ba0cd0(lVar4);
  }
  FUN_144eeddc0(lVar3);
  return lVar8;
}



// FUNCTION 145299650 FUN_145299650 body=434 status=ok
// SIG undefined FUN_145299650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145299650(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int local_res18 [4];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar7;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar5 = 0;
  uVar6 = 0xffffffff;
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_3 + 8));
  if (iVar1 < 0x2711) {
    lVar3 = FUN_144eedd20();
    uVar2 = uVar6;
    if (lVar3 != 0) {
      FUN_144eede20(lVar3);
      lVar4 = FUN_144eede90(lVar3);
      uVar2 = 0xffffffff;
      if (lVar4 != 0) {
        if (*(longlong *)(param_3 + 0x28) == 0) {
          uVar7 = 0xdb;
          uVar2 = 100;
        }
        else {
          if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
            lVar5 = FUN_144eceb30(param_3 + 0x38,*(undefined8 *)(param_3 + 0x88),
                                  *(undefined8 *)(param_3 + 8),lVar3);
            FUN_144ba0220(*(undefined8 *)(param_3 + 0x28),4);
            uVar2 = uVar6;
            if (lVar5 == 0) goto LAB_1452997de;
          }
          iVar1 = FUN_1454d6120(param_3,param_2,local_res18);
          if ((iVar1 == 0) || (local_res18[0] != 0)) {
            uVar7 = 0xe8;
            uVar2 = 0x66;
          }
          else {
            iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x18))
                              (param_3,lVar4,param_2,*(undefined8 *)(param_3 + 0x28),
                               *(undefined8 *)(param_3 + 8),lVar3,lVar5);
            if (iVar1 != 0) {
              iVar1 = FUN_144ba03d0(*(undefined8 *)(param_3 + 8));
              uVar2 = FUN_144ba09d0(lVar4,param_1,(int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3);
              goto LAB_1452997de;
            }
            uVar7 = 0xee;
            uVar2 = 3;
          }
        }
        FUN_144ba24f0(5,0x66,uVar2,"crypto\\dh\\dh_key.c",uVar7);
        uVar2 = uVar6;
      }
    }
  }
  else {
    FUN_144ba24f0(5,0x66,0x67,"crypto\\dh\\dh_key.c",CONCAT44(uVar2,0xce));
    lVar3 = lVar5;
    uVar2 = 0xffffffff;
  }
LAB_1452997de:
  FUN_144eedf20(lVar3);
  FUN_144eeddc0(lVar3);
  return uVar2;
}



// FUNCTION 145299810 FUN_145299810 body=66 status=ok
// SIG undefined FUN_145299810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145299810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1452a5f00(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 145299870 FUN_145299870 body=32 status=ok
// SIG undefined FUN_145299870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145299870(longlong param_1)

{
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x38));
  return 1;
}



// FUNCTION 145299890 FUN_145299890 body=8 status=ok
// SIG undefined FUN_145299890(void)

undefined * FUN_145299890(void)

{
  return PTR_PTR_14c731ef8;
}



// FUNCTION 1452998a0 FUN_1452998a0 body=25 status=ok
// SIG undefined FUN_1452998a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452998a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001452998b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x78) + 8))();
  return;
}



// FUNCTION 1452998c0 FUN_1452998c0 body=183 status=ok
// SIG undefined FUN_1452998c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452998c0(void *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = 0;
  local_res20 = 1;
  iVar2 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  uVar5 = (ulonglong)iVar2;
  if (0 < iVar2) {
    lVar3 = 0;
    if (0 < iVar2) {
      do {
        pcVar1 = (char *)(lVar3 + (longlong)param_1);
        lVar3 = lVar3 + 1;
        local_res20 = local_res20 & *pcVar1 == '\0';
        local_res18 = local_res20 + local_res18;
      } while (lVar3 < (longlong)uVar5);
    }
    uVar4 = iVar2 - (int)local_res18;
    uVar5 = (ulonglong)uVar4;
    memmove(param_1,(void *)(local_res18 + (longlong)param_1),(longlong)(int)uVar4);
    memset((void *)((longlong)(int)uVar4 + (longlong)param_1),0,local_res18);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 145299980 FUN_145299980 body=151 status=ok
// SIG undefined FUN_145299980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145299980(void *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  if (iVar1 < 1) {
    return iVar1;
  }
  iVar2 = FUN_144ba03d0(*(undefined8 *)(param_3 + 8));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  iVar3 = iVar2 - iVar1;
  if (0 < iVar3) {
    memmove((void *)((longlong)iVar3 + (longlong)param_1),param_1,(longlong)iVar1);
    memset(param_1,0,(longlong)iVar3);
  }
  return iVar2;
}



// FUNCTION 145299a20 FUN_145299a20 body=80 status=ok
// SIG undefined FUN_145299a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145299a20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7fc5b8,FUN_145299b00,param_1,&DAT_149d0d3bc,1,0,0x145299a2a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 145299a70 FUN_145299a70 body=10 status=ok
// SIG undefined FUN_145299a70(void)

undefined8 FUN_145299a70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 145299a80 FUN_145299a80 body=5 status=ok
// SIG undefined FUN_145299a80(void)

undefined8 FUN_145299a80(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 145299a90 FUN_145299a90 body=32 status=ok
// SIG undefined FUN_145299a90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145299a90(void)

{
  FUN_145291360(&DAT_14c7fc5b8,1);
  return;
}



// FUNCTION 145299ab0 FUN_145299ab0 body=80 status=ok
// SIG undefined FUN_145299ab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145299ab0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7fc5b8,FUN_145299b00,param_1,&DAT_149d0d3bc,1,1,0x145299aba);
    return uVar1;
  }
  return 1;
}



// FUNCTION 145299b00 FUN_145299b00 body=29 status=ok
// SIG undefined FUN_145299b00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145299b00(void)

{
  FUN_145291300(&DAT_14c7fc5b8);
  return;
}



// FUNCTION 145299b20 FUN_145299b20 body=808 status=ok
// SIG undefined FUN_145299b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_145299b20(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar10 = 0x145299b3a;
  lVar4 = 0;
  local_res18 = 0;
  plVar2 = (longlong *)0x0;
  if (((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) ||
     (*(longlong *)(param_3 + 0x18) == 0)) {
    uVar5 = 0x65;
  }
  else if (*(longlong *)(param_3 + 0x28) == 0) {
    uVar5 = 0x6f;
  }
  else {
    plVar2 = (longlong *)FUN_144ee76f0();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_144ba0570();
      *plVar2 = lVar3;
      lVar3 = FUN_144ba0570();
      plVar2[1] = lVar3;
      if (((*plVar2 != 0) && (lVar3 != 0)) && (lVar4 = FUN_144eedd20(), lVar4 != 0)) {
        local_res20 = FUN_144eede90(lVar4);
        uVar5 = FUN_144eede90(lVar4);
        uVar6 = FUN_144eede90(lVar4);
        lVar3 = FUN_144eede90(lVar4);
        if (lVar3 != 0) {
          uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),param_2);
          uVar8 = param_1;
          iVar1 = FUN_14529a280(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
          uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (iVar1 != 0) {
            while( true ) {
              iVar1 = FUN_144ba03d0(*(undefined8 *)(param_3 + 0x10));
              if ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3 < param_2) {
                iVar1 = FUN_144ba03d0(*(undefined8 *)(param_3 + 0x10));
                param_2 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
              }
              lVar7 = FUN_144ba0740(param_1,param_2,local_res20);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (lVar7 == 0) break;
              do {
                iVar1 = FUN_144ba03d0(*(undefined8 *)(param_3 + 0x10));
                iVar1 = FUN_1452983c0(uVar5,iVar1 + -1,0xffffffff,0);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (iVar1 == 0) goto LAB_145299de7;
                iVar1 = FUN_144ba0340(uVar5);
              } while (iVar1 != 0);
              FUN_144ba0220(uVar5,4);
              FUN_144ba0220(uVar6,4);
              FUN_144ba0220(lVar3,4);
              lVar7 = lVar4;
              iVar1 = FUN_1452a57a0(lVar3,uVar5,*(undefined8 *)(param_3 + 0x28),
                                    *(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = FUN_1452a57a0(lVar3,lVar3,*plVar2,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = FUN_1452a57a0(uVar6,uVar5,local_res20,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (iVar1 = FUN_1452a56b0(plVar2[1],lVar3,uVar6,*(undefined8 *)(param_3 + 0x10)),
                 iVar1 == 0)) break;
              lVar7 = lVar4;
              iVar1 = FUN_1452a57a0(plVar2[1],plVar2[1],local_res18,*(undefined8 *)(param_3 + 0x10),
                                    lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (lVar7 = FUN_144ef05b0(uVar5,uVar5,*(undefined8 *)(param_3 + 0x10),lVar4),
                 lVar7 == 0)) break;
              lVar7 = lVar4;
              iVar1 = FUN_1452a57a0(plVar2[1],plVar2[1],uVar5,*(undefined8 *)(param_3 + 0x10),lVar4)
              ;
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              iVar1 = FUN_144ba0340(*plVar2);
              uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if ((iVar1 == 0) && (iVar1 = FUN_144ba0340(plVar2[1]), iVar1 == 0))
              goto LAB_145299e13;
              uVar10 = CONCAT44(uVar9,param_2);
              uVar8 = param_1;
              iVar1 = FUN_14529a280(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (iVar1 == 0) break;
            }
          }
        }
      }
    }
LAB_145299de7:
    uVar5 = 3;
  }
  FUN_144ba24f0(10,0x70,uVar5,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar9,0xa7),uVar10);
  FUN_144ee7750(plVar2);
  plVar2 = (longlong *)0x0;
LAB_145299e13:
  FUN_144eeddc0(lVar4);
  FUN_144ba0630(local_res18);
  return plVar2;
}



// FUNCTION 145299e50 FUN_145299e50 body=34 status=ok
// SIG undefined FUN_145299e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145299e50(void)

{
  FUN_14529a280();
  return;
}



// FUNCTION 145299e80 FUN_145299e80 body=943 status=ok
// SIG undefined FUN_145299e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145299e80(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar12;
  undefined8 local_58 [3];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar9 = 0;
  if (((*(longlong *)(param_4 + 8) == 0) || (*(longlong *)(param_4 + 0x10) == 0)) ||
     (*(longlong *)(param_4 + 0x18) == 0)) {
    FUN_144ba24f0(10,0x71,0x65,"crypto\\dsa\\dsa_ossl.c",0x134);
    return 0xffffffff;
  }
  iVar2 = FUN_144ba03d0();
  if (((iVar2 - 0xa0U & 0xffffff9f) != 0) || (iVar2 == 0xc0)) {
    uVar12 = CONCAT44(uVar11,0x13b);
    uVar11 = 0x66;
LAB_145299f1d:
    FUN_144ba24f0(10,0x71,uVar11,"crypto\\dsa\\dsa_ossl.c",uVar12);
    return 0xffffffff;
  }
  iVar3 = FUN_144ba03d0(*(undefined8 *)(param_4 + 8));
  if (10000 < iVar3) {
    uVar12 = CONCAT44(uVar11,0x140);
    uVar11 = 0x67;
    goto LAB_145299f1d;
  }
  lVar4 = FUN_144ba0570();
  lVar5 = FUN_144ba0570();
  lVar6 = FUN_144ba0570();
  lVar7 = FUN_144eedd20();
  if (((lVar4 != 0) && (lVar5 != 0)) && ((lVar6 != 0 && (lVar7 != 0)))) {
    FUN_144ee77c0(param_3,&local_res20,local_58);
    iVar3 = FUN_144ba0340(local_res20);
    if (((((iVar3 != 0) || (iVar3 = FUN_144ba0ba0(local_res20), iVar3 != 0)) ||
         (iVar3 = FUN_144ba0ef0(local_res20,*(undefined8 *)(param_4 + 0x10)), -1 < iVar3)) ||
        ((iVar3 = FUN_144ba0340(local_58[0]), iVar3 != 0 ||
         (iVar3 = FUN_144ba0ba0(local_58[0]), iVar3 != 0)))) ||
       (iVar3 = FUN_144ba0ef0(local_58[0],*(undefined8 *)(param_4 + 0x10)), -1 < iVar3)) {
      uVar10 = 0;
      goto LAB_14529a19e;
    }
    lVar8 = FUN_144ef05b0(lVar5,local_58[0],*(undefined8 *)(param_4 + 0x10),lVar7);
    if (lVar8 != 0) {
      if (iVar2 >> 3 < param_2) {
        param_2 = iVar2 >> 3;
      }
      lVar8 = FUN_144ba0740(param_1,param_2,lVar4);
      if (lVar8 != 0) {
        lVar8 = lVar7;
        iVar2 = FUN_1452a57a0(lVar4,lVar4,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
        uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (iVar2 != 0) {
          lVar8 = lVar7;
          iVar2 = FUN_1452a57a0(lVar5,local_res20,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
          uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
          if ((iVar2 != 0) &&
             (((*(byte *)(param_4 + 0x30) & 1) == 0 ||
              (lVar9 = FUN_144eceb30(param_4 + 0x38,*(undefined8 *)(param_4 + 0x60),
                                     *(undefined8 *)(param_4 + 8),lVar7), lVar9 != 0)))) {
            pcVar1 = *(code **)(*(longlong *)(param_4 + 0x50) + 0x20);
            if (pcVar1 == (code *)0x0) {
              lVar8 = lVar5;
              iVar2 = FUN_1454ef5f0(lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                                    *(undefined8 *)(param_4 + 0x20),lVar5,
                                    *(undefined8 *)(param_4 + 8),lVar7,lVar9);
              uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
            }
            else {
              uVar12 = *(undefined8 *)(param_4 + 0x20);
              iVar2 = (*pcVar1)(param_4,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,uVar12,lVar5,
                                *(undefined8 *)(param_4 + 8),lVar7,lVar9);
              uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
            }
            if (iVar2 != 0) {
              lVar9 = lVar7;
              iVar2 = FUN_144eef830(0,lVar4,lVar6,*(undefined8 *)(param_4 + 0x10),lVar7);
              uVar11 = (undefined4)((ulonglong)lVar9 >> 0x20);
              if (iVar2 != 0) {
                iVar2 = FUN_144ba0ef0(lVar4,local_res20);
                uVar10 = (ulonglong)(iVar2 == 0);
                goto LAB_14529a19e;
              }
            }
          }
        }
      }
    }
  }
  uVar10 = 0xffffffff;
  FUN_144ba24f0(10,0x71,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar11,0x18c));
LAB_14529a19e:
  FUN_144eeddc0(lVar7);
  FUN_144ba0cd0(lVar4);
  FUN_144ba0cd0(lVar5);
  FUN_144ba0cd0(lVar6);
  return uVar10;
}



// FUNCTION 14529a240 FUN_14529a240 body=32 status=ok
// SIG undefined FUN_14529a240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529a240(longlong param_1)

{
  FUN_144ece7b0(*(undefined8 *)(param_1 + 0x38));
  return 1;
}



// FUNCTION 14529a260 FUN_14529a260 body=8 status=ok
// SIG undefined FUN_14529a260(void)

undefined ** FUN_14529a260(void)

{
  return &PTR_s_OpenSSL_DSA_method_14c731f00;
}



// FUNCTION 14529a270 FUN_14529a270 body=8 status=ok
// SIG undefined FUN_14529a270(void)

undefined * FUN_14529a270(void)

{
  return PTR_PTR_14c731f60;
}



// FUNCTION 14529a280 FUN_14529a280 body=846 status=ok
// SIG undefined FUN_14529a280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14529a280(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
             longlong param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong in_stack_ffffffffffffff98;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar9 = *param_4;
  lVar7 = 0;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar10 = 0xc1;
    uVar9 = 0x65;
LAB_14529a5ac:
    FUN_144ba24f0(10,0x6b,uVar9,"crypto\\dsa\\dsa_ossl.c",uVar10);
    return 0;
  }
  iVar2 = FUN_144ba0340();
  if (((iVar2 != 0) || (iVar2 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0)) ||
     (iVar2 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x18)), iVar2 != 0)) {
    uVar10 = 199;
    uVar9 = 0x70;
    goto LAB_14529a5ac;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar10 = 0xcb;
    uVar9 = 0x6f;
    goto LAB_14529a5ac;
  }
  lVar5 = FUN_144ba0570();
  lVar6 = FUN_144ba0570();
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if ((lVar5 != 0) && (lVar6 != 0)) {
    lVar7 = param_2;
    if (param_2 == 0) {
      lVar7 = FUN_144eedd20();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (lVar7 == 0) goto LAB_14529a531;
    }
    uVar3 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x10));
    iVar2 = FUN_145299290(*(undefined8 *)(param_1 + 0x10));
    iVar2 = iVar2 + 2;
    lVar8 = FUN_144ba1290(lVar5,iVar2);
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (lVar8 != 0) {
      lVar8 = FUN_144ba1290(lVar6,iVar2);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (lVar8 != 0) {
        do {
          if (param_5 == 0) {
            iVar4 = FUN_1452983f0(lVar5,*(undefined8 *)(param_1 + 0x10));
          }
          else {
            in_stack_ffffffffffffff98 = (longlong)param_6;
            iVar4 = FUN_145298410(lVar5,*(undefined8 *)(param_1 + 0x10),
                                  *(undefined8 *)(param_1 + 0x28),param_5,(longlong)param_6,lVar7);
          }
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          if (iVar4 == 0) goto LAB_14529a531;
          iVar4 = FUN_144ba0340(lVar5);
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        } while (iVar4 != 0);
        FUN_144ba0220(lVar5,4);
        FUN_144ba0220(lVar6,4);
        if (((((*(byte *)(param_1 + 0x30) & 1) == 0) ||
             (lVar8 = FUN_144eceb30(param_1 + 0x38,*(undefined8 *)(param_1 + 0x60),
                                    *(undefined8 *)(param_1 + 8),lVar7), lVar8 != 0)) &&
            (iVar4 = FUN_144eee4f0(lVar6,lVar5,*(undefined8 *)(param_1 + 0x10)), iVar4 != 0)) &&
           (iVar4 = FUN_144eee4f0(lVar5,lVar6,*(undefined8 *)(param_1 + 0x10)), iVar4 != 0)) {
          iVar4 = FUN_144ba0d50(lVar6,uVar3);
          FUN_144ba1070((longlong)iVar4,lVar5,lVar6,iVar2);
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x28);
          if (pcVar1 == (code *)0x0) {
            lVar8 = lVar7;
            iVar2 = FUN_1452a5f00(uVar9,*(undefined8 *)(param_1 + 0x18),lVar5,
                                  *(undefined8 *)(param_1 + 8),lVar7,*(undefined8 *)(param_1 + 0x38)
                                 );
            uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
          }
          else {
            uVar10 = *(undefined8 *)(param_1 + 8);
            iVar2 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_1 + 0x18),lVar5,uVar10,lVar7,
                              *(undefined8 *)(param_1 + 0x38));
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          }
          if (iVar2 != 0) {
            lVar8 = lVar7;
            iVar2 = FUN_144eef830(0,uVar9,uVar9,*(undefined8 *)(param_1 + 0x10),lVar7);
            uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
            if ((iVar2 != 0) &&
               (lVar8 = FUN_14529a5d0(lVar5,*(undefined8 *)(param_1 + 0x10),lVar7), lVar8 != 0)) {
              FUN_144ba0630(*param_3);
              *param_3 = lVar8;
              uVar9 = 1;
              goto LAB_14529a551;
            }
          }
        }
      }
    }
  }
LAB_14529a531:
  uVar9 = 0;
  FUN_144ba24f0(10,0x6b,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar11,0x123));
LAB_14529a551:
  if (lVar7 != param_2) {
    FUN_144eeddc0(lVar7);
  }
  FUN_144ba0630(lVar5);
  FUN_144ba0630(lVar6);
  return uVar9;
}



// FUNCTION 14529a5d0 FUN_14529a5d0 body=196 status=ok
// SIG undefined FUN_14529a5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14529a5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144ba0570();
  if (lVar2 != 0) {
    FUN_144eede20(param_3);
    lVar3 = FUN_144eede90(param_3);
    if ((((lVar3 == 0) || (iVar1 = FUN_144ba0bb0(lVar2,2), iVar1 == 0)) ||
        (iVar1 = FUN_144eee270(lVar3,param_2,lVar2), iVar1 == 0)) ||
       (iVar1 = FUN_1452a5f00(lVar2,param_1,lVar3,param_2,param_3,0), iVar1 == 0)) {
      FUN_144ba0cd0(lVar2);
      lVar2 = 0;
    }
    FUN_144eedf20(param_3);
  }
  return lVar2;
}



// FUNCTION 14529a6a0 FUN_14529a6a0 body=80 status=ok
// SIG undefined FUN_14529a6a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529a6a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7fc5c0,FUN_14529a780,param_1,&DAT_149d0d3d8,1,0,0x14529a6aa);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14529a6f0 FUN_14529a6f0 body=10 status=ok
// SIG undefined FUN_14529a6f0(void)

undefined8 FUN_14529a6f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 14529a700 FUN_14529a700 body=5 status=ok
// SIG undefined FUN_14529a700(void)

undefined8 FUN_14529a700(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 14529a710 FUN_14529a710 body=32 status=ok
// SIG undefined FUN_14529a710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529a710(void)

{
  FUN_145291360(&DAT_14c7fc5c0,1);
  return;
}



// FUNCTION 14529a730 FUN_14529a730 body=80 status=ok
// SIG undefined FUN_14529a730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529a730(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7fc5c0,FUN_14529a780,param_1,&DAT_149d0d3d8,1,1,0x14529a73a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14529a780 FUN_14529a780 body=29 status=ok
// SIG undefined FUN_14529a780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529a780(void)

{
  FUN_145291300(&DAT_14c7fc5c0);
  return;
}



// FUNCTION 14529a7a0 FUN_14529a7a0 body=826 status=ok
// SIG undefined FUN_14529a7a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529a7a0(undefined1 *param_1,ulonglong param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6,uint param_7,ulonglong *param_8)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  size_t _Size;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  int local_b4;
  int local_b0;
  undefined8 local_a8;
  ulonglong local_98 [8];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar4 = 1;
  uVar11 = param_2 & 0xffffffff;
  local_b4 = 1;
  local_b0 = param_4;
  local_a8 = param_3;
  uVar2 = FUN_144ba3cd0(param_6);
  if ((-1 < (int)uVar2) && (lVar5 = FUN_14527f710(), lVar5 != 0)) {
    if (param_1 == (undefined1 *)0x0) {
      param_1 = &DAT_149e02088;
      uVar11 = 0;
    }
    else if ((int)param_2 == -1) {
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (param_1[uVar11] != '\0');
    }
    local_c8 = 0;
    iVar3 = FUN_14527f850(lVar5,param_1,uVar11 & 0xffffffff,param_6);
    if ((iVar3 == 0) || (lVar6 = FUN_14527f710(), lVar6 == 0)) {
      FUN_14527f7e0(lVar5);
    }
    else {
      for (; param_7 != 0; param_7 = param_7 - uVar10) {
        local_b5 = (undefined1)iVar4;
        uVar10 = param_7;
        if ((int)uVar2 < (int)param_7) {
          uVar10 = uVar2;
        }
        local_b8 = (undefined1)((uint)iVar4 >> 0x18);
        local_b7 = (undefined1)((uint)iVar4 >> 0x10);
        local_b6 = (undefined1)((uint)iVar4 >> 8);
        iVar4 = FUN_14527fd30(lVar6,lVar5);
        if ((((iVar4 == 0) || (iVar4 = FUN_14527fb30(lVar6,local_a8,(longlong)local_b0), iVar4 == 0)
             ) || (iVar4 = FUN_14527fb30(lVar6,&local_b8,4), iVar4 == 0)) ||
           (iVar4 = FUN_14527fb60(lVar6,local_98,0), iVar4 == 0)) {
LAB_14529aa94:
          FUN_14527f7e0(lVar6);
          FUN_14527f7e0(lVar5);
          goto LAB_14529aaca;
        }
        _Size = (size_t)(int)uVar10;
        memcpy(param_8,local_98,_Size);
        iVar4 = 1;
        if (1 < param_5) {
          do {
            iVar3 = FUN_14527fd30(lVar6,lVar5);
            if (((iVar3 == 0) || (iVar3 = FUN_14527fb30(lVar6,local_98), iVar3 == 0)) ||
               (iVar3 = FUN_14527fb60(lVar6,local_98), iVar3 == 0)) goto LAB_14529aa94;
            lVar12 = 0;
            if (((0 < (int)uVar10) && (0x1f < uVar10)) &&
               (((ulonglong *)((longlong)local_98 + (longlong)(int)(uVar10 - 1)) < param_8 ||
                ((ulonglong *)((longlong)(int)(uVar10 - 1) + (longlong)param_8) < local_98)))) {
              uVar8 = uVar10 & 0x8000001f;
              if ((int)uVar8 < 0) {
                uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
              }
              puVar9 = param_8;
              do {
                lVar12 = lVar12 + 0x20;
                puVar1 = (ulonglong *)((longlong)local_98 + -(longlong)param_8 + (longlong)puVar9);
                uVar11 = puVar1[1];
                *puVar9 = *puVar1 ^ *puVar9;
                puVar9[1] = uVar11 ^ puVar9[1];
                puVar1 = (ulonglong *)
                         ((longlong)&local_a8 + -(longlong)param_8 + (longlong)(puVar9 + 4));
                uVar11 = puVar1[1];
                puVar9[2] = *puVar1 ^ puVar9[2];
                puVar9[3] = uVar11 ^ puVar9[3];
                puVar9 = puVar9 + 4;
              } while (lVar12 < (int)(uVar10 - uVar8));
            }
            if (lVar12 < (longlong)_Size) {
              pbVar7 = (byte *)(lVar12 + (longlong)param_8);
              lVar12 = _Size - lVar12;
              do {
                *pbVar7 = *pbVar7 ^ pbVar7[(longlong)local_98 - (longlong)param_8];
                pbVar7 = pbVar7 + 1;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_5);
        }
        param_8 = (ulonglong *)((longlong)param_8 + _Size);
        iVar4 = local_b4 + 1;
        local_b4 = iVar4;
      }
      FUN_14527f7e0(lVar6);
      FUN_14527f7e0(lVar5);
    }
  }
LAB_14529aaca:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14529aaf0 FUN_14529aaf0 body=415 status=ok
// SIG undefined FUN_14529aaf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14529aaf0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffb8;
  code **ppcVar8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar9;
  code *local_28;
  undefined8 uStack_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_20 = 0x14529ab09;
  uVar4 = 0;
  uVar5 = FUN_1454efcc0();
  plVar6 = (longlong *)FUN_144ed07c0(uVar5,param_4);
  if (plVar6 == (longlong *)0x0) {
    FUN_144ba24f0(6,0x76,0x72,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0x96));
  }
  else {
    uVar1 = FUN_144ea8fa0(*(undefined8 *)*plVar6);
    ppcVar8 = &local_28;
    iVar2 = FUN_144edb140(2,uVar1,0,0,ppcVar8);
    uVar1 = (undefined4)((ulonglong)ppcVar8 >> 0x20);
    if (iVar2 == 0) {
      FUN_144ba24f0(6,0x76,0x7c,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0x9e));
    }
    else {
      uVar3 = FUN_144ea8fa0(*(undefined8 *)plVar6[1]);
      uVar5 = FUN_144ea8ee0(uVar3);
      lVar7 = FUN_144baaaf0(uVar5);
      if (lVar7 == 0) {
        FUN_144ba24f0(6,0x76,0x6b,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0xa9));
      }
      else {
        uVar1 = 0;
        iVar2 = FUN_144ba4d00(param_1,lVar7,0,0,0,CONCAT44(uVar9,param_7));
        if (iVar2 != 0) {
          iVar2 = FUN_144ba4290(param_1,*(undefined8 *)(plVar6[1] + 8));
          if (iVar2 < 0) {
            FUN_144ba24f0(6,0x76,0x7a,"crypto\\evp\\p5_crpt2.c",CONCAT44(uVar1,0xb1));
          }
          else {
            uVar4 = (*local_28)(param_1,param_2,param_3,*(undefined8 *)(*plVar6 + 8),0,0,param_7);
          }
        }
      }
    }
  }
  FUN_1454efca0(plVar6);
  return uVar4;
}



// FUNCTION 14529ac90 FUN_14529ac90 body=646 status=ok
// SIG undefined FUN_14529ac90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529ac90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar10 = (undefined8 *)0x0;
  local_a4 = param_3;
  lVar7 = FUN_144ba3db0();
  if (lVar7 == 0) {
    local_c8 = CONCAT44(local_c8._4_4_,199);
    FUN_144ba24f0(6,0xa4,0x83,"crypto\\evp\\p5_crpt2.c");
    puVar9 = puVar10;
  }
  else {
    uVar2 = FUN_144ba3de0(param_1);
    puVar10 = (undefined8 *)(ulonglong)uVar2;
    if (0x40 < uVar2) {
      FUN_144ecfe40("assertion failed: keylen <= sizeof(key)","crypto\\evp\\p5_crpt2.c",0xcb);
    }
    uVar8 = FUN_1454efcf0();
    puVar9 = (undefined8 *)FUN_144ed07c0(uVar8,param_4);
    if (puVar9 == (undefined8 *)0x0) {
      local_c8 = CONCAT44(local_c8._4_4_,0xd2);
      FUN_144ba24f0(6,0xa4,0x72,"crypto\\evp\\p5_crpt2.c");
    }
    else {
      uVar2 = FUN_144ba3de0(param_1);
      puVar10 = (undefined8 *)(ulonglong)uVar2;
      if ((puVar9[2] == 0) || (uVar3 = FUN_144ef1170(), uVar3 == uVar2)) {
        if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
          uVar4 = 0xa3;
        }
        else {
          uVar4 = FUN_144ea8fa0(*(undefined8 *)puVar9[3]);
        }
        local_c8 = 0;
        iVar5 = FUN_144edb140(1,uVar4,0,&local_a8);
        if (iVar5 == 0) {
          local_c8 = CONCAT44(local_c8._4_4_,0xe5);
          FUN_144ba24f0(6,0xa4,0x7d,"crypto\\evp\\p5_crpt2.c");
        }
        else {
          uVar8 = FUN_144ea8ee0(local_a8);
          lVar7 = FUN_144baab30(uVar8);
          if (lVar7 == 0) {
            local_c8 = CONCAT44(local_c8._4_4_,0xeb);
            FUN_144ba24f0(6,0xa4,0x7d,"crypto\\evp\\p5_crpt2.c");
          }
          else if (*(int *)*puVar9 == 4) {
            puVar1 = *(undefined4 **)((int *)*puVar9 + 2);
            uVar8 = *(undefined8 *)(puVar1 + 2);
            uVar4 = *puVar1;
            uVar6 = FUN_144ef1170(puVar9[1]);
            local_b0 = local_98;
            local_c8 = CONCAT44(local_c8._4_4_,uVar6);
            local_c0 = lVar7;
            local_b8 = uVar2;
            iVar5 = FUN_14529a7a0(param_2,local_a4,uVar8,uVar4);
            if (iVar5 != 0) {
              local_c0 = CONCAT44(local_c0._4_4_,param_7);
              local_c8 = 0;
              FUN_144ba4d00(param_1,0,0,local_98);
            }
          }
          else {
            local_c8 = CONCAT44(local_c8._4_4_,0xf0);
            FUN_144ba24f0(6,0xa4,0x7e,"crypto\\evp\\p5_crpt2.c");
          }
        }
      }
      else {
        local_c8 = CONCAT44(local_c8._4_4_,0xdb);
        FUN_144ba24f0(6,0xa4,0x7b,"crypto\\evp\\p5_crpt2.c");
      }
    }
  }
  FUN_14259f0c0(local_98,puVar10);
  FUN_1454efcd0(puVar9);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14529af30 FUN_14529af30 body=553 status=ok
// SIG undefined FUN_14529af30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529af30(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x14529af43;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar3 = (undefined8 *)0x0;
  lVar2 = FUN_144ba3db0();
  if (lVar2 == 0) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe0);
    FUN_144ba24f0(6,0xb4,0x83,"crypto\\asn1\\p5_scrypt.c");
    goto LAB_14529b138;
  }
  puVar3 = (undefined8 *)FUN_144ed07c0(&DAT_149d0d4c0,param_4);
  if (puVar3 == (undefined8 *)0x0) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe9);
    FUN_144ba24f0(6,0xb4,0x72,"crypto\\asn1\\p5_scrypt.c");
    goto LAB_14529b138;
  }
  iVar1 = FUN_144ba3de0(param_1);
  lVar2 = (longlong)iVar1;
  if (puVar3[4] == 0) {
LAB_14529b00f:
    iVar1 = FUN_144ef1130(&local_98,puVar3[1]);
    if (iVar1 == 0) {
LAB_14529b102:
      local_d8 = CONCAT44(local_d8._4_4_,0x100);
      uVar4 = 0xab;
      goto LAB_14529b110;
    }
    iVar1 = FUN_144ef1130(&local_a0,puVar3[2]);
    if (iVar1 == 0) goto LAB_14529b102;
    iVar1 = FUN_144ef1130(&local_a8,puVar3[3]);
    if (iVar1 == 0) goto LAB_14529b102;
    local_b0 = 0;
    local_b8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_c8 = local_a8;
    local_d0 = local_a0;
    local_d8 = local_98;
    iVar1 = FUN_1454e94d0(0,0,0,0);
    if (iVar1 == 0) goto LAB_14529b102;
    local_b8 = local_88;
    local_c0 = 0;
    local_c8 = local_a8;
    local_d0 = local_a0;
    local_d8 = local_98;
    local_b0 = lVar2;
    iVar1 = FUN_1454e94d0(param_2,(longlong)param_3,*(undefined8 *)((int *)*puVar3 + 2),
                          (longlong)*(int *)*puVar3);
    if (iVar1 != 0) {
      local_d0 = CONCAT44(local_d0._4_4_,param_7);
      local_d8 = 0;
      FUN_144ba4d00(param_1,0,0,local_88);
    }
  }
  else {
    iVar1 = FUN_144ef1130(&local_90);
    if ((iVar1 != 0) && (local_90 == lVar2)) goto LAB_14529b00f;
    local_d8 = CONCAT44(local_d8._4_4_,0xf6);
    uVar4 = 0x7b;
LAB_14529b110:
    FUN_144ba24f0(6,0xb4,uVar4,"crypto\\asn1\\p5_scrypt.c");
  }
  if (lVar2 != 0) {
    FUN_14259f0c0(local_88,lVar2);
  }
LAB_14529b138:
  FUN_144eff330(puVar3,&DAT_149d0d4c0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14529b170 FUN_14529b170 body=521 status=ok
// SIG undefined FUN_14529b170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529b170(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = param_1;
  if (param_5 != 0) {
    uVar3 = FUN_1454efd20();
    puVar4 = (undefined8 *)FUN_144ed07c0(uVar3,param_4);
    if (puVar4 == (undefined8 *)0x0) {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x2b);
      FUN_144ba24f0(0x23,0x78,0x65,"crypto\\pkcs12\\p12_crpt.c");
    }
    else {
      if (puVar4[1] == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = FUN_144ef1170();
      }
      uVar3 = *(undefined8 *)((undefined4 *)*puVar4 + 2);
      uVar1 = *(undefined4 *)*puVar4;
      local_d8 = FUN_144ba3d80(param_5);
      local_c8 = param_6;
      local_d0 = local_98;
      local_e8._0_4_ = 1;
      local_e0 = uVar5;
      iVar2 = FUN_1454f0180(param_2,param_3,uVar3,uVar1);
      if (iVar2 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x37);
        FUN_144ba24f0(0x23,0x78,0x6b,"crypto\\pkcs12\\p12_crpt.c");
        FUN_1454efd00(puVar4);
      }
      else {
        local_d8 = FUN_144ba3d90(param_5);
        local_c8 = param_6;
        local_d0 = local_b0;
        local_e8._0_4_ = 2;
        local_e0 = uVar5;
        iVar2 = FUN_1454f0180(param_2,param_3,uVar3,uVar1);
        if (iVar2 == 0) {
          local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x3d);
          FUN_144ba24f0(0x23,0x78,0x6a,"crypto\\pkcs12\\p12_crpt.c");
          FUN_1454efd00(puVar4);
        }
        else {
          FUN_1454efd00(puVar4);
          local_e0 = param_7;
          local_e8 = local_b0;
          FUN_144ba4d00(local_b8,param_5,0,local_98);
          FUN_14259f0c0(local_98,0x40);
          FUN_14259f0c0(local_b0,0x10);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_108);
}



// FUNCTION 14529b390 FUN_14529b390 body=3 status=ok
// SIG undefined FUN_14529b390(void)

void FUN_14529b390(void)

{
  return;
}



// FUNCTION 14529b3a0 FUN_14529b3a0 body=908 status=ok
// SIG undefined FUN_14529b3a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529b3a0(undefined8 param_1,longlong param_2,ulonglong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 local_110;
  int local_108;
  uint local_104;
  uint local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar6 = 0;
  local_f8 = param_5;
  local_f0 = param_1;
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) || (*(longlong *)(param_4 + 2) == 0)) {
    local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x29);
    FUN_144ba24f0(6,0x75,0x72,"crypto\\evp\\p5_crpt.c");
  }
  else {
    uVar3 = FUN_1454efd20();
    puVar4 = (undefined8 *)FUN_144ed07c0(uVar3,param_4);
    if (puVar4 == (undefined8 *)0x0) {
      local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x2f);
      FUN_144ba24f0(6,0x75,0x72,"crypto\\evp\\p5_crpt.c");
    }
    else {
      local_100 = FUN_144ba3d90(param_5);
      if (local_100 < 0x11) {
        local_104 = FUN_144ba3d80(param_5);
        if (local_104 < 0x41) {
          if (puVar4[1] == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = FUN_144ef1170();
          }
          uVar3 = *(undefined8 *)((int *)*puVar4 + 2);
          local_108 = *(int *)*puVar4;
          if ((param_2 != 0) && (uVar6 = param_3 & 0xffffffff, (int)param_3 == -1)) {
            uVar6 = 0xffffffffffffffff;
            do {
              uVar6 = uVar6 + 1;
            } while (*(char *)(uVar6 + param_2) != '\0');
          }
          lVar5 = FUN_144ba5700();
          if (lVar5 == 0) {
            local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x4e);
            FUN_144ba24f0(6,0x75,0x41,"crypto\\evp\\p5_crpt.c");
          }
          else {
            iVar1 = FUN_144ba5a20(lVar5,param_6,0);
            if (((iVar1 != 0) &&
                (iVar1 = FUN_144ba5c70(lVar5,param_2,(longlong)(int)uVar6), iVar1 != 0)) &&
               (iVar1 = FUN_144ba5c70(lVar5,uVar3,(longlong)local_108), iVar1 != 0)) {
              FUN_1454efd00(puVar4);
              puVar4 = (undefined8 *)0x0;
              iVar1 = FUN_144ba5ca0(lVar5,local_d8,0);
              if (iVar1 != 0) {
                iVar1 = FUN_144ba3cd0(param_6);
                if (iVar1 < 0) goto LAB_14529b581;
                iVar1 = 1;
                if (1 < iVar7) {
                  do {
                    iVar2 = FUN_144ba5a20(lVar5,param_6,0);
                    if (((iVar2 == 0) || (iVar2 = FUN_144ba5c70(lVar5,local_d8), iVar2 == 0)) ||
                       (iVar2 = FUN_144ba5ca0(lVar5,local_d8), iVar2 == 0)) goto LAB_14529b6a0;
                    iVar1 = iVar1 + 1;
                  } while (iVar1 < iVar7);
                }
                memcpy(local_98,local_d8,(longlong)(int)local_104);
                memcpy(local_e8,local_d8 + (int)(0x10 - local_100),(longlong)(int)local_100);
                local_110 = param_7;
                local_118 = local_e8;
                iVar7 = FUN_144ba4d00(local_f0,local_f8,0,local_98);
                if (iVar7 != 0) {
                  FUN_14259f0c0(local_d8,0x40);
                  FUN_14259f0c0(local_98,0x40);
                  FUN_14259f0c0(local_e8,0x10);
                }
              }
            }
          }
LAB_14529b6a0:
          FUN_1454efd00(puVar4);
          FUN_144ba5800(lVar5);
        }
        else {
          local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x3b);
          FUN_144ba24f0(6,0x75,0x82,"crypto\\evp\\p5_crpt.c");
          FUN_1454efd00(puVar4);
        }
      }
      else {
        local_118 = (undefined1 *)CONCAT44(local_118._4_4_,0x35);
        FUN_144ba24f0(6,0x75,0xc2,"crypto\\evp\\p5_crpt.c");
        FUN_1454efd00(puVar4);
      }
    }
  }
LAB_14529b581:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_138);
}



// FUNCTION 14529b740 FUN_14529b740 body=263 status=ok
// SIG undefined FUN_14529b740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14529b740(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14529b75b;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    uVar3 = FUN_144ba4d00(*(undefined8 *)(param_1 + 0xa8),0,0,(undefined8 *)(param_1 + 0xd8),0,
                          0xffffffff);
    if ((int)uVar3 != 0) {
      uVar2 = 1;
      puVar4 = (undefined1 *)(param_1 + 0x108);
      iVar5 = 0x10;
      do {
        bVar1 = puVar4[-1];
        puVar4 = puVar4 + -1;
        *puVar4 = (char)(uVar2 + bVar1);
        uVar2 = uVar2 + bVar1 >> 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = FUN_14529c400(param_1,param_2,param_3,param_6,param_7,param_4,param_5,uVar6);
      uVar3 = (ulonglong)(iVar5 != 0);
    }
  }
  return uVar3;
}



// FUNCTION 14529b850 FUN_14529b850 body=139 status=ok
// SIG undefined FUN_14529b850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14529b850(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return false;
  }
  uVar2 = 1;
  puVar3 = (undefined1 *)(param_1 + 0x108);
  iVar4 = 0x10;
  do {
    bVar1 = puVar3[-1];
    puVar3 = puVar3 + -1;
    *puVar3 = (char)(uVar2 + bVar1);
    uVar2 = uVar2 + bVar1 >> 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_14529c400(param_1,param_2,param_3,param_4,param_5,0,0,0x14529b85c);
  return iVar4 != 0;
}



// FUNCTION 14529b8e0 FUN_14529b8e0 body=561 status=ok
// SIG undefined FUN_14529b8e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14529b8e0(longlong param_1,void *param_2,size_t param_3,longlong param_4,ulonglong param_5)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int local_res8;
  undefined8 uVar11;
  
  uVar11 = 0x14529b8fa;
  iVar9 = 0x10;
  uVar7 = 1;
  if ((param_4 == 0) || (param_5 == 0)) {
    uVar5 = 0;
    lVar8 = param_4;
  }
  else {
    puVar6 = (undefined1 *)(param_1 + 0x108);
    uVar5 = uVar7;
    iVar10 = iVar9;
    do {
      pbVar1 = puVar6 + -1;
      puVar6 = puVar6 + -1;
      uVar4 = (int)uVar5 + (uint)*pbVar1;
      *puVar6 = (char)uVar4;
      uVar5 = (ulonglong)(uVar4 >> 8);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    lVar8 = 0;
    iVar10 = FUN_14529c400(param_1,param_4,param_5,0,0,0,0,0x14529b8fa);
    if (iVar10 == 0) {
      return false;
    }
    uVar5 = uVar7;
    if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
      uVar5 = param_5;
      lVar8 = param_4;
    }
  }
  puVar6 = (undefined1 *)(param_1 + 0x108);
  uVar3 = uVar7;
  iVar10 = iVar9;
  do {
    pbVar1 = puVar6 + -1;
    puVar6 = puVar6 + -1;
    uVar4 = (int)uVar3 + (uint)*pbVar1;
    *puVar6 = (char)uVar4;
    uVar3 = (ulonglong)(uVar4 >> 8);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (param_3 == 0) {
    puVar6 = (undefined1 *)(param_1 + 0x108);
    do {
      pbVar1 = puVar6 + -1;
      puVar6 = puVar6 + -1;
      uVar4 = (int)uVar7 + (uint)*pbVar1;
      *puVar6 = (char)uVar4;
      uVar7 = (ulonglong)(uVar4 >> 8);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  else {
    memset(param_2,0,param_3);
    do {
      iVar9 = FUN_144ba4d00(*(undefined8 *)(param_1 + 0xb0),0,0,0,param_1 + 0xf8,0xffffffff);
      if (iVar9 == 0) {
        return false;
      }
      uVar4 = *(uint *)(param_1 + 0x104);
      iVar9 = (int)param_3;
      if (0x40000000 < param_3) {
        iVar9 = 0x40000000;
      }
      uVar2 = (int)(iVar9 + 0xf + (iVar9 + 0xf >> 0x1f & 0xfU)) >> 4;
      uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
              uVar2;
      if (uVar4 < uVar2) {
        if (uVar4 != 0) {
          iVar9 = uVar2 - uVar4;
          uVar4 = 0;
          iVar9 = iVar9 * 0x10;
        }
        iVar10 = 0xc;
        puVar6 = (undefined1 *)(param_1 + 0x104);
        uVar3 = uVar7;
        do {
          pbVar1 = puVar6 + -1;
          puVar6 = puVar6 + -1;
          uVar2 = (int)uVar3 + (uint)*pbVar1;
          *puVar6 = (char)uVar2;
          uVar3 = (ulonglong)(uVar2 >> 8);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      *(uint *)(param_1 + 0x104) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      iVar10 = FUN_144ba5050(*(undefined8 *)(param_1 + 0xb0));
      if (iVar10 == 0) {
        return false;
      }
      if (local_res8 != iVar9) {
        return false;
      }
      param_3 = param_3 - (longlong)iVar9;
    } while (param_3 != 0);
  }
  iVar9 = FUN_14529c400(param_1,lVar8,uVar5,0,0,0,0,uVar11);
  return iVar9 != 0;
}



// FUNCTION 14529bb20 FUN_14529bb20 body=91 status=ok
// SIG undefined FUN_14529bb20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529bb20(longlong param_1)

{
  FUN_144ba5170(*(undefined8 *)(param_1 + 0xa8));
  FUN_144ba5170(*(undefined8 *)(param_1 + 0xb0));
  FUN_144ba5170(*(undefined8 *)(param_1 + 0xb8));
  FUN_14259f0c0(param_1 + 0xa8,0xa8);
  return 1;
}



// FUNCTION 14529bb80 FUN_14529bb80 body=566 status=ok
// SIG undefined FUN_14529bb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529bb80(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0x388) {
    lVar3 = 0x10;
    uVar2 = FUN_144baa0e0();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_144baa1a0();
  }
  else if (iVar1 == 0x389) {
    lVar3 = 0x18;
    uVar2 = FUN_144baa260();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_144baa320();
  }
  else {
    if (iVar1 != 0x38a) {
      return 0;
    }
    lVar3 = 0x20;
    uVar2 = FUN_144baa3c0();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = FUN_144baa480();
  }
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_14c731f70;
  *(longlong *)(param_1 + 0xd0) = lVar3;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar2 = FUN_144ba50b0();
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    uVar2 = FUN_144ba50b0();
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    uVar2 = CONCAT44(uVar4,1);
    iVar1 = FUN_144ba4d00(*(longlong *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xc0),0,0,0,uVar2)
    ;
    if (iVar1 != 0) {
      uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),1);
      iVar1 = FUN_144ba4d00(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200),0,0,0,
                            uVar2);
      uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x30) = (int)lVar3 * 8;
        lVar3 = lVar3 + 0x10;
        *(longlong *)(param_1 + 0x90) = lVar3;
        *(undefined ***)(param_1 + 0x150) = &PTR_FUN_14c731f70;
        if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
          *(longlong *)(param_1 + 0x40) = lVar3;
          *(longlong *)(param_1 + 0x48) = lVar3;
          *(longlong *)(param_1 + 0x60) = lVar3;
          *(longlong *)(param_1 + 0x68) = lVar3;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0x10000;
          return 1;
        }
        if (*(longlong *)(param_1 + 0xb8) == 0) {
          uVar2 = FUN_144ba50b0();
          *(undefined8 *)(param_1 + 0xb8) = uVar2;
        }
        if ((*(longlong *)(param_1 + 0xb8) != 0) &&
           (iVar1 = FUN_144ba4d00(*(longlong *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),0,
                                  &DAT_149d0d5a0,0,CONCAT44(uVar4,1)), iVar1 != 0)) {
          *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0xd0);
          *(ulonglong *)(param_1 + 0x50) = *(ulonglong *)(param_1 + 0xd0) >> 1;
          *(undefined8 *)(param_1 + 0x48) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x58) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x60) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x68) = 0x7fffffff;
          *(undefined8 *)(param_1 + 0x38) = 0x10000;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14529bdc0 FUN_14529bdc0 body=137 status=ok
// SIG undefined FUN_14529bdc0(void)

void FUN_14529bdc0(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    if (param_3 < *(ulonglong *)(param_1 + 0x28)) {
      uVar2 = param_3;
    }
    if (uVar2 != 0) {
      pbVar1 = (byte *)(param_1 + 0x30);
      do {
        *pbVar1 = *pbVar1 ^ pbVar1[(param_2 - param_1) + -0x30];
        pbVar1 = pbVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (*(ulonglong *)(param_1 + 0x28) < param_3) {
      param_3 = param_3 - *(ulonglong *)(param_1 + 0x28);
      if (0x10 < param_3) {
        param_3 = 0x10;
      }
      uVar2 = 0;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(param_1 + 0x50 + uVar2);
          *pbVar1 = *pbVar1 ^ *(byte *)(*(longlong *)(param_1 + 0x28) + uVar2 + param_2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3);
      }
    }
  }
  return;
}



// FUNCTION 14529be50 FUN_14529be50 body=299 status=ok
// SIG undefined FUN_14529be50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529be50(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  int iVar9;
  uint local_res20 [2];
  
  iVar9 = 0;
  local_res20[0] = 0x10;
  iVar4 = iVar9;
  if (((0 < (int)param_4) && (iVar4 = 0, 0x1f < param_4)) &&
     (((ulonglong *)((longlong)(int)(param_4 - 1) + param_3) < param_2 ||
      ((ulonglong)((longlong)(int)(param_4 - 1) + (longlong)param_2) < param_3)))) {
    uVar6 = param_4 & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = param_2;
    do {
      iVar9 = iVar9 + 0x20;
      puVar2 = (ulonglong *)((param_3 - (longlong)param_2) + (longlong)puVar7);
      uVar3 = puVar2[1];
      puVar1 = puVar7 + 4;
      *puVar7 = *puVar2 ^ *puVar7;
      puVar7[1] = uVar3 ^ puVar7[1];
      puVar2 = (ulonglong *)((param_3 - (longlong)param_2) + -0x10 + (longlong)puVar1);
      uVar3 = puVar2[1];
      puVar7[2] = *puVar2 ^ puVar7[2];
      puVar7[3] = uVar3 ^ puVar7[3];
      puVar7 = puVar1;
      iVar4 = iVar9;
    } while ((longlong)puVar1 - (longlong)param_2 < (longlong)(int)(param_4 - uVar6));
  }
  lVar8 = (longlong)iVar4;
  if (lVar8 < (int)param_4) {
    pbVar5 = (byte *)(lVar8 + (longlong)param_2);
    lVar8 = (int)param_4 - lVar8;
    do {
      *pbVar5 = *pbVar5 ^ pbVar5[param_3 - (longlong)param_2];
      pbVar5 = pbVar5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar4 = FUN_144ba5050(*(undefined8 *)(param_1 + 0x10),param_2,local_res20,param_2,param_4,
                        0x14529be5c);
  if ((iVar4 != 0) && (local_res20[0] == param_4)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14529bf80 FUN_14529bf80 body=102 status=ok
// SIG undefined FUN_14529bf80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529bf80(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14529bf8a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  if (*(longlong *)(param_1 + 0x28) != 0x10) {
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
  }
  uVar1 = 0x30;
  if (*(longlong *)(param_1 + 0x28) == 0x10) {
    uVar1 = 0x20;
  }
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_14529be50(local_48,param_1 + 0x78,&local_48,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 14529bff0 FUN_14529bff0 body=140 status=ok
// SIG undefined FUN_14529bff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529bff0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14529bffa;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  uVar1 = 0x30;
  if (*(longlong *)(param_1 + 0x28) == 0x10) {
    uVar1 = 0x20;
  }
  local_38 = 0x1000000;
  local_28 = 0x2000000;
  FUN_14529be50(param_1,(undefined8 *)(param_1 + 0x78),&local_48,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 14529c090 FUN_14529c090 body=304 status=ok
// SIG undefined FUN_14529c090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529c090(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong _Size;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && (_Size = 0x10 - lVar1, _Size <= param_3)) {
      memcpy((void *)(param_1 + 0x60 + lVar1),param_2,_Size);
      iVar2 = FUN_14529bf80(param_1,param_1 + 0x60);
      if (iVar2 == 0) goto LAB_14529c1a8;
      param_3 = param_3 - _Size;
      *(undefined8 *)(param_1 + 0x70) = 0;
      param_2 = (undefined4 *)((longlong)param_2 + _Size);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      if (*(longlong *)(param_1 + 0x28) != 0x10) {
        local_48 = local_68;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_5c;
      }
      uVar3 = 0x30;
      if (*(longlong *)(param_1 + 0x28) == 0x10) {
        uVar3 = 0x20;
      }
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      iVar2 = FUN_14529be50(param_1,param_1 + 0x78,&local_68,uVar3);
      if (iVar2 == 0) goto LAB_14529c1a8;
      param_2 = param_2 + 4;
    }
    if (param_3 != 0) {
      memcpy((void *)(param_1 + 0x60 + *(longlong *)(param_1 + 0x70)),param_2,param_3);
      *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + param_3;
    }
  }
LAB_14529c1a8:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 14529c1d0 FUN_14529c1d0 body=550 status=ok
// SIG undefined FUN_14529c1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14529c1d0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  local_res8[0] = 0x10;
  uVar2 = FUN_14529bff0();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = 0;
  if (param_2 != 0) {
    lVar3 = param_3;
  }
  lVar5 = 0;
  if (param_4 != 0) {
    lVar5 = param_5;
  }
  lVar4 = 0;
  if (param_6 != 0) {
    lVar4 = param_7;
  }
  lVar3 = lVar4 + lVar5 + lVar3;
  *(char *)(param_1 + 0xc) = (char)((ulonglong)lVar3 >> 0x18);
  *(char *)((longlong)param_1 + 0x61) = (char)((ulonglong)lVar3 >> 0x10);
  *(char *)((longlong)param_1 + 0x62) = (char)((ulonglong)lVar3 >> 8);
  *(char *)((longlong)param_1 + 99) = (char)lVar3;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  *(char *)((longlong)param_1 + 0x67) = *(char *)(param_1 + 5) + '\x10';
  param_1[0xe] = 8;
  iVar1 = FUN_14529c090(param_1,param_2);
  if ((((iVar1 != 0) && (iVar1 = FUN_14529c090(param_1,param_4,lVar5), iVar1 != 0)) &&
      (iVar1 = FUN_14529c090(param_1,param_6,lVar4), iVar1 != 0)) &&
     (iVar1 = FUN_14529c090(param_1,&DAT_14c731f68,1), iVar1 != 0)) {
    lVar3 = param_1[0xe];
    if (lVar3 != 0) {
      memset((void *)((longlong)param_1 + lVar3 + 0x60),0,0x10 - lVar3);
      iVar1 = FUN_14529bf80(param_1,param_1 + 0xc);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar6 = 0;
    iVar1 = FUN_144ba4d00(*param_1,0,0,param_1 + 0xf,0,CONCAT44(uVar7,0xffffffff));
    if ((((iVar1 != 0) &&
         (iVar1 = FUN_144ba5050(*param_1,param_1 + 0xf,local_res8,
                                (longlong)param_1 + param_1[5] + 0x78,CONCAT44(uVar6,0x10)),
         iVar1 != 0)) &&
        ((local_res8[0] == 0x10 &&
         ((iVar1 = FUN_144ba5050(*param_1,param_1 + 0x11,local_res8,param_1 + 0xf,0x10), iVar1 != 0
          && (local_res8[0] == 0x10)))))) &&
       ((param_1[5] == 0x10 ||
        ((iVar1 = FUN_144ba5050(*param_1,param_1 + 0x13,local_res8,param_1 + 0x11,0x10), iVar1 != 0
         && (local_res8[0] == 0x10)))))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14529c400 FUN_14529c400 body=491 status=ok
// SIG undefined FUN_14529c400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529c400(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70 [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  local_a0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_98 = *(undefined8 *)(param_1 + 0x100);
  iVar10 = 0x10;
  iVar9 = 0x10;
  local_a8[0] = 0x10;
  puVar8 = (undefined1 *)(param_1 + 0x108);
  uVar7 = 1;
  do {
    bVar6 = puVar8[-1];
    puVar8 = puVar8 + -1;
    *puVar8 = (char)(uVar7 + bVar6);
    uVar7 = uVar7 + bVar6 >> 8;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_90 = *(undefined4 *)(param_1 + 0xf8);
  uStack_8c = *(undefined4 *)(param_1 + 0xfc);
  uStack_88 = *(undefined4 *)(param_1 + 0x100);
  uStack_84 = *(undefined4 *)(param_1 + 0x104);
  if (*(longlong *)(param_1 + 0xd0) == 0x10) {
    bVar6 = 0x20;
  }
  else {
    uVar7 = 1;
    puVar8 = (undefined1 *)(param_1 + 0x108);
    do {
      bVar6 = puVar8[-1];
      puVar8 = puVar8 + -1;
      *puVar8 = (char)(uVar7 + bVar6);
      uVar7 = uVar7 + bVar6 >> 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    local_80 = *(undefined4 *)(param_1 + 0xf8);
    uStack_7c = *(undefined4 *)(param_1 + 0xfc);
    uStack_78 = *(undefined4 *)(param_1 + 0x100);
    uStack_74 = *(undefined4 *)(param_1 + 0x104);
    bVar6 = 0x30;
  }
  local_c8 = CONCAT44(local_c8._4_4_,(uint)bVar6);
  iVar9 = FUN_144ba5050(*puVar1,local_70,local_a8,&local_a0);
  if ((iVar9 == 0) || (local_a8[0] != bVar6)) goto LAB_14529c5db;
  memcpy((void *)(param_1 + 0xd8),local_70,*(size_t *)(param_1 + 0xd0));
  lVar2 = *(longlong *)(param_1 + 0xd0);
  uVar3 = *(undefined4 *)((longlong)local_70 + lVar2 + 4);
  uVar4 = *(undefined4 *)((longlong)local_70 + lVar2 + 8);
  uVar5 = *(undefined4 *)((longlong)local_70 + lVar2 + 0xc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)((longlong)local_70 + lVar2);
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x100) = uVar4;
  *(undefined4 *)(param_1 + 0x104) = uVar5;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (((param_2 != 0) || (param_6 != 0)) || (param_4 != 0)) {
      local_b8 = param_5;
      local_c8 = param_7;
      local_c0 = param_4;
      iVar9 = FUN_14529c1d0(puVar1,param_2,param_3,param_6);
      if (iVar9 == 0) goto LAB_14529c5db;
    }
    if (param_3 != 0) {
      param_5 = *(undefined8 *)(param_1 + 0x90);
      param_4 = param_1 + 0x120;
      goto LAB_14529c585;
    }
  }
  else {
    FUN_14529bdc0(puVar1,param_2,param_3);
LAB_14529c585:
    FUN_14529bdc0(puVar1,param_4,param_5);
  }
  local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
  local_c8 = 0;
  iVar9 = FUN_144ba4d00(*puVar1,0,0,param_1 + 0xd8);
  if (iVar9 != 0) {
    local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
    local_c8 = 0;
    FUN_144ba4d00(*(undefined8 *)(param_1 + 0xb0),0,0,param_1 + 0xd8);
  }
LAB_14529c5db:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14529c600 FUN_14529c600 body=95 status=ok
// SIG undefined FUN_14529c600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529c600(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ba3e90();
  FUN_1452631f0(param_2,uVar1);
  lVar2 = FUN_144ba3e90(param_1);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 8);
  lVar2 = FUN_144ba3e90(param_1);
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x10);
  return 1;
}



// FUNCTION 14529c660 FUN_14529c660 body=367 status=ok
// SIG undefined FUN_14529c660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529c660(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x14529c67f;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar7 = param_4 >> 0x1e;
    param_4 = param_4 + uVar7 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      lVar3 = FUN_144ba3e90(param_1);
      lVar4 = FUN_144ba3e90(param_1);
      uVar5 = FUN_144ba3e50(param_1);
      uVar6 = FUN_144ba3e90(param_1);
      uVar8 = CONCAT44(uVar2,uVar1);
      FUN_1454f0270(param_3,param_2,0x40000000,uVar6,uVar5,lVar4 + 0x80,lVar3 + 0x88,uVar8);
      uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_4 != 0) {
    uVar2 = FUN_144ba3dc0(param_1);
    lVar3 = FUN_144ba3e90(param_1);
    lVar4 = FUN_144ba3e90(param_1);
    uVar8 = FUN_144ba3e50(param_1);
    uVar5 = FUN_144ba3e90(param_1);
    FUN_1454f0270(param_3,param_2,param_4 & 0xffffffff,uVar5,uVar8,lVar4 + 0x80,lVar3 + 0x88,
                  CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 14529c7d0 FUN_14529c7d0 body=8 status=ok
// SIG undefined FUN_14529c7d0(void)

undefined * FUN_14529c7d0(void)

{
  return &DAT_149d0d5c0;
}



// FUNCTION 14529c7e0 FUN_14529c7e0 body=79 status=ok
// SIG undefined FUN_14529c7e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529c7e0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_144ba3de0();
  uVar2 = FUN_144ba3e90(param_1);
  FUN_1454f0940(uVar2,uVar1,param_2);
  return 1;
}



// FUNCTION 14529c830 FUN_14529c830 body=254 status=ok
// SIG undefined FUN_14529c830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529c830(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14529c84f;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_1454f14f0(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = FUN_144ba3dc0(param_1);
    uVar6 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_1454f14f0(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 14529c930 FUN_14529c930 body=235 status=ok
// SIG undefined FUN_14529c930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529c930(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1454f1a60(param_3,param_2,uVar4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 14529ca20 FUN_14529ca20 body=163 status=ok
// SIG undefined FUN_14529ca20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ca20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144ba3db0();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1454f0ae0(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 14529cad0 FUN_14529cad0 body=279 status=ok
// SIG undefined FUN_14529cad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529cad0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_1454f1c80(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_1454f1c80(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 14529cbf0 FUN_14529cbf0 body=8 status=ok
// SIG undefined FUN_14529cbf0(void)

undefined * FUN_14529cbf0(void)

{
  return &DAT_149d0d740;
}



// FUNCTION 14529cc00 FUN_14529cc00 body=8 status=ok
// SIG undefined FUN_14529cc00(void)

undefined * FUN_14529cc00(void)

{
  return &DAT_149d0d620;
}



// FUNCTION 14529cc10 FUN_14529cc10 body=8 status=ok
// SIG undefined FUN_14529cc10(void)

undefined * FUN_14529cc10(void)

{
  return &DAT_149d0d680;
}



// FUNCTION 14529cc20 FUN_14529cc20 body=8 status=ok
// SIG undefined FUN_14529cc20(void)

undefined * FUN_14529cc20(void)

{
  return &DAT_149d0d6e0;
}



// FUNCTION 14529cc30 FUN_14529cc30 body=79 status=ok
// SIG undefined FUN_14529cc30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529cc30(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_144ba3de0();
  uVar2 = FUN_144ba3e90(param_1);
  FUN_1454f1e70(uVar2,uVar1,param_2);
  return 1;
}



// FUNCTION 14529cc80 FUN_14529cc80 body=254 status=ok
// SIG undefined FUN_14529cc80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529cc80(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14529cc9f;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e50(param_1);
      uVar4 = FUN_144ba3e90(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_1454f3f70(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = FUN_144ba3dc0(param_1);
    uVar6 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_1454f3f70(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 14529cd80 FUN_14529cd80 body=235 status=ok
// SIG undefined FUN_14529cd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529cd80(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1454f44e0(param_3,param_2,uVar4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 14529ce70 FUN_14529ce70 body=163 status=ok
// SIG undefined FUN_14529ce70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ce70(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144ba3db0();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_1454f34f0(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 14529cf20 FUN_14529cf20 body=279 status=ok
// SIG undefined FUN_14529cf20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529cf20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_1454f4700(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_1454f4700(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 14529d040 FUN_14529d040 body=8 status=ok
// SIG undefined FUN_14529d040(void)

undefined * FUN_14529d040(void)

{
  return &DAT_149d0d8c0;
}



// FUNCTION 14529d050 FUN_14529d050 body=8 status=ok
// SIG undefined FUN_14529d050(void)

undefined * FUN_14529d050(void)

{
  return &DAT_149d0d7a0;
}



// FUNCTION 14529d060 FUN_14529d060 body=8 status=ok
// SIG undefined FUN_14529d060(void)

undefined * FUN_14529d060(void)

{
  return &DAT_149d0d800;
}



// FUNCTION 14529d070 FUN_14529d070 body=8 status=ok
// SIG undefined FUN_14529d070(void)

undefined * FUN_14529d070(void)

{
  return &DAT_149d0d860;
}



// FUNCTION 14529d080 FUN_14529d080 body=45 status=ok
// SIG undefined FUN_14529d080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3e90();
  FUN_1454f48f0(param_2,uVar1);
  return 1;
}



// FUNCTION 14529d0b0 FUN_14529d0b0 body=340 status=ok
// SIG undefined FUN_14529d0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d0b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      if (iVar1 == 0) {
        FUN_144ed66b0(param_3,param_2,0x40000000,uVar3,uVar2,FUN_1454f58c0);
      }
      else {
        FUN_144ed64e0();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = FUN_144ba3dc0(param_1);
    uVar2 = FUN_144ba3e50(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    if (iVar1 == 0) {
      FUN_144ed66b0(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,FUN_1454f58c0);
    }
    else {
      FUN_144ed64e0();
    }
  }
  return 1;
}



// FUNCTION 14529d210 FUN_14529d210 body=271 status=ok
// SIG undefined FUN_14529d210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d210(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  uVar4 = 0x40000000;
  if (param_4 < 0x40000000) {
    uVar4 = param_4;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3dc0(param_1);
      uVar2 = FUN_144ba3e50(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      FUN_144ed6f20(param_3,param_2,(longlong)(int)uVar4,uVar3,uVar2,local_res20,uVar1,FUN_1454f4af0
                   );
      FUN_144ba3e80(param_1,local_res20[0]);
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      if (param_4 < uVar4) {
        uVar4 = param_4;
      }
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}



// FUNCTION 14529d320 FUN_14529d320 body=171 status=ok
// SIG undefined FUN_14529d320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d320(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_144ba3db0();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      iVar1 = FUN_144ba3dc0(param_1);
      uVar3 = FUN_144ba3e90(param_1);
      if (iVar1 == 0) {
        FUN_1454f58c0(lVar2,(param_2 - param_3) + lVar2,uVar3);
      }
      else {
        FUN_1454f4af0();
      }
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 14529d3d0 FUN_14529d3d0 body=314 status=ok
// SIG undefined FUN_14529d3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d3d0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x14529d3e7;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FUN_144ba3e70(param_1);
      uVar1 = FUN_144ba3e50(param_1);
      uVar2 = FUN_144ba3e90(param_1);
      FUN_144ed6db0(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,FUN_1454f4af0);
      FUN_144ba3e80(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FUN_144ba3e70(param_1);
    uVar1 = FUN_144ba3e50(param_1);
    uVar2 = FUN_144ba3e90(param_1);
    FUN_144ed6db0(param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,FUN_1454f4af0,uVar4
                 );
    FUN_144ba3e80(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 14529d510 FUN_14529d510 body=178 status=ok
// SIG undefined FUN_14529d510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14529d510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14529d52e;
  local_28[0] = FUN_144ba3e70();
  uVar1 = FUN_144ba3e90(param_1);
  uVar2 = FUN_144ba3e60(param_1);
  uVar3 = FUN_144ba3e50(param_1);
  FUN_144ed69a0(param_3,param_2,param_4,uVar1,uVar3,uVar2,local_28,FUN_1454f4af0);
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 14529d5d0 FUN_14529d5d0 body=8 status=ok
// SIG undefined FUN_14529d5d0(void)

undefined * FUN_14529d5d0(void)

{
  return &DAT_149d0da40;
}



// FUNCTION 14529d5e0 FUN_14529d5e0 body=8 status=ok
// SIG undefined FUN_14529d5e0(void)

undefined * FUN_14529d5e0(void)

{
  return &DAT_149d0d920;
}



// FUNCTION 14529d5f0 FUN_14529d5f0 body=8 status=ok
// SIG undefined FUN_14529d5f0(void)

undefined * FUN_14529d5f0(void)

{
  return &DAT_149d0d980;
}



// FUNCTION 14529d600 FUN_14529d600 body=8 status=ok
// SIG undefined FUN_14529d600(void)

undefined * FUN_14529d600(void)

{
  return &DAT_149d0d9e0;
}



// FUNCTION 14529d610 FUN_14529d610 body=8 status=ok
// SIG undefined FUN_14529d610(void)

undefined * FUN_14529d610(void)

{
  return &DAT_149d0daa0;
}



// FUNCTION 14529d620 FUN_14529d620 body=30 status=ok
// SIG undefined FUN_14529d620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d620(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f6690(uVar1);
  return;
}



// FUNCTION 14529d640 FUN_14529d640 body=54 status=ok
// SIG undefined FUN_14529d640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f66e0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529d680 FUN_14529d680 body=39 status=ok
// SIG undefined FUN_14529d680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d680(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f6810(param_2,uVar1);
  return;
}



// FUNCTION 14529d6b0 FUN_14529d6b0 body=8 status=ok
// SIG undefined FUN_14529d6b0(void)

undefined * FUN_14529d6b0(void)

{
  return &DAT_149d0db00;
}



// FUNCTION 14529d6c0 FUN_14529d6c0 body=30 status=ok
// SIG undefined FUN_14529d6c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d6c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f7180(uVar1);
  return;
}



// FUNCTION 14529d6e0 FUN_14529d6e0 body=54 status=ok
// SIG undefined FUN_14529d6e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f7200(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529d720 FUN_14529d720 body=39 status=ok
// SIG undefined FUN_14529d720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f72e0(param_2,uVar1);
  return;
}



// FUNCTION 14529d750 FUN_14529d750 body=8 status=ok
// SIG undefined FUN_14529d750(void)

undefined * FUN_14529d750(void)

{
  return &DAT_149d0db50;
}



// FUNCTION 14529d760 FUN_14529d760 body=30 status=ok
// SIG undefined FUN_14529d760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d760(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f9940(uVar1);
  return;
}



// FUNCTION 14529d780 FUN_14529d780 body=54 status=ok
// SIG undefined FUN_14529d780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f99f0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529d7c0 FUN_14529d7c0 body=39 status=ok
// SIG undefined FUN_14529d7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d7c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454f9ad0(param_2,uVar1);
  return;
}



// FUNCTION 14529d7f0 FUN_14529d7f0 body=8 status=ok
// SIG undefined FUN_14529d7f0(void)

undefined * FUN_14529d7f0(void)

{
  return &DAT_149d0dba0;
}



// FUNCTION 14529d800 FUN_14529d800 body=24 status=ok
// SIG undefined FUN_14529d800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d800(undefined8 param_1)

{
  FUN_14529da70(param_1,6);
  return;
}



// FUNCTION 14529d820 FUN_14529d820 body=24 status=ok
// SIG undefined FUN_14529d820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529d820(undefined8 param_1)

{
  FUN_14529da70(param_1,0x1f);
  return;
}



// FUNCTION 14529d840 FUN_14529d840 body=248 status=ok
// SIG undefined FUN_14529d840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d840(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  size_t sVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(ulonglong *)(lVar1 + 200);
  if (param_3 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0xd8);
    if (lVar3 != 0) {
      sVar4 = uVar2 - lVar3;
      _Dst = (void *)(lVar1 + 0xe0 + lVar3);
      if (param_3 < sVar4) {
        memcpy(_Dst,param_2,param_3);
        *(longlong *)(lVar1 + 0xd8) = *(longlong *)(lVar1 + 0xd8) + param_3;
        return 1;
      }
      memcpy(_Dst,param_2,sVar4);
      param_2 = (void *)((longlong)param_2 + sVar4);
      param_3 = param_3 - sVar4;
      FUN_1426e4f60(lVar1,lVar1 + 0xe0,uVar2,uVar2);
      *(undefined8 *)(lVar1 + 0xd8) = 0;
    }
    sVar4 = param_3;
    if (uVar2 <= param_3) {
      sVar4 = FUN_1426e4f60(lVar1,param_2,param_3,uVar2);
    }
    if (sVar4 != 0) {
      memcpy((void *)(lVar1 + 0xe0),(void *)((longlong)param_2 + (param_3 - sVar4)),sVar4);
      *(size_t *)(lVar1 + 0xd8) = sVar4;
    }
  }
  return 1;
}



// FUNCTION 14529d940 FUN_14529d940 body=173 status=ok
// SIG undefined FUN_14529d940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529d940(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 200);
  if (*(longlong *)(lVar3 + 0xd0) != 0) {
    lVar1 = *(longlong *)(lVar3 + 0xd8) + lVar3;
    memset((void *)(lVar1 + 0xe0),0,lVar4 - *(longlong *)(lVar3 + 0xd8));
    *(undefined1 *)(lVar1 + 0xe0) = *(undefined1 *)(lVar3 + 0x188);
    pbVar2 = (byte *)(lVar4 + 0xdf + lVar3);
    *pbVar2 = *pbVar2 | 0x80;
    FUN_1426e4f60(lVar3,lVar3 + 0xe0,lVar4,lVar4);
    FUN_1426e5040(lVar3,param_2,*(undefined8 *)(lVar3 + 0xd0),lVar4);
  }
  return 1;
}



// FUNCTION 14529da10 FUN_14529da10 body=8 status=ok
// SIG undefined FUN_14529da10(void)

undefined * FUN_14529da10(void)

{
  return &DAT_149d0dbf0;
}



// FUNCTION 14529da20 FUN_14529da20 body=8 status=ok
// SIG undefined FUN_14529da20(void)

undefined * FUN_14529da20(void)

{
  return &DAT_149d0dc40;
}



// FUNCTION 14529da30 FUN_14529da30 body=8 status=ok
// SIG undefined FUN_14529da30(void)

undefined * FUN_14529da30(void)

{
  return &DAT_149d0dc90;
}



// FUNCTION 14529da40 FUN_14529da40 body=8 status=ok
// SIG undefined FUN_14529da40(void)

undefined * FUN_14529da40(void)

{
  return &DAT_149d0dce0;
}



// FUNCTION 14529da50 FUN_14529da50 body=8 status=ok
// SIG undefined FUN_14529da50(void)

undefined * FUN_14529da50(void)

{
  return &DAT_149d0dd30;
}



// FUNCTION 14529da60 FUN_14529da60 body=8 status=ok
// SIG undefined FUN_14529da60(void)

undefined * FUN_14529da60(void)

{
  return &DAT_149d0dd80;
}



// FUNCTION 14529da70 FUN_14529da70 body=140 status=ok
// SIG undefined FUN_14529da70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14529da70(longlong *param_1,undefined1 param_2)

{
  void *_Dst;
  ulonglong uVar1;
  
  _Dst = (void *)param_1[3];
  uVar1 = (ulonglong)*(int *)(*param_1 + 0x38);
  if (uVar1 < 0xa9) {
    memset(_Dst,0,200);
    *(undefined8 *)((longlong)_Dst + 0xd8) = 0;
    *(ulonglong *)((longlong)_Dst + 200) = uVar1;
    *(longlong *)((longlong)_Dst + 0xd0) = (longlong)*(int *)(*param_1 + 8);
    *(undefined1 *)((longlong)_Dst + 0x188) = param_2;
  }
  return uVar1 < 0xa9;
}



// FUNCTION 14529db00 FUN_14529db00 body=30 status=ok
// SIG undefined FUN_14529db00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529db00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fb650(uVar1);
  return;
}



// FUNCTION 14529db20 FUN_14529db20 body=54 status=ok
// SIG undefined FUN_14529db20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529db20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fb680(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529db60 FUN_14529db60 body=39 status=ok
// SIG undefined FUN_14529db60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529db60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fb740(param_2,uVar1);
  return;
}



// FUNCTION 14529db90 FUN_14529db90 body=8 status=ok
// SIG undefined FUN_14529db90(void)

undefined * FUN_14529db90(void)

{
  return &DAT_149d0ddd0;
}



// FUNCTION 14529dba0 FUN_14529dba0 body=30 status=ok
// SIG undefined FUN_14529dba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dba0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fb9c0(uVar1);
  return;
}



// FUNCTION 14529dbc0 FUN_14529dbc0 body=54 status=ok
// SIG undefined FUN_14529dbc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fba10(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529dc00 FUN_14529dc00 body=39 status=ok
// SIG undefined FUN_14529dc00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dc00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fbb40(param_2,uVar1);
  return;
}



// FUNCTION 14529dc30 FUN_14529dc30 body=8 status=ok
// SIG undefined FUN_14529dc30(void)

undefined * FUN_14529dc30(void)

{
  return &DAT_149d0de20;
}



// FUNCTION 14529dc40 FUN_14529dc40 body=30 status=ok
// SIG undefined FUN_14529dc40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dc40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fd4b0(uVar1);
  return;
}



// FUNCTION 14529dc60 FUN_14529dc60 body=54 status=ok
// SIG undefined FUN_14529dc60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fd4e0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529dca0 FUN_14529dca0 body=39 status=ok
// SIG undefined FUN_14529dca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fda20(param_2,uVar1);
  return;
}



// FUNCTION 14529dcd0 FUN_14529dcd0 body=8 status=ok
// SIG undefined FUN_14529dcd0(void)

undefined * FUN_14529dcd0(void)

{
  return &DAT_149d0de70;
}



// FUNCTION 14529dce0 FUN_14529dce0 body=30 status=ok
// SIG undefined FUN_14529dce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dce0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fdb80(uVar1);
  return;
}



// FUNCTION 14529dd00 FUN_14529dd00 body=54 status=ok
// SIG undefined FUN_14529dd00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fdbe0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14529dd40 FUN_14529dd40 body=39 status=ok
// SIG undefined FUN_14529dd40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dd40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_1454fdd10(param_2,uVar1);
  return;
}



// FUNCTION 14529dd70 FUN_14529dd70 body=8 status=ok
// SIG undefined FUN_14529dd70(void)

undefined * FUN_14529dd70(void)

{
  return &DAT_149d0dec0;
}



// FUNCTION 14529dd80 FUN_14529dd80 body=29 status=ok
// SIG undefined FUN_14529dd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dd80(void)

{
  FUN_144bab1c0(0x7600,0);
  return;
}



// FUNCTION 14529dda0 FUN_14529dda0 body=80 status=ok
// SIG undefined FUN_14529dda0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529dda0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7fc5c8,FUN_14529de80,param_1,&DAT_149d0df08,1,0,0x14529ddaa);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14529ddf0 FUN_14529ddf0 body=10 status=ok
// SIG undefined FUN_14529ddf0(void)

undefined8 FUN_14529ddf0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



// FUNCTION 14529de00 FUN_14529de00 body=5 status=ok
// SIG undefined FUN_14529de00(void)

undefined8 FUN_14529de00(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14529de10 FUN_14529de10 body=32 status=ok
// SIG undefined FUN_14529de10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529de10(void)

{
  FUN_145291360(&DAT_14c7fc5c8,1);
  return;
}



// FUNCTION 14529de30 FUN_14529de30 body=80 status=ok
// SIG undefined FUN_14529de30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529de30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_145291100(&DAT_14c7fc5c8,FUN_14529de80,param_1,&DAT_149d0df08,1,1,0x14529de3a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14529de80 FUN_14529de80 body=29 status=ok
// SIG undefined FUN_14529de80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529de80(void)

{
  FUN_145291300(&DAT_14c7fc5c8);
  return;
}



// FUNCTION 14529dea0 FUN_14529dea0 body=79 status=ok
// SIG undefined FUN_14529dea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529dea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_144ea6670(0x58,"crypto\\evp\\cmeth_lib.c",0x12);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
  }
  return;
}



// FUNCTION 14529def0 FUN_14529def0 body=32 status=ok
// SIG undefined FUN_14529def0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529def0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\evp\\cmeth_lib.c",0x28);
  return;
}



// FUNCTION 14529df10 FUN_14529df10 body=9 status=ok
// SIG undefined FUN_14529df10(void)

undefined8 FUN_14529df10(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return 1;
}



// FUNCTION 14529df20 FUN_14529df20 body=9 status=ok
// SIG undefined FUN_14529df20(void)

undefined8 FUN_14529df20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 14529df30 FUN_14529df30 body=9 status=ok
// SIG undefined FUN_14529df30(void)

undefined8 FUN_14529df30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return 1;
}



// FUNCTION 14529df40 FUN_14529df40 body=10 status=ok
// SIG undefined FUN_14529df40(void)

undefined8 FUN_14529df40(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 14529df50 FUN_14529df50 body=10 status=ok
// SIG undefined FUN_14529df50(void)

undefined8 FUN_14529df50(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 14529df60 FUN_14529df60 body=180 status=ok
// SIG undefined FUN_14529df60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14529df60(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14529df75;
  plVar1 = (longlong *)FUN_144ea6670(0x78,"crypto\\rsa\\rsa_meth.c",0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = param_2;
    lVar2 = FUN_144ea6dc0(param_1,"crypto\\rsa\\rsa_meth.c",0x15);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    FUN_144ea6530(plVar1,"crypto\\rsa\\rsa_meth.c",0x19);
  }
  FUN_144ba24f0(4,0xa2,0x41,"crypto\\rsa\\rsa_meth.c",0x1c,uVar3);
  return (longlong *)0x0;
}



// FUNCTION 14529e020 FUN_14529e020 body=68 status=ok
// SIG undefined FUN_14529e020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529e020(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ea6530(*param_1,"crypto\\rsa\\rsa_meth.c",0x23);
    FUN_144ea6530(param_1,"crypto\\rsa\\rsa_meth.c",0x24);
  }
  return;
}



// FUNCTION 14529e070 FUN_14529e070 body=5 status=ok
// SIG undefined FUN_14529e070(void)

undefined8 FUN_14529e070(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 14529e080 FUN_14529e080 body=10 status=ok
// SIG undefined FUN_14529e080(void)

undefined8 FUN_14529e080(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 14529e090 FUN_14529e090 body=5 status=ok
// SIG undefined FUN_14529e090(void)

undefined8 FUN_14529e090(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 14529e0a0 FUN_14529e0a0 body=10 status=ok
// SIG undefined FUN_14529e0a0(void)

undefined8 FUN_14529e0a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 14529e0b0 FUN_14529e0b0 body=10 status=ok
// SIG undefined FUN_14529e0b0(void)

undefined8 FUN_14529e0b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 14529e0c0 FUN_14529e0c0 body=10 status=ok
// SIG undefined FUN_14529e0c0(void)

undefined8 FUN_14529e0c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 14529e0d0 FUN_14529e0d0 body=5 status=ok
// SIG undefined FUN_14529e0d0(void)

undefined8 FUN_14529e0d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14529e0e0 FUN_14529e0e0 body=10 status=ok
// SIG undefined FUN_14529e0e0(void)

undefined8 FUN_14529e0e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



// FUNCTION 14529e0f0 FUN_14529e0f0 body=5 status=ok
// SIG undefined FUN_14529e0f0(void)

undefined8 FUN_14529e0f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 14529e100 FUN_14529e100 body=10 status=ok
// SIG undefined FUN_14529e100(void)

undefined8 FUN_14529e100(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



// FUNCTION 14529e110 FUN_14529e110 body=10 status=ok
// SIG undefined FUN_14529e110(void)

undefined8 FUN_14529e110(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



// FUNCTION 14529e120 FUN_14529e120 body=10 status=ok
// SIG undefined FUN_14529e120(void)

undefined8 FUN_14529e120(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}



// FUNCTION 14529e130 FUN_14529e130 body=178 status=ok
// SIG undefined FUN_14529e130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_14529e130(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14529e145;
  plVar1 = (longlong *)FUN_144ea6670(0x60,"crypto\\dsa\\dsa_meth.c",0x18);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 8) = param_2;
    lVar2 = FUN_144ea6dc0(param_1,"crypto\\dsa\\dsa_meth.c",0x1d);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    FUN_144ea6530(plVar1,"crypto\\dsa\\dsa_meth.c",0x21);
  }
  FUN_144ba24f0(10,0x80,0x41,"crypto\\dsa\\dsa_meth.c",0x24,uVar3);
  return (longlong *)0x0;
}



// FUNCTION 14529e1f0 FUN_14529e1f0 body=68 status=ok
// SIG undefined FUN_14529e1f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529e1f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ea6530(*param_1,"crypto\\dsa\\dsa_meth.c",0x2b);
    FUN_144ea6530(param_1,"crypto\\dsa\\dsa_meth.c",0x2c);
  }
  return;
}



// FUNCTION 14529e240 FUN_14529e240 body=10 status=ok
// SIG undefined FUN_14529e240(void)

undefined8 FUN_14529e240(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 14529e250 FUN_14529e250 body=5 status=ok
// SIG undefined FUN_14529e250(void)

undefined8 FUN_14529e250(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 14529e260 FUN_14529e260 body=10 status=ok
// SIG undefined FUN_14529e260(void)

undefined8 FUN_14529e260(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



// FUNCTION 14529e270 FUN_14529e270 body=5 status=ok
// SIG undefined FUN_14529e270(void)

undefined8 FUN_14529e270(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14529e280 FUN_14529e280 body=10 status=ok
// SIG undefined FUN_14529e280(void)

undefined8 FUN_14529e280(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



// FUNCTION 14529e290 FUN_14529e290 body=5 status=ok
// SIG undefined FUN_14529e290(void)

undefined8 FUN_14529e290(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14529e2a0 FUN_14529e2a0 body=10 status=ok
// SIG undefined FUN_14529e2a0(void)

undefined8 FUN_14529e2a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



// FUNCTION 14529e2b0 FUN_14529e2b0 body=10 status=ok
// SIG undefined FUN_14529e2b0(void)

undefined8 FUN_14529e2b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



// FUNCTION 14529e2c0 FUN_14529e2c0 body=255 status=ok
// SIG undefined FUN_14529e2c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14529e2c0(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  
  uVar1 = *param_2;
  uVar5 = 0;
  lVar2 = *(longlong *)(param_2 + 2);
  uVar6 = uVar5;
  if (0 < (int)uVar1) {
    do {
      iVar4 = (int)uVar6;
      if ((iVar4 == (iVar4 / 0x12) * 0x12) &&
         ((iVar3 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1), iVar3 < 1 ||
          (iVar3 = FUN_144b9edb0(param_1,param_3,param_3), iVar3 < 1)))) {
        return false;
      }
      uVar6 = (ulonglong)(iVar4 + 1U);
      pwVar7 = L":Asset";
      if (iVar4 + 1U == uVar1) {
        pwVar7 = L"";
      }
      iVar4 = FUN_144ec7640(param_1,"%02x%s",*(undefined1 *)(uVar5 + lVar2),pwVar7);
      if (iVar4 < 1) {
        return false;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)(int)uVar1);
  }
  iVar4 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
  return iVar4 == 1;
}



// FUNCTION 14529e3c0 FUN_14529e3c0 body=256 status=ok
// SIG undefined FUN_14529e3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14529e3c0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x14529e3d5;
  iVar1 = FUN_144b9ebc0(param_1,"    Signature Algorithm: ");
  if (0 < iVar1) {
    iVar1 = FUN_144ed09c0(param_1,*param_2);
    if (0 < iVar1) {
      iVar1 = FUN_144ea8fa0(*param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_144edaca0(iVar1,local_18,local_res20);
        if (iVar1 != 0) {
          lVar2 = FUN_144ed2a20(0,local_res20[0]);
          if ((lVar2 != 0) && (*(code **)(lVar2 + 0xa0) != (code *)0x0)) {
            uVar3 = (**(code **)(lVar2 + 0xa0))(param_1,param_2,param_3,9,0);
            return uVar3;
          }
        }
      }
      if (param_3 != 0) {
        uVar3 = FUN_14529e2c0(param_1,param_3,9);
        return uVar3;
      }
      iVar1 = FUN_144b9ebc0(param_1,&DAT_149dfc0af);
      return (ulonglong)(0 < iVar1);
    }
  }
  return 0;
}



// FUNCTION 14529e4c0 FUN_14529e4c0 body=731 status=ok
// SIG undefined FUN_14529e4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529e4c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 *local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  iVar2 = FUN_144f02320(param_2);
  if (iVar2 != 0) {
    lVar3 = FUN_144f02570(param_2);
    lVar4 = FUN_144f02590(param_2);
    if (lVar3 == 0) {
      FUN_144ec7640(param_1,"%*sNo Trusted Uses.\n",param_3,&DAT_149e02088);
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = &DAT_149e02088;
      bVar1 = true;
      FUN_144ec7640(param_1,"%*sTrusted Uses:\n%*s",param_3,&DAT_149e02088);
      local_a8 = 0;
      iVar2 = FUN_144babbf0(lVar3);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            FUN_144b9ebc0(param_1,&DAT_149dfd133);
          }
          uVar5 = FUN_144babc00(lVar3,local_a8);
          FUN_144ea9230(local_98,0x50,uVar5);
          FUN_144b9ebc0(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = FUN_144babbf0(lVar3);
        } while (local_a8 < iVar2);
      }
      FUN_144b9ebc0(param_1,&DAT_149dfc0af);
    }
    if (lVar4 == 0) {
      FUN_144ec7640(param_1,"%*sNo Rejected Uses.\n",param_3,&DAT_149e02088);
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = &DAT_149e02088;
      bVar1 = true;
      FUN_144ec7640(param_1,"%*sRejected Uses:\n%*s",param_3,&DAT_149e02088);
      local_a8 = 0;
      iVar2 = FUN_144babbf0(lVar4);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            FUN_144b9ebc0(param_1,&DAT_149dfd133);
          }
          uVar5 = FUN_144babc00(lVar4,local_a8);
          FUN_144ea9230(local_98,0x50,uVar5);
          FUN_144b9ebc0(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = FUN_144babbf0(lVar4);
        } while (local_a8 < iVar2);
      }
      FUN_144b9ebc0(param_1,&DAT_149dfc0af);
    }
    uVar5 = local_a0;
    puVar6 = (undefined1 *)FUN_144f024f0(local_a0,&local_a8);
    if (puVar6 != (undefined1 *)0x0) {
      local_b8 = local_a8;
      local_b0 = puVar6;
      FUN_144ec7640(param_1,"%*sAlias: %.*s\n",param_3,&DAT_149e02088);
    }
    lVar3 = FUN_144f02530(uVar5,&local_a4);
    if (lVar3 != 0) {
      FUN_144ec7640(param_1,"%*sKey Id: ",param_3,&DAT_149e02088);
      local_a8 = 0;
      if (0 < local_a4) {
        do {
          pwVar7 = L"";
          if (local_a8 != 0) {
            pwVar7 = L":Asset";
          }
          FUN_144ec7640(param_1,"%s%02X",pwVar7,*(undefined1 *)(local_a8 + lVar3));
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_a4);
      }
      FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14529e7b0 FUN_14529e7b0 body=1504 status=ok
// SIG undefined FUN_14529e7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14529e7b0(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar16;
  longlong local_48;
  longlong local_40;
  ulonglong uVar11;
  
  local_40 = 0x14529e7ca;
  uVar11 = 0;
  uVar10 = 0;
  bVar15 = (param_3 & 0xf0000) != 0x40000;
  uVar1 = 10;
  if (bVar15) {
    uVar1 = 0x20;
  }
  uVar13 = 0xc;
  if (bVar15) {
    uVar13 = uVar11;
  }
  if (param_3 == 0) {
    uVar13 = 0x10;
  }
  uVar12 = uVar11;
  if (((param_4 & 1) == 0) &&
     ((iVar2 = FUN_144b9eb80(param_1,"Certificate:\n",0xd), iVar2 < 1 ||
      (iVar2 = FUN_144b9eb80(param_1,"    Data:\n",10), iVar2 < 1)))) goto LAB_14529ed69;
  if ((param_4 & 2) == 0) {
    uVar3 = FUN_144bb5fc0(param_2);
    if (uVar3 < 3) {
      in_stack_ffffffffffffffa8 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20),uVar3);
      iVar2 = FUN_144ec7640(param_1,"%8sVersion: %ld (0x%lx)\n",&DAT_149e02088,uVar3 + 1,
                            in_stack_ffffffffffffffa8);
    }
    else {
      iVar2 = FUN_144ec7640(param_1,"%8sVersion: Unknown (%ld)\n",&DAT_149e02088,uVar3);
    }
    if (iVar2 < 1) goto LAB_14529ed69;
  }
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_4 & 4) == 0) {
    iVar2 = FUN_144b9eb80(param_1,"        Serial Number:",0x16);
    if (iVar2 < 1) goto LAB_14529ed69;
    puVar4 = (uint *)FUN_144bb4f20(param_2);
    if ((int)*puVar4 < 5) {
      FUN_144ba3130();
      iVar2 = FUN_144ef1170(puVar4);
      FUN_144ba3170();
      if (iVar2 != -1) {
        if (puVar4[1] == 0x102) {
          iVar2 = -iVar2;
          pwVar8 = L"-`[Left Bracket";
        }
        else {
          pwVar8 = L"";
        }
        iVar2 = FUN_144ec7640(param_1," %s%lu (%s0x%lx)\n",pwVar8,iVar2,pwVar8,iVar2);
        uVar16 = (undefined4)((ulonglong)pwVar8 >> 0x20);
        if (iVar2 < 1) goto LAB_14529ed69;
        goto LAB_14529e9c7;
      }
    }
    pcVar9 = "";
    if (puVar4[1] == 0x102) {
      pcVar9 = " (Negative)";
    }
    iVar2 = FUN_144ec7640(param_1,"\n%12s%s",&DAT_149e02088,pcVar9);
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    uVar12 = uVar10;
    if (iVar2 < 1) goto LAB_14529ed69;
    uVar3 = *puVar4;
    uVar7 = uVar11;
    uVar12 = uVar11;
    if (0 < (int)uVar3) {
      do {
        uVar14 = (int)uVar12 + 1;
        uVar5 = 0x3a;
        if (uVar14 == uVar3) {
          uVar5 = 10;
        }
        iVar2 = FUN_144ec7640(param_1,"%02x%c",*(undefined1 *)(*(longlong *)(puVar4 + 2) + uVar7),
                              uVar5);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        uVar12 = uVar10;
        if (iVar2 < 1) goto LAB_14529ed69;
        uVar3 = *puVar4;
        uVar7 = uVar7 + 1;
        uVar12 = (ulonglong)uVar14;
      } while ((int)uVar14 < (int)uVar3);
    }
  }
LAB_14529e9c7:
  if ((param_4 & 8) == 0) {
    uVar5 = FUN_144bb60b0(param_2);
    iVar2 = FUN_144b9ebc0(param_1,&DAT_149f636de);
    uVar12 = uVar11;
    if ((iVar2 < 1) || (iVar2 = FUN_14529e3c0(param_1,uVar5,0), uVar12 = uVar10, iVar2 < 1))
    goto LAB_14529ed69;
  }
  if ((param_4 & 0x10) == 0) {
    iVar2 = FUN_144ec7640(param_1,"        Issuer:%c",uVar1);
    uVar12 = uVar10;
    if (iVar2 < 1) goto LAB_14529ed69;
    uVar5 = FUN_144bb4f40(param_2);
    iVar2 = FUN_14526c5b0(param_1,uVar5,uVar13,param_3);
    if ((iVar2 < 0) || (iVar2 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1), iVar2 < 1))
    goto LAB_14529ed69;
  }
  if ((param_4 & 0x20) == 0) {
    iVar2 = FUN_144b9eb80(param_1,"        Validity\n",0x11);
    uVar12 = uVar10;
    if ((iVar2 < 1) || (iVar2 = FUN_144b9eb80(param_1,"            Not Before: ",0x18), iVar2 < 1))
    goto LAB_14529ed69;
    uVar5 = FUN_144bb6010(param_2);
    iVar2 = FUN_144ef2290(param_1,uVar5);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_144b9eb80(param_1,"\n            Not After : ",0x19), iVar2 < 1))
    goto LAB_14529ed69;
    uVar5 = FUN_144bb6030(param_2);
    iVar2 = FUN_144ef2290(param_1,uVar5);
    if ((iVar2 == 0) || (iVar2 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1), iVar2 < 1))
    goto LAB_14529ed69;
  }
  if ((param_4 & 0x40) == 0) {
    iVar2 = FUN_144ec7640(param_1,"        Subject:%c",uVar1);
    uVar12 = uVar10;
    if (iVar2 < 1) goto LAB_14529ed69;
    uVar5 = FUN_144bb4f50(param_2);
    iVar2 = FUN_14526c5b0(param_1,uVar5,uVar13,param_3);
    if ((iVar2 < 0) || (iVar2 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1), iVar2 < 1))
    goto LAB_14529ed69;
  }
  if (-1 < (char)param_4) {
    uVar5 = FUN_144bb6070(param_2);
    FUN_144bb6830(&local_40,0,0,0,uVar5);
    uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
    iVar2 = FUN_144b9eb80(param_1,"        Subject Public Key Info:\n",0x21);
    uVar12 = uVar10;
    if ((((iVar2 < 1) ||
         (iVar2 = FUN_144ec7640(param_1,"%12sPublic Key Algorithm: ",&DAT_149e02088), iVar2 < 1)) ||
        (iVar2 = FUN_144ed09c0(param_1,local_40), iVar2 < 1)) ||
       (iVar2 = FUN_144b9ebc0(param_1,&DAT_149dfc0af), iVar2 < 1)) goto LAB_14529ed69;
    lVar6 = FUN_144bb4f60(param_2);
    if (lVar6 == 0) {
      FUN_144ec7640(param_1,"%12sUnable to load Public Key\n",&DAT_149e02088);
      FUN_1455009c0(param_1);
    }
    else {
      FUN_144ba7100(param_1,lVar6,0x10);
    }
  }
  if (((param_4 >> 0xc & 1) != 0) ||
     (((FUN_144bb6090(param_2,&local_48,&local_40), local_48 == 0 ||
       ((iVar2 = FUN_144ec7640(param_1,"%8sIssuer Unique ID: ",&DAT_149e02088), uVar12 = uVar10,
        0 < iVar2 && (iVar2 = FUN_14529e2c0(param_1,local_48,0xc), iVar2 != 0)))) &&
      ((local_40 == 0 ||
       ((iVar2 = FUN_144ec7640(param_1,"%8sSubject Unique ID: ",&DAT_149e02088), uVar12 = uVar10,
        0 < iVar2 && (iVar2 = FUN_14529e2c0(param_1,local_40,0xc), iVar2 != 0)))))))) {
    if ((param_4 >> 8 & 1) == 0) {
      uVar5 = FUN_144bb6080(param_2);
      FUN_145500db0(param_1,"X509v3 extensions",uVar5,param_4,CONCAT44(uVar16,8));
    }
    if ((param_4 >> 9 & 1) == 0) {
      FUN_144bb5ed0(&local_40,&local_48,param_2);
      iVar2 = FUN_14529e3c0(param_1,local_48,local_40);
      uVar12 = uVar10;
      if (iVar2 < 1) goto LAB_14529ed69;
    }
    if (((param_4 >> 10 & 1) != 0) ||
       (iVar2 = FUN_14529e4c0(param_1,param_2,0), uVar12 = uVar10, iVar2 != 0)) {
      uVar12 = 1;
    }
  }
LAB_14529ed69:
  FUN_144ea6530(0,"crypto\\x509\\t_x509.c",0xd9);
  return uVar12;
}



// FUNCTION 14529ed90 FUN_14529ed90 body=62 status=ok
// SIG undefined FUN_14529ed90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ed90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0xd064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d0e200);
    FUN_144ba2da0(&DAT_149d0e930);
  }
  return 1;
}



// FUNCTION 14529edd0 FUN_14529edd0 body=62 status=ok
// SIG undefined FUN_14529edd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529edd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x307f000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d10330);
    FUN_144ba2da0(&DAT_149d10660);
  }
  return 1;
}



// FUNCTION 14529ee10 FUN_14529ee10 body=62 status=ok
// SIG undefined FUN_14529ee10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ee10(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x100e0000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d10cd0);
    FUN_144ba2da0(&DAT_149d117c0);
  }
  return 1;
}



// FUNCTION 14529ee50 FUN_14529ee50 body=62 status=ok
// SIG undefined FUN_14529ee50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ee50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x7064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d133b0);
    FUN_144ba2da0(&DAT_149d133f0);
  }
  return 1;
}



// FUNCTION 14529ee90 FUN_14529ee90 body=62 status=ok
// SIG undefined FUN_14529ee90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ee90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x20064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d13440);
    FUN_144ba2da0(&DAT_149d137d0);
  }
  return 1;
}



// FUNCTION 14529eed0 FUN_14529eed0 body=62 status=ok
// SIG undefined FUN_14529eed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529eed0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x29063000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d140e0);
    FUN_144ba2da0(&DAT_149d14140);
  }
  return 1;
}



// FUNCTION 14529ef10 FUN_14529ef10 body=62 status=ok
// SIG undefined FUN_14529ef10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ef10(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x408c000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d14220);
    FUN_144ba2da0(&DAT_149d14620);
  }
  return 1;
}



// FUNCTION 14529ef50 FUN_14529ef50 body=62 status=ok
// SIG undefined FUN_14529ef50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ef50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x5066000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d15680);
    FUN_144ba2da0(&DAT_149d15830);
  }
  return 1;
}



// FUNCTION 14529ef90 FUN_14529ef90 body=62 status=ok
// SIG undefined FUN_14529ef90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529ef90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0xa064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d15d70);
    FUN_144ba2da0(&DAT_149d15ef0);
  }
  return 1;
}



// FUNCTION 14529efd0 FUN_14529efd0 body=62 status=ok
// SIG undefined FUN_14529efd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529efd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x60a5000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d161d0);
    FUN_144ba2da0(&DAT_149d16840);
  }
  return 1;
}



// FUNCTION 14529f010 FUN_14529f010 body=62 status=ok
// SIG undefined FUN_14529f010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f010(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x8069000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d17c00);
    FUN_144ba2da0(&DAT_149d17ca0);
  }
  return 1;
}



// FUNCTION 14529f050 FUN_14529f050 body=62 status=ok
// SIG undefined FUN_14529f050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f050(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x907f000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d17d80);
    FUN_144ba2da0(&DAT_149d18040);
  }
  return 1;
}



// FUNCTION 14529f090 FUN_14529f090 body=62 status=ok
// SIG undefined FUN_14529f090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f090(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x21088000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d187d0);
    FUN_144ba2da0(&DAT_149d18a00);
  }
  return 1;
}



// FUNCTION 14529f0d0 FUN_14529f0d0 body=62 status=ok
// SIG undefined FUN_14529f0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f0d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0xb064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d19320);
    FUN_144ba2da0(&DAT_149d19710);
  }
  return 1;
}



// FUNCTION 14529f110 FUN_14529f110 body=62 status=ok
// SIG undefined FUN_14529f110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f110(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x220a4000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1a250);
    FUN_144ba2da0(&DAT_149d1a6a0);
  }
  return 1;
}



// FUNCTION 14529f150 FUN_14529f150 body=62 status=ok
// SIG undefined FUN_14529f150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f150(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0xe068000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1b670);
    FUN_144ba2da0(&DAT_149d1b7f0);
  }
  return 1;
}



// FUNCTION 14529f190 FUN_14529f190 body=62 status=ok
// SIG undefined FUN_14529f190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f190(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x23079000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1bc80);
    FUN_144ba2da0(&DAT_149d1be60);
  }
  return 1;
}



// FUNCTION 14529f1d0 FUN_14529f1d0 body=62 status=ok
// SIG undefined FUN_14529f1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f1d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x2407f000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1c400);
    FUN_144ba2da0(&DAT_149d1c5d0);
  }
  return 1;
}



// FUNCTION 14529f210 FUN_14529f210 body=62 status=ok
// SIG undefined FUN_14529f210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f210(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0xf078000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1ce50);
    FUN_144ba2da0(&DAT_149d1cfd0);
  }
  return 1;
}



// FUNCTION 14529f250 FUN_14529f250 body=62 status=ok
// SIG undefined FUN_14529f250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f250(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x25064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1d220);
    FUN_144ba2da0(&DAT_149d1d460);
  }
  return 1;
}



// FUNCTION 14529f290 FUN_14529f290 body=62 status=ok
// SIG undefined FUN_14529f290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f290(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x260c6000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1d990);
    FUN_144ba2da0(&DAT_149d1dc20);
  }
  return 1;
}



// FUNCTION 14529f2d0 FUN_14529f2d0 body=62 status=ok
// SIG undefined FUN_14529f2d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f2d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x28073000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1e4c0);
    FUN_144ba2da0(&DAT_149d1e620);
  }
  return 1;
}



// FUNCTION 14529f310 FUN_14529f310 body=62 status=ok
// SIG undefined FUN_14529f310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f310(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x27066000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1e9f0);
    FUN_144ba2da0(&DAT_149d1eb00);
  }
  return 1;
}



// FUNCTION 14529f350 FUN_14529f350 body=62 status=ok
// SIG undefined FUN_14529f350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f350(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x2f06e000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1f030);
    FUN_144ba2da0(&DAT_149d1f3d0);
  }
  return 1;
}



// FUNCTION 14529f390 FUN_14529f390 body=62 status=ok
// SIG undefined FUN_14529f390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f390(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x2e063000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d1fee0);
    FUN_144ba2da0(&DAT_149d20420);
  }
  return 1;
}



// FUNCTION 14529f3d0 FUN_14529f3d0 body=62 status=ok
// SIG undefined FUN_14529f3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f3d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x32075000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d218b0);
    FUN_144ba2da0(&DAT_149d21a70);
  }
  return 1;
}



// FUNCTION 14529f410 FUN_14529f410 body=62 status=ok
// SIG undefined FUN_14529f410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f410(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x33064000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d21f10);
    FUN_144ba2da0(&DAT_149d21f90);
  }
  return 1;
}



// FUNCTION 14529f450 FUN_14529f450 body=62 status=ok
// SIG undefined FUN_14529f450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f450(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x34067000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d220c0);
    FUN_144ba2da0(&DAT_149d22190);
  }
  return 1;
}



// FUNCTION 14529f490 FUN_14529f490 body=62 status=ok
// SIG undefined FUN_14529f490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529f490(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba2a50(0x2c081000);
  if (lVar1 == 0) {
    FUN_144ba2da0(&DAT_149d22430);
    FUN_144ba2da0(&DAT_149d226a0);
  }
  return 1;
}



// FUNCTION 14529f4d0 FUN_14529f4d0 body=64 status=ok
// SIG undefined FUN_14529f4d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529f4d0(void)

{
  FUN_144ea8620(DAT_14c7fc5d8);
  DAT_14c7fc5d8 = 0;
  FUN_144e98660(DAT_14c7fc5e0);
  DAT_14c7fc5e0 = 0;
  return;
}



// FUNCTION 14529f510 FUN_14529f510 body=82 status=ok
// SIG undefined FUN_14529f510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14529f510(int *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 2) {
    return (ulonglong)(uint)param_1[6];
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(*(undefined8 *)(param_1 + 8));
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_144b9efc0(*(undefined8 *)(param_1 + 4),2,0);
  return uVar1;
}



// FUNCTION 14529f580 FUN_14529f580 body=1419 status=ok
// SIG undefined FUN_14529f580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529f580(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_1f8 [32];
  int **local_1d8;
  int *local_1d0;
  int *local_1c8;
  int *local_1c0;
  int local_1b8 [2];
  ulonglong local_1b0;
  int local_1a8 [2];
  longlong local_1a0;
  char *local_198;
  int local_190 [2];
  int *local_188;
  int *local_180;
  int *local_178;
  undefined *local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14529f5a2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar12 = 0;
  param_1[1] = 0;
  FUN_144ba26f0();
  if (*param_1 == 2) {
LAB_14529f5e0:
    do {
      local_1b0 = 0;
      if (*(char **)(param_1 + 0xe) == (char *)0x0) {
        if (param_1[6] == 0) {
          local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x514);
          FUN_144ba24f0(0x2c,0x77,2,"crypto\\store\\loader_file.c");
          piVar7 = _errno();
          *piVar7 = param_1[0x10];
          param_1[1] = param_1[1] + 1;
          piVar7 = _errno();
          iVar3 = FUN_144ea6ec0(*piVar7,local_148,0x100);
          if (iVar3 != 0) {
            FUN_144ba2bd0(1,local_148);
          }
        }
        break;
      }
      uVar9 = uVar12;
      if (((**(char **)(param_1 + 0xe) != '.') && (iVar3 = FUN_1452a12d0(param_1), iVar3 != 0)) &&
         (iVar3 = FUN_1452a1140(param_1,*(undefined8 *)(param_1 + 0xe),&local_1b0),
         uVar9 = local_1b0, iVar3 == 0)) break;
      uVar6 = FUN_144ec6b20(param_1 + 4,*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0xe) = uVar6;
      piVar7 = _errno();
      iVar3 = *piVar7;
      param_1[0x10] = iVar3;
      if ((*(longlong *)(param_1 + 0xe) == 0) && (iVar3 == 0)) {
        param_1[6] = 1;
      }
      if (uVar9 != 0) {
        lVar8 = FUN_145501d10(uVar9);
        if (lVar8 == 0) {
          FUN_144ea6530(uVar9,"crypto\\store\\loader_file.c",0x530);
          local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x531);
          FUN_144ba24f0(0x2c,0x77,0x2c,"crypto\\store\\loader_file.c");
        }
        break;
      }
      if (*param_1 == 2) {
        iVar3 = param_1[6];
      }
      else {
        if ((*(longlong *)(param_1 + 6) != 0) &&
           (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))(*(undefined8 *)(param_1 + 8)),
           iVar3 == 0)) goto LAB_14529f5e0;
        iVar3 = FUN_144b9efc0(*(undefined8 *)(param_1 + 4),2,0);
      }
    } while (iVar3 == 0);
  }
  else {
    while( true ) {
      local_190[0] = 0;
      uVar9 = uVar12;
      if (*(longlong *)(param_1 + 6) != 0) {
        local_1d0 = local_190;
        ppiVar1 = (int **)(param_1 + 8);
        local_1d8 = ppiVar1;
        local_1c8 = param_2;
        local_1c0 = param_3;
        uVar9 = (**(code **)(*(longlong *)(param_1 + 6) + 8))(0,0,0);
        if (uVar9 == 0) {
          (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(ppiVar1);
          *ppiVar1 = (int *)0x0;
          param_1[6] = 0;
          param_1[7] = 0;
        }
      }
      if (uVar9 != 0) break;
      lVar8 = 0;
      if (*param_1 == 2) {
        iVar3 = param_1[6];
LAB_14529f80e:
        if (iVar3 != 0) break;
      }
      else if ((*(longlong *)(param_1 + 6) == 0) ||
              (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))
                                 (*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
        iVar3 = FUN_144b9efc0(*(undefined8 *)(param_1 + 4),2,0);
        goto LAB_14529f80e;
      }
      do {
        iVar3 = -1;
        local_1a0 = 0;
        local_198 = (char *)0x0;
        local_1b0 = 0;
        local_1b8[0] = 0;
        local_1a8[0] = -1;
        if (*param_1 == 1) {
          local_1d8 = (int **)local_1b8;
          if ((*(byte *)(param_1 + 2) & 1) == 0) {
            iVar4 = FUN_144ee8c30(*(undefined8 *)(param_1 + 4),&local_1a0,&local_198);
          }
          else {
            local_1d0 = (int *)CONCAT44(local_1d0._4_4_,3);
            iVar4 = FUN_144ee8c60();
          }
          iVar11 = -1;
          if (iVar4 < 1) goto LAB_14529fa08;
          cVar2 = *local_198;
          uVar5 = 0;
          uVar9 = uVar12;
          pcVar10 = local_198;
          while ((cVar2 != '\0' && (uVar5 = (uint)uVar9, uVar5 < 0x80000000))) {
            pcVar10 = pcVar10 + 1;
            uVar5 = uVar5 + 1;
            cVar2 = *pcVar10;
            uVar9 = (ulonglong)uVar5;
          }
          if (10 < (uVar5 & 0x7fffffff)) {
            iVar4 = FUN_144ee8760(local_198,local_168);
            iVar11 = iVar3;
            if (iVar4 != 0) {
              local_1d8 = &local_180;
              local_170 = &DAT_149f28098;
              local_180 = param_2;
              local_178 = param_3;
              iVar4 = FUN_144ee8a50(local_168,local_1b0,local_1b8);
              if (iVar4 != 0) goto LAB_14529f946;
            }
            goto LAB_14529fa08;
          }
LAB_14529f946:
          local_1d8 = (int **)(longlong)local_1b8[0];
          local_1c0 = local_1a8;
          local_1d0 = param_2;
          local_1c8 = param_3;
          lVar8 = FUN_1452a0ed0(param_1,local_1a0,local_198);
          iVar11 = local_1a8[0];
          if (lVar8 == 0) {
            if (local_1a0 == 0) {
              if (local_1a8[0] < 2) goto LAB_14529f992;
              local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x566);
              FUN_144ba24f0(0x2c,0x77,0x6b);
            }
            else {
              if (1 < local_1a8[0]) goto LAB_14529fa08;
LAB_14529f992:
              if (local_1a8[0] == 1) {
                iVar3 = FUN_144ba2690();
                if (iVar3 == 0) {
                  local_1d8 = (int **)CONCAT44(local_1d8._4_4_,0x56e);
                  FUN_144ba24f0(0x2c,0x77,0x6e);
                  if (local_1a0 != 0) {
                    FUN_144ba2bd0(3,"PEM type is \'");
                  }
                }
                goto LAB_14529fa08;
              }
            }
            if (0 < iVar11) goto LAB_14529fa08;
          }
        }
        else {
          local_188 = (int *)0x0;
          iVar4 = FUN_144efd810(*(undefined8 *)(param_1 + 4),&local_188);
          iVar11 = iVar3;
          if (-1 < iVar4) {
            local_1b0 = *(ulonglong *)(local_188 + 2);
            local_1b8[0] = *local_188;
            FUN_144ea6530(local_188,"crypto\\store\\loader_file.c",0x49a);
            goto LAB_14529f946;
          }
LAB_14529fa08:
          param_1[1] = param_1[1] + 1;
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          FUN_144ea6530(local_1a0,"crypto\\store\\loader_file.c",0x46e);
        }
        else {
          FUN_144ea6f60(local_1a0,0,"crypto\\store\\loader_file.c");
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          FUN_144ea6530(local_198,"crypto\\store\\loader_file.c",0x46e);
        }
        else {
          FUN_144ea6f60(local_198,0,"crypto\\store\\loader_file.c");
        }
        if ((*(byte *)(param_1 + 2) & 1) == 0) {
          FUN_144ea6530(local_1b0);
        }
        else {
          FUN_144ea6f60();
        }
        if (iVar11 != 0) {
          if (1 < iVar11) goto LAB_14529f696;
          break;
        }
        if (*param_1 == 2) {
          iVar3 = param_1[6];
LAB_14529fadc:
          if (iVar3 != 0) break;
        }
        else if ((*(longlong *)(param_1 + 6) == 0) ||
                (iVar3 = (**(code **)(*(longlong *)(param_1 + 6) + 0x10))
                                   (*(undefined8 *)(param_1 + 8)), iVar3 != 0)) {
          iVar3 = FUN_144b9efc0(*(undefined8 *)(param_1 + 4));
          goto LAB_14529fadc;
        }
      } while (param_1[1] < 1);
      if (((lVar8 == 0) || (param_1[0x12] == 0)) ||
         (iVar3 = FUN_145501f40(lVar8), param_1[0x12] == iVar3)) break;
      FUN_145501f50(lVar8);
    }
  }
LAB_14529f696:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 14529fb30 FUN_14529fb30 body=79 status=ok
// SIG undefined FUN_14529fb30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529fb30(int *param_1)

{
  if (*param_1 == 2) {
    FUN_144ec6e60(param_1 + 4);
    FUN_1452a0e60(param_1);
    return 1;
  }
  FUN_144b9f360(*(undefined8 *)(param_1 + 4));
  FUN_1452a0e60(param_1);
  return 1;
}



// FUNCTION 14529fb80 FUN_14529fb80 body=773 status=ok
// SIG undefined FUN_14529fb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529fb80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  undefined8 local_478;
  undefined4 *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458 [2];
  undefined1 local_448 [1024];
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14529fb95;
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  uVar9 = 0;
  lVar5 = *param_5;
  local_470 = param_6;
  local_458[0] = param_3;
  if (lVar5 == 0) {
    uVar12 = 0;
    if (param_1 != 0) goto LAB_14529fe75;
    lVar3 = FUN_1455016f0(0,local_458,param_4);
    if (lVar3 != 0) {
      *param_6 = 1;
      pcVar10 = "";
      local_468 = 0;
      local_460 = 0;
      local_478 = 0;
      iVar2 = FUN_145501220(lVar3,&DAT_149e02088,0);
      if ((iVar2 == 0) && (iVar2 = FUN_145501220(lVar3,0,0), iVar2 == 0)) {
        local_488 = (undefined8 *)param_8;
        pcVar10 = (char *)FUN_1452a0ca0(param_7,local_448,0x400,"PKCS12 import password");
        if (pcVar10 == (char *)0x0) {
          local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0xe8);
          FUN_144ba24f0(0x2c,0x7a,0x72,"crypto\\store\\loader_file.c");
          param_6 = local_470;
          uVar12 = 0;
        }
        else {
          cVar1 = *pcVar10;
          pcVar4 = pcVar10;
          uVar6 = uVar9;
          while ((cVar1 != '\0' && (uVar12 = (uint)uVar6, uVar12 < 0x80000000))) {
            pcVar4 = pcVar4 + 1;
            uVar12 = uVar12 + 1;
            cVar1 = *pcVar4;
            uVar6 = (ulonglong)uVar12;
          }
          iVar2 = FUN_145501220(lVar3,pcVar10,uVar12 & 0x7fffffff);
          if (iVar2 != 0) goto LAB_14529fcfa;
          local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0xed);
          FUN_144ba24f0(0x2c,0x7a,0x71,"crypto\\store\\loader_file.c");
          param_6 = local_470;
          uVar12 = 0;
        }
      }
      else {
LAB_14529fcfa:
        local_488 = &local_478;
        iVar2 = FUN_145501760(lVar3,pcVar10,&local_468,&local_460);
        param_6 = local_470;
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar11 = 0;
          lVar5 = FUN_144babca0();
          uVar6 = uVar9;
          uVar7 = uVar9;
          if ((((lVar5 == 0) || (uVar6 = FUN_145501df0(local_468), uVar6 == 0)) ||
              (iVar2 = FUN_144bac1c0(lVar5,uVar6), uVar9 = uVar11, uVar7 = 0, iVar2 == 0)) ||
             ((uVar7 = FUN_145501e60(local_460), uVar7 == 0 ||
              (iVar2 = FUN_144bac1c0(lVar5,uVar7), iVar2 == 0)))) {
LAB_14529fdeb:
            FUN_145501f50(uVar9);
            FUN_145501f50(uVar7);
            FUN_145501f50(uVar6);
            FUN_144babe00(lVar5,FUN_145501f50);
            FUN_144ba6e60(local_468);
            FUN_144b47250(local_460);
            FUN_144babe00(local_478,FUN_144b47250);
            lVar5 = 0;
            uVar12 = 0;
          }
          else {
            uVar6 = 0;
            uVar7 = 0;
            iVar2 = FUN_144babbf0(local_478);
            while (uVar12 = 1, 0 < iVar2) {
              uVar8 = FUN_144babc00(local_478,0);
              uVar9 = FUN_145501e60(uVar8);
              if ((uVar9 == 0) || (iVar2 = FUN_144bac1c0(lVar5), iVar2 == 0)) goto LAB_14529fdeb;
              FUN_144bac1f0(local_478);
              iVar2 = FUN_144babbf0(local_478);
            }
          }
          *param_5 = lVar5;
          param_6 = local_470;
        }
      }
    }
    FUN_1455016d0(lVar3);
    if ((uVar12 == 0) || (lVar5 == 0)) goto LAB_14529fe75;
  }
  *param_6 = 1;
  FUN_144bac1f0(lVar5);
LAB_14529fe75:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_4a8);
}



// FUNCTION 14529fea0 FUN_14529fea0 body=44 status=ok
// SIG undefined FUN_14529fea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14529fea0(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_144babbf0();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14529fed0 FUN_14529fed0 body=46 status=ok
// SIG undefined FUN_14529fed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529fed0(undefined8 *param_1)

{
  FUN_144babe00(*param_1,FUN_145501f50);
  *param_1 = 0;
  return;
}



// FUNCTION 14529ff00 FUN_14529ff00 body=476 status=ok
// SIG undefined FUN_14529ff00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14529ff00(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  longlong *local_470;
  int *local_468;
  undefined4 local_460;
  int local_458 [2];
  undefined4 *local_450;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_438 [2];
  undefined1 local_428 [1024];
  ulonglong uStack_28;
  undefined8 uStack_20;
  ulonglong uVar11;
  
  uStack_20 = 0x14529ff18;
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_498;
  uVar8 = 0;
  local_448 = 0;
  local_450 = (undefined4 *)0x0;
  local_440 = 0;
  local_438[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(param_1,"ENCRYPTED PRIVATE KEY");
    if (iVar2 != 0) goto LAB_1452a00cc;
    *param_6 = 1;
  }
  uVar3 = FUN_144ef1030(0,local_438,param_4);
  if (uVar3 == 0) goto LAB_1452a00cc;
  *param_6 = 1;
  plVar4 = (longlong *)FUN_144ea6fc0();
  if (plVar4 == (longlong *)0x0) {
    local_478 = CONCAT44(local_478._4_4_,0x162);
    uVar8 = uVar3;
LAB_1452a00a0:
    uVar9 = 0x41;
    uVar3 = uVar8;
LAB_1452a00a6:
    FUN_144ba24f0(0x2c,0x7d,uVar9,"crypto\\store\\loader_file.c");
  }
  else {
    local_478 = param_8;
    pcVar5 = (char *)FUN_1452a0ca0(param_7,local_428,0x400,"PKCS8 decrypt password");
    if (pcVar5 == (char *)0x0) {
      local_478 = CONCAT44(local_478._4_4_,0x169);
      uVar9 = 0x73;
      goto LAB_1452a00a6;
    }
    FUN_144ef1080(uVar3,&local_448,&local_450);
    uVar10 = 0;
    cVar1 = *pcVar5;
    pcVar6 = pcVar5;
    uVar11 = uVar8;
    while ((cVar1 != '\0' && (uVar10 = (uint)uVar11, uVar10 < 0x80000000))) {
      pcVar6 = pcVar6 + 1;
      uVar10 = uVar10 + 1;
      cVar1 = *pcVar6;
      uVar11 = (ulonglong)uVar10;
    }
    local_468 = local_458;
    local_460 = 0;
    local_470 = &local_440;
    local_478 = CONCAT44(local_478._4_4_,*local_450);
    lVar7 = FUN_145500f50(local_448,pcVar5,uVar10 & 0x7fffffff,*(undefined8 *)(local_450 + 2));
    if (lVar7 != 0) {
      plVar4[1] = local_440;
      *plVar4 = (longlong)local_458[0];
      plVar4[2] = (longlong)local_458[0];
      FUN_144ef1010(uVar3);
      lVar7 = FUN_145502040("PRIVATE KEY",plVar4);
      if (lVar7 != 0) goto LAB_1452a00cc;
      local_478 = CONCAT44(local_478._4_4_,0x17a);
      goto LAB_1452a00a0;
    }
  }
  FUN_144ef1010(uVar3);
  FUN_144ea7070(plVar4);
LAB_1452a00cc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_28 ^ (ulonglong)auStack_498);
}



// FUNCTION 1452a0100 FUN_1452a0100 body=634 status=ok
// SIG undefined FUN_1452a0100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a0100(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  uVar10 = 0;
  uVar4 = uVar10;
  local_res18[0] = param_3;
  if (param_1 == (char *)0x0) {
    for (lVar3 = FUN_1452906e0(); lVar3 != 0; lVar3 = FUN_145290780(lVar3)) {
      pcVar6 = (code *)FUN_145298040(lVar3);
      if (pcVar6 != (code *)0x0) {
        local_res8 = 0;
        iVar1 = (*pcVar6)(lVar3,0,&local_res8,0);
        uVar8 = uVar10;
        if (0 < iVar1) {
          do {
            local_50 = local_res18[0];
            local_58 = (undefined4 *)0x0;
            iVar2 = (*pcVar6)(lVar3,&local_58,0);
            if ((((iVar2 != 0) && (local_58 != (undefined4 *)0x0)) &&
                ((*(byte *)(local_58 + 2) & 1) == 0)) &&
               (uVar7 = FUN_144efdb30(*local_58), uVar7 != 0)) {
              if (uVar4 != 0) {
                FUN_144ba6e60(uVar7);
                uVar7 = uVar4;
              }
              *param_6 = *param_6 + 1;
              uVar4 = uVar7;
            }
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)iVar1);
        }
      }
    }
    iVar1 = FUN_144ed29a0();
    if (0 < iVar1) {
      do {
        local_48[0] = local_res18[0];
        puVar5 = (undefined4 *)FUN_144ed29d0(uVar10);
        if (((*(byte *)(puVar5 + 2) & 1) == 0) &&
           (uVar8 = FUN_144efdb30(*puVar5,0,local_48,param_4), uVar8 != 0)) {
          if (uVar4 != 0) {
            FUN_144ba6e60(uVar8);
            uVar8 = uVar4;
          }
          *param_6 = *param_6 + 1;
          uVar4 = uVar8;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        iVar1 = FUN_144ed29a0();
      } while ((int)uVar9 < iVar1);
    }
    if (1 < *param_6) {
      FUN_144ba6e60(uVar4);
      return 0;
    }
  }
  else {
    iVar1 = strcmp(param_1,"PRIVATE KEY");
    if (iVar1 == 0) {
      lVar3 = FUN_144efe460(0,local_res18,param_4);
      *param_6 = 1;
      if (lVar3 != 0) {
        uVar4 = FUN_144efe5a0(lVar3);
      }
      FUN_144efe440(lVar3);
    }
    else {
      iVar1 = FUN_144ee9c10(param_1,"PRIVATE KEY");
      if (iVar1 < 1) {
        return 0;
      }
      puVar5 = (undefined4 *)FUN_144ed2b20(0,param_1,iVar1);
      if (puVar5 == (undefined4 *)0x0) {
        return 0;
      }
      *param_6 = 1;
      uVar4 = FUN_144efdb30(*puVar5,0,local_res18,param_4);
    }
  }
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = FUN_145501df0(uVar4);
  if (lVar3 == 0) {
    FUN_144ba6e60(uVar4);
  }
  return lVar3;
}



// FUNCTION 1452a0380 FUN_1452a0380 body=140 status=ok
// SIG undefined FUN_1452a0380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452a0380(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  
  uVar3 = 0;
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"PUBLIC KEY");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar2 = FUN_144bb66b0(0,local_res18,param_4);
  if (lVar2 != 0) {
    *param_6 = 1;
    uVar3 = FUN_145501df0(lVar2);
  }
  return uVar3;
}



// FUNCTION 1452a0410 FUN_1452a0410 body=482 status=ok
// SIG undefined FUN_1452a0410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a0410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,int *param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 uVar10;
  ulonglong uVar8;
  
  uVar10 = 0x1452a042b;
  uVar6 = 0;
  local_res18[0] = param_3;
  if (param_1 == 0) {
LAB_1452a04f7:
    iVar1 = FUN_144ed29a0();
    uVar4 = uVar6;
    uVar8 = uVar6;
    uVar9 = uVar6;
    uVar2 = uVar6;
    if (0 < iVar1) {
      do {
        local_res8 = local_res18[0];
        uVar2 = uVar9;
        if ((uVar4 == 0) && (uVar4 = FUN_144ba6d80(), uVar4 == 0)) {
          FUN_144ba24f0(0x2c,0x79,6,"crypto\\store\\loader_file.c",0x24a,uVar10);
          break;
        }
        puVar5 = (undefined4 *)FUN_144ed29d0(uVar8);
        if (((((*(byte *)(puVar5 + 2) & 1) == 0) &&
             (iVar1 = FUN_144ba6870(uVar4,*puVar5), iVar1 != 0)) &&
            (lVar3 = FUN_144ed2ce0(uVar4), lVar3 != 0)) &&
           ((*(code **)(lVar3 + 0x70) != (code *)0x0 &&
            (iVar1 = (**(code **)(lVar3 + 0x70))(uVar4,&local_res8,param_4), iVar1 != 0)))) {
          uVar2 = uVar4;
          if (uVar9 != 0) {
            FUN_144ba6e60(uVar4);
            uVar2 = uVar9;
          }
          *param_6 = *param_6 + 1;
          uVar4 = uVar6;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        iVar1 = FUN_144ed29a0();
        uVar9 = uVar2;
      } while ((int)uVar7 < iVar1);
    }
    FUN_144ba6e60(uVar4);
    if (*param_6 != 1) goto LAB_1452a05d6;
  }
  else {
    iVar1 = FUN_144ee9c10(param_1,"PARAMETERS");
    if (iVar1 == 0) {
      return 0;
    }
    *param_6 = 1;
    if (iVar1 < 1) goto LAB_1452a04f7;
    uVar2 = FUN_144ba6d80();
    if (uVar2 == 0) {
      FUN_144ba24f0(0x2c,0x79,6,"crypto\\store\\loader_file.c",0x238,uVar10);
      return 0;
    }
    iVar1 = FUN_144ba6970(uVar2,param_1,iVar1);
    if (((iVar1 == 0) || (lVar3 = FUN_144ed2ce0(uVar2), lVar3 == 0)) ||
       ((*(code **)(lVar3 + 0x70) == (code *)0x0 ||
        (iVar1 = (**(code **)(lVar3 + 0x70))(uVar2,local_res18,param_4), iVar1 == 0))))
    goto LAB_1452a05d6;
  }
  lVar3 = FUN_145501d80(uVar2);
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_1452a05d6:
  FUN_144ba6e60(uVar2);
  return 0;
}



// FUNCTION 1452a0600 FUN_1452a0600 body=231 status=ok
// SIG undefined FUN_1452a0600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a0600(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res18 [2];
  
  bVar1 = true;
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(param_1,"TRUSTED CERTIFICATE");
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = strcmp(param_1,"X509 CERTIFICATE");
      if ((iVar2 != 0) && (iVar2 = strcmp(param_1,"CERTIFICATE"), iVar2 != 0)) {
        return 0;
      }
    }
    *param_6 = 1;
  }
  lVar3 = FUN_144bb5de0(0,local_res18,param_4);
  if ((lVar3 != 0) || ((bVar1 && (lVar3 = FUN_144bb5d50(0,local_res18,param_4), lVar3 != 0)))) {
    *param_6 = 1;
    lVar4 = FUN_145501e60(lVar3);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  FUN_144b47250(lVar3);
  return 0;
}



// FUNCTION 1452a06f0 FUN_1452a06f0 body=156 status=ok
// SIG undefined FUN_1452a06f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452a06f0(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(param_1,"X509 CRL");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar2 = FUN_144ee8230(0,local_res18,param_4);
  if (lVar2 != 0) {
    *param_6 = 1;
    lVar3 = FUN_145501ed0(lVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  FUN_144ee8210(lVar2);
  return 0;
}



// FUNCTION 1452a0790 FUN_1452a0790 body=960 status=ok
// SIG undefined FUN_1452a0790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a0790(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char **ppcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_11b8 [32];
  undefined4 local_1198;
  char *local_1188;
  uint local_1180 [6];
  undefined1 local_1168 [6];
  ushort local_1162;
  undefined1 local_1138 [256];
  char local_1038 [4095];
  undefined1 local_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1452a07a6;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_11b8;
  local_1180[0] = local_1180[0] & 0xfffffffe;
  pcVar12 = (char *)0x1;
  local_1188 = param_2;
  iVar2 = _strnicmp(param_2,"file:",5);
  pcVar11 = (char *)0x0;
  if (iVar2 == 0) {
    pcVar8 = param_2 + 5;
    iVar2 = strncmp(pcVar8,"//",2);
    if (iVar2 == 0) {
      pcVar8 = param_2 + 7;
      pcVar12 = (char *)0x0;
      iVar2 = _strnicmp(pcVar8,"localhost/",10);
      if (iVar2 == 0) {
        pcVar8 = param_2 + 0x10;
        pcVar12 = pcVar11;
      }
      else if (*pcVar8 != '/') {
        local_1198 = 0x33d;
        FUN_144ba24f0(0x2c,0x78,0x6f,"crypto\\store\\loader_file.c");
        goto LAB_1452a0b40;
      }
    }
    local_1180[(longlong)pcVar12 * 4] = local_1180[(longlong)pcVar12 * 4] | 1;
    if ((((*pcVar8 == '/') && (pcVar8[2] == ':')) && (pcVar8[3] == '/')) &&
       (cVar1 = FUN_144ecfdf0((int)pcVar8[1]), (byte)(cVar1 + 0x9fU) < 0x1a)) {
      pcVar8 = pcVar8 + 1;
      local_1180[(longlong)pcVar12 * 4] = local_1180[(longlong)pcVar12 * 4] & 0xfffffffe;
    }
    *(char **)(local_1180 + (longlong)pcVar12 * 4 + -2) = pcVar8;
    pcVar12 = pcVar12 + 1;
  }
  ppcVar9 = &local_1188;
  pcVar8 = pcVar11;
  do {
    if (pcVar12 <= pcVar11) {
      pcVar10 = pcVar8;
      if (pcVar8 == (char *)0x0) goto LAB_1452a0b40;
      break;
    }
    if ((((ulonglong)ppcVar9[1] & 1) != 0) && (**ppcVar9 != '/')) {
      local_1198 = 0x35a;
      FUN_144ba24f0(0x2c,0x78,0x6c,"crypto\\store\\loader_file.c");
      FUN_144ba2bd0(1,*(undefined8 *)(local_1180 + (longlong)pcVar11 * 4 + -2));
      goto LAB_1452a0b40;
    }
    pcVar10 = *ppcVar9;
    iVar2 = _stat64i32(pcVar10,local_1168);
    if (iVar2 < 0) {
      piVar3 = _errno();
      local_1198 = 0x360;
      FUN_144ba24f0(2,0x16,*piVar3,"crypto\\store\\loader_file.c");
      FUN_144ba2bd0(1,pcVar10);
      pcVar10 = pcVar8;
    }
    pcVar11 = pcVar11 + 1;
    ppcVar9 = ppcVar9 + 2;
    pcVar8 = pcVar10;
  } while (pcVar10 == (char *)0x0);
  FUN_144ba26f0();
  puVar4 = (undefined4 *)FUN_144ea6670(0x50,"crypto\\store\\loader_file.c",0x36d);
  if (puVar4 == (undefined4 *)0x0) {
    local_1198 = 0x36f;
    FUN_144ba24f0(0x2c,0x78,0x41,"crypto\\store\\loader_file.c");
    goto LAB_1452a0b40;
  }
  if ((local_1162 & 0xf000) == 0x4000) {
    lVar5 = FUN_144ea6dc0(param_2,"crypto\\store\\loader_file.c",0x379);
    *(longlong *)(puVar4 + 8) = lVar5;
    *puVar4 = 2;
    if (lVar5 != 0) {
      uVar6 = FUN_144ec6b20(puVar4 + 4,pcVar10);
      *(undefined8 *)(puVar4 + 0xe) = uVar6;
      piVar3 = _errno();
      iVar2 = *piVar3;
      puVar4[0x10] = iVar2;
      if (*(longlong *)(puVar4 + 0xe) != 0) goto LAB_1452a0b40;
      if (iVar2 == 0) {
        puVar4[6] = 1;
        goto LAB_1452a0b40;
      }
      local_1198 = 900;
      FUN_144ba24f0(0x2c,0x78,2,"crypto\\store\\loader_file.c");
      piVar3 = _errno();
      *piVar3 = puVar4[0x10];
      piVar3 = _errno();
      iVar2 = FUN_144ea6ec0(*piVar3,local_1138,0x100);
      if (iVar2 != 0) {
        FUN_144ba2bd0(1,local_1138);
      }
    }
  }
  else {
    memset(local_1038,0,0x1000);
    uVar6 = FUN_144ea8510();
    lVar5 = FUN_144b9e650(uVar6);
    if (lVar5 != 0) {
      lVar7 = FUN_144ec7480(pcVar10,&DAT_149ecafe0);
      *(longlong *)(puVar4 + 4) = lVar7;
      if (lVar7 != 0) {
        uVar6 = FUN_144b9f280(lVar5,lVar7);
        *(undefined8 *)(puVar4 + 4) = uVar6;
        iVar2 = FUN_144b9efc0(uVar6,0x1d,0xfff,local_1038);
        if (0 < iVar2) {
          local_39 = 0;
          pcVar12 = strstr(local_1038,"-----BEGIN ");
          if (pcVar12 != (char *)0x0) {
            *puVar4 = 1;
          }
        }
        goto LAB_1452a0b40;
      }
    }
    FUN_144b9f360(lVar5);
  }
  FUN_1452a0e60(puVar4);
LAB_1452a0b40:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_11b8);
}



// FUNCTION 1452a0b70 FUN_1452a0b70 body=100 status=ok
// SIG undefined FUN_1452a0b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a0b70(longlong param_1,int param_2,undefined8 *param_3)

{
  if (param_2 == 1) {
    if (*(int *)*param_3 != 0) {
      if (*(int *)*param_3 != 1) {
        FUN_144ba24f0(0x2c,0x81,7,"crypto\\store\\loader_file.c",0x3b6);
        return 0;
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
      return 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  return 1;
}



// FUNCTION 1452a0bf0 FUN_1452a0bf0 body=170 status=ok
// SIG undefined FUN_1452a0bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a0bf0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452a0c00;
  iVar1 = FUN_145502020(param_2);
  if (iVar1 == 1) {
    if (param_1 == (int *)0x0) {
      return 1;
    }
    if (*param_1 == 2) {
      uVar4 = FUN_145502030(param_2);
      uVar2 = FUN_144bb5540(uVar4);
      FUN_144ec7760(param_1 + 10,9,"%08lx",uVar2);
      return 1;
    }
    uVar3 = 0x3d8;
    uVar2 = 0x77;
  }
  else {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar3 = 0x3e4;
    uVar2 = 0x78;
  }
  FUN_144ba24f0(0x2c,0x8a,uVar2,"crypto\\store\\loader_file.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 1452a0ca0 FUN_1452a0ca0 body=347 status=ok
// SIG undefined FUN_1452a0ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452a0ca0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452a0cc0;
  lVar2 = FUN_145502150();
  if (lVar2 == 0) {
    FUN_144ba24f0(0x2c,0x76,0x41,"crypto\\store\\loader_file.c",0x36,uVar6);
    return 0;
  }
  if (param_1 != 0) {
    FUN_1455027a0(lVar2,param_1);
  }
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_145502580(lVar2,param_5);
  lVar3 = FUN_145502410(lVar2,"pass phrase",param_4);
  if (lVar3 == 0) {
    uVar5 = 0x40;
    uVar4 = 0x41;
  }
  else {
    iVar1 = FUN_1455022d0(lVar2,lVar3,2,param_2,0,CONCAT44(uVar4,param_3 + -1));
    if (iVar1 == 0) {
      uVar5 = 0x44;
      uVar4 = 0x28;
    }
    else {
      iVar1 = FUN_1455025e0(lVar2);
      if (iVar1 == -2) {
        uVar5 = 0x4a;
        uVar4 = 0x6d;
      }
      else {
        if (iVar1 != -1) goto LAB_1452a0dc0;
        uVar5 = 0x4e;
        uVar4 = 0x28;
      }
    }
  }
  FUN_144ba24f0(0x2c,0x76,uVar4,"crypto\\store\\loader_file.c",uVar5);
  param_2 = 0;
LAB_1452a0dc0:
  FUN_144ea6530(lVar3,"crypto\\store\\loader_file.c",0x56);
  FUN_145502260(lVar2);
  return param_2;
}



// FUNCTION 1452a0e00 FUN_1452a0e00 body=90 status=ok
// SIG undefined FUN_1452a0e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1452a0e00(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)FUN_1452a0ca0(*param_4,param_1,(longlong)param_2,param_4[2],param_4[1]);
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    return uVar2 & 0x7fffffff;
  }
  return 0;
}



// FUNCTION 1452a0e60 FUN_1452a0e60 body=109 status=ok
// SIG undefined FUN_1452a0e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a0e60(int *param_1)

{
  if (*param_1 == 2) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"crypto\\store\\loader_file.c",0x30d);
  }
  else if (*(longlong *)(param_1 + 6) != 0) {
    (**(code **)(*(longlong *)(param_1 + 6) + 0x18))(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_144ea6530(param_1,"crypto\\store\\loader_file.c",0x315);
  return;
}



// FUNCTION 1452a0ed0 FUN_1452a0ed0 body=609 status=ok
// SIG undefined FUN_1452a0ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452a0ed0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,int *param_8)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *in_stack_ffffffffffffff78;
  undefined4 uVar9;
  int local_68 [2];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452a0ef4;
  puVar7 = (undefined8 *)0x0;
  uVar6 = 0;
  local_48 = (undefined8 *)0x0;
  local_50 = 0;
  do {
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    local_60 = 0;
    plVar3 = (longlong *)FUN_144ea6670(0x38,"crypto\\store\\loader_file.c",0x40b);
    if (plVar3 == (longlong *)0x0) {
      in_stack_ffffffffffffff78 = (longlong *)CONCAT44(uVar9,0x40f);
      FUN_144ba24f0(0x2c,0x7c,0x41,"crypto\\store\\loader_file.c",in_stack_ffffffffffffff78);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      *param_8 = 0;
      uVar8 = uVar4;
      do {
        lVar1 = *(longlong *)((longlong)&PTR_PTR_14c7320f8 + uVar8);
        local_68[0] = 0;
        local_58 = 0;
        in_stack_ffffffffffffff78 = &local_58;
        uVar5 = (**(code **)(lVar1 + 8))
                          (param_2,param_3,param_4,param_5,in_stack_ffffffffffffff78,local_68,
                           param_6,param_7);
        if (0 < local_68[0]) {
          plVar3[*param_8] = lVar1;
          if (local_60 != 0) {
            (**(code **)(lVar1 + 0x18))(&local_60);
          }
          *param_8 = *param_8 + local_68[0];
          local_60 = local_58;
          if (*param_8 < 2) {
            if (uVar4 != 0) goto LAB_1452a104b;
          }
          else {
            FUN_145501f50(uVar4);
            FUN_145501f50(uVar5);
            if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
              (**(code **)(lVar1 + 0x18))(&local_60);
            }
            local_60 = 0;
            uVar5 = 0;
          }
          uVar4 = uVar5;
        }
LAB_1452a104b:
        uVar8 = uVar8 + 8;
      } while (uVar8 < 0x38);
      if ((*param_8 == 1) && (*(int *)(*plVar3 + 0x20) != 0)) {
        *(longlong *)(param_1 + 0x18) = *plVar3;
        *(longlong *)(param_1 + 0x20) = local_60;
      }
      FUN_144ea6530(plVar3,"crypto\\store\\loader_file.c",0x439);
      uVar6 = local_50;
      puVar7 = local_48;
    }
    FUN_144ea6530(uVar6,"crypto\\store\\loader_file.c",0x43d);
    FUN_144ea7070(puVar7);
    if (uVar4 == 0) {
      return 0;
    }
    iVar2 = FUN_145501f40(uVar4);
    if (iVar2 != -1) {
      FUN_144ba26f0();
      return uVar4;
    }
    uVar6 = FUN_145502140(uVar4);
    local_50 = uVar6;
    puVar7 = (undefined8 *)FUN_145502130(uVar4);
    param_4 = puVar7[1];
    param_5 = *puVar7;
    local_48 = puVar7;
    FUN_144ea6530(uVar4,"crypto\\store\\loader_file.c",0x447);
    param_2 = uVar6;
  } while( true );
}



// FUNCTION 1452a1140 FUN_1452a1140 body=391 status=ok
// SIG undefined FUN_1452a1140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452a1140(longlong param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  
  uVar11 = 0x1452a1160;
  pcVar9 = *(char **)(param_1 + 0x20);
  uVar8 = 0;
  pcVar10 = pcVar9;
  if (*pcVar9 != '\0') {
    uVar2 = 0;
    do {
      if (0x7fffffff < uVar2) break;
      pcVar10 = pcVar10 + 1;
      uVar2 = uVar2 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = pcVar9 + ((uVar2 & 0x7fffffff) - 1);
  }
  pwVar7 = L"/Disabled";
  uVar2 = 0;
  if (*pcVar10 == '\\' || *pcVar10 == '/') {
    pwVar7 = L"";
  }
  cVar1 = *pcVar9;
  for (; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
  }
  cVar1 = (char)*pwVar7;
  pwVar5 = pwVar7;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    cVar1 = *(char *)pwVar5;
  }
  cVar1 = *param_2;
  pcVar9 = param_2;
  for (; (cVar1 != '\0' && (uVar8 < 0x80000000)); uVar8 = uVar8 + 1) {
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
  }
  lVar6 = (longlong)(int)((uVar2 & 0x7fffffff) + 1 + (uVar8 & 0x7fffffff) + (uVar3 & 0x7fffffff));
  lVar4 = FUN_144ea6670(lVar6,"crypto\\store\\loader_file.c",0x4b7);
  *param_3 = lVar4;
  if (lVar4 != 0) {
    FUN_144ea6900(lVar4,*(undefined8 *)(param_1 + 0x20),lVar6);
    FUN_144ea6900(*param_3,pwVar7,lVar6);
    FUN_144ea6900(*param_3,param_2,lVar6);
  }
  else {
    FUN_144ba24f0(0x2c,0x7e,0x41,"crypto\\store\\loader_file.c",0x4b9,uVar11);
  }
  return lVar4 != 0;
}



// FUNCTION 1452a12d0 FUN_1452a12d0 body=215 status=ok
// SIG undefined FUN_1452a12d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452a12d0(longlong param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return true;
  }
  if (((((*(uint *)(param_1 + 0x48) & 0xfffffffa) == 0) && (*(uint *)(param_1 + 0x48) != 1)) &&
      (iVar2 = _strnicmp(param_2,(char *)(param_1 + 0x28),8), iVar2 == 0)) && (param_2[8] == '.')) {
    pcVar3 = param_2 + 9;
    if (*pcVar3 == 'r') {
      pcVar3 = param_2 + 10;
      if ((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x48) != 5)) {
        return false;
      }
    }
    else if (*(int *)(param_1 + 0x48) == 5) {
      return false;
    }
    iVar2 = FUN_144ecfdd0((int)*pcVar3,4);
    if (iVar2 != 0) {
      iVar2 = FUN_144ecfdd0((int)*pcVar3,4);
      while (iVar2 != 0) {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        iVar2 = FUN_144ecfdd0((int)*pcVar1,4);
      }
      return *pcVar3 == '\0';
    }
  }
  return false;
}



// FUNCTION 1452a13b0 FUN_1452a13b0 body=193 status=ok
// SIG undefined FUN_1452a13b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452a13b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0x1452a13ca;
  local_res8 = 0;
  puVar4 = &local_res8;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  lVar2 = FUN_1452a1480(param_5);
  if (lVar2 == 0) {
    iVar1 = FUN_1454ca560(puVar4,param_2,param_3,param_4,DAT_14c732130 & 0x2806);
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0xc);
    if ((*(byte *)(lVar2 + 0x10) & 2) == 0) {
      uVar3 = uVar3 & DAT_14c732130;
    }
    iVar1 = FUN_1454ca590(puVar4,param_2,param_3,param_4,uVar3,*(undefined4 *)(lVar2 + 4),
                          *(undefined4 *)(lVar2 + 8),uVar5);
  }
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1452a1480 FUN_1452a1480 body=137 status=ok
// SIG undefined FUN_1452a1480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a1480(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [6];
  ulonglong local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x1452a148a;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_14c7fc5e8 != 0) {
    iVar1 = FUN_144bac1a0(DAT_14c7fc5e8,local_28);
    if (-1 < iVar1) {
      FUN_144babc00(DAT_14c7fc5e8,iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
    }
  }
  local_38 = &LAB_1452a1640;
  FUN_144ea97c0(local_28,&DAT_149d22ed0,0x1b);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 1452a1520 FUN_1452a1520 body=151 status=ok
// SIG undefined FUN_1452a1520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a1520(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452a1535;
  lVar1 = FUN_1452a1650();
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0x81,0x41,"crypto\\asn1\\a_strnid.c",0xbe,uVar2);
    return 0;
  }
  if (-1 < param_2) {
    *(int *)(lVar1 + 4) = param_2;
  }
  if (-1 < param_3) {
    *(int *)(lVar1 + 8) = param_3;
  }
  if (param_4 != 0) {
    *(int *)(lVar1 + 0xc) = param_4;
  }
  if (param_5 != 0) {
    *(uint *)(lVar1 + 0x10) = param_5 | 1;
  }
  return 1;
}



// FUNCTION 1452a15c0 FUN_1452a15c0 body=57 status=ok
// SIG undefined FUN_1452a15c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a15c0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c7fc5e8;
  if (DAT_14c7fc5e8 != 0) {
    DAT_14c7fc5e8 = 0;
    FUN_144babe00(lVar1,FUN_1452a1600);
    return;
  }
  return;
}



// FUNCTION 1452a1600 FUN_1452a1600 body=46 status=ok
// SIG undefined FUN_1452a1600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a1600(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144ea6530(param_1,"crypto\\asn1\\a_strnid.c",0xda);
    return;
  }
  return;
}



// FUNCTION 1452a1650 FUN_1452a1650 body=322 status=ok
// SIG undefined FUN_1452a1650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1452a1650(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1452a165c;
  if (DAT_14c7fc5e8 == 0) {
    DAT_14c7fc5e8 = FUN_144babc60(&LAB_1452a1630);
    if (DAT_14c7fc5e8 == 0) {
      return (undefined4 *)0x0;
    }
  }
  puVar2 = (undefined4 *)FUN_1452a1480(param_1);
  if ((puVar2 == (undefined4 *)0x0) || (puVar3 = puVar2, (*(byte *)(puVar2 + 4) & 1) == 0)) {
    puVar3 = (undefined4 *)FUN_144ea6670(0x14,"crypto\\asn1\\a_strnid.c",0x9f);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_144ba24f0(0xd,0x8a,0x41,"crypto\\asn1\\a_strnid.c",0xa0,uVar4);
      return (undefined4 *)0x0;
    }
    iVar1 = FUN_144bac1c0(DAT_14c7fc5e8,puVar3);
    if (iVar1 == 0) {
      FUN_144ea6530(puVar3,"crypto\\asn1\\a_strnid.c",0xa4);
      return (undefined4 *)0x0;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3[4] = puVar2[4] | 1;
      return puVar3;
    }
    *puVar3 = param_1;
    *(undefined8 *)(puVar3 + 1) = 0xffffffffffffffff;
    puVar3[4] = 1;
  }
  return puVar3;
}



// FUNCTION 1452a17a0 FUN_1452a17a0 body=88 status=ok
// SIG undefined FUN_1452a17a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a17a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_res18 [4];
  undefined8 uVar2;
  
  uVar2 = 0x1452a17ac;
  local_res18[0] = 0;
  uVar1 = FUN_1452a1830(param_1,param_2,0,local_res18);
  if (local_res18[0] != 0) {
    FUN_144ba24f0(0xd,0xb2,local_res18[0],"crypto\\asn1\\asn1_gen.c",0x5e,uVar2);
  }
  return uVar1;
}



// FUNCTION 1452a1800 FUN_1452a1800 body=48 status=ok
// SIG undefined FUN_1452a1800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a1800(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  FUN_144ba1dc0(param_1,0x7c,1,FUN_1452a2820,param_2);
  return;
}



// FUNCTION 1452a1830 FUN_1452a1830 body=764 status=ok
// SIG undefined FUN_1452a1830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452a1830(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 local_228 [2];
  undefined1 *local_220;
  void *local_218;
  void *local_210;
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  undefined1 *local_200;
  undefined8 local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1d0 [96];
  int local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452a184d;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  puVar7 = (undefined1 *)0x0;
  local_1f8 = 0xffffffffffffffff;
  local_218 = (void *)0x0;
  local_228[0] = 0;
  local_1ec = 1;
  local_238 = &local_1f8;
  local_50 = 0;
  iVar1 = FUN_144ba1dc0(param_1,0x2c,1,FUN_1452a1c20);
  if (iVar1 != 0) {
    *(undefined4 *)param_4 = 0xc2;
    goto LAB_1452a1b1d;
  }
  if (local_1f0 - 0x10U < 2) {
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0xc0;
      goto LAB_1452a1b1d;
    }
    if (0x31 < param_3) {
      *(undefined4 *)param_4 = 0xb5;
      goto LAB_1452a1b1d;
    }
    local_238 = param_4;
    lVar4 = FUN_1452a2170(local_1f0,local_1e8,param_2,param_3);
  }
  else {
    lVar4 = FUN_1452a22e0(local_1e8,local_1ec,local_1f0);
  }
  if ((lVar4 == 0) || (((int)local_1f8 == -1 && (local_50 == 0)))) goto LAB_1452a1b1d;
  iVar2 = FUN_144efe7d0(lVar4,&local_218);
  FUN_144efe790(lVar4);
  local_210 = local_218;
  puVar8 = puVar7;
  iVar1 = iVar2;
  if ((int)local_1f8 == -1) {
LAB_1452a19cf:
    puVar6 = (undefined4 *)((longlong)&local_1f8 + (longlong)local_50 * 0x14 + 4);
    puVar5 = puVar7;
    if (0 < local_50) {
      do {
        puVar6[4] = iVar1 + puVar6[3];
        iVar1 = FUN_144f041d0(0,iVar1 + puVar6[3],*puVar6);
        uVar3 = (int)puVar5 + 1;
        puVar6 = puVar6 + -5;
        puVar5 = (undefined1 *)(ulonglong)uVar3;
      } while ((int)uVar3 < local_50);
    }
    puVar5 = (undefined1 *)FUN_144ea64e0((longlong)iVar1,"crypto\\asn1\\asn1_gen.c",0xc3);
    if (puVar5 != (undefined1 *)0x0) {
      local_220 = puVar5;
      if (0 < local_50) {
        puVar6 = local_1d0;
        do {
          local_238 = (undefined8 *)CONCAT44(local_238._4_4_,puVar6[-3]);
          FUN_144f04080(&local_220,puVar6[-2],*puVar6,puVar6[-4]);
          if (puVar6[-1] != 0) {
            *local_220 = 0;
            local_220 = local_220 + 1;
          }
          uVar3 = (int)puVar7 + 1;
          puVar7 = (undefined1 *)(ulonglong)uVar3;
          puVar6 = puVar6 + 5;
        } while ((int)uVar3 < local_50);
      }
      if ((int)local_1f8 != -1) {
        if ((local_1f8._4_4_ == 0) && ((int)local_1f8 - 0x10U < 2)) {
          puVar8 = &DAT_00000020;
        }
        local_238 = (undefined8 *)CONCAT44(local_238._4_4_,local_1f8._4_4_);
        FUN_144f04080(&local_220,puVar8,local_228[0]);
      }
      memcpy(local_220,local_210,(longlong)iVar2);
      local_200 = puVar5;
      FUN_144efe7b0(0,&local_200,iVar1);
    }
  }
  else {
    local_238 = (undefined8 *)CONCAT44(local_238._4_4_,iVar2);
    uVar3 = FUN_144f03ea0(&local_210,local_228,local_204,local_208);
    puVar5 = puVar7;
    if (-1 < (char)uVar3) {
      iVar2 = iVar2 + ((int)local_218 - (int)local_210);
      if ((uVar3 & 1) == 0) {
        iVar1 = FUN_144f041d0(0,local_228[0],local_1f8 & 0xffffffff);
        puVar8 = (undefined1 *)(ulonglong)(uVar3 & 0x20);
      }
      else {
        local_228[0] = 0;
        iVar1 = FUN_144f041d0(0,0,local_1f8 & 0xffffffff);
        puVar8 = (undefined1 *)0x2;
      }
      goto LAB_1452a19cf;
    }
  }
  FUN_144ea6530(local_218,"crypto\\asn1\\asn1_gen.c",0xe9);
  FUN_144ea6530(puVar5,"crypto\\asn1\\asn1_gen.c",0xea);
LAB_1452a1b1d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
}



// FUNCTION 1452a1b40 FUN_1452a1b40 body=224 status=ok
// SIG undefined FUN_1452a1b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a1b40(char *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  char *local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x1452a1b55;
  if (param_1 != (char *)0x0) {
    uVar1 = strtoul(param_1,&local_res8,10);
    if (((local_res8 == (char *)0x0) || (*local_res8 == '\0')) || (local_res8 == param_1 + param_2))
    {
      if (-1 < (int)uVar1) {
        iVar2 = FUN_1452a30a0(param_3,uVar1,1);
        if (iVar2 == 0) {
          FUN_144ba24f0(0xd,0xb4,0x41,"crypto\\asn1\\asn1_gen.c",0x2f7,uVar3);
          return 0;
        }
        return 1;
      }
      FUN_144ba24f0(0xd,0xb4,0xbb,"crypto\\asn1\\asn1_gen.c",0x2f3,uVar3);
    }
  }
  return 0;
}



// FUNCTION 1452a1c20 FUN_1452a1c20 body=811 status=ok
// SIG undefined FUN_1452a1c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a1c20(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char *_Str1;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1452a1c36;
  iVar5 = 0;
  _Str1 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar3 = 0;
  pcVar2 = param_1;
  if (0 < param_2) {
    do {
      if (*pcVar2 == ':') {
        _Str1 = pcVar2 + 1;
        iVar5 = ((int)param_1 - (int)_Str1) + param_2;
        param_2 = (int)pcVar2 - (int)param_1;
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  uVar1 = FUN_1452a2780(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    FUN_144ba24f0(0xd,0xb1,0xc2,"crypto\\asn1\\asn1_gen.c",0x10a,uVar7);
    FUN_144ba2bd0(2,&DAT_149d23608,param_1);
    return 0xffffffff;
  }
  if ((uVar1 >> 0x10 & 1) == 0) {
    param_3[2] = uVar1;
    *(char **)(param_3 + 4) = _Str1;
    if ((_Str1 == (char *)0x0) && (param_1[param_2] != '\0')) {
      FUN_144ba24f0(0xd,0xb1,0xbd,"crypto\\asn1\\asn1_gen.c",0x115,uVar7);
      return 0xffffffff;
    }
    return 0;
  }
  switch(uVar1) {
  case 0x10001:
    if (*param_3 != -1) {
      FUN_144ba24f0(0xd,0xb1,0xb5,"crypto\\asn1\\asn1_gen.c",0x120,uVar7);
      return 0xffffffff;
    }
    iVar5 = FUN_1452a2040(_Str1,iVar5,param_3,param_3 + 1);
    if (iVar5 != 0) {
      return 1;
    }
    return 0xffffffff;
  case 0x10002:
    iVar5 = FUN_1452a2040(_Str1,iVar5,local_res18,local_res8);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    uVar7 = 0;
    break;
  default:
    goto switchD_1452a1d5b_caseD_10003;
  case 0x10004:
    uVar4 = 0;
    uVar7 = 1;
    uVar6 = 1;
    local_res8[0] = 0;
    local_res18[0] = 3;
    goto LAB_1452a1dfc;
  case 0x10005:
    uVar4 = 0;
    uVar7 = 1;
    local_res8[0] = 0;
    local_res18[0] = 4;
    goto LAB_1452a1df7;
  case 0x10006:
    local_res8[0] = 0;
    uVar7 = 1;
    local_res18[0] = 0x10;
    break;
  case 0x10007:
    local_res8[0] = 0;
    uVar7 = 1;
    local_res18[0] = 0x11;
    break;
  case 0x10008:
    if (_Str1 == (char *)0x0) {
      uVar6 = 0x145;
    }
    else {
      iVar5 = strncmp(_Str1,"ASCII",5);
      if (iVar5 == 0) {
        param_3[3] = 1;
        return 1;
      }
      iVar5 = strncmp(_Str1,"UTF8",4);
      if (iVar5 == 0) {
        param_3[3] = 2;
        return 1;
      }
      iVar5 = strncmp(_Str1,"HEX",3);
      if (iVar5 == 0) {
        param_3[3] = 3;
        return 1;
      }
      iVar5 = strncmp(_Str1,"BITLIST",7);
      if (iVar5 == 0) {
        param_3[3] = 4;
        return 1;
      }
      uVar6 = 0x151;
    }
    FUN_144ba24f0(0xd,0xb1,0xa0,"crypto\\asn1\\asn1_gen.c",uVar6,uVar7);
    return 0xffffffff;
  }
  uVar4 = 1;
LAB_1452a1df7:
  uVar6 = 0;
LAB_1452a1dfc:
  iVar5 = FUN_1452a1f70(param_3,local_res18[0],local_res8[0],uVar4,uVar6,uVar7);
  if (iVar5 == 0) {
    return 0xffffffff;
  }
switchD_1452a1d5b_caseD_10003:
  return 1;
}



// FUNCTION 1452a1f70 FUN_1452a1f70 body=208 status=ok
// SIG undefined FUN_1452a1f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a1f70(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != -1) && (param_6 == 0)) {
    FUN_144ba24f0(0xd,0xb0,0xb3,"crypto\\asn1\\asn1_gen.c",0x1d8,0x1452a1f7c);
    return 0;
  }
  iVar2 = param_1[0x6a];
  lVar3 = (longlong)iVar2;
  if (iVar2 == 0x14) {
    FUN_144ba24f0(0xd,0xb0,0xae,"crypto\\asn1\\asn1_gen.c",0x1dd,0x1452a1f7c);
    return 0;
  }
  param_1[0x6a] = iVar2 + 1;
  if (iVar1 == -1) {
    param_1[lVar3 * 5 + 6] = param_2;
    param_1[lVar3 * 5 + 7] = param_3;
  }
  else {
    param_1[lVar3 * 5 + 6] = iVar1;
    param_1[lVar3 * 5 + 7] = param_1[1];
    param_1[0] = -1;
    param_1[1] = -1;
  }
  param_1[lVar3 * 5 + 9] = param_5;
  param_1[lVar3 * 5 + 8] = param_4;
  return 1;
}



// FUNCTION 1452a2040 FUN_1452a2040 body=294 status=ok
// SIG undefined FUN_1452a2040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452a2040(char *param_1,int param_2,ulong *param_3,undefined4 *param_4)

{
  ulong uVar1;
  char local_res8 [8];
  char *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452a205b;
  if ((param_1 == (char *)0x0) ||
     (((uVar1 = strtoul(param_1,&local_18,10), local_18 != (char *)0x0 && (*local_18 != '\0')) &&
      (param_1 + param_2 < local_18)))) {
    return 0;
  }
  if ((int)uVar1 < 0) {
    FUN_144ba24f0(0xd,0xb6,0xbb,"crypto\\asn1\\asn1_gen.c",0x168);
    return 0;
  }
  *param_3 = uVar1;
  if ((local_18 != (char *)0x0) && (param_2 + ((int)param_1 - (int)local_18) != 0)) {
    local_res8[0] = *local_18;
    if (local_res8[0] == 'A') {
      *param_4 = 0x40;
      return 1;
    }
    if (local_res8[0] != 'C') {
      if (local_res8[0] == 'P') {
        *param_4 = 0xc0;
        return 1;
      }
      if (local_res8[0] == 'U') {
        *param_4 = 0;
        return 1;
      }
      local_res8[1] = 0;
      FUN_144ba24f0(0xd,0xb6,0xba,"crypto\\asn1\\asn1_gen.c",0x187);
      FUN_144ba2bd0(2,"Char=",local_res8);
      return 0;
    }
  }
  *param_4 = 0x80;
  return 1;
}


