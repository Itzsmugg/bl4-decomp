// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ed0f90 FUN_144ed0f90 body=613 status=ok
// SIG undefined FUN_144ed0f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ed0f90(undefined8 *param_1,longlong *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Dst;
  char *pcVar4;
  size_t _Size;
  undefined1 local_58 [16];
  undefined4 local_48;
  int local_44;
  char *local_40;
  undefined4 local_38;
  
  _Size = (size_t)param_3;
  if ((((param_3 < 1) || (param_2 == (longlong *)0x0)) ||
      (pcVar4 = (char *)*param_2, pcVar4 == (char *)0x0)) || (pcVar4[param_3 + -1] < '\0')) {
    FUN_144ba24f0(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0xfe);
    return (undefined8 *)0x0;
  }
  iVar2 = 0;
  local_48 = 0;
  local_38 = 0;
  local_44 = param_3;
  local_40 = pcVar4;
  iVar1 = FUN_144ea8fa0(local_58);
  if (iVar1 == 0) {
    if (0 < param_3) {
      do {
        if ((*pcVar4 == -0x80) && ((iVar2 == 0 || (-1 < pcVar4[-1])))) {
          FUN_144ba24f0(0xd,0xc4,0xd8,"crypto\\asn1\\a_object.c",0x11c);
          goto LAB_144ed1148;
        }
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (iVar2 < param_3);
    }
    if ((((param_1 == (undefined8 *)0x0) ||
         (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0)) ||
        ((*(byte *)(puVar3 + 4) & 1) == 0)) &&
       (puVar3 = (undefined8 *)FUN_144ed0800(), puVar3 == (undefined8 *)0x0)) {
LAB_144ed1148:
      puVar3 = (undefined8 *)0x0;
    }
    else {
      _Src = (void *)*param_2;
      _Dst = (void *)puVar3[3];
      puVar3[3] = 0;
      if ((_Dst == (void *)0x0) || (*(int *)((longlong)puVar3 + 0x14) < param_3)) {
        *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
        FUN_144ea6530(_Dst,"crypto\\asn1\\a_object.c",0x130);
        _Dst = (void *)FUN_144ea64e0(_Size,"crypto\\asn1\\a_object.c",0x131);
        if (_Dst == (void *)0x0) {
          FUN_144ba24f0(0xd,0xc4,0x41,"crypto\\asn1\\a_object.c",0x14c);
          if ((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 != puVar3)) {
            FUN_144ed0860(puVar3);
          }
          return (undefined8 *)0x0;
        }
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | 8;
      }
      memcpy(_Dst,_Src,_Size);
      if ((*(byte *)(puVar3 + 4) & 4) != 0) {
        FUN_144ea6530(*puVar3,"crypto\\asn1\\a_object.c",0x13b);
        FUN_144ea6530(puVar3[1],"crypto\\asn1\\a_object.c",0x13c);
        *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffb;
      }
      puVar3[3] = _Dst;
      *(int *)((longlong)puVar3 + 0x14) = param_3;
      *puVar3 = 0;
      puVar3[1] = 0;
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = puVar3;
      }
      *param_2 = (longlong)_Src + _Size;
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_144ea8d60(iVar1);
    if (param_1 != (undefined8 *)0x0) {
      FUN_144ed0860(*param_1);
      *param_1 = puVar3;
    }
    *param_2 = *param_2 + _Size;
  }
  return puVar3;
}



// FUNCTION 144ed1200 FUN_144ed1200 body=123 status=ok
// SIG undefined FUN_144ed1200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1200(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144efe930();
  if (lVar2 != 0) {
    iVar1 = FUN_144ef2c50(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      FUN_144ed0590(param_1,4,lVar2);
      return 1;
    }
    FUN_144efe950(lVar2);
  }
  return 0;
}



// FUNCTION 144ed1280 FUN_144ed1280 body=164 status=ok
// SIG undefined FUN_144ed1280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ed1280(int *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  if ((*param_1 == 4) && (*(longlong *)(param_1 + 2) != 0)) {
    _Src = (void *)FUN_144f03e90();
    iVar1 = FUN_144f03e70(*(undefined8 *)(param_1 + 2));
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    memcpy(param_2,_Src,(longlong)param_3);
    return iVar1;
  }
  FUN_144ba24f0(0xd,0x87,0x6d,"crypto\\asn1\\evp_asn1.c",0x24,0x144ed1295);
  return -1;
}



// FUNCTION 144ed1330 FUN_144ed1330 body=93 status=ok
// SIG undefined FUN_144ed1330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ed1330(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ed1340;
  local_30 = &local_28;
  local_18 = 0;
  local_24 = 4;
  local_res8[0] = param_1;
  local_38[0] = param_2;
  local_28 = param_4;
  local_20 = param_3;
  lVar1 = FUN_144ed06f0(&DAT_149bfb430,local_38,local_res8);
  return lVar1 != 0;
}



// FUNCTION 144ed1390 FUN_144ed1390 body=220 status=ok
// SIG undefined FUN_144ed1390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ed1390(int *param_1,undefined4 *param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined8 uVar3;
  
  uVar3 = 0x144ed13b0;
  puVar2 = (undefined4 *)0x0;
  iVar1 = -1;
  if ((*param_1 == 0x10) && (iVar1 = -1, *(longlong *)(param_1 + 2) != 0)) {
    puVar2 = (undefined4 *)FUN_144ed07c0(&DAT_149bfb430,param_1);
    if (puVar2 != (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar2;
      }
      iVar1 = FUN_144f03e70(*(undefined8 *)(puVar2 + 2));
      if (iVar1 < param_4) {
        param_4 = iVar1;
      }
      if (param_3 != (void *)0x0) {
        _Src = (void *)FUN_144f03e90(*(undefined8 *)(puVar2 + 2));
        memcpy(param_3,_Src,(longlong)param_4);
      }
      if (iVar1 != -1) goto LAB_144ed1440;
    }
  }
  FUN_144ba24f0(0xd,0x86,0x6d,"crypto\\asn1\\evp_asn1.c",0x6f,uVar3);
LAB_144ed1440:
  FUN_144eff330(puVar2,&DAT_149bfb430);
  return iVar1;
}



// FUNCTION 144ed1470 FUN_144ed1470 body=143 status=ok
// SIG undefined FUN_144ed1470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed1470(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *local_res10 [3];
  undefined4 local_108 [64];
  undefined8 uStack_8;
  
  uStack_8 = 0x144ed147a;
  local_res10[0] = local_108;
  local_108[0] = param_1;
  if (DAT_14c797438 != 0) {
    iVar1 = FUN_144bac1a0(DAT_14c797438,local_108);
    if (-1 < iVar1) {
      lVar2 = FUN_144babc00(DAT_14c797438,iVar1);
      return lVar2;
    }
  }
  plVar3 = (longlong *)FUN_144ea97c0(local_res10,&PTR_DAT_14c70e840,0x12,8,&LAB_144ed1a20);
  if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 144ed1500 FUN_144ed1500 body=47 status=ok
// SIG undefined FUN_144ed1500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    FUN_144ea6530(param_1,"crypto\\evp\\pmeth_lib.c",0xf0,param_4,0x144ed150f);
  }
  return;
}



// FUNCTION 144ed1530 FUN_144ed1530 body=26 status=ok
// SIG undefined FUN_144ed1530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1530(undefined8 param_1,undefined8 param_2)

{
  FUN_144ed1a30(param_1,param_2,0xffffffff);
  return;
}



// FUNCTION 144ed1550 FUN_144ed1550 body=27 status=ok
// SIG undefined FUN_144ed1550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1550(undefined4 param_1,undefined8 param_2)

{
  FUN_144ed1a30(0,param_2,param_1);
  return;
}



// FUNCTION 144ed1570 FUN_144ed1570 body=310 status=ok
// SIG undefined FUN_144ed1570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ed1570(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ed157c;
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    return (longlong *)0x0;
  }
  if ((param_1[1] != 0) && (iVar1 = FUN_144ec6850(), iVar1 == 0)) {
    FUN_144ba24f0(6,0x9c,0x26,"crypto\\evp\\pmeth_lib.c",0x105,uVar3);
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_144ea64e0(0x50,"crypto\\evp\\pmeth_lib.c",0x109);
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(6,0x9c,0x41,"crypto\\evp\\pmeth_lib.c",0x10b,uVar3);
    return (longlong *)0x0;
  }
  *plVar2 = *param_1;
  plVar2[1] = param_1[1];
  if (param_1[2] != 0) {
    FUN_144ba6e40();
  }
  plVar2[2] = param_1[2];
  if (param_1[3] != 0) {
    FUN_144ba6e40();
  }
  plVar2[3] = param_1[3];
  plVar2[5] = 0;
  plVar2[6] = 0;
  *(int *)(plVar2 + 4) = (int)param_1[4];
  iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
  if (iVar1 < 1) {
    *plVar2 = 0;
    FUN_144ed16b0(plVar2);
    return (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 144ed16b0 FUN_144ed16b0 body=95 status=ok
// SIG undefined FUN_144ed16b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed16b0(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    FUN_144ba6e60(param_1[2]);
    FUN_144ba6e60(param_1[3]);
    FUN_144ec6930(param_1[1]);
    FUN_144ea6530(param_1,"crypto\\evp\\pmeth_lib.c",0x16b);
  }
  return;
}



// FUNCTION 144ed1710 FUN_144ed1710 body=288 status=ok
// SIG undefined FUN_144ed1710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ed1710(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar1 = (int *)*param_1, piVar1 == (int *)0x0)) ||
     (*(code **)(piVar1 + 0x30) == (code *)0x0)) {
    FUN_144ba24f0(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x174);
    return -2;
  }
  if ((param_2 != -1) && (*piVar1 != param_2)) {
    return -1;
  }
  if (*(longlong *)(piVar1 + 0x3e) == 0) {
    if (*(uint *)(param_1 + 4) == 0) {
      FUN_144ba24f0(6,0x89,0x95,"crypto\\evp\\pmeth_lib.c",0x17f);
      return -1;
    }
    if ((param_3 != 0xffffffff) && ((param_3 & *(uint *)(param_1 + 4)) == 0)) {
      FUN_144ba24f0(6,0x89,0x94,"crypto\\evp\\pmeth_lib.c",0x184);
      return -1;
    }
  }
  iVar2 = (**(code **)(piVar1 + 0x30))(param_1,param_4,param_5,param_6);
  if (iVar2 == -2) {
    FUN_144ba24f0(6,0x89,0x93,"crypto\\evp\\pmeth_lib.c",0x18c);
  }
  return iVar2;
}



// FUNCTION 144ed1830 FUN_144ed1830 body=61 status=ok
// SIG undefined FUN_144ed1830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1830(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_3 + uVar2) != '\0');
  if (0x7fffffff < uVar2) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ed1866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  return uVar1;
}



// FUNCTION 144ed1870 FUN_144ed1870 body=129 status=ok
// SIG undefined FUN_144ed1870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ed1870(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_res20 [2];
  
  lVar2 = FUN_144ea6a80(param_3,local_res20);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,local_res20[0],lVar2);
  FUN_144ea6530(lVar2,"crypto\\evp\\pmeth_lib.c",0x1bb);
  return uVar1;
}



// FUNCTION 144ed1900 FUN_144ed1900 body=148 status=ok
// SIG undefined FUN_144ed1900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1900(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ed1915;
  if (param_4 != 0) {
    lVar1 = FUN_144baab30(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_144ed1710(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  FUN_144ba24f0(6,0xa8,0x98,"crypto\\evp\\pmeth_lib.c",0x1c5,uVar2);
  return 0;
}



// FUNCTION 144ed19a0 FUN_144ed19a0 body=9 status=ok
// SIG undefined FUN_144ed19a0(void)

void FUN_144ed19a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  return;
}



// FUNCTION 144ed19b0 FUN_144ed19b0 body=5 status=ok
// SIG undefined FUN_144ed19b0(void)

void FUN_144ed19b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 144ed19c0 FUN_144ed19c0 body=5 status=ok
// SIG undefined FUN_144ed19c0(void)

undefined8 FUN_144ed19c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144ed19d0 FUN_144ed19d0 body=5 status=ok
// SIG undefined FUN_144ed19d0(void)

undefined8 FUN_144ed19d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144ed19e0 FUN_144ed19e0 body=5 status=ok
// SIG undefined FUN_144ed19e0(void)

undefined8 FUN_144ed19e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144ed19f0 FUN_144ed19f0 body=46 status=ok
// SIG undefined FUN_144ed19f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed19f0(void)

{
  if (DAT_14c797438 != 0) {
    FUN_144babe00(DAT_14c797438,FUN_144ed1500);
    return;
  }
  return;
}



// FUNCTION 144ed1a30 FUN_144ed1a30 body=390 status=ok
// SIG undefined FUN_144ed1a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ed1a30(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 == -1) {
    if (param_1 == (int *)0x0) {
      return (longlong *)0x0;
    }
    param_3 = *param_1;
  }
  if ((param_2 == 0) &&
     ((param_1 == (int *)0x0 ||
      ((param_2 = *(longlong *)(param_1 + 8), param_2 == 0 &&
       (param_2 = *(longlong *)(param_1 + 6), param_2 == 0)))))) {
    param_2 = FUN_144ed4f70(param_3);
  }
  else {
    iVar1 = FUN_144ec6850(param_2);
    if (iVar1 == 0) {
      FUN_144ba24f0(6,0x9d,0x26,"crypto\\evp\\pmeth_lib.c",0x77);
      return (longlong *)0x0;
    }
  }
  if (param_2 == 0) {
    lVar2 = FUN_144ed1470(param_3);
  }
  else {
    lVar2 = FUN_144ed4f10(param_2,param_3);
  }
  if (lVar2 == 0) {
    FUN_144ec6930(param_2);
    FUN_144ba24f0(6,0x9d,0x9c,"crypto\\evp\\pmeth_lib.c",0x8c);
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_144ea6670(0x50,"crypto\\evp\\pmeth_lib.c");
    if (plVar3 == (longlong *)0x0) {
      FUN_144ec6930(param_2);
      FUN_144ba24f0(6,0x9d,0x41,"crypto\\evp\\pmeth_lib.c",0x95);
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3[1] = param_2;
      *plVar3 = lVar2;
      *(undefined4 *)(plVar3 + 4) = 0;
      plVar3[2] = (longlong)param_1;
      if (param_1 != (int *)0x0) {
        FUN_144ba6e40(param_1);
      }
      if ((*(code **)(lVar2 + 8) != (code *)0x0) &&
         (iVar1 = (**(code **)(lVar2 + 8))(plVar3), iVar1 < 1)) {
        *plVar3 = 0;
        FUN_144ed16b0(plVar3);
        plVar3 = (longlong *)0x0;
      }
    }
  }
  return plVar3;
}



// FUNCTION 144ed1bc0 FUN_144ed1bc0 body=99 status=ok
// SIG undefined FUN_144ed1bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1bc0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x144ed1bcc;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c797440,FUN_144ed1d30,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144ed1c30 FUN_144ed1c30 body=10 status=ok
// SIG undefined FUN_144ed1c30(void)

undefined8 FUN_144ed1c30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



// FUNCTION 144ed1c40 FUN_144ed1c40 body=89 status=ok
// SIG undefined FUN_144ed1c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1c40(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_144ba24f0(0x26,0xb9,0x92,"crypto\\engine\\tb_cipher.c",0x4a);
  return 0;
}



// FUNCTION 144ed1ca0 FUN_144ed1ca0 body=31 status=ok
// SIG undefined FUN_144ed1ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1ca0(undefined4 param_1)

{
  FUN_145291360(&DAT_14c797440,param_1);
  return;
}



// FUNCTION 144ed1cc0 FUN_144ed1cc0 body=99 status=ok
// SIG undefined FUN_144ed1cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1cc0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x38))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c797440,FUN_144ed1d30,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144ed1d30 FUN_144ed1d30 body=29 status=ok
// SIG undefined FUN_144ed1d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1d30(void)

{
  FUN_145291300(&DAT_14c797440);
  return;
}



// FUNCTION 144ed1d50 FUN_144ed1d50 body=99 status=ok
// SIG undefined FUN_144ed1d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1d50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x144ed1d5c;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c797448,FUN_144ed1ec0,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144ed1dc0 FUN_144ed1dc0 body=10 status=ok
// SIG undefined FUN_144ed1dc0(void)

undefined8 FUN_144ed1dc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



// FUNCTION 144ed1dd0 FUN_144ed1dd0 body=89 status=ok
// SIG undefined FUN_144ed1dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1dd0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_144ba24f0(0x26,0xba,0x93,"crypto\\engine\\tb_digest.c",0x4a);
  return 0;
}



// FUNCTION 144ed1e30 FUN_144ed1e30 body=31 status=ok
// SIG undefined FUN_144ed1e30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1e30(undefined4 param_1)

{
  FUN_145291360(&DAT_14c797448,param_1);
  return;
}



// FUNCTION 144ed1e50 FUN_144ed1e50 body=99 status=ok
// SIG undefined FUN_144ed1e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1e50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c797448,FUN_144ed1ec0,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144ed1ec0 FUN_144ed1ec0 body=29 status=ok
// SIG undefined FUN_144ed1ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed1ec0(void)

{
  FUN_145291300(&DAT_14c797448);
  return;
}



// FUNCTION 144ed1ee0 FUN_144ed1ee0 body=127 status=ok
// SIG undefined FUN_144ed1ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed1ee0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x48) == 0)) {
    FUN_144ba24f0(6,0x8d,0x96,"crypto\\evp\\pmeth_fn.c",0x28,0x144ed1eec);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    if (*(code **)(lVar1 + 0x40) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x40))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144ed1f60 FUN_144ed1f60 body=326 status=ok
// SIG undefined FUN_144ed1f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ed1f60(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x144ed1f7a;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x48) == 0)) {
    FUN_144ba24f0(6,0x8c,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x3a),0x144ed1f7a);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 8) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = FUN_144ba6830(param_1[2]);
      if (iVar2 == 0) {
        FUN_144ba24f0(6,0x8c,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x41),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        FUN_144ba24f0(6,0x8c,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x41),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_144ba24f0(6,0x8c,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x3e),0x144ed1f7a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144ed20b0 FUN_144ed20b0 body=127 status=ok
// SIG undefined FUN_144ed20b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed20b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x58) == 0)) {
    FUN_144ba24f0(6,0x8f,0x96,"crypto\\evp\\pmeth_fn.c",0x4a,0x144ed20bc);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    if (*(code **)(lVar1 + 0x50) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x50))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144ed2130 FUN_144ed2130 body=134 status=ok
// SIG undefined FUN_144ed2130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed2130(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if ((int)param_1[4] != 0x10) {
      FUN_144ba24f0(6,0x8e,0x97,"crypto\\evp\\pmeth_fn.c",0x60);
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000144ed2187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_144ba24f0(6,0x8e,0x96,"crypto\\evp\\pmeth_fn.c",0x5c);
  return 0xfffffffe;
}



// FUNCTION 144ed21c0 FUN_144ed21c0 body=133 status=ok
// SIG undefined FUN_144ed21c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed21c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x98) == 0)) {
    FUN_144ba24f0(6,0x8b,0x96,"crypto\\evp\\pmeth_fn.c",0x8d,0x144ed21cc);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x100;
    if (*(code **)(lVar1 + 0x90) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x90))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144ed2250 FUN_144ed2250 body=327 status=ok
// SIG undefined FUN_144ed2250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ed2250(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x144ed226a;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x98) == 0)) {
    FUN_144ba24f0(6,0x69,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0x9f),0x144ed226a);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x100) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = FUN_144ba6830(param_1[2]);
      if (iVar2 == 0) {
        FUN_144ba24f0(6,0x69,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa6),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        FUN_144ba24f0(6,0x69,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa6),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_144ba24f0(6,0x69,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xa3),0x144ed226a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144ed23a0 FUN_144ed23a0 body=133 status=ok
// SIG undefined FUN_144ed23a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed23a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xa8) == 0)) {
    FUN_144ba24f0(6,0x8a,0x96,"crypto\\evp\\pmeth_fn.c",0xaf,0x144ed23ac);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x200;
    if (*(code **)(lVar1 + 0xa0) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0xa0))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144ed2430 FUN_144ed2430 body=327 status=ok
// SIG undefined FUN_144ed2430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ed2430(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x144ed244a;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xa8) == 0)) {
    FUN_144ba24f0(6,0x68,0x96,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xc1),0x144ed244a);
    uVar4 = 0xfffffffe;
  }
  else if ((int)param_1[4] == 0x200) {
    if ((*(byte *)(lVar1 + 4) & 2) != 0) {
      iVar2 = FUN_144ba6830(param_1[2]);
      if (iVar2 == 0) {
        FUN_144ba24f0(6,0x68,0xa3,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,200),uVar4);
        return 0;
      }
      if (param_2 == 0) {
        *param_3 = (longlong)iVar2;
        return 1;
      }
      if (*param_3 < (ulonglong)(longlong)iVar2) {
        FUN_144ba24f0(6,0x68,0x9b,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,200),uVar4);
        return 0;
      }
    }
    uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_144ba24f0(6,0x68,0x97,"crypto\\evp\\pmeth_fn.c",CONCAT44(uVar3,0xc5),0x144ed244a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144ed2580 FUN_144ed2580 body=133 status=ok
// SIG undefined FUN_144ed2580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed2580(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xb8) == 0)) {
    FUN_144ba24f0(6,0x9a,0x96,"crypto\\evp\\pmeth_fn.c",0xd1,0x144ed258c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x400;
    if (*(code **)(lVar1 + 0xb0) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0xb0))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144ed2610 FUN_144ed2610 body=528 status=ok
// SIG undefined FUN_144ed2610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed2610(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ed2620;
  if ((((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
      ((*(longlong *)(lVar1 + 0xb8) == 0 &&
       ((*(longlong *)(lVar1 + 0x98) == 0 && (*(longlong *)(lVar1 + 0xa8) == 0)))))) ||
     (*(code **)(lVar1 + 0xc0) == (code *)0x0)) {
    FUN_144ba24f0(6,0x9b,0x96,"crypto\\evp\\pmeth_fn.c",0xe4,0x144ed2620);
    uVar3 = 0xfffffffe;
  }
  else {
    if ((((int)param_1[4] - 0x100U & 0xfffffcff) != 0) || ((int)param_1[4] == 0x300)) {
      FUN_144ba24f0(6,0x9b,0x97,"crypto\\evp\\pmeth_fn.c",0xeb,0x144ed2620);
      return 0xffffffff;
    }
    uVar3 = (**(code **)(lVar1 + 0xc0))(param_1,2,0,param_2);
    if (0 < (int)uVar3) {
      if ((int)uVar3 != 2) {
        if ((int *)param_1[2] == (int *)0x0) {
          FUN_144ba24f0(6,0x9b,0x9a,"crypto\\evp\\pmeth_fn.c",0xf8,uVar4);
          return 0xffffffff;
        }
        if (*(int *)param_1[2] != *param_2) {
          FUN_144ba24f0(6,0x9b,0x65,"crypto\\evp\\pmeth_fn.c",0xfd,uVar4);
          return 0xffffffff;
        }
        iVar2 = FUN_144ba6ff0(param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_144ba7030(param_1[2],param_2);
          if (iVar2 == 0) {
            FUN_144ba24f0(6,0x9b,0x99,"crypto\\evp\\pmeth_fn.c",0x10a,uVar4);
            return 0xffffffff;
          }
        }
        FUN_144ba6e60(param_1[3]);
        param_1[3] = (longlong)param_2;
        uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,2,1,param_2);
        if ((int)uVar4 < 1) {
          param_1[3] = 0;
          return uVar4;
        }
        FUN_144ba6e40(param_2);
      }
      return 1;
    }
  }
  return uVar3;
}



// FUNCTION 144ed2820 FUN_144ed2820 body=379 status=ok
// SIG undefined FUN_144ed2820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed2820(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ed2835;
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0xb8) == 0)) {
    FUN_144ba24f0(6,0x99,0x96,"crypto\\evp\\pmeth_fn.c",0x120,0x144ed2835);
    return 0xfffffffe;
  }
  if ((int)param_1[4] != 0x400) {
    FUN_144ba24f0(6,0x99,0x97,"crypto\\evp\\pmeth_fn.c",0x124,0x144ed2835);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar1 + 4) & 2) != 0) {
    iVar2 = FUN_144ba6830(param_1[2]);
    if (iVar2 == 0) {
      FUN_144ba24f0(6,0x99,0xa3,"crypto\\evp\\pmeth_fn.c",0x127,uVar3);
      return 0;
    }
    if (param_2 == 0) {
      *param_3 = (longlong)iVar2;
      return 1;
    }
    if (*param_3 < (ulonglong)(longlong)iVar2) {
      FUN_144ba24f0(6,0x99,0x9b,"crypto\\evp\\pmeth_fn.c",0x127,uVar3);
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144ed295d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 144ed29a0 FUN_144ed29a0 body=48 status=ok
// SIG undefined FUN_144ed29a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ed29a0(void)

{
  int iVar1;
  
  if (DAT_14c797450 != 0) {
    iVar1 = FUN_144babbf0();
    return iVar1 + 0x14;
  }
  return 0x14;
}



// FUNCTION 144ed29d0 FUN_144ed29d0 body=67 status=ok
// SIG undefined FUN_144ed29d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144ed29d0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 0x14) {
    return (&PTR_DAT_14c70e8d0)[param_1];
  }
  puVar1 = (undefined *)FUN_144babc00(DAT_14c797450,param_1 + -0x14);
  return puVar1;
}



// FUNCTION 144ed2a20 FUN_144ed2a20 body=251 status=ok
// SIG undefined FUN_144ed2a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed2a20(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *local_res8;
  undefined4 local_128 [70];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ed2a30;
  do {
    local_res8 = local_128;
    local_128[0] = param_2;
    if ((DAT_14c797450 == 0) || (iVar1 = FUN_144bac1a0(DAT_14c797450,local_128), iVar1 < 0)) {
      plVar3 = (longlong *)FUN_144ea97c0(&local_res8,&PTR_DAT_14c70e8d0,0x14,8,&LAB_144ed2d60);
      if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
        lVar2 = 0;
LAB_144ed2ad0:
        if (param_1 != (longlong *)0x0) {
          lVar4 = FUN_145298180(param_2);
          if (lVar4 == 0) {
            *param_1 = 0;
          }
          else {
            *param_1 = lVar4;
            lVar2 = FUN_145298050(lVar4,param_2);
          }
        }
        return lVar2;
      }
    }
    else {
      lVar2 = FUN_144babc00(DAT_14c797450,iVar1);
    }
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 1) == 0)) goto LAB_144ed2ad0;
    param_2 = *(undefined4 *)(lVar2 + 4);
  } while( true );
}



// FUNCTION 144ed2b20 FUN_144ed2b20 body=351 status=ok
// SIG undefined FUN_144ed2b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144ed2b20(undefined8 *param_1,char *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 local_res8;
  undefined *puVar6;
  
  puVar10 = (undefined *)0x0;
  if (param_3 == 0xffffffff) {
    cVar1 = *param_2;
    puVar4 = puVar10;
    pcVar3 = param_2;
    param_3 = 0;
    while ((cVar1 != '\0' && (param_3 = (uint)puVar4, param_3 < 0x80000000))) {
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
      cVar1 = *pcVar3;
      puVar4 = (undefined *)(ulonglong)param_3;
    }
    param_3 = param_3 & 0x7fffffff;
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined *)FUN_1452980b0(&local_res8,param_2,param_3,param_4,0x144ed2b31);
    if (puVar4 != (undefined *)0x0) {
      iVar2 = FUN_144ec6850(local_res8);
      if (iVar2 == 0) {
        puVar4 = puVar10;
      }
      FUN_144ee3a60(local_res8);
      *param_1 = local_res8;
      return puVar4;
    }
    *param_1 = 0;
  }
  iVar2 = 0x14;
  if (DAT_14c797450 != 0) {
    iVar2 = FUN_144babbf0();
    iVar2 = iVar2 + 0x14;
  }
  if (0 < iVar2) {
    lVar8 = (longlong)iVar2;
    do {
      iVar7 = iVar2 + -1;
      lVar8 = lVar8 + -1;
      puVar4 = puVar10;
      if (-1 < lVar8) {
        if (iVar7 < 0x14) {
          puVar4 = (&PTR_DAT_14c70e8d0)[lVar8];
        }
        else {
          puVar4 = (undefined *)FUN_144babc00(DAT_14c797450,iVar2 + -0x15);
        }
      }
      if ((puVar4[8] & 1) == 0) {
        pcVar3 = *(char **)(puVar4 + 0x10);
        cVar1 = *pcVar3;
        pcVar9 = pcVar3;
        puVar6 = puVar10;
        uVar5 = 0;
        while ((cVar1 != '\0' && (uVar5 = (uint)puVar6, uVar5 < 0x80000000))) {
          pcVar9 = pcVar9 + 1;
          uVar5 = uVar5 + 1;
          cVar1 = *pcVar9;
          puVar6 = (undefined *)(ulonglong)uVar5;
        }
        if (((uVar5 & 0x7fffffff) == param_3) &&
           (iVar2 = _strnicmp(pcVar3,param_2,(longlong)(int)param_3), iVar2 == 0)) {
          return puVar4;
        }
      }
      iVar2 = iVar7;
    } while (0 < iVar7);
  }
  return (undefined *)0x0;
}



// FUNCTION 144ed2c80 FUN_144ed2c80 body=81 status=ok
// SIG undefined FUN_144ed2c80(void)

undefined8
FUN_144ed2c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6)

{
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_6;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_6[1];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_6[2];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_6 + 6);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_6 + 4);
  }
  return 1;
}



// FUNCTION 144ed2ce0 FUN_144ed2ce0 body=5 status=ok
// SIG undefined FUN_144ed2ce0(void)

undefined8 FUN_144ed2ce0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144ed2cf0 FUN_144ed2cf0 body=99 status=ok
// SIG undefined FUN_144ed2cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed2cf0(longlong param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x10),"crypto\\asn1\\ameth_lib.c",0x122);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x18),"crypto\\asn1\\ameth_lib.c",0x123);
    FUN_144ea6530(param_1,"crypto\\asn1\\ameth_lib.c",0x124);
  }
  return;
}



// FUNCTION 144ed2d70 FUN_144ed2d70 body=24 status=ok
// SIG undefined FUN_144ed2d70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed2d70(void)

{
  FUN_145298db0(0);
  return;
}



// FUNCTION 144ed2d90 FUN_144ed2d90 body=4 status=ok
// SIG undefined FUN_144ed2d90(void)

undefined4 FUN_144ed2d90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// FUNCTION 144ed2da0 FUN_144ed2da0 body=4 status=ok
// SIG undefined FUN_144ed2da0(void)

void FUN_144ed2da0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | param_2;
  return;
}



// FUNCTION 144ed2db0 FUN_144ed2db0 body=6 status=ok
// SIG undefined FUN_144ed2db0(void)

void FUN_144ed2db0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & ~param_2;
  return;
}



