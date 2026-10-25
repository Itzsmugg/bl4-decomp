// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ebe530 FUN_144ebe530 body=132 status=ok
// SIG undefined FUN_144ebe530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ebe530(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  piVar4 = (int *)FUN_144b9e170((longlong)iVar1);
  if (piVar4 != (int *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if (((piVar4[1] & *(uint *)(lVar2 + 0x20)) != 0) &&
       ((*piVar4 != 0x390 || ((*(byte *)(lVar2 + 0x1c) & 1) == 0)))) {
      iVar3 = -1;
      if ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x310 + (longlong)iVar1 * 4) & 1) != 0) {
        iVar3 = iVar1;
      }
      return iVar3;
    }
  }
  return -1;
}



// FUNCTION 144ebe5c0 FUN_144ebe5c0 body=299 status=ok
// SIG undefined FUN_144ebe5c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebe5c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0x144ebe5d2;
  FUN_144ba3130();
  iVar1 = FUN_144ba7180(param_4,&local_28);
  if ((iVar1 == 2) && (*(int *)(param_2 + 0xc) != local_28)) {
    return 0;
  }
  FUN_144ba3170();
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(lVar2 + 0x2f0) == 0) {
    return 1;
  }
  uVar5 = 0;
  if (*(longlong *)(lVar2 + 0x300) != 0) {
    do {
      ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_149bf65a0;
      uVar3 = 0;
      do {
        if (*(short *)(ppuVar4 + 1) == *(short *)(*(longlong *)(lVar2 + 0x2f0) + uVar5 * 2)) {
          iVar1 = FUN_144bb5f30(param_3,&local_24,&local_20,0,0);
          if (((iVar1 != 0) && (local_24 == *(int *)((longlong)ppuVar4 + 0xc))) &&
             ((int)local_20 == *(int *)((longlong)ppuVar4 + 0x14))) {
            return 1;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        ppuVar4 = ppuVar4 + 5;
      } while (uVar3 < 0x1a);
      lVar2 = *(longlong *)(param_1 + 0xa8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulonglong *)(lVar2 + 0x300));
  }
  return 0;
}



// FUNCTION 144ebe6f0 FUN_144ebe6f0 body=63 status=ok
// SIG undefined FUN_144ebe6f0(void)

undefined8 FUN_144ebe6f0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  if ((param_3 <= (ulonglong)param_1[1]) && (param_3 < 0x8000000000000000)) {
    *param_2 = *param_1;
    param_2[1] = param_3;
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 144ebe730 FUN_144ebe730 body=81 status=ok
// SIG undefined FUN_144ebe730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebe730(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 144ebe790 FUN_144ebe790 body=120 status=ok
// SIG undefined FUN_144ebe790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebe790(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 2;
    uVar2 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar2 <= uVar3) {
      *param_1 = puVar1 + 2 + uVar2;
      param_1[1] = uVar3 - uVar2;
      *param_2 = puVar1 + 2;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ebe810 FUN_144ebe810 body=114 status=ok
// SIG undefined FUN_144ebe810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebe810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14526ef00(param_1,&DAT_0000feff,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526f090(param_1,param_2,param_3,1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ebe890 FUN_144ebe890 body=112 status=ok
// SIG undefined FUN_144ebe890(void)

undefined8 FUN_144ebe890(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x558);
  if (((((uVar1 & 1) != 0) &&
       (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
          (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
        (((uVar1 & 8) == 0 || (*(int *)(param_1 + 0x788) == 3)))))) &&
      ((*(int *)(param_1 + 0x7a0) < 1 || ((uVar1 & 4) == 0)))) &&
     (((uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20),
       (uVar3 & 4) == 0 || ((uVar1 & 2) != 0)) && ((uVar3 & 0x50) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ebe900 FUN_144ebe900 body=559 status=ok
// SIG undefined FUN_144ebe900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ebe900(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ebe90a;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = FUN_144ec2560(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    switch(param_1[0x17]) {
    case 0:
    case 1:
    case 0x15:
      if (param_2 == 1) {
        param_1[0x17] = 0x14;
        return 1;
      }
      break;
    case 0x1a:
      if (param_2 == 0x10) {
        if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x2a0) == 0) {
LAB_144ebea04:
          param_1[0x17] = 0x1c;
          return 1;
        }
        if (*param_1 == 0x300) {
          if (((byte)param_1[0x156] & 3) != 3) goto LAB_144ebea04;
          uVar4 = 200;
          uVar2 = 0x28;
          uVar3 = 199;
          goto LAB_144ebeb0e;
        }
      }
      else if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x2a0) != 0) && (param_2 == 0xb)) {
        param_1[0x17] = 0x1b;
        return 1;
      }
      break;
    case 0x1b:
      if (param_2 == 0x10) goto LAB_144ebea04;
      break;
    case 0x1c:
      if ((*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1b8) == 0) || (param_1[0x1d] != 0))
      goto switchD_144ebe973_caseD_1d;
      if (param_2 == 0xf) {
        param_1[0x17] = 0x1d;
        return 1;
      }
      break;
    case 0x1d:
    case 0x24:
switchD_144ebe973_caseD_1d:
      if (param_2 == 0x101) {
        param_1[0x17] = 0x1f;
        return 1;
      }
      break;
    case 0x1e:
switchD_144ebe973_caseD_1e:
      if (param_2 == 0x14) {
        param_1[0x17] = 0x20;
        return 1;
      }
      break;
    case 0x1f:
      if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x3dc) == 0) goto switchD_144ebe973_caseD_1e;
      if (param_2 == 0x43) {
        param_1[0x17] = 0x1e;
        return 1;
      }
    }
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
     (param_2 == 0x101)) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[10] = 3;
    uVar5 = FUN_144b98ab0(param_1);
    FUN_144b9e640(uVar5,0xf);
    FUN_144b9e620(uVar5,9);
    return 0;
  }
  uVar4 = 0x139;
  uVar2 = 10;
  uVar3 = 0xf4;
LAB_144ebeb0e:
  FUN_144eafc90(param_1,uVar2,0x1a2,uVar3,"ssl\\statem\\statem_srvr.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 144ebeb80 FUN_144ebeb80 body=681 status=ok
// SIG undefined FUN_144ebeb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebeb80(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar4 == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar3 = FUN_144ec26f0(param_1);
    return uVar3;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
  case 0x15:
  case 0x1a:
    return 2;
  case 1:
    if (*(int *)(param_1 + 0x60) == 0x13) {
      *(undefined8 *)(param_1 + 0x5c) = 0x13;
      return 1;
    }
    iVar2 = FUN_144eb4ea0(param_1);
    if (iVar2 != 0) {
      return 2;
    }
    return 0;
  default:
    FUN_144eafc90(param_1,0x50,0x25c,0x44,"ssl\\statem\\statem_srvr.c",0x10000022e);
    return 0;
  case 0x13:
    break;
  case 0x14:
    if (((uVar4 != 0) && (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x108) == 0)) &&
       (uVar4 = FUN_144b979b0(param_1), (uVar4 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x15;
      return 1;
    }
    if (((*(int *)(param_1 + 0x780) != 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x16;
      return 1;
    }
    break;
  case 0x16:
    if (*(int *)(param_1 + 200) != 0) {
      uVar1 = 0x23;
      if (*(int *)(param_1 + 0x678) != 0) {
        uVar1 = 0x21;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      return 1;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0x54) != 0) {
      iVar2 = FUN_144ec26a0();
      if (iVar2 == 0) {
        iVar2 = FUN_144ebe890();
        *(uint *)(param_1 + 0x5c) = 0x1a - (uint)(iVar2 != 0);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x17;
    return 1;
  case 0x17:
    if (*(int *)(param_1 + 0x654) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x22;
      return 1;
    }
  case 0x22:
    iVar2 = FUN_144ec26a0(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
  case 0x18:
    iVar2 = FUN_144ebe890(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x19;
      return 1;
    }
  case 0x19:
    *(undefined4 *)(param_1 + 0x5c) = 0x1a;
    return 1;
  case 0x20:
    if (*(int *)(param_1 + 200) == 0) {
      uVar1 = 0x23;
      if (*(int *)(param_1 + 0x678) != 0) {
        uVar1 = 0x21;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      return 1;
    }
    break;
  case 0x21:
    *(undefined4 *)(param_1 + 0x5c) = 0x23;
    return 1;
  case 0x23:
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x24:
    if (*(int *)(param_1 + 200) != 0) {
      return 2;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return 1;
}



// FUNCTION 144ebee90 FUN_144ebee90 body=515 status=ok
// SIG undefined FUN_144ebee90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebee90(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      FUN_144ecbf30(param_1);
      return 2;
    }
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      FUN_144ecbf30(param_1);
      *(undefined4 *)(param_1 + 0x78) = 0;
      return 2;
    }
    break;
  case 0x16:
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      return 2;
    }
    break;
  case 0x21:
    uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
    if (((uVar4 == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
       ((iVar2 != 0x10000 && (*(longlong *)(param_1 + 0x1748) == 0)))) {
      uVar3 = FUN_144eb7160(param_1,param_2 & 0xffffffff,0,0);
      return uVar3;
    }
    bVar5 = uVar4 == 0;
    goto LAB_144ebef9f;
  case 0x23:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      return 2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
    if (lVar1 == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    }
    else if (lVar1 != *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238)) {
      FUN_144eafc90(param_1,0x50,0x280,0x44,"ssl\\statem\\statem_srvr.c",0x1000002f0);
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    bVar5 = (*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0;
LAB_144ebef9f:
    if (!bVar5) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    break;
  case 0x2e:
    if ((*(int *)(param_1 + 0x84) != 9) && ((**(uint **)(param_1 + 0xa8) & 0x800) == 0)) {
      return 2;
    }
  case 1:
    uVar3 = FUN_144eb7160(param_1,param_2,1);
    return uVar3;
  }
  return 2;
}



// FUNCTION 144ebf0f0 FUN_144ebf0f0 body=857 status=ok
// SIG undefined FUN_144ebf0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebf0f0(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [32];
  
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar3 = FUN_144eafe70(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    iVar3 = FUN_14527d180(param_1);
    if (iVar3 != 0) {
      return 2;
    }
    return 0;
  case 0x15:
    iVar3 = FUN_144eafe70(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    if ((*param_1 != 0x100) && (iVar3 = FUN_14527d180(param_1), iVar3 == 0)) {
      return 0;
    }
    param_1[0x17a] = 1;
    return 2;
  case 0x16:
    piVar1 = *(int **)(param_1 + 2);
    uVar6 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
    if ((((uVar6 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) || (param_1[0x136] != 1)) {
      if (uVar6 != 0) {
        return 2;
      }
      if (*piVar1 < 0x304) {
        return 2;
      }
      if (*piVar1 == 0x10000) {
        return 2;
      }
      if (((param_1[0x173] & 0x100000U) != 0) && (param_1[0x136] != 2)) {
        return 2;
      }
      goto switchD_144ebf12f_caseD_23;
    }
    uVar6 = param_1[0x173] & 0x100000;
    goto LAB_144ebf1c6;
  case 0x19:
    uVar6 = param_1[0x1e2] - 3;
LAB_144ebf1c6:
    if (uVar6 == 0) {
switchD_144ebf12f_caseD_1a:
      iVar3 = FUN_144eafe70(param_1);
      if (iVar3 != 1) {
        return 3;
      }
    }
    break;
  case 0x1a:
    goto switchD_144ebf12f_caseD_1a;
  case 0x21:
    SetLastError(0);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
        (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) &&
       ((iVar3 != 0x10000 && (iVar3 = FUN_144eafe70(param_1), iVar3 != 1)))) {
      iVar3 = FUN_144b9a050(param_1,0);
      if (iVar3 != 5) {
        return 3;
      }
      DVar4 = GetLastError();
      if (((DVar4 != 0x20) && (DVar4 != 0x6c)) && (DVar4 != 0x2746)) {
        return 3;
      }
      param_1[10] = 1;
    }
    break;
  case 0x23:
switchD_144ebf12f_caseD_23:
    if (param_1[0x136] != 1) {
      lVar2 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
      if ((((*(byte *)(lVar2 + 0x60) & 8) == 0) && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3))
         && (iVar3 != 0x10000)) {
        iVar3 = (**(code **)(lVar2 + 0x10))(param_1);
        if (((iVar3 != 0) &&
            (iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))
                               (param_1,0xa2), iVar3 != 0)) &&
           ((param_1[0x1c4] == 2 ||
            (iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))
                               (param_1,0xa1), iVar3 != 0)))) {
          param_1[0x20] = 1;
          return 2;
        }
      }
      else {
        iVar3 = (**(code **)(lVar2 + 0x20))(param_1,0x22);
        if (iVar3 != 0) {
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
            return 2;
          }
          FUN_144ecdb00(param_1,2);
          return 2;
        }
      }
      return 0;
    }
    iVar3 = FUN_144eafe70(param_1);
    if (iVar3 == 0) {
      return 3;
    }
    break;
  case 0x24:
    iVar3 = FUN_144eafe70(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    lVar2 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
    if ((((*(byte *)(lVar2 + 0x60) & 8) == 0) && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3))
       && (iVar3 != 0x10000)) {
      iVar3 = (**(code **)(lVar2 + 0x18))(param_1,param_1 + 0x6d,param_1 + 0x5d,0,local_res8);
      if (iVar3 == 0) {
        return 0;
      }
      uVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x122);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    break;
  case 0x2a:
    iVar3 = FUN_144eafe70(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    uVar5 = FUN_144eb91e0(param_1,1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  return 2;
}



// FUNCTION 144ebf4b0 FUN_144ebf4b0 body=516 status=ok
// SIG undefined FUN_144ebf4b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ebf4b0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  default:
    FUN_144eafc90(param_1,0x50,0x1af,0xec,"ssl\\statem\\statem_srvr.c",0x404,0x144ebf4ba);
    return 0;
  case 0x15:
    *param_3 = FUN_144ec0560;
    *param_4 = 3;
    return 1;
  case 0x16:
    *param_3 = FUN_144ec02d0;
    *param_4 = 2;
    return 1;
  case 0x17:
    *param_3 = FUN_144ec0630;
    *param_4 = 0xb;
    return 1;
  case 0x18:
    *param_3 = FUN_144ec0730;
    *param_4 = 0xc;
    return 1;
  case 0x19:
    *param_3 = FUN_144ec10a0;
    *param_4 = 0xd;
    return 1;
  case 0x1a:
    *param_3 = FUN_144ec1330;
    *param_4 = 0xe;
    return 1;
  case 0x21:
    *param_3 = FUN_144ec1da0;
    *param_4 = 4;
    return 1;
  case 0x22:
    *param_3 = FUN_144ebf9d0;
    *param_4 = 0x16;
    return 1;
  case 0x23:
    break;
  case 0x24:
    *param_3 = FUN_144eb6e10;
    *param_4 = 0x14;
    return 1;
  case 0x25:
    *param_3 = FUN_144ec2520;
    *param_4 = 8;
    return 1;
  case 0x28:
    *param_3 = FUN_144eb7420;
    *param_4 = 0xf;
    return 1;
  case 0x2a:
    *param_3 = FUN_144eb7000;
    *param_4 = 0x18;
    return 1;
  case 0x2e:
    *param_3 = 0;
    *param_4 = 0xffffffff;
    return 1;
  }
  pcVar1 = FUN_144eb6da0;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    pcVar1 = FUN_1452723e0;
  }
  *param_3 = pcVar1;
  *param_4 = 0x101;
  return 1;
}



// FUNCTION 144ebf730 FUN_144ebf730 body=89 status=ok
// SIG undefined FUN_144ebf730(void)

undefined8 FUN_144ebf730(longlong param_1)

{
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    return 0x20144;
  default:
    return 0;
  case 0x1b:
    return *(undefined8 *)(param_1 + 0x5e0);
  case 0x1c:
    return 0x800;
  case 0x1d:
    return 0x4000;
  case 0x1e:
    return 0x202;
  case 0x1f:
  case 0x2c:
    return 1;
  case 0x20:
    return 0x40;
  }
}



// FUNCTION 144ebf7d0 FUN_144ebf7d0 body=184 status=ok
// SIG undefined FUN_144ebf7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebf7d0(longlong param_1)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    uVar1 = FUN_144ebf9f0();
    return uVar1;
  default:
    FUN_144eafc90(param_1,0x50,0x25b,0x44,"ssl\\statem\\statem_srvr.c",0x4a7,0x144ebf7da);
    return 0;
  case 0x1b:
    uVar1 = FUN_144ec1370();
    return uVar1;
  case 0x1c:
    uVar1 = FUN_144ec1a10();
    return uVar1;
  case 0x1d:
    uVar1 = FUN_144eb7790();
    return uVar1;
  case 0x1e:
    uVar1 = FUN_144ec1c00();
    return uVar1;
  case 0x1f:
    uVar1 = FUN_144eb69e0();
    return uVar1;
  case 0x20:
    uVar1 = FUN_144eb6af0();
    return uVar1;
  case 0x2c:
    uVar1 = FUN_144eb7080();
    return uVar1;
  case 0x31:
    uVar1 = FUN_144ec21c0();
    return uVar1;
  }
}



// FUNCTION 144ebf8d0 FUN_144ebf8d0 body=91 status=ok
// SIG undefined FUN_144ebf8d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebf8d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0x14) {
    uVar1 = FUN_144ec0060();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x5c) != 0x1c) {
    FUN_144eafc90(param_1,0x50,0x259,0x44,"ssl\\statem\\statem_srvr.c",0x4d7,0x144ebf8da);
    return 0;
  }
  uVar1 = FUN_144ec1b70();
  return uVar1;
}



// FUNCTION 144ebf930 FUN_144ebf930 body=152 status=ok
// SIG undefined FUN_144ebf930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebf930(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_14526ef00(param_2,(longlong)*(int *)(param_1 + 0x640),1);
  if (iVar1 != 0) {
    iVar1 = FUN_14526f090(param_2,*(undefined8 *)(param_1 + 0x668),*(undefined8 *)(param_1 + 0x670),
                          3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1ee,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar2,0x1070));
  return 0;
}



// FUNCTION 144ebf9d0 FUN_144ebf9d0 body=32 status=ok
// SIG undefined FUN_144ebf9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ebf9d0(void)

{
  int iVar1;
  
  iVar1 = FUN_144ebf930();
  return iVar1 != 0;
}



// FUNCTION 144ebf9f0 FUN_144ebf9f0 body=1646 status=ok
// SIG undefined FUN_144ebf9f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ebf9f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  void *_Src;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  size_t _Size;
  byte *pbVar15;
  uint uVar16;
  undefined4 uVar18;
  int local_38;
  int iStack_34;
  undefined8 uStack_30;
  ulonglong uVar17;
  
  uStack_30 = 0x144ebfa15;
  piVar8 = (int *)0x0;
  if (((*(int *)(param_1 + 0x780) == 0) &&
      (lVar9 = *(longlong *)(param_1 + 0xa8), *(longlong *)(lVar9 + 0x198) != 0)) &&
     (*(longlong *)(lVar9 + 0x220) != 0)) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)) {
      if (((*(uint *)(param_1 + 0x5cc) >> 0x1e & 1) != 0) ||
         ((*(int *)(lVar9 + 0x3d8) == 0 && ((*(uint *)(param_1 + 0x5cc) >> 0x12 & 1) == 0)))) {
        FUN_144ece130(param_1,1,100);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x780) = 1;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      goto LAB_144ebfac9;
    }
    uVar18 = 0x572;
  }
  else {
LAB_144ebfac9:
    piVar8 = (int *)FUN_144ea6670(0x290,"ssl\\statem\\statem_srvr.c",0x580);
    if (piVar8 != (int *)0x0) {
      iVar7 = FUN_144eb2260(param_1 + 0x830);
      *piVar8 = iVar7;
      if (iVar7 != 0) {
        if (((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
            (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) &&
           (*(int *)(param_1 + 0x4d8) == 0)) {
          if (param_2[1] != 0) {
            cVar2 = *(char *)*param_2;
            *param_2 = (longlong)((char *)*param_2 + 1);
            param_2[1] = param_2[1] + -1;
            if (cVar2 == '\x01') goto LAB_144ebfb94;
          }
          uVar12 = 0x50;
          uVar18 = 0x5ae;
          uVar14 = 0x44;
        }
        else {
          uVar18 = 0x593;
          uVar12 = 10;
          uVar14 = 0xf4;
        }
        goto LAB_144ec0005;
      }
LAB_144ebfb94:
      if ((ulonglong)param_2[1] < 2) {
        uVar18 = 0x5b5;
        uVar14 = 0xa0;
        goto LAB_144ec0000;
      }
      bVar3 = *(byte *)*param_2;
      piVar8[1] = (uint)bVar3 << 8;
      piVar8[1] = (uint)CONCAT11(bVar3,*(undefined1 *)(*param_2 + 1));
      *param_2 = *param_2 + 2;
      param_2[1] = param_2[1] + -2;
      puVar6 = (undefined1 *)*param_2;
      uVar10 = param_2[1];
      if (*piVar8 == 0) {
        iVar7 = FUN_144ebe730(param_2,piVar8 + 2,0x20);
        if (iVar7 == 0) {
LAB_144ebfe1a:
          uVar18 = 0x5f8;
          uVar14 = 0x9f;
        }
        else {
          if (param_2[1] == 0) goto LAB_144ebfe1a;
          uVar10 = param_2[1] - 1;
          bVar3 = *(byte *)*param_2;
          pbVar15 = (byte *)*param_2 + 1;
          uVar11 = (ulonglong)bVar3;
          if (uVar10 < bVar3) goto LAB_144ebfe1a;
          *param_2 = (longlong)(pbVar15 + uVar11);
          param_2[1] = uVar10 - uVar11;
          if (0x20 < uVar11) {
            piVar8[10] = 0;
            piVar8[0xb] = 0;
            goto LAB_144ebfe1a;
          }
          *(ulonglong *)(piVar8 + 10) = uVar11;
          memcpy(piVar8 + 0xc,pbVar15,uVar11);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
LAB_144ebff0e:
            iVar7 = FUN_144ebe790(param_2,piVar8 + 0x56);
            if (iVar7 == 0) {
              uVar18 = 0x618;
              uVar14 = 0x9f;
            }
            else {
              if (param_2[1] != 0) {
                uVar11 = param_2[1] - 1;
                bVar3 = *(byte *)*param_2;
                uVar10 = (ulonglong)bVar3;
                pbVar15 = (byte *)*param_2 + 1;
                _Size = (size_t)bVar3;
                if (uVar10 <= uVar11) {
                  *param_2 = (longlong)(pbVar15 + uVar10);
                  param_2[1] = uVar11 - uVar10;
                  piVar1 = piVar8 + 0x9c;
                  if (param_2[1] == 0) {
                    piVar1[0] = 0;
                    piVar1[1] = 0;
                    piVar8[0x9e] = 0;
                    piVar8[0x9f] = 0;
                  }
                  else {
                    iVar7 = FUN_144ebe790(param_2,piVar1);
                    if ((iVar7 == 0) || (param_2[1] != 0)) {
                      uVar18 = 0x629;
                      uVar14 = 0x9f;
                      goto LAB_144ec0000;
                    }
                  }
                  if (_Size < 0x100) goto LAB_144ebfd14;
                  uVar12 = 0x50;
                  piVar8[0x5a] = 0;
                  piVar8[0x5b] = 0;
                  uVar18 = 0x633;
                  uVar14 = 0x44;
                  goto LAB_144ec0005;
                }
              }
              uVar18 = 0x61e;
              uVar14 = 0x9f;
            }
          }
          else {
            if (param_2[1] != 0) {
              uVar10 = param_2[1] - 1;
              bVar3 = *(byte *)*param_2;
              pbVar15 = (byte *)*param_2 + 1;
              uVar11 = (ulonglong)bVar3;
              if (bVar3 <= uVar10) {
                *param_2 = (longlong)(pbVar15 + uVar11);
                param_2[1] = uVar10 - uVar11;
                if (0x100 < uVar11) {
                  uVar12 = 0x50;
                  piVar8[0x14] = 0;
                  piVar8[0x15] = 0;
                  uVar18 = 0x606;
                  uVar14 = 0x44;
                  goto LAB_144ec0005;
                }
                *(ulonglong *)(piVar8 + 0x14) = uVar11;
                memcpy(piVar8 + 0x16,pbVar15,uVar11);
                uVar13 = FUN_144b979b0(param_1);
                if (((uVar13 >> 0xd & 1) != 0) && (*(longlong *)(piVar8 + 0x14) == 0)) {
                  FUN_144ea6530(piVar8,"ssl\\statem\\statem_srvr.c",0x610);
                  return 1;
                }
                goto LAB_144ebff0e;
              }
            }
            uVar18 = 0x5ff;
            uVar14 = 0x9f;
          }
        }
LAB_144ec0000:
        uVar12 = 0x32;
LAB_144ec0005:
        FUN_144eafc90(param_1,uVar12,0x17d,uVar14,"ssl\\statem\\statem_srvr.c",uVar18);
      }
      else {
        if (uVar10 < 2) {
LAB_144ebfda4:
          uVar18 = 0x5c7;
          uVar14 = 0xd5;
          goto LAB_144ec0000;
        }
        uVar4 = *puVar6;
        uVar5 = puVar6[1];
        *param_2 = (longlong)(puVar6 + 2);
        param_2[1] = uVar10 - 2;
        if (uVar10 - 2 < 2) goto LAB_144ebfda4;
        uVar13 = (uint)CONCAT11(puVar6[2],puVar6[3]);
        uVar11 = (ulonglong)uVar13;
        *param_2 = (longlong)(puVar6 + 4);
        param_2[1] = uVar10 - 4;
        if (uVar10 - 4 < 2) goto LAB_144ebfda4;
        uVar16 = (uint)CONCAT11(puVar6[4],puVar6[5]);
        uVar17 = (ulonglong)uVar16;
        *param_2 = (longlong)(puVar6 + 6);
        param_2[1] = uVar10 - 6;
        if (0x20 < uVar13) {
          uVar12 = 0x2f;
          uVar18 = 0x5cd;
          uVar14 = 0x9f;
          goto LAB_144ec0005;
        }
        iVar7 = FUN_144ebe6f0(param_2,piVar8 + 0x56,CONCAT11(uVar4,uVar5));
        if (iVar7 == 0) {
LAB_144ebfd91:
          uVar18 = 0x5d8;
          uVar14 = 0xd5;
          goto LAB_144ec0000;
        }
        iVar7 = FUN_144ebe730(param_2,piVar8 + 0xc,uVar11 & 0xffffffff);
        if ((iVar7 == 0) || ((ulonglong)param_2[1] < uVar17)) goto LAB_144ebfd91;
        _Src = (void *)*param_2;
        lVar9 = param_2[1] - uVar17;
        param_2[1] = lVar9;
        *param_2 = (longlong)_Src + uVar17;
        if (lVar9 != 0) goto LAB_144ebfd91;
        *(ulonglong *)(piVar8 + 10) = uVar11 & 0xffffffff;
        if (0x20 < uVar16) {
          uVar16 = 0x20;
        }
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        uVar10 = (ulonglong)uVar16;
        piVar8[6] = 0;
        piVar8[7] = 0;
        piVar8[8] = 0;
        piVar8[9] = 0;
        if (uVar17 < uVar10) {
          uVar12 = 0x50;
          uVar18 = 0x5eb;
          uVar14 = 0x44;
          goto LAB_144ec0005;
        }
        memcpy((void *)((longlong)piVar8 + (0x28 - uVar10)),_Src,uVar10);
        piVar8[0x9c] = 0;
        piVar8[0x9d] = 0;
        pbVar15 = &DAT_149bf6bfb;
        piVar8[0x9e] = 0;
        piVar8[0x9f] = 0;
        _Size = 1;
LAB_144ebfd14:
        *(size_t *)(piVar8 + 0x5a) = _Size;
        memcpy(piVar8 + 0x5c,pbVar15,_Size);
        local_38 = piVar8[0x9c];
        iStack_34 = piVar8[0x9d];
        uStack_30 = *(undefined8 *)(piVar8 + 0x9e);
        iVar7 = FUN_145270550(param_1,&local_38,0x80,piVar8 + 0xa2,piVar8 + 0xa0,1);
        if (iVar7 != 0) {
          *(int **)(param_1 + 0x738) = piVar8;
          return 2;
        }
      }
      FUN_144ea6530(*(undefined8 *)(piVar8 + 0xa2),"ssl\\statem\\statem_srvr.c",0x645);
      goto LAB_144ec002d;
    }
    uVar18 = 0x583;
  }
  FUN_144eafc90(param_1,0x50,0x17d,0x44,"ssl\\statem\\statem_srvr.c",uVar18);
LAB_144ec002d:
  FUN_144ea6530(piVar8,"ssl\\statem\\statem_srvr.c",0x646);
  return 0;
}



// FUNCTION 144ec0060 FUN_144ec0060 body=613 status=ok
// SIG undefined FUN_144ec0060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec0060(longlong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = 1;
  if (param_2 == 3) {
    uVar3 = 1;
    iVar2 = FUN_144ec2ba0();
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 < 0) {
      return 3;
    }
  }
  else if (param_2 != 4) {
    if (param_2 != 5) {
      return 1;
    }
    goto LAB_144ec0292;
  }
  if (*(int *)(param_1 + 200) == 0) {
LAB_144ec00ea:
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x488) + 0x1b8);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1c0));
      if (iVar2 == 0) {
        FUN_144eafc90(param_1,0x50,0x17a,0x179,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0x8db));
        return 0;
      }
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x28) = 4;
        return 4;
      }
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
LAB_144ec015b:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
      uVar4 = FUN_144b9a240(param_1);
      lVar5 = FUN_144ec9b50(param_1,*(undefined8 *)(param_1 + 0x110),uVar4);
      if (lVar5 == 0) {
        FUN_144eafc90(param_1,0x28,0x17a,0xc1,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0x8ed));
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) = lVar5;
    }
    if (*(int *)(param_1 + 200) == 0) {
      iVar2 = FUN_144ebc0d0(param_1,1);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(code **)(param_1 + 0x828) != (code *)0x0) {
        uVar3 = (**(code **)(param_1 + 0x828))
                          (param_1,(*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) +
                                             0x1c) & 6) != 0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1b0) = uVar3;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x508) + 0x1b0) != 0) {
        *(undefined4 *)(param_1 + 0x678) = 0;
      }
    }
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      if (*(int *)(param_1 + 200) == 0) goto LAB_144ec00ea;
      goto LAB_144ec015b;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
  }
  iVar2 = FUN_144ec3750(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
       (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
     (iVar2 = FUN_144ec22c0(param_1), iVar2 == 0)) {
    return 0;
  }
LAB_144ec0292:
  iVar2 = FUN_144ec2980(param_1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 4;
    return 5;
  }
  if (iVar2 < 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 144ec02d0 FUN_144ec02d0 body=650 status=ok
// SIG undefined FUN_144ec02d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec02d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined4 uVar8;
  
  uVar8 = 1;
  iVar2 = 0;
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
       (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
     (param_1[0x136] == 1)) {
    iVar5 = 1;
    iVar1 = 0x303;
  }
  else {
    iVar1 = *param_1;
    iVar5 = iVar2;
  }
  iVar1 = FUN_14526ef00(param_2,(longlong)iVar1,2);
  if (iVar1 != 0) {
    if (param_1[0x136] == 1) {
      puVar3 = &DAT_149bf5d70;
    }
    else {
      puVar3 = (undefined *)(*(longlong *)(param_1 + 0x2a) + 0x98);
    }
    iVar1 = FUN_14526ef90(param_2,puVar3,0x20);
    if (iVar1 != 0) {
      if ((*(int *)(*(longlong *)(param_1 + 0x142) + 0x1b0) != 0) ||
         (((*(byte *)(*(longlong *)(param_1 + 0x166) + 0x48) & 2) == 0 && (param_1[0x32] == 0)))) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x150) = 0;
      }
      if (iVar5 == 0) {
        uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x150);
        piVar4 = (int *)(*(longlong *)(param_1 + 0x142) + 0x158);
      }
      else {
        uVar6 = *(ulonglong *)(param_1 + 0x154);
        piVar4 = param_1 + 0x14c;
      }
      if (uVar6 < 0x21) {
        if ((iVar5 == 0) && (*(int **)(*(longlong *)(param_1 + 0x2a) + 0x298) != (int *)0x0)) {
          iVar2 = **(int **)(*(longlong *)(param_1 + 0x2a) + 0x298);
        }
        iVar1 = FUN_14526f090(param_2,piVar4,uVar6,1);
        if (((iVar1 != 0) &&
            (iVar1 = (**(code **)(*(longlong *)(param_1 + 2) + 0x98))
                               (*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x238),param_2,
                                local_res8), iVar1 != 0)) &&
           (iVar2 = FUN_14526ef00(param_2,(longlong)iVar2,1), iVar2 != 0)) {
          if (param_1[0x136] == 1) {
            uVar7 = 0x800;
          }
          else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
                   (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) ||
                  (uVar7 = 0x200, iVar2 == 0x10000)) {
            uVar7 = 0x100;
          }
          iVar2 = FUN_145270c40(param_1,param_2,uVar7,0,0);
          if (iVar2 == 0) {
            return 0;
          }
          if (param_1[0x136] == 1) {
            FUN_144eb0d50(*(undefined8 *)(param_1 + 0x142));
            param_1[0x142] = 0;
            param_1[0x143] = 0;
            param_1[0x32] = 0;
            iVar2 = FUN_144eb5ee0(param_1,0,0,0,0);
          }
          else {
            if ((*(byte *)(param_1 + 0x156) & 1) != 0) {
              return 1;
            }
            iVar2 = FUN_14527dd60(param_1,0);
          }
          if (iVar2 == 0) {
            return 0;
          }
          return 1;
        }
        uVar7 = CONCAT44(uVar8,0x987);
      }
      else {
        uVar7 = CONCAT44(uVar8,0x975);
      }
      goto LAB_144ec051f;
    }
  }
  uVar7 = CONCAT44(uVar8,0x950);
LAB_144ec051f:
  FUN_144eafc90(param_1,0x50,0x1eb,0x44,"ssl\\statem\\statem_srvr.c",uVar7);
  return 0;
}



// FUNCTION 144ec0560 FUN_144ec0560 body=202 status=ok
// SIG undefined FUN_144ec0560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec0560(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_res8 [2];
  undefined8 uVar4;
  
  uVar3 = 1;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0xc0);
  if (pcVar1 != (code *)0x0) {
    uVar3 = 1;
    iVar2 = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0xb0),local_res8);
    if ((iVar2 != 0) && (local_res8[0] < 0x100)) {
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x100) = (ulonglong)local_res8[0];
      iVar2 = FUN_144ebe810(param_2,*(longlong *)(param_1 + 0xb0),
                            *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x100));
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = CONCAT44(uVar3,0x520);
      uVar3 = 0x44;
      goto LAB_144ec0600;
    }
  }
  uVar4 = CONCAT44(uVar3,0x518);
  uVar3 = 400;
LAB_144ec0600:
  FUN_144eafc90(param_1,0xffffffff,0x181,uVar3,"ssl\\statem\\statem_srvr.c",uVar4);
  return 0;
}



// FUNCTION 144ec0630 FUN_144ec0630 body=256 status=ok
// SIG undefined FUN_144ec0630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ec0630(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  if (lVar1 == 0) {
    FUN_144eafc90(param_1,0x50,0x1ea,0x44,"ssl\\statem\\statem_srvr.c",0x100000ed7);
    return false;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    iVar2 = FUN_14526ef00(param_2,0,1);
    if (iVar2 == 0) {
      FUN_144eafc90(param_1,0x50,0x1ea,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0xee1));
      return false;
    }
  }
  iVar2 = FUN_144eb4d40(param_1,param_2,lVar1);
  return iVar2 != 0;
}



// FUNCTION 144ec0730 FUN_144ec0730 body=2386 status=ok
// SIG undefined FUN_144ec0730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_144ec0730(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  void *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [5];
  undefined8 uStack_40;
  char *pcVar12;
  
  uStack_40 = 0x144ec074f;
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pcVar10 = (char *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar13 = *(char **)(*(longlong *)(param_1 + 0xa8) + 0x2d8);
  lVar9 = FUN_144ba5700();
  local_98 = 0;
  local_b8 = lVar9;
  iVar6 = FUN_14526f120(param_2,&local_80);
  if (iVar6 == 0) {
    local_c0 = 0x9cc;
    uVar17 = 0x44;
LAB_144ec07b8:
    local_c8 = "ssl\\statem\\statem_srvr.c";
    FUN_144eafc90(param_1,0x50,0x1ec,uVar17);
  }
  else {
    if (lVar9 == 0) {
      local_c0 = 0x9d2;
      uVar17 = 0x41;
      goto LAB_144ec07b8;
    }
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
    local_68[3] = 0;
    local_68[2] = 0;
    local_68[1] = 0;
    local_68[0] = 0;
    pcVar18 = pcVar10;
    if ((uVar2 & 0x48) == 0) {
      pcVar18 = (char *)0x0;
      if ((uVar2 & 0x102) == 0) {
        if ((uVar2 & 0x84) == 0) {
          pcVar10 = (char *)0x0;
          if ((uVar2 & 0x20) == 0) {
            local_c0 = 0xa67;
            uVar11 = 0xfa;
          }
          else {
            if ((((*(longlong *)(param_1 + 0x7d8) != 0) && (*(longlong *)(param_1 + 0x7e0) != 0)) &&
                (*(longlong *)(param_1 + 0x7e8) != 0)) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
              local_68[0] = *(longlong *)(param_1 + 0x7d8);
              local_68[1] = *(longlong *)(param_1 + 0x7e0);
              local_68[2] = *(longlong *)(param_1 + 0x7e8);
              local_68[3] = *(longlong *)(param_1 + 0x7f0);
              goto LAB_144ec09e9;
            }
            local_c0 = 0xa5b;
            uVar11 = 0x166;
          }
        }
        else {
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
            uVar5 = FUN_144eba330(param_1,0xfffffffe);
            if (uVar5 != 0) {
              uVar11 = FUN_144ecb790(param_1,(char *)(ulonglong)uVar5);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = uVar11;
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
              lVar9 = local_b8;
              if (lVar4 == 0) goto LAB_144ec0b95;
              local_a0 = FUN_144ba7210(lVar4,&local_a8);
              if (local_a0 != 0) {
                local_68[0] = 0;
                local_68[1] = 0;
                local_68[2] = 0;
                local_68[3] = 0;
                pcVar18 = (char *)(ulonglong)uVar5;
                goto LAB_144ec09e9;
              }
              local_c0 = 0xa46;
              uVar17 = 0x10;
              goto LAB_144ec087e;
            }
            local_c0 = 0xa37;
            uVar15 = 0x28;
            uVar17 = 0x13b;
            uVar11 = 0x1ec;
            goto LAB_144ec088c;
          }
          local_c0 = 0xa2e;
          uVar11 = 0x44;
        }
LAB_144ec0b7f:
        local_c8 = "ssl\\statem\\statem_srvr.c";
        FUN_144eafc90(param_1,0x50,0x1ec,uVar11);
        lVar9 = local_b8;
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x488) + 0x18) == 0) {
          pcVar16 = *(char **)(*(longlong *)(param_1 + 0x488) + 8);
LAB_144ec08aa:
          if (pcVar16 == (char *)0x0) {
            pcVar3 = *(code **)(*(longlong *)(param_1 + 0x488) + 0x10);
            if (pcVar3 == (code *)0x0) {
              local_c0 = 0xa02;
              uVar11 = 0xab;
              goto LAB_144ec0b7f;
            }
            uVar11 = (*pcVar3)(param_1,0,0x400);
            pcVar10 = (char *)FUN_144ec9600(uVar11);
            pcVar16 = pcVar10;
            if (pcVar10 == (char *)0x0) {
              local_c0 = 0x9fa;
              goto LAB_144ec0878;
            }
          }
          uVar17 = FUN_144ba67f0(pcVar16);
          local_c8 = pcVar16;
          iVar6 = FUN_144b9dff0(param_1,0x40007,uVar17,0);
          if (iVar6 != 0) {
            if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
              uVar11 = FUN_144ec9340(pcVar16);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = uVar11;
              if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
                local_c0 = 0xa15;
                uVar17 = 0x44;
                uVar11 = 0;
                uVar15 = 0x50;
                goto LAB_144ec088c;
              }
              lVar9 = FUN_144ba6c20();
              if (lVar9 != 0) {
                FUN_144ba6e60(pcVar10);
                FUN_144ed3ed0(lVar9,local_68,0,local_68 + 1);
                FUN_144ed3fb0(lVar9,local_68 + 2,0);
                goto LAB_144ec09e9;
              }
              local_c0 = 0xa1d;
            }
            else {
              local_c0 = 0xa0f;
            }
            goto LAB_144ec0878;
          }
          local_c0 = 0xa09;
          uVar15 = 0x28;
          uVar17 = 0x18a;
        }
        else {
          lVar9 = FUN_144ebbd80(param_1);
          pcVar10 = (char *)FUN_144ba6d80();
          if ((pcVar10 != (char *)0x0) && (lVar9 != 0)) {
            FUN_144ba69a0(pcVar10,0x1c,lVar9);
            pcVar16 = pcVar10;
            goto LAB_144ec08aa;
          }
          FUN_144ed3d50(lVar9);
          local_c0 = 0x9ec;
LAB_144ec0878:
          uVar17 = 0x44;
LAB_144ec087e:
          uVar15 = 0x50;
        }
        uVar11 = 0x1ec;
LAB_144ec088c:
        local_c8 = "ssl\\statem\\statem_srvr.c";
        FUN_144eafc90(param_1,uVar15,uVar11,uVar17);
        lVar9 = local_b8;
      }
    }
    else {
LAB_144ec09e9:
      pcVar10 = (char *)0x0;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      pcVar16 = pcVar10;
      if ((((*(byte *)(lVar9 + 0x20) & 0x44) == 0) && ((*(uint *)(lVar9 + 0x1c) & 0x1c8) == 0)) &&
         (pcVar16 = pcVar13, pcVar13 == (char *)0x0)) {
        local_c0 = 0xa70;
        local_c8 = "ssl\\statem\\statem_srvr.c";
        FUN_144eafc90(param_1,0x32,0x1ec,0x44);
        lVar9 = local_b8;
      }
      else {
        if ((uVar2 & 0x1c8) != 0) {
          pcVar13 = *(char **)(*(longlong *)(param_1 + 0x488) + 0x200);
          uVar7 = 0;
          if (pcVar13 != (char *)0x0) {
            cVar1 = *pcVar13;
            pcVar14 = pcVar13;
            pcVar12 = pcVar10;
            while ((cVar1 != '\0' && (uVar7 = (uint)pcVar12, uVar7 < 0x80000000))) {
              pcVar14 = pcVar14 + 1;
              uVar7 = uVar7 + 1;
              cVar1 = *pcVar14;
              pcVar12 = (char *)(ulonglong)uVar7;
            }
            uVar7 = uVar7 & 0x7fffffff;
          }
          if ((0x80 < uVar7) || (iVar6 = FUN_14526f090(param_2,pcVar13,uVar7,2), iVar6 == 0)) {
            local_c0 = 0xa82;
            local_c8 = "ssl\\statem\\statem_srvr.c";
            FUN_144eafc90(param_1,0x50,0x1ec,0x44);
            lVar9 = local_b8;
            goto LAB_144ec0b95;
          }
        }
        do {
          if (local_68[(longlong)pcVar10] == 0) break;
          if ((pcVar10 != (char *)0x2) || (uVar17 = 1, (uVar2 & 0x20) == 0)) {
            uVar17 = 2;
          }
          iVar6 = FUN_14526eb60(param_2,uVar17);
          if (iVar6 == 0) {
            local_c0 = 0xa96;
            goto LAB_144ec0e08;
          }
          if ((pcVar10 == (char *)0x2) && ((uVar2 & 0x102) != 0)) {
            iVar6 = FUN_144ba03d0(local_68[0]);
            iVar8 = FUN_144ba03d0(local_68[2]);
            iVar6 = ((int)((iVar6 + 7 >> 0x1f & 7U) + iVar6 + 7) >> 3) -
                    ((int)(iVar8 + 7 + (iVar8 + 7 >> 0x1f & 7U)) >> 3);
            if (iVar6 != 0) {
              iVar8 = FUN_14526ed00(param_2,(longlong)iVar6,&local_b0);
              if (iVar8 == 0) {
                local_c0 = 0xaa7;
                goto LAB_144ec0e08;
              }
              memset(local_b0,0,(longlong)iVar6);
            }
          }
          iVar6 = FUN_144ba03d0(local_68[(longlong)pcVar10]);
          iVar6 = FUN_14526ed00(param_2,(longlong)((int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3)
                                ,&local_b0);
          if ((iVar6 == 0) || (iVar6 = FUN_14526ea40(param_2), iVar6 == 0)) {
            local_c0 = 0xab2;
            goto LAB_144ec0e08;
          }
          FUN_144ba08c0(local_68[(longlong)pcVar10],local_b0);
          pcVar10 = pcVar10 + 1;
        } while ((longlong)pcVar10 < 4);
        if ((uVar2 & 0x84) != 0) {
          iVar6 = FUN_14526ef00(param_2,3,1);
          if ((((iVar6 == 0) || (iVar6 = FUN_14526ef00(param_2,0,1), iVar6 == 0)) ||
              (iVar6 = FUN_14526ef00(param_2,(int)pcVar18,1), iVar6 == 0)) ||
             (iVar6 = FUN_14526f090(param_2,local_a8,local_a0,1), iVar6 == 0)) {
            local_c0 = 0xac7;
LAB_144ec0e08:
            local_c8 = "ssl\\statem\\statem_srvr.c";
            FUN_144eafc90(param_1,0x50,0x1ec,0x44);
            pcVar10 = (char *)0x0;
            lVar9 = local_b8;
            goto LAB_144ec0b95;
          }
          FUN_144ea6530(local_a8,"ssl\\statem\\statem_srvr.c",0xaca);
          local_a8 = 0;
        }
        lVar9 = local_b8;
        if (pcVar16 == (char *)0x0) {
LAB_144ec106a:
          FUN_144ba5800(lVar9);
          goto LAB_144ec1077;
        }
        pcVar13 = *(char **)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) + 8);
        if ((pcVar13 == (char *)0x0) || (iVar6 = FUN_144ebc990(pcVar16,&local_88), iVar6 == 0)) {
          local_c0 = 0xadb;
        }
        else {
          iVar6 = FUN_14526f140(param_2,&local_78);
          if (iVar6 == 0) {
            local_c0 = 0xae2;
          }
          else {
            if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) ||
               (iVar6 = FUN_14526ef00(param_2,*(undefined2 *)(pcVar16 + 8),2), iVar6 != 0)) {
              iVar6 = FUN_144ba6830(pcVar13);
              local_b0 = (void *)(longlong)iVar6;
              iVar6 = FUN_14526eeb0(param_2,local_b0,&local_90,2);
              lVar9 = local_b8;
              if ((iVar6 == 0) ||
                 (local_c8 = pcVar13, iVar6 = FUN_144ba6150(local_b8,&local_98,local_88,0),
                 iVar6 < 1)) {
                local_c0 = 0xaf7;
LAB_144ec1033:
                uVar11 = 0x44;
              }
              else {
                if (*(int *)(pcVar16 + 0x14) != 0x390) {
LAB_144ec0fa1:
                  pcVar13 = (char *)FUN_144eb63e0(param_1,&local_a0,
                                                  local_80 +
                                                  *(longlong *)(*(longlong *)(param_1 + 0x88) + 8),
                                                  local_78);
                  pcVar10 = (char *)0x0;
                  if (pcVar13 == (char *)0x0) goto LAB_144ec0b95;
                  local_c8 = pcVar13;
                  iVar6 = FUN_144ba6030(lVar9,local_90,&local_b0,local_a0);
                  FUN_144ea6530(local_a0,"ssl\\statem\\statem_srvr.c",0xb0b);
                  if (((0 < iVar6) &&
                      (iVar6 = FUN_14526ed50(param_2,local_b0,&local_70,2), iVar6 != 0)) &&
                     (local_90 == local_70)) goto LAB_144ec106a;
                  local_c0 = 0xb10;
                  goto LAB_144ec1033;
                }
                local_c8 = (char *)0x0;
                iVar6 = FUN_144bada00(local_98,0xffffffff,0x1001,6);
                if (0 < iVar6) {
                  local_c8 = (char *)0x0;
                  iVar6 = FUN_144bada00(local_98,0x18,0x1002);
                  if (0 < iVar6) goto LAB_144ec0fa1;
                }
                local_c0 = 0xaff;
                uVar11 = 6;
              }
              local_c8 = "ssl\\statem\\statem_srvr.c";
              FUN_144eafc90(param_1,0x50,0x1ec,uVar11);
              pcVar10 = (char *)0x0;
              goto LAB_144ec0b95;
            }
            local_c0 = 0xae9;
          }
        }
        local_c8 = "ssl\\statem\\statem_srvr.c";
        FUN_144eafc90(param_1,0x50,0x1ec,0x44);
        pcVar10 = (char *)0x0;
        lVar9 = local_b8;
      }
    }
  }
LAB_144ec0b95:
  FUN_144ba6e60(pcVar10);
  FUN_144ea6530(local_a8,"ssl\\statem\\statem_srvr.c",0xb1c);
  FUN_144ba5800(lVar9);
LAB_144ec1077:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68[4] ^ (ulonglong)auStack_e8);
}



// FUNCTION 144ec10a0 FUN_144ec10a0 body=646 status=ok
// SIG undefined FUN_144ec10a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec10a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x144ec10b5;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (*(int *)(param_1 + 0x788) == 3) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x790),"ssl\\statem\\statem_srvr.c",0xb27);
      *(undefined8 *)(param_1 + 0x798) = 0x20;
      lVar2 = FUN_144ea64e0(0x20,"ssl\\statem\\statem_srvr.c",0xb29);
      *(longlong *)(param_1 + 0x790) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0x798) = 0;
        uVar3 = 0xb2d;
LAB_144ec12f7:
        FUN_144eafc90(param_1,0x50,0x174,0x44,"ssl\\statem\\statem_srvr.c",uVar3);
        return 0;
      }
      iVar1 = FUN_144bac850(lVar2,*(undefined4 *)(param_1 + 0x798));
      if ((iVar1 < 1) ||
         (iVar1 = FUN_14526f090(param_2,*(undefined8 *)(param_1 + 0x790),
                                *(undefined8 *)(param_1 + 0x798),1), iVar1 == 0)) {
        uVar3 = 0xb35;
        goto LAB_144ec12f7;
      }
      iVar1 = FUN_144eb7dd0(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_14526ef00(param_2,0,1);
      if (iVar1 == 0) {
        uVar3 = 0xb41;
        goto LAB_144ec12f7;
      }
    }
    uVar3 = FUN_145270c40(param_1,param_2,0x4000,0,0,uVar3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  else {
    iVar1 = FUN_14526eb60(param_2,1);
    if (((iVar1 == 0) || (iVar1 = FUN_144ec98a0(param_1,param_2), iVar1 == 0)) ||
       (iVar1 = FUN_14526ea40(param_2), iVar1 == 0)) {
      uVar3 = 0xb53;
      goto LAB_144ec12f7;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) != 0) {
      uVar3 = FUN_144ebc9e0(param_1,1,&local_res8);
      iVar1 = FUN_14526eb60(param_2,2);
      if (((iVar1 == 0) || (iVar1 = FUN_14526ea20(param_2,1), iVar1 == 0)) ||
         ((iVar1 = FUN_144ebc550(param_1,param_2,local_res8,uVar3), iVar1 == 0 ||
          (iVar1 = FUN_14526ea40(param_2), iVar1 == 0)))) {
        uVar3 = 0xb61;
        goto LAB_144ec12f7;
      }
    }
    uVar3 = FUN_144eb6230(param_1);
    iVar1 = FUN_144eb6290(param_1,uVar3,param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x7a0) = *(int *)(param_1 + 0x7a0) + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) = 1;
  return 1;
}



// FUNCTION 144ec1330 FUN_144ec1330 body=55 status=ok
// SIG undefined FUN_144ec1330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec1330(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) == 0) {
    uVar1 = FUN_14527dd60(param_1,0,param_3,param_4,0x144ec133a);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 144ec1370 FUN_144ec1370 body=1694 status=ok
// SIG undefined FUN_144ec1370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ec1370(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 local_res8;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 uVar12;
  longlong local_68;
  byte *local_60;
  byte *local_58;
  ulonglong uStack_50;
  byte *local_48;
  ulonglong local_40;
  
  lVar11 = 0;
  local_res8 = 0;
  param_1[0x20] = 0;
  lVar2 = FUN_144babca0();
  local_68 = lVar2;
  if (lVar2 == 0) {
    FUN_144eafc90(param_1,0x50,0x17c,0x41,"ssl\\statem\\statem_srvr.c",0xe1c);
    lVar11 = 0;
    goto LAB_144ec19e4;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
      (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) || (iVar1 == 0x10000)) goto LAB_144ec14b8;
  local_58 = (byte *)*param_2;
  uStack_50 = param_2[1];
  if (uStack_50 != 0) {
    pbVar6 = local_58 + 1;
    uVar9 = (ulonglong)*local_58;
    if ((ulonglong)*local_58 <= uStack_50 - 1) {
      uStack_50 = (uStack_50 - 1) - uVar9;
      local_58 = pbVar6 + uVar9;
      *param_2 = local_58;
      param_2[1] = uStack_50;
      if (*(longlong *)(param_1 + 0x1e4) == 0) {
        if (uVar9 == 0) goto LAB_144ec14b8;
      }
      else if ((uVar9 == *(ulonglong *)(param_1 + 0x1e6)) &&
              (iVar1 = FUN_14259f120(pbVar6), iVar1 == 0)) {
LAB_144ec14b8:
        local_58 = (byte *)*param_2;
        uStack_50 = param_2[1];
        if (2 < uStack_50) {
          pbVar6 = local_58 + 3;
          uVar4 = (uint)CONCAT21(CONCAT11(*local_58,local_58[1]),local_58[2]);
          uVar9 = (ulonglong)uVar4;
          if (uVar9 <= uStack_50 - 3) {
            uStack_50 = (uStack_50 - 3) - uVar9;
            local_58 = pbVar6 + uVar9;
            *param_2 = local_58;
            param_2[1] = uStack_50;
            if (param_2[1] == 0) {
              local_res18 = 0;
              if (uVar4 != 0) {
                do {
                  if (uVar9 < 3) {
LAB_144ec177d:
                    uVar5 = 0x32;
                    uVar12 = 0xe35;
                    iVar1 = 0x87;
                    goto LAB_144ec180c;
                  }
                  pbVar8 = pbVar6 + 3;
                  uVar10 = (ulonglong)CONCAT21(CONCAT11(*pbVar6,pbVar6[1]),pbVar6[2]);
                  if (uVar9 - 3 < uVar10) goto LAB_144ec177d;
                  uVar9 = (uVar9 - 3) - uVar10;
                  pbVar6 = pbVar8 + uVar10;
                  local_60 = pbVar8;
                  local_58 = pbVar6;
                  uStack_50 = uVar9;
                  lVar11 = FUN_144bb5d50(0,&local_60);
                  if (lVar11 == 0) {
                    uVar5 = 0xe3d;
                    uVar3 = 0xd;
                    goto LAB_144ec19bf;
                  }
                  if (local_60 != pbVar8 + uVar10) {
                    uVar5 = 0xe43;
                    uVar3 = 0x87;
                    goto LAB_144ec19bf;
                  }
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                      && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
                    local_res20 = 0;
                    if (1 < uVar9) {
                      uVar9 = (ulonglong)CONCAT11(*pbVar6,pbVar6[1]);
                      if (uVar9 <= uStack_50 - 2) {
                        local_58 = pbVar6 + 2 + uVar9;
                        uVar10 = (uStack_50 - 2) - uVar9;
                        uStack_50 = uVar10;
                        local_48 = pbVar6 + 2;
                        local_40 = uVar9;
                        iVar1 = FUN_145270550(param_1,&local_48,0x1000,&local_res20,0,
                                              local_res18 == 0);
                        if ((iVar1 != 0) &&
                           (iVar1 = FUN_145270a30(param_1,0x1000,local_res20,lVar11,local_res18,
                                                  uVar10 == 0), iVar1 != 0)) {
                          FUN_144ea6530(local_res20,"ssl\\statem\\statem_srvr.c",0xe5a);
                          pbVar6 = local_58;
                          uVar9 = uStack_50;
                          goto LAB_144ec16bf;
                        }
                        FUN_144ea6530(local_res20,"ssl\\statem\\statem_srvr.c",0xe57);
                        goto LAB_144ec19e4;
                      }
                    }
                    uVar5 = 0xe4e;
                    uVar3 = 0x10f;
                    goto LAB_144ec19bf;
                  }
LAB_144ec16bf:
                  iVar1 = FUN_144bac1c0(lVar2,lVar11);
                  if (iVar1 == 0) {
                    uVar7 = 0x50;
                    uVar5 = 0xe60;
                    uVar3 = 0x41;
                    goto LAB_144ec19c4;
                  }
                  local_res18 = local_res18 + 1;
                } while (uVar9 != 0);
              }
              iVar1 = FUN_144babbf0(lVar2);
              if (iVar1 < 1) {
                if (*param_1 == 0x300) {
                  uVar12 = 0xe6b;
                  uVar5 = 0x28;
                  iVar1 = 0xb0;
                }
                else {
                  if (((byte)param_1[0x156] & 3) != 3) {
                    if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0xe0) != 0) {
                      lVar11 = 0;
                      iVar1 = FUN_14527dd60(param_1,0);
                      if (iVar1 == 0) goto LAB_144ec19e4;
                    }
LAB_144ec17d6:
                    if (param_1[0x1e2] == 4) {
                      lVar11 = FUN_144eb1a50(*(undefined8 *)(param_1 + 0x142),0);
                      if (lVar11 == 0) {
                        uVar12 = 0xe9e;
                        uVar5 = 0x50;
                        iVar1 = 0x41;
                        goto LAB_144ec180c;
                      }
                      FUN_144eb0d50(*(undefined8 *)(param_1 + 0x142));
                      *(longlong *)(param_1 + 0x142) = lVar11;
                    }
                    FUN_144b47250(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1b8));
                    uVar3 = FUN_144bac1f0(lVar2);
                    *(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1b8) = uVar3;
                    *(int *)(*(longlong *)(param_1 + 0x142) + 0x1c8) = param_1[0x16a];
                    FUN_144babe00(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x1c0),
                                  FUN_144b47250);
                    local_68 = 0;
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1c0) = lVar2;
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                        && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000))
                    {
                      lVar11 = 0;
                      iVar1 = FUN_14527dd60(param_1,1);
                      if (iVar1 == 0) goto LAB_144ec19e4;
                    }
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                        && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000))
                    {
                      lVar11 = 0;
                      iVar1 = FUN_144b9bff0(param_1,param_1 + 0x124,0x40,param_1 + 0x134);
                      if (iVar1 == 0) goto LAB_144ec19e4;
                      param_1[0x5d2] = 0;
                      param_1[0x5d3] = 0;
                    }
                    local_res8 = 3;
                    lVar11 = 0;
                    goto LAB_144ec19e4;
                  }
                  uVar5 = 0x74;
                  uVar12 = 0xe73;
                  iVar1 = 199;
                }
              }
              else {
                iVar1 = FUN_144b9d990(param_1,lVar2);
                if (iVar1 < 1) {
                  uVar5 = FUN_144eb4bd0(param_1[0x16a]);
                  uVar12 = 0xe81;
                  iVar1 = 0x86;
                }
                else if (iVar1 < 2) {
                  uVar3 = FUN_144babc00(lVar2,0);
                  lVar11 = FUN_144bb4f60(uVar3);
                  if (lVar11 != 0) goto LAB_144ec17d6;
                  uVar12 = 0xe8d;
                  uVar5 = 0x28;
                  iVar1 = 0xf7;
                }
                else {
                  uVar12 = 0xe86;
                  uVar5 = 0x28;
                }
              }
LAB_144ec180c:
              FUN_144eafc90(param_1,uVar5,0x17c,iVar1,"ssl\\statem\\statem_srvr.c",uVar12);
              lVar11 = 0;
              goto LAB_144ec19e4;
            }
          }
        }
        uVar5 = 0xe2c;
        uVar3 = 0x9f;
LAB_144ec19bf:
        uVar7 = 0x32;
LAB_144ec19c4:
        FUN_144eafc90(param_1,uVar7,0x17c,uVar3,"ssl\\statem\\statem_srvr.c",uVar5);
        goto LAB_144ec19e4;
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x17c,0x11a,"ssl\\statem\\statem_srvr.c",0xe25);
  lVar11 = 0;
LAB_144ec19e4:
  FUN_144b47250(lVar11);
  FUN_144babe00(local_68,FUN_144b47250);
  return local_res8;
}



// FUNCTION 144ec1a10 FUN_144ec1a10 body=345 status=ok
// SIG undefined FUN_144ec1a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec1a10(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  
  uVar6 = 1;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar1 & 0x1c8) != 0) && (uVar6 = 1, iVar2 = FUN_144ec3850(), iVar2 == 0))
  goto LAB_144ec1b11;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) == 0) {
        if ((uVar1 & 0x84) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 0x10) == 0) {
              uVar5 = CONCAT44(uVar6,0xdb7);
              uVar3 = 0x50;
              uVar4 = 0xf9;
              goto LAB_144ec1b01;
            }
            iVar2 = FUN_144ec4450(param_1,param_2);
          }
          else {
            iVar2 = FUN_144ec42c0(param_1,param_2);
          }
        }
        else {
          iVar2 = FUN_144ec4120(param_1,param_2);
        }
      }
      else {
        iVar2 = FUN_144ec3f00(param_1,param_2);
      }
    }
    else {
      iVar2 = FUN_144ec3ae0(param_1,param_2);
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar3 = 0x32;
      uVar5 = CONCAT44(uVar6,0xd93);
      uVar4 = 0x9f;
LAB_144ec1b01:
      FUN_144eafc90(param_1,uVar3,0x17e,uVar4,"ssl\\statem\\statem_srvr.c",uVar5);
      goto LAB_144ec1b11;
    }
    iVar2 = FUN_144ec9100(param_1,0,0,0);
  }
  if (iVar2 != 0) {
    return 2;
  }
LAB_144ec1b11:
  FUN_144ea66f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0),"ssl\\statem\\statem_srvr.c",
                0xdbe);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = 0;
  return 0;
}



// FUNCTION 144ec1b70 FUN_144ec1b70 body=141 status=ok
// SIG undefined FUN_144ec1b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144ec1b70(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x74) == 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe0) == 0) {
      FUN_144eafc90(param_1,0x50,0x180,0x44,"ssl\\statem\\statem_srvr.c",0xdf7,0x144ec1b7a);
      return 0;
    }
    iVar1 = FUN_14527dd60(param_1,1);
    return -(iVar1 != 0) & 2;
  }
  iVar1 = FUN_14527dd60(param_1,0);
  return -(iVar1 != 0) & 2;
}



// FUNCTION 144ec1c00 FUN_144ec1c00 body=411 status=ok
// SIG undefined FUN_144ec1c00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec1c00(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)*param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    bVar1 = *pbVar6;
    uVar2 = (ulonglong)bVar1;
    pbVar5 = pbVar6 + 1;
    if (uVar2 <= lVar3 - 1U) {
      pbVar6 = pbVar5 + uVar2;
      lVar3 = (lVar3 - 1U) - uVar2;
      *param_2 = pbVar6;
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        uVar2 = (ulonglong)*pbVar6;
        if (uVar2 <= lVar3 - 1U) {
          pbVar6 = pbVar6 + uVar2 + 1;
          lVar3 = (lVar3 - 1U) - uVar2;
          *param_2 = pbVar6;
          param_2[1] = lVar3;
          if (param_2[1] == 0) {
            FUN_144ea6530(*(undefined8 *)(param_1 + 0x6f8),
                          "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                          ,0x1c5);
            *(undefined8 *)(param_1 + 0x6f8) = 0;
            bVar4 = 0;
            if (bVar1 != 0) {
              lVar3 = FUN_144ea6d10(pbVar5,bVar1,
                                    "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                    ,0x1ce);
              *(longlong *)(param_1 + 0x6f8) = lVar3;
              bVar4 = bVar1;
              if (lVar3 == 0) {
                *(undefined8 *)(param_1 + 0x700) = 0;
                FUN_144eafc90(param_1,0x50,0x17f,0x44,"ssl\\statem\\statem_srvr.c",0x109d);
                return 0;
              }
            }
            *(ulonglong *)(param_1 + 0x700) = (ulonglong)bVar4;
            return 3;
          }
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x17f,0x9f,"ssl\\statem\\statem_srvr.c",0x1096,pbVar6,lVar3);
  return 0;
}



// FUNCTION 144ec1da0 FUN_144ec1da0 body=1030 status=ok
// SIG undefined FUN_144ec1da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec1da0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 auStack_41 [9];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144ec1dbc;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x768);
  local_48 = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    uVar5 = FUN_144ea4500(param_1);
    iVar3 = FUN_144ba3cd0(uVar5);
    if (iVar3 < 0) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xff1);
      goto LAB_144ec1e3d;
    }
    if ((*(longlong *)(param_1 + 0x1748) != 0) || (*(int *)(param_1 + 200) != 0)) {
      lVar6 = FUN_144eb1a50(*(undefined8 *)(param_1 + 0x508),0);
      if (lVar6 == 0) goto LAB_144ec1e5d;
      FUN_144eb0d50(*(undefined8 *)(param_1 + 0x508));
      *(longlong *)(param_1 + 0x508) = lVar6;
    }
    iVar4 = FUN_144eb1230(param_1,*(undefined8 *)(param_1 + 0x508));
    if (iVar4 == 0) goto LAB_144ec1e5d;
    iVar4 = FUN_144bac850(&local_48,4);
    if (iVar4 < 1) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x100e);
      goto LAB_144ec1e3d;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x224) = local_48;
    lVar6 = 8;
    uVar7 = *(ulonglong *)(param_1 + 0x1750);
    do {
      auStack_41[lVar6] = (char)uVar7;
      uVar7 = uVar7 >> 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    local_50 = 1;
    local_60 = *(longlong *)(param_1 + 0x508) + 0x50;
    local_70 = auStack_41 + 1;
    local_68 = 8;
    local_78 = (char *)0xa;
    local_58 = (longlong)iVar3;
    iVar4 = FUN_144eb9330(param_1,uVar5,param_1 + 500,"resumption");
    if (iVar4 == 0) goto LAB_144ec1e5d;
    *(longlong *)(*(longlong *)(param_1 + 0x508) + 8) = (longlong)iVar3;
    _Var8 = _time64((__time64_t *)0x0);
    *(int *)(*(longlong *)(param_1 + 0x508) + 0x1d4) = (int)_Var8;
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
LAB_144ec2054:
      *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x228) = *(undefined4 *)(param_1 + 0x1710);
      goto LAB_144ec206c;
    }
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230),
                  "ssl\\statem\\statem_srvr.c",0x1027);
    uVar5 = FUN_144ea6d10(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),
                          "ssl\\statem\\statem_srvr.c",0x1029);
    *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230) = uVar5;
    lVar6 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(lVar6 + 0x230) != 0) {
      *(undefined8 *)(lVar6 + 0x238) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000);
      goto LAB_144ec2054;
    }
    *(undefined8 *)(lVar6 + 0x238) = 0;
    uVar9 = 0x41;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x102e);
LAB_144ec1e43:
    uVar5 = 0x1ac;
  }
  else {
LAB_144ec206c:
    pcVar2 = *(code **)(lVar1 + 0x3b0);
    if ((pcVar2 != (code *)0x0) &&
       (iVar3 = (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 0x3c0),local_48), iVar3 == 0)) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x103a);
LAB_144ec1e3d:
      uVar9 = 0x44;
      goto LAB_144ec1e43;
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) ||
       (((*(uint *)(param_1 + 0x5cc) >> 0xe & 1) == 0 &&
        ((*(int *)(param_1 + 0x1710) == 0 || ((*(uint *)(param_1 + 0x5cc) >> 0x18 & 1) != 0)))))) {
      iVar3 = FUN_144ec4830(param_1,param_2,local_48,auStack_41 + 1);
      if (iVar3 == 0) goto LAB_144ec1e5d;
LAB_144ec2154:
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         ((iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3 && (iVar3 != 0x10000)))) {
        local_78 = (char *)0x0;
        iVar3 = FUN_145270c40(param_1,param_2,0x2000,0);
        if (iVar3 != 0) {
          *(longlong *)(param_1 + 0x1748) = *(longlong *)(param_1 + 0x1748) + 1;
          *(longlong *)(param_1 + 0x1750) = *(longlong *)(param_1 + 0x1750) + 1;
          FUN_144b9b720(param_1,2);
        }
      }
      goto LAB_144ec1e5d;
    }
    iVar3 = FUN_144ec46e0(param_1,param_2,local_48,auStack_41 + 1);
    if (iVar3 == 0) goto LAB_144ec1e5d;
    iVar3 = FUN_14526ef90(param_2,*(longlong *)(param_1 + 0x508) + 0x158,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x150));
    if ((iVar3 != 0) && (iVar3 = FUN_14526ea40(param_2), iVar3 != 0)) goto LAB_144ec2154;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xfd4);
    uVar9 = 0x44;
    uVar5 = 0x27c;
  }
  local_78 = "ssl\\statem\\statem_srvr.c";
  FUN_144eafc90(param_1,0x50,uVar5,uVar9);
LAB_144ec1e5d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ec21c0 FUN_144ec21c0 body=247 status=ok
// SIG undefined FUN_144ec21c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144ec21c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_144eafc90(param_1,0x32,0x219,0x9f,"ssl\\statem\\statem_srvr.c",0x1000010b6);
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x84) - 10U) {
    FUN_144eafc90(param_1,0x50,0x219,0x44,"ssl\\statem\\statem_srvr.c",0x1000010bd);
    return 0;
  }
  iVar1 = FUN_144eb21f0(param_1 + 0x830);
  if (iVar1 != 0) {
    FUN_144eafc90(param_1,10,0x219,0xb6,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar2,0x10c8));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0xc;
  iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0xa1);
  return -(iVar1 != 0) & 3;
}



// FUNCTION 144ec22c0 FUN_144ec22c0 body=598 status=ok
// SIG undefined FUN_144ec22c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec22c0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte local_res8 [8];
  void *local_res10;
  undefined8 uVar6;
  
  local_res10 = (void *)0x0;
  local_res8[0] = 0;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x260);
  if (pcVar1 != (code *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3f0);
    if (lVar2 != 0) {
      iVar3 = (*pcVar1)(param_1,&local_res10,local_res8,lVar2,
                        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x268));
      if (iVar3 == 0) {
        FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                      "ssl\\statem\\statem_srvr.c",0x882);
        uVar4 = FUN_144ea6d10(local_res10,local_res8[0],"ssl\\statem\\statem_srvr.c",0x883);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = uVar4;
        lVar2 = *(longlong *)(param_1 + 0xa8);
        if (*(longlong *)(lVar2 + 0x3e0) != 0) {
          *(ulonglong *)(lVar2 + 1000) = (ulonglong)local_res8[0];
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 0;
          lVar2 = *(longlong *)(param_1 + 0x508);
          if (((*(void **)(lVar2 + 0x230) != (void *)0x0) &&
              ((ulonglong)local_res8[0] == *(ulonglong *)(lVar2 + 0x238))) &&
             (iVar3 = memcmp(local_res10,*(void **)(lVar2 + 0x230),(ulonglong)local_res8[0]),
             iVar3 == 0)) {
            return 1;
          }
          *(undefined4 *)(param_1 + 0x714) = 0;
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          if (*(longlong *)(lVar2 + 0x230) == 0) {
            uVar4 = FUN_144ea6d10(local_res10,local_res8[0],"ssl\\statem\\statem_srvr.c",0x8a5);
            *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230) = uVar4;
            if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x230) != 0) {
              *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x238) = (ulonglong)local_res8[0];
              return 1;
            }
            uVar4 = 0x8a9;
          }
          else {
            uVar4 = 0x8a1;
          }
          FUN_144eafc90(param_1,0x50,0x232,0x44,"ssl\\statem\\statem_srvr.c",uVar4);
          return 0;
        }
        *(undefined8 *)(lVar2 + 1000) = 0;
        uVar4 = 0x50;
        uVar6 = 0x887;
        uVar5 = 0x44;
      }
      else {
        if (iVar3 == 3) goto LAB_144ec24f1;
        uVar4 = 0x78;
        uVar6 = 0x8b3;
        uVar5 = 0xeb;
      }
      FUN_144eafc90(param_1,uVar4,0x232,uVar5,"ssl\\statem\\statem_srvr.c",uVar6);
      return 0;
    }
  }
LAB_144ec24f1:
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x230) != 0) {
    *(undefined4 *)(param_1 + 0x714) = 0;
  }
  return 1;
}



// FUNCTION 144ec2520 FUN_144ec2520 body=49 status=ok
// SIG undefined FUN_144ec2520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ec2520(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_145270c40(param_1,param_2,0x400,0,0,0x144ec252c);
  return iVar1 != 0;
}



// FUNCTION 144ec2560 FUN_144ec2560 body=234 status=ok
// SIG undefined FUN_144ec2560(void)

undefined4 FUN_144ec2560(longlong param_1,int param_2)

{
  bool bVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x84) == 0xb) {
      return 0;
    }
    if (param_2 != 0xb) {
      if (param_2 != 0x18) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x2c;
      return 1;
    }
    bVar1 = *(int *)(param_1 + 0x788) == 4;
    goto LAB_144ec25dc;
  default:
    goto switchD_144ec258b_caseD_2;
  case 0x1b:
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) != 0) {
      if (param_2 != 0xf) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x1d;
      return 1;
    }
    break;
  case 0x1d:
    break;
  case 0x2e:
    if (*(int *)(param_1 + 0x4d8) == 1) {
      if (param_2 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x14;
      return 1;
    }
    if (*(int *)(param_1 + 0x710) == 2) {
      if (param_2 != 5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x31;
      return 1;
    }
  case 0x24:
  case 0x31:
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) != 0) {
      bVar1 = param_2 == 0xb;
LAB_144ec25dc:
      if (!bVar1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x1b;
      return 1;
    }
  }
  if (param_2 == 0x14) {
    *(undefined4 *)(param_1 + 0x5c) = 0x20;
    return 1;
  }
switchD_144ec258b_caseD_2:
  return 0;
}



// FUNCTION 144ec26a0 FUN_144ec26a0 body=65 status=ok
// SIG undefined FUN_144ec26a0(void)

undefined8 FUN_144ec26a0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar1 & 6) == 0) &&
     ((((uVar1 & 0x48) == 0 || (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x200) == 0)) &&
      ((uVar1 & 0x1a0) == 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 144ec26f0 FUN_144ec26f0 body=546 status=ok
// SIG undefined FUN_144ec26f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec26f0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x784) != -1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2a;
      return 1;
    }
    if (*(int *)(param_1 + 0x788) != 3) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x19;
    return 1;
  default:
    FUN_144eafc90(param_1,0x50,600,0x44,"ssl\\statem\\statem_srvr.c",0x1000001ab);
    return 0;
  case 0x14:
    *(undefined4 *)(param_1 + 0x5c) = 0x16;
    return 1;
  case 0x16:
    if (((*(uint *)(param_1 + 0x5cc) & 0x100000) != 0) && (*(int *)(param_1 + 0x4d8) != 2)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x23;
      return 1;
    }
  case 0x23:
    uVar1 = 0x25;
    if (*(int *)(param_1 + 0x4d8) == 1) {
      uVar1 = 0x2e;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0x17:
    *(undefined4 *)(param_1 + 0x5c) = 0x28;
    return 1;
  case 0x19:
    if (*(int *)(param_1 + 0x788) != 3) {
      *(undefined4 *)(param_1 + 0x5c) = 0x17;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x788) = 4;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x20:
    if (*(int *)(param_1 + 0x788) == 4) {
      *(undefined4 *)(param_1 + 0x788) = 2;
    }
    else if (*(int *)(param_1 + 0x678) == 0) goto switchD_144ec272b_caseD_2a;
    uVar1 = 1;
    if (*(ulonglong *)(param_1 + 0x1748) < *(ulonglong *)(param_1 + 0x1740)) {
      uVar1 = 0x21;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0x21:
    if ((*(int *)(param_1 + 200) == 0) &&
       (*(ulonglong *)(param_1 + 0x1748) < *(ulonglong *)(param_1 + 0x1740))) {
      return 1;
    }
  case 0x2a:
  case 0x2c:
switchD_144ec272b_caseD_2a:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x24:
    *(undefined4 *)(param_1 + 0x5c) = 0x2e;
    return 1;
  case 0x25:
    if (*(int *)(param_1 + 200) == 0) {
      iVar2 = FUN_144ebe890(param_1);
      uVar1 = 0x17;
      if (iVar2 != 0) {
        uVar1 = 0x19;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x28:
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x2e:
    return 2;
  }
}



// FUNCTION 144ec2980 FUN_144ec2980 body=226 status=ok
// SIG undefined FUN_144ec2980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec2980(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_res8 [8];
  undefined4 uVar3;
  
  uVar3 = 1;
  local_res8[0] = 0x70;
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c) & 0x20) != 0) &&
     (*(longlong *)(param_1 + 0x7b8) != 0)) {
    if (*(longlong *)(param_1 + 2000) == 0) {
      FUN_144eafc90(param_1,0x73,0x25e,0xdf,"ssl\\statem\\statem_srvr.c",0x1000004f2);
      return 0xffffffff;
    }
    iVar1 = FUN_144eae900(param_1,local_res8);
    if (iVar1 < 0) {
      return 0;
    }
    if (iVar1 == 2) {
      uVar2 = 0xe2;
      if (local_res8[0] == 0x73) {
        uVar2 = 0xdf;
      }
      FUN_144eafc90(param_1,local_res8[0],0x25e,uVar2,"ssl\\statem\\statem_srvr.c",
                    CONCAT44(uVar3,0x4fc));
      return 0xffffffff;
    }
  }
  return 1;
}



// FUNCTION 144ec2a70 FUN_144ec2a70 body=295 status=ok
// SIG undefined FUN_144ec2a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec2a70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_2 + 0x270);
  uVar2 = *(ulonglong *)(param_2 + 0x278);
  if ((1 < uVar2) && (1 < uVar2 - 2)) {
    if (1 < uVar2 - 4) {
      uVar5 = (ulonglong)CONCAT11(*(undefined1 *)(lVar1 + 4),*(undefined1 *)(lVar1 + 5));
      if (uVar5 <= uVar2 - 6) {
        if (CONCAT11(*(undefined1 *)(lVar1 + 2),*(undefined1 *)(lVar1 + 3)) == 0) {
          uVar3 = FUN_144b9a8a0(param_1);
          bVar7 = false;
          if ((uVar3 & 0xffffff00) == 0x300) {
            iVar4 = FUN_144b9a8a0(param_1);
          }
          else {
            iVar4 = 0;
          }
          lVar6 = 0x12;
          if (0x302 < iVar4) {
            lVar6 = 0x22;
          }
          if ((uVar2 - 6) - uVar5 == lVar6) {
            iVar4 = FUN_14259f120(lVar1 + 6 + uVar5,&DAT_149bf6c00);
            bVar7 = iVar4 == 0;
          }
          *(bool *)(*(longlong *)(param_1 + 0xa8) + 0x404) = bVar7;
        }
      }
    }
  }
  return;
}



// FUNCTION 144ec2ba0 FUN_144ec2ba0 body=2982 status=ok
// SIG undefined FUN_144ec2ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec2ba0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar15;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar16;
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  uint *puVar14;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uStack_48 = 0x144ec2bba;
  piVar1 = *(int **)(param_1 + 0x1ce);
  puVar10 = (uint *)0x0;
  local_res10[0] = 0x50;
  local_res20 = 0;
  puVar15 = (uint *)0x0;
  local_58 = 0;
  local_res8[0] = 0;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x1e8);
  if (pcVar2 == (code *)0x0) {
LAB_144ec2ca3:
    lVar8 = *(longlong *)(param_1 + 0x2a);
    iVar4 = piVar1[3];
    iVar6 = piVar1[4];
    iVar3 = piVar1[5];
    *(int *)(lVar8 + 0xb8) = piVar1[2];
    *(int *)(lVar8 + 0xbc) = iVar4;
    *(int *)(lVar8 + 0xc0) = iVar6;
    *(int *)(lVar8 + 0xc4) = iVar3;
    iVar4 = piVar1[7];
    iVar6 = piVar1[8];
    iVar3 = piVar1[9];
    *(int *)(lVar8 + 200) = piVar1[6];
    *(int *)(lVar8 + 0xcc) = iVar4;
    *(int *)(lVar8 + 0xd0) = iVar6;
    *(int *)(lVar8 + 0xd4) = iVar3;
    if (*piVar1 != 0) {
      uVar5 = piVar1[1];
      if ((uVar5 == 2) || ((uVar5 & 0xff00) != 0x300)) {
        uVar7 = 0x67d;
        uVar11 = 0x46;
        iVar4 = 0xfc;
        goto LAB_144ec2c33;
      }
      param_1[0x17b] = uVar5;
    }
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) {
      iVar4 = FUN_144eb54f0(param_1,piVar1,local_res8);
      if (iVar4 != 0) {
LAB_144ec2dc5:
        if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
          iVar6 = piVar1[1];
          param_1[0x17b] = iVar6;
          *param_1 = iVar6;
        }
        uVar7 = 0x696;
        uVar11 = 0x46;
        goto LAB_144ec2c33;
      }
    }
    else if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar4 = piVar1[1];
      iVar6 = *param_1;
      if (iVar4 == 0x100) {
        iVar4 = 0xff00;
      }
      if (iVar6 == 0x100) {
        iVar6 = 0xff00;
      }
      if (iVar6 < iVar4) {
        iVar4 = 0x18c;
        goto LAB_144ec2dc5;
      }
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
         (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
       (iVar4 = FUN_144eb21f0(param_1 + 0x20c), iVar4 != 0)) {
      uVar7 = 0x69e;
      uVar11 = 10;
      iVar4 = 0xb6;
      goto LAB_144ec2c33;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) {
      uVar5 = FUN_144b979b0(param_1);
      if ((uVar5 >> 0xd & 1) == 0) {
LAB_144ec2e97:
        if ((**(int **)(param_1 + 2) != 0x1ffff) ||
           (iVar4 = FUN_144eb54f0(param_1,piVar1,local_res8), iVar4 == 0)) goto LAB_144ec2ee5;
        uVar11 = 0x46;
        uVar7 = 0x6be;
        *param_1 = param_1[0x17b];
      }
      else {
        if (*(code **)(*(longlong *)(param_1 + 0x166) + 200) == (code *)0x0) {
          _Size = *(size_t *)((longlong)*(void **)(param_1 + 0x2c) + 0x100);
          if ((_Size == *(size_t *)(piVar1 + 0x14)) &&
             (iVar4 = memcmp(piVar1 + 0x16,*(void **)(param_1 + 0x2c),_Size), iVar4 == 0))
          goto LAB_144ec2e86;
          uVar7 = 0x6b4;
        }
        else {
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0x166) + 200))
                            (param_1,piVar1 + 0x16,piVar1[0x14]);
          if (iVar4 != 0) {
LAB_144ec2e86:
            *(undefined4 *)(*(longlong *)(param_1 + 0x2c) + 0x108) = 1;
            goto LAB_144ec2e97;
          }
          uVar7 = 0x6aa;
        }
        uVar11 = 0x28;
        iVar4 = 0x134;
      }
      goto LAB_144ec2c33;
    }
LAB_144ec2ee5:
    param_1[0x32] = 0;
    iVar4 = FUN_144b9b160(param_1,piVar1 + 0x56,*piVar1);
    if ((iVar4 != 0) &&
       (iVar4 = FUN_144b9b3c0(param_1,piVar1 + 0x56,&local_res20,&local_58,CONCAT44(uVar11,*piVar1),
                              CONCAT44(uVar16,1)), iVar4 != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x3d8) = 0;
      if ((local_58 != 0) && (iVar4 = FUN_144babbf0(), puVar14 = puVar10, 0 < iVar4)) {
        do {
          uVar7 = FUN_144babc00(local_58,puVar14);
          iVar4 = FUN_144ea3100(uVar7);
          if (iVar4 == 0x30000ff) {
            if (param_1[0x1e0] != 0) {
              uVar7 = 0x6d8;
              uVar11 = 0x28;
              iVar4 = 0x159;
              goto LAB_144ec2c33;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x3d8) = 1;
          }
          else {
            iVar4 = FUN_144ea3100(uVar7);
            if ((iVar4 == 0x3005600) && (iVar4 = FUN_144eb53c0(param_1), iVar4 == 0)) {
              uVar7 = 0x6e7;
              uVar11 = 0x56;
              iVar4 = 0x175;
              goto LAB_144ec2c33;
            }
          }
          uVar5 = (int)puVar14 + 1;
          iVar4 = FUN_144babbf0(local_58);
          puVar14 = (uint *)(ulonglong)uVar5;
        } while ((int)uVar5 < iVar4);
      }
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
          (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
        uVar7 = FUN_144b9a240(param_1);
        lVar8 = FUN_144ec9b50(param_1,local_res20,uVar7);
        if (lVar8 != 0) {
          if ((param_1[0x136] == 1) &&
             ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == 0 ||
              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x18) !=
               *(int *)(lVar8 + 0x18))))) {
            uVar7 = 0x701;
            uVar11 = 0x2f;
            iVar4 = 0xba;
            goto LAB_144ec2c33;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) = lVar8;
          goto LAB_144ec30bd;
        }
        uVar7 = 0x6f5;
LAB_144ec301f:
        uVar11 = 0x28;
        iVar4 = 0xc1;
      }
      else {
LAB_144ec30bd:
        iVar4 = FUN_145270930(param_1,0xd,0x80,*(undefined8 *)(piVar1 + 0xa2),0,0);
        if (iVar4 == 0) goto LAB_144ec2c41;
        if ((*piVar1 == 0) && ((param_1[0xf] == 0 || ((param_1[0x173] & 0x10000U) == 0)))) {
          iVar4 = FUN_144eb1730(param_1,piVar1);
          if (iVar4 != 1) {
            if (iVar4 == -1) goto LAB_144ec2c41;
            iVar4 = FUN_144eb1430(param_1,1);
            goto joined_r0x000144ec3144;
          }
          param_1[0x32] = 1;
        }
        else {
          iVar4 = FUN_144eb1430(param_1,1);
joined_r0x000144ec3144:
          if (iVar4 == 0) goto LAB_144ec2c41;
        }
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
          memcpy(param_1 + 0x14c,(void *)(*(longlong *)(param_1 + 0x1ce) + 0x30),
                 *(size_t *)(*(longlong *)(param_1 + 0x1ce) + 0x28));
          *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x28);
        }
        uVar5 = 0;
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
             (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) ||
           (param_1[0x32] == 0)) {
LAB_144ec3221:
          puVar14 = *(uint **)(piVar1 + 0x5a);
          puVar9 = puVar10;
          if (puVar14 != (uint *)0x0) {
            do {
              if (*(char *)((longlong)(piVar1 + 0x5c) + (longlong)puVar9) == '\0') break;
              puVar9 = (uint *)((longlong)puVar9 + 1);
            } while (puVar9 < puVar14);
          }
          if (puVar9 < puVar14) {
            if ((*(byte *)(param_1 + 0x173) & 0x40) != 0) {
              FUN_144ec2a70(param_1,piVar1);
            }
            uVar11 = 0;
            iVar4 = FUN_145270a30(param_1,0x80,*(undefined8 *)(piVar1 + 0xa2),0,0,1);
            if (iVar4 == 0) goto LAB_144ec2c41;
            iVar4 = FUN_144ec9030(param_1,1,*(longlong *)(param_1 + 0x2a) + 0x98,0x20,
                                  CONCAT44(uVar11,local_res8[0]));
            if (iVar4 < 1) {
              uVar7 = 0x784;
LAB_144ec32d6:
              uVar11 = 0x50;
              iVar4 = 0x44;
            }
            else {
              if ((param_1[0x32] == 0) && (0x300 < *param_1)) {
                uVar12 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8;
                if ((((uVar12 != 0) ||
                     ((iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304 || (iVar4 == 0x10000)))) &&
                    (uVar12 == 0)) && (*(code **)(param_1 + 0x1b6) != (code *)0x0)) {
                  local_50 = 0;
                  local_res18[0] = 0x100;
                  iVar4 = (**(code **)(param_1 + 0x1b6))
                                    (param_1,*(longlong *)(param_1 + 0x142) + 0x50,local_res18,
                                     local_res20,&local_50,*(undefined8 *)(param_1 + 0x1b8));
                  if ((iVar4 != 0) && (0 < local_res18[0])) {
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 8) = (longlong)local_res18[0];
                    *(longlong *)(param_1 + 0x44) = local_res20;
                    param_1[0x32] = 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 0x1c8) = 0;
                    local_res20 = 0;
                    if (local_50 == 0) {
                      uVar7 = FUN_144b9a240(param_1);
                      local_50 = FUN_144ec9b50(param_1,*(undefined8 *)(param_1 + 0x44),uVar7);
                      if (local_50 == 0) {
                        uVar7 = 0x7a9;
                        goto LAB_144ec301f;
                      }
                    }
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1e0) = local_50;
                    FUN_144babdb0(*(undefined8 *)(param_1 + 0x46));
                    uVar7 = FUN_144bac2a0(*(undefined8 *)(param_1 + 0x44));
                    *(undefined8 *)(param_1 + 0x46) = uVar7;
                    FUN_144babdb0(*(undefined8 *)(param_1 + 0x48));
                    uVar7 = FUN_144bac2a0(*(undefined8 *)(param_1 + 0x44));
                    *(undefined8 *)(param_1 + 0x48) = uVar7;
                  }
                }
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x298) = 0;
              if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                  (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
                puVar15 = puVar10;
                if (*(longlong *)(piVar1 + 0x5a) == 1) {
LAB_144ec3660:
                  if ((param_1[0x32] == 0) ||
                     ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
                       (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)))) {
                    FUN_144babdb0(*(undefined8 *)(param_1 + 0x44));
                    *(longlong *)(param_1 + 0x44) = local_res20;
                    if (local_res20 == 0) {
                      uVar7 = 0x81e;
                      goto LAB_144ec32d6;
                    }
                    local_res20 = 0;
                  }
                  if (param_1[0x32] == 0) {
                    if (puVar15 != (uint *)0x0) {
                      uVar5 = *puVar15;
                    }
                    *(uint *)(*(longlong *)(param_1 + 0x142) + 0x1d8) = uVar5;
                    iVar4 = FUN_144eba9d0(param_1);
                    if (iVar4 == 0) goto LAB_144ec2c41;
                  }
                  FUN_144babdb0(local_res20);
                  FUN_144babdb0(local_58);
                  FUN_144ea6530(*(undefined8 *)(piVar1 + 0xa2),"ssl\\statem\\statem_srvr.c",0x832);
                  FUN_144ea6530(*(undefined8 *)(param_1 + 0x1ce),"ssl\\statem\\statem_srvr.c",0x833)
                  ;
                  uVar7 = 1;
                  goto LAB_144ec2c7f;
                }
                uVar7 = 0x7c4;
                uVar11 = 0x2f;
                iVar4 = 0x155;
              }
              else {
                uVar12 = *(uint *)(*(longlong *)(param_1 + 0x142) + 0x1d8);
                if (uVar12 == 0) {
                  if (((param_1[0x32] == 0) && (iVar4 = FUN_144eb5130(param_1), iVar4 != 0)) &&
                     (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x100) != 0)) {
                    iVar4 = FUN_144babbf0();
                    puVar14 = puVar10;
                    if (0 < iVar4) {
                      do {
                        puVar15 = (uint *)FUN_144babc00(*(undefined8 *)
                                                         (*(longlong *)(param_1 + 0x166) + 0x100),
                                                        puVar14);
                        puVar9 = puVar10;
                        if (*(uint **)(piVar1 + 0x5a) != (uint *)0x0) {
                          do {
                            if (*puVar15 ==
                                (uint)*(byte *)((longlong)(puVar9 + 0x5c) + (longlong)piVar1)) {
                              *(uint **)(*(longlong *)(param_1 + 0x2a) + 0x298) = puVar15;
                              goto LAB_144ec3660;
                            }
                            puVar9 = (uint *)(ulonglong)((int)puVar9 + 1);
                          } while (puVar9 < *(uint **)(piVar1 + 0x5a));
                        }
                        uVar12 = (int)puVar14 + 1;
                        puVar14 = (uint *)(ulonglong)uVar12;
                      } while ((int)uVar12 < iVar4);
                    }
                    puVar15 = (uint *)0x0;
                  }
                  goto LAB_144ec3660;
                }
                iVar4 = FUN_144eb5130(param_1);
                if (iVar4 == 0) {
                  uVar7 = 0x7d2;
                  uVar11 = 0x28;
                  iVar4 = 0x154;
                }
                else {
                  iVar4 = FUN_144babbf0(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100));
                  puVar14 = puVar10;
                  puVar15 = puVar10;
                  if (0 < iVar4) {
                    do {
                      puVar15 = (uint *)FUN_144babc00(*(undefined8 *)
                                                       (*(longlong *)(param_1 + 0x166) + 0x100),
                                                      puVar14);
                      if (uVar12 == *puVar15) {
                        *(uint **)(*(longlong *)(param_1 + 0x2a) + 0x298) = puVar15;
                        break;
                      }
                      uVar13 = (int)puVar14 + 1;
                      puVar14 = (uint *)(ulonglong)uVar13;
                      iVar4 = FUN_144babbf0(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100))
                      ;
                    } while ((int)uVar13 < iVar4);
                  }
                  if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x298) == 0) {
                    uVar7 = 0x7e0;
                    uVar11 = 0x28;
                    iVar4 = 0x155;
                  }
                  else {
                    puVar14 = *(uint **)(piVar1 + 0x5a);
                    if (puVar14 != (uint *)0x0) {
                      do {
                        if (*(byte *)((longlong)(puVar10 + 0x5c) + (longlong)piVar1) == uVar12)
                        break;
                        puVar10 = (uint *)(ulonglong)((int)puVar10 + 1);
                      } while (puVar10 < puVar14);
                    }
                    if (puVar10 < puVar14) goto LAB_144ec3660;
                    uVar7 = 0x7eb;
                    uVar11 = 0x2f;
                    iVar4 = 0x156;
                  }
                }
              }
            }
          }
          else {
            uVar7 = 0x768;
            uVar11 = 0x32;
            iVar4 = 0xbb;
          }
        }
        else {
          iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1e0) + 0x18);
          iVar6 = FUN_144babbf0(local_res20);
          puVar14 = puVar10;
          if (0 < iVar6) {
            do {
              lVar8 = FUN_144babc00(local_res20,puVar14);
              if (*(int *)(lVar8 + 0x18) == iVar4) goto LAB_144ec3221;
              uVar12 = (int)puVar14 + 1;
              puVar14 = (uint *)(ulonglong)uVar12;
              iVar6 = FUN_144babbf0(local_res20);
            } while ((int)uVar12 < iVar6);
          }
          uVar7 = 0x75a;
          uVar11 = 0x2f;
          iVar4 = 0xd7;
        }
      }
      goto LAB_144ec2c33;
    }
  }
  else {
    iVar4 = (*pcVar2)(param_1,local_res10,*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x1f0));
    if (iVar4 == -1) {
      param_1[10] = 7;
      return 0xffffffff;
    }
    if (iVar4 == 1) goto LAB_144ec2ca3;
    iVar4 = 0xea;
    uVar7 = 0x669;
    uVar11 = local_res10[0];
LAB_144ec2c33:
    FUN_144eafc90(param_1,uVar11,0x209,iVar4,"ssl\\statem\\statem_srvr.c",uVar7);
  }
LAB_144ec2c41:
  FUN_144babdb0(local_res20);
  FUN_144babdb0(local_58);
  FUN_144ea6530(*(undefined8 *)(piVar1 + 0xa2),"ssl\\statem\\statem_srvr.c",0x839);
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x1ce),"ssl\\statem\\statem_srvr.c",0x83a);
  uVar7 = 0;
LAB_144ec2c7f:
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  return uVar7;
}



// FUNCTION 144ec3750 FUN_144ec3750 body=241 status=ok
// SIG undefined FUN_144ec3750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec3750(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  *(undefined4 *)(param_1 + 0x654) = 0;
  if ((((*(int *)(param_1 + 0x640) != -1) && (*(longlong *)(param_1 + 0x598) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x228) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0), lVar1 != 0)) {
    **(longlong **)(param_1 + 0x488) = lVar1;
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0x228))
                      (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x230));
    if (iVar2 != 0) {
      if (iVar2 != 3) {
        FUN_144eafc90(param_1,0x50,0x233,0xe2,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0x869));
        return 0;
      }
      *(undefined4 *)(param_1 + 0x654) = 0;
      return 1;
    }
    if (*(longlong *)(param_1 + 0x668) != 0) {
      *(undefined4 *)(param_1 + 0x654) = 1;
    }
  }
  return 1;
}



// FUNCTION 144ec3850 FUN_144ec3850 body=632 status=ok
// SIG undefined FUN_144ec3850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec3850(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 auStack_168 [32];
  char *local_148;
  undefined4 local_140;
  undefined1 *local_138;
  ulonglong uStack_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ec385e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = (undefined1 *)*param_2;
  uStack_130 = param_2[1];
  if (1 < uStack_130) {
    puVar6 = local_138 + 2;
    uVar7 = (ulonglong)CONCAT11(*local_138,local_138[1]);
    if (uVar7 <= uStack_130 - 2) {
      uStack_130 = (uStack_130 - 2) - uVar7;
      local_138 = puVar6 + uVar7;
      *param_2 = local_138;
      param_2[1] = uStack_130;
      if (uVar7 < 0x81) {
        if (*(longlong *)(param_1 + 0x580) == 0) {
          local_140 = 0xb84;
          uVar5 = 0x50;
          uVar8 = 0xe1;
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x508);
          FUN_144ea6530(*(undefined8 *)(lVar1 + 0x1a8),
                        "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                        ,0x1e2);
          lVar3 = FUN_144ea6e30(puVar6,uVar7,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1e5);
          *(longlong *)(lVar1 + 0x1a8) = lVar3;
          if (lVar3 == 0) {
            local_140 = 0xb8a;
            uVar5 = 0x50;
            uVar8 = 0x44;
          }
          else {
            uVar2 = (**(code **)(param_1 + 0x580))
                              (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a8),
                               local_128,0x100);
            uVar7 = (ulonglong)uVar2;
            if (uVar7 < 0x101) {
              if (uVar2 == 0) {
                uVar5 = 0x73;
                local_140 = 0xb9b;
                uVar8 = 0xdf;
                goto LAB_144ec3a64;
              }
              FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                            "ssl\\statem\\statem_srvr.c",0xb9f);
              uVar4 = FUN_144ea6d10(local_128,uVar7,"ssl\\statem\\statem_srvr.c",0xba0);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = uVar4;
              FUN_14259f0c0(local_128,uVar7);
              lVar1 = *(longlong *)(param_1 + 0xa8);
              if (*(longlong *)(lVar1 + 0x2c8) != 0) {
                *(ulonglong *)(lVar1 + 0x2d0) = uVar7;
                goto LAB_144ec3a7e;
              }
              *(undefined8 *)(lVar1 + 0x2d0) = 0;
              uVar8 = 0x41;
              local_140 = 0xba6;
            }
            else {
              local_140 = 0xb93;
              uVar8 = 0x44;
            }
            uVar5 = 0x50;
          }
        }
      }
      else {
        uVar5 = 0x32;
        local_140 = 0xb7f;
        uVar8 = 0x92;
      }
LAB_144ec3a64:
      local_148 = "ssl\\statem\\statem_srvr.c";
      FUN_144eafc90(param_1,uVar5,0x19e,uVar8);
      goto LAB_144ec3a7e;
    }
  }
  local_140 = 0xb7a;
  local_148 = "ssl\\statem\\statem_srvr.c";
  FUN_144eafc90(param_1,0x32,0x19e,0x9f);
LAB_144ec3a7e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_168);
}



// FUNCTION 144ec3ae0 FUN_144ec3ae0 body=1042 status=ok
// SIG undefined FUN_144ec3ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec3ae0(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  uint local_88;
  uint local_84;
  undefined1 *local_80;
  ulonglong uStack_78;
  byte local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_144ba6aa0(*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 0x28));
  if (lVar5 == 0) {
    local_90 = 0xbc4;
    local_98 = "ssl\\statem\\statem_srvr.c";
    FUN_144eafc90(param_1,0x50,0x19f,0xa8);
    goto LAB_144ec3ee5;
  }
  if ((*param_1 - 0x100 & 0xfffffdff) == 0) {
    puVar7 = (undefined1 *)*param_2;
    uVar9 = param_2[1];
    local_80 = puVar7;
    uStack_78 = uVar9;
LAB_144ec3bee:
    iVar4 = FUN_144bae400(lVar5);
    if (0x2f < iVar4) {
      iVar4 = FUN_144bae400(lVar5);
      pbVar6 = (byte *)FUN_144ea64e0((longlong)iVar4,"ssl\\statem\\statem_srvr.c",0xbe0);
      if (pbVar6 == (byte *)0x0) {
        local_90 = 0xbe3;
        local_98 = "ssl\\statem\\statem_srvr.c";
        FUN_144eafc90(param_1,0x50,0x19f,0x41);
      }
      else {
        iVar4 = FUN_144bac8c0(local_70,0x30);
        if (iVar4 < 1) {
          local_90 = 0xbf2;
          local_98 = "ssl\\statem\\statem_srvr.c";
          FUN_144eafc90(param_1,0x50,0x19f,0x44);
        }
        else {
          local_98 = (char *)CONCAT44(local_98._4_4_,3);
          iVar4 = FUN_144bae490(uVar9 & 0xffffffff,puVar7,pbVar6,lVar5);
          if (iVar4 < 0) {
            local_90 = 0xc00;
            local_98 = "ssl\\statem\\statem_srvr.c";
            FUN_144eafc90(param_1,0x33,0x19f,0x44);
          }
          else if (iVar4 < 0x3b) {
            local_90 = 0xc0d;
            local_98 = "ssl\\statem\\statem_srvr.c";
            FUN_144eafc90(param_1,0x33,0x19f,0x93);
          }
          else {
            lVar5 = (longlong)(iVar4 + -0x30);
            uVar9 = 2;
            bVar11 = (char)((byte)((pbVar6[1] ^ 2) - 1 >> 0x18) & (byte)(*pbVar6 - 1 >> 0x18)) >> 7;
            if (2 < lVar5 - 1U) {
              do {
                pbVar1 = pbVar6 + uVar9;
                uVar9 = uVar9 + 1;
                bVar11 = bVar11 & 0xffU - (char)((int)(*pbVar1 - 1) >> 0x1f);
              } while (uVar9 < lVar5 - 1U);
            }
            pbVar1 = pbVar6 + lVar5;
            uVar2 = param_1[0x17b];
            bVar3 = (byte)((uVar2 & 0xff ^ (uint)pbVar1[1]) - 1 >> 0x18) &
                    (byte)(((int)uVar2 >> 8 ^ (uint)*pbVar1) - 1 >> 0x18) &
                    ~(byte)((int)uVar2 >> 0x1f);
            if ((param_1[0x173] & 0x800000) != 0) {
              uVar2 = *param_1;
              bVar3 = bVar3 | (byte)((uVar2 & 0xff ^ (uint)pbVar1[1]) - 1 >> 0x18) &
                              (byte)(((int)uVar2 >> 8 ^ (uint)*pbVar1) - 1 >> 0x18) &
                              ~(byte)((int)uVar2 >> 0x1f);
            }
            bVar11 = bVar11 & (byte)((int)(pbVar6[lVar5 + -1] - 1) >> 0x1f) & (char)bVar3 >> 7;
            local_88 = (uint)bVar11;
            local_84 = ~(uint)bVar11;
            lVar10 = 0x30;
            pbVar13 = pbVar1;
            do {
              *pbVar13 = (pbVar13 + 1)[(longlong)(local_70 + (-(longlong)pbVar6 - lVar5) + -1)] &
                         (byte)local_84 | bVar11 & *pbVar13;
              lVar10 = lVar10 + -1;
              pbVar13 = pbVar13 + 1;
            } while (lVar10 != 0);
            FUN_144ec9100(param_1,pbVar1,0x30,0);
          }
        }
        FUN_144ea6530(pbVar6,"ssl\\statem\\statem_srvr.c",0xc56);
      }
      goto LAB_144ec3ee5;
    }
    uVar8 = 0x50;
    local_90 = 0xbdc;
    uVar12 = 0x78;
  }
  else {
    local_80 = (undefined1 *)*param_2;
    uStack_78 = param_2[1];
    if (1 < uStack_78) {
      puVar7 = local_80 + 2;
      uVar9 = (ulonglong)CONCAT11(*local_80,local_80[1]);
      if (uVar9 <= uStack_78 - 2) {
        uStack_78 = (uStack_78 - 2) - uVar9;
        local_80 = puVar7 + uVar9;
        *param_2 = local_80;
        param_2[1] = uStack_78;
        if (param_2[1] == 0) goto LAB_144ec3bee;
      }
    }
    uVar8 = 0x32;
    local_90 = 0xbcf;
    uVar12 = 0x9f;
  }
  local_98 = "ssl\\statem\\statem_srvr.c";
  FUN_144eafc90(param_1,uVar8,0x19f,uVar12);
LAB_144ec3ee5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144ec3f00 FUN_144ec3f00 body=536 status=ok
// SIG undefined FUN_144ec3f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec3f00(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  uVar15 = 1;
  lVar10 = 0;
  uVar13 = 0;
  if ((ulonglong)param_2[1] < 2) {
LAB_144ec40c1:
    uVar14 = 0x100000c6d;
    uVar12 = 0x94;
LAB_144ec40cf:
    uVar8 = 0x32;
    lVar10 = 0;
  }
  else {
    puVar2 = (undefined1 *)*param_2;
    uVar7 = param_2[1] - 2;
    puVar1 = puVar2 + 2;
    uVar9 = (uint)CONCAT11(*puVar2,puVar2[1]);
    *param_2 = (longlong)puVar1;
    uVar11 = (ulonglong)uVar9;
    param_2[1] = uVar7;
    if (uVar7 != uVar11) goto LAB_144ec40c1;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
    if (lVar3 != 0) {
      if (uVar7 != 0) {
        if (uVar7 < uVar11) {
          uVar8 = 0x50;
          uVar14 = 0x100000c7f;
          uVar12 = 0x44;
        }
        else {
          *param_2 = (longlong)(puVar1 + uVar9);
          param_2[1] = uVar7 - uVar11;
          lVar10 = FUN_144ba6d80();
          if (lVar10 != 0) {
            iVar4 = FUN_144ba6ec0(lVar10,lVar3);
            if (iVar4 != 0) {
              lVar5 = FUN_144ba6c20(lVar10);
              lVar6 = FUN_144ba0740(puVar1,uVar9,0);
              if ((lVar6 != 0) && (lVar5 != 0)) {
                iVar4 = FUN_144ed3fd0(lVar5,lVar6,0);
                if (iVar4 != 0) {
                  iVar4 = FUN_144ec93c0(param_1,lVar3,lVar10,1);
                  if (iVar4 != 0) {
                    uVar13 = 1;
                    FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
                  }
                  goto LAB_144ec40ee;
                }
              }
              FUN_144eafc90(param_1,0x50,0x19b,0x44,"ssl\\statem\\statem_srvr.c",
                            CONCAT44(uVar15,0xc8d));
              FUN_144ba0cd0(lVar6);
              goto LAB_144ec40ee;
            }
          }
          uVar8 = 0x50;
          uVar14 = CONCAT44(uVar15,0xc85);
          uVar12 = 0x82;
        }
        goto LAB_144ec40d4;
      }
      uVar14 = 0x100000c79;
      uVar12 = 0xab;
      goto LAB_144ec40cf;
    }
    uVar8 = 0x50;
    uVar14 = 0x100000c73;
    uVar12 = 0xab;
    lVar10 = 0;
  }
LAB_144ec40d4:
  FUN_144eafc90(param_1,uVar8,0x19b,uVar12,"ssl\\statem\\statem_srvr.c",uVar14);
LAB_144ec40ee:
  FUN_144ba6e60(lVar10);
  return uVar13;
}



// FUNCTION 144ec4120 FUN_144ec4120 body=413 status=ok
// SIG undefined FUN_144ec4120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec4120(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = 1;
  lVar5 = 0;
  uVar10 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if (param_2[1] == 0) {
    FUN_144eafc90(param_1,0x28,0x19c,0x137,"ssl\\statem\\statem_srvr.c",0x100000caf);
    goto LAB_144ec42a4;
  }
  uVar8 = param_2[1] - 1;
  bVar2 = *(byte *)*param_2;
  uVar6 = (ulonglong)bVar2;
  pbVar1 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar1;
  param_2[1] = uVar8;
  if (uVar8 < uVar6) {
LAB_144ec426f:
    uVar7 = 0x32;
    uVar11 = 0x100000cbe;
    uVar9 = 0x9f;
  }
  else {
    *param_2 = (longlong)(pbVar1 + uVar6);
    param_2[1] = uVar8 - uVar6;
    if (uVar8 - uVar6 != 0) goto LAB_144ec426f;
    if (lVar3 == 0) {
      uVar11 = 0x100000cc3;
      uVar7 = 0x50;
      uVar9 = 0x137;
    }
    else {
      lVar5 = FUN_144ba6d80();
      if ((lVar5 == 0) || (iVar4 = FUN_144ba6ec0(lVar5,lVar3), iVar4 < 1)) {
        uVar7 = 0x50;
        uVar11 = CONCAT44(uVar9,0xcca);
        uVar9 = 6;
      }
      else {
        iVar4 = FUN_144ba71c0(lVar5,pbVar1,bVar2);
        if (iVar4 != 0) {
          iVar4 = FUN_144ec93c0(param_1,lVar3,lVar5,1);
          if (iVar4 != 0) {
            uVar10 = 1;
            FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
          }
          goto LAB_144ec42a4;
        }
        uVar11 = CONCAT44(uVar9,0xccf);
        uVar7 = 0x50;
        uVar9 = 0x10;
      }
    }
  }
  FUN_144eafc90(param_1,uVar7,0x19c,uVar9,"ssl\\statem\\statem_srvr.c",uVar11);
LAB_144ec42a4:
  FUN_144ba6e60(lVar5);
  return uVar10;
}



// FUNCTION 144ec42c0 FUN_144ec42c0 body=395 status=ok
// SIG undefined FUN_144ec42c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ec42c0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar9 = 1;
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar11 = param_2[1] - 2;
    uVar2 = *puVar4;
    puVar1 = puVar4 + 2;
    uVar3 = puVar4[1];
    uVar10 = (ulonglong)(uint)CONCAT11(uVar2,uVar3);
    *param_2 = (longlong)puVar1;
    param_2[1] = uVar11;
    if (uVar10 <= uVar11) {
      *param_2 = (longlong)(puVar1 + uVar10);
      param_2[1] = uVar11 - uVar10;
      lVar6 = FUN_144ba0740(puVar1,(uint)CONCAT11(uVar2,uVar3),0);
      *(longlong *)(param_1 + 0x7f8) = lVar6;
      if (lVar6 == 0) {
        uVar7 = CONCAT44(uVar9,0xcf6);
        uVar8 = 0x50;
        uVar9 = 3;
      }
      else {
        iVar5 = FUN_144ba0ef0(lVar6,*(undefined8 *)(param_1 + 0x7d8));
        if ((iVar5 < 0) && (iVar5 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x7f8)), iVar5 == 0)) {
          FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248),
                        "ssl\\statem\\statem_srvr.c",0xcfe);
          uVar7 = FUN_144ea6dc0(*(undefined8 *)(param_1 + 2000),"ssl\\statem\\statem_srvr.c",0xcff);
          *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248) = uVar7;
          if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x248) != 0) {
            iVar5 = FUN_144eaeae0(param_1);
            return iVar5 != 0;
          }
          uVar8 = 0x50;
          uVar7 = CONCAT44(uVar9,0xd02);
          uVar9 = 0x41;
        }
        else {
          uVar7 = CONCAT44(uVar9,0xcfb);
          uVar8 = 0x2f;
          uVar9 = 0x173;
        }
      }
      goto LAB_144ec442e;
    }
  }
  uVar7 = 0x100000cf1;
  uVar8 = 0x32;
  uVar9 = 0x15b;
LAB_144ec442e:
  FUN_144eafc90(param_1,uVar8,0x1a0,uVar9,"ssl\\statem\\statem_srvr.c",uVar7);
  return false;
}



// FUNCTION 144ec4450 FUN_144ec4450 body=640 status=ok
// SIG undefined FUN_144ec4450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_144ec4450(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [32];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ec4462;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[1] = 0x20;
  lVar7 = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
  if ((char)uVar1 < '\0') {
    lVar3 = *(longlong *)(param_1 + 0x488);
    lVar7 = *(longlong *)(lVar3 + 0x118);
    if ((lVar7 == 0) && (lVar7 = *(longlong *)(lVar3 + 0xf0), lVar7 == 0)) {
LAB_144ec44c9:
      lVar7 = *(longlong *)(lVar3 + 200);
    }
  }
  else if ((uVar1 & 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x488);
    goto LAB_144ec44c9;
  }
  lVar7 = FUN_144ed1530(lVar7,0);
  if (lVar7 == 0) {
    local_60 = CONCAT44(local_60._4_4_,0xd35);
    uVar8 = 0x41;
  }
  else {
    iVar2 = FUN_144ed23a0(lVar7);
    if (0 < iVar2) {
      lVar3 = FUN_144bb4f60(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
      if ((lVar3 != 0) && (iVar2 = FUN_144ed2610(lVar7,lVar3), iVar2 < 1)) {
        FUN_144ba26f0();
      }
      local_58[0] = *param_2;
      plVar4 = (longlong *)FUN_144eff7f0(0,local_58,(int)param_2[1],&DAT_149bf6bc0);
      if (((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) ||
         (iVar2 = FUN_144ed0570(), iVar2 != 0x10)) {
        local_60 = CONCAT44(local_60._4_4_,0xd51);
        uVar6 = 0x32;
LAB_144ec4685:
        local_68 = "ssl\\statem\\statem_srvr.c";
        FUN_144eafc90(param_1,uVar6,0x19d,0x93);
      }
      else {
        uVar5 = local_58[0] - *param_2;
        if ((ulonglong)param_2[1] < uVar5) {
          local_60 = CONCAT44(local_60._4_4_,0xd57);
          uVar6 = 0x50;
          goto LAB_144ec4685;
        }
        lVar3 = param_2[1] - uVar5;
        *param_2 = *param_2 + uVar5;
        param_2[1] = lVar3;
        if (lVar3 != 0) {
          local_60 = CONCAT44(local_60._4_4_,0xd5d);
          uVar6 = 0x50;
          goto LAB_144ec4685;
        }
        local_68 = (char *)(longlong)**(int **)(*plVar4 + 8);
        iVar2 = FUN_144ed2430(lVar7,local_48,local_58 + 1,
                              *(undefined8 *)(*(int **)(*plVar4 + 8) + 2));
        if (iVar2 < 1) {
          local_60 = CONCAT44(local_60._4_4_,0xd67);
          uVar6 = 0x32;
          goto LAB_144ec4685;
        }
        iVar2 = FUN_144ec9100(param_1,local_48,0x20);
        if (iVar2 != 0) {
          local_60 = 0;
          local_68 = (char *)CONCAT44(local_68._4_4_,2);
          iVar2 = FUN_144ed1710(lVar7,0xffffffff,0xffffffff,2);
          if (0 < iVar2) {
            *(undefined4 *)(param_1 + 0x74) = 1;
          }
        }
      }
      FUN_144ed16b0(lVar7);
      FUN_144eff330(plVar4,&DAT_149bf6bc0);
      goto LAB_144ec46c3;
    }
    local_60 = CONCAT44(local_60._4_4_,0xd3a);
    uVar8 = 0x44;
  }
  local_68 = "ssl\\statem\\statem_srvr.c";
  FUN_144eafc90(param_1,0x50,0x19d,uVar8);
LAB_144ec46c3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 144ec46e0 FUN_144ec46e0 body=330 status=ok
// SIG undefined FUN_144ec46e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec46e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x508) + 0x1d0);
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (0x93a80 < iVar2) {
      iVar2 = 0x93a80;
    }
  }
  else if (*(int *)(param_1 + 200) != 0) {
    iVar2 = 0;
  }
  iVar2 = FUN_14526ef00(param_2,iVar2,4);
  if (iVar2 == 0) {
    uVar3 = CONCAT44(uVar4,0xf02);
  }
  else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
           (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) &&
          ((iVar2 != 0x10000 &&
           ((iVar2 = FUN_14526ef00(param_2,param_3,4), iVar2 == 0 ||
            (iVar2 = FUN_14526f090(param_2,param_4,8), iVar2 == 0)))))) {
    uVar3 = CONCAT44(uVar4,0xf0a);
  }
  else {
    iVar2 = FUN_14526eb60(param_2,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar4,0xf12);
  }
  FUN_144eafc90(param_1,0x50,0x27e,0x44,"ssl\\statem\\statem_srvr.c",uVar3);
  return 0;
}



// FUNCTION 144ec4830 FUN_144ec4830 body=1431 status=ok
// SIG undefined FUN_144ec4830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec4830(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  int local_f0 [2];
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  uint local_d8 [2];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x144ec484c;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = 0;
  pcVar6 = (char *)0x0;
  local_e8 = 0;
  local_b8 = *(longlong *)(param_1 + 0x768);
  local_dc = param_3;
  local_90 = param_4;
  iVar1 = FUN_145279780(*(undefined8 *)(param_1 + 0x508),0);
  if ((iVar1 == 0) || (0xff00 < iVar1)) {
    local_100 = 0xf32;
    local_108 = "ssl\\statem\\statem_srvr.c";
    FUN_144eafc90(param_1,0x50,0x27d,0x44);
    pcVar7 = (char *)0x0;
  }
  else {
    local_e8 = FUN_144ea64e0((longlong)iVar1,"ssl\\statem\\statem_srvr.c",0xf35);
    if (local_e8 == 0) {
      local_100 = 0xf38;
      local_108 = "ssl\\statem\\statem_srvr.c";
      FUN_144eafc90(param_1,0x50,0x27d,0x41);
      pcVar6 = (char *)0x0;
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)FUN_144ba50b0();
      local_f8 = (char *)FUN_14527f710();
      lVar4 = local_e8;
      if ((pcVar6 == (char *)0x0) || (local_f8 == (char *)0x0)) {
        local_100 = 0xf40;
        uVar5 = 0x41;
      }
      else {
        local_d0 = local_e8;
        iVar2 = FUN_145279780(*(undefined8 *)(param_1 + 0x508),&local_d0);
        if (iVar2 == 0) {
          local_100 = 0xf47;
        }
        else {
          local_a0 = lVar4;
          lVar4 = FUN_145279b20(0,&local_a0,iVar1);
          if (lVar4 != 0) {
            iVar2 = FUN_145279780(lVar4,0);
            if ((iVar2 == 0) || (iVar1 < iVar2)) {
              local_100 = 0xf5a;
            }
            else {
              local_d0 = local_e8;
              iVar1 = FUN_145279780(lVar4,&local_d0);
              if (iVar1 != 0) {
                FUN_144eb0d50(lVar4);
                lVar4 = local_b8;
                pcVar8 = local_f8;
                if (*(code **)(local_b8 + 0x220) != (code *)0x0) {
                  local_100 = 1;
                  local_108 = local_f8;
                  iVar1 = (**(code **)(local_b8 + 0x220))(param_1,&local_60,local_70,pcVar6);
                  if (iVar1 == 0) {
                    iVar1 = FUN_14526ef00(param_2,0,4);
                    if ((iVar1 != 0) && (iVar1 = FUN_14526ef00(param_2,0,2), iVar1 != 0)) {
                      FUN_144ea6530(local_e8,"ssl\\statem\\statem_srvr.c",0xf7a);
                      FUN_144ba5170(pcVar6);
                      FUN_14527f7e0(pcVar8);
                      goto LAB_144ec4985;
                    }
                    local_100 = 0xf77;
                    uVar5 = 0x44;
                  }
                  else {
                    if (-1 < iVar1) {
                      iVar1 = FUN_144ba3df0(pcVar6);
LAB_144ec4bab:
                      iVar3 = FUN_144ec46e0(param_1,param_2,local_dc,local_90);
                      pcVar7 = local_f8;
                      if (iVar3 == 0) goto LAB_144ec495f;
                      iVar3 = FUN_14526f120(param_2,&local_80);
                      if (((iVar3 != 0) &&
                          (iVar3 = FUN_14526ef90(param_2,&local_60,0x10), iVar3 != 0)) &&
                         (iVar1 = FUN_14526ef90(param_2,local_70,(longlong)iVar1), iVar1 != 0)) {
                        iVar1 = FUN_14526ede0(param_2,(longlong)(iVar2 + 0x20),&local_c8);
                        if (iVar1 != 0) {
                          local_108 = (char *)CONCAT44(local_108._4_4_,iVar2);
                          iVar1 = FUN_144ba4660(pcVar6,local_c8,local_f0,local_e8);
                          if ((((iVar1 != 0) &&
                               (iVar1 = FUN_14526ed00(param_2,(longlong)local_f0[0],&local_c0),
                               iVar1 != 0)) &&
                              ((local_c8 == local_c0 &&
                               ((iVar1 = FUN_144ba4800(pcVar6,local_f0[0] + local_c8,&local_e0),
                                iVar1 != 0 &&
                                (iVar1 = FUN_14526ed00(param_2,(longlong)local_e0,&local_c0),
                                iVar1 != 0)))))) &&
                             ((local_f0[0] + local_c8 == local_c0 &&
                              (((((local_f0[0] + local_e0 <= iVar2 + 0x20 &&
                                  (iVar1 = FUN_14526f120(param_2,&local_88), iVar1 != 0)) &&
                                 (iVar1 = FUN_14527fb30(pcVar8,local_80 +
                                                               *(longlong *)
                                                                (*(longlong *)(param_1 + 0x88) + 8),
                                                        local_88 - local_80), iVar1 != 0)) &&
                                ((iVar1 = FUN_14526ede0(param_2,0x40,&local_b0), iVar1 != 0 &&
                                 (iVar1 = FUN_14527fb60(pcVar8,local_b0,local_d8), iVar1 != 0)))) &&
                               ((local_d8[0] < 0x41 &&
                                ((iVar1 = FUN_14526ed00(param_2,local_d8[0],&local_78), iVar1 != 0
                                 && (local_b0 == local_78)))))))))) {
                            iVar1 = FUN_14526ea40(param_2);
                            if (iVar1 == 0) {
                              local_100 = 0xfbc;
                              goto LAB_144ec493c;
                            }
                            local_a8 = CONCAT44(local_a8._4_4_,1);
                            pcVar7 = local_f8;
                            goto LAB_144ec495f;
                          }
                        }
                      }
                      local_100 = 0xfb5;
                      goto LAB_144ec493c;
                    }
                    local_100 = 0xf81;
                    uVar5 = 0xea;
                  }
                  local_108 = "ssl\\statem\\statem_srvr.c";
                  FUN_144eafc90(param_1,0x50,0x27d,uVar5);
                  pcVar7 = pcVar8;
                  goto LAB_144ec495f;
                }
                local_98 = FUN_144baa3e0();
                iVar1 = FUN_144ba3d90(local_98);
                iVar3 = FUN_144bac850(local_70,iVar1);
                if (0 < iVar3) {
                  local_108 = local_70;
                  iVar3 = FUN_144ba4630(pcVar6,local_98,0,*(longlong *)(lVar4 + 0x218) + 0x20);
                  if (iVar3 != 0) {
                    uVar5 = FUN_144bab040();
                    pcVar8 = local_f8;
                    local_108 = (char *)0x0;
                    iVar3 = FUN_14527f850(local_f8,*(undefined8 *)(lVar4 + 0x218),0x20,uVar5);
                    if (iVar3 != 0) {
                      local_60 = *(undefined4 *)(local_b8 + 0x208);
                      uStack_5c = *(undefined4 *)(local_b8 + 0x20c);
                      uStack_58 = *(undefined4 *)(local_b8 + 0x210);
                      uStack_54 = *(undefined4 *)(local_b8 + 0x214);
                      goto LAB_144ec4bab;
                    }
                  }
                }
                local_100 = 0xf90;
                goto LAB_144ec493c;
              }
              local_100 = 0xf61;
            }
            local_108 = "ssl\\statem\\statem_srvr.c";
            FUN_144eafc90(param_1,0x50,0x27d,0x44);
            FUN_144eb0d50(lVar4);
            pcVar7 = local_f8;
            goto LAB_144ec495f;
          }
          local_100 = 0xf52;
        }
LAB_144ec493c:
        uVar5 = 0x44;
      }
      local_108 = "ssl\\statem\\statem_srvr.c";
      FUN_144eafc90(param_1,0x50,0x27d,uVar5);
      pcVar7 = local_f8;
    }
  }
LAB_144ec495f:
  FUN_144ea6530(local_e8,"ssl\\statem\\statem_srvr.c",0xfc2);
  FUN_144ba5170(pcVar6);
  FUN_14527f7e0(pcVar7);
LAB_144ec4985:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_128);
}



// FUNCTION 144ec4de0 FUN_144ec4de0 body=34 status=ok
// SIG undefined FUN_144ec4de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec4de0(undefined8 param_1)

{
  FUN_144ec4e10(0,param_1,0,1);
  return;
}



// FUNCTION 144ec4e10 FUN_144ec4e10 body=605 status=ok
// SIG undefined FUN_144ec4e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ec4e10(longlong param_1,longlong *param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong local_res8;
  char *local_res18;
  undefined8 uVar10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x144ec4e2b;
  uVar5 = 0;
  iVar3 = 0;
  iVar9 = 0;
  uVar7 = 0;
  local_res18 = param_3;
  if ((param_1 == 0) && (param_2 == (longlong *)0x0)) {
    FUN_144ba24f0(0x14,0x187,0x43,"ssl\\ssl_mcnf.c",0x21);
    uVar7 = uVar5;
    iVar3 = iVar9;
  }
  else {
    if ((param_3 == (char *)0x0) && (local_res18 = "system_default", param_4 == 0)) {
      local_res18 = param_3;
    }
    iVar1 = FUN_144ee4f40(local_res18,&local_38);
    if (iVar1 == 0) {
      iVar3 = iVar9;
      if (param_4 == 0) {
        FUN_144ba24f0(0x14,0x187,0x71,"ssl\\ssl_mcnf.c",0x29);
        FUN_144ba2bd0(2,"name=",local_res18);
      }
    }
    else {
      uVar4 = FUN_144ee4f10(local_38,&local_res18,&local_res8);
      uVar7 = FUN_145281410();
      if (uVar7 != 0) {
        uVar8 = 0x62;
        if (param_4 != 0) {
          uVar8 = 2;
        }
        if (param_1 == 0) {
          lVar6 = *param_2;
          FUN_145281660(uVar7,param_2);
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          FUN_1452815e0(uVar7,param_1);
        }
        uVar2 = uVar8 | 8;
        if (*(code **)(lVar6 + 0x28) == FUN_144b97970) {
          uVar2 = uVar8;
        }
        uVar8 = uVar2 | 4;
        if (*(code **)(lVar6 + 0x30) == FUN_144b97970) {
          uVar8 = uVar2;
        }
        FUN_1452815d0(uVar7,uVar8);
        if (local_res8 != 0) {
          do {
            FUN_144ee4fd0(uVar4,uVar5,&local_40,&local_48);
            iVar3 = FUN_1452816e0(uVar7,local_40,local_48);
            if (iVar3 < 1) {
              if (iVar3 == -2) {
                uVar10 = 0x48;
                uVar4 = 0x8b;
              }
              else {
                uVar10 = 0x4a;
                uVar4 = 0x180;
              }
              FUN_144ba24f0(0x14,0x187,uVar4,"ssl\\ssl_mcnf.c",uVar10);
              FUN_144ba2bd0(6,"section=",local_res18,", cmd=",local_40,", arg=",local_48);
              goto LAB_144ec4fcc;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_res8);
        }
        iVar3 = FUN_145281440(uVar7);
      }
    }
  }
LAB_144ec4fcc:
  FUN_145281530(uVar7);
  return 0 < iVar3;
}



// FUNCTION 144ec5070 FUN_144ec5070 body=92 status=ok
// SIG undefined FUN_144ec5070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5070(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 2) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_144ec5f70(param_2);
      return uVar2;
    }
    if ((((uVar1 & 2) == 0) || ((*(byte *)(param_2 + 0xd4) & 0x88) != 0)) &&
       (((uVar1 & 8) == 0 || ((*(byte *)(param_2 + 0xdc) & 0x80) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ec50d0 FUN_144ec50d0 body=92 status=ok
// SIG undefined FUN_144ec50d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec50d0(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_144ec5f70(param_2);
      return uVar2;
    }
    if ((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ec5130 FUN_144ec5130 body=106 status=ok
// SIG undefined FUN_144ec5130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5130(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 0x11) != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_144ec5f70(param_2);
      return uVar2;
    }
    if (((((uVar1 & 8) == 0) || ((*(byte *)(param_2 + 0xdc) & 0x40) != 0)) &&
        (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0xa8) != 0)))) &&
       (((uVar1 & 2) == 0 || ((*(byte *)(param_2 + 0xd4) & 0x20) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ec51a0 FUN_144ec51a0 body=120 status=ok
// SIG undefined FUN_144ec51a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec51a0(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 4) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 & 8) == 0) || ((*(uint *)(param_2 + 0xdc) & 0x20) != 0)) {
        uVar3 = 1;
      }
      else {
        if (-1 < (char)*(uint *)(param_2 + 0xdc)) {
          return 0;
        }
        uVar3 = 2;
      }
      if ((uVar1 & 2) == 0) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xd4) & 0xc0;
    }
    else {
      uVar3 = FUN_144ec61f0(param_2);
      if ((int)uVar3 == 0) {
        return 0;
      }
      if ((int)uVar3 != 5) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xdc) & 2;
    }
    if (bVar2 != 0) {
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144ec5220 FUN_144ec5220 body=120 status=ok
// SIG undefined FUN_144ec5220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5220(undefined8 param_1,longlong param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0xd0);
  if (((uVar1 & 4) == 0) || ((*(byte *)(param_2 + 0xd8) & 4) != 0)) {
    if (param_3 == 0) {
      if (((uVar1 & 8) == 0) || ((*(uint *)(param_2 + 0xdc) & 0x20) != 0)) {
        uVar3 = 1;
      }
      else {
        if (-1 < (char)*(uint *)(param_2 + 0xdc)) {
          return 0;
        }
        uVar3 = 2;
      }
      if ((uVar1 & 2) == 0) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xd4) & 0x20;
    }
    else {
      uVar3 = FUN_144ec61f0(param_2);
      if ((int)uVar3 == 0) {
        return 0;
      }
      if ((int)uVar3 != 5) {
        return uVar3;
      }
      bVar2 = *(byte *)(param_2 + 0xdc) & 2;
    }
    if (bVar2 != 0) {
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144ec52a0 FUN_144ec52a0 body=76 status=ok
// SIG undefined FUN_144ec52a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec52a0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_144ec61f0(param_2);
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  if (((*(byte *)(param_2 + 0xd0) & 2) != 0) && ((*(byte *)(param_2 + 0xd4) & 2) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 144ec52f0 FUN_144ec52f0 body=139 status=ok
// SIG undefined FUN_144ec52f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec52f0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = FUN_144ec61f0(param_2);
    return uVar2;
  }
  if (((((*(uint *)(param_2 + 0xd0) & 2) == 0) ||
       (((*(uint *)(param_2 + 0xd4) & 0xffffff3f) == 0 && ((*(uint *)(param_2 + 0xd4) & 0xc0) != 0))
       )) && ((*(uint *)(param_2 + 0xd0) & 4) != 0)) && (*(int *)(param_2 + 0xd8) == 0x40)) {
    iVar1 = FUN_144eac570(param_2,0x7e);
    if (-1 < iVar1) {
      uVar2 = FUN_144eac590(param_2,iVar1);
      iVar1 = FUN_144ef4440(uVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144ec5390 FUN_144ec5390 body=40 status=ok
// SIG undefined FUN_144ec5390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5390(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_144ec61f0(param_2);
    return uVar1;
  }
  return 1;
}



// FUNCTION 144ec53c0 FUN_144ec53c0 body=138 status=ok
// SIG undefined FUN_144ec53c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ec53c0(longlong param_1)

{
  uint uVar1;
  
  FUN_144ec58f0();
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (uVar1 & 0xff) >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 & 2) != 0) {
      return 4;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}



// FUNCTION 144ec5450 FUN_144ec5450 body=136 status=ok
// SIG undefined FUN_144ec5450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5450(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_144ec58f0();
  if ((*(byte *)(param_1 + 0xd0) & 0x80) == 0) {
    if (param_2 == -1) {
      return 1;
    }
    iVar1 = FUN_144ec5780(param_2);
    if (iVar1 != -1) {
      lVar2 = FUN_144ec5730(iVar1);
                    /* WARNING: Could not recover jumptable at 0x000144ec54d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_3);
      return uVar3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144ec54e0 FUN_144ec54e0 body=127 status=ok
// SIG undefined FUN_144ec54e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec54e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ec57e0();
  if ((int)uVar1 == 0) {
    if ((*(uint *)(param_2 + 0xd0) & 0x400) == 0) {
      if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 4) == 0)) {
        return 0x20;
      }
    }
    else if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 0x80) == 0)) {
      return 0x27;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144ec5560 FUN_144ec5560 body=248 status=ok
// SIG undefined FUN_144ec5560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5560(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (((*param_2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
     (iVar2 = FUN_144ef2c30(), iVar2 != 0)) {
    return 0x1e;
  }
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    uVar3 = FUN_144bb4f20(param_1);
    iVar2 = FUN_144ef10c0(uVar3,lVar1);
    if (iVar2 != 0) {
      return 0x1f;
    }
  }
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    iVar5 = 0;
    iVar2 = FUN_144babbf0(lVar1);
    if (0 < iVar2) {
      do {
        piVar4 = (int *)FUN_144babc00(lVar1,iVar5);
        if (*piVar4 == 4) {
          lVar1 = *(longlong *)(piVar4 + 2);
          if (lVar1 == 0) {
            return 0;
          }
          uVar3 = FUN_144bb4f40(param_1);
          iVar2 = FUN_144bb54b0(lVar1,uVar3);
          if (iVar2 == 0) {
            return 0;
          }
          return 0x1f;
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_144babbf0(lVar1);
      } while (iVar5 < iVar2);
    }
  }
  return 0;
}



// FUNCTION 144ec5660 FUN_144ec5660 body=35 status=ok
// SIG undefined FUN_144ec5660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ec5660(longlong param_1)

{
  FUN_144ec58f0();
  return *(undefined4 *)(param_1 + 0xd0);
}



// FUNCTION 144ec5690 FUN_144ec5690 body=66 status=ok
// SIG undefined FUN_144ec5690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ec5690(longlong param_1)

{
  FUN_144ec58f0();
  if ((char)*(uint *)(param_1 + 0xd0) < '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 2) != 0) {
    return *(undefined4 *)(param_1 + 0xd4);
  }
  return 0xffffffff;
}



// FUNCTION 144ec56e0 FUN_144ec56e0 body=66 status=ok
// SIG undefined FUN_144ec56e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ec56e0(longlong param_1)

{
  FUN_144ec58f0();
  if ((char)*(uint *)(param_1 + 0xd0) < '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 4) != 0) {
    return *(undefined4 *)(param_1 + 0xd8);
  }
  return 0xffffffff;
}



// FUNCTION 144ec5730 FUN_144ec5730 body=74 status=ok
// SIG undefined FUN_144ec5730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_144ec5730(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 9) {
    return &DAT_14c70b100 + (longlong)param_1 * 0x30;
  }
  puVar1 = (undefined *)FUN_144babc00(DAT_14c7969b0,param_1 + -9);
  return puVar1;
}



// FUNCTION 144ec5780 FUN_144ec5780 body=78 status=ok
// SIG undefined FUN_144ec5780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec5780(int param_1)

{
  int iVar1;
  int local_38 [12];
  undefined8 uStack_8;
  
  uStack_8 = 0x144ec578a;
  if (param_1 - 1U < 9) {
    return param_1 + -1;
  }
  if (DAT_14c7969b0 != 0) {
    local_38[0] = param_1;
    iVar1 = FUN_144bac1a0(DAT_14c7969b0,local_38);
    if (-1 < iVar1) {
      return iVar1 + 9;
    }
  }
  return -1;
}



// FUNCTION 144ec57d0 FUN_144ec57d0 body=4 status=ok
// SIG undefined FUN_144ec57d0(void)

undefined4 FUN_144ec57d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 144ec57e0 FUN_144ec57e0 body=199 status=ok
// SIG undefined FUN_144ec57e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec57e0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_144bb4f40(param_2);
  uVar3 = FUN_144bb4f50(param_1);
  iVar1 = FUN_144bb54b0(uVar3,uVar2);
  if (iVar1 != 0) {
    return 0x1d;
  }
  FUN_144ec58f0(param_1);
  if ((*(byte *)(param_1 + 0xd0) & 0x80) != 0) {
    return 1;
  }
  FUN_144ec58f0(param_2);
  if ((*(byte *)(param_2 + 0xd0) & 0x80) != 0) {
    return 1;
  }
  if ((*(longlong *)(param_2 + 0xe8) != 0) && (uVar2 = FUN_144ec5560(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  uVar2 = FUN_144bb4f60(param_1);
  uVar2 = FUN_144ec6150(uVar2,param_2);
  return uVar2;
}



// FUNCTION 144ec58b0 FUN_144ec58b0 body=63 status=ok
// SIG undefined FUN_144ec58b0(void)

undefined8 FUN_144ec58b0(longlong param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xd0) & 0x400) == 0) {
    if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 4) == 0)) {
      return 0x20;
    }
  }
  else if (((*(byte *)(param_1 + 0xd0) & 2) != 0) && ((*(byte *)(param_1 + 0xd4) & 0x80) == 0)) {
    return 0x27;
  }
  return 0;
}



// FUNCTION 144ec58f0 FUN_144ec58f0 body=1619 status=ok
// SIG undefined FUN_144ec58f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec58f0(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int local_res8 [2];
  int local_res10 [2];
  
  if (*(int *)(param_1 + 0x148) != 0) {
    return;
  }
  FUN_144e98620(*(undefined8 *)(param_1 + 0x140));
  if ((*(uint *)(param_1 + 0xd0) & 0x100) != 0) {
    FUN_144e98640(*(undefined8 *)(param_1 + 0x140));
    return;
  }
  uVar5 = FUN_144bab020();
  iVar3 = FUN_144bb5900(param_1,uVar5,param_1 + 0x120,0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100080;
  }
  iVar3 = FUN_144bb5fc0(param_1);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x40;
  }
  piVar6 = (int *)FUN_144eac5d0(param_1,0x57,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if (*piVar6 != 0) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x10;
    }
    if (*(longlong *)(piVar6 + 2) == 0) {
      *(undefined4 *)(param_1 + 200) = 0xffffffff;
LAB_144ec5a00:
      FUN_145281f20(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
    else {
      if (*(int *)(*(longlong *)(piVar6 + 2) + 4) != 0x102) {
        iVar3 = FUN_144ef1170();
        *(int *)(param_1 + 200) = iVar3;
        if ((*piVar6 != 0) || (iVar3 == 0)) goto LAB_144ec5a00;
      }
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
      *(undefined4 *)(param_1 + 200) = 0;
      FUN_145281f20(piVar6);
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 1;
    }
  }
  plVar7 = (longlong *)FUN_144eac5d0(param_1,0x297,local_res8,0);
  if (plVar7 == (longlong *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if ((((*(byte *)(param_1 + 0xd0) & 0x10) != 0) ||
        (iVar3 = FUN_144eac570(param_1,0x55), -1 < iVar3)) ||
       (iVar3 = FUN_144eac570(param_1,0x56), -1 < iVar3)) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
    if (*plVar7 == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
    }
    else {
      uVar4 = FUN_144ef1170();
      *(undefined4 *)(param_1 + 0xcc) = uVar4;
    }
    FUN_145281cf0(plVar7);
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x400;
  }
  piVar6 = (int *)FUN_144eac5d0(param_1,0x53,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    if (*piVar6 < 1) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      bVar1 = **(byte **)(piVar6 + 2);
      *(uint *)(param_1 + 0xd4) = (uint)bVar1;
      if (1 < *piVar6) {
        uVar2 = *(undefined1 *)(*(longlong *)(piVar6 + 2) + 1);
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
        *(uint *)(param_1 + 0xd4) = (uint)CONCAT11(uVar2,bVar1);
        FUN_144efe820(piVar6);
        goto LAB_144ec5b3c;
      }
    }
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 2;
    FUN_144efe820(piVar6);
  }
LAB_144ec5b3c:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  lVar8 = FUN_144eac5d0(param_1,0x7e,local_res8);
  if (lVar8 == 0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 4;
    local_res8[0] = 0;
    iVar3 = FUN_144babbf0(lVar8);
    if (local_res8[0] < iVar3) {
      do {
        uVar5 = FUN_144babc00(lVar8,local_res8[0]);
        iVar3 = FUN_144ea8fa0(uVar5);
        if (iVar3 < 0xb5) {
          if (iVar3 == 0xb4) {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x20;
          }
          else {
            switch(iVar3) {
            case 0x81:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
              break;
            case 0x82:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
              break;
            case 0x83:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 8;
              break;
            case 0x84:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 4;
              break;
            case 0x85:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x40;
              break;
            case 0x89:
            case 0x8b:
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
            }
          }
        }
        else if (iVar3 == 0x129) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
        }
        else if (iVar3 == 0x38e) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
        }
        local_res8[0] = local_res8[0] + 1;
        iVar3 = FUN_144babbf0(lVar8);
      } while (local_res8[0] < iVar3);
    }
    FUN_144babe00(lVar8,FUN_144ed0860);
  }
  piVar6 = (int *)FUN_144eac5d0(param_1,0x47,local_res8);
  if (piVar6 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
    }
  }
  else if (*piVar6 < 1) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 8;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    FUN_144efe820(piVar6);
  }
  else {
    bVar1 = **(byte **)(piVar6 + 2);
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 8;
    *(uint *)(param_1 + 0xdc) = (uint)bVar1;
    FUN_144efe820(piVar6);
  }
  lVar8 = FUN_144eac5d0(param_1,0x52,local_res8);
  *(longlong *)(param_1 + 0xe0) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_144eac5d0(param_1,0x5a,local_res8);
  *(longlong *)(param_1 + 0xe8) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  uVar5 = FUN_144bb4f40(param_1);
  uVar9 = FUN_144bb4f50(param_1);
  iVar3 = FUN_144bb54b0(uVar9,uVar5);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x20;
    iVar3 = FUN_144ec5560(param_1,*(undefined8 *)(param_1 + 0xe8));
    if (iVar3 == 0) {
      uVar5 = FUN_144bb4f60(param_1);
      iVar3 = FUN_144ec6150(uVar5,param_1);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x2000;
      }
    }
  }
  lVar8 = FUN_144eac5d0(param_1,0x55,local_res8);
  *(longlong *)(param_1 + 0x100) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_144eac5d0(param_1,0x29a,local_res8,0);
  *(longlong *)(param_1 + 0x108) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  iVar3 = FUN_144ec5ff0(param_1);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_144eac5d0(param_1,0x122,local_res8,0);
  *(longlong *)(param_1 + 0x110) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  lVar8 = FUN_144eac5d0(param_1,0x123,local_res8,0);
  *(longlong *)(param_1 + 0x118) = lVar8;
  if ((lVar8 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x80;
  }
  local_res8[0] = 0;
  iVar3 = FUN_144eac550(param_1);
  if (local_res8[0] < iVar3) {
    do {
      uVar5 = FUN_144eac590(param_1,local_res8[0]);
      uVar9 = FUN_144ef4420(uVar5);
      iVar3 = FUN_144ea8fa0(uVar9);
      if (iVar3 == 0x359) {
        *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x1000;
      }
      iVar3 = FUN_144ef4440(uVar5);
      if (iVar3 != 0) {
        uVar5 = FUN_144ef4420(uVar5);
        local_res10[0] = FUN_144ea8fa0(uVar5);
        if ((local_res10[0] == 0) ||
           (lVar8 = FUN_144ea97c0(local_res10,&DAT_149bf6cc0,0xe,4,&LAB_144ec5fe0), lVar8 == 0)) {
          *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x200;
          break;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar3 = FUN_144eac550(param_1);
    } while (local_res8[0] < iVar3);
  }
  FUN_144bb60c0(param_1);
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) | 0x100;
  *(undefined4 *)(param_1 + 0x148) = 1;
  FUN_144e98640(*(undefined8 *)(param_1 + 0x140));
  return;
}



// FUNCTION 144ec5f70 FUN_144ec5f70 body=100 status=ok
// SIG undefined FUN_144ec5f70(void)

undefined8 FUN_144ec5f70(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x2040) == 0x2040) {
        return 3;
      }
      if ((uVar1 & 2) != 0) {
        return 4;
      }
      if ((((uVar1 & 8) != 0) && ((*(uint *)(param_1 + 0xdc) & 7) != 0)) &&
         ((*(uint *)(param_1 + 0xdc) & 4) != 0)) {
        return 5;
      }
    }
    else if ((uVar1 & 0x10) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ec5ff0 FUN_144ec5ff0 body=340 status=ok
// SIG undefined FUN_144ec5ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec5ff0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  int local_res8 [2];
  
  lVar2 = FUN_144eac5d0(param_1,0x67,local_res8,0);
  *(longlong *)(param_1 + 0xf8) = lVar2;
  if ((lVar2 == 0) && (local_res8[0] != -1)) {
    return 0;
  }
  local_res8[0] = 0;
  iVar1 = FUN_144babbf0(lVar2);
  if (local_res8[0] < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0xf8),local_res8[0]);
      piVar4 = (int *)puVar3[1];
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(puVar3 + 3) = 0x807f;
      }
      else {
        if (0 < *piVar4) {
          *(uint *)(puVar3 + 3) = (uint)**(byte **)(piVar4 + 2);
        }
        if (1 < *piVar4) {
          *(uint *)(puVar3 + 3) =
               *(uint *)(puVar3 + 3) | (uint)*(byte *)(*(longlong *)(piVar4 + 2) + 1) << 8;
        }
        *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) & 0x807f;
      }
      if (((int *)*puVar3 != (int *)0x0) && (*(int *)*puVar3 == 1)) {
        iVar5 = 0;
        iVar1 = FUN_144babbf0(puVar3[2]);
        if (0 < iVar1) {
          do {
            piVar4 = (int *)FUN_144babc00(puVar3[2],iVar5);
            if (*piVar4 == 4) {
              lVar2 = *(longlong *)(piVar4 + 2);
              if (lVar2 != 0) goto LAB_144ec60f2;
              break;
            }
            iVar5 = iVar5 + 1;
            iVar1 = FUN_144babbf0(puVar3[2]);
          } while (iVar5 < iVar1);
        }
        lVar2 = FUN_144bb4f40(param_1);
LAB_144ec60f2:
        iVar1 = FUN_144f02cc0(*puVar3,lVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0xf8));
    } while (local_res8[0] < iVar1);
  }
  return 1;
}



// FUNCTION 144ec6150 FUN_144ec6150 body=158 status=ok
// SIG undefined FUN_144ec6150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ec6150(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_res8 [2];
  undefined4 local_res18 [4];
  
  if (param_1 == 0) {
    return 0x4d;
  }
  uVar1 = FUN_144ba6760();
  iVar2 = FUN_144edaca0(uVar1,0,local_res8);
  if (iVar2 == 0) {
    local_res8[0] = FUN_144ba6760(param_1);
  }
  uVar1 = FUN_144ea8fa0(*(undefined8 *)(param_2 + 0x20));
  iVar2 = FUN_144edaca0(uVar1,0,local_res18);
  if (iVar2 == 0) {
    return 0x4e;
  }
  iVar2 = FUN_144ba6700(local_res18[0]);
  uVar1 = 0;
  if (local_res8[0] != iVar2) {
    uVar1 = 0x4c;
  }
  return uVar1;
}



// FUNCTION 144ec61f0 FUN_144ec61f0 body=93 status=ok
// SIG undefined FUN_144ec61f0(void)

uint FUN_144ec61f0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if (((uVar1 & 2) == 0) || ((*(byte *)(param_1 + 0xd4) & 4) != 0)) {
    if ((uVar1 & 1) != 0) {
      return (uVar1 & 0xff) >> 4 & 1;
    }
    if ((uVar1 & 0x2040) == 0x2040) {
      return 3;
    }
    if ((uVar1 & 2) != 0) {
      return 4;
    }
    if (((uVar1 & 8) != 0) && ((*(byte *)(param_1 + 0xdc) & 7) != 0)) {
      return 5;
    }
  }
  return 0;
}



// FUNCTION 144ec6250 FUN_144ec6250 body=25 status=ok
// SIG undefined FUN_144ec6250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6250(undefined8 *param_1)

{
  FUN_144ef1250(*param_1);
  return;
}



// FUNCTION 144ec6270 FUN_144ec6270 body=139 status=ok
// SIG undefined FUN_144ec6270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec6270(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ec627c;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x27,0x6f,0x6c,"crypto\\ocsp\\ocsp_cl.c",0x9a,0x144ec627c);
    return 0;
  }
  iVar2 = FUN_144ea8fa0(*puVar1);
  if (iVar2 != 0x16d) {
    FUN_144ba24f0(0x27,0x6f,0x68,"crypto\\ocsp\\ocsp_cl.c",0x9e,uVar3);
    return 0;
  }
  uVar3 = FUN_144ec6740();
  uVar3 = FUN_145281f40(puVar1[1],uVar3);
  return uVar3;
}



// FUNCTION 144ec6300 FUN_144ec6300 body=39 status=ok
// SIG undefined FUN_144ec6300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec6300(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 144ec6330 FUN_144ec6330 body=38 status=ok
// SIG undefined FUN_144ec6330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec6330(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144babc00(*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 144ec6360 FUN_144ec6360 body=172 status=ok
// SIG undefined FUN_144ec6360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec6360(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = **(int **)(param_1 + 8);
  if (iVar1 == 1) {
    puVar2 = *(undefined8 **)(*(int **)(param_1 + 8) + 2);
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *puVar2;
    }
    if (param_2 != (undefined4 *)0x0) {
      if (puVar2[1] == 0) {
        *param_2 = 0xffffffff;
      }
      else {
        uVar3 = FUN_144ef1250();
        *param_2 = uVar3;
      }
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x18);
  }
  return iVar1;
}



// FUNCTION 144ec6410 FUN_144ec6410 body=198 status=ok
// SIG undefined FUN_144ec6410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ec6410(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    iVar5 = 0;
    iVar1 = FUN_144babbf0(uVar4);
    if (0 < iVar1) {
      do {
        puVar3 = (undefined8 *)FUN_144babc00(uVar4,iVar5);
        iVar1 = FUN_145282330(param_2,*puVar3);
        if (iVar1 == 0) {
          if (iVar5 < 0) {
            return 0;
          }
          uVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x20),iVar5);
          uVar2 = FUN_144ec6360(uVar4,param_4,param_5,param_6,param_7);
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = uVar2;
          }
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_144babbf0(uVar4);
      } while (iVar5 < iVar1);
    }
  }
  return 0;
}



// FUNCTION 144ec64e0 FUN_144ec64e0 body=384 status=ok
// SIG undefined FUN_144ec64e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ec64e0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong local_res10;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_28 [2];
  
  local_28[1] = 0x144ec64f8;
  _time64(local_28);
  iVar1 = FUN_144ef1f00(param_1);
  if (iVar1 == 0) {
    uVar4 = 0x15a;
    uVar3 = 0x7b;
LAB_144ec659f:
    FUN_144ba24f0(0x27,0x73,uVar3,"crypto\\ocsp\\ocsp_cl.c",uVar4);
    bVar2 = false;
  }
  else {
    local_res10 = param_3 + local_28[0];
    iVar1 = FUN_144bafd70(param_1,&local_res10);
    bVar2 = iVar1 < 1;
    if (!bVar2) {
      FUN_144ba24f0(0x27,0x73,0x7e,"crypto\\ocsp\\ocsp_cl.c",0x15f);
    }
    if (-1 < param_4) {
      local_res10 = local_28[0] - param_4;
      iVar1 = FUN_144bafd70(param_1,&local_res10);
      if (iVar1 < 0) {
        uVar4 = 0x16a;
        uVar3 = 0x7f;
        goto LAB_144ec659f;
      }
    }
  }
  if (param_2 == 0) {
    return bVar2;
  }
  iVar1 = FUN_144ef1f00(param_2);
  if (iVar1 == 0) {
    uVar5 = 0x175;
    uVar4 = 0x7a;
  }
  else {
    local_res10 = local_28[0] - param_3;
    iVar1 = FUN_144bafd70(param_2,&local_res10);
    if (-1 < iVar1) goto LAB_144ec661a;
    uVar5 = 0x17a;
    uVar4 = 0x7d;
  }
  FUN_144ba24f0(0x27,0x73,uVar4,"crypto\\ocsp\\ocsp_cl.c",uVar5);
  bVar2 = false;
LAB_144ec661a:
  iVar1 = FUN_144f03cb0(param_2,param_1);
  if (iVar1 < 0) {
    FUN_144ba24f0(0x27,0x73,0x7c,"crypto\\ocsp\\ocsp_cl.c",0x182);
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 144ec6660 FUN_144ec6660 body=26 status=ok
// SIG undefined FUN_144ec6660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6660(longlong param_1)

{
  FUN_14526d390(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144ec66b0 FUN_144ec66b0 body=8 status=ok
// SIG undefined FUN_144ec66b0(void)

undefined * FUN_144ec66b0(void)

{
  return &DAT_149bf74c0;
}



// FUNCTION 144ec6720 FUN_144ec6720 body=29 status=ok
// SIG undefined FUN_144ec6720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6720(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf7570);
  return;
}



// FUNCTION 144ec6740 FUN_144ec6740 body=8 status=ok
// SIG undefined FUN_144ec6740(void)

undefined * FUN_144ec6740(void)

{
  return &DAT_149bf7570;
}



// FUNCTION 144ec6750 FUN_144ec6750 body=29 status=ok
// SIG undefined FUN_144ec6750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6750(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf7220);
  return;
}



// FUNCTION 144ec6770 FUN_144ec6770 body=29 status=ok
// SIG undefined FUN_144ec6770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6770(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ec6790 FUN_144ec6790 body=29 status=ok
// SIG undefined FUN_144ec6790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6790(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_149bf7220);
  return;
}



// FUNCTION 144ec67b0 FUN_144ec67b0 body=29 status=ok
// SIG undefined FUN_144ec67b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec67b0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf71b0);
  return;
}



// FUNCTION 144ec67d0 FUN_144ec67d0 body=29 status=ok
// SIG undefined FUN_144ec67d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec67d0(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144ec67f0 FUN_144ec67f0 body=29 status=ok
// SIG undefined FUN_144ec67f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec67f0(void)

{
  FUN_144efec20(&DAT_149bf6f40);
  return;
}



// FUNCTION 144ec6810 FUN_144ec6810 body=29 status=ok
// SIG undefined FUN_144ec6810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6810(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149bf6f40);
  return;
}



// FUNCTION 144ec6850 FUN_144ec6850 body=221 status=ok
// SIG undefined FUN_144ec6850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec6850(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ec685c;
  if (param_1 == 0) {
    FUN_144ba24f0(0x26,0x77,0x43,"crypto\\engine\\eng_init.c",0x51,0x144ec685c);
    return 0;
  }
  iVar1 = FUN_144e986c0(&DAT_14c797584,FUN_144ee3f00);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c797588;
  }
  if (iVar2 == 0) {
    FUN_144ba24f0(0x26,0x77,0x41,"crypto\\engine\\eng_init.c",0x55,uVar3);
    return 0;
  }
  FUN_144e98620(DAT_14c797590);
  iVar2 = 1;
  if ((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) {
    iVar2 = (**(code **)(param_1 + 0x60))(param_1);
    if (iVar2 == 0) goto LAB_144ec6914;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_144ec6914:
  FUN_144e98640(DAT_14c797590);
  return iVar2;
}



// FUNCTION 144ec6930 FUN_144ec6930 body=229 status=ok
// SIG undefined FUN_144ec6930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec6930(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ec6940;
  if (param_1 == 0) {
    return 1;
  }
  FUN_144e98620(DAT_14c797590);
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    FUN_144e98640(DAT_14c797590);
    iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    FUN_144e98620(DAT_14c797590);
    if (iVar2 != 0) goto LAB_144ec699d;
  }
  else {
LAB_144ec699d:
    iVar3 = FUN_144ee3e00(param_1,0);
    if (iVar3 != 0) goto LAB_144ec69cd;
    FUN_144ba24f0(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar4);
  }
  iVar2 = 0;
LAB_144ec69cd:
  FUN_144e98640(DAT_14c797590);
  if (iVar2 == 0) {
    FUN_144ba24f0(0x26,0x6b,0x6a,"crypto\\engine\\eng_init.c",0x69);
    return 0;
  }
  return iVar2;
}



// FUNCTION 144ec6a20 FUN_144ec6a20 body=65 status=ok
// SIG undefined FUN_144ec6a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec6a20(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (((*(int *)(param_1 + 0xa0) == 0) && (*(code **)(param_1 + 0x60) != (code *)0x0)) &&
     (uVar1 = (**(code **)(param_1 + 0x60))(), (int)uVar1 == 0)) {
    return uVar1;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return uVar1;
}



// FUNCTION 144ec6a70 FUN_144ec6a70 body=175 status=ok
// SIG undefined FUN_144ec6a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec6a70(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ec6a85;
  iVar2 = 1;
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    if (param_2 != 0) {
      FUN_144e98640(DAT_14c797590);
    }
    iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    if (param_2 != 0) {
      FUN_144e98620(DAT_14c797590);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_144ee3e00(param_1,0);
  if (iVar3 == 0) {
    FUN_144ba24f0(0x26,0xbf,0x6a,"crypto\\engine\\eng_init.c",0x46,uVar4);
    return 0;
  }
  return iVar2;
}



// FUNCTION 144ec6b20 FUN_144ec6b20 body=805 status=ok
// SIG undefined FUN_144ec6b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec6b20(longlong *param_1,LPCSTR param_2)

{
  LPCWSTR pWVar1;
  char cVar2;
  WCHAR WVar3;
  LPWIN32_FIND_DATAW p_Var4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  BOOL BVar10;
  int iVar11;
  int *piVar12;
  void *pvVar13;
  ulonglong uVar14;
  HANDLE pvVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  LPCWSTR pWVar21;
  ulonglong uVar22;
  UINT CodePage;
  undefined8 uStackY_80;
  undefined1 auStackY_78 [32];
  ulonglong local_38 [2];
  
  local_38[1] = 0x144ec6b34;
  puVar18 = auStackY_78;
  puVar20 = auStackY_78;
  local_38[0] = DAT_14c707940 ^ (ulonglong)local_38;
  puVar19 = auStackY_78;
  if ((param_1 != (longlong *)0x0) && (puVar19 = auStackY_78, param_2 != (LPCSTR)0x0)) {
    uStackY_80 = 0x144ec6b74;
    piVar12 = _errno();
    uVar17 = 0;
    uVar7 = 0;
    *piVar12 = 0;
    p_Var4 = (LPWIN32_FIND_DATAW)*param_1;
    if (p_Var4 != (LPWIN32_FIND_DATAW)0x0) {
      uStackY_80 = 0x144ec6dca;
      BVar10 = FindNextFileW(*(HANDLE *)(p_Var4 + 1),p_Var4);
      if (BVar10 == 0) goto LAB_144ec6d57;
LAB_144ec6dce:
      lVar5 = *param_1;
      WVar3 = *(WCHAR *)(lVar5 + 0x2c);
      pWVar21 = (LPCWSTR)(lVar5 + 0x2c);
      uVar22 = uVar17;
      while ((WVar3 != L'\0' && (uVar22 < 0xff))) {
        uVar22 = uVar22 + 1;
        WVar3 = pWVar21[uVar22];
      }
      *(undefined8 *)(puVar18 + 0x38) = 0;
      *(undefined8 *)(puVar18 + 0x30) = 0;
      uVar22 = uVar22 + 1;
      *(undefined4 *)(puVar18 + 0x28) = 0x100;
      *(longlong *)(puVar18 + 0x20) = lVar5 + 600;
      *(undefined8 *)(puVar18 + -8) = 0x144ec6e26;
      iVar11 = WideCharToMultiByte(0xfde9,0,pWVar21,(int)uVar22,*(LPSTR *)(puVar18 + 0x20),
                                   *(int *)(puVar18 + 0x28),*(LPCSTR *)(puVar18 + 0x30),
                                   *(LPBOOL *)(puVar18 + 0x38));
      if ((iVar11 == 0) && (uVar22 != 0)) {
        do {
          *(char *)(*param_1 + 600 + uVar17) = (char)pWVar21[uVar17];
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar22);
      }
      *(undefined1 *)(*param_1 + 0x357) = 0;
      puVar20 = puVar18;
      goto LAB_144ec6d57;
    }
    cVar2 = *param_2;
    uVar22 = uVar17;
    pcVar16 = param_2;
    while ((cVar2 != '\0' && (uVar7 = (uint)uVar22, uVar7 < 0x80000000))) {
      pcVar16 = pcVar16 + 1;
      uVar7 = uVar7 + 1;
      cVar2 = *pcVar16;
      uVar22 = (ulonglong)uVar7;
    }
    uVar7 = uVar7 & 0x7fffffff;
    if (0x7ffffffb < (ulonglong)uVar7 - 1) {
      uStackY_80 = 0x144ec6db2;
      piVar12 = _errno();
      *piVar12 = 2;
      puVar20 = auStackY_78;
      goto LAB_144ec6d57;
    }
    uStackY_80 = 0x144ec6bc4;
    pvVar13 = malloc(0x358);
    *param_1 = (longlong)pvVar13;
    if (pvVar13 == (void *)0x0) {
      uStackY_80 = 0x144ec6bd2;
      piVar12 = _errno();
      *piVar12 = 0xc;
      puVar20 = auStackY_78;
      goto LAB_144ec6d57;
    }
    uStackY_80 = 0x144ec6bed;
    memset(pvVar13,0,0x358);
    uVar22 = (ulonglong)uVar7 + 1;
    CodePage = 0xfde9;
    iVar11 = (int)uVar22;
    uStackY_80 = 0x144ec6c10;
    iVar8 = MultiByteToWideChar(0xfde9,0,param_2,iVar11,(LPWSTR)0x0,0);
    if (iVar8 < 1) {
      uStackY_80 = 0x144ec6c21;
      DVar9 = GetLastError();
      CodePage = 0xfde9;
      if (DVar9 == 0x459) {
        uStackY_80 = 0x144ec6c44;
        iVar8 = MultiByteToWideChar(0,0,param_2,iVar11,(LPWSTR)0x0,0);
        CodePage = 0;
      }
      if (0 < iVar8) goto LAB_144ec6cec;
      uVar6 = (longlong)(int)(uVar7 + 3) * 2;
      uVar14 = uVar6 + 0xf;
      if (uVar14 <= uVar6) {
        uVar14 = 0xffffffffffffff0;
      }
      uStackY_80 = 0x144ec6c7a;
      lVar5 = -(uVar14 & 0xfffffffffffffff0);
      pWVar21 = (LPCWSTR)((longlong)local_38 + lVar5);
      uVar14 = uVar17;
      puVar18 = auStackY_78 + lVar5;
      iVar8 = iVar11;
      if (uVar22 != 0) {
        do {
          pWVar21[uVar14] = (short)param_2[uVar14];
          uVar14 = uVar14 + 1;
          puVar18 = auStackY_78 + lVar5;
        } while (uVar14 < uVar22);
      }
LAB_144ec6ca1:
      WVar3 = pWVar21[iVar8 + -2];
      if (WVar3 != L'*') {
        if ((WVar3 == L'/') || (WVar3 == L'\\')) {
          (pWVar21 + (iVar8 + -1))[0] = L'*';
          (pWVar21 + (iVar8 + -1))[1] = L'\0';
        }
        else {
          pWVar1 = pWVar21 + (iVar8 + -1);
          pWVar1[0] = L'/';
          pWVar1[1] = L'*';
          pWVar1[2] = L'\0';
        }
      }
      p_Var4 = (LPWIN32_FIND_DATAW)*param_1;
      *(undefined8 *)(puVar18 + -8) = 0x144ec6d93;
      pvVar15 = FindFirstFileW(pWVar21,p_Var4);
      *(HANDLE *)(*param_1 + 0x250) = pvVar15;
      pvVar13 = (void *)*param_1;
      if (*(longlong *)((longlong)pvVar13 + 0x250) != -1) goto LAB_144ec6dce;
    }
    else {
LAB_144ec6cec:
      uVar14 = (longlong)(iVar8 + 2) * 2;
      uVar22 = uVar14 + 0xf;
      if (uVar22 <= uVar14) {
        uVar22 = 0xffffffffffffff0;
      }
      uStackY_80 = 0x144ec6d12;
      lVar5 = -(uVar22 & 0xfffffffffffffff0);
      puVar18 = auStackY_78 + lVar5;
      pWVar21 = (LPCWSTR)((longlong)local_38 + lVar5);
      *(int *)(&stack0xffffffffffffffb0 + lVar5) = iVar8;
      *(LPCWSTR *)(&stack0xffffffffffffffa8 + lVar5) = pWVar21;
      *(undefined8 *)(auStackY_78 + lVar5 + -8) = 0x144ec6d35;
      iVar11 = MultiByteToWideChar(CodePage,0,param_2,iVar11,
                                   *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar5),
                                   *(int *)(&stack0xffffffffffffffb0 + lVar5));
      if (iVar11 != 0) goto LAB_144ec6ca1;
      pvVar13 = (void *)*param_1;
      puVar18 = auStackY_78 + lVar5;
    }
    *(undefined8 *)(puVar18 + -8) = 0x144ec6d46;
    free(pvVar13);
    *param_1 = 0;
    puVar19 = puVar18;
  }
  *(undefined8 *)(puVar19 + -8) = 0x144ec6d4f;
  piVar12 = _errno();
  *piVar12 = 0x16;
  puVar20 = puVar19;
LAB_144ec6d57:
  uVar17 = local_38[0] ^ (ulonglong)local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + -8) = &UNK_144ec6d63;
  FUN_144d8e3a0(uVar17);
}



// FUNCTION 144ec6e60 FUN_144ec6e60 body=91 status=ok
// SIG undefined FUN_144ec6e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec6e60(longlong *param_1)

{
  int *piVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FindClose(*(HANDLE *)(*param_1 + 0x250));
    free((void *)*param_1);
    *param_1 = 0;
    return 1;
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
  return 0;
}



// FUNCTION 144ec6ec0 FUN_144ec6ec0 body=73 status=ok
// SIG undefined FUN_144ec6ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec6ec0(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 != (void *)0x0)) {
    sVar2 = fwrite(param_2,(longlong)param_3,1,*(FILE **)(param_1 + 0x38));
    iVar1 = 0;
    if ((int)sVar2 != 0) {
      iVar1 = param_3;
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 144ec6f10 FUN_144ec6f10 body=187 status=ok
// SIG undefined FUN_144ec6f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ec6f10(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ec6f1c;
  if ((*(int *)(param_1 + 0x20) != 0) && (param_2 != (void *)0x0)) {
    sVar3 = fread(param_2,1,(longlong)param_3,*(FILE **)(param_1 + 0x38));
    iVar1 = ferror(*(FILE **)(param_1 + 0x38));
    if (iVar1 != 0) {
      DVar2 = GetLastError();
      FUN_144ba24f0(2,0xb,DVar2,"crypto\\bio\\bss_file.c",0x95,uVar4);
      FUN_144ba24f0(0x20,0x82,2,"crypto\\bio\\bss_file.c",0x96);
      return 0xffffffff;
    }
    return sVar3 & 0xffffffff;
  }
  return 0;
}



// FUNCTION 144ec6fd0 FUN_144ec6fd0 body=100 status=ok
// SIG undefined FUN_144ec6fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ec6fd0(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  
  cVar1 = *param_2;
  pcVar3 = param_2;
  for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    sVar4 = fwrite(param_2,(ulonglong)(uVar5 & 0x7fffffff),1,*(FILE **)(param_1 + 0x38));
    uVar2 = 0;
    if ((int)sVar4 != 0) {
      uVar2 = uVar5 & 0x7fffffff;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 144ec7040 FUN_144ec7040 body=88 status=ok
// SIG undefined FUN_144ec7040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144ec7040(longlong param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *param_2 = '\0';
  pcVar1 = fgets(param_2,param_3,*(FILE **)(param_1 + 0x38));
  uVar3 = uVar2;
  if ((pcVar1 != (char *)0x0) && (uVar3 = 0, *param_2 != '\0')) {
    do {
      if (0x7fffffff < uVar2) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (*param_2 != '\0');
    uVar3 = uVar2 & 0x7fffffff;
  }
  return uVar3;
}



// FUNCTION 144ec70a0 FUN_144ec70a0 body=661 status=ok
// SIG undefined FUN_144ec70a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec70a0(longlong param_1,undefined4 param_2,uint param_3,FILE *param_4)

{
  FILE *_File;
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined *puVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  puVar9 = (undefined *)0x144ec70bb;
  iVar5 = 1;
  _File = *(FILE **)(param_1 + 0x38);
  iVar1 = 1;
  switch(param_2) {
  case 1:
  case 0x80:
    iVar1 = fseek(_File,param_3,0);
    break;
  case 2:
    iVar1 = feof(_File);
    break;
  case 3:
  case 0x85:
    iVar1 = ftell(_File);
    break;
  default:
    goto switchD_144ec70fa_caseD_4;
  case 8:
    iVar1 = *(int *)(param_1 + 0x24);
    break;
  case 9:
    *(uint *)(param_1 + 0x24) = param_3;
    iVar1 = iVar5;
    break;
  case 0xb:
    iVar1 = fflush(_File);
    if (iVar1 != -1) {
      return 1;
    }
    DVar2 = GetLastError();
    FUN_144ba24f0(2,0x12,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar8,0x13c),puVar9);
    FUN_144ba2bd0(1,"fflush()");
    uVar7 = 0x13e;
LAB_144ec7301:
    uVar6 = 2;
    goto LAB_144ec7307;
  case 0xc:
    break;
  case 0x6a:
    FUN_144ec7410(param_1);
    *(FILE **)(param_1 + 0x38) = param_4;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    iVar1 = _fileno(param_4);
    if ((param_3 & 0x10) == 0) {
      _setmode(iVar1,0x8000);
      iVar1 = iVar5;
    }
    else {
      _setmode(iVar1,0x4000);
      iVar1 = iVar5;
    }
    break;
  case 0x6b:
    iVar1 = iVar5;
    if (param_4 != (FILE *)0x0) {
      param_4->_ptr = (char *)_File;
    }
    break;
  case 0x6c:
    FUN_144ec7410(param_1);
    *(uint *)(param_1 + 0x24) = param_3 & 1;
    if ((param_3 & 8) != 0) {
      if ((param_3 & 2) == 0) {
        pwVar4 = L"acd噢污敵";
      }
      else {
        pwVar4 = L"⭡";
      }
LAB_144ec71e4:
      FUN_144ea68a0(local_res10,pwVar4,4);
      puVar9 = &DAT_149e430b6;
      if ((param_3 & 0x10) != 0) {
        puVar9 = &DAT_14a1750e3;
      }
      FUN_144ea6900(local_res10,puVar9,4);
      lVar3 = FUN_1452828e0(param_4,local_res10);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x38) = lVar3;
        *(undefined4 *)(param_1 + 0x20) = 1;
        FUN_144b9e640(param_1,0);
        return 1;
      }
      DVar2 = GetLastError();
      FUN_144ba24f0(2,1,DVar2,"crypto\\bio\\bss_file.c",CONCAT44(uVar8,0x120));
      puVar9 = &DAT_1499778d4;
      FUN_144ba2bd0(5,"fopen(\'",param_4,&DAT_149bf7a68,local_res10,&DAT_1499778d4);
      uVar7 = 0x122;
      goto LAB_144ec7301;
    }
    if (((byte)param_3 & 6) == 6) {
      pwVar4 = L"⭲";
      goto LAB_144ec71e4;
    }
    if ((param_3 & 4) != 0) {
      pwVar4 = 
      L"w楰捴h慹w潲汬琀猀⼀捓楲瑰/敫獹椀瑮牥p慴n慴彮敷杩瑨琀浩e瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t"
      ;
      goto LAB_144ec71e4;
    }
    if ((param_3 & 2) != 0) {
      pwVar4 = L"rInvalid resolution in tiff: zero or negative.";
      goto LAB_144ec71e4;
    }
    uVar7 = CONCAT44(uVar8,0x111);
    uVar6 = 0x65;
LAB_144ec7307:
    FUN_144ba24f0(0x20,0x74,uVar6,"crypto\\bio\\bss_file.c",uVar7,puVar9);
switchD_144ec70fa_caseD_4:
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 144ec7410 FUN_144ec7410 body=91 status=ok
// SIG undefined FUN_144ec7410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec7410(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((*(int *)(param_1 + 0x20) != 0) && (*(FILE **)(param_1 + 0x38) != (FILE *)0x0)) {
      fclose(*(FILE **)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 1;
}



// FUNCTION 144ec7470 FUN_144ec7470 body=8 status=ok
// SIG undefined FUN_144ec7470(void)

undefined * FUN_144ec7470(void)

{
  return &DAT_149bf79e0;
}



// FUNCTION 144ec7480 FUN_144ec7480 body=319 status=ok
// SIG undefined FUN_144ec7480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ec7480(undefined8 param_1,char *param_2)

{
  DWORD DVar1;
  FILE *_File;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x144ec749a;
  _File = (FILE *)FUN_1452828e0();
  pcVar2 = strchr(param_2,0x62);
  uVar5 = 1;
  if (pcVar2 == (char *)0x0) {
    uVar5 = 0x11;
  }
  if (_File == (FILE *)0x0) {
    DVar1 = GetLastError();
    FUN_144ba24f0(2,1,DVar1,"crypto\\bio\\bss_file.c",CONCAT44(uVar6,0x45),uVar7);
    FUN_144ba2bd0(5,"fopen(\'",param_1,&DAT_149bf7a68,param_2,&DAT_1499778d4);
    piVar3 = _errno();
    if ((*piVar3 == 2) || (piVar3 = _errno(), *piVar3 == 6)) {
      uVar7 = 0x4c;
      uVar5 = 0x80;
    }
    else {
      uVar7 = 0x4e;
      uVar5 = 2;
    }
    FUN_144ba24f0(0x20,0x6d,uVar5,"crypto\\bio\\bss_file.c",uVar7);
    return 0;
  }
  lVar4 = FUN_144b9e650(&DAT_149bf79e0);
  if (lVar4 == 0) {
    fclose(_File);
    return 0;
  }
  FUN_144b9e640(lVar4,0);
  FUN_144b9efc0(lVar4,0x6a,uVar5,_File);
  return lVar4;
}



// FUNCTION 144ec75c0 FUN_144ec75c0 body=113 status=ok
// SIG undefined FUN_144ec75c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ec75c0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144b9e650(&DAT_149bf79e0);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144b9e620(lVar1,0);
  FUN_144b9efc0(lVar1,0x6a,param_2,param_1);
  return lVar1;
}



// FUNCTION 144ec7640 FUN_144ec7640 body=43 status=ok
// SIG undefined FUN_144ec7640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec7640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144ec7670(param_1,param_2,&local_res18,param_4,0x144ec7659);
  return;
}



// FUNCTION 144ec7670 FUN_144ec7670 body=224 status=ok
// SIG undefined FUN_144ec7670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec7670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined8 local_860;
  undefined8 local_858;
  longlong local_848;
  undefined4 local_840 [2];
  undefined1 local_838 [8];
  undefined8 local_830;
  undefined1 *local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ec767c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_828[0] = local_818;
  local_868 = local_838;
  local_830 = 0x800;
  local_848 = 0;
  local_860 = param_2;
  local_858 = param_3;
  iVar1 = FUN_144ec8410(local_828,&local_848,&local_830,local_840);
  if (iVar1 == 0) {
    FUN_144ea6530(local_848,"crypto\\bio\\b_print.c",0x389);
  }
  else if (local_848 == 0) {
    FUN_144b9eb80(param_1,local_818,local_840[0]);
  }
  else {
    FUN_144b9eb80(param_1,local_848,local_840[0]);
    FUN_144ea6530(local_848,"crypto\\bio\\b_print.c",0x38e);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_888);
}



// FUNCTION 144ec7760 FUN_144ec7760 body=125 status=ok
// SIG undefined FUN_144ec7760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ec7760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res20;
  int local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10 [2];
  
  local_10[1] = 0x144ec7774;
  local_res20 = param_4;
  local_20 = param_2;
  local_18 = param_1;
  iVar1 = FUN_144ec8410(&local_18,0,&local_20,local_10,local_28,param_3,&local_res20);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = 0xffffffff;
  if (local_28[0] == 0) {
    uVar2 = 0xffffffff;
    if (local_10[0] < 0x80000000) {
      uVar2 = local_10[0] & 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 144ec77e0 FUN_144ec77e0 body=377 status=ok
// SIG undefined FUN_144ec77e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ec77e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char *param_5,uint param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ec7804;
  lVar3 = (longlong)param_8;
  iVar1 = 0;
  pcVar6 = "<NULL>";
  if (param_5 != (char *)0x0) {
    pcVar6 = param_5;
  }
  if (param_8 < 0) {
    lVar3 = -1;
  }
  lVar3 = FUN_144ea6980(pcVar6,lVar3);
  iVar5 = param_7 - (int)lVar3;
  if ((param_7 < 0) || (iVar5 < 0)) {
    iVar5 = 0;
  }
  iVar2 = param_8;
  if (-1 < param_8) {
    iVar2 = 0x7fffffff;
    if (param_8 < 0x7fffffff - iVar5) {
      iVar2 = iVar5 + param_8;
    }
  }
  iVar4 = -iVar5;
  if ((param_6 & 1) == 0) {
    iVar4 = iVar5;
  }
  for (; (0 < iVar4 && ((iVar2 < 0 || (iVar1 < iVar2)))); iVar1 = iVar1 + 1) {
    iVar5 = FUN_144ec82e0(param_1,param_2,param_3,param_4,0x20,uVar7);
    if (iVar5 == 0) {
      return 0;
    }
    iVar4 = iVar4 + -1;
  }
  for (; (lVar3 != 0 && ((iVar2 < 0 || (iVar1 < iVar2)))); iVar1 = iVar1 + 1) {
    iVar5 = FUN_144ec82e0(param_1,param_2,param_3,param_4,(int)*pcVar6,uVar7);
    pcVar6 = pcVar6 + 1;
    if (iVar5 == 0) {
      return 0;
    }
    lVar3 = lVar3 + -1;
  }
  for (; (iVar4 < 0 && ((iVar2 < 0 || (iVar1 < iVar2)))); iVar1 = iVar1 + 1) {
    iVar5 = FUN_144ec82e0(param_1,param_2,param_3,param_4,0x20,uVar7);
    if (iVar5 == 0) {
      return 0;
    }
    iVar4 = iVar4 + 1;
  }
  return 1;
}



// FUNCTION 144ec7960 FUN_144ec7960 body=701 status=ok
// SIG undefined FUN_144ec7960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec7960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_78;
  undefined4 local_74;
  char acStack_70 [32];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x144ec7977;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_74 = 0;
  if (-1 < param_8) {
    local_74 = param_8;
  }
  if ((param_9 & 0x40) == 0) {
    if ((longlong)param_5 < 0) {
      param_5 = -param_5;
      local_78 = 0x2d;
    }
    else if ((param_9 & 2) == 0) {
      local_78 = 0;
      if ((param_9 & 4) != 0) {
        local_78 = 0x20;
      }
    }
    else {
      local_78 = 0x2b;
    }
  }
  pcVar6 = "";
  if ((param_9 & 8) != 0) {
    pcVar2 = "0";
    if (param_6 != 8) {
      pcVar2 = "";
    }
    pcVar6 = "0x";
    if (param_6 != 0x10) {
      pcVar6 = pcVar2;
    }
  }
  lVar4 = 0;
  pcVar2 = "0123456789abcdef";
  iVar7 = 0;
  if ((param_9 & 0x20) != 0) {
    pcVar2 = "0123456789ABCDEF";
  }
  do {
    iVar3 = iVar7;
    iVar7 = iVar3 + 1;
    acStack_70[lVar4] = pcVar2[param_5 % (ulonglong)param_6];
    lVar4 = lVar4 + 1;
    if (param_5 / param_6 == 0) break;
    param_5 = param_5 / param_6;
  } while (lVar4 < 0x1a);
  if (iVar7 != 0x1a) {
    iVar3 = iVar7;
  }
  uVar5 = (ulonglong)iVar3;
  if (0x19 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_144e2bb84();
  }
  acStack_70[uVar5] = '\0';
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (pcVar6[lVar4] != '\0');
  iVar7 = iVar3;
  if (iVar3 <= local_74) {
    iVar7 = local_74;
  }
  iVar8 = 0;
  if (-1 < local_74 - iVar3) {
    iVar8 = local_74 - iVar3;
  }
  iVar3 = ((param_7 - iVar7) - (uint)(local_78 != 0)) - (int)lVar4;
  iVar7 = 0;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  if ((param_9 & 0x10) != 0) {
    if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
    iVar8 = iVar7;
    iVar7 = 0;
  }
  iVar3 = -iVar7;
  if ((param_9 & 1) == 0) {
    iVar3 = iVar7;
  }
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    local_88 = 0x20;
    iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    if (iVar7 == 0) goto LAB_144ec7c07;
  }
  if ((local_78 == 0) ||
     (local_88 = local_78, iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4), iVar7 != 0)) {
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      local_88 = (int)cVar1;
      iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
      if (iVar7 == 0) goto LAB_144ec7c07;
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar2;
    }
    for (; 0 < iVar8; iVar8 = iVar8 + -1) {
      local_88 = 0x30;
      iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
      if (iVar7 == 0) goto LAB_144ec7c07;
    }
    do {
      if ((longlong)uVar5 < 1) goto joined_r0x000144ec7bd8;
      local_88 = (int)acStack_70[uVar5 - 1];
      uVar5 = uVar5 - 1;
      iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    } while (iVar7 != 0);
  }
LAB_144ec7c07:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
joined_r0x000144ec7bd8:
  if (-1 < iVar3) goto LAB_144ec7c07;
  local_88 = 0x20;
  iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
  if (iVar7 == 0) goto LAB_144ec7c07;
  iVar3 = iVar3 + 1;
  goto joined_r0x000144ec7bd8;
}



// FUNCTION 144ec7c30 FUN_144ec7c30 body=1687 status=ok
// SIG undefined FUN_144ec7c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec7c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,int param_6,int param_7,uint param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_e8 [32];
  uint local_c8;
  int local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  undefined8 local_a0;
  char acStack_98 [23];
  char acStack_81 [24];
  char acStack_69 [25];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  iVar5 = 0;
  iVar2 = 0;
  local_ac = 0;
  iVar7 = 6;
  if (-1 < param_7) {
    iVar7 = param_7;
  }
  if (0.0 <= param_5) {
    if ((param_8 & 2) == 0) {
      local_b4 = 0;
      if ((param_8 & 4) != 0) {
        local_b4 = 0x20;
      }
    }
    else {
      local_b4 = 0x2b;
    }
  }
  else {
    local_b4 = 0x2d;
  }
  dVar13 = 1.0;
  if (param_9 == 2) {
    if (param_5 == 0.0) {
LAB_144ec7cf9:
      local_b8 = 0;
    }
    else if (0.0001 <= param_5) {
      if (iVar7 != 0) {
        if (0 < iVar7) {
          dVar12 = 1.0;
          iVar6 = iVar7;
          do {
            dVar12 = dVar12 * 10.0;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          if (dVar12 <= param_5) goto LAB_144ec7d3e;
        }
        goto LAB_144ec7cf9;
      }
      if (10.0 <= param_5) {
LAB_144ec7d3e:
        local_b8 = 1;
      }
      else {
        local_b8 = 0;
      }
    }
    else {
      local_b8 = 1;
    }
LAB_144ec7d56:
    dVar12 = param_5;
    if (param_5 != 0.0) {
      for (; local_ac = iVar5, dVar12 < 1.0; dVar12 = dVar12 * 10.0) {
        iVar5 = iVar5 + -1;
      }
      for (; 10.0 < dVar12; dVar12 = dVar12 / 10.0) {
        local_ac = local_ac + 1;
      }
    }
    if (param_9 == 2) {
      if (iVar7 == 0) {
        iVar7 = 1;
      }
      if (local_b8 == 0) {
        iVar7 = iVar7 + (-1 - local_ac);
        if (iVar7 < 0) goto LAB_144ec7dbb;
        goto LAB_144ec7def;
      }
      iVar7 = iVar7 + -1;
    }
    if (local_b8 == 1) {
      param_5 = dVar12;
    }
  }
  else {
    local_b8 = param_9;
    if (param_9 != 0) goto LAB_144ec7d56;
  }
LAB_144ec7def:
  if (param_5 < 0.0) {
    param_5 = -param_5;
  }
  if (param_5 < 4294967296.0) {
    dVar12 = 1.0;
    uVar10 = (ulonglong)param_5;
    iVar5 = iVar7;
    if (9 < iVar7) {
      iVar7 = 9;
      iVar5 = 9;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      dVar12 = dVar12 * 10.0;
    }
    uVar1 = (uint)dVar12;
    iVar7 = iVar5;
    if (0.5 <= dVar12 - (double)(int)uVar1) {
      uVar1 = uVar1 + 1;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      dVar13 = dVar13 * 10.0;
    }
    dVar13 = (param_5 - (double)(uVar10 & 0xffffffff)) * dVar13;
    uVar8 = (uint)dVar13;
    if (0.5 <= dVar13 - (double)(int)uVar8) {
      uVar8 = uVar8 + 1;
    }
    if (uVar1 <= uVar8) {
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar8 = uVar8 - uVar1;
    }
    lVar3 = 0;
    iVar7 = 0;
    do {
      iVar11 = iVar7;
      uVar9 = (uVar10 & 0xffffffff) / 10;
      iVar6 = (int)uVar9;
      iVar7 = iVar11 + 1;
      acStack_98[lVar3] = "0123456789"[(uint)((int)uVar10 + iVar6 * -10)];
      lVar3 = lVar3 + 1;
      if (iVar6 == 0) break;
      uVar10 = uVar9;
    } while (lVar3 < 0x14);
    if (iVar7 != 0x14) {
      iVar11 = iVar7;
    }
    local_a0 = (ulonglong)iVar11;
    if (0x13 < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    acStack_98[local_a0] = '\0';
    if (0 < iVar5) {
      lVar3 = 0;
      uVar10 = (ulonglong)uVar8;
      do {
        while (((param_9 == 2 && (lVar3 == 0)) && ((int)uVar10 == (int)(uVar10 / 10) * 10))) {
          iVar5 = iVar5 + -1;
          uVar10 = uVar10 / 10;
          if (iVar5 <= iVar2) goto LAB_144ec7f5e;
        }
        iVar2 = iVar2 + 1;
        acStack_81[lVar3 + 1] = "0123456789"[(uint)((int)uVar10 + (int)(uVar10 / 10) * -10)];
        lVar3 = lVar3 + 1;
        uVar10 = uVar10 / 10;
      } while (iVar2 < iVar5);
    }
LAB_144ec7f5e:
    iVar7 = 0x13;
    if (iVar2 != 0x14) {
      iVar7 = iVar2;
    }
    uVar10 = (ulonglong)iVar7;
    if (0x13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    acStack_81[uVar10 + 1] = '\0';
    if (local_b8 == 1) {
      iVar2 = local_ac;
      if (local_ac < 0) {
        iVar2 = -local_ac;
      }
      uVar4 = 0;
      uVar9 = uVar4;
      do {
        local_b0 = (int)uVar4 + 1;
        uVar4 = (ulonglong)local_b0;
        acStack_69[uVar9 + 1] = "0123456789"[iVar2 % 10];
        uVar9 = uVar9 + 1;
        if (iVar2 / 10 < 1) {
          if (local_b0 == 1) {
            acStack_69[2] = 0x30;
            local_b0 = 2;
          }
          goto LAB_144ec8004;
        }
        iVar2 = iVar2 / 10;
      } while ((longlong)uVar9 < 0x14);
    }
    else {
LAB_144ec8004:
      iVar2 = (((param_6 - (uint)(local_b4 != 0)) - (uint)(0 < iVar5)) - iVar11) - iVar5;
      if (local_b8 == 1) {
        iVar2 = iVar2 + (-2 - local_b0);
      }
      iVar6 = 0;
      if (-1 < iVar5 - iVar7) {
        iVar6 = iVar5 - iVar7;
      }
      iVar7 = 0;
      if (-1 < iVar2) {
        iVar7 = iVar2;
      }
      iVar2 = -iVar7;
      if ((param_8 & 1) == 0) {
        iVar2 = iVar7;
      }
      if (((param_8 & 0x10) == 0) || (iVar2 < 1)) {
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_c8 = 0x20;
          iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
          if (iVar7 == 0) goto LAB_144ec7dbb;
        }
      }
      else {
        if (local_b4 != 0) {
          local_c8 = local_b4;
          iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
          if (iVar7 == 0) goto LAB_144ec7dbb;
          iVar2 = iVar2 + -1;
          local_b4 = 0;
        }
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_c8 = 0x30;
          iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
          if (iVar7 == 0) goto LAB_144ec7dbb;
        }
      }
      uVar9 = local_a0;
      if (local_b4 != 0) {
        local_c8 = local_b4;
        iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
        uVar9 = local_a0;
        if (iVar7 == 0) goto LAB_144ec7dbb;
      }
      do {
        if ((longlong)uVar9 < 1) {
          local_a0 = uVar9;
          if ((iVar5 < 1) && ((param_8 & 8) == 0)) goto joined_r0x000144ec81cc;
          local_c8 = 0x2e;
          iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
          if (iVar7 != 0) goto joined_r0x000144ec8199;
          break;
        }
        local_a0 = uVar9 - 1;
        local_c8 = (uint)acStack_98[uVar9 - 1];
        iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
        uVar9 = local_a0;
      } while (iVar7 != 0);
    }
  }
LAB_144ec7dbb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
  while( true ) {
    local_c8 = (uint)acStack_81[uVar10];
    uVar10 = uVar10 - 1;
    iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    if (iVar7 == 0) break;
joined_r0x000144ec8199:
    if ((longlong)uVar10 < 1) goto joined_r0x000144ec81cc;
  }
  goto LAB_144ec7dbb;
joined_r0x000144ec81cc:
  if (iVar6 < 1) goto LAB_144ec81f7;
  local_c8 = 0x30;
  iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
  if (iVar7 == 0) goto LAB_144ec7dbb;
  iVar6 = iVar6 + -1;
  goto joined_r0x000144ec81cc;
LAB_144ec81f7:
  if (local_b8 == 1) {
    local_c8 = ~param_8 & 0x20 | 0x45;
    iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    if (iVar7 == 0) goto LAB_144ec7dbb;
    if (local_ac < 0) {
      local_c8 = 0x2d;
      iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    }
    else {
      local_c8 = 0x2b;
      iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    }
    if (iVar7 == 0) goto LAB_144ec7dbb;
    lVar3 = (longlong)(int)local_b0;
    if (0 < (int)local_b0) {
      do {
        local_c8 = (uint)acStack_69[lVar3];
        lVar3 = lVar3 + -1;
        iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
        if (iVar7 == 0) goto LAB_144ec7dbb;
      } while (0 < lVar3);
    }
  }
  for (; iVar2 < 0; iVar2 = iVar2 + 1) {
    local_c8 = 0x20;
    iVar7 = FUN_144ec82e0(param_1,param_2,param_3,param_4);
    if (iVar7 == 0) break;
  }
  goto LAB_144ec7dbb;
}



// FUNCTION 144ec82e0 FUN_144ec82e0 body=291 status=ok
// SIG undefined FUN_144ec82e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ec82e0(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ec82fb;
  if ((*param_1 != 0) || (param_2 != (longlong *)0x0)) {
    uVar1 = *param_4;
    if (*param_3 <= uVar1) {
      if ((param_2 == (longlong *)0x0) || (*param_3 != uVar1)) goto LAB_144ec83ca;
      if (uVar1 < 0x7ffffc00) {
        uVar1 = uVar1 + 0x400;
        *param_4 = uVar1;
        if (*param_2 == 0) {
          _Dst = (void *)FUN_144ea64e0(uVar1,"crypto\\bio\\b_print.c",0x34e);
          *param_2 = (longlong)_Dst;
          if (_Dst != (void *)0x0) {
            if (*param_3 != 0) {
              if ((void *)*param_1 == (void *)0x0) {
                return 0;
              }
              memcpy(_Dst,(void *)*param_1,*param_3);
            }
            *param_1 = 0;
LAB_144ec83ca:
            if (*param_3 < *param_4) {
              lVar2 = *param_1;
              if (lVar2 == 0) {
                lVar2 = *param_2;
              }
              *(undefined1 *)(*param_3 + lVar2) = param_5;
              *param_3 = *param_3 + 1;
            }
            return 1;
          }
          FUN_144ba24f0(0x20,0x96,0x41,"crypto\\bio\\b_print.c",0x34f,uVar3);
        }
        else {
          lVar2 = FUN_144ea6570(*param_2,uVar1,"crypto\\bio\\b_print.c",0x35a);
          if (lVar2 != 0) {
            *param_2 = lVar2;
            goto LAB_144ec83ca;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144ec8410 FUN_144ec8410 body=1597 status=ok
// SIG undefined FUN_144ec8410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ec8410(undefined8 param_1,longlong param_2,ulonglong *param_3,longlong *param_4,uint *param_5
             ,char *param_6,ulonglong *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong in_stack_ffffffffffffff88;
  undefined4 uVar10;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  iVar3 = 0;
  iVar9 = 0;
  local_48 = 0;
  uVar8 = 0;
  local_40 = 0;
  local_44 = 0xffffffff;
  uVar4 = local_44;
  uVar7 = local_48;
LAB_144ec847a:
  cVar6 = *param_6;
  param_6 = param_6 + 1;
LAB_144ec8480:
  do {
    if ((cVar6 == '\0') || ((param_2 == 0 && (*param_3 <= local_40)))) goto LAB_144ec850a;
    uVar10 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
    switch(iVar9) {
    case 0:
      if (cVar6 == '%') {
        iVar9 = 1;
      }
      else {
        in_stack_ffffffffffffff88 = CONCAT44(uVar10,(int)cVar6);
        iVar2 = FUN_144ec82e0(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88);
        uVar4 = local_44;
        uVar7 = local_48;
        if (iVar2 == 0) {
          return 0;
        }
      }
      cVar6 = *param_6;
      param_6 = param_6 + 1;
    default:
      if (iVar9 == 7) {
LAB_144ec850a:
        if ((param_2 == 0) &&
           (uVar4 = (uint)(*param_3 - 1 < local_40), *param_5 = uVar4, uVar4 != 0)) {
          local_40 = *param_3 - 1;
        }
        iVar3 = FUN_144ec82e0(param_1,param_2,&local_40,param_3,
                              in_stack_ffffffffffffff88 & 0xffffffff00000000);
        if (iVar3 == 0) {
          return 0;
        }
        *param_4 = local_40 - 1;
        return 1;
      }
      break;
    case 1:
      if (cVar6 == ' ') {
        uVar8 = uVar8 | 4;
        goto LAB_144ec847a;
      }
      if (cVar6 == '#') {
        uVar8 = uVar8 | 8;
        goto LAB_144ec847a;
      }
      if (cVar6 == '+') {
        uVar8 = uVar8 | 2;
        goto LAB_144ec847a;
      }
      if (cVar6 == '-') {
        uVar8 = uVar8 | 1;
        goto LAB_144ec847a;
      }
      if (cVar6 == '0') {
        uVar8 = uVar8 | 0x10;
        goto LAB_144ec847a;
      }
      iVar9 = 2;
      break;
    case 2:
      iVar2 = FUN_144ecfdd0((int)cVar6,4);
      if (iVar2 != 0) {
        local_48 = (int)cVar6 + (local_48 * 5 + -0x18) * 2;
        uVar4 = local_44;
        uVar7 = local_48;
        goto LAB_144ec847a;
      }
      iVar9 = 3;
      uVar4 = local_44;
      uVar7 = local_48;
      if (cVar6 == '*') {
        local_48 = (uint)*param_7;
        param_7 = param_7 + 1;
        uVar7 = local_48;
        goto LAB_144ec847a;
      }
      break;
    case 3:
      if (cVar6 == '.') {
        iVar9 = 4;
        goto LAB_144ec847a;
      }
      iVar9 = 5;
      break;
    case 4:
      iVar2 = FUN_144ecfdd0((int)cVar6,4);
      if (iVar2 == 0) goto LAB_144ec86ca;
      uVar4 = 0;
      if (-1 < (int)local_44) {
        uVar4 = local_44;
      }
      local_44 = (int)cVar6 + uVar4 * 10 + -0x30;
      uVar4 = local_44;
      uVar7 = local_48;
      goto LAB_144ec847a;
    case 5:
      switch(cVar6) {
      case 'L':
        cVar6 = *param_6;
        iVar3 = 3;
        param_6 = param_6 + 1;
        iVar9 = 6;
        break;
      case 'h':
        cVar6 = *param_6;
        iVar3 = 1;
        param_6 = param_6 + 1;
        iVar9 = 6;
        break;
      case 'j':
      case 'q':
        cVar6 = *param_6;
        iVar3 = 4;
        param_6 = param_6 + 1;
        iVar9 = 6;
        break;
      case 'l':
        if (*param_6 == 'l') {
          cVar6 = param_6[1];
          iVar3 = 4;
          param_6 = param_6 + 2;
          iVar9 = 6;
        }
        else {
          cVar6 = *param_6;
          iVar3 = 2;
          param_6 = param_6 + 1;
          iVar9 = 6;
        }
        break;
      case 'z':
        cVar6 = *param_6;
        iVar3 = 5;
        param_6 = param_6 + 1;
      default:
        iVar9 = 6;
      }
      break;
    case 6:
      uVar5 = (uint)cVar6;
      switch(uVar5) {
      case 0x25:
        goto LAB_144ec8981;
      default:
        goto switchD_144ec87cc_caseD_26;
      case 0x45:
        uVar8 = uVar8 | 0x20;
      case 0x65:
        in_stack_ffffffffffffff88 = *param_7;
        param_7 = param_7 + 1;
        iVar3 = FUN_144ec7c30(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar7,
                              uVar4,uVar8,1);
        break;
      case 0x47:
        uVar8 = uVar8 | 0x20;
      case 0x67:
        in_stack_ffffffffffffff88 = *param_7;
        param_7 = param_7 + 1;
        iVar3 = FUN_144ec7c30(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar7,
                              uVar4,uVar8,2);
        break;
      case 0x58:
        uVar8 = uVar8 | 0x20;
      case 0x6f:
      case 0x75:
      case 0x78:
        uVar8 = uVar8 | 0x40;
        if (iVar3 == 1) {
          in_stack_ffffffffffffff88 = (ulonglong)(ushort)*param_7;
        }
        else if (iVar3 == 2) {
          in_stack_ffffffffffffff88 = (ulonglong)(uint)*param_7;
        }
        else if ((iVar3 == 4) || (iVar3 == 5)) {
          in_stack_ffffffffffffff88 = *param_7;
        }
        else {
          in_stack_ffffffffffffff88 = (ulonglong)(uint)*param_7;
        }
        if (cVar6 == 'o') {
          uVar10 = 8;
        }
        else {
          uVar10 = 0x10;
          if (cVar6 == 'u') {
            uVar10 = 10;
          }
        }
        goto LAB_144ec881f;
      case 99:
        uVar5 = (uint)*param_7;
        param_7 = param_7 + 1;
LAB_144ec8981:
        in_stack_ffffffffffffff88 = CONCAT44(uVar10,uVar5);
        iVar3 = FUN_144ec82e0(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88);
        break;
      case 100:
      case 0x69:
        if (iVar3 == 1) {
          in_stack_ffffffffffffff88 = (ulonglong)(short)(ushort)*param_7;
        }
        else if (iVar3 == 2) {
          in_stack_ffffffffffffff88 = (ulonglong)(int)(uint)*param_7;
        }
        else if ((iVar3 == 4) || (iVar3 == 5)) {
          in_stack_ffffffffffffff88 = *param_7;
        }
        else {
          in_stack_ffffffffffffff88 = (ulonglong)(int)(uint)*param_7;
        }
        uVar10 = 10;
        goto LAB_144ec881f;
      case 0x66:
        in_stack_ffffffffffffff88 = *param_7;
        param_7 = param_7 + 1;
        iVar3 = FUN_144ec7c30(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar7,
                              uVar4,uVar8,0);
        break;
      case 0x6e:
        puVar1 = (undefined4 *)*param_7;
        param_7 = param_7 + 1;
        *puVar1 = (undefined4)local_40;
        goto switchD_144ec87cc_caseD_26;
      case 0x70:
        in_stack_ffffffffffffff88 = *param_7;
        uVar8 = uVar8 | 8;
        uVar10 = 0x10;
LAB_144ec881f:
        param_7 = param_7 + 1;
        iVar3 = FUN_144ec7960(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar10,
                              uVar7,uVar4,uVar8);
        break;
      case 0x73:
        in_stack_ffffffffffffff88 = *param_7;
        param_7 = param_7 + 1;
        if (((int)uVar4 < 0) && (uVar4 = 0x7fffffff, param_2 == 0)) {
          uVar4 = (uint)*param_3;
        }
        iVar3 = FUN_144ec77e0(param_1,param_2,&local_40,param_3,in_stack_ffffffffffffff88,uVar8,
                              uVar7,uVar4);
        break;
      case 0x77:
        param_6 = param_6 + 1;
        goto switchD_144ec87cc_caseD_26;
      }
      if (iVar3 == 0) {
        return 0;
      }
switchD_144ec87cc_caseD_26:
      cVar6 = *param_6;
      param_6 = param_6 + 1;
      local_48 = 0;
      iVar9 = 0;
      iVar3 = 0;
      uVar8 = 0;
      local_44 = 0xffffffff;
      uVar4 = 0xffffffff;
      uVar7 = 0;
    }
  } while( true );
LAB_144ec86ca:
  iVar9 = 5;
  uVar4 = local_44;
  uVar7 = local_48;
  if (cVar6 == '*') goto code_r0x000144ec86da;
  goto LAB_144ec8480;
code_r0x000144ec86da:
  local_44 = (uint)*param_7;
  param_7 = param_7 + 1;
  uVar4 = local_44;
  goto LAB_144ec847a;
}



// FUNCTION 144ec8b50 FUN_144ec8b50 body=655 status=ok
// SIG undefined FUN_144ec8b50(void)

char * FUN_144ec8b50(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "ok";
  case 1:
    return "unspecified certificate verification error";
  case 2:
    return "unable to get issuer certificate";
  case 3:
    return "unable to get certificate CRL";
  case 4:
    return "unable to decrypt certificate\'s signature";
  case 5:
    return "unable to decrypt CRL\'s signature";
  case 6:
    return "unable to decode issuer public key";
  case 7:
    return "certificate signature failure";
  case 8:
    return "CRL signature failure";
  case 9:
    return "certificate is not yet valid";
  case 10:
    return "certificate has expired";
  case 0xb:
    return "CRL is not yet valid";
  case 0xc:
    return "CRL has expired";
  case 0xd:
    return "format error in certificate\'s notBefore field";
  case 0xe:
    return "format error in certificate\'s notAfter field";
  case 0xf:
    return "format error in CRL\'s lastUpdate field";
  case 0x10:
    return "format error in CRL\'s nextUpdate field";
  case 0x11:
    return "out of memory";
  case 0x12:
    return "self signed certificate";
  case 0x13:
    return "self signed certificate in certificate chain";
  case 0x14:
    return "unable to get local issuer certificate";
  case 0x15:
    return "unable to verify the first certificate";
  case 0x16:
    return "certificate chain too long";
  case 0x17:
    return "certificate revoked";
  case 0x18:
    return "invalid CA certificate";
  case 0x19:
    return "path length constraint exceeded";
  case 0x1a:
    return "unsupported certificate purpose";
  case 0x1b:
    return "certificate not trusted";
  case 0x1c:
    return "certificate rejected";
  case 0x1d:
    return "subject issuer mismatch";
  case 0x1e:
    return "authority and subject key identifier mismatch";
  case 0x1f:
    return "authority and issuer serial number mismatch";
  case 0x20:
    return "key usage does not include certificate signing";
  case 0x21:
    return "unable to get CRL issuer certificate";
  case 0x22:
    return "unhandled critical extension";
  case 0x23:
    return "key usage does not include CRL signing";
  case 0x24:
    return "unhandled critical CRL extension";
  case 0x25:
    return "invalid non-CA certificate (has CA markings)";
  case 0x26:
    return "proxy path length constraint exceeded";
  case 0x27:
    return "key usage does not include digital signature";
  case 0x28:
    return "proxy certificates not allowed, please set the appropriate flag";
  case 0x29:
    return "invalid or inconsistent certificate extension";
  case 0x2a:
    return "invalid or inconsistent certificate policy extension";
  case 0x2b:
    return "no explicit policy";
  case 0x2c:
    return "Different CRL scope";
  case 0x2d:
    return "Unsupported extension feature";
  case 0x2e:
    return "RFC 3779 resource not subset of parent\'s resources";
  case 0x2f:
    return "permitted subtree violation";
  case 0x30:
    return "excluded subtree violation";
  case 0x31:
    return "name constraints minimum and maximum not supported";
  case 0x32:
    return "application verification failure";
  case 0x33:
    return "unsupported name constraint type";
  case 0x34:
    return "unsupported or invalid name constraint syntax";
  case 0x35:
    return "unsupported or invalid name syntax";
  case 0x36:
    return "CRL path validation error";
  case 0x37:
    return "Path Loop";
  case 0x38:
    return "Suite B: certificate version invalid";
  case 0x39:
    return "Suite B: invalid public key algorithm";
  case 0x3a:
    return "Suite B: invalid ECC curve";
  case 0x3b:
    return "Suite B: invalid signature algorithm";
  case 0x3c:
    return "Suite B: curve not allowed for this LOS";
  case 0x3d:
    return "Suite B: cannot sign P-384 with P-256";
  case 0x3e:
    return "Hostname mismatch";
  case 0x3f:
    return "Email address mismatch";
  case 0x40:
    return "IP address mismatch";
  case 0x41:
    return "No matching DANE TLSA records";
  case 0x42:
    return "EE certificate key too weak";
  case 0x43:
    return "CA certificate key too weak";
  case 0x44:
    return "CA signature digest algorithm too weak";
  case 0x45:
    return "Invalid certificate verification context";
  case 0x46:
    return "Issuer certificate lookup error";
  case 0x47:
    return "Certificate Transparency required, but no valid SCTs found";
  case 0x48:
    return "proxy subject name violation";
  case 0x49:
    return "OCSP verification needed";
  case 0x4a:
    return "OCSP verification failed";
  case 0x4b:
    return "OCSP unknown cert";
  default:
    return "unknown certificate verification error";
  case 0x4f:
    return "Certificate public key has explicit ECC parameters";
  }
}



// FUNCTION 144ec8f20 FUN_144ec8f20 body=84 status=ok
// SIG undefined FUN_144ec8f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec8f20(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x101) {
    return 1;
  }
  iVar1 = FUN_14526ef00(param_2,(longlong)param_3,1);
  if ((iVar1 != 0) && (iVar1 = FUN_14526eb60(param_2,3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ec8f80 FUN_144ec8f80 body=25 status=ok
// SIG undefined FUN_144ec8f80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec8f80(undefined8 param_1)

{
  FUN_144eb4c00(param_1,0x16);
  return;
}



// FUNCTION 144ec8fa0 FUN_144ec8fa0 body=22 status=ok
// SIG undefined FUN_144ec8fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec8fa0(void)

{
  FUN_144b97970();
  return;
}



// FUNCTION 144ec8fc0 FUN_144ec8fc0 body=103 status=ok
// SIG undefined FUN_144ec8fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec8fc0(void)

{
  qsort(&DAT_14c70b2b0,5,0x50,(_PtFuncCompare *)&LAB_144ecba80);
  qsort(&DAT_14c70b440,0xa4,0x50,(_PtFuncCompare *)&LAB_144ecba80);
                    /* WARNING: Could not recover jumptable at 0x000144ec9020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(&DAT_14c70e780,2,0x50,(_PtFuncCompare *)&LAB_144ecba80);
  return;
}



// FUNCTION 144ec9030 FUN_144ec9030 body=198 status=ok
// SIG undefined FUN_144ec9030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ec9030(longlong param_1,int param_2,undefined1 *param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  __time64_t _Var3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if (param_4 < 4) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x5d0) >> 5;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x5d0) >> 6;
  }
  if ((uVar1 & 1) == 0) {
    uVar5 = param_4 & 0xffffffff;
    puVar4 = param_3;
  }
  else {
    _Var3 = _time64((__time64_t *)0x0);
    uVar5 = (ulonglong)((int)param_4 - 4);
    *param_3 = (char)((ulonglong)_Var3 >> 0x18);
    param_3[1] = (char)((ulonglong)_Var3 >> 0x10);
    param_3[2] = (char)((ulonglong)_Var3 >> 8);
    param_3[3] = (char)_Var3;
    puVar4 = param_3 + 4;
  }
  iVar2 = FUN_144bac850(puVar4,uVar5);
  if (0 < iVar2) {
    if (param_4 < 9) {
      return 0;
    }
    if (param_5 == 1) {
      *(undefined8 *)(param_3 + (param_4 - 8)) = 0x14452474e574f44;
      return iVar2;
    }
    if (param_5 == 2) {
      *(char (*) [8])(param_3 + (param_4 - 8)) = (char  [8])0x4452474e574f44;
    }
  }
  return iVar2;
}



// FUNCTION 144ec9100 FUN_144ec9100 body=573 status=ok
// SIG undefined FUN_144ec9100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec9100(longlong param_1,void *param_2,size_t param_3,int param_4)

{
  undefined1 *_Dst;
  size_t _Size;
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if ((uVar5 & 0x1c8) == 0) {
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(longlong *)(param_1 + 0x508) + 0x50,param_2,param_3,
                       *(longlong *)(param_1 + 0x508) + 8);
    uVar4 = 0;
    if (iVar1 == 0) goto LAB_144ec92c7;
  }
  else {
    _Size = *(size_t *)(*(longlong *)(param_1 + 0xa8) + 0x2d0);
    uVar5 = uVar5 & 8;
    if (uVar5 != 0) {
      param_3 = _Size;
    }
    lVar3 = _Size + 4 + param_3;
    puVar2 = (undefined1 *)FUN_144ea64e0(lVar3,"ssl\\s3_lib.c",0x1215);
    uVar4 = 0;
    if (puVar2 == (undefined1 *)0x0) goto LAB_144ec92c7;
    puVar2[1] = (char)param_3;
    _Dst = puVar2 + 2;
    *puVar2 = (char)(param_3 >> 8);
    if (uVar5 == 0) {
      memcpy(_Dst,param_2,param_3);
    }
    else {
      memset(_Dst,0,param_3);
    }
    puVar2[param_3 + 3] = (char)_Size;
    _Dst[param_3] = (char)(_Size >> 8);
    memcpy(_Dst + param_3 + 2,*(void **)(*(longlong *)(param_1 + 0xa8) + 0x2c8),_Size);
    FUN_144ea66f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),_Size,"ssl\\s3_lib.c",
                  0x1222);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = 0;
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x18))
                      (param_1,*(longlong *)(param_1 + 0x508) + 0x50,puVar2,lVar3,
                       *(longlong *)(param_1 + 0x508) + 8);
    if (iVar1 == 0) {
      FUN_144ea66f0(puVar2,lVar3,"ssl\\s3_lib.c",0x1228);
      uVar4 = 0;
      goto LAB_144ec92c7;
    }
    FUN_144ea66f0(puVar2,lVar3,"ssl\\s3_lib.c",0x122c);
  }
  uVar4 = 1;
LAB_144ec92c7:
  if (param_2 != (void *)0x0) {
    if (param_4 == 0) {
      FUN_14259f0c0(param_2,param_3);
    }
    else {
      FUN_144ea66f0(param_2,param_3,"ssl\\s3_lib.c",0x123e);
    }
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0;
  }
  return uVar4;
}



// FUNCTION 144ec9340 FUN_144ec9340 body=125 status=ok
// SIG undefined FUN_144ec9340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec9340(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_144ed1530(param_1,0);
  if (lVar2 != 0) {
    iVar1 = FUN_145282d00(lVar2);
    if (0 < iVar1) {
      iVar1 = FUN_145282d80(lVar2,local_res8);
      if (iVar1 < 1) {
        FUN_144ba6e60(local_res8[0]);
        local_res8[0] = 0;
      }
    }
  }
  FUN_144ed16b0(lVar2);
  return local_res8[0];
}



// FUNCTION 144ec93c0 FUN_144ec93c0 body=576 status=ok
// SIG undefined FUN_144ec93c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ec93c0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  
  uVar8 = 1;
  uVar6 = 0;
  local_res10 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_144eafc90(param_1,0x50,0x24e,0x44,"ssl\\s3_lib.c",0x1000012be);
    return 0;
  }
  uVar3 = FUN_144ed1530(param_2,0);
  iVar1 = FUN_144ed2580(uVar3);
  if (iVar1 < 1) {
LAB_144ec9562:
    uVar5 = CONCAT44(uVar8,0x12c8);
    uVar4 = uVar6;
LAB_144ec9571:
    uVar7 = 0x44;
  }
  else {
    iVar1 = FUN_144ed2610(uVar3,param_3);
    if (iVar1 < 1) goto LAB_144ec9562;
    iVar1 = FUN_144ed2820(uVar3,0,&local_res10);
    if (iVar1 < 1) goto LAB_144ec9562;
    uVar4 = FUN_144ea64e0(local_res10,"ssl\\s3_lib.c",0x12cc);
    if (uVar4 != 0) {
      iVar1 = FUN_144ed2820(uVar3,uVar4,&local_res10);
      if (0 < iVar1) {
        if (param_4 == 0) {
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = uVar4;
          uVar4 = 0;
          uVar6 = 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = local_res10;
        }
        else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                 (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
          if (*(int *)(param_1 + 200) == 0) {
            uVar5 = FUN_144ea4500(param_1);
            iVar1 = FUN_144eb97a0(param_1,uVar5,0,0,0,param_1 + 0x134);
            if (iVar1 == 0) goto LAB_144ec958f;
          }
          iVar1 = FUN_144eb9af0(param_1,uVar4,local_res10);
          if (iVar1 != 0) {
            uVar6 = 1;
          }
        }
        else {
          uVar2 = FUN_144ec9100(param_1,uVar4,local_res10,0);
          uVar6 = (ulonglong)uVar2;
        }
        goto LAB_144ec958f;
      }
      uVar5 = CONCAT44(uVar8,0x12d5);
      goto LAB_144ec9571;
    }
    uVar5 = CONCAT44(uVar8,0x12cf);
    uVar7 = 0x41;
  }
  FUN_144eafc90(param_1,0x50,0x24e,uVar7,"ssl\\s3_lib.c",uVar5);
LAB_144ec958f:
  FUN_144ea66f0(uVar4,local_res10,"ssl\\s3_lib.c",0x12f4);
  FUN_144ed16b0(uVar3);
  return uVar6;
}



// FUNCTION 144ec9600 FUN_144ec9600 body=94 status=ok
// SIG undefined FUN_144ec9600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec9600(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_144ba6d80();
  iVar1 = FUN_144ba6ba0(uVar2,param_1);
  if (iVar1 < 1) {
    FUN_144ba6e60(uVar2);
    return 0;
  }
  return uVar2;
}



// FUNCTION 144ec9660 FUN_144ec9660 body=97 status=ok
// SIG undefined FUN_144ec9660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec9660(undefined4 param_1)

{
  longlong lVar1;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ec966a;
  local_40 = param_1;
  lVar1 = FUN_144b9b110(local_58,&DAT_14c70b2b0,5);
  if (lVar1 == 0) {
    lVar1 = FUN_144b9b110(local_58,&DAT_14c70b440,0xa4);
    if (lVar1 == 0) {
      FUN_144b9b110(local_58,&DAT_14c70e780,2);
    }
  }
  return;
}



// FUNCTION 144ec96d0 FUN_144ec96d0 body=209 status=ok
// SIG undefined FUN_144ec96d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec96d0(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *local_48 [3];
  ulonglong local_30 [4];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ec96e0;
  local_30[3] = DAT_14c707940 ^ (ulonglong)local_48;
  local_30[0] = 5;
  local_48[0] = &DAT_14c70b2b0;
  local_30[1] = 0xa4;
  local_48[1] = &DAT_14c70b440;
  uVar4 = 0;
  local_30[2] = 2;
  local_48[2] = &DAT_14c70e780;
  do {
    uVar6 = 0;
    lVar5 = *(longlong *)((longlong)local_48 + uVar4);
    if (*(ulonglong *)((longlong)local_30 + uVar4) != 0) {
      do {
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          pcVar3 = param_1;
          do {
            cVar1 = *pcVar3;
            cVar2 = pcVar3[*(longlong *)(lVar5 + 0x10) - (longlong)param_1];
            if (cVar1 != cVar2) break;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) goto LAB_144ec978f;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar6 < *(ulonglong *)((longlong)local_30 + uVar4));
    }
    uVar4 = uVar4 + 8;
  } while (uVar4 < 0x18);
LAB_144ec978f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30[3] ^ (ulonglong)local_48);
}



// FUNCTION 144ec97b0 FUN_144ec97b0 body=117 status=ok
// SIG undefined FUN_144ec97b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec97b0(byte *param_1)

{
  longlong lVar1;
  undefined1 local_58 [24];
  uint local_40;
  undefined8 uStack_8;
  
  uStack_8 = 0x144ec97ba;
  local_40 = (*param_1 | 0x30000) << 8 | (uint)param_1[1];
  lVar1 = FUN_144b9b110(local_58,&DAT_14c70b2b0,5);
  if (lVar1 == 0) {
    lVar1 = FUN_144b9b110(local_58,&DAT_14c70b440,0xa4);
    if (lVar1 == 0) {
      FUN_144b9b110(local_58,&DAT_14c70e780,2);
    }
  }
  return;
}



// FUNCTION 144ec9830 FUN_144ec9830 body=104 status=ok
// SIG undefined FUN_144ec9830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec9830(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x18) & 0xff000000) != 0x3000000) {
    *param_3 = 0;
    return 1;
  }
  uVar1 = FUN_14526ef00(param_2,*(uint *)(param_1 + 0x18) & 0xffff,2);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = 2;
  return 1;
}



// FUNCTION 144ec98a0 FUN_144ec98a0 body=389 status=ok
// SIG undefined FUN_144ec98a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec98a0(int *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x122) + 0x188);
  if (lVar2 != 0) {
    uVar4 = FUN_14526ef90(param_2,lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 400));
    return uVar4;
  }
  FUN_144ebb1d0(local_res8,param_1,0x5000e);
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x1c);
  if ((*param_1 < 0x301) || ((uVar1 & 0x10) == 0)) {
    uVar4 = 1;
    if (((((*param_1 == 0x300) && ((uVar1 & 2) != 0)) &&
         ((iVar3 = FUN_14526ef00(param_2,5,1), iVar3 == 0 ||
          (iVar3 = FUN_14526ef00(param_2,6,1), iVar3 == 0)))) ||
        (((local_res8[0] & 1) == 0 && (iVar3 = FUN_14526ef00(param_2,1,1), iVar3 == 0)))) ||
       ((((local_res8[0] & 2) == 0 && (iVar3 = FUN_14526ef00(param_2,2,1), iVar3 == 0)) ||
        ((0x300 < *param_1 &&
         (((local_res8[0] & 8) == 0 && (iVar3 = FUN_14526ef00(param_2,0x40,1), iVar3 == 0)))))))) {
      return 0;
    }
  }
  else {
    uVar4 = 1;
    iVar3 = FUN_14526ef00(param_2,0x16,1);
    if (((iVar3 == 0) || (iVar3 = FUN_14526ef00(param_2,0xee,1), iVar3 == 0)) ||
       (iVar3 = FUN_14526ef00(param_2,0xef,1), iVar3 == 0)) {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 144ec9a80 FUN_144ec9a80 body=200 status=ok
// SIG undefined FUN_144ec9a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ec9a80(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) == 0) {
    return 0;
  }
  iVar2 = FUN_144eb21e0(param_1 + 0x830);
  if ((iVar2 == 0) && (iVar2 = FUN_144eb2220(param_1 + 0x830), iVar2 == 0)) {
    if ((param_2 == 0) && (iVar2 = FUN_144eafbc0(param_1), iVar2 != 0)) {
      return 0;
    }
    FUN_144eafc80(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x104) = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x108);
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  return 0;
}



// FUNCTION 144ec9b50 FUN_144ec9b50 body=1040 status=ok
// SIG undefined FUN_144ec9b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ec9b50(int *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint local_res8;
  longlong local_res20;
  longlong local_48;
  
  uVar14 = 0;
  local_res8 = 0;
  lVar5 = 0;
  lVar3 = FUN_144bab040();
  local_48 = 0;
  lVar4 = param_2;
  local_res20 = param_3;
  if (((((*(uint *)(*(longlong *)(param_1 + 0x122) + 0x1c) & 0x30000) == 0) &&
       (lVar4 = param_3, local_res20 = param_2, ((uint)param_1[0x173] >> 0x16 & 1) != 0)) &&
      (lVar4 = param_2, local_res20 = param_3, ((uint)param_1[0x173] >> 0x15 & 1) != 0)) &&
     ((iVar13 = FUN_144babbf0(param_2), local_res20 = param_3, 0 < iVar13 &&
      (lVar8 = FUN_144babc00(param_2), local_res20 = param_3, *(int *)(lVar8 + 0x24) == 0x80000))))
  {
    iVar12 = FUN_144babbf0(param_3);
    iVar13 = 0;
    local_res20 = param_3;
    if (0 < iVar12) {
      do {
        lVar8 = FUN_144babc00(param_3);
        if (*(int *)(lVar8 + 0x24) == 0x80000) {
          local_48 = FUN_144babce0(0);
          if (local_48 != 0) {
            FUN_144bac1c0(local_48,lVar8);
            while (iVar13 = iVar13 + 1, iVar13 < iVar12) {
              lVar4 = FUN_144babc00(param_3,iVar13);
              if (*(int *)(lVar4 + 0x24) == 0x80000) {
                FUN_144bac1c0(local_48,lVar4);
              }
            }
            iVar13 = 0;
            do {
              lVar4 = FUN_144babc00(param_3);
              if (*(int *)(lVar4 + 0x24) != 0x80000) {
                FUN_144bac1c0(local_48);
              }
              iVar13 = iVar13 + 1;
              lVar4 = param_2;
              local_res20 = local_48;
            } while (iVar13 < iVar12);
          }
          break;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar12);
    }
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar13 = **(int **)(param_1 + 2), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
    bVar15 = false;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      iVar13 = 0;
      uVar11 = 0;
      lVar8 = 0;
      do {
        if (((uVar11 < 9) && (*(longlong *)(lVar8 + 0x20 + *(longlong *)(param_1 + 0x122)) != 0)) &&
           (*(longlong *)(lVar8 + 0x28 + *(longlong *)(param_1 + 0x122)) != 0)) break;
        iVar13 = iVar13 + 1;
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x28;
      } while (lVar8 < 0x168);
      bVar15 = iVar13 == 9;
    }
  }
  else {
    FUN_144ebbc90(param_1);
    FUN_144b9b930(param_1);
    bVar15 = false;
  }
  iVar12 = 0;
  iVar13 = FUN_144babbf0(local_res20);
  lVar8 = lVar5;
  if (0 < iVar13) {
    do {
      lVar5 = FUN_144babc00(local_res20,iVar12);
      uVar9 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8;
      if ((uVar9 != 0) ||
         ((*(int *)(lVar5 + 0x2c) <= *param_1 && (*param_1 <= *(int *)(lVar5 + 0x30))))) {
        if (uVar9 == 0) {
LAB_144ec9def:
          iVar13 = **(int **)(param_1 + 2);
          if ((0x303 < iVar13) && (iVar13 != 0x10000)) goto LAB_144ec9e88;
LAB_144ec9e04:
          uVar9 = *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x334);
          uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x338);
          if ((*(byte *)(param_1 + 0x209) & 0x20) != 0) {
            uVar9 = uVar9 | 0x20;
            uVar10 = uVar10 | 0x40;
          }
          uVar14 = *(uint *)(lVar5 + 0x1c);
          local_res8 = *(uint *)(lVar5 + 0x20);
          if (((uVar14 & 0x1c8) == 0) || (*(longlong *)(param_1 + 0x160) != 0)) {
            if (((uVar14 & uVar9) == 0) || ((local_res8 & uVar10) == 0)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((uVar14 & 4) == 0) {
              if (bVar1) goto LAB_144ec9e88;
            }
            else if ((bVar1) &&
                    (iVar13 = FUN_144eba860(param_1,*(undefined4 *)(lVar5 + 0x18)), iVar13 != 0)) {
LAB_144ec9e88:
              iVar13 = FUN_144bac1a0(lVar4,lVar5);
              if ((-1 < iVar13) &&
                 (iVar2 = FUN_144b9dff0(param_1,0x10002,*(undefined4 *)(lVar5 + 0x44),0,lVar5),
                 iVar2 != 0)) {
                if ((((uVar14 & 4) == 0) || ((local_res8 & 8) == 0)) ||
                   (*(char *)(*(longlong *)(param_1 + 0x2a) + 0x404) == '\0')) {
                  lVar5 = FUN_144babc00(lVar4,iVar13);
                  if ((!bVar15) ||
                     (lVar6 = FUN_144ea44e0(*(undefined4 *)(lVar5 + 0x40)), lVar6 == lVar3)) break;
                  if (lVar8 == 0) {
                    lVar8 = lVar5;
                  }
                }
                else if (lVar8 == 0) {
                  lVar8 = FUN_144babc00(lVar4,iVar13);
                }
              }
            }
          }
        }
        else {
          iVar13 = *param_1;
          iVar2 = *(int *)(lVar5 + 0x34);
          iVar7 = iVar13;
          if (iVar13 == 0x100) {
            iVar7 = 0xff00;
          }
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          if (iVar7 <= iVar2) {
            iVar2 = *(int *)(lVar5 + 0x38);
            if (iVar13 == 0x100) {
              iVar13 = 0xff00;
            }
            if (iVar2 == 0x100) {
              iVar2 = 0xff00;
            }
            if (iVar2 <= iVar13) {
              if (uVar9 == 0) goto LAB_144ec9def;
              goto LAB_144ec9e04;
            }
          }
        }
      }
      lVar5 = lVar8;
      iVar12 = iVar12 + 1;
      iVar13 = FUN_144babbf0(local_res20);
      lVar8 = lVar5;
    } while (iVar12 < iVar13);
  }
  FUN_144babdb0(local_48);
  return lVar5;
}



// FUNCTION 144ec9f60 FUN_144ec9f60 body=98 status=ok
// SIG undefined FUN_144ec9f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ec9f60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ea6670(0x410,"ssl\\s3_lib.c",0xce0);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0xa8) = lVar2;
    iVar1 = FUN_144eae3f0(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



// FUNCTION 144ec9fd0 FUN_144ec9fd0 body=439 status=ok
// SIG undefined FUN_144ec9fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ec9fd0(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_14527d7b0();
    FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408) = 0;
    FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250),"ssl\\s3_lib.c",0xcff);
    FUN_144babe00(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),FUN_144eabc40);
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\s3_lib.c",0xd01);
    FUN_144ea66f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0),"ssl\\s3_lib.c",0xd02);
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8),"ssl\\s3_lib.c",0xd03);
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0),"ssl\\s3_lib.c",0xd04);
    FUN_14527dcf0(param_1);
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),"ssl\\s3_lib.c",0xd06);
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),"ssl\\s3_lib.c",0xd07);
    FUN_144eae740(param_1);
    FUN_144ea66f0(*(undefined8 *)(param_1 + 0xa8),0x410,"ssl\\s3_lib.c",0xd0c);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 144eca190 FUN_144eca190 body=31 status=ok
// SIG undefined FUN_144eca190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eca190(void)

{
  FUN_144ecbb80();
  return;
}



// FUNCTION 144eca1b0 FUN_144eca1b0 body=32 status=ok
// SIG undefined FUN_144eca1b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eca1b0(void)

{
  FUN_144ecbb80();
  return;
}



// FUNCTION 144eca1d0 FUN_144eca1d0 body=122 status=ok
// SIG undefined FUN_144eca1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eca1d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x144eca1ea;
  SetLastError(0);
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) != 0) {
    FUN_144ec9a80(param_1,0);
  }
  (**(code **)(*(longlong *)(param_1 + 8) + 0x70))(param_1,0x17,param_2,param_3,param_4,uVar1);
  return;
}



// FUNCTION 144eca250 FUN_144eca250 body=231 status=ok
// SIG undefined FUN_144eca250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eca250(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_res8 [32];
  undefined8 uVar3;
  
  uVar3 = 0x144eca25c;
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar2 = FUN_144eafbd0(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = uVar1 | 1;
    FUN_144ece130(param_1,1,0);
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) != 0) {
      return 0xffffffff;
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) == 0) {
    if (((uVar1 & 2) == 0) &&
       ((**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1,0,0,0,0,0,local_res8,uVar3),
       (*(byte *)(param_1 + 0x44) & 2) == 0)) {
      return 0xffffffff;
    }
  }
  else {
    iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x78))(param_1);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
  }
  if ((*(int *)(param_1 + 0x44) == 3) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xfc) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144eca340 FUN_144eca340 body=422 status=ok
// SIG undefined FUN_144eca340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eca340(undefined4 *param_1)

{
  undefined8 uVar1;
  
  FUN_14527d7b0();
  FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x250),"ssl\\s3_lib.c",0xd13);
  FUN_144babe00(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x260),FUN_144eabc40);
  FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2a8),"ssl\\s3_lib.c",0xd15);
  FUN_144ea66f0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2b8),
                *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2c0),"ssl\\s3_lib.c",0xd16);
  FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2e8),"ssl\\s3_lib.c",0xd17);
  FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2f0),"ssl\\s3_lib.c",0xd18);
  FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x240));
  FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x408));
  FUN_14527dcf0(param_1);
  FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x3e0),"ssl\\s3_lib.c",0xd21);
  FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x3f0),"ssl\\s3_lib.c",0xd22);
  memset(*(void **)(param_1 + 0x2a),0,0x410);
  uVar1 = FUN_144b9bcd0(param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = 0x300;
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x1be),"ssl\\s3_lib.c",0xd2d);
  *(undefined8 *)(param_1 + 0x1be) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return 1;
}



// FUNCTION 144eca4f0 FUN_144eca4f0 body=1857 status=ok
// SIG undefined FUN_144eca4f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144eca4f0(longlong param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  char cVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar13 = 0x144eca508;
  uVar8 = 0;
  uVar9 = 0;
  lVar11 = (longlong)param_3;
  uVar2 = 0;
  switch(param_2) {
  case 3:
    if (param_4 != (longlong *)0x0) {
      lVar11 = FUN_144ec9600(param_4);
      if (lVar11 == 0) {
        FUN_144ba24f0(0x14,0xd5,0x41,"ssl\\s3_lib.c",CONCAT44(uVar10,0xd5d),uVar13);
        return 0;
      }
      uVar10 = FUN_144ba67f0(lVar11);
      iVar4 = FUN_144b9dff0(param_1,0x40007,uVar10,0,lVar11);
      if (iVar4 == 0) {
        FUN_144ba24f0(0x14,0xd5,0x18a,"ssl\\s3_lib.c",0xd62,uVar13);
        FUN_144ba6e60(lVar11);
        return 0;
      }
      FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 8));
      *(longlong *)(*(longlong *)(param_1 + 0x488) + 8) = lVar11;
      goto LAB_144eca7ef;
    }
    uVar12 = CONCAT44(uVar10,0xd58);
LAB_144eca59c:
    uVar10 = 0x43;
    goto LAB_144eca5a2;
  case 4:
    if (param_4 == (longlong *)0x0) {
      uVar12 = CONCAT44(uVar10,0xd7b);
      goto LAB_144eca59c;
    }
    lVar11 = FUN_144ed31a0(param_4);
    if (lVar11 == 0) {
      uVar12 = 0xd80;
      uVar10 = 0x7c;
      goto LAB_144eca5a2;
    }
    local_res10[0] = FUN_144efc1f0(lVar11);
    if (local_res10[0] != 0) {
      uVar8 = FUN_144eba600(param_1 + 0x6a8,param_1 + 0x6a0,local_res10,1);
      return uVar8;
    }
    goto LAB_144eca5b8;
  default:
    goto switchD_144eca543_caseD_5;
  case 6:
    FUN_144ba24f0(0x14,0xd5,0x42,"ssl\\s3_lib.c",CONCAT44(uVar10,0xd6d),0x144eca508);
    uVar8 = 0;
    break;
  case 10:
    uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    goto switchD_144eca543_caseD_5;
  case 0xb:
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x10c) = 0;
    uVar2 = (ulonglong)uVar9;
    goto switchD_144eca543_caseD_5;
  case 0xc:
    uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x108);
    goto switchD_144eca543_caseD_5;
  case 0xd:
    uVar2 = (ulonglong)**(uint **)(param_1 + 0xa8);
    goto switchD_144eca543_caseD_5;
  case 0x37:
    if (param_3 == 0) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x638),"ssl\\s3_lib.c",0xd99);
      *(undefined8 *)(param_1 + 0x638) = 0;
      uVar2 = 1;
      if (param_4 == (longlong *)0x0) goto switchD_144eca543_caseD_5;
      cVar1 = (char)*param_4;
      plVar5 = param_4;
      while ((cVar1 != '\0' && (uVar9 = (uint)uVar8, uVar9 < 0x80000000))) {
        plVar5 = (longlong *)((longlong)plVar5 + 1);
        uVar9 = uVar9 + 1;
        cVar1 = *(char *)plVar5;
        uVar8 = (ulonglong)uVar9;
      }
      if ((ulonglong)(uVar9 & 0x7fffffff) - 1 < 0xff) {
        lVar11 = FUN_144ea6dc0(param_4,"ssl\\s3_lib.c",0xda4);
        *(longlong *)(param_1 + 0x638) = lVar11;
        if (lVar11 != 0) goto switchD_144eca543_caseD_5;
        uVar12 = 0xda5;
        uVar10 = 0x44;
      }
      else {
        uVar12 = 0xda1;
        uVar10 = 0x13f;
      }
    }
    else {
      uVar12 = CONCAT44(uVar10,0xda9);
      uVar10 = 0x140;
    }
LAB_144eca5a2:
    FUN_144ba24f0(0x14,0xd5,uVar10,"ssl\\s3_lib.c",uVar12,uVar13);
    goto LAB_144eca5b8;
  case 0x39:
    *(longlong **)(param_1 + 0x630) = param_4;
    goto LAB_144eca7ef;
  case 0x41:
    *(int *)(param_1 + 0x640) = param_3;
    goto LAB_144eca7ef;
  case 0x42:
    lVar11 = *(longlong *)(param_1 + 0x660);
    goto LAB_144eca7ec;
  case 0x43:
    *(longlong **)(param_1 + 0x660) = param_4;
    goto LAB_144eca7ef;
  case 0x44:
    lVar11 = *(longlong *)(param_1 + 0x658);
    goto LAB_144eca7ec;
  case 0x45:
    *(longlong **)(param_1 + 0x658) = param_4;
    goto LAB_144eca7ef;
  case 0x46:
    *param_4 = *(longlong *)(param_1 + 0x668);
    if (*(longlong *)(param_1 + 0x670) - 1U < 0x7fffffff) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x670);
    }
    else {
      uVar8 = 0xffffffff;
    }
    break;
  case 0x47:
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x668),"ssl\\s3_lib.c",0xdd7);
    *(longlong **)(param_1 + 0x668) = param_4;
    *(longlong *)(param_1 + 0x670) = lVar11;
    goto LAB_144eca7ef;
  case 0x58:
    if (param_3 == 0) {
      uVar8 = FUN_144b9d5d0(param_1,0,param_4);
    }
    else {
      uVar8 = FUN_144b9d6d0();
    }
    break;
  case 0x59:
    if (param_3 == 0) {
      uVar8 = FUN_144b9d760(param_1,0,param_4);
    }
    else {
      uVar8 = FUN_144b9d810();
    }
    break;
  case 0x5a:
    if (*(longlong *)(param_1 + 0x508) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x6b8);
      uVar2 = *(ulonglong *)(param_1 + 0x6b0);
      if ((param_4 != (longlong *)0x0) && (uVar2 != 0)) {
        do {
          puVar6 = (undefined4 *)FUN_144eba180(*(undefined2 *)(lVar11 + uVar8 * 2));
          if (puVar6 == (undefined4 *)0x0) {
            *(uint *)((longlong)param_4 + uVar8 * 4) = *(ushort *)(lVar11 + uVar8 * 2) | 0x1000000;
          }
          else {
            *(undefined4 *)((longlong)param_4 + uVar8 * 4) = *puVar6;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
      return uVar2 & 0xffffffff;
    }
    goto LAB_144eca5b8;
  case 0x5b:
    uVar8 = FUN_144eba600(param_1 + 0x6a8,param_1 + 0x6a0,param_4,lVar11);
    break;
  case 0x5c:
    uVar8 = FUN_144eba770(param_1 + 0x6a8,param_1 + 0x6a0,param_4);
    break;
  case 0x5d:
    uVar3 = FUN_144eba330(param_1,param_3);
    if (param_3 == -1) {
      uVar8 = (ulonglong)uVar3;
    }
    else {
      puVar7 = (uint *)FUN_144eba180(uVar3);
      if (puVar7 != (uint *)0x0) {
        uVar8 = (ulonglong)*puVar7;
      }
    }
    break;
  case 0x61:
    uVar8 = FUN_144ebb4d0(*(undefined8 *)(param_1 + 0x488),param_4,lVar11,0);
    break;
  case 0x62:
    uVar8 = FUN_144ebb340(*(undefined8 *)(param_1 + 0x488),param_4,0);
    break;
  case 0x65:
    uVar8 = FUN_144ebb4d0(*(undefined8 *)(param_1 + 0x488),param_4,lVar11,1);
    break;
  case 0x66:
    uVar8 = FUN_144ebb340(*(undefined8 *)(param_1 + 0x488),param_4,1);
    break;
  case 0x67:
    if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0)) {
      if (param_4 != (longlong *)0x0) {
        *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x250);
      }
      return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 600);
    }
    goto LAB_144eca5b8;
  case 0x68:
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar8 = FUN_144ecbad0(*(undefined8 *)(param_1 + 0x488),param_4,lVar11);
      return uVar8;
    }
    goto LAB_144eca5b8;
  case 0x69:
    uVar8 = FUN_144b9dc10(param_1,0,param_3);
    break;
  case 0x6a:
    uVar8 = FUN_144b9df50(*(undefined8 *)(param_1 + 0x488),param_4,0,param_3);
    break;
  case 0x6b:
    uVar8 = FUN_144b9df50(*(undefined8 *)(param_1 + 0x488),param_4,1,param_3);
    break;
  case 0x6c:
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308);
    if (lVar11 != 0) goto LAB_144ecab61;
    goto LAB_144eca5b8;
  case 0x6d:
    if ((*(longlong *)(param_1 + 0x508) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0)) {
      FUN_144ba6e40();
      *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
      return 1;
    }
    goto LAB_144eca5b8;
  case 0x6f:
    if (*(longlong *)(param_1 + 0x698) != 0) {
      *param_4 = *(longlong *)(param_1 + 0x698);
      return (ulonglong)*(uint *)(param_1 + 0x690);
    }
    goto LAB_144eca5b8;
  case 0x73:
    lVar11 = *(longlong *)(**(longlong **)(param_1 + 0x488) + 0x10);
LAB_144eca7ec:
    *param_4 = lVar11;
LAB_144eca7ef:
    uVar2 = 1;
    goto switchD_144eca543_caseD_5;
  case 0x74:
    uVar8 = FUN_144b9d850(*(undefined8 *)(param_1 + 0x488),param_4);
    break;
  case 0x75:
    if (param_3 != 3) {
      uVar8 = FUN_144b9d910(*(undefined8 *)(param_1 + 0x488),param_3);
      return uVar8;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      if (lVar11 != 0) {
        if ((*(byte *)(lVar11 + 0x20) & 0x44) != 0) {
          return 2;
        }
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
        if (lVar11 != 0) {
          **(longlong **)(param_1 + 0x488) = lVar11;
          return 1;
        }
      }
    }
    goto LAB_144eca5b8;
  case 0x76:
    *(int *)(*(longlong *)(param_1 + 0x488) + 0x18) = param_3;
    uVar8 = 1;
    break;
  case 0x7f:
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x640);
switchD_144eca543_caseD_5:
    uVar8 = uVar2;
    break;
  case 0x84:
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8);
    if (lVar11 == 0) {
      return 0;
    }
LAB_144ecab61:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar11 + 0xc);
    uVar8 = 1;
    break;
  case 0x85:
    if ((*(longlong *)(param_1 + 0x508) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) != 0)) {
      FUN_144ba6e40();
      *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
      return 1;
    }
LAB_144eca5b8:
    uVar8 = 0;
    break;
  case 0x89:
    uVar8 = FUN_144b9dfc0(*(undefined8 *)(param_1 + 0x488),param_4,0);
    break;
  case 0x8a:
    uVar8 = FUN_144b9dfc0(*(undefined8 *)(param_1 + 0x488),param_4,1);
  }
  return uVar8;
}



// FUNCTION 144ecad70 FUN_144ecad70 body=1956 status=ok
// SIG undefined FUN_144ecad70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ecad70(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  int local_res10 [6];
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar12 = 0x144ecad80;
  switch(param_2) {
  case 3:
    if (param_4 != (longlong *)0x0) {
      lVar7 = FUN_144ec9600(param_4);
      if (lVar7 != 0) {
        uVar4 = FUN_144ba67f0(lVar7);
        iVar6 = FUN_144b9e040(param_1,0x40007,uVar4,0,lVar7);
        if (iVar6 != 0) {
          FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8));
          *(longlong *)(*(longlong *)(param_1 + 0x138) + 8) = lVar7;
          return 1;
        }
        FUN_144ba24f0(0x14,0x85,0x18a,"ssl\\s3_lib.c",0xecc,uVar12);
        FUN_144ba6e60(lVar7);
        return 0;
      }
      uVar11 = CONCAT44(uVar4,0xec7);
LAB_144ecb3ec:
      FUN_144ba24f0(0x14,0x85,0x41,"ssl\\s3_lib.c",uVar11,uVar12);
      return 0;
    }
    uVar12 = CONCAT44(uVar4,0xec2);
    goto LAB_144ecadbf;
  case 4:
    if (param_4 != (longlong *)0x0) {
      lVar7 = FUN_144ed31a0(param_4);
      if (lVar7 == 0) {
        FUN_144ba24f0(0x14,0x85,0x7c,"ssl\\s3_lib.c",CONCAT44(uVar4,0xee9));
        return 0;
      }
      local_res10[0] = FUN_144efc1f0(lVar7);
      if (local_res10[0] == 0) {
        return 0;
      }
      uVar8 = FUN_144eba600(param_1 + 600,param_1 + 0x250,local_res10,1);
      return uVar8;
    }
    uVar12 = CONCAT44(uVar4,0xee4);
LAB_144ecadbf:
    FUN_144ba24f0(0x14,0x85,0x43,"ssl\\s3_lib.c",uVar12,0x144ecad80);
switchD_144ecadaf_caseD_5:
    return 0;
  default:
    goto switchD_144ecadaf_caseD_5;
  case 6:
    FUN_144ba24f0(0x14,0x85,0x42,"ssl\\s3_lib.c",CONCAT44(uVar4,0xed6),0x144ecad80);
    return 0;
  case 0xe:
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      lVar7 = FUN_144babca0();
      *(longlong *)(param_1 + 0xf8) = lVar7;
      if (lVar7 == 0) {
        uVar11 = CONCAT44(uVar4,0xf80);
        goto LAB_144ecb3ec;
      }
    }
    iVar6 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0xf8),param_4);
    if (iVar6 == 0) {
      uVar11 = CONCAT44(uVar4,0xf85);
      goto LAB_144ecb3ec;
    }
    break;
  case 0x36:
    *(longlong **)(param_1 + 0x200) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (longlong *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 != 0x3b) {
        lVar7 = *(longlong *)(param_1 + 0x210);
        *param_4 = *(longlong *)(param_1 + 0x208);
        param_4[1] = lVar7;
        plVar10 = *(longlong **)(param_1 + 0x218);
        lVar7 = plVar10[1];
        param_4[2] = *plVar10;
        param_4[3] = lVar7;
        lVar7 = plVar10[3];
        param_4[4] = plVar10[2];
        param_4[5] = lVar7;
        lVar7 = *(longlong *)(param_1 + 0x218);
        lVar3 = *(longlong *)(lVar7 + 0x28);
        param_4[6] = *(longlong *)(lVar7 + 0x20);
        param_4[7] = lVar3;
        lVar3 = *(longlong *)(lVar7 + 0x38);
        param_4[8] = *(longlong *)(lVar7 + 0x30);
        param_4[9] = lVar3;
        return 1;
      }
      lVar7 = param_4[1];
      plVar10 = *(longlong **)(param_1 + 0x218);
      *(longlong *)(param_1 + 0x208) = *param_4;
      *(longlong *)(param_1 + 0x210) = lVar7;
      lVar7 = param_4[3];
      *plVar10 = param_4[2];
      plVar10[1] = lVar7;
      lVar7 = param_4[5];
      plVar10[2] = param_4[4];
      plVar10[3] = lVar7;
      lVar7 = *(longlong *)(param_1 + 0x218);
      lVar3 = param_4[7];
      *(longlong *)(lVar7 + 0x20) = param_4[6];
      *(longlong *)(lVar7 + 0x28) = lVar3;
      lVar3 = param_4[9];
      *(longlong *)(lVar7 + 0x30) = param_4[8];
      *(longlong *)(lVar7 + 0x38) = lVar3;
      return 1;
    }
    FUN_144ba24f0(0x14,0x85,0x145,"ssl\\s3_lib.c",CONCAT44(uVar4,0xf01),0x144ecad80);
    return 0;
  case 0x40:
    *(longlong **)(param_1 + 0x230) = param_4;
    return 1;
  case 0x41:
    *(int *)(param_1 + 0x238) = param_3;
    return 1;
  case 0x4e:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    *(longlong **)(param_1 + 0x2e0) = param_4;
    return 1;
  case 0x4f:
    *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 0x20;
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x300),"ssl\\s3_lib.c",0xf32);
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (param_4 != (longlong *)0x0) {
      cVar2 = (char)*param_4;
      plVar10 = param_4;
      cVar1 = cVar2;
      for (uVar9 = uVar5; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        cVar1 = *(char *)plVar10;
      }
      plVar10 = param_4;
      if ((uVar9 & 0x7fffffff) < 0x100) {
        for (; (cVar2 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
          cVar2 = *(char *)((longlong)plVar10 + 1);
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        }
        if ((uVar5 & 0x7fffffff) != 0) {
          lVar7 = FUN_144ea6dc0(param_4,"ssl\\s3_lib.c",0xf3a);
          *(longlong *)(param_1 + 0x300) = lVar7;
          if (lVar7 != 0) {
            return 1;
          }
          uVar12 = CONCAT44(uVar4,0xf3b);
          goto LAB_144ecb177;
        }
      }
      FUN_144ba24f0(0x14,0x85,0x165,"ssl\\s3_lib.c",CONCAT44(uVar4,0xf37));
      return 0;
    }
    break;
  case 0x50:
    *(int *)(param_1 + 0x350) = param_3;
    return 1;
  case 0x51:
    *(code **)(param_1 + 0x2f8) = FUN_144ecbaa0;
    if (*(longlong *)(param_1 + 0x348) != 0) {
      FUN_144ea6530(*(longlong *)(param_1 + 0x348),"ssl\\s3_lib.c",0xf43);
    }
    lVar7 = FUN_144ea6dc0(param_4,"ssl\\s3_lib.c",0xf44);
    *(longlong *)(param_1 + 0x348) = lVar7;
    if (lVar7 == 0) {
      uVar12 = CONCAT44(uVar4,0xf45);
LAB_144ecb177:
      FUN_144ba24f0(0x14,0x85,0x44,"ssl\\s3_lib.c",uVar12);
      return 0;
    }
    break;
  case 0x52:
    lVar7 = *(longlong *)(param_1 + 0xf8);
    if ((lVar7 == 0) && (param_3 == 0)) goto switchD_144ecadaf_caseD_73;
    goto LAB_144ecb44d;
  case 0x53:
    FUN_144babe00(*(undefined8 *)(param_1 + 0xf8),FUN_144b47250);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return 1;
  case 0x58:
    if (param_3 == 0) {
      uVar8 = FUN_144b9d5d0(0,param_1,param_4);
      return uVar8;
    }
    uVar8 = FUN_144b9d6d0();
    return uVar8;
  case 0x59:
    if (param_3 == 0) {
      uVar8 = FUN_144b9d760(0,param_1,param_4);
      return uVar8;
    }
    uVar8 = FUN_144b9d810();
    return uVar8;
  case 0x5b:
    uVar8 = FUN_144eba600(param_1 + 600,param_1 + 0x250,param_4,(longlong)param_3);
    return uVar8;
  case 0x5c:
    uVar8 = FUN_144eba770(param_1 + 600,param_1 + 0x250,param_4);
    return uVar8;
  case 0x61:
    uVar8 = FUN_144ebb4d0(*(undefined8 *)(param_1 + 0x138),param_4,(longlong)param_3,0);
    return uVar8;
  case 0x62:
    uVar8 = FUN_144ebb340(*(undefined8 *)(param_1 + 0x138),param_4,0);
    return uVar8;
  case 0x65:
    uVar8 = FUN_144ebb4d0(*(undefined8 *)(param_1 + 0x138),param_4,(longlong)param_3,1);
    return uVar8;
  case 0x66:
    uVar8 = FUN_144ebb340(*(undefined8 *)(param_1 + 0x138),param_4,1);
    return uVar8;
  case 0x68:
    uVar8 = FUN_144ecbad0(*(undefined8 *)(param_1 + 0x138),param_4,(longlong)param_3);
    return uVar8;
  case 0x69:
    uVar8 = FUN_144b9dc10(0,param_1);
    return uVar8;
  case 0x6a:
    uVar8 = FUN_144b9df50(*(undefined8 *)(param_1 + 0x138),param_4,0,param_3);
    return uVar8;
  case 0x6b:
    uVar8 = FUN_144b9df50(*(undefined8 *)(param_1 + 0x138),param_4,1,param_3);
    return uVar8;
  case 0x73:
switchD_144ecadaf_caseD_73:
    lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x138) + 0x10);
LAB_144ecb44d:
    *param_4 = lVar7;
    break;
  case 0x74:
    uVar8 = FUN_144b9d850(*(undefined8 *)(param_1 + 0x138),param_4);
    return uVar8;
  case 0x75:
    uVar8 = FUN_144b9d910(*(undefined8 *)(param_1 + 0x138),param_3);
    return uVar8;
  case 0x76:
    *(int *)(*(longlong *)(param_1 + 0x138) + 0x18) = param_3;
    return 1;
  case 0x7f:
    return (ulonglong)*(uint *)(param_1 + 0x238);
  case 0x80:
    *param_4 = *(longlong *)(param_1 + 0x228);
    return 1;
  case 0x81:
    *param_4 = *(longlong *)(param_1 + 0x230);
    return 1;
  case 0x89:
    uVar8 = FUN_144b9dfc0(*(undefined8 *)(param_1 + 0x138),param_4,0);
    return uVar8;
  case 0x8a:
    uVar8 = FUN_144b9dfc0(*(undefined8 *)(param_1 + 0x138),param_4,1);
    return uVar8;
  }
  return 1;
}



// FUNCTION 144ecb790 FUN_144ecb790 body=385 status=ok
// SIG undefined FUN_144ecb790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecb790(undefined8 param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 1;
  lVar4 = 0;
  local_res18 = 0;
  puVar3 = (undefined4 *)FUN_144eba180(param_2);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_144eafc90(param_1,0x50,0x22f,0x44,"ssl\\s3_lib.c",CONCAT44(uVar8,0x126a));
    goto LAB_144ecb8f4;
  }
  uVar1 = *(ushort *)(puVar3 + 2);
  if ((uVar1 & 3) == 2) {
    uVar5 = *puVar3;
  }
  else {
    uVar5 = 0x198;
  }
  lVar4 = FUN_144ed1550(uVar5,0);
  if (lVar4 == 0) {
    uVar7 = CONCAT44(uVar8,0x1274);
    uVar6 = 0x41;
  }
  else {
    iVar2 = FUN_145282d00(lVar4);
    if (0 < iVar2) {
      if ((uVar1 & 3) != 2) {
        uVar8 = 0;
        iVar2 = FUN_144ed1710(lVar4,0x198,6,0x1001,CONCAT44(uVar6,*puVar3),0);
        if (iVar2 < 1) {
          uVar7 = CONCAT44(uVar8,0x127f);
          goto LAB_144ecb879;
        }
      }
      iVar2 = FUN_145282d80(lVar4,&local_res18);
      if (iVar2 < 1) {
        FUN_144eafc90(param_1,0x50,0x22f,6,"ssl\\s3_lib.c",CONCAT44(uVar8,0x1284));
        FUN_144ba6e60(local_res18);
        local_res18 = 0;
      }
      goto LAB_144ecb8f4;
    }
    uVar7 = CONCAT44(uVar8,0x1279);
LAB_144ecb879:
    uVar6 = 6;
  }
  FUN_144eafc90(param_1,0x50,0x22f,uVar6,"ssl\\s3_lib.c",uVar7);
LAB_144ecb8f4:
  FUN_144ed16b0(lVar4);
  return local_res18;
}



// FUNCTION 144ecb920 FUN_144ecb920 body=248 status=ok
// SIG undefined FUN_144ecb920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecb920(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  lVar3 = 0;
  local_res10[0] = 0;
  puVar2 = (undefined4 *)FUN_144eba180();
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(byte *)(puVar2 + 2) & 3) == 2) {
      local_res10[0] = FUN_144ba6d80();
      if ((local_res10[0] != 0) && (iVar1 = FUN_144ba6870(local_res10[0],*puVar2), iVar1 != 0)) {
        return local_res10[0];
      }
      FUN_144ba6e60(local_res10[0]);
      return 0;
    }
    lVar3 = FUN_144ed1550(0x198,0);
    if ((((lVar3 != 0) && (iVar1 = FUN_145282b60(lVar3), 0 < iVar1)) &&
        (iVar1 = FUN_144ed1710(lVar3,0x198,6,0x1001,*puVar2,0), 0 < iVar1)) &&
       (iVar1 = FUN_145282be0(lVar3,local_res10), iVar1 < 1)) {
      FUN_144ba6e60(local_res10[0]);
      local_res10[0] = 0;
    }
  }
  FUN_144ed16b0(lVar3);
  return local_res10[0];
}



// FUNCTION 144ecba20 FUN_144ecba20 body=90 status=ok
// SIG undefined FUN_144ecba20(void)

int FUN_144ecba20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xa8) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar2 == 0)) {
    return -1;
  }
  iVar1 = *(int *)(lVar2 + 0x40);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 4) == 0) {
    if (((*(uint *)(lVar2 + 0x1c) & 0x1c8) != 0) && (iVar1 == 0x505)) {
      return 0x909;
    }
  }
  else if (iVar1 == 0x909) {
    return 0x404;
  }
  return iVar1;
}



// FUNCTION 144ecbaa0 FUN_144ecbaa0 body=42 status=ok
// SIG undefined FUN_144ecbaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecbaa0(longlong param_1)

{
  FUN_144ea6dc0(*(undefined8 *)(param_1 + 0x818),"ssl\\s3_lib.c",0xd38);
  return;
}



// FUNCTION 144ecbad0 FUN_144ecbad0 body=173 status=ok
// SIG undefined FUN_144ecbad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecbad0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x188),"ssl\\s3_lib.c",0x1128);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (0xff < param_3) {
      return 0;
    }
    lVar1 = FUN_144ea6d10(param_2,param_3,"ssl\\s3_lib.c",0x112f);
    *(longlong *)(param_1 + 0x188) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(ulonglong *)(param_1 + 400) = param_3;
  }
  return 1;
}



// FUNCTION 144ecbb80 FUN_144ecbb80 body=269 status=ok
// SIG undefined FUN_144ecbb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ecbb80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ecbba0;
  SetLastError(0);
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x104) != 0) {
    FUN_144ec9a80(param_1,0);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 1;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                    (param_1,0x17,0,param_2,param_3,param_4,param_5,uVar2);
  if ((iVar1 == -1) && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 2)) {
    FUN_144eafd40(param_1,1);
    iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x68))
                      (param_1,0x17,0,param_2,param_3,param_4,param_5);
    FUN_144eafd40(param_1,0);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 0;
  }
  return iVar1;
}



// FUNCTION 144ecbc90 FUN_144ecbc90 body=207 status=ok
// SIG undefined FUN_144ecbc90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ecbc90(longlong param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x144ecbcaa;
  iVar1 = FUN_144eafbc0();
  if ((iVar1 != 0) && (iVar1 = FUN_144eafd30(param_1), iVar1 == 0)) {
    uVar2 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      FUN_144ba24f0(0x14,0x10c,0xe5,"ssl\\d1_msg.c",CONCAT44(uVar3,0x17));
      return 0xffffffff;
    }
  }
  if (param_4 < 0x4001) {
    uVar4 = FUN_144ecd5d0(param_1,param_2,param_3,param_4,param_5,uVar4);
  }
  else {
    FUN_144ba24f0(0x14,0x10c,0x14e,"ssl\\d1_msg.c",CONCAT44(uVar3,0x1d));
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144ecbd60 FUN_144ecbd60 body=311 status=ok
// SIG undefined FUN_144ecbd60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ecbd60(undefined4 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffd8;
  undefined8 uVar3;
  
  uVar3 = 0x144ecbd70;
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 0;
  local_res8[0] = *(undefined2 *)(*(longlong *)(param_1 + 0x2a) + 0x100);
  uVar1 = FUN_144ecd640(param_1,0x15,local_res8,2,in_stack_ffffffffffffffd8 & 0xffffffff00000000,
                        local_res10);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    return uVar1;
  }
  FUN_144b9efc0(*(undefined8 *)(param_1 + 6),0xb,0);
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,2,param_1,
               *(undefined8 *)(param_1 + 0x30),uVar3);
  }
  pcVar2 = *(code **)(param_1 + 0x15a);
  if ((pcVar2 != (code *)0x0) ||
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,0x4008,
              CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x100),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x101)));
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 144ecbea0 FUN_144ecbea0 body=25 status=ok
// SIG undefined FUN_144ecbea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecbea0(undefined8 param_1)

{
  FUN_1452716a0(param_1,0x16);
  return;
}



// FUNCTION 144ecbec0 FUN_144ecbec0 body=104 status=ok
// SIG undefined FUN_144ecbec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecbec0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144eb4b20(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  while (lVar1 != 0) {
    FUN_145272150(*(undefined8 *)(lVar1 + 8));
    FUN_144eb49a0(lVar1);
    lVar1 = FUN_144eb4b20(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  }
  return;
}



// FUNCTION 144ecbf30 FUN_144ecbf30 body=104 status=ok
// SIG undefined FUN_144ecbf30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecbf30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144eb4b20(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  while (lVar1 != 0) {
    FUN_145272150(*(undefined8 *)(lVar1 + 8));
    FUN_144eb49a0(lVar1);
    lVar1 = FUN_144eb4b20(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  }
  return;
}



// FUNCTION 144ecbfb0 FUN_144ecbfb0 body=253 status=ok
// SIG undefined FUN_144ecbfb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecbfb0(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)(param_1 + 0xb0) + 500) != 0) ||
     (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) != 0)) {
    GetSystemTime(&local_20);
    SystemTimeToFileTime(&local_20,&local_28);
    iVar4 = (int)(((longlong)local_28 + 0xfe624e212ac18000U) / 10000000);
    iVar3 = ((int)((longlong)local_28 + 0xfe624e212ac18000U) + iVar4 * -10000000) / 10;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if ((iVar4 <= *(int *)(lVar2 + 500)) &&
       ((*(int *)(lVar2 + 500) != iVar4 || (iVar3 < *(int *)(lVar2 + 0x1f8))))) {
      *(undefined8 *)param_2 = *(undefined8 *)(lVar2 + 500);
      *param_2 = *param_2 - iVar4;
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 - iVar3;
      if (*piVar1 < 0) {
        *param_2 = *param_2 + -1;
        param_2[1] = param_2[1] + 1000000;
      }
      if ((*param_2 != 0) || (14999 < param_2[1])) goto LAB_144ecc0a0;
    }
    param_2[0] = 0;
    param_2[1] = 0;
  }
LAB_144ecc0a0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144ecc0c0 FUN_144ecc0c0 body=184 status=ok
// SIG undefined FUN_144ecc0c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecc0c0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f0);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    uVar5 = 1;
    uVar2 = FUN_144b979b0();
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar4 = FUN_144b98ac0(param_1);
      iVar3 = FUN_144b9efc0(uVar4,0x2f,0);
      if ((ulonglong)(longlong)iVar3 < *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130)) {
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar3;
      }
    }
  }
  if (0xc < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    FUN_144eafc90(param_1,0xffffffff,0x13e,0x138,"ssl\\d1_lib.c",CONCAT44(uVar5,0x17e));
    return 0xffffffff;
  }
  return 0;
}



// FUNCTION 144ecc180 FUN_144ecc180 body=236 status=ok
// SIG undefined FUN_144ecc180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecc180(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res10;
  int local_res14;
  
  lVar4 = FUN_144ecbfb0(param_1,&local_res10);
  if (((lVar4 == 0) || (0 < local_res10)) || (0 < local_res14)) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (*(code **)(lVar4 + 0x208) == (code *)0x0) {
    *(int *)(lVar4 + 0x1fc) = *(int *)(lVar4 + 0x1fc) * 2;
    if (60000000 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 60000000;
    }
  }
  else {
    uVar2 = (**(code **)(lVar4 + 0x208))(param_1,*(undefined4 *)(lVar4 + 0x1fc));
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar2;
  }
  iVar3 = FUN_144ecc0c0(param_1);
  if (iVar3 < 0) {
    return 0xffffffff;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1e8);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1e8)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1e8) = 1;
  }
  FUN_144ecc270(param_1);
  uVar5 = FUN_145271e10(param_1);
  return uVar5;
}



// FUNCTION 144ecc270 FUN_144ecc270 body=251 status=ok
// SIG undefined FUN_144ecc270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecc270(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if ((*(int *)(lVar3 + 500) == 0) && (*(int *)(lVar3 + 0x1f8) == 0)) {
    if (*(code **)(lVar3 + 0x208) == (code *)0x0) {
      *(undefined4 *)(lVar3 + 0x1fc) = 1000000;
    }
    else {
      uVar4 = (**(code **)(lVar3 + 0x208))(param_1,0);
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar4;
    }
  }
  FUN_144ecca40(*(longlong *)(param_1 + 0xb0) + 500);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc);
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 500);
  *piVar1 = *piVar1 + uVar2 / 1000000;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8);
  *piVar1 = *piVar1 + uVar2 % 1000000;
  if (999999 < *(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 500);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8);
    *piVar1 = *piVar1 + -1000000;
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  uVar5 = FUN_144b98ab0(param_1);
  FUN_144b9efc0(uVar5,0x2d,0,lVar3 + 500);
  return;
}



// FUNCTION 144ecc370 FUN_144ecc370 body=130 status=ok
// SIG undefined FUN_144ecc370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecc370(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(lVar1 + 0x1e8) = 0;
  *(undefined4 *)(lVar1 + 0x1f0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 500) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 1000000;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  uVar2 = FUN_144b98ab0(param_1);
  FUN_144b9efc0(uVar2,0x2d,0,lVar1 + 500);
  FUN_144ecbf30(param_1);
  return;
}



// FUNCTION 144ecc400 FUN_144ecc400 body=59 status=ok
// SIG undefined FUN_144ecc400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ecc400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int local_res10;
  int local_res14;
  
  lVar1 = FUN_144ecbfb0(param_1,&local_res10,param_3,param_4,0x144ecc40a);
  if (((lVar1 != 0) && (local_res10 < 1)) && (local_res14 < 1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ecc440 FUN_144ecc440 body=51 status=ok
// SIG undefined FUN_144ecc440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecc440(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ecc44a;
  uVar2 = FUN_144b98ac0();
  uVar1 = FUN_144b9efc0(uVar2,0x31,0,0,uVar3);
  return 0x100 - (ulonglong)uVar1;
}



// FUNCTION 144ecc480 FUN_144ecc480 body=385 status=ok
// SIG undefined FUN_144ecc480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecc480(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) != 0) {
    uVar4 = FUN_144b98ac0();
    uVar2 = FUN_144b9efc0(uVar4,0x31,0);
    *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) =
         *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) - (ulonglong)uVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x128) = 0;
  }
  uVar4 = FUN_144b98ac0(param_1);
  uVar2 = FUN_144b9efc0(uVar4,0x31,0);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) < 0x100 - (ulonglong)uVar2) {
    uVar2 = FUN_144b979b0(param_1);
    if ((uVar2 >> 0xc & 1) != 0) {
      return 0;
    }
    uVar4 = FUN_144b98ac0(param_1);
    iVar3 = FUN_144b9efc0(uVar4,0x28,0);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar3;
    uVar4 = FUN_144b98ac0(param_1);
    uVar2 = FUN_144b9efc0(uVar4,0x31,0);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) < 0x100 - (ulonglong)uVar2) {
      uVar4 = FUN_144b98ac0(param_1);
      uVar2 = FUN_144b9efc0(uVar4,0x31,0);
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = 0x100 - (ulonglong)uVar2;
      lVar1 = *(longlong *)(param_1 + 0xb0);
      uVar4 = FUN_144b98ac0(param_1);
      FUN_144b9efc0(uVar4,0x2a,*(undefined4 *)(lVar1 + 0x130));
    }
  }
  return 1;
}



// FUNCTION 144ecc610 FUN_144ecc610 body=295 status=ok
// SIG undefined FUN_144ecc610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ecc610(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = FUN_144eccae0(param_1 + 0x830);
  if (iVar1 != 0) {
    iVar1 = FUN_144ec9f60(param_1);
    if (iVar1 != 0) {
      lVar2 = FUN_144ea6670(0x210,"ssl\\d1_lib.c",0x4d);
      if (lVar2 == 0) {
        FUN_144ec9fd0(param_1);
        return false;
      }
      uVar3 = FUN_144eb49d0();
      *(undefined8 *)(lVar2 + 0x118) = uVar3;
      lVar4 = FUN_144eb49d0();
      *(longlong *)(lVar2 + 0x120) = lVar4;
      if (*(int *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(lVar2 + 0x100) = 0x100;
      }
      *(undefined8 *)(lVar2 + 0x128) = 0;
      *(undefined8 *)(lVar2 + 0x130) = 0;
      if ((*(longlong *)(lVar2 + 0x118) != 0) && (lVar4 != 0)) {
        *(longlong *)(param_1 + 0xb0) = lVar2;
        iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
        return iVar1 != 0;
      }
      FUN_144eb4a30();
      FUN_144eb4a30(*(undefined8 *)(lVar2 + 0x120));
      FUN_144ea6530(lVar2,"ssl\\d1_lib.c",0x5f);
      FUN_144ec9fd0(param_1);
      return false;
    }
  }
  return false;
}



// FUNCTION 144ecc740 FUN_144ecc740 body=144 status=ok
// SIG undefined FUN_144ecc740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecc740(longlong param_1)

{
  FUN_144eccbd0(param_1 + 0x830);
  FUN_144ec9fd0(param_1);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_144ecbec0(param_1);
    FUN_144ecbf30(param_1);
    FUN_144eb4a30(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
    FUN_144eb4a30(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  }
  FUN_144ea6530(*(undefined8 *)(param_1 + 0xb0),"ssl\\d1_lib.c",0x97);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 144ecc7d0 FUN_144ecc7d0 body=376 status=ok
// SIG undefined FUN_144ecc7d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecc7d0(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  FUN_144eccc50(param_1 + 0x20c);
  lVar1 = *(longlong *)(param_1 + 0x2c);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x208);
    uVar2 = *(undefined8 *)(lVar1 + 0x120);
    uVar3 = *(undefined8 *)(lVar1 + 0x118);
    uVar4 = *(undefined8 *)(lVar1 + 0x130);
    uVar5 = *(undefined8 *)(lVar1 + 0x128);
    FUN_144ecbec0(param_1);
    FUN_144ecbf30(param_1);
    memset(*(void **)(param_1 + 0x2c),0,0x210);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x208) = uVar7;
    if (param_1[0xe] != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x100) = 0x100;
    }
    uVar6 = FUN_144b979b0(param_1);
    if ((uVar6 >> 0xc & 1) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x130) = uVar4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x128) = uVar5;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x118) = uVar3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x120) = uVar2;
  }
  uVar7 = FUN_144eca340(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (**(int **)(param_1 + 2) == 0x1ffff) {
    *param_1 = 0xfefd;
    return 1;
  }
  if ((param_1[0x173] & 0x8000U) != 0) {
    *param_1 = 0x100;
    param_1[0x17b] = 0x100;
    return 1;
  }
  *param_1 = **(int **)(param_1 + 2);
  return 1;
}



// FUNCTION 144ecc950 FUN_144ecc950 body=201 status=ok
// SIG undefined FUN_144ecc950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ecc950(longlong param_1,int param_2,uint param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 == 0x11) {
    if (0xcf < (int)param_3) {
      *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)(int)param_3;
      return (ulonglong)param_3;
    }
  }
  else {
    if (param_2 == 0x49) {
      lVar2 = FUN_144ecbfb0(param_1,param_4);
      return (ulonglong)(lVar2 != 0);
    }
    if (param_2 == 0x4a) {
      uVar1 = FUN_144ecc180();
      return uVar1;
    }
    if (param_2 != 0x78) {
      if (param_2 != 0x79) {
        uVar1 = FUN_144eca4f0();
        return uVar1;
      }
      return 0x100;
    }
    if (0xff < (int)param_3) {
      *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) = (longlong)(int)param_3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ecca20 FUN_144ecca20 body=22 status=ok
// SIG undefined FUN_144ecca20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecca20(void)

{
  FUN_144eca250();
  return;
}



// FUNCTION 144ecca40 FUN_144ecca40 body=140 status=ok
// SIG undefined FUN_144ecca40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecca40(int *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  GetSystemTime(&local_20);
  SystemTimeToFileTime(&local_20,&local_28);
  iVar1 = (int)(((longlong)local_28 + 0xfe624e212ac18000U) / 10000000);
  *param_1 = iVar1;
  param_1[1] = ((int)((longlong)local_28 + 0xfe624e212ac18000U) + iVar1 * -10000000) / 10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144eccae0 FUN_144eccae0 body=233 status=ok
// SIG undefined FUN_144eccae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144eccae0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144eccaf0;
  lVar1 = FUN_144ea64e0(0x60,"ssl\\record\\rec_layer_d1.c",0x17);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x14,0x27b,0x41,"ssl\\record\\rec_layer_d1.c",0x18,uVar3);
    return 0;
  }
  *(longlong *)(param_1 + 0xeb0) = lVar1;
  uVar3 = FUN_144eb49d0();
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar3 = FUN_144eb49d0();
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  lVar2 = FUN_144eb49d0();
  *(longlong *)(lVar1 + 0x48) = lVar2;
  if (((*(longlong *)(lVar1 + 0x28) != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) && (lVar2 != 0)) {
    return 1;
  }
  FUN_144eb4a30();
  FUN_144eb4a30(*(undefined8 *)(lVar1 + 0x38));
  FUN_144eb4a30(*(undefined8 *)(lVar1 + 0x48));
  FUN_144ea6530(lVar1,"ssl\\record\\rec_layer_d1.c",0x27);
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  return 0;
}



// FUNCTION 144eccbd0 FUN_144eccbd0 body=123 status=ok
// SIG undefined FUN_144eccbd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eccbd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xeb0) != 0) {
    FUN_144eccc50();
    FUN_144eb4a30(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x28));
    FUN_144eb4a30(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x38));
    FUN_144eb4a30(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x48));
    FUN_144ea6530(*(undefined8 *)(param_1 + 0xeb0),"ssl\\record\\rec_layer_d1.c",0x38);
    *(undefined8 *)(param_1 + 0xeb0) = 0;
  }
  return;
}



// FUNCTION 144eccc50 FUN_144eccc50 body=372 status=ok
// SIG undefined FUN_144eccc50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eccc50(longlong param_1)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  _Dst = *(void **)(param_1 + 0xeb0);
  lVar4 = FUN_144eb4b20(*(undefined8 *)((longlong)_Dst + 0x28));
  while (lVar4 != 0) {
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",
                  0x49);
    FUN_144ea6530(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x4a);
    FUN_144eb49a0(lVar4);
    lVar4 = FUN_144eb4b20(*(undefined8 *)((longlong)_Dst + 0x28));
  }
  lVar4 = FUN_144eb4b20(*(undefined8 *)((longlong)_Dst + 0x38));
  while (lVar4 != 0) {
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",
                  0x50);
    FUN_144ea6530(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x51);
    FUN_144eb49a0(lVar4);
    lVar4 = FUN_144eb4b20(*(undefined8 *)((longlong)_Dst + 0x38));
  }
  lVar4 = FUN_144eb4b20(*(undefined8 *)((longlong)_Dst + 0x48));
  while (lVar4 != 0) {
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",
                  0x57);
    FUN_144ea6530(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x58);
    FUN_144eb49a0(lVar4);
    lVar4 = FUN_144eb4b20(*(undefined8 *)((longlong)_Dst + 0x48));
  }
  uVar1 = *(undefined8 *)((longlong)_Dst + 0x28);
  uVar2 = *(undefined8 *)((longlong)_Dst + 0x38);
  uVar3 = *(undefined8 *)((longlong)_Dst + 0x48);
  memset(_Dst,0,0x60);
  *(undefined8 *)((longlong)_Dst + 0x28) = uVar1;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar2;
  return;
}



// FUNCTION 144eccdd0 FUN_144eccdd0 body=106 status=ok
// SIG undefined FUN_144eccdd0(void)

void FUN_144eccdd0(longlong param_1,ushort param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xeb0);
  if ((uint)param_2 == *(ushort *)(lVar1 + 2) - 1) {
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 0xea0);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x50);
    *(ushort *)(*(longlong *)(param_1 + 0xeb0) + 2) = param_2;
    return;
  }
  if ((uint)param_2 == *(ushort *)(lVar1 + 2) + 1) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0xea0);
    lVar1 = *(longlong *)(param_1 + 0xeb0);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(lVar1 + 0x58);
  }
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}



// FUNCTION 144ecce40 FUN_144ecce40 body=1910 status=ok
// SIG undefined FUN_144ecce40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecce40(undefined4 *param_1,int param_2,undefined4 *param_3,void *param_4,
                  ulonglong param_5,int param_6,size_t *param_7)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  void *local_c8;
  char local_b8 [96];
  size_t *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58[0] = param_7;
  pcVar8 = (code *)0x0;
  local_c8 = param_4;
  if ((*(longlong *)(param_1 + 0x214) != 0) || (iVar4 = FUN_144eb4570(), iVar4 != 0)) {
    if (((param_2 == 0) || (param_2 - 0x16U < 2)) && ((param_6 == 0 || (param_2 == 0x17)))) {
      iVar4 = FUN_144eafd30(param_1);
      if ((iVar4 == 0) && (iVar4 = FUN_144eafbc0(param_1), iVar4 != 0)) {
        iVar4 = (**(code **)(param_1 + 0xc))(param_1);
        if ((iVar4 < 0) || (iVar4 == 0)) goto LAB_144ecd2f5;
      }
LAB_144eccf40:
      do {
        do {
          param_1[10] = 1;
          iVar4 = FUN_144eafbf0(param_1);
          if (((iVar4 != 0) && (*(longlong *)(param_1 + 0x360) == 0)) &&
             (lVar5 = FUN_144eb4b20(*(undefined8 *)(*(longlong *)(param_1 + 0x5b8) + 0x48)),
             lVar5 != 0)) {
            FUN_144ece060(param_1,lVar5);
            FUN_144ea6530(*(undefined8 *)(lVar5 + 8),"ssl\\record\\rec_layer_d1.c",0x196);
            FUN_144eb49a0(lVar5);
          }
          iVar4 = FUN_144ecc180(param_1);
        } while (0 < iVar4);
        iVar4 = FUN_144eafd10(param_1);
        if (iVar4 != 0) break;
        if ((*(longlong *)(param_1 + 0x360) != 0) && (param_1[0x20f] != 0xf1)) {
LAB_144ecd00b:
          if ((param_1[0x35f] != 0x15) && (*(longlong *)(param_1 + 0x360) != 0)) {
            param_1[0x5b7] = 0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xf0) != 0) && (param_1[0x35f] != 0x16)) {
            iVar4 = FUN_144ecde50(param_1,*(longlong *)(param_1 + 0x5b8) + 0x40,param_1 + 0x36e);
            if (-1 < iVar4) goto LAB_144ecd19f;
            break;
          }
          if ((param_1[0x11] & 2) != 0) {
            *(undefined8 *)(param_1 + 0x360) = 0;
            param_1[0x36c] = 1;
            param_1[10] = 1;
            break;
          }
          iVar4 = param_1[0x35f];
          if ((param_2 == iVar4) ||
             (((iVar4 == 0x14 && (param_2 == 0x16)) && (param_3 != (undefined4 *)0x0)))) {
            iVar4 = FUN_144eafbc0(param_1);
            if (((iVar4 != 0) && (param_2 == 0x17)) && (*(longlong *)(param_1 + 0x10e) == 0)) {
              local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x1ec);
              uVar10 = 100;
              goto LAB_144ecd2d4;
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = param_1[0x35f];
            }
            if (param_5 == 0) {
              if (*(longlong *)(param_1 + 0x360) == 0) {
                param_1[0x36c] = 1;
              }
            }
            else {
              if (*(ulonglong *)(param_1 + 0x360) < param_5) {
                param_5 = *(ulonglong *)(param_1 + 0x360);
              }
              memcpy(local_c8,(void *)(*(longlong *)(param_1 + 0x366) +
                                      *(longlong *)(param_1 + 0x364)),param_5);
              if (param_6 == 0) {
                *(ulonglong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) - param_5;
                *(ulonglong *)(param_1 + 0x364) = *(longlong *)(param_1 + 0x364) + param_5;
                if (*(longlong *)(param_1 + 0x360) == 0) {
                  param_1[0x20f] = 0xf0;
                  *(undefined8 *)(param_1 + 0x364) = 0;
                  goto LAB_144ecd588;
                }
              }
              else if (*(longlong *)(param_1 + 0x360) == 0) {
LAB_144ecd588:
                param_1[0x36c] = 1;
              }
              *local_58[0] = param_5;
            }
            break;
          }
          if (iVar4 == 0x15) {
            uVar3 = *(ulonglong *)(param_1 + 0x360);
            if ((((uVar3 < 0x8000000000000000) && (uVar3 != 0)) &&
                (cVar1 = *(char *)(*(longlong *)(param_1 + 0x366) + *(longlong *)(param_1 + 0x364)),
                uVar3 != 1)) &&
               (bVar2 = ((char *)(*(longlong *)(param_1 + 0x366) + *(longlong *)(param_1 + 0x364)))
                        [1], uVar3 == 2)) {
              if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
                local_d8 = *(undefined8 *)(param_1 + 0x30);
                local_e8 = (char *)0x2;
                local_e0 = param_1;
                (**(code **)(param_1 + 0x2e))(0,*param_1,0x15);
              }
              pcVar11 = *(code **)(param_1 + 0x15a);
              if ((pcVar11 == (code *)0x0) &&
                 (pcVar11 = pcVar8,
                 *(code **)(*(longlong *)(param_1 + 0x166) + 0x108) != (code *)0x0)) {
                pcVar11 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
              }
              uVar9 = (uint)bVar2;
              if (pcVar11 != (code *)0x0) {
                (*pcVar11)(param_1,0x4004,CONCAT11(cVar1,bVar2));
              }
              if (cVar1 == '\x01') {
                *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf4) = uVar9;
                param_1[0x36c] = 1;
                param_1[0x5b7] = param_1[0x5b7] + 1;
                if (param_1[0x5b7] == 5) {
                  local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x24a);
                  uVar10 = 0x199;
                  goto LAB_144ecd2d4;
                }
                pcVar8 = pcVar11;
                if (uVar9 == 0) {
                  param_1[0x11] = param_1[0x11] | 2;
                  break;
                }
                goto LAB_144eccf40;
              }
              if (cVar1 == '\x02') {
                param_1[10] = 1;
                local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x267);
                local_e8 = "ssl\\record\\rec_layer_d1.c";
                *(uint *)(*(longlong *)(param_1 + 0x2a) + 0xf8) = uVar9;
                FUN_144eafc90(param_1,0xffffffff,0x102,bVar2 + 1000);
                FUN_144ec7760(local_58,0x10,&DAT_149dfc0ac,bVar2);
                FUN_144ba2bd0(2,"SSL alert number ",local_58);
                param_1[0x11] = param_1[0x11] | 2;
                param_1[0x36c] = 1;
                FUN_144eb1190(*(undefined8 *)(param_1 + 0x1da),*(undefined8 *)(param_1 + 0x142));
                break;
              }
              local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x270);
              uVar7 = 0x2f;
              uVar10 = 0xf6;
            }
            else {
              local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x231);
              uVar10 = 0xcd;
LAB_144ecd2d4:
              uVar7 = 10;
            }
LAB_144ecd2dd:
            local_e8 = "ssl\\record\\rec_layer_d1.c";
            FUN_144eafc90(param_1,uVar7,0x102,uVar10);
            break;
          }
          if ((param_1[0x11] & 1) != 0) {
            param_1[10] = 1;
            *(undefined8 *)(param_1 + 0x360) = 0;
            param_1[0x36c] = 1;
            break;
          }
          if (iVar4 != 0x14) {
            if ((iVar4 != 0x16) || (iVar4 = FUN_144eafd30(param_1), iVar4 != 0)) {
              iVar4 = param_1[0x35f];
              if (iVar4 < 0x14) {
LAB_144ecd48b:
                local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x2ea);
              }
              else {
                if (iVar4 < 0x17) {
                  local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x2f5);
                  uVar10 = 0x44;
                  goto LAB_144ecd2d4;
                }
                if (iVar4 != 0x17) goto LAB_144ecd48b;
                if (((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x110) != 0) &&
                    (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x108) != 0)) &&
                   (iVar4 = FUN_144eafe00(param_1), iVar4 != 0)) {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x110) = 2;
                  break;
                }
                local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x306);
              }
              uVar10 = 0xf5;
              goto LAB_144ecd2d4;
            }
            if ((param_1[0x36d] == (uint)**(ushort **)(param_1 + 0x5b8)) &&
               (0xb < *(ulonglong *)(param_1 + 0x360))) {
              FUN_1452720a0(*(undefined8 *)(param_1 + 0x366),local_b8);
              if (local_b8[0] == '\x14') {
                iVar4 = FUN_144ecc0c0();
                if ((iVar4 < 0) ||
                   ((iVar4 = FUN_145271e10(param_1), iVar4 < 1 &&
                    (iVar4 = FUN_144eafd10(param_1), iVar4 != 0)))) break;
                *(undefined8 *)(param_1 + 0x360) = 0;
                param_1[0x36c] = 1;
              }
              else {
                iVar4 = FUN_144eafbf0(param_1);
                if (iVar4 == 0) {
                  uVar7 = 0x50;
                  local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x2c5);
                  uVar10 = 0x44;
                  goto LAB_144ecd2dd;
                }
                FUN_144eafd20(param_1,1);
                iVar4 = (**(code **)(param_1 + 0xc))(param_1);
                if ((iVar4 < 0) || (iVar4 == 0)) break;
              }
              if (((*(byte *)(param_1 + 0x174) & 4) == 0) && (*(longlong *)(param_1 + 0x21c) == 0))
              {
                param_1[10] = 3;
                uVar6 = FUN_144b98ab0(param_1);
                FUN_144b9e640(uVar6,0xf);
                FUN_144b9e620(uVar6,9);
                break;
              }
              goto LAB_144eccf40;
            }
          }
LAB_144ecd19f:
          *(undefined8 *)(param_1 + 0x360) = 0;
          param_1[0x36c] = 1;
          goto LAB_144eccf40;
        }
        *(undefined8 *)(param_1 + 0x210) = 0;
        iVar4 = FUN_14527cd50(param_1);
        if (0 < iVar4) {
          *(undefined8 *)(param_1 + 0x210) = 1;
          goto LAB_144ecd00b;
        }
        iVar4 = FUN_145271ba0(param_1);
      } while (0 < iVar4);
    }
    else {
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,0x16a);
      local_e8 = "ssl\\record\\rec_layer_d1.c";
      FUN_144eafc90(param_1,0x50,0x102,0x44);
    }
  }
LAB_144ecd2f5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144ecd5d0 FUN_144ecd5d0 body=105 status=ok
// SIG undefined FUN_144ecd5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecd5d0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (0x4000 < param_4) {
    FUN_144eafc90(param_1,0x50,0x221,0x44,"ssl\\record\\rec_layer_d1.c",0x318,0x144ecd5da);
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  uVar1 = FUN_144ecd640();
  return uVar1;
}



// FUNCTION 144ecd640 FUN_144ecd640 body=1193 status=ok
// SIG undefined FUN_144ecd640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecd640(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,ulonglong param_4,
                  int param_5,ulonglong *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [32];
  ulonglong *local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  undefined1 *local_b8;
  ulonglong *local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  ulonglong local_a0;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = param_6;
  local_b8 = param_3;
  if (*(longlong *)(param_1 + 0x226) != 0) {
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x333);
    local_d8 = (ulonglong *)0x149bfb0d8;
    FUN_144eafc90(param_1,0x50,0xf5,0x44);
    goto LAB_144ecdadd;
  }
  if (((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
      (iVar2 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(), iVar2 < 1)) ||
     ((param_4 == 0 && (param_5 == 0)))) goto LAB_144ecdadd;
  uVar3 = FUN_144b9bba0(param_1);
  if (uVar3 < param_4) {
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x344);
    local_d8 = (ulonglong *)0x149bfb0d8;
    FUN_144eafc90(param_1,0x50,0xf5);
    goto LAB_144ecdadd;
  }
  if (((*(longlong *)(param_1 + 0x142) == 0) || (*(longlong *)(param_1 + 0x11a) == 0)) ||
     (lVar6 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x120)), lVar6 == 0)) {
    iVar2 = 0;
  }
  else {
    uVar7 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x120));
    iVar2 = FUN_144ba3cd0(uVar7);
    if (iVar2 < 0) {
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x354);
      local_d8 = (ulonglong *)0x149bfb0d8;
      FUN_144eafc90(param_1,0x50,0xf5);
      goto LAB_144ecdadd;
    }
  }
  puVar1 = *(undefined1 **)(param_1 + 0x21e);
  *puVar1 = (char)param_2;
  if ((**(int **)(param_1 + 2) == 0x1ffff) && (param_1[0x176] != 0x100)) {
    *(undefined2 *)(puVar1 + 1) = 0xfffe;
  }
  else {
    puVar1[1] = (char)((uint)*param_1 >> 8);
    puVar1[2] = *(undefined1 *)param_1;
  }
  local_a4 = param_2;
  if (*(longlong *)(param_1 + 0x11a) == 0) {
LAB_144ecd82b:
    iVar4 = 0;
  }
  else {
    uVar7 = FUN_144ba3db0();
    uVar3 = FUN_144ba3da0(uVar7);
    uVar3 = uVar3 & 0xf0007;
    if (uVar3 == 2) {
      iVar4 = FUN_144ba3df0(*(undefined8 *)(param_1 + 0x11a));
      if (iVar4 < 2) goto LAB_144ecd82b;
    }
    else {
      iVar4 = 8;
      if ((uVar3 != 6) && (iVar4 = 0, uVar3 == 7)) {
        iVar4 = 8;
      }
    }
  }
  lVar6 = (longlong)iVar4;
  local_88 = puVar1 + lVar6 + 0xd;
  local_80 = local_b8;
  local_a0 = param_4;
  if (*(longlong *)(param_1 + 0x116) == 0) {
    memcpy(local_88,local_b8,param_4);
    local_80 = local_88;
LAB_144ecd89d:
    if (((**(uint **)(param_1 + 0x2a) & 0x400) == 0) && (iVar2 != 0)) {
      iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                        (param_1,local_a8,puVar1 + local_a0 + lVar6 + 0xd,1);
      if (iVar5 != 0) {
        local_a0 = local_a0 + (longlong)iVar2;
        goto LAB_144ecd900;
      }
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3a4);
    }
    else {
LAB_144ecd900:
      local_88 = puVar1 + 0xd;
      if (iVar4 != 0) {
        local_a0 = local_a0 + lVar6;
      }
      local_80 = local_88;
      iVar4 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))(param_1,local_a8,1);
      if (0 < iVar4) {
        if (((**(uint **)(param_1 + 0x2a) & 0x400) != 0) && (iVar2 != 0)) {
          iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,local_a8,puVar1 + local_a0 + 0xd,1);
          if (iVar4 == 0) {
            local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3bd);
            goto LAB_144ecd997;
          }
          local_a0 = local_a0 + (longlong)iVar2;
        }
        puVar1[3] = *(undefined1 *)(*(longlong *)(param_1 + 0x5b8) + 3);
        puVar1[4] = *(undefined1 *)(*(longlong *)(param_1 + 0x5b8) + 2);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((longlong)param_1 + 0x16d2);
        *(undefined2 *)(puVar1 + 9) = *(undefined2 *)((longlong)param_1 + 0x16d6);
        puVar1[0xb] = (char)(local_a0 >> 8);
        puVar1[0xc] = (undefined1)local_a0;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          local_c8 = *(undefined8 *)(param_1 + 0x30);
          local_d8 = (ulonglong *)0xd;
          local_d0 = param_1;
          (**(code **)(param_1 + 0x2e))(1,0,0x100,puVar1);
        }
        local_a0 = local_a0 + 0xd;
        local_a4 = param_2;
        FUN_144eb4550(param_1 + 0x5b4);
        if (param_5 == 0) {
          *(ulonglong *)(param_1 + 0x226) = local_a0;
          *(undefined8 *)(param_1 + 0x224) = 0;
          local_d8 = local_b0;
          *(ulonglong *)(param_1 + 0x5aa) = param_4;
          *(undefined1 **)(param_1 + 0x5b0) = local_b8;
          param_1[0x5ac] = param_2;
          *(ulonglong *)(param_1 + 0x5ae) = param_4;
          FUN_144eb4090(param_1,param_2,local_b8,param_4);
        }
        else {
          *local_b0 = local_a0;
        }
        goto LAB_144ecdadd;
      }
      iVar2 = FUN_144eafd10(param_1);
      if (iVar2 != 0) goto LAB_144ecdadd;
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3b4);
    }
LAB_144ecd997:
    uVar7 = 0x44;
  }
  else {
    iVar5 = FUN_14527c370(param_1,local_a8);
    if (iVar5 != 0) goto LAB_144ecd89d;
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x390);
    uVar7 = 0x8d;
  }
  local_d8 = (ulonglong *)0x149bfb0d8;
  FUN_144eafc90(param_1,0x50,0xf5,uVar7);
LAB_144ecdadd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144ecdb00 FUN_144ecdb00 body=141 status=ok
// SIG undefined FUN_144ecdb00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecdb00(longlong param_1,ulonglong param_2)

{
  short *psVar1;
  longlong lVar2;
  
  if ((param_2 & 1) != 0) {
    **(short **)(param_1 + 0x16e0) = **(short **)(param_1 + 0x16e0) + 1;
    lVar2 = *(longlong *)(param_1 + 0x16e0);
    *(undefined8 *)(lVar2 + 4) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x16e0);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    FUN_144ecbec0(param_1);
    *(undefined8 *)(param_1 + 0x16c8) = 0;
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x50) = *(undefined8 *)(param_1 + 0x16d0);
  psVar1 = (short *)(*(longlong *)(param_1 + 0x16e0) + 2);
  *psVar1 = *psVar1 + 1;
  *(undefined8 *)(param_1 + 0x16d0) = 0;
  return;
}



// FUNCTION 144ecdb90 FUN_144ecdb90 body=81 status=ok
// SIG undefined FUN_144ecdb90(void)

ushort * FUN_144ecdb90(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  *param_3 = 0;
  puVar2 = *(ushort **)(param_1 + 0x16e0);
  uVar1 = *puVar2;
  if (*(uint *)(param_2 + 0x3c) == (uint)uVar1) {
    return puVar2 + 2;
  }
  if (((*(uint *)(param_2 + 0x3c) == uVar1 + 1) && (puVar2[0x10] != uVar1)) &&
     (*(int *)(param_2 + 4) - 0x15U < 2)) {
    *param_3 = 1;
    return (ushort *)(*(longlong *)(param_1 + 0x16e0) + 0x10);
  }
  return (ushort *)0x0;
}



// FUNCTION 144ecdbf0 FUN_144ecdbf0 body=486 status=ok
// SIG undefined FUN_144ecdbf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecdbf0(longlong param_1)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  
  lVar4 = FUN_144eb4b10(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x28));
  if (lVar4 != 0) {
    psVar2 = *(short **)(param_1 + 0x16e0);
    if (psVar2[0x10] != *psVar2) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x870) != 0) {
      return 1;
    }
    lVar4 = FUN_144eb4b10(*(undefined8 *)(psVar2 + 0x14));
    while (lVar4 != 0) {
      lVar4 = FUN_144eb4b20(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x28));
      if (lVar4 != 0) {
        FUN_144ece060(param_1,lVar4);
        FUN_144ea6530(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0xd1);
        FUN_144eb49a0(lVar4);
      }
      puVar5 = *(ushort **)(param_1 + 0x16e0);
      uVar1 = *puVar5;
      if (*(uint *)(param_1 + 0xdb4) == (uint)uVar1) {
        puVar5 = puVar5 + 2;
      }
      else {
        if (((*(uint *)(param_1 + 0xdb4) != uVar1 + 1) || (puVar5[0x10] == uVar1)) ||
           (1 < *(int *)(param_1 + 0xd7c) - 0x15U)) goto LAB_144ecddae;
        puVar5 = puVar5 + 8;
      }
      if (puVar5 == (ushort *)0x0) {
LAB_144ecddae:
        FUN_144eafc90(param_1,0x50,0x1a8,0x44,"ssl\\record\\rec_layer_d1.c",0x10b);
        return 0;
      }
      iVar3 = FUN_145282ed0(param_1,puVar5);
      if ((iVar3 == 0) || (iVar3 = FUN_14527c8b0(param_1,puVar5), iVar3 == 0)) {
        iVar3 = FUN_144eafd10(param_1);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        *(undefined8 *)(param_1 + 0xd80) = 0;
        *(undefined8 *)(param_1 + 0x1680) = 0;
      }
      else {
        iVar3 = FUN_144ecde50(param_1,*(longlong *)(param_1 + 0x16e0) + 0x30,param_1 + 0xdb8);
        if (iVar3 < 0) {
          return 0;
        }
      }
      lVar4 = FUN_144eb4b10(*(undefined8 *)(*(longlong *)(param_1 + 0x16e0) + 0x28));
    }
  }
  (*(undefined2 **)(param_1 + 0x16e0))[0x18] = **(undefined2 **)(param_1 + 0x16e0);
  (*(short **)(param_1 + 0x16e0))[0x10] = **(short **)(param_1 + 0x16e0) + 1;
  return 1;
}



// FUNCTION 144ecdde0 FUN_144ecdde0 body=107 status=ok
// SIG undefined FUN_144ecdde0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecdde0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144eb4b20(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    FUN_144ece060(param_1,lVar1);
    FUN_144ea6530(*(undefined8 *)(lVar1 + 8),"ssl\\record\\rec_layer_d1.c",0xd1);
    FUN_144eb49a0(lVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 144ecde50 FUN_144ecde50 body=525 status=ok
// SIG undefined FUN_144ecde50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecde50(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  uVar3 = FUN_144eb4bb0(*(undefined8 *)(param_2 + 8));
  if (99 < uVar3) {
    return 0;
  }
  puVar4 = (undefined8 *)FUN_144ea64e0(0x80,"ssl\\record\\rec_layer_d1.c");
  lVar5 = FUN_144eb4910(param_3);
  if ((puVar4 == (undefined8 *)0x0) || (lVar5 == 0)) {
    FUN_144ea6530(puVar4,"ssl\\record\\rec_layer_d1.c",0x9a);
    FUN_144eb49a0(lVar5);
    FUN_144eafc90(param_1,0x50,0xf7,0x44,"ssl\\record\\rec_layer_d1.c",CONCAT44(uVar7,0x9d));
  }
  else {
    *puVar4 = *(undefined8 *)(param_1 + 0x1678);
    puVar4[1] = *(undefined8 *)(param_1 + 0x1680);
    uVar1 = *(undefined8 *)(param_1 + 0x858);
    puVar4[2] = *(undefined8 *)(param_1 + 0x850);
    puVar4[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x868);
    puVar4[4] = *(undefined8 *)(param_1 + 0x860);
    puVar4[5] = uVar1;
    puVar4[6] = *(undefined8 *)(param_1 + 0x870);
    uVar1 = *(undefined8 *)(param_1 + 0xd80);
    puVar4[7] = *(undefined8 *)(param_1 + 0xd78);
    puVar4[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xd90);
    puVar4[9] = *(undefined8 *)(param_1 + 0xd88);
    puVar4[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xda0);
    puVar4[0xb] = *(undefined8 *)(param_1 + 0xd98);
    puVar4[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xdb0);
    puVar4[0xd] = *(undefined8 *)(param_1 + 0xda8);
    puVar4[0xe] = uVar1;
    puVar4[0xf] = *(undefined8 *)(param_1 + 0xdb8);
    *(undefined8 **)(lVar5 + 8) = puVar4;
    *(undefined8 *)(param_1 + 0x1678) = 0;
    *(undefined8 *)(param_1 + 0x1680) = 0;
    *(undefined8 *)(param_1 + 0x850) = 0;
    *(undefined8 *)(param_1 + 0x858) = 0;
    *(undefined8 *)(param_1 + 0x860) = 0;
    *(undefined8 *)(param_1 + 0x868) = 0;
    *(undefined8 *)(param_1 + 0x870) = 0;
    memset((undefined8 *)(param_1 + 0xd78),0,0x900);
    iVar2 = FUN_144eb4570(param_1);
    if (iVar2 != 0) {
      lVar6 = FUN_144eb4a60(*(undefined8 *)(param_2 + 8),lVar5);
      if (lVar6 == 0) {
        FUN_144ea6530(puVar4[2],"ssl\\record\\rec_layer_d1.c",0xc1);
        FUN_144ea6530(puVar4,"ssl\\record\\rec_layer_d1.c",0xc2);
        FUN_144eb49a0(lVar5);
      }
      return 1;
    }
    FUN_144ea6530(puVar4[2],"ssl\\record\\rec_layer_d1.c",0xb9);
    FUN_144ea6530(puVar4,"ssl\\record\\rec_layer_d1.c",0xba);
    FUN_144eb49a0(lVar5);
  }
  return 0xffffffff;
}



// FUNCTION 144ece060 FUN_144ece060 body=200 status=ok
// SIG undefined FUN_144ece060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ece060(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  FUN_144eb45c0(param_1 + 0x850);
  *(longlong *)(param_1 + 0x1678) = *plVar1;
  *(longlong *)(param_1 + 0x1680) = plVar1[1];
  lVar2 = plVar1[3];
  *(longlong *)(param_1 + 0x850) = plVar1[2];
  *(longlong *)(param_1 + 0x858) = lVar2;
  lVar2 = plVar1[5];
  *(longlong *)(param_1 + 0x860) = plVar1[4];
  *(longlong *)(param_1 + 0x868) = lVar2;
  *(longlong *)(param_1 + 0x870) = plVar1[6];
  lVar2 = plVar1[8];
  *(longlong *)(param_1 + 0xd78) = plVar1[7];
  *(longlong *)(param_1 + 0xd80) = lVar2;
  lVar2 = plVar1[10];
  *(longlong *)(param_1 + 0xd88) = plVar1[9];
  *(longlong *)(param_1 + 0xd90) = lVar2;
  lVar2 = plVar1[0xc];
  *(longlong *)(param_1 + 0xd98) = plVar1[0xb];
  *(longlong *)(param_1 + 0xda0) = lVar2;
  lVar2 = plVar1[0xe];
  *(longlong *)(param_1 + 0xda8) = plVar1[0xd];
  *(longlong *)(param_1 + 0xdb0) = lVar2;
  *(longlong *)(param_1 + 0xdb8) = plVar1[0xf];
  lVar2 = *plVar1;
  *(undefined4 *)(param_1 + 0x16ca) = *(undefined4 *)(lVar2 + 5);
  *(undefined2 *)(param_1 + 0x16ce) = *(undefined2 *)(lVar2 + 9);
  return 1;
}



// FUNCTION 144ece130 FUN_144ece130 body=271 status=ok
// SIG undefined FUN_144ece130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ece130(int *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
  if (((((*(byte *)(lVar1 + 0x60) & 8) == 0) && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) &&
      (iVar2 != 0x10000)) || ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) {
    iVar2 = FUN_144eb9dc0(param_3);
  }
  else {
    iVar2 = (**(code **)(lVar1 + 0x50))(param_3);
  }
  if ((*param_1 == 0x300) && (iVar2 == 0x46)) {
    iVar2 = 0x28;
  }
  else if (iVar2 < 0) {
    return 0xffffffff;
  }
  if (((*(byte *)(param_1 + 0x11) & 1) == 0) || (iVar2 == 0)) {
    if ((param_2 == 2) && (*(longlong *)(param_1 + 0x142) != 0)) {
      FUN_144eb1190(*(undefined8 *)(param_1 + 0x1da));
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    *(char *)(*(longlong *)(param_1 + 0x2a) + 0x100) = (char)param_2;
    *(char *)(*(longlong *)(param_1 + 0x2a) + 0x101) = (char)iVar2;
    iVar2 = FUN_144eb2220(param_1 + 0x20c);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144ece228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144ece240 FUN_144ece240 body=303 status=ok
// SIG undefined FUN_144ece240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ece240(undefined4 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffe0;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 0;
  local_res8 = 2;
  uVar1 = FUN_144eb2a30(param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,&local_res8,1,
                        in_stack_ffffffffffffffe0 & 0xffffffff00000000,local_res10,0x144ece250);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xfc) = 1;
    return uVar1;
  }
  FUN_144b9efc0(*(undefined8 *)(param_1 + 6),0xb,0);
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,0x15,*(longlong *)(param_1 + 0x2a) + 0x100,2,param_1,
               *(undefined8 *)(param_1 + 0x30));
  }
  pcVar2 = *(code **)(param_1 + 0x15a);
  if ((pcVar2 != (code *)0x0) ||
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,0x4008,
              CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x100),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x2a) + 0x101)));
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 144ece370 FUN_144ece370 body=208 status=ok
// SIG undefined FUN_144ece370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ece370(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x21;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0x11;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x508);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) {
      FUN_144ba24f0(0x14,0x124,0x85,"ssl\\s3_msg.c",0x18,0x144ece380);
      return 0;
    }
    *(undefined8 *)(lVar1 + 0x1e0) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    uVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))(param_1,uVar4);
  return (ulonglong)(iVar2 != 0);
}



// FUNCTION 144ece440 FUN_144ece440 body=48 status=ok
// SIG undefined FUN_144ece440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ece440(void)

{
  if (DAT_14c7969c0 != 0) {
    DAT_14c7969c0 = 0;
                    /* WARNING: Could not recover jumptable at 0x000144ece464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Ordinal_116();
    return;
  }
  return;
}



// FUNCTION 144ece470 FUN_144ece470 body=178 status=ok
// SIG undefined FUN_144ece470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144ece470(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ece485;
  puVar1 = (undefined4 *)FUN_144ea6670(0x60,"crypto\\bio\\bio_meth.c",0x26);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_144ea6dc0(param_2,"crypto\\bio\\bio_meth.c",0x29);
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      return puVar1;
    }
  }
  FUN_144ea6530(puVar1,"crypto\\bio\\bio_meth.c",0x2a);
  FUN_144ba24f0(0x20,0x92,0x41,"crypto\\bio\\bio_meth.c",0x2b,uVar3);
  return (undefined4 *)0x0;
}



// FUNCTION 144ece530 FUN_144ece530 body=69 status=ok
// SIG undefined FUN_144ece530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ece530(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"crypto\\bio\\bio_meth.c",0x35);
    FUN_144ea6530(param_1,"crypto\\bio\\bio_meth.c",0x36);
  }
  return;
}



// FUNCTION 144ece580 FUN_144ece580 body=21 status=ok
// SIG undefined FUN_144ece580(void)

undefined8 FUN_144ece580(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(code **)(param_1 + 0x10) = FUN_144ece5f0;
  return 1;
}



// FUNCTION 144ece5a0 FUN_144ece5a0 body=21 status=ok
// SIG undefined FUN_144ece5a0(void)

undefined8 FUN_144ece5a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x20) = FUN_144ece640;
  return 1;
}



// FUNCTION 144ece5c0 FUN_144ece5c0 body=10 status=ok
// SIG undefined FUN_144ece5c0(void)

undefined8 FUN_144ece5c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



// FUNCTION 144ece5d0 FUN_144ece5d0 body=10 status=ok
// SIG undefined FUN_144ece5d0(void)

undefined8 FUN_144ece5d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}



// FUNCTION 144ece5e0 FUN_144ece5e0 body=10 status=ok
// SIG undefined FUN_144ece5e0(void)

undefined8 FUN_144ece5e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}



// FUNCTION 144ece5f0 FUN_144ece5f0 body=69 status=ok
// SIG undefined FUN_144ece5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ece5f0(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if ((int)uVar1 < 1) {
    *param_4 = 0;
    return uVar1;
  }
  *param_4 = (longlong)(int)uVar1;
  return 1;
}



// FUNCTION 144ece640 FUN_144ece640 body=69 status=ok
// SIG undefined FUN_144ece640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ece640(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  if ((int)uVar1 < 1) {
    *param_4 = 0;
    return uVar1;
  }
  *param_4 = (longlong)(int)uVar1;
  return 1;
}



// FUNCTION 144ece690 FUN_144ece690 body=149 status=ok
// SIG undefined FUN_144ece690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144ece690(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ece69c;
  puVar1 = (undefined4 *)FUN_144ea64e0(0x68,"crypto\\bn\\bn_mont.c",0xe8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(3,0x95,0x41,"crypto\\bn\\bn_mont.c",0xe9,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  FUN_144ba1390(puVar1 + 2);
  FUN_144ba1390(puVar1 + 8);
  FUN_144ba1390(puVar1 + 0xe);
  *(undefined8 *)(puVar1 + 0x16) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  puVar1[0x18] = 1;
  return puVar1;
}



// FUNCTION 144ece730 FUN_144ece730 body=60 status=ok
// SIG undefined FUN_144ece730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ece730(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144ecebf0();
  FUN_144ba1350(param_1);
  return uVar1;
}



// FUNCTION 144ece770 FUN_144ece770 body=50 status=ok
// SIG undefined FUN_144ece770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ece770(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144eced50();
  FUN_144ba1350(param_1);
  return uVar1;
}



// FUNCTION 144ece7b0 FUN_144ece7b0 body=82 status=ok
// SIG undefined FUN_144ece7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ece7b0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ba0630(param_1 + 8);
    FUN_144ba0630(param_1 + 0x20);
    FUN_144ba0630(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_144ea6530(param_1,"crypto\\bn\\bn_mont.c",0x104);
    }
  }
  return;
}



// FUNCTION 144ece810 FUN_144ece810 body=653 status=ok
// SIG undefined FUN_144ece810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ece810(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_48 [2];
  longlong *local_38;
  uint local_30;
  undefined8 local_2c;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ece824;
  uVar5 = 0;
  uVar6 = 0;
  iVar2 = FUN_144ba0340(param_2);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_144eede20(param_3);
  puVar3 = (undefined8 *)FUN_144eede90(param_3);
  uVar7 = uVar5;
  if ((puVar3 != (undefined8 *)0x0) && (lVar4 = FUN_144ba06b0(param_1 + 8,param_2), lVar4 != 0)) {
    iVar2 = FUN_144ba0230(param_2,4);
    if (iVar2 != 0) {
      FUN_144ba0220(param_1 + 8,4);
    }
    param_1[0xc] = 0;
    FUN_144ba1390(&local_38);
    local_38 = local_48;
    local_2c = 2;
    iVar2 = FUN_144ba0230(param_2,4);
    if (iVar2 != 0) {
      FUN_144ba0220(&local_38,4);
    }
    iVar2 = FUN_144ba03d0(param_2);
    *param_1 = iVar2 + 0x3f + (iVar2 + 0x3f >> 0x1f & 0x3fU) & 0xffffffc0;
    FUN_144ba0bb0(param_1 + 2,0);
    iVar2 = FUN_144ba0f40(param_1 + 2,0x40);
    if (iVar2 != 0) {
      local_48[0] = *(longlong *)*param_2;
      local_48[1] = 0;
      local_30 = (uint)(local_48[0] != 0);
      iVar2 = FUN_144ba0350(&local_38);
      if (iVar2 == 0) {
        lVar4 = FUN_144ef05b0(puVar3,param_1 + 2,&local_38,param_3);
        uVar7 = uVar6;
        if (lVar4 == 0) goto LAB_144ecea79;
      }
      else {
        FUN_144ba0bb0(puVar3,0);
      }
      iVar2 = FUN_144eefdb0(puVar3,puVar3,0x40);
      uVar7 = uVar5;
      if (iVar2 != 0) {
        iVar2 = FUN_144ba0340(puVar3);
        if (iVar2 == 0) {
          iVar2 = FUN_14526b300(puVar3,1);
        }
        else {
          iVar2 = FUN_144ba0bb0(puVar3,0xffffffffffffffff);
        }
        uVar7 = uVar6;
        if ((iVar2 != 0) && (iVar2 = FUN_144eef830(puVar3,0,puVar3,&local_38,param_3), iVar2 != 0))
        {
          if (0 < *(int *)(puVar3 + 1)) {
            uVar5 = *(undefined8 *)*puVar3;
          }
          *(undefined8 *)(param_1 + 0x14) = uVar5;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          FUN_144ba0bb0(param_1 + 2,0);
          iVar2 = FUN_144ba0f40(param_1 + 2,*param_1 * 2);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_144eef830(0,param_1 + 2,param_1 + 2,param_1 + 8,param_3), iVar2 != 0)) {
            uVar1 = param_1[10];
            for (lVar4 = (longlong)(int)param_1[4]; lVar4 < (int)uVar1; lVar4 = lVar4 + 1) {
              *(undefined8 *)(*(longlong *)(param_1 + 2) + lVar4 * 8) = 0;
            }
            param_1[4] = uVar1;
            uVar7 = 1;
          }
        }
      }
    }
  }
LAB_144ecea79:
  FUN_144eedf20(param_3);
  return uVar7;
}



// FUNCTION 144eceaa0 FUN_144eceaa0 body=131 status=ok
// SIG undefined FUN_144eceaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144eceaa0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = FUN_144ba06b0(param_1 + 2,param_2 + 2);
  if (((lVar1 != 0) && (lVar1 = FUN_144ba06b0(param_1 + 8,param_2 + 8), lVar1 != 0)) &&
     (lVar1 = FUN_144ba06b0(param_1 + 0xe,param_2 + 0xe), lVar1 != 0)) {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    return param_1;
  }
  return (undefined4 *)0x0;
}



// FUNCTION 144eceb30 FUN_144eceb30 body=182 status=ok
// SIG undefined FUN_144eceb30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144eceb30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  FUN_144e98600(param_2);
  lVar2 = *param_1;
  FUN_144e98640(param_2);
  if (lVar2 == 0) {
    lVar2 = FUN_144ece690();
    if (lVar2 != 0) {
      iVar1 = FUN_144ece810(lVar2,param_3,param_4);
      if (iVar1 != 0) {
        FUN_144e98620(param_2);
        if (*param_1 == 0) {
          *param_1 = lVar2;
        }
        else {
          FUN_144ece7b0(lVar2);
          lVar2 = *param_1;
        }
        FUN_144e98640(param_2);
        return lVar2;
      }
      FUN_144ece7b0(lVar2);
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 144ecebf0 FUN_144ecebf0 body=299 status=ok
// SIG undefined FUN_144ecebf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144ecebf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = *(int *)(param_4 + 0x28);
  if (((iVar2 - 2U < 0x1ff) && (*(int *)(param_2 + 1) == iVar2)) && (*(int *)(param_3 + 1) == iVar2)
     ) {
    lVar3 = FUN_144ba1290(param_1,iVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_142661b80(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                          CONCAT44(uVar4,iVar2));
    if (iVar1 != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
      *(int *)(param_1 + 1) = iVar2;
      return 1;
    }
  }
  if (iVar2 * 2 < *(int *)(param_2 + 1) + *(int *)(param_3 + 1)) {
    return 0;
  }
  FUN_144eede20(param_5);
  lVar3 = FUN_144eede90(param_5);
  uVar4 = 0;
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_1452830f0(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_144eee5d0(lVar3,param_2,param_3,param_5);
    }
    uVar4 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_144ecede0(param_1,lVar3,param_4);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
  }
  FUN_144eedf20(param_5);
  return uVar4;
}



// FUNCTION 144eced20 FUN_144eced20 body=38 status=ok
// SIG undefined FUN_144eced20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144eced20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  FUN_144ecebf0(param_1,param_2,param_3 + 8,param_3,param_4);
  return;
}



// FUNCTION 144eced50 FUN_144eced50 body=138 status=ok
// SIG undefined FUN_144eced50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144eced50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  FUN_144eede20(param_4);
  lVar2 = FUN_144eede90(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_144ba06b0(lVar2,param_2);
    if (lVar3 != 0) {
      uVar1 = FUN_144ecede0(param_1,lVar2,param_3);
    }
  }
  FUN_144eedf20(param_4);
  return uVar1;
}



// FUNCTION 144ecede0 FUN_144ecede0 body=917 status=ok
// SIG undefined FUN_144ecede0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecede0(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  
  uVar3 = *(uint *)(param_3 + 0x28);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  uVar16 = uVar3 * 2;
  lVar10 = FUN_144ba1290(param_2,uVar16);
  if (lVar10 == 0) {
    return 0;
  }
  iVar4 = (int)param_2[1];
  uVar15 = 0;
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
  puVar13 = (ulonglong *)*param_2;
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  uVar18 = uVar15;
  if ((0 < (int)uVar16) && (uVar18 = 0, 3 < uVar16)) {
    uVar9 = uVar16 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    puVar17 = puVar13;
    uVar18 = uVar15;
    do {
      iVar20 = (int)uVar18;
      uVar18 = (ulonglong)(iVar20 + 4U);
      *puVar17 = -(ulonglong)((uint)(iVar20 - iVar4) >> 0x1f) & *puVar17;
      puVar17[1] = -(ulonglong)((uint)((iVar20 + 1) - iVar4) >> 0x1f) & puVar17[1];
      puVar17[2] = -(ulonglong)((uint)((iVar20 + 2) - iVar4) >> 0x1f) & puVar17[2];
      puVar17[3] = -(ulonglong)((uint)((iVar20 + 3) - iVar4) >> 0x1f) & puVar17[3];
      puVar17 = puVar17 + 4;
    } while ((int)(iVar20 + 4U) < (int)(uVar16 - uVar9));
  }
  for (lVar10 = (longlong)(int)uVar18; lVar10 < (int)uVar16; lVar10 = lVar10 + 1) {
    iVar20 = (int)uVar18;
    uVar18 = (ulonglong)(iVar20 + 1);
    puVar13[lVar10] = puVar13[lVar10] & -(ulonglong)((uint)(iVar20 - iVar4) >> 0x1f);
  }
  *(uint *)(param_2 + 1) = uVar16;
  lVar10 = *(longlong *)(param_3 + 0x50);
  lVar19 = (longlong)(int)uVar3;
  uVar18 = uVar15;
  uVar21 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    do {
      lVar11 = FUN_1452835a0(puVar13,uVar5,uVar3,lVar10 * *puVar13);
      uVar6 = puVar13[lVar19];
      uVar12 = lVar11 + uVar6 + uVar18;
      puVar13[lVar19] = uVar12;
      puVar13 = puVar13 + 1;
      uVar18 = (uVar18 | uVar12 != uVar6) & (ulonglong)(uVar12 <= uVar6);
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  lVar10 = FUN_144ba1290(param_1,(ulonglong)uVar3);
  uVar14 = 0;
  if (lVar10 != 0) {
    uVar6 = *param_1;
    *(uint *)(param_1 + 1) = uVar3;
    *(int *)(param_1 + 2) = (int)param_2[2];
    uVar21 = *param_2 + lVar19 * 8;
    lVar10 = FUN_145283b80(uVar6,uVar21,uVar5,uVar3);
    uVar18 = uVar18 - lVar10;
    uVar16 = 0;
    if (((0 < (int)uVar3) && (3 < uVar3)) &&
       ((uVar6 + (longlong)(int)(uVar3 - 1) * 8 < uVar21 ||
        (uVar21 + (longlong)(int)(uVar3 - 1) * 8 < uVar6)))) {
      uVar9 = uVar3 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      lVar10 = uVar6 - uVar21;
      puVar13 = (ulonglong *)(uVar21 + 0x10);
      uVar12 = uVar15;
      do {
        uVar8 = puVar13[-1];
        puVar17 = puVar13 + 4;
        uVar16 = (int)uVar12 + 4;
        uVar12 = (ulonglong)uVar16;
        uVar15 = uVar15 + 4;
        puVar1 = (ulonglong *)(lVar10 + -0x30 + (longlong)puVar17);
        uVar7 = puVar1[1];
        puVar2 = (ulonglong *)(lVar10 + -0x30 + (longlong)puVar17);
        *puVar2 = uVar18 & puVar13[-2] | ~uVar18 & *puVar1;
        puVar2[1] = uVar18 & uVar8 | ~uVar18 & uVar7;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        puVar1 = (ulonglong *)(lVar10 + -0x20 + (longlong)puVar17);
        uVar7 = puVar1[1];
        uVar8 = puVar13[1];
        puVar2 = (ulonglong *)(lVar10 + -0x20 + (longlong)puVar17);
        *puVar2 = ~uVar18 & *puVar1 | *puVar13 & uVar18;
        puVar2[1] = ~uVar18 & uVar7 | uVar8 & uVar18;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13 = puVar17;
      } while ((longlong)uVar15 < (longlong)(int)(uVar3 - uVar9));
    }
    lVar10 = (longlong)(int)uVar16;
    if (lVar10 < lVar19) {
      lVar19 = lVar19 - lVar10;
      puVar13 = (ulonglong *)(uVar21 + lVar10 * 8);
      do {
        *(ulonglong *)((longlong)puVar13 + (uVar6 - uVar21)) =
             ~uVar18 & *(ulonglong *)((longlong)puVar13 + (uVar6 - uVar21)) | *puVar13 & uVar18;
        *puVar13 = 0;
        lVar19 = lVar19 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar19 != 0);
    }
    uVar14 = 1;
  }
  return uVar14;
}



// FUNCTION 144ecf180 FUN_144ecf180 body=50 status=ok
// SIG undefined FUN_144ecf180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_144ecf180(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_145284dc0();
  if (iVar1 != 0) {
    return (char *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ecf1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = getenv(param_1);
  return pcVar2;
}



// FUNCTION 144ecf1c0 FUN_144ecf1c0 body=139 status=ok
// SIG undefined FUN_144ecf1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecf1c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ecf1d0;
  if (param_1 != 0) {
    if (DAT_14c7973b0 == 0) {
      DAT_14c7973b0 = FUN_145285b00();
    }
    (**(code **)(DAT_14c7973b0 + 0x10))(local_28);
    local_18 = param_1;
    if (param_2 != 0) {
      uVar1 = FUN_1452867a0(local_28,param_2);
      return uVar1;
    }
    FUN_144ba24f0(0xe,0x6c,0x6b,"crypto\\conf\\conf_lib.c",0xfa);
  }
  return 0;
}



// FUNCTION 144ecf250 FUN_144ecf250 body=165 status=ok
// SIG undefined FUN_144ecf250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecf250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_28 [16];
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ecf265;
  if (param_1 == 0) {
    lVar1 = FUN_1452868b0();
    if (lVar1 == 0) {
      FUN_144ba24f0(0xe,0x6d,0x6a,"crypto\\conf\\conf_lib.c",0x10e);
      return 0;
    }
  }
  else {
    if (DAT_14c7973b0 == 0) {
      DAT_14c7973b0 = FUN_145285b00();
    }
    (**(code **)(DAT_14c7973b0 + 0x10))(local_28);
    local_18 = param_1;
    lVar1 = FUN_144ecf480(local_28,param_2,param_3);
  }
  return lVar1;
}



// FUNCTION 144ecf300 FUN_144ecf300 body=74 status=ok
// SIG undefined FUN_144ecf300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecf300(undefined8 param_1)

{
  longlong local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144ecf30c;
  if (DAT_14c7973b0 == 0) {
    DAT_14c7973b0 = FUN_145285b00();
  }
  (**(code **)(DAT_14c7973b0 + 0x10))(local_28);
  local_18 = param_1;
  (**(code **)(local_28[0] + 0x20))(local_28);
  return;
}



// FUNCTION 144ecf350 FUN_144ecf350 body=74 status=ok
// SIG undefined FUN_144ecf350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecf350(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_145285b00();
  }
  lVar1 = (**(code **)(param_1 + 8))(param_1);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xe,0x6f,0x41,"crypto\\conf\\conf_lib.c",0xba);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144ecf3a0 FUN_144ecf3a0 body=29 status=ok
// SIG undefined FUN_144ecf3a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecf3a0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return;
}



// FUNCTION 144ecf3c0 FUN_144ecf3c0 body=66 status=ok
// SIG undefined FUN_144ecf3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecf3c0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    FUN_144ba24f0(0xe,0x71,0x69,"crypto\\conf\\conf_lib.c",0xd2);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ecf3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}



// FUNCTION 144ecf410 FUN_144ecf410 body=108 status=ok
// SIG undefined FUN_144ecf410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecf410(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    FUN_144ba24f0(0xe,0x6c,0x69,"crypto\\conf\\conf_lib.c",0xf5);
    return 0;
  }
  if (param_2 == 0) {
    FUN_144ba24f0(0xe,0x6c,0x6b,"crypto\\conf\\conf_lib.c",0xfa);
    return 0;
  }
  uVar1 = FUN_1452867a0();
  return uVar1;
}



// FUNCTION 144ecf480 FUN_144ecf480 body=165 status=ok
// SIG undefined FUN_144ecf480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecf480(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar3 = 0x144ecf495;
  lVar1 = FUN_1452868b0();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      FUN_144ba24f0(0xe,0x6d,0x6a,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x10e),uVar3);
      return 0;
    }
    FUN_144ba24f0(0xe,0x6d,0x6c,"crypto\\conf\\conf_lib.c",CONCAT44(uVar2,0x111),uVar3);
    FUN_144ba2bd0(4,"group=",param_2," name=",param_3);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144ecf530 FUN_144ecf530 body=294 status=ok
// SIG undefined FUN_144ecf530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecf530(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ecf544;
  pcVar6 = FUN_144ecf660;
  if (param_4 == (int *)0x0) {
    FUN_144ba24f0(0xe,0x70,0x43,"crypto\\conf\\conf_lib.c",0x129,0x144ecf544);
    return 0;
  }
  puVar4 = (undefined1 *)FUN_144ecf480();
  uVar5 = 0;
  if (puVar4 != (undefined1 *)0x0) {
    pcVar8 = (code *)&LAB_144ecf680;
    if (param_1 != (longlong *)0x0) {
      pcVar2 = *(code **)(*param_1 + 0x38);
      if (pcVar2 != (code *)0x0) {
        pcVar6 = pcVar2;
      }
      pcVar2 = *(code **)(*param_1 + 0x40);
      if (pcVar2 != (code *)0x0) {
        pcVar8 = pcVar2;
      }
    }
    iVar7 = 0;
    iVar3 = (*pcVar6)(param_1,*puVar4);
    while (iVar3 != 0) {
      iVar3 = (*pcVar8)(param_1,*puVar4);
      if ((0x7fffffff - iVar3) / 10 < iVar7) {
        FUN_144ba24f0(0xe,0x70,0x79,"crypto\\conf\\conf_lib.c",0x13c,uVar9);
        return 0;
      }
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
      iVar7 = iVar3 + iVar7 * 10;
      iVar3 = (*pcVar6)(param_1,*puVar1);
    }
    *param_4 = iVar7;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144ecf660 FUN_144ecf660 body=28 status=ok
// SIG undefined FUN_144ecf660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecf660(undefined8 param_1,char param_2)

{
  FUN_144ecfdd0((int)param_2,4);
  return;
}



// FUNCTION 144ecf690 FUN_144ecf690 body=24 status=ok
// SIG undefined FUN_144ecf690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecf690(void)

{
  FUN_144ecfc50(0);
  return;
}



// FUNCTION 144ecf6b0 FUN_144ecf6b0 body=259 status=ok
// SIG undefined FUN_144ecf6b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecf6b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ecf6bc;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 < 2) {
      if (((*(byte *)((longlong)param_1 + 0x14) & 4) == 0) &&
         (*(code **)(*param_1 + 0x10) != (code *)0x0)) {
        iVar3 = (**(code **)(*param_1 + 0x10))();
        if (iVar3 == 0) {
          FUN_144ba24f0(0x25,0x6f,0x6b,"crypto\\dso\\dso_lib.c",0x4f,uVar4);
          return 0;
        }
      }
      if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
        iVar3 = (**(code **)(*param_1 + 0x40))(param_1);
        if (iVar3 == 0) {
          FUN_144ba24f0(0x25,0x6f,0x66,"crypto\\dso\\dso_lib.c",0x55,uVar4);
          return 0;
        }
      }
      FUN_144babdb0(param_1[1]);
      FUN_144ea6530(param_1[6],"crypto\\dso\\dso_lib.c",0x5a);
      FUN_144ea6530(param_1[7],"crypto\\dso\\dso_lib.c",0x5b);
      FUN_144e98660(param_1[8]);
      FUN_144ea6530(param_1,"crypto\\dso\\dso_lib.c",0x5d);
    }
  }
  return 1;
}



// FUNCTION 144ecf7c0 FUN_144ecf7c0 body=171 status=ok
// SIG undefined FUN_144ecf7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ecf7c0(longlong *param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  
  if (param_1 == (longlong *)0x0) {
    FUN_144ba24f0(0x25,0x6e,0x43,"crypto\\dso\\dso_lib.c",0xcd);
    return 0xffffffff;
  }
  if (param_2 == 1) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0x14);
  }
  if (param_2 == 2) {
    *(uint *)((longlong)param_1 + 0x14) = param_3;
    return 0;
  }
  if (param_2 != 3) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x000144ecf822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar1;
    }
    FUN_144ba24f0(0x25,0x6e,0x6c,"crypto\\dso\\dso_lib.c",0xe1);
    return 0xffffffff;
  }
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | param_3;
  return 0;
}



// FUNCTION 144ecf870 FUN_144ecf870 body=247 status=ok
// SIG undefined FUN_144ecf870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecf870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144ecf87c;
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_144ba24f0(0x25,0x81,0x43,"crypto\\dso\\dso_lib.c",0xf5,0x144ecf87c);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_144ba24f0(0x25,0x81,0x6e,"crypto\\dso\\dso_lib.c",0xf9,0x144ecf87c);
    return 0;
  }
  lVar1 = FUN_144ea6dc0(param_2,"crypto\\dso\\dso_lib.c",0xfd);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x25,0x81,0x41,"crypto\\dso\\dso_lib.c",0xff,uVar2);
    return 0;
  }
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x30),"crypto\\dso\\dso_lib.c",0x102);
  *(longlong *)(param_1 + 0x30) = lVar1;
  return 1;
}



// FUNCTION 144ecf970 FUN_144ecf970 body=176 status=ok
// SIG undefined FUN_144ecf970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecf970(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ecf97c;
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0x11d;
    uVar2 = 0x43;
    goto LAB_144ecfa04;
  }
  if ((param_2 == 0) && (param_2 = param_1[6], param_2 == 0)) {
    uVar3 = 0x123;
    uVar2 = 0x6f;
    goto LAB_144ecfa04;
  }
  if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
    if ((code *)param_1[4] == (code *)0x0) {
      if (*(code **)(*param_1 + 0x28) == (code *)0x0) goto LAB_144ecf9de;
      lVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    }
    else {
      lVar1 = (*(code *)param_1[4])(param_1,param_2);
    }
    if (lVar1 != 0) {
      return lVar1;
    }
  }
LAB_144ecf9de:
  lVar1 = FUN_144ea6dc0(param_2,"crypto\\dso\\dso_lib.c",0x12d);
  if (lVar1 != 0) {
    return lVar1;
  }
  uVar3 = 0x12f;
  uVar2 = 0x41;
LAB_144ecfa04:
  FUN_144ba24f0(0x25,0x7e,uVar2,"crypto\\dso\\dso_lib.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 144ecfa20 FUN_144ecfa20 body=116 status=ok
// SIG undefined FUN_144ecfa20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ecfa20(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    if ((*(byte *)((longlong)param_1 + 0x14) & 1) == 0) {
      if ((code *)param_1[5] != (code *)0x0) {
        uVar1 = (*(code *)param_1[5])();
        return uVar1;
      }
      if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
        uVar1 = (**(code **)(*param_1 + 0x30))();
      }
    }
    return uVar1;
  }
  FUN_144ba24f0(0x25,0x84,0x43,"crypto\\dso\\dso_lib.c",0x10c);
  return 0;
}



// FUNCTION 144ecfaa0 FUN_144ecfaa0 body=299 status=ok
// SIG undefined FUN_144ecfaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ecfaa0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144ecfaba;
  bVar1 = false;
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)FUN_144ecfc50(param_3);
    if (param_1 == (longlong *)0x0) {
      FUN_144ba24f0(0x25,0x70,0x41,"crypto\\dso\\dso_lib.c",0x7f,uVar5);
      return (longlong *)0x0;
    }
    bVar1 = true;
    *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  }
  if (param_1[6] == 0) {
    if ((param_2 == 0) || (iVar2 = FUN_144ecf870(param_1,param_2), iVar2 != 0)) {
      if (param_1[6] == 0) {
        uVar4 = 0x9a;
        uVar3 = 0x6f;
      }
      else if (*(code **)(*param_1 + 8) == (code *)0x0) {
        uVar4 = 0x9e;
        uVar3 = 0x6c;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 8))(param_1);
        if (iVar2 != 0) {
          return param_1;
        }
        uVar4 = 0xa2;
        uVar3 = 0x67;
      }
    }
    else {
      uVar4 = 0x95;
      uVar3 = 0x70;
    }
  }
  else {
    uVar4 = 0x8c;
    uVar3 = 0x6e;
  }
  FUN_144ba24f0(0x25,0x70,uVar3,"crypto\\dso\\dso_lib.c",uVar4,uVar5);
  if (bVar1) {
    FUN_144ecf6b0(param_1);
  }
  return (longlong *)0x0;
}



// FUNCTION 144ecfbd0 FUN_144ecfbd0 body=118 status=ok
// SIG undefined FUN_144ecfbd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ecfbd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar3 = 0xb2;
    uVar2 = 0x43;
  }
  else if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    uVar3 = 0xb6;
    uVar2 = 0x6c;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar3 = 0xba;
    uVar2 = 0x6a;
  }
  FUN_144ba24f0(0x25,0x6c,uVar2,"crypto\\dso\\dso_lib.c",uVar3);
  return 0;
}



// FUNCTION 144ecfc50 FUN_144ecfc50 body=296 status=ok
// SIG undefined FUN_144ecfc50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144ecfc50(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ecfc5c;
  if (DAT_14c7973b8 == 0) {
    DAT_14c7973b8 = FUN_1452876f0();
  }
  plVar2 = (longlong *)FUN_144ea6670(0x48,"crypto\\dso\\dso_lib.c");
  if (plVar2 == (longlong *)0x0) {
    FUN_144ba24f0(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x1d,uVar4);
    return (longlong *)0x0;
  }
  lVar3 = FUN_144babca0();
  plVar2[1] = lVar3;
  if (lVar3 == 0) {
    FUN_144ba24f0(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x23,uVar4);
    uVar4 = 0x24;
  }
  else {
    *plVar2 = DAT_14c7973b8;
    *(undefined4 *)(plVar2 + 2) = 1;
    lVar3 = FUN_144e985a0();
    plVar2[8] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(*plVar2 + 0x38) != (code *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
        if (iVar1 == 0) {
          FUN_144ecf6b0(plVar2);
          plVar2 = (longlong *)0x0;
        }
      }
      return plVar2;
    }
    FUN_144ba24f0(0x25,0x71,0x41,"crypto\\dso\\dso_lib.c",0x2b,uVar4);
    FUN_144babdb0(plVar2[1]);
    uVar4 = 0x2d;
  }
  FUN_144ea6530(plVar2,"crypto\\dso\\dso_lib.c",uVar4);
  return (longlong *)0x0;
}



// FUNCTION 144ecfd80 FUN_144ecfd80 body=8 status=ok
// SIG undefined FUN_144ecfd80(void)

char * FUN_144ecfd80(void)

{
  return "C:\\Windows";
}



// FUNCTION 144ecfd90 FUN_144ecfd90 body=8 status=ok
// SIG undefined FUN_144ecfd90(void)

char * FUN_144ecfd90(void)

{
  return "C:\\Windows/certs";
}



// FUNCTION 144ecfda0 FUN_144ecfda0 body=8 status=ok
// SIG undefined FUN_144ecfda0(void)

char * FUN_144ecfda0(void)

{
  return "C:\\Windows/cert.pem";
}



// FUNCTION 144ecfdb0 FUN_144ecfdb0 body=8 status=ok
// SIG undefined FUN_144ecfdb0(void)

char * FUN_144ecfdb0(void)

{
  return "SSL_CERT_DIR";
}



// FUNCTION 144ecfdc0 FUN_144ecfdc0 body=8 status=ok
// SIG undefined FUN_144ecfdc0(void)

char * FUN_144ecfdc0(void)

{
  return "SSL_CERT_FILE";
}



// FUNCTION 144ecfdd0 FUN_144ecfdd0 body=32 status=ok
// SIG undefined FUN_144ecfdd0(void)

undefined8 FUN_144ecfdd0(uint param_1,ushort param_2)

{
  if ((param_1 < 0x80) &&
     ((param_2 & *(ushort *)(&DAT_149bfb200 + (longlong)(int)param_1 * 2)) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144ecfdf0 FUN_144ecfdf0 body=50 status=ok
// SIG undefined FUN_144ecfdf0(void)

/* WARNING: Removing unreachable block (ram,0x000144ecfe11) */

uint FUN_144ecfdf0(uint param_1)

{
  if ((param_1 < 0x80) && (((&DAT_149bfb200)[(longlong)(int)param_1 * 2] & 2) != 0)) {
    return param_1 ^ 0x20;
  }
  return param_1;
}



// FUNCTION 144ecfe30 FUN_144ecfe30 body=12 status=ok
// SIG undefined FUN_144ecfe30(void)

bool FUN_144ecfe30(char param_1)

{
  return (byte)(param_1 - 0x30U) < 10;
}



// FUNCTION 144ecfe40 FUN_144ecfe40 body=50 status=ok
// SIG undefined FUN_144ecfe40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecfe40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144ed01a0("%s:%d: OpenSSL internal error: %s\n",param_2,param_3,param_1,0x144ecfe4a);
  raise(0x16);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}



// FUNCTION 144ecfe80 FUN_144ecfe80 body=355 status=ok
// SIG undefined FUN_144ecfe80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ecfe80(void)

{
  wchar_t *_Str;
  longlong lVar1;
  BOOL BVar2;
  DWORD DVar3;
  HMODULE hModule;
  HWINSTA hObj;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uStackY_50;
  undefined1 auStackY_48 [32];
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)local_18;
  if (DAT_14c7973c0 == (FARPROC)0x0) {
    uStackY_50 = 0x144ecfebe;
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    if (hModule != (HMODULE)0x0) {
      uStackY_50 = 0x144ecfed3;
      DAT_14c7973c0 = GetProcAddress(hModule,"_OPENSSL_isservice");
      if (DAT_14c7973c0 != (FARPROC)0x0) goto LAB_144ecfedf;
    }
    DAT_14c7973c0 = (FARPROC)0xffffffffffffffff;
  }
  else {
LAB_144ecfedf:
    if (DAT_14c7973c0 != (FARPROC)0xffffffffffffffff) {
      uStackY_50 = 0x144ecfee7;
      (*DAT_14c7973c0)();
      puVar5 = auStackY_48;
      goto LAB_144ecffd7;
    }
  }
  uStackY_50 = 0x144ecfefd;
  hObj = GetProcessWindowStation();
  puVar5 = auStackY_48;
  if (hObj != (HWINSTA)0x0) {
    uStackY_50 = 0x144ecff25;
    BVar2 = GetUserObjectInformationW(hObj,2,(PVOID)0x0,0,local_18);
    puVar5 = auStackY_48;
    if (BVar2 == 0) {
      uStackY_50 = 0x144ecff33;
      DVar3 = GetLastError();
      puVar5 = auStackY_48;
      if ((DVar3 == 0x7a) && (puVar5 = auStackY_48, local_18[0] < 0x201)) {
        uVar6 = local_18[0] + 1 & 0xfffffffe;
        local_18[0] = uVar6;
        uVar4 = (ulonglong)uVar6 + 0x11;
        if (uVar4 <= (ulonglong)uVar6 + 2) {
          uVar4 = 0xffffffffffffff0;
        }
        uStackY_50 = 0x144ecff7e;
        lVar1 = -(uVar4 & 0xfffffffffffffff0);
        puVar5 = auStackY_48 + lVar1;
        _Str = (wchar_t *)((longlong)local_18 + lVar1);
        *(uint **)(&stack0xffffffffffffffd8 + lVar1) = local_18;
        *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x144ecffa0;
        BVar2 = GetUserObjectInformationW
                          (hObj,2,_Str,uVar6,*(LPDWORD *)(&stack0xffffffffffffffd8 + lVar1));
        if (BVar2 != 0) {
          uVar6 = local_18[0] + 1;
          local_18[0] = uVar6 & 0xfffffffe;
          _Str[uVar6 >> 1] = L'\0';
          *(undefined8 *)(auStackY_48 + lVar1 + -8) = 0x144ecffca;
          wcsstr(_Str,L"Service-0x");
          puVar5 = auStackY_48 + lVar1;
        }
      }
    }
  }
LAB_144ecffd7:
  uVar4 = local_10 ^ (ulonglong)local_18;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -8) = &UNK_144ecffe3;
  FUN_144d8e3a0(uVar4);
}



// FUNCTION 144ed0000 FUN_144ed0000 body=28 status=ok
// SIG undefined FUN_144ed0000(void)

uint FUN_144ed0000(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2 & 0x7fffffff;
}



// FUNCTION 144ed0020 FUN_144ed0020 body=376 status=ok
// SIG undefined FUN_144ed0020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ed0020(void)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  DWORD DVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  
  if (DAT_14c7973c8 == 0) {
    puVar9 = &DAT_14c7973d0;
    DAT_14c7973c8 = 1;
    DVar4 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_14c7973d0,0x30);
    sVar2 = DAT_14c7973d0;
    if (DVar4 - 1 < 0x2f) {
      uVar5 = FUN_144ed04b0(&DAT_14c7973d0 + (DAT_14c7973d0 == 0x7e));
      if (sVar2 == 0x7e) {
        uVar6 = FUN_14259eeb0(&DAT_14c7973a0);
        uVar8 = ~uVar5;
        uVar3 = uVar5 >> 0x18;
        sVar2 = DAT_14c7973d0;
        uVar5 = uVar6 & uVar8;
        if ((uVar3 & 1) != 0) {
          uVar5 = uVar6 & uVar8 & 0xedfff7fdffffffff;
        }
      }
      else {
        sVar2 = DAT_14c7973d0;
        if (DAT_14c7973d0 == 0x3a) {
          uVar5 = FUN_14259eeb0(&DAT_14c7973a0);
          sVar2 = DAT_14c7973d0;
        }
      }
      while (sVar2 != 0) {
        if (sVar2 == 0x3a) {
          sVar2 = puVar9[1];
          uVar7 = FUN_144ed04b0(puVar9 + (ulonglong)(sVar2 == 0x7e) + 1);
          if (sVar2 == 0x7e) {
            DAT_14c7973a8 = DAT_14c7973a8 & ~(uint)uVar7;
            _DAT_14c7973ac = _DAT_14c7973ac & ~(uint)((ulonglong)uVar7 >> 0x20);
            uVar7 = _DAT_14c7973a8;
          }
          goto LAB_144ed0169;
        }
        psVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        sVar2 = *psVar1;
      }
      _DAT_14c7973a8 = 0;
      uVar7 = _DAT_14c7973a8;
    }
    else {
      uVar5 = FUN_14259eeb0(&DAT_14c7973a0);
      uVar7 = _DAT_14c7973a8;
    }
LAB_144ed0169:
    _DAT_14c7973a8 = uVar7;
    DAT_14c7973a0._0_4_ = (uint)uVar5 | 0x400;
    DAT_14c7973a0._4_4_ = (undefined4)(uVar5 >> 0x20);
  }
  return;
}



// FUNCTION 144ed01a0 FUN_144ed01a0 body=668 status=ok
// SIG undefined FUN_144ed01a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed01a0(LPCSTR param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  DWORD DVar3;
  int iVar4;
  uint cbMultiByte;
  HANDLE pvVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  DWORD nNumberOfBytesToWrite;
  LPCSTR lpMultiByteStr;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  undefined8 *local_280;
  DWORD local_278 [2];
  undefined8 local_270 [3];
  undefined8 local_258;
  WCHAR local_248 [255];
  undefined2 local_4a;
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x144ed01c6;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_258;
  uStackY_2b0 = 0x144ed01ea;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pvVar5 = GetStdHandle(0xfffffff4);
  if (pvVar5 != (HANDLE)0x0) {
    uStackY_2b0 = 0x144ed01fb;
    DVar3 = GetFileType(pvVar5);
    if (DVar3 != 0) {
      uStackY_2b0 = 0x144ed020b;
      puVar6 = (ulonglong *)FUN_144737586();
      uStackY_2b0 = 0x144ed0237;
      local_280 = &local_res10;
      DVar3 = __stdio_common_vsprintf(*puVar6 | 1,local_248,0x200,param_1);
      if ((int)DVar3 < 0) {
        DVar3 = 0xffffffff;
      }
      nNumberOfBytesToWrite = 0x200;
      if (-1 < (int)DVar3) {
        nNumberOfBytesToWrite = DVar3;
      }
      uStackY_2b0 = 0x144ed025e;
      WriteFile(pvVar5,local_248,nNumberOfBytesToWrite,(LPDWORD)&local_258,(LPOVERLAPPED)0x0);
      puVar11 = auStackY_2a8;
      goto LAB_144ed042d;
    }
  }
  uStackY_2b0 = 0x144ed0272;
  lpMultiByteStr = param_1;
  iVar4 = FUN_144ed0000(param_1);
  cbMultiByte = iVar4 + 1;
  uVar10 = (ulonglong)cbMultiByte;
  uVar7 = (ulonglong)cbMultiByte * 2 + 0xf;
  if (uVar7 <= (ulonglong)cbMultiByte * 2) {
    uVar7 = 0xffffffffffffff0;
  }
  uStackY_2b0 = 0x144ed0298;
  lVar2 = -(uVar7 & 0xfffffffffffffff0);
  puVar11 = auStackY_2a8 + lVar2;
  uVar7 = 0;
  lVar1 = (longlong)&local_258 + lVar2;
  if (lVar1 != 0) {
    *(uint *)((longlong)local_278 + lVar2 + -8) = cbMultiByte;
    *(longlong *)((longlong)local_270 + lVar2 + -0x18) = lVar1;
    *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed02c9;
    iVar4 = MultiByteToWideChar(0,0,lpMultiByteStr,cbMultiByte,
                                *(LPWSTR *)((longlong)local_270 + lVar2 + -0x18),
                                *(int *)((longlong)local_278 + lVar2 + -8));
    if ((iVar4 == 0) && (uVar8 = uVar7, uVar10 != 0)) {
      do {
        *(short *)(lVar1 + uVar8 * 2) = (short)param_1[uVar8];
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar10);
    }
    if (uVar10 != 0) {
      do {
        if (*(short *)(lVar1 + uVar7 * 2) == 0x25) {
          puVar9 = (undefined2 *)((longlong)&local_258 + uVar7 * 2 + lVar2 + 2);
          do {
            switch(*puVar9) {
            case 0x2a:
            case 0x2d:
            case 0x2e:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              uVar7 = uVar7 + 1;
              puVar9 = puVar9 + 1;
              break;
            default:
              goto switchD_144ed0351_caseD_2b;
            case 0x43:
              *puVar9 = 99;
              goto switchD_144ed0351_caseD_2b;
            case 0x53:
              *puVar9 = 0x73;
              goto switchD_144ed0351_caseD_2b;
            case 99:
              *puVar9 = 0x43;
              goto switchD_144ed0351_caseD_2b;
            case 0x73:
              *puVar9 = 0x53;
              goto switchD_144ed0351_caseD_2b;
            }
          } while( true );
        }
switchD_144ed0351_caseD_2b:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar10);
    }
  }
  *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed0386;
  puVar6 = (ulonglong *)FUN_144737586();
  *(undefined8 **)((longlong)local_278 + lVar2 + -8) = &local_res10;
  *(undefined8 *)((longlong)local_270 + lVar2 + -0x18) = 0;
  uVar7 = *puVar6;
  *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed03aa;
  __stdio_common_vswprintf(uVar7 | 1,local_248);
  local_4a = 0;
  *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed03b6;
  iVar4 = FUN_144ecfe80();
  if (iVar4 < 1) {
    *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed042d;
    MessageBoxW((HWND)0x0,local_248,L"OpenSSL: FATAL",0x10);
  }
  else {
    *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed03c9;
    pvVar5 = RegisterEventSourceW((LPCWSTR)0x0,L"OpenSSL");
    puVar11 = auStackY_2a8 + lVar2;
    if (pvVar5 != (HANDLE)0x0) {
      *(undefined8 *)((longlong)local_270 + lVar2 + 8) = 0;
      local_258 = local_248;
      *(undefined8 **)((longlong)local_270 + lVar2) = &local_258;
      *(undefined4 *)((longlong)local_278 + lVar2) = 0;
      *(undefined2 *)((longlong)local_278 + lVar2 + -8) = 1;
      *(undefined8 *)((longlong)local_270 + lVar2 + -0x18) = 0;
      *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed040b;
      ReportEventW(pvVar5,1,0,0,*(PSID *)((longlong)local_270 + lVar2 + -0x18),
                   *(WORD *)((longlong)local_278 + lVar2 + -8),
                   *(DWORD *)((longlong)local_278 + lVar2),
                   *(LPCWSTR **)((longlong)local_270 + lVar2),
                   *(LPVOID *)((longlong)local_270 + lVar2 + 8));
      *(undefined8 *)(auStackY_2a8 + lVar2 + -8) = 0x144ed0414;
      DeregisterEventSource(pvVar5);
      puVar11 = auStackY_2a8 + lVar2;
    }
  }
LAB_144ed042d:
  uVar7 = local_48 ^ (ulonglong)&local_258;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_144ed043c;
  FUN_144d8e3a0(uVar7);
}



// FUNCTION 144ed04b0 FUN_144ed04b0 body=182 status=ok
// SIG undefined FUN_144ed04b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed04b0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar5 = 10;
  puVar4 = param_1;
  if (*param_1 == 0x30) {
    uVar5 = 8;
    puVar4 = param_1 + 1;
    iVar2 = FUN_144ecfdf0(param_1[1]);
    if (iVar2 == 0x78) {
      uVar5 = 0x10;
      puVar4 = param_1 + 2;
    }
  }
  while( true ) {
    uVar1 = *puVar4;
    iVar2 = FUN_144ecfdd0(uVar1,4);
    if (iVar2 == 0) {
      iVar2 = FUN_144ecfdd0(uVar1,0x10);
      if (iVar2 == 0) {
        uVar3 = 0x10;
      }
      else {
        iVar2 = FUN_144ecfdf0(uVar1);
        uVar3 = iVar2 - 0x57;
      }
    }
    else {
      uVar3 = uVar1 - 0x30;
    }
    puVar4 = puVar4 + 1;
    if (uVar5 <= uVar3) break;
    lVar6 = (ulonglong)uVar3 + (ulonglong)uVar5 * lVar6;
  }
  return lVar6;
}



// FUNCTION 144ed0570 FUN_144ed0570 body=25 status=ok
// SIG undefined FUN_144ed0570(void)

int FUN_144ed0570(int *param_1)

{
  if (((*param_1 - 1U & 0xfffffffb) != 0) && (*(longlong *)(param_1 + 2) == 0)) {
    return 0;
  }
  return *param_1;
}



// FUNCTION 144ed0590 FUN_144ed0590 body=116 status=ok
// SIG undefined FUN_144ed0590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed0590(int *param_1,int param_2,longlong param_3)

{
  int *local_res8;
  
  local_res8 = param_1;
  if (((*param_1 - 1U & 0xfffffffb) != 0) && (*(longlong *)(param_1 + 2) != 0)) {
    FUN_144eff5e0(&local_res8,0,0);
  }
  *local_res8 = param_2;
  if (param_2 == 1) {
    local_res8[2] = -(uint)(param_3 != 0) & 0xff;
    return;
  }
  *(longlong *)(local_res8 + 2) = param_3;
  return;
}



// FUNCTION 144ed0610 FUN_144ed0610 body=111 status=ok
// SIG undefined FUN_144ed0610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed0610(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  if ((param_3 != 0) && ((int)param_2 != 1)) {
    if ((int)param_2 == 6) {
      param_3 = FUN_14526bd70();
      if (param_3 == 0) {
        return 0;
      }
      param_2 = 6;
    }
    else {
      param_3 = FUN_144f03ba0(param_3);
      param_2 = param_2 & 0xffffffff;
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  FUN_144ed0590(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 144ed0680 FUN_144ed0680 body=101 status=ok
// SIG undefined FUN_144ed0680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ed0680(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 != *param_2))
  {
    return 0xffffffff;
  }
  if (iVar1 == 1) {
    return (ulonglong)(uint)(param_1[2] - param_2[2]);
  }
  if (iVar1 != 5) {
    if (iVar1 != 6) {
      uVar2 = FUN_144f03cb0();
      return uVar2;
    }
    uVar2 = FUN_14526beb0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    return uVar2;
  }
  return 0;
}



// FUNCTION 144ed06f0 FUN_144ed06f0 body=203 status=ok
// SIG undefined FUN_144ed06f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144ed06f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int *local_res20;
  
  lVar1 = FUN_145281fa0(param_2,param_1,0);
  if (lVar1 == 0) {
    return (int *)0x0;
  }
  if ((param_3 == (undefined8 *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) {
    piVar2 = (int *)FUN_144efe770();
    if (piVar2 == (int *)0x0) {
      FUN_144efe950(lVar1);
      return (int *)0x0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = piVar2;
    }
  }
  local_res20 = piVar2;
  if (((*piVar2 - 1U & 0xfffffffb) != 0) && (*(longlong *)(piVar2 + 2) != 0)) {
    FUN_144eff5e0(&local_res20,0,0);
  }
  *local_res20 = 0x10;
  *(longlong *)(local_res20 + 2) = lVar1;
  return piVar2;
}



// FUNCTION 144ed07c0 FUN_144ed07c0 body=54 status=ok
// SIG undefined FUN_144ed07c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ed07c0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 0x10)) && (*(longlong *)(param_2 + 2) != 0)) {
    uVar1 = FUN_145281f40(*(longlong *)(param_2 + 2),param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ed0800 FUN_144ed0800 body=88 status=ok
// SIG undefined FUN_144ed0800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed0800(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x28,"crypto\\asn1\\a_object.c",0x156);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,0x7b,0x41,"crypto\\asn1\\a_object.c",0x158);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return lVar1;
}



// FUNCTION 144ed0860 FUN_144ed0860 body=162 status=ok
// SIG undefined FUN_144ed0860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed0860(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(byte *)(param_1 + 4) & 4) != 0) {
      FUN_144ea6530(*param_1,"crypto\\asn1\\a_object.c",0x167);
      FUN_144ea6530(param_1[1],"crypto\\asn1\\a_object.c",0x168);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(byte *)(param_1 + 4) & 8) != 0) {
      FUN_144ea6530(param_1[3],"crypto\\asn1\\a_object.c",0x16d);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      FUN_144ea6530(param_1,"crypto\\asn1\\a_object.c",0x172);
    }
  }
  return;
}



// FUNCTION 144ed0910 FUN_144ed0910 body=173 status=ok
// SIG undefined FUN_144ed0910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ed0910(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = *param_2;
  cVar1 = FUN_144f03ea0(&local_10,local_res20,local_res10,local_18,param_3);
  if (cVar1 < '\0') {
    uVar3 = 0x66;
  }
  else {
    if (local_res10[0] == 6) {
      lVar2 = FUN_144ed0f90(param_1,&local_10,local_res20[0]);
      if (lVar2 != 0) {
        *param_2 = local_10;
      }
      return lVar2;
    }
    uVar3 = 0x74;
  }
  FUN_144ba24f0(0xd,0x93,uVar3,"crypto\\asn1\\a_object.c",0xeb);
  return 0;
}



// FUNCTION 144ed09c0 FUN_144ed09c0 body=343 status=ok
// SIG undefined FUN_144ed09c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed09c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x144ed09ce;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = local_78;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    FUN_144b9eb80(param_1,&DAT_14a179998,4);
  }
  else {
    iVar1 = FUN_144ea9230(local_78,0x50,param_2);
    if (0x4f < iVar1) {
      puVar2 = (undefined1 *)FUN_144ea64e0((longlong)(iVar1 + 1),"crypto\\asn1\\a_object.c",0xc2);
      if (puVar2 == (undefined1 *)0x0) {
        local_88 = 0xc3;
        FUN_144ba24f0(0xd,0x7e,0x41,"crypto\\asn1\\a_object.c");
        goto LAB_144ed0a7f;
      }
      FUN_144ea9230(puVar2,iVar1 + 1,param_2,0);
    }
    if (iVar1 < 1) {
      FUN_144b9eb80(param_1,"<INVALID>",9);
      FUN_145287ec0(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
    }
    else {
      FUN_144b9eb80(param_1,puVar2,iVar1);
      if (puVar2 != local_78) {
        FUN_144ea6530(puVar2,"crypto\\asn1\\a_object.c",0xcf);
      }
    }
  }
LAB_144ed0a7f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144ed0b30 FUN_144ed0b30 body=25 status=ok
// SIG undefined FUN_144ed0b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed0b30(void)

{
  FUN_144ea9230();
  return;
}



// FUNCTION 144ed0b50 FUN_144ed0b50 body=1066 status=ok
// SIG undefined FUN_144ed0b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ed0b50(longlong param_1,int param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  char *local_68;
  longlong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar6 = local_58;
  lVar5 = 0;
  local_78 = 0;
  local_70 = 0x18;
  uVar15 = (ulonglong)param_4;
  local_6c = param_2;
  local_60 = param_1;
  if (param_4 == 0) goto LAB_144ed0f75;
  if (param_4 == 0xffffffff) {
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (param_3[uVar15] != '\0');
  }
  local_74 = (int)*param_3 - 0x30;
  if (local_74 < 3) {
    if (0 < (int)uVar15 + -1) {
      iVar13 = (int)param_3[1];
      iVar14 = (int)uVar15 + -2;
      local_68 = param_3 + 2;
      if (0 < iVar14) {
LAB_144ed0c26:
        if ((iVar13 == 0x2e) || (iVar13 == 0x20)) {
          uVar15 = 0;
          bVar2 = false;
joined_r0x000144ed0c3e:
          do {
            uVar11 = (uint)uVar15;
            if (iVar14 < 1) goto LAB_144ed0d09;
            iVar13 = (int)*local_68;
            iVar14 = iVar14 + -1;
            local_68 = local_68 + 1;
            if ((iVar13 == 0x20) || (iVar13 == 0x2e)) goto LAB_144ed0d09;
            iVar3 = FUN_144ecfdd0(iVar13,4);
            if (iVar3 == 0) {
              local_88 = 100;
              uVar12 = 0x82;
              goto LAB_144ed0ec5;
            }
            if (!bVar2) {
              if (uVar11 < 0x19999991) {
                uVar15 = (ulonglong)(iVar13 + (uVar11 * 5 + -0x18) * 2);
                goto joined_r0x000144ed0c3e;
              }
              bVar2 = true;
              if (((lVar5 == 0) && (lVar5 = FUN_144ba0570(), lVar5 == 0)) ||
                 (iVar3 = FUN_144ba0bb0(lVar5,uVar15), iVar3 == 0)) goto LAB_144ed0ed9;
            }
            iVar3 = FUN_14526b160(lVar5,10);
            if ((iVar3 == 0) ||
               (iVar3 = FUN_14526b1f0(lVar5,(longlong)(iVar13 + -0x30)), iVar3 == 0))
            goto LAB_144ed0ed9;
          } while( true );
        }
        local_88 = 0x57;
        uVar12 = 0x83;
        goto LAB_144ed0ec5;
      }
      goto LAB_144ed0f19;
    }
    local_88 = 0x4e;
    uVar12 = 0x8a;
  }
  else {
    local_88 = 0x49;
    uVar12 = 0x7a;
  }
  FUN_144ba24f0(0xd,100,uVar12,"crypto\\asn1\\a_object.c");
LAB_144ed0f49:
  FUN_144ba0cd0(lVar5);
  goto LAB_144ed0f75;
LAB_144ed0d09:
  if (local_78 == 0) {
    if ((1 < (int)local_74) || (uVar11 < 0x28)) {
      if (bVar2) {
        iVar3 = FUN_14526b1f0(lVar5,(longlong)(int)(local_74 * 0x28));
        if (iVar3 == 0) goto LAB_144ed0ed9;
      }
      else {
        uVar15 = (ulonglong)(uVar11 + local_74 * 0x28);
      }
      goto LAB_144ed0d4a;
    }
    local_88 = 0x78;
    uVar12 = 0x93;
  }
  else {
LAB_144ed0d4a:
    iVar3 = 0;
    lVar9 = 0;
    if (bVar2) {
      iVar4 = FUN_144ba03d0(lVar5);
      iVar4 = (iVar4 + 6) / 7;
      if (local_70 < iVar4) {
        if (puVar6 != local_58) {
          FUN_144ea6530(puVar6,"crypto\\asn1\\a_object.c",0x88);
        }
        local_70 = iVar4 + 0x20;
        puVar6 = (undefined1 *)FUN_144ea64e0((longlong)local_70,"crypto\\asn1\\a_object.c",0x8a);
        if (puVar6 == (undefined1 *)0x0) goto LAB_144ed0ed9;
      }
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        lVar7 = FUN_14526b050(lVar5,0x80);
        if (lVar7 == -1) goto LAB_144ed0ed9;
        puVar6[lVar9] = (char)lVar7;
        iVar3 = iVar3 + 1;
        lVar9 = lVar9 + 1;
      }
    }
    else {
      do {
        bVar10 = (byte)uVar15;
        iVar3 = iVar3 + 1;
        uVar15 = uVar15 >> 7;
        puVar6[lVar9] = bVar10 & 0x7f;
        lVar9 = lVar9 + 1;
      } while ((int)uVar15 != 0);
    }
    if (local_60 == 0) {
      local_78 = local_78 + iVar3;
LAB_144ed0e6c:
      if (iVar14 < 1) goto LAB_144ed0efa;
      goto LAB_144ed0c26;
    }
    lVar7 = (longlong)local_78;
    if (iVar3 + local_78 <= local_6c) {
      lVar9 = lVar9 + -1;
      if (0 < lVar9) {
        local_78 = local_78 + (int)lVar9;
        pbVar8 = (byte *)(local_60 + lVar7);
        do {
          pbVar1 = puVar6 + lVar9;
          lVar9 = lVar9 + -1;
          *pbVar8 = *pbVar1 | 0x80;
          pbVar8 = pbVar8 + 1;
        } while (0 < lVar9);
      }
      lVar9 = (longlong)local_78;
      local_78 = local_78 + 1;
      *(undefined1 *)(lVar9 + local_60) = *puVar6;
      goto LAB_144ed0e6c;
    }
    local_88 = 0xa0;
    uVar12 = 0x6b;
  }
LAB_144ed0ec5:
  FUN_144ba24f0(0xd,100,uVar12,"crypto\\asn1\\a_object.c");
LAB_144ed0ed9:
  if (puVar6 != local_58) {
    FUN_144ea6530(puVar6,"crypto\\asn1\\a_object.c",0xaf);
  }
  goto LAB_144ed0f49;
LAB_144ed0efa:
  if (puVar6 != local_58) {
    FUN_144ea6530(puVar6,"crypto\\asn1\\a_object.c",0xaa);
  }
LAB_144ed0f19:
  FUN_144ba0cd0(lVar5);
LAB_144ed0f75:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}


