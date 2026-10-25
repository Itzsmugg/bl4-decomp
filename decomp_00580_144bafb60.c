// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144bafb60 FUN_144bafb60 body=7 status=ok
// SIG undefined FUN_144bafb60(void)

void FUN_144bafb60(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}



// FUNCTION 144bafb70 FUN_144bafb70 body=7 status=ok
// SIG undefined FUN_144bafb70(void)

undefined4 FUN_144bafb70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// FUNCTION 144bafb80 FUN_144bafb80 body=8 status=ok
// SIG undefined FUN_144bafb80(void)

undefined8 FUN_144bafb80(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 144bafb90 FUN_144bafb90 body=8 status=ok
// SIG undefined FUN_144bafb90(void)

undefined8 FUN_144bafb90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// FUNCTION 144bafba0 FUN_144bafba0 body=41 status=ok
// SIG undefined FUN_144bafba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bafba0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    return 0;
  }
  uVar1 = FUN_144bb5320();
  return uVar1;
}



// FUNCTION 144bafbd0 FUN_144bafbd0 body=30 status=ok
// SIG undefined FUN_144bafbd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafbd0(undefined8 param_1,undefined4 param_2)

{
  FUN_144bafbf0(param_1,0,param_2,0);
  return;
}



// FUNCTION 144bafbf0 FUN_144bafbf0 body=248 status=ok
// SIG undefined FUN_144bafbf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bafbf0(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144bafc0a;
  iVar3 = param_2;
  if ((param_3 != 0) && (iVar3 = param_3, param_2 == 0)) {
    param_2 = param_3;
  }
  if (iVar3 == 0) {
LAB_144bafc8e:
    if (param_4 != 0) {
LAB_144bafc92:
      iVar1 = FUN_144ef4720(param_4);
      if (iVar1 == -1) {
        uVar5 = 0x8bd;
        uVar4 = 0x78;
        goto LAB_144bafc45;
      }
    }
    if ((iVar3 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x18) == 0)) {
      *(int *)(*(longlong *)(param_1 + 0x20) + 0x18) = iVar3;
    }
    if ((param_4 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) == 0)) {
      *(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) = param_4;
    }
    uVar6 = 1;
  }
  else {
    iVar1 = FUN_144ec5780(iVar3);
    if (iVar1 != -1) {
      lVar2 = FUN_144ec5730(iVar1);
      if (*(int *)(lVar2 + 4) == 0) {
        iVar1 = FUN_144ec5780(param_2);
        if (iVar1 == -1) {
          uVar5 = 0x8b0;
          goto LAB_144bafc3f;
        }
        lVar2 = FUN_144ec5730(iVar1);
      }
      if (param_4 == 0) {
        param_4 = *(int *)(lVar2 + 4);
        goto LAB_144bafc8e;
      }
      goto LAB_144bafc92;
    }
    uVar5 = 0x8a8;
LAB_144bafc3f:
    uVar4 = 0x79;
LAB_144bafc45:
    FUN_144ba24f0(0xb,0x86,uVar4,"crypto\\x509\\x509_vfy.c",uVar5,uVar6);
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 144bafcf0 FUN_144bafcf0 body=26 status=ok
// SIG undefined FUN_144bafcf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafcf0(longlong param_1)

{
  FUN_144eab230(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144bafd10 FUN_144bafd10 body=5 status=ok
// SIG undefined FUN_144bafd10(void)

undefined8 FUN_144bafd10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144bafd20 FUN_144bafd20 body=54 status=ok
// SIG undefined FUN_144bafd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafd20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144eab440(param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_144eaaff0(*(undefined8 *)(param_1 + 0x20),lVar1);
  return;
}



// FUNCTION 144bafd60 FUN_144bafd60 body=8 status=ok
// SIG undefined FUN_144bafd60(void)

void FUN_144bafd60(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 144bafd70 FUN_144bafd70 body=275 status=ok
// SIG undefined FUN_144bafd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bafd70(int *param_1,__time64_t *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [4];
  int local_res18 [2];
  __time64_t local_res20;
  
  uVar3 = 0;
  if (param_1[1] == 0x17) {
    iVar1 = *param_1;
    if (iVar1 != 0xd) {
      return 0;
    }
  }
  else {
    if (param_1[1] != 0x18) {
      return 0;
    }
    iVar1 = *param_1;
    if (iVar1 != 0xf) {
      return 0;
    }
  }
  uVar4 = uVar3;
  uVar6 = uVar3;
  if (0 < iVar1 + -1) {
    do {
      iVar1 = FUN_144ecfe30(*(undefined1 *)(*(longlong *)(param_1 + 2) + uVar4));
      if (iVar1 == 0) goto LAB_144bafdff;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *param_1 + -1);
  }
  if (*(char *)((longlong)(*param_1 + -1) + *(longlong *)(param_1 + 2)) == 'Z') {
    if (param_2 == (__time64_t *)0x0) {
      _time64(&local_res20);
    }
    else {
      local_res20 = *param_2;
    }
    lVar2 = FUN_144ef21a0(0,local_res20,0,0);
    if ((lVar2 != 0) && (iVar1 = FUN_144ef2070(local_res8,local_res18,param_1,lVar2), iVar1 != 0)) {
      if ((local_res8[0] < 0) || (local_res18[0] < 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    FUN_144ef2170(lVar2);
  }
  else {
LAB_144bafdff:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144bafe90 FUN_144bafe90 body=24 status=ok
// SIG undefined FUN_144bafe90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafe90(undefined8 param_1)

{
  FUN_144bafd70(param_1,0);
  return;
}



// FUNCTION 144bafeb0 FUN_144bafeb0 body=149 status=ok
// SIG undefined FUN_144bafeb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafeb0(longlong param_1,undefined4 param_2)

{
  __time64_t local_res8;
  
  _time64(&local_res8);
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_144ef1e70(param_1,local_res8,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_144ef1f30(param_1,local_res8,0,param_2);
      return;
    }
  }
  FUN_144ef21a0(param_1,local_res8,0,param_2);
  return;
}



// FUNCTION 144baff50 FUN_144baff50 body=306 status=ok
// SIG undefined FUN_144baff50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baff50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144baff60;
  if ((param_1 != 0) && (iVar1 = FUN_144ba6ff0(), iVar1 == 0)) {
    return 1;
  }
  iVar1 = 0;
  iVar2 = FUN_144babbf0(param_2);
  if (iVar2 < 1) {
    FUN_144ba24f0(0xb,0x6e,0x6b,"crypto\\x509\\x509_vfy.c",0x7b0,uVar4);
    return 0;
  }
  do {
    uVar4 = FUN_144babc00(param_2,iVar1);
    lVar3 = FUN_144bb4f60(uVar4);
    if (lVar3 == 0) {
      FUN_144ba24f0(0xb,0x6e,0x6c,"crypto\\x509\\x509_vfy.c",0x7a8);
      return 0;
    }
    iVar2 = FUN_144ba6ff0(lVar3);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
    iVar2 = FUN_144babbf0(param_2);
  } while (iVar1 < iVar2);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar4 = FUN_144babc00(param_2,iVar1);
    uVar4 = FUN_144bb4f60(uVar4);
    FUN_144ba6ec0(uVar4,lVar3);
  }
  if (param_1 != 0) {
    FUN_144ba6ec0(param_1,lVar3);
  }
  return 1;
}



// FUNCTION 144bb0090 FUN_144bb0090 body=496 status=ok
// SIG undefined FUN_144bb0090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb0090(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144bb00a0;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_144ba24f0(0xb,0x7f,0x69,"crypto\\x509\\x509_vfy.c",0x104,0x144bb00a0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_144ba24f0(0xb,0x7f,0x42,"crypto\\x509\\x509_vfy.c",0x10e,0x144bb00a0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  iVar2 = FUN_144bb6050();
  if (iVar2 == 0) {
    FUN_144ba24f0(0xb,0x7f,0x44,"crypto\\x509\\x509_vfy.c",0x114,uVar4);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0xffffffff;
  }
  lVar3 = FUN_144babca0();
  *(longlong *)(param_1 + 0x98) = lVar3;
  if ((lVar3 != 0) && (iVar2 = FUN_144bac1c0(lVar3,*(undefined8 *)(param_1 + 8)), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x94) = 1;
    iVar2 = FUN_144bb1e70(param_1,*(undefined8 *)(param_1 + 8));
    if (iVar2 == 0) {
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar3 == 0) {
        lVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(undefined4 *)(param_1 + 0xb0) = 0x42;
      uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    if ((lVar1 == 0) || (iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) {
      uVar4 = FUN_144bb0c70(param_1);
    }
    else {
      uVar4 = FUN_144bb0dc0(param_1);
    }
    if (0 < (int)uVar4) {
      return uVar4;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return uVar4;
  }
  FUN_144b47250(*(undefined8 *)(param_1 + 8));
  FUN_144ba24f0(0xb,0x7f,0x41,"crypto\\x509\\x509_vfy.c",0x120,uVar4);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0xffffffff;
}



// FUNCTION 144bb0280 FUN_144bb0280 body=381 status=ok
// SIG undefined FUN_144bb0280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb0280(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      lVar5 = 0;
      goto LAB_144bb02c4;
    }
LAB_144bb03b9:
    uVar3 = 1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20) + 8;
LAB_144bb02c4:
    uVar3 = FUN_144bb6010(param_2);
    iVar2 = FUN_144bafd70(uVar3,lVar5);
    if ((iVar2 < 0) || (-1 < param_3)) {
      lVar4 = param_2;
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0xd;
LAB_144bb030b:
        *(longlong *)(param_1 + 0xb8) = lVar4;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) goto LAB_144bb031e;
      }
      else if (0 < iVar2) {
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),param_3);
          *(undefined4 *)(param_1 + 0xb0) = 9;
        }
        else {
          *(undefined4 *)(param_1 + 0xb0) = 9;
        }
        goto LAB_144bb030b;
      }
      uVar3 = FUN_144bb6030(param_2);
      iVar2 = FUN_144bafd70(uVar3,lVar5);
      if (iVar2 < 1) {
        if (param_3 < 0) goto LAB_144bb031e;
        if (iVar2 != 0) goto LAB_144bb03d3;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0xe;
      }
      else {
LAB_144bb03d3:
        if (-1 < iVar2) goto LAB_144bb03b9;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 10;
      }
      *(longlong *)(param_1 + 0xb8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) goto LAB_144bb03b9;
    }
LAB_144bb031e:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144bb0400 FUN_144bb0400 body=2159 status=ok
// SIG undefined FUN_144bb0400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb0400(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  uint local_res8;
  uint local_res10;
  undefined4 uVar14;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  lVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98));
  iVar3 = FUN_144ec5450(lVar5,0xffffffff,0);
  uVar8 = 0;
  local_res8 = uVar8;
  if (iVar3 == 1) {
    local_res8 = *(uint *)(lVar5 + 0xd0) >> 0xd & 1;
  }
  iVar3 = 3;
  local_60 = 0;
  local_res10 = 0;
  if ((iVar2 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
    FUN_144ba24f0(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xb96);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  bVar13 = *(longlong *)(param_1 + 0x10) != 0;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x28) & 3) == 0)) {
    local_58 = 0;
    local_50 = 0;
    if ((*(uint *)(lVar1 + 0x28) & 0xc) != 0) goto LAB_144bb04fe;
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (uVar12 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14), (uVar12 >> 0xf & 1) != 0)) {
    bVar13 = bVar13 | 2;
    local_58 = 0;
  }
  else {
    local_58 = 0;
    if ((uVar12 >> 0x14 & 1) == 0) {
      local_58 = 1;
    }
  }
  local_50 = 1;
LAB_144bb04fe:
  if (((lVar1 == 0) || (iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) ||
     (iVar2 = FUN_144bb3d50(*(undefined8 *)(lVar1 + 0x10),&local_60), iVar2 != 0)) {
    iVar2 = FUN_144bb3d50(*(undefined8 *)(param_1 + 0x10),&local_60);
    if (iVar2 != 0) {
      if (0x3fffffff < *(int *)(*(longlong *)(param_1 + 0x20) + 0x20)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x3fffffff;
      }
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x20) + 1;
      uVar12 = local_res8;
      iVar2 = 3;
      if (bVar13 != 0) {
        while( true ) {
          iVar3 = iVar2;
          local_68 = 0;
          if ((bVar13 & 2) == 0) goto LAB_144bb07d2;
          uVar4 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
          uVar12 = uVar4;
          if ((bVar13 & 4) != 0) {
            uVar12 = uVar8;
          }
          uVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),uVar12 - 1);
          if ((int)uVar4 <= iVar9) break;
LAB_144bb076d:
          uVar12 = local_res8;
          if ((bVar13 & 1) == 0) {
            if (((bVar13 & 4) == 0) ||
               (local_res10 = uVar8 - 1, uVar8 = local_res10, (int)local_res10 < 1)) {
              if ((local_58 != 0) && (((bVar13 & 4) == 0 && (1 < *(int *)(param_1 + 0x94))))) {
                bVar13 = bVar13 | 4;
                local_res10 = *(int *)(param_1 + 0x94) - 1;
                local_res8 = 0;
                uVar12 = local_res8;
                uVar8 = local_res10;
                goto LAB_144bb07d2;
              }
              goto LAB_144bb0a02;
            }
          }
          else {
LAB_144bb07d2:
            uVar6 = local_60;
            if ((bVar13 & 1) != 0) {
              iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
              if (iVar2 != *(int *)(param_1 + 0x94)) {
                uVar14 = 0xc8c;
LAB_144bb09d9:
                FUN_144ba24f0(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",uVar14);
                goto LAB_144bb09f2;
              }
              uVar7 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar2 + -1);
              uVar8 = local_res10;
              if (((uVar12 == 0) && (iVar2 <= iVar9)) &&
                 (local_68 = FUN_144bb0f50(param_1,uVar6,uVar7), local_68 != 0)) {
                FUN_144bac120(uVar6,local_68);
                iVar2 = FUN_144bb6050(local_68);
                if (iVar2 == 0) {
                  uVar14 = 0xca4;
                  goto LAB_144bb09d9;
                }
                iVar2 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x98),local_68);
                if (iVar2 == 0) {
                  FUN_144b47250(local_68);
                  uVar14 = 0xcad;
                  goto LAB_144bb097e;
                }
                *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
                local_res8 = FUN_144bb29f0();
                iVar3 = FUN_144bb1de0(param_1,*(int *)(param_1 + 0x94) + -1);
                uVar12 = local_res8;
                if (iVar3 - 1U < 2) goto LAB_144bb0a02;
              }
              else {
                bVar10 = bVar13 & 0xfe;
                bVar13 = bVar10 | 2;
                if (local_50 == 0) {
                  bVar13 = bVar10;
                }
              }
            }
          }
LAB_144bb0924:
          iVar2 = iVar3;
          if (bVar13 == 0) goto LAB_144bb0a02;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = 0;
        iVar2 = (**(code **)(param_1 + 0x40))(&local_68,param_1,uVar6);
        *(undefined8 *)(param_1 + 0x98) = uVar7;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0x46;
        }
        else {
          uVar8 = local_res10;
          if (iVar2 < 1) goto LAB_144bb076d;
          if ((bVar13 & 4) == 0) {
            if (local_res8 == 0) goto LAB_144bb0700;
            if (uVar4 == *(uint *)(param_1 + 0x94)) {
              iVar2 = FUN_144bb53e0(uVar6,local_68);
              if (iVar2 != 0) {
                FUN_144b47250(local_68);
                goto LAB_144bb076d;
              }
              FUN_144b47250(uVar6);
              uVar4 = uVar4 - 1;
              *(uint *)(param_1 + 0x94) = uVar4;
              FUN_144babc20(*(undefined8 *)(param_1 + 0x98),uVar4,local_68);
            }
LAB_144bb08cd:
            if ((int)uVar4 < *(int *)(param_1 + 0x94)) {
              uVar14 = 0xc5f;
              goto LAB_144bb09d9;
            }
            bVar13 = bVar13 & 0xfe;
            iVar3 = FUN_144bb17b0(param_1,uVar4);
            if (1 < iVar3 - 1U) {
              uVar12 = local_res8;
              if (local_res8 != 0) goto LAB_144bb076d;
              goto LAB_144bb0924;
            }
            goto LAB_144bb0a02;
          }
          if ((((int)uVar12 < (int)uVar4) && (0 < (int)uVar12)) && (local_res8 == 0)) {
            bVar13 = bVar13 & 0xfb;
            uVar11 = (ulonglong)(uVar4 - uVar12);
            uVar4 = uVar4 - (uVar4 - uVar12);
            do {
              uVar6 = FUN_144bac250(*(undefined8 *)(param_1 + 0x98));
              FUN_144b47250(uVar6);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            *(uint *)(param_1 + 0x94) = uVar4;
            if (lVar1 != 0) {
              iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8));
              if ((0 < iVar2) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar1 + 0x2c))) {
                *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
                FUN_144b47250(*(undefined8 *)(lVar1 + 0x20));
                *(undefined8 *)(lVar1 + 0x20) = 0;
              }
              iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8));
              if ((0 < iVar2) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar1 + 0x30))) {
                *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
              }
            }
LAB_144bb0700:
            lVar5 = local_68;
            iVar2 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x98),local_68);
            if (iVar2 != 0) {
              local_res8 = FUN_144bb29f0(lVar5);
              goto LAB_144bb08cd;
            }
            FUN_144b47250(local_68);
            uVar14 = 0xc37;
LAB_144bb097e:
            FUN_144ba24f0(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar14);
            *(undefined4 *)(param_1 + 0xb0) = 0x11;
            goto LAB_144bb09fc;
          }
          FUN_144ba24f0(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xc19);
          FUN_144b47250(local_68);
LAB_144bb09f2:
          *(undefined4 *)(param_1 + 0xb0) = 1;
        }
LAB_144bb09fc:
        iVar3 = 2;
      }
LAB_144bb0a02:
      FUN_144babdb0(local_60);
      iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
      if ((((iVar2 <= iVar9) && (iVar3 == 3)) &&
          ((lVar1 == 0 ||
           (((*(byte *)(lVar1 + 0x28) & 4) == 0 || (iVar3 = FUN_144bb3b90(param_1), iVar3 == 3))))))
         && (iVar2 == *(int *)(param_1 + 0x94))) {
        iVar3 = FUN_144bb17b0(param_1,iVar2);
      }
      if (iVar3 == 1) {
        return 1;
      }
      if (iVar3 == 2) {
        return 0;
      }
      iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
      if (iVar2 <= iVar9) {
        if (((lVar1 != 0) && (iVar3 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8)), 0 < iVar3)) &&
           (((*(byte *)(lVar1 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar1 + 0x30))))) {
          *(int *)(param_1 + 0xac) = iVar2 + -1;
          uVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar6;
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
                    /* WARNING: Could not recover jumptable at 0x000144bb0b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        if (local_res8 == 0) {
          *(int *)(param_1 + 0xac) = iVar2 + -1;
          if (*(int *)(param_1 + 0x94) < iVar2) {
            uVar6 = FUN_144babc00();
            *(undefined8 *)(param_1 + 0xb8) = uVar6;
            *(undefined4 *)(param_1 + 0xb0) = 2;
                    /* WARNING: Could not recover jumptable at 0x000144bb0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            return uVar6;
          }
          uVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar6;
          *(undefined4 *)(param_1 + 0xb0) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x000144bb0c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        iVar3 = FUN_144babbf0();
        *(int *)(param_1 + 0xac) = iVar2 + -1;
        if (iVar3 == 1) {
          uVar6 = FUN_144babc00();
          *(undefined8 *)(param_1 + 0xb8) = uVar6;
          *(undefined4 *)(param_1 + 0xb0) = 0x12;
                    /* WARNING: Could not recover jumptable at 0x000144bb0b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          return uVar6;
        }
        uVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x000144bb0bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar6;
      }
      *(int *)(param_1 + 0xac) = iVar2 + -1;
      uVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0xb8) = uVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0x16;
                    /* WARNING: Could not recover jumptable at 0x000144bb0ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar6;
    }
    uVar14 = 0xbc4;
  }
  else {
    uVar14 = 0xbb9;
  }
  FUN_144ba24f0(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar14);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0;
}



// FUNCTION 144bb0c70 FUN_144bb0c70 body=322 status=ok
// SIG undefined FUN_144bb0c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144bb0c70(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144bb0400();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_144bb1070(param_1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_144bb2b60(param_1);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = FUN_144bb1650(param_1);
      }
    }
  }
  FUN_144baff50(0,*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(param_1 + 0x50))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_144bb5060(param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
  if (iVar2 != 0) {
    uVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(int *)(param_1 + 0xb0) = iVar2;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    iVar2 = FUN_144bb2790(param_1);
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))();
  }
  if ((((iVar2 != 0) && (iVar2 = FUN_144bb13c0(param_1), iVar2 != 0)) &&
      (iVar2 = FUN_144ef80c0(param_1), iVar2 != 0)) && (iVar2 = FUN_144efa0d0(param_1), iVar2 != 0))
  {
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80) != 0) {
      iVar2 = (**(code **)(param_1 + 0x70))(param_1);
    }
    return iVar2;
  }
  return 0;
}



// FUNCTION 144bb0dc0 FUN_144bb0dc0 body=322 status=ok
// SIG undefined FUN_144bb0dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb0dc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  lVar4 = *(longlong *)(param_1 + 8);
  FUN_144b47250(*(undefined8 *)(lVar1 + 0x20));
  *(undefined8 *)(lVar1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  iVar2 = FUN_144bb3880(param_1,*(undefined8 *)(param_1 + 8),0);
  if ((iVar2 == 0) && (((*(byte *)(lVar1 + 0x28) & 5) != 0 || (-1 < *(int *)(lVar1 + 0x2c))))) {
    uVar3 = FUN_144bb0c70(param_1);
    return uVar3;
  }
  FUN_144baff50(0,*(undefined8 *)(param_1 + 0x98));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
      return 0xffffffff;
    }
    iVar2 = FUN_144bb3cb0(param_1,lVar4);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x41;
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_144bb3cb0(param_1,lVar4);
    if ((iVar2 == 0) ||
       (((*(byte *)(lVar1 + 0x34) & 1) == 0 && (iVar2 = FUN_144bb1650(param_1), iVar2 == 0)))) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar3 = 1;
  }
  *(longlong *)(param_1 + 0xb8) = lVar4;
  uVar3 = (**(code **)(param_1 + 0x38))(uVar3,param_1);
  return uVar3;
}



// FUNCTION 144bb0f20 FUN_144bb0f20 body=35 status=ok
// SIG undefined FUN_144bb0f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb0f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_144ec57e0(param_3);
  return iVar1 == 0;
}



// FUNCTION 144bb0f50 FUN_144bb0f50 body=288 status=ok
// SIG undefined FUN_144bb0f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb0f50(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar8 = 0;
  iVar2 = FUN_144babbf0(param_2);
  if (iVar2 < 1) {
    return 0;
  }
  do {
    uVar4 = FUN_144babc00(param_2,iVar8);
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar4);
    if (iVar2 != 0) {
      if (((*(byte *)(param_3 + 0xd0) & 0x20) == 0) ||
         (iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98)), iVar2 != 1)) {
        uVar1 = *(undefined8 *)(param_1 + 0x98);
        iVar2 = FUN_144babbf0(uVar1);
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            uVar5 = FUN_144babc00(uVar1,iVar6);
            iVar3 = FUN_144bb53e0(uVar5,uVar4);
            if (iVar3 == 0) goto LAB_144bb1025;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
      }
      iVar2 = FUN_144bb0280(param_1,uVar4,0xffffffff);
      uVar7 = uVar4;
      if (iVar2 != 0) {
        return uVar4;
      }
    }
LAB_144bb1025:
    iVar8 = iVar8 + 1;
    iVar2 = FUN_144babbf0(param_2);
    if (iVar2 <= iVar8) {
      return uVar7;
    }
  } while( true );
}



// FUNCTION 144bb1070 FUN_144bb1070 body=838 status=ok
// SIG undefined FUN_144bb1070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb1070(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_res8;
  
  iVar11 = 0;
  iVar5 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  iVar4 = -1;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    local_res8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) >> 6 & 1;
  }
  else {
    uVar10 = 0;
    local_res8 = 6;
  }
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar9);
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
         ((*(uint *)(lVar6 + 0xd0) & 0x200) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x22;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((uVar10 == 0) && ((*(uint *)(lVar6 + 0xd0) & 0x400) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x28;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_144ec53c0(lVar6);
      if (iVar4 == -1) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) == 0) || (uVar3 < 2))
        goto LAB_144bb11e5;
        *(undefined4 *)(param_1 + 0xb0) = 0x18;
LAB_144bb1289:
        *(int *)(param_1 + 0xac) = iVar9;
        lVar8 = lVar6;
        if (lVar6 == 0) {
          lVar8 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar9);
        }
        *(longlong *)(param_1 + 0xb8) = lVar8;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        if (iVar4 == 0) {
          if (uVar3 == 0) goto LAB_144bb11e5;
          *(undefined4 *)(param_1 + 0xb0) = 0x25;
          goto LAB_144bb1289;
        }
        if ((uVar3 == 0) ||
           (((iVar9 + 1 < iVar1 || ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0))
            && (uVar3 != 1)))) {
          *(undefined4 *)(param_1 + 0xb0) = 0x18;
          goto LAB_144bb1289;
        }
LAB_144bb11e5:
        uVar3 = 1;
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0) && (1 < iVar1)) {
          lVar8 = FUN_144bb4f60(lVar6);
          if (lVar8 != 0) {
            iVar2 = FUN_144ba6750(lVar8);
            if (iVar2 != 0x198) {
              uVar3 = 1;
              goto LAB_144bb124a;
            }
            uVar7 = FUN_144ba6cd0(lVar8);
            uVar3 = FUN_144ed2dc0(uVar7);
            if (-1 < (int)uVar3) {
              uVar3 = (uint)(uVar3 == 0);
            }
            if ((int)uVar3 < 0) goto LAB_144bb1279;
            if (uVar3 == 0) {
              *(undefined4 *)(param_1 + 0xb0) = 0x4f;
              goto LAB_144bb1289;
            }
            if (0 < (int)uVar3) goto LAB_144bb124a;
            goto LAB_144bb1285;
          }
LAB_144bb1279:
          *(undefined4 *)(param_1 + 0xb0) = 1;
          goto LAB_144bb1289;
        }
LAB_144bb124a:
        if ((((*(byte *)(lVar6 + 0xd0) & 0x10) == 0) && (*(int *)(lVar6 + 200) != -1)) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)) {
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          goto LAB_144bb1289;
        }
LAB_144bb1285:
        if (uVar3 == 0) goto LAB_144bb1289;
      }
      if ((0 < local_res8) &&
         (iVar4 = FUN_144bb2cf0(param_1,lVar6,local_res8,iVar9,iVar4), iVar4 == 0)) {
        return 0;
      }
      if (((1 < iVar9) && (*(int *)(lVar6 + 200) != -1)) && (*(int *)(lVar6 + 200) + iVar5 < iVar11)
         ) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x19;
        iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar4 == 0) {
          return 0;
        }
      }
      if ((0 < iVar9) && ((*(byte *)(lVar6 + 0xd0) & 0x20) == 0)) {
        iVar11 = iVar11 + 1;
      }
      if ((*(uint *)(lVar6 + 0xd0) & 0x400) == 0) {
        iVar4 = 1;
      }
      else {
        if (*(int *)(lVar6 + 0xcc) != -1) {
          if (*(int *)(lVar6 + 0xcc) < iVar5) {
            *(int *)(param_1 + 0xac) = iVar9;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            *(undefined4 *)(param_1 + 0xb0) = 0x26;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) {
              return 0;
            }
          }
          iVar5 = *(int *)(lVar6 + 0xcc);
        }
        iVar5 = iVar5 + 1;
        iVar4 = 0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  return 1;
}



// FUNCTION 144bb13c0 FUN_144bb13c0 body=649 status=ok
// SIG undefined FUN_144bb13c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb13c0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  do {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 1;
      }
      lVar6 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar2);
    } while ((iVar2 != 0) && ((*(byte *)(lVar6 + 0xd0) & 0x20) != 0));
    if ((*(uint *)(lVar6 + 0xd0) & 0x400) != 0) {
      uVar7 = FUN_144bb4f50(lVar6);
      uVar8 = FUN_144bb4f40(lVar6);
      iVar12 = 0;
      iVar3 = FUN_144ef3af0(uVar7);
      iVar11 = iVar3 + -1;
      if (iVar11 < 1) {
        iVar12 = 0x48;
      }
      else {
        iVar4 = FUN_144ef3af0(uVar8);
        iVar5 = FUN_144ef3af0(uVar7);
        if (iVar5 == iVar4 + 1) {
          uVar9 = FUN_144ef3c20(uVar7,iVar3 + -2);
          iVar3 = FUN_144ef4220(uVar9);
          uVar9 = FUN_144ef3c20(uVar7,iVar11);
          iVar4 = FUN_144ef4220(uVar9);
          if (iVar4 == iVar3) {
            iVar12 = 0x48;
          }
          else {
            lVar10 = FUN_144eabba0(uVar7);
            if (lVar10 == 0) {
              FUN_144ba24f0(0xb,0x95,0x41,"crypto\\x509\\x509_vfy.c",0x2a2);
              *(undefined4 *)(param_1 + 0xb0) = 0x11;
              return 0;
            }
            uVar7 = FUN_144ef3c70(lVar10,iVar11);
            uVar9 = FUN_144ef4200(uVar7);
            iVar3 = FUN_144ea8fa0(uVar9);
            if ((iVar3 != 0xd) || (iVar3 = FUN_144bb54b0(lVar10,uVar8), iVar3 != 0)) {
              iVar12 = 0x48;
            }
            FUN_144eabc00(uVar7);
            FUN_144eabc40(lVar10);
            if (iVar12 == 0) goto LAB_144bb1544;
          }
        }
        else {
          iVar12 = 0x48;
        }
      }
      *(int *)(param_1 + 0xac) = iVar2;
      *(longlong *)(param_1 + 0xb8) = lVar6;
      *(int *)(param_1 + 0xb0) = iVar12;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
LAB_144bb1544:
    iVar3 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
    while (iVar3 = iVar3 + -1, iVar2 < iVar3) {
      lVar10 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar3);
      lVar10 = *(longlong *)(lVar10 + 0x108);
      if ((lVar10 != 0) &&
         ((iVar11 = FUN_144ef4cb0(lVar6,lVar10), iVar11 != 0 ||
          ((((iVar2 == 0 &&
             (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x38), (uVar1 & 0x20) == 0)) &&
            (((uVar1 & 1) != 0 || (iVar11 = FUN_144bb2dd0(lVar6,2), iVar11 == 0)))) &&
           (iVar11 = FUN_144ef4e70(lVar6,lVar10), iVar11 != 0)))))) {
        if (iVar11 == 0x11) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar2;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(int *)(param_1 + 0xb0) = iVar11;
        iVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar11 == 0) {
          return 0;
        }
      }
    }
  } while( true );
}



// FUNCTION 144bb1650 FUN_144bb1650 body=342 status=ok
// SIG undefined FUN_144bb1650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb1650(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((*(longlong *)(lVar4 + 0x30) != 0) && (iVar2 = FUN_144bb2e70(uVar1,lVar4), iVar2 < 1)) {
    lVar3 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar3 == 0) {
      lVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(lVar4 + 0x48) != 0) &&
     (iVar2 = FUN_144ef6390(uVar1,*(longlong *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50),0),
     iVar2 < 1)) {
    lVar3 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar3 == 0) {
      lVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar3;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(lVar4 + 0x58) != 0) &&
     (iVar2 = FUN_144ef6450(uVar1,*(longlong *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x60),0),
     iVar2 < 1)) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x40;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144bb17b0 FUN_144bb17b0 body=484 status=ok
// SIG undefined FUN_144bb17b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bb17b0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 5) != 0)) && (0 < param_2)) &&
     ((param_2 < iVar2 && (uVar4 = FUN_144bb1de0(param_1,param_2), (int)uVar4 - 1U < 2)))) {
    return uVar4;
  }
  iVar7 = 0;
  iVar3 = param_2;
  if (param_2 < iVar2) {
    do {
      iVar7 = iVar3;
      lVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar7);
      iVar3 = FUN_144ef4600(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
      if (iVar3 == 1) goto LAB_144bb1958;
      if (iVar3 == 2) goto LAB_144bb18f3;
      iVar3 = iVar7 + 1;
    } while (iVar7 + 1 < iVar2);
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0) {
LAB_144bb1958:
      if ((lVar1 == 0) || (iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) {
        return 1;
      }
      if (*(int *)(lVar1 + 0x30) < 0) {
        *(int *)(lVar1 + 0x30) = param_2;
      }
      if (*(int *)(lVar1 + 0x2c) < 0) {
        return 3;
      }
      return 1;
    }
  }
  else if ((param_2 == iVar2) && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0))
  {
    lVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
    lVar6 = FUN_144bb2a30(param_1,lVar5);
    if (lVar6 != 0) {
      iVar2 = FUN_144ef4600(lVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
      if (iVar2 == 2) {
        FUN_144b47250(lVar6);
LAB_144bb18f3:
        *(int *)(param_1 + 0xac) = iVar7;
        if (lVar5 == 0) {
          lVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar7);
        }
        *(longlong *)(param_1 + 0xb8) = lVar5;
        *(undefined4 *)(param_1 + 0xb0) = 0x1c;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        return (ulonglong)((iVar2 != 0) + 2);
      }
      FUN_144babc20(*(undefined8 *)(param_1 + 0x98),0,lVar6);
      FUN_144b47250(lVar5);
      *(undefined4 *)(param_1 + 0x94) = 0;
      goto LAB_144bb1958;
    }
  }
  return 3;
}



// FUNCTION 144bb19a0 FUN_144bb19a0 body=539 status=ok
// SIG undefined FUN_144bb19a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb19a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong uVar9;
  
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar8 & 4) == 0) {
    return 1;
  }
  uVar7 = 0;
  iVar2 = 0;
  if ((uVar8 & 8) == 0) {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      return 1;
    }
  }
  else {
    iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
    iVar2 = iVar2 + -1;
  }
  uVar9 = uVar7;
  if (-1 < iVar2) {
    do {
      *(int *)(param_1 + 0xac) = (int)uVar9;
      local_res8 = 0;
      local_res10 = 0;
      lVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),uVar9);
      *(longlong *)(param_1 + 0xb8) = lVar5;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if ((*(uint *)(lVar5 + 0xd0) & 0x400) == 0) {
        while( true ) {
          iVar1 = *(int *)(param_1 + 0xd4);
          if (*(code **)(param_1 + 0x58) == (code *)0x0) {
            iVar3 = FUN_144bb2140(param_1,&local_res8,&local_res10,lVar5);
            uVar6 = local_res10;
          }
          else {
            iVar3 = (**(code **)(param_1 + 0x58))(param_1,&local_res8,lVar5);
            uVar6 = uVar7;
          }
          if (iVar3 == 0) break;
          *(undefined8 *)(param_1 + 200) = local_res8;
          iVar4 = (**(code **)(param_1 + 0x60))(param_1);
          iVar3 = 0;
          if (iVar4 == 0) goto LAB_144bb1b60;
          if (uVar6 == 0) {
LAB_144bb1b01:
            iVar3 = (**(code **)(param_1 + 0x68))(param_1,local_res8,lVar5);
            if (iVar3 == 0) goto LAB_144bb1b60;
          }
          else {
            iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6);
            iVar3 = 0;
            if ((iVar4 == 0) ||
               (iVar3 = (**(code **)(param_1 + 0x68))(param_1,uVar6,lVar5), iVar3 == 0))
            goto LAB_144bb1b60;
            if (iVar3 != 2) goto LAB_144bb1b01;
          }
          FUN_144ee8210(local_res8);
          FUN_144ee8210(uVar6);
          local_res8 = 0;
          local_res10 = 0;
          uVar6 = uVar7;
          if (iVar1 == *(int *)(param_1 + 0xd4)) break;
          if (*(int *)(param_1 + 0xd4) == 0x807f) goto LAB_144bb1b60;
        }
        *(undefined4 *)(param_1 + 0xb0) = 3;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_144bb1b60:
        FUN_144ee8210(local_res8);
        FUN_144ee8210(uVar6);
        *(undefined8 *)(param_1 + 200) = 0;
        if (iVar3 == 0) {
          return 0;
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 <= iVar2);
  }
  return 1;
}



// FUNCTION 144bb1bc0 FUN_144bb1bc0 body=538 status=ok
// SIG undefined FUN_144bb1bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb1bc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144bb1bcc;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (iVar1 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x98),0), iVar1 == 0)) {
    FUN_144ba24f0(0xb,0x91,0x41,"crypto\\x509\\x509_vfy.c",0x664);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0;
  }
  iVar1 = FUN_144ef2c70(param_1 + 0xa0,param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14),uVar4);
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_144bac250(*(undefined8 *)(param_1 + 0x98));
  }
  if (iVar1 == 0) {
    FUN_144ba24f0(0xb,0x91,0x41,"crypto\\x509\\x509_vfy.c",0x66e);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0;
  }
  if (iVar1 == -1) {
    iVar3 = 1;
    iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
    if (1 < iVar1) {
      do {
        lVar2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar3);
        if ((*(uint *)(lVar2 + 0xd0) & 0x800) != 0) {
          *(int *)(param_1 + 0xac) = iVar3;
          *(longlong *)(param_1 + 0xb8) = lVar2;
          *(undefined4 *)(param_1 + 0xb0) = 0x2a;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
      } while (iVar3 < iVar1);
      return 1;
    }
  }
  else {
    if (iVar1 == -2) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x000144bb1d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar4;
    }
    if (iVar1 != 1) {
      FUN_144ba24f0(0xb,0x91,0x44,"crypto\\x509\\x509_vfy.c",0x688);
      return 0;
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x800) != 0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      iVar1 = (**(code **)(param_1 + 0x38))(2,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 144bb1de0 FUN_144bb1de0 body=140 status=ok
// SIG undefined FUN_144bb1de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb1de0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0xe8) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x28) & 5) != 0)) && (param_2 != 0)) {
    lVar2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98));
    if (lVar2 != 0) {
      iVar1 = FUN_144bb3880(param_1,lVar2,param_2);
      if (iVar1 < 0) {
        return 2;
      }
      if (0 < iVar1) {
        *(int *)(param_1 + 0x94) = param_2 + -1;
        return 1;
      }
    }
  }
  return 3;
}



// FUNCTION 144bb1e70 FUN_144bb1e70 body=108 status=ok
// SIG undefined FUN_144bb1e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb1e70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_144bb4f60(param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  if (iVar1 < 1) {
    return true;
  }
  if (lVar3 == 0) {
    return false;
  }
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar2 = FUN_144ba67f0(lVar3);
  return *(int *)(&DAT_14997b7a8 + (longlong)(iVar1 + -1) * 4) <= iVar2;
}



// FUNCTION 144bb1ee0 FUN_144bb1ee0 body=140 status=ok
// SIG undefined FUN_144bb1ee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bb1ee0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int local_res8 [2];
  
  local_res8[0] = -1;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  if (iVar1 < 1) {
    return 1;
  }
  if (5 < iVar1) {
    iVar1 = 5;
  }
  uVar2 = FUN_144bb5f30(param_2,0,0,local_res8,0,0x144bb1eec);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  return (ulonglong)(*(int *)(&DAT_14997b7a8 + (longlong)(iVar1 + -1) * 4) <= local_res8[0]);
}



// FUNCTION 144bb1f70 FUN_144bb1f70 body=449 status=ok
// SIG undefined FUN_144bb1f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144bb1f70(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res18 [2];
  
  uVar6 = *param_3;
  lVar8 = 0;
  uVar7 = 0;
  local_res18[0] = 0;
  uVar2 = *(uint *)(param_4 + 0x90);
  if ((uVar2 & 2) != 0) {
    return 0;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
    if ((uVar2 & 0x60) != 0) {
      return 0;
    }
  }
  else if ((uVar2 & 0x40) == 0) {
    if (*(longlong *)(param_4 + 0xa0) != 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_4 + 0x94) & ~uVar6) == 0) {
    return 0;
  }
  uVar3 = FUN_144ef3ad0(param_4);
  uVar4 = FUN_144bb4f40(param_5);
  iVar1 = FUN_144bb54b0(uVar4,uVar3);
  if (iVar1 == 0) {
    uVar7 = 0x20;
    local_res18[0] = 0x20;
  }
  else if ((*(byte *)(param_4 + 0x90) & 0x20) == 0) {
    return 0;
  }
  if ((*(uint *)(param_4 + 0x7c) & 0x200) == 0) {
    uVar7 = uVar7 | 0x100;
    local_res18[0] = uVar7;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 >> 0x15 & 1) == 0) goto LAB_144bb2074;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x20) + 8;
LAB_144bb2074:
    uVar3 = FUN_144ef3ab0(param_4);
    uVar2 = FUN_144bafd70(uVar3,lVar8);
    if (uVar2 < 0x80000000) goto LAB_144bb20c3;
    lVar5 = FUN_144ef3ac0(param_4);
    if (lVar5 != 0) {
      uVar3 = FUN_144ef3ac0(param_4);
      iVar1 = FUN_144bafd70(uVar3,lVar8);
      if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
      goto LAB_144bb20c3;
    }
  }
  local_res18[0] = uVar7 | 0x40;
LAB_144bb20c3:
  FUN_144bb23c0(param_1,param_4,param_2,local_res18);
  uVar2 = local_res18[0];
  if ((local_res18[0] & 4) == 0) {
    return 0;
  }
  iVar1 = FUN_144bb2560(param_5,param_4,local_res18[0],local_res18);
  if (iVar1 != 0) {
    if ((local_res18[0] & ~uVar6) == 0) {
      return 0;
    }
    uVar6 = uVar6 | local_res18[0];
    uVar2 = uVar2 | 0x80;
  }
  *param_3 = uVar6;
  return uVar2;
}



// FUNCTION 144bb2140 FUN_144bb2140 body=317 status=ok
// SIG undefined FUN_144bb2140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb2140(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined4 local_28 [2];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_res8[0] = 0;
  local_20 = 0;
  local_10 = 0;
  uVar2 = FUN_144bb4f40(param_4);
  local_28[0] = *(undefined4 *)(param_1 + 0xd4);
  iVar1 = FUN_144bb2f30(param_1,&local_20,&local_10,&local_18,local_res8,local_28,
                        *(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    lVar3 = (**(code **)(param_1 + 0x80))(param_1,uVar2);
    if ((lVar3 == 0) && (local_20 != 0)) goto LAB_144bb2232;
    FUN_144bb2f30(param_1,&local_20,&local_10,&local_18,local_res8,local_28,lVar3);
    FUN_144babe00(lVar3,FUN_144ee8210);
  }
  if (local_20 == 0) {
    return 0;
  }
LAB_144bb2232:
  *(undefined8 *)(param_1 + 0xc0) = local_18;
  *(undefined4 *)(param_1 + 0xd0) = local_res8[0];
  *(undefined4 *)(param_1 + 0xd4) = local_28[0];
  *param_2 = local_20;
  *param_3 = local_10;
  return 1;
}



// FUNCTION 144bb2280 FUN_144bb2280 body=313 status=ok
// SIG undefined FUN_144bb2280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb2280(longlong param_1,undefined8 *param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x2000) != 0) &&
     (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0xd0) | *(uint *)(param_4 + 0x7c)) >> 0xc & 1) !=
      0)) {
    uVar7 = 0;
    iVar1 = FUN_144babbf0(param_5);
    uVar6 = uVar7;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_144babc00(param_5,uVar6);
        iVar1 = FUN_144bb3200(uVar2,param_4);
        if (iVar1 != 0) {
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
          if ((uVar5 & 2) == 0) {
            if ((uVar5 >> 0x15 & 1) == 0) goto LAB_144bb235b;
          }
          else {
            uVar7 = *(longlong *)(param_1 + 0x20) + 8;
LAB_144bb235b:
            uVar3 = FUN_144ef3ab0(uVar2);
            uVar5 = FUN_144bafd70(uVar3,uVar7);
            if (uVar5 < 0x80000000) goto LAB_144bb23a8;
            lVar4 = FUN_144ef3ac0(uVar2);
            if (lVar4 != 0) {
              uVar3 = FUN_144ef3ac0(uVar2);
              iVar1 = FUN_144bafd70(uVar3,uVar7);
              if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
              goto LAB_144bb23a8;
            }
          }
          *param_3 = *param_3 | 2;
LAB_144bb23a8:
          FUN_144ef3a90(uVar2);
          *param_2 = uVar2;
          return;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar1 = FUN_144babbf0(param_5);
      } while ((int)uVar5 < iVar1);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 144bb23c0 FUN_144bb23c0 body=408 status=ok
// SIG undefined FUN_144bb23c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb23c0(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar2 = FUN_144ef3ad0(param_2);
  iVar5 = *(int *)(param_1 + 0xac);
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  if (iVar5 != iVar1 + -1) {
    iVar5 = iVar5 + 1;
  }
  uVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar5);
  iVar1 = FUN_144ec5560(uVar3,*(undefined8 *)(param_2 + 0x80));
  if ((iVar1 == 0) && ((*param_4 & 0x20) != 0)) {
    *param_4 = *param_4 | 0x1c;
    *param_3 = uVar3;
  }
  else {
    iVar5 = iVar5 + 1;
    iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
    if (iVar5 < iVar1) {
      do {
        uVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar5);
        uVar4 = FUN_144bb4f50(uVar3);
        iVar1 = FUN_144bb54b0(uVar4,uVar2);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_144ec5560(uVar3,*(undefined8 *)(param_2 + 0x80)), iVar1 == 0)) {
          *param_4 = *param_4 | 0xc;
          *param_3 = uVar3;
          return;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
      } while (iVar5 < iVar1);
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) != 0) {
      iVar1 = 0;
      iVar5 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar5) {
        do {
          uVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x10),iVar1);
          uVar4 = FUN_144bb4f50(uVar3);
          iVar5 = FUN_144bb54b0(uVar4,uVar2);
          if ((iVar5 == 0) &&
             (iVar5 = FUN_144ec5560(uVar3,*(undefined8 *)(param_2 + 0x80)), iVar5 == 0)) {
            *param_3 = uVar3;
            *param_4 = *param_4 | 4;
            return;
          }
          iVar1 = iVar1 + 1;
          iVar5 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x10));
        } while (iVar1 < iVar5);
      }
    }
  }
  return;
}



// FUNCTION 144bb2560 FUN_144bb2560 body=288 status=ok
// SIG undefined FUN_144bb2560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb2560(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + 0x90);
  if ((uVar1 & 0x10) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xd0) & 0x10) == 0) {
    if ((uVar1 & 8) != 0) {
      return 0;
    }
  }
  else if ((uVar1 & 4) != 0) {
    return 0;
  }
  *param_4 = *(uint *)(param_2 + 0x94);
  iVar5 = 0;
  iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0xf8));
  if (0 < iVar2) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0xf8),iVar5);
      iVar2 = FUN_144bb3450(puVar3,param_2,param_3);
      if ((iVar2 != 0) &&
         ((*(undefined8 **)(param_2 + 0x88) == (undefined8 *)0x0 ||
          (iVar2 = FUN_144bb32d0(*puVar3,**(undefined8 **)(param_2 + 0x88)), iVar2 != 0)))) {
        *param_4 = *param_4 & *(uint *)(puVar3 + 3);
        goto LAB_144bb2679;
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0xf8));
    } while (iVar5 < iVar2);
  }
  if (((*(longlong **)(param_2 + 0x88) == (longlong *)0x0) || (**(longlong **)(param_2 + 0x88) == 0)
      ) && ((param_3 & 0x20) != 0)) {
LAB_144bb2679:
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144bb2680 FUN_144bb2680 body=263 status=ok
// SIG undefined FUN_144bb2680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144bb2680(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_70;
  undefined8 *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x144bb268c;
  if (param_1[0x1b] != 0) {
    return 0;
  }
  iVar1 = FUN_144baf7b0(local_108,*param_1,param_2,param_1[2]);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  local_f0 = param_1[3];
  uVar3 = param_1[4];
  FUN_144eaaf50(local_e8);
  local_d0 = param_1[7];
  local_e8 = uVar3;
  local_30 = param_1;
  uVar2 = FUN_144bb0090(local_108);
  if (0 < (int)uVar2) {
    uVar3 = param_1[0x13];
    iVar1 = FUN_144babbf0(uVar3);
    uVar3 = FUN_144babc00(uVar3,iVar1 + -1);
    iVar1 = FUN_144babbf0(local_70);
    uVar4 = FUN_144babc00(local_70,iVar1 + -1);
    iVar1 = FUN_144bb53e0(uVar3,uVar4);
    uVar2 = (uint)(iVar1 == 0);
  }
  FUN_144bafa60(local_108);
  return uVar2;
}



// FUNCTION 144bb2790 FUN_144bb2790 body=608 status=ok
// SIG undefined FUN_144bb2790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb2790(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  iVar6 = iVar1 + -1;
  lVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar6);
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,lVar3,lVar3);
    lVar5 = lVar3;
    if (iVar2 != 0) goto LAB_144bb287a;
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      if (0 < iVar6) {
        iVar6 = iVar1 + -2;
        *(int *)(param_1 + 0xac) = iVar6;
        lVar4 = lVar3;
        goto LAB_144bb2868;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar4 = lVar3;
      if (lVar3 == 0) {
        lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    lVar5 = 0;
  }
LAB_144bb2982:
  do {
    do {
      iVar1 = FUN_144bb0280(param_1,lVar3,iVar6);
      if (iVar1 == 0) {
        return 0;
      }
      *(longlong *)(param_1 + 0xc0) = lVar5;
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(int *)(param_1 + 0xac) = iVar6;
      iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar6 = iVar6 + -1;
      lVar4 = lVar3;
      if (-1 < iVar6) {
LAB_144bb2868:
        lVar3 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar6);
        lVar5 = lVar4;
      }
LAB_144bb287a:
      if (iVar6 < 0) {
        return 1;
      }
    } while ((lVar3 == lVar5) &&
            (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x4000) == 0 ||
             ((*(uint *)(lVar5 + 0xd0) & 0x2000) == 0))));
    iVar1 = (uint)(lVar3 != lVar5) + iVar6;
    if (((lVar3 != lVar5) || ((*(byte *)(lVar5 + 0xd0) & 0x10) != 0)) &&
       (iVar2 = FUN_144ec58b0(lVar5,lVar3), iVar2 != 0)) {
      *(int *)(param_1 + 0xac) = iVar1;
      lVar4 = lVar5;
      if (lVar5 == 0) {
        lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar1);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(int *)(param_1 + 0xb0) = iVar2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    lVar4 = FUN_144bb4f60(lVar5);
    if (lVar4 == 0) {
      *(int *)(param_1 + 0xac) = iVar1;
      lVar4 = lVar5;
      if (lVar5 == 0) {
        lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar1);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 6;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar1 = FUN_144bb5810(lVar3,lVar4);
      if (0 < iVar1) goto LAB_144bb2982;
      iVar1 = FUN_144bb2b00(param_1,lVar3,iVar6,7);
    }
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144bb29f0 FUN_144bb29f0 body=60 status=ok
// SIG undefined FUN_144bb29f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144bb29f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ec5450(param_1,0xffffffff,0);
  if (iVar1 != 1) {
    return 0;
  }
  return *(uint *)(param_1 + 0xd0) >> 0xd & 1;
}



// FUNCTION 144bb2a30 FUN_144bb2a30 body=207 status=ok
// SIG undefined FUN_144bb2a30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bb2a30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar2 = FUN_144bb4f50(param_2);
  lVar3 = (**(code **)(param_1 + 0x78))(param_1,uVar2);
  uVar4 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_144babbf0(lVar3);
    uVar4 = uVar6;
    if (0 < iVar1) {
      do {
        uVar4 = FUN_144babc00(lVar3,uVar6);
        iVar1 = FUN_144bb53e0(uVar4,param_2);
        if (iVar1 == 0) {
          if ((uVar4 != 0) && (iVar1 = FUN_144bb6050(uVar4), iVar1 == 0)) {
            uVar4 = 0;
          }
          break;
        }
        uVar4 = 0;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar1 = FUN_144babbf0(lVar3);
      } while ((int)uVar5 < iVar1);
    }
    FUN_144babe00(lVar3,FUN_144b47250);
  }
  return uVar4;
}



// FUNCTION 144bb2b00 FUN_144bb2b00 body=94 status=ok
// SIG undefined FUN_144bb2b00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb2b00(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 0xac) = param_3;
  if (param_2 == 0) {
    param_2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),param_3);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  if (param_4 != 0) {
    *(int *)(param_1 + 0xb0) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bb2b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}



// FUNCTION 144bb2b60 FUN_144bb2b60 body=387 status=ok
// SIG undefined FUN_144bb2b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb2b60(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x24) < 1) {
    return 1;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar6);
      if (0 < iVar6) {
        lVar5 = FUN_144bb4f60(lVar4);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
        if (0 < iVar3) {
          if (lVar5 != 0) {
            if (5 < iVar3) {
              iVar3 = 5;
            }
            iVar2 = FUN_144ba67f0(lVar5);
            if (*(int *)(&DAT_14997b7a8 + (longlong)(iVar3 + -1) * 4) <= iVar2) goto LAB_144bb2c5e;
          }
          *(int *)(param_1 + 0xac) = iVar6;
          lVar5 = lVar4;
          if (lVar4 == 0) {
            lVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar6);
          }
          *(longlong *)(param_1 + 0xb8) = lVar5;
          *(undefined4 *)(param_1 + 0xb0) = 0x43;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
LAB_144bb2c5e:
      if ((iVar6 < iVar1 + -1) && (iVar3 = FUN_144bb1ee0(param_1,lVar4), iVar3 == 0)) {
        *(int *)(param_1 + 0xac) = iVar6;
        if (lVar4 == 0) {
          lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar6);
        }
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x44;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return 1;
}



// FUNCTION 144bb2cf0 FUN_144bb2cf0 body=212 status=ok
// SIG undefined FUN_144bb2cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb2cf0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 3;
  if ((*(int *)(param_1 + 0x94) <= param_4) &&
     (param_3 == *(int *)(*(longlong *)(param_1 + 0x20) + 0x18))) {
    iVar1 = FUN_144ef4600(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),4);
  }
  if (iVar1 == 1) {
LAB_144bb2daa:
    uVar2 = 1;
  }
  else {
    if (iVar1 != 2) {
      iVar1 = FUN_144ec5450(param_2,param_3,0 < param_5);
      if ((iVar1 != 0) &&
         ((iVar1 == 1 || ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) == 0))))
      goto LAB_144bb2daa;
    }
    *(int *)(param_1 + 0xac) = param_4;
    if (param_2 == 0) {
      param_2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),param_4);
    }
    *(longlong *)(param_1 + 0xb8) = param_2;
    *(undefined4 *)(param_1 + 0xb0) = 0x1a;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  }
  return uVar2;
}



// FUNCTION 144bb2dd0 FUN_144bb2dd0 body=151 status=ok
// SIG undefined FUN_144bb2dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144bb2dd0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  lVar2 = FUN_144eac5d0(param_1,0x55,0,0);
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(lVar2);
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      piVar3 = (int *)FUN_144babc00(lVar2,iVar4);
      if (*piVar3 == param_2) {
        uVar5 = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(lVar2);
      uVar5 = 0;
    } while (iVar4 < iVar1);
  }
  FUN_144ef4900(lVar2);
  return uVar5;
}



// FUNCTION 144bb2e70 FUN_144bb2e70 body=180 status=ok
// SIG undefined FUN_144bb2e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb2e70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144bb2e8e;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_2 + 0x30));
  iVar4 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_144ea6530(*(longlong *)(param_2 + 0x40),"crypto\\x509\\x509_vfy.c",0x2eb);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  if (0 < iVar1) {
    do {
      uVar3 = FUN_144babc00(*(undefined8 *)(param_2 + 0x30),iVar4);
      iVar2 = FUN_144ef62d0(param_1,uVar3,0,*(undefined4 *)(param_2 + 0x38),
                            (undefined8 *)(param_2 + 0x40),uVar5);
      if (0 < iVar2) {
        return true;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar1 == 0;
}



// FUNCTION 144bb2f30 FUN_144bb2f30 body=469 status=ok
// SIG undefined FUN_144bb2f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb2f30(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5,uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = 0;
  local_78 = 0;
  iVar10 = *param_5;
  local_60 = 0;
  local_68 = 0;
  local_58 = uVar4;
  iVar1 = FUN_144babbf0(param_7);
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_144babc00(param_7,uVar8);
      local_74 = *param_6;
      iVar1 = FUN_144bb1f70(param_1,&local_60,&local_74,uVar3,uVar4);
      if ((iVar10 <= iVar1) && (iVar1 != 0)) {
        if ((iVar1 == iVar10) && (uVar9 != 0)) {
          uVar4 = FUN_144ef3ab0(uVar3);
          uVar5 = FUN_144ef3ab0(uVar9);
          iVar2 = FUN_144ef2070(&local_70,&local_6c,uVar5,uVar4);
          if ((iVar2 == 0) || ((local_70 < 1 && (local_6c < 1)))) {
            uVar6 = (ulonglong)local_78;
            goto LAB_144bb3058;
          }
        }
        uVar6 = (ulonglong)local_74;
        local_68 = local_60;
        local_78 = local_74;
        uVar9 = uVar3;
        iVar10 = iVar1;
      }
LAB_144bb3058:
      uVar5 = local_68;
      uVar7 = (int)uVar8 + 1;
      iVar1 = FUN_144babbf0(param_7);
      uVar8 = (ulonglong)uVar7;
      uVar4 = local_58;
    } while ((int)uVar7 < iVar1);
    if (uVar9 != 0) {
      FUN_144ee8210(*param_2);
      *param_2 = uVar9;
      *param_4 = uVar5;
      *param_5 = iVar10;
      *param_6 = (uint)uVar6;
      FUN_144ef3a90(uVar9);
      FUN_144ee8210(*param_3);
      *param_3 = 0;
      FUN_144bb2280(param_1,param_3,param_5,uVar9,param_7);
    }
  }
  return 0x1bf < iVar10;
}



// FUNCTION 144bb3110 FUN_144bb3110 body=237 status=ok
// SIG undefined FUN_144bb3110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb3110(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = FUN_144eac5f0(param_1,param_3,0xffffffff);
  lVar5 = 0;
  lVar4 = lVar5;
  if (-1 < iVar1) {
    iVar2 = FUN_144eac5f0(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar3 = FUN_144eac610(param_1,iVar1);
    lVar4 = FUN_144ef4430(uVar3);
  }
  iVar1 = FUN_144eac5f0(param_2,param_3,0xffffffff);
  if (-1 < iVar1) {
    iVar2 = FUN_144eac5f0(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return false;
    }
    uVar3 = FUN_144eac610(param_2,iVar1);
    lVar5 = FUN_144ef4430(uVar3);
  }
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      return true;
    }
  }
  else if (lVar5 != 0) {
    iVar1 = FUN_144ef2c30(lVar4,lVar5);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 144bb3200 FUN_144bb3200 body=201 status=ok
// SIG undefined FUN_144bb3200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb3200(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_2 + 0x98) != 0)) {
    uVar2 = FUN_144ef3ad0();
    uVar3 = FUN_144ef3ad0(param_2);
    iVar1 = FUN_144bb54b0(uVar3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_144bb3110(param_1,param_2,0x5a);
      if (iVar1 != 0) {
        iVar1 = FUN_144bb3110(param_1,param_2,0x302);
        if (iVar1 != 0) {
          iVar1 = FUN_144ef10c0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0x98));
          if (iVar1 < 1) {
            iVar1 = FUN_144ef10c0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_2 + 0x98));
            return 0 < iVar1;
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 144bb32d0 FUN_144bb32d0 body=378 status=ok
// SIG undefined FUN_144bb32d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb32d0(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144bb32de;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return true;
  }
  if (*param_1 == 1) {
    lVar5 = *(longlong *)(param_1 + 4);
    if (lVar5 == 0) {
      return false;
    }
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return false;
      }
      iVar1 = FUN_144bb54b0(lVar5);
      return iVar1 == 0;
    }
    uVar3 = *(undefined8 *)(param_2 + 2);
  }
  else {
    if (*param_2 != 1) goto LAB_144bb33a1;
    lVar5 = *(longlong *)(param_2 + 4);
    if (lVar5 == 0) {
      return false;
    }
    uVar3 = *(undefined8 *)(param_1 + 2);
  }
  if (lVar5 != 0) {
    iVar6 = 0;
    iVar1 = FUN_144babbf0(uVar3);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_144babc00(uVar3,iVar6);
        if ((*piVar2 == 4) &&
           (iVar1 = FUN_144bb54b0(lVar5,*(undefined8 *)(piVar2 + 2),param_3,param_4,uVar7),
           iVar1 == 0)) {
          return true;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_144babbf0(uVar3);
      } while (iVar6 < iVar1);
    }
    return false;
  }
LAB_144bb33a1:
  iVar6 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
  if (0 < iVar1) {
    do {
      uVar7 = FUN_144babc00(*(undefined8 *)(param_1 + 2),iVar6);
      iVar4 = 0;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_2 + 2));
      if (0 < iVar1) {
        do {
          uVar3 = FUN_144babc00(*(undefined8 *)(param_2 + 2),iVar4);
          iVar1 = FUN_144ef47e0(uVar7,uVar3);
          if (iVar1 == 0) {
            return true;
          }
          iVar4 = iVar4 + 1;
          iVar1 = FUN_144babbf0(*(undefined8 *)(param_2 + 2));
        } while (iVar4 < iVar1);
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 2));
    } while (iVar6 < iVar1);
  }
  return false;
}



// FUNCTION 144bb3450 FUN_144bb3450 body=171 status=ok
// SIG undefined FUN_144bb3450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144bb3450(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = FUN_144ef3ad0(param_2);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return param_3 >> 5 & 1;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0();
  if (0 < iVar1) {
    do {
      piVar3 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 0x10),iVar4);
      if (*piVar3 == 4) {
        iVar1 = FUN_144bb54b0(*(undefined8 *)(piVar3 + 2),uVar2);
        if (iVar1 == 0) {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x10));
    } while (iVar4 < iVar1);
  }
  return 0;
}



// FUNCTION 144bb3500 FUN_144bb3500 body=690 status=ok
// SIG undefined FUN_144bb3500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb3500(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    if (iVar3 < iVar2 + -1) {
      lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar3 + 1);
    }
    else {
      lVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar2 + -1);
      iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar4,lVar4);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x21;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    if (((*(byte *)(lVar4 + 0xd0) & 2) != 0) && ((*(byte *)(lVar4 + 0xd4) & 2) == 0)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x23;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1 + 0xd0) & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2c;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (((*(byte *)(param_1 + 0xd0) & 8) == 0) &&
       (iVar3 = FUN_144bb2680(param_1,*(undefined8 *)(param_1 + 0xc0)), iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x36;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_2 + 0x90) & 2) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  if ((*(byte *)(param_1 + 0xd0) & 0x40) != 0) goto LAB_144bb372a;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) != 0) goto LAB_144bb372a;
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x20) + 8;
  }
  *(longlong *)(param_1 + 200) = param_2;
  uVar5 = FUN_144ef3ab0(param_2);
  iVar3 = FUN_144bafd70(uVar5,lVar7);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0xf;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  else if (0 < iVar3) {
    *(undefined4 *)(param_1 + 0xb0) = 0xb;
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  lVar6 = FUN_144ef3ac0(param_2);
  if (lVar6 != 0) {
    uVar5 = FUN_144ef3ac0(param_2);
    iVar3 = FUN_144bafd70(uVar5,lVar7);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x10;
    }
    else {
      if ((-1 < iVar3) || ((*(byte *)(param_1 + 0xd0) & 2) != 0)) goto LAB_144bb371f;
      *(undefined4 *)(param_1 + 0xb0) = 0xc;
    }
    iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_144bb371f:
  *(undefined8 *)(param_1 + 200) = 0;
LAB_144bb372a:
  lVar4 = FUN_144bb4f60(lVar4);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
  }
  else {
    iVar3 = FUN_144bb52d0(param_2,lVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = FUN_144ee81e0(param_2,lVar4);
    if (0 < iVar3) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar3 != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 144bb37c0 FUN_144bb37c0 body=187 status=ok
// SIG undefined FUN_144bb37c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb37c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong local_res8;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
     ((*(uint *)(param_2 + 0x7c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_144ee8260(param_2,&local_res8,param_3);
  if (iVar1 != 0) {
    if (*(int *)(local_res8 + 0x30) == 8) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144bb3880 FUN_144bb3880 body=752 status=ok
// SIG undefined FUN_144bb3880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb3880(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined1 *local_98;
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144bb3896;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar2 = *(longlong **)(param_1 + 0xe8);
  puVar11 = (undefined1 *)0x0;
  local_b8 = 0;
  local_b4 = 0x100;
  uVar5 = 5;
  if (param_3 == 0) {
    uVar5 = 10;
  }
  local_b0 = 0x100;
  local_98 = (undefined1 *)0x0;
  uVar14 = 0x100;
  uVar15 = 0x100;
  uVar4 = uVar5 & 3;
  if (param_3 < *(int *)(param_1 + 0x94)) {
    uVar4 = uVar5;
  }
  local_a8 = uVar4 & 0xfffffffc;
  if (*(int *)((longlong)plVar2 + 0x2c) < 0) {
    local_a8 = uVar4;
  }
  puVar7 = puVar11;
  local_a4 = param_3;
  local_90 = param_2;
  if ((*(uint *)(plVar2 + 5) & local_a8) != 0) {
    puVar7 = (undefined1 *)FUN_144babbf0(plVar2[1]);
  }
  local_ac = (uint)puVar7;
  puVar12 = puVar11;
  puVar13 = puVar11;
  do {
    if ((int)puVar7 <= (int)puVar13) {
LAB_144bb3b40:
      FUN_144ea6530(puVar12,"crypto\\x509\\x509_vfy.c",0xace);
LAB_144bb3b58:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
    }
    pbVar8 = (byte *)FUN_144babc00(plVar2[1],puVar13);
    bVar1 = *pbVar8;
    if ((local_a8 >> (bVar1 & 0x1f) & 1) != 0) {
      if (bVar1 != local_b4) {
        uVar15 = 0x100;
        local_b4 = (uint)bVar1;
        uVar14 = (uint)*(byte *)((ulonglong)pbVar8[2] + *(longlong *)(*plVar2 + 8));
      }
      bVar1 = pbVar8[1];
      if (bVar1 != local_b0) {
        local_b0 = (uint)bVar1;
        FUN_144ea6530(puVar12,"crypto\\x509\\x509_vfy.c",0xa91);
        local_a0 = (undefined1 *)0x0;
        if (bVar1 == 0) {
          uVar5 = FUN_144bb5d70(local_90,&local_a0);
LAB_144bb39f1:
          puVar11 = (undefined1 *)(ulonglong)uVar5;
          if ((-1 < (int)uVar5) && (local_a0 != (undefined1 *)0x0)) {
            uVar15 = 0x100;
            uVar10 = (ulonglong)pbVar8[2];
            uVar14 = (uint)*(byte *)(*(longlong *)(*plVar2 + 8) + uVar10);
            puVar12 = local_a0;
            goto LAB_144bb3a3c;
          }
          local_c8 = CONCAT44(local_c8._4_4_,0xa39);
          uVar9 = 0x41;
        }
        else {
          if (bVar1 == 1) {
            uVar9 = FUN_144bb6070(local_90);
            uVar5 = FUN_144bb64a0(uVar9,&local_a0);
            goto LAB_144bb39f1;
          }
          local_c8 = CONCAT44(local_c8._4_4_,0xa34);
          uVar9 = 0x85;
        }
        FUN_144ba24f0(0xb,0x6b,uVar9,"crypto\\x509\\x509_vfy.c");
        goto LAB_144bb3b58;
      }
      uVar10 = (ulonglong)pbVar8[2];
      if ((pbVar8[2] != 0) && (*(byte *)(*(longlong *)(*plVar2 + 8) + uVar10) < uVar14))
      goto LAB_144bb3aac;
LAB_144bb3a3c:
      if ((int)uVar10 != (int)uVar15) {
        local_b8 = (uint)puVar11;
        lVar3 = *(longlong *)(*(longlong *)*plVar2 + uVar10 * 8);
        uVar15 = uVar10;
        local_98 = puVar12;
        if (lVar3 != 0) {
          local_98 = local_88;
          local_c0 = 0;
          local_c8 = lVar3;
          iVar6 = FUN_144ba5d40(puVar12,puVar11,local_88,&local_b8);
          if (iVar6 == 0) goto LAB_144bb3b40;
        }
      }
      if (((ulonglong)local_b8 == *(ulonglong *)(pbVar8 + 0x10)) &&
         (iVar6 = memcmp(local_98,*(void **)(pbVar8 + 8),(ulonglong)local_b8), iVar6 == 0)) {
        if ((local_b4 - 2 < 2) || (*(int *)((longlong)plVar2 + 0x2c) < 0)) {
          *(int *)((longlong)plVar2 + 0x2c) = local_a4;
          plVar2[3] = (longlong)pbVar8;
          FUN_144ea6530(plVar2[4],"crypto\\x509\\x509_vfy.c",0xac5);
          plVar2[4] = local_90;
          FUN_144bb6050(local_90);
        }
        goto LAB_144bb3b40;
      }
    }
LAB_144bb3aac:
    puVar7 = (undefined1 *)(ulonglong)local_ac;
    puVar13 = (undefined1 *)(ulonglong)((int)puVar13 + 1);
  } while( true );
}



// FUNCTION 144bb3b90 FUN_144bb3b90 body=280 status=ok
// SIG undefined FUN_144bb3b90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb3b90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  iVar7 = *(int *)(param_1 + 0x94) + -1;
  uVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),iVar7);
  iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8));
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      pcVar5 = (char *)FUN_144babc00(*(undefined8 *)(lVar1 + 8),iVar6);
      if ((((*pcVar5 == '\x02') && (pcVar5[1] == '\x01')) && (pcVar5[2] == '\0')) &&
         (iVar3 = FUN_144bb5810(uVar4,*(undefined8 *)(pcVar5 + 0x18)), 0 < iVar3)) {
        FUN_144b47250(*(undefined8 *)(lVar1 + 0x20));
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(int *)(lVar1 + 0x2c) = iVar7;
        *(char **)(lVar1 + 0x18) = pcVar5;
        iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x98));
        if (*(int *)(param_1 + 0x94) < iVar2) {
          do {
            uVar4 = FUN_144bac250(*(undefined8 *)(param_1 + 0x98));
            FUN_144b47250(uVar4);
            iVar2 = iVar2 + -1;
          } while (*(int *)(param_1 + 0x94) < iVar2);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return 3;
}



// FUNCTION 144bb3cb0 FUN_144bb3cb0 body=145 status=ok
// SIG undefined FUN_144bb3cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb3cb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144bb5060(0,param_2,0,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_2 == 0) {
    param_2 = FUN_144babc00(*(undefined8 *)(param_1 + 0x98),0);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 0xb0) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000144bb3d3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  return uVar2;
}



// FUNCTION 144bb3d50 FUN_144bb3d50 body=182 status=ok
// SIG undefined FUN_144bb3d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb3d50(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar2 = FUN_144bac2a0();
      *param_2 = lVar2;
      return lVar2 != 0;
    }
    iVar4 = 0;
    iVar1 = FUN_144babbf0();
    if (0 < iVar1) {
      do {
        uVar3 = FUN_144babc00(param_1,iVar4);
        iVar1 = FUN_144bac1c0(lVar2,uVar3);
        if (iVar1 == 0) {
          FUN_144babdb0(lVar2);
          *param_2 = 0;
          return false;
        }
        iVar4 = iVar4 + 1;
        iVar1 = FUN_144babbf0(param_1);
      } while (iVar4 < iVar1);
    }
  }
  return true;
}



// FUNCTION 144bb3e10 FUN_144bb3e10 body=237 status=ok
// SIG undefined FUN_144bb3e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144bb3e10(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_144bac1a0();
  if (iVar1 < 0) {
    return (int *)0x0;
  }
  if (1 < *param_2 - 1U) {
    piVar4 = (int *)FUN_144babc00(param_1,iVar1);
    return piVar4;
  }
  iVar2 = FUN_144babbf0(param_1);
  do {
    if (iVar2 <= iVar1) {
      return (int *)0x0;
    }
    piVar4 = (int *)FUN_144babc00(param_1,iVar1);
    iVar3 = *piVar4;
    if (iVar3 != *param_2) {
      return (int *)0x0;
    }
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        iVar3 = FUN_144bb53c0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
      }
      else {
        if (iVar3 != 2) goto LAB_144bb3eb1;
        iVar3 = FUN_144bb55e0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
      }
      if (iVar3 != 0) {
        return (int *)0x0;
      }
    }
LAB_144bb3eb1:
    if (*param_2 == 1) {
      iVar3 = FUN_144bb53e0(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
    }
    else {
      if (*param_2 != 2) {
        return piVar4;
      }
      iVar3 = FUN_144bb5600(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(param_2 + 2));
    }
    if (iVar3 == 0) {
      return piVar4;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



// FUNCTION 144bb3f00 FUN_144bb3f00 body=89 status=ok
// SIG undefined FUN_144bb3f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144bb3f00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_144ea6670(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  return puVar1;
}



// FUNCTION 144bb3f60 FUN_144bb3f60 body=81 status=ok
// SIG undefined FUN_144bb3f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb3f60(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      FUN_144b47250(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 2) {
      FUN_144ee8210(*(undefined8 *)(param_1 + 2));
    }
  }
  FUN_144ea6530(param_1,"crypto\\x509\\x509_lu.c",0x1d7);
  return;
}



// FUNCTION 144bb3fc0 FUN_144bb3fc0 body=327 status=ok
// SIG undefined FUN_144bb3fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_144bb3fc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144bb3fcc;
  puVar2 = (undefined4 *)FUN_144ea6670(0x98,"crypto\\x509\\x509_lu.c",0xa2);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_144ba24f0(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",0xa5,uVar5);
    return (undefined4 *)0x0;
  }
  lVar3 = FUN_144babc60(FUN_144bb4c50);
  *(longlong *)(puVar2 + 2) = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0xa9;
  }
  else {
    *puVar2 = 1;
    lVar3 = FUN_144babca0();
    *(longlong *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0xae;
    }
    else {
      lVar3 = FUN_144eaaef0();
      *(longlong *)(puVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0xb3;
      }
      else {
        iVar1 = FUN_144ea5c20(4,puVar2,puVar2 + 0x20);
        if (iVar1 == 0) {
          uVar4 = 0xb7;
        }
        else {
          lVar3 = FUN_144e985a0();
          *(longlong *)(puVar2 + 0x24) = lVar3;
          if (lVar3 != 0) {
            puVar2[0x22] = 1;
            return puVar2;
          }
          uVar4 = 0xbd;
        }
      }
    }
  }
  FUN_144ba24f0(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",uVar4,uVar5);
  FUN_144eaaf50(*(undefined8 *)(puVar2 + 6));
  FUN_144babdb0(*(undefined8 *)(puVar2 + 2));
  FUN_144babdb0(*(undefined8 *)(puVar2 + 4));
  FUN_144ea6530(puVar2,"crypto\\x509\\x509_lu.c",200);
  return (undefined4 *)0x0;
}



// FUNCTION 144bb4110 FUN_144bb4110 body=281 status=ok
// SIG undefined FUN_144bb4110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb4110(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x88);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 2) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      iVar6 = 0;
      iVar4 = FUN_144babbf0(uVar2);
      if (0 < iVar4) {
        do {
          lVar5 = FUN_144babc00(uVar2,iVar6);
          if ((*(longlong *)(lVar5 + 8) != 0) &&
             (pcVar3 = *(code **)(*(longlong *)(lVar5 + 8) + 0x20), pcVar3 != (code *)0x0)) {
            (*pcVar3)(lVar5);
          }
          if ((*(longlong *)(lVar5 + 8) != 0) &&
             (pcVar3 = *(code **)(*(longlong *)(lVar5 + 8) + 0x10), pcVar3 != (code *)0x0)) {
            (*pcVar3)(lVar5);
          }
          FUN_144ea6530(lVar5,"crypto\\x509\\x509_lu.c",0x29);
          iVar6 = iVar6 + 1;
          iVar4 = FUN_144babbf0(uVar2);
        } while (iVar6 < iVar4);
      }
      FUN_144babdb0(uVar2);
      FUN_144babe00(*(undefined8 *)(param_1 + 8),FUN_144bb3f60);
      FUN_144ea6040(4,param_1,param_1 + 0x80);
      FUN_144eaaf50(*(undefined8 *)(param_1 + 0x18));
      FUN_144e98660(*(undefined8 *)(param_1 + 0x90));
      FUN_144ea6530(param_1,"crypto\\x509\\x509_lu.c",0xe6);
    }
  }
  return;
}



// FUNCTION 144bb4230 FUN_144bb4230 body=29 status=ok
// SIG undefined FUN_144bb4230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb4230(longlong param_1)

{
  FUN_144e98620(*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 144bb4250 FUN_144bb4250 body=29 status=ok
// SIG undefined FUN_144bb4250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb4250(longlong param_1)

{
  FUN_144e98640(*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 144bb4270 FUN_144bb4270 body=24 status=ok
// SIG undefined FUN_144bb4270(void)

bool FUN_144bb4270(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x88);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144bb4290 FUN_144bb4290 body=385 status=ok
// SIG undefined FUN_144bb4290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4290(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144e98620(*(undefined8 *)(lVar1 + 0x90));
  iVar3 = FUN_144bb4df0(*(undefined8 *)(lVar1 + 8),1,param_2,local_res8);
  if (iVar3 < 0) {
    lVar5 = FUN_144bb3f00();
    FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
    if (lVar5 != 0) {
      iVar3 = FUN_144bb4a00(param_1,1,param_2,lVar5);
      if (iVar3 == 0) {
        FUN_144bb3f60(lVar5);
        return 0;
      }
      FUN_144bb3f60(lVar5);
      FUN_144e98620(*(undefined8 *)(lVar1 + 0x90));
      iVar3 = FUN_144bb4df0(*(undefined8 *)(lVar1 + 8),1,param_2,local_res8);
      if (-1 < iVar3) goto LAB_144bb4369;
      FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
    }
    uVar6 = 0;
  }
  else {
LAB_144bb4369:
    uVar6 = FUN_144babca0();
    iVar7 = 0;
    if (0 < local_res8[0]) {
      do {
        lVar5 = FUN_144babc00(*(undefined8 *)(lVar1 + 8),iVar3);
        uVar2 = *(undefined8 *)(lVar5 + 8);
        iVar4 = FUN_144bb6050(uVar2);
        if (iVar4 == 0) {
          FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
LAB_144bb43fe:
          FUN_144babe00(uVar6,FUN_144b47250);
          return 0;
        }
        iVar4 = FUN_144bac1c0(uVar6,uVar2);
        if (iVar4 == 0) {
          FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
          FUN_144b47250(uVar2);
          goto LAB_144bb43fe;
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar7 < local_res8[0]);
    }
    FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
  }
  return uVar6;
}



// FUNCTION 144bb4420 FUN_144bb4420 body=486 status=ok
// SIG undefined FUN_144bb4420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb4420(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  undefined8 uVar8;
  
  uVar8 = 0x144bb443e;
  lVar4 = FUN_144babca0();
  piVar5 = (int *)FUN_144ea6670(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (piVar5 == (int *)0x0) {
    FUN_144ba24f0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar8);
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
  }
  iVar7 = 0;
  lVar1 = *param_1;
  if (lVar4 == 0) {
LAB_144bb45a9:
    if (piVar5 != (int *)0x0) {
      if (*piVar5 == 1) {
        FUN_144b47250(*(undefined8 *)(piVar5 + 2));
      }
      else if (*piVar5 == 2) {
        FUN_144ee8210(*(undefined8 *)(piVar5 + 2));
      }
    }
  }
  else if (piVar5 != (int *)0x0) {
    if ((lVar1 != 0) && (iVar2 = FUN_144bb4a00(param_1,2,param_2,piVar5), iVar2 != 0)) {
      FUN_144bb3f60(piVar5);
      FUN_144e98620(*(undefined8 *)(lVar1 + 0x90));
      iVar2 = FUN_144bb4df0(*(undefined8 *)(lVar1 + 8),2,param_2,local_res8);
      if (-1 < iVar2) {
        if (0 < local_res8[0]) {
          do {
            lVar6 = FUN_144babc00(*(undefined8 *)(lVar1 + 8),iVar2);
            uVar8 = *(undefined8 *)(lVar6 + 8);
            iVar3 = FUN_144ef3a90(uVar8);
            if (iVar3 == 0) {
              FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
              FUN_144babe00(lVar4,FUN_144ee8210);
              return 0;
            }
            iVar3 = FUN_144bac1c0(lVar4,uVar8);
            if (iVar3 == 0) {
              FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
              FUN_144ee8210(uVar8);
              FUN_144babe00(lVar4,FUN_144ee8210);
              return 0;
            }
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar7 < local_res8[0]);
        }
        FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
        return lVar4;
      }
      FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
      goto LAB_144bb45e3;
    }
    goto LAB_144bb45a9;
  }
  FUN_144ea6530(piVar5,"crypto\\x509\\x509_lu.c",0x1d7);
LAB_144bb45e3:
  FUN_144babdb0(lVar4);
  return 0;
}



// FUNCTION 144bb4610 FUN_144bb4610 body=26 status=ok
// SIG undefined FUN_144bb4610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb4610(longlong param_1)

{
  FUN_144eab230(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144bb4630 FUN_144bb4630 body=542 status=ok
// SIG undefined FUN_144bb4630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144bb4630(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144bb4647;
  puVar6 = (undefined4 *)FUN_144ea6670(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (puVar6 == (undefined4 *)0x0) {
    FUN_144ba24f0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar10);
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
  }
  lVar1 = *param_2;
  if (puVar6 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *param_1 = 0;
  uVar10 = FUN_144bb4f40(param_3);
  iVar4 = FUN_144bb4a00(param_2,1,uVar10,puVar6);
  if (iVar4 == 1) {
    iVar4 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(puVar6 + 2));
    if ((iVar4 != 0) &&
       (iVar4 = FUN_144bb0280(param_2,*(undefined8 *)(puVar6 + 2),0xffffffff), iVar4 != 0)) {
      *param_1 = *(longlong *)(puVar6 + 2);
      iVar4 = FUN_144bb6050();
      uVar9 = 1;
      if (iVar4 == 0) {
        *param_1 = 0;
        uVar9 = 0xffffffff;
      }
      FUN_144bb3f60(puVar6);
      return uVar9;
    }
    FUN_144bb3f60(puVar6);
    if (lVar1 != 0) {
      FUN_144e98620(*(undefined8 *)(lVar1 + 0x90));
      iVar4 = FUN_144bb4df0(*(undefined8 *)(lVar1 + 8),1,uVar10);
      uVar9 = 0;
      if ((iVar4 != -1) &&
         (iVar5 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8)), uVar9 = 0, uVar3 = 0, iVar4 < iVar5)) {
        do {
          uVar9 = uVar3;
          piVar7 = (int *)FUN_144babc00(*(undefined8 *)(lVar1 + 8),iVar4);
          if (*piVar7 != 1) break;
          uVar8 = FUN_144bb4f50(*(undefined8 *)(piVar7 + 2));
          iVar5 = FUN_144bb54b0(uVar10,uVar8);
          if (iVar5 != 0) break;
          iVar5 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar7 + 2));
          if (iVar5 != 0) {
            lVar2 = *(longlong *)(piVar7 + 2);
            *param_1 = lVar2;
            uVar9 = 1;
            iVar5 = FUN_144bb0280(param_2,lVar2,0xffffffff);
            if (iVar5 != 0) break;
          }
          iVar4 = iVar4 + 1;
          iVar5 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8));
          uVar3 = uVar9;
        } while (iVar4 < iVar5);
      }
      if ((*param_1 != 0) && (iVar4 = FUN_144bb6050(), iVar4 == 0)) {
        *param_1 = 0;
        uVar9 = 0xffffffff;
      }
      FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
      return uVar9;
    }
  }
  else {
    FUN_144bb3f60(puVar6);
  }
  return 0;
}



// FUNCTION 144bb4850 FUN_144bb4850 body=263 status=ok
// SIG undefined FUN_144bb4850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb4850(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144bb486a;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar5 = 0;
  iVar3 = FUN_144babbf0(uVar1);
  if (0 < iVar3) {
    do {
      lVar4 = FUN_144babc00(uVar1,iVar5);
      if (param_2 == *(longlong *)(lVar4 + 8)) {
        return lVar4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = FUN_144babbf0(uVar1);
    } while (iVar5 < iVar3);
  }
  lVar4 = FUN_144bb4ba0(param_2);
  if (lVar4 == 0) {
    FUN_144ba24f0(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x105,uVar6);
  }
  else {
    *(longlong *)(lVar4 + 0x18) = param_1;
    iVar3 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x10),lVar4);
    if (iVar3 != 0) {
      return lVar4;
    }
    FUN_144ba24f0(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x10d,uVar6);
    if ((*(longlong *)(lVar4 + 8) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x10), pcVar2 != (code *)0x0)) {
      (*pcVar2)(lVar4);
    }
    FUN_144ea6530(lVar4,"crypto\\x509\\x509_lu.c",0x29);
  }
  return 0;
}



// FUNCTION 144bb4960 FUN_144bb4960 body=72 status=ok
// SIG undefined FUN_144bb4960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144bb4cb0(param_1,param_2,0);
  if (iVar1 == 0) {
    FUN_144ba24f0(0xb,0x7c,0x41,"crypto\\x509\\x509_lu.c",0x173);
    return 0;
  }
  return 1;
}



// FUNCTION 144bb49b0 FUN_144bb49b0 body=73 status=ok
// SIG undefined FUN_144bb49b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb49b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144bb4cb0(param_1,param_2,1);
  if (iVar1 == 0) {
    FUN_144ba24f0(0xb,0x7d,0x41,"crypto\\x509\\x509_lu.c",0x17c);
    return 0;
  }
  return 1;
}



// FUNCTION 144bb4a00 FUN_144bb4a00 body=341 status=ok
// SIG undefined FUN_144bb4a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4a00(longlong *param_1,int param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  int local_28 [2];
  undefined8 local_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  piVar8 = (int *)0x0;
  local_28[0] = 0;
  local_20 = 0;
  FUN_144e98620(*(undefined8 *)(lVar1 + 0x90));
  uVar6 = *(undefined8 *)(lVar1 + 8);
  iVar3 = FUN_144bb4df0(uVar6,param_2,param_3,0);
  piVar4 = piVar8;
  if (iVar3 != -1) {
    piVar4 = (int *)FUN_144babc00(uVar6,iVar3);
  }
  FUN_144e98640(*(undefined8 *)(lVar1 + 0x90));
  if ((piVar4 == (int *)0x0) || (param_2 == 2)) {
    iVar3 = FUN_144babbf0(*(undefined8 *)(lVar1 + 0x10));
    if (0 < iVar3) {
      do {
        lVar5 = FUN_144babc00(*(undefined8 *)(lVar1 + 0x10),piVar8);
        if ((((*(longlong *)(lVar5 + 8) != 0) &&
             (pcVar2 = *(code **)(*(longlong *)(lVar5 + 8) + 0x30), pcVar2 != (code *)0x0)) &&
            (*(int *)(lVar5 + 4) == 0)) &&
           (iVar3 = (*pcVar2)(lVar5,param_2,param_3,local_28), iVar3 != 0)) {
          piVar4 = local_28;
          goto LAB_144bb4afb;
        }
        uVar7 = (int)piVar8 + 1;
        piVar8 = (int *)(ulonglong)uVar7;
        iVar3 = FUN_144babbf0(*(undefined8 *)(lVar1 + 0x10));
      } while ((int)uVar7 < iVar3);
    }
    if (piVar4 != (int *)0x0) goto LAB_144bb4afb;
LAB_144bb4b26:
    uVar6 = 0;
  }
  else {
LAB_144bb4afb:
    if (*piVar4 == 1) {
      iVar3 = FUN_144bb6050(*(undefined8 *)(piVar4 + 2));
LAB_144bb4b22:
      if (iVar3 == 0) goto LAB_144bb4b26;
    }
    else if (*piVar4 == 2) {
      iVar3 = FUN_144ef3a90(*(undefined8 *)(piVar4 + 2));
      goto LAB_144bb4b22;
    }
    *param_4 = *piVar4;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar4 + 2);
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 144bb4b60 FUN_144bb4b60 body=56 status=ok
// SIG undefined FUN_144bb4b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4b60(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bb4b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}



// FUNCTION 144bb4ba0 FUN_144bb4ba0 body=162 status=ok
// SIG undefined FUN_144bb4ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb4ba0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144bb4bb0;
  lVar2 = FUN_144ea6670(0x20,"crypto\\x509\\x509_lu.c",0x14);
  if (lVar2 == 0) {
    FUN_144ba24f0(0xb,0x9b,0x41,"crypto\\x509\\x509_lu.c",0x17,uVar3);
    return 0;
  }
  *(longlong *)(lVar2 + 8) = param_1;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 8))(lVar2);
    if (iVar1 == 0) {
      FUN_144ea6530(lVar2,"crypto\\x509\\x509_lu.c",0x1d);
      return 0;
    }
  }
  return lVar2;
}



// FUNCTION 144bb4c50 FUN_144bb4c50 body=92 status=ok
// SIG undefined FUN_144bb4c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bb4c50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  
  piVar2 = (int *)*param_2;
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  uVar5 = iVar1 - *piVar2;
  if (uVar5 == 0) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      uVar5 = FUN_144bb53c0(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2),piVar3,piVar2,
                            0x144bb4c5a);
    }
    else if (iVar1 == 2) {
      uVar4 = FUN_144bb55e0(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2));
      return uVar4;
    }
  }
  return (ulonglong)uVar5;
}



// FUNCTION 144bb4cb0 FUN_144bb4cb0 body=315 status=ok
// SIG undefined FUN_144bb4cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144bb4cb0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144bb4cc4;
  iVar2 = 0;
  if (param_2 == 0) {
    return false;
  }
  piVar3 = (int *)FUN_144ea6670(0x10,"crypto\\x509\\x509_lu.c",0x1a4);
  if (piVar3 == (int *)0x0) {
    FUN_144ba24f0(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a7,uVar6);
    return false;
  }
  bVar5 = true;
  *piVar3 = 0;
  if (param_3 == 0) {
    *piVar3 = 1;
  }
  else {
    *piVar3 = 2;
  }
  *(longlong *)(piVar3 + 2) = param_2;
  if (*piVar3 == 1) {
    iVar1 = FUN_144bb6050(param_2);
  }
  else {
    if (*piVar3 != 2) goto LAB_144bb4d83;
    iVar1 = FUN_144ef3a90(param_2);
  }
  if (iVar1 == 0) {
    *piVar3 = 0;
    FUN_144bb3f60(piVar3);
    return false;
  }
LAB_144bb4d83:
  FUN_144e98620(*(undefined8 *)(param_1 + 0x90));
  lVar4 = FUN_144bb3e10(*(undefined8 *)(param_1 + 8),piVar3);
  if (lVar4 == 0) {
    iVar2 = FUN_144bac1c0(*(undefined8 *)(param_1 + 8),piVar3);
    bVar5 = iVar2 != 0;
  }
  FUN_144e98640(*(undefined8 *)(param_1 + 0x90));
  if (iVar2 == 0) {
    FUN_144bb3f60(piVar3);
  }
  return bVar5;
}



// FUNCTION 144bb4df0 FUN_144bb4df0 body=281 status=ok
// SIG undefined FUN_144bb4df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb4df0(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_298 [32];
  int local_278 [2];
  undefined1 *local_270;
  undefined8 local_240;
  undefined8 local_130;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_278[0] = param_2;
  if (param_2 == 0) goto LAB_144bb4ef9;
  if (param_2 == 1) {
    local_270 = &stack0x00000110;
    local_130 = param_3;
LAB_144bb4e52:
    local_270 = local_270 + -0x288;
  }
  else if (param_2 == 2) {
    local_270 = &stack0x00000030;
    local_240 = param_3;
    goto LAB_144bb4e52;
  }
  iVar1 = FUN_144bac1a0(param_1,local_278);
  if ((-1 < iVar1) && (param_4 != (int *)0x0)) {
    iVar1 = iVar1 + 1;
    *param_4 = 1;
    iVar2 = FUN_144babbf0(param_1);
    if (iVar1 < iVar2) {
      do {
        piVar3 = (int *)FUN_144babc00(param_1,iVar1);
        iVar2 = *piVar3;
        if (iVar2 != local_278[0]) break;
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            iVar2 = FUN_144bb53c0(*(undefined8 *)(piVar3 + 2),local_270);
          }
          else {
            if (iVar2 != 2) goto LAB_144bb4ed2;
            iVar2 = FUN_144bb55e0(*(undefined8 *)(piVar3 + 2),local_270);
          }
          if (iVar2 != 0) break;
        }
LAB_144bb4ed2:
        *param_4 = *param_4 + 1;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_144babbf0(param_1);
      } while (iVar1 < iVar2);
    }
  }
LAB_144bb4ef9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_298);
}



// FUNCTION 144bb4f20 FUN_144bb4f20 body=5 status=ok
// SIG undefined FUN_144bb4f20(void)

longlong FUN_144bb4f20(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144bb4f30 FUN_144bb4f30 body=5 status=ok
// SIG undefined FUN_144bb4f30(void)

longlong FUN_144bb4f30(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144bb4f40 FUN_144bb4f40 body=5 status=ok
// SIG undefined FUN_144bb4f40(void)

undefined8 FUN_144bb4f40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 144bb4f50 FUN_144bb4f50 body=5 status=ok
// SIG undefined FUN_144bb4f50(void)

undefined8 FUN_144bb4f50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 144bb4f60 FUN_144bb4f60 body=38 status=ok
// SIG undefined FUN_144bb4f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4f60(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144bb65d0(*(undefined8 *)(param_1 + 0x50));
  return uVar1;
}



// FUNCTION 144bb4f90 FUN_144bb4f90 body=38 status=ok
// SIG undefined FUN_144bb4f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4f90(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144bb6650(*(undefined8 *)(param_1 + 0x50));
  return uVar1;
}



// FUNCTION 144bb4fc0 FUN_144bb4fc0 body=147 status=ok
// SIG undefined FUN_144bb4fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb4fc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144bb4fcc;
  if (((param_1 == 0) || (lVar2 = FUN_144bb65d0(*(undefined8 *)(param_1 + 0x50)), lVar2 == 0)) ||
     (iVar1 = FUN_144ba7080(lVar2,param_2), iVar1 == -2)) {
    uVar4 = 0x135;
    uVar3 = 0x75;
  }
  else if (iVar1 == -1) {
    uVar4 = 0x132;
    uVar3 = 0x73;
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x12f;
    uVar3 = 0x74;
  }
  FUN_144ba24f0(0xb,0x80,uVar3,"crypto\\x509\\x509_cmp.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 144bb5060 FUN_144bb5060 body=620 status=ok
// SIG undefined FUN_144bb5060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144bb5060(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint local_res20 [2];
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  bVar7 = param_2 == 0;
  local_res20[0] = param_4;
  if (bVar7) {
    param_2 = FUN_144babc00(param_3);
  }
  uVar6 = (uint)bVar7;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_144bb65d0(*(undefined8 *)(param_2 + 0x50));
  }
  if (param_3 == 0) {
    if ((lVar4 != 0) && (iVar1 = FUN_144ba6750(lVar4), iVar1 == 0x198)) {
      uVar3 = FUN_144ba6cd0(lVar4);
      lVar4 = FUN_144ed31a0(uVar3);
      if (lVar4 != 0) {
        iVar1 = FUN_144efc1f0(lVar4);
        if (iVar1 == 0x2cb) {
          if ((param_4 >> 0x11 & 1) == 0) {
            return 0x3c;
          }
        }
        else {
          if (iVar1 != 0x19f) {
            return 0x3a;
          }
          if ((param_4 >> 0x10 & 1) == 0) {
            return 0x3c;
          }
        }
        return 0;
      }
    }
    return 0x39;
  }
  iVar1 = FUN_144bb5fc0(param_2);
  if (iVar1 != 2) {
    iVar1 = 0x38;
    uVar6 = 0;
    goto LAB_144bb52a7;
  }
  if ((lVar4 == 0) || (iVar1 = FUN_144ba6750(lVar4), iVar1 != 0x198)) {
LAB_144bb527c:
    iVar1 = 0x39;
LAB_144bb5281:
    uVar6 = 0;
  }
  else {
    uVar3 = FUN_144ba6cd0(lVar4);
    lVar5 = FUN_144ed31a0(uVar3);
    if (lVar5 == 0) goto LAB_144bb527c;
    iVar1 = FUN_144efc1f0(lVar5);
    if (iVar1 != 0x2cb) {
      if (iVar1 == 0x19f) {
        if ((param_4 >> 0x10 & 1) != 0) goto LAB_144bb51d0;
        iVar1 = 0x3c;
      }
      else {
        iVar1 = 0x3a;
      }
      goto LAB_144bb5281;
    }
    if ((param_4 >> 0x11 & 1) == 0) {
      iVar1 = 0x3c;
      goto LAB_144bb5281;
    }
    local_res20[0] = param_4 & 0xfffeffff;
LAB_144bb51d0:
    iVar1 = FUN_144babbf0(param_3);
    if ((int)uVar6 < iVar1) {
      do {
        uVar2 = FUN_144bb5ef0(param_2);
        param_2 = FUN_144babc00(param_3,uVar6);
        iVar1 = FUN_144bb5fc0(param_2);
        if (iVar1 != 2) {
          iVar1 = 0x38;
          goto LAB_144bb52a7;
        }
        if (param_2 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_144bb65d0(*(undefined8 *)(param_2 + 0x50));
        }
        iVar1 = FUN_144bb5700(lVar4,uVar2,local_res20);
        if (iVar1 != 0) goto LAB_144bb5287;
        uVar6 = uVar6 + 1;
        iVar1 = FUN_144babbf0(param_3);
      } while ((int)uVar6 < iVar1);
    }
    uVar2 = FUN_144bb5ef0(param_2);
    iVar1 = FUN_144bb5700(lVar4,uVar2,local_res20);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_144bb5287:
  if (iVar1 - 0x3bU < 2) {
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
    }
    if ((iVar1 == 0x3c) && (param_4 != local_res20[0])) {
      iVar1 = 0x3d;
    }
  }
LAB_144bb52a7:
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar6;
  }
  return iVar1;
}



// FUNCTION 144bb52d0 FUN_144bb52d0 body=69 status=ok
// SIG undefined FUN_144bb52d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb52d0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_res18 [4];
  
  if ((param_3 & 0x30000) == 0) {
    return 0;
  }
  local_res18[0] = param_3;
  uVar1 = FUN_144ea8fa0(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_144bb5700(param_2,uVar1,local_res18);
  return uVar2;
}



// FUNCTION 144bb5320 FUN_144bb5320 body=157 status=ok
// SIG undefined FUN_144bb5320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb5320(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = FUN_144bac2a0();
  if (lVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(lVar2);
  if (0 < iVar1) {
    do {
      uVar3 = FUN_144babc00(lVar2,iVar4);
      iVar1 = FUN_144bb6050(uVar3);
      if (iVar1 == 0) {
        while (0 < iVar4) {
          iVar4 = iVar4 + -1;
          uVar3 = FUN_144babc00(lVar2,iVar4);
          FUN_144b47250(uVar3);
        }
        FUN_144babdb0(lVar2);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(lVar2);
    } while (iVar4 < iVar1);
  }
  return lVar2;
}



// FUNCTION 144bb53c0 FUN_144bb53c0 body=30 status=ok
// SIG undefined FUN_144bb53c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb53c0(longlong param_1,longlong param_2)

{
  FUN_144bb54b0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 144bb53e0 FUN_144bb53e0 body=206 status=ok
// SIG undefined FUN_144bb53e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144bb53e0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    FUN_144ec5450(param_1,0xffffffff,0);
    FUN_144ec5450(param_2,0xffffffff,0);
    if ((((*(uint *)(param_1 + 0xd0) & 0x100000) == 0) &&
        ((*(uint *)(param_2 + 0xd0) & 0x100000) == 0)) &&
       (iVar1 = memcmp((void *)(param_1 + 0x120),(void *)(param_2 + 0x120),0x14), iVar1 != 0)) {
      return iVar1;
    }
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 < *(int *)(param_2 + 0x78)) {
        return -1;
      }
      if (iVar1 <= *(int *)(param_2 + 0x78)) {
        iVar1 = memcmp(*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),(longlong)iVar1);
        return iVar1;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144bb54b0 FUN_144bb54b0 body=134 status=ok
// SIG undefined FUN_144bb54b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144bb54b0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = FUN_144eabc80(param_1,0), iVar1 < 0)) {
    return -2;
  }
  if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
     (iVar1 = FUN_144eabc80(param_2,0), iVar1 < 0)) {
    return -2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = iVar1 - *(int *)(param_2 + 0x20);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar1);
  }
  return iVar2;
}



// FUNCTION 144bb5540 FUN_144bb5540 body=145 status=ok
// SIG undefined FUN_144bb5540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5540(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144eabc80(param_1,0);
  local_38 = FUN_144bab020();
  local_30 = 0;
  iVar1 = FUN_144ba5d40(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_28,
                        0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 144bb55e0 FUN_144bb55e0 body=30 status=ok
// SIG undefined FUN_144bb55e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb55e0(longlong param_1,longlong param_2)

{
  FUN_144bb54b0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144bb5600 FUN_144bb5600 body=40 status=ok
// SIG undefined FUN_144bb5600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5600(longlong param_1,longlong param_2)

{
  memcmp((void *)(param_1 + 0xb0),(void *)(param_2 + 0xb0),0x14);
  return;
}



// FUNCTION 144bb5630 FUN_144bb5630 body=206 status=ok
// SIG undefined FUN_144bb5630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb5630(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = FUN_144babbf0();
  if (0 < iVar2) {
    do {
      lVar4 = FUN_144babc00(param_1,iVar5);
      lVar1 = *(longlong *)(lVar4 + 0x48);
      if ((((*(longlong *)(lVar1 + 0x18) != 0) && (*(int *)(lVar1 + 8) == 0)) ||
          (iVar2 = FUN_144eabc80(lVar1,0), -1 < iVar2)) &&
         (((*(longlong *)(param_2 + 0x18) != 0 && (*(int *)(param_2 + 8) == 0)) ||
          (iVar2 = FUN_144eabc80(param_2,0), -1 < iVar2)))) {
        iVar2 = *(int *)(lVar1 + 0x20);
        iVar3 = iVar2 - *(int *)(param_2 + 0x20);
        if ((iVar3 == 0) && (iVar2 != 0)) {
          iVar3 = memcmp(*(void **)(lVar1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar2);
        }
        if (iVar3 == 0) {
          return lVar4;
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_144babbf0(param_1);
    } while (iVar5 < iVar2);
  }
  return 0;
}



// FUNCTION 144bb5700 FUN_144bb5700 body=272 status=ok
// SIG undefined FUN_144bb5700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb5700(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (iVar1 = FUN_144ba6750(), iVar1 == 0x198)) {
    uVar2 = FUN_144ba6cd0(param_1);
    lVar3 = FUN_144ed31a0(uVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_144efc1f0(lVar3);
      if (iVar1 == 0x2cb) {
        if ((param_2 == -1) || (param_2 == 0x31b)) {
          if ((*param_3 >> 0x11 & 1) == 0) {
            return 0x3c;
          }
          *param_3 = *param_3 & 0xfffeffff;
          return 0;
        }
      }
      else {
        if (iVar1 != 0x19f) {
          return 0x3a;
        }
        if ((param_2 == -1) || (param_2 == 0x31a)) {
          if ((*param_3 & 0x10000) == 0) {
            return 0x3c;
          }
          return 0;
        }
      }
      return 0x3b;
    }
  }
  return 0x39;
}



// FUNCTION 144bb5810 FUN_144bb5810 body=126 status=ok
// SIG undefined FUN_144bb5810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb5810(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144bb5825;
  iVar1 = FUN_144efdf70(param_1 + 0x80,param_1 + 0x20);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_144bb5b50();
  uVar3 = FUN_144efe100(uVar2,param_1 + 0x80,param_1 + 0x90,param_1,param_2,uVar3);
  return uVar3;
}



// FUNCTION 144bb5890 FUN_144bb5890 body=107 status=ok
// SIG undefined FUN_144bb5890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_144bb6790();
  if (piVar1 == (int *)0x0) {
    return;
  }
  FUN_144ba5d40(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,param_3,param_4,param_2,0);
  return;
}



// FUNCTION 144bb5900 FUN_144bb5900 body=154 status=ok
// SIG undefined FUN_144bb5900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb5900(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144bb591a;
  lVar1 = FUN_144bab020();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0xd0) & 0x100100) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *param_3 = *(undefined8 *)(param_1 + 0x120);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x130);
    uVar3 = 1;
  }
  else {
    uVar2 = FUN_144bb5d90();
    uVar3 = FUN_144efe060(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}



// FUNCTION 144bb59a0 FUN_144bb59a0 body=151 status=ok
// SIG undefined FUN_144bb59a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb59a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144bb59ba;
  lVar1 = FUN_144bab020();
  if ((param_2 == lVar1) && ((*(uint *)(param_1 + 0x7c) & 0x180) == 0x100)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x14;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    *param_3 = *(undefined8 *)(param_1 + 0xb0);
    param_3[1] = uVar3;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = 1;
  }
  else {
    uVar2 = FUN_144ee8250();
    uVar3 = FUN_144efe060(uVar2,param_2,param_1,param_3,param_4,uVar3);
  }
  return uVar3;
}



// FUNCTION 144bb5a40 FUN_144bb5a40 body=89 status=ok
// SIG undefined FUN_144bb5a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144bb5a5a;
  uVar1 = FUN_144eabca0();
  FUN_144efe060(uVar1,param_2,param_1,param_3,param_4,uVar2);
  return;
}



// FUNCTION 144bb5aa0 FUN_144bb5aa0 body=54 status=ok
// SIG undefined FUN_144bb5aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5aa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144bb5d90();
  FUN_144efd780(uVar1,param_1,param_2);
  return;
}



// FUNCTION 144bb5ae0 FUN_144bb5ae0 body=54 status=ok
// SIG undefined FUN_144bb5ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5ae0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ee8250();
  FUN_144efd780(uVar1,param_1,param_2);
  return;
}



// FUNCTION 144bb5b20 FUN_144bb5b20 body=42 status=ok
// SIG undefined FUN_144bb5b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5b20(undefined8 param_1,undefined8 param_2)

{
  FUN_144efd700(FUN_144ba6d80,FUN_144efdcc0,param_1,param_2);
  return;
}



// FUNCTION 144bb5b50 FUN_144bb5b50 body=8 status=ok
// SIG undefined FUN_144bb5b50(void)

undefined * FUN_144bb5b50(void)

{
  return &DAT_14997b9b0;
}



// FUNCTION 144bb5b60 FUN_144bb5b60 body=457 status=ok
// SIG undefined FUN_144bb5b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb5b60(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (param_1 != 1) {
    if (param_1 == 3) {
      FUN_144ea6040(3,lVar1,lVar1 + 0xc0);
      FUN_144f022e0(*(undefined8 *)(lVar1 + 0x138));
      FUN_144efe950(*(undefined8 *)(lVar1 + 0xe0));
      FUN_144f025d0(*(undefined8 *)(lVar1 + 0xe8));
      FUN_144f02c60(*(undefined8 *)(lVar1 + 0xf8));
      FUN_144f03540(*(undefined8 *)(lVar1 + 0xf0));
      FUN_144ef4900(*(undefined8 *)(lVar1 + 0x100));
      FUN_144ef4f80(*(undefined8 *)(lVar1 + 0x108));
      FUN_144babe00(*(undefined8 *)(lVar1 + 0x110),FUN_144ef9a30);
      FUN_144ef7e80(*(undefined8 *)(lVar1 + 0x118));
      return 1;
    }
    if (param_1 != 4) {
      return 1;
    }
    FUN_144ea6040(3,lVar1,lVar1 + 0xc0);
    FUN_144f022e0(*(undefined8 *)(lVar1 + 0x138));
    FUN_144efe950(*(undefined8 *)(lVar1 + 0xe0));
    FUN_144f025d0(*(undefined8 *)(lVar1 + 0xe8));
    FUN_144f02c60(*(undefined8 *)(lVar1 + 0xf8));
    FUN_144f03540(*(undefined8 *)(lVar1 + 0xf0));
    FUN_144ef4900(*(undefined8 *)(lVar1 + 0x100));
    FUN_144ef4f80(*(undefined8 *)(lVar1 + 0x108));
    FUN_144babe00(*(undefined8 *)(lVar1 + 0x110),FUN_144ef9a30);
    FUN_144ef7e80(*(undefined8 *)(lVar1 + 0x118));
  }
  *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0xd4) = 0;
  *(undefined4 *)(lVar1 + 0xdc) = 0;
  *(undefined4 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  uVar2 = FUN_144ea5c20(3,lVar1,lVar1 + 0xc0);
  if ((int)uVar2 != 0) {
    return 1;
  }
  return uVar2;
}



// FUNCTION 144bb5d30 FUN_144bb5d30 body=32 status=ok
// SIG undefined FUN_144bb5d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5d30(undefined8 param_1)

{
  FUN_144efeb70(&DAT_14997ba40,param_1);
  return;
}



// FUNCTION 144bb5d50 FUN_144bb5d50 body=29 status=ok
// SIG undefined FUN_144bb5d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5d50(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144bb5d70 FUN_144bb5d70 body=29 status=ok
// SIG undefined FUN_144bb5d70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5d70(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_14997ba40);
  return;
}



// FUNCTION 144bb5d90 FUN_144bb5d90 body=8 status=ok
// SIG undefined FUN_144bb5d90(void)

undefined * FUN_144bb5d90(void)

{
  return &DAT_14997ba40;
}



// FUNCTION 144bb5da0 FUN_144bb5da0 body=29 status=ok
// SIG undefined FUN_144bb5da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5da0(longlong param_1)

{
  FUN_144ea6220(param_1 + 0xc0);
  return;
}



// FUNCTION 144bb5dc0 FUN_144bb5dc0 body=29 status=ok
// SIG undefined FUN_144bb5dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5dc0(longlong param_1)

{
  FUN_144ea6300(param_1 + 0xc0);
  return;
}



// FUNCTION 144bb5de0 FUN_144bb5de0 body=192 status=ok
// SIG undefined FUN_144bb5de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb5de0(longlong *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2;
  bVar1 = false;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  lVar2 = FUN_144eff7f0(param_1,&local_res8,param_3,&DAT_14997ba40);
  if (lVar2 != 0) {
    iVar4 = (int)param_3 + (*param_2 - (int)local_res8);
    if ((iVar4 < 1) || (lVar3 = FUN_144f02300(lVar2 + 0x138,&local_res8,iVar4), lVar3 != 0)) {
      *(undefined8 *)param_2 = local_res8;
      return lVar2;
    }
    if ((bVar1) && (FUN_144eff330(lVar2,&DAT_14997ba40), param_1 != (longlong *)0x0)) {
      *param_1 = 0;
    }
  }
  return 0;
}



// FUNCTION 144bb5ea0 FUN_144bb5ea0 body=36 status=ok
// SIG undefined FUN_144bb5ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5ea0(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = 1;
  FUN_144f01520(param_1,param_2,&DAT_14997b9b0);
  return;
}



// FUNCTION 144bb5ed0 FUN_144bb5ed0 body=31 status=ok
// SIG undefined FUN_144bb5ed0(void)

void FUN_144bb5ed0(longlong *param_1,longlong *param_2,longlong param_3)

{
  if (param_1 != (longlong *)0x0) {
    *param_1 = param_3 + 0x90;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_3 + 0x80;
  }
  return;
}



// FUNCTION 144bb5ef0 FUN_144bb5ef0 body=29 status=ok
// SIG undefined FUN_144bb5ef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5ef0(longlong param_1)

{
  FUN_144ea8fa0(*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 144bb5f10 FUN_144bb5f10 body=18 status=ok
// SIG undefined FUN_144bb5f10(void)

void FUN_144bb5f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



// FUNCTION 144bb5f30 FUN_144bb5f30 body=143 status=ok
// SIG undefined FUN_144bb5f30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_144bb5f30(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  FUN_144ec5450(param_1,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xac);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xb4);
  }
  return *(uint *)(param_1 + 0xb4) & 1;
}



// FUNCTION 144bb5fc0 FUN_144bb5fc0 body=25 status=ok
// SIG undefined FUN_144bb5fc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb5fc0(undefined8 *param_1)

{
  FUN_144ef1170(*param_1);
  return;
}



// FUNCTION 144bb5fe0 FUN_144bb5fe0 body=38 status=ok
// SIG undefined FUN_144bb5fe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb5fe0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144eabcb0(param_1 + 0x30);
  return uVar1;
}



// FUNCTION 144bb6010 FUN_144bb6010 body=5 status=ok
// SIG undefined FUN_144bb6010(void)

undefined8 FUN_144bb6010(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 144bb6020 FUN_144bb6020 body=5 status=ok
// SIG undefined FUN_144bb6020(void)

undefined8 FUN_144bb6020(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 144bb6030 FUN_144bb6030 body=5 status=ok
// SIG undefined FUN_144bb6030(void)

undefined8 FUN_144bb6030(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 144bb6040 FUN_144bb6040 body=5 status=ok
// SIG undefined FUN_144bb6040(void)

undefined8 FUN_144bb6040(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 144bb6050 FUN_144bb6050 body=24 status=ok
// SIG undefined FUN_144bb6050(void)

bool FUN_144bb6050(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xb8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144bb6070 FUN_144bb6070 body=5 status=ok
// SIG undefined FUN_144bb6070(void)

undefined8 FUN_144bb6070(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 144bb6080 FUN_144bb6080 body=5 status=ok
// SIG undefined FUN_144bb6080(void)

undefined8 FUN_144bb6080(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// FUNCTION 144bb6090 FUN_144bb6090 body=25 status=ok
// SIG undefined FUN_144bb6090(void)

void FUN_144bb6090(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x58);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x60);
  }
  return;
}



// FUNCTION 144bb60b0 FUN_144bb60b0 body=5 status=ok
// SIG undefined FUN_144bb60b0(void)

longlong FUN_144bb60b0(longlong param_1)

{
  return param_1 + 0x20;
}



// FUNCTION 144bb60c0 FUN_144bb60c0 body=43 status=ok
// SIG undefined FUN_144bb60c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb60c0(longlong param_1)

{
  FUN_144bb60f0(param_1 + 0xa8,param_1 + 0x80,param_1 + 0x90);
  return;
}



// FUNCTION 144bb60f0 FUN_144bb60f0 body=240 status=ok
// SIG undefined FUN_144bb60f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb60f0(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  param_1[2] = -1;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  uVar1 = FUN_144ea8fa0(*param_2);
  iVar2 = FUN_144edaca0(uVar1,local_res8,local_res10);
  if (iVar2 != 0) {
    if (local_res10[0] != 0) {
      param_1[1] = local_res10[0];
      if (local_res8[0] == 0) {
        lVar3 = FUN_144ed2a20(0);
        if ((lVar3 != 0) && (*(code **)(lVar3 + 0xd8) != (code *)0x0)) {
          iVar2 = (**(code **)(lVar3 + 0xd8))(param_1,param_2,param_3);
          if (iVar2 != 0) {
            param_1[3] = param_1[3] | 1;
            return;
          }
        }
      }
      else {
        param_1[3] = param_1[3] | 1;
        *param_1 = local_res8[0];
        uVar4 = FUN_144ea8ee0();
        lVar3 = FUN_144baab30(uVar4);
        if (lVar3 != 0) {
          iVar2 = FUN_144ba3cd0(lVar3);
          param_1[2] = iVar2 << 2;
          if ((local_res8[0] == 0x40) || (local_res8[0] - 0x2a0U < 3)) {
            param_1[3] = param_1[3] | 2;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144bb61f0 FUN_144bb61f0 body=122 status=ok
// SIG undefined FUN_144bb61f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_144bb61f0(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    lVar2 = FUN_144bad5b0();
    *param_2 = lVar2;
    return -(lVar2 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_144bad8c0();
    *param_2 = 0;
    return 2;
  }
  if ((param_1 == 5) && (*(int *)(*param_2 + 4) == 1)) {
    iVar1 = FUN_144eecf00();
    bVar3 = 0;
    if (iVar1 == 1) {
      bVar3 = 2;
    }
    return bVar3;
  }
  return 1;
}



// FUNCTION 144bb6270 FUN_144bb6270 body=40 status=ok
// SIG undefined FUN_144bb6270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb6270(int param_1,longlong *param_2)

{
  if (param_1 == 2) {
    FUN_144efdff0(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 144bb62a0 FUN_144bb62a0 body=40 status=ok
// SIG undefined FUN_144bb62a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb62a0(int param_1,longlong *param_2)

{
  if (param_1 == 2) {
    FUN_144efdff0(*(undefined8 *)(*param_2 + 0x18));
  }
  return 1;
}



// FUNCTION 144bb62d0 FUN_144bb62d0 body=29 status=ok
// SIG undefined FUN_144bb62d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb62d0(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144bb62f0 FUN_144bb62f0 body=29 status=ok
// SIG undefined FUN_144bb62f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb62f0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_14997bda0);
  return;
}



// FUNCTION 144bb6310 FUN_144bb6310 body=29 status=ok
// SIG undefined FUN_144bb6310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb6310(void)

{
  FUN_144eff7f0();
  return;
}



// FUNCTION 144bb6330 FUN_144bb6330 body=29 status=ok
// SIG undefined FUN_144bb6330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb6330(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_14997bd30);
  return;
}



// FUNCTION 144bb6350 FUN_144bb6350 body=29 status=ok
// SIG undefined FUN_144bb6350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb6350(void)

{
  FUN_144efec20(&DAT_14997bea0);
  return;
}



// FUNCTION 144bb6370 FUN_144bb6370 body=29 status=ok
// SIG undefined FUN_144bb6370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb6370(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_14997bea0);
  return;
}



// FUNCTION 144bb6390 FUN_144bb6390 body=8 status=ok
// SIG undefined FUN_144bb6390(void)

undefined * FUN_144bb6390(void)

{
  return &DAT_14997bea0;
}



// FUNCTION 144bb63a0 FUN_144bb63a0 body=29 status=ok
// SIG undefined FUN_144bb63a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb63a0(void)

{
  FUN_144efec20(&DAT_14997bf30);
  return;
}



// FUNCTION 144bb63c0 FUN_144bb63c0 body=29 status=ok
// SIG undefined FUN_144bb63c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb63c0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_14997bf30);
  return;
}



// FUNCTION 144bb63e0 FUN_144bb63e0 body=8 status=ok
// SIG undefined FUN_144bb63e0(void)

undefined * FUN_144bb63e0(void)

{
  return &DAT_14997bf30;
}



// FUNCTION 144bb63f0 FUN_144bb63f0 body=129 status=ok
// SIG undefined FUN_144bb63f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb63f0(int param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 3) {
    FUN_144ba6e60(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  if (param_1 == 5) {
    lVar1 = *param_2;
    FUN_144ba6e60(*(undefined8 *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_144ba3130();
    iVar2 = FUN_144bb6870(lVar1 + 0x10,lVar1);
    if (iVar2 == -1) {
      return 0;
    }
    FUN_144ba3170();
  }
  return 1;
}



// FUNCTION 144bb6480 FUN_144bb6480 body=29 status=ok
// SIG undefined FUN_144bb6480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb6480(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_14997c0d0);
  return;
}



// FUNCTION 144bb64a0 FUN_144bb64a0 body=29 status=ok
// SIG undefined FUN_144bb64a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bb64a0(undefined8 param_1,undefined8 param_2)

{
  FUN_144f01520(param_1,param_2,&DAT_14997c0d0);
  return;
}



// FUNCTION 144bb64d0 FUN_144bb64d0 body=251 status=ok
// SIG undefined FUN_144bb64d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb64d0(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144bb64e0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_144efec20(&DAT_14997c0d0);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      uVar5 = 0x52;
      uVar4 = 0x6f;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)(param_2 + 0x10) + 0x28);
      if (pcVar1 == (code *)0x0) {
        uVar5 = 0x4e;
        uVar4 = 0x7c;
      }
      else {
        iVar2 = (*pcVar1)(lVar3,param_2);
        if (iVar2 != 0) {
          FUN_144eff330(*param_1,&DAT_14997c0d0);
          *param_1 = lVar3;
          *(longlong *)(lVar3 + 0x10) = param_2;
          FUN_144ba6e40(param_2);
          return 1;
        }
        uVar5 = 0x4a;
        uVar4 = 0x7e;
      }
    }
    FUN_144ba24f0(0xb,0x78,uVar4,"crypto\\x509\\x_pubkey.c",uVar5,uVar6);
  }
  FUN_144eff330(lVar3,&DAT_14997c0d0);
  return 0;
}



// FUNCTION 144bb65d0 FUN_144bb65d0 body=113 status=ok
// SIG undefined FUN_144bb65d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb65d0(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      return *(longlong *)(param_1 + 0x10);
    }
    FUN_144bb6870(local_res8,param_1);
    if (local_res8[0] != 0) {
      FUN_144ba24f0(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa2);
      FUN_144ba6e60(local_res8[0]);
    }
  }
  return 0;
}



// FUNCTION 144bb6650 FUN_144bb6650 body=89 status=ok
// SIG undefined FUN_144bb6650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb6650(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144bb665c;
  lVar2 = FUN_144bb65d0();
  if ((lVar2 != 0) && (iVar1 = FUN_144ba6e40(lVar2), iVar1 == 0)) {
    FUN_144ba24f0(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar3);
    return 0;
  }
  return lVar2;
}



// FUNCTION 144bb66b0 FUN_144bb66b0 body=223 status=ok
// SIG undefined FUN_144bb66b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bb66b0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x144bb66c6;
  local_res10 = *param_2;
  lVar2 = FUN_144eff7f0(0,&local_res10,param_3,&DAT_14997c0d0);
  if (lVar2 != 0) {
    lVar3 = FUN_144bb65d0(lVar2);
    if ((lVar3 != 0) && (iVar1 = FUN_144ba6e40(lVar3), iVar1 == 0)) {
      FUN_144ba24f0(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar4);
      lVar3 = 0;
    }
    FUN_144eff330(lVar2,&DAT_14997c0d0);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      *param_2 = local_res10;
      if (param_1 != (longlong *)0x0) {
        FUN_144ba6e60(*param_1);
        *param_1 = lVar3;
      }
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 144bb6790 FUN_144bb6790 body=17 status=ok
// SIG undefined FUN_144bb6790(void)

undefined8 FUN_144bb6790(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
}



// FUNCTION 144bb67b0 FUN_144bb67b0 body=127 status=ok
// SIG undefined FUN_144bb67b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb67b0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong in_stack_00000028;
  undefined4 in_stack_00000030;
  
  uVar1 = FUN_144efde30(*param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (in_stack_00000028 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1[1] + 8),"crypto\\x509\\x_pubkey.c",0x15c);
    *(longlong *)(param_1[1] + 8) = in_stack_00000028;
    *(undefined4 *)param_1[1] = in_stack_00000030;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) & 0xfffffff0;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 8;
  }
  return 1;
}



// FUNCTION 144bb6830 FUN_144bb6830 body=61 status=ok
// SIG undefined FUN_144bb6830(void)

undefined8
FUN_144bb6830(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)*param_5;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_5[1] + 8);
    *param_3 = *(undefined4 *)param_5[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *param_5;
  }
  return 1;
}



// FUNCTION 144bb6870 FUN_144bb6870 body=259 status=ok
// SIG undefined FUN_144bb6870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bb6870(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144bb6885;
  lVar4 = FUN_144ba6d80();
  if (lVar4 == 0) {
    FUN_144ba24f0(0xb,0x94,0x41,"crypto\\x509\\x_pubkey.c",0x6d,uVar6);
    return 0xffffffff;
  }
  uVar2 = FUN_144ea8fa0(*(undefined8 *)*param_2);
  iVar3 = FUN_144ba6870(lVar4,uVar2);
  if (iVar3 == 0) {
    uVar5 = 0x72;
    uVar2 = 0x6f;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x20);
    if (pcVar1 == (code *)0x0) {
      uVar5 = 0x81;
      uVar2 = 0x7c;
    }
    else {
      iVar3 = (*pcVar1)(lVar4,param_2);
      if (iVar3 != 0) {
        *param_1 = lVar4;
        return 1;
      }
      uVar5 = 0x7d;
      uVar2 = 0x7d;
    }
  }
  FUN_144ba24f0(0xb,0x94,uVar2,"crypto\\x509\\x_pubkey.c",uVar5,uVar6);
  FUN_144ba6e60(lVar4);
  return 0;
}



// FUNCTION 144bb6980 FUN_144bb6980 body=225 status=ok
// SIG undefined FUN_144bb6980(void)

undefined4
FUN_144bb6980(undefined4 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  undefined4 uVar1;
  
  if ((((param_2 == (undefined *)0x0) || (param_3 == (undefined *)0x0)) ||
      (param_4 == (undefined *)0x0)) ||
     ((param_5 == (undefined *)0x0 || (param_6 == (undefined *)0x0)))) {
    uVar1 = 2;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
    if (DAT_14c781ab8 == 0) {
      PTR__strdup_14c6d9f38 = param_5;
      PTR_calloc_14c6d9f40 = param_6;
      PTR_malloc_14c6d9f20 = param_2;
      PTR_free_14c6d9f28 = param_3;
      PTR_realloc_14c6d9f30 = param_4;
      uVar1 = FUN_144bb6eb0(param_1,0);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
    }
    else {
      DAT_14c781ab8 = DAT_14c781ab8 + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 144bb6a70 FUN_144bb6a70 body=87 status=ok
// SIG undefined FUN_144bb6a70(void)

void FUN_144bb6a70(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
  if ((DAT_14c781ab8 != 0) && (DAT_14c781ab8 = DAT_14c781ab8 + -1, DAT_14c781ab8 == 0)) {
    FUN_144f0cac0();
    FUN_144f07310();
    FUN_144f17580(DAT_14c781abc);
    DAT_14c781abc = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bb6ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
  return;
}



// FUNCTION 144bb6ad0 FUN_144bb6ad0 body=990 status=ok
// SIG undefined FUN_144bb6ad0(void)

undefined4 * FUN_144bb6ad0(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x14e0);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[0x1b3] = *(undefined4 *)(param_1 + 0x6cc);
  memcpy(puVar2 + 0x76,(void *)(param_1 + 0x1d8),0x918);
  FUN_144f08cb0(puVar2 + 0xd6);
  memset(puVar2 + 0x1c8,0,0x280);
  iVar6 = 0;
  puVar7 = (undefined8 *)(param_1 + 0x720);
  iVar5 = iVar6;
  do {
    iVar1 = FUN_144bb6f60(puVar2 + ((longlong)iVar5 + 0xe4) * 2,*puVar7);
    if (iVar1 != 0) goto LAB_144bb6e0f;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 0x4e);
  puVar7 = (undefined8 *)(param_1 + 0x9a0);
  *(undefined8 *)(puVar2 + 0x268) = 0;
  *(undefined8 *)(puVar2 + 0x26a) = 0;
  *(undefined8 *)(puVar2 + 0x26c) = 0;
  *(undefined8 *)(puVar2 + 0x26e) = 0;
  *(undefined8 *)(puVar2 + 0x270) = 0;
  *(undefined8 *)(puVar2 + 0x272) = 0;
  *(undefined8 *)(puVar2 + 0x274) = 0;
  *(undefined8 *)(puVar2 + 0x276) = 0;
  do {
    iVar5 = FUN_144bb7000(puVar2 + ((longlong)iVar6 + 0x134) * 2,*puVar7);
    if (iVar5 != 0) goto LAB_144bb6e0f;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 < 8);
  if ((*(longlong *)(param_1 + 0x228) != 0) && (*(longlong *)(param_1 + 0x998) != 0)) {
    uVar3 = FUN_144f17010();
    lVar4 = FUN_144f13940(*(undefined8 *)(param_1 + 0x998),uVar3);
    *(longlong *)(puVar2 + 0x266) = lVar4;
    if (lVar4 == 0) goto LAB_144bb6e0f;
    *(longlong *)(puVar2 + 0x86) = lVar4;
  }
  iVar5 = FUN_144f08de0(puVar2,puVar2 + 0xd6,param_1 + 0x358);
  if (*(longlong *)(param_1 + 0x518) != 0) {
    *(undefined8 *)(puVar2 + 0x4a0) = *(undefined8 *)(puVar2 + 0x146);
  }
  if (iVar5 == 0) {
    FUN_144f07cf0(puVar2 + 0x32e,0x19000);
    *(undefined8 *)(puVar2 + 0x324) = 0;
    *(undefined8 *)(puVar2 + 0x32a) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x32c) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 2) = 0xffffffffffffffff;
    puVar2[0x2cf] = *(undefined4 *)(param_1 + 0xb3c);
    *(undefined1 *)(puVar2 + 0x323) = *(undefined1 *)(param_1 + 0xc8c);
    if (*(longlong *)(param_1 + 0xaf0) != 0) {
      lVar4 = FUN_144f061a0(param_1,0,*(undefined8 *)(puVar2 + 700),*(undefined1 *)(param_1 + 0xab6)
                           );
      *(longlong *)(puVar2 + 700) = lVar4;
      if (lVar4 == 0) goto LAB_144bb6e0f;
    }
    if (*(longlong *)(param_1 + 0x2c0) != 0) {
      lVar4 = FUN_144bbedc0();
      *(longlong *)(puVar2 + 0xb0) = lVar4;
      if (lVar4 == 0) goto LAB_144bb6e0f;
    }
    if (*(longlong *)(param_1 + 0x1270) != 0) {
      lVar4 = (*(code *)PTR__strdup_14c6d9f38)();
      *(longlong *)(puVar2 + 0x49c) = lVar4;
      if (lVar4 == 0) goto LAB_144bb6e0f;
      *(undefined1 *)(puVar2 + 0x4f5) = 1;
    }
    if (*(longlong *)(param_1 + 0x1278) != 0) {
      lVar4 = (*(code *)PTR__strdup_14c6d9f38)();
      *(longlong *)(puVar2 + 0x49e) = lVar4;
      if (lVar4 == 0) goto LAB_144bb6e0f;
      *(undefined1 *)((longlong)puVar2 + 0x13d5) = 1;
    }
    if ((*(longlong *)(puVar2 + 0x21a) == 0) || (iVar5 = thunk_FUN_1452b39f0(puVar2), iVar5 == 0)) {
      if (*(longlong *)(param_1 + 0xb00) != 0) {
        lVar4 = FUN_144f17600();
        *(longlong *)(puVar2 + 0x2c0) = lVar4;
        if (lVar4 == 0) goto LAB_144bb6e0f;
        if (*(longlong *)(puVar2 + 0x250) != 0) {
          FUN_144f17640(lVar4);
        }
      }
      if (*(longlong *)(param_1 + 0xaf8) != 0) {
        lVar4 = FUN_144f188d0();
        *(longlong *)(puVar2 + 0x2be) = lVar4;
        if (lVar4 == 0) goto LAB_144bb6e0f;
        if (*(longlong *)(puVar2 + 0x252) != 0) {
          FUN_144f190c0(puVar2,lVar4);
        }
        FUN_144f190d0(puVar2,*(undefined8 *)(puVar2 + 0x2be));
      }
      iVar5 = FUN_144f07360(puVar2,puVar2 + 0x396,*(undefined8 *)(param_1 + 0xe58));
      if (iVar5 == 0) {
        FUN_144f13850(puVar2);
        *puVar2 = 0xc0dedbad;
        return puVar2;
      }
    }
  }
LAB_144bb6e0f:
  FUN_144b472a0(*(undefined8 *)(puVar2 + 0xb0));
  *(undefined8 *)(puVar2 + 0xb0) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar2 + 0x336));
  *(undefined8 *)(puVar2 + 0x336) = 0;
  FUN_144f07d10(puVar2 + 0x32e);
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar2 + 0x49c));
  *(undefined8 *)(puVar2 + 0x49c) = 0;
  (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(puVar2 + 0x49e));
  *(undefined8 *)(puVar2 + 0x49e) = 0;
  FUN_144f17ac0(puVar2 + 0x2c0);
  FUN_144f18900(puVar2 + 0x2be);
  FUN_144f0e5b0(puVar2);
  (*(code *)PTR_free_14c6d9f28)(puVar2);
  return (undefined4 *)0x0;
}



// FUNCTION 144bb6eb0 FUN_144bb6eb0 body=173 status=ok
// SIG undefined FUN_144bb6eb0(void)

undefined8 FUN_144bb6eb0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_14c781ab8 + 1;
  bVar3 = DAT_14c781ab8 == 0;
  DAT_14c781ab8 = iVar2;
  uVar1 = DAT_14c781abc;
  if (bVar3) {
    if (param_2 != '\0') {
      PTR_malloc_14c6d9f20 = malloc_exref;
      PTR_free_14c6d9f28 = free_exref;
      PTR_realloc_14c6d9f30 = realloc_exref;
      PTR__strdup_14c6d9f38 = _strdup_exref;
      PTR_calloc_14c6d9f40 = calloc_exref;
    }
    iVar2 = FUN_144f149d0();
    if ((((iVar2 != 0) || (iVar2 = FUN_144f0ca90(), iVar2 == 0)) ||
        (iVar2 = FUN_144f172f0(param_1), iVar2 != 0)) ||
       (iVar2 = FUN_144f07300(), uVar1 = param_1, iVar2 != 0)) {
      DAT_14c781ab8 = DAT_14c781ab8 + -1;
      return 2;
    }
  }
  DAT_14c781abc = uVar1;
  return 0;
}



// FUNCTION 144bb6f60 FUN_144bb6f60 body=145 status=ok
// SIG undefined FUN_144bb6f60(void)

undefined8 FUN_144bb6f60(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  uVar3 = 0;
  *param_1 = 0;
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)(param_2 + uVar1) != '\0');
  if (8000000 < uVar1) {
    return 0x2b;
  }
  lVar2 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  return uVar3;
}



// FUNCTION 144bb7000 FUN_144bb7000 body=180 status=ok
// SIG undefined FUN_144bb7000(void)

undefined4 FUN_144bb7000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  (*(code *)PTR_free_14c6d9f28)(*param_1);
  *param_1 = 0;
  if (param_2 != (undefined8 *)0x0) {
    if (8000000 < (ulonglong)param_2[1]) {
      return 0x2b;
    }
    uVar3 = param_2[1];
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      uVar3 = 0;
    }
    puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(uVar3 + 0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return 0x1b;
    }
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    puVar2[2] = param_2[2];
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      *puVar2 = puVar2 + 3;
      memcpy(puVar2 + 3,(void *)*param_2,param_2[1]);
    }
    *param_1 = puVar2;
  }
  return 0;
}



// FUNCTION 144bb70c0 FUN_144bb70c0 body=9070 status=ok
// SIG undefined FUN_144bb70c0(void)

longlong * FUN_144bb70c0(longlong param_1,int param_2,uint *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  void *_Dst;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  char *pcVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  undefined4 local_res10 [4];
  longlong local_res20;
  longlong local_38 [2];
  
  plVar8 = (longlong *)0x0;
  plVar13 = (longlong *)0x0;
  if (param_2 < 0xd3) {
    if (param_2 == 0xd2) {
      *(byte *)(param_1 + 0xa28) = (byte)*param_3 & 3;
      return (longlong *)0x0;
    }
    switch(param_2) {
    case 3:
      if (*param_3 < 0x10000) {
        *(short *)(param_1 + 0x208) = (short)*param_3;
        return (longlong *)0x0;
      }
      break;
    default:
      goto switchD_144bb7117_caseD_4;
    case 0xd:
      if (*param_3 < 0x20c49c) {
        *(uint *)(param_1 + 0x300) = *param_3 * 1000;
        return (longlong *)0x0;
      }
      break;
    case 0xe:
      if (-2 < (int)*param_3) {
        *(longlong *)(param_1 + 800) = (longlong)(int)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x13:
      if (-1 < (int)*param_3) {
        *(uint *)(param_1 + 0x328) = *param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x14:
      if (-1 < (int)*param_3) {
        *(uint *)(param_1 + 0x32c) = *param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x15:
      if (-2 < (int)*param_3) {
        *(longlong *)(param_1 + 0x340) = (longlong)(int)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x1b:
      *(bool *)(param_1 + 0xab7) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x20:
switchD_144bb7117_caseD_20:
      uVar16 = *param_3 & 0xffff;
      uVar7 = *param_3 & 0xffff0000;
      if (((uVar16 != 2) && (uVar16 != 3)) && ((uVar16 < 8 && (uVar7 < 0x80000)))) {
        lVar14 = 0x658;
        if (param_2 == 0x20) {
          lVar14 = 0x5a0;
        }
        *(char *)(lVar14 + param_1) = (char)uVar16;
        lVar14 = 0x654;
        if (param_2 == 0x20) {
          lVar14 = 0x59c;
        }
        *(uint *)(lVar14 + param_1) = uVar7;
        return (longlong *)0x0;
      }
      break;
    case 0x21:
      if (*param_3 < 4) {
        *(char *)(param_1 + 0x530) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x22:
      *(longlong *)(param_1 + 0x528) = (longlong)(int)*param_3;
      return (longlong *)0x0;
    case 0x29:
      *(bool *)(param_1 + 0xacf) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x2a:
      *(bool *)(param_1 + 0xacb) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x2b:
      uVar7 = *param_3;
      *(bool *)(param_1 + 0xac5) = uVar7 != 0;
      uVar16 = *(uint *)(param_1 + 0xb3c) | 0x10;
      if (uVar7 == 0) {
        uVar16 = *(uint *)(param_1 + 0xb3c) & 0xffffffef;
      }
      *(uint *)(param_1 + 0xb3c) = uVar16;
      return (longlong *)0x0;
    case 0x2c:
      uVar7 = *param_3;
      *(bool *)(param_1 + 0xace) = uVar7 != 0;
      if (uVar7 != 0) {
        *(undefined1 *)(param_1 + 0x531) = 5;
        return (longlong *)0x0;
      }
      if (*(char *)(param_1 + 0x531) != '\x05') {
        return (longlong *)0x0;
      }
      *(undefined1 *)(param_1 + 0x531) = 0;
      return (longlong *)0x0;
    case 0x2d:
      *(bool *)(param_1 + 0xac6) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x2e:
    case 0x36:
      if (*param_3 != 0) {
        *(undefined1 *)(param_1 + 0xace) = 0;
        *(undefined1 *)(param_1 + 0x531) = 4;
        return (longlong *)0x0;
      }
      goto LAB_144bb720d;
    case 0x2f:
      if (*param_3 != 0) {
        *(undefined1 *)(param_1 + 0xace) = 0;
        *(undefined1 *)(param_1 + 0x531) = 1;
        return (longlong *)0x0;
      }
LAB_144bb720d:
      *(undefined1 *)(param_1 + 0x531) = 0;
      return (longlong *)0x0;
    case 0x30:
      *(bool *)(param_1 + 0xabe) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x32:
      *(bool *)(param_1 + 0xabd) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x33:
      if (*param_3 < 3) {
        *(char *)(param_1 + 0x719) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x34:
      *(bool *)(param_1 + 0xac8) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x35:
      *(bool *)(param_1 + 0xabc) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x3a:
      *(bool *)(param_1 + 0xacd) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x3b:
      if (*param_3 < 0x10000) {
        *(short *)(param_1 + 0x6b0) = (short)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x3c:
      lVar14 = (longlong)(int)*param_3;
      if (lVar14 < -1) break;
      if (lVar14 <= *(longlong *)(param_1 + 0x228)) goto LAB_144bb72e2;
      lVar10 = *(longlong *)(param_1 + 0x998);
LAB_144bb72c5:
      if (*(longlong *)(param_1 + 0x218) == lVar10) {
        (*(code *)PTR_free_14c6d9f28)();
        *(undefined8 *)(param_1 + 0x998) = 0;
        *(undefined8 *)(param_1 + 0x218) = 0;
      }
LAB_144bb72e2:
      *(longlong *)(param_1 + 0x228) = lVar14;
      return (longlong *)0x0;
    case 0x3d:
      *(bool *)(param_1 + 0xabb) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x40:
      uVar7 = *param_3;
      *(bool *)(param_1 + 0x5a1) = uVar7 != 0;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        return (longlong *)0x0;
      }
      *(bool *)(*(longlong *)(param_1 + 0x20) + 0x251) = uVar7 != 0;
      return (longlong *)0x0;
    case 0x44:
      if (-2 < (int)*param_3) {
        *(uint *)(param_1 + 0x214) = *param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x45:
      *(bool *)(param_1 + 0xaba) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x47:
      if (-1 < (int)*param_3) {
        *(longlong *)(param_1 + 0xa38) = (longlong)(int)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x4a:
      *(bool *)(param_1 + 0xad2) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x4b:
      *(bool *)(param_1 + 0xad1) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x4e:
      if (*param_3 < 0x20c49c) {
        *(uint *)(param_1 + 0x304) = *param_3 * 1000;
        return (longlong *)0x0;
      }
      break;
    case 0x50:
      if (*param_3 == 0) {
        return (longlong *)0x0;
      }
      *(undefined1 *)(param_1 + 0x531) = 0;
      *(undefined1 *)(param_1 + 0xace) = 0;
      return (longlong *)0x0;
    case 0x51:
      bVar20 = (*param_3 & 3) != 0;
      *(bool *)(param_1 + 0x5a2) = bVar20;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        return (longlong *)0x0;
      }
      *(bool *)(*(longlong *)(param_1 + 0x20) + 0x252) = bVar20;
      return (longlong *)0x0;
    case 0x54:
      uVar7 = *param_3;
      switch(uVar7) {
      case 0:
        uVar7 = 4;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        *(char *)(param_1 + 0x532) = (char)uVar7;
        return (longlong *)0x0;
      }
      if (-1 < (int)uVar7) {
        return (longlong *)&DAT_00000001;
      }
      break;
    case 0x55:
      *(bool *)(param_1 + 0xac0) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x5a:
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x868));
      *(undefined8 *)(param_1 + 0x868) = 0;
      uVar7 = thunk_FUN_1452b3b90(param_1);
      return (longlong *)(ulonglong)uVar7;
    case 0x5b:
      return (longlong *)0x0;
    case 0x5c:
      if (-2 < (int)*param_3) {
        *(uint *)(param_1 + 0x6c8) = *param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x60:
      *(bool *)(param_1 + 0xab6) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x62:
      if (*(longlong *)(param_1 + 0xcd8) == 0) {
        uVar7 = *param_3;
        uVar16 = 0xa00000;
        if ((int)uVar7 < 0xa00001) {
          if ((int)uVar7 < 1) {
            *(undefined4 *)(param_1 + 0x6cc) = 0x4000;
            return (longlong *)0x0;
          }
          uVar16 = uVar7;
          if ((int)uVar7 < 0x400) {
            uVar16 = 0x400;
          }
        }
        *(uint *)(param_1 + 0x6cc) = uVar16;
        return (longlong *)0x0;
      }
      break;
    case 99:
      *(bool *)(param_1 + 0xad3) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x65:
      if (*param_3 < 8) {
        *(char *)(param_1 + 0x6b2) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x69:
      *(bool *)(param_1 + 0xaca) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x6a:
      *(bool *)(param_1 + 0xac1) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x6b:
      uVar7 = *param_3;
      if (uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x20c) = 0;
        return (longlong *)0x0;
      }
      *(byte *)(param_1 + 0xe2e) = (byte)(uVar7 >> 4) & 1;
      if ((uVar7 & 0x10) != 0) {
        uVar7 = uVar7 & 0xffffffef | 2;
      }
      do {
        uVar16 = (uint)plVar8;
        uVar12 = uVar16 + 1;
        plVar8 = (longlong *)(ulonglong)uVar12;
        if (((uVar7 & 0xffffffdb) >> (uVar16 & 0x1f) & 1) != 0) {
          *(uint *)(param_1 + 0x20c) = uVar7 & 0xffffffdb;
          return (longlong *)0x0;
        }
      } while ((int)uVar12 < 0x1f);
      goto LAB_144bb7410;
    case 0x6e:
      if (*param_3 < 3) {
        *(char *)(param_1 + 0x718) = (char)*param_3;
        return (longlong *)0x0;
      }
      goto LAB_144bb7592;
    case 0x6f:
      uVar7 = *param_3;
      if (uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x210) = 0;
        return (longlong *)0x0;
      }
      *(byte *)(param_1 + 0xe3e) = (byte)(uVar7 >> 4) & 1;
      if ((uVar7 & 0x10) != 0) {
        uVar7 = uVar7 & 0xffffffef | 2;
      }
      do {
        uVar16 = (uint)plVar8;
        uVar12 = uVar16 + 1;
        plVar8 = (longlong *)(ulonglong)uVar12;
        if (((uVar7 & 0xffffffdb) >> (uVar16 & 0x1f) & 1) != 0) {
          *(uint *)(param_1 + 0x210) = uVar7 & 0xffffffdb;
          return (longlong *)0x0;
        }
      } while ((int)uVar12 < 0x1f);
      return (longlong *)&DAT_00000004;
    case 0x70:
      if (*param_3 < 0x20c49c) {
        *(uint *)(param_1 + 0x30c) = *param_3 * 1000;
        return (longlong *)0x0;
      }
      break;
    case 0x71:
      if (*param_3 < 3) {
        *(char *)(param_1 + 0x6e8) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x72:
      if (-1 < (int)*param_3) {
        *(longlong *)(param_1 + 0x6f0) = (longlong)(int)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x77:
      if (*param_3 < 4) {
        *(char *)(param_1 + 0xab1) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x79:
      *(bool *)(param_1 + 0xad4) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x81:
      if (*param_3 < 3) {
        *(char *)(param_1 + 0x6f9) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x88:
      *(bool *)(param_1 + 0xad5) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x89:
      *(bool *)(param_1 + 0xac3) = *param_3 != 0;
      return (longlong *)0x0;
    case 0x8a:
      if (*param_3 < 4) {
        *(char *)(param_1 + 0x6f8) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x8b:
      if (*param_3 < 0x10000) {
        uVar5 = FUN_144f16ff0();
        *(undefined2 *)(param_1 + 0x230) = uVar5;
        return (longlong *)0x0;
      }
      break;
    case 0x8c:
      if (*param_3 < 0x10000) {
        uVar5 = FUN_144f16ff0();
        *(undefined2 *)(param_1 + 0x232) = uVar5;
        return (longlong *)0x0;
      }
      break;
    case 0x8d:
      if ((int)*param_3 < 3) {
        *(char *)(param_1 + 0xab2) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x96:
      uVar7 = *param_3;
      *(bool *)(param_1 + 0x5a4) = uVar7 != 0;
      *(bool *)(param_1 + 0x65c) = uVar7 != 0;
      return (longlong *)0x0;
    case 0x9a:
      if (*param_3 < 3) {
        *(char *)(param_1 + 0x6fa) = (char)*param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x9b:
      *(uint *)(param_1 + 0x300) = *param_3;
      return (longlong *)0x0;
    case 0x9c:
      *(uint *)(param_1 + 0x304) = *param_3;
      return (longlong *)0x0;
    case 0x9d:
      *(bool *)(param_1 + 0xad6) = *param_3 == 0;
      return (longlong *)0x0;
    case 0x9e:
      *(bool *)(param_1 + 0xad7) = *param_3 == 0;
      return (longlong *)0x0;
    case 0x9f:
      if (*param_3 < 0x200) {
        *(uint *)(param_1 + 0x71c) = *param_3;
        return (longlong *)0x0;
      }
      break;
    case 0xa1:
      if (-1 < (int)*param_3) {
        *(byte *)(param_1 + 0xaa0) = (byte)*param_3 & 7;
        return (longlong *)0x0;
      }
      break;
    case 0xa6:
      if (*param_3 == 0) {
        *(undefined1 *)(param_1 + 0xad8) = 0;
        return (longlong *)0x0;
      }
      if (*param_3 == 1) {
        *(undefined1 *)(param_1 + 0xad8) = 1;
        return (longlong *)0x0;
      }
      goto LAB_144bb7592;
    case 0xab:
      *(uint *)(param_1 + 0x9e0) = *param_3;
      return (longlong *)0x0;
    case 0xac:
      cVar4 = FUN_144f0d690(param_1,2);
      if (cVar4 != '\0') {
        *(bool *)(param_1 + 0x5e8) = *param_3 != 0;
        return (longlong *)0x0;
      }
      goto switchD_144bb79ed_caseD_f4;
    case 0xb2:
      if (-1 < (int)*param_3) {
        *(uint *)(param_1 + 0x318) = *param_3;
        return (longlong *)0x0;
      }
      break;
    case 0xb5:
      *(uint *)(param_1 + 0x9e4) = *param_3;
      return (longlong *)0x0;
    case 0xb6:
      *(uint *)(param_1 + 0x9e8) = *param_3;
      return (longlong *)0x0;
    case 0xbc:
      *(bool *)(param_1 + 0xac2) = *param_3 != 0;
      return (longlong *)0x0;
    case 0xbd:
      switch(*param_3) {
      case 1:
        *(undefined4 *)(param_1 + 0x9f8) = 1;
        return (longlong *)0x0;
      case 2:
        *(undefined4 *)(param_1 + 0x9f8) = 2;
        return (longlong *)0x0;
      case 3:
        *(undefined4 *)(param_1 + 0x9f8) = 3;
        return (longlong *)0x0;
      case 4:
        *(undefined4 *)(param_1 + 0x9f8) = 4;
        return (longlong *)0x0;
      case 5:
        *(undefined4 *)(param_1 + 0x9f8) = 5;
        return (longlong *)0x0;
      case 6:
        *(undefined4 *)(param_1 + 0x9f8) = 6;
        return (longlong *)0x0;
      case 7:
        *(undefined4 *)(param_1 + 0x9f8) = 7;
        return (longlong *)0x0;
      case 8:
        *(undefined4 *)(param_1 + 0x9f8) = 8;
        return (longlong *)0x0;
      case 9:
        *(undefined4 *)(param_1 + 0x9f8) = 9;
        return (longlong *)0x0;
      case 10:
        *(undefined4 *)(param_1 + 0x9f8) = 10;
        return (longlong *)0x0;
      case 0xb:
        *(undefined4 *)(param_1 + 0x9f8) = 0xb;
        return (longlong *)0x0;
      default:
        *(undefined4 *)(param_1 + 0x9f8) = 0;
        return (longlong *)0x0;
      }
    case 0xc1:
      *(uint *)(param_1 + 0x11c8) = *param_3;
      return (longlong *)0x0;
    case 0xc2:
      *(uint *)(param_1 + 0x11cc) = *param_3;
      return (longlong *)0x0;
    case 0xc5:
      *(bool *)(param_1 + 0xac4) = *param_3 != 0;
      return (longlong *)0x0;
    case 0xcf:
      *(bool *)(param_1 + 0xac9) = *param_3 != 0;
      return (longlong *)0x0;
    }
LAB_144bb9312:
    return (longlong *)&DAT_0000002b;
  }
  if (0x2711 < param_2) {
    if (0x27f4 < param_2) {
      if (0x4e2b < param_2) {
        if (0x4f30 < param_2) {
          if (0x75c1 < param_2) {
            if (param_2 < 0x9d64) {
              if (param_2 == 0x9d63) {
                uVar7 = FUN_144bb7000(param_1 + 0x9a0,*(undefined8 *)param_3);
                return (longlong *)(ulonglong)uVar7;
              }
              if (param_2 == 0x75c2) {
                if (-1 < *(longlong *)param_3) {
                  *(longlong *)(param_1 + 0x338) = *(longlong *)param_3;
                  return (longlong *)0x0;
                }
                goto LAB_144bb9312;
              }
              if (param_2 == 0x763e) {
                *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)param_3;
                return (longlong *)0x0;
              }
switchD_144bb7117_caseD_4:
              return (longlong *)&DAT_00000030;
            }
            switch(param_2) {
            case 0x9d64:
              uVar7 = FUN_144bb7000(param_1 + 0x9b0,*(undefined8 *)param_3);
              return (longlong *)(ulonglong)uVar7;
            case 0x9d65:
              uVar7 = FUN_144bb7000(param_1 + 0x9a8,*(undefined8 *)param_3);
              return (longlong *)(ulonglong)uVar7;
            case 0x9d66:
              uVar7 = FUN_144bb7000(param_1 + 0x9b8,*(undefined8 *)param_3);
              return (longlong *)(ulonglong)uVar7;
            case 0x9d67:
              uVar7 = FUN_144bb7000(param_1 + 0x9c0,*(undefined8 *)param_3);
              return (longlong *)(ulonglong)uVar7;
            default:
              goto switchD_144bb7117_caseD_4;
            case 0x9d69:
              uVar7 = FUN_144bb7000(param_1 + 0x9c8,*(undefined8 *)param_3);
              return (longlong *)(ulonglong)uVar7;
            case 0x9d75:
              cVar4 = FUN_144f0d690(param_1,0x40);
              if (cVar4 != '\0') {
                uVar7 = FUN_144bb7000(param_1 + 0x9d0,*(undefined8 *)param_3);
                return (longlong *)(ulonglong)uVar7;
              }
              break;
            case 0x9d76:
              cVar4 = FUN_144f0d690(param_1,0x40);
              if (cVar4 != '\0') {
                uVar7 = FUN_144bb7000(param_1 + 0x9d8,*(undefined8 *)param_3);
                return (longlong *)(ulonglong)uVar7;
              }
            }
            goto LAB_144bb7410;
          }
          if (param_2 == 0x75c1) {
            if (-1 < *(longlong *)param_3) {
              *(longlong *)(param_1 + 0x330) = *(longlong *)param_3;
              return (longlong *)0x0;
            }
            goto LAB_144bb9312;
          }
          if (param_2 < 0x75a4) {
            if (param_2 != 0x75a3) {
              if (param_2 == 0x4f3b) {
                *(undefined8 *)(param_1 + 0xa98) = *(undefined8 *)param_3;
                return (longlong *)0x0;
              }
              if (param_2 == 0x4f4d) {
                *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)param_3;
                return (longlong *)0x0;
              }
              if (param_2 == 0x4f4f) {
                *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)param_3;
                return (longlong *)0x0;
              }
              if (param_2 == 0x4f58) {
                *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)param_3;
                return (longlong *)0x0;
              }
              goto switchD_144bb7117_caseD_4;
            }
            if (-2 < *(longlong *)param_3) {
              *(longlong *)(param_1 + 800) = *(longlong *)param_3;
              return (longlong *)0x0;
            }
            goto LAB_144bb9312;
          }
          if (param_2 == 0x75a4) {
            if (-2 < *(longlong *)param_3) {
              *(longlong *)(param_1 + 0x340) = *(longlong *)param_3;
              return (longlong *)0x0;
            }
            goto LAB_144bb9312;
          }
          if (param_2 == 0x75a5) {
            if (-1 < *(longlong *)param_3) {
              *(longlong *)(param_1 + 0x6f0) = *(longlong *)param_3;
              return (longlong *)0x0;
            }
            goto LAB_144bb9312;
          }
          if (param_2 != 0x75a8) goto switchD_144bb7117_caseD_4;
          lVar14 = *(longlong *)param_3;
          if (lVar14 < -1) goto LAB_144bb9312;
          if (lVar14 <= *(longlong *)(param_1 + 0x228)) goto LAB_144bb72e2;
          lVar10 = *(longlong *)(param_1 + 0x998);
          goto LAB_144bb72c5;
        }
        if (param_2 == 0x4f30) {
          *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        }
        switch(param_2) {
        case 0x4e2c:
          lVar14 = *(longlong *)param_3;
          *(longlong *)(param_1 + 0x250) = lVar14;
          pcVar3 = fread_exref;
          if (lVar14 == 0) {
            *(undefined1 *)(param_1 + 0xab3) = 0;
            *(code **)(param_1 + 0x250) = pcVar3;
            return (longlong *)0x0;
          }
          *(undefined1 *)(param_1 + 0xab3) = 1;
          return (longlong *)0x0;
        default:
          goto switchD_144bb7117_caseD_4;
        case 0x4e58:
          lVar14 = *(longlong *)param_3;
          *(longlong *)(param_1 + 600) = lVar14;
          *(bool *)(param_1 + 0xc8c) = lVar14 != 0;
          return (longlong *)0x0;
        case 0x4e6f:
          *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4e7e:
          *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4e8c:
          cVar4 = FUN_144f0d690(param_1,8);
          if (cVar4 != '\0') {
            *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)param_3;
            return (longlong *)0x0;
          }
          break;
        case 0x4ea2:
          *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4eb4:
          *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ec3:
          *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ec7:
          *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ee4:
          *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ee6:
          *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ee7:
          *(undefined8 *)(param_1 + 0xa08) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ee8:
          *(undefined8 *)(param_1 + 0xa10) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4ef0:
          *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)param_3;
          return (longlong *)0x0;
        case 0x4efb:
          lVar14 = *(longlong *)param_3;
          *(longlong *)(param_1 + 0x260) = lVar14;
          *(bool *)(param_1 + 0xc8c) = lVar14 != 0;
          return (longlong *)0x0;
        }
        goto switchD_144bb79ed_caseD_f4;
      }
      if (param_2 == 0x4e2b) {
        lVar14 = *(longlong *)param_3;
        *(longlong *)(param_1 + 0x238) = lVar14;
        if (lVar14 != 0) {
          return (longlong *)0x0;
        }
        *(code **)(param_1 + 0x238) = fwrite_exref;
        return (longlong *)0x0;
      }
      switch(param_2) {
      case 0x27f6:
        cVar4 = FUN_144f0d690(param_1,4);
        if (cVar4 != '\0') {
          uVar7 = FUN_144bb6f60(param_1 + 0x810,*(undefined8 *)param_3);
          return (longlong *)(ulonglong)uVar7;
        }
        break;
      case 0x27f7:
        *(undefined1 *)(param_1 + 0xae2) = 0;
        goto LAB_144bb8e66;
      default:
        goto switchD_144bb7117_caseD_4;
      case 0x27fb:
        goto switchD_144bb7eac_caseD_27c3;
      case 0x27fc:
        uVar7 = FUN_144bb6f60(param_1 + 0x8e8,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x27fe:
        uVar7 = FUN_144bb6f60(param_1 + 0x758,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2800:
      case 0x2801:
        piVar2 = *(int **)param_3;
        if ((piVar2 != (int *)0x0) && (*piVar2 != -0x3f212453)) {
          return (longlong *)0x0;
        }
        plVar13 = (longlong *)FUN_144f0f280(piVar2,param_1,CONCAT71(0x1400000,param_2 == 0x2801));
        return plVar13;
      case 0x2803:
        *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x2806:
        uVar7 = FUN_144bb6f60(param_1 + 0x808,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2807:
        cVar4 = FUN_144f0d690(param_1,1);
        if (cVar4 != '\0') {
          uVar7 = FUN_144bb6f60(param_1 + 0x7f8,*(undefined8 *)param_3);
          return (longlong *)(ulonglong)uVar7;
        }
        goto switchD_144bb79ed_caseD_f4;
      case 0x280e:
        uVar7 = FUN_144bb6f60(param_1 + 0x728,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x280f:
        uVar7 = FUN_144bb6f60(param_1 + 0x738,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2810:
        uVar7 = FUN_144bb6f60(param_1 + 0x790,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2811:
        uVar7 = FUN_144bb6f60(param_1 + 0x7b0,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2812:
        uVar7 = FUN_144bb6f60(param_1 + 0x7a0,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2813:
        uVar7 = FUN_144bb6f60(param_1 + 0x828,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2814:
        uVar7 = FUN_144bb6f60(param_1 + 0x850,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2816:
        uVar7 = FUN_144bb6f60(param_1 + 2000,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2817:
        cVar4 = FUN_144f0d690(param_1,4);
        if (cVar4 != '\0') {
          uVar7 = FUN_144bb6f60(param_1 + 0x818,*(undefined8 *)param_3);
          return (longlong *)(ulonglong)uVar7;
        }
        break;
      case 0x2818:
        *(undefined1 *)(param_1 + 0xae2) = 1;
LAB_144bb8e66:
        uVar7 = FUN_144bb6f60(param_1 + 0x928,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x281a:
        uVar7 = FUN_144bb6f60(param_1 + 0x930,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x281d:
        uVar7 = FUN_144f092e0(param_1 + 0x358,*(undefined8 *)param_3,0);
        if (uVar7 != 0) {
          return (longlong *)(ulonglong)uVar7;
        }
        *(undefined1 *)(param_1 + 0x531) = 3;
        goto LAB_144bb8003;
      case 0x2821:
        *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x2824:
        cVar4 = FUN_144f0d690(param_1,0x20);
        if (cVar4 != '\0') {
          uVar7 = FUN_144bb6f60(param_1 + 0x830,*(undefined8 *)param_3);
          return (longlong *)(ulonglong)uVar7;
        }
        goto LAB_144bb7410;
      case 0x2825:
        cVar4 = FUN_144f0d690(param_1,0x20);
        if (cVar4 != '\0') {
          uVar7 = FUN_144bb6f60(param_1 + 0x838,*(undefined8 *)param_3);
          return (longlong *)(ulonglong)uVar7;
        }
LAB_144bb7410:
        return (longlong *)&DAT_00000004;
      case 0x2827:
        uVar7 = FUN_144bb6f60(param_1 + 0x938,*(undefined8 *)param_3);
        *(bool *)(param_1 + 0xae4) = *(longlong *)(param_1 + 0x938) != 0;
        return (longlong *)(ulonglong)uVar7;
      case 0x282a:
        *(undefined8 *)(param_1 + 0xa88) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x282c:
        *(undefined8 *)(param_1 + 0xa90) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x282f:
        if (*(longlong *)(param_1 + 0xb00) == 0) {
          lVar14 = FUN_144f17600();
          *(longlong *)(param_1 + 0xb00) = lVar14;
          if (lVar14 == 0) goto LAB_144bb80ec;
        }
        lVar14 = *(longlong *)param_3;
        plVar13 = (longlong *)FUN_144bb6f60(param_1 + 0x940,lVar14);
        if ((int)plVar13 != 0) {
          return plVar13;
        }
        if (lVar14 == 0) {
          return (longlong *)((ulonglong)plVar13 & 0xffffffff);
        }
        FUN_144f17640(*(undefined8 *)(param_1 + 0xb00),lVar14);
        return (longlong *)((ulonglong)plVar13 & 0xffffffff);
      case 0x2831:
        uVar7 = FUN_144bb6f60(param_1 + 0x950,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x2838:
        uVar7 = FUN_144bb6f60(param_1 + 0x860,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x283a:
        uVar7 = FUN_144bb6f60(param_1 + 0x978,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      case 0x283c:
        if (*(longlong *)(param_1 + 0xaf8) == 0) {
          lVar14 = FUN_144f188d0();
          *(longlong *)(param_1 + 0xaf8) = lVar14;
          if (lVar14 == 0) goto LAB_144bb80ec;
        }
        lVar14 = *(longlong *)param_3;
        if (lVar14 != 0) {
          plVar13 = (longlong *)FUN_144bb6f60(param_1 + 0x948,lVar14);
          if ((int)plVar13 != 0) {
            return plVar13;
          }
          lVar14 = FUN_144bbed20(*(undefined8 *)(param_1 + 0x2c8),lVar14);
          if (lVar14 != 0) {
            *(longlong *)(param_1 + 0x2c8) = lVar14;
            return (longlong *)((ulonglong)plVar13 & 0xffffffff);
          }
          FUN_144b472a0(*(undefined8 *)(param_1 + 0x2c8));
          *(undefined8 *)(param_1 + 0x2c8) = 0;
          return (longlong *)&DAT_0000001b;
        }
        FUN_144b472a0(*(undefined8 *)(param_1 + 0x2c8));
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        if ((*(longlong *)(param_1 + 0xe8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0xc0) != 0)) {
          return (longlong *)0x0;
        }
        goto LAB_144bb8fb8;
      case 0x283e:
        *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x2840:
        *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x2841:
        uVar7 = FUN_144bb6f60(param_1 + 0x980,*(undefined8 *)param_3);
        if (*(longlong *)(param_1 + 0x980) == 0) {
          return (longlong *)(ulonglong)uVar7;
        }
        *(undefined4 *)(param_1 + 0x20c) = 0x80;
        return (longlong *)(ulonglong)uVar7;
      case 0x2849:
        *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      case 0x284e:
        plVar13 = (longlong *)FUN_144bb9c10(*(undefined8 *)param_3,local_res10);
        if ((int)plVar13 == 0) {
          *(undefined4 *)(param_1 + 0x9e4) = local_res10[0];
          return (longlong *)((ulonglong)plVar13 & 0xffffffff);
        }
        return plVar13;
      case 0x284f:
        plVar13 = (longlong *)FUN_144bb9c10(*(undefined8 *)param_3,local_res10);
        if ((int)plVar13 == 0) {
          *(undefined4 *)(param_1 + 0x9e8) = local_res10[0];
          return (longlong *)((ulonglong)plVar13 & 0xffffffff);
        }
        return plVar13;
      case 0x2853:
        uVar7 = FUN_144bb6f60(param_1 + 0x988,*(undefined8 *)param_3);
        *(undefined1 *)(param_1 + 0xae1) = 1;
        return (longlong *)(ulonglong)uVar7;
      }
      return (longlong *)&DAT_00000004;
    }
    if (param_2 == 0x27f4) {
      *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    }
    switch(param_2) {
    case 0x2712:
      if (*(char *)(param_1 + 0x13d4) != '\0') {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1270));
        *(undefined8 *)(param_1 + 0x1270) = 0;
        *(undefined1 *)(param_1 + 0x13d4) = 0;
      }
      uVar7 = FUN_144bb6f60(param_1 + 0x7e8,*(undefined8 *)param_3);
      *(undefined8 *)(param_1 + 0x1270) = *(undefined8 *)(param_1 + 0x7e8);
      return (longlong *)(ulonglong)uVar7;
    default:
      goto switchD_144bb7117_caseD_4;
    case 0x2714:
      uVar7 = FUN_144bb6f60(param_1 + 0x7c8,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2715:
      plVar18 = (longlong *)(param_1 + 0x878);
      local_res20 = 0;
      plVar19 = (longlong *)(param_1 + 0x870);
      local_38[0] = 0;
      pcVar15 = *(char **)param_3;
      if (pcVar15 == (char *)0x0) goto LAB_144bb8522;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (pcVar15[uVar11] != '\0');
      goto LAB_144bb84db;
    case 0x2716:
      plVar18 = (longlong *)(param_1 + 0x890);
      local_res20 = 0;
      plVar19 = (longlong *)(param_1 + 0x888);
      local_38[0] = 0;
      pcVar15 = *(char **)param_3;
      plVar13 = plVar8;
      if (pcVar15 == (char *)0x0) goto LAB_144bb8522;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (pcVar15[uVar11] != '\0');
LAB_144bb84db:
      local_38[0] = 0;
      local_res20 = 0;
      if (uVar11 < 0x7a1201) {
        plVar13 = local_38;
        if (plVar18 == (longlong *)0x0) {
          plVar13 = plVar8;
        }
        plVar17 = &local_res20;
        if (plVar19 == (longlong *)0x0) {
          plVar17 = plVar8;
        }
        uVar7 = FUN_144f0ef50(pcVar15,uVar11,plVar17,plVar13,0);
        plVar13 = (longlong *)(ulonglong)uVar7;
        if (uVar7 != 0) {
          return plVar13;
        }
LAB_144bb8522:
        if (plVar19 != (longlong *)0x0) {
          if (((local_res20 == 0) && (pcVar15 != (char *)0x0)) && (*pcVar15 == ':')) {
            local_res20 = (*(code *)PTR__strdup_14c6d9f38)(&DAT_14996de1b);
            uVar7 = (uint)plVar13;
            if (local_res20 == 0) {
              uVar7 = 0x1b;
            }
            plVar13 = (longlong *)(ulonglong)uVar7;
          }
          (*(code *)PTR_free_14c6d9f28)(*plVar19);
          *plVar19 = local_res20;
        }
        if (plVar18 == (longlong *)0x0) {
          return plVar13;
        }
        (*(code *)PTR_free_14c6d9f28)(*plVar18);
        *plVar18 = local_38[0];
        return plVar13;
      }
LAB_144bb7592:
      return (longlong *)&DAT_0000002b;
    case 0x2717:
      uVar7 = FUN_144bb6f60(param_1 + 0x7d8,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2719:
      *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x271a:
      *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x271f:
      *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)param_3;
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x998));
      *(undefined8 *)(param_1 + 0x998) = 0;
      *(undefined1 *)(param_1 + 0x531) = 1;
      return (longlong *)0x0;
    case 0x2720:
      if (*(char *)(param_1 + 0x13d5) != '\0') {
        (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1278));
        *(undefined8 *)(param_1 + 0x1278) = 0;
        *(undefined1 *)(param_1 + 0x13d5) = 0;
      }
      uVar7 = FUN_144bb6f60(param_1 + 0x7e0,*(undefined8 *)param_3);
      *(undefined8 *)(param_1 + 0x1278) = *(undefined8 *)(param_1 + 0x7e0);
      return (longlong *)(ulonglong)uVar7;
    case 0x2721:
      uVar7 = FUN_144bb6f60(param_1 + 0x780,*(undefined8 *)param_3);
      *(bool *)(param_1 + 0xabf) = *(longlong *)(param_1 + 0x780) != 0;
      return (longlong *)(ulonglong)uVar7;
    case 0x2722:
      uVar7 = FUN_144bb6f60(param_1 + 0x840,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2726:
      uVar7 = FUN_144bb6f60(param_1 + 0x740,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2727:
      *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x2728:
      *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)param_3;
      *(undefined1 *)(param_1 + 0x531) = 2;
LAB_144bb8003:
      *(undefined1 *)(param_1 + 0xace) = 0;
      FUN_144f08d20(*(undefined8 *)(param_1 + 0x1290));
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x1290));
      *(undefined8 *)(param_1 + 0x1290) = 0;
      return (longlong *)0x0;
    case 0x2729:
      uVar7 = FUN_144bb6f60(param_1 + 0x720,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x272a:
      uVar7 = FUN_144bb6f60(param_1 + 0x798,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x272c:
      *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x272d:
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x272f:
      lVar14 = *(longlong *)param_3;
      if (lVar14 == 0) {
        FUN_144b472a0(*(undefined8 *)(param_1 + 0x2c0));
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        if ((*(longlong *)(param_1 + 0xe8) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0xb8) == 0)) {
          FUN_144f05e60(*(undefined8 *)(param_1 + 0xaf0));
          FUN_144f060e0(*(undefined8 *)(param_1 + 0xaf0));
        }
        *(undefined8 *)(param_1 + 0xaf0) = 0;
        return (longlong *)0x0;
      }
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (*(char *)(lVar14 + uVar11) != '\0');
      if (uVar11 < 0x7a1201) {
        lVar14 = FUN_144bbed20(*(undefined8 *)(param_1 + 0x2c0),lVar14);
        if (lVar14 != 0) {
          *(longlong *)(param_1 + 0x2c0) = lVar14;
          return (longlong *)0x0;
        }
        FUN_144b472a0(*(undefined8 *)(param_1 + 0x2c0));
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        goto LAB_144bb80ec;
      }
      goto LAB_144bb9312;
    case 0x2734:
      uVar7 = FUN_144bb6f60(param_1 + 0x750,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2735:
      lVar14 = *(longlong *)param_3;
      *(longlong *)(param_1 + 0x1d8) = lVar14;
      if (lVar14 != 0) {
        return (longlong *)0x0;
      }
      uVar9 = __acrt_iob_func(2);
      *(undefined8 *)(param_1 + 0x1d8) = uVar9;
      return (longlong *)0x0;
    case 0x2737:
      *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x2749:
      *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x274e:
      uVar7 = FUN_144bb6f60(param_1 + 0x760,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x274f:
      uVar7 = FUN_144bb6f60(param_1 + 0x7b8,*(undefined8 *)param_3);
      *(bool *)(param_1 + 0xad0) = *(longlong *)(param_1 + 0x7b8) != 0;
      return (longlong *)(ulonglong)uVar7;
    case 0x2751:
      uVar7 = FUN_144bb6f60(param_1 + 0x800,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2756:
      *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x275c:
    case 0x275d:
      return (longlong *)0x0;
    case 0x2762:
      uVar7 = FUN_144bb6f60(param_1 + 0x748,*(undefined8 *)param_3);
      lVar14 = FUN_144f061a0(param_1,0,*(undefined8 *)(param_1 + 0xaf0),
                             *(undefined1 *)(param_1 + 0xab6));
      *(longlong *)(param_1 + 0xaf0) = lVar14;
      if (lVar14 == 0) {
        uVar7 = 0x1b;
      }
      return (longlong *)(ulonglong)uVar7;
    case 0x2763:
      uVar7 = FUN_144bb6f60(param_1 + 0x820,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2766:
      uVar7 = FUN_144bb6f60(param_1 + 0x730,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2767:
      uVar7 = FUN_144bb6f60(param_1 + 0x788,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2768:
      uVar7 = FUN_144bb6f60(param_1 + 0x7a8,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2769:
      pcVar15 = *(char **)param_3;
      if (pcVar15 == (char *)0x0) {
        return (longlong *)0x0;
      }
      if (*pcVar15 == '\0') {
        return (longlong *)0x0;
      }
      uVar7 = FUN_144bb6f60(param_1 + 0x868,pcVar15);
      if (uVar7 != 0) {
        return (longlong *)(ulonglong)uVar7;
      }
      uVar7 = thunk_FUN_1452b39f0(param_1,pcVar15);
      return (longlong *)(ulonglong)uVar7;
    case 0x276d:
      *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x276f:
      *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x2771:
      cVar4 = FUN_144f0d690(param_1,1);
      if (cVar4 != '\0') {
        uVar7 = FUN_144bb6f60(param_1 + 0x7f0,*(undefined8 *)param_3);
        return (longlong *)(ulonglong)uVar7;
      }
      break;
    case 0x2774:
      piVar2 = *(int **)param_3;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_144bbeca0(param_1,1,2);
        if (*(int *)(param_1 + 0xd0) == 2) {
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined4 *)(param_1 + 0xd0) = 0;
        }
        lVar14 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(lVar14 + 0xb8) == *(longlong *)(param_1 + 0xaf0)) {
          *(undefined8 *)(param_1 + 0xaf0) = 0;
        }
        if (*(longlong *)(lVar14 + 0xc0) == *(longlong *)(param_1 + 0xaf8)) {
          *(undefined8 *)(param_1 + 0xaf8) = 0;
        }
        if (*(longlong *)(lVar14 + 200) == *(longlong *)(param_1 + 0xd08)) {
          *(undefined8 *)(param_1 + 0xd08) = 0;
        }
        *(int *)(*(longlong *)(param_1 + 0xe8) + 8) = *(int *)(lVar14 + 8) + -1;
        FUN_144bbece0(param_1,1);
        *(undefined8 *)(param_1 + 0xe8) = 0;
      }
      if (piVar2 == (int *)0x0) {
        return (longlong *)0x0;
      }
      if (*piVar2 != 0x7e117a1e) {
        return (longlong *)0x0;
      }
      *(int **)(param_1 + 0xe8) = piVar2;
      FUN_144bbeca0(param_1,1,2);
      *(int *)(*(longlong *)(param_1 + 0xe8) + 8) = *(int *)(*(longlong *)(param_1 + 0xe8) + 8) + 1;
      lVar14 = *(longlong *)(param_1 + 0xe8);
      lVar10 = lVar14;
      if ((*(byte *)(lVar14 + 4) & 8) != 0) {
        *(longlong *)(param_1 + 200) = lVar14 + 0x88;
        *(undefined4 *)(param_1 + 0xd0) = 2;
        lVar10 = *(longlong *)(param_1 + 0xe8);
      }
      if (*(longlong *)(lVar14 + 0xb8) != 0) {
        FUN_144f060e0(*(undefined8 *)(param_1 + 0xaf0));
        lVar10 = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xaf0) = *(undefined8 *)(lVar10 + 0xb8);
        lVar14 = lVar10;
      }
      if (*(longlong *)(lVar14 + 0xc0) != 0) {
        FUN_144f18900(param_1 + 0xaf8);
        lVar10 = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(lVar10 + 0xc0);
      }
      if (*(longlong *)(lVar10 + 200) != 0) {
        *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(lVar10 + 0xd0);
        *(undefined8 *)(param_1 + 0xd08) = *(undefined8 *)(lVar10 + 200);
      }
      FUN_144bbece0(param_1,1);
      return (longlong *)0x0;
    case 0x2776:
      if ((*(char **)param_3 != (char *)0x0) && (**(char **)param_3 == '\0')) {
        lVar14 = FUN_144f19ec0();
        if (lVar14 == 0) {
          return (longlong *)&DAT_0000001b;
        }
        uVar7 = FUN_144bb6f60(param_1 + 0x768,lVar14);
        (*(code *)PTR_free_14c6d9f28)(lVar14);
        return (longlong *)(ulonglong)uVar7;
      }
      uVar7 = FUN_144bb6f60(param_1 + 0x768);
      return (longlong *)(ulonglong)uVar7;
    case 0x2777:
      *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x2778:
      *(undefined8 *)(param_1 + 0x6e0) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x277d:
      cVar4 = FUN_144f0d690(param_1,8);
      if (cVar4 != '\0') {
        *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)param_3;
        return (longlong *)0x0;
      }
      break;
    case 0x2786:
      uVar7 = FUN_144bb6f60(param_1 + 0x7c0,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2793:
      *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x2796:
      uVar7 = FUN_144bb6f60(param_1 + 0x770,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x2797:
      lVar14 = *(longlong *)param_3;
      if (lVar14 == 0) {
        return (longlong *)0x0;
      }
      iVar6 = FUN_144f19540(lVar14,&DAT_14997c144);
      if (iVar6 != 0) {
        FUN_144bbeca0(param_1,2,2);
        FUN_144f05e60(*(undefined8 *)(param_1 + 0xaf0));
        FUN_144bbece0(param_1,2);
        return (longlong *)0x0;
      }
      iVar6 = FUN_144f19540(lVar14,&DAT_14997c148);
      if (iVar6 != 0) {
        FUN_144bbeca0(param_1,2,2);
        FUN_144f05f20(*(undefined8 *)(param_1 + 0xaf0));
        FUN_144bbece0(param_1,2);
        return (longlong *)0x0;
      }
      iVar6 = FUN_144f19540(lVar14,"FLUSH");
      if (iVar6 != 0) {
        FUN_144f06020(param_1,0);
        return (longlong *)0x0;
      }
      iVar6 = FUN_144f19540(lVar14,"RELOAD");
      if (iVar6 != 0) {
        FUN_144f064a0(param_1);
        return (longlong *)0x0;
      }
      if (*(longlong *)(param_1 + 0xaf0) == 0) {
        uVar9 = FUN_144f061a0(param_1,0,0,1);
        *(undefined8 *)(param_1 + 0xaf0) = uVar9;
      }
      uVar11 = 0xffffffffffffffff;
      do {
        uVar11 = uVar11 + 1;
      } while (*(char *)(lVar14 + uVar11) != '\0');
      if (uVar11 < 0x7a1201) {
        lVar14 = (*(code *)PTR__strdup_14c6d9f38)(lVar14);
        if ((lVar14 != 0) && (*(longlong *)(param_1 + 0xaf0) != 0)) {
          FUN_144bbeca0(param_1,2,2);
          iVar6 = FUN_144f195b0(lVar14,"Set-Cookie:",0xb);
          lVar10 = lVar14;
          if (iVar6 != 0) {
            lVar10 = lVar14 + 0xb;
          }
          FUN_144f04b50(param_1,*(undefined8 *)(param_1 + 0xaf0),iVar6 != 0,0,lVar10,0,0,1);
          FUN_144bbece0(param_1,2);
          (*(code *)PTR_free_14c6d9f28)(lVar14);
          return (longlong *)0x0;
        }
        (*(code *)PTR_free_14c6d9f28)(lVar14);
        return (longlong *)&DAT_0000001b;
      }
      goto LAB_144bb9312;
    case 0x27a3:
      uVar7 = FUN_144bb6f60(param_1 + 0x778,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27a5:
      *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27b4:
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27b5:
      _Src = *(void **)param_3;
      if ((_Src == (void *)0x0) || (*(longlong *)(param_1 + 0x228) == -1)) {
        uVar7 = FUN_144bb6f60(param_1 + 0x998,_Src);
        plVar8 = (longlong *)(ulonglong)uVar7;
      }
      else {
        puVar1 = (undefined8 *)(param_1 + 0x998);
        if (-1 < *(longlong *)(param_1 + 0x228)) {
          (*(code *)PTR_free_14c6d9f28)(*puVar1);
          *puVar1 = 0;
          lVar14 = 1;
          if (*(longlong *)(param_1 + 0x228) != 0) {
            lVar14 = *(longlong *)(param_1 + 0x228);
          }
          _Dst = (void *)(*(code *)PTR_malloc_14c6d9f20)(lVar14);
          if (_Dst != (void *)0x0) {
            if (*(size_t *)(param_1 + 0x228) != 0) {
              memcpy(_Dst,_Src,*(size_t *)(param_1 + 0x228));
            }
            *puVar1 = _Dst;
            goto LAB_144bb7f5f;
          }
        }
        plVar8 = (longlong *)&DAT_0000001b;
      }
LAB_144bb7f5f:
      *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x998);
      *(undefined1 *)(param_1 + 0x531) = 1;
      return plVar8;
    case 0x27b8:
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27b9:
      uVar7 = FUN_144bb6f60(param_1 + 0x848,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27ba:
      uVar7 = FUN_144bb6f60(param_1 + 0x858,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27bd:
      uVar7 = FUN_144bb6f60(param_1 + 0x870,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27be:
      uVar7 = FUN_144bb6f60(param_1 + 0x878,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27bf:
      uVar7 = FUN_144bb6f60(param_1 + 0x888,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27c0:
      uVar7 = FUN_144bb6f60(param_1 + 0x890,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27c1:
      uVar7 = FUN_144bb6f60(param_1 + 0x898,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27c3:
switchD_144bb7eac_caseD_27c3:
      uVar7 = FUN_144bb6f60(param_1 + 0x8e0,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27ca:
      uVar7 = FUN_144bb6f60(param_1 + 0x8f0,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27cb:
      *(undefined8 *)(param_1 + 0xaa8) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27ce:
      uVar7 = FUN_144bb6f60(param_1 + 0x8a0,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27cf:
      uVar7 = FUN_144bb6f60(param_1 + 0x8a8,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27d0:
      uVar7 = FUN_144bb6f60(param_1 + 0x8b0,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27d3:
      *(undefined8 *)(param_1 + 0x9f0) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27d9:
      *(undefined8 *)(param_1 + 0xa20) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27da:
      *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27db:
      uVar9 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 0x518) = uVar9;
      *(undefined8 *)(param_1 + 0x1280) = uVar9;
      return (longlong *)0x0;
    case 0x27e1:
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)param_3;
      return (longlong *)0x0;
    case 0x27e9:
      uVar7 = FUN_144bb6f60(param_1 + 0x8f8,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27ec:
      uVar7 = FUN_144bb6f60(param_1 + 0x920,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    case 0x27f0:
      uVar7 = FUN_144bb6f60(param_1 + 0x880,*(undefined8 *)param_3);
      return (longlong *)(ulonglong)uVar7;
    }
    goto switchD_144bb79ed_caseD_f4;
  }
  if (param_2 == 0x2711) {
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)param_3;
    return (longlong *)0x0;
  }
  switch(param_2) {
  case 0xd4:
    *(uint *)(param_1 + 0x6fc) = *param_3;
    break;
  case 0xd5:
    *(bool *)(param_1 + 0xada) = *param_3 != 0;
    break;
  case 0xd6:
    if ((int)*param_3 < 0) goto LAB_144bb9312;
    *(uint *)(param_1 + 0xa2c) = *param_3;
    break;
  case 0xd7:
    if ((int)*param_3 < 0) goto LAB_144bb9312;
    *(uint *)(param_1 + 0xa30) = *param_3;
    break;
  case 0xd8:
    uVar7 = *param_3;
    *(byte *)(param_1 + 0x598) = (byte)uVar7;
    *(byte *)(param_1 + 0x5ea) = (byte)uVar7 & 1;
    *(byte *)(param_1 + 0x5eb) = (byte)(uVar7 >> 1) & 1;
    *(byte *)(param_1 + 0x5ec) = (byte)(uVar7 >> 2) & 1;
    *(byte *)(param_1 + 0x5ed) = (byte)(uVar7 >> 3) & 1;
    *(byte *)(param_1 + 0x5ee) = (byte)(uVar7 >> 4) & 1;
    *(byte *)(param_1 + 0x5ef) = (byte)(uVar7 >> 5) & 1;
    break;
  default:
    goto switchD_144bb7117_caseD_4;
  case 0xda:
    *(bool *)(param_1 + 0xad9) = *param_3 != 0;
    break;
  case 0xe1:
    break;
  case 0xe2:
    *(bool *)(param_1 + 0xadc) = *param_3 != 0;
    break;
  case 0xe3:
    if ((int)*param_3 < 0) goto LAB_144bb9312;
    *(uint *)(param_1 + 0xa40) = *param_3;
    break;
  case 0xe5:
    *(byte *)(param_1 + 0xab5) = (byte)*param_3 & 1;
    break;
  case 0xe8:
    cVar4 = thunk_FUN_1452b38c0();
    if (cVar4 != '\0') {
      uVar7 = *param_3;
      *(bool *)(param_1 + 0x5a3) = uVar7 != 0;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        return (longlong *)0x0;
      }
      *(bool *)(*(longlong *)(param_1 + 0x20) + 0x253) = uVar7 != 0;
      return (longlong *)0x0;
    }
  case 0xf4:
switchD_144bb79ed_caseD_f4:
    plVar13 = (longlong *)&DAT_00000004;
    break;
  case 0xe9:
    cVar4 = thunk_FUN_144f0b960(param_1);
    if (cVar4 != '\0') {
      *(bool *)(param_1 + 0x5e9) = *param_3 != 0;
      return (longlong *)0x0;
    }
    goto switchD_144bb79ed_caseD_f4;
  case 0xea:
    *(bool *)(param_1 + 0xadd) = *param_3 != 0;
    break;
  case 0xed:
    *(bool *)(param_1 + 0xade) = *param_3 != 0;
    break;
  case 0xef:
    if (*param_3 - 1 < 0x100) {
      *(uint *)(param_1 + 0xa58) = *param_3;
    }
    break;
  case 0xf2:
    *(bool *)(param_1 + 0xab4) = *param_3 != 0;
    break;
  case 0xf5:
    *(bool *)(param_1 + 0xac7) = *param_3 != 0;
    break;
  case 0xf8:
    uVar7 = *param_3;
    *(bool *)(param_1 + 0x659) = uVar7 != 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(bool *)(*(longlong *)(param_1 + 0x20) + 0x2c1) = uVar7 != 0;
    }
    break;
  case 0xf9:
    bVar20 = (*param_3 & 3) != 0;
    *(bool *)(param_1 + 0x65a) = bVar20;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(bool *)(*(longlong *)(param_1 + 0x20) + 0x2c2) = bVar20;
    }
    break;
  case 0xfa:
    goto switchD_144bb7117_caseD_20;
  case 0x105:
    uVar7 = *param_3;
    *(byte *)(param_1 + 0x650) = (byte)uVar7;
    *(byte *)(param_1 + 0x6a2) = (byte)uVar7 & 1;
    *(byte *)(param_1 + 0x6a3) = (byte)(uVar7 >> 1) & 1;
    *(byte *)(param_1 + 0x6a4) = (byte)(uVar7 >> 2) & 1;
    *(byte *)(param_1 + 0x6a5) = (byte)(uVar7 >> 3) & 1;
    *(byte *)(param_1 + 0x6a6) = (byte)(uVar7 >> 4) & 1;
    *(byte *)(param_1 + 0x6a7) = (byte)(uVar7 >> 5) & 1;
    break;
  case 0x109:
    *(bool *)(param_1 + 0xadf) = *param_3 != 0;
    break;
  case 0x10b:
    uVar7 = *param_3;
    *(byte *)(param_1 + 0x6b3) = (byte)uVar7;
    plVar13 = (longlong *)(ulonglong)(-(uint)(((byte)uVar7 & 0xfa) != 0) & 4);
    break;
  case 0x10f:
    *(uint *)(param_1 + 0x308) = *param_3;
    break;
  case 0x112:
    *(bool *)(param_1 + 0xae1) = *param_3 != 0;
    break;
  case 0x113:
    *(bool *)(param_1 + 0xae0) = *param_3 != 0;
    break;
  case 0x116:
    *(bool *)(param_1 + 0xae3) = *param_3 != 0;
    break;
  case 0x118:
    uVar7 = *param_3;
    uVar16 = 0x200000;
    if (((int)uVar7 < 0x200001) && (uVar16 = uVar7, (int)uVar7 < 0x4000)) {
      uVar16 = 0x4000;
    }
    *(uint *)(param_1 + 0x6d0) = uVar16;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xce0));
    *(undefined8 *)(param_1 + 0xce0) = 0;
    break;
  case 0x119:
    if ((int)*param_3 < 0) goto LAB_144bb9312;
    *(uint *)(param_1 + 0xa70) = *param_3;
    break;
  case 0x11d:
    if (1 < (int)*param_3) goto LAB_144bb9312;
    *(bool *)(param_1 + 0xae8) = *param_3 != 0;
    break;
  case 0x11e:
    lVar14 = *(longlong *)(param_1 + 0xb00);
    if (lVar14 == 0) {
      lVar14 = FUN_144f17600();
      *(longlong *)(param_1 + 0xb00) = lVar14;
      if (lVar14 == 0) goto LAB_144bb80ec;
    }
    plVar8 = (longlong *)FUN_144f17ab0(lVar14,*param_3);
    plVar13 = (longlong *)((ulonglong)plVar8 & 0xffffffff);
    if ((int)plVar8 != 0) {
      return plVar8;
    }
    break;
  case 0x120:
    if ((int)*param_3 < 0) goto LAB_144bb9312;
    *(uint *)(param_1 + 0x310) = *param_3;
    break;
  case 0x122:
    *(bool *)(param_1 + 0xab0) = *param_3 != 0;
    break;
  case 299:
    if ((*param_3 & 1) != 0) {
      if (*(longlong *)(param_1 + 0xaf8) != 0) {
        return (longlong *)0x0;
      }
      lVar14 = FUN_144f188d0();
      *(longlong *)(param_1 + 0xaf8) = lVar14;
      if (lVar14 != 0) {
        return (longlong *)0x0;
      }
LAB_144bb80ec:
      return (longlong *)&DAT_0000001b;
    }
LAB_144bb8fb8:
    FUN_144f18900(param_1 + 0xaf8);
    break;
  case 0x132:
    *(bool *)(param_1 + 0xae5) = *param_3 != 0;
    break;
  case 0x133:
    *(bool *)(param_1 + 0xae6) = (*param_3 & 3) != 0;
    break;
  case 0x134:
    cVar4 = thunk_FUN_1452b38c0();
    if (cVar4 != '\0') {
      *(bool *)(param_1 + 0xae7) = *param_3 != 0;
      return (longlong *)0x0;
    }
    goto switchD_144bb79ed_caseD_f4;
  case 0x13a:
    if ((int)*param_3 < 0) goto LAB_144bb9312;
    *(uint *)(param_1 + 0x314) = *param_3;
    break;
  case 0x13b:
    *(uint *)(param_1 + 0x9ec) = *param_3;
    break;
  case 0x141:
    if ((int)*param_3 < -1) goto LAB_144bb9312;
    *(uint *)(param_1 + 0x6c0) = *param_3;
    break;
  case 0x142:
    *(bool *)(param_1 + 0xab9) = *param_3 != 0;
  }
  return plVar13;
}



// FUNCTION 144bb9c10 FUN_144bb9c10 body=220 status=ok
// SIG undefined FUN_144bb9c10(void)

undefined4 FUN_144bb9c10(char *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong lVar4;
  
  if (param_1 == (char *)0x0) {
    return 0x2b;
  }
  iVar1 = FUN_144f19540(param_1,&DAT_14997c140);
  if (iVar1 == 0) {
    *param_2 = 0;
    while( true ) {
      pcVar3 = strchr(param_1,0x2c);
      if (pcVar3 == (char *)0x0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (param_1[lVar4] != '\0');
      }
      else {
        lVar4 = (longlong)pcVar3 - (longlong)param_1;
      }
      if (lVar4 != 0) {
        lVar4 = FUN_144f0f160(param_1);
        if (lVar4 == 0) {
          return 1;
        }
        *param_2 = *param_2 | *(uint *)(lVar4 + 0x84);
      }
      if (pcVar3 == (char *)0x0) break;
      param_1 = pcVar3 + 1;
    }
    uVar2 = 0;
    if (*param_2 == 0) {
      uVar2 = 0x2b;
    }
    return uVar2;
  }
  *param_2 = 0xffffffff;
  return 0;
}



// FUNCTION 144bb9cf0 FUN_144bb9cf0 body=348 status=ok
// SIG undefined FUN_144bb9cf0(void)

undefined4 * FUN_144bb9cf0(void)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0x1b8);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 0xbab1e;
  FUN_144f1b5b0(puVar2 + 0x28,0x47);
  FUN_144f1a960(puVar2 + 0x38,0x38f,&LAB_144bbb970,&LAB_144bbb960,&DAT_144bbb950);
  iVar1 = FUN_144f0aae0(puVar2 + 0x44,0x61);
  if (iVar1 == 0) {
    FUN_144f1a730(puVar2 + 8,0);
    FUN_144f1a730(puVar2 + 0x10,0);
    FUN_144f1a730(puVar2 + 0x18,0);
    *(undefined1 *)((longlong)puVar2 + 0x1b1) = 1;
    puVar2[0x5c] = 0xffffffff;
    puVar2[0x68] = 100;
    lVar3 = WSACreateEvent();
    *(longlong *)(puVar2 + 0x6a) = lVar3;
    if (lVar3 != 0) {
      return puVar2;
    }
  }
  FUN_144f1ae20(puVar2 + 0x38,local_28);
  lVar3 = FUN_144f1ae30(local_28);
  while (lVar3 != 0) {
    FUN_144f1ac00(*(undefined8 *)(lVar3 + 0x18));
    lVar3 = FUN_144f1ae30(local_28);
  }
  FUN_144f1ac00(puVar2 + 0x38);
  FUN_144f1ac00(puVar2 + 0x28);
  FUN_144f0ab50(puVar2 + 0x44);
  (*(code *)PTR_free_14c6d9f28)(puVar2);
  return (undefined4 *)0x0;
}



// FUNCTION 144bb9e50 FUN_144bb9e50 body=575 status=ok
// SIG undefined FUN_144bb9e50(void)

undefined8 FUN_144bb9e50(int *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    uVar3 = 1;
  }
  else {
    if ((param_2 == (int *)0x0) || (*param_2 != -0x3f212453)) {
      return 2;
    }
    if (*(longlong *)(param_2 + 0x36) != 0) {
      return 7;
    }
    if (*(char *)((longlong)param_1 + 0x1b3) != '\0') {
      return 8;
    }
    if (*(char *)((longlong)param_1 + 0x1b5) != '\0') {
      if (param_1[7] != 0) {
        return 0xb;
      }
      *(undefined1 *)((longlong)param_1 + 0x1b5) = 0;
    }
    FUN_144f1a730(param_2 + 0x3b0,0);
    if (*(undefined1 **)(param_2 + 0x7a) != (undefined1 *)0x0) {
      **(undefined1 **)(param_2 + 0x7a) = 0;
    }
    *(int **)(param_2 + 0x36) = param_1;
    FUN_144bba820(param_2,0,8);
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    uVar3 = FUN_144bbab30(param_1);
    if ((int)uVar3 == 0) {
      if (param_2[0x16] != 0) {
        param_2[0x16] = 0;
      }
      if ((*(longlong *)(param_2 + 0x32) == 0) || (param_2[0x34] == 0)) {
        param_2[0x34] = 1;
        *(int **)(param_2 + 0x32) = param_1 + 0x28;
      }
      lVar2 = *(longlong *)(param_2 + 0x3a);
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 4) & 0x20) == 0)) {
        piVar4 = param_1 + 0x44;
      }
      else {
        piVar4 = (int *)(lVar2 + 0x28);
      }
      *(int **)(param_2 + 0x324) = piVar4;
      param_2[0x32a] = -1;
      param_2[0x32b] = -1;
      param_2[4] = 0;
      param_2[5] = 0;
      if (*(longlong *)(param_1 + 2) == 0) {
        param_2[6] = 0;
        param_2[7] = 0;
        *(int **)(param_1 + 2) = param_2;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 4);
        *(int **)(lVar2 + 0x10) = param_2;
        *(longlong *)(param_2 + 6) = lVar2;
      }
      *(int **)(param_1 + 4) = param_2;
      param_1[6] = param_1[6] + 1;
      param_1[7] = param_1[7] + 1;
      if (*(longlong *)(param_2 + 0x3a) != 0) {
        FUN_144bbeca0(param_2,5,2);
      }
      *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x324) + 0x58) + 0x300) = param_2[0xc0];
      *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x324) + 0x58) + 0x30c) = param_2[0xc3];
      *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x324) + 0x58) + 0xad3) =
           *(undefined1 *)((longlong)param_2 + 0xad3);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(*(longlong *)(param_2 + 0x324) + 0x40);
      plVar1 = (longlong *)(*(longlong *)(param_2 + 0x324) + 0x40);
      *plVar1 = *plVar1 + 1;
      if (*(longlong *)(*(longlong *)(param_2 + 0x324) + 0x40) < 1) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x324) + 0x40) = 0;
      }
      if (*(longlong *)(param_2 + 0x3a) != 0) {
        FUN_144bbece0(param_2,5);
      }
      return 0;
    }
  }
  return uVar3;
}



// FUNCTION 144bba090 FUN_144bba090 body=685 status=ok
// SIG undefined FUN_144bba090(void)

undefined8 FUN_144bba090(int *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong local_res8;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 != (int *)0x0) && (*param_2 == -0x3f212453)) {
    if (*(int **)(param_2 + 0x36) == (int *)0x0) {
      return 0;
    }
    if (*(int **)(param_2 + 0x36) == param_1) {
      if (*(char *)((longlong)param_1 + 0x1b3) != '\0') {
        return 8;
      }
      iVar3 = param_2[0x16];
      bVar2 = iVar3 < 0xf;
      if (iVar3 < 0xf) {
        param_1[7] = param_1[7] + -1;
        iVar3 = param_2[0x16];
      }
      if ((*(longlong *)(param_2 + 8) != 0) && (iVar3 - 9U < 6)) {
        FUN_144f16220(*(longlong *)(param_2 + 8),2);
      }
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_144bbb9d0(param_2,param_2[0x17],bVar2);
      }
      lVar4 = *(longlong *)(param_2 + 0x36);
      if ((lVar4 != 0) && ((*(longlong *)(param_2 + 0x39e) != 0 || (param_2[0x3a0] != 0)))) {
        iVar3 = FUN_144f1c600(*(undefined8 *)(lVar4 + 0xd0),param_2 + 0x3a2,lVar4 + 0xd0);
        if (iVar3 != 0) {
          FUN_144f14ad0(param_2,"Internal error clearing splay node = %d",iVar3);
        }
        lVar4 = *(longlong *)(param_2 + 0x3b6);
        while (lVar4 != 0) {
          FUN_144f1a7d0(param_2 + 0x3b0,*(undefined8 *)(param_2 + 0x3b2),0);
          lVar4 = *(longlong *)(param_2 + 0x3b6);
        }
        param_2[0x39e] = 0;
        param_2[0x39f] = 0;
        param_2[0x3a0] = 0;
      }
      if (*(longlong *)(param_2 + 10) != 0) {
        piVar6 = param_1 + 0x10;
        if (param_2[0x16] != 1) {
          piVar6 = param_1 + 0x18;
        }
        FUN_144f1a7d0(piVar6,param_2 + 10,0);
      }
      if ((param_2[0x16] != 1) && (param_2[0x16] != 0x10)) {
        FUN_144bbb980(param_1,param_2);
      }
      if (param_2[0x34] == 1) {
        param_2[0x32] = 0;
        param_2[0x33] = 0;
        param_2[0x34] = 0;
      }
      FUN_144f23730(param_2 + 0x4f8);
      param_2[0x16] = 0xf;
      FUN_144bbafb0(param_1,param_2);
      FUN_144bbac60(param_2);
      if ((((*(char *)((longlong)param_2 + 0xab2) != '\0') && (*(longlong *)(param_2 + 0x38) == 0))
          && (lVar4 = FUN_144f15fa0(param_2,&local_res8), lVar4 != -1)) && (local_res8 != 0)) {
        FUN_144f0b160(param_2,local_res8,1);
        FUN_144f0ed40(param_2,local_res8,1);
      }
      if (*(longlong *)(param_2 + 0x32a) != -1) {
        FUN_144f0b280(param_2,*(undefined8 *)(param_2 + 0x324),0,FUN_144bbbca0);
      }
      param_2[0x324] = 0;
      param_2[0x325] = 0;
      param_2[0x36] = 0;
      param_2[0x37] = 0;
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        if (plVar1 == (longlong *)0x0) {
LAB_144bba30c:
          param_1[6] = param_1[6] + -1;
          FUN_144bbb7c0(param_1);
          uVar5 = FUN_144bbab30(param_1);
          return uVar5;
        }
        if (*(int **)(*plVar1 + 0x20) == param_2) {
          FUN_144f1a7d0(param_1 + 8,plVar1,0);
          goto LAB_144bba30c;
        }
        plVar1 = (longlong *)plVar1[2];
      } while( true );
    }
  }
  return 2;
}



// FUNCTION 144bba340 FUN_144bba340 body=34 status=ok
// SIG undefined FUN_144bba340(void)

void FUN_144bba340(void)

{
  FUN_144bbbda0();
  return;
}



// FUNCTION 144bba370 FUN_144bba370 body=278 status=ok
// SIG undefined FUN_144bba370(void)

void FUN_144bba370(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined4 *)FUN_144f07150(&local_48);
  local_38 = *puVar4;
  uStack_34 = puVar4[1];
  uStack_30 = puVar4[2];
  uStack_2c = puVar4[3];
  if (((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) &&
     (*(char *)((longlong)param_1 + 0x1b3) == '\0')) {
    lVar1 = *(longlong *)(param_1 + 2);
    iVar2 = 0;
    while (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x10);
      iVar3 = FUN_144bbc7e0(param_1,&local_38);
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
    }
    do {
      local_48 = local_38;
      uStack_44 = uStack_34;
      uStack_40 = uStack_30;
      uStack_3c = uStack_2c;
      uVar5 = FUN_144f1c540(&local_48,*(undefined8 *)(param_1 + 0x34),local_58);
      *(undefined8 *)(param_1 + 0x34) = uVar5;
      if (local_58[0] == 0) break;
      local_48 = local_38;
      uStack_44 = uStack_34;
      uStack_40 = uStack_30;
      uStack_3c = uStack_2c;
      FUN_144bbb5c0(&local_48,param_1,*(undefined8 *)(local_58[0] + 0x30));
    } while (local_58[0] != 0);
    *param_2 = param_1[7];
    if (iVar2 < 1) {
      FUN_144bbab30(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 144bba490 FUN_144bba490 body=319 status=ok
// SIG undefined FUN_144bba490(void)

undefined8 FUN_144bba490(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    if (*(char *)((longlong)param_1 + 0x1b3) != '\0') {
      return 8;
    }
    *param_1 = 0;
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      *(undefined8 *)(**(longlong **)(param_1 + 0x18) + 0xd8) = 0;
    }
    FUN_144bbb7c0();
    lVar2 = *(longlong *)(param_1 + 2);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if ((*(char *)(lVar2 + 0x13cf) == '\0') && (*(longlong *)(lVar2 + 0x20) != 0)) {
        FUN_144bbb9d0(lVar2,0,1);
      }
      if (*(int *)(lVar2 + 0xd0) == 1) {
        FUN_144f1bac0(lVar2);
        *(undefined8 *)(lVar2 + 200) = 0;
        *(undefined4 *)(lVar2 + 0xd0) = 0;
      }
      *(undefined8 *)(lVar2 + 0xc90) = 0;
      *(undefined8 *)(lVar2 + 0xd8) = 0;
      lVar2 = lVar1;
    }
    FUN_144f0b5c0(param_1 + 0x44);
    FUN_144bbb900(param_1 + 0x38);
    FUN_144f0ab50(param_1 + 0x44);
    FUN_144f1ac00(param_1 + 0x28);
    WSACloseEvent(*(undefined8 *)(param_1 + 0x6a));
    FUN_144f0d460(*(undefined8 *)(param_1 + 0x36));
    (*(code *)PTR_free_14c6d9f28)(param_1);
    return 0;
  }
  return 1;
}



// FUNCTION 144bba5d0 FUN_144bba5d0 body=131 status=ok
// SIG undefined FUN_144bba5d0(void)

longlong FUN_144bba5d0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) &&
     (*(char *)((longlong)param_1 + 0x1b3) == '\0')) {
    param_1 = param_1 + 8;
    lVar2 = FUN_144f1a880(param_1);
    if (lVar2 != 0) {
      lVar2 = **(longlong **)param_1;
      FUN_144f1a7d0(param_1,*(longlong **)param_1,0);
      uVar3 = FUN_144f1a880(param_1);
      uVar1 = FUN_144f16fb0(uVar3);
      *param_2 = uVar1;
      return lVar2 + 0x18;
    }
  }
  return 0;
}



// FUNCTION 144bba660 FUN_144bba660 body=433 status=ok
// SIG undefined FUN_144bba660(void)

undefined8 FUN_144bba660(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint local_res18;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if (*(char *)((longlong)param_1 + 0x1b3) != '\0') {
    return 8;
  }
  if (param_2 < 0x271c) {
    if (param_2 == 0x271b) {
      return 0;
    }
    local_res18 = (uint)param_3;
    if (0xd < param_2) {
      if (param_2 == 0x10) {
        if ((int)local_res18 < 1) {
          local_res18 = 100;
        }
        iVar1 = FUN_144f16fe0(local_res18);
        param_1[0x68] = iVar1;
        return 0;
      }
      if (param_2 != 0x2712) {
        if (param_2 != 0x2715) {
          return 6;
        }
        *(undefined8 *)(param_1 + 0x62) = param_3;
        return 0;
      }
      *(undefined8 *)(param_1 + 0x22) = param_3;
      return 0;
    }
    if (param_2 == 0xd) {
      param_1[0x5e] = local_res18;
      return 0;
    }
    if (param_2 == 3) {
      *(byte *)((longlong)param_1 + 0x1b1) = (byte)(local_res18 >> 1) & 1;
      return 0;
    }
    if (param_2 == 6) {
      param_1[0x5c] = local_res18;
      return 0;
    }
    param_2 = param_2 + -7;
    if (param_2 == 0) {
      param_1[0x5d] = local_res18;
      return 0;
    }
  }
  else {
    if (param_2 < 0x4e25) {
      if (param_2 == 0x4e24) {
        *(undefined8 *)(param_1 + 0x60) = param_3;
        return 0;
      }
      if (param_2 == 0x271c) {
        return 0;
      }
      if (param_2 == 0x271f) {
        *(undefined8 *)(param_1 + 0x26) = param_3;
        return 0;
      }
      if (param_2 != 0x4e21) {
        return 6;
      }
      *(undefined8 *)(param_1 + 0x20) = param_3;
      return 0;
    }
    if (param_2 == 0x4e2e) {
      *(undefined8 *)(param_1 + 0x24) = param_3;
      return 0;
    }
    param_2 = param_2 + -0x7539;
    if (param_2 == 0) {
      return 0;
    }
  }
  if (param_2 == 1) {
    return 0;
  }
  return 6;
}



// FUNCTION 144bba820 FUN_144bba820 body=551 status=ok
// SIG undefined FUN_144bba820(void)

void FUN_144bba820(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    plVar6 = (longlong *)FUN_144f07150(&local_38);
    local_48 = *plVar6 + param_2 / 1000;
    uStack_40._0_4_ = (int)plVar6[1];
    uStack_40._0_4_ = ((int)param_2 + (int)(param_2 / 1000) * -1000) * 1000 + (int)uStack_40;
    uStack_40._4_4_ = (undefined4)((ulonglong)plVar6[1] >> 0x20);
    if (999999 < (int)uStack_40) {
      local_48 = local_48 + 1;
      uStack_40._0_4_ = (int)uStack_40 + -1000000;
    }
    for (plVar6 = *(longlong **)(param_1 + 0xec0); plVar6 != (longlong *)0x0;
        plVar6 = (longlong *)plVar6[2]) {
      if (*(int *)(*plVar6 + 0x28) == param_3) {
        FUN_144f1a7d0(param_1 + 0xec0,plVar6,0);
        break;
      }
    }
    uVar8 = uStack_40;
    lVar3 = local_48;
    lVar9 = (longlong)param_3 * 0x30 + param_1;
    plVar6 = (longlong *)0x0;
    *(longlong *)(lVar9 + 0xef8) = local_48;
    *(undefined8 *)(lVar9 + 0xf00) = uStack_40;
    *(int *)(lVar9 + 0xf08) = param_3;
    lVar7 = FUN_144f1a880(param_1 + 0xec0);
    if (lVar7 != 0) {
      plVar4 = *(longlong **)(param_1 + 0xec0);
      while (plVar2 = plVar4, plVar2 != (longlong *)0x0) {
        local_48 = *(longlong *)(lVar9 + 0xef8);
        uStack_40 = *(undefined8 *)(lVar9 + 0xf00);
        lVar7 = *plVar2;
        local_38 = *(undefined4 *)(lVar7 + 0x18);
        uStack_34 = *(undefined4 *)(lVar7 + 0x1c);
        uStack_30 = *(undefined4 *)(lVar7 + 0x20);
        uStack_2c = *(undefined4 *)(lVar7 + 0x24);
        lVar7 = FUN_144f071e0(&local_38,&local_48);
        if (0 < lVar7) break;
        plVar6 = plVar2;
        plVar4 = (longlong *)plVar2[2];
      }
    }
    FUN_144f1a750(param_1 + 0xec0,plVar6,lVar9 + 0xee0,lVar9 + 0xee0);
    if ((*(longlong *)(param_1 + 0xe78) != 0) || (*(int *)(param_1 + 0xe80) != 0)) {
      local_38 = *(undefined4 *)(param_1 + 0xe78);
      uStack_34 = *(undefined4 *)(param_1 + 0xe7c);
      uStack_30 = *(undefined4 *)(param_1 + 0xe80);
      uStack_2c = *(undefined4 *)(param_1 + 0xe84);
      local_48 = lVar3;
      uStack_40 = uVar8;
      lVar7 = FUN_144f071e0(&local_48,&local_38);
      if (0 < lVar7) {
        return;
      }
      iVar5 = FUN_144f1c600(*(undefined8 *)(lVar1 + 0xd0),param_1 + 0xe88,lVar1 + 0xd0);
      if (iVar5 != 0) {
        FUN_144f14ad0(param_1,"Internal error removing splay node = %d",iVar5);
      }
    }
    *(longlong *)(param_1 + 0xe78) = lVar3;
    *(undefined8 *)(param_1 + 0xe80) = uVar8;
    *(longlong *)(param_1 + 0xeb8) = param_1;
    local_38 = *(undefined4 *)(param_1 + 0xe78);
    uStack_34 = *(undefined4 *)(param_1 + 0xe7c);
    uStack_30 = *(undefined4 *)(param_1 + 0xe80);
    uStack_2c = *(undefined4 *)(param_1 + 0xe84);
    uVar8 = FUN_144f1c450(&local_38,*(undefined8 *)(lVar1 + 0xd0),param_1 + 0xe88);
    *(undefined8 *)(lVar1 + 0xd0) = uVar8;
  }
  return;
}



// FUNCTION 144bbaa50 FUN_144bbaa50 body=170 status=ok
// SIG undefined FUN_144bbaa50(void)

void FUN_144bbaa50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if ((lVar1 != 0) && ((*(longlong *)(param_1 + 0xe78) != 0 || (*(int *)(param_1 + 0xe80) != 0)))) {
    iVar2 = FUN_144f1c600(*(undefined8 *)(lVar1 + 0xd0),param_1 + 0xe88,lVar1 + 0xd0);
    if (iVar2 != 0) {
      FUN_144f14ad0(param_1,"Internal error clearing splay node = %d",iVar2);
    }
    lVar1 = *(longlong *)(param_1 + 0xed8);
    while (lVar1 != 0) {
      FUN_144f1a7d0(param_1 + 0xec0,*(undefined8 *)(param_1 + 0xec8),0);
      lVar1 = *(longlong *)(param_1 + 0xed8);
    }
    *(undefined8 *)(param_1 + 0xe78) = 0;
    *(undefined4 *)(param_1 + 0xe80) = 0;
  }
  return;
}



// FUNCTION 144bbab00 FUN_144bbab00 body=46 status=ok
// SIG undefined FUN_144bbab00(void)

void FUN_144bbab00(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xec0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  do {
    if (*(int *)(*plVar1 + 0x28) == param_2) {
      FUN_144f1a7d0((longlong *)(param_1 + 0xec0),plVar1,0);
      return;
    }
    plVar1 = (longlong *)plVar1[2];
  } while (plVar1 != (longlong *)0x0);
  return;
}



// FUNCTION 144bbab30 FUN_144bbab30 body=207 status=ok
// SIG undefined FUN_144bbab30(void)

undefined8 FUN_144bbab30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_res8 [8];
  
  if (((*(longlong *)(param_1 + 0x180) != 0) && (*(char *)(param_1 + 0x1b5) == '\0')) &&
     (iVar2 = FUN_144bbb6d0(param_1,local_res8), iVar2 == 0)) {
    if (local_res8[0] < 0) {
      if (((*(longlong *)(param_1 + 400) == 0) && (*(int *)(param_1 + 0x198) < 1)) &&
         (-1 < *(int *)(param_1 + 0x198))) {
        return 0;
      }
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      local_res8[0] = -1;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      if ((*(longlong *)(param_1 + 400) <= *(longlong *)(lVar1 + 0x20)) &&
         (*(longlong *)(lVar1 + 0x20) <= *(longlong *)(param_1 + 400))) {
        if ((*(int *)(param_1 + 0x198) <= *(int *)(lVar1 + 0x28)) &&
           (*(int *)(lVar1 + 0x28) <= *(int *)(param_1 + 0x198))) {
          return 0;
        }
      }
      uVar3 = *(undefined4 *)(lVar1 + 0x20);
      uVar4 = *(undefined4 *)(lVar1 + 0x24);
      uVar5 = *(undefined4 *)(lVar1 + 0x28);
      uVar6 = *(undefined4 *)(lVar1 + 0x2c);
    }
    *(undefined1 *)(param_1 + 0x1b3) = 1;
    *(undefined4 *)(param_1 + 400) = uVar3;
    *(undefined4 *)(param_1 + 0x194) = uVar4;
    *(undefined4 *)(param_1 + 0x198) = uVar5;
    *(undefined4 *)(param_1 + 0x19c) = uVar6;
    iVar2 = (**(code **)(param_1 + 0x180))(param_1,local_res8[0],*(undefined8 *)(param_1 + 0x188));
    *(undefined1 *)(param_1 + 0x1b3) = 0;
    if (iVar2 == -1) {
      *(undefined1 *)(param_1 + 0x1b5) = 1;
      return 0xb;
    }
  }
  return 0;
}



// FUNCTION 144bbac00 FUN_144bbac00 body=96 status=ok
// SIG undefined FUN_144bbac00(void)

void FUN_144bbac00(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  *(longlong *)(param_1 + 0x20) = param_2;
  FUN_144f1a750(param_2 + 0x318,*(undefined8 *)(param_2 + 800),param_1,param_1 + 0x40);
  if ((*(longlong *)(param_2 + 0x2e8) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_2 + 0x2e8) + 0x78), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,param_2);
  }
  FUN_144f14310(param_2,param_1);
  return;
}



// FUNCTION 144bbac60 FUN_144bbac60 body=90 status=ok
// SIG undefined FUN_144bbac60(void)

void FUN_144bbac60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_144f143a0(lVar1,param_1);
    FUN_144f1a7d0(lVar1 + 0x318,param_1 + 0x40,0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 144bbacc0 FUN_144bbacc0 body=20 status=ok
// SIG undefined FUN_144bbacc0(void)

undefined1 FUN_144bbacc0(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x1b1) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 144bbace0 FUN_144bbace0 body=36 status=ok
// SIG undefined FUN_144bbace0(void)

void FUN_144bbace0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xe0), lVar1 != 0 ||
      (lVar1 = *(longlong *)(param_1 + 0xd8), lVar1 != 0)))) {
    *(undefined1 *)(lVar1 + 0x1b3) = param_2;
  }
  return;
}



// FUNCTION 144bbad10 FUN_144bbad10 body=48 status=ok
// SIG undefined FUN_144bbad10(void)

ulonglong FUN_144bbad10(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  if (((uVar1 == 0) || (*(char *)(uVar1 + 0x1b3) == '\0')) &&
     ((uVar1 = *(ulonglong *)(param_1 + 0xe0), uVar1 == 0 || (*(char *)(uVar1 + 0x1b3) == '\0')))) {
    return uVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 144bbad40 FUN_144bbad40 body=69 status=ok
// SIG undefined FUN_144bbad40(void)

undefined8 FUN_144bbad40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xcd8) == 0) {
    lVar1 = (*(code *)PTR_malloc_14c6d9f20)(*(int *)(param_1 + 0x6cc) + 1);
    uVar2 = 0;
    *(longlong *)(param_1 + 0xcd8) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 144bbad90 FUN_144bbad90 body=8 status=ok
// SIG undefined FUN_144bbad90(void)

void FUN_144bbad90(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1b2) = 1;
  return;
}



// FUNCTION 144bbada0 FUN_144bbada0 body=18 status=ok
// SIG undefined FUN_144bbada0(void)

longlong FUN_144bbada0(longlong param_1)

{
  if (param_1 != 0) {
    return (longlong)*(int *)(param_1 + 0x174);
  }
  return 0;
}



// FUNCTION 144bbadc0 FUN_144bbadc0 body=18 status=ok
// SIG undefined FUN_144bbadc0(void)

longlong FUN_144bbadc0(longlong param_1)

{
  if (param_1 != 0) {
    return (longlong)*(int *)(param_1 + 0x178);
  }
  return 0;
}



// FUNCTION 144bbade0 FUN_144bbade0 body=26 status=ok
// SIG undefined FUN_144bbade0(void)

void FUN_144bbade0(longlong param_1,undefined4 param_2)

{
  **(undefined4 **)(*(longlong *)(param_1 + 0x20) + 0x4a0) = param_2;
  FUN_144bbb7c0(*(undefined8 *)(param_1 + 0xd8));
  return;
}



// FUNCTION 144bbae00 FUN_144bbae00 body=239 status=ok
// SIG undefined FUN_144bbae00(void)

void FUN_144bbae00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  longlong local_res18 [2];
  
  if ((((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0xd8), lVar1 != 0)) && (param_2 != -1))
     && (local_res8 = param_2, lVar3 = FUN_144f1ab60(lVar1 + 0xe0,&local_res8,8), lVar3 != 0)) {
    iVar2 = 0;
    if (*(code **)(lVar1 + 0x80) != (code *)0x0) {
      *(undefined1 *)(lVar1 + 0x1b3) = 1;
      iVar2 = (**(code **)(lVar1 + 0x80))
                        (param_1,param_2,4,*(undefined8 *)(lVar1 + 0x88),
                         *(undefined8 *)(lVar3 + 0x38));
      *(undefined1 *)(lVar1 + 0x1b3) = 0;
    }
    local_res18[0] = param_2;
    FUN_144f1ac00(lVar3);
    FUN_144f1aab0(lVar1 + 0xe0,local_res18,8);
    if (iVar2 == -1) {
      *(undefined1 *)(lVar1 + 0x1b5) = 1;
    }
  }
  return;
}



// FUNCTION 144bbaef0 FUN_144bbaef0 body=175 status=ok
// SIG undefined FUN_144bbaef0(void)

int FUN_144bbaef0(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1b3) != '\0') {
    return 8;
  }
  iVar2 = FUN_144bb9e50();
  if (iVar2 == 0) {
    FUN_144f0e1b0(param_2,0);
    if (*(int *)(param_2 + 0x58) != 0xc) {
      *(undefined4 *)(param_2 + 0x58) = 0xc;
    }
    *(longlong *)(param_2 + 0x20) = param_3;
    FUN_144f1a750(param_3 + 0x318,*(undefined8 *)(param_3 + 800),param_2,param_2 + 0x40);
    if ((*(longlong *)(param_3 + 0x2e8) != 0) &&
       (pcVar1 = *(code **)(*(longlong *)(param_3 + 0x2e8) + 0x78), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_2,param_3);
    }
    FUN_144f14310(param_3,param_2);
    *(uint *)(param_2 + 0x154) = *(uint *)(param_2 + 0x154) | 1;
  }
  return iVar2;
}



// FUNCTION 144bbafa0 FUN_144bbafa0 body=7 status=ok
// SIG undefined FUN_144bbafa0(void)

undefined4 FUN_144bbafa0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}



// FUNCTION 144bbafb0 FUN_144bbafb0 body=1493 status=ok
// SIG undefined FUN_144bbafb0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144bbafb0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  size_t _Size;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  char local_b8;
  uint local_b4;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  byte *local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78 [6];
  byte local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78[1] = 0xffffffffffffffff;
  local_78[2] = 0xffffffffffffffff;
  local_78[3] = 0xffffffffffffffff;
  local_78[4] = 0xffffffffffffffff;
  local_78[5] = 0xffffffffffffffff;
  lVar11 = *(longlong *)(param_2 + 0x20);
  local_b0 = param_2;
  local_a0 = param_1;
  if (lVar11 == 0) {
switchD_144bbb039_default:
    local_b4 = 0;
  }
  else {
    switch(*(undefined4 *)(param_2 + 0x58)) {
    case 3:
      local_b4 = FUN_144f1c080(param_2,local_78 + 1);
      break;
    case 4:
    case 5:
      local_b4 = FUN_144f141f0(param_2,0);
      break;
    case 6:
    case 7:
      pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x2e8) + 0x40);
      if (pcVar1 == (code *)0x0) {
        local_b4 = FUN_144f141f0(param_2,0);
      }
      else {
        local_b4 = (*pcVar1)();
      }
      break;
    case 8:
    case 9:
      pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x2e8) + 0x48);
      if (pcVar1 == (code *)0x0) goto switchD_144bbb039_default;
      local_b4 = (*pcVar1)();
      break;
    case 10:
      pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x2e8) + 0x50);
      if (pcVar1 == (code *)0x0) goto switchD_144bbb039_default;
      local_b4 = (*pcVar1)();
      break;
    case 0xb:
    case 0xc:
      local_b4 = FUN_144f245b0();
      break;
    default:
      goto switchD_144bbb039_default;
    }
  }
  local_98 = local_48;
  local_80 = local_78 + 1;
  local_a8 = 0;
  do {
    uVar12 = local_a8 + 0x10;
    uVar9 = 1 << ((byte)local_a8 & 0x1f);
    if ((local_b4 & (uVar9 | 1 << (uVar12 & 0x1f))) == 0) break;
    lVar11 = *local_80;
    param_1 = param_1 + 0xe0;
    bVar13 = 0;
    local_b8 = '\0';
    local_78[0] = lVar11;
    if (lVar11 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_144f1ab60(param_1,local_78,8);
    }
    cVar10 = '\0';
    bVar14 = (local_b4 & uVar9) != 0;
    bVar2 = bVar14 | 2;
    if ((local_b4 >> (uVar12 & 0x1f) & 1) == 0) {
      bVar2 = bVar14;
    }
    *local_98 = bVar2;
    if (lVar4 == 0) {
      local_90 = lVar11;
      local_88 = lVar11;
      if ((lVar11 == -1) || (lVar4 = FUN_144f1ab60(param_1,&local_90,8), lVar4 == 0)) {
        lVar4 = (*(code *)PTR_calloc_14c6d9f40)(1);
        if (lVar4 == 0) goto LAB_144bbb54f;
        local_c8 = &DAT_144bbb8f0;
        FUN_144f1a960(lVar4,0xd,&LAB_144bbb8d0,&LAB_144bbb8e0);
        lVar8 = FUN_144f1a980(param_1,&local_88,8,lVar4);
        if (lVar8 == 0) {
          FUN_144f1ac00(lVar4);
          (*(code *)PTR_free_14c6d9f28)(lVar4);
          goto LAB_144bbb54f;
        }
      }
LAB_144bbb2c1:
      *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
      if ((bVar2 & 1) != 0) {
        *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
      }
      if ((bVar2 & 2) != 0) {
        *(int *)(lVar4 + 0x44) = *(int *)(lVar4 + 0x44) + 1;
      }
      lVar8 = FUN_144f1a980(lVar4,&local_b0,8,local_b0);
      if (lVar8 == 0) {
        FUN_144f1ac00(lVar4);
        goto LAB_144bbb54f;
      }
      uVar9 = (uint)(*(int *)(lVar4 + 0x40) != 0) | -(uint)(*(int *)(lVar4 + 0x44) != 0) & 2;
      if (local_b8 != '\0') goto LAB_144bbb324;
LAB_144bbb35e:
      param_1 = local_a0;
      if (*(code **)(local_a0 + 0x80) != (code *)0x0) {
        *(undefined1 *)(local_a0 + 0x1b3) = 1;
        local_c8 = *(undefined **)(lVar4 + 0x38);
        iVar7 = (**(code **)(local_a0 + 0x80))
                          (local_b0,lVar11,uVar9,*(undefined8 *)(local_a0 + 0x88));
        *(undefined1 *)(param_1 + 0x1b3) = 0;
        if (iVar7 == -1) goto LAB_144bbb586;
      }
      *(uint *)(lVar4 + 0x30) = uVar9;
    }
    else {
      lVar8 = 0;
      if (0 < (longlong)*(int *)(local_b0 + 0xc0)) {
        plVar5 = (longlong *)(local_b0 + 0x90);
        do {
          if (lVar11 == *plVar5) {
            cVar10 = '\x01';
            bVar13 = *(byte *)(lVar8 + 0xb8 + local_b0);
            break;
          }
          lVar8 = lVar8 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar8 < *(int *)(local_b0 + 0xc0));
      }
      local_b8 = cVar10;
      if (cVar10 == '\0') goto LAB_144bbb2c1;
      if (bVar13 != bVar2) {
        iVar7 = *(int *)(lVar4 + 0x40);
        if ((bVar13 & 1) != 0) {
          iVar7 = iVar7 + -1;
          *(int *)(lVar4 + 0x40) = iVar7;
        }
        iVar3 = *(int *)(lVar4 + 0x44);
        if ((bVar13 & 2) != 0) {
          iVar3 = iVar3 + -1;
          *(int *)(lVar4 + 0x44) = iVar3;
        }
        if ((bVar2 & 1) != 0) {
          *(int *)(lVar4 + 0x40) = iVar7 + 1;
        }
        if ((bVar2 & 2) != 0) {
          *(int *)(lVar4 + 0x44) = iVar3 + 1;
        }
      }
      uVar9 = -(uint)(*(int *)(lVar4 + 0x44) != 0) & 2 | (uint)(*(int *)(lVar4 + 0x40) != 0);
LAB_144bbb324:
      param_1 = local_a0;
      if (*(uint *)(lVar4 + 0x30) != uVar9) goto LAB_144bbb35e;
    }
    local_a8 = local_a8 + 1;
    local_98 = local_98 + 1;
    local_80 = local_80 + 1;
  } while (local_a8 < 5);
  iVar7 = 0;
  _Size = (size_t)local_a8;
  if (0 < *(int *)(local_b0 + 0xc0)) {
    lVar4 = 0;
    lVar11 = 0x90;
    do {
      param_1 = local_a0;
      lVar8 = *(longlong *)(lVar11 + local_b0);
      lVar6 = 0;
      if (0 < (longlong)_Size) {
        do {
          if (lVar8 == local_78[lVar6 + 1]) goto LAB_144bbb4f2;
          lVar6 = lVar6 + 1;
        } while (lVar6 < (longlong)_Size);
      }
      local_88 = lVar8;
      if ((lVar8 != -1) && (lVar6 = FUN_144f1ab60(local_a0 + 0xe0,&local_88,8), lVar6 != 0)) {
        bVar13 = *(byte *)(local_b0 + 0xb8 + lVar4);
        iVar3 = *(int *)(lVar6 + 0x34) + -1;
        *(int *)(lVar6 + 0x34) = iVar3;
        if ((bVar13 & 2) != 0) {
          *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + -1;
        }
        if ((bVar13 & 1) != 0) {
          *(int *)(lVar6 + 0x40) = *(int *)(lVar6 + 0x40) + -1;
        }
        if (iVar3 == 0) {
          if (*(code **)(param_1 + 0x80) != (code *)0x0) {
            *(undefined1 *)(param_1 + 0x1b3) = 1;
            local_c8 = *(undefined **)(lVar6 + 0x38);
            iVar3 = (**(code **)(param_1 + 0x80))(local_b0,lVar8,4,*(undefined8 *)(param_1 + 0x88));
            *(undefined1 *)(param_1 + 0x1b3) = 0;
            if (iVar3 == -1) goto LAB_144bbb586;
          }
          local_90 = lVar8;
          FUN_144f1ac00(lVar6);
          plVar5 = &local_90;
          lVar6 = param_1 + 0xe0;
        }
        else {
          plVar5 = &local_b0;
        }
        FUN_144f1aab0(lVar6,plVar5,8);
      }
LAB_144bbb4f2:
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar7 < *(int *)(local_b0 + 0xc0));
  }
  memcpy((void *)(local_b0 + 0x90),local_78 + 1,_Size * 8);
  memcpy((void *)(local_b0 + 0xb8),local_48,_Size);
  *(int *)(local_b0 + 0xc0) = local_a8;
LAB_144bbb54f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
LAB_144bbb586:
  *(undefined1 *)(param_1 + 0x1b5) = 1;
  goto LAB_144bbb54f;
}



// FUNCTION 144bbb5c0 FUN_144bbb5c0 body=264 status=ok
// SIG undefined FUN_144bbb5c0(void)

undefined8 FUN_144bbb5c0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar8 = 0;
  plVar5 = *(longlong **)(param_3 + 0xec0);
  while (plVar5 != (longlong *)0x0) {
    lVar8 = *plVar5;
    local_38 = *param_1;
    uStack_34 = param_1[1];
    uStack_30 = param_1[2];
    uStack_2c = param_1[3];
    plVar1 = (longlong *)plVar5[2];
    local_28 = *(undefined4 *)(lVar8 + 0x18);
    uStack_24 = *(undefined4 *)(lVar8 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar8 + 0x20);
    uStack_1c = *(undefined4 *)(lVar8 + 0x24);
    lVar6 = FUN_144f072b0(&local_28,&local_38);
    if (0 < lVar6) break;
    FUN_144f1a7d0(param_3 + 0xec0,plVar5,0);
    plVar5 = plVar1;
  }
  if (*(longlong *)(param_3 + 0xec0) == 0) {
    *(undefined8 *)(param_3 + 0xe78) = 0;
    *(undefined4 *)(param_3 + 0xe80) = 0;
    return 0;
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x1c);
  uVar3 = *(undefined4 *)(lVar8 + 0x20);
  uVar4 = *(undefined4 *)(lVar8 + 0x24);
  *(undefined4 *)(param_3 + 0xe78) = *(undefined4 *)(lVar8 + 0x18);
  *(undefined4 *)(param_3 + 0xe7c) = uVar2;
  *(undefined4 *)(param_3 + 0xe80) = uVar3;
  *(undefined4 *)(param_3 + 0xe84) = uVar4;
  local_28 = *(undefined4 *)(lVar8 + 0x18);
  uStack_24 = *(undefined4 *)(lVar8 + 0x1c);
  uStack_20 = *(undefined4 *)(lVar8 + 0x20);
  uStack_1c = *(undefined4 *)(lVar8 + 0x24);
  uVar7 = FUN_144f1c450(&local_28,*(undefined8 *)(param_2 + 0xd0),param_3 + 0xe88);
  *(undefined8 *)(param_2 + 0xd0) = uVar7;
  return 0;
}



// FUNCTION 144bbb6d0 FUN_144bbb6d0 body=236 status=ok
// SIG undefined FUN_144bbb6d0(void)

undefined8 FUN_144bbb6d0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 0x1b5) != '\0') {
    *param_2 = 0;
    return 0;
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar4 = (longlong *)FUN_144f07150(&local_28);
    lVar1 = *plVar4;
    lVar2 = plVar4[1];
    local_38 = 0;
    lStack_30 = 0;
    lVar5 = FUN_144f1c340(&local_38,*(undefined8 *)(param_1 + 0xd0));
    *(longlong *)(param_1 + 0xd0) = lVar5;
    if ((lVar1 <= *(longlong *)(lVar5 + 0x20)) &&
       ((lVar1 < *(longlong *)(lVar5 + 0x20) || ((int)lVar2 < *(int *)(lVar5 + 0x28))))) {
      local_28 = *(undefined8 *)(lVar5 + 0x20);
      uStack_20 = *(undefined8 *)(lVar5 + 0x28);
      local_38 = lVar1;
      lStack_30 = lVar2;
      uVar3 = FUN_144f07240(&local_28,&local_38);
      *param_2 = uVar3;
      return 0;
    }
    *param_2 = 0;
    return 0;
  }
  *param_2 = 0xffffffff;
  return 0;
}



// FUNCTION 144bbb7c0 FUN_144bbb7c0 body=141 status=ok
// SIG undefined FUN_144bbb7c0(void)

void FUN_144bbb7c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(longlong *)(param_1 + 8) = lVar2;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x10);
      *(longlong *)(lVar3 + 0x10) = lVar2;
      *(longlong *)(lVar2 + 0x18) = lVar3;
    }
    *(longlong *)(param_1 + 0x10) = lVar2;
    if (*(int *)(lVar2 + 0x58) != 2) {
      *(undefined4 *)(lVar2 + 0x58) = 2;
      FUN_144f239a0(lVar2);
    }
    FUN_144f1a7d0(param_1 + 0x40,plVar1,0);
    FUN_144bba820(lVar2,0,8);
    *(undefined1 *)(lVar2 + 0x13d0) = 1;
  }
  return;
}



// FUNCTION 144bbb850 FUN_144bbb850 body=35 status=ok
// SIG undefined FUN_144bbb850(void)

void FUN_144bbb850(longlong param_1)

{
  undefined1 local_18 [24];
  
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  FUN_144f25fd0(local_18,param_1,6);
  return;
}



// FUNCTION 144bbb880 FUN_144bbb880 body=78 status=ok
// SIG undefined FUN_144bbb880(void)

void FUN_144bbb880(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_144f143a0(lVar1,param_1);
    FUN_144f1a7d0(lVar1 + 0x318,param_1 + 0x40,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_144bbaa50(param_1);
  return;
}



// FUNCTION 144bbb900 FUN_144bbb900 body=72 status=ok
// SIG undefined FUN_144bbb900(void)

void FUN_144bbb900(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_28 [32];
  
  FUN_144f1ae20(param_1,local_28);
  lVar1 = FUN_144f1ae30(local_28);
  while (lVar1 != 0) {
    FUN_144f1ac00(*(undefined8 *)(lVar1 + 0x18));
    lVar1 = FUN_144f1ae30(local_28);
  }
  FUN_144f1ac00(param_1);
  return;
}



// FUNCTION 144bbb980 FUN_144bbb980 body=69 status=ok
// SIG undefined FUN_144bbb980(void)

void FUN_144bbb980(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 144bbb9d0 FUN_144bbb9d0 body=706 status=ok
// SIG undefined FUN_144bbb9d0(void)

void FUN_144bbb9d0(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x13cf) == '\0') {
    FUN_144f073a0();
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    if ((param_2 < 0x2b) && ((0x40004800000U >> ((longlong)(int)param_2 & 0x3fU) & 1) != 0)) {
      param_3 = '\x01';
    }
    pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x2e8) + 0x18);
    if (pcVar2 != (code *)0x0) {
      param_2 = (*pcVar2)(param_1,param_2,param_3);
    }
    if (param_2 != 0x2a) {
      FUN_144f25a50(param_1);
    }
    FUN_144f14600(param_1,param_3);
    FUN_144bbb7c0(*(undefined8 *)(param_1 + 0xd8));
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xce0));
    *(undefined8 *)(param_1 + 0xce0) = 0;
    FUN_144f14e10(param_1);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbeca0(param_1,5,2);
    }
    FUN_144bbac60(param_1);
    if (*(longlong *)(lVar1 + 0x330) == 0) {
      *(undefined1 *)(param_1 + 0x13cf) = 1;
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        FUN_144f1b540(param_1);
        *(undefined8 *)(lVar1 + 0x50) = 0;
      }
      FUN_144f1b5e0(param_1);
      *(undefined8 *)(param_1 + 0xcb0) = *(undefined8 *)(lVar1 + 0x48);
      if ((((*(char *)(param_1 + 0xad1) == '\0') || (*(int *)(lVar1 + 0x348) == 2)) ||
          (*(int *)(lVar1 + 0x34c) == 2)) &&
         ((*(char *)(lVar1 + 0x2ce) == '\0' &&
          ((param_3 == '\0' || (cVar4 = FUN_144f140c0(lVar1,0), cVar4 != '\0')))))) {
        if (*(char *)(lVar1 + 0x2c9) == '\0') {
          if (*(char *)(lVar1 + 0x2c8) == '\0') {
            if (*(char *)(lVar1 + 0x2d1) == '\0') {
              local_148 = *(undefined8 *)(lVar1 + 0x78);
            }
            else {
              local_148 = *(undefined8 *)(lVar1 + 0xa8);
            }
          }
          else {
            local_148 = *(undefined8 *)(lVar1 + 0x100);
          }
        }
        else {
          local_148 = *(undefined8 *)(lVar1 + 200);
        }
        uVar3 = *(undefined8 *)(lVar1 + 0x48);
        FUN_144f2b7e0(local_138,0x100,"Connection #%I64d to host %s left intact",uVar3);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_144bbece0(param_1,5);
        }
        cVar4 = FUN_144f0acd0(param_1,lVar1);
        if (cVar4 == '\0') {
          *(undefined8 *)(param_1 + 0xca8) = 0xffffffffffffffff;
        }
        else {
          *(undefined8 *)(param_1 + 0xca8) = uVar3;
          *(undefined8 *)(param_1 + 0xcb0) = uVar3;
          FUN_144f14ad0(param_1,&DAT_149972340,local_138);
        }
      }
      else {
        FUN_144f16220(lVar1,1);
        FUN_144f0b160(param_1,lVar1,0);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_144bbece0(param_1,5);
        }
        FUN_144f0ed40(param_1,lVar1,param_3);
      }
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0xcd8));
      *(undefined8 *)(param_1 + 0xcd8) = 0;
    }
    else if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_144bbece0(param_1,5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 144bbbca0 FUN_144bbbca0 body=59 status=ok
// SIG undefined FUN_144bbbca0(void)

undefined8 FUN_144bbbca0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xca8) != *(longlong *)(param_2 + 0x48)) {
    return 0;
  }
  if (*(char *)(param_2 + 0x4da) != '\0') {
    FUN_144f16220(param_2,1);
  }
  return 1;
}



// FUNCTION 144bbbce0 FUN_144bbbce0 body=141 status=ok
// SIG undefined FUN_144bbbce0(void)

undefined8 FUN_144bbbce0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return 0;
  }
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 3:
    uVar2 = FUN_144f1c080(param_1,param_2);
    return uVar2;
  case 4:
  case 5:
    goto LAB_144bbbd45;
  case 6:
  case 7:
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 0x2e8) + 0x40);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bbbd29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,lVar1,param_2);
      return uVar2;
    }
LAB_144bbbd45:
    uVar2 = FUN_144f141f0(param_1,0,param_2);
    return uVar2;
  case 8:
  case 9:
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 0x2e8) + 0x48);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bbbd3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,lVar1,param_2);
      return uVar2;
    }
    break;
  case 10:
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 0x2e8) + 0x50);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bbbd5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,lVar1,param_2);
      return uVar2;
    }
    break;
  case 0xb:
  case 0xc:
    uVar2 = FUN_144f245b0(param_1,lVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144bbbda0 FUN_144bbbda0 body=1990 status=ok
// SIG undefined FUN_144bbbda0(void)

void FUN_144bbbda0(int *param_1,undefined8 *param_2,uint param_3,uint param_4,int *param_5,
                  char param_6,char param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ushort uVar13;
  longlong *plVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  code *pcVar20;
  uint uVar21;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  char local_198;
  uint local_194;
  int local_190;
  uint local_18c;
  uint local_188 [2];
  undefined1 *local_180;
  uint local_178;
  int local_174;
  int local_170 [2];
  undefined8 *local_168;
  int *local_160;
  int *local_158;
  uint local_150 [12];
  longlong local_120 [5];
  undefined1 local_f8 [160];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_158 = param_5;
  local_180 = local_f8;
  local_188[0] = 0;
  local_190 = 0;
  local_198 = '\0';
  local_18c = param_3;
  local_178 = param_4;
  local_168 = param_2;
  local_160 = param_1;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) ||
      (*(char *)((longlong)param_1 + 0x1b3) != '\0')) || ((int)param_4 < 0)) goto LAB_144bbbf0c;
  uVar21 = local_188[0];
  for (lVar2 = *(longlong *)(param_1 + 2); local_188[0] = uVar21, lVar2 != 0;
      lVar2 = *(longlong *)(lVar2 + 0x10)) {
    uVar7 = FUN_144bbbce0(lVar2,local_120);
    plVar17 = local_120;
    uVar8 = 1;
    uVar18 = 0;
    do {
      if (((uVar7 & (uVar8 | 1 << (uVar18 + 0x10 & 0x1f))) == 0) || (*plVar17 == -1)) break;
      uVar21 = uVar21 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar18 = uVar18 + 1;
      plVar17 = plVar17 + 1;
    } while (uVar18 < 5);
  }
  FUN_144bbb6d0(param_1,&local_194);
  if ((-1 < (int)local_194) && (local_178 = param_4, (int)local_194 < (int)param_4)) {
    local_178 = local_194;
  }
  uVar7 = param_3 + uVar21 + 1;
  if (param_7 == '\0') {
    uVar7 = param_3 + uVar21;
  }
  if (10 < uVar7) {
    local_180 = (undefined1 *)(*(code *)PTR_malloc_14c6d9f20)();
    if (local_180 == (undefined1 *)0x0) goto LAB_144bbbf0c;
    local_198 = '\x01';
  }
  uVar19 = 0;
  local_194 = 0;
  if (uVar21 != 0) {
    for (lVar2 = *(longlong *)(param_1 + 2); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
      uVar21 = FUN_144bbbce0(lVar2,local_120);
      uVar7 = 0;
      plVar17 = local_120;
      do {
        uVar8 = 1 << ((byte)uVar7 & 0x1f);
        if (((uVar21 & (uVar8 | 1 << (uVar7 + 0x10 & 0x1f))) == 0) || (*plVar17 == -1)) break;
        local_194 = (int)uVar19 + 1;
        plVar14 = (longlong *)(local_180 + uVar19 * 0x10);
        *plVar14 = *plVar17;
        *(undefined2 *)(plVar14 + 1) = 0;
        if ((uVar21 & uVar8) != 0) {
          *(undefined2 *)(plVar14 + 1) = 0x300;
        }
        if ((uVar21 >> (uVar7 + 0x10 & 0x1f) & 1) != 0) {
          lVar3 = *plVar17;
          local_1a8 = &local_174;
          local_174 = 4;
          iVar9 = Ordinal_7(lVar3,0xffff,0x1008,local_170);
          if ((iVar9 == 0) && (local_170[0] == 1)) {
            Ordinal_19(lVar3,0,0,0);
          }
          *(ushort *)(plVar14 + 1) = *(ushort *)(plVar14 + 1) | 0x10;
        }
        puVar16 = local_180;
        iVar9 = WSAEventSelect(*plVar17,*(undefined8 *)(local_160 + 0x6a));
        if (iVar9 != 0) {
          if (local_198 != '\0') {
            (*(code *)PTR_free_14c6d9f28)(puVar16);
          }
          goto LAB_144bbbf0c;
        }
        uVar19 = (ulonglong)local_194;
        uVar7 = uVar7 + 1;
        plVar17 = plVar17 + 1;
      } while (uVar7 < 5);
      param_2 = local_168;
      param_1 = local_160;
      uVar21 = local_188[0];
      param_3 = local_18c;
    }
  }
  uVar7 = 0;
  piVar1 = param_1 + 0x6a;
  if (param_3 != 0) {
    puVar15 = (ushort *)(param_2 + 1);
    do {
      if ((*puVar15 & 4) != 0) {
        uVar4 = *(undefined8 *)(puVar15 + -4);
        local_1a8 = local_170;
        local_170[0] = 4;
        iVar9 = Ordinal_7(uVar4,0xffff,0x1008);
        param_3 = local_18c;
        if ((iVar9 == 0) && (local_174 == 1)) {
          Ordinal_19(uVar4,0,0);
          param_3 = local_18c;
        }
      }
      iVar9 = WSAEventSelect(*(undefined8 *)(puVar15 + -4),*(undefined8 *)piVar1);
      if (iVar9 != 0) {
        if (local_198 != '\0') {
          (*(code *)PTR_free_14c6d9f28)(local_180);
        }
        goto LAB_144bbbf0c;
      }
      puVar12 = (undefined8 *)(local_180 + (ulonglong)local_194 * 0x10);
      *puVar12 = *(undefined8 *)(puVar15 + -4);
      uVar6 = 0;
      *(undefined2 *)(puVar12 + 1) = 0;
      if ((*puVar15 & 1) != 0) {
        *(undefined2 *)(puVar12 + 1) = 0x300;
        uVar6 = 0x300;
      }
      if ((*puVar15 & 2) != 0) {
        uVar6 = uVar6 | 0x400;
        *(ushort *)(puVar12 + 1) = uVar6;
      }
      if ((*puVar15 & 4) != 0) {
        *(ushort *)(puVar12 + 1) = uVar6 | 0x10;
      }
      local_194 = local_194 + 1;
      uVar7 = uVar7 + 1;
      puVar15 = puVar15 + 8;
    } while (uVar7 < param_3);
  }
  puVar16 = local_180;
  iVar9 = 0;
  if (local_194 == 0) {
    if (param_7 != '\0') {
LAB_144bbc21d:
      local_1a8 = (int *)((ulonglong)local_1a8 & 0xffffffff00000000);
      WSAWaitForMultipleEvents(1,piVar1,0,local_178);
      iVar10 = local_190;
      goto LAB_144bbc237;
    }
  }
  else {
    iVar9 = FUN_144f26d10(local_180,local_194);
    if (iVar9 < 0) goto LAB_144bbbf0c;
    iVar10 = iVar9;
    if (iVar9 < 1) goto LAB_144bbc21d;
LAB_144bbc237:
    local_190 = iVar10;
    uVar7 = 0;
    if (param_3 != 0) {
      do {
        uVar4 = *local_168;
        uVar8 = (uint)*(short *)(puVar16 + (ulonglong)(uVar21 + uVar7) * 0x10 + 10);
        uVar6 = 0;
        local_150[0] = 0;
        iVar10 = WSAEnumNetworkEvents(uVar4,0,local_150);
        if (iVar10 == 0) {
          uVar6 = (ushort)((local_150[0] & 0x29) != 0);
          uVar13 = uVar6 | 4;
          if ((local_150[0] & 0x32) == 0) {
            uVar13 = uVar6;
          }
          uVar6 = uVar13 | 2;
          if ((local_150[0] & 4) == 0) {
            uVar6 = uVar13;
          }
          if (((local_158 == (int *)0x0) || (iVar9 != 0)) || (local_150[0] == 0))
          goto LAB_144bbc2d9;
          local_190 = local_190 + 1;
          WSAEventSelect(uVar4,*(undefined8 *)piVar1,0);
        }
        else {
LAB_144bbc2d9:
          WSAEventSelect(uVar4,*(undefined8 *)piVar1,0);
          if (iVar9 != 0) {
            uVar13 = uVar6 | 1;
            if ((uVar8 & 0x300) == 0) {
              uVar13 = uVar6;
            }
            uVar5 = uVar13 | 4;
            if ((uVar8 & 0x10) == 0) {
              uVar5 = uVar13;
            }
            uVar6 = uVar5 | 2;
            if ((uVar8 >> 10 & 1) == 0) {
              uVar6 = uVar5;
            }
          }
        }
        uVar7 = uVar7 + 1;
        *(ushort *)((longlong)local_168 + 10) = uVar6;
        local_168 = local_168 + 2;
        puVar16 = local_180;
      } while (uVar7 < local_18c);
    }
    if (uVar21 != 0) {
      for (local_168 = *(undefined8 **)(local_160 + 2); local_168 != (undefined8 *)0x0;
          local_168 = (undefined8 *)local_168[2]) {
        lVar2 = local_168[4];
        if (lVar2 == 0) goto switchD_144bbc39a_default;
        switch(*(undefined4 *)(local_168 + 0xb)) {
        case 3:
          uVar21 = FUN_144f1c080(local_168,local_120);
          break;
        case 4:
        case 5:
          uVar21 = FUN_144f141f0(local_168,0);
          break;
        case 6:
        case 7:
          pcVar20 = *(code **)(*(longlong *)(lVar2 + 0x2e8) + 0x40);
          if (pcVar20 == (code *)0x0) {
            uVar21 = FUN_144f141f0(local_168,0);
          }
          else {
            uVar21 = (*pcVar20)();
          }
          break;
        case 8:
        case 9:
          pcVar20 = *(code **)(*(longlong *)(lVar2 + 0x2e8) + 0x48);
          goto LAB_144bbc3ef;
        case 10:
          pcVar20 = *(code **)(*(longlong *)(lVar2 + 0x2e8) + 0x50);
LAB_144bbc3ef:
          if (pcVar20 == (code *)0x0) {
switchD_144bbc39a_default:
            uVar21 = 0;
          }
          else {
            uVar21 = (*pcVar20)(local_168);
          }
          break;
        case 0xb:
        case 0xc:
          uVar21 = FUN_144f245b0(local_168);
          break;
        default:
          goto switchD_144bbc39a_default;
        }
        uVar8 = 0;
        plVar17 = local_120;
        uVar7 = 1;
        iVar10 = local_190;
        do {
          if ((uVar21 & (uVar7 | 1 << (uVar8 + 0x10 & 0x1f))) == 0) break;
          local_150[0] = 0;
          iVar11 = WSAEnumNetworkEvents(*plVar17,0,local_150);
          if (((iVar11 == 0) && (local_158 != (int *)0x0)) && ((iVar9 == 0 && (local_150[0] != 0))))
          {
            iVar10 = iVar10 + 1;
          }
          WSAEventSelect(*plVar17,*(undefined8 *)piVar1,0);
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
          plVar17 = plVar17 + 1;
        } while (uVar8 < 5);
        local_190 = iVar10;
      }
    }
    WSAResetEvent(*(undefined8 *)piVar1);
    param_1 = local_160;
  }
  uVar21 = local_194;
  if (local_198 != '\0') {
    (*(code *)PTR_free_14c6d9f28)(local_180);
  }
  if (local_158 != (int *)0x0) {
    *local_158 = local_190;
  }
  if (((param_6 != '\0') && (uVar21 == 0)) &&
     ((param_7 == '\0' &&
      ((((local_188[0] = uVar21, *param_1 == 0xbab1e &&
         (*(char *)((longlong)param_1 + 0x1b3) == '\0')) &&
        (iVar9 = FUN_144bbb6d0(param_1,local_188), iVar9 == 0)) && (local_188[0] != 0)))))) {
    if (((int)local_178 < (int)local_188[0]) || (uVar21 = local_188[0], (int)local_188[0] < 0)) {
      uVar21 = local_178;
    }
    FUN_144f27110((longlong)(int)uVar21);
  }
LAB_144bbbf0c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 144bbc5b0 FUN_144bbc5b0 body=558 status=ok
// SIG undefined FUN_144bbc5b0(void)

int FUN_144bbc5b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffd;
  *(undefined1 *)(param_1 + 0x13d7) = 0;
  lVar3 = param_1 + 0x358;
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x2e8) + 0x84) & 3) != 0) &&
     (*(longlong *)(param_1 + 0x1288) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x1288);
  }
  if (((*(longlong *)(param_1 + 0x218) == 0) && (cVar1 = *(char *)(param_1 + 0x13c2), cVar1 != '\0')
      ) && (cVar1 != '\x05')) {
    if ((byte)(cVar1 - 2U) < 2) {
      iVar2 = FUN_144f09ad0(lVar3);
      if (iVar2 != 0) {
        FUN_144f14b70(param_1,"Cannot rewind mime/post data");
        return iVar2;
      }
    }
    else if (*(longlong *)(param_1 + 0x220) == 0) {
      if (*(longlong *)(param_1 + 0x270) == 0) {
        if ((*(code **)(param_1 + 0x1218) == fread_exref) &&
           (iVar2 = fseek(*(FILE **)(param_1 + 0x1220),0,0), iVar2 != -1)) {
          return 0;
        }
        FUN_144f14b70(param_1,"necessary data rewind wasn\'t possible");
        return 0x41;
      }
      lVar3 = *(longlong *)(param_1 + 0xe0);
      if ((lVar3 != 0) || (lVar3 = *(longlong *)(param_1 + 0xd8), lVar3 != 0)) {
        *(undefined1 *)(lVar3 + 0x1b3) = 1;
      }
      iVar2 = (**(code **)(param_1 + 0x270))(param_1,1,*(undefined8 *)(param_1 + 0x2f8));
      lVar3 = *(longlong *)(param_1 + 0xe0);
      if ((lVar3 != 0) || (lVar3 = *(longlong *)(param_1 + 0xd8), lVar3 != 0)) {
        *(undefined1 *)(lVar3 + 0x1b3) = 0;
      }
      FUN_144f14ad0(param_1,"the ioctl callback returned %d",iVar2);
      if (iVar2 != 0) {
        FUN_144f14b70(param_1,"ioctl callback returned error %d",iVar2);
        return 0x41;
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      if ((lVar3 != 0) || (lVar3 = *(longlong *)(param_1 + 0xd8), lVar3 != 0)) {
        *(undefined1 *)(lVar3 + 0x1b3) = 1;
      }
      iVar2 = (**(code **)(param_1 + 0x220))(*(undefined8 *)(param_1 + 0x2b8),0,0);
      lVar3 = *(longlong *)(param_1 + 0xe0);
      if ((lVar3 != 0) || (lVar3 = *(longlong *)(param_1 + 0xd8), lVar3 != 0)) {
        *(undefined1 *)(lVar3 + 0x1b3) = 0;
      }
      if (iVar2 != 0) {
        FUN_144f14b70(param_1,"seek callback returned error %d");
        return 0x41;
      }
    }
  }
  return 0;
}



// FUNCTION 144bbc7e0 FUN_144bbc7e0 body=4907 status=ok
// SIG undefined FUN_144bbc7e0(void)

ulonglong FUN_144bbc7e0(longlong param_1,longlong *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  char local_res18 [8];
  char local_res20 [8];
  char local_d8;
  char local_d7;
  char local_d6 [14];
  longlong local_c8;
  int iStack_c0;
  int iStack_bc;
  char local_b8 [16];
  undefined8 local_a8;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88 [2];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  iVar5 = 0;
  local_res18[0] = '\0';
  local_res20[0] = '\0';
  local_d7 = '\0';
  if ((param_3 == (int *)0x0) || (*param_3 != -0x3f212453)) {
    return 2;
  }
  if (*(char *)(param_1 + 0x1b5) != '\0') {
    iVar5 = 0x2a;
    FUN_144f23d60(param_3);
    FUN_144bbb9d0(param_3,0x2a);
    if (param_3[0x16] != 0xf) {
      param_3[0x16] = 0xf;
      *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) =
           *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) + -1;
      lVar7 = *(longlong *)(param_3 + 8);
      if (lVar7 != 0) {
        FUN_144f143a0(lVar7,param_3);
        FUN_144f1a7d0(lVar7 + 0x318,param_3 + 0x10);
      }
      param_3[8] = 0;
      param_3[9] = 0;
      FUN_144bbaa50(param_3);
    }
  }
  do {
    cVar4 = *(char *)(param_1 + 0x1b2);
    uVar15 = 0;
    uVar14 = 0;
    bVar16 = false;
    bVar17 = false;
    *(undefined1 *)(param_1 + 0x1b2) = 0;
    if (cVar4 != '\0') {
      FUN_144bbb7c0(param_1);
    }
    if (param_3[0x16] - 3U < 0xc) {
      if (*(longlong *)(param_3 + 8) == 0) {
        return 4;
      }
LAB_144bbc919:
      if ((0xc < param_3[0x16] - 2U) || (lVar7 = FUN_144f15e70(param_3,param_2), -1 < lVar7))
      goto LAB_144bbc9ab;
      iVar5 = param_3[0x16];
      local_c8 = *(longlong *)(param_3 + 0x2e6);
      iStack_c0 = param_3[0x2e8];
      iStack_bc = param_3[0x2e9];
      local_a8._0_4_ = (int)*param_2;
      local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
      iStack_a0 = (int)param_2[1];
      iStack_9c = *(int *)((longlong)param_2 + 0xc);
      if (iVar5 == 3) {
        uVar8 = FUN_144f071e0(&local_a8,&local_c8);
        FUN_144f14b70(param_3,"Resolving timed out after %I64d milliseconds",uVar8);
        bVar17 = false;
      }
      else {
        piVar9 = (int *)&local_a8;
        plVar13 = &local_c8;
        local_c8 = *param_2;
        iVar6 = iStack_a0;
        iVar2 = iStack_9c;
        local_a8._0_4_ = (int)*(longlong *)(param_3 + 0x2e6);
        local_a8._4_4_ = param_3[0x2e7];
        iStack_a0 = iStack_c0;
        iStack_9c = iStack_bc;
        bVar17 = false;
LAB_144bbc986:
        iStack_bc = iVar2;
        iStack_c0 = iVar6;
        if (iVar5 == 4) {
          uVar8 = FUN_144f071e0(plVar13,piVar9);
          FUN_144f14b70(param_3,"Connection timed out after %I64d milliseconds",uVar8);
        }
        else {
          lVar7 = *(longlong *)(param_3 + 0x3c);
          uVar8 = FUN_144f071e0(plVar13,piVar9);
          if (lVar7 == -1) {
            FUN_144f14b70(param_3,
                          "Operation timed out after %I64d milliseconds with %I64d bytes received",
                          uVar8,*(undefined8 *)(param_3 + 0x40));
          }
          else {
            FUN_144f14b70(param_3,
                          "Operation timed out after %I64d milliseconds with %I64d out of %I64d bytes received"
                          ,uVar8,*(undefined8 *)(param_3 + 0x40),lVar7);
          }
        }
      }
LAB_144bbd8d1:
      if (8 < param_3[0x16]) {
        FUN_144f16220(*(undefined8 *)(param_3 + 8),2);
        bVar17 = true;
      }
      iVar5 = 0x1c;
      FUN_144bbb9d0(param_3,0x1c);
    }
    else {
      if (*(longlong *)(param_3 + 8) != 0) goto LAB_144bbc919;
LAB_144bbc9ab:
      uVar11 = param_3[0x16];
      switch(uVar11) {
      case 0:
        iVar5 = FUN_144f239d0(param_3);
        uVar15 = uVar14;
        if (iVar5 == 0) {
          if (param_3[0x16] != 2) {
            param_3[0x16] = 2;
            FUN_144f239a0(param_3);
          }
          piVar9 = (int *)FUN_144f25fd0(local_80,param_3);
          uVar15 = 0xffffffff;
          iVar6 = piVar9[1];
          iVar2 = piVar9[2];
          iVar3 = piVar9[3];
          *(int *)param_2 = *piVar9;
          *(int *)((longlong)param_2 + 4) = iVar6;
          *(int *)(param_2 + 1) = iVar2;
          *(int *)((longlong)param_2 + 0xc) = iVar3;
        }
        break;
      case 1:
      case 0xf:
      case 0x10:
        break;
      case 2:
        if (*(longlong *)(param_3 + 0x336) == 0) {
          lVar7 = (*(code *)PTR_malloc_14c6d9f20)(param_3[0x1b3] + 1);
          *(longlong *)(param_3 + 0x336) = lVar7;
          if (lVar7 == 0) {
            iVar5 = 0x1b;
            uVar15 = uVar14;
            break;
          }
        }
        piVar9 = (int *)FUN_144f25fd0(local_70,param_3,2);
        iVar5 = piVar9[1];
        iVar6 = piVar9[2];
        iVar2 = piVar9[3];
        *(int *)param_2 = *piVar9;
        *(int *)((longlong)param_2 + 4) = iVar5;
        *(int *)(param_2 + 1) = iVar6;
        *(int *)((longlong)param_2 + 0xc) = iVar2;
        if (param_3[0xc0] != 0) {
          FUN_144bba820(param_3,param_3[0xc0],10);
        }
        if (param_3[0xc1] != 0) {
          FUN_144bba820(param_3,param_3[0xc1],2);
        }
        iVar5 = FUN_144f0ebf0(param_3,local_b8,&local_d8);
        if (iVar5 == 0x59) {
          if (param_3[0x16] != 1) {
            param_3[0x16] = 1;
          }
          FUN_144f1a750(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48),param_3,param_3 + 10);
          if (*(longlong *)(param_3 + 6) == 0) {
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
          }
          else {
            *(undefined8 *)(*(longlong *)(param_3 + 6) + 0x10) = *(undefined8 *)(param_3 + 4);
          }
          if (*(longlong *)(param_3 + 4) == 0) {
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 6);
            iVar5 = 0;
            param_3[4] = 0;
            param_3[5] = 0;
            param_3[6] = 0;
            param_3[7] = 0;
            uVar15 = uVar14;
          }
          else {
            *(undefined8 *)(*(longlong *)(param_3 + 4) + 0x18) = *(undefined8 *)(param_3 + 6);
            iVar5 = 0;
            param_3[4] = 0;
            param_3[5] = 0;
            param_3[6] = 0;
            param_3[7] = 0;
            uVar15 = uVar14;
          }
        }
        else {
          local_a8._0_4_ = (int)*param_2;
          local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
          iStack_a0 = (int)param_2[1];
          iStack_9c = *(int *)((longlong)param_2 + 0xc);
          FUN_144f261f0(param_3,2);
          if ((char)param_3[0x4f4] != '\0') {
            FUN_144f14ad0(param_3,"Transfer was pending, now try another");
            FUN_144bbb7c0(*(undefined8 *)(param_3 + 0x36));
          }
          uVar15 = uVar14;
          if (iVar5 == 0) {
            iVar6 = param_3[0x16];
            if (local_b8[0] != '\0') {
              if (iVar6 != 3) {
                param_3[0x16] = 3;
              }
              break;
            }
LAB_144bbcb70:
            if (local_d8 != '\0') {
              bVar16 = iVar6 == 6;
              goto LAB_144bbcb7f;
            }
            uVar15 = 0xffffffff;
            if (iVar6 != 4) {
              param_3[0x16] = 4;
            }
          }
        }
        break;
      case 3:
        lVar7 = *(longlong *)(param_3 + 8);
        local_c8 = 0;
        if (*(char *)(lVar7 + 0x2c8) == '\0') {
          if (*(char *)(lVar7 + 0x2d1) == '\0') {
            uVar8 = *(undefined8 *)(lVar7 + 0x70);
          }
          else {
            uVar8 = *(undefined8 *)(lVar7 + 0xa0);
          }
        }
        else {
          uVar8 = *(undefined8 *)(lVar7 + 0xf8);
        }
        local_c8 = FUN_144f1b790(param_3,uVar8);
        if (local_c8 == 0) {
LAB_144bbcc1a:
          iVar5 = FUN_144f1c060(param_3,&local_c8);
        }
        else {
          *(longlong *)(param_3 + 0x392) = local_c8;
          *(undefined1 *)(param_3 + 0x39a) = 1;
          iVar5 = 0;
          FUN_144f14ad0(param_3,"Hostname \'%s\' was found in DNS cache");
          if (local_c8 == 0) goto LAB_144bbcc1a;
        }
        uVar14 = FUN_144bbafb0(param_1,param_3);
        uVar15 = uVar14 & 0xffffffff;
        if ((int)uVar14 != 0) {
          return uVar14;
        }
        if (local_c8 == 0) {
          if (iVar5 != 0) goto LAB_144bbcc7a;
        }
        else {
          iVar5 = FUN_144f1b6d0(param_3,&local_d8);
          if (iVar5 == 0) {
            iVar6 = param_3[0x16];
            goto LAB_144bbcb70;
          }
          param_3[8] = 0;
          param_3[9] = 0;
          bVar17 = true;
        }
        break;
      case 4:
        iVar5 = FUN_144f13f00(param_3,0,0,&local_d8);
        if (local_d8 == '\0') {
          uVar15 = uVar14;
          if (iVar5 != 0) goto LAB_144bbcd18;
        }
        else if (iVar5 == 0) {
          bVar16 = param_3[0x16] == 6;
LAB_144bbcb7f:
          uVar15 = 0xffffffff;
          if (!bVar16) {
            param_3[0x16] = 6;
          }
        }
        else {
LAB_144bbcd18:
          FUN_144f23d60(param_3);
          FUN_144bbb9d0(param_3,iVar5);
          bVar17 = true;
          uVar15 = uVar14;
        }
        break;
      case 5:
        iVar5 = FUN_144f1d510(param_3,local_res18);
        if (*(char *)(*(longlong *)(param_3 + 8) + 0x2cc) == '\0') {
          if (iVar5 == 0) {
            bVar16 = param_3[0x16] == 6;
            goto LAB_144bbcb7f;
          }
LAB_144bbcc7a:
          bVar17 = true;
        }
        else {
          iVar5 = 0;
          FUN_144bbb9d0(param_3,0);
          uVar15 = 0xffffffff;
          if (param_3[0x16] != 2) {
            param_3[0x16] = 2;
            FUN_144f239a0(param_3);
          }
        }
        break;
      case 6:
        if (*(char *)((longlong)param_3 + 0x13d7) != '\0') {
          iVar5 = FUN_144bbc5b0(param_3);
          uVar11 = param_3[0x16];
        }
        if (iVar5 != 0) goto LAB_144bbcd18;
        lVar7 = *(longlong *)(param_3 + 8);
        if (*(char *)(lVar7 + 0x2cf) != '\0') goto LAB_144bbcd5f;
        local_res18[0] = '\0';
        cVar4 = FUN_144f14020(lVar7,0);
        if (cVar4 == '\0') {
          if (*(char *)(lVar7 + 0x2d6) == '\0') goto LAB_144bbcdbb;
        }
        else if (*(char *)(lVar7 + 0x2d6) == '\0') {
LAB_144bbcdbb:
          pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x2e8) + 0x28);
          if (pcVar1 == (code *)0x0) {
            local_res18[0] = '\x01';
          }
          else {
            iVar5 = (*pcVar1)(param_3,local_res18);
            if (iVar5 != 0) goto LAB_144bbcde9;
          }
          *(undefined1 *)(lVar7 + 0x2d6) = 1;
        }
        else if (*(longlong *)(*(longlong *)(lVar7 + 0x2e8) + 0x30) == 0) {
          local_res18[0] = '\x01';
        }
LAB_144bbcde9:
        uVar11 = param_3[0x16];
        if (iVar5 != 0) goto LAB_144bbcd18;
        if (local_res18[0] != '\0') goto LAB_144bbcd5f;
        if (uVar11 != 7) {
          param_3[0x16] = 7;
        }
        uVar15 = 0xffffffff;
        break;
      case 7:
        lVar7 = *(longlong *)(param_3 + 8);
        if ((lVar7 == 0) || (*(longlong *)(*(longlong *)(lVar7 + 0x2e8) + 0x30) == 0)) {
          local_res18[0] = '\x01';
          iVar5 = 0;
        }
        else {
          local_res18[0] = '\0';
          iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x2e8) + 0x30))(param_3,local_res18);
          uVar11 = param_3[0x16];
          if (iVar5 != 0) goto LAB_144bbcd18;
        }
        uVar15 = uVar14;
        if (local_res18[0] != '\0') {
LAB_144bbcd5f:
          if (uVar11 != 8) {
            param_3[0x16] = 8;
          }
          goto LAB_144bbcd6b;
        }
        break;
      case 8:
        if (*(longlong *)(param_3 + 0xaa) != 0) {
          lVar7 = *(longlong *)(param_3 + 0x38);
          if ((lVar7 != 0) || (lVar7 = *(longlong *)(param_3 + 0x36), lVar7 != 0)) {
            *(undefined1 *)(lVar7 + 0x1b3) = 1;
          }
          iVar5 = (**(code **)(param_3 + 0xaa))
                            (*(undefined8 *)(param_3 + 0xac),param_3 + 0x50d,param_3 + 0x51b,
                             param_3[0x519],param_3[0x527]);
          if (*(longlong *)(param_3 + 0x38) == 0) {
            lVar7 = *(longlong *)(param_3 + 0x36);
            if (lVar7 != 0) {
              *(undefined1 *)(lVar7 + 0x1b3) = 0;
            }
          }
          else {
            *(undefined1 *)(*(longlong *)(param_3 + 0x38) + 0x1b3) = 0;
          }
          if (iVar5 != 0) {
            FUN_144f14b70(param_3,"operation aborted by pre-request callback");
            iVar5 = 0x2a;
            goto LAB_144bbcf00;
          }
          uVar11 = param_3[0x16];
        }
        lVar7 = *(longlong *)(param_3 + 8);
        if (*(char *)((longlong)param_3 + 0xab2) == '\x01') {
          FUN_144f16220(lVar7,0);
          if (param_3[0x16] != 0xe) {
            param_3[0x16] = 0xe;
          }
          uVar15 = 0xffffffff;
          iVar5 = 0;
        }
        else {
          iVar5 = 0;
          pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x2e8) + 0x10);
          if (pcVar1 != (code *)0x0) {
            iVar5 = (*pcVar1)(param_3,local_res20);
            lVar7 = *(longlong *)(param_3 + 8);
            uVar11 = param_3[0x16];
          }
          if (iVar5 == 0) {
            if (local_res20[0] == '\0') {
              if ((*(char *)((longlong)param_3 + 0x13ca) == '\0') ||
                 ((*(char *)(*(longlong *)(param_3 + 0x4f8) + 0x40) - 5U & 0xfd) != 0)) {
                if (uVar11 != 9) {
                  param_3[0x16] = 9;
                  uVar15 = 0xffffffff;
                  break;
                }
              }
              else {
                FUN_144bbb9d0(param_3,0);
                uVar11 = 0xf - (*(longlong *)(param_3 + 8) != 0);
                if (param_3[0x16] != uVar11) {
                  param_3[0x16] = uVar11;
                  if (*(longlong *)(param_3 + 8) == 0) {
                    *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) =
                         *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) + -1;
                  }
                  if (*(code **)(&DAT_14997c170 + (ulonglong)uVar11 * 8) != (code *)0x0) {
                    (**(code **)(&DAT_14997c170 + (ulonglong)uVar11 * 8))(param_3);
                    uVar15 = 0xffffffff;
                    break;
                  }
                }
              }
              goto LAB_144bbcd6b;
            }
            if (*(char *)(lVar7 + 0x2d5) == '\0') {
              if (uVar11 == 0xb) goto LAB_144bbcd6b;
              *(undefined1 *)((longlong)param_3 + 0x1cf) = 0;
              param_3[0x16] = 0xb;
              FUN_144f25fd0(local_60,param_3);
              uVar15 = 0xffffffff;
            }
            else {
              if (uVar11 == 10) goto LAB_144bbcd6b;
              param_3[0x16] = 10;
              uVar15 = 0xffffffff;
            }
          }
          else if ((iVar5 == 0x37) && (*(char *)(lVar7 + 0x2cf) != '\0')) {
            local_c8 = 0;
            iVar6 = FUN_144f249d0(param_3,&local_c8);
            bVar17 = iVar6 != 0;
            if (bVar17) {
              iVar5 = iVar6;
            }
            FUN_144f23d60(param_3);
            iVar6 = FUN_144bbb9d0(param_3,iVar5);
            if (local_c8 == 0) {
              bVar17 = true;
              (*(code *)PTR_free_14c6d9f28)();
              uVar15 = uVar14;
            }
            else if ((iVar6 == 0) || (iVar6 == 0x37)) {
              iVar5 = FUN_144f23d70(param_3,local_c8);
              if (iVar5 == 0) {
                if (param_3[0x16] != 2) {
                  param_3[0x16] = 2;
                  FUN_144f239a0(param_3);
                }
                uVar15 = 0xffffffff;
                iVar5 = 0;
              }
              (*(code *)PTR_free_14c6d9f28)(local_c8);
            }
            else {
              (*(code *)PTR_free_14c6d9f28)();
              uVar15 = uVar14;
              iVar5 = iVar6;
            }
          }
          else {
            FUN_144f23d60(param_3);
            if (*(longlong *)(param_3 + 8) == 0) goto LAB_144bbcc7a;
            FUN_144bbb9d0(param_3,iVar5);
            bVar17 = true;
            uVar15 = uVar14;
          }
        }
        break;
      case 9:
        lVar7 = *(longlong *)(param_3 + 8);
        if ((lVar7 == 0) || (*(longlong *)(*(longlong *)(lVar7 + 0x2e8) + 0x38) == 0)) {
          local_res20[0] = '\x01';
          iVar5 = 0;
        }
        else {
          local_res20[0] = '\0';
          iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x2e8) + 0x38))(param_3,local_res20);
          lVar7 = *(longlong *)(param_3 + 8);
          uVar11 = param_3[0x16];
          if (iVar5 != 0) {
            FUN_144f23d60(param_3);
            FUN_144bbb9d0(param_3,iVar5);
            bVar17 = true;
            uVar15 = uVar14;
            break;
          }
        }
        uVar15 = uVar14;
        if (local_res20[0] != '\0') {
          uVar12 = 0xb - (*(char *)(lVar7 + 0x2d5) != '\0');
          if (uVar11 != uVar12) {
            pcVar1 = *(code **)(&DAT_14997c170 + (ulonglong)uVar12 * 8);
            param_3[0x16] = uVar12;
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(param_3);
              uVar15 = 0xffffffff;
              break;
            }
          }
LAB_144bbcd6b:
          bVar17 = bVar16;
          uVar15 = 0xffffffff;
        }
        break;
      case 10:
        local_88[0] = 0;
        iVar5 = 0;
        pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_3 + 8) + 0x2e8) + 0x20);
        if (pcVar1 != (code *)0x0) {
          iVar5 = (*pcVar1)(param_3,local_88);
          uVar11 = param_3[0x16];
        }
        if (iVar5 == 0) {
          uVar15 = uVar14;
          if (local_88[0] != 0) {
            lVar7 = 9;
            if (local_88[0] == 1) {
              lVar7 = 0xb;
            }
            if (uVar11 != (uint)lVar7) {
              pcVar1 = *(code **)(&DAT_14997c170 + lVar7 * 8);
              param_3[0x16] = (uint)lVar7;
              if (pcVar1 != (code *)0x0) {
                (*pcVar1)(param_3);
                uVar15 = 0xffffffff;
                break;
              }
            }
            goto LAB_144bbcd6b;
          }
        }
        else {
LAB_144bbcf00:
          FUN_144f23d60(param_3);
          FUN_144bbb9d0(param_3,iVar5);
          bVar17 = true;
          uVar15 = uVar14;
        }
        break;
      case 0xb:
        if (*(char *)(*(longlong *)(param_3 + 8) + 0x2df) != '\0') {
          FUN_144bbb7c0(param_1);
          uVar11 = param_3[0x16];
        }
        lVar7 = *(longlong *)(param_3 + 8);
        if ((*(longlong *)(lVar7 + 0x308) == -1) && (*(longlong *)(lVar7 + 0x310) == -1)) {
          if ((*(char *)((longlong)param_3 + 0x13ca) != '\0') &&
             ((*(uint *)(*(longlong *)(lVar7 + 0x2e8) + 0x8c) & 0x1000) == 0)) {
            *(undefined1 *)(*(longlong *)(param_3 + 0x4f8) + 0x40) = 7;
          }
          if (param_3[0x16] != 0xe) {
            param_3[0x16] = 0xe;
            uVar15 = 0xffffffff;
            break;
          }
        }
        else if (uVar11 != 0xc) {
          param_3[0x16] = 0xc;
        }
        uVar15 = 0xffffffff;
        break;
      case 0xc:
        lVar7 = 0;
        local_c8 = 0;
        local_d6[0] = '\0';
        if (*(longlong *)(param_3 + 0xcc) != 0) {
          local_98 = param_3[0x2f2];
          iStack_94 = param_3[0x2f3];
          iStack_90 = param_3[0x2f4];
          iStack_8c = param_3[0x2f5];
          local_a8._0_4_ = (int)*param_2;
          local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
          iStack_a0 = (int)param_2[1];
          iStack_9c = *(int *)((longlong)param_2 + 0xc);
          lVar7 = FUN_144f26150(*(undefined8 *)(param_3 + 0x2ca),*(undefined8 *)(param_3 + 0x2f6),
                                *(longlong *)(param_3 + 0xcc),&local_98,&local_a8);
        }
        lVar10 = 0;
        if (*(longlong *)(param_3 + 0xce) != 0) {
          local_a8._0_4_ = param_3[0x2f8];
          local_a8._4_4_ = param_3[0x2f9];
          iStack_a0 = param_3[0x2fa];
          iStack_9c = param_3[0x2fb];
          local_98 = (int)*param_2;
          iStack_94 = *(int *)((longlong)param_2 + 4);
          iStack_90 = (int)param_2[1];
          iStack_8c = *(int *)((longlong)param_2 + 0xc);
          lVar10 = FUN_144f26150(*(undefined8 *)(param_3 + 0x2c8),*(undefined8 *)(param_3 + 0x2fc),
                                 *(longlong *)(param_3 + 0xce),&local_a8,&local_98);
        }
        if ((lVar7 == 0) && (lVar10 == 0)) {
          iVar5 = FUN_144f24290(*(undefined8 *)(param_3 + 8),param_3,&local_d7,local_d6);
          if ((local_d7 != '\0') || (iVar5 == 0x38)) {
            iVar6 = FUN_144f249d0(param_3);
            if (iVar6 == 0) {
              if (local_c8 != 0) goto LAB_144bbd591;
              goto LAB_144bbd614;
            }
            if (iVar5 == 0) {
LAB_144bbd70e:
              iVar5 = iVar6;
            }
LAB_144bbd712:
            lVar7 = *(longlong *)(param_3 + 8);
            goto LAB_144bbd32f;
          }
          if (iVar5 == 0x5c) {
            cVar4 = FUN_144f281e0(param_3);
            if (cVar4 == '\0') goto LAB_144bbd712;
            iVar6 = FUN_144f249d0(param_3,&local_c8);
            if (iVar6 != 0) goto LAB_144bbd70e;
            FUN_144f14ad0(param_3,"Downgrades to HTTP/1.1");
            FUN_144f16220(*(undefined8 *)(param_3 + 8),2);
            *(undefined1 *)(param_3 + 0x4f0) = 2;
            *(undefined1 *)((longlong)param_3 + 0x13c7) = 0;
            if (local_c8 == 0) {
              local_c8 = (*(code *)PTR__strdup_14c6d9f38)(*(undefined8 *)(param_3 + 0x49c));
            }
LAB_144bbd591:
            local_d7 = '\x01';
            FUN_144f23d60(param_3);
LAB_144bbd5a2:
            FUN_144bbb9d0(param_3,0,0);
            iVar5 = FUN_144f23d70(param_3,local_c8);
            if (iVar5 == 0) {
              if (param_3[0x16] != 2) {
                param_3[0x16] = 2;
                FUN_144f239a0(param_3);
              }
              uVar15 = 0xffffffff;
            }
            (*(code *)PTR_free_14c6d9f28)(local_c8);
          }
          else {
LAB_144bbd614:
            if (iVar5 != 0) goto LAB_144bbd712;
            if (local_d7 == '\0') {
              uVar15 = uVar14;
              if (local_d6[0] != '\0') {
                FUN_144bba820(param_3);
              }
            }
            else {
              FUN_144f23d60(param_3);
              if (*(longlong *)(param_3 + 100) != 0) {
                (*(code *)PTR_free_14c6d9f28)(local_c8);
                local_c8 = *(longlong *)(param_3 + 100);
                param_3[100] = 0;
                param_3[0x65] = 0;
                goto LAB_144bbd5a2;
              }
              bVar16 = false;
              if (*(longlong *)(param_3 + 0x62) != 0) {
                (*(code *)PTR_free_14c6d9f28)(local_c8);
                local_c8 = *(longlong *)(param_3 + 0x62);
                param_3[0x62] = 0;
                param_3[99] = 0;
                iVar6 = FUN_144f23d70(param_3);
                (*(code *)PTR_free_14c6d9f28)(local_c8);
                iVar5 = 0;
                if (iVar6 != 0) {
                  bVar17 = true;
                  iVar5 = FUN_144bbb9d0(param_3,iVar6);
                  uVar15 = uVar14;
                  bVar16 = true;
                  if (iVar5 != 0) break;
                }
              }
              bVar17 = bVar16;
              bVar16 = bVar17;
              if (param_3[0x16] == 0xe) goto LAB_144bbcd6b;
              param_3[0x16] = 0xe;
              uVar15 = 0xffffffff;
            }
          }
        }
        else {
          local_98 = (int)*param_2;
          iStack_94 = *(int *)((longlong)param_2 + 4);
          iStack_90 = (int)param_2[1];
          iStack_8c = *(int *)((longlong)param_2 + 0xc);
          FUN_144f25db0(param_3,&local_98);
          if (param_3[0x16] != 0xd) {
            param_3[0x16] = 0xd;
          }
          if (lVar10 <= lVar7) {
            lVar10 = lVar7;
          }
          FUN_144bba820(param_3,lVar10);
          uVar15 = uVar14;
        }
        break;
      case 0xd:
        iVar5 = FUN_144f25e70(param_3);
        if (iVar5 == 0) {
          local_a8._0_4_ = (int)*param_2;
          local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
          iStack_a0 = (int)param_2[1];
          iStack_9c = *(int *)((longlong)param_2 + 0xc);
          iVar5 = FUN_144f27170(param_3,&local_a8);
          if (iVar5 == 0) {
            lVar7 = 0;
            if (*(longlong *)(param_3 + 0xcc) != 0) {
              local_a8._0_4_ = (int)*param_2;
              local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
              iStack_a0 = (int)param_2[1];
              iStack_9c = *(int *)((longlong)param_2 + 0xc);
              local_c8 = *(longlong *)(param_3 + 0x2f2);
              iStack_c0 = param_3[0x2f4];
              iStack_bc = param_3[0x2f5];
              lVar7 = FUN_144f26150(*(undefined8 *)(param_3 + 0x2ca),
                                    *(undefined8 *)(param_3 + 0x2f6),*(longlong *)(param_3 + 0xcc),
                                    &local_c8,&local_a8);
            }
            lVar10 = 0;
            if (*(longlong *)(param_3 + 0xce) != 0) {
              local_a8._0_4_ = (int)*param_2;
              local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
              iStack_a0 = (int)param_2[1];
              iStack_9c = *(int *)((longlong)param_2 + 0xc);
              local_c8 = *(longlong *)(param_3 + 0x2f8);
              iStack_c0 = param_3[0x2fa];
              iStack_bc = param_3[0x2fb];
              lVar10 = FUN_144f26150(*(undefined8 *)(param_3 + 0x2c8),
                                     *(undefined8 *)(param_3 + 0x2fc),*(longlong *)(param_3 + 0xce),
                                     &local_c8,&local_a8);
            }
            if ((lVar7 == 0) && (lVar10 == 0)) {
              if (param_3[0x16] != 0xc) {
                param_3[0x16] = 0xc;
              }
              local_a8._0_4_ = (int)*param_2;
              local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
              iStack_a0 = (int)param_2[1];
              iStack_9c = *(int *)((longlong)param_2 + 0xc);
              FUN_144f25db0(param_3,&local_a8);
            }
            else if (lVar7 < lVar10) {
              FUN_144bba820(param_3,lVar10);
              uVar15 = uVar14;
            }
            else {
              FUN_144bba820(param_3,lVar7);
              uVar15 = uVar14;
            }
            break;
          }
        }
        else {
          iVar5 = 0x2a;
        }
        lVar7 = *(longlong *)(param_3 + 8);
LAB_144bbd32f:
        if (((*(byte *)(*(longlong *)(lVar7 + 0x2e8) + 0x8c) & 2) == 0) && (iVar5 != 0x5c)) {
          FUN_144f16220(lVar7,2);
        }
        FUN_144f23d60(param_3);
        FUN_144bbb9d0(param_3,iVar5);
        break;
      case 0xe:
        uVar15 = 0xffffffff;
        if (*(longlong *)(param_3 + 8) != 0) {
          if (*(char *)(*(longlong *)(param_3 + 8) + 0x2df) != '\0') {
            FUN_144bbb7c0(param_1);
          }
          iVar6 = FUN_144bbb9d0(param_3,iVar5);
          if (iVar5 == 0) {
            iVar5 = iVar6;
          }
        }
        if ((*(char *)((longlong)param_3 + 0x13ca) == '\0') ||
           (*(char *)(*(longlong *)(param_3 + 0x4f8) + 0x40) == '\a')) {
          if (param_3[0x16] != 0xf) {
            param_3[0x16] = 0xf;
            *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) =
                 *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) + -1;
            lVar7 = *(longlong *)(param_3 + 8);
            if (lVar7 != 0) {
              FUN_144f143a0(lVar7,param_3);
              FUN_144f1a7d0(lVar7 + 0x318,param_3 + 0x10);
            }
            param_3[8] = 0;
            param_3[9] = 0;
            FUN_144bbaa50(param_3);
          }
        }
        else if (param_3[0x16] != 0) {
          param_3[0x16] = 0;
        }
        break;
      default:
        return 4;
      }
      if ((((*(longlong *)(param_3 + 8) != 0) && (param_3[0x16] - 2U < 6)) && ((int)uVar15 != -1))
         && ((*(char *)(param_1 + 0x1b2) == '\0' &&
             (lVar7 = FUN_144f15e70(param_3,param_2), lVar7 < 0)))) {
        local_98 = param_3[0x2e6];
        iStack_94 = param_3[0x2e7];
        iStack_90 = param_3[0x2e8];
        iStack_8c = param_3[0x2e9];
        iVar5 = param_3[0x16];
        piVar9 = &local_98;
        plVar13 = &local_a8;
        local_a8._0_4_ = (int)*param_2;
        local_a8._4_4_ = *(int *)((longlong)param_2 + 4);
        iStack_a0 = (int)param_2[1];
        iStack_9c = *(int *)((longlong)param_2 + 0xc);
        iVar6 = iStack_c0;
        iVar2 = iStack_bc;
        if (iVar5 != 3) goto LAB_144bbc986;
        uVar8 = FUN_144f071e0(plVar13,piVar9);
        FUN_144f14b70(param_3,"Resolving timed out after %I64d milliseconds",uVar8);
        goto LAB_144bbd8d1;
      }
    }
    iVar6 = param_3[0x16];
    if (iVar6 < 0xf) {
      if (iVar5 == 0) {
        if ((*(longlong *)(param_3 + 8) != 0) && (iVar6 = FUN_144f25e70(param_3), iVar6 != 0)) {
          iVar5 = 0x2a;
          FUN_144f16220(*(undefined8 *)(param_3 + 8));
          uVar11 = param_3[0x16];
          uVar12 = (0xd < (int)uVar11) + 0xe;
          if (uVar11 != uVar12) {
            param_3[0x16] = uVar12;
            if (0xd < (int)uVar11) {
              *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) =
                   *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) + -1;
            }
            if (*(code **)(&DAT_14997c170 + (ulonglong)uVar12 * 8) != (code *)0x0) {
              (**(code **)(&DAT_14997c170 + (ulonglong)uVar12 * 8))(param_3);
            }
          }
          goto LAB_144bbda41;
        }
      }
      else {
        FUN_144bbb7c0(param_1);
        lVar7 = *(longlong *)(param_3 + 8);
        if (lVar7 == 0) {
          if (param_3[0x16] == 2) {
            FUN_144f23d60(param_3);
          }
        }
        else if (bVar17) {
          FUN_144f143a0(lVar7,param_3);
          FUN_144f1a7d0(lVar7 + 0x318,param_3 + 0x10,0);
          param_3[8] = 0;
          param_3[9] = 0;
          FUN_144f0b160(param_3,lVar7,1);
          FUN_144f0ed40(param_3,lVar7);
        }
        if (param_3[0x16] != 0xf) {
          param_3[0x16] = 0xf;
          *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) =
               *(int *)(*(longlong *)(param_3 + 0x36) + 0x1c) + -1;
          lVar7 = *(longlong *)(param_3 + 8);
          if (lVar7 != 0) {
            FUN_144f143a0(lVar7,param_3);
            FUN_144f1a7d0(lVar7 + 0x318,param_3 + 0x10);
          }
          param_3[8] = 0;
          param_3[9] = 0;
          FUN_144bbaa50(param_3);
        }
LAB_144bbda41:
        uVar15 = 0xffffffff;
      }
      iVar6 = param_3[0x16];
    }
    if (iVar6 == 0xf) {
      if (*(code **)(param_3 + 0x29e) == (code *)0x0) {
        *(int **)(param_3 + 0x20) = param_3;
        param_3[0x1e] = 1;
        param_3[0x22] = iVar5;
        FUN_144f1a750(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_3 + 0x18,param_3 + 0x18);
      }
      else {
        (**(code **)(param_3 + 0x29e))(param_3,iVar5);
      }
      if (param_3[0x16] != 0x10) {
        param_3[0x16] = 0x10;
      }
      FUN_144f1a750(param_1 + 0x60,*(undefined8 *)(param_1 + 0x68),param_3,param_3 + 10);
      FUN_144bbb980(param_1,param_3);
      return 0;
    }
    if (((int)uVar15 != -1) && (*(char *)(param_1 + 0x1b2) == '\0')) {
      param_3[0x17] = iVar5;
      return uVar15;
    }
  } while( true );
}



// FUNCTION 144bbdb50 FUN_144bbdb50 body=735 status=ok
// SIG undefined FUN_144bbdb50(void)

char * FUN_144bbdb50(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "No error";
  case 1:
    return "Unsupported protocol";
  case 2:
    return "Failed initialization";
  case 3:
    return "URL using bad/illegal format or missing URL";
  case 4:
    return 
    "A requested feature, protocol or option was not found built-in in this libcurl due to a build-time decision."
    ;
  case 5:
    return "Couldn\'t resolve proxy name";
  case 6:
    return "Couldn\'t resolve host name";
  case 7:
    return "Couldn\'t connect to server";
  case 8:
    return "Weird server reply";
  case 9:
    return "Access denied to remote resource";
  case 10:
    return "FTP: The server failed to connect to data port";
  case 0xb:
    return "FTP: unknown PASS reply";
  case 0xc:
    return "FTP: Accepting server connect has timed out";
  case 0xd:
    return "FTP: unknown PASV reply";
  case 0xe:
    return "FTP: unknown 227 response format";
  case 0xf:
    return "FTP: can\'t figure out the host in the PASV response";
  case 0x10:
    return "Error in the HTTP2 framing layer";
  case 0x11:
    return "FTP: couldn\'t set file type";
  case 0x12:
    return "Transferred a partial file";
  case 0x13:
    return "FTP: couldn\'t retrieve (RETR failed) the specified file";
  default:
    return "Unknown error";
  case 0x15:
    return "Quote command returned error";
  case 0x16:
    return "HTTP response code said error";
  case 0x17:
    return "Failed writing received data to disk/application";
  case 0x19:
    return "Upload failed (at start/before it took off)";
  case 0x1a:
    return "Failed to open/read local data from file/application";
  case 0x1b:
    return "Out of memory";
  case 0x1c:
    return "Timeout was reached";
  case 0x1e:
    return "FTP: command PORT failed";
  case 0x1f:
    return "FTP: command REST failed";
  case 0x21:
    return "Requested range was not delivered by the server";
  case 0x22:
    return "Internal problem setting up the POST";
  case 0x23:
    return "SSL connect error";
  case 0x24:
    return "Couldn\'t resume download";
  case 0x25:
    return "Couldn\'t read a file:// file";
  case 0x26:
    return "LDAP: cannot bind";
  case 0x27:
    return "LDAP: search failed";
  case 0x29:
    return "A required function in the library was not found";
  case 0x2a:
    return "Operation was aborted by an application callback";
  case 0x2b:
    return "A libcurl function was given a bad argument";
  case 0x2d:
    return "Failed binding local connection end";
  case 0x2f:
    return "Number of redirects hit maximum amount";
  case 0x30:
    return "An unknown option was passed in to libcurl";
  case 0x31:
    return "Malformed option provided in a setopt";
  case 0x34:
    return "Server returned nothing (no headers, no data)";
  case 0x35:
    return "SSL crypto engine not found";
  case 0x36:
    return "Can not set SSL crypto engine as default";
  case 0x37:
    return "Failed sending data to the peer";
  case 0x38:
    return "Failure when receiving data from the peer";
  case 0x3a:
    return "Problem with the local SSL certificate";
  case 0x3b:
    return "Couldn\'t use specified SSL cipher";
  case 0x3c:
    return "SSL peer certificate or SSH remote key was not OK";
  case 0x3d:
    return "Unrecognized or bad HTTP Content or Transfer-Encoding";
  case 0x3f:
    return "Maximum file size exceeded";
  case 0x40:
    return "Requested SSL level failed";
  case 0x41:
    return "Send failed since rewinding of the data stream failed";
  case 0x42:
    return "Failed to initialise SSL crypto engine";
  case 0x43:
    return "Login denied";
  case 0x44:
    return "TFTP: File Not Found";
  case 0x45:
    return "TFTP: Access Violation";
  case 0x46:
    return "Disk full or allocation exceeded";
  case 0x47:
    return "TFTP: Illegal operation";
  case 0x48:
    return "TFTP: Unknown transfer ID";
  case 0x49:
    return "Remote file already exists";
  case 0x4a:
    return "TFTP: No such user";
  case 0x4d:
    return "Problem with the SSL CA cert (path? access rights?)";
  case 0x4e:
    return "Remote file not found";
  case 0x4f:
    return "Error in the SSH layer";
  case 0x50:
    return "Failed to shut down the SSL connection";
  case 0x51:
    return "Socket not ready for send/recv";
  case 0x52:
    return "Failed to load CRL file (path? access rights?, format?)";
  case 0x53:
    return "Issuer check against peer certificate failed";
  case 0x54:
    return "FTP: The server did not accept the PRET command.";
  case 0x55:
    return "RTSP CSeq mismatch or invalid CSeq";
  case 0x56:
    return "RTSP session error";
  case 0x57:
    return "Unable to parse FTP file list";
  case 0x58:
    return "Chunk callback failed";
  case 0x59:
    return "The max connection limit is reached";
  case 0x5a:
    return "SSL public key does not match pinned public key";
  case 0x5b:
    return "SSL server certificate status verification FAILED";
  case 0x5c:
    return "Stream error in the HTTP/2 framing layer";
  case 0x5d:
    return "API function called from within callback";
  case 0x5e:
    return "An authentication function returned an error";
  case 0x5f:
    return "HTTP/3 error";
  case 0x60:
    return "QUIC connection error";
  case 0x61:
    return "proxy handshake error";
  case 0x62:
    return "SSL Client Certificate required";
  case 99:
    return "Unrecoverable error in select/poll";
  }
}



// FUNCTION 144bbdfc0 FUN_144bbdfc0 body=153 status=ok
// SIG undefined FUN_144bbdfc0(void)

char * FUN_144bbdfc0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "No error";
  case 1:
    return "Invalid multi handle";
  case 2:
    return "Invalid easy handle";
  case 3:
    return "Out of memory";
  case 4:
    return "Internal error";
  case 5:
    return "Invalid socket argument";
  case 6:
    return "Unknown option";
  case 7:
    return "The easy handle is already added to a multi handle";
  case 8:
    return "API function called from within callback";
  case 9:
    return "Wakeup is unavailable or failed";
  case 10:
    return "A libcurl function was given a bad argument";
  case 0xb:
    return "Operation was aborted by an application callback";
  case 0xc:
    return "Unrecoverable error in select/poll";
  case 0xffffffff:
    return "Please call curl_multi_perform() soon";
  default:
    return "Unknown error";
  }
}



// FUNCTION 144bbe0a0 FUN_144bbe0a0 body=287 status=ok
// SIG undefined FUN_144bbe0a0(void)

char * FUN_144bbe0a0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "No error";
  case 1:
    return "An invalid CURLU pointer was passed as argument";
  case 2:
    return "An invalid \'part\' argument was passed as argument";
  case 3:
    return "Malformed input to a URL function";
  case 4:
    return "Port number was not a decimal number between 0 and 65535";
  case 5:
    return "Unsupported URL scheme";
  case 6:
    return "URL decode error, most likely because of rubbish in the input";
  case 7:
    return "A memory function failed";
  case 8:
    return "Credentials was passed in the URL when prohibited";
  case 9:
    return "An unknown part ID was passed to a URL API function";
  case 10:
    return "No scheme part in the URL";
  case 0xb:
    return "No user part in the URL";
  case 0xc:
    return "No password part in the URL";
  case 0xd:
    return "No options part in the URL";
  case 0xe:
    return "No host part in the URL";
  case 0xf:
    return "No port part in the URL";
  case 0x10:
    return "No query part in the URL";
  case 0x11:
    return "No fragment part in the URL";
  case 0x12:
    return "No zoneid part in the URL";
  case 0x13:
    return "Bad file:// URL";
  case 0x14:
    return "Bad fragment";
  case 0x15:
    return "Bad hostname";
  case 0x16:
    return "Bad IPv6 address";
  case 0x17:
    return "Bad login part";
  case 0x18:
    return "Bad password";
  case 0x19:
    return "Bad path";
  case 0x1a:
    return "Bad query";
  case 0x1b:
    return "Bad scheme";
  case 0x1c:
    return "Unsupported number of slashes following scheme";
  case 0x1d:
    return "Bad user";
  case 0x1e:
    return "libcurl lacks IDN support";
  default:
    return "CURLUcode unknown";
  }
}



// FUNCTION 144bbe240 FUN_144bbe240 body=307 status=ok
// SIG undefined FUN_144bbe240(void)

char * FUN_144bbe240(int param_1,char *param_2,longlong param_3)

{
  int iVar1;
  DWORD dwErrCode;
  DWORD DVar2;
  int *piVar3;
  char **ppcVar4;
  longlong lVar5;
  char *pcVar6;
  size_t _Count;
  
  dwErrCode = GetLastError();
  piVar3 = _errno();
  iVar1 = *piVar3;
  if (param_3 == 0) {
    param_2 = (char *)0x0;
  }
  else {
    _Count = param_3 - 1;
    *param_2 = '\0';
    if ((param_1 < 0) || (piVar3 = __sys_nerr(), *piVar3 <= param_1)) {
      lVar5 = FUN_144bbe380(param_1,param_2,_Count);
      if ((lVar5 == 0) && (lVar5 = FUN_144bbe770(param_1,param_2,_Count), lVar5 == 0)) {
        FUN_144f2b7e0(param_2,_Count,"Unknown error %d (%#x)",param_1,param_1);
      }
    }
    else {
      ppcVar4 = __sys_errlist();
      strncpy(param_2,ppcVar4[param_1],_Count);
    }
    param_2[_Count] = '\0';
    pcVar6 = strrchr(param_2,10);
    if ((pcVar6 != (char *)0x0) && (1 < (longlong)pcVar6 - (longlong)param_2)) {
      *pcVar6 = '\0';
    }
    pcVar6 = strrchr(param_2,0xd);
    if ((pcVar6 != (char *)0x0) && (0 < (longlong)pcVar6 - (longlong)param_2)) {
      *pcVar6 = '\0';
    }
    piVar3 = _errno();
    if (*piVar3 != iVar1) {
      piVar3 = _errno();
      *piVar3 = iVar1;
    }
    DVar2 = GetLastError();
    if (dwErrCode != DVar2) {
      SetLastError(dwErrCode);
    }
  }
  return param_2;
}



// FUNCTION 144bbe380 FUN_144bbe380 body=709 status=ok
// SIG undefined FUN_144bbe380(void)

char * FUN_144bbe380(int param_1,char *param_2,size_t param_3)

{
  char *_Source;
  
  if (param_3 == 0) {
switchD_144bbe3d9_caseD_2715:
    return (char *)0x0;
  }
  *param_2 = '\0';
  if (param_1 < 0x2afa) {
    if (param_1 == 0x2af9) {
      _Source = "Host not found";
    }
    else {
      switch(param_1) {
      case 0x2714:
        _Source = "Call interrupted";
        break;
      default:
        goto switchD_144bbe3d9_caseD_2715;
      case 0x2719:
        _Source = "Bad file";
        break;
      case 0x271d:
        _Source = "Bad access";
        break;
      case 0x271e:
        _Source = "Bad argument";
        break;
      case 0x2726:
        _Source = "Invalid arguments";
        break;
      case 0x2728:
        _Source = "Out of file descriptors";
        break;
      case 0x2733:
        _Source = "Call would block";
        break;
      case 0x2734:
      case 0x2735:
        _Source = "Blocking call in progress";
        break;
      case 0x2736:
        _Source = "Descriptor is not a socket";
        break;
      case 0x2737:
        _Source = "Need destination address";
        break;
      case 0x2738:
        _Source = "Bad message size";
        break;
      case 0x2739:
        _Source = "Bad protocol";
        break;
      case 0x273a:
        _Source = "Protocol option is unsupported";
        break;
      case 0x273b:
        _Source = "Protocol is unsupported";
        break;
      case 0x273c:
        _Source = "Socket is unsupported";
        break;
      case 0x273d:
        _Source = "Operation not supported";
        break;
      case 0x273e:
        _Source = "Protocol family not supported";
        break;
      case 0x273f:
        _Source = "Address family not supported";
        break;
      case 0x2740:
        _Source = "Address already in use";
        break;
      case 0x2741:
        _Source = "Address not available";
        break;
      case 0x2742:
        _Source = "Network down";
        break;
      case 0x2743:
        _Source = "Network unreachable";
        break;
      case 0x2744:
        _Source = "Network has been reset";
        break;
      case 0x2745:
        _Source = "Connection was aborted";
        break;
      case 0x2746:
        _Source = "Connection was reset";
        break;
      case 0x2747:
        _Source = "No buffer space";
        break;
      case 0x2748:
        _Source = "Socket is already connected";
        break;
      case 0x2749:
        _Source = "Socket is not connected";
        break;
      case 0x274a:
        _Source = "Socket has been shut down";
        break;
      case 0x274b:
        _Source = "Too many references";
        break;
      case 0x274c:
        _Source = "Timed out";
        break;
      case 0x274d:
        _Source = "Connection refused";
        break;
      case 0x274e:
        _Source = "Loop??";
        break;
      case 0x274f:
        _Source = "Name too long";
        break;
      case 0x2750:
        _Source = "Host down";
        break;
      case 0x2751:
        _Source = "Host unreachable";
        break;
      case 0x2752:
        _Source = "Not empty";
        break;
      case 0x2753:
        _Source = "Process limit reached";
        break;
      case 0x2754:
        _Source = "Too many users";
        break;
      case 0x2755:
        _Source = "Bad quota";
        break;
      case 0x2756:
        _Source = "Something is stale";
        break;
      case 0x2757:
        _Source = "Remote error";
        break;
      case 0x276b:
        _Source = "Winsock library is not ready";
        break;
      case 0x276c:
        _Source = "Winsock version not supported";
        break;
      case 0x276d:
        _Source = "Winsock library not initialised";
        break;
      case 0x2775:
        _Source = "Disconnected";
      }
    }
  }
  else if (param_1 == 0x2afa) {
    _Source = "Host not found, try again";
  }
  else if (param_1 == 0x2afb) {
    _Source = "Unrecoverable error in call to nameserver";
  }
  else {
    if (param_1 != 0x2afc) {
      return (char *)0x0;
    }
    _Source = "No data record of requested type";
  }
  strncpy(param_2,_Source,param_3);
  param_2[param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 144bbe770 FUN_144bbe770 body=215 status=ok
// SIG undefined FUN_144bbe770(void)

void FUN_144bbe770(DWORD param_1,char *param_2,longlong param_3)

{
  DWORD DVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 auStackY_268 [32];
  WCHAR local_228 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_268;
  if (param_3 != 0) {
    *param_2 = '\0';
    local_228[0] = L'\0';
    DVar1 = FormatMessageW(0x1200,(LPCVOID)0x0,param_1,0,local_228,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      sVar2 = wcstombs(param_2,local_228,param_3 - 1);
      if (sVar2 == 0xffffffffffffffff) {
        *param_2 = '\0';
      }
      else {
        param_2[sVar2] = '\0';
      }
    }
    pcVar3 = strchr(param_2,10);
    if (pcVar3 != (char *)0x0) {
      if ((param_2 < pcVar3) && (pcVar3[-1] == '\r')) {
        pcVar3[-1] = '\0';
      }
      else {
        *pcVar3 = '\0';
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStackY_268);
}



// FUNCTION 144bbe860 FUN_144bbe860 body=66 status=ok
// SIG undefined FUN_144bbe860(void)

undefined4 * FUN_144bbe860(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)PTR_calloc_14c6d9f40)(1,0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] | 2;
    *puVar1 = 0x7e117a1e;
    FUN_144f1b5b0(puVar1 + 0x22,0x17);
  }
  return puVar1;
}



// FUNCTION 144bbe8b0 FUN_144bbe8b0 body=658 status=ok
// SIG undefined FUN_144bbe8b0(void)

undefined8 FUN_144bbe8b0(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int local_res18;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x7e117a1e)) {
    return 3;
  }
  if (param_1[2] != 0) {
    return 2;
  }
  local_res18 = (int)param_3;
  if (param_2 == 1) {
    switch(local_res18) {
    case 2:
      if (*(longlong *)(param_1 + 0x2e) == 0) {
        lVar2 = FUN_144f061a0(0,0,0,1);
        *(longlong *)(param_1 + 0x2e) = lVar2;
        if (lVar2 == 0) {
          return 4;
        }
      }
      break;
    case 3:
      break;
    case 4:
      if (*(longlong *)(param_1 + 0x32) == 0) {
        param_1[0x34] = 8;
        param_1[0x35] = 0;
        lVar2 = (*(code *)PTR_calloc_14c6d9f40)(8,0xa8);
        *(longlong *)(param_1 + 0x32) = lVar2;
        param_1[0x36] = 0;
        if (lVar2 == 0) {
          return 4;
        }
      }
      break;
    case 5:
      iVar1 = FUN_144f0aae0(param_1 + 10,0x67);
      if (iVar1 != 0) {
        return 4;
      }
      break;
    case 6:
      return 5;
    case 7:
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar2 = FUN_144f188d0();
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 == 0) {
          return 4;
        }
      }
      break;
    default:
      return 1;
    }
    param_1[1] = param_1[1] | 1 << ((byte)param_3 & 0x1f);
    return 0;
  }
  if (param_2 != 2) {
    if (param_2 == 3) {
      *(undefined8 *)(param_1 + 4) = param_3;
      return 0;
    }
    if (param_2 != 4) {
      if (param_2 != 5) {
        return 1;
      }
      *(undefined8 *)(param_1 + 8) = param_3;
      return 0;
    }
    *(undefined8 *)(param_1 + 6) = param_3;
    return 0;
  }
  param_1[1] = param_1[1] & ~(1 << ((byte)param_3 & 0x1f));
  if (local_res18 == 2) {
    if (*(longlong *)(param_1 + 0x2e) != 0) {
      FUN_144f060e0();
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      return 0;
    }
  }
  else if (local_res18 != 3) {
    if (local_res18 == 4) {
      (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x32));
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      return 0;
    }
    if (local_res18 != 5) {
      if (local_res18 != 7) {
        return 1;
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_144f18900();
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 144bbeb60 FUN_144bbeb60 body=305 status=ok
// SIG undefined FUN_144bbeb60(void)

undefined8 FUN_144bbeb60(int *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x7e117a1e)) {
    return 3;
  }
  if (*(code **)(param_1 + 4) != (code *)0x0) {
    (**(code **)(param_1 + 4))(0,1,2,*(undefined8 *)(param_1 + 8));
  }
  if (param_1[2] != 0) {
    if (*(code **)(param_1 + 6) != (code *)0x0) {
      (**(code **)(param_1 + 6))(0,1,*(undefined8 *)(param_1 + 8));
    }
    return 2;
  }
  FUN_144f0b5c0(param_1 + 10);
  FUN_144f0ab50(param_1 + 10);
  FUN_144f1ac00(param_1 + 0x22);
  FUN_144f060e0(*(undefined8 *)(param_1 + 0x2e));
  FUN_144f18900(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x32) != 0) {
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x34) != 0) {
      lVar1 = 0;
      do {
        FUN_144f0cf50(*(longlong *)(param_1 + 0x32) + lVar1);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0xa8;
      } while (uVar2 < *(ulonglong *)(param_1 + 0x34));
    }
    (*(code *)PTR_free_14c6d9f28)(*(undefined8 *)(param_1 + 0x32));
  }
  if (*(code **)(param_1 + 6) != (code *)0x0) {
    (**(code **)(param_1 + 6))(0,1,*(undefined8 *)(param_1 + 8));
  }
  *param_1 = 0;
  (*(code *)PTR_free_14c6d9f28)(param_1);
  return 0;
}



// FUNCTION 144bbeca0 FUN_144bbeca0 body=57 status=ok
// SIG undefined FUN_144bbeca0(void)

undefined8 FUN_144bbeca0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 == 0) {
    return 3;
  }
  if (((*(uint *)(lVar1 + 4) >> (param_2 & 0x1f) & 1) != 0) &&
     (*(code **)(lVar1 + 0x10) != (code *)0x0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  return 0;
}



// FUNCTION 144bbece0 FUN_144bbece0 body=57 status=ok
// SIG undefined FUN_144bbece0(void)

undefined8 FUN_144bbece0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 == 0) {
    return 3;
  }
  if (((*(uint *)(lVar1 + 4) >> (param_2 & 0x1f) & 1) != 0) &&
     (*(code **)(lVar1 + 0x18) != (code *)0x0)) {
    (**(code **)(lVar1 + 0x18))(param_1,param_2,*(undefined8 *)(lVar1 + 0x20));
  }
  return 0;
}



// FUNCTION 144bbed20 FUN_144bbed20 body=159 status=ok
// SIG undefined FUN_144bbed20(void)

longlong * FUN_144bbed20(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = (*(code *)PTR__strdup_14c6d9f38)(param_2);
  if (lVar4 == 0) {
    return (longlong *)0x0;
  }
  plVar5 = (longlong *)(*(code *)PTR_malloc_14c6d9f20)(0x10);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    *plVar5 = lVar4;
    if (param_1 != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[1];
      plVar2 = param_1;
      while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
        plVar3 = (longlong *)plVar1[1];
      }
      plVar2[1] = (longlong)plVar5;
      return param_1;
    }
    return plVar5;
  }
  (*(code *)PTR_free_14c6d9f28)(lVar4);
  return (longlong *)0x0;
}



// FUNCTION 144bbedc0 FUN_144bbedc0 body=197 status=ok
// SIG undefined FUN_144bbedc0(void)

longlong * FUN_144bbedc0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)0x0;
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return plVar1;
    }
    lVar5 = (*(code *)PTR__strdup_14c6d9f38)(*param_1);
    if (lVar5 == 0) goto joined_r0x000144bbee5e;
    plVar6 = (longlong *)(*(code *)PTR_malloc_14c6d9f20)(0x10);
    if (plVar6 == (longlong *)0x0) break;
    plVar6[1] = 0;
    *plVar6 = lVar5;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar1[1];
      plVar3 = plVar1;
      while (plVar2 = plVar4, plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
        plVar4 = (longlong *)plVar2[1];
      }
      plVar3[1] = (longlong)plVar6;
      plVar6 = plVar1;
    }
    param_1 = (undefined8 *)param_1[1];
    plVar1 = plVar6;
  }
  (*(code *)PTR_free_14c6d9f28)(lVar5);
joined_r0x000144bbee5e:
  while (plVar1 != (longlong *)0x0) {
    plVar6 = (longlong *)plVar1[1];
    (*(code *)PTR_free_14c6d9f28)(*plVar1);
    *plVar1 = 0;
    (*(code *)PTR_free_14c6d9f28)(plVar1);
    plVar1 = plVar6;
  }
  return (longlong *)0x0;
}



// FUNCTION 144bbee90 FUN_144bbee90 body=110 status=ok
// SIG undefined FUN_144bbee90(void)

undefined8 * FUN_144bbee90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*(code *)PTR_malloc_14c6d9f20)(0x10);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar4[1] = 0;
  *puVar4 = param_2;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined8 *)puVar1[1];
    }
    puVar2[1] = puVar4;
    puVar4 = param_1;
  }
  return puVar4;
}



// FUNCTION 144bbef00 FUN_144bbef00 body=24 status=ok
// SIG undefined FUN_144bbef00(void)

undefined1 FUN_144bbef00(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144f0d690(0,0x10);
  return uVar1;
}



// FUNCTION 144bbef20 FUN_144bbef20 body=200 status=ok
// SIG undefined FUN_144bbef20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144bbef20(void)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  thunk_FUN_1452b3920(&DAT_14c781c70,0x50);
  _DAT_14c6d9f78 = &DAT_14c781c70;
  _DAT_14c6d9f88 = FUN_144d907d0();
  lVar2 = FUN_144f2cd90(0);
  lVar5 = 0;
  ppuVar3 = &PTR_s_alt_svc_14997dc10;
  _DAT_14c6d9fd0 = *(undefined4 *)(lVar2 + 4);
  _DAT_14c6d9fd8 = *(undefined8 *)(lVar2 + 8);
  do {
    if (((code *)ppuVar3[1] == (code *)0x0) ||
       (iVar1 = (*(code *)ppuVar3[1])(&DAT_14c6d9f50), iVar1 != 0)) {
      uVar4 = uVar4 | *(uint *)(ppuVar3 + 2);
      (&DAT_14c781ad0)[lVar5] = *ppuVar3;
      lVar5 = lVar5 + 1;
    }
    ppuVar3 = ppuVar3 + 3;
  } while (*ppuVar3 != (undefined *)0x0);
  (&DAT_14c781ad0)[lVar5] = 0;
  _DAT_14c6d9f70 = uVar4;
  return &DAT_14c6d9f50;
}



// FUNCTION 144bbeff0 FUN_144bbeff0 body=42 status=ok
// SIG undefined FUN_144bbeff0(void)

void FUN_144bbeff0(undefined8 param_1)

{
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  FUN_144bbf020(param_1,0x43340000);
  return;
}



// FUNCTION 144bbf020 FUN_144bbf020 body=1903 status=ok
// SIG undefined FUN_144bbf020(void)

void FUN_144bbf020(longlong *param_1,float param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *_Memory;
  void *_Memory_00;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  void *pvVar11;
  void *pvVar12;
  int iVar13;
  longlong lVar14;
  void *pvVar15;
  ulonglong uVar16;
  float fVar17;
  void *pvVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_168 [32];
  void *local_148;
  float local_140;
  longlong *local_138;
  int local_130;
  int local_128;
  int local_124;
  float local_120;
  longlong local_118;
  float local_110;
  longlong local_108;
  void *local_100;
  void *local_f8;
  void *local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  void *local_d8;
  float local_d0;
  longlong local_c8 [2];
  void *local_b8 [2];
  void *local_a8 [2];
  undefined8 local_98;
  float local_90;
  longlong *local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_88 = param_1;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  fVar17 = 0.0;
  iVar3 = (**(code **)*param_1)(param_1);
  local_e0 = iVar3;
  dVar22 = cos((double)((param_2 * 3.1415927) / 180.0));
  plVar7 = (longlong *)*param_1;
  if (((((*plVar7 == 0) || (plVar7[1] == 0)) || (plVar7[2] == 0)) ||
      ((plVar7[3] == 0 || (plVar7[4] == 0)))) || (iVar13 = 0, iVar3 < 1)) goto LAB_144bbf539;
  do {
    iVar4 = (**(code **)(*param_1 + 8))(param_1,iVar13);
    if (iVar4 == 3) {
      fVar17 = (float)((int)fVar17 + 1);
    }
    else if (iVar4 == 4) {
      fVar17 = (float)((int)fVar17 + 2);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < iVar3);
  if ((int)fVar17 < 1) goto LAB_144bbf539;
  _Memory = malloc((longlong)(int)fVar17 * 0xc);
  local_f8 = _Memory;
  _Memory_00 = malloc((longlong)(int)fVar17 * 0x58);
  local_f0 = _Memory_00;
  if (_Memory == (void *)0x0) {
    if (_Memory_00 != (void *)0x0) {
      free(_Memory_00);
    }
    goto LAB_144bbf539;
  }
  if (_Memory_00 == (void *)0x0) {
    free(_Memory);
    goto LAB_144bbf539;
  }
  local_e4 = FUN_144bbf7c0(_Memory_00,_Memory,param_1,fVar17);
  FUN_144bbfc40(_Memory,param_1,fVar17);
  local_128 = 0;
  local_120 = fVar17;
  if (0 < (int)fVar17) {
    puVar10 = (undefined4 *)((longlong)_Memory + 8);
    puVar21 = (uint *)((longlong)_Memory_00 + 0x4c);
    lVar14 = (longlong)(int)fVar17;
    do {
      uVar23 = puVar10[-1];
      uVar1 = *puVar10;
      puVar6 = (undefined8 *)FUN_144bc1890(local_a8,param_1,puVar10[-2]);
      pvVar15 = (void *)*puVar6;
      fVar25 = (float)((ulonglong)pvVar15 >> 0x20);
      local_d0 = *(float *)(puVar6 + 1);
      plVar7 = (longlong *)FUN_144bc1890(local_b8,param_1,uVar23);
      lVar19 = *plVar7;
      fVar24 = (float)((ulonglong)lVar19 >> 0x20);
      local_110 = *(float *)(plVar7 + 1);
      puVar8 = (ulonglong *)FUN_144bc1890(local_c8,param_1,uVar1);
      uVar16 = *puVar8;
      local_90 = *(float *)(puVar8 + 1);
      local_d8._0_4_ = SUB84(pvVar15,0);
      local_118._0_4_ = (float)lVar19;
      if (((local_d8._0_4_ == (float)local_118) && (fVar25 == fVar24)) && (local_d0 == local_110)) {
LAB_144bbf28a:
        *puVar21 = *puVar21 | 1;
        local_128 = local_128 + 1;
      }
      else {
        local_98._0_4_ = (float)uVar16;
        local_98._4_4_ = (float)(uVar16 >> 0x20);
        if ((((local_d8._0_4_ == (float)local_98) && (fVar25 == local_98._4_4_)) &&
            (local_d0 == local_90)) ||
           ((((float)local_118 == (float)local_98 && (fVar24 == local_98._4_4_)) &&
            (local_110 == local_90)))) goto LAB_144bbf28a;
      }
      puVar10 = puVar10 + 3;
      puVar21 = puVar21 + 0x16;
      lVar14 = lVar14 + -1;
      _Memory_00 = local_f0;
      _Memory = local_f8;
      local_118 = lVar19;
      local_d8 = pvVar15;
      local_98 = uVar16;
    } while (lVar14 != 0);
  }
  iVar3 = (int)fVar17 - local_128;
  local_e8 = iVar3;
  FUN_144bc1920(_Memory_00,_Memory,iVar3,local_120);
  FUN_144bc0220(_Memory_00,_Memory,param_1,iVar3);
  local_100 = malloc((longlong)(iVar3 * 3) * 0x18);
  local_118 = (longlong)iVar3;
  local_b8[0] = malloc(local_118 * 0xc);
  if (local_100 == (void *)0x0) {
    pvVar15 = local_b8[0];
    if (local_b8[0] != (void *)0x0) goto LAB_144bbf779;
LAB_144bbf77f:
    free(_Memory);
  }
  else {
    pvVar15 = local_100;
    if (local_b8[0] == (void *)0x0) {
LAB_144bbf779:
      free(pvVar15);
      goto LAB_144bbf77f;
    }
    local_128 = 0;
    local_124 = 0;
    if (0 < iVar3) {
      uVar16 = 0;
      local_c8[0] = 0;
      local_f8 = (void *)0x0;
      local_f0 = (void *)0x2;
      pvVar15 = _Memory_00;
      uVar20 = uVar16;
      do {
        iVar13 = 0;
        pvVar12 = (void *)((longlong)local_100 + uVar16 * 0x18);
        lVar14 = 0;
        local_108 = -4;
        pvVar11 = local_f0;
        pvVar18 = local_f8;
        iVar3 = local_124;
        local_a8[0] = pvVar15;
        do {
          if (((*(byte *)((longlong)pvVar15 + 0x4c) & 4) == 0) &&
             (lVar19 = (longlong)pvVar11 + lVar14,
             *(longlong *)((longlong)_Memory_00 + lVar19 * 8) == 0)) {
            local_98 = uVar16 + 1;
            local_128 = local_128 + 1;
            uVar23 = *(undefined4 *)((longlong)_Memory + (local_c8[0] + lVar14) * 4);
            *(void **)((longlong)_Memory_00 + lVar19 * 8) = pvVar12;
            *(undefined4 *)((longlong)pvVar12 + 0x10) = uVar23;
            local_d8 = (void *)((longlong)pvVar12 + 0x18);
            *(uint *)(*(longlong *)((longlong)_Memory_00 + lVar19 * 8) + 0x14) =
                 *(uint *)((longlong)pvVar15 + 0x4c) >> 3 & 1;
            **(undefined4 **)((longlong)_Memory_00 + lVar19 * 8) = 0;
            *(void **)(*(longlong *)((longlong)_Memory_00 + lVar19 * 8) + 8) =
                 (void *)((longlong)local_b8[0] + (longlong)(int)uVar20 * 4);
            piVar2 = *(int **)((longlong)_Memory_00 + lVar19 * 8);
            *(int *)(*(longlong *)(piVar2 + 2) + (longlong)*piVar2 * 4) = iVar3;
            *piVar2 = *piVar2 + 1;
            iVar3 = *(int *)((longlong)_Memory_00 + ((longlong)pvVar18 + lVar14) * 4);
            lVar9 = 8;
            if (0 < iVar13) {
              lVar9 = local_108;
            }
            iVar4 = *(int *)((longlong)pvVar15 + lVar9);
            if (-1 < iVar3) {
              FUN_144bc32c0(_Memory,_Memory_00,iVar3,
                            *(undefined8 *)((longlong)_Memory_00 + lVar19 * 8));
            }
            if (-1 < iVar4) {
              FUN_144bc32c0(_Memory,_Memory_00,iVar4,
                            *(undefined8 *)((longlong)_Memory_00 + lVar19 * 8));
            }
            uVar20 = (ulonglong)(uint)((int)uVar20 + **(int **)((longlong)_Memory_00 + lVar19 * 8));
            pvVar11 = local_f0;
            pvVar12 = local_d8;
            pvVar15 = local_a8[0];
            uVar16 = local_98;
            pvVar18 = local_f8;
            iVar3 = local_124;
          }
          local_108 = local_108 + 4;
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 1;
        } while (iVar13 < 3);
        local_c8[0] = local_c8[0] + 3;
        local_124 = iVar3 + 1;
        pvVar15 = (void *)((longlong)pvVar15 + 0x58);
        local_f8 = (void *)((longlong)pvVar18 + 0x16);
        local_f0 = (void *)((longlong)pvVar11 + 0xb);
        local_118 = local_118 + -1;
      } while (local_118 != 0);
      local_118 = 0;
      param_1 = local_88;
      iVar3 = local_e8;
      local_a8[0] = pvVar15;
    }
    lVar14 = (longlong)local_e4;
    pvVar15 = malloc(lVar14 * 0x28);
    if (pvVar15 == (void *)0x0) {
      free(_Memory);
      free(_Memory_00);
      free(local_100);
      _Memory_00 = local_b8[0];
    }
    else {
      memset(pvVar15,0,lVar14 * 0x28);
      if (0 < lVar14) {
        puVar10 = (undefined4 *)((longlong)pvVar15 + 8);
        do {
          *(undefined8 *)(puVar10 + -2) = 0x3f800000;
          *puVar10 = 0;
          *(undefined8 *)(puVar10 + 1) = 0x3f800000;
          *(undefined8 *)(puVar10 + 3) = 0x3f800000;
          puVar10[5] = 0x3f800000;
          puVar10 = puVar10 + 10;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      local_148 = _Memory;
      local_140 = (float)dVar22;
      local_138 = param_1;
      iVar13 = FUN_144bc0890(pvVar15,_Memory_00,local_100,local_128);
      free(local_100);
      free(local_b8[0]);
      if (iVar13 != 0) {
        if ((int)param_1[2] == 0) {
          local_140 = local_120;
          local_148 = (void *)CONCAT44(local_148._4_4_,iVar3);
          FUN_144bc1b90(pvVar15,_Memory_00,_Memory,param_1);
        }
        free(_Memory_00);
        free(_Memory);
        iVar3 = 0;
        lVar14 = 0;
        do {
          uVar5 = (**(code **)(*param_1 + 8))(param_1,iVar3);
          lVar19 = lVar14;
          if ((uVar5 - 3 < 2) && (iVar13 = 0, 0 < (int)uVar5)) {
            lVar19 = lVar14 + (ulonglong)uVar5;
            puVar10 = (undefined4 *)((longlong)pvVar15 + lVar14 * 0x28 + 8);
            do {
              local_88 = *(longlong **)(puVar10 + -2);
              lVar14 = *param_1;
              local_80 = *puVar10;
              local_98 = *(ulonglong *)(puVar10 + 2);
              local_90 = (float)puVar10[4];
              if (*(code **)(lVar14 + 0x30) != (code *)0x0) {
                local_140 = (float)puVar10[7];
                local_138 = (longlong *)CONCAT44(local_138._4_4_,iVar3);
                local_148 = (void *)CONCAT44(local_148._4_4_,puVar10[5]);
                local_130 = iVar13;
                (**(code **)(lVar14 + 0x30))(param_1,&local_88,&local_98,puVar10[1]);
                lVar14 = *param_1;
              }
              if (*(code **)(lVar14 + 0x28) != (code *)0x0) {
                if (puVar10[7] == 1) {
                  uVar23 = 0x3f800000;
                }
                else {
                  uVar23 = 0xbf800000;
                }
                local_148 = (void *)CONCAT44(local_148._4_4_,iVar13);
                (**(code **)(lVar14 + 0x28))(param_1,&local_88,uVar23,iVar3);
              }
              puVar10 = puVar10 + 10;
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)uVar5);
          }
          iVar3 = iVar3 + 1;
          lVar14 = lVar19;
        } while (iVar3 < local_e0);
        free(pvVar15);
        goto LAB_144bbf539;
      }
      free(_Memory_00);
      free(_Memory);
      _Memory_00 = pvVar15;
    }
  }
  free(_Memory_00);
LAB_144bbf539:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_78 ^ (ulonglong)auStack_168);
}



// FUNCTION 144bbf7c0 FUN_144bbf7c0 body=1132 status=ok
// SIG undefined FUN_144bbf7c0(void)

void FUN_144bbf7c0(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  int local_118;
  ulonglong local_110;
  int local_108;
  undefined4 local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint *local_e8;
  undefined4 *local_e0;
  undefined2 *local_d8;
  uint *local_d0;
  uint *local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f0 = param_4;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  uVar5 = 0;
  local_128 = 0;
  local_118 = 0;
  local_11c = 0;
  iVar2 = (**(code **)*param_3)(param_3);
  if (0 < iVar2) {
    local_d8 = (undefined2 *)(param_1 + 0x54);
    local_e0 = (undefined4 *)(param_1 + 0x50);
    local_e8 = (uint *)(param_1 + 0x48);
    local_a0 = 0;
    local_c8 = (uint *)(param_1 + 0xa8);
    local_d0 = (uint *)(param_1 + 0xa0);
    uVar8 = uVar5;
    uVar10 = uVar5;
    uVar11 = uVar5;
    do {
      uVar7 = (uint)uVar8;
      uVar3 = (**(code **)(*param_3 + 8))(param_3,uVar8);
      local_f4 = (int)uVar3;
      uVar3 = uVar3 & 0xffffffff;
      if (local_f4 - 3U < 2) {
        *local_e8 = uVar7;
        uVar7 = uVar7 * 4;
        *local_e0 = (int)uVar10;
        uVar9 = uVar7 | 1;
        local_120 = uVar7 | 2;
        if (local_f4 == 3) {
          lVar4 = 0x58;
          local_110 = 0xc;
          *local_d8 = 0x100;
          *(undefined1 *)(local_d8 + 1) = 2;
          *(uint *)(uVar5 + 8 + param_2) = local_120;
          uVar3 = 1;
          *(uint *)(uVar5 + param_2) = uVar7;
          *(uint *)(uVar5 + 4 + param_2) = uVar9;
        }
        else {
          *local_d0 = local_11c;
          *local_c8 = local_128;
          local_124 = uVar7 | 3;
          local_108 = (int)uVar7 >> 2;
          (**(code **)(*param_3 + 0x20))(param_3,&local_b8,local_108,0);
          local_100 = (int)uVar9 >> 2;
          local_104 = 1;
          (**(code **)(*param_3 + 0x20))(param_3,&local_a8,local_100,1);
          local_fc = local_120 & 3;
          local_f8 = (int)local_120 >> 2;
          (**(code **)(*param_3 + 0x20))(param_3,&local_c0,local_f8,local_fc);
          local_110 = CONCAT44(local_110._4_4_,(int)local_124 >> 2);
          (**(code **)(*param_3 + 0x20))(param_3,&local_b0,(int)local_124 >> 2,3);
          fVar12 = (local_bc - local_b4) * (local_bc - local_b4) +
                   (local_c0 - local_b8) * (local_c0 - local_b8) + 0.0;
          fVar13 = (local_ac - local_a4) * (local_ac - local_a4) +
                   (local_b0 - local_a8) * (local_b0 - local_a8) + 0.0;
          if (fVar13 <= fVar12) {
            if (fVar12 <= fVar13) {
              (**(code **)(*param_3 + 0x10))(param_3,&local_88,local_108,0);
              (**(code **)(*param_3 + 0x10))(param_3,&local_68,local_100,local_104);
              (**(code **)(*param_3 + 0x10))(param_3,&local_98,local_f8,local_fc);
              (**(code **)(*param_3 + 0x10))(param_3,&local_78,local_110 & 0xffffffff,3);
              bVar1 = (local_94 - local_84) * (local_94 - local_84) +
                      (local_98 - local_88) * (local_98 - local_88) +
                      (local_90 - local_80) * (local_90 - local_80) <=
                      (local_74 - local_64) * (local_74 - local_64) +
                      (local_78 - local_68) * (local_78 - local_68) +
                      (local_70 - local_60) * (local_70 - local_60);
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
          *(undefined2 *)(uVar11 + 0x54 + param_1) = 0x100;
          lVar4 = 0xb0;
          local_110 = 0x18;
          if (bVar1) {
            *(undefined1 *)(uVar11 + 0x56 + param_1) = 2;
            *(uint *)(uVar5 + 8 + param_2) = local_120;
            *(uint *)(uVar5 + param_2) = uVar7;
            *(uint *)(uVar5 + 4 + param_2) = uVar9;
            *(undefined2 *)(param_1 + 0xac + uVar11) = 0x200;
            *(undefined1 *)(param_1 + 0xae + uVar11) = 3;
            *(uint *)(uVar5 + 0x10 + param_2) = local_120;
            *(uint *)(uVar5 + 0x14 + param_2) = local_124;
            *(uint *)(uVar5 + 0xc + param_2) = uVar7;
          }
          else {
            *(undefined1 *)(uVar11 + 0x56 + param_1) = 3;
            *(uint *)(uVar5 + param_2) = uVar7;
            *(uint *)(uVar5 + 4 + param_2) = uVar9;
            *(uint *)(uVar5 + 8 + param_2) = local_124;
            *(undefined2 *)(param_1 + 0xac + uVar11) = 0x201;
            *(undefined1 *)(param_1 + 0xae + uVar11) = 3;
            *(uint *)(uVar5 + 0xc + param_2) = uVar9;
            *(uint *)(uVar5 + 0x10 + param_2) = local_120;
            *(uint *)(uVar5 + 0x14 + param_2) = local_124;
          }
          uVar3 = 2;
        }
        local_128 = local_128 + local_f4;
        local_118 = local_118 + (int)uVar3;
        uVar11 = uVar11 + lVar4;
        local_a0 = local_a0 + uVar3;
        local_e8 = (uint *)((longlong)local_e8 + lVar4);
        local_e0 = (undefined4 *)((longlong)local_e0 + lVar4);
        local_d8 = (undefined2 *)((longlong)local_d8 + lVar4);
        local_d0 = (uint *)((longlong)local_d0 + lVar4);
        local_c8 = (uint *)((longlong)local_c8 + lVar4);
        uVar5 = uVar5 + local_110;
        uVar10 = (ulonglong)local_128;
        uVar7 = local_11c;
      }
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      local_11c = uVar7;
      iVar2 = (**(code **)*param_3)(param_3,uVar3);
    } while ((int)uVar7 < iVar2);
  }
  lVar4 = (longlong)local_f0;
  if (0 < lVar4) {
    puVar6 = (undefined4 *)(param_1 + 0x4c);
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 0x16;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_148);
}



// FUNCTION 144bbfc40 FUN_144bbfc40 body=1465 status=ok
// SIG undefined FUN_144bbfc40(void)

void FUN_144bbfc40(uint *param_1,longlong *param_2,int param_3)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  uint *_Memory;
  void *pvVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_138 [32];
  int local_118;
  int local_108;
  undefined4 *local_100;
  uint *local_f8;
  void *local_f0;
  longlong local_e8;
  longlong local_e0;
  uint *local_d8;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = param_1;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  (**(code **)(*param_2 + 0x10))(param_2,&local_c8,0,0);
  local_108 = param_3 * 3;
  lVar18 = (longlong)local_108;
  if (1 < lVar18) {
    lVar14 = 1;
    fVar27 = local_c8._4_4_;
    fVar29 = local_c0;
    fVar31 = local_c8._4_4_;
    fVar32 = local_c0;
    fVar33 = (float)local_c8;
    fVar28 = (float)local_c8;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,&local_c8,(int)param_1[lVar14] >> 2,param_1[lVar14] & 3);
      fVar34 = (float)local_c8;
      if ((fVar28 <= (float)local_c8) && (fVar34 = fVar28, fVar33 < (float)local_c8)) {
        fVar33 = (float)local_c8;
      }
      fVar28 = local_c8._4_4_;
      if ((fVar27 <= local_c8._4_4_) && (fVar28 = fVar27, fVar31 < local_c8._4_4_)) {
        fVar31 = local_c8._4_4_;
      }
      fVar30 = local_c0;
      if ((fVar29 <= local_c0) && (fVar30 = fVar29, fVar32 < local_c0)) {
        fVar32 = local_c0;
      }
      lVar14 = lVar14 + 1;
      fVar27 = fVar28;
      fVar29 = fVar30;
      fVar28 = fVar34;
    } while (lVar14 < lVar18);
  }
  pvVar9 = malloc((longlong)param_3 * 0xc);
  local_f0 = pvVar9;
  _Memory = malloc(0x2000);
  local_d8 = _Memory;
  local_100 = malloc(0x2000);
  pvVar10 = malloc(0x2000);
  if (pvVar9 != (void *)0x0) {
    if (((_Memory != (uint *)0x0) && (local_100 != (undefined4 *)0x0)) && (pvVar10 != (void *)0x0))
    {
      memset(_Memory,0,0x2000);
      memset(pvVar10,0,0x2000);
      if (0 < lVar18) {
        lVar14 = 0;
        do {
          (**(code **)(*param_2 + 0x10))
                    (param_2,&local_c8,(int)param_1[lVar14] >> 2,param_1[lVar14] & 3);
          iVar7 = FUN_144bc1fc0();
          lVar14 = lVar14 + 1;
          _Memory[iVar7] = _Memory[iVar7] + 1;
        } while (lVar14 < lVar18);
      }
      puVar16 = local_100;
      iVar7 = local_108;
      lVar18 = 0x7ff;
      local_e8 = (longlong)local_100 - (longlong)_Memory;
      *local_100 = 0;
      puVar12 = _Memory;
      do {
        *(uint *)(local_e8 + 4 + (longlong)puVar12) =
             *(int *)(local_e8 + (longlong)puVar12) + *puVar12;
        puVar12 = puVar12 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      iVar15 = 0;
      if (0 < local_108) {
        do {
          (**(code **)(*param_2 + 0x10))(param_2,&local_c8,(int)*param_1 >> 2,*param_1 & 3);
          iVar8 = FUN_144bc1fc0();
          lVar18 = (longlong)iVar8;
          param_1 = param_1 + 1;
          *(int *)((longlong)pvVar9 +
                  ((longlong)(int)puVar16[lVar18] +
                  (longlong)*(int *)((longlong)pvVar10 + lVar18 * 4)) * 4) = iVar15;
          iVar15 = iVar15 + 1;
          piVar2 = (int *)((longlong)pvVar10 + lVar18 * 4);
          *piVar2 = *piVar2 + 1;
          _Memory = local_d8;
        } while (iVar15 < iVar7);
      }
      lVar18 = local_e8;
      free(pvVar10);
      uVar23 = *_Memory;
      if (DAT_14c707900 < 2) {
        lVar14 = 1;
      }
      else {
        lVar11 = 1;
        lVar14 = 0x7f9;
        uVar24 = uVar23;
        uVar25 = uVar23;
        uVar26 = uVar23;
        uVar19 = uVar23;
        uVar20 = uVar23;
        uVar21 = uVar23;
        uVar22 = uVar23;
        do {
          puVar12 = _Memory + lVar11;
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          uVar19 = ((int)uVar19 < (int)uVar3) * uVar3 | ((int)uVar19 >= (int)uVar3) * uVar19;
          uVar20 = ((int)uVar20 < (int)uVar4) * uVar4 | ((int)uVar20 >= (int)uVar4) * uVar20;
          uVar21 = ((int)uVar21 < (int)uVar5) * uVar5 | ((int)uVar21 >= (int)uVar5) * uVar21;
          uVar22 = ((int)uVar22 < (int)uVar6) * uVar6 | ((int)uVar22 >= (int)uVar6) * uVar22;
          puVar12 = _Memory + lVar11 + 4;
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          lVar11 = lVar11 + 8;
          uVar23 = ((int)uVar23 < (int)uVar3) * uVar3 | ((int)uVar23 >= (int)uVar3) * uVar23;
          uVar24 = ((int)uVar24 < (int)uVar4) * uVar4 | ((int)uVar24 >= (int)uVar4) * uVar24;
          uVar25 = ((int)uVar25 < (int)uVar5) * uVar5 | ((int)uVar25 >= (int)uVar5) * uVar25;
          uVar26 = ((int)uVar26 < (int)uVar6) * uVar6 | ((int)uVar26 >= (int)uVar6) * uVar26;
        } while (lVar11 < 0x7f9);
        uVar23 = ((int)uVar19 < (int)uVar23) * uVar23 | ((int)uVar19 >= (int)uVar23) * uVar19;
        uVar24 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
        uVar25 = ((int)uVar21 < (int)uVar25) * uVar25 | ((int)uVar21 >= (int)uVar25) * uVar21;
        uVar26 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
        uVar23 = ((int)uVar23 < (int)uVar25) * uVar25 | ((int)uVar23 >= (int)uVar25) * uVar23;
        uVar24 = ((int)uVar24 < (int)uVar26) * uVar26 | ((int)uVar24 >= (int)uVar26) * uVar24;
        uVar23 = ((int)uVar23 < (int)uVar24) * uVar24 | ((int)uVar23 >= (int)uVar24) * uVar23;
      }
      uVar13 = (ulonglong)uVar23;
      lVar11 = 0x800;
      local_e0 = 0x800;
      puVar12 = _Memory + lVar14;
      uVar17 = (ulonglong)(0x800 - (int)lVar14);
      do {
        uVar23 = *puVar12;
        puVar12 = puVar12 + 1;
        if ((int)uVar23 <= (int)(uint)uVar13) {
          uVar23 = (uint)uVar13;
        }
        uVar13 = (ulonglong)(int)uVar23;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      pvVar10 = malloc(uVar13 << 4);
      pvVar9 = local_f0;
      local_c8 = pvVar10;
      do {
        puVar12 = local_f8;
        uVar23 = *_Memory;
        pvVar1 = (void *)((longlong)pvVar9 + (longlong)*(int *)((longlong)_Memory + lVar18) * 4);
        if (1 < (int)uVar23) {
          if (pvVar10 == (void *)0x0) {
            FUN_144bc2620(local_f8,param_2,pvVar1,uVar23);
          }
          else {
            lVar18 = 0;
            if (0 < (int)uVar23) {
              puVar16 = (undefined4 *)((longlong)pvVar10 + 8);
              do {
                iVar7 = *(int *)((longlong)pvVar1 + lVar18 * 4);
                (**(code **)(*param_2 + 0x10))
                          (param_2,&local_b8,(int)puVar12[iVar7] >> 2,puVar12[iVar7] & 3);
                lVar18 = lVar18 + 1;
                puVar16[-2] = local_b8;
                *puVar16 = local_b0;
                puVar16[-1] = local_b4;
                puVar16[1] = iVar7;
                puVar16 = puVar16 + 4;
                lVar11 = local_e0;
                pvVar9 = local_f0;
                pvVar10 = local_c8;
              } while (lVar18 < (int)uVar23);
            }
            local_118 = uVar23 - 1;
            FUN_144bc2040(local_f8,pvVar10,param_2,0);
            lVar18 = local_e8;
          }
        }
        _Memory = _Memory + 1;
        lVar11 = lVar11 + -1;
        local_e0 = lVar11;
      } while (lVar11 != 0);
      if (pvVar10 != (void *)0x0) {
        free(pvVar10);
      }
      free(pvVar9);
      free(local_d8);
      free(local_100);
      goto LAB_144bc01e9;
    }
    free(pvVar9);
  }
  if (_Memory != (uint *)0x0) {
    free(_Memory);
  }
  if (local_100 != (undefined4 *)0x0) {
    free(local_100);
  }
  if (pvVar10 != (void *)0x0) {
    free(pvVar10);
  }
  FUN_144bc28f0(param_1,param_2,param_3);
LAB_144bc01e9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a8 ^ (ulonglong)auStack_138);
}



// FUNCTION 144bc0220 FUN_144bc0220 body=1619 status=ok
// SIG undefined FUN_144bc0220(void)

void FUN_144bc0220(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Memory;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_198 [32];
  uint local_178;
  int local_174;
  float local_170;
  longlong *local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  longlong local_148;
  float local_138;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar10 = (longlong)param_4;
  local_174 = param_4;
  local_168 = param_3;
  local_148 = param_1;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  plVar5 = local_168;
  uVar12 = 0;
  local_178 = 0;
  if (0 < param_4) {
    lVar6 = param_1 + 0x2c;
    puVar7 = (undefined4 *)(param_1 + 8);
    puVar8 = (undefined8 *)(param_1 + 0x18);
    lVar11 = lVar10;
    do {
      puVar7[-2] = 0xffffffff;
      puVar8[-1] = 0;
      *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 4;
      puVar7[-1] = 0xffffffff;
      *puVar8 = 0;
      *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 4;
      *puVar7 = 0xffffffff;
      puVar8[1] = 0;
      *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 4;
      *(undefined8 *)(lVar6 + -4) = 0;
      *(undefined8 *)(lVar6 + 4) = 0;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      lVar11 = lVar11 + -1;
      lVar6 = lVar6 + 0x58;
      puVar7 = puVar7 + 0x16;
      puVar8 = puVar8 + 0xb;
    } while (lVar11 != 0);
    puVar8 = (undefined8 *)(param_1 + 0x34);
    do {
      (**(code **)(*plVar5 + 0x10))
                (plVar5,&local_110,(int)*(uint *)(uVar12 + param_2) >> 2,
                 *(uint *)(uVar12 + param_2) & 3);
      uVar9 = *(uint *)(uVar12 + 4 + param_2);
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_120,(int)uVar9 >> 2,uVar9 & 3);
      uVar9 = *(uint *)(uVar12 + 8 + param_2);
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_100,(int)uVar9 >> 2,uVar9 & 3);
      (**(code **)(*plVar5 + 0x20))
                (plVar5,&local_158,(int)*(uint *)(uVar12 + param_2) >> 2,
                 *(uint *)(uVar12 + param_2) & 3);
      uVar9 = *(uint *)(uVar12 + 4 + param_2);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_160,(int)uVar9 >> 2,uVar9 & 3);
      uVar9 = *(uint *)(uVar12 + 8 + param_2);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_150,(int)uVar9 >> 2,uVar9 & 3);
      fVar17 = local_14c - local_154;
      fVar16 = local_15c - local_154;
      fVar18 = local_160 - local_158;
      fVar19 = fVar17 * fVar18 - (local_150 - local_158) * fVar16;
      fVar20 = -(local_150 - local_158);
      fVar23 = (local_120 - local_110) * fVar17 - (local_100 - local_110) * fVar16;
      local_170 = (local_11c - local_10c) * fVar17 - (local_fc - local_10c) * fVar16;
      uVar9 = 0;
      if (0.0 < fVar19) {
        uVar9 = 8;
      }
      uVar13 = *(uint *)(puVar8 + 3);
      *(uint *)(puVar8 + 3) = uVar9 | uVar13;
      fVar21 = (local_118 - local_108) * fVar20 + (local_f8 - local_108) * fVar18;
      fVar22 = (local_118 - local_108) * fVar17 - (local_f8 - local_108) * fVar16;
      fVar19 = ABS(fVar19);
      fVar16 = (local_120 - local_110) * fVar20 + (local_100 - local_110) * fVar18;
      fVar17 = (local_11c - local_10c) * fVar20 + (local_fc - local_10c) * fVar18;
      if (1.1754944e-38 < fVar19) {
        fVar18 = sqrtf(local_170 * local_170 + fVar23 * fVar23 + fVar22 * fVar22);
        fVar20 = sqrtf(fVar17 * fVar17 + fVar16 * fVar16 + fVar21 * fVar21);
        if (uVar9 == 0 && (uVar13 & 8) == 0) {
          fVar15 = -1.0;
        }
        else {
          fVar15 = 1.0;
        }
        if (1.1754944e-38 < ABS(fVar18)) {
          fVar14 = fVar15 / fVar18;
          local_138 = fVar22 * fVar14;
          *(ulonglong *)((longlong)puVar8 + -0xc) = CONCAT44(local_170 * fVar14,fVar23 * fVar14);
          *(float *)((longlong)puVar8 + -4) = local_138;
        }
        if (1.1754944e-38 < ABS(fVar20)) {
          fVar15 = fVar15 / fVar20;
          local_128 = fVar21 * fVar15;
          *puVar8 = CONCAT44(fVar17 * fVar15,fVar16 * fVar15);
          *(float *)(puVar8 + 1) = local_128;
        }
        *(float *)((longlong)puVar8 + 0xc) = fVar18 / fVar19;
        *(float *)(puVar8 + 2) = fVar20 / fVar19;
        if ((1.1754944e-38 < ABS(fVar18 / fVar19)) && (1.1754944e-38 < ABS(fVar20 / fVar19))) {
          *(uint *)(puVar8 + 3) = uVar9 | uVar13 & 0xfffffffb;
        }
      }
      uVar12 = uVar12 + 0xc;
      puVar8 = puVar8 + 0xb;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar12 = (ulonglong)local_178;
    param_1 = local_148;
    param_4 = local_174;
  }
  lVar10 = 0;
  local_178 = param_4 + -1;
  uVar9 = local_178;
  if (0 < (int)local_178) {
    do {
      lVar6 = lVar10 + 1;
      if (*(int *)(lVar10 * 0x58 + 0x48 + param_1) == *(int *)(lVar6 * 0x58 + 0x48 + param_1)) {
        uVar13 = *(uint *)(lVar10 * 0x58 + 0x4c + param_1);
        if ((((uVar13 & 1) == 0) &&
            (uVar2 = *(uint *)(lVar6 * 0x58 + 0x4c + param_1), (uVar2 & 1) == 0)) &&
           (((uVar13 ^ uVar2) & 8) != 0)) {
          bVar4 = false;
          if ((uVar2 & 4) == 0) {
            iVar3 = (int)uVar12 * 3;
            fVar19 = (float)FUN_144bc31f0(local_168,(longlong)iVar3 * 4 + param_2);
            fVar16 = (float)FUN_144bc31f0(local_168,(longlong)(iVar3 + 3) * 4 + param_2);
            lVar11 = lVar6;
            if (fVar16 <= fVar19) goto LAB_144bc07b5;
          }
          else {
LAB_144bc07b5:
            bVar4 = true;
            lVar11 = lVar10;
          }
          if (!bVar4) {
            lVar6 = lVar10;
          }
          puVar1 = (uint *)(lVar6 * 0x58 + 0x4c + param_1);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar1 = (uint *)(lVar6 * 0x58 + 0x4c + param_1);
          *puVar1 = *puVar1 | *(uint *)(lVar11 * 0x58 + 0x4c + param_1) & 8;
          uVar9 = local_178;
        }
        lVar6 = 2;
      }
      else {
        lVar6 = 1;
      }
      uVar13 = (int)uVar12 + (int)lVar6;
      uVar12 = (ulonglong)uVar13;
      lVar10 = lVar10 + lVar6;
      param_4 = local_174;
    } while ((int)uVar13 < (int)uVar9);
  }
  _Memory = malloc((longlong)param_4 * 0x24);
  if (_Memory == (void *)0x0) {
    FUN_144bc2fb0(param_1,param_2,param_4);
  }
  else {
    FUN_144bc2c10(param_1,_Memory,param_2,param_4);
    free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_198);
}



// FUNCTION 144bc0890 FUN_144bc0890 body=3074 status=ok
// SIG undefined FUN_144bc0890(void)

void FUN_144bc0890(longlong param_1,longlong param_2,int *param_3,uint param_4,undefined8 param_5,
                  float param_6,longlong *param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  void *_Dst;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong *local_260;
  int local_258;
  int local_248;
  int local_244;
  undefined8 *local_240;
  float local_238;
  float local_234;
  float local_230;
  int local_22c;
  longlong local_228;
  longlong local_220;
  int *local_218;
  int local_210;
  int local_20c;
  int local_208;
  int *local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  int *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [40];
  float local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_1e0 = param_5;
  local_1e8 = param_7;
  local_1b0 = param_1;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  uVar14 = 0;
  iVar22 = 0;
  if (0 < (int)param_4) {
    if ((7 < param_4) && (1 < DAT_14c707900)) {
      uVar26 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar14 = param_4 & 0x80000007;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
      }
      lVar15 = 0;
      piVar9 = param_3 + 0xc;
      iVar22 = 0;
      do {
        iVar20 = piVar9[6];
        iVar22 = iVar22 + 8;
        iVar19 = *piVar9;
        lVar15 = lVar15 + 8;
        iVar2 = piVar9[-6];
        iVar3 = piVar9[-0xc];
        iVar4 = piVar9[0x18];
        iVar5 = piVar9[0x1e];
        iVar6 = piVar9[0x12];
        uVar26 = (uint)((int)uVar26 < iVar3) * iVar3 | ((int)uVar26 >= iVar3) * uVar26;
        uVar29 = (uint)((int)uVar29 < iVar2) * iVar2 | ((int)uVar29 >= iVar2) * uVar29;
        uVar30 = (uint)((int)uVar30 < iVar19) * iVar19 | ((int)uVar30 >= iVar19) * uVar30;
        uVar31 = (uint)((int)uVar31 < iVar20) * iVar20 | ((int)uVar31 >= iVar20) * uVar31;
        iVar20 = piVar9[0xc];
        uVar32 = (uint)((int)uVar32 < iVar20) * iVar20 | ((int)uVar32 >= iVar20) * uVar32;
        uVar33 = (uint)((int)uVar33 < iVar6) * iVar6 | ((int)uVar33 >= iVar6) * uVar33;
        uVar34 = (uint)((int)uVar34 < iVar4) * iVar4 | ((int)uVar34 >= iVar4) * uVar34;
        uVar35 = (uint)((int)uVar35 < iVar5) * iVar5 | ((int)uVar35 >= iVar5) * uVar35;
        piVar9 = piVar9 + 0x30;
      } while (lVar15 < (int)(param_4 - uVar14));
      uVar14 = ((int)uVar26 < (int)uVar32) * uVar32 | ((int)uVar26 >= (int)uVar32) * uVar26;
      uVar26 = ((int)uVar29 < (int)uVar33) * uVar33 | ((int)uVar29 >= (int)uVar33) * uVar29;
      uVar29 = ((int)uVar30 < (int)uVar34) * uVar34 | ((int)uVar30 >= (int)uVar34) * uVar30;
      uVar30 = ((int)uVar31 < (int)uVar35) * uVar35 | ((int)uVar31 >= (int)uVar35) * uVar31;
      uVar14 = ((int)uVar14 < (int)uVar29) * uVar29 | ((int)uVar14 >= (int)uVar29) * uVar14;
      uVar26 = ((int)uVar26 < (int)uVar30) * uVar30 | ((int)uVar26 >= (int)uVar30) * uVar26;
      uVar14 = ((int)uVar14 < (int)uVar26) * uVar26 | ((int)uVar14 >= (int)uVar26) * uVar14;
    }
    if (iVar22 < (int)param_4) {
      puVar21 = (uint *)(param_3 + (longlong)iVar22 * 6);
      uVar16 = (ulonglong)(param_4 - iVar22);
      uVar26 = uVar14;
      do {
        uVar14 = *puVar21;
        puVar21 = puVar21 + 6;
        if ((int)uVar14 <= (int)uVar26) {
          uVar14 = uVar26;
        }
        uVar16 = uVar16 - 1;
        uVar26 = uVar14;
      } while (uVar16 != 0);
    }
    if (uVar14 != 0) {
      lVar15 = (longlong)(int)uVar14;
      local_240 = malloc(lVar15 * 0x28);
      piVar8 = malloc(lVar15 << 4);
      local_218 = piVar8;
      piVar9 = malloc(lVar15 * 4);
      local_1b8 = piVar9;
      if (local_240 != (undefined8 *)0x0) {
        if ((piVar8 != (int *)0x0) && (piVar9 != (int *)0x0)) {
          local_244 = 0;
          local_1a8 = (longlong)(int)param_4;
          if (0 < (int)param_4) {
            local_1f8 = 0;
            do {
              lVar15 = 0;
              local_248 = 0;
              local_228 = 0;
              local_22c = 0;
              if (0 < *param_3) {
                local_1d8 = local_240;
                local_1c8 = 0;
                piVar18 = piVar9;
                local_200 = piVar8;
                do {
                  local_220 = -1;
                  lVar17 = (longlong)*(int *)(local_1c8 + *(longlong *)(param_3 + 2)) * 0x58;
                  if (*(int **)(lVar17 + 0x10 + param_2) == param_3) {
                    local_220 = 0;
                  }
                  else if (*(int **)(lVar17 + 0x18 + param_2) == param_3) {
                    local_220 = 1;
                  }
                  else if (*(int **)(lVar17 + 0x20 + param_2) == param_3) {
                    local_220 = 2;
                  }
                  local_1d0 = lVar17;
                  (**(code **)(*local_1e8 + 0x18))(local_1e8,&local_f0);
                  fVar38 = local_ec;
                  fVar28 = local_f0;
                  local_198 = *(undefined8 *)(lVar17 + 0x28 + param_2);
                  local_190 = *(float *)(lVar17 + 0x30 + param_2);
                  local_170 = *(float *)(lVar17 + 0x3c + param_2);
                  fVar27 = local_ec * (float)((ulonglong)local_198 >> 0x20) +
                           local_f0 * (float)local_198 + local_e8 * local_190;
                  local_188 = *(undefined8 *)(lVar17 + 0x28 + param_2);
                  fVar25 = (float)((ulonglong)local_188 >> 0x20);
                  fVar40 = (float)local_188 - local_f0 * fVar27;
                  fVar37 = fVar25 - local_ec * fVar27;
                  local_178 = *(undefined8 *)(lVar17 + 0x34 + param_2);
                  fVar39 = local_190 - local_e8 * fVar27;
                  local_1f0 = CONCAT44(fVar25,fVar37);
                  fVar27 = local_ec * (float)((ulonglong)local_178 >> 0x20) +
                           local_f0 * (float)local_178 + local_e8 * local_170;
                  local_168 = *(undefined8 *)(lVar17 + 0x34 + param_2);
                  fVar36 = local_170 - local_e8 * fVar27;
                  fVar41 = (float)local_168 - local_f0 * fVar27;
                  fVar27 = (float)((ulonglong)local_168 >> 0x20) - local_ec * fVar27;
                  local_238 = fVar40;
                  local_234 = fVar39;
                  local_230 = fVar36;
                  local_180 = local_190;
                  local_160 = local_170;
                  if (((1.1754944e-38 < ABS(fVar40)) || (1.1754944e-38 < ABS(fVar37))) ||
                     (1.1754944e-38 < ABS(fVar39))) {
                    fVar24 = sqrtf(fVar37 * fVar37 + fVar40 * fVar40 + fVar39 * fVar39);
                    fVar24 = 1.0 / fVar24;
                    local_238 = fVar40 * fVar24;
                    local_234 = fVar39 * fVar24;
                    local_1f0 = CONCAT44(fVar25,fVar37 * fVar24);
                  }
                  if (((1.1754944e-38 < ABS(fVar41)) || (1.1754944e-38 < ABS(fVar27))) ||
                     (1.1754944e-38 < ABS(fVar36))) {
                    fVar25 = sqrtf(fVar27 * fVar27 + fVar41 * fVar41 + fVar36 * fVar36);
                    fVar25 = 1.0 / fVar25;
                    local_230 = fVar36 * fVar25;
                    fVar41 = fVar41 * fVar25;
                    fVar27 = fVar27 * fVar25;
                  }
                  lVar12 = local_1d0;
                  local_210 = *(int *)(lVar17 + 0x48 + param_2);
                  iVar20 = 0;
                  iVar22 = 0;
                  piVar9 = piVar18;
                  if (0 < *param_3) {
                    lVar15 = 0;
                    do {
                      local_208 = *(int *)(lVar15 + *(longlong *)(param_3 + 2));
                      local_1c0 = (longlong)local_208 * 0x58;
                      local_158 = *(undefined8 *)(local_1c0 + 0x28 + param_2);
                      local_20c = *(int *)(local_1c0 + 0x48 + param_2);
                      local_150 = *(float *)(local_1c0 + 0x30 + param_2);
                      local_130 = *(float *)(local_1c0 + 0x3c + param_2);
                      fVar25 = fVar38 * (float)((ulonglong)local_158 >> 0x20) +
                               fVar28 * (float)local_158 + local_e8 * local_150;
                      local_148 = *(undefined8 *)(local_1c0 + 0x28 + param_2);
                      fVar39 = (float)local_148 - fVar28 * fVar25;
                      fVar38 = (float)((ulonglong)local_148 >> 0x20) - fVar38 * fVar25;
                      local_138 = *(undefined8 *)(local_1c0 + 0x34 + param_2);
                      fVar37 = local_150 - local_e8 * fVar25;
                      fVar28 = local_ec * (float)((ulonglong)local_138 >> 0x20) +
                               local_f0 * (float)local_138 + local_e8 * local_130;
                      local_128 = *(undefined8 *)(local_1c0 + 0x34 + param_2);
                      fVar25 = (float)local_128 - local_f0 * fVar28;
                      fVar36 = local_130 - local_e8 * fVar28;
                      fVar28 = (float)((ulonglong)local_128 >> 0x20) - local_ec * fVar28;
                      local_140 = local_150;
                      local_120 = local_130;
                      if (((1.1754944e-38 < ABS(fVar39)) || (1.1754944e-38 < ABS(fVar38))) ||
                         (1.1754944e-38 < ABS(fVar37))) {
                        fVar40 = sqrtf(fVar38 * fVar38 + fVar39 * fVar39 + fVar37 * fVar37);
                        fVar40 = 1.0 / fVar40;
                        fVar39 = fVar39 * fVar40;
                        fVar38 = fVar38 * fVar40;
                        fVar37 = fVar37 * fVar40;
                      }
                      if (((1.1754944e-38 < ABS(fVar25)) || (1.1754944e-38 < ABS(fVar28))) ||
                         (1.1754944e-38 < ABS(fVar36))) {
                        fVar40 = sqrtf(fVar28 * fVar28 + fVar25 * fVar25 + fVar36 * fVar36);
                        fVar40 = 1.0 / fVar40;
                        fVar25 = fVar25 * fVar40;
                        fVar28 = fVar28 * fVar40;
                        fVar36 = fVar36 * fVar40;
                      }
                      piVar9 = local_1b8;
                      if (((((*(uint *)(local_1c0 + 0x4c + param_2) |
                             *(uint *)(lVar12 + 0x4c + param_2)) & 4) != 0) ||
                          (local_210 == local_20c)) ||
                         ((param_6 < fVar38 * (float)local_1f0 + fVar39 * local_238 +
                                     fVar37 * local_234 &&
                          (param_6 < fVar28 * fVar27 + fVar25 * fVar41 + fVar36 * local_230)))) {
                        iVar22 = iVar22 + 1;
                        *piVar18 = local_208;
                        piVar18 = piVar18 + 1;
                      }
                      iVar20 = iVar20 + 1;
                      lVar15 = lVar15 + 4;
                      fVar38 = local_ec;
                      fVar28 = local_f0;
                    } while (iVar20 < *param_3);
                    lVar15 = local_228;
                    if (1 < iVar22) {
                      FUN_144bc3400(local_1b8,0);
                      lVar15 = local_228;
                    }
                  }
                  bVar23 = false;
                  iVar20 = 0;
                  lVar17 = 0;
                  iVar19 = 0;
                  if (lVar15 < 1) {
LAB_144bc11b7:
                    _Dst = malloc((longlong)iVar22 << 2);
                    if (_Dst == (void *)0x0) {
                      if (0 < local_228) {
                        piVar8 = local_218 + 2;
                        lVar15 = local_228;
                        do {
                          free(*(void **)piVar8);
                          piVar8 = piVar8 + 4;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != 0);
                      }
                      free(local_218);
                      free(piVar9);
                      free(local_240);
                      goto LAB_144bc142c;
                    }
                    *local_200 = iVar22;
                    *(void **)(local_200 + 2) = _Dst;
                    memcpy(_Dst,piVar9,(longlong)iVar22 << 2);
                    local_258 = param_3[4];
                    local_260 = local_1e8;
                    local_268 = param_2;
                    puVar11 = (undefined8 *)FUN_144bc3500(local_118,piVar9,iVar22,local_1e0);
                    local_248 = local_248 + 1;
                    lVar15 = local_228 + 1;
                    uVar1 = puVar11[1];
                    local_200 = local_200 + 4;
                    *local_1d8 = *puVar11;
                    local_1d8[1] = uVar1;
                    uVar1 = puVar11[3];
                    local_1d8[2] = puVar11[2];
                    local_1d8[3] = uVar1;
                    local_1d8[4] = puVar11[4];
                    local_1d8 = local_1d8 + 5;
                    local_228 = lVar15;
                  }
                  else {
                    do {
                      iVar20 = iVar19;
                      if (bVar23) goto LAB_144bc124b;
                      iVar20 = 0;
                      bVar23 = true;
                      if (iVar22 == local_218[lVar17 * 4]) {
                        lVar12 = 0;
                        if (0 < iVar22) {
                          do {
                            if (!bVar23) break;
                            bVar23 = piVar9[lVar12] ==
                                     *(int *)(*(longlong *)(local_218 + lVar17 * 4 + 2) + lVar12 * 4
                                             );
                            lVar10 = lVar12 + 1;
                            iVar2 = iVar20 + 1;
                            if (!bVar23) {
                              lVar10 = lVar12;
                              iVar2 = iVar20;
                            }
                            iVar20 = iVar2;
                            lVar12 = lVar10;
                          } while (iVar20 < iVar22);
                        }
                      }
                      else {
                        bVar23 = false;
                      }
                      iVar20 = iVar19 + 1;
                      lVar12 = lVar17 + 1;
                      if (bVar23) {
                        iVar20 = iVar19;
                        lVar12 = lVar17;
                      }
                      lVar17 = lVar12;
                      iVar19 = iVar20;
                    } while (lVar17 < lVar15);
                    if (!bVar23) goto LAB_144bc11b7;
                  }
LAB_144bc124b:
                  lVar12 = (longlong)
                           (int)((uint)*(byte *)(local_220 + local_1d0 + 0x54 + param_2) +
                                *(int *)(local_1d0 + 0x50 + param_2));
                  puVar11 = (undefined8 *)(local_1b0 + lVar12 * 0x28);
                  if (*(int *)(local_1b0 + 0x20 + lVar12 * 0x28) == 1) {
                    puVar13 = (undefined8 *)
                              FUN_144bc14a0(local_118,puVar11,local_240 + (longlong)iVar20 * 5);
                    uVar1 = puVar13[1];
                    *puVar11 = *puVar13;
                    puVar11[1] = uVar1;
                    *(undefined1 (*) [16])(puVar11 + 2) = *(undefined1 (*) [16])(puVar13 + 2);
                    uVar1 = puVar13[4];
                    uVar7 = 2;
                  }
                  else {
                    uVar1 = (local_240 + lVar17 * 5)[1];
                    *puVar11 = local_240[lVar17 * 5];
                    puVar11[1] = uVar1;
                    *(undefined1 (*) [16])(puVar11 + 2) =
                         *(undefined1 (*) [16])(local_240 + lVar17 * 5 + 2);
                    uVar1 = local_240[lVar17 * 5 + 4];
                    uVar7 = 1;
                  }
                  local_22c = local_22c + 1;
                  puVar11[4] = uVar1;
                  local_1c8 = local_1c8 + 4;
                  *(undefined4 *)(puVar11 + 4) = uVar7;
                  *(int *)((longlong)puVar11 + 0x24) = param_3[5];
                  piVar8 = local_218;
                  piVar18 = piVar9;
                } while (local_22c < *param_3);
              }
              lVar15 = (longlong)local_248;
              if (0 < local_248) {
                piVar18 = piVar8 + 2;
                do {
                  free(*(void **)piVar18);
                  piVar18 = piVar18 + 4;
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              local_244 = local_244 + local_248;
              local_1f8 = local_1f8 + 1;
              param_3 = param_3 + 6;
            } while (local_1f8 < local_1a8);
          }
          free(piVar8);
          free(piVar9);
          free(local_240);
          goto LAB_144bc142c;
        }
        free(local_240);
      }
      if (piVar8 != (int *)0x0) {
        free(piVar8);
      }
      if (piVar9 != (int *)0x0) {
        free(piVar9);
      }
    }
  }
LAB_144bc142c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_288);
}



// FUNCTION 144bc14a0 FUN_144bc14a0 body=1005 status=ok
// SIG undefined FUN_144bc14a0(void)

undefined8 * FUN_144bc14a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_b4;
  float fStack_a4;
  
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  fVar9 = *(float *)((longlong)param_2 + 0xc);
  fVar5 = *(float *)((longlong)param_3 + 0xc);
  if ((fVar9 == fVar5) &&
     (fVar11 = *(float *)((longlong)param_2 + 0x1c), fVar11 == *(float *)((longlong)param_3 + 0x1c))
     ) {
    if ((float)*param_2 == (float)*param_3) {
      fStack_b4 = (float)((ulonglong)*param_2 >> 0x20);
      fStack_a4 = (float)((ulonglong)*param_3 >> 0x20);
      if ((fStack_b4 == fStack_a4) && (*(float *)(param_2 + 1) == *(float *)(param_3 + 1))) {
        if ((float)param_2[2] == (float)param_3[2]) {
          fStack_a4 = (float)((ulonglong)param_2[2] >> 0x20);
          fStack_b4 = (float)((ulonglong)param_3[2] >> 0x20);
          if ((fStack_a4 == fStack_b4) && (*(float *)(param_2 + 3) == *(float *)(param_3 + 3))) {
            uVar4 = *(undefined4 *)(param_2 + 1);
            *param_1 = *param_2;
            uVar1 = param_2[2];
            *(undefined4 *)(param_1 + 1) = uVar4;
            uVar4 = *(undefined4 *)(param_2 + 3);
            param_1[2] = uVar1;
            *(undefined4 *)(param_1 + 3) = uVar4;
            *(float *)((longlong)param_1 + 0xc) = fVar9;
            *(float *)((longlong)param_1 + 0x1c) = fVar11;
            return param_1;
          }
        }
      }
    }
  }
  uVar1 = param_2[2];
  uVar2 = *param_2;
  fVar11 = *(float *)(param_3 + 1);
  fVar6 = *(float *)(param_2 + 1);
  *(float *)((longlong)param_1 + 0x1c) =
       (*(float *)((longlong)param_2 + 0x1c) + *(float *)((longlong)param_3 + 0x1c)) * 0.5;
  fVar7 = (float)*param_3 + (float)uVar2;
  uVar3 = param_3[2];
  fVar10 = (float)param_3[2] + (float)uVar1;
  fVar11 = fVar11 + fVar6;
  fVar6 = (float)((ulonglong)*param_3 >> 0x20) + (float)((ulonglong)uVar2 >> 0x20);
  *(float *)((longlong)param_1 + 0xc) = (fVar5 + fVar9) * 0.5;
  *param_1 = CONCAT44(fVar6,fVar7);
  fVar8 = (float)((ulonglong)uVar3 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20);
  *(float *)(param_1 + 1) = fVar11;
  fVar9 = *(float *)(param_3 + 3);
  fVar5 = *(float *)(param_2 + 3);
  param_1[2] = CONCAT44(fVar8,fVar10);
  fVar9 = fVar9 + fVar5;
  *(float *)(param_1 + 3) = fVar9;
  if (((1.1754944e-38 < ABS(fVar7)) || (1.1754944e-38 < ABS(fVar6))) ||
     (1.1754944e-38 < ABS(fVar11))) {
    fVar5 = sqrtf(fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11);
    fVar5 = 1.0 / fVar5;
    *param_1 = CONCAT44(fVar6 * fVar5,fVar7 * fVar5);
    *(float *)(param_1 + 1) = fVar5 * fVar11;
  }
  if (((1.1754944e-38 < ABS(fVar10)) || (1.1754944e-38 < ABS(fVar8))) ||
     (1.1754944e-38 < ABS(fVar9))) {
    fVar5 = sqrtf(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar5 = 1.0 / fVar5;
    param_1[2] = CONCAT44(fVar5 * fVar8,fVar5 * fVar10);
    *(float *)(param_1 + 3) = fVar5 * fVar9;
  }
  return param_1;
}



// FUNCTION 144bc1890 FUN_144bc1890 body=126 status=ok
// SIG undefined FUN_144bc1890(void)

void FUN_144bc1890(undefined4 *param_1,longlong *param_2,uint param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  (**(code **)(*param_2 + 0x10))(param_2,&local_28,(int)param_3 >> 2,param_3 & 3);
  *param_1 = local_28;
  param_1[2] = local_20;
  param_1[1] = local_24;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144bc1920 FUN_144bc1920 body=615 status=ok
// SIG undefined FUN_144bc1920(void)

void FUN_144bc1920(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  undefined8 *puVar28;
  longlong lVar29;
  
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  if (0 < param_4 + -1) {
    lVar29 = 0;
    puVar25 = (uint *)(param_1 + 0x4c);
    piVar23 = (int *)(param_1 + 0x48);
    puVar26 = (uint *)(param_1 + 0xa4);
    piVar27 = (int *)(param_1 + 0xa0);
    do {
      if (*piVar23 == *piVar27) {
        uVar3 = *puVar26;
        if (((uVar3 ^ *puVar25) & 1) != 0) {
          *puVar25 = *puVar25 | 2;
          *puVar26 = uVar3 | 2;
        }
        lVar20 = 2;
        lVar21 = 0xb0;
      }
      else {
        lVar20 = 1;
        lVar21 = 0x58;
      }
      lVar29 = lVar29 + lVar20;
      piVar27 = (int *)((longlong)piVar27 + lVar21);
      puVar26 = (uint *)((longlong)puVar26 + lVar21);
      piVar23 = (int *)((longlong)piVar23 + lVar21);
      puVar25 = (uint *)((longlong)puVar25 + lVar21);
    } while (lVar29 < param_4 + -1);
  }
  iVar24 = 0;
  bVar5 = true;
  iVar22 = 1;
  if (0 < param_3) {
    lVar29 = 0;
    do {
      if (!bVar5) {
        return;
      }
      puVar28 = (undefined8 *)(lVar29 * 0x58 + param_1);
      if ((~*(uint *)((longlong)puVar28 + 0x4c) & 1) == 0) {
        lVar20 = (longlong)iVar22;
        bVar18 = true;
        do {
          bVar17 = bVar18;
          if (param_4 <= lVar20) break;
          bVar17 = false;
          if ((~*(uint *)(lVar20 * 0x58 + 0x4c + param_1) & 1) == 0) {
            lVar20 = lVar20 + 1;
            iVar22 = iVar22 + 1;
            bVar17 = bVar18;
          }
          bVar18 = bVar17;
        } while (bVar17);
        lVar20 = (longlong)iVar22;
        iVar19 = iVar22 + 1;
        if (bVar17) {
          bVar5 = false;
        }
        else {
          uVar4 = *(undefined4 *)(param_2 + lVar29 * 0xc);
          *(undefined4 *)(param_2 + lVar29 * 0xc) = *(undefined4 *)(param_2 + lVar20 * 0xc);
          *(undefined4 *)(param_2 + lVar20 * 0xc) = uVar4;
          uVar4 = *(undefined4 *)(param_2 + 4 + lVar29 * 0xc);
          *(undefined4 *)(param_2 + 4 + lVar29 * 0xc) = *(undefined4 *)(param_2 + 4 + lVar20 * 0xc);
          *(undefined4 *)(param_2 + 4 + lVar20 * 0xc) = uVar4;
          uVar4 = *(undefined4 *)(param_2 + 8 + lVar29 * 0xc);
          *(undefined4 *)(param_2 + 8 + lVar29 * 0xc) = *(undefined4 *)(param_2 + 8 + lVar20 * 0xc);
          *(undefined4 *)(param_2 + 8 + lVar20 * 0xc) = uVar4;
          uVar6 = *puVar28;
          uVar7 = puVar28[1];
          uVar8 = puVar28[2];
          uVar9 = puVar28[3];
          uVar10 = puVar28[4];
          uVar11 = puVar28[5];
          uVar12 = puVar28[6];
          uVar13 = puVar28[7];
          uVar14 = puVar28[8];
          uVar15 = puVar28[9];
          uVar2 = puVar28[10];
          lVar20 = lVar20 * 0x58;
          uVar16 = ((undefined8 *)(lVar20 + param_1))[1];
          *puVar28 = *(undefined8 *)(lVar20 + param_1);
          puVar28[1] = uVar16;
          puVar1 = (undefined8 *)(lVar20 + 0x10 + param_1);
          uVar16 = puVar1[1];
          puVar28[2] = *puVar1;
          puVar28[3] = uVar16;
          puVar1 = (undefined8 *)(lVar20 + 0x20 + param_1);
          uVar16 = puVar1[1];
          puVar28[4] = *puVar1;
          puVar28[5] = uVar16;
          puVar1 = (undefined8 *)(lVar20 + 0x30 + param_1);
          uVar16 = puVar1[1];
          puVar28[6] = *puVar1;
          puVar28[7] = uVar16;
          puVar1 = (undefined8 *)(lVar20 + 0x40 + param_1);
          uVar16 = puVar1[1];
          puVar28[8] = *puVar1;
          puVar28[9] = uVar16;
          puVar28[10] = *(undefined8 *)(lVar20 + 0x50 + param_1);
          *(undefined8 *)(lVar20 + param_1) = uVar6;
          ((undefined8 *)(lVar20 + param_1))[1] = uVar7;
          puVar28 = (undefined8 *)(lVar20 + 0x10 + param_1);
          *puVar28 = uVar8;
          puVar28[1] = uVar9;
          puVar28 = (undefined8 *)(lVar20 + 0x20 + param_1);
          *puVar28 = uVar10;
          puVar28[1] = uVar11;
          puVar28 = (undefined8 *)(lVar20 + 0x30 + param_1);
          *puVar28 = uVar12;
          puVar28[1] = uVar13;
          puVar28 = (undefined8 *)(lVar20 + 0x40 + param_1);
          *puVar28 = uVar14;
          puVar28[1] = uVar15;
          *(undefined8 *)(lVar20 + 0x50 + param_1) = uVar2;
        }
      }
      else {
        iVar19 = iVar24 + 2;
        if (iVar24 + 2 <= iVar22) {
          iVar19 = iVar22;
        }
      }
      iVar22 = iVar19;
      lVar20 = lVar29 + 1;
      iVar19 = iVar24 + 1;
      if (!bVar5) {
        lVar20 = lVar29;
        iVar19 = iVar24;
      }
      iVar24 = iVar19;
      lVar29 = lVar20;
    } while (iVar24 < param_3);
  }
  return;
}



// FUNCTION 144bc1b90 FUN_144bc1b90 body=1033 status=ok
// SIG undefined FUN_144bc1b90(void)

void FUN_144bc1b90(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,int param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  byte *pbVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auStack_b8 [32];
  longlong local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  lVar21 = (longlong)param_5;
  if (lVar21 < param_6) {
    piVar16 = (int *)(param_2 + 0x50 + lVar21 * 0x58);
    lVar14 = param_6 - lVar21;
    piVar17 = (int *)(param_3 + lVar21 * 0xc + 8);
    do {
      if ((*(byte *)(piVar16 + -1) & 2) == 0) {
        iVar12 = param_5 * 3;
        iVar20 = 0;
        lVar19 = 0;
        bVar6 = true;
        do {
          if (iVar12 <= iVar20) {
            if (bVar6) goto LAB_144bc1cbd;
            break;
          }
          bVar5 = false;
          if (piVar17[-2] != *(int *)(param_3 + lVar19 * 4)) {
            lVar19 = lVar19 + 1;
            iVar20 = iVar20 + 1;
            bVar5 = bVar6;
          }
          bVar6 = bVar5;
        } while (bVar5);
        iVar11 = iVar20 / 3 + (iVar20 >> 0x1f) +
                 (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        lVar19 = (longlong)iVar11 * 0x58;
        lVar19 = (longlong)
                 (int)((uint)*(byte *)((iVar20 + iVar11 * -3) + param_2 + 0x54 + lVar19) +
                      *(int *)(param_2 + 0x50 + lVar19));
        puVar1 = (undefined8 *)(param_1 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        lVar10 = (longlong)(int)((uint)*(byte *)(piVar16 + 1) + *piVar16);
        puVar2 = (undefined8 *)(param_1 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(param_1 + 0x10 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(undefined8 *)(param_1 + 0x20 + lVar10 * 0x28) =
             *(undefined8 *)(param_1 + 0x20 + lVar19 * 0x28);
LAB_144bc1cbd:
        iVar20 = 0;
        lVar19 = 0;
        bVar6 = true;
        do {
          if (iVar12 <= iVar20) {
            if (bVar6) goto LAB_144bc1d5d;
            break;
          }
          bVar5 = false;
          if (piVar17[-1] != *(int *)(param_3 + lVar19 * 4)) {
            lVar19 = lVar19 + 1;
            iVar20 = iVar20 + 1;
            bVar5 = bVar6;
          }
          bVar6 = bVar5;
        } while (bVar5);
        iVar11 = iVar20 / 3 + (iVar20 >> 0x1f) +
                 (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        lVar19 = (longlong)iVar11 * 0x58;
        lVar19 = (longlong)
                 (int)((uint)*(byte *)((iVar20 + iVar11 * -3) + param_2 + 0x54 + lVar19) +
                      *(int *)(param_2 + 0x50 + lVar19));
        puVar1 = (undefined8 *)(param_1 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        lVar10 = (longlong)(int)((uint)*(byte *)((longlong)piVar16 + 5) + *piVar16);
        puVar2 = (undefined8 *)(param_1 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(param_1 + 0x10 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(undefined8 *)(param_1 + 0x20 + lVar10 * 0x28) =
             *(undefined8 *)(param_1 + 0x20 + lVar19 * 0x28);
LAB_144bc1d5d:
        iVar20 = 0;
        lVar19 = 0;
        bVar6 = true;
        do {
          if (iVar12 <= iVar20) {
            if (bVar6) goto LAB_144bc1dfd;
            break;
          }
          bVar5 = false;
          if (*piVar17 != *(int *)(param_3 + lVar19 * 4)) {
            lVar19 = lVar19 + 1;
            iVar20 = iVar20 + 1;
            bVar5 = bVar6;
          }
          bVar6 = bVar5;
        } while (bVar6);
        iVar12 = iVar20 / 3 + (iVar20 >> 0x1f) +
                 (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
        lVar19 = (longlong)iVar12 * 0x58;
        lVar19 = (longlong)
                 (int)((uint)*(byte *)((iVar20 + iVar12 * -3) + param_2 + 0x54 + lVar19) +
                      *(int *)(param_2 + 0x50 + lVar19));
        puVar1 = (undefined8 *)(param_1 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        lVar10 = (longlong)(int)((uint)*(byte *)((longlong)piVar16 + 6) + *piVar16);
        puVar2 = (undefined8 *)(param_1 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(param_1 + 0x10 + lVar19 * 0x28);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(undefined8 *)(param_1 + 0x20 + lVar10 * 0x28) =
             *(undefined8 *)(param_1 + 0x20 + lVar19 * 0x28);
      }
LAB_144bc1dfd:
      piVar17 = piVar17 + 3;
      piVar16 = piVar16 + 0x16;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  local_98 = lVar21;
  if (0 < lVar21) {
    pbVar18 = (byte *)(param_2 + 0x55);
    lVar14 = 0;
    do {
      if ((pbVar18[-9] & 2) != 0) {
        uVar13 = 1 << (pbVar18[1] & 0x1f) | 1 << (*pbVar18 & 0x1f) | 1 << (pbVar18[-1] & 0x1f);
        if ((uVar13 & 2) == 0) {
          uVar15 = 1;
        }
        else if ((uVar13 & 4) == 0) {
          uVar15 = 2;
        }
        else {
          uVar15 = 0;
          if ((uVar13 & 8) == 0) {
            uVar15 = 3;
          }
        }
        iVar12 = *(int *)(pbVar18 + -0xd);
        (**(code **)(*param_4 + 0x10))(param_4,&local_90,(int)(iVar12 * 4 | uVar15) >> 2,uVar15);
        fVar9 = local_88;
        fVar8 = local_8c;
        fVar7 = local_90;
        for (lVar19 = 0; lVar21 = local_98, lVar19 < 3; lVar19 = lVar19 + 1) {
          bVar3 = pbVar18[lVar19 + -1];
          uVar13 = bVar3 & 3;
          (**(code **)(*param_4 + 0x10))(param_4,&local_80,(int)(uVar13 | iVar12 * 4) >> 2,uVar13);
          if (((local_80 == fVar7) && (local_7c == fVar8)) && (local_78 == fVar9)) {
            lVar21 = (longlong)(int)(*(int *)(pbVar18 + -5) + (uint)bVar3);
            lVar19 = (longlong)(int)(*(int *)(pbVar18 + -5) + uVar15);
            puVar1 = (undefined8 *)(param_1 + lVar21 * 0x28);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(param_1 + lVar19 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(param_1 + 0x10 + lVar21 * 0x28);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(param_1 + 0x10 + lVar19 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            *(undefined8 *)(param_1 + 0x20 + lVar19 * 0x28) =
                 *(undefined8 *)(param_1 + 0x20 + lVar21 * 0x28);
            lVar21 = local_98;
            break;
          }
        }
      }
      lVar14 = lVar14 + 1;
      pbVar18 = pbVar18 + 0x58;
    } while (lVar14 < lVar21);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144bc1fc0 FUN_144bc1fc0 body=113 status=ok
// SIG undefined FUN_144bc1fc0(void)

int FUN_144bc1fc0(float param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  iVar2 = (int)(((param_3 - param_1) / (param_2 - param_1)) * 2048.0);
  if (iVar2 < 0x800) {
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = 0x7ff;
  }
  return iVar1;
}



// FUNCTION 144bc2040 FUN_144bc2040 body=1475 status=ok
// SIG undefined FUN_144bc2040(void)

void FUN_144bc2040(longlong param_1,longlong param_2,longlong *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  float *pfVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  int *piVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_198 [32];
  int local_178;
  longlong local_168;
  int local_160;
  longlong *local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  int *local_140;
  longlong local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar32 = (longlong)param_5;
  local_168 = param_1;
  local_158 = param_3;
  local_138 = lVar32;
  do {
    lVar31 = (longlong)param_4;
    __CheckForDebuggerJustMyCode();
    lVar23 = 0;
    uVar4 = *(undefined4 *)(param_2 + lVar31 * 0x10);
    iVar25 = param_4 + 1;
    uVar5 = *(undefined4 *)(param_2 + 4 + lVar31 * 0x10);
    lVar33 = 3;
    local_118 = *(float *)(param_2 + 8 + lVar31 * 0x10);
    local_128 = local_118;
    local_120 = (int *)CONCAT44(uVar5,uVar4);
    local_130 = CONCAT44(uVar5,uVar4);
    lVar30 = (longlong)iVar25;
    do {
      if (iVar25 <= param_5) {
        lVar28 = lVar30;
        iVar29 = iVar25;
        if (3 < (param_5 - iVar25) + 1) {
          fVar35 = *(float *)((longlong)&local_120 + lVar23 * 4);
          pfVar24 = (float *)(param_2 + (lVar23 + (lVar30 + 2) * 4) * 4);
          uVar22 = ((param_5 - iVar25) - 3U >> 2) + 1;
          uVar27 = (ulonglong)uVar22;
          iVar29 = iVar25 + uVar22 * 4;
          lVar28 = lVar30 + (ulonglong)uVar22 * 4;
          do {
            fVar36 = pfVar24[-8];
            fVar37 = fVar36;
            if ((fVar35 <= fVar36) &&
               (pfVar3 = (float *)((longlong)&local_130 + lVar23 * 4), fVar37 = fVar35,
               *pfVar3 <= fVar36 && fVar36 != *pfVar3)) {
              *(float *)((longlong)&local_130 + lVar23 * 4) = fVar36;
            }
            fVar35 = pfVar24[-4];
            fVar36 = fVar35;
            if ((fVar37 <= fVar35) &&
               (pfVar3 = (float *)((longlong)&local_130 + lVar23 * 4), fVar36 = fVar37,
               *pfVar3 <= fVar35 && fVar35 != *pfVar3)) {
              *(float *)((longlong)&local_130 + lVar23 * 4) = fVar35;
            }
            fVar35 = *pfVar24;
            fVar37 = fVar35;
            if ((fVar36 <= fVar35) &&
               (pfVar3 = (float *)((longlong)&local_130 + lVar23 * 4), fVar37 = fVar36,
               *pfVar3 <= fVar35 && fVar35 != *pfVar3)) {
              *(float *)((longlong)&local_130 + lVar23 * 4) = fVar35;
            }
            fVar36 = pfVar24[4];
            fVar35 = fVar36;
            if ((fVar37 <= fVar36) &&
               (pfVar3 = (float *)((longlong)&local_130 + lVar23 * 4), fVar35 = fVar37,
               *pfVar3 <= fVar36 && fVar36 != *pfVar3)) {
              *(float *)((longlong)&local_130 + lVar23 * 4) = fVar36;
            }
            pfVar24 = pfVar24 + 0x10;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
          *(float *)((longlong)&local_120 + lVar23 * 4) = fVar35;
        }
        if (iVar29 <= param_5) {
          pfVar24 = (float *)(param_2 + (lVar23 + lVar28 * 4) * 4);
          lVar28 = (longlong)((param_5 - iVar29) + 1);
          fVar35 = *(float *)((longlong)&local_120 + lVar23 * 4);
          do {
            fVar36 = *pfVar24;
            fVar37 = fVar36;
            if ((fVar35 <= fVar36) &&
               (pfVar3 = (float *)((longlong)&local_130 + lVar23 * 4), fVar37 = fVar35,
               *pfVar3 <= fVar36 && fVar36 != *pfVar3)) {
              *(float *)((longlong)&local_130 + lVar23 * 4) = fVar36;
            }
            pfVar24 = pfVar24 + 4;
            lVar28 = lVar28 + -1;
            fVar35 = fVar37;
          } while (lVar28 != 0);
          *(float *)((longlong)&local_120 + lVar23 * 4) = fVar37;
        }
      }
      lVar23 = lVar23 + 1;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    if ((local_130._4_4_ - local_120._4_4_ <= (float)local_130 - (float)local_120) ||
       (local_130._4_4_ - local_120._4_4_ <= local_128 - local_118)) {
      lVar23 = 0;
      if ((float)local_130 - (float)local_120 < local_128 - local_118) {
        lVar23 = 2;
      }
    }
    else {
      lVar23 = 1;
    }
    fVar35 = *(float *)((longlong)&local_130 + lVar23 * 4);
    fVar36 = *(float *)((longlong)&local_120 + lVar23 * 4);
    fVar37 = (fVar36 + fVar35) * 0.5;
    if ((fVar35 <= fVar37) || (fVar37 <= fVar36)) {
      if (lVar31 <= lVar32) {
        local_120 = (int *)(param_2 + 0xc + lVar31 * 0x10);
        lVar32 = lVar31;
        piVar34 = local_120;
        local_140 = local_120;
        do {
          local_130 = (longlong)*local_120;
          uVar22 = *(uint *)(local_168 + local_130 * 4);
          uVar26 = uVar22 & 3;
          iVar25 = (int)uVar22 >> 2;
          (**(code **)(*param_3 + 0x10))(param_3,&local_110,iVar25,uVar26);
          (**(code **)(*param_3 + 0x18))(param_3,&local_100,iVar25,uVar26);
          (**(code **)(*param_3 + 0x20))(param_3,&local_150,iVar25,uVar26);
          fVar19 = local_f8;
          fVar18 = local_fc;
          fVar17 = local_100;
          fVar16 = local_108;
          fVar15 = local_10c;
          fVar37 = local_110;
          fVar36 = local_14c;
          fVar35 = local_150;
          local_160 = -1;
          bVar8 = true;
          lVar23 = lVar31;
          if (lVar31 < lVar32) {
            do {
              if (!bVar8) goto LAB_144bc2572;
              local_160 = *piVar34;
              uVar22 = *(uint *)(local_168 + (longlong)local_160 * 4);
              uVar26 = uVar22 & 3;
              iVar25 = (int)uVar22 >> 2;
              (**(code **)(*local_158 + 0x10))(local_158,&local_f0,iVar25,uVar26);
              (**(code **)(*local_158 + 0x18))(local_158,&local_e0,iVar25,uVar26);
              (**(code **)(*local_158 + 0x20))(local_158,&local_148,iVar25,uVar26);
              if (((((fVar37 == local_f0) && (fVar15 == local_ec)) && (fVar16 == local_e8)) &&
                  ((fVar17 == local_e0 && (fVar18 == local_dc)))) &&
                 ((fVar19 == local_d8 && ((fVar35 == local_148 && (fVar36 == local_144)))))) {
                bVar8 = false;
              }
              else {
                lVar23 = lVar23 + 1;
                piVar34 = piVar34 + 4;
              }
            } while (lVar23 < lVar32);
            piVar34 = local_140;
            if (!bVar8) {
LAB_144bc2572:
              *(undefined4 *)(local_168 + local_130 * 4) =
                   *(undefined4 *)(local_168 + (longlong)local_160 * 4);
              piVar34 = local_140;
            }
          }
          lVar32 = lVar32 + 1;
          local_120 = local_120 + 4;
          param_3 = local_158;
        } while (lVar32 <= local_138);
      }
      break;
    }
    lVar33 = lVar32;
    lVar30 = lVar32;
    iVar25 = param_4;
    iVar29 = param_5;
    if (lVar31 < lVar32) {
      do {
        bVar8 = false;
        bVar9 = false;
        iVar20 = iVar25;
        do {
          iVar25 = iVar20;
          lVar28 = lVar31;
          if (lVar33 <= lVar28) goto LAB_144bc231f;
          pfVar24 = (float *)(param_2 + (lVar23 + lVar28 * 4) * 4);
          bVar6 = fVar37 == *pfVar24;
          bVar7 = fVar37 < *pfVar24;
          bVar8 = bVar7 || bVar6;
          lVar30 = lVar33;
          lVar31 = lVar28 + 1;
          iVar20 = iVar25 + 1;
          iVar21 = iVar29;
        } while (!bVar7 && !bVar6);
        do {
          iVar29 = iVar21;
          lVar33 = lVar30;
          if (lVar33 <= lVar28) break;
          pfVar24 = (float *)(param_2 + (lVar23 + lVar33 * 4) * 4);
          bVar6 = fVar37 != *pfVar24;
          bVar7 = *pfVar24 <= fVar37;
          bVar9 = bVar7 && bVar6;
          lVar30 = lVar33 + -1;
          iVar21 = iVar29 + -1;
        } while (!bVar7 || !bVar6);
LAB_144bc231f:
        lVar30 = lVar33;
        lVar31 = lVar28;
        if ((bVar8) && (bVar9)) {
          iVar25 = iVar25 + 1;
          lVar31 = lVar28 + 1;
          iVar29 = iVar29 + -1;
          lVar30 = lVar33 + -1;
          puVar1 = (undefined4 *)(param_2 + lVar33 * 0x10);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (undefined4 *)(param_2 + lVar28 * 0x10);
          uVar11 = *puVar2;
          uVar12 = puVar2[1];
          uVar13 = puVar2[2];
          uVar14 = puVar2[3];
          puVar2 = (undefined4 *)(param_2 + lVar28 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar10;
          puVar1 = (undefined4 *)(param_2 + lVar33 * 0x10);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
        }
        lVar33 = lVar30;
      } while (lVar31 < lVar30);
    }
    if (iVar25 == iVar29) {
      pfVar24 = (float *)(param_2 + (lVar23 + lVar30 * 4) * 4);
      if (fVar37 < *pfVar24 || fVar37 == *pfVar24) {
        iVar29 = iVar29 + -1;
      }
      else {
        iVar25 = iVar25 + 1;
      }
    }
    if (param_4 < iVar29) {
      local_178 = iVar29;
      FUN_144bc2040(local_168,param_2,param_3,param_4);
    }
    param_4 = iVar25;
  } while (iVar25 < param_5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_198);
}



// FUNCTION 144bc2620 FUN_144bc2620 body=695 status=ok
// SIG undefined FUN_144bc2620(void)

void FUN_144bc2620(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = param_3;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  local_108 = (longlong)param_4;
  if (0 < param_4) {
    lVar16 = 0;
    do {
      local_110 = (longlong)*(int *)(param_3 + lVar16 * 4);
      uVar1 = *(uint *)(param_1 + local_110 * 4);
      uVar11 = uVar1 & 3;
      iVar13 = (int)uVar1 >> 2;
      (**(code **)(*param_2 + 0x10))(param_2,&local_100,iVar13,uVar11);
      (**(code **)(*param_2 + 0x18))(param_2,&local_f0,iVar13,uVar11);
      (**(code **)(*param_2 + 0x20))(param_2,&local_128,iVar13,uVar11);
      fVar10 = local_e8;
      fVar9 = local_ec;
      fVar8 = local_f0;
      fVar7 = local_f8;
      fVar6 = local_fc;
      fVar5 = local_100;
      fVar4 = local_124;
      fVar3 = local_128;
      bVar2 = true;
      lVar12 = 0;
      lVar15 = 0xffffffff;
      if (0 < lVar16) {
        do {
          iVar13 = (int)lVar15;
          if (!bVar2) goto LAB_144bc283e;
          iVar13 = *(int *)(local_118 + lVar12 * 4);
          lVar15 = (longlong)iVar13;
          uVar1 = *(uint *)(param_1 + lVar15 * 4);
          uVar11 = uVar1 & 3;
          iVar14 = (int)uVar1 >> 2;
          (**(code **)(*param_2 + 0x10))(param_2,&local_e0,iVar14,uVar11);
          (**(code **)(*param_2 + 0x18))(param_2,&local_d0,iVar14,uVar11);
          (**(code **)(*param_2 + 0x20))(param_2,&local_120,iVar14,uVar11);
          if (((((fVar5 == local_e0) && (fVar6 == local_dc)) && (fVar7 == local_d8)) &&
              ((fVar8 == local_d0 && (fVar9 == local_cc)))) &&
             ((fVar10 == local_c8 && ((fVar3 == local_120 && (fVar4 == local_11c)))))) {
            bVar2 = false;
          }
          else {
            lVar12 = lVar12 + 1;
          }
        } while (lVar12 < lVar16);
        if (!bVar2) {
LAB_144bc283e:
          *(undefined4 *)(param_1 + local_110 * 4) = *(undefined4 *)(param_1 + (longlong)iVar13 * 4)
          ;
        }
      }
      lVar16 = lVar16 + 1;
      param_3 = local_118;
    } while (lVar16 < local_108);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_148);
}



// FUNCTION 144bc28f0 FUN_144bc28f0 body=777 status=ok
// SIG undefined FUN_144bc28f0(void)

void FUN_144bc28f0(longlong param_1,longlong *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_158 [32];
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)auStack_158;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  if (0 < (int)param_3) {
    local_128 = 0;
    local_118 = 0;
    local_110 = (ulonglong)param_3;
    do {
      local_120 = 3;
      lVar13 = local_118;
      do {
        uVar10 = *(uint *)(local_128 + param_1) & 3;
        iVar14 = (int)*(uint *)(local_128 + param_1) >> 2;
        (**(code **)(*param_2 + 0x10))(param_2,&local_108,iVar14,uVar10);
        (**(code **)(*param_2 + 0x18))(param_2,&local_f8,iVar14,uVar10);
        (**(code **)(*param_2 + 0x20))(param_2,&local_138,iVar14,uVar10);
        fVar9 = local_f0;
        fVar8 = local_f4;
        fVar7 = local_f8;
        fVar6 = local_100;
        fVar5 = local_104;
        fVar4 = local_108;
        fVar3 = local_134;
        fVar2 = local_138;
        bVar1 = false;
        lVar12 = 0;
        do {
          if (lVar13 < lVar12) break;
          lVar13 = 0;
          if (!bVar1) {
            for (; lVar13 < 3; lVar13 = lVar13 + 1) {
              uVar10 = *(uint *)(param_1 + (lVar13 + lVar12 * 3) * 4);
              uVar11 = uVar10 & 3;
              iVar14 = (int)uVar10 >> 2;
              (**(code **)(*param_2 + 0x10))(param_2,&local_e8,iVar14,uVar11);
              (**(code **)(*param_2 + 0x18))(param_2,&local_d8,iVar14,uVar11);
              (**(code **)(*param_2 + 0x20))(param_2,&local_130,iVar14,uVar11);
              if (((((fVar4 == local_e8) && (fVar5 == local_e4)) && (fVar6 == local_e0)) &&
                  ((fVar7 == local_d8 && (fVar8 == local_d4)))) &&
                 ((fVar9 == local_d0 && ((fVar2 == local_130 && (fVar3 == local_12c)))))) {
                bVar1 = true;
                break;
              }
            }
          }
          lVar12 = lVar12 + 1;
          lVar13 = local_118;
        } while (!bVar1);
        *(undefined4 *)(local_128 + param_1) = 0xffffffff;
        local_128 = local_128 + 4;
        local_120 = local_120 + -1;
      } while (local_120 != 0);
      local_118 = lVar13 + 1;
      local_110 = local_110 - 1;
    } while (local_110 != 0);
    local_120 = 0;
    local_110 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c8 ^ (ulonglong)auStack_158);
}



// FUNCTION 144bc2c10 FUN_144bc2c10 body=926 status=ok
// SIG undefined FUN_144bc2c10(void)

void FUN_144bc2c10(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  int local_res20;
  longlong local_50;
  longlong local_48;
  
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  iVar7 = 0;
  if (0 < param_4) {
    piVar14 = param_2 + 5;
    piVar16 = (int *)(param_3 + 8);
    do {
      iVar13 = piVar16[-2];
      iVar1 = piVar16[-1];
      piVar14[-3] = iVar7;
      iVar6 = iVar1;
      if (iVar1 <= iVar13) {
        iVar6 = iVar13;
        iVar13 = iVar1;
      }
      piVar14[-5] = iVar13;
      piVar14[-4] = iVar6;
      iVar13 = piVar16[-1];
      iVar1 = *piVar16;
      *piVar14 = iVar7;
      iVar6 = iVar1;
      if (iVar1 <= iVar13) {
        iVar6 = iVar13;
        iVar13 = iVar1;
      }
      piVar14[-2] = iVar13;
      piVar14[-1] = iVar6;
      iVar13 = *piVar16;
      iVar1 = piVar16[-2];
      piVar14[3] = iVar7;
      iVar6 = iVar1;
      if (iVar1 <= iVar13) {
        iVar6 = iVar13;
        iVar13 = iVar1;
      }
      iVar7 = iVar7 + 1;
      piVar14[1] = iVar13;
      piVar14[2] = iVar6;
      piVar14 = piVar14 + 9;
      piVar16 = piVar16 + 3;
    } while (iVar7 < param_4);
  }
  FUN_144bc3f40(param_2,0,param_4 * 3 + -1,0,0x26065ca);
  lVar15 = (longlong)(param_4 * 3);
  iVar7 = 0;
  iVar13 = 1;
  if (1 < lVar15) {
    lVar12 = 0;
    lVar11 = lVar15 + -1;
    lVar9 = 0xc;
    do {
      if (*(int *)((longlong)param_2 + lVar12) != *(int *)(lVar9 + (longlong)param_2)) {
        FUN_144bc3f40(param_2,iVar7,iVar13 + -1,1,0x26065ca);
        lVar12 = lVar9;
        iVar7 = iVar13;
      }
      iVar13 = iVar13 + 1;
      lVar9 = lVar9 + 0xc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar7 = 0;
  iVar13 = 1;
  if (1 < lVar15) {
    lVar12 = 0;
    lVar11 = lVar15 + -1;
    piVar14 = param_2;
    do {
      piVar16 = piVar14 + 3;
      if ((*(int *)(lVar12 + (longlong)param_2) != *piVar16) ||
         (*(int *)(lVar12 + 4 + (longlong)param_2) != piVar14[4])) {
        lVar12 = (longlong)piVar16 - (longlong)param_2;
        FUN_144bc3f40(param_2,iVar7,iVar13 + -1,2,0x26065ca);
        iVar7 = iVar13;
      }
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + -1;
      piVar14 = piVar16;
    } while (lVar11 != 0);
  }
  if (0 < lVar15) {
    piVar14 = param_2 + 1;
    local_50 = 1;
    local_48 = lVar15;
    do {
      iVar7 = piVar14[1];
      iVar8 = 0;
      iVar13 = piVar14[-1];
      iVar1 = *piVar14;
      lVar11 = (longlong)(iVar7 * 3);
      iVar6 = *(int *)(param_3 + lVar11 * 4);
      if ((iVar6 == iVar13) || (iVar6 == iVar1)) {
        iVar17 = *(int *)(param_3 + 4 + lVar11 * 4);
        if ((iVar17 == iVar13) || (iVar17 == iVar1)) {
          local_res20 = 0;
          lVar12 = 0;
          iVar10 = iVar6;
        }
        else {
          local_res20 = 2;
          lVar12 = 8;
          iVar10 = *(int *)(param_3 + 8 + lVar11 * 4);
          iVar17 = iVar6;
        }
      }
      else {
        lVar12 = 4;
        local_res20 = 1;
        iVar10 = *(int *)(param_3 + 4 + lVar11 * 4);
        iVar17 = *(int *)(param_3 + 8 + lVar11 * 4);
      }
      if ((*(int *)((longlong)iVar7 * 0x58 + lVar12 + param_1) == -1) &&
         (bVar4 = true, local_50 < lVar15)) {
        piVar16 = piVar14 + 4;
        lVar11 = local_50;
        do {
          iVar6 = piVar16[-2];
          if ((iVar13 != iVar6) || (iVar2 = piVar16[-1], iVar1 != iVar2)) break;
          if (!bVar4) goto LAB_144bc2f2c;
          lVar9 = (longlong)(*piVar16 * 3);
          lVar12 = param_3 + lVar9 * 4;
          iVar3 = *(int *)(param_3 + lVar9 * 4);
          if ((iVar3 == iVar6) || (iVar3 == iVar2)) {
            iVar5 = *(int *)(lVar12 + 4);
            if ((iVar5 == iVar6) || (iVar5 == iVar2)) {
              iVar8 = 0;
              lVar9 = 0;
              iVar6 = iVar3;
            }
            else {
              iVar8 = 2;
              lVar9 = 8;
              iVar6 = *(int *)(lVar12 + 8);
              iVar5 = iVar3;
            }
          }
          else {
            iVar8 = 1;
            lVar9 = 4;
            iVar6 = *(int *)(lVar12 + 4);
            iVar5 = *(int *)(lVar12 + 8);
          }
          if (((iVar10 == iVar5) && (iVar17 == iVar6)) &&
             (*(int *)((longlong)*piVar16 * 0x58 + lVar9 + param_1) == -1)) {
            bVar4 = false;
          }
          else {
            lVar11 = lVar11 + 1;
            piVar16 = piVar16 + 3;
          }
        } while (lVar11 < lVar15);
        if (!bVar4) {
LAB_144bc2f2c:
          iVar13 = param_2[lVar11 * 3 + 2];
          *(int *)(param_1 + ((longlong)iVar7 * 0x16 + (longlong)local_res20) * 4) = iVar13;
          *(int *)(param_1 + ((longlong)iVar13 * 0x16 + (longlong)iVar8) * 4) = iVar7;
        }
      }
      piVar14 = piVar14 + 3;
      local_50 = local_50 + 1;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  return;
}



// FUNCTION 144bc2fb0 FUN_144bc2fb0 body=576 status=ok
// SIG undefined FUN_144bc2fb0(void)

void FUN_144bc2fb0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  lVar8 = (longlong)param_3;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  iVar11 = 0;
  if (0 < param_3) {
    lVar6 = 0;
    piVar10 = (int *)(param_2 + 8);
    piVar12 = (int *)(param_1 + 8);
    do {
      if (piVar12[-2] == -1) {
        bVar2 = false;
        lVar5 = 0;
        lVar1 = 0;
        iVar3 = 0;
        do {
          iVar7 = iVar3;
          lVar9 = lVar1;
          if (lVar8 <= lVar9) {
            if (!bVar2) goto LAB_144bc3097;
            break;
          }
          if ((lVar9 != lVar6) && (lVar5 = 0, !bVar2)) {
            for (; lVar5 < 3; lVar5 = lVar5 + 1) {
              lVar1 = lVar9 * 3 + lVar5;
              lVar4 = lVar1 + 1;
              if (1 < lVar5) {
                lVar4 = lVar9 * 3;
              }
              if ((piVar10[-2] == *(int *)(param_2 + lVar4 * 4)) &&
                 (piVar10[-1] == *(int *)(param_2 + lVar1 * 4))) {
                bVar2 = true;
                break;
              }
            }
          }
          lVar1 = lVar9 + 1;
          iVar3 = iVar7 + 1;
        } while (!bVar2);
        piVar12[-2] = iVar7;
        *(int *)(param_1 + (lVar9 * 0x16 + lVar5) * 4) = iVar11;
      }
LAB_144bc3097:
      if (piVar12[-1] == -1) {
        bVar2 = false;
        lVar5 = 0;
        lVar1 = 0;
        iVar3 = 0;
        do {
          iVar7 = iVar3;
          lVar9 = lVar1;
          if (lVar8 <= lVar9) {
            if (!bVar2) goto LAB_144bc3129;
            break;
          }
          if ((lVar9 != lVar6) && (lVar5 = 0, !bVar2)) {
            for (; lVar5 < 3; lVar5 = lVar5 + 1) {
              lVar1 = lVar9 * 3 + lVar5;
              lVar4 = lVar1 + 1;
              if (1 < lVar5) {
                lVar4 = lVar9 * 3;
              }
              if ((piVar10[-1] == *(int *)(param_2 + lVar4 * 4)) &&
                 (*piVar10 == *(int *)(param_2 + lVar1 * 4))) {
                bVar2 = true;
                break;
              }
            }
          }
          lVar1 = lVar9 + 1;
          iVar3 = iVar7 + 1;
        } while (!bVar2);
        piVar12[-1] = iVar7;
        *(int *)(param_1 + (lVar9 * 0x16 + lVar5) * 4) = iVar11;
      }
LAB_144bc3129:
      if (*piVar12 == -1) {
        bVar2 = false;
        lVar5 = 0;
        lVar1 = 0;
        iVar3 = 0;
        do {
          iVar7 = iVar3;
          lVar9 = lVar1;
          if (lVar8 <= lVar9) {
            if (!bVar2) goto LAB_144bc31b9;
            break;
          }
          if ((lVar9 != lVar6) && (lVar5 = 0, !bVar2)) {
            for (; lVar5 < 3; lVar5 = lVar5 + 1) {
              lVar1 = lVar9 * 3 + lVar5;
              lVar4 = lVar1 + 1;
              if (1 < lVar5) {
                lVar4 = lVar9 * 3;
              }
              if ((*piVar10 == *(int *)(param_2 + lVar4 * 4)) &&
                 (piVar10[-2] == *(int *)(param_2 + lVar1 * 4))) {
                bVar2 = true;
                break;
              }
            }
          }
          lVar1 = lVar9 + 1;
          iVar3 = iVar7 + 1;
        } while (!bVar2);
        *piVar12 = iVar7;
        *(int *)(param_1 + (lVar9 * 0x16 + lVar5) * 4) = iVar11;
      }
LAB_144bc31b9:
      iVar11 = iVar11 + 1;
      lVar6 = lVar6 + 1;
      piVar12 = piVar12 + 0x16;
      piVar10 = piVar10 + 3;
    } while (iVar11 < param_3);
  }
  return;
}



// FUNCTION 144bc31f0 FUN_144bc31f0 body=203 status=ok
// SIG undefined FUN_144bc31f0(void)

undefined8 FUN_144bc31f0(longlong *param_1,uint *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  (**(code **)(*param_1 + 0x20))(param_1,&local_res8,(int)*param_2 >> 2,*param_2 & 3);
  (**(code **)(*param_1 + 0x20))(param_1,&local_res10,(int)param_2[1] >> 2,param_2[1] & 3);
  (**(code **)(*param_1 + 0x20))(param_1,&local_res18,(int)param_2[2] >> 2,param_2[2] & 3);
  uVar2 = 0;
  fVar1 = (local_res1c - local_resc) * (local_res10 - local_res8) -
          (local_res14 - local_resc) * (local_res18 - local_res8);
  if (fVar1 < 0.0) {
    uVar2 = 0x80000000;
    fVar1 = -fVar1;
  }
  return CONCAT44(uVar2,fVar1);
}



// FUNCTION 144bc32c0 FUN_144bc32c0 body=307 status=ok
// SIG undefined FUN_144bc32c0(void)

undefined8 FUN_144bc32c0(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  iVar1 = param_4[4];
  lVar8 = (longlong)(param_3 * 3);
  iVar5 = 2;
  lVar7 = (longlong)param_3 * 0x58 + param_2;
  iVar6 = -1;
  if (*(int *)(param_1 + lVar8 * 4) == iVar1) {
    iVar6 = 0;
  }
  else if (*(int *)(param_1 + 4 + lVar8 * 4) == iVar1) {
    iVar6 = 1;
  }
  else if (*(int *)(param_1 + 8 + lVar8 * 4) == iVar1) {
    iVar6 = 2;
  }
  lVar8 = (longlong)iVar6;
  piVar2 = *(int **)(lVar7 + 0x10 + lVar8 * 8);
  if (piVar2 == param_4) {
LAB_144bc33d5:
    uVar4 = 1;
  }
  else {
    if (piVar2 == (int *)0x0) {
      uVar3 = *(uint *)(lVar7 + 0x4c);
      if (((((uVar3 & 4) != 0) && (*(longlong *)(lVar7 + 0x10) == 0)) &&
          (*(longlong *)(lVar7 + 0x18) == 0)) && (*(longlong *)(lVar7 + 0x20) == 0)) {
        *(uint *)(lVar7 + 0x4c) = uVar3 & 0xfffffff7;
        uVar3 = -(uint)(param_4[5] != 0) & 8 | uVar3 & 0xfffffff7;
        *(uint *)(lVar7 + 0x4c) = uVar3;
      }
      if ((uVar3 >> 3 & 1) == param_4[5]) {
        *(int *)(*(longlong *)(param_4 + 2) + (longlong)*param_4 * 4) = param_3;
        *param_4 = *param_4 + 1;
        *(int **)(lVar7 + 0x10 + lVar8 * 8) = param_4;
        iVar1 = *(int *)(lVar7 + lVar8 * 4);
        if (0 < iVar6) {
          iVar5 = iVar6 + -1;
        }
        iVar5 = *(int *)(lVar7 + (longlong)iVar5 * 4);
        if (-1 < iVar1) {
          FUN_144bc32c0(param_1,param_2,iVar1,param_4);
        }
        if (-1 < iVar5) {
          FUN_144bc32c0(param_1,param_2,iVar5,param_4);
        }
        goto LAB_144bc33d5;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144bc3400 FUN_144bc3400 body=252 status=ok
// SIG undefined FUN_144bc3400(void)

void FUN_144bc3400(longlong param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  do {
    __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
    iVar5 = (int)uVar7;
    uVar9 = uVar7 & 0xffffffff;
    bVar4 = (byte)param_4 & 0x1f;
    param_4 = param_4 + (param_4 << bVar4 | param_4 >> 0x20 - bVar4) + 3;
    iVar1 = *(int *)(param_1 + (longlong)(int)(param_4 % ((param_3 - iVar5) + 1U) + iVar5) * 4);
    lVar11 = (longlong)param_3;
    iVar10 = param_3;
    do {
      uVar8 = (uint)uVar9;
      iVar2 = *(int *)(param_1 + uVar6 * 4);
      while (iVar2 < iVar1) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar2 = *(int *)(param_1 + uVar6 * 4);
      }
      iVar2 = *(int *)(param_1 + lVar11 * 4);
      while (iVar1 < iVar2) {
        lVar11 = lVar11 + -1;
        iVar10 = iVar10 + -1;
        iVar2 = *(int *)(param_1 + lVar11 * 4);
      }
      if (lVar11 < (longlong)uVar6) break;
      uVar3 = *(undefined4 *)(param_1 + uVar6 * 4);
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      iVar10 = iVar10 + -1;
      *(undefined4 *)(param_1 + uVar6 * 4) = *(undefined4 *)(param_1 + lVar11 * 4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_1 + lVar11 * 4) = uVar3;
      lVar11 = lVar11 + -1;
    } while ((longlong)uVar6 <= lVar11);
    if (iVar5 < iVar10) {
      FUN_144bc3400(param_1,uVar7 & 0xffffffff,iVar10,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 144bc3500 FUN_144bc3500 body=2598 status=ok
// SIG undefined FUN_144bc3500(void)

void FUN_144bc3500(undefined8 *param_1,longlong param_2,int param_3,longlong param_4,
                  longlong param_5,longlong *param_6,int param_7)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d0;
  longlong local_1c8;
  uint local_1c0;
  float local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  float local_170;
  float local_160;
  float local_150;
  float local_140;
  float local_130;
  float local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1a8 = param_6;
  local_190 = param_2;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  lVar8 = 0;
  fVar12 = 0.0;
  local_1e0 = 0.0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_188 = (longlong)param_3;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(param_2 + lVar8 * 4);
      local_198 = (longlong)iVar2 * 0x58;
      if ((*(byte *)(local_198 + 0x4c + param_5) & 4) == 0) {
        iVar2 = iVar2 * 3;
        lVar6 = (longlong)iVar2;
        iVar7 = 0;
        if (*(int *)(param_4 + lVar6 * 4) != param_7) {
          if (*(int *)(param_4 + 4 + lVar6 * 4) == param_7) {
            iVar7 = 1;
          }
          else {
            iVar7 = -1;
            if (*(int *)(param_4 + 8 + lVar6 * 4) == param_7) {
              iVar7 = 2;
            }
          }
        }
        local_1c8 = (longlong)(iVar2 + iVar7);
        uVar3 = *(uint *)(param_4 + local_1c8 * 4);
        (**(code **)(*local_1a8 + 0x18))(local_1a8,&local_108,(int)uVar3 >> 2,uVar3 & 3);
        uVar1 = *(undefined8 *)(local_198 + 0x28 + param_5);
        local_170 = *(float *)(local_198 + 0x30 + param_5);
        fVar17 = (float)((ulonglong)*(undefined8 *)(local_198 + 0x28 + param_5) >> 0x20);
        local_150 = *(float *)(local_198 + 0x3c + param_5);
        local_1f4 = local_104;
        fVar12 = local_104 * (float)((ulonglong)uVar1 >> 0x20) + local_108 * (float)uVar1 +
                 local_100 * local_170;
        local_1f8 = local_108;
        local_1f0 = local_100;
        fVar15 = (float)*(undefined8 *)(local_198 + 0x28 + param_5) - local_108 * fVar12;
        fVar13 = fVar17 - local_104 * fVar12;
        uVar1 = *(undefined8 *)(local_198 + 0x34 + param_5);
        fVar14 = local_170 - local_100 * fVar12;
        local_1a0 = CONCAT44(fVar17,fVar13);
        fVar12 = local_104 * (float)((ulonglong)uVar1 >> 0x20) + local_108 * (float)uVar1 +
                 local_100 * local_150;
        fVar11 = (float)*(undefined8 *)(local_198 + 0x34 + param_5) - local_108 * fVar12;
        fVar17 = (float)((ulonglong)*(undefined8 *)(local_198 + 0x34 + param_5) >> 0x20) -
                 local_104 * fVar12;
        fVar18 = local_150 - local_100 * fVar12;
        local_1ec = fVar15;
        local_1e8 = fVar14;
        local_1e4 = fVar11;
        local_160 = local_170;
        local_140 = local_150;
        if (((1.1754944e-38 < ABS(fVar15)) || (1.1754944e-38 < ABS(fVar13))) ||
           (1.1754944e-38 < ABS(fVar14))) {
          fVar12 = sqrtf(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14);
          fVar12 = 1.0 / fVar12;
          local_1ec = fVar12 * fVar15;
          local_1e8 = fVar12 * fVar14;
          local_1a0 = CONCAT44(local_1a0._4_4_,fVar12 * fVar13);
        }
        if (((1.1754944e-38 < ABS(fVar11)) || (1.1754944e-38 < ABS(fVar17))) ||
           (1.1754944e-38 < ABS(fVar18))) {
          fVar12 = sqrtf(fVar11 * fVar11 + fVar17 * fVar17 + fVar18 * fVar18);
          fVar12 = 1.0 / fVar12;
          local_1e4 = fVar12 * fVar11;
          fVar17 = fVar12 * fVar17;
          fVar18 = fVar12 * fVar18;
        }
        plVar4 = local_1a8;
        iVar5 = iVar7 + 1 + iVar2;
        if (1 < iVar7) {
          iVar5 = iVar2;
        }
        local_1c0 = *(uint *)(param_4 + (longlong)iVar5 * 4);
        local_1c8 = CONCAT44(local_1c8._4_4_,*(undefined4 *)(param_4 + local_1c8 * 4));
        if (iVar7 < 1) {
          iVar7 = 2;
        }
        else {
          iVar7 = iVar7 + -1;
        }
        uVar3 = *(uint *)(param_4 + (longlong)(iVar2 + iVar7) * 4);
        (**(code **)(*local_1a8 + 0x10))(local_1a8,&local_f8,(int)uVar3 >> 2,uVar3 & 3);
        (**(code **)(*plVar4 + 0x10))
                  (plVar4,&local_e8,(int)(uint)local_1c8 >> 2,(uint)local_1c8 & 3);
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_118,(int)local_1c0 >> 2,local_1c0 & 3);
        fVar14 = (float)local_118 - local_e8;
        fVar11 = local_118._4_4_ - local_e4;
        fVar13 = local_110 - local_e0;
        fVar12 = local_1f8 * (local_f8 - local_e8) + local_1f4 * (local_f4 - local_e4) +
                 local_1f0 * (local_f0 - local_e0);
        fVar15 = (local_f8 - local_e8) - local_1f8 * fVar12;
        fVar16 = (local_f4 - local_e4) - local_1f4 * fVar12;
        fVar12 = (local_f0 - local_e0) - local_1f0 * fVar12;
        if (((1.1754944e-38 < ABS(fVar15)) || (1.1754944e-38 < ABS(fVar16))) ||
           (1.1754944e-38 < ABS(fVar12))) {
          fVar9 = sqrtf(fVar16 * fVar16 + fVar15 * fVar15 + fVar12 * fVar12);
          fVar9 = 1.0 / fVar9;
          fVar15 = fVar15 * fVar9;
          fVar16 = fVar16 * fVar9;
          fVar12 = fVar12 * fVar9;
        }
        fVar9 = local_1f8 * fVar14 + local_1f4 * fVar11 + local_1f0 * fVar13;
        fVar13 = fVar13 - local_1f0 * fVar9;
        fVar14 = fVar14 - local_1f8 * fVar9;
        fVar11 = fVar11 - local_1f4 * fVar9;
        if (((1.1754944e-38 < ABS(fVar14)) || (1.1754944e-38 < ABS(fVar11))) ||
           (1.1754944e-38 < ABS(fVar13))) {
          fVar9 = sqrtf(fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13);
          fVar9 = 1.0 / fVar9;
          fVar14 = fVar14 * fVar9;
          fVar11 = fVar11 * fVar9;
          fVar13 = fVar13 * fVar9;
        }
        fVar11 = fVar15 * fVar14 + fVar16 * fVar11 + fVar12 * fVar13;
        fVar12 = -1.0;
        if (-1.0 <= fVar11) {
          fVar12 = fVar11;
        }
        fVar11 = 1.0;
        if (fVar12 <= 1.0) {
          fVar11 = fVar12;
        }
        dVar10 = acos((double)fVar11);
        local_130 = *(float *)(param_1 + 1);
        fVar13 = (float)dVar10;
        fVar12 = local_1e0 + fVar13;
        local_120 = local_1e8 * fVar13 + local_130;
        *param_1 = CONCAT44((float)local_1a0 * fVar13 + (float)((ulonglong)*param_1 >> 0x20),
                            local_1ec * fVar13 + (float)*param_1);
        *(float *)(param_1 + 1) = local_120;
        local_1d0 = *(float *)(param_1 + 3);
        fVar11 = *(float *)(local_198 + 0x44 + param_5);
        local_1b0 = fVar18 * fVar13 + local_1d0;
        param_1[2] = CONCAT44(fVar17 * fVar13 + (float)((ulonglong)param_1[2] >> 0x20),
                              local_1e4 * fVar13 + (float)param_1[2]);
        fVar17 = *(float *)(local_198 + 0x40 + param_5);
        *(float *)((longlong)param_1 + 0x1c) =
             fVar13 * fVar11 + *(float *)((longlong)param_1 + 0x1c);
        *(float *)(param_1 + 3) = local_1b0;
        *(float *)((longlong)param_1 + 0xc) = fVar13 * fVar17 + *(float *)((longlong)param_1 + 0xc);
        param_2 = local_190;
        local_1e0 = fVar12;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < local_188);
  }
  if (((1.1754944e-38 < ABS((float)*param_1)) ||
      (local_118._4_4_ = (float)((ulonglong)*param_1 >> 0x20), 1.1754944e-38 < ABS(local_118._4_4_))
      ) || (1.1754944e-38 < ABS(*(float *)(param_1 + 1)))) {
    local_1d0 = *(float *)(param_1 + 1);
    local_118 = *param_1;
    fVar11 = (float)((ulonglong)local_118 >> 0x20);
    fVar17 = (float)local_118;
    local_110 = local_1d0;
    fVar18 = sqrtf(fVar11 * fVar11 + (float)local_118 * (float)local_118 + local_1d0 * local_1d0);
    fVar18 = 1.0 / fVar18;
    local_1b0 = local_1d0 * fVar18;
    *param_1 = CONCAT44(fVar11 * fVar18,fVar17 * fVar18);
    *(float *)(param_1 + 1) = local_1b0;
  }
  uVar1 = param_1[2];
  local_110 = *(float *)(param_1 + 3);
  if (((1.1754944e-38 < ABS((float)uVar1)) ||
      (local_118._4_4_ = (float)((ulonglong)uVar1 >> 0x20), 1.1754944e-38 < ABS(local_118._4_4_)))
     || (local_118 = uVar1, 1.1754944e-38 < ABS(local_110))) {
    local_1d0 = *(float *)(param_1 + 3);
    local_118 = param_1[2];
    fVar11 = (float)((ulonglong)local_118 >> 0x20);
    fVar17 = (float)local_118;
    local_110 = local_1d0;
    fVar18 = sqrtf(fVar11 * fVar11 + (float)local_118 * (float)local_118 + local_1d0 * local_1d0);
    fVar18 = 1.0 / fVar18;
    local_1b0 = local_1d0 * fVar18;
    param_1[2] = CONCAT44(fVar11 * fVar18,fVar17 * fVar18);
    *(float *)(param_1 + 3) = local_1b0;
  }
  if (0.0 < fVar12) {
    *(float *)((longlong)param_1 + 0xc) = *(float *)((longlong)param_1 + 0xc) / fVar12;
    *(float *)((longlong)param_1 + 0x1c) = *(float *)((longlong)param_1 + 0x1c) / fVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d8 ^ (ulonglong)auStack_218);
}



// FUNCTION 144bc3f40 FUN_144bc3f40 body=513 status=ok
// SIG undefined FUN_144bc3f40(void)

void FUN_144bc3f40(longlong param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar16 = (longlong)param_4;
  lVar17 = (longlong)param_3;
  uVar11 = (ulonglong)(int)param_2;
  __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  uVar12 = uVar11;
  do {
    iVar7 = (param_3 - param_2) + 1;
    if (iVar7 < 2) {
      return;
    }
    iVar10 = (int)uVar12;
    if (iVar7 == 2) {
      lVar14 = (longlong)iVar10;
      if (*(int *)(param_1 + (lVar14 * 3 + lVar16) * 4) <=
          *(int *)(param_1 + lVar17 * 0xc + lVar16 * 4)) {
        return;
      }
      uVar6 = *(undefined4 *)(param_1 + 8 + lVar14 * 0xc);
      uVar4 = *(undefined8 *)(param_1 + lVar14 * 0xc);
      puVar2 = (undefined8 *)(param_1 + lVar14 * 0xc);
      puVar3 = (undefined8 *)(param_1 + lVar17 * 0xc);
      *puVar2 = *(undefined8 *)(param_1 + lVar17 * 0xc);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar3 = uVar4;
      *(undefined4 *)(puVar3 + 1) = uVar6;
      return;
    }
    bVar8 = (byte)param_5 & 0x1f;
    uVar13 = uVar12 & 0xffffffff;
    param_5 = param_5 + (param_5 << bVar8 | param_5 >> 0x20 - bVar8) + 3;
    iVar7 = *(int *)(param_1 +
                    ((longlong)(int)(param_5 % ((param_3 - iVar10) + 1U) + iVar10) * 3 + lVar16) * 4
                    );
    lVar14 = lVar17;
    iVar15 = param_3;
    do {
      param_2 = (uint)uVar13;
      lVar9 = uVar11 * 3 + lVar16;
      piVar1 = (int *)(param_1 + lVar9 * 4);
      iVar5 = *(int *)(param_1 + lVar9 * 4);
      while (iVar5 < iVar7) {
        param_2 = (int)uVar13 + 1;
        uVar13 = (ulonglong)param_2;
        piVar1 = piVar1 + 3;
        uVar11 = uVar11 + 1;
        iVar5 = *piVar1;
      }
      lVar9 = lVar14 * 3 + lVar16;
      piVar1 = (int *)(param_1 + lVar9 * 4);
      iVar5 = *(int *)(param_1 + lVar9 * 4);
      while (iVar7 < iVar5) {
        iVar15 = iVar15 + -1;
        piVar1 = piVar1 + -3;
        lVar14 = lVar14 + -1;
        iVar5 = *piVar1;
      }
      if (lVar14 < (longlong)uVar11) break;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_2;
      uVar4 = *(undefined8 *)(param_1 + uVar11 * 0xc);
      puVar2 = (undefined8 *)(param_1 + uVar11 * 0xc);
      uVar6 = *(undefined4 *)(puVar2 + 1);
      puVar3 = (undefined8 *)(param_1 + lVar14 * 0xc);
      *puVar2 = *(undefined8 *)(param_1 + lVar14 * 0xc);
      uVar11 = uVar11 + 1;
      iVar15 = iVar15 + -1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
      lVar14 = lVar14 + -1;
      *puVar3 = uVar4;
      *(undefined4 *)(puVar3 + 1) = uVar6;
    } while ((longlong)uVar11 <= lVar14);
    if (iVar10 < iVar15) {
      FUN_144bc3f40(param_1,uVar12 & 0xffffffff,iVar15,param_4,param_5);
    }
    if (param_3 <= (int)param_2) {
      return;
    }
    uVar12 = (ulonglong)param_2;
    __CheckForDebuggerJustMyCode(&DAT_14d2b6007);
  } while( true );
}



// FUNCTION 144bc4144 FUN_144bc4144 body=70 status=ok
// SIG undefined FUN_144bc4144(void)

int FUN_144bc4144(int param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if ((param_1 - 1U < 2) && (iVar1 = FUN_144f2f890(local_res8), iVar1 == 0)) {
    local_res8[0] = local_res8[0] + 7 & 0xfffffff8;
    iVar1 = FUN_144f2cfe0(param_1);
    return iVar1 + local_res8[0] + 0x58;
  }
  return 0;
}



// FUNCTION 144bc418c FUN_144bc418c body=184 status=ok
// SIG undefined FUN_144bc418c(void)

void * FUN_144bc418c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  void *_Memory;
  
  if (((((param_1 == 48000) || (param_1 == 24000)) || (param_1 == 16000)) ||
      ((param_1 == 12000 || (param_1 == 8000)))) && (param_2 - 1U < 2)) {
    iVar1 = FUN_144bc4144(param_2);
    _Memory = malloc((longlong)iVar1);
    if (_Memory != (void *)0x0) {
      iVar1 = FUN_144bc4244(_Memory,param_1,param_2);
      if (param_3 != (int *)0x0) {
        *param_3 = iVar1;
      }
      if (iVar1 == 0) {
        return _Memory;
      }
      free(_Memory);
      return (void *)0x0;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = -7;
    }
  }
  else if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  return (void *)0x0;
}



// FUNCTION 144bc4244 FUN_144bc4244 body=278 status=ok
// SIG undefined FUN_144bc4244(void)

undefined1 * FUN_144bc4244(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint local_res10 [2];
  
  if (((((param_2 == 48000) || (param_2 == 24000)) || (param_2 == 16000)) ||
      ((param_2 == 12000 || (param_2 == 8000)))) && (param_3 - 1U < 2)) {
    iVar1 = FUN_144bc4144(param_3);
    memset(param_1,0,(longlong)iVar1);
    iVar1 = FUN_144f2f890(local_res10);
    if (iVar1 == 0) {
      param_1[1] = 0x58;
      local_res10[0] = local_res10[0] + 7 & 0xfffffff8;
      param_1[2] = param_3;
      lVar3 = (longlong)(int)(local_res10[0] + 0x58) + (longlong)param_1;
      *param_1 = local_res10[0] + 0x58;
      param_1[0xc] = param_3;
      param_1[3] = param_2;
      param_1[6] = param_2;
      param_1[4] = param_3;
      iVar1 = FUN_144f2f89c(param_1 + 0x16);
      if ((iVar1 == 0) && (iVar1 = FUN_144f2d01c(lVar3,param_2,param_3), iVar1 == 0)) {
        FUN_144f2cde0(lVar3,0x2720,0);
        param_1[0xf] = 0;
        param_1[0x10] = param_2 / 400;
        iVar1 = FUN_144f2f804();
        param_1[0xb] = iVar1;
        return (undefined1 *)0x0;
      }
    }
    puVar2 = &DAT_fffffffd;
  }
  else {
    puVar2 = (undefined1 *)0xffffffff;
  }
  return puVar2;
}



// FUNCTION 144bc435c FUN_144bc435c body=379 status=ok
// SIG undefined FUN_144bc435c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bc435c(longlong param_1,longlong param_2,int param_3,undefined2 *param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 *puVar8;
  float *pfVar9;
  float fVar10;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  int aiStack_68 [6];
  undefined8 local_50;
  undefined4 local_48 [4];
  undefined2 *local_38;
  ulonglong local_30;
  
  puVar8 = auStack_88;
  local_30 = DAT_14c707940 ^ (ulonglong)&local_38;
  iVar7 = 0;
  local_38 = param_4;
  if (0 < param_5) {
    iVar2 = param_5;
    if (((param_2 != 0) && (0 < param_3)) && (param_6 == 0)) {
      uStack_90 = 0x144bc43c9;
      iVar2 = FUN_144bc4720(param_2,param_3,*(undefined4 *)(param_1 + 0xc));
      puVar8 = auStack_88;
      if (iVar2 < 1) goto LAB_144bc44c4;
      if (param_5 < iVar2) {
        iVar2 = param_5;
      }
    }
    iVar4 = *(int *)(param_1 + 8);
    if ((iVar4 != 1) && (iVar4 != 2)) {
      uStack_90 = 0x144bc4400;
      FUN_144bca940("assertion failed: st->channels == 1 || st->channels == 2",
                    "../../../third_party/opus/src/src/opus_decoder.c",0x32a);
      iVar4 = *(int *)(param_1 + 8);
    }
    uVar3 = (longlong)(iVar4 * iVar2) * 4;
    uVar6 = uVar3 + 0xf;
    if (uVar6 <= uVar3) {
      uVar6 = 0xffffffffffffff0;
    }
    uStack_90 = 0x144bc442c;
    lVar1 = -(uVar6 & 0xfffffffffffffff0);
    *(undefined4 *)((longlong)local_48 + lVar1) = 1;
    pfVar9 = (float *)((longlong)&local_38 + lVar1);
    *(undefined8 *)((longlong)&local_50 + lVar1) = 0;
    *(undefined4 *)((longlong)aiStack_68 + lVar1 + 0x10) = 0;
    *(int *)((longlong)aiStack_68 + lVar1 + 8) = param_6;
    *(int *)((longlong)aiStack_68 + lVar1) = iVar2;
    *(undefined8 *)(auStack_88 + lVar1 + -8) = 0x144bc445f;
    iVar2 = FUN_144bc4770(param_1,param_2,param_3,pfVar9);
    puVar8 = auStack_88 + lVar1;
    if ((0 < iVar2) &&
       (puVar5 = local_38, puVar8 = auStack_88 + lVar1, 0 < *(int *)(param_1 + 8) * iVar2)) {
      do {
        fVar10 = *pfVar9 * 32768.0;
        if (fVar10 <= -32768.0) {
          fVar10 = -32768.0;
        }
        if (32767.0 <= fVar10) {
          fVar10 = 32767.0;
        }
        local_38 = (undefined2 *)CONCAT44(local_38._4_4_,fVar10);
        iVar7 = iVar7 + 1;
        pfVar9 = pfVar9 + 1;
        *puVar5 = (short)(int)ROUND(fVar10);
        puVar5 = puVar5 + 1;
        puVar8 = auStack_88 + lVar1;
      } while (iVar7 < *(int *)(param_1 + 8) * iVar2);
    }
  }
LAB_144bc44c4:
  uVar6 = local_30 ^ (ulonglong)&local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_144bc44d0;
  FUN_144d8e3a0(uVar6);
}



// FUNCTION 144bc44f4 FUN_144bc44f4 body=413 status=ok
// SIG undefined FUN_144bc44f4(void)

undefined4 FUN_144bc44f4(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_res18;
  
  iVar2 = param_1[1];
  lVar4 = (longlong)*param_1 + (longlong)param_1;
  local_res18 = (uint)param_3;
  if (param_2 < 0xfc3) {
    if (param_2 == 0xfc2) {
      if (local_res18 + 0x8000 < 0x10000) {
        param_1[10] = local_res18;
        return 0;
      }
    }
    else if (param_2 == 0xfa9) {
      if (param_3 != (int *)0x0) {
        iVar2 = param_1[0xd];
        goto LAB_144bc4682;
      }
    }
    else {
      if (param_2 == 0xfbc) {
        memset(param_1 + 0xc,0,0x28);
        FUN_144f2cde0(lVar4,0xfbc);
        FUN_144f2f89c((longlong)iVar2 + (longlong)param_1);
        param_1[0xc] = param_1[2];
        param_1[0x10] = param_1[3] / 400;
        return 0;
      }
      if (param_2 == 0xfbd) {
        if (param_3 != (int *)0x0) {
          iVar2 = param_1[3];
          goto LAB_144bc4682;
        }
      }
      else if (param_2 == 0xfbf) {
        if (param_3 != (int *)0x0) {
          iVar2 = param_1[0x15];
          goto LAB_144bc4682;
        }
      }
      else {
        if (param_2 != 0xfc1) {
          return 0xfffffffb;
        }
        if (param_3 != (int *)0x0) {
          if (param_1[0xf] == 0x3ea) {
            uVar3 = 0xfc1;
            goto LAB_144bc4641;
          }
          iVar2 = param_1[9];
LAB_144bc4682:
          *param_3 = iVar2;
          return 0;
        }
      }
    }
  }
  else if (param_2 == 0xfc7) {
    if (param_3 != (int *)0x0) {
      iVar2 = param_1[0x12];
      goto LAB_144bc4682;
    }
  }
  else if (param_2 == 0xfcd) {
    if (param_3 != (int *)0x0) {
      iVar2 = param_1[10];
      goto LAB_144bc4682;
    }
  }
  else if (param_2 == 0xfce) {
    if (local_res18 < 2) {
      uVar1 = FUN_144f2cde0(lVar4,0xfce);
      return uVar1;
    }
  }
  else {
    if (param_2 != 0xfcf) {
      return 0xfffffffb;
    }
    if (param_3 != (int *)0x0) {
      uVar3 = 0xfcf;
LAB_144bc4641:
      uVar1 = FUN_144f2cde0(lVar4,uVar3,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144bc4694 free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000144bc4694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 144bc469c FUN_144bc469c body=74 status=ok
// SIG undefined FUN_144bc469c(void)

uint FUN_144bc469c(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    uVar2 = (bVar1 >> 5 & 3) + 0x44e;
    if (uVar2 == 0x44e) {
      uVar2 = 0x44d;
    }
  }
  else if ((bVar1 & 0x60) == 0x60) {
    uVar2 = (bVar1 & 0x10 | 0x4500) >> 4;
  }
  else {
    uVar2 = (bVar1 >> 5 & 3) + 0x44d;
  }
  return uVar2;
}



// FUNCTION 144bc46e8 FUN_144bc46e8 body=54 status=ok
// SIG undefined FUN_144bc46e8(void)

uint FUN_144bc46e8(byte *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 1) {
    return 0xffffffff;
  }
  uVar1 = *param_1 & 3;
  if ((*param_1 & 3) == 0) {
    return uVar1 + 1;
  }
  if (uVar1 != 3) {
    return 2;
  }
  if (param_2 < 2) {
    return 0xfffffffc;
  }
  return param_1[1] & 0x3f;
}



// FUNCTION 144bc4720 FUN_144bc4720 body=79 status=ok
// SIG undefined FUN_144bc4720(void)

ulonglong FUN_144bc4720(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_144bc46e8();
  if (-1 < (int)uVar3) {
    iVar1 = FUN_144bca1c8(param_1,param_3);
    uVar2 = iVar1 * (int)uVar3;
    uVar3 = (ulonglong)uVar2;
    if (param_3 * 3 < (int)(uVar2 * 0x19)) {
      uVar3 = 0xfffffffc;
    }
  }
  return uVar3;
}



// FUNCTION 144bc4770 FUN_144bc4770 body=1273 status=ok
// SIG undefined FUN_144bc4770(void)

void FUN_144bc4770(longlong param_1,byte *param_2,int param_3,longlong param_4,int param_5,
                  uint param_6,undefined4 param_7,undefined8 param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  undefined1 local_e8 [8];
  longlong local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  short local_b8 [48];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = param_8;
  local_e0 = param_4;
  local_d8 = param_3;
  if (1 < *(int *)(param_1 + 8) - 1U) {
    FUN_144bca940("assertion failed: st->channels == 1 || st->channels == 2",
                  "../../../third_party/opus/src/src/opus_decoder.c",0x54);
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if ((((iVar5 != 48000) && (iVar5 != 24000)) && (iVar5 != 16000)) &&
     ((iVar5 != 12000 && (iVar5 != 8000)))) {
    FUN_144bca940("assertion failed: st->Fs == 48000 || st->Fs == 24000 || st->Fs == 16000 || st->Fs == 12000 || st->Fs == 8000"
                  ,"../../../third_party/opus/src/src/opus_decoder.c",0x55);
    iVar5 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x18) != iVar5) {
    FUN_144bca940("assertion failed: st->DecControl.API_sampleRate == st->Fs",
                  "../../../third_party/opus/src/src/opus_decoder.c",0x56);
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if (((iVar5 != 0) && (iVar5 != 16000)) && ((iVar5 != 12000 && (iVar5 != 8000)))) {
    FUN_144bca940("assertion failed: st->DecControl.internalSampleRate == 0 || st->DecControl.internalSampleRate == 16000 || st->DecControl.internalSampleRate == 12000 || st->DecControl.internalSampleRate == 8000"
                  ,"../../../third_party/opus/src/src/opus_decoder.c",0x57);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 8)) {
    FUN_144bca940("assertion failed: st->DecControl.nChannelsAPI == st->channels",
                  "../../../third_party/opus/src/src/opus_decoder.c",0x58);
  }
  if (2 < *(uint *)(param_1 + 0x14)) {
    FUN_144bca940("assertion failed: st->DecControl.nChannelsInternal == 0 || st->DecControl.nChannelsInternal == 1 || st->DecControl.nChannelsInternal == 2"
                  ,"../../../third_party/opus/src/src/opus_decoder.c",0x59);
  }
  if ((0x3c < *(uint *)(param_1 + 0x20)) ||
     ((0x1000010000100401U >> ((longlong)*(int *)(param_1 + 0x20) & 0x3fU) & 1) == 0)) {
    FUN_144bca940("assertion failed: st->DecControl.payloadSize_ms == 0 || st->DecControl.payloadSize_ms == 10 || st->DecControl.payloadSize_ms == 20 || st->DecControl.payloadSize_ms == 40 || st->DecControl.payloadSize_ms == 60"
                  ,"../../../third_party/opus/src/src/opus_decoder.c",0x5a);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 < 0) {
    FUN_144bca940("assertion failed: st->arch >= 0",
                  "../../../third_party/opus/src/src/opus_decoder.c",0x5c);
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  if (7 < iVar5) {
    FUN_144bca940("assertion failed: st->arch <= OPUS_ARCHMASK",
                  "../../../third_party/opus/src/src/opus_decoder.c",0x5d);
  }
  if (1 < *(int *)(param_1 + 0x30) - 1U) {
    FUN_144bca940("assertion failed: st->stream_channels == 1 || st->stream_channels == 2",
                  "../../../third_party/opus/src/src/opus_decoder.c",0x5f);
  }
  if ((param_6 < 2) &&
     ((((param_6 == 0 && (param_3 != 0)) && (param_2 != (byte *)0x0)) ||
      (param_5 % (*(int *)(param_1 + 0xc) / 400) == 0)))) {
    if ((param_3 == 0) || (param_2 == (byte *)0x0)) {
      iVar5 = 0;
      do {
        local_110 = (short *)((ulonglong)local_110 & 0xffffffff00000000);
        local_118 = CONCAT44(local_118._4_4_,param_5 - iVar5);
        iVar2 = FUN_144bc4d48(param_1,0,0,param_4 + (longlong)(iVar5 * *(int *)(param_1 + 8)) * 4);
        if (iVar2 < 0) goto LAB_144bc4c59;
        iVar5 = iVar5 + iVar2;
      } while (iVar5 < param_5);
      if (iVar5 != param_5) {
        FUN_144bca940("assertion failed: pcm_count == frame_size",
                      "../../../third_party/opus/src/src/opus_decoder.c",0x28c);
      }
      *(int *)(param_1 + 0x48) = iVar5;
    }
    else if (-1 < param_3) {
      if ((char)*param_2 < '\0') {
        iVar5 = 0x3ea;
      }
      else {
        iVar5 = 0x3e9 - (uint)((*param_2 & 0x60) != 0x60);
      }
      uVar1 = FUN_144bc469c(param_2);
      local_d0 = uVar1;
      iVar2 = FUN_144bca1c8(param_2,*(undefined4 *)(param_1 + 0xc));
      local_100 = local_c8;
      local_108 = &local_d4;
      iVar9 = ((*param_2 & 4) != 0) + 1;
      local_110 = local_b8;
      local_118 = 0;
      iVar3 = FUN_144bca560(param_2,local_d8,param_7,local_e8);
      uVar6 = 0;
      if (-1 < iVar3) {
        param_2 = param_2 + local_d4;
        if (param_6 == 0) {
          if (iVar3 * iVar2 <= param_5) {
            *(undefined4 *)(param_1 + 0x34) = uVar1;
            uVar7 = 0;
            *(int *)(param_1 + 0x30) = iVar9;
            *(int *)(param_1 + 0x38) = iVar5;
            *(int *)(param_1 + 0x40) = iVar2;
            uVar8 = uVar6;
            if (0 < iVar3) {
              do {
                iVar9 = (int)uVar8;
                local_110 = (short *)((ulonglong)local_110 & 0xffffffff00000000);
                local_118 = CONCAT44(local_118._4_4_,param_5 - iVar9);
                iVar5 = FUN_144bc4d48(param_1,param_2,(int)local_b8[uVar6],
                                      param_4 + (longlong)(iVar9 * *(int *)(param_1 + 8)) * 4);
                if (iVar5 < 0) goto LAB_144bc4c59;
                if (iVar5 != iVar2) {
                  FUN_144bca940("assertion failed: ret==packet_frame_size",
                                "../../../third_party/opus/src/src/opus_decoder.c",0x2d4);
                }
                uVar7 = iVar9 + iVar5;
                param_2 = param_2 + local_b8[uVar6];
                uVar6 = uVar6 + 1;
                uVar8 = (ulonglong)uVar7;
                param_4 = local_e0;
              } while ((longlong)uVar6 < (longlong)iVar3);
            }
            *(uint *)(param_1 + 0x48) = uVar7;
            if (param_9 == 0) {
              *(undefined8 *)(param_1 + 0x4c) = 0;
            }
            else {
              FUN_144bca244(param_4,uVar7,*(undefined4 *)(param_1 + 8),param_1 + 0x4c);
            }
          }
        }
        else if (((param_5 < iVar2) || (iVar5 == 0x3ea)) || (*(int *)(param_1 + 0x38) == 0x3ea)) {
          local_f8 = param_9;
          local_100 = 0;
          local_108 = (int *)((ulonglong)local_108._4_4_ << 0x20);
          local_110 = (short *)((ulonglong)local_110._4_4_ << 0x20);
          local_118 = CONCAT44(local_118._4_4_,param_5);
          FUN_144bc4770(param_1,0,0,param_4);
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 0x48);
          iVar3 = param_5 - iVar2;
          if (iVar3 != 0) {
            local_f8 = param_9;
            local_100 = 0;
            local_108 = (int *)((ulonglong)local_108._4_4_ << 0x20);
            local_110 = (short *)((ulonglong)local_110._4_4_ << 0x20);
            local_118 = CONCAT44(local_118._4_4_,iVar3);
            iVar4 = FUN_144bc4770(param_1,0,0,local_e0);
            if (iVar4 < 0) {
              *(undefined4 *)(param_1 + 0x48) = uVar1;
              goto LAB_144bc4c59;
            }
            if (iVar4 != iVar3) {
              FUN_144bca940("assertion failed: ret==frame_size-packet_frame_size",
                            "../../../third_party/opus/src/src/opus_decoder.c",0x2b1);
            }
          }
          *(undefined4 *)(param_1 + 0x34) = local_d0;
          local_110 = (short *)CONCAT44(local_110._4_4_,1);
          *(int *)(param_1 + 0x38) = iVar5;
          *(int *)(param_1 + 0x40) = iVar2;
          *(int *)(param_1 + 0x30) = iVar9;
          local_118 = CONCAT44(local_118._4_4_,iVar2);
          iVar5 = FUN_144bc4d48(param_1,param_2,(int)local_b8[0],
                                local_e0 + (longlong)(iVar3 * *(int *)(param_1 + 8)) * 4);
          if (-1 < iVar5) {
            *(int *)(param_1 + 0x48) = param_5;
          }
        }
      }
    }
  }
LAB_144bc4c59:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_138);
}



// FUNCTION 144bc4c80 FUN_144bc4c80 body=200 status=ok
// SIG undefined FUN_144bc4c80(void)

void FUN_144bc4c80(longlong param_1,float *param_2,longlong param_3,uint param_4,uint param_5,
                  float *param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  
  if (0 < (int)param_5) {
    uVar3 = (ulonglong)param_5;
    pfVar4 = param_2;
    do {
      if (0 < (int)param_4) {
        pfVar1 = pfVar4;
        pfVar2 = param_6;
        uVar5 = (ulonglong)param_4;
        do {
          fVar6 = *pfVar2;
          pfVar2 = pfVar2 + (int)(48000 / (longlong)param_7);
          fVar6 = fVar6 * fVar6;
          *(float *)((param_3 - (longlong)param_2) + (longlong)pfVar1) =
               (1.0 - fVar6) * *(float *)((param_1 - (longlong)param_2) + (longlong)pfVar1) +
               fVar6 * *pfVar1;
          pfVar1 = pfVar1 + (int)param_5;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 144bc4d48 FUN_144bc4d48 body=3107 status=ok
// SIG undefined FUN_144bc4d48(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bc4d48(int *param_1,ulonglong param_2,int param_3,float *param_4,float param_5,
                  int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  short *psVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  undefined1 *puVar22;
  int iVar23;
  undefined4 uVar24;
  float fVar25;
  short *psVar26;
  float *pfVar27;
  float fVar28;
  double dVar29;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  float local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  int local_e0 [2];
  float local_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  longlong local_b8;
  float local_b0;
  int iStack_ac;
  float local_a8 [2];
  ulonglong local_a0;
  int local_98;
  int local_94;
  float local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  short *local_78;
  undefined1 local_70 [8];
  int local_68;
  int local_58;
  uint local_50;
  ulonglong local_38;
  float fVar9;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_d8;
  iVar23 = 0;
  iVar8 = 0;
  local_80 = (longlong)param_1[1] + (longlong)param_1;
  local_b8 = (longlong)*param_1 + (longlong)param_1;
  local_8c = 0;
  local_88 = 0;
  iStack_cc = 0;
  local_90 = (float)(param_1[3] / 0x32);
  iStack_d4 = 0;
  iStack_ac = 0;
  iStack_c4 = 0;
  fVar28 = (float)((int)local_90 >> 1);
  local_a8[0] = 0.0;
  local_d8 = (float)((int)local_90 >> 2);
  local_d0 = (int)local_90 >> 3;
  puVar22 = auStack_118;
  local_c8 = param_3;
  local_a0 = param_2;
  if ((int)param_5 < local_d0) goto LAB_144bc595c;
  fVar25 = (float)((param_1[3] / 0x19) * 3);
  if ((int)fVar25 <= (int)param_5) {
    param_5 = fVar25;
  }
  if (param_3 < 2) {
    local_a0 = 0;
    if (param_1[0x10] <= (int)param_5) {
      param_5 = (float)param_1[0x10];
      goto LAB_144bc4e43;
    }
LAB_144bc4e7f:
    iVar10 = param_1[0xf];
    iVar16 = 0;
    local_94 = 0;
    local_c0 = iVar10;
    if (iVar10 == 0) {
      puVar22 = auStack_118;
      if (0 < (int)param_5 * param_1[2]) {
        do {
          *param_4 = 0.0;
          param_4 = param_4 + 1;
          iVar16 = iVar16 + 1;
          puVar22 = auStack_118;
        } while (iVar16 < (int)param_5 * param_1[2]);
      }
      goto LAB_144bc595c;
    }
    if ((int)local_90 < (int)param_5) {
      do {
        local_f0._0_4_ = 0;
        local_f8[0] = local_90;
        if ((int)param_5 < (int)local_90) {
          local_f8[0] = param_5;
        }
        uStack_120 = 0x144bc4edb;
        iVar23 = FUN_144bc4d48(param_1,0,0,param_4);
        puVar22 = auStack_118;
        if (iVar23 < 0) break;
        param_5 = (float)((int)param_5 - iVar23);
        param_4 = param_4 + param_1[2] * iVar23;
        puVar22 = auStack_118;
      } while (0 < (int)param_5);
      goto LAB_144bc595c;
    }
    fVar25 = param_5;
    if (((((int)param_5 < (int)local_90) && (fVar25 = fVar28, (int)param_5 <= (int)fVar28)) &&
        (fVar25 = param_5, iVar23 = iVar8, iVar10 != 1000)) &&
       (((int)local_d8 < (int)param_5 && ((int)param_5 < (int)fVar28)))) {
      fVar25 = local_d8;
    }
  }
  else {
LAB_144bc4e43:
    if (local_a0 == 0) goto LAB_144bc4e7f;
    iVar10 = param_1[0xe];
    iVar23 = param_1[0xd];
    fVar25 = (float)param_1[0x10];
    uStack_120 = 0x144bc4e6a;
    local_c0 = iVar10;
    local_94 = iVar23;
    FUN_144f2f434(local_70,local_a0,param_3);
  }
  fVar9 = local_d8;
  iVar8 = 0;
  local_98 = 0;
  iVar16 = local_98;
  if ((local_a0 != 0) && (iVar11 = param_1[0xf], 0 < iVar11)) {
    if (iVar10 == 0x3ea) {
      if ((iVar11 != 0x3ea) && (param_1[0x11] == 0)) {
LAB_144bc4f56:
        iStack_cc = 1;
        iVar16 = param_1[2] * (int)local_d8;
        if (iVar10 == 0x3ea) {
          iVar8 = param_1[2] * (int)local_d8;
          iVar16 = local_98;
        }
      }
    }
    else if (iVar11 == 0x3ea) goto LAB_144bc4f56;
  }
  local_98 = iVar16;
  uVar15 = (longlong)iVar8 * 4 + 0xf;
  if (uVar15 <= (ulonglong)((longlong)iVar8 * 4)) {
    uVar15 = 0xffffffffffffff0;
  }
  uStack_120 = 0x144bc4f98;
  lVar3 = -(uVar15 & 0xfffffffffffffff0);
  puVar22 = auStack_118 + lVar3;
  if ((iStack_cc != 0) && (iVar10 == 0x3ea)) {
    *(undefined4 *)((longlong)&local_f0 + lVar3) = 0;
    fVar7 = fVar25;
    if ((int)fVar9 < (int)fVar25) {
      fVar7 = local_d8;
    }
    *(float *)((longlong)local_f8 + lVar3) = fVar7;
    local_88 = (longlong)&local_d8 + lVar3;
    *(undefined8 *)(auStack_118 + lVar3 + -8) = 0x144bc4fd0;
    FUN_144bc4d48(param_1);
  }
  if ((int)param_5 < (int)fVar25) goto LAB_144bc595c;
  if (iVar10 == 0x3ea) {
    iVar8 = 0;
  }
  else {
    fVar9 = fVar25;
    if ((int)fVar25 < (int)fVar28) {
      fVar9 = fVar28;
    }
    iVar8 = (int)fVar9 * param_1[2];
  }
  uVar15 = (longlong)iVar8 * 2 + 0xf;
  if (uVar15 <= (ulonglong)((longlong)iVar8 * 2)) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_118 + lVar3 + -8) = 0x144bc5022;
  lVar5 = local_80;
  lVar4 = -(uVar15 & 0xfffffffffffffff0);
  puVar22 = auStack_118 + lVar4 + lVar3;
  psVar26 = (short *)((longlong)&local_d8 + lVar4 + lVar3);
  local_78 = psVar26;
  if (iVar10 != 0x3ea) {
    if (param_1[0xf] == 0x3ea) {
      *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc504e;
      FUN_144f2f89c(lVar5);
    }
    uVar15 = local_a0;
    iVar8 = ((int)fVar25 * 1000) / param_1[3];
    if (iVar8 < 10) {
      iVar8 = 10;
    }
    param_1[8] = iVar8;
    if (local_a0 != 0) {
      param_1[5] = param_1[0xc];
      if (local_c0 == 1000) {
        if (iVar23 == 0x44d) {
          param_1[7] = 8000;
        }
        else if (iVar23 == 0x44e) {
          param_1[7] = 12000;
        }
        else {
          param_1[7] = 16000;
          if (iVar23 != 0x44f) {
            *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc50cd;
            FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/src/opus_decoder.c");
          }
        }
      }
      else {
        param_1[7] = 16000;
      }
    }
    iVar23 = param_6 * 2;
    iVar8 = 0;
    if (uVar15 == 0) {
      iVar23 = 1;
      iVar8 = 0;
    }
    do {
      lVar5 = local_80;
      *(int *)((longlong)local_e0 + lVar4 + lVar3) = param_1[0xb];
      *(float **)((longlong)&local_e8 + lVar4 + lVar3) = &local_b0;
      *(short **)((longlong)&local_f0 + lVar4 + lVar3) = psVar26;
      *(undefined1 **)((longlong)local_f8 + lVar4 + lVar3) = local_70;
      *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc5124;
      iVar10 = FUN_144f2f8f0(lVar5,param_1 + 4,iVar23,iVar8 == 0);
      iVar16 = 0;
      if (iVar10 != 0) {
        if (iVar23 == 0) goto LAB_144bc595c;
        psVar12 = psVar26;
        local_b0 = fVar25;
        if (0 < (int)fVar25 * param_1[2]) {
          do {
            *psVar12 = 0;
            iVar16 = iVar16 + 1;
            psVar12 = psVar12 + 1;
          } while (iVar16 < (int)fVar25 * param_1[2]);
        }
      }
      iVar8 = iVar8 + (int)local_b0;
      psVar26 = psVar26 + param_1[2] * (int)local_b0;
      iVar10 = local_c0;
    } while (iVar8 < (int)fVar25);
  }
  iVar23 = local_c8;
  if (((param_6 == 0) && (iVar10 != 0x3ea)) && (local_a0 != 0)) {
    iVar8 = 0x1f;
    if (local_50 != 0) {
      for (; local_50 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar16 = 0;
    if (param_1[0xe] == 0x3e9) {
      iVar16 = 0x14;
    }
    if ((iVar16 - iVar8) + local_58 + 0x10 <= local_c8 << 3) {
      if (iVar10 == 0x3e9) {
        *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc51ef;
        iVar8 = FUN_144f2f528(local_70,0xc);
      }
      else {
        iVar8 = 1;
      }
      iStack_d4 = iVar8;
      if (iVar8 != 0) {
        *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc5222;
        iStack_c4 = FUN_144f2f528(local_70,1);
        if (iVar10 == 0x3e9) {
          *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc5238;
          iVar16 = FUN_144f2f5c4(local_70,0x100);
          iVar16 = iVar16 + 2;
        }
        else {
          iVar16 = 0x1f;
          if (local_50 != 0) {
            for (; local_50 >> iVar16 == 0; iVar16 = iVar16 + -1) {
            }
          }
          iVar16 = iVar23 - ((local_58 - iVar16) + 6 >> 3);
        }
        iVar11 = 0x1f;
        if (local_50 != 0) {
          for (; local_50 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        iVar23 = iVar23 - iVar16;
        iStack_d4 = 0;
        iVar17 = (local_58 - iVar11) + -1;
        iVar11 = iVar23 * 8;
        iStack_ac = iStack_d4;
        if (iVar17 <= iVar11) {
          iStack_ac = iVar16;
        }
        local_68 = local_68 - iStack_ac;
        local_c8 = iStack_d4;
        if (iVar17 <= iVar11) {
          iStack_d4 = iVar8;
          local_c8 = iVar23;
        }
      }
    }
  }
  iVar8 = 0;
  iVar23 = 0;
  if (iStack_d4 == 0) {
    iVar8 = iStack_cc;
    iVar23 = local_98;
  }
  local_80 = CONCAT44(local_80._4_4_,iVar8);
  uVar15 = (longlong)iVar23 * 4 + 0xf;
  if (uVar15 <= (ulonglong)((longlong)iVar23 * 4)) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_118 + lVar4 + lVar3 + -8) = 0x144bc52f2;
  fVar28 = local_d8;
  lVar5 = -(uVar15 & 0xfffffffffffffff0);
  if ((iVar8 != 0) && (iVar10 != 0x3ea)) {
    *(undefined4 *)((longlong)&local_f0 + lVar5 + lVar4 + lVar3) = 0;
    fVar9 = fVar25;
    if ((int)fVar28 < (int)fVar25) {
      fVar9 = fVar28;
    }
    local_88 = (longlong)&local_d8 + lVar5 + lVar4 + lVar3;
    *(float *)((longlong)local_f8 + lVar5 + lVar4 + lVar3) = fVar9;
    *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc532a;
    FUN_144bc4d48(param_1,0,0);
  }
  lVar13 = local_b8;
  if (local_94 != 0) {
    uVar24 = 0x15;
    if (local_94 == 0x44d) {
      uVar24 = 0xd;
    }
    else if (local_94 < 0x44e) {
LAB_144bc535a:
      *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5373;
      FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/src/opus_decoder.c",0x1e8);
    }
    else if (local_94 < 0x450) {
      uVar24 = 0x11;
    }
    else if (local_94 == 0x450) {
      uVar24 = 0x13;
    }
    else if (local_94 != 0x451) goto LAB_144bc535a;
    lVar13 = local_b8;
    *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc539c;
    iVar23 = FUN_144f2cde0(lVar13,0x271c,uVar24);
    if (iVar23 != 0) {
      *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc53b9;
      FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10012, (((void)((endband) == (opus_int32)0)), (opus_int32)(endband)))) == OPUS_OK"
                    ,"../../../third_party/opus/src/src/opus_decoder.c",0x1eb);
    }
  }
  *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc53d0;
  iVar23 = FUN_144f2cde0(lVar13,0x2718);
  if (iVar23 != 0) {
    *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc53f0;
    FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10008, (((void)((st->stream_channels) == (opus_int32)0)), (opus_int32)(st->stream_channels)))) == OPUS_OK"
                  ,"../../../third_party/opus/src/src/opus_decoder.c");
  }
  iVar23 = iStack_d4;
  iVar8 = 0;
  if (iStack_d4 != 0) {
    iVar8 = param_1[2] * (int)fVar28;
  }
  uVar15 = (longlong)iVar8 * 4 + 0xf;
  if (uVar15 <= (ulonglong)((longlong)iVar8 * 4)) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_118 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc542b;
  lVar6 = -(uVar15 & 0xfffffffffffffff0);
  puVar22 = auStack_118 + lVar6 + lVar5 + lVar4 + lVar3;
  lVar1 = (longlong)&local_d8 + lVar6 + lVar5 + lVar4 + lVar3;
  if ((iVar23 != 0) && (iStack_c4 != 0)) {
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5455;
    iVar23 = FUN_144f2cde0(lVar13,0x271a,0);
    if (iVar23 != 0) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5472;
      FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((0) == (opus_int32)0)), (opus_int32)(0)))) == OPUS_OK"
                    ,"../../../third_party/opus/src/src/opus_decoder.c",0x1f6);
    }
    iVar23 = iStack_ac;
    lVar19 = (longlong)local_c8 + local_a0;
    *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(float *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = local_d8;
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc549b;
    FUN_144f2d108(lVar13,lVar19,iVar23,lVar1);
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc54ac;
    iVar23 = FUN_144f2cde0(lVar13,0xfbf,local_a8);
    if (iVar23 != 0) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc54c9;
      FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4031, ((&redundant_rng) + ((&redundant_rng) - (opus_uint32*)(&redundant_rng))))) == OPUS_OK"
                    ,"../../../third_party/opus/src/src/opus_decoder.c",0x1f9);
    }
  }
  *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc54d9;
  iVar23 = FUN_144f2cde0(lVar13,0x271a,-(iVar10 != 0x3ea) & 0x11);
  uVar15 = 0;
  if (iVar23 != 0) {
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc54f9;
    FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((start_band) == (opus_int32)0)), (opus_int32)(start_band)))) == OPUS_OK"
                  ,"../../../third_party/opus/src/src/opus_decoder.c",0x1fd);
  }
  lVar19 = local_b8;
  if (iVar10 == 1000) {
    iStack_cc = CONCAT22(iStack_cc._2_2_,0xffff);
    pfVar14 = param_4;
    uVar20 = uVar15;
    if (0 < (int)fVar25 * param_1[2]) {
      do {
        *pfVar14 = 0.0;
        uVar18 = (int)uVar20 + 1;
        pfVar14 = pfVar14 + 1;
        uVar20 = (ulonglong)uVar18;
        iVar10 = local_c0;
      } while ((int)uVar18 < (int)fVar25 * param_1[2]);
    }
    if ((param_1[0xf] == 0x3e9) && (((iStack_d4 == 0 || (iStack_c4 == 0)) || (param_1[0x11] == 0))))
    {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc55e0;
      iVar23 = FUN_144f2cde0(lVar13,0x271a,0);
      if (iVar23 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc55fd;
        FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((0) == (opus_int32)0)), (opus_int32)(0)))) == OPUS_OK"
                      ,"../../../third_party/opus/src/src/opus_decoder.c",0x213);
      }
      iVar23 = local_d0;
      *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar23;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5623;
      FUN_144f2d108(lVar13,&iStack_cc,2,param_4);
      goto LAB_144bc5623;
    }
LAB_144bc562c:
    pfVar14 = param_4;
    psVar26 = local_78;
    if (0 < (int)fVar25 * param_1[2]) {
      do {
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
        *pfVar14 = (float)(int)*psVar26 * 3.0517578e-05 + *pfVar14;
        pfVar14 = pfVar14 + 1;
        psVar26 = psVar26 + 1;
      } while ((int)uVar18 < (int)fVar25 * param_1[2]);
    }
  }
  else {
    fVar28 = fVar25;
    if ((int)local_90 < (int)fVar25) {
      fVar28 = local_90;
    }
    if (((iVar10 != param_1[0xf]) && (0 < param_1[0xf])) && (param_1[0x11] == 0)) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc552f;
      iVar23 = FUN_144f2cde0(lVar19,0xfbc);
      if (iVar23 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc554c;
        FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4028)) == OPUS_OK",
                      "../../../third_party/opus/src/src/opus_decoder.c",0x204);
      }
    }
    iVar23 = local_c8;
    uVar20 = local_a0;
    if (param_6 != 0) {
      uVar20 = uVar15;
    }
    *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(undefined1 **)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = local_70;
    *(float *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = fVar28;
    lVar13 = local_b8;
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5580;
    local_8c = FUN_144f2d108(lVar13,uVar20,iVar23,param_4);
LAB_144bc5623:
    if (iVar10 != 0x3ea) goto LAB_144bc562c;
  }
  *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc568f;
  iVar23 = FUN_144f2cde0(lVar13,0x271f,&local_78);
  if (iVar23 != 0) {
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc56af;
    FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10015, ((&celt_mode) + ((&celt_mode) - (const OpusCustomMode**)(&celt_mode))))) == OPUS_OK"
                  ,"../../../third_party/opus/src/src/opus_decoder.c",0x225);
  }
  lVar13 = local_b8;
  uVar2 = *(undefined8 *)(local_78 + 0x24);
  iVar23 = local_d0;
  if (iStack_d4 != 0) {
    if (iStack_c4 == 0) {
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc56dc;
      iVar23 = FUN_144f2cde0(lVar13,0xfbc);
      if (iVar23 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc56f9;
        FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4028)) == OPUS_OK",
                      "../../../third_party/opus/src/src/opus_decoder.c",0x22c);
      }
      lVar13 = local_b8;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc570a;
      iVar23 = FUN_144f2cde0(lVar13,0x271a,0);
      if (iVar23 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5727;
        FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 10010, (((void)((0) == (opus_int32)0)), (opus_int32)(0)))) == OPUS_OK"
                      ,"../../../third_party/opus/src/src/opus_decoder.c",0x22d);
      }
      iVar23 = iStack_ac;
      lVar13 = local_b8;
      lVar19 = (longlong)local_c8 + local_a0;
      *(undefined4 *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
      *(float *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = local_d8;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5751;
      FUN_144f2d108(lVar13,lVar19,iVar23,lVar1);
      lVar13 = local_b8;
      *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5763;
      iVar23 = FUN_144f2cde0(lVar13,0xfbf,local_a8);
      if (iVar23 != 0) {
        *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc5780;
        FUN_144bca940("assertion failed: (opus_custom_decoder_ctl(celt_dec, 4031, ((&redundant_rng) + ((&redundant_rng) - (opus_uint32*)(&redundant_rng))))) == OPUS_OK"
                      ,"../../../third_party/opus/src/src/opus_decoder.c",0x230);
      }
      iVar23 = param_1[2];
      pfVar14 = param_4 + ((int)fVar25 - local_d0) * iVar23;
      pfVar21 = (float *)(lVar1 + (longlong)(iVar23 * local_d0) * 4);
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar23;
      pfVar27 = pfVar14;
    }
    else {
      iVar23 = param_1[2];
      iVar8 = 0;
      if (0 < iVar23) {
        do {
          iVar16 = 0;
          if (0 < local_d0) {
            do {
              iVar23 = iVar16 + 1;
              lVar13 = (longlong)(iVar16 * param_1[2] + iVar8);
              param_4[lVar13] = *(float *)(lVar1 + lVar13 * 4);
              iVar16 = iVar23;
            } while (iVar23 < local_d0);
            iVar23 = param_1[2];
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar23);
      }
      iVar8 = iVar23 * local_d0;
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      pfVar21 = param_4 + iVar8;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar23;
      pfVar14 = (float *)(lVar1 + (longlong)iVar8 * 4);
      pfVar27 = pfVar21;
    }
    iVar23 = local_d0;
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc57c0;
    FUN_144bc4c80(pfVar14,pfVar21,pfVar27,iVar23);
  }
  lVar13 = local_88;
  if ((int)local_80 != 0) {
    iVar8 = param_1[2];
    if ((int)fVar25 < (int)local_d8) {
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar8;
      pfVar14 = param_4;
    }
    else {
      iVar16 = 0;
      if (0 < iVar8 * iVar23) {
        pfVar14 = param_4;
        do {
          iVar16 = iVar16 + 1;
          *pfVar14 = *(float *)((local_88 - (longlong)param_4) + (longlong)pfVar14);
          pfVar14 = pfVar14 + 1;
          iVar8 = param_1[2];
        } while (iVar16 < iVar8 * iVar23);
      }
      *(int *)((longlong)&local_e8 + lVar6 + lVar5 + lVar4 + lVar3) = param_1[3];
      *(undefined8 *)((longlong)&local_f0 + lVar6 + lVar5 + lVar4 + lVar3) = uVar2;
      *(int *)((longlong)local_f8 + lVar6 + lVar5 + lVar4 + lVar3) = iVar8;
      lVar13 = lVar13 + (longlong)(iVar8 * iVar23) * 4;
      pfVar14 = param_4 + iVar8 * iVar23;
    }
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc58c6;
    FUN_144bc4c80(lVar13,pfVar14,pfVar14,iVar23);
  }
  if (param_1[10] != 0) {
    iVar23 = param_1[10];
    *(undefined8 *)(auStack_118 + lVar6 + lVar5 + lVar4 + lVar3 + -8) = 0x144bc58ef;
    dVar29 = exp((double)((float)iVar23 * 0.0006488141) * 0.6931471805599453);
    iVar23 = 0;
    if (0 < (int)fVar25 * param_1[2]) {
      do {
        iVar23 = iVar23 + 1;
        *param_4 = (float)dVar29 * *param_4;
        param_4 = param_4 + 1;
      } while (iVar23 < (int)fVar25 * param_1[2]);
    }
  }
  if (local_c8 < 2) {
    uVar18 = 0;
  }
  else {
    uVar18 = local_50 ^ (uint)local_a8[0];
  }
  param_1[0x15] = uVar18;
  param_1[0xf] = iVar10;
  if ((iStack_d4 == 0) || (iVar23 = 1, iStack_c4 != 0)) {
    iVar23 = 0;
  }
  param_1[0x11] = iVar23;
LAB_144bc595c:
  uVar15 = local_38 ^ (ulonglong)&local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_144bc596b;
  FUN_144d8e3a0(uVar15);
}