// FUNCTION 144ed2dc0 FUN_144ed2dc0 body=22 status=ok
// SIG undefined FUN_144ed2dc0(void)

undefined4 FUN_144ed2dc0(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28);
  }
  return 0xffffffff;
}



// FUNCTION 144ed2de0 FUN_144ed2de0 body=112 status=ok
// SIG undefined FUN_144ed2de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ed2de0(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_145298db0(0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14527fe90(param_1);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x28) == (code *)0x0) {
        return plVar2;
      }
      iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3);
      if (iVar1 != 0) {
        return plVar2;
      }
    }
    FUN_144ed2e50(plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 144ed2e50 FUN_144ed2e50 body=184 status=ok
// SIG undefined FUN_144ed2e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed2e50(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 7;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 < 2) {
      if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
      FUN_144ec6930(param_1[1]);
      if (((longlong *)param_1[3] != (longlong *)0x0) &&
         (pcVar2 = *(code **)(*(longlong *)param_1[3] + 0x178), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      FUN_144ea6040(8,param_1,param_1 + 8);
      FUN_144e98660(param_1[9]);
      FUN_144efba20(param_1[3]);
      FUN_144efc7a0(param_1[4]);
      FUN_144ba0630(param_1[5]);
      FUN_144ea66f0(param_1,0x50,"crypto\\ec\\ec_key.c");
    }
  }
  return;
}



// FUNCTION 144ed2f10 FUN_144ed2f10 body=516 status=ok
// SIG undefined FUN_144ed2f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ed2f10(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    FUN_144ba24f0(0x10,0xb2,0x43,"crypto\\ec\\ec_key.c",0x4d,0x144ed2f20);
    return (longlong *)0x0;
  }
  if (*param_2 != *param_1) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    if (((longlong *)param_1[3] != (longlong *)0x0) &&
       (pcVar1 = *(code **)(*(longlong *)param_1[3] + 0x178), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    iVar2 = FUN_144ec6930(param_1[1]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    param_1[1] = 0;
  }
  if (param_2[3] != 0) {
    uVar3 = FUN_144efbee0();
    FUN_144efba20(param_1[3]);
    lVar4 = FUN_144efb8e0(uVar3);
    param_1[3] = lVar4;
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
    iVar2 = FUN_144efbbc0(lVar4,param_2[3]);
    if (iVar2 == 0) {
      return (longlong *)0x0;
    }
    if (param_2[4] != 0) {
      FUN_144efc7a0(param_1[4]);
      lVar4 = FUN_144efc690(param_2[3]);
      param_1[4] = lVar4;
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      iVar2 = FUN_144efc830(lVar4,param_2[4]);
      if (iVar2 == 0) {
        return (longlong *)0x0;
      }
    }
    if (param_2[5] != 0) {
      if (param_1[5] == 0) {
        lVar4 = FUN_144ba0570();
        param_1[5] = lVar4;
        if (lVar4 == 0) {
          return (longlong *)0x0;
        }
      }
      lVar4 = FUN_144ba06b0(param_1[5],param_2[5]);
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      if ((*(code **)(*(longlong *)param_2[3] + 0x170) != (code *)0x0) &&
         (iVar2 = (**(code **)(*(longlong *)param_2[3] + 0x170))(param_1,param_2), iVar2 == 0)) {
        return (longlong *)0x0;
      }
    }
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  iVar2 = FUN_144ea5df0(8,param_1 + 8,param_2 + 8);
  if (iVar2 == 0) {
    return (longlong *)0x0;
  }
  if (*param_2 != *param_1) {
    if ((param_2[1] != 0) && (iVar2 = FUN_144ec6850(), iVar2 == 0)) {
      return (longlong *)0x0;
    }
    param_1[1] = param_2[1];
    *param_1 = *param_2;
  }
  if ((*(code **)(*param_2 + 0x20) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_2 + 0x20))(param_1,param_2), iVar2 == 0)) {
    return (longlong *)0x0;
  }
  return param_1;
}



// FUNCTION 144ed3120 FUN_144ed3120 body=90 status=ok
// SIG undefined FUN_144ed3120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed3120(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145298db0(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = FUN_144ed2f10(lVar1,param_1);
    if (lVar2 != 0) {
      return lVar1;
    }
    FUN_144ed2e50(lVar1);
  }
  return 0;
}



// FUNCTION 144ed3180 FUN_144ed3180 body=21 status=ok
// SIG undefined FUN_144ed3180(void)

bool FUN_144ed3180(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x38);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144ed31a0 FUN_144ed31a0 body=5 status=ok
// SIG undefined FUN_144ed31a0(void)

undefined8 FUN_144ed31a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144ed31b0 FUN_144ed31b0 body=97 status=ok
// SIG undefined FUN_144ed31b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ed31b0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  FUN_144efba20(param_1[3]);
  lVar2 = FUN_144efbe70(param_2);
  param_1[3] = lVar2;
  return (ulonglong)(lVar2 != 0);
}



// FUNCTION 144ed3220 FUN_144ed3220 body=5 status=ok
// SIG undefined FUN_144ed3220(void)

undefined8 FUN_144ed3220(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144ed3230 FUN_144ed3230 body=5 status=ok
// SIG undefined FUN_144ed3230(void)

undefined8 FUN_144ed3230(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144ed3240 FUN_144ed3240 body=4 status=ok
// SIG undefined FUN_144ed3240(void)

undefined4 FUN_144ed3240(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// FUNCTION 144ed3250 FUN_144ed3250 body=4 status=ok
// SIG undefined FUN_144ed3250(void)

void FUN_144ed3250(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 144ed3260 FUN_144ed3260 body=4 status=ok
// SIG undefined FUN_144ed3260(void)

undefined4 FUN_144ed3260(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// FUNCTION 144ed3270 FUN_144ed3270 body=103 status=ok
// SIG undefined FUN_144ed3270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed3270(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_1[3] == 0)) {
    uVar2 = 0xb9;
    uVar1 = 0x43;
  }
  else {
    if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ed3299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x40))();
      return uVar1;
    }
    uVar2 = 0xbe;
    uVar1 = 0x98;
  }
  FUN_144ba24f0(0x10,0xb3,uVar1,"crypto\\ec\\ec_key.c",uVar2);
  return 0;
}



// FUNCTION 144ed32e0 FUN_144ed32e0 body=113 status=ok
// SIG undefined FUN_144ed32e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed32e0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (*(longlong **)(param_1 + 0x18) == (longlong *)0x0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar3 = 0x103;
    uVar2 = 0x43;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x18) + 0x160);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ed3323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar3 = 0x108;
    uVar2 = 0x42;
  }
  FUN_144ba24f0(0x10,0xb1,uVar2,"crypto\\ec\\ec_key.c",uVar3);
  return 0;
}



// FUNCTION 144ed3360 FUN_144ed3360 body=31 status=ok
// SIG undefined FUN_144ed3360(void)

undefined8 FUN_144ed3360(longlong param_1)

{
  byte *pbVar1;
  
  if (((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
      (pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x18), pbVar1 != (byte *)0x0)) &&
     ((*pbVar1 & 4) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ed3380 FUN_144ed3380 body=66 status=ok
// SIG undefined FUN_144ed3380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed3380(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = FUN_145298cb0(*(longlong *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),param_2,
                          param_3,param_4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ed33d0 FUN_144ed33d0 body=155 status=ok
// SIG undefined FUN_144ed33d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed33d0(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ed33ea;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar2 = FUN_144efc690();
      *(undefined8 *)(param_1 + 0x20) = uVar2;
    }
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (iVar1 = FUN_145298bf0(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x20),param_2,
                              param_3,param_4,uVar3), iVar1 != 0)) {
      if ((*(byte *)**(undefined8 **)(param_1 + 0x18) & 2) == 0) {
        *(uint *)(param_1 + 0x34) = *param_2 & 0xfffffffe;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ed3470 FUN_144ed3470 body=91 status=ok
// SIG undefined FUN_144ed3470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed3470(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x148);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ed34c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    FUN_144ba24f0(0x10,0xff,0x42,"crypto\\ec\\ec_key.c",0x290);
  }
  return 0;
}



// FUNCTION 144ed34d0 FUN_144ed34d0 body=91 status=ok
// SIG undefined FUN_144ed34d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed34d0(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x18), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x140);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ed3528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    FUN_144ba24f0(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x26d);
  }
  return 0;
}



// FUNCTION 144ed3530 FUN_144ed3530 body=266 status=ok
// SIG undefined FUN_144ed3530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed3530(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ed3546;
  if ((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) ||
     (lVar2 = **(longlong **)(param_1 + 0x18), lVar2 == 0)) {
    return 0;
  }
  pcVar1 = *(code **)(lVar2 + 0x140);
  if (pcVar1 == (code *)0x0) {
    FUN_144ba24f0(0x10,0x100,0x42,"crypto\\ec\\ec_key.c",0x26d,0x144ed3546);
    return 0;
  }
  lVar2 = (*pcVar1)(param_1,0,0);
  if (lVar2 != 0) {
    lVar3 = FUN_144ea64e0(lVar2,"crypto\\ec\\ec_key.c",0x2ad);
    if (lVar3 == 0) {
      FUN_144ba24f0(0x10,0x117,0x41,"crypto\\ec\\ec_key.c",0x2ae,uVar4);
    }
    else {
      lVar2 = FUN_144ed34d0(param_1,lVar3,lVar2);
      if (lVar2 != 0) {
        *param_2 = lVar3;
        return lVar2;
      }
      FUN_144ea6530(lVar3,"crypto\\ec\\ec_key.c",0x2b3);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 144ed3640 FUN_144ed3640 body=157 status=ok
// SIG undefined FUN_144ed3640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ed3640(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ed365a;
  iVar1 = FUN_144efc160(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  uVar2 = (ulonglong)iVar1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (uVar2 <= param_3) {
      iVar1 = FUN_144ba09d0(*(longlong *)(param_1 + 0x28),param_2,iVar1);
      if (iVar1 != -1) {
        return uVar2;
      }
      FUN_144ba24f0(0x10,0x104,100,"crypto\\ec\\ec_key.c",0x284,uVar3);
    }
  }
  return 0;
}



// FUNCTION 144ed36e0 FUN_144ed36e0 body=195 status=ok
// SIG undefined FUN_144ed36e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed36e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ed36f5;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_144ba05d0();
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_144ba24f0(0x10,0x103,0x41,"crypto\\ec\\ec_key.c",0x29b,uVar3);
    return 0;
  }
  lVar2 = FUN_144ba0740(param_2,param_3);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x10,0x103,3,"crypto\\ec\\ec_key.c",0x29f,uVar3);
    return 0;
  }
  return 1;
}



// FUNCTION 144ed37b0 FUN_144ed37b0 body=259 status=ok
// SIG undefined FUN_144ed37b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed37b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar2 = FUN_144eedd20();
  lVar3 = lVar6;
  lVar5 = lVar6;
  if ((lVar2 != 0) &&
     (((lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0 ||
       (lVar3 = FUN_144ba0570(), lVar5 = 0, lVar3 != 0)) &&
      (lVar4 = FUN_144efc150(*(undefined8 *)(param_1 + 0x18)), lVar5 = lVar6, lVar4 != 0)))) {
    do {
      iVar1 = FUN_1452983f0(lVar3,lVar4);
      lVar5 = 0;
      if (iVar1 == 0) goto LAB_144ed3879;
      iVar1 = FUN_144ba0340(lVar3);
    } while (iVar1 != 0);
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (((lVar5 != 0) || (lVar5 = FUN_144efc690(*(undefined8 *)(param_1 + 0x18)), lVar5 != 0)) &&
       (iVar1 = FUN_144efd2c0(*(undefined8 *)(param_1 + 0x18),lVar5,lVar3,0,0,lVar2), lVar6 = 0,
       iVar1 != 0)) {
      *(longlong *)(param_1 + 0x28) = lVar3;
      lVar6 = 1;
      *(longlong *)(param_1 + 0x20) = lVar5;
    }
  }
LAB_144ed3879:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_144efc7a0(lVar5);
  }
  if (*(longlong *)(param_1 + 0x28) != lVar3) {
    FUN_144ba0cd0(lVar3);
  }
  FUN_144eeddc0(lVar2);
  return lVar6;
}



// FUNCTION 144ed38c0 FUN_144ed38c0 body=50 status=ok
// SIG undefined FUN_144ed38c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed38c0(longlong param_1)

{
  FUN_144efd2c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),0,0,0,0x144ed38ca);
  return;
}



// FUNCTION 144ed3900 FUN_144ed3900 body=614 status=ok
// SIG undefined FUN_144ed3900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed3900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x144ed391a;
  lVar3 = 0;
  lVar4 = 0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (*(longlong *)(param_1 + 0x20) == 0)) {
    FUN_144ba24f0(0x10,0x102,0x43,"crypto\\ec\\ec_key.c",0x117,0x144ed391a);
    return 0;
  }
  iVar1 = FUN_144efce30();
  if (iVar1 != 0) {
    FUN_144ba24f0(0x10,0x102,0x6a,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x11c),uVar7);
    lVar4 = lVar3;
    lVar2 = lVar3;
    goto LAB_144ed3b19;
  }
  lVar2 = FUN_144eedd20();
  if ((lVar2 == 0) || (lVar4 = FUN_144efc690(*(undefined8 *)(param_1 + 0x18)), lVar4 == 0))
  goto LAB_144ed3b19;
  iVar1 = FUN_144efceb0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),lVar2);
  if (iVar1 < 1) {
    FUN_144ba24f0(0x10,0x102,0x6b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x127),uVar7);
    lVar3 = 0;
    goto LAB_144ed3b19;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar1 = FUN_144ba0340(uVar7);
  if (iVar1 == 0) {
    iVar1 = FUN_144efd2c0(*(undefined8 *)(param_1 + 0x18),lVar4,0,*(undefined8 *)(param_1 + 0x20),
                          uVar7,lVar2);
    if (iVar1 == 0) {
      uVar5 = 0x131;
      uVar7 = 0x10;
    }
    else {
      iVar1 = FUN_144efce30(*(undefined8 *)(param_1 + 0x18),lVar4);
      if (iVar1 != 0) {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          iVar1 = FUN_144ba0c40(*(longlong *)(param_1 + 0x28),uVar7);
          if (-1 < iVar1) {
            uVar5 = 0x13e;
            goto LAB_144ed3a6f;
          }
          uVar6 = 0;
          iVar1 = FUN_144efd2c0(*(undefined8 *)(param_1 + 0x18),lVar4,
                                *(undefined8 *)(param_1 + 0x28),0,0,lVar2);
          if (iVar1 == 0) {
            FUN_144ba24f0(0x10,0x102,0x10,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x143));
            goto LAB_144ed3b19;
          }
          iVar1 = FUN_144efcf30(*(undefined8 *)(param_1 + 0x18),lVar4,
                                *(undefined8 *)(param_1 + 0x20),lVar2);
          if (iVar1 != 0) {
            FUN_144ba24f0(0x10,0x102,0x7b,"crypto\\ec\\ec_key.c",CONCAT44(uVar6,0x147));
            goto LAB_144ed3b19;
          }
        }
        lVar3 = 1;
        goto LAB_144ed3b19;
      }
      uVar5 = 0x135;
LAB_144ed3a6f:
      uVar7 = 0x82;
    }
  }
  else {
    uVar5 = 0x12d;
    uVar7 = 0x7a;
  }
  FUN_144ba24f0(0x10,0x102,uVar7,"crypto\\ec\\ec_key.c",uVar5);
LAB_144ed3b19:
  FUN_144eeddc0(lVar2);
  FUN_144efc7a0(lVar4);
  return lVar3;
}



// FUNCTION 144ed3b70 FUN_144ed3b70 body=31 status=ok
// SIG undefined FUN_144ed3b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed3b70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144ed3b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x158))();
  return;
}



// FUNCTION 144ed3b90 FUN_144ed3b90 body=408 status=ok
// SIG undefined FUN_144ed3b90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed3b90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ed3ba0;
  lVar3 = FUN_144ea6670(0x90,"crypto\\dh\\dh_lib.c",0x2c);
  if (lVar3 == 0) {
    FUN_144ba24f0(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x2f,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar3 + 0x68) = 1;
  lVar4 = FUN_144e985a0();
  *(longlong *)(lVar3 + 0x88) = lVar4;
  if (lVar4 == 0) {
    FUN_144ba24f0(5,0x69,0x41,"crypto\\dh\\dh_lib.c",0x36,uVar7);
    FUN_144ea6530(lVar3,"crypto\\dh\\dh_lib.c",0x37);
    return 0;
  }
  lVar4 = FUN_145299890();
  *(longlong *)(lVar3 + 0x78) = lVar4;
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(lVar4 + 0x30);
  if (param_1 == 0) {
    uVar7 = FUN_145299a90();
    *(undefined8 *)(lVar3 + 0x80) = uVar7;
LAB_144ed3cb0:
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      lVar4 = FUN_145299a80();
      *(longlong *)(lVar3 + 0x78) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x49;
        goto LAB_144ed3c6c;
      }
    }
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(*(longlong *)(lVar3 + 0x78) + 0x30);
    iVar2 = FUN_144ea5c20(6,lVar3,lVar3 + 0x70);
    if (iVar2 == 0) goto LAB_144ed3c86;
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x78) + 0x20);
    if (pcVar1 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar1)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    uVar6 = 0x55;
    uVar5 = 0x46;
  }
  else {
    iVar2 = FUN_144ec6850(param_1);
    if (iVar2 != 0) {
      *(longlong *)(lVar3 + 0x80) = param_1;
      goto LAB_144ed3cb0;
    }
    uVar6 = 0x40;
LAB_144ed3c6c:
    uVar5 = 0x26;
  }
  FUN_144ba24f0(5,0x69,uVar5,"crypto\\dh\\dh_lib.c",uVar6);
LAB_144ed3c86:
  FUN_144ed3d50(lVar3);
  return 0;
}



// FUNCTION 144ed3d30 FUN_144ed3d30 body=24 status=ok
// SIG undefined FUN_144ed3d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed3d30(void)

{
  FUN_144ed3b90(0);
  return;
}



// FUNCTION 144ed3d50 FUN_144ed3d50 body=216 status=ok
// SIG undefined FUN_144ed3d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed3d50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x68);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x78) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x28), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_144ec6930(*(undefined8 *)(param_1 + 0x80));
      FUN_144ea6040(6,param_1,param_1 + 0x70);
      FUN_144e98660(*(undefined8 *)(param_1 + 0x88));
      FUN_144ba0630(*(undefined8 *)(param_1 + 8));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x10));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x40));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x48));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x50),"crypto\\dh\\dh_lib.c",0x7b);
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x60));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x20));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x28));
      FUN_144ea6530(param_1,"crypto\\dh\\dh_lib.c",0x7f);
    }
  }
  return;
}



// FUNCTION 144ed3e30 FUN_144ed3e30 body=21 status=ok
// SIG undefined FUN_144ed3e30(void)

bool FUN_144ed3e30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144ed3e50 FUN_144ed3e50 body=39 status=ok
// SIG undefined FUN_144ed3e50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ed3e50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 8));
  return (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
}



// FUNCTION 144ed3e80 FUN_144ed3e80 body=79 status=ok
// SIG undefined FUN_144ed3e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed3e80(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    iVar1 = FUN_144ba03d0();
  }
  uVar2 = FUN_144ba03d0(*(undefined8 *)(param_1 + 8));
  FUN_144ba0500(uVar2,iVar1);
  return;
}



// FUNCTION 144ed3ed0 FUN_144ed3ed0 body=37 status=ok
// SIG undefined FUN_144ed3ed0(void)

void FUN_144ed3ed0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 144ed3f00 FUN_144ed3f00 body=163 status=ok
// SIG undefined FUN_144ed3f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed3f00(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x10) == 0 && (param_4 == 0)))) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_144ba0cd0();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x40));
      *(longlong *)(param_1 + 0x40) = param_3;
    }
    if (param_4 != 0) {
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_4;
    }
    if (param_3 != 0) {
      uVar1 = FUN_144ba03d0(param_3);
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144ed3fb0 FUN_144ed3fb0 body=25 status=ok
// SIG undefined FUN_144ed3fb0(void)

void FUN_144ed3fb0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 144ed3fd0 FUN_144ed3fd0 body=90 status=ok
// SIG undefined FUN_144ed3fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed3fd0(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    FUN_144ba0630(*(undefined8 *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  if (param_3 != 0) {
    FUN_144ba0630(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// FUNCTION 144ed4030 FUN_144ed4030 body=5 status=ok
// SIG undefined FUN_144ed4030(void)

undefined8 FUN_144ed4030(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 144ed4040 FUN_144ed4040 body=24 status=ok
// SIG undefined FUN_144ed4040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4040(void)

{
  FUN_144ed4060(0);
  return;
}



// FUNCTION 144ed4060 FUN_144ed4060 body=404 status=ok
// SIG undefined FUN_144ed4060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed4060(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ed4070;
  lVar3 = FUN_144ea6670(0x68,"crypto\\dsa\\dsa_lib.c",0x33);
  if (lVar3 == 0) {
    FUN_144ba24f0(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x36,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar3 + 0x40) = 1;
  lVar4 = FUN_144e985a0();
  *(longlong *)(lVar3 + 0x60) = lVar4;
  if (lVar4 == 0) {
    FUN_144ba24f0(10,0x67,0x41,"crypto\\dsa\\dsa_lib.c",0x3d,uVar7);
    FUN_144ea6530(lVar3,"crypto\\dsa\\dsa_lib.c",0x3e);
    return 0;
  }
  lVar4 = FUN_14529a270();
  *(longlong *)(lVar3 + 0x50) = lVar4;
  *(uint *)(lVar3 + 0x30) = *(uint *)(lVar4 + 0x40) & 0xfffffbff;
  if (param_1 == 0) {
    uVar7 = FUN_14529a710();
    *(undefined8 *)(lVar3 + 0x58) = uVar7;
LAB_144ed417b:
    if (*(longlong *)(lVar3 + 0x58) != 0) {
      lVar4 = FUN_14529a700();
      *(longlong *)(lVar3 + 0x50) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x50;
        goto LAB_144ed413d;
      }
    }
    *(uint *)(lVar3 + 0x30) = *(uint *)(*(longlong *)(lVar3 + 0x50) + 0x40) & 0xfffffbff;
    iVar2 = FUN_144ea5c20(7,lVar3,lVar3 + 0x48);
    if (iVar2 == 0) goto LAB_144ed4157;
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x50) + 0x30);
    if (pcVar1 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar1)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    uVar6 = 0x5c;
    uVar5 = 0x46;
  }
  else {
    iVar2 = FUN_144ec6850(param_1);
    if (iVar2 != 0) {
      *(longlong *)(lVar3 + 0x58) = param_1;
      goto LAB_144ed417b;
    }
    uVar6 = 0x47;
LAB_144ed413d:
    uVar5 = 0x26;
  }
  FUN_144ba24f0(10,0x67,uVar5,"crypto\\dsa\\dsa_lib.c",uVar6);
LAB_144ed4157:
  FUN_144ed4200(lVar3);
  return 0;
}



// FUNCTION 144ed4200 FUN_144ed4200 body=166 status=ok
// SIG undefined FUN_144ed4200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4200(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x40);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 0x50) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x38), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_144ec6930(*(undefined8 *)(param_1 + 0x58));
      FUN_144ea6040(7,param_1,param_1 + 0x48);
      FUN_144e98660(*(undefined8 *)(param_1 + 0x60));
      FUN_144ba0630(*(undefined8 *)(param_1 + 8));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x10));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x18));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x20));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x28));
      FUN_144ea6530(param_1,"crypto\\dsa\\dsa_lib.c",0x83);
    }
  }
  return;
}



// FUNCTION 144ed42b0 FUN_144ed42b0 body=95 status=ok
// SIG undefined FUN_144ed42b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed42b0(longlong param_1)

{
  int iVar1;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ed42ba;
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x10));
  local_28[1] = 2;
  local_res8[0] = 0xff;
  local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  local_20 = local_res8;
  iVar1 = FUN_144efe8b0(local_28,0);
  FUN_144f041d0(1,iVar1 * 2,0x10);
  return;
}



// FUNCTION 144ed4310 FUN_144ed4310 body=26 status=ok
// SIG undefined FUN_144ed4310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4310(longlong param_1)

{
  FUN_144ba03d0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144ed4330 FUN_144ed4330 body=83 status=ok
// SIG undefined FUN_144ed4330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4330(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = FUN_144ba03d0();
    uVar2 = FUN_144ba03d0(*(undefined8 *)(param_1 + 8));
    uVar3 = FUN_144ba0500(uVar2,uVar1);
    return uVar3;
  }
  return 0xffffffff;
}



// FUNCTION 144ed4390 FUN_144ed4390 body=26 status=ok
// SIG undefined FUN_144ed4390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4390(longlong param_1)

{
  FUN_144ea6220(param_1 + 0x48);
  return;
}



// FUNCTION 144ed43b0 FUN_144ed43b0 body=26 status=ok
// SIG undefined FUN_144ed43b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed43b0(longlong param_1)

{
  FUN_144ea6300(param_1 + 0x48);
  return;
}



// FUNCTION 144ed43d0 FUN_144ed43d0 body=377 status=ok
// SIG undefined FUN_144ed43d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed43d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar2 = 0;
  lVar3 = 0;
  lVar5 = 0;
  lVar4 = 0;
  lVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  lVar9 = 0;
  lVar10 = lVar7;
  if ((param_1 == 0) || (lVar2 = FUN_144ed3d30(), lVar2 == 0)) goto LAB_144ed44e7;
  lVar10 = lVar9;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar10 = lVar7;
    if ((*(longlong *)(param_1 + 0x18) != 0) || (*(longlong *)(param_1 + 0x10) != 0))
    goto LAB_144ed44e7;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = lVar8;
    if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x10) == 0))
    goto LAB_144ed44e7;
    lVar3 = FUN_144ba0e20();
    lVar4 = FUN_144ba0e20(*(undefined8 *)(param_1 + 0x18));
    lVar5 = FUN_144ba0e20(*(undefined8 *)(param_1 + 0x10));
    if ((lVar3 == 0) ||
       (((lVar4 == 0 || (lVar5 == 0)) ||
        (iVar1 = FUN_144ed3f00(lVar2,lVar3,lVar5,lVar4), iVar1 == 0)))) goto LAB_144ed44e7;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar6 = lVar8;
    lVar10 = lVar9;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return lVar2;
    }
  }
  else {
    lVar6 = FUN_144ba0e20();
    lVar3 = 0;
    lVar5 = 0;
    lVar4 = 0;
    lVar10 = lVar9;
    if ((lVar6 != 0) &&
       ((*(longlong *)(param_1 + 0x28) == 0 || (lVar7 = FUN_144ba0e20(), lVar10 = lVar7, lVar7 != 0)
        ))) {
      lVar3 = 0;
      lVar5 = 0;
      lVar4 = 0;
      iVar1 = FUN_144ed3fd0(lVar2,lVar6,lVar7);
      lVar10 = lVar7;
      if (iVar1 != 0) {
        return lVar2;
      }
    }
  }
LAB_144ed44e7:
  FUN_144ba0cd0(lVar3);
  FUN_144ba0cd0(lVar4);
  FUN_144ba0cd0(lVar5);
  FUN_144ba0cd0(lVar6);
  FUN_144ba0cd0(lVar10);
  FUN_144ed3d50(lVar2);
  return 0;
}



// FUNCTION 144ed4550 FUN_144ed4550 body=37 status=ok
// SIG undefined FUN_144ed4550(void)

void FUN_144ed4550(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 144ed4580 FUN_144ed4580 body=159 status=ok
// SIG undefined FUN_144ed4580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4580(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 8) == 0) && (param_2 == 0)) ||
      ((*(longlong *)(param_1 + 0x10) == 0 && (param_3 == 0)))) ||
     ((*(longlong *)(param_1 + 0x18) == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_144ba0cd0();
      *(longlong *)(param_1 + 8) = param_2;
    }
    if (param_3 != 0) {
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x10));
      *(longlong *)(param_1 + 0x10) = param_3;
    }
    if (param_4 != 0) {
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 0x18) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144ed4620 FUN_144ed4620 body=25 status=ok
// SIG undefined FUN_144ed4620(void)

void FUN_144ed4620(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 144ed4640 FUN_144ed4640 body=118 status=ok
// SIG undefined FUN_144ed4640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4640(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0) goto LAB_144ed468f;
  FUN_144ba0cd0();
  *(longlong *)(param_1 + 0x20) = param_2;
LAB_144ed468f:
  if (param_3 != 0) {
    FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// FUNCTION 144ed46c0 FUN_144ed46c0 body=5 status=ok
// SIG undefined FUN_144ed46c0(void)

undefined8 FUN_144ed46c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// FUNCTION 144ed46d0 FUN_144ed46d0 body=32 status=ok
// SIG undefined FUN_144ed46d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed46d0(undefined8 param_1)

{
  FUN_144efeb70(&DAT_149bfb5b0,param_1);
  return;
}



// FUNCTION 144ed46f0 FUN_144ed46f0 body=29 status=ok
// SIG undefined FUN_144ed46f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed46f0(void)

{
  FUN_144efec20(&DAT_149bfb5b0);
  return;
}



// FUNCTION 144ed4710 FUN_144ed4710 body=29 status=ok
// SIG undefined FUN_144ed4710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4710(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bfb5b0);
  return;
}



// FUNCTION 144ed4740 FUN_144ed4740 body=179 status=ok
// SIG undefined FUN_144ed4740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ed4740(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_144ea8d60();
  if (lVar2 == 0) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)FUN_144efec20(&DAT_149bfb5b0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = lVar2;
    lVar2 = FUN_144efe770();
    if ((lVar2 != 0) && (iVar1 = FUN_144bac1c0(plVar3[1],lVar2), iVar1 != 0)) {
      FUN_144ed0590(lVar2,param_2,param_3);
      return plVar3;
    }
    FUN_144eff330(plVar3,&DAT_149bfb5b0);
    FUN_144efe790(lVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 144ed4800 FUN_144ed4800 body=139 status=ok
// SIG undefined FUN_144ed4800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ed4800(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ed480c;
  plVar1 = (longlong *)FUN_144ea64e0(0x90,"crypto\\cmac\\cmac.c",0x32);
  if (plVar1 == (longlong *)0x0) {
    FUN_144ba24f0(0xf,0x78,0x41,"crypto\\cmac\\cmac.c",0x33,uVar3);
    return (longlong *)0x0;
  }
  lVar2 = FUN_144ba50b0();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    FUN_144ea6530(plVar1,"crypto\\cmac\\cmac.c",0x38);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  return plVar1;
}



// FUNCTION 144ed4890 FUN_144ed4890 body=98 status=ok
// SIG undefined FUN_144ed4890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4890(undefined8 *param_1)

{
  FUN_144ba50e0(*param_1);
  FUN_14259f0c0(param_1 + 9,0x20);
  FUN_14259f0c0(param_1 + 1,0x20);
  FUN_14259f0c0(param_1 + 5,0x20);
  FUN_14259f0c0(param_1 + 0xd,0x20);
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  return;
}



// FUNCTION 144ed4900 FUN_144ed4900 body=62 status=ok
// SIG undefined FUN_144ed4900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4900(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ed4890();
    FUN_144ba5170(*param_1);
    FUN_144ea6530(param_1,"crypto\\cmac\\cmac.c",0x54);
  }
  return;
}



// FUNCTION 144ed4940 FUN_144ed4940 body=175 status=ok
// SIG undefined FUN_144ed4940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4940(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t _Size;
  
  if (*(int *)(param_2 + 0x11) != -1) {
    iVar1 = FUN_144ba44b0(*param_1,*param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_144ba3dd0(*param_2);
      _Size = (size_t)iVar1;
      memcpy(param_1 + 1,param_2 + 1,_Size);
      memcpy(param_1 + 5,param_2 + 5,_Size);
      memcpy(param_1 + 9,param_2 + 9,_Size);
      memcpy(param_1 + 0xd,param_2 + 0xd,_Size);
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ed49f0 FUN_144ed49f0 body=441 status=ok
// SIG undefined FUN_144ed49f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ed49f0(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4,
             longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ed4a10;
  if (param_2 == 0) {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return 1;
      }
      if (param_3 != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x11) == -1) {
        return 0;
      }
      iVar1 = FUN_144ba4630(*param_1,0,0,0,&DAT_149bfb5f0,0x144ed4a10);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = FUN_144ba3dd0(*param_1);
      goto LAB_144ed4b74;
    }
LAB_144ed4a82:
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    iVar1 = FUN_144ba4630(*param_1,param_4,param_5,0,0,0x144ed4a10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (param_4 != 0) goto LAB_144ed4a82;
  if (param_2 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  lVar3 = FUN_144ba3db0(*param_1);
  if (((lVar3 == 0) || (iVar1 = FUN_144ba51b0(*param_1,param_3 & 0xffffffff), iVar1 == 0)) ||
     (iVar1 = FUN_144ba4630(*param_1,0,0,param_2,&DAT_149bfb5f0,uVar4), iVar1 == 0)) {
    return 0;
  }
  iVar2 = FUN_144ba3dd0(*param_1);
  iVar1 = FUN_144ba3ea0(*param_1,param_1 + 9,&DAT_149bfb5f0,iVar2);
  if (iVar1 < 1) {
    return 0;
  }
  FUN_144ed4e00(param_1 + 1,param_1 + 9,iVar2);
  FUN_144ed4e00(param_1 + 5,param_1 + 1);
  FUN_14259f0c0(param_1 + 9);
  iVar1 = FUN_144ba4630(*param_1,0,0,0,&DAT_149bfb5f0);
  if (iVar1 == 0) {
    return 0;
  }
LAB_144ed4b74:
  memset(param_1 + 9,0,(longlong)iVar2);
  *(undefined4 *)(param_1 + 0x11) = 0;
  return 1;
}



// FUNCTION 144ed4bb0 FUN_144ed4bb0 body=280 status=ok
// SIG undefined FUN_144ed4bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ed4bb0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong _Size;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_144ba3dd0(*param_1);
    uVar3 = (ulonglong)iVar1;
    iVar2 = *(int *)(param_1 + 0x11);
    if (0 < iVar2) {
      _Size = uVar3 - (longlong)iVar2;
      if (param_3 < _Size) {
        _Size = param_3;
      }
      memcpy((void *)((longlong)param_1 + (longlong)iVar2 + 0x68),param_2,_Size);
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)_Size;
      param_3 = param_3 - _Size;
      if (param_3 == 0) {
        return 1;
      }
      param_2 = (void *)((longlong)param_2 + _Size);
      iVar2 = FUN_144ba3ea0(*param_1,param_1 + 9,param_1 + 0xd,iVar1);
      if (iVar2 < 1) {
        return 0;
      }
    }
    while( true ) {
      if (param_3 <= uVar3) {
        memcpy(param_1 + 0xd,param_2,param_3);
        *(int *)(param_1 + 0x11) = (int)param_3;
        return 1;
      }
      iVar2 = FUN_144ba3ea0(*param_1,param_1 + 9,param_2,iVar1);
      if (iVar2 < 1) break;
      param_3 = param_3 - uVar3;
      param_2 = (void *)((longlong)param_2 + uVar3);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 144ed4cd0 FUN_144ed4cd0 body=296 status=ok
// SIG undefined FUN_144ed4cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4cd0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  iVar2 = FUN_144ba3dd0(*param_1);
  lVar5 = (longlong)iVar2;
  *param_3 = lVar5;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x11);
    if (iVar1 == iVar2) {
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 1);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -8] = pbVar3[0x60] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      *(undefined1 *)((longlong)iVar1 + 0x68 + (longlong)param_1) = 0x80;
      if (1 < iVar2 - iVar1) {
        memset((void *)((longlong)iVar1 + 0x69 + (longlong)param_1),0,
               (longlong)((iVar2 - iVar1) + -1));
      }
      if (0 < iVar2) {
        pbVar3 = (byte *)(param_1 + 5);
        lVar4 = lVar5;
        do {
          pbVar3[(param_2 - (longlong)param_1) + -0x28] = pbVar3[0x40] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    iVar2 = FUN_144ba3ea0(*param_1,param_2,param_2,iVar2);
    if (iVar2 == 0) {
      FUN_14259f0c0(param_2,lVar5);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144ed4e00 FUN_144ed4e00 body=149 status=ok
// SIG undefined FUN_144ed4e00(void)

void FUN_144ed4e00(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  
  bVar5 = *param_2;
  iVar2 = param_3 + -1;
  lVar7 = (longlong)iVar2;
  bVar1 = (char)bVar5 >> 7;
  iVar3 = 0;
  if (0 < iVar2) {
    pbVar6 = param_1;
    bVar4 = bVar5;
    do {
      bVar5 = pbVar6[(longlong)(param_2 + (1 - (longlong)param_1))];
      *pbVar6 = bVar5 >> 7 | bVar4 * '\x02';
      lVar7 = lVar7 + -1;
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar5;
      iVar3 = iVar2;
    } while (lVar7 != 0);
  }
  bVar4 = 0x1b;
  if (param_3 == 0x10) {
    bVar4 = 0x87;
  }
  param_1[iVar3] = bVar4 & bVar1 ^ bVar5 * '\x02';
  return;
}



// FUNCTION 144ed4ea0 FUN_144ed4ea0 body=99 status=ok
// SIG undefined FUN_144ed4ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4ea0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  ulonglong uVar3;
  
  uVar3 = 0x144ed4eac;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c797458,FUN_144ed5080,param_1,local_res8[0],iVar1,
                            uVar3 & 0xffffffff00000000);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144ed4f10 FUN_144ed4f10 body=89 status=ok
// SIG undefined FUN_144ed4f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4f10(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,local_res8,0,param_2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  FUN_144ba24f0(0x26,0xc0,0x65,"crypto\\engine\\tb_pkmeth.c",0x4c);
  return 0;
}



// FUNCTION 144ed4f70 FUN_144ed4f70 body=31 status=ok
// SIG undefined FUN_144ed4f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed4f70(undefined4 param_1)

{
  FUN_145291360(&DAT_14c797458,param_1);
  return;
}



// FUNCTION 144ed4f90 FUN_144ed4f90 body=99 status=ok
// SIG undefined FUN_144ed4f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed4f90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,local_res8,0);
    if (0 < iVar1) {
      uVar2 = FUN_145291100(&DAT_14c797458,FUN_144ed5080,param_1,local_res8[0],iVar1,
                            CONCAT44(uVar3,1));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 144ed5000 FUN_144ed5000 body=125 status=ok
// SIG undefined FUN_144ed5000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed5000(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,&local_res8,0);
    lVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(param_1 + 0x48))
                          (param_1,&local_res10,0,*(undefined4 *)(local_res8 + lVar3 * 4));
        if (iVar2 != 0) {
          FUN_144ed1500(local_res10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 144ed5080 FUN_144ed5080 body=29 status=ok
// SIG undefined FUN_144ed5080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed5080(void)

{
  FUN_145291300(&DAT_14c797458);
  return;
}



// FUNCTION 144ed50a0 FUN_144ed50a0 body=1492 status=ok
// SIG undefined FUN_144ed50a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed50a0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((param_1 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (((param_2 - 0x80U & 0xffffff3f) == 0) && (param_2 != 0x140)) {
    if (param_2 == 0x80) {
      param_3[0x3c] = 10;
    }
    else {
      uVar3 = 0xe;
      if (param_2 == 0xc0) {
        uVar3 = 0xc;
      }
      param_3[0x3c] = uVar3;
    }
    uVar3 = *param_1;
    puVar1 = param_3 + 1;
    uVar2 = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    *param_3 = uVar2;
    uVar3 = param_1[1];
    *puVar1 = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    uVar3 = param_1[2];
    param_3[2] = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    uVar3 = param_1[3];
    uVar4 = uVar3 >> 8 & 0xff00ff00;
    param_3[3] = uVar4 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
    if (param_2 == 0x80) {
      uVar2 = (*(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)((uVar3 & 0xff00) >> 8) * 4) ^ 0x1000000)
              & 0xff000000 ^
              *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
              (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 & 0xff) * 4] ^
              *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff00 ^ uVar2;
      param_3[4] = uVar2;
      uVar2 = uVar2 ^ *puVar1;
      param_3[5] = uVar2;
      uVar2 = uVar2 ^ param_3[2];
      param_3[6] = uVar2;
      param_3[7] = uVar2 ^ param_3[3];
      puVar5 = &DAT_149bfd754;
      do {
        uVar3 = puVar1[6];
        uVar3 = *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                *(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[3] ^
                *puVar5;
        puVar5 = puVar5 + 1;
        puVar1[7] = uVar3;
        uVar3 = uVar3 ^ puVar1[4];
        puVar1[8] = uVar3;
        uVar3 = puVar1[5] ^ uVar3;
        puVar1[9] = uVar3;
        puVar1[10] = puVar1[6] ^ uVar3;
        puVar1 = puVar1 + 4;
      } while (puVar5 != (uint *)&DAT_149bfd778);
    }
    else {
      uVar3 = param_1[4];
      param_3[4] = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      uVar3 = param_1[5];
      uVar4 = uVar3 >> 8 & 0xff00ff00;
      param_3[5] = uVar4 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      if (param_2 == 0xc0) {
        uVar2 = (*(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)((uVar3 & 0xff00) >> 8) * 4) ^
                0x1000000) & 0xff000000 ^
                *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
                (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 & 0xff) * 4] ^
                *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff00 ^ uVar2;
        param_3[6] = uVar2;
        uVar2 = uVar2 ^ *puVar1;
        param_3[7] = uVar2;
        uVar2 = uVar2 ^ param_3[2];
        param_3[8] = uVar2;
        param_3[9] = uVar2 ^ param_3[3];
        puVar5 = &DAT_149bfd754;
        puVar1 = param_3 + 10;
        do {
          *puVar1 = puVar1[-6] ^ puVar1[-1];
          puVar1[1] = puVar1[-5] ^ puVar1[-6] ^ puVar1[-1];
          uVar3 = puVar1[1];
          uVar3 = *(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                  *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                  (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                  *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[-4] ^
                  *puVar5;
          puVar5 = puVar5 + 1;
          puVar1[2] = uVar3;
          uVar3 = puVar1[-3] ^ uVar3;
          puVar1[3] = uVar3;
          uVar3 = puVar1[-2] ^ uVar3;
          puVar1[4] = uVar3;
          puVar1[5] = puVar1[-1] ^ uVar3;
          puVar1 = puVar1 + 6;
        } while (puVar5 != (uint *)&DAT_149bfd770);
        return 0;
      }
      uVar3 = param_1[6];
      param_3[6] = uVar3 >> 8 & 0xff00ff00 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      uVar3 = param_1[7];
      uVar4 = uVar3 >> 8 & 0xff00ff00;
      param_3[7] = uVar4 | uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | uVar3 >> 0x18;
      if (param_2 == 0x100) {
        uVar2 = (*(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)((uVar3 & 0xff00) >> 8) * 4) ^
                0x1000000) & 0xff000000 ^
                *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar4 >> 8) * 4) & 0xff0000 ^
                (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 & 0xff) * 4] ^
                *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff00 ^ uVar2;
        param_3[8] = uVar2;
        uVar2 = uVar2 ^ *puVar1;
        param_3[9] = uVar2;
        uVar2 = uVar2 ^ param_3[2];
        param_3[10] = uVar2;
        param_3[0xb] = uVar2 ^ param_3[3];
        puVar5 = &DAT_149bfd754;
        puVar1 = param_3 + 0xc;
        do {
          uVar3 = puVar1[-1];
          uVar4 = *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff0000 ^
                  *(uint *)(&DAT_149bfb650 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff00 ^
                  *(uint *)(&DAT_149bfbe50 + (ulonglong)(uVar3 >> 0x18) * 4) & 0xff000000 ^
                  (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 & 0xff) * 4] ^ puVar1[-8];
          uVar3 = puVar1[-7] ^ uVar4;
          *puVar1 = uVar4;
          puVar1[1] = uVar3;
          uVar3 = puVar1[-6] ^ uVar3;
          puVar1[2] = uVar3;
          puVar1[3] = puVar1[-5] ^ uVar3;
          uVar3 = puVar1[3];
          uVar3 = *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar3 >> 8) * 4) & 0xff0000 ^
                  *(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)(uVar3 >> 0x10) * 4) & 0xff000000 ^
                  (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar3 >> 0x18) * 4] ^
                  *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar3 & 0xff) * 4) & 0xff00 ^ puVar1[-4] ^
                  *puVar5;
          puVar5 = puVar5 + 1;
          puVar1[4] = uVar3;
          uVar3 = puVar1[-3] ^ uVar3;
          puVar1[5] = uVar3;
          uVar3 = puVar1[-2] ^ uVar3;
          puVar1[6] = uVar3;
          puVar1[7] = puVar1[-1] ^ uVar3;
          puVar1 = puVar1 + 8;
        } while (puVar5 != (uint *)&DAT_149bfd76c);
        return 0;
      }
    }
    return 0;
  }
  return 0xfffffffe;
}



// FUNCTION 144ed5680 FUN_144ed5680 body=580 status=ok
// SIG undefined FUN_144ed5680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed5680(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  int iVar10;
  
  uVar4 = FUN_144ed50a0();
  if (-1 < (int)uVar4) {
    lVar8 = 0;
    lVar7 = (longlong)(*(int *)(param_3 + 0xf0) << 2);
    if (0 < *(int *)(param_3 + 0xf0) << 2) {
      puVar5 = (undefined4 *)(param_3 + 8);
      puVar6 = (undefined4 *)(param_3 + 8 + lVar7 * 4);
      do {
        uVar3 = puVar5[-2];
        lVar8 = lVar8 + 4;
        puVar5[-2] = puVar6[-2];
        lVar7 = lVar7 + -4;
        puVar6[-2] = uVar3;
        uVar3 = puVar5[-1];
        puVar5[-1] = puVar6[-1];
        puVar6[-1] = uVar3;
        uVar3 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar3;
        uVar3 = puVar5[1];
        puVar5[1] = puVar6[1];
        puVar6[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + -4;
      } while (lVar8 < lVar7);
    }
    iVar10 = 1;
    if (1 < *(int *)(param_3 + 0xf0)) {
      pbVar9 = (byte *)(param_3 + 2);
      do {
        iVar10 = iVar10 + 1;
        bVar1 = (&DAT_149bfba50)[(ulonglong)pbVar9[0x13] * 4];
        *(uint *)(pbVar9 + 0xe) =
             *(uint *)(&DAT_149bfc650 +
                      (ulonglong)
                      (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0xe) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_149bfce50 +
                        (ulonglong)(byte)(&DAT_149bfba50)[(ulonglong)pbVar9[0xf] * 4] * 4) ^
             *(uint *)(&DAT_149bfd250 +
                      (ulonglong)
                      (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0xe) & 0xff) * 4] * 4) ^
             *(uint *)(&DAT_149bfca50 +
                      (ulonglong)(byte)(&DAT_149bfba50)[(ulonglong)pbVar9[0x10] * 4] * 4);
        bVar2 = (&DAT_149bfba50)[(ulonglong)pbVar9[0x17] * 4];
        *(uint *)(pbVar9 + 0x12) =
             *(uint *)(&DAT_149bfce50 + (ulonglong)bVar1 * 4) ^
             *(uint *)(&DAT_149bfca50 +
                      (ulonglong)(byte)(&DAT_149bfba50)[(ulonglong)pbVar9[0x14] * 4] * 4) ^
             *(uint *)(&DAT_149bfc650 +
                      (ulonglong)
                      (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0x12) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_149bfd250 +
                        (ulonglong)
                        (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0x12) & 0xff) * 4] * 4
                        );
        bVar1 = (&DAT_149bfba50)[(ulonglong)pbVar9[0x1b] * 4];
        *(uint *)(pbVar9 + 0x16) =
             *(uint *)(&DAT_149bfce50 + (ulonglong)bVar2 * 4) ^
             *(uint *)(&DAT_149bfca50 +
                      (ulonglong)(byte)(&DAT_149bfba50)[(ulonglong)pbVar9[0x18] * 4] * 4) ^
             *(uint *)(&DAT_149bfc650 +
                      (ulonglong)
                      (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0x16) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_149bfd250 +
                        (ulonglong)
                        (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0x16) & 0xff) * 4] * 4
                        );
        *(uint *)(pbVar9 + 0x1a) =
             *(uint *)(&DAT_149bfce50 + (ulonglong)bVar1 * 4) ^
             *(uint *)(&DAT_149bfca50 +
                      (ulonglong)(byte)(&DAT_149bfba50)[(ulonglong)pbVar9[0x1c] * 4] * 4) ^
             *(uint *)(&DAT_149bfc650 +
                      (ulonglong)
                      (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0x1a) >> 0x18) * 4] * 4)
             ^ *(uint *)(&DAT_149bfd250 +
                        (ulonglong)
                        (byte)(&DAT_149bfba50)[(ulonglong)(*(uint *)(pbVar9 + 0x1a) & 0xff) * 4] * 4
                        );
        pbVar9 = pbVar9 + 0x10;
      } while (iVar10 < *(int *)(param_3 + 0xf0));
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144ed58d0 FUN_144ed58d0 body=1531 status=ok
// SIG undefined FUN_144ed58d0(void)

void FUN_144ed58d0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  byte bVar4;
  
  uVar7 = param_1[2];
  uVar12 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)param_3[2];
  uVar7 = param_1[1];
  uVar11 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)param_3[1];
  uVar7 = param_1[3];
  uVar9 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
          (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)param_3[3];
  uVar7 = *param_1;
  uVar8 = ((ulonglong)(uVar7 >> 8 | uVar7 << 0x18) & 0xff00ff00 |
          (ulonglong)((uVar7 & 0xff00) << 8 | uVar7 >> 0x18)) ^ (ulonglong)*param_3;
  uVar7 = *(uint *)(&DAT_149bfba50 + (uVar11 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfbe50 + (uVar12 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfb650 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_149bfc250 + (uVar9 & 0xff) * 4) ^ param_3[4];
  uVar14 = *(uint *)(&DAT_149bfbe50 + (uVar9 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149bfba50 + (uVar12 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_149bfb650 + (uVar11 >> 0x18) * 4) ^
           *(uint *)(&DAT_149bfc250 + (uVar8 & 0xff) * 4) ^ param_3[5];
  uVar5 = *(uint *)(&DAT_149bfbe50 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfba50 + (uVar9 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfb650 + (uVar12 >> 0x18) * 4) ^
          *(uint *)(&DAT_149bfc250 + (uVar11 & 0xff) * 4) ^ param_3[6];
  iVar13 = (int)param_3[0x3c] >> 1;
  uVar10 = *(uint *)(&DAT_149bfba50 + (uVar8 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_149bfbe50 + (uVar11 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149bfb650 + (uVar9 >> 0x18) * 4) ^
           *(uint *)(&DAT_149bfc250 + (uVar12 & 0xff) * 4) ^ param_3[7];
  while( true ) {
    iVar13 = iVar13 + -1;
    param_3 = param_3 + 8;
    bVar3 = (byte)(uVar7 >> 8);
    bVar4 = (byte)(uVar5 >> 0x10);
    if (iVar13 == 0) break;
    uVar6 = *(uint *)(&DAT_149bfbe50 + (ulonglong)bVar3 * 4) ^
            *(uint *)(&DAT_149bfba50 + ((ulonglong)(uVar10 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfc250 + (ulonglong)(uVar14 & 0xff) * 4) ^ param_3[2];
    uVar1 = *(uint *)(&DAT_149bfbe50 + ((ulonglong)(uVar10 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfba50 + (ulonglong)bVar4 * 4) ^
            *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar14 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfc250 + (ulonglong)(uVar7 & 0xff) * 4) ^ param_3[1];
    uVar2 = *(uint *)(&DAT_149bfba50 + (ulonglong)(byte)(uVar7 >> 0x10) * 4) ^
            *(uint *)(&DAT_149bfbe50 + (ulonglong)(byte)(uVar14 >> 8) * 4) ^
            *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar10 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfc250 + ((ulonglong)uVar5 & 0xff) * 4) ^ param_3[3];
    uVar10 = *(uint *)(&DAT_149bfba50 + ((ulonglong)(uVar14 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfbe50 + ((ulonglong)(uVar5 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar7 >> 0x18) * 4) ^
             *(uint *)(&DAT_149bfc250 + ((ulonglong)uVar10 & 0xff) * 4) ^ *param_3;
    uVar7 = *(uint *)(&DAT_149bfba50 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfbe50 + ((ulonglong)(uVar6 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar10 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfc250 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_3[4];
    uVar14 = *(uint *)(&DAT_149bfbe50 + ((ulonglong)(uVar2 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfba50 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar1 >> 0x18) * 4) ^
             *(uint *)(&DAT_149bfc250 + ((ulonglong)uVar10 & 0xff) * 4) ^ param_3[5];
    uVar5 = *(uint *)(&DAT_149bfbe50 + ((ulonglong)(uVar10 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfba50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfc250 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_3[6];
    uVar10 = *(uint *)(&DAT_149bfba50 + ((ulonglong)(uVar10 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfbe50 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfb650 + (ulonglong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_149bfc250 + ((ulonglong)uVar6 & 0xff) * 4) ^ param_3[7];
  }
  uVar6 = *(uint *)(&DAT_149bfc250 + (ulonglong)(byte)(uVar14 >> 0x10) * 4) & 0xff0000 ^
          *(uint *)(&DAT_149bfb650 + ((ulonglong)(uVar5 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_149bfbe50 + (ulonglong)(uVar7 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_149bfba50)[((ulonglong)uVar10 & 0xff) * 4] ^ *param_3;
  *param_2 = uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 0x18;
  uVar6 = *(uint *)(&DAT_149bfc250 + (ulonglong)bVar4 * 4) & 0xff0000 ^
          *(uint *)(&DAT_149bfb650 + ((ulonglong)(uVar10 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_149bfbe50 + (ulonglong)(uVar14 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar7 & 0xff) * 4] ^ param_3[1];
  param_2[1] = uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 0x18;
  uVar6 = *(uint *)(&DAT_149bfc250 + ((ulonglong)(uVar10 >> 0x10) & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_149bfb650 + (ulonglong)bVar3 * 4) & 0xff00 ^
          *(uint *)(&DAT_149bfbe50 + (ulonglong)(uVar5 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_149bfba50)[(ulonglong)(uVar14 & 0xff) * 4] ^ param_3[2];
  param_2[2] = uVar6 >> 8 & 0xff00ff00 | uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 0x18;
  uVar7 = *(uint *)(&DAT_149bfc250 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_149bfb650 + ((ulonglong)(uVar14 >> 8) & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_149bfbe50 + (ulonglong)(uVar10 >> 0x18) * 4) & 0xff000000 ^
          (uint)(byte)(&DAT_149bfba50)[((ulonglong)uVar5 & 0xff) * 4] ^ param_3[3];
  param_2[3] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  return;
}



// FUNCTION 144ed5ed0 FUN_144ed5ed0 body=1486 status=ok
// SIG undefined FUN_144ed5ed0(void)

void FUN_144ed5ed0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  byte bVar4;
  byte bVar5;
  
  uVar8 = param_1[3];
  uVar13 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)param_3[3];
  uVar8 = param_1[2];
  uVar12 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)param_3[2];
  uVar8 = param_1[1];
  uVar10 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)param_3[1];
  uVar8 = *param_1;
  uVar11 = ((ulonglong)(uVar8 >> 8 | uVar8 << 0x18) & 0xff00ff00 |
           (ulonglong)((uVar8 & 0xff00) << 8 | uVar8 >> 0x18)) ^ (ulonglong)*param_3;
  uVar8 = *(uint *)(&DAT_149bfce50 + (uVar12 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfca50 + (uVar13 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfc650 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_149bfd250 + (uVar10 & 0xff) * 4) ^ param_3[4];
  uVar15 = *(uint *)(&DAT_149bfca50 + (uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_149bfce50 + (uVar13 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149bfc650 + (uVar10 >> 0x18) * 4) ^
           *(uint *)(&DAT_149bfd250 + (uVar12 & 0xff) * 4) ^ param_3[5];
  uVar6 = *(uint *)(&DAT_149bfce50 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfca50 + (uVar10 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfc650 + (uVar12 >> 0x18) * 4) ^
          *(uint *)(&DAT_149bfd250 + (uVar13 & 0xff) * 4) ^ param_3[6];
  iVar14 = (int)param_3[0x3c] >> 1;
  uVar9 = *(uint *)(&DAT_149bfce50 + (uVar10 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfca50 + (uVar12 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_149bfc650 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_149bfd250 + (uVar11 & 0xff) * 4) ^ param_3[7];
  while( true ) {
    iVar14 = iVar14 + -1;
    param_3 = param_3 + 8;
    bVar3 = (byte)(uVar15 >> 0x10);
    bVar4 = (byte)(uVar8 >> 8);
    bVar5 = (byte)(uVar8 >> 0x10);
    if (iVar14 == 0) break;
    uVar7 = *(uint *)(&DAT_149bfce50 + (ulonglong)(byte)(uVar15 >> 8) * 4) ^
            *(uint *)(&DAT_149bfca50 + ((ulonglong)(uVar6 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar9 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + (ulonglong)(uVar8 & 0xff) * 4) ^ param_3[3];
    uVar1 = *(uint *)(&DAT_149bfce50 + (ulonglong)bVar4 * 4) ^
            *(uint *)(&DAT_149bfca50 + (ulonglong)bVar3 * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_3[2];
    uVar2 = *(uint *)(&DAT_149bfca50 + (ulonglong)bVar5 * 4) ^
            *(uint *)(&DAT_149bfce50 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar15 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + ((ulonglong)uVar6 & 0xff) * 4) ^ param_3[1];
    uVar9 = *(uint *)(&DAT_149bfce50 + ((ulonglong)(uVar6 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfca50 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + (ulonglong)(uVar15 & 0xff) * 4) ^ *param_3;
    uVar8 = *(uint *)(&DAT_149bfce50 + ((ulonglong)(uVar1 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfca50 + ((ulonglong)(uVar7 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar9 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + ((ulonglong)uVar2 & 0xff) * 4) ^ param_3[4];
    uVar15 = *(uint *)(&DAT_149bfca50 + ((ulonglong)(uVar9 >> 0x10) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfce50 + ((ulonglong)(uVar7 >> 8) & 0xff) * 4) ^
             *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_149bfd250 + ((ulonglong)uVar1 & 0xff) * 4) ^ param_3[5];
    uVar6 = *(uint *)(&DAT_149bfce50 + ((ulonglong)(uVar9 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfca50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar1 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + ((ulonglong)uVar7 & 0xff) * 4) ^ param_3[6];
    uVar9 = *(uint *)(&DAT_149bfce50 + ((ulonglong)(uVar2 >> 8) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfca50 + ((ulonglong)(uVar1 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_149bfc650 + (ulonglong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_149bfd250 + ((ulonglong)uVar9 & 0xff) * 4) ^ param_3[7];
  }
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_149bfd650)[uVar8 >> 0x18],
                                     (&DAT_149bfd650)[(ulonglong)(uVar9 >> 0x10) & 0xff]),
                            (&DAT_149bfd650)[(ulonglong)(uVar6 >> 8) & 0xff]),
                   (&DAT_149bfd650)[uVar15 & 0xff]) ^ *param_3;
  *param_2 = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_149bfd650)[uVar15 >> 0x18],(&DAT_149bfd650)[bVar5]),
                            (&DAT_149bfd650)[(ulonglong)(uVar9 >> 8) & 0xff]),
                   (&DAT_149bfd650)[(ulonglong)uVar6 & 0xff]) ^ param_3[1];
  param_2[1] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_149bfd650)[uVar6 >> 0x18],(&DAT_149bfd650)[bVar3]),
                            (&DAT_149bfd650)[bVar4]),(&DAT_149bfd650)[(ulonglong)uVar9 & 0xff]) ^
          param_3[2];
  param_2[2] = uVar7 >> 8 & 0xff00ff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8 | uVar7 >> 0x18;
  uVar8 = CONCAT31(CONCAT21(CONCAT11((&DAT_149bfd650)[uVar9 >> 0x18],
                                     (&DAT_149bfd650)[(ulonglong)(uVar6 >> 0x10) & 0xff]),
                            (&DAT_149bfd650)[(ulonglong)(uVar15 >> 8) & 0xff]),
                   (&DAT_149bfd650)[uVar8 & 0xff]) ^ param_3[3];
  param_2[3] = uVar8 >> 8 & 0xff00ff00 | uVar8 << 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 0x18;
  return;
}



// FUNCTION 144ed64a0 FUN_144ed64a0 body=62 status=ok
// SIG undefined FUN_144ed64a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed64a0(void)

{
  int in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    FUN_144ed64e0();
    return;
  }
  FUN_144ed66b0();
  return;
}



// FUNCTION 144ed64e0 FUN_144ed64e0 body=463 status=ok
// SIG undefined FUN_144ed64e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed64e0(ulonglong *param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,
                  undefined8 *param_5,code *param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_3 != (byte *)0x0) {
    puVar8 = param_5;
    if (&DAT_0000000f < param_3) {
      uVar6 = (ulonglong)param_3 >> 4;
      param_3 = param_3 + uVar6 * -0x10;
      puVar7 = param_5;
      do {
        puVar8 = param_2;
        lVar5 = 2;
        puVar3 = param_1;
        do {
          *(ulonglong *)(((longlong)puVar8 - (longlong)param_1) + (longlong)puVar3) =
               *(ulonglong *)(((longlong)puVar7 - (longlong)param_1) + (longlong)puVar3) ^ *puVar3;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        (*param_6)(puVar8,puVar8,param_4);
        param_1 = param_1 + 2;
        uVar6 = uVar6 - 1;
        param_2 = puVar8 + 2;
        puVar7 = puVar8;
      } while (uVar6 != 0);
    }
    for (; param_3 != (byte *)0x0; param_3 = param_3 + -0x10) {
      pbVar2 = (byte *)0x0;
      do {
        if (param_3 <= pbVar2) {
LAB_144ed6634:
          if (pbVar2 < &DAT_00000010) {
            pbVar4 = pbVar2 + (longlong)param_2;
            lVar5 = 0x10 - (longlong)pbVar2;
            do {
              *pbVar4 = pbVar4[(longlong)puVar8 - (longlong)param_2];
              pbVar4 = pbVar4 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
          break;
        }
        pbVar4 = pbVar2 + (longlong)param_1;
        pbVar4[(longlong)param_2 - (longlong)param_1] =
             pbVar4[(longlong)puVar8 - (longlong)param_1] ^ *pbVar4;
        if (param_3 <= pbVar4 + (1 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 1;
          goto LAB_144ed6634;
        }
        pbVar2[(longlong)param_2 + 1] =
             pbVar2[(longlong)param_1 + 1] ^ (pbVar2 + 1)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (2 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 2;
          goto LAB_144ed6634;
        }
        pbVar2[(longlong)param_2 + 2] =
             pbVar2[(longlong)param_1 + 2] ^ (pbVar2 + 2)[(longlong)puVar8];
        if (param_3 <= pbVar4 + (3 - (longlong)param_1)) {
          pbVar2 = pbVar2 + 3;
          goto LAB_144ed6634;
        }
        pbVar2[(longlong)param_2 + 3] =
             pbVar2[(longlong)param_1 + 3] ^ (pbVar2 + 3)[(longlong)puVar8];
        pbVar2 = pbVar2 + 4;
      } while (pbVar2 < &DAT_00000010);
      (*param_6)(param_2,param_2,param_4);
      puVar8 = param_2;
      if (param_3 < &DAT_00000011) break;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    }
    if (param_5 != puVar8) {
      uVar1 = puVar8[1];
      *param_5 = *puVar8;
      param_5[1] = uVar1;
    }
  }
  return;
}



// FUNCTION 144ed66b0 FUN_144ed66b0 body=740 status=ok
// SIG undefined FUN_144ed66b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed66b0(ulonglong *param_1,ulonglong *param_2,byte *param_3,undefined8 param_4,
                  ulonglong *param_5,code *param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  code *local_70;
  byte *local_68;
  ulonglong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_5;
  local_70 = param_6;
  local_78 = param_4;
  if (param_3 != (byte *)0x0) {
    if (param_1 == param_2) {
      if (&DAT_0000000f < param_3) {
        uVar7 = (ulonglong)param_3 >> 4;
        local_68 = param_3 + uVar7 * -0x10;
        do {
          (*local_70)(param_1,&local_58,param_4);
          uVar2 = *param_1;
          *param_2 = *param_5 ^ local_58;
          *param_5 = uVar2;
          uVar2 = param_1[1];
          param_1 = param_1 + 2;
          param_2[1] = param_5[1] ^ local_50;
          param_2 = param_2 + 2;
          param_5[1] = uVar2;
          uVar7 = uVar7 - 1;
          param_3 = local_68;
        } while (uVar7 != 0);
      }
    }
    else if (&DAT_0000000f < param_3) {
      uVar7 = (ulonglong)param_3 >> 4;
      local_68 = param_3 + uVar7 * -0x10;
      do {
        puVar6 = param_1;
        (*param_6)(puVar6,param_2,param_4);
        *param_2 = *param_2 ^ *param_5;
        param_2[1] = param_2[1] ^ param_5[1];
        param_1 = puVar6 + 2;
        param_2 = param_2 + 2;
        uVar7 = uVar7 - 1;
        param_5 = puVar6;
      } while (uVar7 != 0);
      param_3 = local_68;
      param_5 = local_60;
      if (local_60 != puVar6) {
        uVar3 = *(undefined4 *)((longlong)puVar6 + 4);
        uVar7 = puVar6[1];
        uVar4 = *(undefined4 *)((longlong)puVar6 + 0xc);
        *(int *)local_60 = (int)*puVar6;
        *(undefined4 *)((longlong)local_60 + 4) = uVar3;
        *(int *)(local_60 + 1) = (int)uVar7;
        *(undefined4 *)((longlong)local_60 + 0xc) = uVar4;
      }
    }
    if (param_3 != (byte *)0x0) {
      local_60 = (ulonglong *)(1 - (longlong)&local_58);
      lVar8 = (longlong)param_2 + 1;
      do {
        (*local_70)(param_1,&local_58,local_78);
        pbVar5 = (byte *)0x0;
        do {
          if (param_3 <= pbVar5) break;
          pbVar9 = (byte *)((longlong)&local_58 + (longlong)pbVar5);
          bVar1 = (pbVar9 + -((longlong)&local_58 + 1) + 1)[(longlong)param_1];
          pbVar9[-((longlong)&local_58 + 1) + lVar8] =
               pbVar9[(longlong)param_5 - (longlong)&local_58] ^ *pbVar9;
          pbVar9[(longlong)param_5 - (longlong)&local_58] = bVar1;
          if (param_3 <= (byte *)((longlong)local_60 + (longlong)pbVar9)) {
            pbVar5 = pbVar5 + 1;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 1];
          pbVar5[lVar8] = pbVar5[(longlong)&local_58 + 1] ^ pbVar5[(longlong)param_5 + 1];
          pbVar5[(longlong)param_5 + 1] = bVar1;
          if (param_3 <= pbVar9 + (2 - (longlong)&local_58)) {
            pbVar5 = pbVar5 + 2;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 2];
          pbVar5[lVar8 + 1] = pbVar5[(longlong)&local_58 + 2] ^ pbVar5[(longlong)param_5 + 2];
          pbVar5[(longlong)param_5 + 2] = bVar1;
          if (param_3 <= pbVar9 + (3 - (longlong)&local_58)) {
            pbVar5 = pbVar5 + 3;
            break;
          }
          bVar1 = pbVar5[(longlong)param_1 + 3];
          pbVar5[lVar8 + 2] = pbVar5[(longlong)&local_58 + 3] ^ pbVar5[(longlong)param_5 + 3];
          pbVar5[(longlong)param_5 + 3] = bVar1;
          pbVar5 = pbVar5 + 4;
        } while (pbVar5 < &DAT_00000010);
        if (param_3 < &DAT_00000011) {
          if (pbVar5 < &DAT_00000010) {
            pbVar9 = (byte *)((longlong)param_5 + (longlong)pbVar5);
            lVar8 = 0x10 - (longlong)pbVar5;
            do {
              *pbVar9 = pbVar9[(longlong)param_1 - (longlong)param_5];
              pbVar9 = pbVar9 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          break;
        }
        param_1 = param_1 + 2;
        lVar8 = lVar8 + 0x10;
        param_3 = param_3 + -0x10;
      } while (param_3 != (byte *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ed69a0 FUN_144ed69a0 body=504 status=ok
// SIG undefined FUN_144ed69a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed69a0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,ulonglong *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint local_58;
  
  local_58 = *param_7;
  for (; (local_58 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)local_58 + (longlong)param_6) ^ bVar1;
    param_2 = param_2 + 1;
    local_58 = local_58 + 1 & 0xf;
  }
  iVar11 = 0x10;
  uVar7 = 1;
  if (0xf < param_3) {
    uVar4 = param_3 >> 4;
    local_58 = 0;
    param_3 = param_3 + uVar4 * -0x10;
    lVar12 = (longlong)param_2 - (longlong)param_6;
    lVar10 = (longlong)param_1 - (longlong)param_6;
    param_2 = param_2 + uVar4 * 0x10;
    param_1 = param_1 + uVar4 * 0x10;
    do {
      (*param_8)(param_5,param_6,param_4);
      puVar5 = (undefined1 *)(param_5 + 0x10);
      uVar3 = 1;
      iVar9 = 0x10;
      do {
        iVar8 = iVar9;
        bVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = (char)(uVar3 + bVar1);
        uVar3 = uVar3 + bVar1 >> 8;
        iVar9 = iVar8 + -1;
      } while (iVar9 != 0);
      uVar6 = (ulonglong)(iVar8 + 1);
      puVar2 = param_6;
      do {
        *(ulonglong *)(lVar12 + (longlong)puVar2) =
             *(ulonglong *)(lVar10 + (longlong)puVar2) ^ *puVar2;
        puVar2 = puVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar12 = lVar12 + 0x10;
      lVar10 = lVar10 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_3 == 0) {
    *param_7 = local_58;
  }
  else {
    (*param_8)(param_5,param_6,param_4);
    puVar5 = (undefined1 *)(param_5 + 0x10);
    do {
      bVar1 = puVar5[-1];
      puVar5 = puVar5 + -1;
      *puVar5 = (char)(uVar7 + bVar1);
      uVar7 = uVar7 + bVar1 >> 8;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    do {
      uVar4 = (ulonglong)local_58;
      local_58 = local_58 + 1;
      param_2[uVar4] = param_1[uVar4] ^ *(byte *)(uVar4 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_7 = local_58;
  }
  return;
}



// FUNCTION 144ed6ba0 FUN_144ed6ba0 body=525 status=ok
// SIG undefined FUN_144ed6ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed6ba0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,undefined8 *param_6,uint *param_7,code *param_8)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint local_res18;
  
  uVar5 = *param_7;
  for (; (uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar5 + (longlong)param_6) ^ bVar2;
    param_2 = param_2 + 1;
    uVar5 = uVar5 + 1 & 0xf;
  }
  uVar6 = 1;
  uVar3 = *(uint *)(param_5 + 0xc);
  puVar10 = (uint *)(param_5 + 0xc);
  iVar9 = 0xc;
  local_res18 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  for (; 0xf < param_3; param_3 = param_3 + uVar7 * -0x10) {
    uVar7 = param_3 >> 4;
    if (0x10000000 < uVar7) {
      uVar7 = 0x10000000;
    }
    local_res18 = local_res18 + (int)uVar7;
    if (local_res18 < uVar7) {
      uVar7 = uVar7 - local_res18;
      local_res18 = 0;
    }
    (*param_8)(param_1,param_2,uVar7,param_4,param_5);
    *puVar10 = local_res18 >> 0x18 | (local_res18 & 0xff0000) >> 8 | (local_res18 & 0xff00) << 8 |
               local_res18 << 0x18;
    if (local_res18 == 0) {
      uVar3 = 1;
      puVar4 = puVar10;
      iVar8 = iVar9;
      do {
        pbVar1 = (byte *)((longlong)puVar4 + -1);
        puVar4 = (uint *)((longlong)puVar4 + -1);
        uVar3 = uVar3 + *pbVar1;
        *(char *)puVar4 = (char)uVar3;
        uVar3 = uVar3 >> 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    param_2 = param_2 + uVar7 * 0x10;
    param_1 = param_1 + uVar7 * 0x10;
  }
  if (param_3 == 0) {
    *param_7 = uVar5;
  }
  else {
    *param_6 = 0;
    param_6[1] = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    local_res18 = local_res18 + 1;
    *puVar10 = local_res18 >> 0x18 | (local_res18 & 0xff0000) >> 8 | (local_res18 & 0xff00) << 8 |
               local_res18 * 0x1000000;
    if (local_res18 == 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar10 + -1);
        puVar10 = (uint *)((longlong)puVar10 + -1);
        uVar6 = uVar6 + *pbVar1;
        *(char *)puVar10 = (char)uVar6;
        uVar6 = uVar6 >> 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    do {
      uVar7 = (ulonglong)uVar5;
      uVar5 = uVar5 + 1;
      param_2[uVar7] = param_1[uVar7] ^ *(byte *)(uVar7 + (longlong)param_6);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    *param_7 = uVar5;
  }
  return;
}



// FUNCTION 144ed6db0 FUN_144ed6db0 body=357 status=ok
// SIG undefined FUN_144ed6db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed6db0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,uint *param_6,code *param_7)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = *param_6;
  for (; (uVar4 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((ulonglong)uVar4 + param_5) ^ bVar1;
    param_2 = param_2 + 1;
    uVar4 = uVar4 + 1 & 0xf;
  }
  if (0xf < param_3) {
    uVar6 = param_3 >> 4;
    lVar5 = (longlong)param_2 - param_5;
    lVar7 = (longlong)param_1 - param_5;
    param_3 = param_3 + uVar6 * -0x10;
    param_2 = param_2 + uVar6 * 0x10;
    param_1 = param_1 + uVar6 * 0x10;
    do {
      (*param_7)(param_5,param_5,param_4);
      if (uVar4 < 0x10) {
        puVar2 = (ulonglong *)((ulonglong)uVar4 + param_5);
        uVar3 = (ulonglong)((0xf - uVar4 >> 3) + 1);
        do {
          *(ulonglong *)(lVar5 + (longlong)puVar2) =
               *(ulonglong *)(lVar7 + (longlong)puVar2) ^ *puVar2;
          puVar2 = puVar2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar5 = lVar5 + 0x10;
      lVar7 = lVar7 + 0x10;
      uVar4 = 0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    do {
      uVar6 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_2[uVar6] = param_1[uVar6] ^ *(byte *)(uVar6 + param_5);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  *param_6 = uVar4;
  return;
}



// FUNCTION 144ed6f20 FUN_144ed6f20 body=643 status=ok
// SIG undefined FUN_144ed6f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed6f20(byte *param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5
                  ,uint *param_6,int param_7,code *param_8)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = *param_6;
  if (param_7 == 0) {
    for (; (uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)((ulonglong)uVar5 + param_5) ^ bVar3;
      param_2 = param_2 + 1;
      *(byte *)((ulonglong)uVar5 + param_5) = bVar3;
      uVar5 = uVar5 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar7 = param_3 >> 4;
      lVar6 = (longlong)param_2 - param_5;
      param_3 = param_3 + uVar7 * -0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar5 < 0x10) {
          uVar4 = (ulonglong)((0xf - uVar5 >> 3) + 1);
          puVar2 = (ulonglong *)((ulonglong)uVar5 + param_5);
          do {
            uVar1 = *(ulonglong *)
                     (lVar6 + (longlong)puVar2 + ((longlong)param_1 - (longlong)param_2));
            *(ulonglong *)(lVar6 + (longlong)puVar2) = *puVar2 ^ uVar1;
            *puVar2 = uVar1;
            uVar4 = uVar4 - 1;
            puVar2 = puVar2 + 1;
          } while (uVar4 != 0);
        }
        param_2 = param_2 + 0x10;
        lVar6 = lVar6 + 0x10;
        param_1 = param_1 + 0x10;
        uVar5 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar7 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        bVar3 = param_1[uVar7];
        param_2[uVar7] = *(byte *)(uVar7 + param_5) ^ bVar3;
        *(byte *)(uVar7 + param_5) = bVar3;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    for (; (uVar5 != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      bVar3 = *(byte *)((ulonglong)uVar5 + param_5) ^ bVar3;
      *(byte *)((ulonglong)uVar5 + param_5) = bVar3;
      *param_2 = bVar3;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1 & 0xf;
    }
    if (0xf < param_3) {
      uVar7 = param_3 >> 4;
      lVar8 = (longlong)param_2 - param_5;
      lVar6 = (longlong)param_1 - param_5;
      param_3 = param_3 + uVar7 * -0x10;
      param_2 = param_2 + uVar7 * 0x10;
      param_1 = param_1 + uVar7 * 0x10;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar5 < 0x10) {
          puVar2 = (ulonglong *)((ulonglong)uVar5 + param_5);
          uVar4 = (ulonglong)((0xf - uVar5 >> 3) + 1);
          do {
            *puVar2 = *puVar2 ^ *(ulonglong *)(lVar6 + (longlong)puVar2);
            *(ulonglong *)(lVar8 + (longlong)puVar2) = *puVar2;
            puVar2 = puVar2 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        lVar8 = lVar8 + 0x10;
        lVar6 = lVar6 + 0x10;
        uVar5 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      do {
        uVar7 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        bVar3 = param_1[uVar7] ^ *(byte *)(uVar7 + param_5);
        *(byte *)(uVar7 + param_5) = bVar3;
        param_2[uVar7] = bVar3;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  *param_6 = uVar5;
  return;
}



// FUNCTION 144ed71b0 FUN_144ed71b0 body=188 status=ok
// SIG undefined FUN_144ed71b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed71b0(byte *param_1,longlong param_2,longlong param_3,undefined8 param_4,byte *param_5,
                  undefined8 param_6,int param_7,code *param_8)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  if (param_3 != 0) {
    local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
    param_2 = param_2 - (longlong)param_1;
    do {
      local_58 = *(undefined4 *)param_5;
      uStack_54 = *(undefined4 *)(param_5 + 4);
      uStack_50 = *(undefined4 *)(param_5 + 8);
      uStack_4c = *(undefined4 *)(param_5 + 0xc);
      (*param_8)(param_5,param_5,param_4);
      if (param_7 == 0) {
        local_48 = *param_1;
        param_1[param_2] = *param_5 ^ local_48;
      }
      else {
        local_48 = *param_5 ^ *param_1;
        param_1[param_2] = local_48;
      }
      param_1 = param_1 + 1;
      *(uint *)param_5 = CONCAT13((undefined1)uStack_54,local_58._1_3_);
      *(uint *)(param_5 + 4) = CONCAT13((undefined1)uStack_50,uStack_54._1_3_);
      *(uint *)(param_5 + 8) = CONCAT13((undefined1)uStack_4c,uStack_50._1_3_);
      *(uint *)(param_5 + 0xc) = CONCAT13(local_48,uStack_4c._1_3_);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  return;
}



// FUNCTION 144ed7280 FUN_144ed7280 body=452 status=ok
// SIG undefined FUN_144ed7280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed7280(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  byte *param_5,undefined8 param_6,int param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte abStack_df [47];
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  code *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = 0;
  local_78 = param_8;
  local_88 = param_1;
  local_80 = param_4;
  if (param_3 != 0) {
    lVar11 = (longlong)param_5 - ((longlong)&local_70 + 1);
    do {
      local_70 = *(undefined4 *)param_5;
      uStack_6c = *(undefined4 *)(param_5 + 4);
      uStack_68 = *(undefined4 *)(param_5 + 8);
      uStack_64 = *(undefined4 *)(param_5 + 0xc);
      bVar5 = (byte)uVar7;
      uVar12 = uVar7 >> 3;
      bVar4 = -(((byte)(1 << (7 - (bVar5 & 7) & 0x1f)) & *(byte *)(uVar12 + local_88)) != 0) & 0x80;
      puStack_b0 = (undefined *)0x144ed734a;
      (*local_78)(param_5,param_5,local_80);
      if (param_7 == 0) {
        bVar3 = *param_5 ^ bVar4;
        local_60 = bVar4;
      }
      else {
        bVar3 = *param_5 ^ bVar4;
        local_60 = bVar3;
      }
      lVar9 = 0;
      do {
        pbVar8 = (byte *)((longlong)&local_70 + lVar9 + 1);
        lVar10 = lVar9 + 4;
        bVar4 = *pbVar8;
        pbVar8[lVar11] =
             (pbVar8 + lVar11)[(longlong)&local_70 - (longlong)param_5] * '\x02' | bVar4 >> 7;
        bVar1 = *(byte *)((longlong)&local_70 + lVar9 + 2);
        bVar2 = *(byte *)((longlong)&local_70 + lVar9 + 3);
        pbVar8[lVar11 + 1] = bVar1 >> 7 | bVar4 * '\x02';
        pbVar8[lVar11 + 2] = bVar2 >> 7 | bVar1 * '\x02';
        pbVar8[lVar11 + 3] = *(byte *)((longlong)&uStack_6c + lVar9) >> 7 | bVar2 * '\x02';
        lVar9 = lVar10;
      } while (lVar10 < 0x10);
      uVar6 = (uint)uVar7;
      uVar7 = uVar7 + 1;
      *(byte *)(uVar12 + param_2) =
           *(byte *)(uVar12 + param_2) & ~(byte)(1 << (7 - (uVar6 & 7) & 0x1f)) |
           (bVar3 & 0x80) >> (bVar5 & 7);
    } while (uVar7 < param_3);
  }
                    /* WARNING: Subroutine does not return */
  puStack_b0 = &UNK_144ed7444;
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144ed7460 FUN_144ed7460 body=256 status=ok
// SIG undefined FUN_144ed7460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed7460(void *param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined *puVar3;
  longlong lVar4;
  
  memset(param_1,0,0x1b8);
  *(code **)((longlong)param_1 + 0x178) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x180) = param_2;
  (*param_3)((longlong)param_1 + 0x50,(longlong)param_1 + 0x50,param_2);
  lVar4 = 2;
  puVar2 = (ulonglong *)((longlong)param_1 + 0x50);
  do {
    uVar1 = *puVar2;
    *puVar2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
              | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18
              | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    lVar4 = lVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (lVar4 != 0);
  if ((DAT_14c7973a0._4_4_ & 2) == 0) {
    FUN_144ed8680((longlong)param_1 + 0x60,(longlong)param_1 + 0x50);
    *(undefined **)((longlong)param_1 + 0x160) = &DAT_1425a6000;
    puVar3 = &DAT_1425a6140;
  }
  else if ((DAT_14c7973a0._4_4_ & 0x10400000) == 0x10400000) {
    FUN_1425a7380();
    *(undefined **)((longlong)param_1 + 0x160) = &DAT_1425a7540;
    puVar3 = &DAT_1425a7560;
  }
  else {
    FUN_1425a6970();
    *(undefined1 **)((longlong)param_1 + 0x160) = &LAB_1425a6be0;
    puVar3 = &DAT_1425a6ca0;
  }
  *(undefined **)((longlong)param_1 + 0x168) = puVar3;
  return;
}



// FUNCTION 144ed7560 FUN_144ed7560 body=389 status=ok
// SIG undefined FUN_144ed7560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed7560(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  
  pcVar1 = (code *)param_1[0x2c];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2e] = 0;
  if (param_3 == 0xc) {
    uVar6 = 1;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x1000000;
  }
  else {
    param_1[8] = 0;
    param_1[9] = 0;
    uVar5 = param_3;
    if (0xf < param_3) {
      uVar4 = param_3 >> 4;
      lVar7 = (longlong)param_2 + (-0x3f - (longlong)param_1);
      uVar5 = param_3 + uVar4 * -0x10;
      param_2 = param_2 + uVar4 * 2;
      do {
        pbVar2 = (byte *)(param_1 + 8);
        lVar3 = 4;
        do {
          *pbVar2 = *pbVar2 ^ pbVar2[lVar7 + -1];
          pbVar2[1] = pbVar2[1] ^ pbVar2[lVar7];
          pbVar2[2] = pbVar2[2] ^ pbVar2[lVar7 + 1];
          pbVar2[3] = pbVar2[3] ^ pbVar2[lVar7 + 2];
          pbVar2 = pbVar2 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        (*pcVar1)(param_1 + 8,param_1 + 0xc);
        lVar7 = lVar7 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (uVar5 != 0) {
      pbVar2 = (byte *)(param_1 + 8);
      do {
        *pbVar2 = *pbVar2 ^ pbVar2[(longlong)param_2 + (-0x40 - (longlong)param_1)];
        pbVar2 = pbVar2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      (*pcVar1)(param_1 + 8,param_1 + 0xc);
    }
    uVar5 = param_3 << 3;
    param_1[9] = param_1[9] ^
                 ((param_3 & 0x1fffffffffffffff) >> 0x35 | (uVar5 & 0xff000000000000) >> 0x28 |
                  (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                  (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 | (uVar5 & 0xff00) << 0x28
                 | param_3 << 0x3b);
    (*pcVar1)(param_1 + 8,param_1 + 0xc);
    uVar6 = *(uint *)((longlong)param_1 + 0x4c);
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  (*(code *)param_1[0x2f])(param_1,param_1 + 4,param_1[0x30]);
  uVar6 = uVar6 + 1;
  *(uint *)((longlong)param_1 + 0xc) =
       uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
  return;
}



// FUNCTION 144ed76f0 FUN_144ed76f0 body=304 status=ok
// SIG undefined FUN_144ed76f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed76f0(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pcVar2 = *(code **)(param_1 + 0x160);
  pcVar3 = *(code **)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return 0xfffffffe;
  }
  uVar4 = *(longlong *)(param_1 + 0x30) + param_3;
  if ((0x2000000000000000 < uVar4) || (uVar4 < param_3)) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1 + 0x174);
  *(ulonglong *)(param_1 + 0x30) = uVar4;
  if (uVar6 != 0) {
    do {
      if (param_3 == 0) {
        param_3 = 0;
        if (uVar6 != 0) goto LAB_144ed77f2;
        break;
      }
      bVar1 = *param_2;
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
      pbVar5 = (byte *)((ulonglong)uVar6 + 0x40 + param_1);
      *pbVar5 = *pbVar5 ^ bVar1;
      uVar6 = uVar6 + 1 & 0xf;
    } while (uVar6 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60);
  }
  uVar4 = param_3 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,uVar4);
    param_2 = param_2 + uVar4;
    param_3 = param_3 - uVar4;
  }
  if (param_3 != 0) {
    uVar6 = (uint)param_3;
    pbVar5 = (byte *)(param_1 + 0x40);
    do {
      *pbVar5 = *pbVar5 ^ pbVar5[(longlong)(param_2 + (-0x40 - param_1))];
      pbVar5 = pbVar5 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
LAB_144ed77f2:
  *(uint *)(param_1 + 0x174) = uVar6;
  return 0;
}



// FUNCTION 144ed7820 FUN_144ed7820 body=891 status=ok
// SIG undefined FUN_144ed7820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed7820(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8;
  uint local_68;
  ulonglong local_48;
  
  pcVar2 = *(code **)(param_1 + 0x178);
  pcVar3 = *(code **)(param_1 + 0x168);
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  uVar7 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar7) || (uVar7 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar7;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  local_68 = local_res8 & 0xf;
  uVar7 = (ulonglong)local_68;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar7 != 0) goto LAB_144ed7b65;
        break;
      }
      param_4 = param_4 - 1;
      bVar6 = *(byte *)(uVar7 + 0x10 + param_1) ^ (byte)*param_2;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      *(byte *)param_3 = bVar6;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      uVar5 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_68 = (int)uVar7 + 1U & 0xf;
      uVar7 = (ulonglong)local_68;
      *(byte *)(uVar5 + 0x188 + param_1) = bVar6;
    } while (local_68 != 0);
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_48 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      lVar10 = 0xc0;
      do {
        puVar8 = param_3;
        (*pcVar2)(param_1,param_1 + 0x10,uVar4);
        uVar9 = uVar9 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *puVar8 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        puVar8[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = puVar8 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      (*pcVar3)(param_1 + 0x40,param_1 + 0x60,puVar8 + -0x17e,0xc00);
      local_48 = local_48 - 1;
    } while (local_48 != 0);
    uVar7 = (ulonglong)local_68;
  }
  uVar5 = param_4 & 0xfffffffffffffff0;
  if (uVar5 != 0) {
    if (0xf < param_4) {
      uVar7 = param_4 >> 4;
      param_4 = param_4 + uVar7 * -0x10;
      do {
        (*pcVar2)(param_1,param_1 + 0x10,uVar4);
        uVar9 = uVar9 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *param_3 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar7 = (ulonglong)local_68;
    }
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,(longlong)param_3 - uVar5,uVar5);
  }
  if (param_4 != 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar4);
    uVar9 = uVar9 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    do {
      bVar6 = *(byte *)(uVar7 + (longlong)param_2) ^ *(byte *)(uVar7 + 0x10 + param_1);
      uVar5 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar7 + (longlong)param_3) = bVar6;
      *(byte *)(uVar5 + 0x188 + param_1) = bVar6;
      param_4 = param_4 - 1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while (param_4 != 0);
  }
LAB_144ed7b65:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 144ed7ba0 FUN_144ed7ba0 body=860 status=ok
// SIG undefined FUN_144ed7ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed7ba0(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8;
  uint local_68;
  ulonglong local_48;
  
  pcVar3 = *(code **)(param_1 + 0x178);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  uVar8 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar8) || (uVar8 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar8;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  local_68 = local_res8 & 0xf;
  uVar8 = (ulonglong)local_68;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (local_68 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar8 != 0) goto LAB_144ed7ec6;
        break;
      }
      uVar7 = *param_2;
      param_4 = param_4 - 1;
      uVar6 = (ulonglong)local_res8;
      param_2 = (ulonglong *)((longlong)param_2 + 1);
      local_res8 = local_res8 + 1;
      *(byte *)(uVar6 + 0x188 + param_1) = (byte)uVar7;
      *(byte *)param_3 = *(byte *)(uVar8 + 0x10 + param_1) ^ (byte)uVar7;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
      local_68 = (int)uVar8 + 1U & 0xf;
      uVar8 = (ulonglong)local_68;
    } while (local_68 != 0);
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    local_48 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
      lVar10 = 0xc0;
      do {
        (*pcVar3)(param_1,param_1 + 0x10,uVar5);
        uVar9 = uVar9 + 1;
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *param_3 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
        param_3 = param_3 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      local_48 = local_48 - 1;
    } while (local_48 != 0);
    uVar8 = (ulonglong)local_68;
  }
  if (((param_4 & 0xfffffffffffffff0) != 0) &&
     ((*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_2), 0xf < param_4)) {
    uVar8 = param_4 >> 4;
    param_4 = param_4 + uVar8 * -0x10;
    do {
      (*pcVar3)(param_1,param_1 + 0x10,uVar5);
      uVar9 = uVar9 + 1;
      *(uint *)(param_1 + 0xc) =
           uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
      *param_3 = *param_2 ^ *(ulonglong *)(param_1 + 0x10);
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar1 ^ *(ulonglong *)(param_1 + 0x18);
      param_3 = param_3 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)local_68;
  }
  if (param_4 != 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar5);
    uVar9 = uVar9 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    do {
      uVar7 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar2 = *(byte *)(uVar8 + (longlong)param_2);
      *(byte *)(uVar7 + 0x188 + param_1) = bVar2;
      *(byte *)(uVar8 + (longlong)param_3) = *(byte *)(uVar8 + 0x10 + param_1) ^ bVar2;
      param_4 = param_4 - 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (param_4 != 0);
  }
LAB_144ed7ec6:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 144ed7f00 FUN_144ed7f00 body=767 status=ok
// SIG undefined FUN_144ed7f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ed7f00(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8;
  uint local_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  pcVar2 = *(code **)(param_1 + 0x168);
  uVar5 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar5) || (uVar5 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar5;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  local_58 = local_res8 & 0xf;
  uVar5 = (ulonglong)local_58;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar5 != 0) goto LAB_144ed81c7;
        break;
      }
      param_4 = param_4 - 1;
      bVar4 = *(byte *)(uVar5 + 0x10 + param_1) ^ *param_2;
      param_2 = param_2 + 1;
      *param_3 = bVar4;
      param_3 = param_3 + 1;
      uVar3 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      local_58 = (int)uVar5 + 1U & 0xf;
      uVar5 = (ulonglong)local_58;
      *(byte *)(uVar3 + 0x188 + param_1) = bVar4;
    } while (local_58 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar5 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*param_5)(param_2,param_3,0xc0,uVar1,param_1);
      uVar6 = uVar6 + 0xc0;
      *(uint *)(param_1 + 0xc) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
      (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)local_58;
  }
  uVar3 = param_4 & 0xfffffffffffffff0;
  if (uVar3 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar1,param_1);
    uVar6 = uVar6 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    param_2 = param_2 + uVar3;
    param_4 = param_4 - uVar3;
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_3,uVar3);
    param_3 = param_3 + uVar3;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar1);
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    do {
      bVar4 = param_2[uVar5] ^ *(byte *)(uVar5 + 0x10 + param_1);
      uVar3 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      param_3[uVar5] = bVar4;
      *(byte *)(uVar3 + 0x188 + param_1) = bVar4;
      param_4 = param_4 - 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (param_4 != 0);
  }
LAB_144ed81c7:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 144ed8200 FUN_144ed8200 body=752 status=ok
// SIG undefined FUN_144ed8200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ed8200(longlong param_1,byte *param_2,byte *param_3,ulonglong param_4,code *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8;
  uint local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  pcVar3 = *(code **)(param_1 + 0x168);
  uVar5 = *(longlong *)(param_1 + 0x38) + param_4;
  if ((0xfffffffe0 < uVar5) || (uVar5 < param_4)) {
    return 0xffffffff;
  }
  local_res8 = *(uint *)(param_1 + 0x170);
  *(ulonglong *)(param_1 + 0x38) = uVar5;
  if (*(int *)(param_1 + 0x174) != 0) {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    local_res8 = 0x10;
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  local_58 = local_res8 & 0xf;
  uVar5 = (ulonglong)local_58;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (local_58 != 0) {
    do {
      if (param_4 == 0) {
        param_4 = 0;
        if ((int)uVar5 != 0) goto LAB_144ed84b8;
        break;
      }
      bVar1 = *param_2;
      param_4 = param_4 - 1;
      uVar4 = (ulonglong)local_res8;
      param_2 = param_2 + 1;
      local_res8 = local_res8 + 1;
      *(byte *)(uVar4 + 0x188 + param_1) = bVar1;
      *param_3 = *(byte *)(uVar5 + 0x10 + param_1) ^ bVar1;
      param_3 = param_3 + 1;
      local_58 = (int)uVar5 + 1U & 0xf;
      uVar5 = (ulonglong)local_58;
    } while (local_58 != 0);
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if ((0xf < param_4) && (local_res8 != 0)) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_res8);
    local_res8 = 0;
  }
  if (0xbff < param_4) {
    uVar5 = param_4 / 0xc00;
    param_4 = param_4 % 0xc00;
    do {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
      (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
      uVar6 = uVar6 + 0xc0;
      param_3 = param_3 + 0xc00;
      param_2 = param_2 + 0xc00;
      *(uint *)(param_1 + 0xc) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = (ulonglong)local_58;
  }
  uVar4 = param_4 & 0xfffffffffffffff0;
  if (uVar4 != 0) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,uVar4);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    uVar6 = uVar6 + (int)(param_4 >> 4);
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    param_3 = param_3 + uVar4;
    param_2 = param_2 + uVar4;
    param_4 = param_4 - uVar4;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0xc) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    do {
      uVar4 = (ulonglong)local_res8;
      local_res8 = local_res8 + 1;
      bVar1 = param_2[uVar5];
      *(byte *)(uVar4 + 0x188 + param_1) = bVar1;
      param_3[uVar5] = *(byte *)(uVar5 + 0x10 + param_1) ^ bVar1;
      param_4 = param_4 - 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (param_4 != 0);
  }
LAB_144ed84b8:
  *(uint *)(param_1 + 0x170) = local_res8;
  return 0;
}



// FUNCTION 144ed84f0 FUN_144ed84f0 body=295 status=ok
// SIG undefined FUN_144ed84f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed84f0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x170);
  pcVar5 = *(code **)(param_1 + 0x168);
  uVar9 = lVar3 << 3;
  uVar10 = lVar4 << 3;
  if (uVar2 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x174) != 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
    }
  }
  else {
    uVar7 = uVar2 + 0xf & 0xfffffff0;
    memset((void *)(param_1 + 0x188 + (ulonglong)uVar2),0,(ulonglong)(uVar7 - uVar2));
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0x30) {
      (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,0x30);
      uVar8 = 0;
    }
  }
  uVar7 = (uint)(uVar9 >> 0x18);
  uVar2 = (uint)(uVar9 >> 8);
  local_38 = ((uint)((ulonglong)lVar3 >> 0x20) & 0x1fffffff) >> 0x15 |
             ((uint)(uVar9 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_34 = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar9 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x3b) >> 0x20);
  uVar7 = (uint)(uVar10 >> 0x18);
  uVar2 = (uint)(uVar10 >> 8);
  uStack_30 = ((uint)((ulonglong)lVar4 >> 0x20) & 0x1fffffff) >> 0x15 |
              ((uint)(uVar10 >> 0x20) & 0xff0000) >> 8 | uVar7 & 0xff0000 | uVar2 & 0xff000000;
  uStack_2c = uVar7 & 0xff | uVar2 & 0xff00 | (uint)(((uVar10 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar4 << 0x3b) >> 0x20);
  puVar1 = (uint *)(uVar8 + 0x188 + param_1);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  (*pcVar5)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(int)uVar8 + 0x10);
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) ^ *(ulonglong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) ^ *(ulonglong *)(param_1 + 0x28);
  if ((param_2 == 0) || (0x10 < param_3)) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_14259f120(param_1 + 0x40,param_2,param_3);
  }
  return uVar6;
}



// FUNCTION 144ed8620 FUN_144ed8620 body=83 status=ok
// SIG undefined FUN_144ed8620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed8620(longlong param_1,void *param_2,ulonglong param_3)

{
  size_t _Size;
  
  FUN_144ed84f0(param_1,0,0);
  _Size = 0x10;
  if (param_3 < 0x11) {
    _Size = param_3;
  }
  memcpy(param_2,(void *)(param_1 + 0x40),_Size);
  return;
}



// FUNCTION 144ed8680 FUN_144ed8680 body=561 status=ok
// SIG undefined FUN_144ed8680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed8680(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *param_2;
  uVar6 = param_2[1];
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar6;
  uVar4 = uVar3 >> 1 ^ -(ulonglong)((uint)uVar6 & 1) & 0xe100000000000000;
  uVar1 = uVar3 << 0x3f | uVar6 >> 1;
  uVar2 = uVar1 >> 1;
  uVar3 = (uVar3 >> 1) << 0x3f | uVar2;
  uVar5 = uVar4 >> 1;
  uVar6 = uVar5 ^ -(ulonglong)((uint)(uVar6 >> 1) & 1) & 0xe100000000000000;
  uVar5 = uVar5 << 0x3f | uVar3 >> 1;
  uVar7 = uVar6 >> 1 ^ -(ulonglong)((uint)uVar2 & 1) & 0xe100000000000000;
  param_1[8] = uVar4;
  param_1[9] = uVar1;
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  param_1[4] = uVar6;
  param_1[5] = uVar3;
  uVar3 = param_1[5];
  uVar6 = param_1[4];
  uVar8 = uVar3 ^ uVar5;
  param_1[7] = uVar8;
  uVar9 = uVar6 ^ uVar7;
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  param_1[6] = uVar9;
  param_1[0xc] = uVar6 ^ uVar1;
  uVar10 = param_1[2] ^ uVar1;
  uVar7 = param_1[3] ^ uVar2;
  param_1[10] = uVar10;
  param_1[0xb] = uVar7;
  param_1[0xd] = uVar3 ^ uVar2;
  param_1[0xe] = uVar9 ^ uVar1;
  uVar5 = param_1[0x10];
  uVar4 = param_1[0x11];
  param_1[0xf] = uVar8 ^ uVar2;
  param_1[0x12] = param_1[2] ^ uVar5;
  param_1[0x15] = uVar3 ^ uVar4;
  param_1[0x13] = param_1[3] ^ uVar4;
  param_1[0x17] = uVar8 ^ uVar4;
  param_1[0x14] = uVar6 ^ uVar5;
  param_1[0x16] = uVar9 ^ uVar5;
  param_1[0x1b] = uVar7 ^ uVar4;
  param_1[0x18] = param_1[8] ^ uVar5;
  param_1[0x1d] = uVar3 ^ uVar2 ^ uVar4;
  param_1[0x1f] = uVar8 ^ uVar2 ^ uVar4;
  param_1[0x19] = param_1[9] ^ uVar4;
  param_1[0x1a] = uVar10 ^ uVar5;
  param_1[0x1c] = uVar6 ^ uVar1 ^ uVar5;
  param_1[0x1e] = uVar9 ^ uVar1 ^ uVar5;
  return;
}



// FUNCTION 144ed88c0 FUN_144ed88c0 body=50 status=ok
// SIG undefined FUN_144ed88c0(void)

void FUN_144ed88c0(byte *param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  *param_1 = ((byte)(param_2 - 2U >> 1) & 7) << 3 | param_3 - 1U & 7;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}



// FUNCTION 144ed8900 FUN_144ed8900 body=164 status=ok
// SIG undefined FUN_144ed8900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed8900(byte *param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong _Size;
  uint uVar1;
  
  uVar1 = *param_1 & 7;
  _Size = (ulonglong)(0xe - uVar1);
  if (param_3 < _Size) {
    return 0xffffffff;
  }
  if (uVar1 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    param_1[8] = (byte)((ulonglong)param_4 >> 0x38);
    param_1[9] = (byte)((ulonglong)param_4 >> 0x30);
    param_1[10] = (byte)((ulonglong)param_4 >> 0x28);
    param_1[0xb] = (byte)((ulonglong)param_4 >> 0x20);
  }
  param_1[0xf] = (byte)param_4;
  *param_1 = *param_1 & 0xbf;
  param_1[0xc] = (byte)((ulonglong)param_4 >> 0x18);
  param_1[0xd] = (byte)((ulonglong)param_4 >> 0x10);
  param_1[0xe] = (byte)((ulonglong)param_4 >> 8);
  memcpy(param_1 + 1,param_2,_Size);
  return 0;
}



// FUNCTION 144ed89b0 FUN_144ed89b0 body=349 status=ok
// SIG undefined FUN_144ed89b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed89b0(byte *param_1,byte *param_2,undefined1 *param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar4;
  
  if (param_3 != (undefined1 *)0x0) {
    pcVar1 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    (*pcVar1)(param_1,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    bVar8 = (byte)param_3;
    bVar2 = (byte)((ulonglong)param_3 >> 8);
    if (&DAT_0000feff < param_3) {
      param_1[0x10] = ~param_1[0x10];
      bVar3 = (byte)((ulonglong)param_3 >> 0x10);
      bVar4 = (byte)((ulonglong)param_3 >> 0x18);
      if (param_3 < (undefined1 *)0x100000000) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        uVar7 = 6;
        param_1[0x12] = param_1[0x12] ^ bVar4;
        param_1[0x13] = param_1[0x13] ^ bVar3;
        param_1[0x14] = param_1[0x14] ^ bVar2;
        param_1[0x15] = param_1[0x15] ^ bVar8;
      }
      else {
        param_1[0x11] = ~param_1[0x11];
        uVar7 = 10;
        param_1[0x12] = param_1[0x12] ^ (byte)((ulonglong)param_3 >> 0x38);
        param_1[0x13] = param_1[0x13] ^ (byte)((ulonglong)param_3 >> 0x30);
        param_1[0x14] = param_1[0x14] ^ (byte)((ulonglong)param_3 >> 0x28);
        param_1[0x15] = param_1[0x15] ^ (byte)((ulonglong)param_3 >> 0x20);
        param_1[0x16] = param_1[0x16] ^ bVar4;
        param_1[0x17] = param_1[0x17] ^ bVar3;
        param_1[0x18] = param_1[0x18] ^ bVar2;
        param_1[0x19] = param_1[0x19] ^ bVar8;
      }
    }
    else {
      uVar7 = 2;
      param_1[0x10] = param_1[0x10] ^ bVar2;
      param_1[0x11] = param_1[0x11] ^ bVar8;
    }
    do {
      pbVar5 = param_1 + uVar7 + 0x10;
      do {
        if (param_3 == (undefined1 *)0x0) break;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        *pbVar5 = *pbVar5 ^ *param_2;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
        param_3 = param_3 + -1;
      } while (uVar6 < 0x10);
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,*(undefined8 *)(param_1 + 0x30));
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      uVar7 = 0;
    } while (param_3 != (undefined1 *)0x0);
  }
  return;
}



// FUNCTION 144ed8b10 FUN_144ed8b10 body=674 status=ok
// SIG undefined FUN_144ed8b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed8b10(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  code *pcVar15;
  undefined1 auStack_88 [32];
  byte local_68;
  uint local_64;
  code *local_60;
  ulonglong local_50 [3];
  
  local_50[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_1;
  uVar8 = (uint)local_68;
  pcVar15 = *(code **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_60 = pcVar15;
  if ((local_68 & 0x40) == 0) {
    (*pcVar15)(param_1,param_1 + 0x10,uVar3);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  pcVar7 = local_60;
  uVar11 = 0;
  *param_1 = (byte)(uVar8 & 7);
  local_64 = 0xf - (uVar8 & 7);
  if (local_64 < 0xf) {
    pbVar12 = param_1 + local_64;
    uVar14 = (ulonglong)(0xf - local_64);
    do {
      bVar2 = *pbVar12;
      *pbVar12 = 0;
      pbVar12 = pbVar12 + 1;
      uVar11 = (uVar11 | bVar2) << 8;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if (((uVar11 | bVar2) == param_4) &&
     (*(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3),
     *(ulonglong *)(param_1 + 0x20) < 0x2000000000000001)) {
    if (0xf < param_4) {
      uVar11 = param_4 >> 4;
      param_4 = param_4 + uVar11 * -0x10;
      do {
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ *param_2;
        *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ param_2[1];
        (*pcVar7)(param_1 + 0x10,param_1 + 0x10,uVar3);
        (*pcVar7)(param_1,local_50,uVar3);
        uVar14 = 8;
        do {
          uVar8 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar8;
          pbVar12 = param_1 + uVar14 + 8;
          *pbVar12 = *pbVar12 + 1;
          if (*pbVar12 != 0) break;
        } while (uVar8 != 0);
        *param_3 = *param_2 ^ local_50[0];
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3[1] = *puVar1 ^ local_50[1];
        param_3 = param_3 + 2;
        uVar11 = uVar11 - 1;
        pcVar15 = local_60;
      } while (uVar11 != 0);
    }
    uVar8 = local_64;
    uVar14 = 0;
    uVar11 = uVar14;
    if (param_4 != 0) {
      do {
        uVar13 = (ulonglong)((int)uVar11 + 1);
        param_1[uVar11 + 0x10] = param_1[uVar11 + 0x10] ^ *(byte *)(uVar11 + (longlong)param_2);
        uVar11 = uVar13;
      } while (uVar13 < param_4);
      (*pcVar15)(param_1 + 0x10,param_1 + 0x10,uVar3);
      (*pcVar15)(param_1,local_50,uVar3);
      uVar11 = uVar14;
      if (0x1f < param_4) {
        uVar9 = (int)param_4 - 1;
        uVar11 = 0;
        if ((((ulonglong *)((longlong)local_50 + (ulonglong)uVar9) < param_3) ||
            ((ulonglong *)((ulonglong)uVar9 + (longlong)param_3) < local_50)) &&
           (((ulonglong *)((ulonglong)uVar9 + (longlong)param_2) < param_3 ||
            ((ulonglong *)((ulonglong)uVar9 + (longlong)param_3) < param_2)))) {
          do {
            uVar13 = ((ulonglong *)(uVar14 + (longlong)param_2))[1];
            uVar10 = (ulonglong)((int)uVar14 + 0x10);
            uVar9 = (int)uVar14 + 0x20;
            uVar11 = (ulonglong)uVar9;
            uVar4 = *(ulonglong *)((longlong)local_50 + uVar14 + 8);
            uVar5 = *(ulonglong *)((longlong)local_50 + uVar10);
            uVar6 = *(ulonglong *)((longlong)local_50 + uVar10 + 8);
            *(ulonglong *)(uVar14 + (longlong)param_3) =
                 *(ulonglong *)(uVar14 + (longlong)param_2) ^
                 *(ulonglong *)((longlong)local_50 + uVar14);
            ((ulonglong *)(uVar14 + (longlong)param_3))[1] = uVar13 ^ uVar4;
            uVar14 = (ulonglong)uVar9;
            uVar13 = ((ulonglong *)(uVar10 + (longlong)param_2))[1];
            *(ulonglong *)(uVar10 + (longlong)param_3) =
                 *(ulonglong *)(uVar10 + (longlong)param_2) ^ uVar5;
            ((ulonglong *)(uVar10 + (longlong)param_3))[1] = uVar13 ^ uVar6;
          } while (uVar14 < (param_4 & 0xffffffffffffffe0));
        }
      }
      for (; uVar11 < param_4; uVar11 = (ulonglong)((int)uVar11 + 1)) {
        *(byte *)(uVar11 + (longlong)param_3) =
             *(byte *)(uVar11 + (longlong)param_2) ^ *(byte *)((longlong)local_50 + uVar11);
      }
    }
    if (uVar8 < 0x10) {
      pbVar12 = param_1 + uVar8;
      for (uVar11 = (ulonglong)(0x10 - uVar8); uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar12 = 0;
        pbVar12 = pbVar12 + 1;
      }
    }
    (*pcVar15)(param_1,local_50,uVar3);
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50[0];
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_50[1];
    *param_1 = local_68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50[2] ^ (ulonglong)auStack_88);
}



// FUNCTION 144ed8dd0 FUN_144ed8dd0 body=456 status=ok
// SIG undefined FUN_144ed8dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed8dd0(byte *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  byte local_58;
  uint local_54;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_58 = bVar4;
  if ((bVar4 & 0x40) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar2);
  }
  uVar5 = 0;
  *param_1 = (byte)(bVar4 & 7);
  local_54 = 0xf - (bVar4 & 7);
  if (local_54 < 0xf) {
    pbVar6 = param_1 + local_54;
    uVar7 = (ulonglong)(0xf - local_54);
    do {
      bVar4 = *pbVar6;
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
      uVar5 = (uVar5 | bVar4) << 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  bVar4 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar5 | bVar4) == param_4) {
    if (0xf < param_4) {
      uVar5 = param_4 >> 4;
      param_4 = param_4 + uVar5 * -0x10;
      do {
        (*pcVar1)(param_1,&local_50,uVar2);
        uVar7 = 8;
        do {
          uVar3 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar3;
          pbVar6 = param_1 + uVar7 + 8;
          *pbVar6 = *pbVar6 + 1;
          if (*pbVar6 != 0) break;
        } while (uVar3 != 0);
        uVar7 = *param_2;
        *param_3 = uVar7 ^ local_50;
        *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ uVar7 ^ local_50;
        uVar7 = param_2[1];
        param_3[1] = uVar7 ^ local_48;
        *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ uVar7 ^ local_48;
        (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar2);
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    if (param_4 != 0) {
      (*pcVar1)(param_1,&local_50,uVar2);
      if (param_4 != 0) {
        do {
          uVar7 = (ulonglong)((int)uVar5 + 1);
          bVar4 = *(byte *)(uVar5 + (longlong)param_2) ^ *(byte *)((longlong)&local_50 + uVar5);
          *(byte *)(uVar5 + (longlong)param_3) = bVar4;
          param_1[uVar5 + 0x10] = param_1[uVar5 + 0x10] ^ bVar4;
          uVar5 = uVar7;
        } while (uVar7 < param_4);
      }
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar2);
    }
    if (local_54 < 0x10) {
      pbVar6 = param_1 + local_54;
      for (uVar5 = (ulonglong)(0x10 - local_54); uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar6 = 0;
        pbVar6 = pbVar6 + 1;
      }
    }
    (*pcVar1)(param_1,&local_50,uVar2);
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_50;
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_48;
    *param_1 = local_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 144ed8fb0 FUN_144ed8fb0 body=699 status=ok
// SIG undefined FUN_144ed8fb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed8fb0(byte *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4,
                  code *param_5)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  undefined8 local_70;
  code *local_68;
  ulonglong local_60 [4];
  
  local_60[3] = 0x144ed8fc7;
  local_60[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar2 = *param_1;
  local_70 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(code **)(param_1 + 0x28);
  local_78 = bVar2;
  if ((bVar2 & 0x40) == 0) {
    (*local_68)(param_1,param_1 + 0x10);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  }
  uVar14 = 0;
  *param_1 = (byte)(bVar2 & 7);
  uVar12 = 0xf - (bVar2 & 7);
  uVar9 = uVar14;
  if (uVar12 < 0xf) {
    pbVar10 = param_1 + uVar12;
    uVar11 = (ulonglong)(0xf - uVar12);
    do {
      bVar2 = *pbVar10;
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
      uVar9 = (uVar9 | bVar2) << 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  bVar2 = param_1[0xf];
  param_1[0xf] = 1;
  if (((uVar9 | bVar2) != param_4) ||
     (*(ulonglong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + ((param_4 + 0xf | 8) >> 3),
     0x2000000000000000 < *(ulonglong *)(param_1 + 0x20))) goto LAB_144ed925e;
  uVar9 = param_4 >> 4;
  if (uVar9 == 0) {
LAB_144ed9131:
    pcVar6 = local_68;
    uVar13 = local_70;
    uVar9 = uVar14;
    if (param_4 != 0) {
      do {
        uVar11 = (ulonglong)((int)uVar9 + 1);
        param_1[uVar9 + 0x10] = param_1[uVar9 + 0x10] ^ *(byte *)(uVar9 + (longlong)param_2);
        uVar9 = uVar11;
      } while (uVar11 < param_4);
      (*local_68)(param_1 + 0x10,param_1 + 0x10,local_70);
      (*pcVar6)(param_1,local_60,uVar13);
      uVar9 = uVar14;
      if (0x1f < param_4) {
        uVar7 = (int)param_4 - 1;
        uVar9 = 0;
        if ((((longlong)local_60 + (ulonglong)uVar7 < param_3) ||
            ((ulonglong *)(uVar7 + param_3) < local_60)) &&
           (((ulonglong)uVar7 + (longlong)param_2 < param_3 ||
            ((ulonglong *)(uVar7 + param_3) < param_2)))) {
          do {
            uVar11 = ((ulonglong *)(uVar14 + (longlong)param_2))[1];
            uVar8 = (ulonglong)((int)uVar14 + 0x10);
            uVar7 = (int)uVar14 + 0x20;
            uVar9 = (ulonglong)uVar7;
            uVar3 = *(ulonglong *)((longlong)local_60 + uVar14 + 8);
            uVar4 = *(ulonglong *)((longlong)local_60 + uVar8);
            uVar5 = *(ulonglong *)((longlong)local_60 + uVar8 + 8);
            *(ulonglong *)(uVar14 + param_3) =
                 *(ulonglong *)(uVar14 + (longlong)param_2) ^
                 *(ulonglong *)((longlong)local_60 + uVar14);
            ((ulonglong *)(uVar14 + param_3))[1] = uVar11 ^ uVar3;
            uVar14 = (ulonglong)uVar7;
            uVar11 = ((ulonglong *)(uVar8 + (longlong)param_2))[1];
            *(ulonglong *)(uVar8 + param_3) = *(ulonglong *)(uVar8 + (longlong)param_2) ^ uVar4;
            ((ulonglong *)(uVar8 + param_3))[1] = uVar11 ^ uVar5;
          } while (uVar14 < (param_4 & 0xffffffffffffffe0));
        }
      }
      for (; uVar9 < param_4; uVar9 = (ulonglong)((int)uVar9 + 1)) {
        *(byte *)(uVar9 + param_3) =
             *(byte *)(uVar9 + (longlong)param_2) ^ *(byte *)((longlong)local_60 + uVar9);
      }
    }
  }
  else {
    local_80 = param_1 + 0x10;
    local_88 = param_1;
    (*param_5)(param_2,param_3,uVar9,local_70);
    param_2 = param_2 + uVar9 * 2;
    param_3 = param_3 + uVar9 * 0x10;
    param_4 = param_4 + uVar9 * -0x10;
    uVar13 = local_70;
    if (param_4 != 0) {
      pbVar10 = param_1 + 0x10;
      uVar11 = uVar14;
      do {
        pbVar1 = pbVar10 + -1;
        pbVar10 = pbVar10 + -1;
        uVar11 = uVar11 + *pbVar1 + (uVar9 & 0xff);
        uVar9 = uVar9 >> 8;
        *pbVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 8;
        if (pbVar10 == param_1 + 8) break;
      } while ((uVar9 != 0) || (uVar11 != 0));
      goto LAB_144ed9131;
    }
  }
  if (uVar12 < 0x10) {
    pbVar10 = param_1 + uVar12;
    for (uVar9 = (ulonglong)(0x10 - uVar12); uVar9 != 0; uVar9 = uVar9 - 1) {
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
    }
  }
  (*local_68)(param_1,local_60,uVar13);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60[0];
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_60[1];
  *param_1 = local_78;
LAB_144ed925e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60[2] ^ (ulonglong)auStack_a8);
}



// FUNCTION 144ed9280 FUN_144ed9280 body=504 status=ok
// SIG undefined FUN_144ed9280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed9280(byte *param_1,longlong param_2,longlong param_3,ulonglong param_4,code *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  byte local_78;
  longlong local_70;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x144ed9297;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar4 = *param_1;
  local_68 = *(code **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_78 = bVar4;
  local_70 = param_3;
  if ((bVar4 & 0x40) == 0) {
    (*local_68)(param_1,param_1 + 0x10,uVar2);
  }
  uVar7 = 0;
  *param_1 = (byte)(bVar4 & 7);
  uVar10 = 0xf - (bVar4 & 7);
  uVar5 = uVar7;
  if (uVar10 < 0xf) {
    pbVar6 = param_1 + uVar10;
    uVar8 = (ulonglong)(0xf - uVar10);
    do {
      bVar4 = *pbVar6;
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
      uVar5 = (uVar5 | bVar4) << 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  bVar4 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar5 | bVar4) != param_4) goto LAB_144ed946b;
  uVar5 = param_4 >> 4;
  lVar9 = local_70;
  if (uVar5 == 0) {
LAB_144ed93d8:
    pcVar3 = local_68;
    if (param_4 != 0) {
      (*local_68)(param_1,&local_60,uVar2);
      if (param_4 != 0) {
        do {
          uVar5 = (ulonglong)((int)uVar7 + 1);
          bVar4 = *(byte *)(uVar7 + param_2) ^ *(byte *)((longlong)&local_60 + uVar7);
          *(byte *)(uVar7 + lVar9) = bVar4;
          param_1[uVar7 + 0x10] = param_1[uVar7 + 0x10] ^ bVar4;
          uVar7 = uVar5;
        } while (uVar5 < param_4);
      }
      (*pcVar3)(param_1 + 0x10,param_1 + 0x10,uVar2);
    }
  }
  else {
    local_80 = param_1 + 0x10;
    local_88 = param_1;
    (*param_5)(param_2,local_70,uVar5,uVar2);
    param_2 = param_2 + uVar5 * 0x10;
    lVar9 = local_70 + uVar5 * 0x10;
    param_4 = param_4 + uVar5 * -0x10;
    if (param_4 != 0) {
      pbVar6 = param_1 + 0x10;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar6 + -1;
        pbVar6 = pbVar6 + -1;
        uVar8 = uVar8 + *pbVar1 + (uVar5 & 0xff);
        uVar5 = uVar5 >> 8;
        *pbVar6 = (byte)uVar8;
        uVar8 = uVar8 >> 8;
        if (pbVar6 == param_1 + 8) break;
      } while ((uVar5 != 0) || (uVar8 != 0));
      goto LAB_144ed93d8;
    }
  }
  if (uVar10 < 0x10) {
    pbVar6 = param_1 + uVar10;
    for (uVar5 = (ulonglong)(0x10 - uVar10); uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
    }
  }
  (*local_68)(param_1,&local_60,uVar2);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ local_60;
  *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) ^ local_58;
  *param_1 = local_78;
LAB_144ed946b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144ed9490 FUN_144ed9490 body=71 status=ok
// SIG undefined FUN_144ed9490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ed9490(byte *param_1,void *param_2,ulonglong param_3)

{
  ulonglong _Size;
  
  _Size = (ulonglong)((*param_1 >> 3 & 7) * 2 + 2);
  if (param_3 != _Size) {
    return 0;
  }
  memcpy(param_2,param_1 + 0x10,_Size);
  return _Size;
}



// FUNCTION 144ed94e0 FUN_144ed94e0 body=594 status=ok
// SIG undefined FUN_144ed94e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed94e0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
                  ulonglong param_5,int param_6)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144ed94f4;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0xf < param_5) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    (*(code *)param_1[3])(&local_58,&local_58,param_1[1]);
    if ((param_6 == 0) && ((param_5 & 0xf) != 0)) {
      param_5 = param_5 - 0x10;
    }
    while (0xf < param_5) {
      local_68 = *param_3 ^ local_58;
      uStack_60 = param_3[1] ^ uStack_50;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_3 = param_3 + 2;
      *param_4 = local_68 ^ local_58;
      local_68 = local_68 ^ local_58;
      param_4[1] = uStack_60 ^ uStack_50;
      param_4 = param_4 + 2;
      uStack_60 = uStack_60 ^ uStack_50;
      param_5 = param_5 - 0x10;
      if (param_5 == 0) goto LAB_144ed9726;
      uVar4 = local_58 >> 0x3f;
      local_58 = (ulonglong)(uStack_50._4_4_ >> 0x1f & 0x87) ^ local_58 * 2;
      uStack_50 = uStack_50 * 2 | uVar4;
    }
    if (param_6 == 0) {
      local_48 = (ulonglong)((uint)((longlong)uStack_50 >> 0x3f) & 0x87) ^ local_58 * 2;
      uStack_40 = local_58 >> 0x3f | uStack_50 * 2;
      local_68 = *param_3 ^ local_48;
      uStack_60 = param_3[1] ^ uStack_40;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      uVar3 = 0;
      local_68 = local_48 ^ local_68;
      uStack_60 = uStack_40 ^ uStack_60;
      if (param_5 != 0) {
        uVar4 = 0;
        do {
          uVar1 = uVar3 + 0x10;
          uVar3 = uVar3 + 1;
          uVar2 = *(undefined1 *)((longlong)&local_68 + uVar4);
          *(undefined1 *)((longlong)&local_68 + uVar4) =
               *(undefined1 *)((ulonglong)uVar1 + (longlong)param_3);
          uVar4 = (ulonglong)uVar3;
          *(undefined1 *)((ulonglong)uVar1 + (longlong)param_4) = uVar2;
        } while (uVar4 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      *param_4 = local_58 ^ local_68;
      param_4[1] = uStack_50 ^ uStack_60;
    }
    else {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar4 = 0;
        do {
          uVar2 = *(undefined1 *)(uVar4 + (longlong)param_3);
          uVar3 = uVar3 + 1;
          *(undefined1 *)(uVar4 + (longlong)param_4) = *(undefined1 *)((longlong)&local_68 + uVar4);
          *(undefined1 *)((longlong)&local_68 + uVar4) = uVar2;
          uVar4 = (ulonglong)uVar3;
        } while (uVar4 < param_5);
      }
      local_68 = local_58 ^ local_68;
      uStack_60 = uStack_50 ^ uStack_60;
      (*(code *)param_1[2])(&local_68,&local_68,*param_1);
      param_4[-2] = local_58 ^ local_68;
      param_4[-1] = uStack_50 ^ uStack_60;
    }
  }
LAB_144ed9726:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144ed9740 FUN_144ed9740 body=346 status=ok
// SIG undefined FUN_144ed9740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed9740(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                  ulonglong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  if (((param_5 & 7) == 0) && (param_5 - 0x10 < 0x7ffffff1)) {
    uVar4 = 1;
    memmove(param_3 + 1,param_4,param_5);
    lVar6 = 6;
    puVar3 = &DAT_149bfd778;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    local_50 = *puVar3;
    do {
      if (param_5 != 0) {
        lVar5 = (param_5 - 1 >> 3) + 1;
        puVar3 = param_3 + 1;
        do {
          local_48 = *puVar3;
          (*param_6)(&local_50,&local_50,param_1);
          uVar2 = local_50;
          bVar1 = local_50._7_1_ ^ (byte)uVar4;
          local_50 = CONCAT17(bVar1,(undefined7)local_50);
          if (0xff < uVar4) {
            local_50._6_1_ = SUB81(uVar2,6);
            local_50._5_1_ = SUB81(uVar2,5);
            local_50._4_1_ = SUB81(uVar2,4);
            local_50._4_1_ = local_50._4_1_ ^ (byte)(uVar4 >> 0x18);
            local_50._0_4_ = (undefined4)uVar2;
            local_50 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_50._6_1_ ^ (byte)(uVar4 >> 8)),
                                         local_50._5_1_ ^ (byte)(uVar4 >> 0x10)),
                                CONCAT14(local_50._4_1_,(undefined4)local_50));
          }
          uVar4 = uVar4 + 1;
          *puVar3 = local_48;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_58 = local_50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 144ed98b0 FUN_144ed98b0 body=147 status=ok
// SIG undefined FUN_144ed98b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed98b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_6;
  local_38 = param_5;
  lVar2 = FUN_144ed9bf0(param_1,local_28);
  if (lVar2 != 0) {
    puVar3 = &DAT_149bfd778;
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = param_2;
    }
    iVar1 = FUN_14259f120(local_28,puVar3,8);
    if (iVar1 != 0) {
      FUN_14259f0c0(param_3,lVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 144ed9950 FUN_144ed9950 body=285 status=ok
// SIG undefined FUN_144ed9950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed9950(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                  size_t param_5,code *param_6)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  code *local_50;
  undefined4 local_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  ulonglong local_40;
  undefined8 uStack_38;
  
  uStack_38 = 0x144ed9963;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = param_5 + 7 & 0xfffffffffffffff8;
  if (param_5 - 1 < 0x7fffffff) {
    local_48 = 0xa65959a6;
    if (param_2 != (undefined4 *)0x0) {
      local_48 = *param_2;
    }
    uStack_41 = (undefined1)param_5;
    uStack_44 = (undefined1)(param_5 >> 0x18);
    uStack_43 = (undefined1)(param_5 >> 0x10);
    uStack_42 = (undefined1)(param_5 >> 8);
    if (uVar1 == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT17(uStack_41,
                          CONCAT16(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,local_48))));
      memset((void *)(param_5 + 8 + (longlong)param_3),0,uVar1 - param_5);
      (*param_6)(param_3,param_3,param_1);
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)(param_5 + (longlong)param_3),0,uVar1 - param_5);
      local_50 = param_6;
      local_58 = uVar1;
      FUN_144ed9740(param_1,&local_48,param_3,param_3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 144ed9a80 FUN_144ed9a80 body=347 status=ok
// SIG undefined FUN_144ed9a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed9a80(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  ulonglong param_5,code *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_5 & 7) != 0) || (0x7fffffef < param_5 - 0x10)) goto LAB_144ed9bbb;
  if (param_5 == 0x10) {
    (*param_6)(param_4,&local_40,param_1);
    local_48 = local_40;
    lVar5 = 8;
    *param_3 = local_38;
    FUN_14259f0c0(&local_40,0x10);
LAB_144ed9b37:
    puVar3 = &DAT_149bfd780;
    if (param_2 != (undefined4 *)0x0) {
      puVar3 = param_2;
    }
    iVar1 = FUN_14259f120(&local_48,puVar3,4);
    if (iVar1 == 0) {
      uVar4 = (ulonglong)
              CONCAT31(CONCAT21(CONCAT11(local_48._4_1_,local_48._5_1_),local_48._6_1_),
                       local_48._7_1_);
      if ((((param_5 & 0xfffffffffffffff8) - 0x10 < uVar4) &&
          (uVar4 <= (param_5 & 0xfffffffffffffff8) - 8)) &&
         (iVar1 = FUN_14259f120((longlong)param_3 + uVar4,&DAT_14c797460,lVar5 - uVar4), iVar1 == 0)
         ) goto LAB_144ed9bbb;
    }
  }
  else {
    local_50 = param_6;
    local_58 = param_5;
    lVar5 = param_5 - 8;
    lVar2 = FUN_144ed9bf0(param_1,&local_48);
    if (lVar5 == lVar2) goto LAB_144ed9b37;
  }
  FUN_14259f0c0(param_3,param_5);
LAB_144ed9bbb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 144ed9bf0 FUN_144ed9bf0 body=346 status=ok
// SIG undefined FUN_144ed9bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed9bf0(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
                  longlong param_5,code *param_6)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _Size = param_5 - 8;
  local_68 = param_2;
  if (((_Size & 7) == 0) && (param_5 - 0x18U < 0x7ffffff1)) {
    local_60 = *param_4;
    uVar3 = (_Size >> 3) * 6;
    memmove(param_3,param_4 + 1,_Size);
    lVar6 = 6;
    do {
      puVar5 = (undefined8 *)((longlong)param_3 + param_5 + -0x10);
      if (_Size != 0) {
        lVar4 = (param_5 - 9U >> 3) + 1;
        do {
          uVar2 = local_60;
          bVar1 = local_60._7_1_ ^ (byte)uVar3;
          local_60 = CONCAT17(bVar1,(undefined7)local_60);
          if (0xff < uVar3) {
            local_60._6_1_ = SUB81(uVar2,6);
            local_60._5_1_ = SUB81(uVar2,5);
            local_60._4_1_ = SUB81(uVar2,4);
            local_60._4_1_ = local_60._4_1_ ^ (byte)(uVar3 >> 0x18);
            local_60._0_4_ = (undefined4)uVar2;
            local_60 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_60._6_1_ ^ (byte)(uVar3 >> 8)),
                                         local_60._5_1_ ^ (byte)(uVar3 >> 0x10)),
                                CONCAT14(local_60._4_1_,(undefined4)local_60));
          }
          local_58 = *puVar5;
          (*param_6)(&local_60,&local_60,param_1);
          uVar3 = uVar3 - 1;
          *puVar5 = local_58;
          puVar5 = puVar5 + -1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *local_68 = local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
}



// FUNCTION 144ed9d60 FUN_144ed9d60 body=443 status=ok
// SIG undefined FUN_144ed9d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ed9d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ed9d7b;
  memset(param_1,0,0xb0);
  param_1[5] = 0;
  param_1[6] = 5;
  lVar5 = FUN_144ea64e0(0x50,"crypto\\modes\\ocb128.c");
  param_1[0xb] = lVar5;
  if (lVar5 != 0) {
    param_1[1] = param_5;
    param_1[4] = param_6;
    *param_1 = param_4;
    param_1[2] = param_2;
    param_1[3] = param_3;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    cVar2 = *(char *)(param_1 + 7);
    FUN_144eda900(param_1 + 7,1,param_1 + 9);
    *(byte *)((longlong)param_1 + 0x57) = *(byte *)((longlong)param_1 + 0x57) ^ cVar2 >> 7 & 0x87U;
    cVar2 = *(char *)(param_1 + 9);
    lVar3 = param_1[0xb];
    FUN_144eda900(param_1 + 9,1,lVar3);
    pbVar1 = (byte *)(lVar3 + 0xf);
    *pbVar1 = *pbVar1 ^ cVar2 >> 7 & 0x87U;
    pcVar4 = (char *)param_1[0xb];
    cVar2 = *pcVar4;
    FUN_144eda900(pcVar4,1,pcVar4 + 0x10);
    pcVar4[0x1f] = pcVar4[0x1f] ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x10);
    FUN_144eda900(lVar3 + 0x10,1,lVar3 + 0x20);
    *(byte *)(lVar3 + 0x2f) = *(byte *)(lVar3 + 0x2f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x20);
    FUN_144eda900(lVar3 + 0x20,1,lVar3 + 0x30);
    *(byte *)(lVar3 + 0x3f) = *(byte *)(lVar3 + 0x3f) ^ cVar2 >> 7 & 0x87U;
    lVar3 = param_1[0xb];
    cVar2 = *(char *)(lVar3 + 0x30);
    FUN_144eda900(lVar3 + 0x30,1,lVar3 + 0x40);
    *(byte *)(lVar3 + 0x4f) = *(byte *)(lVar3 + 0x4f) ^ cVar2 >> 7 & 0x87U;
    param_1[5] = 4;
  }
  else {
    FUN_144ba24f0(0xf,0x7a,0x41,"crypto\\modes\\ocb128.c",0x9f,uVar6);
  }
  return lVar5 != 0;
}



// FUNCTION 144ed9f20 FUN_144ed9f20 body=271 status=ok
// SIG undefined FUN_144ed9f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed9f20(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x144ed9f30;
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  if (param_3 != 0) {
    param_1[2] = param_3;
  }
  if (param_4 != 0) {
    param_1[3] = param_4;
  }
  if (param_2[0xb] != 0) {
    _Dst = (void *)FUN_144ea64e0(param_2[6] << 4,"crypto\\modes\\ocb128.c",0xcd);
    param_1[0xb] = _Dst;
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(0xf,0x79,0x41,"crypto\\modes\\ocb128.c",0xce,uVar5);
      return 0;
    }
    memcpy(_Dst,(void *)param_2[0xb],(param_2[5] + 1) * 0x10);
  }
  return 1;
}



// FUNCTION 144eda030 FUN_144eda030 body=450 status=ok
// SIG undefined FUN_144eda030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda030(undefined8 *param_1,void *param_2,size_t param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined8 uStack_77;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  byte abStack_69 [17];
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  undefined1 local_48 [15];
  byte bStack_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144eda044;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 - 1 < 0xf) && (param_4 - 1U < 0x10)) {
    memset(param_1 + 0xc,0,0x50);
    local_78 = (char)param_4 << 4;
    uStack_77 = 0;
    uStack_6f = 0;
    uStack_6b = 0;
    abStack_69[0] = 0;
    memcpy(abStack_69 + (1 - param_3),param_2,param_3);
    uVar1 = param_1[2];
    abStack_69[-param_3] = abStack_69[-param_3] | 1;
    local_48._1_8_ = uStack_77;
    local_48[0] = local_78;
    local_48._9_4_ = uStack_6f;
    local_48._13_2_ = uStack_6b;
    bStack_39 = abStack_69[0] & 0xc0;
    (*(code *)*param_1)(local_48,abStack_69 + 1,uVar1);
    local_58[0] = abStack_69[1] ^ abStack_69[2];
    local_58[1] = abStack_69[3] ^ abStack_69[2];
    local_58[2] = abStack_69[4] ^ abStack_69[3];
    local_58[3] = abStack_69[5] ^ abStack_69[4];
    local_54 = abStack_69[6] ^ abStack_69[5];
    local_53 = abStack_69[7] ^ abStack_69[6];
    local_52 = abStack_69[8] ^ abStack_69[7];
    local_51 = abStack_69[9] ^ abStack_69[8];
    uVar3 = abStack_69[0] & 7;
    uVar4 = (ulonglong)((abStack_69[0] & 0x3f) >> 3);
    FUN_144eda900(abStack_69 + uVar4 + 1,uVar3,param_1 + 0x12);
    cVar2 = (char)uVar3;
    *(byte *)((longlong)param_1 + 0x9f) =
         *(byte *)((longlong)param_1 + 0x9f) |
         (-1 << (8U - cVar2 & 0x1f) & local_58[uVar4]) >> (8U - cVar2 & 0x1f);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144eda200 FUN_144eda200 body=381 status=ok
// SIG undefined FUN_144eda200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda200(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144eda212;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[0xc];
  uVar7 = (param_3 >> 4) + uVar1;
  while (uVar1 = uVar1 + 1, uVar1 <= uVar7) {
    iVar6 = 0;
    for (uVar4 = uVar1; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
      iVar6 = iVar6 + 1;
    }
    puVar5 = (ulonglong *)FUN_144edaab0(param_1,iVar6);
    if (puVar5 == (ulonglong *)0x0) goto LAB_144eda36e;
    param_1[0xe] = param_1[0xe] ^ *puVar5;
    param_1[0xf] = param_1[0xf] ^ puVar5[1];
    uVar8 = *param_2;
    puVar3 = param_2 + 1;
    puVar5 = (ulonglong *)(param_2 + 2);
    param_2 = param_2 + 4;
    local_48 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x74),
                        uVar8 ^ *(uint *)(param_1 + 0xe));
    uStack_40 = *puVar5 ^ param_1[0xf];
    (*(code *)*param_1)(&local_48,&local_48,param_1[2]);
    param_1[0x10] = param_1[0x10] ^ local_48;
    param_1[0x11] = param_1[0x11] ^ uStack_40;
  }
  uVar8 = (uint)param_3 & 0xf;
  if ((param_3 & 0xf) != 0) {
    param_1[0xe] = param_1[0xe] ^ param_1[7];
    param_1[0xf] = param_1[0xf] ^ param_1[8];
    uVar1 = param_1[0xf];
    uVar4 = param_1[0xe];
    local_48 = 0;
    uStack_40 = 0;
    memcpy(&local_48,param_2,(ulonglong)uVar8);
    uVar2 = param_1[2];
    *(undefined1 *)((longlong)&local_48 + (ulonglong)uVar8) = 0x80;
    local_48 = local_48 ^ uVar4;
    uStack_40 = uStack_40 ^ uVar1;
    (*(code *)*param_1)(&local_48,&local_48,uVar2);
    param_1[0x10] = param_1[0x10] ^ local_48;
    param_1[0x11] = param_1[0x11] ^ uStack_40;
  }
  param_1[0xc] = uVar7;
LAB_144eda36e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 144eda390 FUN_144eda390 body=526 status=ok
// SIG undefined FUN_144eda390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda390(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144eda3a5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = param_1[0xd];
  uVar6 = param_4 >> 4;
  uVar1 = uVar3 + uVar6;
  if ((uVar6 == 0) || (param_1[4] == 0)) {
    while (uVar3 = uVar3 + 1, uVar3 <= uVar1) {
      iVar5 = 0;
      for (uVar6 = uVar3; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = (ulonglong *)FUN_144edaab0(param_1,iVar5);
      if (puVar4 == (ulonglong *)0x0) goto LAB_144eda591;
      param_1[0x12] = param_1[0x12] ^ *puVar4;
      param_1[0x13] = param_1[0x13] ^ puVar4[1];
      local_58 = *param_2;
      uStack_50 = param_2[1];
      param_2 = param_2 + 2;
      param_1[0x14] = param_1[0x14] ^ local_58;
      param_1[0x15] = param_1[0x15] ^ uStack_50;
      local_58 = local_58 ^ param_1[0x12];
      uStack_50 = uStack_50 ^ param_1[0x13];
      (*(code *)*param_1)(&local_58,&local_58,param_1[2]);
      uVar6 = local_58 ^ param_1[0x12];
      uVar2 = uStack_50 ^ param_1[0x13];
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar2;
      uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
      *param_3 = (undefined4)local_58;
      param_3[1] = local_58._4_4_;
      param_3[2] = (undefined4)uStack_50;
      param_3[3] = uStack_50._4_4_;
      param_3 = param_3 + 4;
      local_58 = uVar6;
      uStack_50 = uVar2;
    }
  }
  else {
    lVar7 = 0;
    uVar3 = uVar1;
    while (uVar3 = uVar3 >> 1, uVar3 != 0) {
      lVar7 = lVar7 + 1;
    }
    lVar7 = FUN_144edaab0(param_1,lVar7);
    if (lVar7 == 0) goto LAB_144eda591;
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar6,param_1[2]);
  }
  uVar8 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar4 = param_1 + 0x12;
    *puVar4 = *puVar4 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar4,&local_58,param_1[2]);
    FUN_144eda9c0(param_2,&local_58,uVar8,param_3);
    local_58 = 0;
    uStack_50 = 0;
    memcpy(&local_58,param_2,(ulonglong)uVar8);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar8) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
LAB_144eda591:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 144eda5b0 FUN_144eda5b0 body=526 status=ok
// SIG undefined FUN_144eda5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda5b0(undefined8 *param_1,uint *param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144eda5c5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_1[0xd];
  uVar7 = param_4 >> 4;
  uVar1 = uVar2 + uVar7;
  if ((uVar7 == 0) || (param_1[4] == 0)) {
    while (uVar2 = uVar2 + 1, uVar2 <= uVar1) {
      iVar5 = 0;
      for (uVar7 = uVar2; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1) {
        iVar5 = iVar5 + 1;
      }
      puVar4 = (ulonglong *)FUN_144edaab0(param_1,iVar5);
      if (puVar4 == (ulonglong *)0x0) goto LAB_144eda7b1;
      param_1[0x12] = param_1[0x12] ^ *puVar4;
      param_1[0x13] = param_1[0x13] ^ puVar4[1];
      uVar9 = *param_2;
      puVar3 = param_2 + 1;
      puVar4 = (ulonglong *)(param_2 + 2);
      param_2 = param_2 + 4;
      local_58 = CONCAT44(*puVar3 ^ *(uint *)((longlong)param_1 + 0x94),
                          uVar9 ^ *(uint *)(param_1 + 0x12));
      uStack_50 = *puVar4 ^ param_1[0x13];
      (*(code *)param_1[1])(&local_58,&local_58,param_1[3]);
      uVar6 = local_58 ^ param_1[0x12];
      uVar7 = uStack_50 ^ param_1[0x13];
      param_1[0x14] = param_1[0x14] ^ uVar6;
      param_1[0x15] = param_1[0x15] ^ uVar7;
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)(uVar7 >> 0x20);
      *param_3 = (undefined4)local_58;
      param_3[1] = local_58._4_4_;
      param_3[2] = (undefined4)uStack_50;
      param_3[3] = uStack_50._4_4_;
      param_3 = param_3 + 4;
      local_58 = uVar6;
      uStack_50 = uVar7;
    }
  }
  else {
    lVar8 = 0;
    uVar2 = uVar1;
    while (uVar2 = uVar2 >> 1, uVar2 != 0) {
      lVar8 = lVar8 + 1;
    }
    lVar8 = FUN_144edaab0(param_1,lVar8);
    if (lVar8 == 0) goto LAB_144eda7b1;
    local_60 = param_1 + 0x14;
    local_70 = param_1 + 0x12;
    local_78 = param_1[0xd] + 1;
    local_68 = param_1[0xb];
    (*(code *)param_1[4])(param_2,param_3,uVar7,param_1[3]);
  }
  uVar9 = (uint)param_4 & 0xf;
  if ((param_4 & 0xf) != 0) {
    puVar4 = param_1 + 0x12;
    *puVar4 = *puVar4 ^ param_1[7];
    param_1[0x13] = param_1[0x13] ^ param_1[8];
    (*(code *)*param_1)(puVar4,&local_58,param_1[2]);
    FUN_144eda9c0(param_2,&local_58,uVar9,param_3);
    local_58 = 0;
    uStack_50 = 0;
    memcpy(&local_58,param_3,(ulonglong)uVar9);
    *(undefined1 *)((longlong)&local_58 + (ulonglong)uVar9) = 0x80;
    param_1[0x14] = param_1[0x14] ^ local_58;
    param_1[0x15] = param_1[0x15] ^ uStack_50;
  }
  param_1[0xd] = uVar1;
LAB_144eda7b1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 144eda7d0 FUN_144eda7d0 body=171 status=ok
// SIG undefined FUN_144eda7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda7d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144eda7de;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 - 1U < 0x10) {
    local_38 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    local_30 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_38,&local_38,param_1[2]);
    local_38 = local_38 ^ param_1[0x10];
    local_30 = local_30 ^ param_1[0x11];
    FUN_14259f120(&local_38,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144eda890 FUN_144eda890 body=26 status=ok
// SIG undefined FUN_144eda890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda890(void)

{
  FUN_144edabc0();
  return;
}



// FUNCTION 144eda8b0 FUN_144eda8b0 body=71 status=ok
// SIG undefined FUN_144eda8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda8b0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ea66f0(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x30) << 4,
                  "crypto\\modes\\ocb128.c",0x22d);
    FUN_14259f0c0(param_1,0xb0);
  }
  return;
}



// FUNCTION 144eda900 FUN_144eda900 body=178 status=ok
// SIG undefined FUN_144eda900(void)

void FUN_144eda900(longlong param_1,byte param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  
  bVar6 = 8 - param_2;
  bVar4 = 0;
  param_3 = param_3 - param_1;
  lVar3 = 4;
  pbVar5 = (byte *)(param_1 + 0xf);
  do {
    bVar2 = *pbVar5;
    pbVar1 = pbVar5 + -4;
    pbVar1[param_3 + 4] = bVar2 << (param_2 & 0x1f) | bVar4;
    bVar4 = pbVar5[-1];
    pbVar1[param_3 + 3] = bVar4 << (param_2 & 0x1f) | bVar2 >> (bVar6 & 0x1f);
    bVar2 = pbVar5[-2];
    pbVar1[param_3 + 2] = bVar2 << (param_2 & 0x1f) | bVar4 >> (bVar6 & 0x1f);
    bVar4 = pbVar5[-3] >> (bVar6 & 0x1f);
    pbVar1[param_3 + 1] = pbVar5[-3] << (param_2 & 0x1f) | bVar2 >> (bVar6 & 0x1f);
    lVar3 = lVar3 + -1;
    pbVar5 = pbVar1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 144eda9c0 FUN_144eda9c0 body=234 status=ok
// SIG undefined FUN_144eda9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eda9c0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  
  if (param_3 != 0) {
    uVar7 = 0;
    if (((0x1f < param_3) &&
        ((puVar9 = (ulonglong *)((param_4 - 1) + param_3),
         (longlong)param_2 + (param_3 - 1) < param_4 || (puVar9 < param_2)))) &&
       (((param_3 - 1) + (longlong)param_1 < param_4 || (puVar9 < param_1)))) {
      puVar9 = param_2;
      do {
        uVar4 = puVar9[1];
        uVar7 = uVar7 + 0x20;
        puVar2 = (ulonglong *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar9);
        uVar5 = puVar2[1];
        puVar1 = puVar9 + 4;
        puVar3 = (ulonglong *)((param_4 - (longlong)param_2) + -0x20 + (longlong)puVar1);
        *puVar3 = *puVar2 ^ *puVar9;
        puVar3[1] = uVar5 ^ uVar4;
        puVar2 = (ulonglong *)(((longlong)param_1 - (longlong)param_2) + -0x10 + (longlong)puVar1);
        uVar4 = puVar2[1];
        uVar5 = puVar9[3];
        puVar3 = (ulonglong *)((param_4 - (longlong)param_2) + -0x10 + (longlong)puVar1);
        *puVar3 = *puVar2 ^ puVar9[2];
        puVar3[1] = uVar4 ^ uVar5;
        puVar9 = puVar1;
      } while (uVar7 < (param_3 & 0xffffffffffffffe0));
    }
    if (uVar7 < param_3) {
      pbVar6 = (byte *)(uVar7 + (longlong)param_2);
      lVar8 = param_3 - uVar7;
      do {
        pbVar6[param_4 - (longlong)param_2] =
             pbVar6[(longlong)param_1 - (longlong)param_2] ^ *pbVar6;
        pbVar6 = pbVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144edaab0 FUN_144edaab0 body=272 status=ok
// SIG undefined FUN_144edaab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edaab0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (param_2 <= uVar5) {
    return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x30);
  if (uVar2 <= param_2) {
    lVar4 = ((param_2 - uVar2) + 4 & 0xfffffffffffffffc) + uVar2;
    *(longlong *)(param_1 + 0x30) = lVar4;
    lVar4 = FUN_144ea6570(*(undefined8 *)(param_1 + 0x58),lVar4 * 0x10,"crypto\\modes\\ocb128.c",
                          0x71);
    if (lVar4 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x58) = lVar4;
  }
  if (uVar5 < param_2) {
    lVar4 = param_2 - uVar5;
    lVar6 = uVar5 << 4;
    uVar5 = uVar5 + lVar4;
    do {
      pcVar3 = (char *)(*(longlong *)(param_1 + 0x58) + lVar6);
      cVar1 = *pcVar3;
      FUN_144eda900(pcVar3,1,pcVar3 + 0x10);
      pcVar3[0x1f] = pcVar3[0x1f] ^ cVar1 >> 7 & 0x87U;
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(ulonglong *)(param_1 + 0x28) = uVar5;
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x58);
}



// FUNCTION 144edabc0 FUN_144edabc0 body=206 status=ok
// SIG undefined FUN_144edabc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edabc0(undefined8 *param_1,void *param_2,size_t param_3,int param_4)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144edabd2;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 - 1 < 0x10) {
    local_38 = param_1[0x14] ^ param_1[0x12] ^ param_1[9];
    local_30 = param_1[0x15] ^ param_1[0x13] ^ param_1[10];
    (*(code *)*param_1)(&local_38,&local_38,param_1[2]);
    local_38 = local_38 ^ param_1[0x10];
    local_30 = local_30 ^ param_1[0x11];
    if (param_4 == 0) {
      FUN_14259f120(&local_38,param_2);
    }
    else {
      memcpy(param_2,&local_38,param_3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144edaca0 FUN_144edaca0 body=173 status=ok
// SIG undefined FUN_144edaca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edaca0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144edacb0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = param_1;
  if (DAT_14c797468 == 0) {
LAB_144edacf8:
    local_38 = &LAB_144edae80;
    lVar2 = FUN_144ea97c0(local_28,&DAT_149bfd7a0,0x30);
    if (lVar2 == 0) goto LAB_144edad40;
  }
  else {
    uVar1 = FUN_144bac1a0(DAT_14c797468,local_28);
    lVar2 = FUN_144babc00(DAT_14c797468,uVar1);
    if (lVar2 == 0) goto LAB_144edacf8;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
LAB_144edad40:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144edad60 FUN_144edad60 body=189 status=ok
// SIG undefined FUN_144edad60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edad60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = local_20;
  local_1c = param_2;
  local_18 = param_3;
  if (DAT_14c797470 != 0) {
    iVar1 = FUN_144bac1a0(DAT_14c797470,local_20);
    if (-1 < iVar1) {
      local_28 = (undefined1 *)FUN_144babc00(DAT_14c797470,iVar1);
      ppuVar2 = &local_28;
      goto LAB_144edadc6;
    }
  }
  local_38 = &LAB_144edae90;
  ppuVar2 = (undefined1 **)FUN_144ea97c0(&local_28,&PTR_DAT_149bfd9e0,0x2b);
  if (ppuVar2 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
LAB_144edadc6:
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 144edae30 FUN_144edae30 body=71 status=ok
// SIG undefined FUN_144edae30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edae30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144babe00(DAT_14c797468,FUN_144edaeb0,param_3,param_4,0x144edae3a);
  DAT_14c797468 = 0;
  FUN_144babdb0(DAT_14c797470);
  DAT_14c797470 = 0;
  return;
}



// FUNCTION 144edaeb0 FUN_144edaeb0 body=33 status=ok
// SIG undefined FUN_144edaeb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edaeb0(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\objects\\obj_xref.c",0x82);
  return;
}



// FUNCTION 144edaee0 FUN_144edaee0 body=577 status=ok
// SIG undefined FUN_144edaee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edaee0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_a8 [80];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar2 = FUN_144ea8fa0();
  if (iVar2 == 0) {
LAB_144edb0cb:
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x5f);
    FUN_144ba24f0(6,0x74,0x79,"crypto\\evp\\evp_pbe.c");
    if (param_1 == 0) {
      FUN_144ea68a0(local_a8,&DAT_14a179998,0x50);
    }
    else {
      FUN_144ed0b30(local_a8,0x50,param_1);
    }
    FUN_144ba2bd0(2,"TYPE=",local_a8);
    goto LAB_144edb027;
  }
  uVar6 = 0;
  local_c8 = 0;
  local_c4 = iVar2;
  if (DAT_14c797478 == 0) {
LAB_144edaf5c:
    local_e8 = &LAB_144edb240;
    lVar4 = FUN_144ea97c0(&local_c8,&DAT_149bfdb60,0x1d);
    if (lVar4 == 0) goto LAB_144edb0cb;
  }
  else {
    uVar3 = FUN_144bac1a0(DAT_14c797478,&local_c8);
    lVar4 = FUN_144babc00(DAT_14c797478,uVar3);
    if (lVar4 == 0) goto LAB_144edaf5c;
  }
  iVar2 = *(int *)(lVar4 + 0xc);
  pcVar1 = *(code **)(lVar4 + 0x10);
  uVar8 = uVar6;
  if ((param_2 != 0) && (uVar8 = param_3 & 0xffffffff, (int)param_3 == -1)) {
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)(param_2 + uVar8) != '\0');
  }
  uVar7 = uVar6;
  if (*(int *)(lVar4 + 8) == -1) {
LAB_144edafd1:
    if (iVar2 != -1) {
      uVar5 = FUN_144ea8ee0(iVar2);
      uVar6 = FUN_144baab30(uVar5);
      if (uVar6 == 0) {
        local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x7c);
        uVar3 = 0xa1;
        goto LAB_144edb010;
      }
    }
    local_d8 = param_6;
    local_e8 = (undefined1 *)uVar7;
    local_e0 = uVar6;
    iVar2 = (*pcVar1)(param_5,param_2,uVar8 & 0xffffffff,param_4);
    if (iVar2 != 0) goto LAB_144edb027;
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x82);
    uVar3 = 0x78;
  }
  else {
    uVar5 = FUN_144ea8ee0();
    uVar7 = FUN_144baaaf0(uVar5);
    if (uVar7 != 0) goto LAB_144edafd1;
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x72);
    uVar3 = 0xa0;
  }
LAB_144edb010:
  FUN_144ba24f0(6,0x74,uVar3,"crypto\\evp\\evp_pbe.c");
LAB_144edb027:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_108);
}



// FUNCTION 144edb140 FUN_144edb140 body=197 status=ok
// SIG undefined FUN_144edb140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144edb140(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_28;
  int local_24;
  undefined8 uStack_10;
  
  uStack_10 = 0x144edb150;
  if (param_2 != 0) {
    local_28 = param_1;
    local_24 = param_2;
    if (DAT_14c797478 != 0) {
      uVar1 = FUN_144bac1a0(DAT_14c797478,&local_28);
      lVar2 = FUN_144babc00(DAT_14c797478,uVar1);
      if (lVar2 != 0) goto LAB_144edb1cd;
    }
    lVar2 = FUN_144ea97c0(&local_28,&DAT_149bfdb60,0x1d,0x18,&LAB_144edb240);
    if (lVar2 != 0) {
LAB_144edb1cd:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(lVar2 + 8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(lVar2 + 0xc);
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *(undefined8 *)(lVar2 + 0x10);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144edb210 FUN_144edb210 body=48 status=ok
// SIG undefined FUN_144edb210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edb210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144babe00(DAT_14c797478,FUN_144edb250,param_3,param_4,0x144edb21a);
  DAT_14c797478 = 0;
  return;
}



// FUNCTION 144edb250 FUN_144edb250 body=35 status=ok
// SIG undefined FUN_144edb250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edb250(undefined8 param_1)

{
  FUN_144ea6530(param_1,"crypto\\evp\\evp_pbe.c",0xf0);
  return;
}



// FUNCTION 144edb280 FUN_144edb280 body=74 status=ok
// SIG undefined FUN_144edb280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edb280(undefined4 *param_1)

{
  memset(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}



// FUNCTION 144edb2d0 FUN_144edb2d0 body=295 status=ok
// SIG undefined FUN_144edb2d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edb2d0(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x14) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      FUN_14263c640(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      FUN_14263c640(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      memcpy((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 144edb400 FUN_144edb400 body=395 status=ok
// SIG undefined FUN_144edb400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edb400(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_14263c640(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)(param_2 + 5);
  FUN_14263c640(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_14259f0c0(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)((uint)uVar3 >> 0x18);
  param_1[1] = (char)((uint)uVar3 >> 0x10);
  param_1[2] = (char)((uint)uVar3 >> 8);
  param_1[3] = (char)uVar3;
  uVar3 = param_2[1];
  param_1[4] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = (char)((uint)uVar3 >> 0x10);
  param_1[6] = (char)((uint)uVar3 >> 8);
  param_1[7] = (char)uVar3;
  uVar3 = param_2[2];
  param_1[8] = (char)((uint)uVar3 >> 0x18);
  param_1[9] = (char)((uint)uVar3 >> 0x10);
  param_1[10] = (char)((uint)uVar3 >> 8);
  param_1[0xb] = (char)uVar3;
  uVar3 = param_2[3];
  param_1[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[0xd] = (char)((uint)uVar3 >> 0x10);
  param_1[0xe] = (char)((uint)uVar3 >> 8);
  param_1[0xf] = (char)uVar3;
  uVar3 = param_2[4];
  param_1[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[0x11] = (char)((uint)uVar3 >> 0x10);
  param_1[0x12] = (char)((uint)uVar3 >> 8);
  param_1[0x13] = (char)uVar3;
  return 1;
}



// FUNCTION 144edb590 FUN_144edb590 body=26 status=ok
// SIG undefined FUN_144edb590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edb590(undefined8 param_1,undefined8 param_2)

{
  FUN_14263c640(param_1,param_2,1);
  return;
}



// FUNCTION 144edb5b0 FUN_144edb5b0 body=143 status=ok
// SIG undefined FUN_144edb5b0(void)

undefined8 FUN_144edb5b0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x30;
  *param_1 = 0xcbbb9d5dc1059ed8;
  param_1[1] = 0x629a292a367cd507;
  param_1[2] = 0x9159015a3070dd17;
  param_1[3] = 0x152fecd8f70e5939;
  param_1[4] = 0x67332667ffc00b31;
  param_1[5] = 0x8eb44a8768581511;
  param_1[6] = 0xdb0c2e0d64f98fa7;
  param_1[7] = 0x47b5481dbefa4fa4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 144edb640 FUN_144edb640 body=22 status=ok
// SIG undefined FUN_144edb640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edb640(void)

{
  FUN_144edb710();
  return;
}



// FUNCTION 144edb660 FUN_144edb660 body=22 status=ok
// SIG undefined FUN_144edb660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edb660(void)

{
  FUN_144edb820();
  return;
}



// FUNCTION 144edb680 FUN_144edb680 body=143 status=ok
// SIG undefined FUN_144edb680(void)

undefined8 FUN_144edb680(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40;
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 144edb710 FUN_144edb710 body=262 status=ok
// SIG undefined FUN_144edb710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edb710(longlong param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  void *_Dst_00;
  uint uVar1;
  ulonglong uVar2;
  
  _Dst = (void *)(param_1 + 0x50);
  if (param_3 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x40) + param_3 * 8;
    if (uVar2 < *(ulonglong *)(param_1 + 0x40)) {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
    }
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + (param_3 >> 0x3d);
    uVar1 = *(uint *)(param_1 + 0xd0);
    *(ulonglong *)(param_1 + 0x40) = uVar2;
    if (uVar1 != 0) {
      _Dst_00 = (void *)((ulonglong)uVar1 + (longlong)_Dst);
      uVar2 = 0x80 - (ulonglong)uVar1;
      if (param_3 < uVar2) {
        memcpy(_Dst_00,param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)param_3;
        return 1;
      }
      memcpy(_Dst_00,param_2,uVar2);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_3 = param_3 - uVar2;
      param_2 = (void *)((longlong)param_2 + uVar2);
      FUN_142662d40(param_1,_Dst,1);
    }
    uVar2 = param_3;
    if (0x7f < param_3) {
      FUN_142662d40(param_1,param_2,param_3 >> 7);
      uVar2 = (ulonglong)((uint)param_3 & 0x7f);
      param_2 = (void *)((longlong)param_2 + (param_3 - uVar2));
    }
    if (uVar2 != 0) {
      memcpy(_Dst,param_2,uVar2);
      *(int *)(param_1 + 0xd0) = (int)uVar2;
    }
  }
  return 1;
}



// FUNCTION 144edb820 FUN_144edb820 body=2024 status=ok
// SIG undefined FUN_144edb820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edb820(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(param_2 + 0x1a);
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x70 < uVar5) {
    memset((void *)(uVar5 + (longlong)puVar1),0,0x80 - uVar5);
    uVar5 = 0;
    FUN_142662d40(param_2,puVar1,1);
  }
  memset((void *)(uVar5 + (longlong)puVar1),0,0x70 - uVar5);
  *(undefined1 *)((longlong)param_2 + 0xcf) = *(undefined1 *)(param_2 + 8);
  *(char *)((longlong)param_2 + 0xce) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  *(char *)((longlong)param_2 + 0xcd) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  *(char *)((longlong)param_2 + 0xcc) = (char)((uint)*(undefined4 *)(param_2 + 8) >> 0x18);
  *(char *)((longlong)param_2 + 0xcb) = (char)((ulonglong)param_2[8] >> 0x20);
  *(char *)((longlong)param_2 + 0xca) = (char)((ulonglong)param_2[8] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_2 + 199) = *(undefined1 *)(param_2 + 9);
  *(char *)((longlong)param_2 + 0xc6) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 8);
  *(char *)((longlong)param_2 + 0xc5) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x10);
  *(char *)((longlong)param_2 + 0xc4) = (char)((uint)*(undefined4 *)(param_2 + 9) >> 0x18);
  *(char *)((longlong)param_2 + 0xc3) = (char)((ulonglong)param_2[9] >> 0x20);
  *(char *)((longlong)param_2 + 0xc2) = (char)((ulonglong)param_2[9] >> 0x28);
  *(undefined1 *)((longlong)param_2 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x4f);
  FUN_142662d40(param_2,puVar1,1);
  if (param_1 == (undefined1 *)0x0) {
LAB_144edb93f:
    uVar4 = 0;
  }
  else {
    iVar3 = *(int *)((longlong)param_2 + 0xd4);
    if (iVar3 == 0x1c) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
    }
    else if (iVar3 == 0x20) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
    }
    else if (iVar3 == 0x30) {
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
    }
    else {
      if (iVar3 != 0x40) goto LAB_144edb93f;
      uVar4 = *param_2;
      *param_1 = (char)((ulonglong)uVar4 >> 0x38);
      param_1[1] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[2] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[3] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[4] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[5] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[6] = (char)((ulonglong)uVar4 >> 8);
      param_1[7] = (char)uVar4;
      uVar4 = param_2[1];
      param_1[8] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[9] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[10] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0xb] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0xc] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0xd] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0xe] = (char)((ulonglong)uVar4 >> 8);
      param_1[0xf] = (char)uVar4;
      uVar4 = param_2[2];
      param_1[0x10] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x11] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x12] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x13] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x14] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x15] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x16] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x17] = (char)uVar4;
      uVar4 = param_2[3];
      param_1[0x18] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x19] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x1a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x1b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x1c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x1d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x1e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x1f] = (char)uVar4;
      uVar4 = param_2[4];
      param_1[0x20] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x21] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x22] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x23] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x24] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x25] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x26] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x27] = (char)uVar4;
      uVar4 = param_2[5];
      param_1[0x28] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x29] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x2a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x2b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x2c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x2d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x2e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x2f] = (char)uVar4;
      uVar4 = param_2[6];
      param_1[0x30] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x31] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x32] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x33] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x34] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x35] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x36] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x37] = (char)uVar4;
      uVar4 = param_2[7];
      param_1[0x38] = (char)((ulonglong)uVar4 >> 0x38);
      param_1[0x39] = (char)((ulonglong)uVar4 >> 0x30);
      param_1[0x3a] = (char)((ulonglong)uVar4 >> 0x28);
      param_1[0x3b] = (char)((ulonglong)uVar4 >> 0x20);
      param_1[0x3c] = (char)((ulonglong)uVar4 >> 0x18);
      param_1[0x3d] = (char)((ulonglong)uVar4 >> 0x10);
      param_1[0x3e] = (char)((ulonglong)uVar4 >> 8);
      param_1[0x3f] = (char)uVar4;
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 144edc010 FUN_144edc010 body=260 status=ok
// SIG undefined FUN_144edc010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edc010(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144edc01c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_24 = 0x40;
  local_f8 = 0x6a09e667f3bcc908;
  puVar1 = &DAT_14c7974b0;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0xbb67ae8584caa73b;
  local_e8 = 0x3c6ef372fe94f82b;
  local_e0 = 0xa54ff53a5f1d36f1;
  local_d8 = 0x510e527fade682d1;
  local_d0 = 0x9b05688c2b3e6c1f;
  local_c8 = 0x1f83d9abfb41bd6b;
  local_c0 = 0x5be0cd19137e2179;
  local_b8 = 0;
  local_b0 = 0;
  local_28 = 0;
  FUN_144edb710(&local_f8,param_1,param_2);
  FUN_144edb820(puVar1,&local_f8);
  FUN_14259f0c0(&local_f8,0xd8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_118);
}



// FUNCTION 144edc120 FUN_144edc120 body=26 status=ok
// SIG undefined FUN_144edc120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edc120(undefined8 param_1,undefined8 param_2)

{
  FUN_142662d40(param_1,param_2,1);
  return;
}



// FUNCTION 144edc140 FUN_144edc140 body=143 status=ok
// SIG undefined FUN_144edc140(void)

undefined8 FUN_144edc140(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x1c;
  *param_1 = 0x8c3d37c819544da2;
  param_1[1] = 0x73e1996689dcd4d6;
  param_1[2] = 0x1dfab7ae32ff9c82;
  param_1[3] = 0x679dd514582f9fcf;
  param_1[4] = 0xf6d2b697bd44da8;
  param_1[5] = 0x77e36f7304c48942;
  param_1[6] = 0x3f9d85a86a1d36c8;
  param_1[7] = 0x1112e6ad91d692a1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 144edc1d0 FUN_144edc1d0 body=143 status=ok
// SIG undefined FUN_144edc1d0(void)

undefined8 FUN_144edc1d0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x20;
  *param_1 = 0x22312194fc2bf72c;
  param_1[1] = 0x9f555fa3c84c64c2;
  param_1[2] = 0x2393b86b6f53b151;
  param_1[3] = 0x963877195940eabd;
  param_1[4] = 0x96283ee2a88effe3;
  param_1[5] = 0xbe5e1e2553863992;
  param_1[6] = 0x2b0199fc2c85b8aa;
  param_1[7] = 0xeb72ddc81c52ca2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return 1;
}



// FUNCTION 144edc260 FUN_144edc260 body=70 status=ok
// SIG undefined FUN_144edc260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edc260(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144edd040();
  if (lVar1 == 0) {
    return;
  }
  FUN_144edcd80(lVar1,param_1,(longlong)param_2);
  return;
}



// FUNCTION 144edc2b0 FUN_144edc2b0 body=369 status=ok
// SIG undefined FUN_144edc2b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144edc2b0(undefined8 param_1,int param_2,double param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar8 = SUB84(param_3,0);
  iVar2 = FUN_144e986c0(&DAT_14c7974f0,FUN_144edd800);
  plVar1 = DAT_14c797500;
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = DAT_14c7974f8;
  }
  if ((iVar5 == 0) || (DAT_14c797500 == (longlong *)0x0)) {
    return 0;
  }
  if ((param_2 < 0) || (param_3 < 0.0)) {
    return 0;
  }
  if (*DAT_14c797500 != 0) {
    FUN_144e98620();
  }
  uVar3 = (ulonglong)(int)plVar1[6];
  uVar6 = plVar1[8];
  if ((plVar1[10] != 0) && (plVar1[0x2d] == 0)) {
    uVar3 = uVar3 + (longlong)((int)plVar1[6] / 2);
    uVar6 = uVar6 + plVar1[10];
  }
  if (uVar6 < uVar3 >> 3) {
    uVar6 = uVar3 >> 3;
  }
  if (uVar6 <= (ulonglong)(longlong)param_2) {
    dVar7 = (double)(longlong)uVar6;
    if ((longlong)uVar6 < 0) {
      dVar7 = dVar7 + 1.8446744073709552e+19;
    }
    if (dVar7 <= param_3) goto LAB_144edc394;
  }
  uVar8 = 0;
  uVar9 = 0;
LAB_144edc394:
  dVar7 = (double)(longlong)uVar6;
  if ((longlong)uVar6 < 0) {
    dVar7 = dVar7 + 1.8446744073709552e+19;
  }
  if ((double)CONCAT44(uVar9,uVar8) <= dVar7) {
    dVar7 = (double)CONCAT44(uVar9,uVar8);
  }
  lVar4 = 0;
  dVar7 = dVar7 * 8.0;
  if ((9.223372036854776e+18 <= dVar7) &&
     (dVar7 = dVar7 - 9.223372036854776e+18, dVar7 < 9.223372036854776e+18)) {
    lVar4 = -0x8000000000000000;
  }
  uVar8 = FUN_144edd180(plVar1,param_1,(longlong)param_2,(longlong)dVar7 + lVar4);
  if (*plVar1 != 0) {
    FUN_144e98640();
  }
  return uVar8;
}



// FUNCTION 144edc430 FUN_144edc430 body=30 status=ok
// SIG undefined FUN_144edc430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edc430(undefined8 param_1,int param_2)

{
  FUN_144edc2b0(param_1,param_2,(double)param_2);
  return;
}



// FUNCTION 144edc450 FUN_144edc450 body=130 status=ok
// SIG undefined FUN_144edc450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144edc450(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_144e986c0(&DAT_14c7974f0,FUN_144edd800);
  plVar2 = DAT_14c797500;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_14c7974f8;
  }
  if ((iVar4 != 0) && (DAT_14c797500 != (longlong *)0x0)) {
    if (*DAT_14c797500 != 0) {
      FUN_144e98620();
    }
    lVar1 = plVar2[0x13];
    if (*plVar2 != 0) {
      FUN_144e98640();
    }
    return (int)lVar1 == 1;
  }
  return false;
}



// FUNCTION 144edc4e0 FUN_144edc4e0 body=8 status=ok
// SIG undefined FUN_144edc4e0(void)

undefined ** FUN_144edc4e0(void)

{
  return &PTR_FUN_14c70e990;
}



// FUNCTION 144edc4f0 FUN_144edc4f0 body=271 status=ok
// SIG undefined FUN_144edc4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144edc4f0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144edc50a;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = DAT_14c7974f4;
    param_2 = DAT_14c70e970;
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((param_2 != *(int *)(param_1 + 0x14) || (param_3 != *(ushort *)(param_1 + 0x1c))))) {
    (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))();
    FUN_144bad010(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(short *)(param_1 + 0x1c) = (short)param_3;
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    iVar1 = 1;
  }
  else if (param_2 - 0x388U < 3) {
    iVar1 = FUN_14529bb80(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      FUN_144ba24f0(0x24,0x68,0x6b,"crypto\\rand\\drbg_lib.c",0x8f,uVar2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    FUN_144ba24f0(0x24,0x68,0x78,"crypto\\rand\\drbg_lib.c",0x80,uVar2);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 144edc600 FUN_144edc600 body=621 status=ok
// SIG undefined FUN_144edc600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144edc600(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  longlong local_res18 [2];
  undefined8 uVar9;
  ulonglong in_stack_ffffffffffffffb0;
  undefined8 uVar10;
  
  uVar10 = 0x144edc61a;
  uVar2 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x30);
  local_res18[0] = 0;
  local_res8 = 0;
  uVar8 = 0;
  uVar5 = 0;
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  uVar7 = *(ulonglong *)(param_1 + 0x48);
  if (*(ulonglong *)(param_1 + 0x60) < param_3) {
    uVar9 = 299;
    uVar10 = 0x74;
    uVar5 = uVar2;
  }
  else if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar9 = 0x131;
    uVar10 = 0x80;
    uVar2 = uVar8;
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 2;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x168) == 0)) {
      uVar6 = uVar6 + *(longlong *)(param_1 + 0x50);
      lVar4 = lVar4 + *(int *)(param_1 + 0x30) / 2;
      uVar7 = uVar7 + *(longlong *)(param_1 + 0x58);
    }
    uVar5 = uVar2;
    if (*(code **)(param_1 + 0x158) != (code *)0x0) {
      uVar5 = (**(code **)(param_1 + 0x158))
                        (param_1,&local_res8,lVar4,uVar6,uVar7,
                         in_stack_ffffffffffffffb0 & 0xffffffff00000000);
    }
    if ((uVar5 < uVar6) || (uVar7 < uVar5)) {
      uVar9 = 0x14f;
      uVar10 = 0x6e;
      uVar2 = uVar8;
    }
    else if (((*(longlong *)(param_1 + 0x50) == 0) ||
             (uVar2 = uVar8, *(code **)(param_1 + 0x168) == (code *)0x0)) ||
            ((uVar2 = (**(code **)(param_1 + 0x168))
                                (param_1,local_res18,*(int *)(param_1 + 0x30) / 2,
                                 *(longlong *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)),
             *(ulonglong *)(param_1 + 0x50) <= uVar2 && (uVar2 <= *(ulonglong *)(param_1 + 0x58)))))
    {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x150))
                        (param_1,local_res8,uVar5,local_res18[0],uVar2,param_2,param_3,uVar10);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        *(undefined4 *)(param_1 + 0x70) = 1;
        _Var3 = _time64((__time64_t *)0x0);
        *(__time64_t *)(param_1 + 0x78) = _Var3;
        if ((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) == 0)) {
          LOCK();
          *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
          UNLOCK();
        }
        goto LAB_144edc805;
      }
      uVar9 = 0x15e;
      uVar10 = 0x6c;
    }
    else {
      uVar9 = 0x157;
      uVar10 = 0x6f;
    }
  }
  else {
    uVar9 = 0x138;
    uVar10 = 0x67;
    uVar2 = uVar8;
    if (*(int *)(param_1 + 0x98) == 2) {
      uVar10 = 0x72;
    }
  }
  FUN_144ba24f0(0x24,0x6c,uVar10,"crypto\\rand\\drbg_lib.c",uVar9);
LAB_144edc805:
  if ((local_res8 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
    (**(code **)(param_1 + 0x160))(param_1,local_res8,uVar5);
  }
  if ((local_res18[0] != 0) && (*(code **)(param_1 + 0x170) != (code *)0x0)) {
    (**(code **)(param_1 + 0x170))(param_1,local_res18[0],uVar2);
  }
  return *(int *)(param_1 + 0x98) == 1;
}



// FUNCTION 144edc870 FUN_144edc870 body=102 status=ok
// SIG undefined FUN_144edc870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edc870(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 2;
    FUN_144ba24f0(0x24,0x76,0x80,"crypto\\rand\\drbg_lib.c",0x17e,0x144edc87c);
    return 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x150) + 0x18))();
  uVar1 = FUN_144edc4f0(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1c));
  return uVar1;
}



// FUNCTION 144edc8e0 FUN_144edc8e0 body=126 status=ok
// SIG undefined FUN_144edc8e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edc8e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[0x2a] != 0) {
      (**(code **)(param_1[0x2a] + 0x18))();
    }
    FUN_144bad010(param_1[5]);
    FUN_144e98660(*param_1);
    FUN_144ea6040(0xf,param_1,param_1 + 0x14);
    if (*(int *)(param_1 + 2) != 0) {
      FUN_144ea6f60();
      return;
    }
    FUN_144ea66f0(param_1,0x178,"crypto\\rand\\drbg_lib.c",0x115);
  }
  return;
}



// FUNCTION 144edc960 FUN_144edc960 body=441 status=ok
// SIG undefined FUN_144edc960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144edc960(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  bool bVar5;
  longlong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0x144edc978;
  uVar2 = 0;
  local_res8 = 0;
  if (*(int *)(param_1 + 0x98) == 2) {
    FUN_144ba24f0(0x24,0x6e,0x72,"crypto\\rand\\drbg_lib.c",0x199,0x144edc978);
    bVar5 = false;
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    FUN_144ba24f0(0x24,0x6e,0x73,"crypto\\rand\\drbg_lib.c",0x19d,0x144edc978);
    bVar5 = false;
  }
  else {
    uVar4 = uVar2;
    if ((param_2 == 0) || (uVar4 = param_3, param_3 <= *(ulonglong *)(param_1 + 0x68))) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      if (*(code **)(param_1 + 0x158) != (code *)0x0) {
        uVar6 = CONCAT44(1,param_4);
        uVar2 = (**(code **)(param_1 + 0x158))
                          (param_1,&local_res8,*(undefined4 *)(param_1 + 0x30),
                           *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar6);
      }
      if ((uVar2 < *(ulonglong *)(param_1 + 0x40)) || (*(ulonglong *)(param_1 + 0x48) < uVar2)) {
        FUN_144ba24f0(0x24,0x6e,0x6e,"crypto\\rand\\drbg_lib.c",0x1b0,uVar6);
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 8))
                          (param_1,local_res8,uVar2,param_2,uVar4);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          *(undefined4 *)(param_1 + 0x70) = 1;
          _Var3 = _time64((__time64_t *)0x0);
          *(__time64_t *)(param_1 + 0x78) = _Var3;
          if ((*(int *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 8) == 0)) {
            LOCK();
            *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
            UNLOCK();
          }
        }
      }
      if ((local_res8 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
        (**(code **)(param_1 + 0x160))(param_1,local_res8,uVar2);
      }
      bVar5 = *(int *)(param_1 + 0x98) == 1;
    }
    else {
      FUN_144ba24f0(0x24,0x6e,0x66,"crypto\\rand\\drbg_lib.c",0x1a4,0x144edc978);
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 144edcb20 FUN_144edcb20 body=605 status=ok
// SIG undefined FUN_144edcb20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144edcb20(longlong param_1,undefined8 param_2,ulonglong param_3,int param_4,ulonglong param_5,
             ulonglong param_6)

{
  int iVar1;
  __time64_t _Var2;
  bool bVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = 0x144edcb37;
  if (*(int *)(param_1 + 0x98) != 1) {
    FUN_144edd180(param_1,0,0,0);
    if (*(int *)(param_1 + 0x98) == 2) {
      FUN_144ba24f0(0x24,0x6b,0x72,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x242),uVar5);
      return 0;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      FUN_144ba24f0(0x24,0x6b,0x73,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x246),uVar5);
      return 0;
    }
  }
  if (param_3 <= *(ulonglong *)(param_1 + 0x38)) {
    if (*(ulonglong *)(param_1 + 0x68) < param_6) {
      FUN_144ba24f0(0x24,0x6b,0x66,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x250),uVar5);
      uVar5 = 0;
    }
    else {
      iVar1 = FUN_144e98840();
      bVar3 = *(int *)(param_1 + 0x18) != iVar1;
      if (bVar3) {
        *(int *)(param_1 + 0x18) = iVar1;
      }
      if ((*(uint *)(param_1 + 0x74) != 0) &&
         (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70))) {
        bVar3 = true;
      }
      if (0 < *(longlong *)(param_1 + 0x80)) {
        _Var2 = _time64((__time64_t *)0x0);
        if ((_Var2 < *(longlong *)(param_1 + 0x78)) ||
           (*(longlong *)(param_1 + 0x80) <= _Var2 - *(longlong *)(param_1 + 0x78))) {
          bVar3 = true;
        }
      }
      if (((((*(int *)(param_1 + 0x88) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
           (*(int *)(param_1 + 0x8c) == *(int *)(*(longlong *)(param_1 + 8) + 0x8c))) &&
          ((!bVar3 && (param_4 == 0)))) ||
         (iVar1 = FUN_144edc960(param_1,param_5,param_6,param_4), param_5 = 0, param_6 = 0,
         iVar1 != 0)) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x10))
                          (param_1,param_2,param_3,param_5,param_6);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x98) = 2;
          FUN_144ba24f0(0x24,0x6b,0x70,"crypto\\rand\\drbg_lib.c",0x275);
          uVar5 = 0;
        }
        else {
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          uVar5 = 1;
        }
      }
      else {
        FUN_144ba24f0(0x24,0x6b,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x26c),uVar5);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  FUN_144ba24f0(0x24,0x6b,0x75,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar4,0x24c),uVar5);
  return 0;
}



// FUNCTION 144edcd80 FUN_144edcd80 body=697 status=ok
// SIG undefined FUN_144edcd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edcd80(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  longlong local_res8;
  
  uVar5 = 0;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0;
    }
    lVar2 = FUN_144bace10(0,0,0,*(undefined8 *)(param_1 + 0x68));
    *(longlong *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) goto LAB_144edd019;
  }
  uVar3 = FUN_144bacd70(*(undefined8 *)(param_1 + 0x28),&local_res8);
  lVar2 = local_res8;
  for (; local_res8 = lVar2, param_3 != 0; param_3 = param_3 - uVar6) {
    uVar6 = param_3;
    if (*(ulonglong *)(param_1 + 0x38) < param_3) {
      uVar6 = *(ulonglong *)(param_1 + 0x38);
    }
    bVar7 = false;
    bVar8 = false;
    if (*(int *)(param_1 + 0x98) == 1) {
LAB_144edce9c:
      if (*(ulonglong *)(param_1 + 0x38) < uVar6) {
        FUN_144ba24f0(0x24);
        bVar8 = bVar7;
      }
      else if (*(ulonglong *)(param_1 + 0x68) < uVar3) {
        FUN_144ba24f0(0x24);
      }
      else {
        iVar1 = FUN_144e98840();
        bVar8 = *(int *)(param_1 + 0x18) != iVar1;
        if (bVar8) {
          *(int *)(param_1 + 0x18) = iVar1;
        }
        if ((*(uint *)(param_1 + 0x74) != 0) &&
           (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70))) {
          bVar8 = true;
        }
        if (0 < *(longlong *)(param_1 + 0x80)) {
          _Var4 = _time64((__time64_t *)0x0);
          if ((_Var4 < *(longlong *)(param_1 + 0x78)) ||
             (*(longlong *)(param_1 + 0x80) <= _Var4 - *(longlong *)(param_1 + 0x78))) {
            bVar8 = true;
          }
        }
        if (((((*(int *)(param_1 + 0x88) == 0) || (*(longlong *)(param_1 + 8) == 0)) ||
             (*(int *)(param_1 + 0x8c) == *(int *)(*(longlong *)(param_1 + 8) + 0x8c))) && (!bVar8))
           || (iVar1 = FUN_144edc960(param_1,lVar2,uVar3,0), iVar1 != 0)) {
          iVar1 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x10))(param_1);
          if (iVar1 != 0) {
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
            bVar8 = true;
            goto LAB_144edcff1;
          }
          *(undefined4 *)(param_1 + 0x98) = 2;
        }
        FUN_144ba24f0();
        bVar8 = false;
      }
    }
    else {
      FUN_144edd180(param_1,0,0,0);
      if (*(int *)(param_1 + 0x98) == 2) {
        FUN_144ba24f0(0x24);
        bVar8 = bVar7;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 0) goto LAB_144edce9c;
        FUN_144ba24f0(0x24);
        bVar8 = bVar7;
      }
    }
LAB_144edcff1:
    uVar5 = 0;
    if (!bVar8) goto LAB_144edd019;
    lVar2 = local_res8;
  }
  uVar5 = 1;
LAB_144edd019:
  if (local_res8 != 0) {
    FUN_144bacdd0(*(undefined8 *)(param_1 + 0x28));
  }
  return uVar5;
}



// FUNCTION 144edd040 FUN_144edd040 body=146 status=ok
// SIG undefined FUN_144edd040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edd040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_144e986c0(&DAT_14c7974f0,FUN_144edd800,param_3,param_4,0x144edd04a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c7974f8;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_144e98760(&DAT_14c7974fc);
  if (lVar3 == 0) {
    iVar2 = FUN_144bab640(4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_144edd540(DAT_14c797500);
    FUN_144e987a0(&DAT_14c7974fc,lVar3);
  }
  return lVar3;
}



// FUNCTION 144edd0e0 FUN_144edd0e0 body=146 status=ok
// SIG undefined FUN_144edd0e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edd0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_144e986c0(&DAT_14c7974f0,FUN_144edd800,param_3,param_4,0x144edd0ea);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c7974f8;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_144e98760(&DAT_14c797508);
  if (lVar3 == 0) {
    iVar2 = FUN_144bab640(4);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_144edd540(DAT_14c797500);
    FUN_144e987a0(&DAT_14c797508,lVar3);
  }
  return lVar3;
}



// FUNCTION 144edd180 FUN_144edd180 body=484 status=ok
// SIG undefined FUN_144edd180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144edd180(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x144edd1a0;
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_144ba24f0(0x24,0x66,0x44,"crypto\\rand\\drbg_lib.c",0x1de);
    *(undefined4 *)(param_1 + 0x98) = 2;
    FUN_144bad010(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    return false;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == 0) {
LAB_144edd297:
    if (*(int *)(param_1 + 0x98) == 2) {
      FUN_144edc870(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      FUN_144edc600(param_1,"OpenSSL NIST SP 800-90A DRBG",0x1c);
      iVar1 = *(int *)(param_1 + 0x98);
      bVar5 = iVar1 == 1;
    }
    if (iVar1 == 1) {
      if (uVar3 == 0) {
        if ((!bVar5) && (iVar1 = FUN_144edc960(param_1,0,0,0), iVar1 == 0)) {
          FUN_144ba24f0(0x24,0x66,0x76,"crypto\\rand\\drbg_lib.c",CONCAT44(uVar7,0x221));
        }
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x150) + 8))(param_1,uVar3,uVar4,0,0,uVar8);
      }
    }
    FUN_144bad010(*(undefined8 *)(param_1 + 0x20));
    bVar5 = *(int *)(param_1 + 0x98) == 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_4 == 0) {
      uVar3 = param_2;
      uVar4 = param_3;
      if (param_3 <= *(ulonglong *)(param_1 + 0x68)) goto LAB_144edd297;
      uVar6 = 0x1fb;
      uVar8 = 0x66;
    }
    else if (*(ulonglong *)(param_1 + 0x48) < param_3) {
      uVar6 = 0x1e9;
      uVar8 = 0x6a;
    }
    else {
      if (param_4 <= param_3 * 8) {
        lVar2 = FUN_144bacf70(param_2,param_3,param_4);
        *(longlong *)(param_1 + 0x20) = lVar2;
        uVar3 = 0;
        uVar4 = 0;
        if (lVar2 == 0) {
          return false;
        }
        goto LAB_144edd297;
      }
      uVar6 = 0x1ef;
      uVar8 = 0x7c;
    }
    FUN_144ba24f0(0x24,0x66,uVar8,"crypto\\rand\\drbg_lib.c",uVar6);
    bVar5 = false;
    *(undefined4 *)(param_1 + 0x98) = 2;
  }
  return bVar5;
}



// FUNCTION 144edd370 FUN_144edd370 body=40 status=ok
// SIG undefined FUN_144edd370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edd370(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_144e98620();
    return uVar1;
  }
  return 1;
}



// FUNCTION 144edd3a0 FUN_144edd3a0 body=40 status=ok
// SIG undefined FUN_144edd3a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edd3a0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_144e98640();
    return uVar1;
  }
  return 1;
}



// FUNCTION 144edd3d0 FUN_144edd3d0 body=188 status=ok
// SIG undefined FUN_144edd3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edd3d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144edd3dc;
  if ((int)param_1[0x13] != 0) {
    FUN_144ba24f0(0x24,0x77,0x81,"crypto\\rand\\drbg_lib.c",0x32c,0x144edd3dc);
    return 0;
  }
  if (*param_1 == 0) {
    if (((longlong *)param_1[1] != (longlong *)0x0) && (*(longlong *)param_1[1] == 0)) {
      FUN_144ba24f0(0x24,0x77,0x82,"crypto\\rand\\drbg_lib.c",0x333,0x144edd3dc);
      return 0;
    }
    lVar1 = FUN_144e985a0();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      FUN_144ba24f0(0x24,0x77,0x7e,"crypto\\rand\\drbg_lib.c",0x33a,uVar2);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144edd490 FUN_144edd490 body=74 status=ok
// SIG undefined FUN_144edd490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edd490(void)

{
  if (DAT_14c797500 != 0) {
    FUN_144edc8e0();
    DAT_14c797500 = 0;
    FUN_144e987d0(&DAT_14c797508);
    FUN_144e987d0(&DAT_14c7974fc);
    return;
  }
  return;
}



// FUNCTION 144edd4e0 FUN_144edd4e0 body=94 status=ok
// SIG undefined FUN_144edd4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edd4e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e98760(&DAT_14c7974fc);
  FUN_144e987a0(&DAT_14c7974fc,0);
  FUN_144edc8e0(uVar1);
  uVar1 = FUN_144e98760(&DAT_14c797508);
  FUN_144e987a0(&DAT_14c797508,0);
  FUN_144edc8e0(uVar1);
  return;
}



// FUNCTION 144edd540 FUN_144edd540 body=147 status=ok
// SIG undefined FUN_144edd540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edd540(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144edd5e0(1,DAT_14c70e970,DAT_14c7974f4,param_1);
  if (lVar2 == 0) {
    return 0;
  }
  if ((param_1 == 0) && (iVar1 = FUN_144edd3d0(lVar2), iVar1 == 0)) {
    FUN_144edc8e0(lVar2);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x88) = 1;
  *(undefined4 *)(lVar2 + 0x8c) = 1;
  FUN_144edc600(lVar2,"OpenSSL NIST SP 800-90A DRBG",0x1c);
  return lVar2;
}



// FUNCTION 144edd5e0 FUN_144edd5e0 body=412 status=ok
// SIG undefined FUN_144edd5e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edd5e0(int param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144edd600;
  if (param_1 == 0) {
    lVar3 = FUN_144ea6670(0x178,"crypto\\rand\\drbg_lib.c",0xc0);
  }
  else {
    lVar3 = FUN_144ea6f20(0x178,"crypto\\rand\\drbg_lib.c",0xbf);
  }
  if (lVar3 == 0) {
    FUN_144ba24f0(0x24,0x6d,0x41,"crypto\\rand\\drbg_lib.c",0xc3,uVar4);
  }
  else {
    if ((param_1 == 0) || (iVar1 = FUN_144ea6fb0(lVar3), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)(lVar3 + 0x10) = uVar2;
    uVar2 = FUN_144e98840();
    *(undefined4 *)(lVar3 + 0x18) = uVar2;
    *(code **)(lVar3 + 0x158) = FUN_144baca10;
    *(code **)(lVar3 + 0x160) = FUN_144bacc20;
    *(longlong **)(lVar3 + 8) = param_4;
    if (param_4 == (longlong *)0x0) {
      *(code **)(lVar3 + 0x168) = FUN_144bacc70;
      *(code **)(lVar3 + 0x170) = FUN_144bacd40;
      *(undefined4 *)(lVar3 + 0x74) = DAT_14c70e974;
      uVar4 = DAT_14c70e980;
    }
    else {
      *(undefined4 *)(lVar3 + 0x74) = DAT_14c70e978;
      uVar4 = DAT_14c70e988;
    }
    *(undefined8 *)(lVar3 + 0x80) = uVar4;
    iVar1 = FUN_144edc4f0(lVar3,param_2,param_3);
    if (iVar1 != 0) {
      if (param_4 == (longlong *)0x0) {
        return lVar3;
      }
      if (*param_4 != 0) {
        FUN_144e98620();
      }
      if (*(int *)(lVar3 + 0x30) <= (int)param_4[6]) {
        if (*param_4 == 0) {
          return lVar3;
        }
        FUN_144e98640();
        return lVar3;
      }
      if (*param_4 != 0) {
        FUN_144e98640();
      }
      FUN_144ba24f0(0x24,0x6d,0x83,"crypto\\rand\\drbg_lib.c",0xec);
    }
    FUN_144edc8e0(lVar3);
  }
  return 0;
}



// FUNCTION 144edd780 FUN_144edd780 body=122 status=ok
// SIG undefined FUN_144edd780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144edd780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144bab1c0(0,0,param_3,param_4,0x144edd78a);
  if (iVar1 != 0) {
    iVar1 = FUN_144e98730(&DAT_14c797508,0);
    if (iVar1 != 0) {
      iVar1 = FUN_144e98730(&DAT_14c7974fc,0);
      if (iVar1 != 0) {
        DAT_14c797500 = FUN_144edd540(0);
        if (DAT_14c797500 != 0) {
          return 1;
        }
        FUN_144e987d0(&DAT_14c7974fc);
      }
      FUN_144e987d0(&DAT_14c797508);
    }
  }
  return 0;
}



// FUNCTION 144edd800 FUN_144edd800 body=29 status=ok
// SIG undefined FUN_144edd800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edd800(void)

{
  DAT_14c7974f8 = FUN_144edd780();
  return;
}



// FUNCTION 144edd820 FUN_144edd820 body=3037 status=ok
// SIG undefined FUN_144edd820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edd820(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e999a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e999b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e999c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a520();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a530();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a540();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a550();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e999d0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a560();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a570();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529c7d0();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bfde78,0x8002,"DESX-CBC");
  FUN_144e98940(&DAT_149bfde80,0x8002,"DESX-CBC");
  uVar1 = FUN_144e999e0();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bfde88,0x8002,"DES-CBC");
  FUN_144e98940(&DAT_149bfde8c,0x8002,"DES-CBC");
  uVar1 = FUN_144e9a580();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a590();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bfde90,0x8002,"DES-EDE3-CBC");
  FUN_144e98940(&DAT_149bfde98,0x8002,"DES-EDE3-CBC");
  uVar1 = FUN_144e99990();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a500();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("DES-EDE-ECB",0x8002,"DES-EDE");
  FUN_144e98940("des-ede-ecb",0x8002,"DES-EDE");
  uVar1 = FUN_144e9a510();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("DES-EDE3-ECB",0x8002,"DES-EDE3");
  FUN_144e98940("des-ede3-ecb",0x8002,"DES-EDE3");
  uVar1 = FUN_144e9a5a0();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("des3-wrap",0x8002,"id-smime-alg-CMS3DESwrap");
  uVar1 = FUN_144e9a9b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a9c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b150();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b5d0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b5e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b5f0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b600();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bdc0f4,0x8002,"IDEA-CBC");
  FUN_144e98940(&DAT_149bfdeec,0x8002,"IDEA-CBC");
  uVar1 = FUN_144ea3060();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea3080();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea3090();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea3070();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bdc0fc,0x8002,"SEED-CBC");
  FUN_144e98940(&DAT_149bfdef4,0x8002,"SEED-CBC");
  uVar1 = FUN_14529d5d0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d5e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d5f0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d600();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d610();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bfdefc,0x8002,"SM4-CBC");
  FUN_144e98940(&DAT_149bfdf00,0x8002,"SM4-CBC");
  uVar1 = FUN_144e9bcc0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bd00();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bd10();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bcd0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bce0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bcf0();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bdc0f0,0x8002,"RC2-CBC");
  FUN_144e98940(&DAT_149bfdf04,0x8002,"RC2-CBC");
  FUN_144e98940("rc2-128",0x8002,"RC2-CBC");
  FUN_144e98940("rc2-64",0x8002,"RC2-64-CBC");
  FUN_144e98940("rc2-40",0x8002,"RC2-40-CBC");
  uVar1 = FUN_14529cbf0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529cc10();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529cc20();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529cc00();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_14996b741,0x8002,"BF-CBC");
  FUN_144e98940(&DAT_149bfdf20,0x8002,"BF-CBC");
  FUN_144e98940("blowfish",0x8002,"BF-CBC");
  uVar1 = FUN_14529d040();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d060();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d070();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_14529d050();
  FUN_144baa9e0(uVar1);
  FUN_144e98940(&DAT_149bfdf34,0x8002,"CAST5-CBC");
  FUN_144e98940(&DAT_149bfdf3c,0x8002,"CAST5-CBC");
  FUN_144e98940("CAST-cbc",0x8002,"CAST5-CBC");
  FUN_144e98940("cast-cbc",0x8002,"CAST5-CBC");
  uVar1 = FUN_144baa0e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa100();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa160();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa120();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa140();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa180();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa1a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa1e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa240();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa200();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa1c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa220();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("aes128-wrap",0x8002,"id-aes128-wrap");
  uVar1 = FUN_144baa230();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("AES128",0x8002,"AES-128-CBC");
  FUN_144e98940("aes128",0x8002,"AES-128-CBC");
  uVar1 = FUN_144baa260();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa280();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa2e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa2a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa2c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa300();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa320();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa360();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa3a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa340();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa380();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("aes192-wrap",0x8002,"id-aes192-wrap");
  uVar1 = FUN_144baa390();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("AES192",0x8002,"AES-192-CBC");
  FUN_144e98940("aes192",0x8002,"AES-192-CBC");
  uVar1 = FUN_144baa3c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa3e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa440();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa400();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa420();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa460();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa480();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa4c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa520();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa4e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa4a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa500();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("aes256-wrap",0x8002,"id-aes256-wrap");
  uVar1 = FUN_144baa510();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("AES256",0x8002,"AES-256-CBC");
  FUN_144e98940("aes256",0x8002,"AES-256-CBC");
  uVar1 = FUN_144e9cba0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9cbc0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9e350();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9e3b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1080();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1090();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10d0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10f0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1100();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("ARIA128",0x8002,"ARIA-128-CBC");
  FUN_144e98940("aria128",0x8002,"ARIA-128-CBC");
  uVar1 = FUN_144ea1110();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1120();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1150();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1130();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1140();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1160();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1170();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1180();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1190();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("ARIA192",0x8002,"ARIA-192-CBC");
  FUN_144e98940("aria192",0x8002,"ARIA-192-CBC");
  uVar1 = FUN_144ea11a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea11b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea11e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea11c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea11d0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea11f0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1200();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1210();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1220();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("ARIA256",0x8002,"ARIA-256-CBC");
  FUN_144e98940("aria256",0x8002,"ARIA-256-CBC");
  uVar1 = FUN_144ea1cc0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1cd0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d00();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1ce0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1cf0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d10();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("CAMELLIA128",0x8002,"CAMELLIA-128-CBC");
  FUN_144e98940("camellia128",0x8002,"CAMELLIA-128-CBC");
  uVar1 = FUN_144ea1d30();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d40();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d70();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d50();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d60();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d80();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("CAMELLIA192",0x8002,"CAMELLIA-192-CBC");
  FUN_144e98940("camellia192",0x8002,"CAMELLIA-192-CBC");
  uVar1 = FUN_144ea1da0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1db0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1de0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1dc0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1dd0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1df0();
  FUN_144baa9e0(uVar1);
  FUN_144e98940("CAMELLIA256",0x8002,"CAMELLIA-256-CBC");
  FUN_144e98940("camellia256",0x8002,"CAMELLIA-256-CBC");
  uVar1 = FUN_144ea1d20();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1d90();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1e00();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea2940();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea2950();
  FUN_144baa9e0(uVar1);
  return;
}



// FUNCTION 144ede400 FUN_144ede400 body=423 status=ok
// SIG undefined FUN_144ede400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ede400(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 uVar2;
  
  uVar2 = 0x144ede40a;
  uVar1 = FUN_14529d6b0();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144e98ef0();
  FUN_144baaa40(uVar1);
  FUN_144e98940("ssl3-md5",0x8001,&DAT_149977660,in_R9,uVar2);
  uVar1 = FUN_144e991e0();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab020();
  FUN_144baaa40(uVar1);
  FUN_144e98940("ssl3-sha1",0x8001,&DAT_149977674);
  FUN_144e98940("RSA-SHA1-2",0x8001,"RSA-SHA1");
  uVar1 = FUN_14529db90();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529dc30();
  FUN_144baaa40(uVar1);
  FUN_144e98940("ripemd",0x8001,"RIPEMD160");
  FUN_144e98940("rmd160",0x8001,"RIPEMD160");
  uVar1 = FUN_144bab030();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab040();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab050();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab060();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab070();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab080();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529dcd0();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529dd70();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529d750();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529d7f0();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529da10();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529da20();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529da30();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529da40();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529da50();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_14529da60();
  FUN_144baaa40(uVar1);
  return;
}



// FUNCTION 144ede5b0 FUN_144ede5b0 body=130 status=ok
// SIG undefined FUN_144ede5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ede5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (DAT_14c79750c != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
    uVar2 = 0x32;
    uVar3 = uVar1;
  }
  else {
    uVar1 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar3 = param_1[1];
  }
  FUN_144babbc0();
  FUN_14529dd80();
  FUN_144ba26f0();
  uVar1 = FUN_144ba1a00(uVar1,uVar3,uVar2);
  DAT_14c79750c = 1;
  return uVar1;
}



// FUNCTION 144ede640 FUN_144ede640 body=11 status=ok
// SIG undefined FUN_144ede640(void)

void FUN_144ede640(void)

{
  DAT_14c79750c = 1;
  return;
}



// FUNCTION 144ede650 FUN_144ede650 body=140 status=ok
// SIG undefined FUN_144ede650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ede650(void)

{
  longlong lVar1;
  
  for (lVar1 = FUN_1452906e0(); lVar1 != 0; lVar1 = FUN_145290780(lVar1)) {
    if ((*(byte *)(lVar1 + 0x98) & 8) == 0) {
      FUN_144ed1bc0(lVar1);
      FUN_144ed1d50(lVar1);
      FUN_144eeccd0(lVar1);
      FUN_14529a6a0(lVar1);
      FUN_145299a20(lVar1);
      FUN_14529dda0(lVar1);
      FUN_144eeaae0(lVar1);
      FUN_144ed4ea0(lVar1);
      FUN_145297fd0(lVar1);
    }
  }
  return 1;
}



// FUNCTION 144ede6e0 FUN_144ede6e0 body=159 status=ok
// SIG undefined FUN_144ede6e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ede6e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  iVar1 = FUN_144ba1dc0(param_2,0x2c,1,FUN_144ede860,local_res18,0x144ede6f0);
  if (iVar1 == 0) {
    FUN_144ba24f0(0x26,0xbd,0x96,"crypto\\engine\\eng_fat.c",0x56);
    FUN_144ba2bd0(2,&DAT_149bfe080,param_2);
    return 0;
  }
  uVar2 = FUN_144ede780(param_1,local_res18[0]);
  return uVar2;
}



// FUNCTION 144ede780 FUN_144ede780 body=213 status=ok
// SIG undefined FUN_144ede780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ede780(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 & 0x40) != 0) && (iVar1 = FUN_144ed1cc0(), iVar1 == 0)) {
    return 0;
  }
  if (((char)param_2 < '\0') && (iVar1 = FUN_144ed1e50(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 1) != 0) && (iVar1 = FUN_144eecd60(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 2) != 0) && (iVar1 = FUN_14529a730(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 4) != 0) && (iVar1 = FUN_145299ab0(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 0xb & 1) != 0) && (iVar1 = FUN_14529de30(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 & 8) != 0) && (iVar1 = FUN_144eeab70(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 9 & 1) != 0) && (iVar1 = FUN_144ed4f90(param_1), iVar1 == 0)) {
    return 0;
  }
  if (((param_2 >> 10 & 1) != 0) && (iVar1 = FUN_1452981a0(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 144ede860 FUN_144ede860 body=601 status=ok
// SIG undefined FUN_144ede860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ede860(char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  size_t _MaxCount;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  _MaxCount = (size_t)param_2;
  iVar1 = strncmp(param_1,"ALL",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0xffff;
    return 1;
  }
  iVar1 = strncmp(param_1,"RSA",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 1;
    return 1;
  }
  iVar1 = strncmp(param_1,"DSA",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 2;
    return 1;
  }
  iVar1 = strncmp(param_1,"DH",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 4;
    return 1;
  }
  iVar1 = strncmp(param_1,"EC",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x800;
    return 1;
  }
  iVar1 = strncmp(param_1,"RAND",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 8;
    return 1;
  }
  iVar1 = strncmp(param_1,"CIPHERS",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x40;
    return 1;
  }
  iVar1 = strncmp(param_1,"DIGESTS",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x80;
    return 1;
  }
  iVar1 = strncmp(param_1,"PKEY",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x600;
    return 1;
  }
  iVar1 = strncmp(param_1,"PKEY_CRYPTO",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x200;
    return 1;
  }
  iVar1 = strncmp(param_1,"PKEY_ASN1",_MaxCount);
  if (iVar1 == 0) {
    *param_3 = *param_3 | 0x400;
    return 1;
  }
  return 0;
}



// FUNCTION 144edeac0 FUN_144edeac0 body=82 status=ok
// SIG undefined FUN_144edeac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edeac0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ee39a0();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_144edecc0(lVar2);
  if (iVar1 == 0) {
    FUN_144ee3a60();
    return;
  }
  FUN_145290810(lVar2);
  FUN_144ee3a60(lVar2);
  FUN_144ba26f0();
  return;
}



// FUNCTION 144edeb20 FUN_144edeb20 body=92 status=ok
// SIG undefined FUN_144edeb20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edeb20(void)

{
  FUN_144ba3c00(DAT_14c797538);
  DAT_14c797538 = 0;
  FUN_14529def0(DAT_14c797510);
  DAT_14c797510 = 0;
  FUN_14529def0(DAT_14c797518);
  DAT_14c797518 = 0;
  return 1;
}



// FUNCTION 144edeb80 FUN_144edeb80 body=101 status=ok
// SIG undefined FUN_144edeb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edeb80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = FUN_144edf020(param_3);
    return uVar1;
  }
  if (param_4 == 5) {
    uVar1 = FUN_144edeec0();
    *param_2 = uVar1;
    return 1;
  }
  if (param_4 == 0x61) {
    uVar1 = FUN_144edef70();
    *param_2 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 144edebf0 FUN_144edebf0 body=76 status=ok
// SIG undefined FUN_144edebf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edebf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = FUN_144edf230(param_3);
    return uVar1;
  }
  if (param_4 == 0x40) {
    uVar1 = FUN_144edf160();
    *param_2 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 144edec40 FUN_144edec40 body=124 status=ok
// SIG undefined FUN_144edec40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edec40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n",param_2);
  lVar2 = FUN_144ec7480(param_2,L"rInvalid resolution in tiff: zero or negative.");
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_144eea6a0(lVar2,0,0,0);
  FUN_144b9e7b0(lVar2);
  return uVar1;
}



// FUNCTION 144edecc0 FUN_144edecc0 body=268 status=ok
// SIG undefined FUN_144edecc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edecc0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144ee3af0(param_1,PTR_s_openssl_14c70e9c0);
  if (iVar1 != 0) {
    iVar1 = FUN_144ee3b40(param_1,PTR_s_Software_engine_support_14c70e9c8);
    if (iVar1 != 0) {
      iVar1 = FUN_144ee3b90(param_1,FUN_144edeb20);
      if (iVar1 != 0) {
        uVar2 = FUN_144eecb70();
        iVar1 = FUN_144eecd20(param_1,uVar2);
        if (iVar1 != 0) {
          uVar2 = FUN_14529a270();
          iVar1 = FUN_14529a6f0(param_1,uVar2);
          if (iVar1 != 0) {
            uVar2 = FUN_145298da0();
            iVar1 = FUN_14529ddf0(param_1,uVar2);
            if (iVar1 != 0) {
              uVar2 = FUN_145299890();
              iVar1 = FUN_145299a70(param_1,uVar2);
              if (iVar1 != 0) {
                uVar2 = FUN_144edc4e0();
                iVar1 = FUN_144eeab30(param_1,uVar2);
                if (iVar1 != 0) {
                  iVar1 = FUN_144ed1c30(param_1,FUN_144edeb80);
                  if (iVar1 != 0) {
                    iVar1 = FUN_144ed1dc0(param_1,FUN_144edebf0);
                    if (iVar1 != 0) {
                      iVar1 = FUN_145279550(param_1,FUN_144edec40);
                      if (iVar1 != 0) {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144ededd0 FUN_144ededd0 body=151 status=ok
// SIG undefined FUN_144ededd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ededd0(undefined8 param_1,void *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *_Dst;
  longlong lVar4;
  
  uVar3 = __acrt_iob_func(2);
  FUN_146c958a0(uVar3,"(TEST_ENG_OPENSSL_RC4) test_init_key() called\n");
  iVar1 = FUN_144ba3de0(param_1);
  _Dst = (void *)FUN_144ba3e90(param_1);
  memcpy(_Dst,param_2,(longlong)iVar1);
  uVar3 = FUN_144ba3e90(param_1);
  uVar2 = FUN_144ba3de0(param_1);
  lVar4 = FUN_144ba3e90(param_1);
  FUN_142638520(lVar4 + 0x10,uVar2,uVar3);
  return 1;
}



// FUNCTION 144edee70 FUN_144edee70 body=77 status=ok
// SIG undefined FUN_144edee70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144edee70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba3e90();
  FUN_142637e80(lVar1 + 0x10,param_4,param_3,param_2);
  return 1;
}



// FUNCTION 144edeec0 FUN_144edeec0 body=173 status=ok
// SIG undefined FUN_144edeec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edeec0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_14c797510;
  if ((DAT_14c797510 == 0) &&
     ((((lVar2 = FUN_14529dea0(5,1,0x10), lVar2 == 0 || (iVar1 = FUN_14529df10(lVar2,0), iVar1 == 0)
        ) || (iVar1 = FUN_14529df20(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = FUN_14529df40(lVar2,FUN_144ededd0), iVar1 == 0 ||
        (iVar1 = FUN_14529df50(lVar2,FUN_144edee70), iVar1 == 0)) ||
       (iVar1 = FUN_14529df30(lVar2,0x418), iVar1 == 0)))))) {
    FUN_14529def0(lVar2);
    lVar2 = 0;
  }
  DAT_14c797510 = lVar2;
  return lVar2;
}



// FUNCTION 144edef70 FUN_144edef70 body=174 status=ok
// SIG undefined FUN_144edef70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edef70(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_14c797518;
  if ((DAT_14c797518 == 0) &&
     ((((lVar2 = FUN_14529dea0(5,1,5), lVar2 == 0 || (iVar1 = FUN_14529df10(lVar2,0), iVar1 == 0))
       || (iVar1 = FUN_14529df20(lVar2,8), iVar1 == 0)) ||
      (((iVar1 = FUN_14529df40(lVar2,FUN_144ededd0), iVar1 == 0 ||
        (iVar1 = FUN_14529df50(lVar2,FUN_144edee70), iVar1 == 0)) ||
       (iVar1 = FUN_14529df30(lVar2,0x418), iVar1 == 0)))))) {
    FUN_14529def0(lVar2);
    lVar2 = 0;
  }
  DAT_14c797518 = lVar2;
  return lVar2;
}



// FUNCTION 144edf020 FUN_144edf020 body=176 status=ok
// SIG undefined FUN_144edf020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144edf020(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_14c797534 != 0) {
    iVar2 = DAT_14c797530;
    *param_1 = &DAT_14c797520;
    return iVar2;
  }
  lVar3 = FUN_144edeec0();
  if (lVar3 != 0) {
    uVar1 = FUN_144ba3d60(lVar3);
    *(undefined4 *)(&DAT_14c797520 + (longlong)DAT_14c797530 * 4) = uVar1;
    DAT_14c797530 = DAT_14c797530 + 1;
  }
  lVar3 = FUN_144edef70();
  if (lVar3 != 0) {
    uVar1 = FUN_144ba3d60(lVar3);
    *(undefined4 *)(&DAT_14c797520 + (longlong)DAT_14c797530 * 4) = uVar1;
    DAT_14c797530 = DAT_14c797530 + 1;
  }
  iVar2 = DAT_14c797530;
  DAT_14c797534 = 1;
  *(undefined4 *)(&DAT_14c797520 + (longlong)DAT_14c797530 * 4) = 0;
  *param_1 = &DAT_14c797520;
  return iVar2;
}



// FUNCTION 144edf0d0 FUN_144edf0d0 body=30 status=ok
// SIG undefined FUN_144edf0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edf0d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb280(uVar1);
  return;
}



// FUNCTION 144edf0f0 FUN_144edf0f0 body=54 status=ok
// SIG undefined FUN_144edf0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edf0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb2d0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144edf130 FUN_144edf130 body=39 status=ok
// SIG undefined FUN_144edf130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edf130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb400(param_2,uVar1);
  return;
}



// FUNCTION 144edf160 FUN_144edf160 body=205 status=ok
// SIG undefined FUN_144edf160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144edf160(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_14c797538;
  if ((DAT_14c797538 == 0) &&
     (((((lVar2 = FUN_144ba3bb0(0x40,0x41), lVar2 == 0 ||
         (iVar1 = FUN_144ba3c40(lVar2,0x14), iVar1 == 0)) ||
        (iVar1 = FUN_144ba3c30(lVar2,0x40), iVar1 == 0)) ||
       ((iVar1 = FUN_144ba3c50(lVar2,0x68), iVar1 == 0 ||
        (iVar1 = FUN_144ba3c60(lVar2,0), iVar1 == 0)))) ||
      ((iVar1 = FUN_144ba3c70(lVar2,FUN_144edf0d0), iVar1 == 0 ||
       ((iVar1 = FUN_144ba3c80(lVar2,FUN_144edf0f0), iVar1 == 0 ||
        (iVar1 = FUN_144ba3c90(lVar2,FUN_144edf130), iVar1 == 0)))))))) {
    FUN_144ba3c00(lVar2);
    lVar2 = 0;
  }
  DAT_14c797538 = lVar2;
  return lVar2;
}



// FUNCTION 144edf230 FUN_144edf230 body=140 status=ok
// SIG undefined FUN_144edf230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144edf230(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_14c79754c != 0) {
    iVar2 = DAT_14c797548;
    *param_1 = &DAT_14c797540;
    return iVar2;
  }
  lVar3 = FUN_144edf160();
  if (lVar3 != 0) {
    uVar1 = FUN_144ba3cb0(lVar3);
    *(undefined4 *)(&DAT_14c797540 + (longlong)DAT_14c797548 * 4) = uVar1;
    DAT_14c797548 = DAT_14c797548 + 1;
  }
  iVar2 = DAT_14c797548;
  DAT_14c79754c = 1;
  *(undefined4 *)(&DAT_14c797540 + (longlong)DAT_14c797548 * 4) = 0;
  *param_1 = &DAT_14c797540;
  return iVar2;
}



// FUNCTION 144edf2c0 FUN_144edf2c0 body=60 status=ok
// SIG undefined FUN_144edf2c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144edf2c0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
    return false;
  }
  lVar1 = FUN_14259f270(param_1,(longlong)param_2);
  return param_2 == lVar1;
}



// FUNCTION 144edf310 FUN_144edf310 body=109 status=ok
// SIG undefined FUN_144edf310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edf310(void)

{
  int iVar1;
  longlong lVar2;
  
  if (((DAT_14c7973a0._4_4_ & 0x40000000) != 0) && (lVar2 = FUN_144ee39a0(), lVar2 != 0)) {
    iVar1 = FUN_144edf390(lVar2);
    if (iVar1 != 0) {
      FUN_145290810(lVar2);
      FUN_144ee3a60(lVar2);
      FUN_144ba26f0();
      return;
    }
    FUN_144ee3a60();
    return;
  }
  return;
}



// FUNCTION 144edf390 FUN_144edf390 body=127 status=ok
// SIG undefined FUN_144edf390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144edf390(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ee3af0(param_1,PTR_s_rdrand_14c70ea00);
  if (iVar1 != 0) {
    iVar1 = FUN_144ee3b40(param_1,PTR_s_Intel_RDRAND_engine_14c70ea08);
    if (iVar1 != 0) {
      iVar1 = FUN_144ee3bd0(param_1,8);
      if (iVar1 != 0) {
        iVar1 = FUN_144ee3ba0(param_1,&LAB_144edf380);
        if (iVar1 != 0) {
          iVar1 = FUN_144eeab30(param_1,&DAT_14c70e9d0);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144edf410 FUN_144edf410 body=60 status=ok
// SIG undefined FUN_144edf410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144edf410(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144edfdd0();
  if (lVar1 != 0) {
    FUN_145290810(lVar1);
    FUN_144ee3a60(lVar1);
    FUN_144ba26f0();
    return;
  }
  return;
}


