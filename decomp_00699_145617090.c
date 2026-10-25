// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145617090 FUN_145617090 body=177 status=ok
// SIG undefined FUN_145617090(void)

void FUN_145617090(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x2e57c) == 3) {
    *param_3 = 0;
    *param_4 = 0x7fffffff;
    return;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0xb4874) * (longlong)param_2;
  lVar3 = lVar3 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8);
  lVar4 = (longlong)*(int *)(param_1 + 0xb4870) * (longlong)param_2;
  lVar4 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4),8) + lVar4;
  iVar1 = (param_2 - ((int)(lVar4 >> 6) - (int)(lVar4 >> 0x3f))) + -100;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar2 = param_2 + 100 + ((int)(lVar3 >> 6) - (int)(lVar3 >> 0x3f));
  *param_3 = iVar1;
  if (*(int *)(param_1 + 0xb4310) <= iVar2) {
    iVar2 = *(int *)(param_1 + 0xb4310);
  }
  *param_4 = iVar2;
  return;
}



// FUNCTION 145617150 FUN_145617150 body=137 status=ok
// SIG undefined FUN_145617150(void)

void FUN_145617150(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2e56c) == 0) {
    if (*(int *)(param_1 + 0x2e57c) == 1) {
      iVar1 = FUN_145619240();
    }
    else {
      iVar1 = FUN_145619530();
    }
  }
  else {
    iVar1 = FUN_145619be0();
  }
  if (*(int *)(param_1 + 0xb4834) != 0) {
    if (*(int *)(param_1 + 0xb47c0) == 1) {
      iVar1 = iVar1 - *(int *)(param_1 + 0xb47c4);
    }
    if (iVar1 < *param_2) {
      *param_2 = iVar1;
      return;
    }
    if (*param_3 < iVar1) {
      *param_3 = iVar1;
    }
  }
  return;
}



// FUNCTION 1456171e0 FUN_1456171e0 body=525 status=ok
// SIG undefined FUN_1456171e0(void)

int FUN_1456171e0(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_res10 [2];
  
  lVar2 = *(longlong *)(param_1 + 0xb4980);
  iVar5 = 0x7fffffff;
  lVar4 = (longlong)param_2;
  dVar7 = (double)FUN_145618ea0();
  iVar1 = *(int *)(param_1 + 0x2a300);
  while( true ) {
    if (((*(int *)(param_1 + 0x2e5b4) == 3) && (*(int *)(lVar2 + 0x78) != 0)) &&
       ((*(int *)(param_1 + 0x2e564) == 0 || (*(int *)(param_1 + 0x2f6c8) == 0)))) {
      iVar3 = FUN_14565d2c0(param_1,param_3,SUB84(dVar7,0));
    }
    else {
      if (*(char *)(param_1 + 0x2a2f4) == '\0') {
        iVar3 = *(int *)(param_1 + 0x2a2e4);
      }
      else {
        iVar3 = 0;
      }
      dVar8 = (double)FUN_145614250(param_3,*(undefined4 *)(param_1 + 0x2e4d0));
      iVar6 = 1800000;
      if (iVar3 == 0) {
        iVar6 = 2700000;
      }
      iVar3 = (int)(((double)(((int)((double)iVar6 * dVar8) >> 0xc) + iVar6) * dVar7) / dVar8);
    }
    iVar6 = (int)((ulonglong)(lVar4 << 9) / (ulonglong)(longlong)iVar1);
    if (iVar3 <= iVar6) break;
    param_3 = param_3 + 1;
    iVar5 = iVar3 - iVar6;
    if (param_4 < param_3) {
LAB_1456172f1:
      if (*(int *)(param_1 + 0x2e57c) != 1) {
        return param_4;
      }
      local_res10[0] = param_4;
      if ((*(int *)(param_1 + 0xb44f4) == 0) &&
         (((*(int *)(param_1 + 0x2e564) == 0 ||
           ((*(int *)(param_1 + 0x2f6cc) == 0 && (*(int *)(param_1 + 0x2f6c8) == 0)))) &&
          (*(int *)(param_1 + 0xb43b0) * *(int *)(param_1 + 0xb43b4) == -1)))) {
        iVar1 = *(int *)(param_1 + 0xb43b8);
        iVar5 = *(int *)(param_1 + 0xb43bc);
        if (iVar1 != iVar5) {
          iVar3 = iVar1;
          if (iVar1 < iVar5) {
            iVar3 = iVar5;
            iVar5 = iVar1;
          }
          local_res10[0] = iVar5;
          if ((iVar5 <= param_4) && (local_res10[0] = param_4, iVar3 < param_4)) {
            local_res10[0] = iVar3;
          }
          if ((*(int *)(param_1 + 0xb43b0) == -1) && (local_res10[0] < param_4)) {
            local_res10[0] = param_4 + local_res10[0] >> 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x2e69c) == 1) {
        FUN_14565e150(param_1,local_res10);
      }
      iVar1 = *(int *)(param_1 + 0xb4390);
      iVar5 = iVar1;
      if (local_res10[0] < iVar1) {
        iVar5 = local_res10[0];
      }
      if (*(int *)(param_1 + 0xb4394) < iVar5) {
        if (local_res10[0] < iVar1) {
          iVar1 = local_res10[0];
        }
        return iVar1;
      }
      return *(int *)(param_1 + 0xb4394);
    }
  }
  param_4 = param_3;
  if (iVar5 < iVar6 - iVar3) {
    param_4 = param_3 + -1;
  }
  goto LAB_1456172f1;
}



// FUNCTION 1456173f0 FUN_1456173f0 body=95 status=ok
// SIG undefined FUN_1456173f0(void)

int FUN_1456173f0(int param_1,undefined4 param_2,double param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_145614250(param_2,param_4);
  iVar1 = 1800000;
  if (param_1 == 0) {
    iVar1 = 2700000;
  }
  return (int)(((double)(((int)((double)iVar1 * dVar2) >> 0xc) + iVar1) * param_3) / dVar2);
}



// FUNCTION 145617450 FUN_145617450 body=131 status=ok
// SIG undefined FUN_145617450(void)

ulonglong FUN_145617450(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(int *)(param_1 + 0xb4308) >> 5;
  uVar5 = *(uint *)(param_1 + 0xb430c);
  if ((int)*(uint *)(param_1 + 0xb430c) <= (int)uVar1) {
    uVar5 = uVar1;
  }
  if ((int)param_2 < (int)uVar5) {
    param_2 = uVar5;
  }
  if ((*(int *)(param_1 + 0x2f6c8) != 0) && (*(int *)(param_1 + 0xb4304) != 0)) {
    param_2 = uVar5;
  }
  uVar5 = *(uint *)(param_1 + 0xb4310);
  if ((int)param_2 <= (int)*(uint *)(param_1 + 0xb4310)) {
    uVar5 = param_2;
  }
  if (*(uint *)(param_1 + 0x2e560) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x2e560) * (longlong)*(int *)(param_1 + 0xb4308);
    lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar2),8) + lVar2;
    uVar3 = (lVar2 >> 6) - (lVar2 >> 0x3f);
    uVar4 = uVar3 & 0xffffffff;
    if ((longlong)(int)uVar5 < (longlong)uVar3) {
      uVar4 = (ulonglong)uVar5;
    }
    return uVar4;
  }
  return (ulonglong)uVar5;
}



// FUNCTION 1456174e0 FUN_1456174e0 body=102 status=ok
// SIG undefined FUN_1456174e0(void)

void FUN_1456174e0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0xb427c) = param_2;
  if ((*(int *)(param_1 + 0x2e5bc) == 2) && (*(int *)(param_1 + 0xb43c4) != 0)) {
    param_2 = (int)((double)param_2 *
                   *(double *)(&DAT_149de8a70 + (longlong)*(int *)(param_1 + 0xb43c4) * 8));
    *(int *)(param_1 + 0xb427c) = param_2;
  }
  *(int *)(param_1 + 0xb4284) =
       (int)(((longlong)param_2 << 0xc) /
            (longlong)(*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)));
  return;
}



// FUNCTION 145617550 FUN_145617550 body=412 status=ok
// SIG undefined FUN_145617550(void)

int FUN_145617550(longlong param_1,double param_2,double param_3,int param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar3 = *(int *)(param_1 + 0x118);
  iVar4 = iVar3;
  iVar1 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x11c) < iVar3) {
    do {
      iVar4 = iVar1;
      if (param_4 == 8) {
        sVar2 = FUN_1454772c0(iVar4,0,8);
        dVar5 = (double)(int)sVar2 * 0.25;
      }
      else if (param_4 == 10) {
        sVar2 = FUN_1454772c0(iVar4,0,10);
        dVar5 = (double)(int)sVar2 * 0.0625;
      }
      else {
        sVar2 = FUN_1454772c0(iVar4,0,param_4);
        dVar5 = (double)(int)sVar2 * 0.015625;
      }
    } while ((dVar5 < param_2) && (iVar1 = iVar4 + 1, iVar4 + 1 < *(int *)(param_1 + 0x118)));
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x11c) < *(int *)(param_1 + 0x118)) {
    do {
      iVar3 = iVar1;
      if (param_4 == 8) {
        sVar2 = FUN_1454772c0(iVar3,0,8);
        dVar5 = (double)(int)sVar2 * 0.25;
      }
      else if (param_4 == 10) {
        sVar2 = FUN_1454772c0(iVar3,0,10);
        dVar5 = (double)(int)sVar2 * 0.0625;
      }
      else {
        sVar2 = FUN_1454772c0(iVar3,0,param_4);
        dVar5 = (double)(int)sVar2 * 0.015625;
      }
    } while ((dVar5 < param_3) && (iVar1 = iVar3 + 1, iVar3 + 1 < *(int *)(param_1 + 0x118)));
  }
  return iVar3 - iVar4;
}



// FUNCTION 1456176f0 FUN_1456176f0 body=269 status=ok
// SIG undefined FUN_1456176f0(void)

int FUN_1456176f0(longlong param_1,int param_2,int param_3,double param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x118);
  dVar5 = (double)FUN_145614250(param_3,param_5);
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar3 = 1800000;
  if (param_2 == 0) {
    iVar3 = 2700000;
  }
  iVar4 = iVar1;
  if (iVar2 < *(int *)(param_1 + 0x118)) {
    do {
      dVar6 = (double)FUN_145614250(iVar2,param_5);
      iVar4 = iVar2;
      if ((int)((double)(((int)((double)iVar3 * dVar6) >> 0xc) + iVar3) / dVar6) <=
          (int)((double)(int)((double)(((int)((double)iVar3 * dVar5) >> 0xc) + iVar3) / dVar5) *
               param_4)) break;
      iVar2 = iVar2 + 1;
      iVar4 = iVar1;
    } while (iVar2 < *(int *)(param_1 + 0x118));
  }
  return iVar4 - param_3;
}



// FUNCTION 145617800 FUN_145617800 body=58 status=ok
// SIG undefined FUN_145617800(void)

void FUN_145617800(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_1456176f0(param_1 + 0xb4278,*(undefined4 *)(param_1 + 0x2a2e4),param_3,
                *(undefined8 *)(&DAT_149de8a90 + (longlong)param_2 * 8),
                *(undefined4 *)(param_1 + 0x2e4d0));
  return;
}



// FUNCTION 145617840 FUN_145617840 body=530 status=ok
// SIG undefined FUN_145617840(void)

void FUN_145617840(longlong param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = (int)((double)*(longlong *)(param_1 + 0x2e548) / *(double *)(param_1 + 0xb4548));
  *(int *)(param_1 + 0xb4308) = iVar9;
  iVar8 = (iVar9 * *(int *)(param_1 + 0x2e5d0)) / 100;
  iVar4 = 200;
  if (200 < iVar8) {
    iVar4 = iVar8;
  }
  *(int *)(param_1 + 0xb430c) = iVar4;
  iVar10 = *(int *)(param_1 + 0x2a300) * 0xfa;
  lVar7 = (longlong)*(int *)(param_1 + 0x2e5d4) * (longlong)iVar9;
  lVar7 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar7),8) + lVar7;
  iVar8 = (int)(lVar7 >> 6) - (int)(lVar7 >> 0x3f);
  iVar4 = 4000000;
  if (4000000 < iVar10) {
    iVar4 = iVar10;
  }
  if ((iVar8 < iVar4) && (iVar8 = 4000000, 4000000 < iVar10)) {
    iVar8 = iVar10;
  }
  *(int *)(param_1 + 0xb4310) = iVar8;
  if ((*(int *)(param_1 + 0x2e56c) == 0) && (*(int *)(param_1 + 0x2e57c) == 3)) {
    *(undefined4 *)(param_1 + 0xb42dc) = 8;
    *(undefined4 *)(param_1 + 0xb42d8) = 8;
    *(undefined4 *)(param_1 + 0xb42e0) = 8;
    return;
  }
  iVar8 = *(int *)(param_1 + 0x2e66c);
  dVar1 = *(double *)(param_1 + 0xb4548);
  *(int *)(param_1 + 0xb42dc) = iVar8;
  iVar4 = *(int *)(param_1 + 0x2e668);
  *(int *)(param_1 + 0xb42d8) = iVar4;
  if (iVar4 == 0) {
    iVar4 = FUN_145614c30(*(undefined4 *)(param_1 + 0x2e518),*(undefined4 *)(param_1 + 0x2e51c),
                          SUB84(dVar1,0));
  }
  if (iVar8 == 0) {
    uVar6 = (uint)(dVar1 * 0.75);
    if (0x10 < (int)uVar6) {
      uVar6 = 0x10;
    }
    iVar9 = uVar6 + (uVar6 & 1);
    iVar8 = iVar4;
    if (iVar4 < iVar9) {
      iVar8 = iVar9;
    }
    *(int *)(param_1 + 0xb42dc) = iVar8;
  }
  *(undefined4 *)(param_1 + 0xb42e0) = 0xfa;
  if (0xfa < iVar8) {
    *(undefined4 *)(param_1 + 0xb42dc) = 0xfa;
    iVar8 = 0xfa;
  }
  if (iVar8 <= iVar4) {
    iVar4 = iVar8;
  }
  *(int *)(param_1 + 0xb42d8) = iVar4;
  if (*(int *)(param_1 + 0x2e680) == 1) {
    uVar6 = *(uint *)(param_1 + 0x2a04c);
    uVar2 = *(uint *)(param_1 + 0x2a048);
    uVar3 = uVar2;
    if ((int)uVar2 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    iVar9 = 0;
    puVar5 = &DAT_149de9194;
    while ((puVar5[-1] < uVar2 * uVar6 || (*puVar5 < uVar3))) {
      iVar9 = iVar9 + 1;
      puVar5 = puVar5 + 0x10;
      if (0x149de9513 < (longlong)puVar5) {
        return;
      }
    }
    iVar9 = (&DAT_149de91b4)[(longlong)iVar9 * 0x10];
    if (iVar4 <= iVar9) {
      *(int *)(param_1 + 0xb42d8) = iVar9;
      if (iVar8 <= iVar9) {
        iVar8 = iVar9;
      }
      *(int *)(param_1 + 0xb42dc) = iVar8;
    }
  }
  return;
}



// FUNCTION 145617a60 FUN_145617a60 body=245 status=ok
// SIG undefined FUN_145617a60(void)

void FUN_145617a60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 0xb4278);
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    if ((*(uint *)(param_1 + 0x2e55c) != 0) &&
       (lVar2 = (longlong)*(int *)(param_1 + 0xb4308) * (ulonglong)*(uint *)(param_1 + 0x2e55c),
       lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar2),8) + lVar2,
       lVar2 = (lVar2 >> 6) - (lVar2 >> 0x3f), lVar2 <= iVar1)) {
      iVar1 = (int)lVar2;
    }
    local_res8[0] = *(int *)(param_1 + 0xb4310);
    if (iVar1 <= *(int *)(param_1 + 0xb4310)) {
      local_res8[0] = iVar1;
    }
  }
  else {
    local_res8[0] = FUN_145617450(param_1,iVar1);
  }
  if ((*(int *)(param_1 + 0x2e5d8) == 0) && ((*(uint *)(param_1 + 0x2e57c) & 0xfffffffd) == 0)) {
    FUN_14561a540(param_1,local_res8);
  }
  *(int *)(param_1 + 0xb427c) = local_res8[0];
  if ((*(int *)(param_1 + 0x2e5bc) == 2) && (*(int *)(param_1 + 0xb43c4) != 0)) {
    local_res8[0] =
         (int)((double)local_res8[0] *
              *(double *)(&DAT_149de8a70 + (longlong)*(int *)(param_1 + 0xb43c4) * 8));
    *(int *)(param_1 + 0xb427c) = local_res8[0];
  }
  *(int *)(param_1 + 0xb4284) =
       (int)(((longlong)local_res8[0] << 0xc) /
            (longlong)(*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)));
  return;
}



// FUNCTION 145617b60 FUN_145617b60 body=863 status=ok
// SIG undefined FUN_145617b60(void)

int FUN_145617b60(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0xcd3a4) = 1;
  *(undefined4 *)(param_1 + 0xcd3a8) = 1;
  iVar7 = 0;
  bVar2 = false;
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    *(undefined4 *)(param_1 + 0xcd3ac) = 0;
    *(undefined4 *)(param_1 + 0xcd3b4) = 0;
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048);
  if (*(int *)(param_1 + 0xcd39c) == 0) {
    iVar7 = iVar6;
    if (iVar8 < 0xe1000) goto LAB_145617c0c;
    if (*(int *)(param_1 + 0xb4308) < 10000) {
      iVar6 = 2;
LAB_145617bfe:
      bVar2 = true;
      *(int *)(param_1 + 0xcd39c) = iVar6;
    }
    else if (*(int *)(param_1 + 0xb4308) < 0x3415) {
      iVar6 = 1;
      goto LAB_145617bfe;
    }
    iVar7 = iVar6;
    if (!bVar2) goto LAB_145617c0c;
  }
  else {
    if (((*(int *)(param_1 + 0xcd39c) == 1) && (0x7e8ff < iVar8)) &&
       (*(int *)(param_1 + 0xb4308) < 10000)) {
      iVar7 = 2;
      iVar6 = 4;
      *(undefined4 *)(param_1 + 0xcd39c) = 2;
      *(undefined4 *)(param_1 + 0xcd3a8) = 2;
      goto LAB_145617de4;
    }
LAB_145617c0c:
    dVar10 = *(double *)(param_1 + 0xb4548);
    if (dVar10 < (double)*(int *)(param_1 + 0xb42f0)) {
      iVar6 = (int)(dVar10 + dVar10);
      if (0x1e < (int)(dVar10 + dVar10)) {
        iVar6 = 0x1e;
      }
      iVar9 = *(int *)(param_1 + 0xb428c) + *(int *)(param_1 + 0xcd3ac);
      *(int *)(param_1 + 0xcd3ac) = iVar9;
      lVar5 = *(longlong *)(param_1 + 0xb43a0) * 0x1e;
      lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5),8) + lVar5;
      param_2 = lVar5 >> 6;
      if (*(longlong *)(param_1 + 0xb4338) < (longlong)((int)param_2 - (int)(lVar5 >> 0x3f))) {
        *(int *)(param_1 + 0xcd3b0) = *(int *)(param_1 + 0xcd3b0) + 1;
      }
      iVar4 = *(int *)(param_1 + 0xcd3b4) + 1;
      *(int *)(param_1 + 0xcd3b4) = iVar4;
      if (iVar6 <= iVar4) {
        param_2 = (longlong)iVar9 % (longlong)iVar4 & 0xffffffff;
        if ((iVar4 >> 2 < *(int *)(param_1 + 0xcd3b0)) && (0x18f5f < iVar8)) {
          if (*(int *)(param_1 + 0xcd39c) == 1) {
            iVar7 = 2;
            *(undefined4 *)(param_1 + 0xcd39c) = 2;
          }
          else if (*(int *)(param_1 + 0xcd39c) == 0) {
            iVar7 = 1;
            *(undefined4 *)(param_1 + 0xcd39c) = 1;
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0xcd39c);
          if (iVar6 != 0) {
            uVar1 = (*(int *)(param_1 + 0xb4390) * 0x46) / 100;
            param_2 = (ulonglong)uVar1;
            if (iVar9 / iVar4 < (int)uVar1) {
              if ((iVar6 == 1) ||
                 (uVar1 = (*(int *)(param_1 + 0xb4390) * 0x32) / 100, param_2 = (ulonglong)uVar1,
                 iVar9 / iVar4 < (int)uVar1)) {
                iVar7 = -2;
                *(undefined4 *)(param_1 + 0xcd39c) = 0;
              }
              else if (iVar6 == 2) {
                iVar7 = -1;
                *(undefined4 *)(param_1 + 0xcd39c) = 1;
              }
            }
          }
        }
        *(undefined8 *)(param_1 + 0xcd3ac) = 0;
        *(undefined4 *)(param_1 + 0xcd3b4) = 0;
      }
    }
  }
  if (iVar7 == 0) {
    return 0;
  }
  if ((iVar7 == 1) || (iVar7 == -1)) {
    *(undefined4 *)(param_1 + 0xcd3a4) = 3;
    *(undefined4 *)(param_1 + 0xcd3a8) = 4;
  }
  else if (iVar7 == 2) {
    *(undefined4 *)(param_1 + 0xcd3a8) = 2;
    iVar6 = 4;
    goto LAB_145617de4;
  }
  iVar6 = 1;
LAB_145617de4:
  *(undefined8 *)(param_1 + 0xb4338) = *(undefined8 *)(param_1 + 0xb43a0);
  *(undefined8 *)(param_1 + 0xb4340) = *(undefined8 *)(param_1 + 0xb43a0);
  iVar8 = FUN_145614fb0(param_1,param_2);
  *(int *)(param_1 + 0xb427c) = iVar8;
  if (iVar7 < 0) {
    iVar8 = iVar8 / iVar6;
  }
  else {
    iVar8 = iVar8 * iVar6;
  }
  uVar3 = FUN_1456190a0(param_1);
  iVar6 = FUN_1456171e0(param_1,iVar8,*(undefined4 *)(param_1 + 0xb4394),uVar3);
  if (iVar7 < 1) {
    if (-1 < iVar7) {
      return iVar7;
    }
    if (iVar6 <= (*(int *)(param_1 + 0x2a31c) * 0x82) / 100) {
      return iVar7;
    }
    dVar10 = *(double *)(param_1 + 0xb42a8) * 0.9;
  }
  else {
    if (iVar6 <= (*(int *)(param_1 + 0xb4390) * 0x5a) / 100) {
      return iVar7;
    }
    dVar10 = *(double *)(param_1 + 0xb42a8) * 0.85;
  }
  *(double *)(param_1 + 0xb42a8) = dVar10;
  return iVar7;
}



// FUNCTION 145617ec0 FUN_145617ec0 body=2201 status=ok
// SIG undefined FUN_145617ec0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145617ec0(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  undefined1 auStack_198 [32];
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  uint local_160;
  int local_15c;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong local_110 [25];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  piVar1 = *(int **)(param_1 + 0x2e6e8);
  piVar2 = *(int **)(param_1 + 0x2e790);
  if (((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) ||
     ((*(int *)(param_1 + 0xb64dc) != 0 && (*(int *)(param_1 + 0xcb780) == 0)))) goto LAB_145618749;
  local_174 = piVar1[4];
  iVar12 = piVar1[1];
  iVar21 = *piVar1;
  lVar18 = *(longlong *)(piVar1 + 0xe);
  local_170 = piVar2[4];
  iVar20 = *piVar2;
  lVar19 = *(longlong *)(piVar2 + 0xe);
  iVar3 = piVar2[1];
  if (*(int *)(param_1 + 0x2a068) != 0) goto LAB_145618749;
  *(undefined4 *)(param_1 + 0xb44d8) = 0;
  *(undefined4 *)(param_1 + 0xb44cc) = 0;
  if (((*(int *)(param_1 + 0xb64e0) != *(int *)(param_1 + 0xcb9fc)) || (iVar21 != iVar20)) ||
     (iVar12 != iVar3)) goto LAB_145618749;
  local_118 = 0;
  memset(local_110,0,0xc0);
  local_16c = *(int *)(param_1 + 0x2a310);
  iVar3 = 0;
  fVar22 = 8.0;
  local_168 = *(int *)(param_1 + 0x2a308);
  iVar20 = 1;
  local_15c = *(int *)(param_1 + 0x2e558);
  local_160 = 65000;
  if (*(int *)(param_1 + 0x2e69c) == 1) {
    local_160 = 20000;
  }
  local_178 = 0;
  local_120 = 0;
  if (*(int *)(param_1 + 0x2e57c) == 0) {
    fVar22 = 2.1;
  }
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (1 < *(int *)(param_1 + 0xb64e8))) {
    local_16c = iVar21 + 7 >> 3;
    local_168 = iVar12 + 7 >> 3;
  }
  if (0 < *(int *)(param_1 + 0x2e578)) {
    if (*(int *)(param_1 + 0x2e4c4) == 1) {
      iVar20 = FUN_145613df0(*(undefined8 *)(param_1 + 0x2e6c8));
      iVar20 = iVar20 + -1;
    }
    else {
      iVar20 = 2;
    }
    iVar3 = FUN_145613df0(*(undefined8 *)(param_1 + 0x2e6c8));
    iVar3 = iVar3 + -1;
    if (0 < iVar20) {
      lVar15 = 0;
      iVar12 = iVar3;
      do {
        if (-1 < iVar12) {
          uVar6 = FUN_145613da0(*(undefined8 *)(param_1 + 0x2e6c8),iVar12);
          local_110[lVar15 + -1] = uVar6;
        }
        iVar12 = iVar12 + -1;
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar20);
    }
    uVar9 = *(ulonglong *)(param_1 + 0xb43f8);
    puVar17 = (ulonglong *)(param_1 + 0xb4400);
    local_120 = *puVar17;
    uVar7 = (longlong)((float)uVar9 * fVar22) & 0xffffffff;
    if ((uint)(longlong)((float)uVar9 * fVar22) < local_160) {
      uVar7 = (ulonglong)local_160;
    }
    if ((uVar7 < local_120) && (*(uint *)(param_1 + 0x2e578) < *(uint *)(param_1 + 0x2e4c4))) {
      uVar7 = 240000;
      *(undefined4 *)(param_1 + 0xb44d8) = 1;
      if (5 < local_15c) {
        uVar7 = 140000;
      }
      if (uVar7 < local_120) {
        local_178 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb44d8) = 0;
    }
    if (local_120 != 0) {
      *(ulonglong *)(param_1 + 0xb43f8) = local_120 + uVar9 * 2 + uVar9 >> 2;
    }
    iVar12 = 1;
    if (1 < *(int *)(param_1 + 0x2e578) + -1) {
      do {
        iVar12 = iVar12 + 1;
        *puVar17 = puVar17[1];
        puVar17 = puVar17 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x2e578) + -1);
    }
  }
  lVar15 = (longlong)iVar20;
  local_158 = lVar15;
  if (0 < iVar20) {
    local_138 = (longlong)iVar3 + 1;
    local_140 = 0;
    do {
      if (*(int *)(param_1 + 0x2e578) == 0) {
        local_148 = 0;
        iVar12 = (int)((local_16c + 7 >> 0x1f & 7U) + local_16c + 7) >> 3;
        iVar21 = (int)((local_168 + 7 >> 0x1f & 7U) + local_168 + 7) >> 3;
LAB_1456182eb:
        local_150 = 0;
        local_164 = 0;
        iVar20 = 0;
        uVar9 = 0;
        iVar3 = 0;
        uVar14 = 0;
        if (0 < iVar21) {
          lVar15 = (longlong)(local_174 * 0x40 + iVar12 * -0x40);
          lVar8 = (longlong)(local_170 * 0x40 + iVar12 * -0x40);
          local_130 = lVar15;
          local_128 = lVar8;
          iVar11 = local_174;
          iVar16 = local_170;
          do {
            uVar13 = 0;
            if (0 < iVar12) {
              do {
                if (((0 < (int)uVar14) && (0 < (int)uVar13)) &&
                   (((int)uVar14 < iVar21 + -1 && ((int)uVar13 < iVar12 + -1)))) {
                  if ((uVar14 & 1) == 0) {
                    if ((uVar13 & 1) == 0) {
LAB_14561835c:
                      uVar4 = (**(code **)(param_1 + 0xb4c88))(lVar18,iVar11,lVar19,iVar16);
                      iVar20 = local_164 + 1;
                      uVar9 = local_150 + uVar4;
                      local_164 = iVar20;
                      local_150 = uVar9;
                      iVar11 = local_174;
                      iVar16 = local_170;
                      if ((ulonglong)uVar4 == 0) {
                        iVar3 = iVar3 + 1;
                      }
                    }
                  }
                  else if ((uVar13 & 1) != 0) goto LAB_14561835c;
                }
                lVar18 = lVar18 + 0x40;
                lVar19 = lVar19 + 0x40;
                uVar13 = uVar13 + 1;
                lVar15 = local_130;
                lVar8 = local_128;
              } while ((int)uVar13 < iVar12);
            }
            lVar18 = lVar18 + lVar15;
            lVar19 = lVar19 + lVar8;
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar21);
          if (0 < iVar20) {
            uVar9 = uVar9 / (ulonglong)(longlong)iVar20;
          }
        }
        if (local_148 == 0) {
          uVar7 = (ulonglong)((float)*(ulonglong *)(param_1 + 0xb43f8) * fVar22);
          uVar10 = uVar7 & 0xffffffff;
          if ((uint)uVar7 < local_160) {
            uVar10 = (ulonglong)local_160;
          }
          if (((uVar10 < uVar9) && (*(int *)(param_1 + 0xb64e8) + 1 < *(int *)(param_1 + 0xb42f0)))
             && (iVar3 < (iVar20 >> 2) * 3)) {
            *(undefined4 *)(param_1 + 0xb44d8) = 1;
            uVar7 = 240000;
            if (5 < local_15c) {
              uVar7 = 140000;
            }
            if (uVar7 < uVar9) {
              local_178 = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xb44d8) = 0;
          }
          if ((uVar9 != 0) || (*(int *)(param_1 + 0x2e57c) == 1)) {
            *(ulonglong *)(param_1 + 0xb43f8) = uVar9 + *(ulonglong *)(param_1 + 0xb43f8) * 3 >> 2;
          }
        }
        else {
          *(ulonglong *)(param_1 + 0xb43f8 + local_148 * 8) = uVar9;
        }
        lVar15 = local_158;
        if (iVar3 < iVar20 * 3 >> 2) {
          *(undefined4 *)(param_1 + 0xb44cc) = 1;
        }
      }
      else {
        piVar1 = (int *)local_110[local_140 + -1];
        if ((((piVar1 != (int *)0x0) && (piVar2 = (int *)local_110[local_140], piVar2 != (int *)0x0)
             ) && (lVar15 = local_158, *piVar1 == *piVar2)) && (piVar1[1] == piVar2[1])) {
          iVar12 = (int)((local_16c + 7 >> 0x1f & 7U) + local_16c + 7) >> 3;
          iVar21 = (int)((local_168 + 7 >> 0x1f & 7U) + local_168 + 7) >> 3;
          local_148 = local_138;
          if (0 < *(int *)(param_1 + 0x2e578)) {
            local_174 = *(int *)(local_110[local_140 + -1] + 0x10);
            lVar18 = *(longlong *)(local_110[local_140 + -1] + 0x38);
            local_170 = *(int *)(local_110[local_140] + 0x10);
            lVar19 = *(longlong *)(local_110[local_140] + 0x38);
          }
          goto LAB_1456182eb;
        }
      }
      local_140 = local_140 + 1;
      local_138 = local_138 + -1;
    } while (local_140 < lVar15);
  }
  if ((*(int *)(param_1 + 0x2e57c) == 1) && (*(int *)(param_1 + 0x2e69c) != 1)) {
    if (*(int *)(param_1 + 0xb64dc) == 0) {
      if ((((*(int *)(param_1 + 0xb44d8) != 0) &&
           (*(int *)(param_1 + 0xb428c) == *(int *)(param_1 + 0xb4394))) &&
          (*(int *)(param_1 + 0xb4324) < *(int *)(param_1 + 0xb4394) * 2)) &&
         (*(double *)(param_1 + 0xb42a8) == 0.005)) {
        *(undefined8 *)(param_1 + 0xb42a8) = 0x3fe0000000000000;
        *(undefined4 *)(param_1 + 0xb4324) = *(undefined4 *)(param_1 + 0xb4390);
        *(undefined8 *)(param_1 + 0xb4338) = *(undefined8 *)(param_1 + 0xb43a0);
        *(undefined8 *)(param_1 + 0xb4340) = *(undefined8 *)(param_1 + 0xb43a0);
        *(undefined4 *)(param_1 + 0xb44f4) = 1;
      }
      if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(int *)(param_1 + 0xb44f4) != 0)) {
        *(undefined4 *)(param_1 + 0xb427c) = *(undefined4 *)(param_1 + 0xb4308);
      }
      goto LAB_1456185c4;
    }
LAB_1456185cd:
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0xb64e8)) {
      iVar21 = *(int *)(param_1 + 0xb64ec);
      do {
        iVar20 = 0;
        if (0 < iVar21) {
          do {
            iVar21 = iVar21 * iVar12 + iVar20;
            iVar20 = iVar20 + 1;
            *(undefined8 *)((longlong)iVar21 * 0x1ab8 + 0xb7780 + param_1) =
                 *(undefined8 *)(param_1 + 0xb43f8);
            iVar21 = *(int *)(param_1 + 0xb64ec);
          } while (iVar20 < iVar21);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0xb64e8));
    }
  }
  else {
LAB_1456185c4:
    if (*(int *)(param_1 + 0xb64dc) != 0) goto LAB_1456185cd;
  }
  if (((*(int *)(param_1 + 0x2e57c) == 0) && (*(int *)(param_1 + 0x2a2e4) != 0)) &&
     ((*(int *)(param_1 + 0xb44d8) != 0 &&
      (((3 < *(int *)(param_1 + 0xb42ec) && (4 < *(int *)(param_1 + 0xb44dc))) &&
       (*(int *)(param_1 + 0x2f6d0) == 0)))))) {
    *(undefined4 *)(param_1 + 0x2f6c8) = 1;
    if (local_178 != 0) {
      *(undefined4 *)(param_1 + 0x2a2e4) = 0;
    }
    *(undefined4 *)(param_1 + 0xb42fc) = 0;
    if ((*(int *)(param_1 + 0xb48fc) != 0) && (*(int *)(param_1 + 0x2e650) != 0)) {
      *(undefined4 *)(param_1 + 0xb42fc) = 1;
    }
    iVar12 = *(int *)(param_1 + 0xb42e4);
    *(undefined4 *)(param_1 + 0xb4298) = 1000;
    if (iVar12 < 10) {
      iVar12 = 10;
    }
    else if (0x14 < iVar12) {
      iVar12 = 0x14;
    }
    *(int *)(param_1 + 0xb42e4) = iVar12;
    FUN_14561a0e0(param_1,*(undefined4 *)(param_1 + 0xb42ec));
    *(undefined4 *)(param_1 + 0xb42d4) = *(undefined4 *)(param_1 + 0xb42e4);
    uVar5 = FUN_145615290(param_1);
    FUN_1456174e0(param_1,uVar5);
    *(undefined4 *)(param_1 + 0xb44dc) = 0;
  }
  else {
    *(int *)(param_1 + 0xb44dc) = *(int *)(param_1 + 0xb44dc) + 1;
  }
  if (0 < *(int *)(param_1 + 0x2e578)) {
    FUN_14561a6b0(param_1,local_120);
  }
LAB_145618749:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_198);
}



// FUNCTION 145618770 FUN_145618770 body=622 status=ok
// SIG undefined FUN_145618770(void)

undefined8 FUN_145618770(longlong param_1,int param_2,int *param_3)

{
  double dVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar11 = *(int *)(param_1 + 0xb4390);
  iVar7 = (iVar11 >> 3) * 7;
  iVar4 = *(int *)(param_1 + 0xb4308);
  if (*(int *)(param_1 + 0x2e69c) != 1) {
    iVar7 = (iVar11 >> 2) * 3;
  }
  if (((*(int *)(param_1 + 0xb490c) == 1) || (iVar4 * 8 < param_2)) &&
     (*(int *)(param_1 + 0x2a31c) < iVar7)) {
    iVar7 = 0;
    dVar1 = *(double *)(param_1 + 0xb42a8);
    uVar14 = SUB84(dVar1,0);
    uVar15 = (undefined4)((ulonglong)dVar1 >> 0x20);
    *param_3 = iVar11;
    iVar11 = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0xb4980) + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xb44e4) = 1;
    if (((*(int *)(param_1 + 0xb490c) == 2) && (iVar4 * 0x10 < param_2)) &&
       (*(int *)(param_1 + 0xb64e0) == 0)) {
      uVar2 = *(uint *)(param_1 + 0x2a308);
      plVar8 = *(longlong **)(param_1 + 0x2a3b0);
      if (0 < (int)uVar2) {
        uVar10 = (ulonglong)uVar2;
        iVar6 = iVar7;
        do {
          uVar9 = (ulonglong)*(uint *)(param_1 + 0x2a310);
          iVar11 = iVar6;
          if (0 < (int)*(uint *)(param_1 + 0x2a310)) {
            do {
              iVar11 = iVar6 + 1;
              if (*(char *)(*plVar8 + 8) != '\0') {
                iVar11 = iVar6;
              }
              plVar8 = plVar8 + 1;
              uVar9 = uVar9 - 1;
              iVar6 = iVar11;
            } while (uVar9 != 0);
          }
          plVar8 = plVar8 + 8;
          uVar10 = uVar10 - 1;
          iVar6 = iVar11;
        } while (uVar10 != 0);
      }
      if (0x3c < (iVar11 * 100) / (int)(uVar2 * *(int *)(param_1 + 0x2a310))) {
        *(undefined4 *)(param_1 + 0xb44e0) = 1;
      }
    }
    *(int *)(param_1 + 0xb4324) = *param_3;
    *(undefined8 *)(param_1 + 0xb4338) = *(undefined8 *)(param_1 + 0xb43a0);
    *(undefined8 *)(param_1 + 0xb4340) = *(undefined8 *)(param_1 + 0xb43a0);
    *(undefined8 *)(param_1 + 0xb43b0) = 0;
    iVar11 = *(int *)(param_1 + 0x2a300);
    dVar12 = (double)FUN_145614250(*param_3,*(undefined4 *)(param_1 + 0x2e4d0));
    dVar12 = ((double)(int)((ulonglong)((longlong)iVar4 << 9) / (ulonglong)(longlong)iVar11) *
             dVar12) / (double)(((int)(dVar12 * 1800000.0) >> 0xc) + 1800000);
    if (dVar1 < dVar12) {
      uVar14 = 0;
      uVar15 = 0x40490000;
      dVar13 = dVar1 + dVar1;
      if (dVar12 <= dVar1 + dVar1) {
        dVar13 = dVar12;
      }
      if (dVar13 <= 50.0) {
        uVar14 = SUB84(dVar13,0);
        uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      *(ulonglong *)(param_1 + 0xb42a8) = CONCAT44(uVar15,uVar14);
    }
    iVar11 = iVar7;
    if (*(int *)(param_1 + 0xb64dc) != 0) {
      while( true ) {
        iVar4 = *(int *)(param_1 + 0xcb9fc);
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        if (iVar4 <= iVar11) break;
        iVar4 = *(int *)(param_1 + 0xb64ec);
        iVar6 = iVar7;
        if (0 < iVar4) {
          do {
            iVar4 = iVar4 * iVar11 + iVar6;
            iVar6 = iVar6 + 1;
            lVar5 = (longlong)iVar4 * 0x1ab8;
            *(int *)(lVar5 + 0xb76ac + param_1) = *param_3;
            uVar3 = *(undefined8 *)(lVar5 + 0xb7728 + param_1);
            *(undefined8 *)(lVar5 + 0xb76c0 + param_1) = uVar3;
            *(undefined8 *)(lVar5 + 0xb76c8 + param_1) = uVar3;
            *(ulonglong *)(lVar5 + 0xb7630 + param_1) = CONCAT44(uVar15,uVar14);
            *(undefined8 *)(lVar5 + 0xb7738 + param_1) = 0;
            *(undefined4 *)(lVar5 + 0xb7888 + param_1) = 1;
            iVar4 = *(int *)(param_1 + 0xb64ec);
          } while (iVar6 < iVar4);
        }
        iVar11 = iVar11 + 1;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1456189e0 FUN_1456189e0 body=314 status=ok
// SIG undefined FUN_1456189e0(void)

void FUN_1456189e0(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xb4304) = 0;
  *(undefined4 *)(param_1 + 0x2a2f0) = 0;
  *(undefined4 *)(param_1 + 0xb453c) = 0;
  switch(*(undefined4 *)(param_1 + 0xb5408 + (longlong)param_2 * 4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x2f6c4) = 1;
    *(undefined4 *)(param_1 + 0x2f6c8) = 1;
    *(undefined4 *)(param_1 + 0x2f6cc) = 1;
    return;
  case 1:
    *(undefined8 *)(param_1 + 0x2f6c4) = 1;
    *(undefined4 *)(param_1 + 0x2f6cc) = 0;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x2f6c4) = 1;
    *(undefined8 *)(param_1 + 0x2f6c8) = 1;
    return;
  default:
    *(undefined8 *)(param_1 + 0x2f6c4) = 0;
    *(undefined4 *)(param_1 + 0x2f6cc) = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2f6c4) = 0;
    *(undefined8 *)(param_1 + 0x2f6c8) = 1;
    *(undefined4 *)(param_1 + 0xb4304) = 1;
    if (*(int *)(param_1 + 0xb4534) != 0) {
      *(undefined4 *)(param_1 + 0xb453c) = 1;
      *(undefined4 *)(param_1 + 0x2f6c8) = 0;
      *(undefined4 *)(param_1 + 0x2a2f0) = 1;
      *(undefined4 *)(param_1 + 0x2b040) = 0;
      return;
    }
    break;
  case 5:
    *(undefined8 *)(param_1 + 0x2f6c4) = 1;
    *(undefined4 *)(param_1 + 0x2f6cc) = 0;
    *(undefined4 *)(param_1 + 0xb4304) = 1;
    return;
  case 6:
    *(undefined8 *)(param_1 + 0x2f6c4) = 0;
    *(undefined4 *)(param_1 + 0x2f6cc) = 0;
    *(undefined4 *)(param_1 + 0xb4304) = 1;
    *(undefined4 *)(param_1 + 0x2a2f0) = 1;
    *(undefined4 *)(param_1 + 0x2b040) = 0;
    return;
  }
  return;
}



// FUNCTION 145618b40 FUN_145618b40 body=312 status=ok
// SIG undefined FUN_145618b40(void)

void FUN_145618b40(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  iVar2 = *(int *)(param_1 + 0xb63a4);
  iVar8 = 1;
  uVar1 = *(undefined1 *)(param_1 + 0xb5014);
  uVar3 = *(undefined4 *)(param_1 + 0xb4304);
  uVar4 = *(undefined4 *)(param_1 + 0x2b040);
  if (0 < iVar2) {
    piVar7 = (int *)(param_1 + 0xb5af0);
    piVar9 = (int *)(param_1 + 0x2e894);
    do {
      iVar6 = *piVar7;
      *(char *)(param_1 + 0xb5014) = (char)iVar8;
      *(int *)(param_1 + 0xb427c) = iVar6;
      if ((*(int *)(param_1 + 0x2e5bc) == 2) && (*(int *)(param_1 + 0xb43c4) != 0)) {
        iVar6 = (int)((double)iVar6 *
                     *(double *)(&DAT_149de8a70 + (longlong)*(int *)(param_1 + 0xb43c4) * 8));
        *(int *)(param_1 + 0xb427c) = iVar6;
      }
      *(int *)(param_1 + 0xb4284) =
           (int)(((longlong)iVar6 << 0xc) /
                (longlong)(*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048)));
      FUN_1456189e0(param_1,iVar8);
      iVar5 = FUN_145619be0(param_1,local_res18,local_res10,iVar8);
      iVar6 = 1;
      if (1 < iVar5) {
        iVar6 = iVar5;
      }
      iVar8 = iVar8 + 1;
      *piVar9 = iVar6;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 10;
    } while (iVar8 <= iVar2);
  }
  *(undefined1 *)(param_1 + 0xb5014) = uVar1;
  *(undefined4 *)(param_1 + 0xb4304) = uVar3;
  *(undefined4 *)(param_1 + 0x2b040) = uVar4;
  FUN_1456189e0(param_1,uVar1);
  return;
}



// FUNCTION 145618c80 FUN_145618c80 body=264 status=ok
// SIG undefined FUN_145618c80(void)

void FUN_145618c80(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  plVar5 = *(longlong **)(param_1 + 0x2a3b0);
  iVar8 = 0;
  iVar7 = 0;
  uVar1 = *(uint *)(param_1 + 0x2a310);
  if (0 < *(int *)(param_1 + 0x2a308)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x2a308);
    do {
      uVar6 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        do {
          lVar2 = *plVar5;
          if (((*(char *)(lVar2 + 8) == '\x01') &&
              (uVar3 = (int)*(short *)(lVar2 + 0xc) >> 0x1f,
              (int)(((int)*(short *)(lVar2 + 0xc) ^ uVar3) - uVar3) < 0x10)) &&
             (uVar3 = (int)*(short *)(lVar2 + 0xe) >> 0x1f,
             (int)(((int)*(short *)(lVar2 + 0xe) ^ uVar3) - uVar3) < 0x10)) {
            iVar7 = iVar7 + 1;
          }
          plVar5 = plVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      plVar5 = plVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int *)(param_1 + 0xb44e8) =
       (iVar7 * 100) / (int)(uVar1 * *(int *)(param_1 + 0x2a308)) + *(int *)(param_1 + 0xb44e8) * 3
       >> 2;
  if (((*(int *)(param_1 + 0xb64dc) != 0) &&
      (iVar7 = *(int *)(param_1 + 0xb64e8) + -1, *(int *)(param_1 + 0xb64e0) == iVar7)) &&
     (0 < iVar7)) {
    do {
      iVar7 = iVar8 + 1;
      *(undefined4 *)
       ((longlong)(iVar8 * *(int *)(param_1 + 0xb64ec) + *(int *)(param_1 + 0xb64e4)) * 0x1ab8 +
        0xb7870 + param_1) = *(undefined4 *)(param_1 + 0xb44e8);
      iVar8 = iVar7;
    } while (iVar7 < *(int *)(param_1 + 0xb64e8) + -1);
  }
  return;
}



// FUNCTION 145618d90 FUN_145618d90 body=269 status=ok
// SIG undefined FUN_145618d90(void)

bool FUN_145618d90(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  
  piVar1 = (int *)(param_1 + 0xb64e0);
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (iVar2 = *(int *)(param_1 + 0xcb948), iVar2 != 1)) {
    iVar7 = *piVar1;
    uVar6 = (ulonglong)iVar7;
    if (iVar7 < *(int *)(param_1 + 0xb64e8)) {
      piVar8 = (int *)(param_1 + 0xcb8b4 + uVar6 * 4);
      iVar7 = *(int *)(param_1 + 0xb64ec) * iVar7 + *(int *)(param_1 + 0xb64e4);
      do {
        lVar3 = (longlong)iVar7;
        if (0 < piVar1[lVar3 * 0x6ae + 0x4fc]) {
          lVar4 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                         SEXT816((longlong)*piVar8 * *(longlong *)(piVar1 + lVar3 * 0x6ae + 0x492)),
                         8) + (longlong)*piVar8 * *(longlong *)(piVar1 + lVar3 * 0x6ae + 0x492);
          lVar4 = (longlong)((int)(lVar4 >> 6) - (int)(lVar4 >> 0x3f));
          if (iVar2 == 2) {
            if (*(longlong *)(piVar1 + lVar3 * 0x6ae + 0x478) <= lVar4) {
              return true;
            }
          }
          else if (lVar4 < *(longlong *)(piVar1 + lVar3 * 0x6ae + 0x478)) {
            return false;
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar7 = iVar7 + *(int *)(param_1 + 0xb64ec);
        piVar8 = piVar8 + 1;
      } while ((int)uVar5 < *(int *)(param_1 + 0xb64e8));
    }
    return iVar2 != 2;
  }
  return *(longlong *)(param_1 + 0xb4338) <= (longlong)param_2;
}



// FUNCTION 145618ea0 FUN_145618ea0 body=181 status=ok
// SIG undefined FUN_145618ea0(void)

double FUN_145618ea0(longlong param_1)

{
  double dVar1;
  double dVar2;
  
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    dVar2 = *(double *)(param_1 + 0xb42c8);
  }
  else if (*(int *)(param_1 + 0x2e56c) == 2) {
    dVar2 = *(double *)
             (param_1 + 0xb42a8 +
             (longlong)*(int *)(param_1 + 0xb5018 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) * 8
             );
  }
  else if (((((*(int *)(param_1 + 0x2f6cc) == 0) && (*(int *)(param_1 + 0x2f6c8) == 0)) ||
            (*(int *)(param_1 + 0xb4304) != 0)) || (*(int *)(param_1 + 0xb64dc) != 0)) ||
          ((*(int *)(param_1 + 0x2e57c) == 1 && (*(uint *)(param_1 + 0x2e564) < 0x65)))) {
    dVar2 = *(double *)(param_1 + 0xb42a8);
  }
  else {
    dVar2 = *(double *)(param_1 + 0xb42c0);
  }
  dVar2 = dVar2 * *(double *)(&DAT_149de8a80 + (longlong)*(int *)(param_1 + 0xb43c4) * 8);
  dVar1 = 0.005;
  if ((0.005 <= dVar2) && (dVar1 = 50.0, dVar2 <= 50.0)) {
    dVar1 = dVar2;
  }
  return dVar1;
}



// FUNCTION 145618f60 FUN_145618f60 body=132 status=ok
// SIG undefined FUN_145618f60(void)

int FUN_145618f60(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == 8) {
    puVar2 = &DAT_14c801010;
    puVar3 = &DAT_14c801410;
  }
  else if (param_3 == 10) {
    puVar2 = &DAT_14c802810;
    puVar3 = &DAT_14c802c10;
  }
  else {
    puVar2 = &DAT_14c804010;
    puVar3 = &DAT_14c804410;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (DAT_14c748010 < iVar1) {
    return puVar2[param_2];
  }
  if (iVar1 < DAT_14c748014) {
    return puVar3[param_2];
  }
  return ((DAT_14c748010 - DAT_14c748014 >> 1) +
         (puVar3[param_2] - puVar2[param_2]) * (DAT_14c748010 - iVar1)) /
         (DAT_14c748010 - DAT_14c748014) + puVar2[param_2];
}



// FUNCTION 145618ff0 FUN_145618ff0 body=167 status=ok
// SIG undefined FUN_145618ff0(void)

int FUN_145618ff0(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xcee70) == 0) {
    iVar3 = *(int *)(param_1 + 0xb4298);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb5edc + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4);
  }
  if (param_3 == 8) {
    puVar1 = &DAT_14c801810;
    puVar2 = &DAT_14c801c10;
  }
  else if (param_3 == 10) {
    puVar1 = &DAT_14c803010;
    puVar2 = &DAT_14c803410;
  }
  else {
    puVar1 = &DAT_14c804810;
    puVar2 = &DAT_14c804c10;
  }
  if (DAT_14c748008 < iVar3) {
    return puVar1[param_2];
  }
  if (iVar3 < DAT_14c74800c) {
    return puVar2[param_2];
  }
  return ((DAT_14c748008 - DAT_14c74800c >> 1) +
         (puVar2[param_2] - puVar1[param_2]) * (DAT_14c748008 - iVar3)) /
         (DAT_14c748008 - DAT_14c74800c) + puVar1[param_2];
}



// FUNCTION 1456190a0 FUN_1456190a0 body=409 status=ok
// SIG undefined FUN_1456190a0(void)

int FUN_1456190a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xb43a0);
  lVar6 = lVar2 >> 3;
  iVar8 = 0;
  if ((((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
      (*(int *)(param_1 + 0xb44f4) != 0)) || (*(int *)(param_1 + 0xb4500) != 0)) {
    return *(int *)(param_1 + 0xb4390);
  }
  iVar4 = *(int *)(param_1 + 0xb4324);
  if ((*(uint *)(param_1 + 0x2e4c4) < (uint)(*(int *)(param_1 + 0xb64ec) * 5)) &&
     (*(int *)(param_1 + 0xb4320) <= iVar4)) {
    iVar4 = *(int *)(param_1 + 0xb4320);
  }
  iVar1 = *(int *)(param_1 + 0xb4390);
  iVar3 = iVar4 * 5 >> 2;
  iVar7 = iVar1;
  if (iVar3 <= iVar1) {
    iVar7 = iVar3;
  }
  if (((*(int *)(param_1 + 0xb64dc) != 0) && (0 < *(int *)(param_1 + 0xb64e0))) &&
     (lVar5 = (longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8,
     *(int *)(lVar5 + 0xb9054 + param_1) != 0)) {
    iVar7 = *(int *)(lVar5 + 0xb7610 + param_1);
    if (iVar7 <= iVar4) {
      iVar4 = iVar7;
    }
    iVar3 = iVar4 * 9 >> 3;
    iVar7 = iVar1;
    if (iVar3 <= iVar1) {
      iVar7 = iVar3;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xb4338);
  if (lVar2 < lVar5) {
    iVar4 = iVar7 >> 3;
    if (*(int *)(param_1 + 0x2e69c) != 1) {
      iVar4 = iVar7 / 3 + (iVar7 >> 0x1f) +
              (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
    iVar3 = iVar7;
    if (iVar4 != 0) {
      lVar6 = (*(longlong *)(param_1 + 0xb43a8) - lVar2) / (longlong)iVar4;
      if (lVar6 != 0) {
        iVar8 = (int)((lVar5 - lVar2) / lVar6);
      }
      return iVar7 - iVar8;
    }
  }
  else {
    iVar3 = iVar1;
    if ((lVar6 < lVar5) && (iVar3 = iVar7, lVar6 != 0)) {
      if (lVar2 - lVar6 != 0) {
        iVar8 = (int)(((longlong)(iVar1 - iVar4) * (lVar2 - lVar5)) / (lVar2 - lVar6));
      }
      return iVar4 + iVar8;
    }
  }
  return iVar3;
}



// FUNCTION 145619240 FUN_145619240 body=608 status=ok
// SIG undefined FUN_145619240(void)

ulonglong FUN_145619240(longlong param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  double dVar10;
  
  lVar1 = param_1 + 0xb4278;
  uVar3 = FUN_1456190a0();
  iVar5 = *(int *)(param_1 + 0x2e4d0);
  if (iVar5 == 8) {
    puVar8 = &DAT_14c802410;
  }
  else {
    puVar8 = &DAT_14c805410;
    if (iVar5 == 10) {
      puVar8 = &DAT_14c803c10;
    }
  }
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    if (*(int *)(param_1 + 0xb42f4) == 0) {
      uVar4 = *(uint *)(param_1 + 0xb4394);
      if (*(int *)(param_1 + 0x2e4c4) != 0) {
        uVar4 = 0x3ff00000;
        iVar6 = FUN_145618f60(lVar1,*(undefined4 *)(param_1 + 0xb4320),iVar5);
        if (*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x18c01) {
          uVar4 = 0x3fe80000;
        }
        dVar10 = (double)FUN_145614250(iVar6,iVar5);
        iVar5 = FUN_145617550(lVar1,SUB84(dVar10,0),dVar10 * (double)((ulonglong)uVar4 << 0x20),
                              *(undefined4 *)(param_1 + 0x2e4d0));
        uVar4 = iVar6 + iVar5;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb4290);
      dVar10 = (double)FUN_145614250(iVar6,iVar5);
      iVar5 = FUN_145617550(lVar1,SUB84(dVar10,0),dVar10 * 0.75,*(undefined4 *)(param_1 + 0x2e4d0));
      uVar4 = iVar6 + iVar5;
      if ((int)uVar4 <= (int)*(uint *)(param_1 + 0xb4394)) {
        uVar4 = *(uint *)(param_1 + 0xb4394);
      }
    }
  }
  else if ((((*(int *)(param_1 + 0xb4304) == 0) && (*(int *)(param_1 + 0xb64dc) == 0)) &&
           (*(int *)(param_1 + 0x2e564) != 0)) &&
          ((*(int *)(param_1 + 0x2f6c8) != 0 || (*(int *)(param_1 + 0x2f6cc) != 0)))) {
    if ((*(int *)(param_1 + 0xb42f0) < 2) ||
       (uVar4 = *(uint *)(param_1 + 0xb4324), (int)uVar3 <= (int)*(uint *)(param_1 + 0xb4324))) {
      uVar4 = uVar3;
    }
    uVar4 = FUN_145618ff0(param_1,uVar4,iVar5);
  }
  else {
    if (*(uint *)(param_1 + 0x2e4c4) < 2) {
      if (*(int *)(param_1 + 0xb4320) < (int)uVar3) {
        uVar4 = puVar8[*(int *)(param_1 + 0xb4320)];
        goto LAB_1456193f6;
      }
    }
    else if (*(int *)(param_1 + 0xb4324) < (int)uVar3) {
      uVar4 = puVar8[*(int *)(param_1 + 0xb4324)];
      goto LAB_1456193f6;
    }
    uVar4 = puVar8[(int)uVar3];
  }
LAB_1456193f6:
  uVar2 = *(uint *)(param_1 + 0xb4390);
  uVar9 = *(uint *)(param_1 + 0xb4394);
  if (((int)*(uint *)(param_1 + 0xb4394) <= (int)uVar4) && (uVar9 = uVar4, (int)uVar2 < (int)uVar4))
  {
    uVar9 = uVar2;
  }
  uVar4 = uVar9;
  if (((int)uVar9 <= (int)uVar3) && (uVar4 = uVar3, (int)uVar2 < (int)uVar3)) {
    uVar4 = uVar2;
  }
  *param_3 = uVar4;
  *param_2 = uVar9;
  if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) &&
     (*(int *)(param_1 + 0xb42f4) != 0)) {
    return (ulonglong)*(uint *)(param_1 + 0xb4290);
  }
  uVar7 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),uVar9,uVar4);
  if ((int)*param_3 < (int)(uint)uVar7) {
    if (*(int *)(param_1 + 0xb4310) <= *(int *)(param_1 + 0xb427c)) {
      *param_3 = (uint)uVar7;
      return uVar7;
    }
    uVar7 = (ulonglong)*param_3;
  }
  return uVar7;
}



// FUNCTION 1456194a0 FUN_1456194a0 body=135 status=ok
// SIG undefined FUN_1456194a0(void)

int FUN_1456194a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = *(int *)(param_3 + 0xa0);
  if (*(int *)(param_3 + 0x6c) == 2) {
    if (0.1 < *(double *)(param_1 + 0x2c8)) {
      iVar1 = iVar2 + (int)((*(double *)(param_1 + 0x2c8) - 0.1) / -0.05);
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = iVar1;
      }
    }
    if ((0 < *(longlong *)(param_2 + 0x108)) &&
       (dVar3 = (double)*(longlong *)(param_2 + 0x100) / (double)*(longlong *)(param_2 + 0x108),
       dVar3 < 0.1)) {
      return (int)(((double)iVar2 * dVar3) / 0.1);
    }
  }
  return iVar2;
}



// FUNCTION 145619530 FUN_145619530 body=1267 status=ok
// SIG undefined FUN_145619530(void)

void FUN_145619530(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  double local_98 [8];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar7 = *(int *)(param_1 + 0x2e5b0);
  lVar1 = param_1 + 0xb4278;
  iVar2 = *(int *)(param_1 + 0x2e57c);
  if (((iVar2 == 2) && (0 < *(longlong *)(param_1 + 0xb4380))) &&
     (dVar8 = (double)*(longlong *)(param_1 + 0xb4378) / (double)*(longlong *)(param_1 + 0xb4380),
     dVar8 < 0.1)) {
    iVar7 = (int)(((double)iVar7 * dVar8) / 0.1);
  }
  iVar5 = *(int *)(param_1 + 0x2e4c4);
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0xb4390);
    }
    else {
LAB_145619631:
      iVar5 = *(int *)(param_1 + 0xb4288) * 2;
    }
  }
  else {
    if (((*(int *)(param_1 + 0xb4304) == 0) && (*(int *)(param_1 + 0xb64dc) == 0)) &&
       ((*(int *)(param_1 + 0x2f6c8) != 0 || (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      if (iVar5 == 1) {
        iVar5 = *(int *)(param_1 + 0xb4288) * 5 >> 2;
        goto LAB_14561965b;
      }
      iVar5 = *(int *)(param_1 + 0xb43f4) * *(int *)(param_1 + 0xb428c);
    }
    else {
      if (iVar5 == 1) goto LAB_145619631;
      iVar5 = *(int *)(param_1 + 0xb43f0) * *(int *)(param_1 + 0xb4324);
    }
    iVar5 = iVar5 / 100;
  }
LAB_14561965b:
  iVar6 = *(int *)(param_1 + 0x2e4d0);
  if (*(int *)(param_1 + 0xb4390) <= iVar5) {
    iVar5 = *(int *)(param_1 + 0xb4390);
  }
  if (iVar6 == 8) {
    puVar4 = &DAT_14c802010;
  }
  else {
    puVar4 = &DAT_14c805010;
    if (iVar6 == 10) {
      puVar4 = &DAT_14c803810;
    }
  }
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    if (iVar2 == 3) {
      dVar8 = (double)FUN_145614250(iVar7,iVar6);
      uVar9 = SUB84(dVar8 * 0.25,0);
LAB_1456197c9:
      iVar2 = FUN_145617550(lVar1,SUB84(dVar8,0),uVar9,*(undefined4 *)(param_1 + 0x2e4d0));
      iVar3 = iVar2 + iVar7;
      if (iVar2 + iVar7 <= *(int *)(param_1 + 0xb4394)) {
        iVar3 = *(int *)(param_1 + 0xb4394);
      }
    }
    else if (*(int *)(param_1 + 0xb42f4) == 0) {
      uVar12 = 0x3ff00000;
      iVar7 = FUN_145618f60(lVar1,*(undefined4 *)(param_1 + 0xb4320),iVar6);
      if (*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) < 0x18c01) {
        uVar12 = 0x3fe80000;
      }
      dVar8 = (double)FUN_145614250(iVar7,iVar6);
      iVar2 = FUN_145617550(lVar1,SUB84(dVar8,0),
                            SUB84(dVar8 * (double)((ulonglong)uVar12 << 0x20),0),
                            *(undefined4 *)(param_1 + 0x2e4d0));
      iVar3 = iVar7 + iVar2;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb4290);
      dVar8 = (double)FUN_145614250(iVar3,iVar6);
      iVar7 = FUN_145617550(lVar1,SUB84(dVar8,0),SUB84(dVar8 * 0.75,0),
                            *(undefined4 *)(param_1 + 0x2e4d0));
      iVar3 = iVar3 + iVar7;
      if (iVar3 <= *(int *)(param_1 + 0xb4394)) {
        iVar3 = *(int *)(param_1 + 0xb4394);
      }
    }
  }
  else if ((*(int *)(param_1 + 0xb4304) == 0) &&
          ((*(int *)(param_1 + 0x2f6c8) != 0 || (*(int *)(param_1 + 0x2f6cc) != 0)))) {
    if (*(int *)(param_1 + 0xb42f0) < 2) {
      iVar3 = *(int *)(param_1 + 0xb4320);
    }
    else {
      iVar3 = iVar5;
      if (*(int *)(param_1 + 0xb4324) < iVar5) {
        iVar3 = *(int *)(param_1 + 0xb4324);
      }
    }
    if (iVar2 == 2) {
      if (iVar7 <= iVar3) {
        iVar7 = iVar3;
      }
      iVar7 = FUN_145618ff0(param_1,iVar7,iVar6);
      iVar3 = (int)((iVar7 * 0xf >> 0x1f & 0xfU) + iVar7 * 0xf) >> 4;
    }
    else if (iVar2 == 3) {
      dVar8 = (double)FUN_145614250(iVar7,iVar6);
      if (*(int *)(param_1 + 0x2f6cc) == 0) {
        uVar9 = 0;
        uVar10 = 0x3fe00000;
      }
      else {
        uVar9 = 0x9999999a;
        uVar10 = 0x3fd99999;
      }
      iVar2 = FUN_145617550(lVar1,SUB84(dVar8,0),SUB84((double)CONCAT44(uVar10,uVar9) * dVar8,0),
                            *(undefined4 *)(param_1 + 0x2e4d0));
      iVar3 = iVar7 + iVar2;
      if (iVar7 + iVar2 <= *(int *)(param_1 + 0xb4394)) {
        iVar3 = *(int *)(param_1 + 0xb4394);
      }
    }
    else {
      iVar3 = FUN_145618ff0(param_1,iVar3,iVar6);
    }
  }
  else {
    if (iVar2 == 3) {
      dVar8 = (double)FUN_145614250(iVar7,iVar6);
      local_98[0] = 0.5;
      local_98[1] = 1.0;
      local_98[2] = 0.85;
      local_98[3] = 1.0;
      local_98[6] = 0.85;
      local_98[7] = 1.0;
      local_98[4] = 0.7;
      local_98[5] = 1.0;
      uVar9 = SUB84(dVar8 * local_98[*(uint *)(param_1 + 0x2e4c4) & 7],0);
      goto LAB_1456197c9;
    }
    if (*(uint *)(param_1 + 0x2e4c4) < 2) {
      iVar6 = *(int *)(param_1 + 0xb4320);
    }
    else {
      iVar6 = iVar5;
      if (*(int *)(param_1 + 0xb4324) < iVar5) {
        iVar6 = *(int *)(param_1 + 0xb4324);
      }
    }
    iVar3 = puVar4[iVar6];
    if ((iVar2 == 2) && (iVar3 < iVar7)) {
      iVar3 = iVar7;
    }
  }
  iVar7 = *(int *)(param_1 + 0xb4390);
  iVar2 = *(int *)(param_1 + 0xb4394);
  if ((*(int *)(param_1 + 0xb4394) <= iVar3) && (iVar2 = iVar3, iVar7 < iVar3)) {
    iVar2 = iVar7;
  }
  iVar6 = iVar2;
  if ((iVar2 <= iVar5) && (iVar6 = iVar5, iVar7 < iVar5)) {
    iVar6 = iVar7;
  }
  *param_3 = iVar6;
  iVar7 = 0;
  *param_2 = iVar2;
  FUN_1425b0090();
  if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*(int *)(param_1 + 0xb42f4) == 0)) &&
     (*(int *)(param_1 + 0x2e4c4) != 0)) {
    uVar11 = 0x4000000000000000;
  }
  else {
    if ((*(int *)(param_1 + 0xb4304) != 0) ||
       ((*(int *)(param_1 + 0x2f6c8) == 0 && (*(int *)(param_1 + 0x2f6cc) == 0))))
    goto LAB_145619988;
    uVar11 = 0x3ffc000000000000;
  }
  local_a8 = *(undefined4 *)(param_1 + 0x2e4d0);
  iVar7 = FUN_1456176f0(lVar1,*(int *)(param_1 + 0x2a2e4),iVar6,uVar11);
LAB_145619988:
  if ((*(int *)(param_1 + 0xb44d8) != 0) && (*(int *)(param_1 + 0xb48fc) != 0)) {
    iVar7 = 0;
  }
  iVar7 = iVar7 + iVar6;
  *param_3 = iVar7;
  if (iVar7 <= *param_2) {
    iVar7 = *param_2;
  }
  *param_3 = iVar7;
  if ((*(int *)(param_1 + 0x2e57c) != 3) &&
     ((((*(int *)(param_1 + 0x2a2e4) != 0 || (*(int *)(param_1 + 0xb42f4) == 0)) &&
       (iVar7 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),iVar2,iVar6),
       *param_3 < iVar7)) && (*(int *)(param_1 + 0xb4310) <= *(int *)(param_1 + 0xb427c))))) {
    *param_3 = iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_c8);
}



// FUNCTION 145619a40 FUN_145619a40 body=411 status=ok
// SIG undefined FUN_145619a40(void)

void FUN_145619a40(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xb4fe4);
  lVar1 = param_1 + 0xb4278;
  if (*(int *)(param_1 + 0xb42f4) == 0) {
    iVar4 = FUN_145618f60(lVar1,iVar2,*(undefined4 *)(param_1 + 0x2e4d0));
    iVar5 = (int)((iVar4 >> 0x1f & 3U) + iVar4) >> 2;
    if (*(int *)(param_1 + 0xb4fdc) < 99) {
      iVar5 = iVar4;
    }
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    FUN_145614250(iVar5,*(undefined4 *)(param_1 + 0x2e4d0));
    iVar4 = FUN_145617550(lVar1);
    iVar5 = iVar5 + iVar4;
    *param_3 = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0xb4fe0) < 0x5f) {
      iVar5 = *(int *)(param_1 + 0xb4290);
      FUN_145614250(iVar5,*(undefined4 *)(param_1 + 0x2e4d0));
      iVar4 = FUN_145617550(lVar1);
      iVar4 = iVar4 + iVar5;
      iVar5 = *(int *)(param_1 + 0xb4394);
      *param_3 = iVar2;
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      *param_2 = iVar5;
      return;
    }
    iVar5 = *(int *)(param_1 + 0xb4294);
    if (*(int *)(param_1 + 0xb4290) <= *(int *)(param_1 + 0xb4294)) {
      iVar5 = *(int *)(param_1 + 0xb4290);
    }
    FUN_145614250(iVar5,*(undefined4 *)(param_1 + 0x2e4d0));
    iVar3 = FUN_145617550(lVar1);
    iVar4 = iVar3 + iVar5;
    if (iVar2 <= iVar3 + iVar5) {
      iVar4 = iVar2;
    }
    *param_3 = iVar4;
  }
  *param_2 = iVar5;
  return;
}



// FUNCTION 145619be0 FUN_145619be0 body=1271 status=ok
// SIG undefined FUN_145619be0(void)

ulonglong FUN_145619be0(longlong param_1,uint *param_2,uint *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint local_res8 [2];
  uint *local_res10;
  uint *local_res18;
  int local_res20;
  uint local_58 [6];
  
  lVar1 = param_1 + 0xb4278;
  lVar13 = param_1 + 0x2e510;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar5 = FUN_1456194a0(param_1 + 0xb4cd8,lVar1);
  uVar6 = *(uint *)(param_1 + 0xb4fe4);
  iVar7 = *(int *)(param_1 + 0xb4304);
  if ((iVar7 == 0) && ((*(int *)(param_1 + 0x2f6c8) != 0 || (*(int *)(param_1 + 0x2f6cc) != 0)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  iVar3 = *(int *)(param_1 + 0x2e4d0);
  if (iVar3 == 8) {
    puVar12 = &DAT_14c802010;
  }
  else {
    puVar12 = &DAT_14c805010;
    if (iVar3 == 10) {
      puVar12 = &DAT_14c803810;
    }
  }
  iVar9 = *(int *)(lVar13 + 0x6c);
  local_res8[0] = uVar6;
  if (iVar9 == 3) {
    if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
      local_58[0] = FUN_1456194a0(param_1 + 0xb4cd8,lVar1);
      uVar8 = (ulonglong)local_58[0];
      if (1 < *(int *)(param_1 + 0xb42ec)) {
        local_res8[0] = local_58[0];
        FUN_145619a40(param_1,local_res8,local_58);
        uVar8 = (ulonglong)local_res8[0];
      }
    }
    else {
      local_58[0] = FUN_1456194a0(param_1 + 0xb4cd8,lVar1);
      uVar8 = (ulonglong)local_58[0];
      if ((iVar7 == 0) && (*(int *)(param_1 + 0x2f6cc) != 0)) {
        uVar6 = FUN_145618ff0(param_1,uVar8,iVar3);
        uVar8 = (ulonglong)uVar6;
        if (*(int *)(param_1 + 0xb5018 + (longlong)param_4 * 4) == 2) {
          bVar2 = *(byte *)((longlong)param_4 + 0xb58f4 + param_1);
          *param_3 = local_58[0];
          uVar8 = (longlong)(int)((uint)(bVar2 >> 1) + (bVar2 - 1) * local_58[0] + uVar6) /
                  (longlong)(int)(uint)bVar2;
          *local_res10 = (uint)uVar8;
          return uVar8 & 0xffffffff;
        }
      }
    }
    *param_3 = local_58[0];
    *local_res10 = (uint)uVar8;
    return uVar8;
  }
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    FUN_145619a40(param_1,local_58,local_res8);
    uVar6 = local_res8[0];
  }
  else if (bVar4) {
    if ((*(int *)(param_1 + 0xb42f0) < 2) ||
       (uVar14 = *(uint *)(param_1 + 0xb4324), (int)uVar6 <= (int)*(uint *)(param_1 + 0xb4324))) {
      uVar14 = uVar6;
    }
    if ((iVar9 == 2) && ((int)uVar14 < (int)uVar5)) {
      uVar14 = uVar5;
    }
    iVar7 = FUN_145618ff0(param_1,uVar14,iVar3);
    if (*(int *)(param_1 + 0xb4530) == 1) {
      if (iVar3 == 8) {
        puVar12 = &DAT_14c801c10;
      }
      else {
        puVar12 = &DAT_14c804c10;
        if (iVar3 == 10) {
          puVar12 = &DAT_14c803410;
        }
      }
LAB_145619e2c:
      iVar9 = puVar12[(int)uVar14];
    }
    else {
      iVar9 = iVar7;
      if (*(int *)(param_1 + 0xb4530) == -1) {
        if (iVar3 == 8) {
          puVar12 = &DAT_14c801810;
        }
        else {
          puVar12 = &DAT_14c804810;
          if (iVar3 == 10) {
            puVar12 = &DAT_14c803010;
          }
        }
        goto LAB_145619e2c;
      }
    }
    local_58[0] = (uint)((1.0 - *(double *)(param_1 + 0xb4528)) * (double)iVar9 +
                        (double)iVar7 * *(double *)(param_1 + 0xb4528));
    param_4 = local_res20;
    if (*(int *)(param_1 + 0xb5018 + (longlong)local_res20 * 4) == 2) {
      bVar2 = *(byte *)((longlong)local_res20 + 0xb58f4 + param_1);
      local_58[0] = (int)((uint)(bVar2 >> 1) + (bVar2 - 1) * uVar14 + local_58[0]) /
                    (int)(uint)bVar2;
    }
  }
  else {
    local_58[0] = puVar12[(int)uVar6];
    if ((iVar9 == 2) && ((int)local_58[0] < (int)uVar5)) {
      local_58[0] = uVar5;
    }
  }
  pcVar11 = (char *)(param_1 + 0x2a2f4);
  if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*pcVar11 != '\0')) || (bVar4)) {
    uVar5 = (local_58[0] - *(int *)(param_1 + 0xb4ff4)) - *(int *)(param_1 + 0xb4fec);
    uVar6 = uVar6 + *(int *)(param_1 + 0xb4ff0) / 2;
    if (*(int *)(param_1 + 0xb5018 + (longlong)param_4 * 4) == 2) {
      uVar8 = (ulonglong)*(byte *)((longlong)param_4 + 0xb58f4 + param_1);
      goto LAB_145619f48;
    }
  }
  else {
    uVar5 = local_58[0] - (*(int *)(param_1 + 0xb4ff4) + *(int *)(param_1 + 0xb4fec)) / 2;
    uVar8 = (ulonglong)*(int *)(param_1 + 0xb63a8);
    uVar6 = uVar6 + *(int *)(param_1 + 0xb4ff0);
LAB_145619f48:
    uVar14 = *(uint *)(param_1 + 0xb4ff8 + uVar8 * 4);
    if ((int)uVar5 <= (int)uVar14) {
      uVar5 = uVar14;
    }
  }
  FUN_1425b0090();
  if (((*(int *)(param_1 + 0x2a2e4) != 0) && (*pcVar11 == '\0')) ||
     ((*(int *)(param_1 + 0xb42f4) == 0 || (uVar14 = uVar6, *(int *)(param_1 + 0xb4fe0) < 0x5f)))) {
    iVar7 = FUN_1456176f0(lVar1,*(int *)(param_1 + 0x2a2e4),uVar6,
                          *(undefined8 *)
                           (&DAT_149de8a90 +
                           (longlong)*(int *)(param_1 + 0xb5018 + (longlong)param_4 * 4) * 8),
                          *(undefined4 *)(param_1 + 0x2e4d0));
    uVar14 = uVar5;
    if ((int)uVar5 < (int)(iVar7 + uVar6)) {
      uVar14 = iVar7 + uVar6;
    }
  }
  uVar6 = uVar5;
  if (((*(int *)(param_1 + 0xb43c4) != 0) && (*(int *)(param_1 + 0x2a2e4) != 0)) &&
     (((*pcVar11 == '\0' && (*(int *)(param_1 + 0x2f6cc) == 0)) &&
      ((*(int *)(param_1 + 0x2f6c8) == 0 || (*(int *)(param_1 + 0xb4304) != 0)))))) {
    iVar7 = FUN_1456176f0(lVar1,*(int *)(param_1 + 0x2a2e4),uVar5,0x4000000000000000,
                          *(undefined4 *)(param_1 + 0x2e4d0));
    uVar6 = uVar5 + iVar7;
    if ((int)(uVar5 + iVar7) <= (int)*(uint *)(param_1 + 0xb4394)) {
      uVar6 = *(uint *)(param_1 + 0xb4394);
    }
  }
  uVar5 = *(uint *)(param_1 + 0xb4390);
  uVar15 = *(uint *)(param_1 + 0xb4394);
  if (((int)*(uint *)(param_1 + 0xb4394) <= (int)uVar6) && (uVar15 = uVar6, (int)uVar5 < (int)uVar6)
     ) {
    uVar15 = uVar5;
  }
  if ((int)uVar14 < (int)uVar15) {
    uVar8 = (ulonglong)uVar15;
  }
  else {
    uVar8 = (ulonglong)uVar14;
    if ((int)uVar5 < (int)uVar14) {
      uVar8 = (ulonglong)uVar5;
    }
  }
  uVar6 = (uint)uVar8;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*pcVar11 != '\0')) {
    if (*(int *)(param_1 + 0xb42f4) != 0) {
      if (*(int *)(param_1 + 0xb4fe0) < 0x5f) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0xb4290);
      }
      else {
        uVar5 = *(uint *)(param_1 + 0xb4294);
        if (*(int *)(param_1 + 0xb4290) <= (int)*(uint *)(param_1 + 0xb4294)) {
          uVar5 = *(uint *)(param_1 + 0xb4290);
        }
        uVar10 = (ulonglong)uVar5;
      }
      goto LAB_14561a0aa;
    }
    if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*pcVar11 != '\0')) &&
       (*(int *)(param_1 + 0xb42f4) == 0)) {
      uVar10 = (ulonglong)uVar15;
      goto LAB_14561a0aa;
    }
  }
  uVar5 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),uVar15,uVar8);
  uVar10 = (ulonglong)uVar5;
  if (((int)uVar6 < (int)uVar5) &&
     (uVar10 = uVar8, *(int *)(param_1 + 0xb4310) <= *(int *)(param_1 + 0xb427c))) {
    uVar10 = (ulonglong)uVar5;
    uVar6 = uVar5;
  }
LAB_14561a0aa:
  *local_res18 = uVar6;
  *local_res10 = uVar15;
  return uVar10;
}



// FUNCTION 14561a0e0 FUN_14561a0e0 body=87 status=ok
// SIG undefined FUN_14561a0e0(void)

void FUN_14561a0e0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb42e4);
  *(undefined4 *)(param_1 + 0xb42e8) = 0;
  if ((iVar1 * 7 >> 2 < param_2) || (param_2 <= iVar1)) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0xb42e4) = param_2;
  }
  else {
    *(int *)(param_1 + 0xb42e4) = param_2 >> 1;
    if (param_2 >> 1 < 5) {
      *(int *)(param_1 + 0xb42e4) = param_2;
      *(undefined4 *)(param_1 + 0xb42e8) = 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xb42e8) = 1;
  return;
}



// FUNCTION 14561a140 FUN_14561a140 body=1009 status=ok
// SIG undefined FUN_14561a140(void)

void FUN_14561a140(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2e4c4) == 0) && (1 < *(int *)(param_1 + 0xb64ec))) {
    return;
  }
  if (3 < *(int *)(param_1 + 0xb64e8)) {
    return;
  }
  if (3 < *(int *)(param_1 + 0xb64ec)) {
    return;
  }
  if (*(int *)(param_1 + 0xb64e8) == 1) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2a2e4) = 1;
  iVar1 = 0;
  *(undefined1 *)(param_1 + 0x2a2f4) = 1;
  *(undefined4 *)(param_1 + 0x2f6d0) = 1;
  *(undefined4 *)(param_1 + 0x2f6d4) = 1;
  *(undefined4 *)(param_1 + 0x2f6d8) = 1;
  *(undefined4 *)(param_1 + 0x2f6dc) = 1;
  if (*(int *)(param_1 + 0x2e4c4) == 0) {
    *(undefined4 *)(param_1 + 0x2f698) = 0;
    *(undefined4 *)(param_1 + 0x2f69c) = 1;
    *(undefined4 *)(param_1 + 0x2f6a0) = 2;
    return;
  }
  *(undefined8 *)(param_1 + 0x2f698) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f6a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcb958) = 0;
  if (*(char *)(param_1 + 0xcb9db) == '\x01') {
    *(undefined4 *)(param_1 + 0xcb958) = 1;
    iVar1 = 1;
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 0;
    }
  }
  if (*(char *)(param_1 + 0xcb9dc) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 2;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 1;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) == -1) {
      *(undefined4 *)(param_1 + 0x2f69c) = 1;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 1;
  }
  if (*(char *)(param_1 + 0xcb9dd) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 4;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) == -1) {
      *(undefined4 *)(param_1 + 0x2f69c) = 2;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 2;
  }
  if (*(char *)(param_1 + 0xcb9de) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 8;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 3;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) == -1) {
      *(undefined4 *)(param_1 + 0x2f69c) = 3;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 3;
  }
  if (*(char *)(param_1 + 0xcb9df) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 0x10;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 4;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) == -1) {
      *(undefined4 *)(param_1 + 0x2f69c) = 4;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 4;
  }
  if (*(char *)(param_1 + 0xcb9e0) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 0x20;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 5;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) == -1) {
      *(undefined4 *)(param_1 + 0x2f69c) = 5;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 5;
  }
  if (*(char *)(param_1 + 0xcb9e1) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 0x40;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 6;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) == -1) {
      *(undefined4 *)(param_1 + 0x2f69c) = 6;
    }
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 6;
  }
  if (*(char *)(param_1 + 0xcb9e2) == '\x01') {
    *(uint *)(param_1 + 0xcb958) = *(uint *)(param_1 + 0xcb958) | 0x80;
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f698) == -1) {
      *(undefined4 *)(param_1 + 0x2f698) = 7;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x2f69c) != -1) goto LAB_14561a4fd;
    *(undefined4 *)(param_1 + 0x2f69c) = 7;
  }
  else if ((iVar1 == 3) && (*(int *)(param_1 + 0x2f6a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2f6a0) = 7;
  }
  if (*(int *)(param_1 + 0x2f69c) == -1) {
    *(undefined4 *)(param_1 + 0x2f69c) = *(undefined4 *)(param_1 + 0x2f698);
  }
LAB_14561a4fd:
  if (*(int *)(param_1 + 0x2f6a0) == -1) {
    *(undefined4 *)(param_1 + 0x2f6a0) = *(undefined4 *)(param_1 + 0x2f698);
  }
  if (*(int *)(param_1 + 0xcb6a0) == 1) {
    *(undefined8 *)(param_1 + 0x2f6d4) = 0;
    *(undefined4 *)(param_1 + 0x2f6dc) = 0;
    *(undefined4 *)(param_1 + 0xb46a8) = 0;
  }
  return;
}



// FUNCTION 14561a540 FUN_14561a540 body=359 status=ok
// SIG undefined FUN_14561a540(void)

void FUN_14561a540(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0xb4348);
  uVar1 = (int)*(double *)(param_1 + 0xb4da0) - *(int *)(param_1 + 0x2e4c4);
  if (uVar1 < 0x11) {
    if ((int)uVar1 < 1) goto LAB_14561a5de;
  }
  else {
    uVar1 = 0x10;
  }
  iVar6 = (int)(lVar3 / (longlong)(ulonglong)uVar1);
  if (lVar3 < 1) {
    iVar5 = (*param_2 * 0x32) / 100;
    iVar2 = -iVar6;
    if (iVar5 <= -iVar6) {
      iVar2 = iVar5;
    }
    if (-iVar2 <= lVar3) {
      iVar2 = -(int)lVar3;
    }
    *param_2 = *param_2 - iVar2;
  }
  else {
    iVar2 = (*param_2 * 0x32) / 100;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
    iVar2 = (int)lVar3;
    if (iVar6 < lVar3) {
      iVar2 = iVar6;
    }
    *param_2 = *param_2 + iVar2;
  }
LAB_14561a5de:
  if (((((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) &&
       (*(int *)(param_1 + 0x2f6cc) == 0)) &&
      ((*(int *)(param_1 + 0x2f6c8) == 0 || (*(int *)(param_1 + 0xb4304) != 0)))) &&
     ((*(int *)(param_1 + 0xb4304) == 0 && (lVar3 = *(longlong *)(param_1 + 0xb4350), lVar3 != 0))))
  {
    iVar6 = *param_2;
    iVar2 = *(int *)(param_1 + 0xb4308);
    if (*(int *)(param_1 + 0xb4308) <= iVar6) {
      iVar2 = iVar6;
    }
    iVar5 = iVar2;
    if (lVar3 < iVar2) {
      iVar5 = (int)lVar3;
    }
    lVar7 = (longlong)((ulonglong)((uint)(lVar3 >> 0x3f) & 7) + lVar3) >> 3;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    lVar4 = (longlong)iVar2;
    lVar3 = lVar4;
    if (lVar4 <= lVar7) {
      lVar3 = lVar7;
    }
    if ((lVar3 <= iVar5) && (iVar5 = (int)lVar7, lVar7 < lVar4)) {
      iVar5 = iVar2;
    }
    *param_2 = iVar6 + iVar5;
    *(longlong *)(param_1 + 0xb4350) = *(longlong *)(param_1 + 0xb4350) - (longlong)iVar5;
  }
  return;
}



// FUNCTION 14561a6b0 FUN_14561a6b0 body=1217 status=ok
// SIG undefined FUN_14561a6b0(void)

void FUN_14561a6b0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  
  dVar20 = 1.0;
  bVar4 = false;
  iVar10 = -1;
  bVar3 = false;
  iVar5 = FUN_145613df0(*(undefined8 *)(param_1 + 0x2e6c8));
  uVar18 = (longlong)iVar5 - 1;
  iVar5 = iVar5 + -1;
  iVar7 = iVar10;
  if (0 < (longlong)uVar18) {
    iVar16 = 1;
    uVar19 = uVar18;
    do {
      uVar14 = *(ulonglong *)(param_1 + 0xb43f8);
      lVar17 = uVar18 - uVar19;
      uVar1 = lVar17 + 1;
      if (1 < (longlong)uVar1) {
        plVar11 = (longlong *)(param_1 + 0xb4400);
        lVar15 = lVar17;
        do {
          if (*plVar11 != 0) {
            uVar14 = *plVar11 + uVar14 * 3 >> 2;
          }
          plVar11 = plVar11 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (!bVar4) {
        uVar9 = uVar14 * 2 & 0xffffffff;
        if ((uint)(uVar14 * 2) < 70000) {
          uVar9 = 70000;
        }
        uVar2 = *(ulonglong *)(param_1 + 0xb43f8 + uVar1 * 8);
        if (uVar2 <= uVar9) {
          uVar9 = uVar14 * 4 & 0xffffffff;
          if ((uint)(uVar14 * 4) < 0xcd14) {
            uVar9 = 0xcd14;
          }
          if (uVar2 <= uVar9) goto LAB_14561a7b6;
        }
        bVar4 = true;
        iVar10 = iVar16;
      }
LAB_14561a7b6:
      if ((((!bVar3) && (1 < iVar16)) && (iVar16 < iVar5)) &&
         (0x445c < *(ulonglong *)(param_1 + 0xb43f0 + uVar1 * 8))) {
        bVar3 = true;
        uVar14 = uVar1;
        iVar12 = iVar16;
        do {
          uVar9 = *(ulonglong *)(param_1 + 0xb43f8 + uVar14 * 8);
          if ((0x445a < uVar9 - 1) || (*(ulonglong *)(param_1 + 0xb43f8 + lVar17 * 8) >> 1 <= uVar9)
             ) {
            bVar3 = false;
            uVar14 = uVar18;
            iVar12 = iVar5;
          }
          iVar12 = iVar12 + 1;
          uVar14 = uVar14 + 1;
        } while (iVar12 < iVar5);
        if (bVar3) {
          iVar7 = iVar16;
        }
      }
      param_2 = param_2 + *(longlong *)(param_1 + 0xb43f8 + uVar1 * 8);
      iVar16 = iVar16 + 1;
      uVar19 = uVar19 - 1;
    } while (0 < (longlong)uVar19);
  }
  if (0 < iVar5) {
    param_2 = param_2 / uVar18;
  }
  if (((iVar10 == -1) || (iVar10 == *(int *)(param_1 + 0xb44c8) + -1)) ||
     (uVar6 = iVar10 - *(int *)(param_1 + 0xb44c8), uVar13 = (int)uVar6 >> 0x1f, iVar5 = -1,
     3 < (int)((uVar6 ^ uVar13) - uVar13))) {
    iVar5 = iVar10;
  }
  *(int *)(param_1 + 0xb44c8) = iVar5;
  if (((*(int *)(param_1 + 0x2f6c8) != 1) || (*(uint *)(param_1 + 0x2e4c4) < 0x1f)) ||
     (*(int *)(param_1 + 0x2e578) < 9)) goto LAB_14561ab48;
  if (0 < *(int *)(param_1 + 0xb4360)) {
    dVar20 = (double)*(int *)(param_1 + 0xb4364) / (double)*(int *)(param_1 + 0xb4360);
  }
  if (((iVar10 == -1) && (param_2 <= (ulonglong)(*(longlong *)(param_1 + 0xb44c0) * 2))) &&
     (param_2 < 0x1d4c1)) {
    bVar3 = false;
LAB_14561a8fe:
    if ((*(ulonglong *)(param_1 + 0xb44c0) >> 1 <= param_2) && (69999 < param_2))
    goto LAB_14561a940;
    *(undefined4 *)(param_1 + 0xb4298) = 2000;
    iVar10 = *(int *)(param_1 + 0xb42e4) * 3 >> 1;
    if (0xf < iVar10) {
      iVar10 = 0xf;
    }
    *(int *)(param_1 + 0xb42e4) = iVar10;
    bVar4 = true;
  }
  else {
    bVar3 = true;
    if (iVar10 == -1) goto LAB_14561a8fe;
LAB_14561a940:
    bVar4 = false;
    if (bVar3) {
      iVar16 = 10;
      iVar10 = *(int *)(param_1 + 0xb42e4) >> 1;
      *(undefined4 *)(param_1 + 0xb4298) = 1000;
      if (dVar20 <= 3.0) {
        iVar16 = 6;
      }
      if (iVar10 < iVar16) {
        iVar10 = iVar16;
      }
      *(int *)(param_1 + 0xb42e4) = iVar10;
      bVar4 = false;
    }
  }
  iVar10 = *(int *)(param_1 + 0x2e578) + -1;
  if (iVar10 < *(int *)(param_1 + 0xb42e4)) {
    *(int *)(param_1 + 0xb42e4) = iVar10;
  }
  iVar10 = *(int *)(param_1 + 0xb42ec);
  if ((0 < iVar5) && (iVar5 < iVar10)) {
    iVar10 = iVar5;
  }
  if ((3 < iVar7) && (iVar7 < iVar10)) {
    iVar10 = iVar7;
  }
  iVar7 = *(int *)(param_1 + 0xb42e4);
  *(undefined4 *)(param_1 + 0xb42e8) = 0;
  if ((iVar7 * 7 >> 2 < iVar10) || (iVar10 <= iVar7)) {
    if (iVar10 < iVar7) goto LAB_14561a9df;
  }
  else {
    iVar7 = iVar10 >> 1;
    *(int *)(param_1 + 0xb42e4) = iVar7;
    if (iVar7 < 5) {
LAB_14561a9df:
      *(int *)(param_1 + 0xb42e4) = iVar10;
      iVar7 = iVar10;
    }
    *(undefined4 *)(param_1 + 0xb42e8) = 1;
  }
  *(int *)(param_1 + 0xb42d4) = iVar7;
  *(undefined4 *)(param_1 + 0xb43f0) = 0x96;
  *(undefined4 *)(param_1 + 0xb43f4) = 100;
  if ((2.0 <= dVar20) || (bVar3)) {
    if ((8.0 < dVar20) &&
       ((*(int *)(param_1 + 0xb4324) < 0x10 &&
        (*(undefined4 *)(param_1 + 0xb43f0) = 200, *(int *)(param_1 + 0xb4324) < 8)))) {
      *(undefined4 *)(param_1 + 0xb43f0) = 400;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb43f0) = 0x78;
    *(undefined4 *)(param_1 + 0xb43f4) = 0x5a;
  }
  if ((bVar4) && (0x50 < *(int *)(param_1 + 0xb44e8))) {
    *(undefined4 *)(param_1 + 0xb44ec) = 0xf;
  }
  else if ((bVar3) || (*(int *)(param_1 + 0xb44e8) < 0x1e)) {
    *(undefined4 *)(param_1 + 0xb44ec) = 5;
    *(undefined4 *)(param_1 + 0xb4298) = 500;
  }
  if ((*(int *)(param_1 + 0xb48fc) != 0) && (*(int *)(param_1 + 0x2e650) != 0)) {
    if (((*(int *)(param_1 + 0x2a2e4) != 0) &&
        (((*(int *)(param_1 + 0xb44d8) == 0 &&
          (*(double *)(param_1 + 0xb44f8) <= 15.0 && *(double *)(param_1 + 0xb44f8) != 15.0)) &&
         (4 < *(int *)(param_1 + 0x2e558))))) ||
       (((0 < iVar5 && (iVar5 <= iVar7)) || (0x668a < param_2)))) {
      *(undefined4 *)(param_1 + 0xb42fc) = 0;
      *(undefined4 *)(param_1 + 0xb44d0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xb42fc) = 1;
      *(undefined4 *)(param_1 + 0xb44d0) = 1;
      if (0xc < iVar7) {
        *(undefined4 *)(param_1 + 0xb42e4) = 0xc;
        *(undefined4 *)(param_1 + 0xb42d4) = 0xc;
      }
    }
  }
  uVar8 = FUN_145615290(param_1);
  FUN_1456174e0(param_1,uVar8);
LAB_14561ab48:
  *(ulonglong *)(param_1 + 0xb44c0) = param_2;
  return;
}



// FUNCTION 14561ab80 FUN_14561ab80 body=25 status=ok
// SIG undefined FUN_14561ab80(void)

void FUN_14561ab80(undefined4 *param_1)

{
  *param_1 = 0x7fffffff;
  *(undefined8 *)(param_1 + 2) = 0x7fffffffffffffff;
  *(undefined8 *)(param_1 + 4) = 0x7fffffffffffffff;
  return;
}



// FUNCTION 14561aba0 FUN_14561aba0 body=13 status=ok
// SIG undefined FUN_14561aba0(void)

void FUN_14561aba0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 14561abb0 FUN_14561abb0 body=79 status=ok
// SIG undefined FUN_14561abb0(void)

longlong FUN_14561abb0(int param_1,byte param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  
  if (-1 < param_3) {
    return ((longlong)param_3 * (longlong)param_1 + 0x100 >> 9) + (param_4 << (param_2 & 0x3f));
  }
  lVar1 = (longlong)-param_3 * (longlong)param_1 + 0x100 >> 9;
  if (-1 < param_4) {
    return (param_4 << (param_2 & 0x3f)) - lVar1;
  }
  return -(param_4 << (param_2 & 0x3f)) - lVar1;
}



// FUNCTION 14561ac00 FUN_14561ac00 body=142 status=ok
// SIG undefined FUN_14561ac00(void)

void FUN_14561ac00(int param_1,byte param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *param_3;
  if ((0x7ffffffe < iVar1) || (lVar2 = *(longlong *)(param_3 + 2), 0x7ffffffffffffffe < lVar2)) {
    *param_3 = 0x7fffffff;
    param_3[2] = -1;
    param_3[3] = 0x7fffffff;
    param_3[4] = -1;
    param_3[5] = 0x7fffffff;
    return;
  }
  if (-1 < iVar1) {
    *(longlong *)(param_3 + 4) =
         ((longlong)iVar1 * (longlong)param_1 + 0x100 >> 9) + (lVar2 << (param_2 & 0x3f));
    return;
  }
  lVar3 = (longlong)-iVar1 * (longlong)param_1 + 0x100 >> 9;
  if (-1 < lVar2) {
    *(longlong *)(param_3 + 4) = (lVar2 << (param_2 & 0x3f)) - lVar3;
    return;
  }
  *(longlong *)(param_3 + 4) = -(lVar2 << (param_2 & 0x3f)) - lVar3;
  return;
}



// FUNCTION 14561ac90 FUN_14561ac90 body=60 status=ok
// SIG undefined FUN_14561ac90(void)

void FUN_14561ac90(longlong param_1)

{
  if (*(int *)(param_1 + 0xb63b4) == 0) {
    FUN_1425b0090();
    *(undefined8 *)(param_1 + 0x307b0) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x307b8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x307c0) = 0x3ff0000000000000;
  }
  return;
}



// FUNCTION 14561acd0 FUN_14561acd0 body=312 status=ok
// SIG undefined FUN_14561acd0(void)

int FUN_14561acd0(longlong param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  sVar1 = FUN_145477220(param_2,0,*(undefined4 *)(param_1 + 0x2e4d0));
  iVar3 = (int)sVar1 * (int)sVar1;
  if (((*(int *)(param_1 + 0xcef28) == 0) || ((*(byte *)(param_1 + 0xcef38) & 4) == 0)) ||
     (iVar2 = *(int *)(param_1 + 0xcef2c), *(int *)(param_1 + 0xcef2c) == -1)) {
    FUN_1425b0090();
    if (*(int *)(param_1 + 0x2a2e4) == 0) {
      dVar4 = ((double)param_2 * 0.001 + 4.35) * (double)iVar3 * *(double *)(param_1 + 0x307c0);
    }
    else if ((*(int *)(param_1 + 0xb4304) == 0) &&
            ((*(int *)(param_1 + 0x2f6c8) != 0 || (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      dVar4 = ((double)param_2 * 0.001 + 4.25) * (double)iVar3 * *(double *)(param_1 + 0x307b8);
    }
    else {
      dVar4 = ((double)param_2 * 0.001 + 4.15) * (double)iVar3 * *(double *)(param_1 + 0x307b0);
    }
    iVar3 = (int)dVar4;
    if (*(int *)(param_1 + 0x2e4d0) == 10) {
      iVar3 = iVar3 + 8 >> 4;
    }
    else if (*(int *)(param_1 + 0x2e4d0) == 0xc) {
      iVar3 = iVar3 + 0x80 >> 8;
    }
    iVar2 = 1;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}



// FUNCTION 14561ae10 FUN_14561ae10 body=64 status=ok
// SIG undefined FUN_14561ae10(void)

void FUN_14561ae10(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14561acd0();
  if (((*(int *)(param_1 + 0xcef28) != 0) && ((*(byte *)(param_1 + 0xcef38) & 4) != 0)) &&
     (*(int *)(param_1 + 0xcef2c) != -1)) {
    return;
  }
  FUN_14561c490(param_1,uVar1);
  return;
}



// FUNCTION 14561ae50 FUN_14561ae50 body=72 status=ok
// SIG undefined FUN_14561ae50(void)

void FUN_14561ae50(longlong param_1,double param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14561acd0(param_1,*(undefined4 *)(param_1 + 0x2a31c));
  iVar2 = 1;
  if (0 < (int)((double)iVar1 / param_2)) {
    iVar2 = (int)((double)iVar1 / param_2);
  }
  FUN_14561c490(param_1,iVar2);
  return;
}



// FUNCTION 14561aea0 FUN_14561aea0 body=923 status=ok
// SIG undefined FUN_14561aea0(void)

void FUN_14561aea0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong local_70;
  longlong local_68;
  char *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = param_1 + 0x29ee0;
  local_58 = param_1;
  local_50 = lVar5;
  FUN_1425b0090();
  *(undefined4 *)(param_1 + 0x339fc) = 7;
  uVar1 = FUN_14561acd0(param_1,*(int *)(param_1 + 0x2a320) + *(int *)(param_1 + 0x2a31c));
  if (((*(int *)(param_1 + 0xcef28) == 0) || ((*(byte *)(param_1 + 0xcef38) & 4) == 0)) ||
     (iVar2 = *(int *)(param_1 + 0xcef2c), iVar2 == -1)) {
    iVar2 = FUN_14561c490(param_1,uVar1);
  }
  *(int *)(param_1 + 0x339f8) = iVar2;
  piVar9 = (int *)(param_1 + 0x2a2e4);
  uVar1 = 0;
  *(uint *)(param_1 + 0x1246c) = (uint)(iVar2 >> 6 == 0) + (iVar2 >> 6);
  if ((*(int *)(param_1 + 0xb4734) != 1) || (*piVar9 == 0)) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x12454) = uVar1;
  local_78 = piVar9;
  FUN_14561c520(lVar5,param_1 + 0x307c8);
  if ((*piVar9 == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    puVar3 = &DAT_149d52bf8;
  }
  else {
    puVar3 = (undefined *)(*(longlong *)(param_1 + 0x2b108) + 0x7e);
  }
  local_60 = (char *)(param_1 + 0x2a2f4);
  *(undefined **)(param_1 + 0x12390) = puVar3;
  if (*(int *)(param_1 + 0x2e56c) == 1) {
    if ((*piVar9 != 0) && (*local_60 == '\0')) {
      lVar5 = 75000;
      if (*(int *)(param_1 + 0x2a2f8) == 0) {
        lVar5 = 0x124e8;
      }
      FUN_1456640a0(param_1 + 0x124d4,lVar5 + param_1,*(longlong *)(param_1 + 0x2b108) + 0x7b2);
    }
  }
  else {
    if ((*(int *)(param_1 + 0xb4834) == 0) || (*piVar9 == 0)) {
      lVar5 = param_1 + 0x12978;
      lVar4 = *(longlong *)(param_1 + 0x2b108) + 0xae;
      local_68 = 4;
      do {
        local_70 = 2;
        do {
          lVar10 = 2;
          do {
            iVar2 = 0;
            do {
              lVar8 = 6;
              lVar6 = lVar5;
              lVar7 = lVar4;
              if (iVar2 == 0) {
                lVar8 = 3;
              }
              do {
                FUN_14546f3d0(lVar7,local_48);
                FUN_14568a3d0(lVar6,local_48,&DAT_149df3130);
                FUN_14568a400(lVar6 + 0x120,local_48,&DAT_149df3130);
                lVar7 = lVar7 + 3;
                lVar6 = lVar6 + 0x30;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
              iVar2 = iVar2 + 1;
              lVar5 = lVar5 + 0x240;
              lVar4 = lVar4 + 0x12;
            } while (iVar2 < 6);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          local_70 = local_70 + -1;
        } while (local_70 != 0);
        local_68 = local_68 + -1;
      } while (local_68 != 0);
      local_70 = 0;
      local_68 = 0;
      param_1 = local_58;
      piVar9 = local_78;
      lVar5 = local_50;
    }
    lVar4 = 0;
    lVar10 = 7;
    if ((*(int *)(param_1 + 0xb4748) != 3) || (*piVar9 == 0)) {
      lVar6 = param_1 + 0xcd238;
      lVar8 = 0x10;
      lVar7 = lVar4;
      do {
        FUN_14568a3d0(lVar6,*(longlong *)(param_1 + 0x12390) + lVar7,&DAT_149d52c44);
        lVar7 = lVar7 + 3;
        lVar6 = lVar6 + 0x10;
        lVar8 = lVar8 + -1;
        piVar9 = local_78;
      } while (lVar8 != 0);
    }
    if ((((*(int *)(param_1 + 0xb4834) == 0) || (((byte)*(undefined4 *)(lVar5 + 0x45e4) & 7) == 1))
        || (*piVar9 == 0)) && ((FUN_14561c200(param_1), *piVar9 != 0 && (*local_60 == '\0')))) {
      lVar6 = param_1 + 75000;
      if (*(int *)(lVar5 + 0x418) == 0) {
        lVar6 = param_1 + 0x124e8;
      }
      FUN_1456640a0(param_1 + 0x124d4,lVar6,*(longlong *)(lVar5 + 0x1228) + 0x7b2);
      lVar5 = param_1 + 0xcbed8;
      do {
        FUN_14568a3d0(lVar5,*(longlong *)(param_1 + 0x2b108) + 0x776 + lVar4,&DAT_149d52c3c);
        lVar4 = lVar4 + 3;
        lVar5 = lVar5 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 14561b250 FUN_14561b250 body=113 status=ok
// SIG undefined FUN_14561b250(void)

void FUN_14561b250(longlong param_1,longlong param_2,int param_3)

{
  if (*(int *)(param_1 + 0x2e4d0) == 8) {
    *(undefined4 *)(param_2 + 0x6440) = (&DAT_14c805810)[param_3];
    *(undefined4 *)(param_2 + 0x6444) = (&DAT_14c805c10)[param_3];
    return;
  }
  if (*(int *)(param_1 + 0x2e4d0) != 10) {
    *(undefined4 *)(param_2 + 0x6440) = (&DAT_14c806810)[param_3];
    *(undefined4 *)(param_2 + 0x6444) = (&DAT_14c806c10)[param_3];
    return;
  }
  *(undefined4 *)(param_2 + 0x6440) = (&DAT_14c806010)[param_3];
  *(undefined4 *)(param_2 + 0x6444) = (&DAT_14c806410)[param_3];
  return;
}



// FUNCTION 14561b2d0 FUN_14561b2d0 body=269 status=ok
// SIG undefined FUN_14561b2d0(void)

void FUN_14561b2d0(uint param_1,byte param_2,ulonglong param_3,int *param_4,longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == 0) {
    *param_4 = 0;
    *param_5 = 0;
    return;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = CONCAT44(0,param_1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = ((param_3 & 0xffffffff) * (param_3 & 0xffffffff) << (param_2 + 10 & 0x3f)) +
                 (ulonglong)(param_1 >> 1);
  iVar8 = 0x3bfdf;
  if (SUB168(auVar4 / auVar3,0) < 0x3bfdf) {
    iVar8 = SUB164(auVar4 / auVar3,0);
  }
  uVar6 = (iVar8 >> 2) + 8;
  iVar2 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  bVar5 = (byte)(iVar2 + -3);
  lVar7 = (longlong)(int)(((int)uVar6 >> (bVar5 & 0x1f) & 7U) + (iVar2 + -3) * 8);
  lVar1 = lVar7 * 4;
  lVar7 = lVar7 * 4;
  iVar9 = (iVar8 - *(int *)(&DAT_149de8f40 + lVar1)) * 0x400 >> (bVar5 + 2 & 0x1f);
  iVar8 = *(int *)(&DAT_149de8da4 + lVar7);
  iVar2 = *(int *)(&DAT_149de8da0 + lVar1);
  *param_4 = ((iVar9 * *(int *)(&DAT_149de8c04 + lVar7) +
               (0x400 - iVar9) * *(int *)(&DAT_149de8c00 + lVar1) >> 10) << (param_2 & 0x1f)) + 1 >>
             1;
  *param_5 = (longlong)
             (((longlong)(iVar9 * iVar8 + (0x400 - iVar9) * iVar2) >> 10) * CONCAT44(0,param_1) +
             0x200) >> 10;
  return;
}



// FUNCTION 14561b3e0 FUN_14561b3e0 body=372 status=ok
// SIG undefined FUN_14561b3e0(void)

void FUN_14561b3e0(uint *param_1,undefined4 *param_2,uint *param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0x3bfdf;
  uVar2 = (((ulonglong)*param_3 * (ulonglong)*param_3 << ((char)*param_2 + 10U & 0x3f)) +
          (ulonglong)(*param_1 >> 1)) / (ulonglong)*param_1;
  if (uVar2 < 0x3bfdf) {
    local_48 = (undefined4)uVar2;
  }
  local_44 = 0x3bfdf;
  uVar2 = (((ulonglong)param_3[1] * (ulonglong)param_3[1] << ((char)param_2[1] + 10U & 0x3f)) +
          (ulonglong)(param_1[1] >> 1)) / (ulonglong)param_1[1];
  if (uVar2 < 0x3bfdf) {
    local_44 = (undefined4)uVar2;
  }
  uVar3 = (((ulonglong)param_3[2] * (ulonglong)param_3[2] << ((char)param_2[2] + 10U & 0x3f)) +
          (ulonglong)(param_1[2] >> 1)) / (ulonglong)param_1[2];
  uVar2 = 0x3bfdf;
  if (uVar3 < 0x3bfdf) {
    uVar2 = uVar3;
  }
  local_40 = (undefined4)uVar2;
  FUN_14561c9b0(&local_48,&local_28,&local_38);
  uVar1 = *param_1;
  *param_4 = *param_4 + ((longlong)((local_28 << ((byte)*param_2 & 0x1f)) + 1) >> 1);
  *param_5 = *param_5 + ((longlong)((ulonglong)uVar1 * (longlong)local_38 + 0x200) >> 10);
  uVar1 = param_1[1];
  *param_4 = *param_4 + ((longlong)((local_24 << ((byte)param_2[1] & 0x1f)) + 1) >> 1);
  *param_5 = *param_5 + ((longlong)((ulonglong)uVar1 * (longlong)local_34 + 0x200) >> 10);
  uVar1 = param_1[2];
  *param_4 = *param_4 + ((longlong)((local_20 << ((byte)param_2[2] & 0x1f)) + 1) >> 1);
  *param_5 = *param_5 + ((longlong)((ulonglong)uVar1 * (longlong)local_30 + 0x200) >> 10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 14561b570 FUN_14561b570 body=105 status=ok
// SIG undefined FUN_14561b570(void)

undefined4 FUN_14561b570(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(longlong *)(param_2 + 0x1c8) == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x1c8) + 7);
  }
  if (*(longlong *)(param_2 + 0x1d0) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = (uint)*(byte *)(*(longlong *)(param_2 + 0x1d0) + 7);
  }
  uVar1 = (uint)uVar2;
  if (uVar1 != uVar3) {
    if (uVar1 == 3) {
      uVar2 = (ulonglong)uVar3;
    }
    else {
      uVar4 = 3;
      if (uVar3 == 3) {
        uVar4 = uVar1;
      }
      uVar2 = (ulonglong)uVar4;
    }
  }
  return *(undefined4 *)
          (param_1 + 0xcd208 +
          (uVar2 * 3 + (ulonglong)*(byte *)(**(longlong **)(param_2 + 0x1c0) + 7)) * 4);
}



// FUNCTION 14561b5e0 FUN_14561b5e0 body=37 status=ok
// SIG undefined FUN_14561b5e0(void)

int FUN_14561b5e0(byte param_1,uint param_2,int param_3)

{
  return (((1 << ((&DAT_149d54960)[param_1] & 0x1f)) - 1U & param_2) +
         ((int)param_2 >> ((&DAT_149d54960)[param_1] & 0x1f)) * param_3) * 4;
}



// FUNCTION 14561b610 FUN_14561b610 body=61 status=ok
// SIG undefined FUN_14561b610(void)

longlong FUN_14561b610(byte param_1,uint param_2,longlong param_3)

{
  return param_3 + (longlong)
                   (int)((((1 << ((&DAT_149d54960)[param_1] & 0x1f)) - 1U & param_2) +
                         (uint)(byte)(&DAT_149d549c0)[param_1] *
                         ((int)param_2 >> ((&DAT_149d54960)[param_1] & 0x1f)) * 4) * 4) * 2;
}



// FUNCTION 14561b650 FUN_14561b650 body=105 status=ok
// SIG undefined FUN_14561b650(void)

longlong FUN_14561b650(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2f688 + (longlong)param_2 * 4);
  if ((char)param_2 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x2f698);
  }
  else if ((char)param_2 == '\x02') {
    iVar2 = *(int *)(param_1 + 0x2f69c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2f6a0);
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2a088 + (longlong)iVar2 * 4);
  }
  if ((iVar1 != iVar2) && (iVar1 != -1)) {
    return *(longlong *)(param_1 + 0x2e4f0) + 0x58 + (longlong)iVar1 * 0xe0;
  }
  return 0;
}



// FUNCTION 14561b6c0 FUN_14561b6c0 body=367 status=ok
// SIG undefined FUN_14561b6c0(void)

void FUN_14561b6c0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar5;
  
  uVar1 = 0;
  uVar2 = uVar1;
  uVar5 = uVar1;
  do {
    dVar7 = (double)FUN_145614250(uVar5,8);
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    *(int *)((longlong)&DAT_14c805810 + uVar2) = (int)(dVar7 * 0.0418 + 2.4107);
    *(int *)((longlong)&DAT_14c805c10 + uVar2) = (int)(dVar7 * 0.063 + 2.742);
    uVar2 = uVar2 + 4;
    uVar3 = uVar1;
    uVar6 = uVar1;
  } while ((int)uVar4 < 0x100);
  do {
    dVar7 = (double)FUN_145614250(uVar6,10);
    uVar4 = (int)uVar6 + 1;
    *(int *)((longlong)&DAT_14c806010 + uVar3) = (int)(dVar7 * 0.0418 + 2.4107);
    *(int *)((longlong)&DAT_14c806410 + uVar3) = (int)(dVar7 * 0.063 + 2.742);
    uVar3 = uVar3 + 4;
    uVar2 = uVar1;
    uVar6 = (ulonglong)uVar4;
  } while ((int)uVar4 < 0x100);
  do {
    dVar7 = (double)FUN_145614250(uVar1,0xc);
    uVar4 = (int)uVar1 + 1;
    uVar1 = (ulonglong)uVar4;
    *(int *)((longlong)&DAT_14c806810 + uVar2) = (int)(dVar7 * 0.0418 + 2.4107);
    *(int *)((longlong)&DAT_14c806c10 + uVar2) = (int)(dVar7 * 0.063 + 2.742);
    uVar2 = uVar2 + 4;
  } while ((int)uVar4 < 0x100);
  return;
}



// FUNCTION 14561b830 FUN_14561b830 body=482 status=ok
// SIG undefined FUN_14561b830(void)

void FUN_14561b830(byte param_1,char param_2,longlong param_3,void *param_4,void *param_5)

{
  void *_Src;
  void *pvVar1;
  void *pvVar2;
  ulonglong _Size;
  ulonglong _Size_00;
  
  _Src = *(void **)(param_3 + 0x48);
  pvVar2 = *(void **)(param_3 + 0x40);
  _Size_00 = (ulonglong)
             (byte)(&DAT_149d549c0)
                   [(byte)(&DAT_149d54b48)
                          [(longlong)*(int *)(param_3 + 0xc) +
                           ((longlong)*(int *)(param_3 + 8) + (ulonglong)param_1 * 2) * 2]];
  _Size = (ulonglong)
          (byte)(&DAT_149d549b0)
                [(byte)(&DAT_149d54b48)
                       [(longlong)*(int *)(param_3 + 0xc) +
                        ((longlong)*(int *)(param_3 + 8) + (ulonglong)param_1 * 2) * 2]];
  if (param_2 == '\0') {
    memcpy(param_4,pvVar2,_Size_00);
    memcpy(param_5,_Src,_Size);
  }
  else if (param_2 == '\x01') {
    if (_Size_00 != 0) {
      pvVar1 = param_4;
      do {
        *(bool *)pvVar1 = *(short *)((longlong)pvVar1 + ((longlong)pvVar2 - (longlong)param_4)) != 0
        ;
        pvVar1 = (void *)((longlong)pvVar1 + 2);
      } while ((longlong)pvVar1 - (longlong)param_4 < (longlong)_Size_00);
    }
    if (_Size != 0) {
      pvVar2 = param_5;
      do {
        *(bool *)pvVar2 = *(short *)((longlong)pvVar2 + ((longlong)_Src - (longlong)param_5)) != 0;
        pvVar2 = (void *)((longlong)pvVar2 + 2);
      } while ((longlong)pvVar2 - (longlong)param_5 < (longlong)_Size);
      return;
    }
  }
  else if (param_2 == '\x02') {
    if (_Size_00 != 0) {
      pvVar1 = param_4;
      do {
        *(bool *)pvVar1 = *(int *)((longlong)pvVar1 + ((longlong)pvVar2 - (longlong)param_4)) != 0;
        pvVar1 = (void *)((longlong)pvVar1 + 4);
      } while ((longlong)pvVar1 - (longlong)param_4 < (longlong)_Size_00);
    }
    if (_Size != 0) {
      pvVar2 = param_5;
      do {
        *(bool *)pvVar2 = *(int *)((longlong)pvVar2 + ((longlong)_Src - (longlong)param_5)) != 0;
        pvVar2 = (void *)((longlong)pvVar2 + 4);
      } while ((longlong)pvVar2 - (longlong)param_5 < (longlong)_Size);
      return;
    }
  }
  else {
    if (_Size_00 != 0) {
      pvVar1 = param_4;
      do {
        *(bool *)pvVar1 =
             *(longlong *)(((longlong)pvVar2 - (longlong)param_4) + (longlong)pvVar1) != 0;
        pvVar1 = (void *)((longlong)pvVar1 + 8);
      } while ((longlong)pvVar1 - (longlong)param_4 < (longlong)_Size_00);
    }
    if (_Size != 0) {
      pvVar2 = param_5;
      do {
        *(bool *)pvVar2 =
             *(longlong *)(((longlong)_Src - (longlong)param_5) + (longlong)pvVar2) != 0;
        pvVar2 = (void *)((longlong)pvVar2 + 8);
      } while ((longlong)pvVar2 - (longlong)param_5 < (longlong)_Size);
      return;
    }
  }
  return;
}



// FUNCTION 14561ba20 FUN_14561ba20 body=616 status=ok
// SIG undefined FUN_14561ba20(void)

int FUN_14561ba20(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x2e568) == 1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307cc) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307d0) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307d4) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307d8) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307dc) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307e0) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307e4) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307e8) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307ec) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307f0) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307f4) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307f8) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x307fc) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30800) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30804) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30808) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x3080c) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30810) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30814) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30818) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x3081c) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30820) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30824) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30828) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x3082c) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30830) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30834) = uVar1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = 0xfffffe0c;
  }
  *(undefined4 *)(param_1 + 0x30838) = uVar1;
  *(undefined4 *)(param_1 + 0x3083c) = uVar1;
  uVar2 = -(uint)(*(int *)(param_1 + 0xb46f0) != 0) & 300;
  *(uint *)(param_1 + 0x307c8) = uVar2;
  *(uint *)(param_1 + 0x307d0) = uVar2;
  *(uint *)(param_1 + 0x307cc) = uVar2;
  *(int *)(param_1 + 0x3083c) = *(int *)(param_1 + 0x3083c) + 0x9c4;
  *(int *)(param_1 + 0x30838) = *(int *)(param_1 + 0x30838) + 0x9c4;
  *(int *)(param_1 + 0x30834) = *(int *)(param_1 + 0x30834) + 0x9c4;
  *(int *)(param_1 + 0x307d4) = *(int *)(param_1 + 0x307d4) + 1000;
  *(int *)(param_1 + 0x307d8) = *(int *)(param_1 + 0x307d8) + 1000;
  *(int *)(param_1 + 0x307dc) = *(int *)(param_1 + 0x307dc) + 1000;
  *(int *)(param_1 + 0x307e0) = *(int *)(param_1 + 0x307e0) + 1000;
  *(int *)(param_1 + 0x307e4) = *(int *)(param_1 + 0x307e4) + 1000;
  *(int *)(param_1 + 0x307e8) = *(int *)(param_1 + 0x307e8) + 1000;
  *(int *)(param_1 + 0x307ec) = *(int *)(param_1 + 0x307ec) + 1000;
  *(int *)(param_1 + 0x307f0) = *(int *)(param_1 + 0x307f0) + 2000;
  *(int *)(param_1 + 0x30804) = *(int *)(param_1 + 0x30804) + 1000;
  *(int *)(param_1 + 0x30808) = *(int *)(param_1 + 0x30808) + 0x5dc;
  *(int *)(param_1 + 0x3080c) = *(int *)(param_1 + 0x3080c) + 2000;
  *(int *)(param_1 + 0x30810) = *(int *)(param_1 + 0x30810) + 0x5dc;
  *(int *)(param_1 + 0x30814) = *(int *)(param_1 + 0x30814) + 2000;
  *(int *)(param_1 + 0x30818) = *(int *)(param_1 + 0x30818) + 0x9c4;
  *(int *)(param_1 + 0x3081c) = *(int *)(param_1 + 0x3081c) + 0x9c4;
  *(int *)(param_1 + 0x30820) = *(int *)(param_1 + 0x30820) + 2000;
  *(int *)(param_1 + 0x30824) = *(int *)(param_1 + 0x30824) + 2000;
  *(int *)(param_1 + 0x30828) = *(int *)(param_1 + 0x30828) + 0x9c4;
  *(int *)(param_1 + 0x3082c) = *(int *)(param_1 + 0x3082c) + 0x9c4;
  *(int *)(param_1 + 0x30830) = *(int *)(param_1 + 0x30830) + 0x9c4;
  *(int *)(param_1 + 0x307f4) = *(int *)(param_1 + 0x307f4) + 2000;
  *(int *)(param_1 + 0x307f8) = *(int *)(param_1 + 0x307f8) + 2000;
  *(int *)(param_1 + 0x307fc) = *(int *)(param_1 + 0x307fc) + 1000;
  *(int *)(param_1 + 0x30800) = *(int *)(param_1 + 0x30800) + 1000;
  return -*(int *)(param_1 + 0xb46f0);
}



// FUNCTION 14561bc90 FUN_14561bc90 body=50 status=ok
// SIG undefined FUN_14561bc90(void)

void FUN_14561bc90(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(int *)(param_1 + 0x2e568) == 1) {
    lVar2 = 0x18;
  }
  uVar1 = *(undefined8 *)(&UNK_149de8b68 + lVar2);
  *(undefined8 *)(param_1 + 0x30840) = *(undefined8 *)(&DAT_149de8b60 + lVar2);
  *(undefined8 *)(param_1 + 0x30848) = uVar1;
  *(undefined8 *)(param_1 + 0x30850) = *(undefined8 *)((longlong)&DAT_149de8b70 + lVar2);
  return;
}



// FUNCTION 14561bcd0 FUN_14561bcd0 body=206 status=ok
// SIG undefined FUN_14561bcd0(void)

void FUN_14561bcd0(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  if (0 < param_2) {
    lVar6 = 0x1e;
    if (param_3 < 3) {
      lVar6 = 6;
    }
    uVar8 = 0;
    do {
      uVar5 = (ulonglong)(param_3 - 1U & 0xff);
      if (param_3 == 1 || param_3 + -1 < 0) {
        uVar5 = 0;
      }
      if (param_3 + 2 < 0xc) {
        bVar7 = (char)param_3 + 2;
      }
      else {
        bVar7 = 0xc;
      }
      bVar4 = (byte)uVar5;
      while (bVar4 <= bVar7) {
        lVar3 = uVar5 * 0x1e + uVar8;
        iVar1 = *(int *)(param_1 + lVar3 * 4);
        if (uVar8 == (longlong)param_4) {
          iVar2 = iVar1 - (iVar1 >> 4);
        }
        else {
          iVar2 = iVar1 + 1;
          if (param_2 * 0x40 <= iVar1 + 1) {
            iVar2 = param_2 * 0x40;
          }
        }
        bVar4 = (char)uVar5 + 1;
        uVar5 = (ulonglong)bVar4;
        *(int *)(param_1 + lVar3 * 4) = iVar2;
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < lVar6);
  }
  return;
}



// FUNCTION 14561bda0 FUN_14561bda0 body=611 status=ok
// SIG undefined FUN_14561bda0(void)

void FUN_14561bda0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  byte param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_b8 [32];
  byte local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (longlong)param_5;
  iVar10 = 0;
  iVar17 = 0x7fffffff;
  bVar4 = false;
  local_78 = *(undefined8 *)(param_2 + 0x2018);
  lVar11 = *(longlong *)(param_2 + 0x6410);
  iVar12 = 0;
  local_60 = *(undefined4 *)(lVar11 + local_68 * 8);
  iVar13 = *(int *)(lVar11 + local_68 * 8);
  iVar15 = 0;
  bVar1 = *(byte *)(param_2 + 0x645d);
  local_5c = *(undefined4 *)(lVar11 + 4 + local_68 * 8);
  local_8c = *(int *)(lVar11 + 4 + local_68 * 8);
  local_98 = param_6;
  lVar11 = 0;
  local_94 = 0;
  local_58 = *(undefined4 *)(param_2 + 0x141c8 + local_68 * 4);
  local_90 = iVar13;
  local_88 = param_4;
  local_80 = param_3;
  local_70 = param_1;
  iVar14 = local_8c;
  do {
    uVar2 = *(ushort *)(&local_60 + lVar11);
    uVar7 = (uint)(short)uVar2;
    iVar16 = iVar17;
    iVar6 = local_94;
    if (uVar2 != 0x7fff) {
      uVar3 = *(ushort *)((longlong)&local_60 + lVar11 * 4 + 2);
      uVar9 = (uint)(short)uVar3;
      if ((uVar3 != 0x7fff) && ((iVar12 != 1 || (iVar13 != iVar14)))) {
        iVar15 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
        iVar13 = (int)(((ushort)~uVar2 >> 0xf) + 3 + uVar7) >> 3;
        iVar14 = (int)(((ushort)~uVar3 >> 0xf) + 3 + uVar9) >> 3;
        iVar16 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
        uVar8 = uVar7;
        if (iVar16 <= iVar15) {
          uVar8 = uVar9;
        }
        if (iVar10 <= (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) >> 3) {
          if (iVar16 <= iVar15) {
            uVar7 = uVar9;
          }
          iVar10 = (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) >> 3;
        }
        if ((iVar13 == 0) && (iVar14 == 0)) {
          if (!bVar4) {
            bVar5 = 1;
            goto LAB_14561bf33;
          }
        }
        else {
          bVar5 = 0;
LAB_14561bf33:
          bVar4 = (bool)(bVar4 | bVar5);
          iVar16 = (**(code **)(local_70 + 0xb4a48 + (ulonglong)local_98 * 0x30))
                             (local_78,*(undefined4 *)(param_2 + 0x2020),
                              (local_88 * iVar13 + iVar14) + local_80,local_88);
          iVar13 = local_90;
          iVar6 = iVar12;
          iVar14 = local_8c;
          iVar15 = iVar12;
          if (iVar16 < iVar17) goto LAB_14561bfa6;
        }
        iVar13 = local_90;
        iVar16 = iVar17;
        iVar6 = local_94;
        iVar14 = local_8c;
        iVar15 = local_94;
      }
    }
LAB_14561bfa6:
    local_94 = iVar6;
    iVar17 = iVar16;
    iVar12 = iVar12 + 1;
    lVar11 = lVar11 + 1;
    if ((longlong)((ulonglong)(param_6 < bVar1) + 2) <= lVar11) {
      *(int *)(param_2 + 0x6460 + local_68 * 4) = iVar15;
      *(int *)(param_2 + 0x6470 + local_68 * 4) = iVar10;
      *(int *)(param_2 + 0x6494 + local_68 * 4) = iVar17;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
    }
  } while( true );
}



// FUNCTION 14561c010 FUN_14561c010 body=397 status=ok
// SIG undefined FUN_14561c010(void)

void FUN_14561c010(longlong param_1,longlong *param_2,longlong param_3,int param_4,int param_5,
                  longlong param_6,longlong param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_3 + 0x38);
  param_4 = param_4 * 8;
  *param_2 = lVar2;
  iVar5 = *(int *)(param_3 + 0x10);
  *(int *)(param_2 + 1) = iVar5;
  param_2[2] = *(longlong *)(param_3 + 0x40);
  param_2[4] = *(longlong *)(param_3 + 0x48);
  uVar1 = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_2 + 5) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar1;
  param_5 = param_5 * 8;
  iVar6 = param_5 >> ((byte)*(undefined4 *)(param_1 + 8) & 0x1f);
  iVar4 = param_4 >> ((byte)*(undefined4 *)(param_1 + 0xc) & 0x1f);
  if (param_6 != 0) {
    iVar6 = (**(code **)(param_6 + 0x10))(iVar6,param_6);
    iVar4 = (**(code **)(param_6 + 0x18))(iVar4,param_6);
  }
  *(int *)(param_2 + 1) = iVar5;
  *param_2 = (longlong)iVar6 + lVar2 + (longlong)iVar4 * (longlong)iVar5;
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  iVar5 = param_5 >> ((byte)*(undefined4 *)(param_1 + 0x90) & 0x1f);
  iVar6 = param_4 >> ((byte)*(undefined4 *)(param_1 + 0x94) & 0x1f);
  if (param_7 != 0) {
    iVar5 = (**(code **)(param_7 + 0x10))(iVar5,param_7);
    iVar6 = (**(code **)(param_7 + 0x18))(iVar6,param_7);
  }
  param_2[2] = (longlong)iVar5 + lVar2 + (longlong)iVar6 * (longlong)(int)lVar3;
  *(int *)(param_2 + 3) = (int)lVar3;
  lVar3 = param_2[5];
  lVar2 = param_2[4];
  param_5 = param_5 >> ((byte)*(undefined4 *)(param_1 + 0x118) & 0x1f);
  param_4 = param_4 >> ((byte)*(undefined4 *)(param_1 + 0x11c) & 0x1f);
  if (param_7 != 0) {
    param_5 = (**(code **)(param_7 + 0x10))(param_5,param_7);
    param_4 = (**(code **)(param_7 + 0x18))(param_4,param_7);
  }
  param_2[4] = (longlong)param_5 + (longlong)(int)lVar3 * (longlong)param_4 + lVar2;
  *(int *)(param_2 + 5) = (int)lVar3;
  return;
}



// FUNCTION 14561c1a0 FUN_14561c1a0 body=95 status=ok
// SIG undefined FUN_14561c1a0(void)

int FUN_14561c1a0(longlong param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  sbyte sVar2;
  
  if (param_2 < 7) {
    sVar2 = 2;
    if (param_2 < 4) {
      sVar2 = 4;
    }
  }
  else {
    sVar2 = 0;
  }
  if ((*(int *)(param_1 + 0xcd3c0) != 0) && (*(int *)(param_1 + 0xcd3c4) == 3)) {
    sVar2 = 0;
  }
  sVar1 = FUN_145477220(param_3,param_4,8);
  return sVar1 * 0x14 >> sVar2;
}



// FUNCTION 14561c200 FUN_14561c200 body=649 status=ok
// SIG undefined FUN_14561c200(void)

void FUN_14561c200(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_res18;
  longlong local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x2b108);
  puVar6 = &DAT_149d52870;
  lVar7 = 10;
  lVar10 = param_1 + 0xcc268;
  lVar16 = 10;
  do {
    lVar9 = 10;
    do {
      FUN_14568a3d0(lVar10,puVar6,&DAT_149d52c28);
      puVar6 = puVar6 + 9;
      lVar10 = lVar10 + 0x28;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FUN_14568a3d0(param_1 + 0xcbeb0,lVar2 + 9,&DAT_149d52c28);
  lVar10 = param_1 + 0xcc0d8;
  lVar16 = 0;
  do {
    FUN_14568a3d0(lVar10 + -400,&DAT_149d52810 + lVar16,&DAT_149d52c28);
    FUN_14568a3d0(lVar10,lVar2 + 0x24 + lVar16,&DAT_149d52c28);
    lVar16 = lVar16 + 9;
    lVar10 = lVar10 + 0x28;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 4;
  lVar10 = 0;
  lVar16 = param_1 + 0xcd208;
  do {
    FUN_14568a3d0(lVar16,lVar2 + 0x76e + lVar10,&DAT_149d52c4c);
    lVar10 = lVar10 + 2;
    lVar16 = lVar16 + 0xc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar2 = lVar2 + 0x7a3;
  uVar8 = 1;
  local_res20 = 2;
  do {
    lVar7 = 0;
    uVar4 = uVar8 & 0xff;
    lVar10 = 0;
    lVar16 = 0;
    local_res18 = 2;
    lVar9 = 6;
    do {
      if (uVar4 == 1) {
        lVar14 = lVar10 + 10 + lVar2;
      }
      else if (uVar4 == 2) {
        lVar14 = lVar9 + lVar2;
      }
      else if (uVar4 == 3) {
        lVar14 = lVar16 + lVar2;
      }
      else {
        lVar14 = 0;
      }
      uVar15 = 0;
      lVar13 = 0;
      if (-1 < (int)uVar8) {
        piVar11 = (int *)(param_1 + 0xcd318 + (local_res20 + lVar7) * 0x10);
        do {
          iVar12 = 0;
          lVar3 = 0;
          iVar5 = uVar15 - (uVar15 == uVar8);
          if (-1 < iVar5) {
            do {
              if (lVar3 == lVar13) {
                uVar1 = *(ushort *)(&DAT_149df5520 + (ulonglong)*(byte *)(lVar14 + lVar3) * 2);
              }
              else {
                uVar1 = *(ushort *)(&DAT_149df5720 + (ulonglong)*(byte *)(lVar14 + lVar3) * -2);
              }
              lVar3 = lVar3 + 1;
              iVar12 = iVar12 + (uint)uVar1;
            } while (lVar3 <= iVar5);
          }
          *piVar11 = iVar12;
          uVar15 = uVar15 + 1;
          piVar11 = piVar11 + 1;
          lVar13 = lVar13 + 1;
        } while ((int)uVar15 <= (int)uVar8);
      }
      lVar10 = lVar10 + 1;
      lVar16 = lVar16 + 3;
      lVar9 = lVar9 + 2;
      lVar7 = lVar7 + 1;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
    local_res20 = local_res20 + 2;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  return;
}



// FUNCTION 14561c490 FUN_14561c490 body=140 status=ok
// SIG undefined FUN_14561c490(void)

ulonglong FUN_14561c490(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x2e56c) == 2) && (*(int *)(param_1 + 0x2a2e4) != 0)) {
    if (*(int *)(param_1 + 0xcee70) == 0) {
      iVar3 = *(int *)(param_1 + 0xb4298);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb5edc + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4);
    }
    iVar1 = iVar3 / 100;
    if (0xf < iVar3 / 100) {
      iVar1 = 0xf;
    }
    lVar2 = (longlong)
            *(int *)(&DAT_149de8be0 +
                    (longlong)
                    *(int *)(param_1 + 0xb5408 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) * 4) *
            (longlong)(int)param_2 >> 7;
    return lVar2 + (*(int *)(&DAT_149de8ba0 + (longlong)iVar1 * 4) * lVar2 >> 7);
  }
  return (ulonglong)param_2;
}



// FUNCTION 14561c520 FUN_14561c520 body=1167 status=ok
// SIG undefined FUN_14561c520(void)

void FUN_14561c520(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  double dVar13;
  
  iVar12 = 0;
  lVar5 = -0x8c;
  piVar6 = (int *)(param_2 + 0x94);
  do {
    iVar2 = FUN_145477360(param_1 + 0x11a8,iVar12,*(undefined4 *)(param_1 + 0x43c));
    iVar2 = iVar2 + *(int *)(param_1 + 0x440);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    if (*(int *)(param_1 + 0x45f0) == 8) {
      sVar1 = FUN_145477220(iVar2,0,8);
      dVar13 = (double)(int)sVar1 * 0.25;
    }
    else if (*(int *)(param_1 + 0x45f0) == 10) {
      sVar1 = FUN_145477220(iVar2,0,10);
      dVar13 = (double)(int)sVar1 * 0.0625;
    }
    else {
      sVar1 = FUN_145477220(iVar2,0,0xc);
      dVar13 = (double)(int)sVar1 * 0.015625;
    }
    dVar13 = pow(dVar13,1.25);
    iVar2 = 8;
    if (8 < (int)(dVar13 * 5.12)) {
      iVar2 = (int)(dVar13 * 5.12);
    }
    uVar11 = 0;
    piVar7 = piVar6;
    do {
      iVar9 = (uint)(byte)(&DAT_149de8b90)[uVar11] * iVar2;
      iVar8 = (int)(0x7fffffff / (longlong)iVar9);
      if (uVar11 < 3) {
        if (*(int *)(param_2 + 0x78) < iVar8) {
          iVar3 = *(int *)(param_2 + 0x78) * iVar9;
          iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar3 = 0x7fffffff;
        }
        piVar7[-1] = iVar3;
        if (*(int *)(param_2 + 0x7c) < iVar8) {
          iVar3 = *(int *)(param_2 + 0x7c) * iVar9;
          iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar3 = 0x7fffffff;
        }
        *piVar7 = iVar3;
        if (*(int *)(param_2 + 0x80) < iVar8) {
          iVar3 = *(int *)(param_2 + 0x80) * iVar9;
          iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar3 = 0x7fffffff;
        }
        piVar7[1] = iVar3;
        if (*(int *)(param_2 + 0x84) < iVar8) {
          iVar3 = *(int *)(param_2 + 0x84) * iVar9;
          iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar3 = 0x7fffffff;
        }
        piVar7[2] = iVar3;
        if (*(int *)(param_2 + 0x88) < iVar8) {
          iVar3 = *(int *)(param_2 + 0x88) * iVar9;
          iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar3 = 0x7fffffff;
        }
        piVar7[3] = iVar3;
        if (*(int *)(param_2 + 0x8c) < iVar8) {
          iVar9 = *(int *)(param_2 + 0x8c) * iVar9;
          iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2;
        }
        else {
          iVar9 = 0x7fffffff;
        }
        piVar7[4] = iVar9;
      }
      else {
        lVar10 = 2;
        piVar4 = piVar6;
        do {
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + -8);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[-1] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + -4);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          *piVar4 = iVar3;
          if (*(int *)((longlong)piVar4 + lVar5) < iVar8) {
            iVar3 = *(int *)((longlong)piVar4 + lVar5) * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[1] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 4);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[2] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 8);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[3] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0xc);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[4] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x10);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[5] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x14);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[6] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x18);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[7] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x1c);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[8] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x20);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[9] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x24);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[10] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x28);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[0xb] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x2c);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[0xc] = iVar3;
          iVar3 = *(int *)((longlong)piVar4 + lVar5 + 0x30);
          if (iVar3 < iVar8) {
            iVar3 = iVar3 * iVar9;
            iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
          }
          else {
            iVar3 = 0x7fffffff;
          }
          piVar4[0xd] = iVar3;
          piVar4 = piVar4 + 0xf;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar11 = uVar11 + 1;
      lVar5 = lVar5 + -0x78;
      piVar6 = piVar6 + 0x1e;
      piVar7 = piVar7 + 0x1e;
    } while ((longlong)uVar11 < 0xd);
    iVar12 = iVar12 + 1;
    piVar6 = piVar7;
  } while (iVar12 < 8);
  return;
}



// FUNCTION 14561c9b0 FUN_14561c9b0 body=399 status=ok
// SIG undefined FUN_14561c9b0(void)

void FUN_14561c9b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (*param_1 >> 2) + 8;
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  bVar3 = (byte)(iVar2 + -3);
  lVar4 = (longlong)(int)(((int)uVar5 >> (bVar3 & 0x1f) & 7U) + (iVar2 + -3) * 8);
  iVar6 = (*param_1 - *(int *)(&DAT_149de8f40 + lVar4 * 4)) * 0x400 >> (bVar3 + 2 & 0x1f);
  iVar2 = *(int *)(&DAT_149de8da0 + lVar4 * 4);
  iVar1 = *(int *)(&DAT_149de8da4 + lVar4 * 4);
  *param_2 = iVar6 * *(int *)(&DAT_149de8c04 + lVar4 * 4) +
             (0x400 - iVar6) * *(int *)(&DAT_149de8c00 + lVar4 * 4) >> 10;
  *param_3 = iVar6 * iVar1 + (0x400 - iVar6) * iVar2 >> 10;
  uVar5 = (param_1[1] >> 2) + 8;
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  bVar3 = (byte)(iVar2 + -3);
  lVar4 = (longlong)(int)(((int)uVar5 >> (bVar3 & 0x1f) & 7U) + (iVar2 + -3) * 8);
  iVar6 = (param_1[1] - *(int *)(&DAT_149de8f40 + lVar4 * 4)) * 0x400 >> (bVar3 + 2 & 0x1f);
  iVar2 = *(int *)(&DAT_149de8da0 + lVar4 * 4);
  iVar1 = *(int *)(&DAT_149de8da4 + lVar4 * 4);
  param_2[1] = iVar6 * *(int *)(&DAT_149de8c04 + lVar4 * 4) +
               (0x400 - iVar6) * *(int *)(&DAT_149de8c00 + lVar4 * 4) >> 10;
  param_3[1] = iVar6 * iVar1 + (0x400 - iVar6) * iVar2 >> 10;
  uVar5 = (param_1[2] >> 2) + 8;
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  bVar3 = (byte)(iVar2 + -3);
  lVar4 = (longlong)(int)(((int)uVar5 >> (bVar3 & 0x1f) & 7U) + (iVar2 + -3) * 8);
  iVar6 = (param_1[2] - *(int *)(&DAT_149de8f40 + lVar4 * 4)) * 0x400 >> (bVar3 + 2 & 0x1f);
  iVar2 = *(int *)(&DAT_149de8da4 + lVar4 * 4);
  iVar1 = *(int *)(&DAT_149de8da0 + lVar4 * 4);
  param_2[2] = iVar6 * *(int *)(&DAT_149de8c04 + lVar4 * 4) +
               (0x400 - iVar6) * *(int *)(&DAT_149de8c00 + lVar4 * 4) >> 10;
  param_3[2] = iVar6 * iVar2 + (0x400 - iVar6) * iVar1 >> 10;
  return;
}



// FUNCTION 14561cb40 FUN_14561cb40 body=154 status=ok
// SIG undefined FUN_14561cb40(void)

uint FUN_14561cb40(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x4610) + 0x1d8);
  uVar4 = uVar2;
  do {
    uVar3 = (uint)uVar4;
    if (piVar1[-0x70] == 0) break;
    if (piVar1[-0x38] == 0) {
      uVar3 = uVar3 + 1;
      break;
    }
    if (*piVar1 == 0) {
      uVar3 = uVar3 + 2;
      break;
    }
    if (piVar1[0x38] == 0) {
      uVar3 = uVar3 + 3;
      break;
    }
    if (piVar1[0x70] == 0) {
      uVar3 = uVar3 + 4;
      break;
    }
    if (piVar1[0xa8] == 0) {
      uVar3 = uVar3 + 5;
      break;
    }
    uVar2 = uVar2 + 6;
    piVar1 = piVar1 + 0x150;
    uVar3 = uVar3 + 6;
    uVar4 = (ulonglong)uVar3;
  } while ((longlong)uVar2 < 0xc);
  if (uVar3 == 0xc) {
    return 0xffffffff;
  }
  *(undefined4 *)((longlong)(int)uVar3 * 0xe0 + 0x18 + *(longlong *)(param_1 + 0x4610)) = 1;
  return uVar3;
}



// FUNCTION 14561cbe0 FUN_14561cbe0 body=27 status=ok
// SIG undefined FUN_14561cbe0(void)

undefined8 FUN_14561cbe0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x404) != 0) && (*(char *)(param_1 + 0x414) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14561cc00 FUN_14561cc00 body=7 status=ok
// SIG undefined FUN_14561cc00(void)

void FUN_14561cc00(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 14561cc10 FUN_14561cc10 body=126 status=ok
// SIG undefined FUN_14561cc10(void)

ulonglong FUN_14561cc10(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_14c807010 == 0;
  if (bVar2) {
    DAT_14c807010 = 1;
  }
  UNLOCK();
  if (bVar2) {
    FUN_14547e2d0();
    FUN_14518d370();
    FUN_14518e6a0();
    FUN_145477a10();
    FUN_14561b6c0();
    FUN_1456143a0();
    FUN_145663cf0();
    uVar1 = FUN_1455a6070();
    LOCK();
    DAT_14c807010 = DAT_14c807010 + 1;
    UNLOCK();
    return uVar1;
  }
  uVar1 = 2;
  LOCK();
  bVar2 = DAT_14c807010 == 2;
  if (bVar2) {
    DAT_14c807010 = 2;
  }
  else {
    uVar1 = (ulonglong)DAT_14c807010;
  }
  UNLOCK();
  while (!bVar2) {
    Sleep(0);
    uVar1 = 2;
    LOCK();
    bVar2 = DAT_14c807010 == 2;
    if (bVar2) {
      DAT_14c807010 = 2;
    }
    else {
      uVar1 = (ulonglong)DAT_14c807010;
    }
    UNLOCK();
  }
  return uVar1;
}



// FUNCTION 14561cc90 FUN_14561cc90 body=5843 status=ok
// SIG undefined FUN_14561cc90(void)

void FUN_14561cc90(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  char cVar25;
  uint uVar26;
  double dVar27;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined1 local_c0 [40];
  longlong local_98 [12];
  
  local_98[5] = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = param_1;
  local_e8 = (undefined4 *)FUN_14518ef10(0x20);
  puVar22 = (undefined4 *)0x0;
  local_e0 = puVar22;
  if (local_e8 != (undefined4 *)0x0) {
    local_e0 = local_e8 + 0xa7b8;
  }
  if (local_e0 != (undefined4 *)0x0) {
    memset(local_e8,0,0xcefb0);
    iVar9 = __intrinsic_setjmp(local_e0 + 0x18,auStack_118);
    puVar13 = local_e8;
    if (iVar9 == 0) {
      local_e0[0x16] = 1;
      *(code **)(local_e0 + 300) = FUN_145622210;
      *(code **)(local_e0 + 0x12e) = FUN_1456222c0;
      *(code **)(local_e0 + 0x130) = FUN_1456220f0;
      uVar10 = FUN_14518efb0(1,0x7fc);
      *(undefined8 *)(local_e0 + 0x48a) = uVar10;
      if (*(longlong *)(local_e0 + 0x48a) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cm->fc");
      }
      lVar18 = 4;
      uVar10 = FUN_14518efb0(4,0x7fc);
      *(undefined8 *)(local_e0 + 0x48c) = uVar10;
      if (*(longlong *)(local_e0 + 0x48c) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cm->frame_contexts");
      }
      puVar23 = local_d8;
      puVar13 = local_e8;
      local_e8[0x33b93] = 1;
      lVar17 = 3;
      local_e8[0x2d937] = 0;
      local_e8[0x334e7] = 0;
      local_e8[0x334e8] = 0;
      local_e8[0x334eb] = 0;
      local_e8[0x334ec] = 0;
      local_e8[0x334ee] = 0;
      *(undefined8 *)(local_e8 + 0xb93c) = param_2;
      lVar19 = *(longlong *)(local_e0 + 0x1184);
      local_e0[0xfe] = 0xffffffff;
      *(undefined8 *)(local_e0 + 0x6a) = 0xffffffffffffffff;
      *(undefined8 *)(local_e0 + 0x6c) = 0xffffffffffffffff;
      *(undefined8 *)(local_e0 + 0x6e) = 0xffffffffffffffff;
      *(undefined8 *)(local_e0 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(lVar19 + 0x18) = 0;
      *(undefined4 *)(lVar19 + 0xf8) = 0;
      *(undefined4 *)(lVar19 + 0x1d8) = 0;
      *(undefined4 *)(lVar19 + 0x2b8) = 0;
      *(undefined4 *)(lVar19 + 0x398) = 0;
      *(undefined4 *)(lVar19 + 0x478) = 0;
      *(undefined4 *)(lVar19 + 0x558) = 0;
      *(undefined4 *)(lVar19 + 0x638) = 0;
      *(undefined4 *)(lVar19 + 0x718) = 0;
      *(undefined4 *)(lVar19 + 0x7f8) = 0;
      *(undefined4 *)(lVar19 + 0x8d8) = 0;
      *(undefined4 *)(lVar19 + 0x9b8) = 0;
      *(undefined1 *)(local_e8 + 0x2d906) = 0;
      puVar21 = local_d8;
      puVar8 = (undefined8 *)(local_e8 + 0xb944);
      do {
        puVar15 = puVar8;
        puVar11 = puVar21;
        uVar10 = puVar11[1];
        *puVar15 = *puVar11;
        puVar15[1] = uVar10;
        uVar10 = puVar11[3];
        puVar15[2] = puVar11[2];
        puVar15[3] = uVar10;
        uVar10 = puVar11[5];
        puVar15[4] = puVar11[4];
        puVar15[5] = uVar10;
        uVar10 = puVar11[7];
        puVar15[6] = puVar11[6];
        puVar15[7] = uVar10;
        uVar10 = puVar11[9];
        puVar15[8] = puVar11[8];
        puVar15[9] = uVar10;
        uVar10 = puVar11[0xb];
        puVar15[10] = puVar11[10];
        puVar15[0xb] = uVar10;
        uVar10 = puVar11[0xd];
        puVar15[0xc] = puVar11[0xc];
        puVar15[0xd] = uVar10;
        uVar10 = puVar11[0xf];
        puVar15[0xe] = puVar11[0xe];
        puVar15[0xf] = uVar10;
        lVar17 = lVar17 + -1;
        puVar21 = puVar11 + 0x10;
        puVar8 = puVar15 + 0x10;
      } while (lVar17 != 0);
      uVar10 = puVar11[0x11];
      puVar15[0x10] = puVar11[0x10];
      puVar15[0x11] = uVar10;
      uVar1 = *(undefined4 *)((longlong)puVar11 + 0x94);
      uVar2 = *(undefined4 *)(puVar11 + 0x13);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x9c);
      *(undefined4 *)(puVar15 + 0x12) = *(undefined4 *)(puVar11 + 0x12);
      *(undefined4 *)((longlong)puVar15 + 0x94) = uVar1;
      *(undefined4 *)(puVar15 + 0x13) = uVar2;
      *(undefined4 *)((longlong)puVar15 + 0x9c) = uVar3;
      uVar10 = puVar11[0x15];
      puVar15[0x14] = puVar11[0x14];
      puVar15[0x15] = uVar10;
      puVar15[0x16] = puVar11[0x16];
      *(undefined8 *)(local_e8 + 0x2d152) = local_d8[3];
      local_e8[0xb933] = *(undefined4 *)local_d8;
      local_e8[0xb934] = *(undefined4 *)((longlong)local_d8 + 4);
      local_e8[0xa81a] = *(undefined4 *)(local_d8 + 0x32);
      local_e8[0xa810] = *(undefined4 *)((longlong)local_d8 + 0x194);
      local_e8[0xa811] = *(undefined4 *)(local_d8 + 0x33);
      iVar9 = *(int *)(local_d8 + 0x2e);
      local_e8[0x334ef] = iVar9;
      local_e8[0x33528] = (uint)(*(int *)(local_d8 + 0x2e) != 0xff);
      piVar12 = &DAT_149de9180;
      puVar16 = puVar22;
      do {
        cVar25 = (char)puVar16;
        if (iVar9 == *piVar12) break;
        puVar16 = (undefined4 *)(ulonglong)((int)puVar16 + 1);
        piVar12 = piVar12 + 0x10;
        cVar25 = -1;
      } while ((longlong)piVar12 < 0x149de9500);
      FUN_1425b0090();
      *(char *)(puVar13 + 0x33b94) = cVar25;
      if (-1 < cVar25) {
        *(double *)(puVar13 + 0x33b96) = (double)(&DAT_149de91a0)[(longlong)cVar25 * 8] * 1000.0;
      }
      puVar13[0xa812] = *(undefined4 *)(puVar23 + 1);
      puVar13[0xa813] = *(undefined4 *)((longlong)puVar23 + 0xc);
      FUN_145622f10(puVar13);
      puVar13[0x32da8] = *(undefined4 *)((longlong)puVar23 + 0x1a4);
      *(undefined4 **)(puVar13 + 0x9faa) = puVar13 + 0xac47;
      iVar9 = *(int *)((longlong)puVar23 + 0xcc);
      puVar13[0x2d93a] = iVar9;
      iVar14 = *(int *)(puVar23 + 0x1a);
      puVar13[0x2d93b] = iVar14;
      if ((1 < iVar14) || ((1 < iVar9 && (puVar13[0xb95b] != 1)))) {
        FUN_1456871f0(puVar13);
      }
      FUN_14561e4a0(puVar13,puVar23);
      *(undefined8 *)(puVar13 + 0x2d1a9) = 0;
      puVar13[0xbda9] = 0;
      puVar13[0xbdaa] = 1;
      puVar13[0xbdab] = 2;
      puVar13[0xbdac] = 3;
      puVar13[0xbdad] = 4;
      puVar13[0xbdae] = 5;
      puVar13[0xbdaf] = 6;
      puVar13[0xbdb0] = 7;
      puVar13[0xbda6] = 0;
      puVar13[0xbda7] = 1;
      puVar13[0xbda8] = 2;
      FUN_145661490(puVar13 + 0x334f0,puVar13[0xa812],puVar13[0xa813]);
      puVar13[0x33bea] = 0;
      puVar13 = (undefined4 *)FUN_145697660(local_c0,puVar23);
      uVar1 = puVar13[1];
      uVar2 = puVar13[2];
      uVar3 = puVar13[3];
      uVar4 = puVar13[4];
      uVar5 = puVar13[5];
      uVar6 = puVar13[6];
      uVar7 = puVar13[7];
      uVar10 = *(undefined8 *)(puVar13 + 8);
      *local_e8 = *puVar13;
      local_e8[1] = uVar1;
      local_e8[2] = uVar2;
      local_e8[3] = uVar3;
      local_e8[4] = uVar4;
      local_e8[5] = uVar5;
      local_e8[6] = uVar6;
      local_e8[7] = uVar7;
      *(undefined8 *)(local_e8 + 8) = uVar10;
      FUN_145613e00(local_e8 + 0xb944,*(undefined4 *)((longlong)local_d8 + 0x5c),local_e8 + 0x2d09e)
      ;
      FUN_14561ac90(local_e8);
      *(undefined8 *)(local_e0 + 0x1179) = 0;
      *(undefined8 *)(local_e8 + 0xbda0) = 0;
      FUN_145624e80(local_e8);
      uVar10 = FUN_14518efb0((longlong)(int)(local_e0[0x10a] * local_e0[0x10c]),1);
      *(undefined8 *)(local_e8 + 0x2d256) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d256) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->skin_map");
      }
      uVar10 = FUN_14568e990();
      *(undefined8 *)(local_e8 + 0x2d930) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d930) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->alt_ref_aq");
      }
      uVar10 = FUN_14518efb0((longlong)(int)(local_e0[0x10c] * local_e0[0x10a]),1);
      *(undefined8 *)(local_e8 + 0x334fa) = uVar10;
      if (*(longlong *)(local_e8 + 0x334fa) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->consec_zero_mv");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d088) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d088) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvcosts[0]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d08a) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d08a) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvcosts[1]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d08c) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d08c) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvcosts_hp[0]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d08e) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d08e) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvcosts_hp[1]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d090) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d090) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvsadcosts[0]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d092) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d092) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvsadcosts[1]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d094) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d094) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvsadcosts_hp[0]");
      }
      uVar10 = FUN_14518efb0(0x7fff,4);
      *(undefined8 *)(local_e8 + 0x2d096) = uVar10;
      if (*(longlong *)(local_e8 + 0x2d096) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->nmvsadcosts_hp[1]");
      }
      lVar17 = 0xb45d8;
      lVar19 = 0x19;
      do {
        uVar10 = FUN_14518efb0((longlong)(int)local_e0[0x108] << 5);
        *(undefined8 *)((longlong)local_e8 + lVar17) = uVar10;
        if (*(longlong *)((longlong)local_e8 + lVar17) == 0) {
          FUN_144d82810(local_e0,2,"Failed to allocate cpi->mbgraph_stats[i].mb_stats");
        }
        puVar13 = local_e8;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      local_e8[0xbdb3] = 0;
      local_e8[0x2d932] = 0;
      memset(local_e8 + 0x3352a,0,0x830);
      puVar16 = local_e8;
      iVar9 = 8;
      *(undefined8 *)(puVar13 + 0x33736) = 0;
      *(undefined8 *)(puVar13 + 0x33738) = 0;
      *(undefined8 *)(puVar13 + 0x3373a) = 0;
      *(undefined8 *)(puVar13 + 0x3373c) = 0;
      *(undefined8 *)(puVar13 + 0x3373e) = 0;
      *(undefined8 *)(puVar13 + 0x33740) = 0;
      *(undefined8 *)(puVar13 + 0x33742) = 0;
      *(undefined8 *)(puVar13 + 0x33744) = 0;
      puVar13[0x33743] = 0x7fffffff;
      lVar19 = 4;
      *(undefined8 *)(local_e8 + 0x33b96) = 0x41dfffffffc00000;
      *(undefined2 *)(local_e8 + 0x33b94) = 0xff;
      local_e8[0x33b95] = 0x7fffffff;
      *(undefined8 *)(local_e8 + 0x2d09c) = 0x7fffffffffffffff;
      local_e8[0x4944] = 600;
      local_e8[0x4945] = 300;
      local_e8[0x4946] = 300;
      local_e8[0x4947] = 300;
      *(longlong *)(local_e8 + 0x493a) = *(longlong *)(local_e8 + 0x2d088) + 0xfffc;
      *(longlong *)(local_e8 + 0x493c) = *(longlong *)(local_e8 + 0x2d08a) + 0xfffc;
      *(longlong *)(local_e8 + 0x4948) = *(longlong *)(local_e8 + 0x2d090) + 0xfffc;
      plVar20 = (longlong *)(local_e8 + 0x4948);
      *(longlong *)(local_e8 + 0x494a) = *(longlong *)(local_e8 + 0x2d092) + 0xfffc;
      *(undefined4 *)*plVar20 = 0;
      **(undefined4 **)(local_e8 + 0x494a) = 0;
      do {
        dVar27 = log((double)iVar9);
        puVar13 = local_e8;
        iVar9 = iVar9 + 8;
        dVar27 = dVar27 / 0.6931471824645996 + 0.6;
        iVar14 = (int)((dVar27 + dVar27) * 256.0);
        *(int *)(lVar19 + *plVar20) = iVar14;
        *(int *)(lVar19 + *(longlong *)(puVar16 + 0x494a)) = iVar14;
        *(int *)(*plVar20 - lVar19) = iVar14;
        piVar12 = (int *)(*(longlong *)(puVar16 + 0x494a) - lVar19);
        lVar19 = lVar19 + 4;
        *piVar12 = iVar14;
      } while (iVar9 < 0x1fff9);
      iVar9 = 8;
      *(longlong *)(local_e8 + 0x493e) = *(longlong *)(local_e8 + 0x2d08c) + 0xfffc;
      *(longlong *)(local_e8 + 0x4940) = *(longlong *)(local_e8 + 0x2d08e) + 0xfffc;
      *(longlong *)(local_e8 + 0x494c) = *(longlong *)(local_e8 + 0x2d094) + 0xfffc;
      plVar20 = (longlong *)(local_e8 + 0x494c);
      *(longlong *)(local_e8 + 0x494e) = *(longlong *)(local_e8 + 0x2d096) + 0xfffc;
      *(undefined4 *)*plVar20 = 0;
      **(undefined4 **)(local_e8 + 0x494e) = 0;
      do {
        dVar27 = log((double)iVar9);
        iVar9 = iVar9 + 8;
        dVar27 = dVar27 / 0.6931471824645996 + 0.6;
        iVar14 = (int)((dVar27 + dVar27) * 256.0);
        *(int *)(lVar18 + *plVar20) = iVar14;
        *(int *)(lVar18 + *(longlong *)(puVar13 + 0x494e)) = iVar14;
        *(int *)(*plVar20 - lVar18) = iVar14;
        piVar12 = (int *)(*(longlong *)(puVar13 + 0x494e) - lVar18);
        lVar18 = lVar18 + 4;
        *piVar12 = iVar14;
      } while (iVar9 < 0x1fff9);
      local_e8[0x2d251] = 1;
      iVar9 = FUN_14568e9e0(local_e8 + 0x33bca);
      if (iVar9 != 0) {
        FUN_144d82810(local_e0,iVar9,"vp9_extrc_init() failed");
      }
      puVar23 = local_d8;
      if (*(int *)((longlong)local_d8 + 0x5c) == 1) {
        FUN_14567b530(local_e8);
      }
      else if (*(int *)((longlong)local_d8 + 0x5c) == 2) {
        uVar24 = (ulonglong)local_d8[0x30] / 0xd0;
        local_c8 = uVar24;
        if (((int)local_e8[0x2d93a] < 2) && ((int)local_e8[0x2d93b] < 2)) {
          iVar9 = (int)uVar24 + -1;
          *(undefined8 *)(local_e8 + 0x2d3a2) = local_d8[0x2f];
          *(undefined8 *)(local_e8 + 0x2d3a0) = *(undefined8 *)(local_e8 + 0x2d3a2);
          *(longlong *)(local_e8 + 0x2d3a4) =
               (longlong)iVar9 * 0xd0 + *(longlong *)(local_e8 + 0x2d3a0);
          *(undefined8 *)(local_e8 + 0x2d3a6) = local_d8[0x2f];
          local_e8[0x2d3a8] = iVar9;
          FUN_14567d140(local_e8);
        }
        else {
          local_98[4] = 0;
          local_98[0] = 0;
          local_98[1] = 0;
          iVar9 = *(int *)((longlong)local_d8 + 0xcc);
          puVar21 = (undefined8 *)local_d8[0x2f];
          local_98[2] = 0;
          local_98[3] = 0;
          if (0 < iVar9) {
            do {
              puVar13 = local_e8;
              lVar18 = (longlong)(((int)puVar22 - iVar9) + (int)uVar24);
              iVar14 = *(int *)(puVar21 + lVar18 * 0x1a + 0x19);
              lVar19 = (longlong)iVar14;
              dVar27 = (double)puVar21[lVar18 * 0x1a + 0x18];
              if ((-1 < iVar14) && (iVar14 < iVar9)) {
                local_d0 = lVar19;
                FUN_14518f040(*(undefined8 *)(local_e8 + lVar19 * 0x6ae + 0x2e410));
                lVar17 = (longlong)((int)dVar27 + 1) * 0xd0;
                *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2e412) = lVar17;
                lVar18 = FUN_14518ef70(lVar17);
                *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2e410) = lVar18;
                if (lVar18 == 0) {
                  FUN_144d82810(local_e0,2,"Failed to allocate lc->rc_twopass_stats_in.buf");
                }
                lVar18 = *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2e410);
                *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2deac) = lVar18;
                *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2deaa) = lVar18;
                *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2deb0) = lVar18;
                puVar13[lVar19 * 0x6ae + 0x2deb2] = (int)dVar27;
                *(longlong *)(puVar13 + lVar19 * 0x6ae + 0x2deae) = lVar18 + -0xd0 + lVar17;
                local_98[local_d0] = lVar18;
                uVar24 = local_c8;
              }
              iVar9 = *(int *)((longlong)puVar23 + 0xcc);
              uVar26 = (int)puVar22 + 1;
              puVar22 = (undefined4 *)(ulonglong)uVar26;
            } while ((int)uVar26 < iVar9);
          }
          lVar18 = (longlong)(int)uVar24;
          if (0 < (int)uVar24) {
            do {
              iVar9 = *(int *)(puVar21 + 0x19);
              if (((-1 < iVar9) && (iVar9 < *(int *)((longlong)local_d8 + 0xcc))) &&
                 (puVar23 = (undefined8 *)local_98[iVar9], puVar23 != (undefined8 *)0x0)) {
                uVar10 = puVar21[1];
                *puVar23 = *puVar21;
                puVar23[1] = uVar10;
                local_98[iVar9] = (longlong)(puVar23 + 0x1a);
                uVar10 = puVar21[3];
                puVar23[2] = puVar21[2];
                puVar23[3] = uVar10;
                uVar10 = puVar21[5];
                puVar23[4] = puVar21[4];
                puVar23[5] = uVar10;
                uVar10 = puVar21[7];
                puVar23[6] = puVar21[6];
                puVar23[7] = uVar10;
                uVar10 = puVar21[9];
                puVar23[8] = puVar21[8];
                puVar23[9] = uVar10;
                uVar10 = puVar21[0xb];
                puVar23[10] = puVar21[10];
                puVar23[0xb] = uVar10;
                uVar10 = puVar21[0xd];
                puVar23[0xc] = puVar21[0xc];
                puVar23[0xd] = uVar10;
                uVar10 = puVar21[0xf];
                puVar23[0xe] = puVar21[0xe];
                puVar23[0xf] = uVar10;
                uVar10 = puVar21[0x11];
                puVar23[0x10] = puVar21[0x10];
                puVar23[0x11] = uVar10;
                uVar10 = puVar21[0x13];
                puVar23[0x12] = puVar21[0x12];
                puVar23[0x13] = uVar10;
                uVar10 = puVar21[0x15];
                puVar23[0x14] = puVar21[0x14];
                puVar23[0x15] = uVar10;
                uVar10 = puVar21[0x17];
                puVar23[0x16] = puVar21[0x16];
                puVar23[0x17] = uVar10;
                uVar10 = puVar21[0x19];
                puVar23[0x18] = puVar21[0x18];
                puVar23[0x19] = uVar10;
              }
              puVar21 = puVar21 + 0x1a;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          FUN_145687fc0(local_e8);
        }
      }
      local_e8[0xbdbf] = 0;
      local_e8[0xbdbe] = 0;
      *(undefined8 *)(local_e8 + 0xbdbc) = 0;
      FUN_14568fb30(local_e8,*(undefined4 *)(local_d8 + 9));
      FUN_14568ffe0(local_e8,*(undefined4 *)(local_d8 + 9));
      uVar10 = FUN_14518efb0((longlong)(((local_e0[0x10a] + 1) / 2) * ((local_e0[0x10c] + 1) / 2)),8
                            );
      *(undefined8 *)(local_e8 + 0xbdc0) = uVar10;
      if (*(longlong *)(local_e8 + 0xbdc0) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->mi_ssim_rdmult_scaling_factors");
      }
      lVar19 = 0x32;
      local_e8[0xbd70] = 0;
      lVar18 = 0;
      do {
        *(undefined8 *)((longlong)local_e8 + lVar18 + 0x2e850) = 0;
        lVar19 = lVar19 + -1;
        lVar18 = lVar18 + 0x28;
      } while (lVar19 != 0);
      uVar10 = FUN_14518efb0((longlong)(int)local_e0[0x108],0xc);
      *(undefined8 *)(local_e8 + 0x32e9c) = uVar10;
      if (*(longlong *)(local_e8 + 0x32e9c) == 0) {
        FUN_144d82810(local_e0,2,"Failed to allocate cpi->source_diff_var");
      }
      local_e8[0x32e9e] = 0;
      local_e8[0x32e9f] = 0;
      *(undefined8 *)(local_e8 + 0x2d2f2) = DAT_14c7fbc58;
      *(undefined8 *)(local_e8 + 0x2d2f4) = DAT_14c7fbc60;
      *(undefined8 *)(local_e8 + 0x2d2f6) = DAT_14c7fbdb8;
      *(undefined8 *)(local_e8 + 0x2d2f8) = DAT_14c7fbd48;
      *(undefined8 *)(local_e8 + 0x2d2fa) = DAT_14c7fbce0;
      *(undefined1 **)(local_e8 + 0x2d2fc) = &LAB_1426a1570;
      *(undefined1 **)(local_e8 + 0x2d2e6) = &LAB_142697b00;
      *(undefined1 **)(local_e8 + 0x2d2e8) = &LAB_142697c50;
      *(undefined8 *)(local_e8 + 0x2d2ea) = DAT_14c7fbda8;
      *(undefined8 *)(local_e8 + 0x2d2ec) = DAT_14c7fbd38;
      *(undefined8 *)(local_e8 + 0x2d2ee) = DAT_14c7fbcd0;
      *(undefined1 **)(local_e8 + 0x2d2f0) = &LAB_1426a1de0;
      *(undefined8 *)(local_e8 + 0x2d316) = DAT_14c7fbc90;
      *(undefined8 *)(local_e8 + 0x2d318) = DAT_14c7fbc98;
      *(undefined8 *)(local_e8 + 0x2d31a) = DAT_14c7fbdd0;
      *(undefined8 *)(local_e8 + 0x2d31c) = DAT_14c7fbd70;
      *(undefined8 *)(local_e8 + 0x2d31e) = DAT_14c7fbd08;
      *(undefined1 **)(local_e8 + 0x2d320) = &LAB_14269c370;
      *(undefined8 *)(local_e8 + 0x2d30a) = DAT_14c7fbc80;
      *(undefined8 *)(local_e8 + 0x2d30c) = DAT_14c7fbc88;
      *(undefined8 *)(local_e8 + 0x2d30e) = DAT_14c7fbdc8;
      *(undefined8 *)(local_e8 + 0x2d310) = DAT_14c7fbd58;
      *(undefined8 *)(local_e8 + 0x2d312) = DAT_14c7fbcf0;
      *(undefined1 **)(local_e8 + 0x2d314) = &LAB_14269e3d0;
      *(undefined8 *)(local_e8 + 0x2d2fe) = DAT_14c7fbc68;
      *(undefined8 *)(local_e8 + 0x2d300) = DAT_14c7fbc70;
      *(undefined8 *)(local_e8 + 0x2d302) = DAT_14c7fbdc0;
      *(undefined8 *)(local_e8 + 0x2d304) = DAT_14c7fbd50;
      *(undefined8 *)(local_e8 + 0x2d306) = DAT_14c7fbce8;
      *(undefined8 *)(local_e8 + 0x2d308) = DAT_14c7fbc78;
      *(undefined8 *)(local_e8 + 0x2d322) = DAT_14c7fbca0;
      *(undefined8 *)(local_e8 + 0x2d324) = DAT_14c7fbca8;
      *(undefined8 *)(local_e8 + 0x2d326) = DAT_14c7fbdd8;
      *(undefined8 *)(local_e8 + 0x2d328) = DAT_14c7fbd78;
      *(undefined8 *)(local_e8 + 0x2d32a) = DAT_14c7fbd10;
      *(undefined8 *)(local_e8 + 0x2d32c) = DAT_14c7fbcb0;
      *(code **)(local_e8 + 0x2d2da) = FUN_142697b70;
      *(undefined1 **)(local_e8 + 0x2d2dc) = &LAB_142697ce0;
      *(undefined8 *)(local_e8 + 0x2d2de) = DAT_14c7fbda0;
      *(undefined8 *)(local_e8 + 0x2d2e0) = DAT_14c7fbd30;
      *(undefined8 *)(local_e8 + 0x2d2e2) = DAT_14c7fbcc8;
      *(undefined1 **)(local_e8 + 0x2d2e4) = &LAB_1426a26a0;
      *(undefined1 **)(local_e8 + 0x2d2ce) = &LAB_142697be0;
      *(undefined1 **)(local_e8 + 0x2d2d0) = &LAB_142697d70;
      *(undefined8 *)(local_e8 + 0x2d2d2) = DAT_14c7fbdb0;
      *(undefined8 *)(local_e8 + 0x2d2d4) = DAT_14c7fbd40;
      *(undefined8 *)(local_e8 + 0x2d2d6) = DAT_14c7fbcd8;
      *(undefined1 **)(local_e8 + 0x2d2d8) = &LAB_1426a2b20;
      *(undefined1 **)(local_e8 + 0x2d2c2) = &LAB_142697e00;
      *(undefined1 **)(local_e8 + 0x2d2c4) = &LAB_142697f50;
      *(undefined1 **)(local_e8 + 0x2d2c6) = &LAB_145424dc0;
      *(undefined8 *)(local_e8 + 0x2d2c8) = DAT_14c7fbd80;
      *(undefined8 *)(local_e8 + 0x2d2ca) = DAT_14c7fbd18;
      *(undefined1 **)(local_e8 + 0x2d2cc) = &LAB_1426a2d80;
      *(undefined1 **)(local_e8 + 0x2d2b6) = &LAB_142697e70;
      *(undefined1 **)(local_e8 + 0x2d2b8) = &LAB_142697fd0;
      *(code **)(local_e8 + 0x2d2ba) = FUN_145424fa0;
      *(undefined8 *)(local_e8 + 0x2d2bc) = DAT_14c7fbd90;
      *(undefined8 *)(local_e8 + 0x2d2be) = DAT_14c7fbd28;
      *(undefined1 **)(local_e8 + 0x2d2c0) = &LAB_1426a30d0;
      *(undefined1 **)(local_e8 + 0x2d2aa) = &LAB_142697ee0;
      *(undefined1 **)(local_e8 + 0x2d2ac) = &LAB_142698050;
      *(code **)(local_e8 + 0x2d2ae) = FUN_145424e80;
      *(undefined8 *)(local_e8 + 0x2d2b0) = DAT_14c7fbd88;
      *(undefined8 *)(local_e8 + 0x2d2b2) = DAT_14c7fbd20;
      *(undefined1 **)(local_e8 + 0x2d2b4) = &LAB_1426a32a0;
      *(undefined1 **)(local_e8 + 0x2d29e) = &LAB_1426980d0;
      *(undefined1 **)(local_e8 + 0x2d2a0) = &LAB_1426981d0;
      *(undefined1 **)(local_e8 + 0x2d2a2) = &LAB_1454244c0;
      *(undefined8 *)(local_e8 + 0x2d2a4) = DAT_14c7fbd68;
      *(undefined8 *)(local_e8 + 0x2d2a6) = DAT_14c7fbd00;
      *(undefined1 **)(local_e8 + 0x2d2a8) = &LAB_1426a33a0;
      *(undefined1 **)(local_e8 + 0x2d292) = &LAB_142698150;
      *(undefined1 **)(local_e8 + 0x2d294) = &LAB_142698260;
      *(code **)(local_e8 + 0x2d296) = FUN_1454243e0;
      *(undefined8 *)(local_e8 + 0x2d298) = DAT_14c7fbd60;
      *(undefined8 *)(local_e8 + 0x2d29a) = DAT_14c7fbcf8;
      *(undefined1 **)(local_e8 + 0x2d29c) = &LAB_1426a35a0;
      FUN_145624180(local_e8);
      FUN_1455cb040(local_e8);
      FUN_145474110(local_e0);
      local_f0 = local_e0[0x62];
      local_f8 = local_e0[0x5b];
      FUN_1454720f0(local_e8 + 0x2d268,local_e0[0x5a],local_e0[0x5b],local_e0[0x5a]);
      *(undefined4 **)(local_e8 + 0x8498) = local_e8 + 0x2d268;
      local_e0[0x16] = 0;
    }
    else {
      local_e0[0x16] = 0;
      if (local_e8 != (undefined4 *)0x0) {
        if (local_e8[0xbd70] != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_e8 + 0xbd66));
          FUN_14518f040(*(undefined8 *)(puVar13 + 0xbd72));
        }
        puVar22 = puVar13 + 0xba12;
        lVar18 = 0x32;
        do {
          FUN_14518f040(*(undefined8 *)(puVar22 + 2));
          *(undefined1 *)puVar22 = 0;
          puVar22 = puVar22 + 10;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        FUN_145476140(puVar13 + 0x33510);
        FUN_1456826a0(puVar13);
        FUN_145665660(puVar13);
        FUN_145612350(puVar13);
        FUN_14568e9d0(*(undefined8 *)(puVar13 + 0x2d930));
        FUN_145622330(puVar13);
        puVar23 = (undefined8 *)(puVar13 + 0x2d176);
        lVar18 = 0x19;
        do {
          FUN_14518f040(*puVar23);
          puVar23 = puVar23 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        FUN_14568eb20(puVar13 + 0x33bca);
        FUN_145192160(puVar13 + 0xa7b8);
        FUN_145192550(*(undefined8 *)(puVar13 + 0xb93c));
        FUN_14518f040(puVar13);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_98[5] ^ (ulonglong)auStack_118);
}



// FUNCTION 14561e390 FUN_14561e390 body=259 status=ok
// SIG undefined FUN_14561e390(void)

void FUN_14561e390(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2f5c0) != 0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f598));
      FUN_14518f040(*(undefined8 *)(param_1 + 0x2f5c8));
    }
    puVar1 = (undefined1 *)(param_1 + 0x2e848);
    lVar3 = 0x32;
    do {
      FUN_14518f040(*(undefined8 *)(puVar1 + 8));
      *puVar1 = 0;
      puVar1 = puVar1 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_145476140(param_1 + 0xcd440);
    FUN_1456826a0(param_1);
    FUN_145665660(param_1);
    FUN_145612350(param_1);
    FUN_14568e9d0(*(undefined8 *)(param_1 + 0xb64c0));
    FUN_145622330(param_1);
    puVar2 = (undefined8 *)(param_1 + 0xb45d8);
    lVar3 = 0x19;
    do {
      FUN_14518f040(*puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_14568eb20(param_1 + 0xcef28);
    FUN_145192160(param_1 + 0x29ee0);
    FUN_145192550(*(undefined8 *)(param_1 + 0x2e4f0));
    FUN_14518f040(param_1);
  }
  return;
}



// FUNCTION 14561e4a0 FUN_14561e4a0 body=1814 status=ok
// SIG undefined FUN_14561e4a0(void)

void FUN_14561e4a0(longlong param_1,int *param_2)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  undefined4 uVar19;
  
  iVar3 = *(int *)(param_1 + 0x2e518);
  lVar1 = param_1 + 0x29ee0;
  iVar4 = *(int *)(param_1 + 0x2e51c);
  FUN_1455cb040();
  if (*(int *)(param_1 + 0x2e4cc) != *param_2) {
    *(int *)(param_1 + 0x2e4cc) = *param_2;
  }
  *(int *)(param_1 + 0x2e4d0) = param_2[1];
  cVar18 = '\0';
  *(int *)(param_1 + 0x2a040) = param_2[0x65];
  bVar8 = 0;
  *(int *)(param_1 + 0x2a044) = param_2[0x66];
  iVar10 = param_2[0x5c];
  *(int *)(param_1 + 0xcd3bc) = iVar10;
  *(uint *)(param_1 + 0xcd4a0) = (uint)(param_2[0x5c] != 0xff);
  piVar11 = &DAT_149de9180;
  do {
    if (iVar10 == *piVar11) goto LAB_14561e564;
    cVar18 = cVar18 + '\x01';
    piVar11 = piVar11 + 0x10;
  } while ((longlong)piVar11 < 0x149de9500);
  cVar18 = -1;
LAB_14561e564:
  FUN_1425b0090();
  *(char *)(param_1 + 0xcee50) = cVar18;
  if (-1 < cVar18) {
    *(double *)(param_1 + 0xcee58) = (double)(&DAT_149de91a0)[(longlong)cVar18 * 8] * 1000.0;
  }
  lVar16 = 3;
  piVar11 = param_2;
  puVar9 = (undefined8 *)(param_1 + 0x2e510);
  do {
    puVar14 = puVar9;
    piVar12 = piVar11;
    uVar7 = *(undefined8 *)(piVar12 + 2);
    *puVar14 = *(undefined8 *)piVar12;
    puVar14[1] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 6);
    puVar14[2] = *(undefined8 *)(piVar12 + 4);
    puVar14[3] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 10);
    puVar14[4] = *(undefined8 *)(piVar12 + 8);
    puVar14[5] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 0xe);
    puVar14[6] = *(undefined8 *)(piVar12 + 0xc);
    puVar14[7] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 0x12);
    puVar14[8] = *(undefined8 *)(piVar12 + 0x10);
    puVar14[9] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 0x16);
    puVar14[10] = *(undefined8 *)(piVar12 + 0x14);
    puVar14[0xb] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 0x1a);
    puVar14[0xc] = *(undefined8 *)(piVar12 + 0x18);
    puVar14[0xd] = uVar7;
    uVar7 = *(undefined8 *)(piVar12 + 0x1e);
    puVar14[0xe] = *(undefined8 *)(piVar12 + 0x1c);
    puVar14[0xf] = uVar7;
    lVar16 = lVar16 + -1;
    piVar11 = piVar12 + 0x20;
    puVar9 = puVar14 + 0x10;
  } while (lVar16 != 0);
  uVar7 = *(undefined8 *)(piVar12 + 0x22);
  puVar14[0x10] = *(undefined8 *)(piVar12 + 0x20);
  puVar14[0x11] = uVar7;
  iVar10 = piVar12[0x25];
  iVar5 = piVar12[0x26];
  iVar6 = piVar12[0x27];
  *(int *)(puVar14 + 0x12) = piVar12[0x24];
  *(int *)((longlong)puVar14 + 0x94) = iVar10;
  *(int *)(puVar14 + 0x13) = iVar5;
  *(int *)((longlong)puVar14 + 0x9c) = iVar6;
  iVar10 = piVar12[0x29];
  iVar5 = piVar12[0x2a];
  iVar6 = piVar12[0x2b];
  *(int *)(puVar14 + 0x14) = piVar12[0x28];
  *(int *)((longlong)puVar14 + 0xa4) = iVar10;
  *(int *)(puVar14 + 0x15) = iVar5;
  *(int *)((longlong)puVar14 + 0xac) = iVar6;
  puVar14[0x16] = *(undefined8 *)(piVar12 + 0x2c);
  *(undefined4 *)(param_1 + 0x12420) = *(undefined4 *)(param_1 + 0x2e4d0);
  if ((param_2[0x17] != 0) || (uVar13 = 8, param_2[0x1b] != 3)) {
    uVar13 = 10;
  }
  *(undefined4 *)(param_1 + 0xb42e4) = uVar13;
  *(undefined8 *)(param_1 + 0x2f6c4) = 1;
  *(undefined4 *)(param_1 + 0x2b040) = 1;
  *(undefined4 *)(param_1 + 0x2a2fc) = 0;
  FUN_14567a370(param_1 + 0x2b088,param_1);
  *(undefined4 *)(param_1 + 0x2a2f8) = 0;
  *(longlong *)(param_1 + 0x12508) = param_1 + 0x124e8;
  *(longlong *)(param_1 + 0x12540) = param_1 + 0x12520;
  uVar13 = *(undefined4 *)(param_1 + 0x2e654);
  *(undefined4 *)(param_1 + 0xb4960) = uVar13;
  *(undefined4 *)(param_1 + 0xb4964) = uVar13;
  *(undefined4 *)(param_1 + 0xb4968) = uVar13;
  *(undefined4 *)(param_1 + 0xb496c) = uVar13;
  *(undefined4 *)(param_1 + 0xb4970) = uVar13;
  *(undefined4 *)(param_1 + 0xb4974) = uVar13;
  *(undefined4 *)(param_1 + 0xb4978) = uVar13;
  *(undefined4 *)(param_1 + 0xb497c) = uVar13;
  *(undefined4 *)(param_1 + 0xb4948) = uVar13;
  lVar16 = *(longlong *)(param_1 + 0x2e548);
  *(longlong *)(param_1 + 0xb4398) = (lVar16 * *(longlong *)(param_1 + 0x2e588)) / 1000;
  uVar15 = (uint)(lVar16 >> 0x3f);
  if (*(longlong *)(param_1 + 0x2e590) == 0) {
    lVar17 = (longlong)((ulonglong)(uVar15 & 7) + lVar16) >> 3;
  }
  else {
    lVar17 = (*(longlong *)(param_1 + 0x2e590) * lVar16) / 1000;
  }
  *(longlong *)(param_1 + 0xb43a0) = lVar17;
  if (*(longlong *)(param_1 + 0x2e598) == 0) {
    lVar16 = (longlong)((ulonglong)(uVar15 & 7) + lVar16) >> 3;
  }
  else {
    lVar16 = (*(longlong *)(param_1 + 0x2e598) * lVar16) / 1000;
  }
  *(longlong *)(param_1 + 0xb43a8) = lVar16;
  lVar17 = *(longlong *)(param_1 + 0xb4340);
  if (lVar16 <= *(longlong *)(param_1 + 0xb4340)) {
    lVar17 = lVar16;
  }
  *(longlong *)(param_1 + 0xb4340) = lVar17;
  lVar17 = *(longlong *)(param_1 + 0xb4338);
  if (lVar16 <= *(longlong *)(param_1 + 0xb4338)) {
    lVar17 = lVar16;
  }
  *(longlong *)(param_1 + 0xb4338) = lVar17;
  dVar2 = *(double *)(param_1 + 0xb4548);
  uVar13 = SUB84(dVar2,0);
  uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 < 0.1) {
    uVar13 = 0;
    uVar19 = 0x403e0000;
  }
  *(ulonglong *)(param_1 + 0xb4548) = CONCAT44(uVar19,uVar13);
  FUN_145617840(param_1);
  *(undefined4 *)(param_1 + 0xb4390) = *(undefined4 *)(param_1 + 0x2e5a8);
  *(undefined4 *)(param_1 + 0xb4394) = *(undefined4 *)(param_1 + 0x2e5ac);
  *(undefined1 *)(param_1 + 0x2a3fc) = *(undefined1 *)(param_1 + 0xb4888);
  if ((*(int *)(param_1 + 0x2e6ac) < 1) || (*(int *)(param_1 + 0x2e6b0) < 1)) {
    *(undefined4 *)(param_1 + 0x2a050) = *(undefined4 *)(param_1 + 0x2e518);
    uVar13 = *(undefined4 *)(param_1 + 0x2e51c);
  }
  else {
    *(int *)(param_1 + 0x2a050) = *(int *)(param_1 + 0x2e6ac);
    uVar13 = *(undefined4 *)(param_1 + 0x2e6b0);
  }
  *(undefined4 *)(param_1 + 0x2a054) = uVar13;
  if ((iVar3 != *(int *)(param_1 + 0x2e518)) || (iVar4 != *(int *)(param_1 + 0x2e51c))) {
    *(int *)(param_1 + 0x2a048) = *(int *)(param_1 + 0x2e518);
    *(undefined4 *)(param_1 + 0x2a04c) = *(undefined4 *)(param_1 + 0x2e51c);
    *(undefined4 *)(param_1 + 0xcd3a0) = 1;
  }
  if (*(int *)(param_1 + 0xb64d0) != 0) {
    FUN_145192630(lVar1,*(undefined4 *)(param_1 + 0x2a048),*(undefined4 *)(param_1 + 0x2a04c));
    iVar10 = (*(int *)(param_1 + 0x2a308) + 8) * *(int *)(param_1 + 0x2a314);
    if (*(int *)(param_1 + 0x2a36c) < iVar10) {
      FUN_1451924a0(lVar1);
      FUN_14567af20(param_1 + 0xc030);
      FUN_14518f040(*(undefined8 *)(param_1 + 0x27ed0));
      FUN_145622f10(param_1);
      FUN_145624e80(param_1);
      *(undefined8 *)(param_1 + 0xb64d0) = 0;
      *(undefined4 *)(param_1 + 0xcd3a0) = 0;
    }
    else if ((*(int *)(param_1 + 0x2a36c) == iVar10) &&
            (((iVar3 < *(int *)(param_1 + 0x2e518) || (iVar4 < *(int *)(param_1 + 0x2e51c))) &&
             (iVar10 = FUN_1451921b0(lVar1), iVar10 != 0)))) {
      FUN_144d82810(lVar1,2,"Failed to allocate loop filter data");
    }
  }
  if (((*(int *)(param_1 + 0x2e4c4) == 0) || (iVar3 != *(int *)(param_1 + 0x2e518))) ||
     (iVar4 != *(int *)(param_1 + 0x2e51c))) {
    FUN_145623110(param_1);
  }
  if ((iVar3 != *(int *)(param_1 + 0x2e518)) || (iVar4 != *(int *)(param_1 + 0x2e51c))) {
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcd3e8));
    lVar16 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)),1);
    *(longlong *)(param_1 + 0xcd3e8) = lVar16;
    if (lVar16 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->consec_zero_mv");
    }
    FUN_14518f040(*(undefined8 *)(param_1 + 0xb4958));
    lVar16 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)),1);
    *(longlong *)(param_1 + 0xb4958) = lVar16;
    if (lVar16 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->skin_map");
    }
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcee18));
    *(undefined8 *)(param_1 + 0xcee18) = 0;
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcee20));
    *(undefined8 *)(param_1 + 0xcee20) = 0;
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcee28));
    *(undefined8 *)(param_1 + 0xcee28) = 0;
    FUN_14518f040(*(undefined8 *)(param_1 + 0xcee30));
    *(undefined8 *)(param_1 + 0xcee30) = 0;
    FUN_145624fb0(param_1);
    if (*(int *)(param_1 + 0x2e5b4) == 3) {
      FUN_14565e0d0(param_1);
    }
    *(undefined8 *)(param_1 + 0xb43b0) = 0;
  }
  if ((1 < *(int *)(param_1 + 0xb64ec)) ||
     ((1 < *(int *)(param_1 + 0xb64e8) && (*(int *)(param_1 + 0x2e56c) != 1)))) {
    FUN_145687790(param_1,*(undefined4 *)(param_1 + 0x2e548));
  }
  if (*(uint *)(param_1 + 0xb64e8) < *(uint *)(param_1 + 0x2e4c4)) {
    if (*(int *)(param_1 + 0xb64dc) == 0) {
      if ((*(int *)(param_1 + 0xb43c0) * 3 >> 1 < *(int *)(param_1 + 0xb4308)) ||
         (*(int *)(param_1 + 0xb4308) < *(int *)(param_1 + 0xb43c0) >> 1)) {
        *(undefined8 *)(param_1 + 0xb4340) = *(undefined8 *)(param_1 + 0xb43a0);
        *(undefined8 *)(param_1 + 0xb4338) = *(undefined8 *)(param_1 + 0xb43a0);
        *(undefined8 *)(param_1 + 0xb43b0) = 0;
      }
    }
    else {
      FUN_145688ff0(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x2e6d0) = 0;
  *(undefined4 *)(param_1 + 0xb4304) = 0;
  FUN_145623040(param_1);
  *(undefined4 *)(param_1 + 0x2f6d0) = 0;
  *(undefined4 *)(param_1 + 0x2f6e0) = 0;
  FUN_145624180(param_1);
  iVar3 = *(int *)(param_1 + 0x2e568);
  *(undefined4 *)(param_1 + 0xcee10) = 0;
  if (((((iVar3 == 0) || (iVar3 == 1)) && (bVar8 = 0, *(int *)(param_1 + 0x2e558) < 5)) &&
      ((*(int *)(param_1 + 0x2e56c) == 1 && (*(int *)(param_1 + 0x2e6b8) != 0)))) &&
     (*(int *)(param_1 + 0xb64dc) == 0)) {
    *(undefined4 *)(param_1 + 0xcee10) = 1;
    bVar8 = 1;
  }
  if (((((iVar3 == 0) && (*(int *)(param_1 + 0x2e558) < 5)) &&
       ((*(int *)(param_1 + 0x2e56c) == 0 || (*(int *)(param_1 + 0x2e56c) == 2)))) &&
      ((*(int *)(param_1 + 0x2e6b8) != 0 && (*(int *)(param_1 + 0xb64dc) == 0)))) ||
     ((iVar3 == 2 && ((4 < *(int *)(param_1 + 0x2e558) && (*(int *)(param_1 + 0x2e6b8) != 0)))))) {
    bVar8 = 1;
    *(undefined4 *)(param_1 + 0xcee10) = 1;
  }
  *(uint *)(param_1 + 0xcee14) = (uint)bVar8;
  return;
}



// FUNCTION 14561ebc0 FUN_14561ebc0 body=395 status=ok
// SIG undefined FUN_14561ebc0(void)

void FUN_14561ebc0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_3 + 0x78);
  iVar2 = *(int *)(param_3 + 0x7c);
  uVar3 = *(uint *)(param_3 + 0x98) >> 3 & 1;
  if ((((*(int *)(param_1 + 0xb64d0) == 0) || (*(uint *)(param_1 + 0x2a068) != uVar3)) ||
      (*(int *)(param_1 + 0x2a060) != iVar1)) || (*(int *)(param_1 + 0x2a064) != iVar2)) {
    *(int *)(param_1 + 0x2a060) = iVar1;
    *(int *)(param_1 + 0x2a064) = iVar2;
    *(uint *)(param_1 + 0x2a068) = uVar3;
    FUN_145622cf0();
    *(undefined4 *)(param_1 + 0xb64d0) = *(undefined4 *)(param_1 + 0x2a048);
    *(undefined4 *)(param_1 + 0xb64d4) = *(undefined4 *)(param_1 + 0x2a04c);
    *(undefined4 *)(param_1 + 0xb64d8) = *(undefined4 *)(param_1 + 0x2a300);
  }
  FUN_145622be0(param_1);
  QueryPerformanceCounter(&local_60);
  local_78 = uVar3;
  local_70 = param_2;
  FUN_145613b40(*(undefined8 *)(param_1 + 0x2e6c8),param_3,param_4,param_5);
  QueryPerformanceCounter(&local_58);
  QueryPerformanceFrequency(&local_68);
  *(longlong *)(param_1 + 0xb4cb8) =
       *(longlong *)(param_1 + 0xb4cb8) +
       ((local_58.QuadPart - (longlong)local_60) * 1000000) / local_68.QuadPart;
  if (((*(int *)(param_1 + 0x2e4cc) == 0) || (*(int *)(param_1 + 0x2e4cc) == 2)) &&
     ((iVar1 != 1 || (iVar2 != 1)))) {
    FUN_144d82810(param_1 + 0x29ee0,8,"Non-4:2:0 color format requires profile 1 or 3");
  }
  if ((((*(int *)(param_1 + 0x2e4cc) - 1U & 0xfffffffd) == 0) && (iVar1 == 1)) && (iVar2 == 1)) {
    FUN_144d82810(param_1 + 0x29ee0,8,"4:2:0 color format requires profile 0 or 2");
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
}



// FUNCTION 14561ed60 FUN_14561ed60 body=3417 status=ok
// SIG undefined FUN_14561ed60(void)

void FUN_14561ed60(longlong param_1,uint *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 param_7,LARGE_INTEGER param_8)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_5a8 [32];
  LARGE_INTEGER local_588;
  char local_578;
  uint local_574;
  ulonglong local_570;
  uint *local_568;
  longlong *local_560;
  undefined8 local_558;
  LARGE_INTEGER local_550;
  longlong local_548;
  undefined8 *local_540;
  undefined8 *local_538;
  LARGE_INTEGER local_530;
  LARGE_INTEGER local_528 [2];
  undefined1 local_518 [20];
  int local_504 [295];
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  lVar1 = param_1 + 0x29ee0;
  piVar2 = (int *)(param_1 + 0x2e56c);
  local_540 = param_5;
  lVar5 = 0;
  lVar14 = 0;
  local_538 = param_6;
  local_550 = param_8;
  local_548 = *(longlong *)(param_1 + 0x2e4f0);
  local_578 = *(char *)(param_1 + 0xb5014);
  local_570 = 0;
  local_568 = param_2;
  local_560 = param_3;
  local_558 = param_4;
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (*piVar2 == 0)) {
    FUN_145688480();
  }
  QueryPerformanceCounter(&local_530);
  uVar15 = 1;
  *(undefined4 *)(param_1 + 0x2a2f8) = 1;
  *(longlong *)(param_1 + 0x12508) = param_1 + 75000;
  *(longlong *)(param_1 + 0x12540) = param_1 + 0x12530;
  if (((*piVar2 != 2) || (*(int *)(param_1 + 0xb64dc) != 0)) || (*(int *)(param_1 + 0x2e650) < 2)) {
    uVar15 = 0;
  }
  *(undefined4 *)(param_1 + 0xcee70) = uVar15;
  *(undefined4 *)(param_1 + 0x2a2fc) = 0;
  *(undefined4 *)(param_1 + 0x2b040) = 1;
  if ((*(int *)(param_1 + 0xb64dc) == 0) || (*piVar2 != 0)) {
    *(undefined8 *)(param_1 + 0x2f6c4) = 1;
    *(undefined4 *)(param_1 + 0x2f6cc) = 0;
  }
  local_574 = 0;
  if (((*(int *)(param_1 + 0x2e568) == 2) && (*(int *)(param_1 + 0x2e57c) == 1)) ||
     ((*(int *)(param_1 + 0x2e578) < 4 || (*(int *)(param_1 + 0x2e650) == 0)))) {
LAB_14561ef2b:
    uVar11 = 0;
    local_574 = 0;
  }
  else {
    if (*piVar2 == 2) {
      if (*(int *)(param_1 + 0xb5408 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) == 3) {
        local_574 = (uint)*(byte *)((ulonglong)*(byte *)(param_1 + 0xb5014) + 0xb57f8 + param_1);
      }
    }
    else if (*(int *)(param_1 + 0xb42fc) != 0) {
      local_574 = *(uint *)(param_1 + 0xb42d4);
    }
    uVar11 = local_574;
    if ((local_574 != 0) && (iVar8 = 0, -1 < (int)local_574)) {
      do {
        lVar4 = FUN_145613da0(*(undefined8 *)(param_1 + 0x2e6c8),iVar8);
        if (lVar4 == 0) break;
        if (*(int *)(lVar4 + 0xb4) == 1) {
          param_7 = 1;
          goto LAB_14561ef2b;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= (int)uVar11);
    }
  }
  if (local_578 == '\x01') {
    *(undefined8 *)(param_1 + 0xb62d4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb62dc) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb62e4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb62ec) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb62f4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb62fc) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6304) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb630c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6314) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb631c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6324) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb632c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6334) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb633c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6344) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb634c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6354) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb635c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6364) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb636c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6374) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb637c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6384) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb638c) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xb6394) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xb63a0) = 0;
  }
  if (uVar11 != 0) {
    lVar4 = FUN_145613da0(*(undefined8 *)(param_1 + 0x2e6c8));
    uVar11 = local_574;
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0xb42fc) = 0;
      goto LAB_14561f123;
    }
    *(longlong *)(param_1 + 0x2e6d0) = lVar4;
    if (((*(int *)(param_1 + 0x2e568) != 2) && (0 < *(int *)(param_1 + 0x2e660))) &&
       (lVar14 = lVar5, 0 < *(int *)(param_1 + 0x2e664))) {
      iVar8 = *(int *)(param_1 + 0xb4308);
      FUN_1455a60b0(param_1);
      lVar14 = param_1 + 0xb6420;
      FUN_14546c880(lVar14);
      if ((*(int *)(param_1 + 0x2e5b8) != 0) && (0x1797 < iVar8)) {
        FUN_14568e9a0(*(undefined8 *)(param_1 + 0xb64c0));
      }
    }
    *(undefined4 *)(param_1 + 0x2a2e8) = 0;
    *(undefined1 *)(param_1 + 0x2a2f4) = 0;
    *(undefined4 *)(param_1 + 0x2f6cc) = 1;
    *(undefined8 *)(param_1 + 0x2f6c4) = 0;
    *(undefined4 *)(param_1 + 0xb4304) = 0;
    *(undefined4 *)(param_1 + 0xb42fc) = 0;
    lVar5 = lVar14;
    goto LAB_14561f232;
  }
LAB_14561f123:
  if ((*(int *)(param_1 + 0x2e4c4) != 0) &&
     (local_570 = FUN_145613da0(*(undefined8 *)(param_1 + 0x2e6c8),0xffffffff), local_570 == 0))
  goto LAB_14561faa9;
  if ((*(int *)(param_1 + 0xb64dc) == 0) && (*(char *)(param_1 + 0xcb9d8) == '\0')) {
    lVar4 = FUN_145613d50(*(undefined8 *)(param_1 + 0x2e6c8),param_7);
  }
  else {
    lVar4 = FUN_145688100(param_1,*(undefined8 *)(param_1 + 0x2e6c8),param_7);
  }
  if (lVar4 == 0) {
LAB_14561fa98:
    *local_560 = 0;
    goto LAB_14561faa9;
  }
  *(undefined4 *)(param_1 + 0x2a2e8) = 1;
  *(undefined1 *)(param_1 + 0x2a2f4) = 0;
  if ((((*(uint *)(lVar4 + 0xb4) & 1) != 0) && (*(int *)(param_1 + 0xb64dc) != 0)) &&
     (*(int *)(param_1 + 0xcb9fc) < *(int *)(param_1 + 0xb64e0))) {
    *(uint *)(lVar4 + 0xb4) = *(uint *)(lVar4 + 0xb4) & 0xfffffffe;
  }
  if (*piVar2 == 2) {
    uVar16 = (uint)(*(int *)(param_1 + 0xb5408 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) == 4);
  }
  else if ((*(longlong *)(param_1 + 0x2e6d0) == 0) || (lVar4 != *(longlong *)(param_1 + 0x2e6d0))) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  *(uint *)(param_1 + 0xb4304) = uVar16;
  uVar11 = local_574;
  if (uVar16 == 0) {
    if (lVar4 == 0) goto LAB_14561fa98;
  }
  else {
    *(undefined8 *)(param_1 + 0x2e6d0) = 0;
    *(undefined4 *)(param_1 + 0x2f6c4) = 0;
  }
LAB_14561f232:
  puVar9 = local_568;
  *(ulonglong *)(param_1 + 0x2e790) = local_570;
  if (lVar5 == 0) {
    lVar5 = lVar4;
  }
  *(longlong *)(param_1 + 0x2e6d8) = lVar5;
  *(longlong *)(param_1 + 0x2e6e8) = lVar5;
  *local_540 = *(undefined8 *)(lVar4 + 0xa0);
  *local_538 = *(undefined8 *)(lVar4 + 0xa8);
  *local_568 = *(uint *)(lVar4 + 0xb4) & 1;
  if (*(longlong *)(lVar4 + 0xa0) < *(longlong *)(param_1 + 0xb4270)) {
    *(longlong *)(param_1 + 0xb4270) = *(longlong *)(lVar4 + 0xa0);
    *(undefined8 *)(param_1 + 0xb4268) = *(undefined8 *)(lVar4 + 0xa0);
  }
  FUN_1425b0090();
  if (*(int *)(param_1 + 0x2a2e8) != 0) {
    if (((*(int *)(param_1 + 0xb64dc) == 0) || (*(int *)(param_1 + 0xcb9e4) == 0)) ||
       (*(longlong *)(param_1 + 0xcba00 + (longlong)*(int *)(param_1 + 0xb64e0) * 8) < 1)) {
      iVar8 = 0;
      lVar14 = *(longlong *)(lVar4 + 0xa8);
      if (*(longlong *)(lVar4 + 0xa0) == *(longlong *)(param_1 + 0xb4270)) {
        lVar5 = lVar14 - *(longlong *)(lVar4 + 0xa0);
        iVar8 = 1;
      }
      else {
        lVar5 = lVar14 - *(longlong *)(param_1 + 0xb4268);
        lVar13 = *(longlong *)(param_1 + 0xb4268) - *(longlong *)(param_1 + 0xb4260);
        if (lVar13 != 0) {
          iVar8 = (int)(((lVar5 - lVar13) * 10) / lVar13);
        }
      }
      if (lVar5 != 0) {
        if (iVar8 == 0) {
          dVar18 = 10000000.0 / *(double *)(param_1 + 0xb4548);
          dVar19 = (double)(lVar14 - *(longlong *)(param_1 + 0xb4270));
          if (10000000.0 <= dVar19) {
            dVar19 = 10000000.0;
          }
          dVar18 = 10000000.0 / ((((dVar19 - dVar18) + (double)lVar5) * dVar18) / dVar19);
          if (dVar18 < 0.1) {
            dVar18 = 30.0;
          }
          *(double *)(param_1 + 0xb4548) = dVar18;
          FUN_145617840(param_1);
        }
        else {
          dVar18 = 10000000.0 / (double)lVar5;
          if (dVar18 < 0.1) {
            dVar18 = 30.0;
          }
          *(double *)(param_1 + 0xb4548) = dVar18;
          FUN_145617840(param_1);
        }
      }
      *(undefined8 *)(param_1 + 0xb4260) = *(undefined8 *)(lVar4 + 0xa0);
      *(undefined8 *)(param_1 + 0xb4268) = *(undefined8 *)(lVar4 + 0xa8);
      puVar9 = local_568;
    }
    else {
      FUN_145689960(param_1);
    }
  }
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (*piVar2 == 0)) {
    FUN_145687b60(param_1);
    FUN_145687c30(param_1);
  }
  if (*(int *)(param_1 + 0x2a2d8) != -1) {
    piVar12 = (int *)((longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x18 + local_548);
    *piVar12 = *piVar12 + -1;
  }
  lVar14 = local_548;
  iVar8 = FUN_14561cb40(lVar1);
  plVar10 = local_560;
  *(int *)(param_1 + 0x2a2d8) = iVar8;
  if (iVar8 == -1) goto LAB_14561faa9;
  lVar14 = (longlong)iVar8 * 0xe0 + 0x18 + lVar14;
  *(longlong *)(param_1 + 0x2a080) = lVar14;
  if ((0 < *(int *)(param_1 + 0xb64e0)) && (lVar14 == *(longlong *)(param_1 + 0x2a078))) {
    *(undefined4 *)(param_1 + 0xcb788) = 0;
  }
  *local_560 = 0;
  *(uint *)(param_1 + 0xcba80) = *puVar9;
  if (*piVar2 == 2) {
    if (*(int *)(param_1 + 0xb64dc) == 0) {
      FUN_14567d840(param_1);
    }
  }
  else if (*piVar2 == 1) {
    FUN_145626110(param_1);
  }
  if (((*piVar2 != 1) && (-1 < *(char *)(param_1 + 0xcee50))) &&
     (*(char *)(param_1 + 0xcee51) == '\0')) {
    dVar18 = *(double *)(param_1 + 0xcee58);
    FUN_1425b0090();
    iVar8 = *(int *)(param_1 + 0xb4310);
    if (*(int *)(param_1 + 0xcee54) <= *(int *)(param_1 + 0xb4310)) {
      iVar8 = *(int *)(param_1 + 0xcee54);
    }
    if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
      dVar18 = dVar18 * 0.5;
    }
    else if ((int)uVar11 < 1) {
      dVar18 = dVar18 * 0.2;
    }
    else {
      dVar18 = dVar18 * 0.4;
    }
    iVar3 = (int)dVar18;
    if (iVar8 < (int)dVar18) {
      iVar3 = iVar8;
    }
    *(int *)(param_1 + 0xb4310) = iVar3;
  }
  if (((*piVar2 != 0) || (*(int *)(param_1 + 0xb64dc) != 0)) ||
     ((*(int *)(param_1 + 0x2a2e4) == 0 || (*(char *)(param_1 + 0x2a2f4) != '\0')))) {
    *(undefined8 *)(param_1 + 0x2f68c) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x2f694) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2f5c0) == 0) {
    iVar8 = *(int *)(param_1 + 0x2a308);
    uVar11 = *(int *)(param_1 + 0x2a310) + 7U & 0xfffffff8;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(param_1 + 0x2f598),0,0);
    lVar14 = FUN_14518efb0((longlong)(int)((iVar8 + 7U & 0xfffffff8) * uVar11),0x10);
    *(longlong *)(param_1 + 0x2f5c8) = lVar14;
    if (lVar14 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->kmeans_data_arr");
    }
    *(uint *)(param_1 + 0x2f5d4) = uVar11;
    *(undefined4 *)(param_1 + 0x2f5c0) = 1;
  }
  if (((local_578 == '\x01') && (*(int *)(param_1 + 0xb540c) == 3)) &&
     (*(int *)(param_1 + 0xb471c) != 0)) {
    plVar10 = (longlong *)(param_1 + 0x2e850);
    uVar11 = *(int *)(param_1 + 0x2a310) + 7U & 0xfffffff8;
    uVar16 = *(int *)(param_1 + 0x2a308) + 7U & 0xfffffff8;
    lVar14 = 0x32;
    do {
      if (((*(int *)((longlong)plVar10 + 0xc) < (int)uVar11) || ((int)plVar10[2] < (int)uVar16)) ||
         (*plVar10 == 0)) {
        FUN_14518f040(*plVar10);
        lVar5 = FUN_14518efb0((longlong)(int)(uVar16 * uVar11),0x30);
        *plVar10 = lVar5;
        if (lVar5 == 0) {
          FUN_144d82810(lVar1,2,"Failed to allocate cpi->tpl_stats[frame].tpl_stats_ptr");
        }
        *(undefined1 *)(plVar10 + -1) = 0;
        *(uint *)((longlong)plVar10 + 0xc) = uVar11;
        *(uint *)(plVar10 + 2) = uVar16;
        *(uint *)(plVar10 + 1) = uVar11;
        *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)(param_1 + 0x2a308);
        *(undefined4 *)(plVar10 + 3) = *(undefined4 *)(param_1 + 0x2a310);
      }
      plVar10 = plVar10 + 5;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    *(undefined4 *)(param_1 + 0x2f058) = 0;
    *(undefined4 *)(param_1 + 0x2f05c) = 1;
    *(undefined4 *)(param_1 + 0x2f100) = 0;
    *(undefined4 *)(param_1 + 0x2f104) = 1;
    *(undefined4 *)(param_1 + 0x2f1a8) = 0;
    *(undefined4 *)(param_1 + 0x2f1ac) = 1;
    *(undefined4 *)(param_1 + 0x2f250) = 0;
    *(undefined4 *)(param_1 + 0x2f254) = 1;
    *(undefined4 *)(param_1 + 0x2f2f8) = 0;
    *(undefined4 *)(param_1 + 0x2f2fc) = 1;
    *(undefined4 *)(param_1 + 0x2f3a0) = 0;
    *(undefined4 *)(param_1 + 0x2f3a4) = 1;
    *(undefined4 *)(param_1 + 0x2f448) = 0;
    *(undefined4 *)(param_1 + 0x2f44c) = 1;
    *(undefined4 *)(param_1 + 0x2f4f0) = 0;
    *(undefined4 *)(param_1 + 0x2f4f4) = 1;
    FUN_145618b40(param_1);
    local_570 = local_570 & 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x2e840) = 9;
    FUN_145629800(param_1,local_518,param_1 + 0xb5014,&local_570);
    FUN_145629cc0(param_1);
    iVar8 = (int)local_570 + -1;
    plVar10 = local_560;
    if (0 < iVar8) {
      piVar12 = local_504 + (longlong)iVar8 * 6;
      do {
        if (*piVar12 != 6) {
          FUN_14562acc0(param_1,local_518,iVar8,*(undefined1 *)(param_1 + 0x2e840));
        }
        iVar8 = iVar8 + -1;
        piVar12 = piVar12 + -6;
        plVar10 = local_560;
      } while (0 < iVar8);
    }
  }
  iVar8 = *(int *)(param_1 + 0xb64dc);
  *(undefined4 *)(param_1 + 0x20184) = 0;
  if (*piVar2 == 1) {
    if (iVar8 != 0) goto LAB_14561f8ad;
    if ((*(int *)(param_1 + 0x2e5ac) != 0) || (iVar8 = 1, *(int *)(param_1 + 0x2e5a8) != 0)) {
      iVar8 = 0;
    }
    if (*(int *)(param_1 + 0x2e6a0) == 0) {
      pcVar6 = FUN_14564af90;
      pcVar7 = FUN_14272f310;
    }
    else {
      pcVar6 = FUN_14565b030;
      pcVar7 = thunk_FUN_14563f700;
    }
    bVar17 = iVar8 != 0;
    if (bVar17) {
      pcVar6 = pcVar7;
    }
    *(code **)(param_1 + 0x20240) = pcVar6;
    pcVar6 = FUN_145471ea0;
    if (bVar17) {
      pcVar6 = FUN_145471e80;
    }
    *(code **)(param_1 + 0x20250) = pcVar6;
    pcVar6 = FUN_145471d10;
    if (bVar17) {
      pcVar6 = FUN_145471d00;
    }
    *(code **)(param_1 + 0x20248) = pcVar6;
    FUN_14567b600(param_1,lVar4);
  }
  else {
    if (*piVar2 == 2) {
      if (iVar8 == 0) {
        local_588 = local_550;
        *(undefined4 *)(param_1 + 0xb4944) = 1;
        FUN_1456283f0(param_1,plVar10,local_558,local_568);
        FUN_14567def0(param_1);
        goto LAB_14561f8e9;
      }
LAB_14561f8ad:
      FUN_145615590(param_1);
    }
    else {
      if (iVar8 != 0) goto LAB_14561f8ad;
      if (*(int *)(param_1 + 0x2e57c) == 1) {
        FUN_145614df0();
      }
      else {
        FUN_145614c90(param_1);
      }
    }
    local_588.QuadPart = 0;
    FUN_1456283f0(param_1,plVar10,local_558,local_568);
  }
LAB_14561f8e9:
  if (*(int *)(param_1 + 0x2a2e8) != 0) {
    *(undefined4 *)(param_1 + 0x2a2dc) = *(undefined4 *)(param_1 + 0x2a2d8);
  }
  if (*(int *)(param_1 + 0x2b040) != 0) {
    memcpy((void *)((ulonglong)*(uint *)(param_1 + 0x2b118) * 0x7fc +
                   *(longlong *)(param_1 + 0x2b110)),*(void **)(param_1 + 0x2b108),0x7fc);
  }
  bVar17 = false;
  if (*plVar10 == 0) {
    if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
      FUN_145625ee0(param_1);
    }
    bVar17 = *plVar10 == 0;
  }
  if (!bVar17) {
    if (((((*(int *)(param_1 + 0x2a2e4) == 0) || (*(int *)(param_1 + 0x2f6c4) != 0)) ||
         (*(int *)(param_1 + 0x2f6c8) != 0)) ||
        ((*(int *)(param_1 + 0x2f6cc) != 0 || (*(int *)(param_1 + 0x2b040) != 0)))) ||
       ((*(char *)(param_1 + 0x2b069) != '\0' ||
        ((*(char *)(param_1 + 0x2b089) != '\0' || (iVar8 = 1, *(char *)(param_1 + 0x2b08a) != '\0'))
        )))) {
      iVar8 = 0;
    }
    *(int *)(param_1 + 0xb64cc) = iVar8;
  }
  if (((*(int *)(param_1 + 0xb64dc) != 0) && (*piVar2 == 0)) ||
     (((1 < *(int *)(param_1 + 0xb64ec) || (1 < *(int *)(param_1 + 0xb64e8))) && (*piVar2 == 2)))) {
    FUN_145687e30(param_1);
  }
  if (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1) {
    *(undefined4 *)(param_1 + 0xcefa8) = 0;
  }
  QueryPerformanceCounter(local_528);
  QueryPerformanceFrequency(&local_550);
  *(longlong *)(param_1 + 0xb4cc0) =
       *(longlong *)(param_1 + 0xb4cc0) +
       ((local_528[0].QuadPart - (longlong)local_530) * 1000000) / local_550.QuadPart;
  if ((*(int *)(param_1 + 0xcd4a0) != 0) && (*piVar2 != 1)) {
    FUN_1456291a0(param_1,plVar10,local_574);
  }
  if ((((*(int *)(param_1 + 0xb64dc) != 0) && (*piVar2 == 0)) && (*(int *)(param_1 + 0x2a2e8) != 0))
     && (iVar8 = *(int *)(param_1 + 0xb64f0) + 1, *(int *)(param_1 + 0xb64f0) = iVar8,
        *(int *)(param_1 + 0xb64e8) <= iVar8)) {
    *(undefined4 *)(param_1 + 0xb64f0) = 0;
  }
  FUN_1425b0090();
LAB_14561faa9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_5a8);
}



// FUNCTION 14561fad0 FUN_14561fad0 body=225 status=ok
// SIG undefined FUN_14561fad0(void)

undefined8 FUN_14561fad0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x2a2e8) == 0) {
    return 0xffffffff;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x2a070);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar5;
    uVar5 = puVar1[3];
    param_2[2] = puVar1[2];
    param_2[3] = uVar5;
    uVar5 = puVar1[5];
    param_2[4] = puVar1[4];
    param_2[5] = uVar5;
    uVar5 = puVar1[7];
    param_2[6] = puVar1[6];
    param_2[7] = uVar5;
    uVar5 = puVar1[9];
    param_2[8] = puVar1[8];
    param_2[9] = uVar5;
    uVar5 = puVar1[0xb];
    param_2[10] = puVar1[10];
    param_2[0xb] = uVar5;
    uVar5 = puVar1[0xd];
    param_2[0xc] = puVar1[0xc];
    param_2[0xd] = uVar5;
    uVar5 = puVar1[0xf];
    param_2[0xe] = puVar1[0xe];
    param_2[0xf] = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar1 + 0x84);
    uVar3 = *(undefined4 *)(puVar1 + 0x11);
    uVar4 = *(undefined4 *)((longlong)puVar1 + 0x8c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0x84) = uVar2;
    *(undefined4 *)(param_2 + 0x11) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x8c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar1 + 0x94);
    uVar3 = *(undefined4 *)(puVar1 + 0x13);
    uVar4 = *(undefined4 *)((longlong)puVar1 + 0x9c);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(puVar1 + 0x12);
    *(undefined4 *)((longlong)param_2 + 0x94) = uVar2;
    *(undefined4 *)(param_2 + 0x13) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x9c) = uVar4;
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x2a048);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x2a04c);
    *(int *)((longlong)param_2 + 0x14) =
         *(int *)(param_1 + 0x2a048) >> ((byte)*(undefined4 *)(param_1 + 0x2a060) & 0x1f);
    *(int *)(param_2 + 3) =
         *(int *)(param_1 + 0x2a04c) >> ((byte)*(undefined4 *)(param_1 + 0x2a064) & 0x1f);
    FUN_1425b0090();
    return 0;
  }
  FUN_1425b0090();
  return 0xffffffff;
}



// FUNCTION 14561fbc0 FUN_14561fbc0 body=121 status=ok
// SIG undefined FUN_14561fbc0(void)

undefined8 FUN_14561fbc0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x2f698);
  }
  else if (param_2 == 2) {
    iVar1 = *(int *)(param_1 + 0x2f69c);
  }
  else {
    if (param_2 != 4) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x2f6a0);
  }
  if (((iVar1 != -1) && (iVar1 = *(int *)(param_1 + 0x2a088 + (longlong)iVar1 * 4), iVar1 != -1)) &&
     (lVar2 = (longlong)iVar1 * 0xe0 + *(longlong *)(param_1 + 0x2e4f0) + 0x58, lVar2 != 0)) {
    FUN_14546c8b0(lVar2,param_3);
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 14561fc40 FUN_14561fc40 body=121 status=ok
// SIG undefined FUN_14561fc40(void)

undefined8 FUN_14561fc40(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x2f698);
  }
  else if (param_2 == 2) {
    iVar1 = *(int *)(param_1 + 0x2f69c);
  }
  else {
    if (param_2 != 4) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(param_1 + 0x2f6a0);
  }
  if (((iVar1 != -1) && (iVar1 = *(int *)(param_1 + 0x2a088 + (longlong)iVar1 * 4), iVar1 != -1)) &&
     (*(longlong *)(param_1 + 0x2e4f0) + 0x58 + (longlong)iVar1 * 0xe0 != 0)) {
    FUN_14546c8b0(param_3);
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 14561fcc0 FUN_14561fcc0 body=253 status=ok
// SIG undefined FUN_14561fcc0(void)

undefined8 FUN_14561fcc0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if ((param_3 == *(int *)(param_1 + 0x2a304)) && (param_4 == *(int *)(param_1 + 0x2a30c))) {
    iVar1 = *(int *)(param_1 + 0x2a310);
    puVar5 = *(undefined1 **)(param_1 + 0xb4990);
    iVar2 = *(int *)(param_1 + 0x2a308);
    uVar8 = 1;
    *(undefined4 *)(param_1 + 0xb498c) = 1;
    if (param_2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = 0;
          if (0 < iVar1) {
            puVar6 = puVar5;
            do {
              uVar4 = 7;
              if (*(char *)((int)((iVar3 >> 1) + (uVar7 >> 1) * param_4) + param_2) != '\0') {
                uVar4 = 0;
              }
              iVar3 = iVar3 + 1;
              *puVar6 = uVar4;
              puVar6 = puVar6 + 1;
            } while (iVar3 < iVar1);
          }
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + iVar1;
        } while ((int)uVar7 < iVar2);
      }
    }
    *(undefined4 *)(param_1 + 0xb4988) = uVar8;
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 14561fdc0 FUN_14561fdc0 body=242 status=ok
// SIG undefined FUN_14561fdc0(void)

undefined8 FUN_14561fdc0(longlong param_1,void *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  if (((param_3 == *(int *)(param_1 + 0x2a304)) && (param_4 == *(int *)(param_1 + 0x2a30c))) &&
     (param_2 != (void *)0x0)) {
    iVar2 = *(int *)(param_1 + 0x2a310);
    pcVar6 = *(char **)(param_1 + 0xb4950);
    iVar3 = *(int *)(param_1 + 0x2a308);
    memset(param_2,(uint)(*(int *)(param_1 + 0xb4988) == 0),(longlong)(param_3 * param_4));
    if ((*(int *)(param_1 + 0xb4988) != 0) && (uVar8 = 0, 0 < iVar3)) {
      do {
        iVar4 = 0;
        if (0 < iVar2) {
          pcVar7 = pcVar6;
          do {
            iVar5 = iVar4 >> 1;
            iVar4 = iVar4 + 1;
            pbVar1 = (byte *)((longlong)(int)(iVar5 + (uVar8 >> 1) * param_4) + (longlong)param_2);
            *pbVar1 = *pbVar1 | *pcVar7 != '\a';
            pcVar7 = pcVar7 + 1;
          } while (iVar4 < iVar2);
        }
        uVar8 = uVar8 + 1;
        pcVar6 = pcVar6 + iVar2;
      } while ((int)uVar8 < iVar3);
    }
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 14561fec0 FUN_14561fec0 body=214 status=ok
// SIG undefined FUN_14561fec0(void)

undefined8 FUN_14561fec0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((3 < param_2) || (3 < param_3)) {
    return 0xffffffff;
  }
  iVar4 = 2;
  iVar2 = 3;
  if (param_2 == 0) {
    iVar1 = 1;
    iVar3 = 1;
  }
  else if (param_2 == 1) {
    iVar1 = 4;
    iVar3 = 5;
  }
  else if (param_2 == 2) {
    iVar3 = 5;
    iVar1 = iVar2;
  }
  else {
    iVar3 = 2;
    iVar1 = 1;
  }
  if (param_3 == 0) {
    iVar2 = 1;
    iVar4 = 1;
  }
  else {
    if (param_3 == 1) {
      iVar2 = 4;
    }
    else if (param_3 != 2) {
      iVar2 = 1;
      goto LAB_14561ff4b;
    }
    iVar4 = 5;
  }
LAB_14561ff4b:
  *(int *)(param_1 + 0x2a048) = (iVar1 * *(int *)(param_1 + 0x2e518) + -1 + iVar3) / iVar3;
  iVar2 = iVar2 * *(int *)(param_1 + 0x2e51c) + -1 + iVar4;
  *(int *)(param_1 + 0x2a04c) = iVar2 / iVar4;
  FUN_145623110(param_1,(longlong)iVar2 % (longlong)iVar4 & 0xffffffff);
  return 0;
}



// FUNCTION 14561ffa0 FUN_14561ffa0 body=222 status=ok
// SIG undefined FUN_14561ffa0(void)

undefined8 FUN_14561ffa0(longlong param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0xb64d0) == 0) {
    *(undefined4 *)(param_1 + 0x2a060) = *(undefined4 *)(param_1 + 0x2a060);
    *(undefined4 *)(param_1 + 0x2a064) = *(undefined4 *)(param_1 + 0x2a064);
    *(undefined4 *)(param_1 + 0x2a068) = *(undefined4 *)(param_1 + 0x2a068);
    FUN_145622cf0(param_1);
    *(undefined4 *)(param_1 + 0xb64d0) = *(undefined4 *)(param_1 + 0x2a048);
    *(undefined4 *)(param_1 + 0xb64d4) = *(undefined4 *)(param_1 + 0x2a04c);
    *(undefined4 *)(param_1 + 0xb64d8) = *(undefined4 *)(param_1 + 0x2a300);
  }
  FUN_145622be0(param_1);
  if (param_2 != 0) {
    *(int *)(param_1 + 0x2a048) = param_2;
    if (*(int *)(param_1 + 0xb64d0) < param_2) {
      *(int *)(param_1 + 0x2a048) = *(int *)(param_1 + 0xb64d0);
      FUN_14678752e("Warning: Desired width too large, changed to %d\n");
    }
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0x2a04c) = param_3;
    if (*(int *)(param_1 + 0xb64d4) < param_3) {
      *(int *)(param_1 + 0x2a04c) = *(int *)(param_1 + 0xb64d4);
      FUN_14678752e("Warning: Desired height too large, changed to %d\n");
    }
  }
  FUN_145623110(param_1);
  return 0;
}



// FUNCTION 145620080 FUN_145620080 body=7 status=ok
// SIG undefined FUN_145620080(void)

void FUN_145620080(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb64dc) = param_2;
  return;
}



// FUNCTION 145620090 FUN_145620090 body=7 status=ok
// SIG undefined FUN_145620090(void)

undefined4 FUN_145620090(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2a31c);
}



// FUNCTION 1456200a0 FUN_1456200a0 body=733 status=ok
// SIG undefined FUN_1456200a0(void)

void FUN_1456200a0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_48 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x29ee0;
  cVar6 = '\x01';
  local_48[0] = 1;
  local_48[1] = 2;
  local_48[2] = 4;
  do {
    lVar8 = (longlong)cVar6 + -1;
    if ((*(uint *)(param_1 + 0xb46a8) & local_48[lVar8]) == 0) {
      if ((*(int *)(param_1 + 0x2e56c) == 0) && (*(int *)(param_1 + 0xb64dc) == 0))
      goto LAB_145620343;
LAB_145620337:
      *(undefined4 *)(param_1 + 0x2f68c + lVar8 * 4) = 0xffffffff;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x2e4f0);
      if (cVar6 == '\x01') {
        iVar4 = *(int *)(param_1 + 0x2f698);
      }
      else if (cVar6 == '\x02') {
        iVar4 = *(int *)(param_1 + 0x2f69c);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x2f6a0);
      }
      if ((iVar4 == -1) || (iVar4 = *(int *)(param_1 + 0x2a088 + (longlong)iVar4 * 4), iVar4 == -1))
      goto LAB_145620337;
      lVar9 = (longlong)iVar4 * 0xe0;
      lVar10 = lVar5 + 0x58 + lVar9;
      if (lVar10 == 0) goto LAB_145620337;
      iVar4 = *(int *)(lVar10 + 8);
      if ((iVar4 == *(int *)(param_1 + 0x2a048)) &&
         (*(int *)(lVar10 + 0xc) == *(int *)(param_1 + 0x2a04c))) {
        if (((*(int *)(param_1 + 0x2e56c) == 0) && (*(int *)(param_1 + 0xb64dc) == 0)) &&
           (iVar3 = *(int *)(param_1 + 0x2f68c + lVar8 * 4), iVar3 != -1)) {
          piVar2 = (int *)((longlong)iVar3 * 0xe0 + 0x18 + lVar5);
          *piVar2 = *piVar2 + -1;
          *(undefined4 *)(param_1 + 0x2f68c + lVar8 * 4) = 0xffffffff;
          iVar4 = *(int *)(lVar9 + 0x60 + lVar5);
        }
        if (cVar6 == '\x01') {
          iVar3 = *(int *)(param_1 + 0x2f698);
        }
        else if (cVar6 == '\x02') {
          iVar3 = *(int *)(param_1 + 0x2f69c);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x2f6a0);
        }
        if (iVar3 == -1) {
          iVar3 = -1;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x2a088 + (longlong)iVar3 * 4);
        }
        lVar9 = (longlong)iVar3 * 0xe0;
        *(int *)(lVar9 + 0x60 + lVar5) = iVar4;
        *(undefined4 *)(lVar9 + 100 + lVar5) = *(undefined4 *)(lVar10 + 0xc);
        *(int *)(param_1 + 0x2f68c + lVar8 * 4) = iVar3;
        piVar2 = (int *)(lVar9 + 0x18 + lVar5);
        *piVar2 = *piVar2 + 1;
      }
      else {
        lVar8 = param_1 + lVar8 * 4;
        iVar4 = *(int *)(lVar8 + 0x2f68c);
        uVar7 = (ulonglong)iVar4;
        if (iVar4 == -1) {
          iVar4 = FUN_14561cb40(lVar1);
          uVar7 = (ulonglong)iVar4;
          if (iVar4 == -1) break;
          lVar5 = uVar7 * 0xe0 + lVar5;
        }
        else {
          lVar5 = uVar7 * 0xe0 + lVar5;
          if ((*(int *)(lVar5 + 0x60) == *(int *)(param_1 + 0x2a048)) &&
             (*(int *)(lVar5 + 100) == *(int *)(param_1 + 0x2a04c))) goto LAB_145620343;
        }
        local_70 = *(undefined4 *)(param_1 + 0x2e4e8);
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_80 = *(undefined4 *)(param_1 + 0x2a068);
        local_78 = 0xa0;
        local_88 = *(undefined4 *)(param_1 + 0x2a064);
        iVar4 = FUN_145466a50(lVar5 + 0x58,*(undefined4 *)(param_1 + 0x2a048),
                              *(undefined4 *)(param_1 + 0x2a04c),*(undefined4 *)(param_1 + 0x2a060))
        ;
        if (iVar4 != 0) {
          FUN_144d82810(lVar1,2,"Failed to allocate frame buffer");
        }
        local_88 = 0;
        FUN_1456252c0(lVar10,lVar5 + 0x58,*(undefined4 *)(param_1 + 0x2e4d0),0);
        *(int *)(lVar8 + 0x2f68c) = (int)uVar7;
        FUN_145625e40(lVar1,uVar7 & 0xffffffff);
      }
    }
LAB_145620343:
    cVar6 = cVar6 + '\x01';
  } while (cVar6 < '\x04');
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 145620390 FUN_145620390 body=107 status=ok
// SIG undefined FUN_145620390(void)

void FUN_145620390(int param_1,uint param_2,longlong *param_3,undefined4 *param_4,uint *param_5)

{
  if (param_1 != 0) {
    *param_4 = *(undefined4 *)(*param_3 + 0x20);
    *param_5 = param_2 & 1;
    param_4[1] = *(undefined4 *)(param_3[1] + 0x20);
    param_5[1] = param_2 >> 1 & 1;
    param_4[2] = *(undefined4 *)(param_3[2] + 0x20);
    param_5[2] = param_2 >> 2 & 1;
    return;
  }
  *param_4 = 0xffffffff;
  *param_5 = 0;
  param_4[1] = 0xffffffff;
  param_5[1] = 0;
  param_4[2] = 0xffffffff;
  param_5[2] = 0;
  return;
}



// FUNCTION 145620410 FUN_145620410 body=176 status=ok
// SIG undefined FUN_145620410(void)

int * FUN_145620410(longlong param_1,int *param_2,int *param_3,int param_4,undefined1 param_5,
                   undefined4 param_6)

{
  if ((*(int *)(param_1 + 0x430) << 3 == *param_2) && (*(int *)(param_1 + 0x428) << 3 == param_2[1])
     ) {
    return param_2;
  }
  if ((param_4 != 0) && ((*param_2 <= *param_3 * 2 && (param_2[1] <= param_3[1] * 2)))) {
    if (*(int *)(param_1 + 0x45f0) == 8) {
      (*DAT_14c7fe6b8)(param_2,param_3,param_5,param_6);
      return param_3;
    }
    FUN_1456252c0(param_2,param_3,*(int *)(param_1 + 0x45f0),param_5,param_6);
    return param_3;
  }
  FUN_145625110(param_2,param_3,*(undefined4 *)(param_1 + 0x45f0));
  return param_3;
}



// FUNCTION 1456204c0 FUN_1456204c0 body=182 status=ok
// SIG undefined FUN_1456204c0(void)

void FUN_1456204c0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 & 0x230000) != 0) {
    uVar2 = ~(param_2 >> 0x10) & 1 | 6;
    uVar1 = uVar2 ^ 2;
    if ((param_2 >> 0x11 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 ^ 4;
    if ((param_2 >> 0x15 & 1) == 0) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 0xb46a8) = uVar2;
  }
  if ((param_2 & 0x1cc0000) != 0) {
    *(undefined4 *)(param_1 + 0x2f6d0) = 1;
    uVar2 = ~(param_2 >> 0x12) & 1 | 6;
    uVar1 = uVar2 ^ 2;
    if ((param_2 >> 0x16 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 ^ 4;
    if ((param_2 >> 0x17 & 1) == 0) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 0x2f6d8) = uVar2 >> 1 & 1;
    *(uint *)(param_1 + 0x2f6dc) = uVar2 >> 2;
    *(uint *)(param_1 + 0x2f6d4) = uVar2 & 1;
  }
  if ((param_2 >> 0x14 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x2f6e0) = 1;
  }
  return;
}



// FUNCTION 145620580 FUN_145620580 body=276 status=ok
// SIG undefined FUN_145620580(void)

undefined4 FUN_145620580(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1425b0090();
  iVar2 = 0;
  lVar1 = 0;
  do {
    if (((((((double)*(ulonglong *)(param_1 + 8) <=
             (double)*(ulonglong *)((longlong)&DAT_149de9188 + lVar1) * 1.015) &&
           (*(uint *)(param_1 + 0x10) <= *(uint *)((longlong)&DAT_149de9190 + lVar1))) &&
          (*(uint *)(param_1 + 0x14) <= *(uint *)((longlong)&DAT_149de9194 + lVar1))) &&
         ((*(double *)(param_1 + 0x18) < *(double *)((longlong)&DAT_149de9198 + lVar1) ||
           *(double *)(param_1 + 0x18) == *(double *)((longlong)&DAT_149de9198 + lVar1) &&
          (*(double *)(param_1 + 0x20) < *(double *)((longlong)&DAT_149de91a0 + lVar1) ||
           *(double *)(param_1 + 0x20) == *(double *)((longlong)&DAT_149de91a0 + lVar1))))) &&
        ((*(double *)((longlong)&DAT_149de91a8 + lVar1) < *(double *)(param_1 + 0x28) ||
          *(double *)((longlong)&DAT_149de91a8 + lVar1) == *(double *)(param_1 + 0x28) &&
         ((*(byte *)(param_1 + 0x30) <= (byte)(&DAT_149de91b0)[lVar1] &&
          (*(uint *)((longlong)&DAT_149de91b4 + lVar1) <= *(uint *)(param_1 + 0x34))))))) &&
       (*(byte *)(param_1 + 0x38) <= (byte)(&DAT_149de91b8)[lVar1])) break;
    iVar2 = iVar2 + 1;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 < 0x380);
  if (iVar2 == 0xe) {
    return 0;
  }
  return (&DAT_149de9180)[(longlong)iVar2 * 0x10];
}



// FUNCTION 1456206a0 FUN_1456206a0 body=657 status=ok
// SIG undefined FUN_1456206a0(void)

undefined8
FUN_1456206a0(longlong param_1,void *param_2,int param_3,int param_4,int *param_5,int *param_6,
             int *param_7,int *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x2a308) == param_3) && (*(int *)(param_1 + 0x2a310) == param_4)) {
    iVar6 = 0;
    piVar5 = param_5;
    do {
      if (0x7e < *piVar5 + 0x3fU) goto LAB_145620917;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 8);
    iVar6 = 0;
    piVar5 = param_6;
    do {
      if (0x7e < *piVar5 + 0x3fU) goto LAB_145620917;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 8);
    iVar6 = 0;
    piVar5 = param_8;
    do {
      if (6 < *piVar5 + 3U) goto LAB_145620917;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 8);
    iVar6 = 0;
    piVar5 = param_7;
    do {
      if (2 < *piVar5 + 1U) goto LAB_145620917;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 8);
    if ((param_2 == (void *)0x0) ||
       ((((((((((((((((((((((((((((param_5[7] == 0 && param_5[6] == 0) && param_5[5] == 0) &&
                                param_5[4] == 0) && param_5[3] == 0) && param_6[7] == 0) &&
                             param_5[2] == 0) && param_6[6] == 0) && param_5[1] == 0) &&
                          param_6[5] == 0) && param_6[4] == 0) && param_6[3] == 0) &&
                       param_7[7] == 0) && param_6[2] == 0) && param_7[6] == 0) && param_6[1] == 0)
                   && param_7[5] == 0) && param_7[4] == 0) && param_7[3] == 0) && param_7[2] == 0)
               && param_7[1] == 0) && *param_5 == 0) && *param_6 == 0) && *param_7 == 0 &&
            (*param_8 == -1)) && (param_8[1] == -1)) && ((param_8[2] == -1 && (param_8[3] == -1))))
         && ((param_8[4] == -1 && ((param_8[5] == -1 && (param_8[6] == -1)))))) &&
        (param_8[7] == -1)))) {
      FUN_145679d60(param_1 + 0x2b088);
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0xcee78) = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0xcee80) != 0) {
        FUN_14518f040();
        *(undefined8 *)(param_1 + 0xcee80) = 0;
      }
      lVar3 = FUN_14518ef70(param_3 * param_4);
      *(longlong *)(param_1 + 0xcee80) = lVar3;
      if (lVar3 == 0) {
        FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate roi->roi_map");
      }
      memcpy(*(void **)(param_1 + 0xcee80),param_2,(ulonglong)(uint)(param_3 * param_4));
      uVar4 = *(undefined8 *)(param_5 + 2);
      *(undefined8 *)(param_1 + 0xcee90) = *(undefined8 *)param_5;
      *(undefined8 *)(param_1 + 0xcee98) = uVar4;
      uVar4 = *(undefined8 *)(param_5 + 6);
      *(undefined8 *)(param_1 + 0xceea0) = *(undefined8 *)(param_5 + 4);
      *(undefined8 *)(param_1 + 0xceea8) = uVar4;
      uVar4 = *(undefined8 *)(param_6 + 2);
      *(undefined8 *)(param_1 + 0xceeb0) = *(undefined8 *)param_6;
      *(undefined8 *)(param_1 + 0xceeb8) = uVar4;
      uVar4 = *(undefined8 *)(param_6 + 6);
      *(undefined8 *)(param_1 + 0xceec0) = *(undefined8 *)(param_6 + 4);
      *(undefined8 *)(param_1 + 0xceec8) = uVar4;
      uVar4 = *(undefined8 *)(param_7 + 2);
      *(undefined8 *)(param_1 + 0xceed0) = *(undefined8 *)param_7;
      *(undefined8 *)(param_1 + 0xceed8) = uVar4;
      uVar4 = *(undefined8 *)(param_7 + 6);
      *(undefined8 *)(param_1 + 0xceee0) = *(undefined8 *)(param_7 + 4);
      *(undefined8 *)(param_1 + 0xceee8) = uVar4;
      uVar4 = *(undefined8 *)(param_8 + 2);
      *(undefined8 *)(param_1 + 0xceef0) = *(undefined8 *)param_8;
      *(undefined8 *)(param_1 + 0xceef8) = uVar4;
      uVar1 = *(undefined8 *)(param_8 + 4);
      uVar2 = *(undefined8 *)(param_8 + 6);
      *(int *)(param_1 + 0xcee88) = param_3;
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0xcee78) = 1;
      *(undefined8 *)(param_1 + 0xcef00) = uVar1;
      *(undefined8 *)(param_1 + 0xcef08) = uVar2;
      *(int *)(param_1 + 0xcee8c) = param_4;
    }
  }
  else {
LAB_145620917:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 145620940 FUN_145620940 body=51 status=ok
// SIG undefined FUN_145620940(void)

void FUN_145620940(longlong param_1,double param_2)

{
  if (param_2 < 0.1) {
    *(undefined8 *)(param_1 + 0xb4548) = 0x403e000000000000;
    FUN_145617840();
    return;
  }
  *(double *)(param_1 + 0xb4548) = param_2;
  FUN_145617840(param_2);
  return;
}



// FUNCTION 145620980 FUN_145620980 body=182 status=ok
// SIG undefined FUN_145620980(void)

void FUN_145620980(longlong param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(param_1 + 0x2e568);
  bVar2 = 0;
  *(undefined4 *)(param_1 + 0xcee10) = 0;
  if (((((iVar1 == 0) || (iVar1 == 1)) && (*(int *)(param_1 + 0x2e558) < 5)) &&
      ((*(int *)(param_1 + 0x2e56c) == 1 && (*(int *)(param_1 + 0x2e6b8) != 0)))) &&
     (*(int *)(param_1 + 0xb64dc) == 0)) {
    *(undefined4 *)(param_1 + 0xcee10) = 1;
    bVar2 = 1;
  }
  if (((((iVar1 == 0) && (*(int *)(param_1 + 0x2e558) < 5)) &&
       ((*(int *)(param_1 + 0x2e56c) == 0 || (*(int *)(param_1 + 0x2e56c) == 2)))) &&
      ((*(int *)(param_1 + 0x2e6b8) != 0 && (*(int *)(param_1 + 0xb64dc) == 0)))) ||
     ((iVar1 == 2 && ((4 < *(int *)(param_1 + 0x2e558) && (*(int *)(param_1 + 0x2e6b8) != 0)))))) {
    bVar2 = 1;
    *(undefined4 *)(param_1 + 0xcee10) = 1;
  }
  *(uint *)(param_1 + 0xcee14) = (uint)bVar2;
  return;
}



// FUNCTION 145620a40 FUN_145620a40 body=109 status=ok
// SIG undefined FUN_145620a40(void)

undefined8 FUN_145620a40(longlong param_1,undefined8 *param_2)

{
  if (((*(int *)(param_1 + 0xb64c8) != 0) && (*(int *)(param_1 + 0x2e56c) != 1)) &&
     (*(int *)(param_1 + 0x2a2e8) != 0)) {
    FUN_14568dec0(*(undefined8 *)(param_1 + 0x2e838),*(undefined8 *)(param_1 + 0x2a070),param_2,
                  *(undefined4 *)(param_1 + 0x12420),*(undefined4 *)(param_1 + 0x2e520));
    return 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return 0;
}



// FUNCTION 145620ab0 FUN_145620ab0 body=4291 status=ok
// SIG undefined FUN_145620ab0(void)

int FUN_145620ab0(longlong param_1)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  byte *pbVar23;
  int *piVar24;
  longlong lVar25;
  longlong lVar26;
  byte *pbVar27;
  int iVar28;
  int *piVar29;
  longlong local_68;
  int *local_60;
  int *local_58;
  longlong local_50;
  
  lVar18 = *(longlong *)(param_1 + 0x1228);
  iVar17 = 0;
  lVar25 = (ulonglong)*(uint *)(param_1 + 0x1238) * 0x7fc + *(longlong *)(param_1 + 0x1230);
  lVar26 = lVar25 - lVar18;
  lVar19 = 4;
  piVar16 = (int *)(param_1 + 0x1260);
  pbVar27 = (byte *)(lVar18 + 1);
  piVar15 = (int *)(param_1 + 0x125c);
  do {
    iVar17 = iVar17 + ((uint)pbVar27[lVar26 + 7] - (uint)pbVar27[7]) * *piVar15 +
             ((uint)pbVar27[lVar26 + 1] - (uint)pbVar27[1]) * piVar15[-6] +
             ((uint)pbVar27[lVar26 + 2] - (uint)pbVar27[2]) * piVar15[-5] +
             ((uint)pbVar27[lVar26 + 3] - (uint)pbVar27[3]) * piVar15[-4] +
             ((uint)pbVar27[lVar26 + 4] - (uint)pbVar27[4]) * piVar15[-3] +
             ((uint)pbVar27[lVar26 + 5] - (uint)pbVar27[5]) * piVar15[-2] +
             ((uint)pbVar27[lVar26 + 6] - (uint)pbVar27[6]) * piVar15[-1] +
             ((uint)pbVar27[lVar26 + -1] - (uint)pbVar27[-1]) * piVar15[-8] +
             ((uint)pbVar27[lVar26] - (uint)*pbVar27) * piVar15[-7] +
             ((uint)(byte)~pbVar27[lVar26 + 7] - (uint)(byte)~pbVar27[7]) * *piVar16;
    lVar19 = lVar19 + -1;
    piVar16 = piVar16 + 10;
    pbVar27 = pbVar27 + 9;
    piVar15 = piVar15 + 10;
  } while (lVar19 != 0);
  lVar19 = lVar18 - lVar25;
  lVar20 = 10;
  piVar16 = (int *)(param_1 + 0x1300);
  pbVar27 = (byte *)(lVar25 + 0x24);
  piVar15 = (int *)(param_1 + 0x12fc);
  do {
    iVar17 = iVar17 + ((uint)pbVar27[8] - (uint)pbVar27[lVar19 + 8]) * *piVar15 +
             ((uint)pbVar27[1] - (uint)pbVar27[lVar19 + 1]) * piVar15[-7] +
             ((uint)pbVar27[2] - (uint)pbVar27[lVar19 + 2]) * piVar15[-6] +
             ((uint)pbVar27[3] - (uint)pbVar27[lVar19 + 3]) * piVar15[-5] +
             ((uint)pbVar27[4] - (uint)pbVar27[lVar19 + 4]) * piVar15[-4] +
             ((uint)pbVar27[5] - (uint)pbVar27[lVar19 + 5]) * piVar15[-3] +
             ((uint)pbVar27[6] - (uint)pbVar27[lVar19 + 6]) * piVar15[-2] +
             ((uint)pbVar27[7] - (uint)pbVar27[lVar19 + 7]) * piVar15[-1] +
             ((uint)*pbVar27 - (uint)pbVar27[lVar19]) * piVar15[-8] +
             ((uint)(byte)~pbVar27[8] - (uint)(byte)~pbVar27[lVar19 + 8]) * *piVar16;
    lVar20 = lVar20 + -1;
    piVar16 = piVar16 + 10;
    pbVar27 = pbVar27 + 9;
    piVar15 = piVar15 + 10;
  } while (lVar20 != 0);
  lVar20 = 0x10;
  piVar16 = (int *)(param_1 + 0x1478);
  pbVar27 = (byte *)(lVar25 + 0x7e);
  piVar15 = (int *)(param_1 + 0x1474);
  do {
    iVar17 = iVar17 + ((uint)pbVar27[2] - (uint)pbVar27[lVar19 + 2]) * *piVar15 +
             ((uint)pbVar27[1] - (uint)pbVar27[lVar19 + 1]) * piVar15[-1] +
             ((uint)*pbVar27 - (uint)pbVar27[lVar19]) * piVar15[-2] +
             ((uint)(byte)~pbVar27[2] - (uint)(byte)~pbVar27[lVar19 + 2]) * *piVar16;
    lVar20 = lVar20 + -1;
    piVar16 = piVar16 + 4;
    pbVar27 = pbVar27 + 3;
    piVar15 = piVar15 + 4;
  } while (lVar20 != 0);
  pbVar27 = (byte *)(lVar18 + 0xb0);
  local_58 = (int *)0x4;
  piVar16 = (int *)(param_1 + 0x1570);
  do {
    local_68 = 2;
    do {
      local_60 = (int *)0x2;
      do {
        iVar28 = 0;
        lVar20 = 6;
        do {
          piVar15 = piVar16 + 2;
          pbVar14 = pbVar27;
          lVar21 = 6;
          piVar24 = piVar16;
          if (iVar28 == 0) {
            lVar21 = 3;
          }
          do {
            iVar17 = iVar17 + ((uint)pbVar14[lVar26] - (uint)*pbVar14) * piVar24[1] +
                     ((uint)pbVar14[lVar26 + -2] - (uint)pbVar14[-2]) * piVar24[-1] +
                     ((uint)pbVar14[lVar26 + -1] - (uint)pbVar14[-1]) * *piVar24 +
                     ((uint)(byte)~pbVar14[lVar26] - (uint)(byte)~*pbVar14) * *piVar15;
            lVar21 = lVar21 + -1;
            pbVar14 = pbVar14 + 3;
            piVar15 = piVar15 + 4;
            piVar24 = piVar24 + 4;
          } while (lVar21 != 0);
          iVar28 = iVar28 + 1;
          pbVar27 = pbVar27 + 0x12;
          piVar16 = piVar16 + 0x18;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        local_60 = (int *)((longlong)local_60 + -1);
      } while (local_60 != (int *)0x0);
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    local_58 = (int *)((longlong)local_58 + -1);
  } while (local_58 != (int *)0x0);
  lVar20 = 4;
  pbVar27 = (byte *)(lVar25 + 0x76e);
  piVar16 = (int *)(param_1 + 0x4270);
  piVar15 = (int *)(param_1 + 0x4274);
  do {
    pbVar23 = pbVar27 + lVar19;
    pbVar14 = pbVar27 + 1;
    pbVar7 = pbVar27 + lVar19 + 1;
    bVar12 = *pbVar27;
    pbVar27 = pbVar27 + 2;
    iVar17 = iVar17 + ((uint)*pbVar14 - (uint)*pbVar7) * *piVar16 +
             ((uint)bVar12 - (uint)*pbVar23) * piVar16[-1] +
             ((uint)(byte)~*pbVar14 - (uint)(byte)~*pbVar7) * *piVar15;
    lVar20 = lVar20 + -1;
    piVar16 = piVar16 + 3;
    piVar15 = piVar15 + 3;
  } while (lVar20 != 0);
  lVar20 = *(longlong *)(param_1 + 0x1228);
  lVar21 = 7;
  piVar16 = (int *)(param_1 + 0x42a8);
  pbVar27 = (byte *)(lVar20 + 0x777);
  piVar15 = (int *)(param_1 + 0x42a4);
  do {
    iVar17 = iVar17 + ((uint)pbVar27[lVar26 + 1] - (uint)pbVar27[1]) * *piVar15 +
             ((uint)pbVar27[lVar26 + -1] - (uint)pbVar27[-1]) * piVar15[-2] +
             ((uint)pbVar27[lVar26] - (uint)*pbVar27) * piVar15[-1] +
             ((uint)(byte)~pbVar27[lVar26 + 1] - (uint)(byte)~pbVar27[1]) * *piVar16;
    lVar21 = lVar21 + -1;
    piVar16 = piVar16 + 4;
    pbVar27 = pbVar27 + 3;
    piVar15 = piVar15 + 4;
  } while (lVar21 != 0);
  lVar21 = *(longlong *)(param_1 + 0x1228);
  lVar22 = 5;
  iVar17 = ((uint)*(byte *)(lVar25 + 0x78b) - (uint)*(byte *)(lVar20 + 0x78b)) *
           *(int *)(param_1 + 0x430c) + iVar17 +
           ((uint)(byte)~*(byte *)(lVar25 + 0x78e) - (uint)(byte)~*(byte *)(lVar20 + 0x78e)) *
           *(int *)(param_1 + 0x4328) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x78d) - (uint)(byte)~*(byte *)(lVar20 + 0x78d)) *
           *(int *)(param_1 + 0x4320) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x78c) - (uint)(byte)~*(byte *)(lVar20 + 0x78c)) *
           *(int *)(param_1 + 0x4318) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x78b) - (uint)(byte)~*(byte *)(lVar20 + 0x78b)) *
           *(int *)(param_1 + 0x4310) +
           ((uint)*(byte *)(lVar25 + 0x78e) - (uint)*(byte *)(lVar20 + 0x78e)) *
           *(int *)(param_1 + 0x4324) +
           ((uint)*(byte *)(lVar25 + 0x78d) - (uint)*(byte *)(lVar20 + 0x78d)) *
           *(int *)(param_1 + 0x431c) +
           ((uint)*(byte *)(lVar25 + 0x78c) - (uint)*(byte *)(lVar20 + 0x78c)) *
           *(int *)(param_1 + 0x4314) +
           ((uint)*(byte *)(lVar25 + 0x78f) - (uint)*(byte *)(lVar20 + 0x78f)) *
           *(int *)(param_1 + 0x432c) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x793) - (uint)(byte)~*(byte *)(lVar21 + 0x793)) *
           *(int *)(param_1 + 0x4350) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x792) - (uint)(byte)~*(byte *)(lVar21 + 0x792)) *
           *(int *)(param_1 + 0x4348) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x791) - (uint)(byte)~*(byte *)(lVar21 + 0x791)) *
           *(int *)(param_1 + 0x4340) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x790) - (uint)(byte)~*(byte *)(lVar21 + 0x790)) *
           *(int *)(param_1 + 0x4338) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x78f) - (uint)(byte)~*(byte *)(lVar20 + 0x78f)) *
           *(int *)(param_1 + 0x4330) +
           ((uint)*(byte *)(lVar25 + 0x793) - (uint)*(byte *)(lVar21 + 0x793)) *
           *(int *)(param_1 + 0x434c) +
           ((uint)*(byte *)(lVar25 + 0x792) - (uint)*(byte *)(lVar21 + 0x792)) *
           *(int *)(param_1 + 0x4344) +
           ((uint)*(byte *)(lVar25 + 0x791) - (uint)*(byte *)(lVar21 + 0x791)) *
           *(int *)(param_1 + 0x433c) +
           ((uint)*(byte *)(lVar25 + 0x790) - (uint)*(byte *)(lVar21 + 0x790)) *
           *(int *)(param_1 + 0x4334);
  pbVar27 = (byte *)(lVar25 + 0x795);
  piVar16 = (int *)(param_1 + 0x4360);
  do {
    pbVar7 = pbVar27 + lVar19 + -1;
    pbVar14 = pbVar27 + -1;
    bVar12 = *pbVar27;
    pbVar23 = pbVar27 + lVar19;
    pbVar27 = pbVar27 + 2;
    iVar17 = iVar17 + ((uint)(byte)~bVar12 - (uint)(byte)~*pbVar23) * *piVar16 +
             ((uint)(byte)~*pbVar14 - (uint)(byte)~*pbVar7) * piVar16[-2] +
             ((uint)*pbVar14 - (uint)*pbVar7) * piVar16[-3] +
             ((uint)bVar12 - (uint)*pbVar23) * piVar16[-1];
    lVar22 = lVar22 + -1;
    piVar16 = piVar16 + 4;
  } while (lVar22 != 0);
  local_58 = (int *)(param_1 + 0x43d8);
  iVar17 = ((uint)(byte)~*(byte *)(lVar25 + 0x7a2) - (uint)(byte)~*(byte *)(lVar18 + 0x7a2)) *
           *(int *)(param_1 + 0x43c8) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x7a1) - (uint)(byte)~*(byte *)(lVar18 + 0x7a1)) *
           *(int *)(param_1 + 0x43c0) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x7a0) - (uint)(byte)~*(byte *)(lVar18 + 0x7a0)) *
           *(int *)(param_1 + 0x43b8) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x79f) - (uint)(byte)~*(byte *)(lVar18 + 0x79f)) *
           *(int *)(param_1 + 0x43b0) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x79e) - (uint)(byte)~*(byte *)(lVar18 + 0x79e)) *
           *(int *)(param_1 + 0x43a8) +
           ((uint)*(byte *)(lVar25 + 0x7a2) - (uint)*(byte *)(lVar18 + 0x7a2)) *
           *(int *)(param_1 + 0x43c4) +
           ((uint)*(byte *)(lVar25 + 0x7a1) - (uint)*(byte *)(lVar18 + 0x7a1)) *
           *(int *)(param_1 + 0x43bc) +
           ((uint)*(byte *)(lVar25 + 0x7a0) - (uint)*(byte *)(lVar18 + 0x7a0)) *
           *(int *)(param_1 + 0x43b4) +
           ((uint)*(byte *)(lVar25 + 0x79f) - (uint)*(byte *)(lVar18 + 0x79f)) *
           *(int *)(param_1 + 0x43ac) +
           ((uint)*(byte *)(lVar25 + 0x79e) - (uint)*(byte *)(lVar18 + 0x79e)) *
           *(int *)(param_1 + 0x43a4) + iVar17;
  local_60 = (int *)(param_1 + 0x4404);
  local_68 = 2;
  pbVar27 = (byte *)(*(longlong *)(param_1 + 0x1228) + 0x7aa);
  pbVar14 = (byte *)(lVar25 + 0x7ad);
  piVar16 = (int *)(param_1 + 0x43d4);
  pbVar23 = (byte *)(*(longlong *)(param_1 + 0x1228) + 0x7a4);
  piVar15 = (int *)(param_1 + 0x43f4);
  piVar24 = (int *)(param_1 + 0x43ec);
  piVar29 = (int *)(param_1 + 0x4408);
  do {
    iVar28 = *local_58;
    local_58 = local_58 + 4;
    bVar12 = (pbVar14 + 1)[lVar19 + -1];
    iVar13 = *local_60;
    local_60 = local_60 + 2;
    iVar17 = ((uint)pbVar27[lVar26] - (uint)*pbVar27) * piVar24[1] +
             ((uint)pbVar23[lVar26 + 1] - (uint)pbVar23[1]) * *piVar16 + iVar17 +
             ((uint)pbVar23[lVar26 + -1] - (uint)pbVar23[-1]) * piVar16[-2] +
             ((uint)pbVar23[lVar26] - (uint)*pbVar23) * piVar16[-1] +
             ((uint)(byte)~pbVar23[lVar26 + 1] - (uint)(byte)~pbVar23[1]) * iVar28 +
             ((uint)pbVar27[lVar26 + -1] - (uint)pbVar27[-1]) * *piVar24 +
             ((uint)(byte)~pbVar27[lVar26] - (uint)(byte)~*pbVar27) * *piVar15 +
             ((uint)*pbVar14 - (uint)bVar12) * iVar13 +
             ((uint)(byte)~*pbVar14 - (uint)(byte)~bVar12) * *piVar29;
    local_68 = local_68 + -1;
    pbVar27 = pbVar27 + 2;
    pbVar14 = pbVar14 + 1;
    piVar16 = piVar16 + 4;
    pbVar23 = pbVar23 + 3;
    piVar15 = piVar15 + 3;
    piVar24 = piVar24 + 3;
    piVar29 = piVar29 + 2;
  } while (local_68 != 0);
  local_50 = 2;
  piVar16 = (int *)(param_1 + 0x44fc);
  pbVar27 = (byte *)(lVar18 + 0x7d2);
  iVar17 = ((uint)*(byte *)(lVar25 + 0x7b4) - (uint)*(byte *)(lVar18 + 0x7b4)) *
           *(int *)(param_1 + 0x4444) +
           iVar17 + ((uint)*(byte *)(lVar25 + 0x7af) - (uint)*(byte *)(lVar18 + 0x7af)) *
                    *(int *)(param_1 + 0x4424) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x7b1) - (uint)(byte)~*(byte *)(lVar18 + 0x7b1)) *
           *(int *)(param_1 + 0x4438) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x7b0) - (uint)(byte)~*(byte *)(lVar18 + 0x7b0)) *
           *(int *)(param_1 + 0x4430) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x7af) - (uint)(byte)~*(byte *)(lVar18 + 0x7af)) *
           *(int *)(param_1 + 0x4428) +
           ((uint)*(byte *)(lVar25 + 0x7b1) - (uint)*(byte *)(lVar18 + 0x7b1)) *
           *(int *)(param_1 + 0x4434) +
           ((uint)*(byte *)(lVar25 + 0x7b0) - (uint)*(byte *)(lVar18 + 0x7b0)) *
           *(int *)(param_1 + 0x442c) +
           ((uint)*(byte *)(lVar25 + 0x7b2) - (uint)*(byte *)(lVar18 + 0x7b2)) *
           *(int *)(param_1 + 0x443c) +
           ((uint)*(byte *)(lVar25 + 0x7b3) - (uint)*(byte *)(lVar18 + 0x7b3)) *
           *(int *)(param_1 + 0x4440) +
           ((uint)(byte)~*(byte *)(lVar25 + 0x7b4) - (uint)(byte)~*(byte *)(lVar18 + 0x7b4)) *
           *(int *)(param_1 + 0x4448);
  do {
    iVar17 = ((uint)pbVar27[lVar26 + -0x10] - (uint)pbVar27[-0x10]) * piVar16[-0x1b] +
             iVar17 + ((uint)pbVar27[lVar26 + -0x1d] - (uint)pbVar27[-0x1d]) * piVar16[-0x2c] +
             ((uint)(byte)~pbVar27[lVar26 + -0x1d] - (uint)(byte)~pbVar27[-0x1d]) * piVar16[-0x2b] +
             ((uint)pbVar27[lVar26 + -0x13] - (uint)pbVar27[-0x13]) * piVar16[-0x21] +
             ((uint)pbVar27[lVar26 + -0x1c] - (uint)pbVar27[-0x1c]) * piVar16[-0x2a] +
             ((uint)pbVar27[lVar26 + -0x1b] - (uint)pbVar27[-0x1b]) * piVar16[-0x29] +
             ((uint)pbVar27[lVar26 + -0x1a] - (uint)pbVar27[-0x1a]) * piVar16[-0x28] +
             ((uint)pbVar27[lVar26 + -0x19] - (uint)pbVar27[-0x19]) * piVar16[-0x27] +
             ((uint)pbVar27[lVar26 + -0x18] - (uint)pbVar27[-0x18]) * piVar16[-0x26] +
             ((uint)pbVar27[lVar26 + -0x17] - (uint)pbVar27[-0x17]) * piVar16[-0x25] +
             ((uint)pbVar27[lVar26 + -0x16] - (uint)pbVar27[-0x16]) * piVar16[-0x24] +
             ((uint)pbVar27[lVar26 + -0x15] - (uint)pbVar27[-0x15]) * piVar16[-0x23] +
             ((uint)pbVar27[lVar26 + -0x14] - (uint)pbVar27[-0x14]) * piVar16[-0x22] +
             ((uint)(byte)~pbVar27[lVar26 + -0x13] - (uint)(byte)~pbVar27[-0x13]) * piVar16[-0x20] +
             ((uint)pbVar27[lVar26 + -0x12] - (uint)pbVar27[-0x12]) * piVar16[-0x1f] +
             ((uint)(byte)~pbVar27[lVar26 + -0x12] - (uint)(byte)~pbVar27[-0x12]) * piVar16[-0x1e] +
             ((uint)(byte)~pbVar27[lVar26 + -8] - (uint)(byte)~pbVar27[-8]) * piVar16[-10] +
             ((uint)(byte)~pbVar27[lVar26 + -0x11] - (uint)(byte)~pbVar27[-0x11]) * piVar16[-0x1c] +
             ((uint)(byte)~pbVar27[lVar26 + -9] - (uint)(byte)~pbVar27[-9]) * piVar16[-0xc] +
             ((uint)(byte)~pbVar27[lVar26 + -10] - (uint)(byte)~pbVar27[-10]) * piVar16[-0xe] +
             ((uint)(byte)~pbVar27[lVar26 + -0xb] - (uint)(byte)~pbVar27[-0xb]) * piVar16[-0x10] +
             ((uint)(byte)~pbVar27[lVar26 + -0xc] - (uint)(byte)~pbVar27[-0xc]) * piVar16[-0x12] +
             ((uint)(byte)~pbVar27[lVar26 + -0xd] - (uint)(byte)~pbVar27[-0xd]) * piVar16[-0x14] +
             ((uint)(byte)~pbVar27[lVar26 + -0xe] - (uint)(byte)~pbVar27[-0xe]) * piVar16[-0x16] +
             ((uint)(byte)~pbVar27[lVar26 + -0xf] - (uint)(byte)~pbVar27[-0xf]) * piVar16[-0x18] +
             ((uint)(byte)~pbVar27[lVar26 + -0x10] - (uint)(byte)~pbVar27[-0x10]) * piVar16[-0x1a] +
             ((uint)pbVar27[lVar26 + -8] - (uint)pbVar27[-8]) * piVar16[-0xb] +
             ((uint)pbVar27[lVar26 + -0x11] - (uint)pbVar27[-0x11]) * piVar16[-0x1d] +
             ((uint)pbVar27[lVar26 + -9] - (uint)pbVar27[-9]) * piVar16[-0xd] +
             ((uint)pbVar27[lVar26 + -10] - (uint)pbVar27[-10]) * piVar16[-0xf] +
             ((uint)pbVar27[lVar26 + -0xb] - (uint)pbVar27[-0xb]) * piVar16[-0x11] +
             ((uint)pbVar27[lVar26 + -0xc] - (uint)pbVar27[-0xc]) * piVar16[-0x13] +
             ((uint)pbVar27[lVar26 + -0xd] - (uint)pbVar27[-0xd]) * piVar16[-0x15] +
             ((uint)pbVar27[lVar26 + -0xe] - (uint)pbVar27[-0xe]) * piVar16[-0x17] +
             ((uint)pbVar27[lVar26 + -0xf] - (uint)pbVar27[-0xf]) * piVar16[-0x19];
    lVar18 = 2;
    piVar15 = piVar16 + -6;
    pbVar14 = pbVar27 + -6;
    piVar24 = piVar16 + -8;
    do {
      iVar17 = iVar17 + ((uint)pbVar14[lVar26] - (uint)*pbVar14) * *piVar24 +
               ((uint)pbVar14[lVar26 + -1] - (uint)pbVar14[-1]) * piVar24[-1] +
               ((uint)pbVar14[lVar26 + 1] - (uint)pbVar14[1]) * piVar24[1] +
               ((uint)(byte)~pbVar14[lVar26 + 1] - (uint)(byte)~pbVar14[1]) * *piVar15;
      lVar18 = lVar18 + -1;
      piVar15 = piVar15 + 4;
      pbVar14 = pbVar14 + 3;
      piVar24 = piVar24 + 4;
    } while (lVar18 != 0);
    pbVar8 = pbVar27 + lVar26 + 1;
    pbVar14 = pbVar27 + -1;
    pbVar23 = pbVar27 + 1;
    pbVar6 = pbVar27 + lVar26;
    pbVar9 = pbVar27 + lVar26 + 3;
    pbVar10 = pbVar27 + lVar26 + -1;
    pbVar7 = pbVar27 + 2;
    piVar15 = piVar16 + -1;
    piVar24 = piVar16 + 1;
    bVar12 = *pbVar27;
    iVar28 = *piVar16;
    pbVar11 = pbVar27 + lVar26 + 2;
    pbVar1 = pbVar27 + 3;
    piVar29 = piVar16 + 5;
    pbVar27 = pbVar27 + 0x21;
    piVar2 = piVar16 + 6;
    piVar3 = piVar16 + 3;
    piVar4 = piVar16 + 4;
    piVar5 = piVar16 + 2;
    piVar16 = piVar16 + 0x33;
    iVar17 = ((uint)*pbVar6 - (uint)bVar12) * iVar28 + iVar17 +
             ((uint)*pbVar10 - (uint)*pbVar14) * *piVar15 +
             ((uint)*pbVar8 - (uint)*pbVar23) * *piVar24 +
             ((uint)*pbVar11 - (uint)*pbVar7) * *piVar3 +
             ((uint)(byte)~*pbVar9 - (uint)(byte)~*pbVar1) * *piVar2 +
             ((uint)(byte)~*pbVar11 - (uint)(byte)~*pbVar7) * *piVar4 +
             ((uint)(byte)~*pbVar8 - (uint)(byte)~*pbVar23) * *piVar5 +
             ((uint)*pbVar9 - (uint)*pbVar1) * *piVar29;
    local_50 = local_50 + -1;
  } while (local_50 != 0);
  return -iVar17;
}



// FUNCTION 145621b80 FUN_145621b80 body=36 status=ok
// SIG undefined FUN_145621b80(void)

undefined8 FUN_145621b80(longlong param_1)

{
  if (((*(int *)(param_1 + 0xb64c8) != 0) && (*(int *)(param_1 + 0x2e56c) != 1)) &&
     (*(int *)(param_1 + 0x2a2e8) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145621bb0 FUN_145621bb0 body=66 status=ok
// SIG undefined FUN_145621bb0(void)

void FUN_145621bb0(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  
  pcVar1 = *(char **)(param_1 + 0xb4950);
  if (((*(int *)(param_1 + 0xb4988) != 0) || (*(int *)(param_1 + 0xb498c) != 0)) &&
     (iVar3 = *(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308), lVar2 = (longlong)iVar3,
     0 < iVar3)) {
    do {
      if (*pcVar1 == '\a') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145621c00 FUN_145621c00 body=281 status=ok
// SIG undefined FUN_145621c00(void)

void FUN_145621c00(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  
  pcVar1 = (char *)(param_1 + 0x2b088);
  pcVar2 = *(char **)(param_1 + 0xb4950);
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    *(undefined4 *)(param_1 + 0xb4988) = 0;
    *(undefined4 *)(param_1 + 0xb498c) = 1;
  }
  if (*(int *)(param_1 + 0xb498c) != 0) {
    if (*(int *)(param_1 + 0xb4988) == 0) {
      FUN_145679d70(pcVar1,7,3);
      FUN_145679d70(pcVar1,7,1);
      if (*pcVar1 != '\0') {
        *(undefined2 *)(param_1 + 0x2b089) = 0x101;
      }
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)) {
        lVar4 = *(longlong *)(param_1 + 0xb4990) - (longlong)pcVar2;
        do {
          if (*pcVar2 == '\0') {
            *pcVar2 = pcVar2[lVar4];
          }
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310));
      }
      FUN_145679d50(pcVar1);
      FUN_145472450(pcVar1,7,3);
      FUN_145472450(pcVar1,7,1);
      FUN_145472490(pcVar1,7,1,0xffffffc1);
    }
    *(undefined4 *)(param_1 + 0xb498c) = 0;
  }
  return;
}



// FUNCTION 145621d20 FUN_145621d20 body=609 status=ok
// SIG undefined FUN_145621d20(void)

void FUN_145621d20(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  uint local_70 [8];
  int local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x2b088;
  if (((*(int *)(param_1 + 0x2e568) == 2) && (4 < *(int *)(param_1 + 0x2e558))) &&
     (*(char *)(param_1 + 0xcee78) != '\0')) {
    local_50[0] = *(int *)(param_1 + 0xceef0);
    local_50[1] = *(undefined4 *)(param_1 + 0xceef4);
    local_50[2] = *(undefined4 *)(param_1 + 0xceef8);
    local_50[3] = *(undefined4 *)(param_1 + 0xceefc);
    local_40 = *(undefined4 *)(param_1 + 0xcef00);
    uStack_3c = *(undefined4 *)(param_1 + 0xcef04);
    uStack_38 = *(undefined4 *)(param_1 + 0xcef08);
    uStack_34 = *(undefined4 *)(param_1 + 0xcef0c);
    FUN_145679d50(lVar1);
    FUN_145472420(lVar1);
    *(undefined1 *)(param_1 + 0x2b08b) = 0;
    memcpy(*(void **)(param_1 + 0xb4950),*(void **)(param_1 + 0xcee80),
           (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
    local_78 = (param_1 + 0xcee90) - (longlong)local_70;
    iVar6 = 0;
    lVar7 = 0;
    do {
      lVar3 = lVar7 + -0x70;
      uVar2 = *(uint *)((longlong)local_70 + local_78 + lVar3 + 0x70);
      uVar5 = (int)uVar2 >> 0x1f;
      iVar4 = FUN_1455cb810((uVar2 ^ uVar5) - uVar5);
      if (*(int *)((longlong)local_70 + local_78 + lVar3 + 0x70) < 0) {
        iVar4 = -iVar4;
      }
      FUN_145679d70(lVar1,iVar6,0);
      FUN_145679d70(lVar1,iVar6);
      if (iVar4 != 0) {
        FUN_145472450(lVar1,iVar6);
        FUN_145472490(lVar1,iVar6);
      }
      if (*(int *)(&stack0x000cee40 + (param_1 - (longlong)local_70) + lVar3 + 0x70) != 0) {
        FUN_145472450(lVar1,iVar6,1);
        FUN_145472490(lVar1,iVar6);
      }
      if (*(int *)(&stack0x000cee60 + (param_1 - (longlong)local_70) + lVar3 + 0x70) != 0) {
        FUN_145472450(lVar1,iVar6,3);
        FUN_145472490(lVar1,iVar6);
      }
      iVar4 = *(int *)((longlong)local_50 + lVar7);
      if (-1 < iVar4) {
        if (iVar4 == 3) {
          if (*(int *)(param_1 + 0xb4834) != 0) goto LAB_145621f41;
        }
        else if (iVar4 == 2) {
          uVar2 = *(uint *)(param_1 + 0xb46a8);
          if (*(int *)(param_1 + 0xb42d0) == 0) {
            *(undefined4 *)((longlong)local_50 + lVar7) = 1;
          }
          if ((uVar2 & 2) == 0) goto LAB_145621f41;
        }
        FUN_145472450(lVar1,iVar6,2);
        FUN_145472490(lVar1,iVar6);
      }
LAB_145621f41:
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 4;
    } while (iVar6 < 8);
    *(undefined1 *)(param_1 + 0xcee78) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 145621f90 FUN_145621f90 body=350 status=ok
// SIG undefined FUN_145621f90(void)

void FUN_145621f90(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
     (*(int *)(param_1 + 0x2e4d8) != 0)) {
    FUN_14546fe10(param_1 + 0x29ee0);
  }
  else if (*(int *)(param_1 + 0xb64dc) == 0) {
    *(undefined4 *)(param_1 + 0x2b118) = *(undefined4 *)(param_1 + 0x2f6cc);
  }
  if ((*(int *)(param_1 + 0xcee70) != 0) && (*(int *)(param_1 + 0xb64dc) == 0)) {
    iVar1 = 0;
    iVar2 = iVar1;
    if ((*(int *)(param_1 + 0xb4304) == 0) &&
       ((*(int *)(param_1 + 0x2f6c8) != 0 || (*(int *)(param_1 + 0x2f6cc) != 0)))) {
      iVar2 = 1;
    }
    if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x2b118) = 3;
        goto LAB_14562204e;
      }
      if (*(int *)(param_1 + 0xb5018 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) != 3) {
        iVar1 = (3 < *(byte *)((ulonglong)*(byte *)(param_1 + 0xb5014) + 0xb58f4 + param_1)) + 1;
      }
    }
    *(int *)(param_1 + 0x2b118) = iVar1;
  }
LAB_14562204e:
  if (*(int *)(param_1 + 0x2a2e4) != 0) {
    memcpy(*(void **)(param_1 + 0x2b108),
           (void *)((ulonglong)*(uint *)(param_1 + 0x2b118) * 0x7fc +
                   *(longlong *)(param_1 + 0x2b110)),0x7fc);
    *(undefined8 *)(param_1 + 0xb4550) = 0;
    *(undefined8 *)(param_1 + 0xb4558) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2f6c8) = 1;
  *(undefined4 *)(param_1 + 0x2f6cc) = 1;
  *(undefined8 *)(param_1 + 0xb4550) = 0;
  *(undefined8 *)(param_1 + 0xb4558) = 0;
  *(undefined8 *)(param_1 + 0xb4560) = 0;
  *(undefined8 *)(param_1 + 0xb4568) = 0;
  *(undefined8 *)(param_1 + 0xb4570) = 0;
  *(undefined8 *)(param_1 + 0xb4578) = 0;
  *(undefined8 *)(param_1 + 0xb4580) = 0;
  *(undefined8 *)(param_1 + 0xb4588) = 0;
  *(undefined8 *)(param_1 + 0xb4590) = 0;
  *(undefined8 *)(param_1 + 0xb4598) = 0;
  *(undefined8 *)(param_1 + 0xb45a0) = 0;
  *(undefined8 *)(param_1 + 0xb45a8) = 0;
  *(undefined8 *)(param_1 + 0xb45b0) = 0;
  *(undefined8 *)(param_1 + 0xb45b8) = 0;
  *(undefined8 *)(param_1 + 0xb45c0) = 0;
  *(undefined8 *)(param_1 + 0xb45c8) = 0;
  return;
}



// FUNCTION 1456220f0 FUN_1456220f0 body=274 status=ok
// SIG undefined FUN_1456220f0(void)

void FUN_1456220f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  size_t _Size;
  
  *(void **)(param_1 + 0x498) =
       (void *)(((longlong)*(int *)(param_1 + 0x434) + 1) * 0x44 +
               (longlong)*(void **)(param_1 + 0x490));
  memset(*(void **)(param_1 + 0x490),0,
         (longlong)((*(int *)(param_1 + 0x428) + 1) * *(int *)(param_1 + 0x434)) * 0x44);
  _Size = (longlong)*(int *)(param_1 + 0x434) * 0x44;
  *(size_t *)(param_1 + 0x4a8) = (longlong)*(void **)(param_1 + 0x4a0) + _Size + 0x44;
  memset(*(void **)(param_1 + 0x4a0),0,_Size);
  iVar2 = *(int *)(param_1 + 0x428);
  iVar4 = 1;
  if (1 < iVar2 + 1) {
    do {
      iVar2 = iVar4 * *(int *)(param_1 + 0x434);
      iVar4 = iVar4 + 1;
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x44 + *(longlong *)(param_1 + 0x4a0));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      iVar2 = *(int *)(param_1 + 0x428);
    } while (iVar4 < iVar2 + 1);
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x434) * 8;
  *(longlong *)(param_1 + 0x4d0) = (longlong)*(void **)(param_1 + 0x4c8) + lVar1 + 8;
  *(longlong *)(param_1 + 0x4e0) = lVar1 + *(longlong *)(param_1 + 0x4d8) + 8;
  memset(*(void **)(param_1 + 0x4c8),0,(longlong)((iVar2 + 1) * *(int *)(param_1 + 0x434)) << 3);
  return;
}



// FUNCTION 145622210 FUN_145622210 body=169 status=ok
// SIG undefined FUN_145622210(void)

bool FUN_145622210(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  lVar1 = FUN_14518efb0(lVar2,0x44);
  *(longlong *)(param_1 + 0x490) = lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_14518efb0(lVar2,0x44);
    *(longlong *)(param_1 + 0x4a0) = lVar1;
    if (lVar1 != 0) {
      *(int *)(param_1 + 0x48c) = param_2;
      lVar1 = FUN_14518efb0(lVar2,8);
      *(longlong *)(param_1 + 0x4c8) = lVar1;
      if (lVar1 != 0) {
        lVar1 = FUN_14518efb0(lVar2,8);
        *(longlong *)(param_1 + 0x4d8) = lVar1;
        return lVar1 == 0;
      }
    }
  }
  return true;
}



// FUNCTION 1456222c0 FUN_1456222c0 body=108 status=ok
// SIG undefined FUN_1456222c0(void)

void FUN_1456222c0(longlong param_1)

{
  FUN_14518f040(*(undefined8 *)(param_1 + 0x490));
  *(undefined8 *)(param_1 + 0x490) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x4a0));
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x4c8));
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x4d8));
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  return;
}



// FUNCTION 145622330 FUN_145622330 body=890 status=ok
// SIG undefined FUN_145622330(void)

void FUN_145622330(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_14518f040(*(undefined8 *)(param_1 + 0x27ed0));
  iVar3 = 0;
  *(undefined8 *)(param_1 + 0x27ed0) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2f680));
  *(undefined8 *)(param_1 + 0x2f680) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4950));
  *(undefined8 *)(param_1 + 0xb4950) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb3a10));
  *(undefined8 *)(param_1 + 0xb3a10) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4220));
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4228));
  *(undefined8 *)(param_1 + 0xb4220) = 0;
  *(undefined8 *)(param_1 + 0xb4228) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4230));
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4238));
  *(undefined8 *)(param_1 + 0xb4230) = 0;
  *(undefined8 *)(param_1 + 0xb4238) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4240));
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4248));
  *(undefined8 *)(param_1 + 0xb4240) = 0;
  *(undefined8 *)(param_1 + 0xb4248) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4250));
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4258));
  *(undefined8 *)(param_1 + 0xb4250) = 0;
  *(undefined8 *)(param_1 + 0xb4258) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4958));
  *(undefined8 *)(param_1 + 0xb4958) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee18));
  *(undefined8 *)(param_1 + 0xcee18) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcb7b0));
  *(undefined8 *)(param_1 + 0xcb7b0) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee20));
  *(undefined8 *)(param_1 + 0xcee20) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee28));
  *(undefined8 *)(param_1 + 0xcee28) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee30));
  *(undefined8 *)(param_1 + 0xcee30) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee40));
  *(undefined8 *)(param_1 + 0xcee40) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee60));
  *(undefined8 *)(param_1 + 0xcee60) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee68));
  *(undefined8 *)(param_1 + 0xcee68) = 0;
  FUN_14565d140(*(undefined8 *)(param_1 + 0xb4980));
  *(undefined8 *)(param_1 + 0xb4980) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4990));
  *(undefined8 *)(param_1 + 0xb4990) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcee80));
  *(undefined8 *)(param_1 + 0xcee80) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xcd3e8));
  *(undefined8 *)(param_1 + 0xcd3e8) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2f6f0));
  *(undefined8 *)(param_1 + 0x2f6f0) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2f700));
  *(undefined8 *)(param_1 + 0x2f700) = 0;
  FUN_145192550(*(undefined8 *)(param_1 + 0x2e4f0));
  FUN_1451924a0(param_1 + 0x29ee0);
  FUN_145466d30(param_1 + 0x2f708);
  FUN_145466d30(param_1 + 0x2e6f0);
  FUN_145466d30(param_1 + 0x2e798);
  FUN_145466d30(param_1 + 0xb6420);
  FUN_145613ae0(*(undefined8 *)(param_1 + 0x2e6c8));
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2f7a8));
  *(undefined8 *)(param_1 + 0x2f7a8) = 0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2ffa8));
  *(undefined8 *)(param_1 + 0x2ffa8) = 0;
  FUN_14567af20(param_1 + 0xc030);
  if (0 < *(int *)(param_1 + 0xb64e8)) {
    puVar1 = (undefined8 *)(param_1 + 0xb9040);
    do {
      FUN_14518f040(*puVar1);
      *puVar1 = 0;
      iVar3 = iVar3 + 1;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0x357;
    } while (iVar3 < *(int *)(param_1 + 0xb64e8));
  }
  if (*(longlong *)(param_1 + 0xcba70) != 0) {
    FUN_14518f040();
    *(undefined8 *)(param_1 + 0xcba70) = 0;
  }
  lVar2 = param_1 + 0xb65b8;
  lVar4 = 0x19;
  do {
    FUN_145466d30(lVar2);
    lVar2 = lVar2 + 0xa0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  memset((void *)(param_1 + 0xb65b8),0,4000);
  FUN_145466d30(param_1 + 0xb7558);
  memset((void *)(param_1 + 0xb7558),0,0xa0);
  FUN_145466d30(param_1 + 0xb64f8);
  memset((void *)(param_1 + 0xb64f8),0,0xb8);
  FUN_145688c10(param_1);
  return;
}



// FUNCTION 1456226b0 FUN_1456226b0 body=241 status=ok
// SIG undefined FUN_1456226b0(void)

void FUN_1456226b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x33a08) = *(undefined8 *)(param_1 + 0x124d4);
  *(undefined8 *)(param_1 + 0x33a10) = *(undefined8 *)(param_1 + 0x124dc);
  memcpy((void *)(param_1 + 0x33a18),*(void **)(param_1 + 0xb4220),0x1fffc);
  memcpy((void *)(param_1 + 0x53a14),*(void **)(param_1 + 0xb4228),0x1fffc);
  memcpy((void *)(param_1 + 0x73a10),*(void **)(param_1 + 0xb4230),0x1fffc);
  memcpy((void *)(param_1 + 0x93a0c),*(void **)(param_1 + 0xb4238),0x1fffc);
  *(undefined2 *)(param_1 + 0xb3a08) = *(undefined2 *)(param_1 + 0x2b094);
  *(undefined1 *)(param_1 + 0xb3a0a) = *(undefined1 *)(param_1 + 0x2b096);
  memcpy(*(void **)(param_1 + 0xb3a10),*(void **)(param_1 + 0x2a3e8),
         (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
  *(undefined4 *)(param_1 + 0xb3a18) = *(undefined4 *)(param_1 + 0x2b06e);
  *(undefined2 *)(param_1 + 0xb3a1c) = *(undefined2 *)(param_1 + 0x2b074);
  memcpy((void *)(param_1 + 0xb3a20),*(void **)(param_1 + 0x2b108),0x7fc);
  return;
}



// FUNCTION 1456227b0 FUN_1456227b0 body=241 status=ok
// SIG undefined FUN_1456227b0(void)

void FUN_1456227b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x124d4) = *(undefined8 *)(param_1 + 0x33a08);
  *(undefined8 *)(param_1 + 0x124dc) = *(undefined8 *)(param_1 + 0x33a10);
  memcpy(*(void **)(param_1 + 0xb4220),(void *)(param_1 + 0x33a18),0x1fffc);
  memcpy(*(void **)(param_1 + 0xb4228),(void *)(param_1 + 0x53a14),0x1fffc);
  memcpy(*(void **)(param_1 + 0xb4230),(void *)(param_1 + 0x73a10),0x1fffc);
  memcpy(*(void **)(param_1 + 0xb4238),(void *)(param_1 + 0x93a0c),0x1fffc);
  *(undefined2 *)(param_1 + 0x2b094) = *(undefined2 *)(param_1 + 0xb3a08);
  *(undefined1 *)(param_1 + 0x2b096) = *(undefined1 *)(param_1 + 0xb3a0a);
  memcpy(*(void **)(param_1 + 0x2a3e8),*(void **)(param_1 + 0xb3a10),
         (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
  *(undefined4 *)(param_1 + 0x2b06e) = *(undefined4 *)(param_1 + 0xb3a18);
  *(undefined2 *)(param_1 + 0x2b074) = *(undefined2 *)(param_1 + 0xb3a1c);
  memcpy(*(void **)(param_1 + 0x2b108),(void *)(param_1 + 0xb3a20),0x7fc);
  return;
}



// FUNCTION 1456228b0 FUN_1456228b0 body=808 status=ok
// SIG undefined FUN_1456228b0(void)

void FUN_1456228b0(longlong param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  
  pcVar1 = (char *)(param_1 + 0x2b088);
  bVar2 = 48.0 < *(double *)(param_1 + 0xb4330);
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    memset(*(void **)(param_1 + 0xb4950),0,
           (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
    *(undefined2 *)(param_1 + 0x2b089) = 0;
    *(undefined4 *)(param_1 + 0xb46a4) = 0;
    FUN_145679d60(pcVar1);
    FUN_145472420(pcVar1);
  }
  else if (*(int *)(param_1 + 0x2f6cc) == 0) {
    if (*pcVar1 != '\0') {
      if (*(int *)(param_1 + 0xb42d0) == 0) {
        if (*(int *)(param_1 + 0xb4300) == 0) {
          FUN_145679d60(pcVar1);
          memset(*(void **)(param_1 + 0xb4950),0,
                 (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
          *(undefined2 *)(param_1 + 0x2b089) = 0;
          FUN_145472420(pcVar1);
        }
        else {
          *(undefined2 *)(param_1 + 0x2b089) = 0x100;
          *(undefined1 *)(param_1 + 0x2b08b) = 0;
          iVar3 = FUN_145617550(param_1 + 0xb4278,*(double *)(param_1 + 0xb4330),
                                *(double *)(param_1 + 0xb4330) * 1.125,
                                *(undefined4 *)(param_1 + 0x2e4d0));
          FUN_145472490(pcVar1,1,0,iVar3 + 2);
          FUN_145472450(pcVar1,1);
          FUN_145472490(pcVar1,1,1,0xfffffffe);
          FUN_145472450(pcVar1,1,1);
          if ((bVar2) || (*(int *)(param_1 + 0xb46a4) == 100)) {
            FUN_145472490(pcVar1,1,2,3);
            FUN_145472450(pcVar1,1,2);
            FUN_145472450(pcVar1,1,3);
          }
        }
      }
      else if (*(int *)(param_1 + 0xb4304) == 0) {
        *(undefined2 *)(param_1 + 0x2b089) = 0;
      }
      else {
        FUN_145472450(pcVar1,0,2);
        FUN_145472450(pcVar1,1,2);
        FUN_145679d90(pcVar1,0,2);
        FUN_145472490(pcVar1,0,2,3);
        FUN_145679d90(pcVar1,1,2);
        FUN_145472490(pcVar1,1,2,3);
        if (bVar2) {
          FUN_145472450(pcVar1,0,3);
          FUN_145472450(pcVar1,1,3);
        }
        *(undefined1 *)(param_1 + 0x2b08a) = 1;
      }
    }
  }
  else {
    memset(*(void **)(param_1 + 0xb4950),0,
           (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
    *(undefined2 *)(param_1 + 0x2b089) = 0;
    *(undefined4 *)(param_1 + 0xb46a4) = 0;
    FUN_145679d60(pcVar1);
    FUN_145472420(pcVar1);
    FUN_14568f0b0(param_1);
    if (*pcVar1 != '\0') {
      *(undefined2 *)(param_1 + 0x2b089) = 0x101;
      iVar3 = FUN_145617550(param_1 + 0xb4278,*(double *)(param_1 + 0xb4330),
                            *(double *)(param_1 + 0xb4330) * 0.875,
                            *(undefined4 *)(param_1 + 0x2e4d0));
      FUN_145472490(pcVar1,1,0,iVar3 + -2);
      FUN_145472490(pcVar1,1,1,0xfffffffe);
      FUN_145472450(pcVar1,1);
      FUN_145472450(pcVar1,1,1);
      *(undefined1 *)(param_1 + 0x2b08b) = 0;
    }
  }
  return;
}



// FUNCTION 145622be0 FUN_145622be0 body=265 status=ok
// SIG undefined FUN_145622be0(void)

void FUN_145622be0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x2e6c8) == 0) {
    lVar2 = FUN_1456139b0(*(undefined4 *)(param_1 + 0x2e518),*(undefined4 *)(param_1 + 0x2e51c),
                          *(undefined4 *)(param_1 + 0x2a060),*(undefined4 *)(param_1 + 0x2a064),
                          *(undefined4 *)(param_1 + 0x2a068),*(undefined4 *)(param_1 + 0x2e578));
    *(longlong *)(param_1 + 0x2e6c8) = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate lag buffers");
    }
  }
  iVar1 = FUN_145466a50(param_1 + 0xb6420,*(undefined4 *)(param_1 + 0x2e518),
                        *(undefined4 *)(param_1 + 0x2e51c),*(undefined4 *)(param_1 + 0x2a060),
                        *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),0xa0,
                        *(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
  if (iVar1 != 0) {
    FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate altref buffer");
  }
  return;
}



// FUNCTION 145622cf0 FUN_145622cf0 body=537 status=ok
// SIG undefined FUN_145622cf0(void)

void FUN_145622cf0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x29ee0;
  iVar2 = FUN_145466a50(param_1 + 0x2f708,*(undefined4 *)(param_1 + 0x2a048),
                        *(undefined4 *)(param_1 + 0x2a04c),*(undefined4 *)(param_1 + 0x2a060),
                        *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),0xa0,
                        *(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
  if (iVar2 != 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate last frame buffer");
  }
  iVar2 = FUN_145466a50(param_1 + 0x2e6f0,*(undefined4 *)(param_1 + 0x2a048),
                        *(undefined4 *)(param_1 + 0x2a04c),*(undefined4 *)(param_1 + 0x2a060),
                        *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),0xa0,
                        *(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
  if (iVar2 != 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate scaled source buffer");
  }
  if ((((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0x2e56c) == 0)) &&
      (*(int *)(param_1 + 0xb75fc) == 0)) && (2 < *(int *)(param_1 + 0xb64e8))) {
    *(undefined4 *)(param_1 + 0xb75fc) = 1;
    iVar2 = FUN_145466a50(param_1 + 0xb7558,*(int *)(param_1 + 0x2a048) >> 1,
                          *(int *)(param_1 + 0x2a04c) >> 1,*(undefined4 *)(param_1 + 0x2a060),
                          *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),0xa0
                          ,*(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
    if (iVar2 != 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate scaled_frame for svc ");
    }
  }
  iVar2 = FUN_145466a50(param_1 + 0x2e798,*(undefined4 *)(param_1 + 0x2a048),
                        *(undefined4 *)(param_1 + 0x2a04c),*(undefined4 *)(param_1 + 0x2a060),
                        *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),0xa0,
                        *(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
  if (iVar2 != 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate scaled last source buffer");
  }
  return;
}



// FUNCTION 145622f10 FUN_145622f10 body=297 status=ok
// SIG undefined FUN_145622f10(void)

void FUN_145622f10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x29ee0;
  iVar2 = FUN_145192210(lVar1,*(undefined4 *)(param_1 + 0x2a048),*(undefined4 *)(param_1 + 0x2a04c))
  ;
  if (iVar2 != 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate context buffers");
  }
  lVar3 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)),0x24);
  *(longlong *)(param_1 + 0x27ed0) = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->mbmi_ext_base");
  }
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2f7a8));
  lVar3 = FUN_14518efb0(*(int *)(param_1 + 0x2a30c) * *(int *)(param_1 + 0x2a304) * 0x304,0x10);
  *(longlong *)(param_1 + 0x2f7a8) = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->tile_tok[0][0]");
  }
  iVar2 = *(int *)(param_1 + 0x2a308);
  FUN_14518f040(*(undefined8 *)(param_1 + 0x2ffa8));
  lVar3 = FUN_14518efb0((longlong)((iVar2 + 7 >> 3) << 8),0x18);
  *(longlong *)(param_1 + 0x2ffa8) = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->tplist[0][0]");
  }
  FUN_14567ac70(lVar1,param_1 + 0xc030);
  return;
}



// FUNCTION 145623040 FUN_145623040 body=207 status=ok
// SIG undefined FUN_145623040(void)

void FUN_145623040(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res8 [2];
  int local_res10 [6];
  
  FUN_145472650(*(undefined4 *)(param_1 + 0x2a310),local_res8,local_res10);
  iVar5 = *(int *)(param_1 + 0x2e670);
  iVar7 = local_res8[0];
  if ((local_res8[0] <= iVar5) && (iVar7 = iVar5, local_res10[0] < iVar5)) {
    iVar7 = local_res10[0];
  }
  *(int *)(param_1 + 0x2e4e0) = iVar7;
  *(undefined4 *)(param_1 + 0x2e4e4) = *(undefined4 *)(param_1 + 0x2e674);
  if (*(int *)(param_1 + 0x2e680) == 1) {
    uVar1 = *(uint *)(param_1 + 0x2a048);
    uVar2 = *(uint *)(param_1 + 0x2a04c);
    iVar5 = 10;
    uVar3 = uVar2;
    if (uVar2 < uVar1) {
      uVar3 = uVar1;
    }
    puVar4 = &DAT_149de9414;
    do {
      if ((uVar1 * uVar2 <= puVar4[-1]) && (uVar3 <= *puVar4)) {
        iVar6 = 0x1f;
        if ((&DAT_149de91b0)[(longlong)iVar5 * 0x40] != 0) {
          for (; (byte)(&DAT_149de91b0)[(longlong)iVar5 * 0x40] >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        goto LAB_1456230e0;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x10;
    } while ((longlong)puVar4 < 0x149ded154);
    iVar6 = 0x7fffffff;
LAB_1456230e0:
    if (iVar6 < iVar7) {
      if (local_res8[0] < iVar6) {
        local_res8[0] = iVar6;
      }
      *(int *)(param_1 + 0x2e4e0) = local_res8[0];
    }
  }
  return;
}



// FUNCTION 145623110 FUN_145623110 body=416 status=ok
// SIG undefined FUN_145623110(void)

void FUN_145623110(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x29ee0;
  FUN_145192630(lVar1,*(undefined4 *)(param_1 + 0x2a048),*(undefined4 *)(param_1 + 0x2a04c));
  FUN_145192460(lVar1);
  *(undefined8 *)(param_1 + 0x121b0) = 0;
  *(undefined8 *)(param_1 + 0x123c8) = *(undefined8 *)(param_1 + 0x2e500);
  *(undefined8 *)(param_1 + 0x12200) = *(undefined8 *)(param_1 + 0x2a32c);
  *(undefined8 *)(param_1 + 0x12208) = *(undefined8 *)(param_1 + 0x2a334);
  *(undefined8 *)(param_1 + 0x12210) = *(undefined8 *)(param_1 + 0x2a33c);
  *(undefined8 *)(param_1 + 0x12218) = *(undefined8 *)(param_1 + 0x2a344);
  *(undefined8 *)(param_1 + 0x123a8) = *(undefined8 *)(param_1 + 0x2b108);
  *(undefined8 *)(param_1 + 0x12238) = 0;
  *(ulonglong *)(param_1 + 0x123d0) =
       *(longlong *)(param_1 + 0x2e500) +
       ((longlong)(*(int *)(param_1 + 0x2a310) + 7) & 0xfffffffffffffff8U) * 2;
  *(undefined8 *)(param_1 + 0x12288) = *(undefined8 *)(param_1 + 0x2a34c);
  *(undefined8 *)(param_1 + 0x12290) = *(undefined8 *)(param_1 + 0x2a354);
  *(undefined8 *)(param_1 + 0x12298) = *(undefined8 *)(param_1 + 0x2a35c);
  *(undefined8 *)(param_1 + 0x122a0) = *(undefined8 *)(param_1 + 0x2a364);
  *(undefined8 *)(param_1 + 0x123a8) = *(undefined8 *)(param_1 + 0x2b108);
  *(undefined8 *)(param_1 + 0x122c0) = 0;
  *(ulonglong *)(param_1 + 0x123d8) =
       *(longlong *)(param_1 + 0x2e500) +
       ((longlong)(*(int *)(param_1 + 0x2a310) + 7) & 0xfffffffffffffff8U) * 4;
  *(undefined8 *)(param_1 + 0x12310) = *(undefined8 *)(param_1 + 0x2a34c);
  *(undefined8 *)(param_1 + 0x12318) = *(undefined8 *)(param_1 + 0x2a354);
  *(undefined8 *)(param_1 + 0x12320) = *(undefined8 *)(param_1 + 0x2a35c);
  *(undefined8 *)(param_1 + 0x12328) = *(undefined8 *)(param_1 + 0x2a364);
  *(undefined8 *)(param_1 + 0x123a8) = *(undefined8 *)(param_1 + 0x2b108);
  *(undefined8 *)(param_1 + 0x12410) = *(undefined8 *)(param_1 + 0x2e4f8);
  *(undefined4 *)(param_1 + 0x12368) = *(undefined4 *)(param_1 + 0x2a314);
  *(longlong *)(param_1 + 0x12430) = lVar1;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    puVar2 = &DAT_149d52bf8;
  }
  else {
    puVar2 = (undefined *)(*(longlong *)(param_1 + 0x2b108) + 0x7e);
  }
  *(undefined **)(param_1 + 0x12390) = puVar2;
  *(void **)(param_1 + 0x12448) = *(void **)(param_1 + 0x27ed0);
  memset(*(void **)(param_1 + 0x27ed0),0,
         (longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)) * 0x24);
  FUN_145623040(param_1);
  return;
}



// FUNCTION 1456232c0 FUN_1456232c0 body=18 status=ok
// SIG undefined FUN_1456232c0(void)

uint FUN_1456232c0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb88)();
  return uVar1 >> 2;
}



// FUNCTION 1456232e0 FUN_1456232e0 body=18 status=ok
// SIG undefined FUN_1456232e0(void)

uint FUN_1456232e0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb88)();
  return uVar1 >> 4;
}



// FUNCTION 145623310 FUN_145623310 body=28 status=ok
// SIG undefined FUN_145623310(void)

uint FUN_145623310(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb90)();
  return uVar1 >> 2;
}



// FUNCTION 145623330 FUN_145623330 body=28 status=ok
// SIG undefined FUN_145623330(void)

uint FUN_145623330(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb90)();
  return uVar1 >> 4;
}



// FUNCTION 145623360 FUN_145623360 body=49 status=ok
// SIG undefined FUN_145623360(void)

void FUN_145623360(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb98)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 1456233a0 FUN_1456233a0 body=49 status=ok
// SIG undefined FUN_1456233a0(void)

void FUN_1456233a0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb98)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 1456233f0 FUN_1456233f0 body=18 status=ok
// SIG undefined FUN_1456233f0(void)

uint FUN_1456233f0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb58)();
  return uVar1 >> 2;
}



// FUNCTION 145623410 FUN_145623410 body=18 status=ok
// SIG undefined FUN_145623410(void)

uint FUN_145623410(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb58)();
  return uVar1 >> 4;
}



// FUNCTION 145623440 FUN_145623440 body=28 status=ok
// SIG undefined FUN_145623440(void)

uint FUN_145623440(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb60)();
  return uVar1 >> 2;
}



// FUNCTION 145623460 FUN_145623460 body=28 status=ok
// SIG undefined FUN_145623460(void)

uint FUN_145623460(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb60)();
  return uVar1 >> 4;
}



// FUNCTION 145623490 FUN_145623490 body=49 status=ok
// SIG undefined FUN_145623490(void)

void FUN_145623490(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb68)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 1456234d0 FUN_1456234d0 body=49 status=ok
// SIG undefined FUN_1456234d0(void)

void FUN_1456234d0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb68)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623520 FUN_145623520 body=18 status=ok
// SIG undefined FUN_145623520(void)

uint FUN_145623520(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbd0)();
  return uVar1 >> 2;
}



// FUNCTION 145623540 FUN_145623540 body=18 status=ok
// SIG undefined FUN_145623540(void)

uint FUN_145623540(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbd0)();
  return uVar1 >> 4;
}



// FUNCTION 145623570 FUN_145623570 body=28 status=ok
// SIG undefined FUN_145623570(void)

uint FUN_145623570(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbd8)();
  return uVar1 >> 2;
}



// FUNCTION 145623590 FUN_145623590 body=28 status=ok
// SIG undefined FUN_145623590(void)

uint FUN_145623590(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbd8)();
  return uVar1 >> 4;
}



// FUNCTION 1456235c0 FUN_1456235c0 body=49 status=ok
// SIG undefined FUN_1456235c0(void)

void FUN_1456235c0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbe0)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623600 FUN_145623600 body=49 status=ok
// SIG undefined FUN_145623600(void)

void FUN_145623600(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbe0)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623650 FUN_145623650 body=18 status=ok
// SIG undefined FUN_145623650(void)

uint FUN_145623650(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbb8)();
  return uVar1 >> 2;
}



// FUNCTION 145623670 FUN_145623670 body=18 status=ok
// SIG undefined FUN_145623670(void)

uint FUN_145623670(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbb8)();
  return uVar1 >> 4;
}



// FUNCTION 1456236a0 FUN_1456236a0 body=28 status=ok
// SIG undefined FUN_1456236a0(void)

uint FUN_1456236a0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbc0)();
  return uVar1 >> 2;
}



// FUNCTION 1456236c0 FUN_1456236c0 body=28 status=ok
// SIG undefined FUN_1456236c0(void)

uint FUN_1456236c0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbc0)();
  return uVar1 >> 4;
}



// FUNCTION 1456236f0 FUN_1456236f0 body=49 status=ok
// SIG undefined FUN_1456236f0(void)

void FUN_1456236f0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbc8)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623730 FUN_145623730 body=49 status=ok
// SIG undefined FUN_145623730(void)

void FUN_145623730(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbc8)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623780 FUN_145623780 body=18 status=ok
// SIG undefined FUN_145623780(void)

uint FUN_145623780(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbba0)();
  return uVar1 >> 2;
}



// FUNCTION 1456237a0 FUN_1456237a0 body=18 status=ok
// SIG undefined FUN_1456237a0(void)

uint FUN_1456237a0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbba0)();
  return uVar1 >> 4;
}



// FUNCTION 1456237d0 FUN_1456237d0 body=28 status=ok
// SIG undefined FUN_1456237d0(void)

uint FUN_1456237d0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbba8)();
  return uVar1 >> 2;
}



// FUNCTION 1456237f0 FUN_1456237f0 body=28 status=ok
// SIG undefined FUN_1456237f0(void)

uint FUN_1456237f0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbba8)();
  return uVar1 >> 4;
}



// FUNCTION 145623820 FUN_145623820 body=49 status=ok
// SIG undefined FUN_145623820(void)

void FUN_145623820(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbb0)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623860 FUN_145623860 body=49 status=ok
// SIG undefined FUN_145623860(void)

void FUN_145623860(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbb0)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 1456238b0 FUN_1456238b0 body=18 status=ok
// SIG undefined FUN_1456238b0(void)

uint FUN_1456238b0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbe8)();
  return uVar1 >> 2;
}



// FUNCTION 1456238d0 FUN_1456238d0 body=18 status=ok
// SIG undefined FUN_1456238d0(void)

uint FUN_1456238d0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbe8)();
  return uVar1 >> 4;
}



// FUNCTION 145623900 FUN_145623900 body=28 status=ok
// SIG undefined FUN_145623900(void)

uint FUN_145623900(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbf0)();
  return uVar1 >> 2;
}



// FUNCTION 145623920 FUN_145623920 body=28 status=ok
// SIG undefined FUN_145623920(void)

uint FUN_145623920(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbbf0)();
  return uVar1 >> 4;
}



// FUNCTION 145623950 FUN_145623950 body=49 status=ok
// SIG undefined FUN_145623950(void)

void FUN_145623950(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbf8)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623990 FUN_145623990 body=49 status=ok
// SIG undefined FUN_145623990(void)

void FUN_145623990(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbbf8)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 1456239e0 FUN_1456239e0 body=18 status=ok
// SIG undefined FUN_1456239e0(void)

uint FUN_1456239e0(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb40)();
  return uVar1 >> 2;
}



// FUNCTION 145623a00 FUN_145623a00 body=18 status=ok
// SIG undefined FUN_145623a00(void)

uint FUN_145623a00(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb40)();
  return uVar1 >> 4;
}



// FUNCTION 145623a30 FUN_145623a30 body=28 status=ok
// SIG undefined FUN_145623a30(void)

uint FUN_145623a30(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb48)();
  return uVar1 >> 2;
}



// FUNCTION 145623a50 FUN_145623a50 body=28 status=ok
// SIG undefined FUN_145623a50(void)

uint FUN_145623a50(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb48)();
  return uVar1 >> 4;
}



// FUNCTION 145623a80 FUN_145623a80 body=49 status=ok
// SIG undefined FUN_145623a80(void)

void FUN_145623a80(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb50)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623ac0 FUN_145623ac0 body=49 status=ok
// SIG undefined FUN_145623ac0(void)

void FUN_145623ac0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb50)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623b10 FUN_145623b10 body=18 status=ok
// SIG undefined FUN_145623b10(void)

uint FUN_145623b10(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb70)();
  return uVar1 >> 2;
}



// FUNCTION 145623b30 FUN_145623b30 body=18 status=ok
// SIG undefined FUN_145623b30(void)

uint FUN_145623b30(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb70)();
  return uVar1 >> 4;
}



// FUNCTION 145623b60 FUN_145623b60 body=28 status=ok
// SIG undefined FUN_145623b60(void)

uint FUN_145623b60(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb78)();
  return uVar1 >> 2;
}



// FUNCTION 145623b80 FUN_145623b80 body=28 status=ok
// SIG undefined FUN_145623b80(void)

uint FUN_145623b80(void)

{
  uint uVar1;
  
  uVar1 = (*DAT_14c7fbb78)();
  return uVar1 >> 4;
}



// FUNCTION 145623bb0 FUN_145623bb0 body=49 status=ok
// SIG undefined FUN_145623bb0(void)

void FUN_145623bb0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb80)();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623bf0 FUN_145623bf0 body=49 status=ok
// SIG undefined FUN_145623bf0(void)

void FUN_145623bf0(void)

{
  uint *in_stack_00000028;
  
  (*DAT_14c7fbb80)();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623c40 FUN_145623c40 body=17 status=ok
// SIG undefined FUN_145623c40(void)

uint FUN_145623c40(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c080();
  return uVar1 >> 2;
}



// FUNCTION 145623c60 FUN_145623c60 body=17 status=ok
// SIG undefined FUN_145623c60(void)

uint FUN_145623c60(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c080();
  return uVar1 >> 4;
}



// FUNCTION 145623c90 FUN_145623c90 body=27 status=ok
// SIG undefined FUN_145623c90(void)

uint FUN_145623c90(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c320();
  return uVar1 >> 2;
}



// FUNCTION 145623cb0 FUN_145623cb0 body=27 status=ok
// SIG undefined FUN_145623cb0(void)

uint FUN_145623cb0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c320();
  return uVar1 >> 4;
}



// FUNCTION 145623ce0 FUN_145623ce0 body=48 status=ok
// SIG undefined FUN_145623ce0(void)

void FUN_145623ce0(void)

{
  uint *in_stack_00000028;
  
  FUN_142696190();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623d10 FUN_145623d10 body=48 status=ok
// SIG undefined FUN_145623d10(void)

void FUN_145623d10(void)

{
  uint *in_stack_00000028;
  
  FUN_142696190();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623d50 FUN_145623d50 body=17 status=ok
// SIG undefined FUN_145623d50(void)

uint FUN_145623d50(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c160();
  return uVar1 >> 2;
}



// FUNCTION 145623d70 FUN_145623d70 body=17 status=ok
// SIG undefined FUN_145623d70(void)

uint FUN_145623d70(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c160();
  return uVar1 >> 4;
}



// FUNCTION 145623da0 FUN_145623da0 body=27 status=ok
// SIG undefined FUN_145623da0(void)

uint FUN_145623da0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c420();
  return uVar1 >> 2;
}



// FUNCTION 145623dc0 FUN_145623dc0 body=27 status=ok
// SIG undefined FUN_145623dc0(void)

uint FUN_145623dc0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c420();
  return uVar1 >> 4;
}



// FUNCTION 145623df0 FUN_145623df0 body=48 status=ok
// SIG undefined FUN_145623df0(void)

void FUN_145623df0(void)

{
  uint *in_stack_00000028;
  
  FUN_142696a40();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623e20 FUN_145623e20 body=48 status=ok
// SIG undefined FUN_145623e20(void)

void FUN_145623e20(void)

{
  uint *in_stack_00000028;
  
  FUN_142696a40();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623e60 FUN_145623e60 body=17 status=ok
// SIG undefined FUN_145623e60(void)

uint FUN_145623e60(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c240();
  return uVar1 >> 2;
}



// FUNCTION 145623e80 FUN_145623e80 body=17 status=ok
// SIG undefined FUN_145623e80(void)

uint FUN_145623e80(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c240();
  return uVar1 >> 4;
}



// FUNCTION 145623eb0 FUN_145623eb0 body=27 status=ok
// SIG undefined FUN_145623eb0(void)

uint FUN_145623eb0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c520();
  return uVar1 >> 2;
}



// FUNCTION 145623ed0 FUN_145623ed0 body=27 status=ok
// SIG undefined FUN_145623ed0(void)

uint FUN_145623ed0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14266c520();
  return uVar1 >> 4;
}



// FUNCTION 145623f00 FUN_145623f00 body=48 status=ok
// SIG undefined FUN_145623f00(void)

void FUN_145623f00(void)

{
  uint *in_stack_00000028;
  
  FUN_142696ed0();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145623f30 FUN_145623f30 body=48 status=ok
// SIG undefined FUN_145623f30(void)

void FUN_145623f30(void)

{
  uint *in_stack_00000028;
  
  FUN_142696ed0();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145623f70 FUN_145623f70 body=17 status=ok
// SIG undefined FUN_145623f70(void)

uint FUN_145623f70(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568dc00();
  return uVar1 >> 2;
}



// FUNCTION 145623f90 FUN_145623f90 body=17 status=ok
// SIG undefined FUN_145623f90(void)

uint FUN_145623f90(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568dc00();
  return uVar1 >> 4;
}



// FUNCTION 145623fc0 FUN_145623fc0 body=27 status=ok
// SIG undefined FUN_145623fc0(void)

uint FUN_145623fc0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568dd10();
  return uVar1 >> 2;
}



// FUNCTION 145623fe0 FUN_145623fe0 body=27 status=ok
// SIG undefined FUN_145623fe0(void)

uint FUN_145623fe0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568dd10();
  return uVar1 >> 4;
}



// FUNCTION 145624010 FUN_145624010 body=48 status=ok
// SIG undefined FUN_145624010(void)

void FUN_145624010(void)

{
  uint *in_stack_00000028;
  
  FUN_142697150();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145624040 FUN_145624040 body=48 status=ok
// SIG undefined FUN_145624040(void)

void FUN_145624040(void)

{
  uint *in_stack_00000028;
  
  FUN_142697150();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145624080 FUN_145624080 body=17 status=ok
// SIG undefined FUN_145624080(void)

uint FUN_145624080(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568d9b0();
  return uVar1 >> 2;
}



// FUNCTION 1456240a0 FUN_1456240a0 body=17 status=ok
// SIG undefined FUN_1456240a0(void)

uint FUN_1456240a0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568d9b0();
  return uVar1 >> 4;
}



// FUNCTION 1456240d0 FUN_1456240d0 body=27 status=ok
// SIG undefined FUN_1456240d0(void)

uint FUN_1456240d0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568dac0();
  return uVar1 >> 2;
}



// FUNCTION 1456240f0 FUN_1456240f0 body=27 status=ok
// SIG undefined FUN_1456240f0(void)

uint FUN_1456240f0(void)

{
  uint uVar1;
  
  uVar1 = FUN_14568dac0();
  return uVar1 >> 4;
}



// FUNCTION 145624120 FUN_145624120 body=48 status=ok
// SIG undefined FUN_145624120(void)

void FUN_145624120(void)

{
  uint *in_stack_00000028;
  
  FUN_142697450();
  *in_stack_00000028 = *in_stack_00000028 >> 2;
  in_stack_00000028[1] = in_stack_00000028[1] >> 2;
  in_stack_00000028[2] = in_stack_00000028[2] >> 2;
  in_stack_00000028[3] = in_stack_00000028[3] >> 2;
  return;
}



// FUNCTION 145624150 FUN_145624150 body=48 status=ok
// SIG undefined FUN_145624150(void)

void FUN_145624150(void)

{
  uint *in_stack_00000028;
  
  FUN_142697450();
  *in_stack_00000028 = *in_stack_00000028 >> 4;
  in_stack_00000028[1] = in_stack_00000028[1] >> 4;
  in_stack_00000028[2] = in_stack_00000028[2] >> 4;
  in_stack_00000028[3] = in_stack_00000028[3] >> 4;
  return;
}



// FUNCTION 145624180 FUN_145624180 body=3316 status=ok
// SIG undefined FUN_145624180(void)

void FUN_145624180(longlong param_1)

{
  if (*(int *)(param_1 + 0x2a068) != 0) {
    if (*(int *)(param_1 + 0x2e4d0) != 8) {
      if (*(int *)(param_1 + 0x2e4d0) != 10) {
        *(code **)(param_1 + 0xb4bc8) = FUN_1456232e0;
        *(code **)(param_1 + 0xb4bd0) = FUN_145623330;
        *(code **)(param_1 + 0xb4bd8) = FUN_14562f420;
        *(code **)(param_1 + 0xb4be0) = FUN_14562e700;
        *(code **)(param_1 + 0xb4be8) = FUN_14562d710;
        *(code **)(param_1 + 0xb4bf0) = FUN_1456233a0;
        *(code **)(param_1 + 0xb4b98) = FUN_145623410;
        *(code **)(param_1 + 0xb4ba0) = FUN_145623460;
        *(code **)(param_1 + 0xb4ba8) = FUN_14562f260;
        *(code **)(param_1 + 0xb4bb0) = FUN_14562e540;
        *(code **)(param_1 + 0xb4bb8) = FUN_14562d4f0;
        *(code **)(param_1 + 0xb4bc0) = FUN_1456234d0;
        *(code **)(param_1 + 0xb4c58) = FUN_145623540;
        *(code **)(param_1 + 0xb4c60) = FUN_145623590;
        *(code **)(param_1 + 0xb4c68) = FUN_14562f7d0;
        *(code **)(param_1 + 0xb4c70) = FUN_14562eb90;
        *(code **)(param_1 + 0xb4c78) = FUN_14562dc70;
        *(code **)(param_1 + 0xb4c80) = FUN_145623600;
        *(code **)(param_1 + 0xb4c28) = FUN_145623670;
        *(code **)(param_1 + 0xb4c30) = FUN_1456236c0;
        *(code **)(param_1 + 0xb4c38) = FUN_14562f660;
        *(code **)(param_1 + 0xb4c40) = FUN_14562e9d0;
        *(code **)(param_1 + 0xb4c48) = FUN_14562da60;
        *(code **)(param_1 + 0xb4c50) = FUN_145623730;
        *(code **)(param_1 + 0xb4bf8) = FUN_1456237a0;
        *(code **)(param_1 + 0xb4c00) = FUN_1456237f0;
        *(code **)(param_1 + 0xb4c08) = FUN_14562f4f0;
        *(code **)(param_1 + 0xb4c10) = FUN_14562e810;
        *(code **)(param_1 + 0xb4c18) = FUN_14562d850;
        *(code **)(param_1 + 0xb4c20) = FUN_145623860;
        *(code **)(param_1 + 0xb4c88) = FUN_1456238d0;
        *(code **)(param_1 + 0xb4c90) = FUN_145623920;
        *(code **)(param_1 + 0xb4c98) = FUN_14562f940;
        *(code **)(param_1 + 0xb4ca0) = FUN_14562edf0;
        *(code **)(param_1 + 0xb4ca8) = FUN_14562df70;
        *(code **)(param_1 + 0xb4cb0) = FUN_145623990;
        *(code **)(param_1 + 0xb4b68) = FUN_145623a00;
        *(code **)(param_1 + 0xb4b70) = FUN_145623a50;
        *(code **)(param_1 + 0xb4b78) = FUN_14562f200;
        *(code **)(param_1 + 0xb4b80) = FUN_14562e4b0;
        *(code **)(param_1 + 0xb4b88) = FUN_14562d430;
        *(code **)(param_1 + 0xb4b90) = FUN_145623ac0;
        *(code **)(param_1 + 0xb4b38) = FUN_145623b30;
        *(code **)(param_1 + 0xb4b40) = FUN_145623b80;
        *(code **)(param_1 + 0xb4b48) = FUN_14562f350;
        *(code **)(param_1 + 0xb4b50) = FUN_14562e670;
        *(code **)(param_1 + 0xb4b58) = FUN_14562d650;
        *(code **)(param_1 + 0xb4b60) = FUN_145623bf0;
        *(code **)(param_1 + 0xb4b08) = FUN_145623c60;
        *(code **)(param_1 + 0xb4b10) = FUN_145623cb0;
        *(code **)(param_1 + 0xb4b18) = FUN_14562fab0;
        *(code **)(param_1 + 0xb4b20) = FUN_14562f050;
        *(code **)(param_1 + 0xb4b28) = FUN_14562e270;
        *(code **)(param_1 + 0xb4b30) = FUN_145623d10;
        *(code **)(param_1 + 0xb4ad8) = FUN_145623d70;
        *(code **)(param_1 + 0xb4ae0) = FUN_145623dc0;
        *(code **)(param_1 + 0xb4ae8) = FUN_14562fba0;
        *(code **)(param_1 + 0xb4af0) = FUN_14562f170;
        *(code **)(param_1 + 0xb4af8) = FUN_14562e3f0;
        *(code **)(param_1 + 0xb4b00) = FUN_145623e20;
        *(code **)(param_1 + 0xb4aa8) = FUN_145623e80;
        *(code **)(param_1 + 0xb4ab0) = FUN_145623ed0;
        *(code **)(param_1 + 0xb4ab8) = FUN_14568c5d0;
        *(code **)(param_1 + 0xb4ac0) = FUN_14562f0e0;
        *(code **)(param_1 + 0xb4ac8) = FUN_14562e330;
        *(code **)(param_1 + 0xb4ad0) = FUN_145623f30;
        *(code **)(param_1 + 0xb4a78) = FUN_145623f90;
        *(code **)(param_1 + 0xb4a80) = FUN_145623fe0;
        *(code **)(param_1 + 0xb4a88) = FUN_14568c440;
        *(code **)(param_1 + 0xb4a90) = FUN_14568c0b0;
        *(code **)(param_1 + 0xb4a98) = FUN_14568bbe0;
        *(code **)(param_1 + 740000) = FUN_145624040;
        *(code **)(param_1 + 0xb4a48) = FUN_1456240a0;
        *(code **)(param_1 + 0xb4a50) = FUN_1456240f0;
        *(code **)(param_1 + 0xb4a58) = FUN_14568c2b0;
        *(code **)(param_1 + 0xb4a60) = FUN_14568beb0;
        *(code **)(param_1 + 0xb4a68) = FUN_14568b910;
        *(code **)(param_1 + 0xb4a70) = FUN_145624150;
        return;
      }
      *(code **)(param_1 + 0xb4bc8) = FUN_1456232c0;
      *(code **)(param_1 + 0xb4bd0) = FUN_145623310;
      *(code **)(param_1 + 0xb4bd8) = FUN_14562cb40;
      *(code **)(param_1 + 0xb4be0) = FUN_14562c0f0;
      *(code **)(param_1 + 0xb4be8) = FUN_14562b570;
      *(code **)(param_1 + 0xb4bf0) = FUN_145623360;
      *(code **)(param_1 + 0xb4b98) = FUN_1456233f0;
      *(code **)(param_1 + 0xb4ba0) = FUN_145623440;
      *(code **)(param_1 + 0xb4ba8) = FUN_14562c990;
      *(code **)(param_1 + 0xb4bb0) = FUN_14562bfd0;
      *(code **)(param_1 + 0xb4bb8) = FUN_14562b410;
      *(code **)(param_1 + 0xb4bc0) = FUN_145623490;
      *(code **)(param_1 + 0xb4c58) = FUN_145623520;
      *(code **)(param_1 + 0xb4c60) = FUN_145623570;
      *(code **)(param_1 + 0xb4c68) = FUN_14562cef0;
      *(code **)(param_1 + 0xb4c70) = FUN_14562c420;
      *(code **)(param_1 + 0xb4c78) = FUN_14562b930;
      *(code **)(param_1 + 0xb4c80) = FUN_1456235c0;
      *(code **)(param_1 + 0xb4c28) = FUN_145623650;
      *(code **)(param_1 + 0xb4c30) = FUN_1456236a0;
      *(code **)(param_1 + 0xb4c38) = FUN_14562cd80;
      *(code **)(param_1 + 0xb4c40) = FUN_14562c310;
      *(code **)(param_1 + 0xb4c48) = FUN_14562b7f0;
      *(code **)(param_1 + 0xb4c50) = FUN_1456236f0;
      *(code **)(param_1 + 0xb4bf8) = FUN_145623780;
      *(code **)(param_1 + 0xb4c00) = FUN_1456237d0;
      *(code **)(param_1 + 0xb4c08) = FUN_14562cc10;
      *(code **)(param_1 + 0xb4c10) = FUN_14562c200;
      *(code **)(param_1 + 0xb4c18) = FUN_14562b6b0;
      *(code **)(param_1 + 0xb4c20) = FUN_145623820;
      *(code **)(param_1 + 0xb4c88) = FUN_1456238b0;
      *(code **)(param_1 + 0xb4c90) = FUN_145623900;
      *(code **)(param_1 + 0xb4c98) = FUN_14562d060;
      *(code **)(param_1 + 0xb4ca0) = FUN_14562c5d0;
      *(code **)(param_1 + 0xb4ca8) = FUN_14562bb30;
      *(code **)(param_1 + 0xb4cb0) = FUN_145623950;
      *(code **)(param_1 + 0xb4b68) = FUN_1456239e0;
      *(code **)(param_1 + 0xb4b70) = FUN_145623a30;
      *(code **)(param_1 + 0xb4b78) = FUN_14562c930;
      *(code **)(param_1 + 0xb4b80) = FUN_14562bf40;
      *(code **)(param_1 + 0xb4b88) = FUN_14562b360;
      *(code **)(param_1 + 0xb4b90) = FUN_145623a80;
      *(code **)(param_1 + 0xb4b38) = FUN_145623b10;
      *(code **)(param_1 + 0xb4b40) = FUN_145623b60;
      *(code **)(param_1 + 0xb4b48) = FUN_14562ca70;
      *(code **)(param_1 + 0xb4b50) = FUN_14562c060;
      *(code **)(param_1 + 0xb4b58) = FUN_14562b4c0;
      *(code **)(param_1 + 0xb4b60) = FUN_145623bb0;
      *(code **)(param_1 + 0xb4b08) = FUN_145623c40;
      *(code **)(param_1 + 0xb4b10) = FUN_145623c90;
      *(code **)(param_1 + 0xb4b18) = FUN_14562d1d0;
      *(code **)(param_1 + 0xb4b20) = FUN_14562c780;
      *(code **)(param_1 + 0xb4b28) = FUN_14562bd30;
      *(code **)(param_1 + 0xb4b30) = FUN_145623ce0;
      *(code **)(param_1 + 0xb4ad8) = FUN_145623d50;
      *(code **)(param_1 + 0xb4ae0) = FUN_145623da0;
      *(code **)(param_1 + 0xb4ae8) = FUN_14562d2b0;
      *(code **)(param_1 + 0xb4af0) = FUN_14562c8a0;
      *(code **)(param_1 + 0xb4af8) = FUN_14562be90;
      *(code **)(param_1 + 0xb4b00) = FUN_145623df0;
      *(code **)(param_1 + 0xb4aa8) = FUN_145623e60;
      *(code **)(param_1 + 0xb4ab0) = FUN_145623eb0;
      *(code **)(param_1 + 0xb4ab8) = FUN_14568b4a0;
      *(code **)(param_1 + 0xb4ac0) = FUN_14562c810;
      *(code **)(param_1 + 0xb4ac8) = FUN_14562bde0;
      *(code **)(param_1 + 0xb4ad0) = FUN_145623f00;
      *(code **)(param_1 + 0xb4a78) = FUN_145623f70;
      *(code **)(param_1 + 0xb4a80) = FUN_145623fc0;
      *(code **)(param_1 + 0xb4a88) = FUN_14568b310;
      *(code **)(param_1 + 0xb4a90) = FUN_14568af80;
      *(code **)(param_1 + 0xb4a98) = FUN_14568aab0;
      *(code **)(param_1 + 740000) = FUN_145624010;
      *(code **)(param_1 + 0xb4a48) = FUN_145624080;
      *(code **)(param_1 + 0xb4a50) = FUN_1456240d0;
      *(code **)(param_1 + 0xb4a58) = FUN_14568b180;
      *(code **)(param_1 + 0xb4a60) = FUN_14568ad80;
      *(code **)(param_1 + 0xb4a68) = FUN_14568a7e0;
      *(code **)(param_1 + 0xb4a70) = FUN_145624120;
      return;
    }
    *(undefined **)(param_1 + 0xb4bc8) = &DAT_1456232b0;
    *(undefined **)(param_1 + 0xb4bd0) = &DAT_145623300;
    *(code **)(param_1 + 0xb4bd8) = FUN_145631220;
    *(code **)(param_1 + 0xb4be0) = FUN_1456308c0;
    *(code **)(param_1 + 0xb4be8) = FUN_14562fe50;
    *(undefined **)(param_1 + 0xb4bf0) = &DAT_145623350;
    *(undefined **)(param_1 + 0xb4b98) = &DAT_1456233e0;
    *(undefined **)(param_1 + 0xb4ba0) = &DAT_145623430;
    *(code **)(param_1 + 0xb4ba8) = FUN_1456310b0;
    *(code **)(param_1 + 0xb4bb0) = FUN_1456307c0;
    *(code **)(param_1 + 0xb4bb8) = FUN_14562fd30;
    *(undefined **)(param_1 + 0xb4bc0) = &DAT_145623480;
    *(undefined **)(param_1 + 0xb4c58) = &DAT_145623510;
    *(undefined **)(param_1 + 0xb4c60) = &DAT_145623560;
    *(code **)(param_1 + 0xb4c68) = FUN_145631590;
    *(code **)(param_1 + 0xb4c70) = FUN_145630bc0;
    *(code **)(param_1 + 0xb4c78) = FUN_1456301b0;
    *(undefined **)(param_1 + 0xb4c80) = &DAT_1456235b0;
    *(undefined **)(param_1 + 0xb4c28) = &DAT_145623640;
    *(undefined **)(param_1 + 0xb4c30) = &DAT_145623690;
    *(code **)(param_1 + 0xb4c38) = FUN_145631430;
    *(code **)(param_1 + 0xb4c40) = FUN_145630ac0;
    *(code **)(param_1 + 0xb4c48) = FUN_145630090;
    *(undefined **)(param_1 + 0xb4c50) = &DAT_1456236e0;
    *(undefined **)(param_1 + 0xb4bf8) = &DAT_145623770;
    *(undefined **)(param_1 + 0xb4c00) = &DAT_1456237c0;
    *(code **)(param_1 + 0xb4c08) = FUN_1456312d0;
    *(code **)(param_1 + 0xb4c10) = FUN_1456309c0;
    *(code **)(param_1 + 0xb4c18) = FUN_14562ff70;
    *(undefined **)(param_1 + 0xb4c20) = &DAT_145623810;
    *(undefined **)(param_1 + 0xb4c88) = &DAT_1456238a0;
    *(undefined **)(param_1 + 0xb4c90) = &DAT_1456238f0;
    *(code **)(param_1 + 0xb4c98) = FUN_1456316f0;
    *(code **)(param_1 + 0xb4ca0) = FUN_145630d50;
    *(code **)(param_1 + 0xb4ca8) = FUN_1456303a0;
    *(undefined **)(param_1 + 0xb4cb0) = &DAT_145623940;
    *(undefined **)(param_1 + 0xb4b68) = &DAT_1456239d0;
    *(undefined **)(param_1 + 0xb4b70) = &DAT_145623a20;
    *(code **)(param_1 + 0xb4b78) = FUN_145631060;
    *(code **)(param_1 + 0xb4b80) = FUN_145630740;
    *(code **)(param_1 + 0xb4b88) = FUN_14562fca0;
    *(undefined **)(param_1 + 0xb4b90) = &DAT_145623a70;
    *(undefined **)(param_1 + 0xb4b38) = &DAT_145623b00;
    *(undefined **)(param_1 + 0xb4b40) = &DAT_145623b50;
    *(code **)(param_1 + 0xb4b48) = FUN_145631170;
    *(code **)(param_1 + 0xb4b50) = FUN_145630840;
    *(code **)(param_1 + 0xb4b58) = FUN_14562fdc0;
    *(undefined **)(param_1 + 0xb4b60) = &DAT_145623ba0;
    *(undefined1 **)(param_1 + 0xb4b08) = &LAB_145623c30;
    *(undefined1 **)(param_1 + 0xb4b10) = &LAB_145623c80;
    *(code **)(param_1 + 0xb4b18) = FUN_145631850;
    *(code **)(param_1 + 0xb4b20) = FUN_145630ee0;
    *(code **)(param_1 + 0xb4b28) = FUN_145630590;
    *(undefined1 **)(param_1 + 0xb4b30) = &LAB_145623cd0;
    *(undefined1 **)(param_1 + 0xb4ad8) = &LAB_145623d40;
    *(undefined1 **)(param_1 + 0xb4ae0) = &LAB_145623d90;
    *(code **)(param_1 + 0xb4ae8) = FUN_145631910;
    *(code **)(param_1 + 0xb4af0) = FUN_145630fe0;
    *(code **)(param_1 + 0xb4af8) = FUN_1456306b0;
    *(undefined1 **)(param_1 + 0xb4b00) = &LAB_145623de0;
    *(undefined1 **)(param_1 + 0xb4aa8) = &LAB_145623e50;
    *(undefined1 **)(param_1 + 0xb4ab0) = &LAB_145623ea0;
    *(code **)(param_1 + 0xb4ab8) = FUN_14568d6a0;
    *(code **)(param_1 + 0xb4ac0) = FUN_145630f60;
    *(code **)(param_1 + 0xb4ac8) = FUN_145630620;
    *(undefined1 **)(param_1 + 0xb4ad0) = &LAB_145623ef0;
    *(undefined1 **)(param_1 + 0xb4a78) = &LAB_145623f60;
    *(undefined1 **)(param_1 + 0xb4a80) = &LAB_145623fb0;
    *(code **)(param_1 + 0xb4a88) = FUN_14568d520;
    *(code **)(param_1 + 0xb4a90) = FUN_14568d1a0;
    *(code **)(param_1 + 0xb4a98) = FUN_14568ccd0;
    *(undefined1 **)(param_1 + 740000) = &LAB_145624000;
    *(undefined1 **)(param_1 + 0xb4a48) = &LAB_145624070;
    *(undefined1 **)(param_1 + 0xb4a50) = &LAB_1456240c0;
    *(code **)(param_1 + 0xb4a58) = FUN_14568d3a0;
    *(code **)(param_1 + 0xb4a60) = FUN_14568cfa0;
    *(code **)(param_1 + 0xb4a68) = FUN_14568ca00;
    *(undefined1 **)(param_1 + 0xb4a70) = &LAB_145624110;
  }
  return;
}



// FUNCTION 145624e80 FUN_145624e80 body=299 status=ok
// SIG undefined FUN_145624e80(void)

void FUN_145624e80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x29ee0;
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4950));
  lVar2 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)),1);
  *(longlong *)(param_1 + 0xb4950) = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->segmentation_map");
  }
  if (*(longlong *)(param_1 + 0xb4980) != 0) {
    FUN_14565d140();
  }
  lVar2 = FUN_14565d080(*(undefined4 *)(param_1 + 0x2a308),*(undefined4 *)(param_1 + 0x2a310));
  *(longlong *)(param_1 + 0xb4980) = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->cyclic_refresh");
  }
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb4990));
  lVar2 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)),1);
  *(longlong *)(param_1 + 0xb4990) = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->active_map.map");
  }
  FUN_14518f040(*(undefined8 *)(param_1 + 0xb3a10));
  lVar2 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)),1);
  *(longlong *)(param_1 + 0xb3a10) = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(lVar1,2,"Failed to allocate cpi->coding_context.last_frame_seg_map_copy");
  }
  return;
}



// FUNCTION 145624fb0 FUN_145624fb0 body=342 status=ok
// SIG undefined FUN_145624fb0(void)

void FUN_145624fb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x29ee0;
  if (*(longlong *)(param_1 + 0xcee18) == 0) {
    lVar2 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a314) * *(int *)(param_1 + 0x2a308)),1);
    *(longlong *)(param_1 + 0xcee18) = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->prev_partition");
    }
  }
  if (*(longlong *)(param_1 + 0xcee20) == 0) {
    lVar2 = FUN_14518efb0((longlong)
                          (((*(int *)(param_1 + 0x2a308) >> 3) + 1) *
                          (*(int *)(param_1 + 0x2a314) >> 3)),1);
    *(longlong *)(param_1 + 0xcee20) = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->prev_segment_id");
    }
  }
  if (*(longlong *)(param_1 + 0xcee28) == 0) {
    lVar2 = FUN_14518efb0((longlong)
                          (((*(int *)(param_1 + 0x2a308) >> 3) + 1) *
                           (*(int *)(param_1 + 0x2a314) >> 3) * 0x19),1);
    *(longlong *)(param_1 + 0xcee28) = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->prev_variance_low");
    }
  }
  if (*(longlong *)(param_1 + 0xcee30) == 0) {
    lVar2 = FUN_14518efb0((longlong)
                          (((*(int *)(param_1 + 0x2a308) >> 3) + 1) *
                          (*(int *)(param_1 + 0x2a314) >> 3)),1);
    *(longlong *)(param_1 + 0xcee30) = lVar2;
    if (lVar2 == 0) {
      FUN_144d82810(lVar1,2,"Failed to allocate cpi->copied_frame_cnt");
    }
  }
  return;
}



// FUNCTION 145625110 FUN_145625110 body=429 status=ok
// SIG undefined FUN_145625110(void)

void FUN_145625110(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  if ((*(byte *)(param_1 + 0x98) & 8) == 0) {
    FUN_145692050(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0xc),
                  *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                  *(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0xc),
                  *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  }
  else {
    FUN_145692270(*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 0x98) & 8) == 0) {
    FUN_145692050(uVar7,uVar3,uVar2,uVar1,uVar9,uVar6,uVar5,uVar4);
  }
  else {
    FUN_145692270();
  }
  if ((*(byte *)(param_1 + 0x98) & 8) == 0) {
    FUN_145692050(uVar8,uVar3,uVar2,uVar1,uVar10,uVar6,uVar5,uVar4);
  }
  else {
    FUN_145692270();
  }
  FUN_14546c880(param_2);
  return;
}



// FUNCTION 1456252c0 FUN_1456252c0 body=882 status=ok
// SIG undefined FUN_1456252c0(void)

void FUN_1456252c0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_178 [32];
  undefined *local_158;
  uint local_150;
  int local_148;
  uint local_140;
  int local_138;
  int local_130;
  int local_128;
  undefined4 local_120;
  int local_118;
  uint local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0 [4];
  int local_90 [4];
  longlong local_80 [4];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118 = *(int *)(param_1 + 8);
  iVar15 = *(int *)(param_1 + 0xc);
  iVar10 = *(int *)(param_2 + 0xc);
  iVar1 = *(int *)(param_2 + 8);
  local_80[0] = *(longlong *)(param_1 + 0x38);
  local_80[1] = *(undefined8 *)(param_1 + 0x40);
  local_80[2] = *(undefined8 *)(param_1 + 0x48);
  local_a0[0] = *(int *)(param_1 + 0x10);
  local_a0[1] = *(undefined4 *)(param_1 + 0x24);
  local_a0[2] = *(undefined4 *)(param_1 + 0x24);
  local_80[3] = *(undefined8 *)(param_2 + 0x38);
  local_60 = *(undefined8 *)(param_2 + 0x40);
  local_58 = *(undefined8 *)(param_2 + 0x48);
  local_90[0] = *(int *)(param_2 + 0x10);
  local_90[1] = *(undefined4 *)(param_2 + 0x24);
  local_90[2] = *(undefined4 *)(param_2 + 0x24);
  puVar9 = (&PTR_DAT_14c744430)[param_4];
  local_d8 = 0;
  local_108 = param_3;
  local_100 = iVar10;
  local_f4 = iVar15;
  local_e8 = puVar9;
  local_b8 = param_1;
  local_a8 = param_2;
  do {
    iVar5 = local_a0[local_d8];
    iVar13 = local_90[local_d8];
    local_114 = (local_d8 != 0) + 1;
    local_110 = 0;
    local_fc = iVar5;
    local_f8 = iVar13;
    if (0 < iVar10) {
      local_e0 = local_80 + local_d8;
      local_c0 = local_80 + local_d8 + 3;
      iVar2 = (int)(0x10 / (ulonglong)local_114);
      local_10c = 0;
      local_f0 = iVar2 * iVar15 * 0x10;
      uVar7 = local_114;
      do {
        iVar3 = 0;
        if (0 < iVar1) {
          local_b0 = (longlong)iVar5;
          uVar4 = local_10c / iVar10 + param_5 & 0xf;
          lVar14 = (longlong)iVar13;
          iVar6 = 0;
          local_d0 = (longlong)((((local_110 / (int)uVar7) * iVar15) / iVar10) * iVar5);
          local_c8 = (longlong)((local_110 / (int)uVar7) * iVar13);
          iVar16 = (iVar15 << 4) / iVar10;
          iVar12 = (local_118 << 4) / iVar1;
          local_104 = iVar2 * local_118 * 0x10;
          do {
            lVar11 = ((iVar3 / (int)uVar7) * local_118) / iVar1 + local_d0 + *local_e0;
            lVar8 = iVar3 / (int)uVar7 + local_c8 + *local_c0;
            local_150 = iVar6 / iVar1 + param_5 & 0xf;
            local_158 = puVar9;
            local_148 = iVar12;
            local_140 = uVar4;
            local_138 = iVar16;
            local_130 = iVar2;
            local_128 = iVar2;
            if ((*(byte *)(local_b8 + 0x98) & 8) == 0) {
              (*DAT_14c7fbcc0)(lVar11,local_b0,lVar8,lVar14);
            }
            else {
              local_120 = local_108;
              (*DAT_14c7fb9f8)(lVar11 * 2,local_b0,lVar8 * 2,lVar14);
            }
            iVar6 = iVar6 + local_104;
            iVar3 = iVar3 + 0x10;
            puVar9 = local_e8;
            iVar15 = local_f4;
            iVar10 = local_100;
            iVar5 = local_fc;
            iVar13 = local_f8;
            uVar7 = local_114;
          } while (iVar3 < iVar1);
        }
        local_110 = local_110 + 0x10;
        local_10c = local_10c + local_f0;
      } while (local_110 < iVar10);
    }
    local_d8 = local_d8 + 1;
  } while (local_d8 < 3);
  FUN_14546c880(local_a8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_178);
}



// FUNCTION 145625650 FUN_145625650 body=595 status=ok
// SIG undefined FUN_145625650(void)

undefined4
FUN_145625650(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = true;
  if ((((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) &&
      (*(int *)(param_1 + 0x2f6cc) == 0)) &&
     ((*(int *)(param_1 + 0x2f6c8) == 0 || (*(int *)(param_1 + 0xb4304) != 0)))) {
    bVar5 = false;
  }
  iVar2 = *(int *)(param_1 + 0xb4280);
  if (*(int *)(param_1 + 0xb4310) <= iVar2) goto LAB_14562577b;
  if (*(int *)(param_1 + 0xb4304) == 0) {
    iVar4 = *(int *)(param_1 + 0xb427c);
    if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
       ((*(int *)(param_1 + 0x2f6cc) != 0 || (*(int *)(param_1 + 0x2f6c8) != 0)))) {
      iVar3 = (iVar4 * 3) / 2;
    }
    else {
      iVar3 = iVar4 * 2;
    }
    if ((iVar3 < iVar2) || (iVar2 < iVar4 / 2)) goto LAB_14562577b;
  }
  iVar4 = *(int *)(param_1 + 0xb46e0);
  if (iVar4 == 4) goto LAB_14562577b;
  if (*(int *)(param_1 + 0x2e56c) == 2) {
    bVar1 = *(byte *)(param_1 + 0xb5014);
    if (bVar1 == 0) {
      bVar6 = *(int *)(param_1 + 0xb5408) == 1;
LAB_145625760:
      if (!bVar6) goto LAB_145625769;
    }
    else if ((*(int *)(param_1 + 0xb5404 + (ulonglong)bVar1 * 4) == 1) ||
            (*(int *)(param_1 + 0xb5408 + (ulonglong)bVar1 * 4) != 1)) {
      bVar6 = false;
      goto LAB_145625760;
    }
    if (iVar4 == 3) goto LAB_14562577b;
  }
LAB_145625769:
  if (!bVar5) {
    return 0;
  }
  if (iVar4 < 2) {
    return 0;
  }
LAB_14562577b:
  if ((((bVar5) && (*(int *)(param_1 + 0x2e5bc) == 2)) && (*(int *)(param_1 + 0xb43c4) == 0)) &&
     (*(int *)(param_1 + 0xb43dc +
              (longlong)*(int *)(param_1 + 0xb5018 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) *
              4) <= param_4)) {
    iVar4 = *(int *)(param_1 + 0xb427c);
    if (*(int *)(param_1 + 0xb427c) <= *(int *)(param_1 + 0xb4308)) {
      iVar4 = *(int *)(param_1 + 0xb4308);
    }
    if ((int)((double)iVar4 + (double)iVar4) < iVar2) {
      *(undefined4 *)(param_1 + 0xcd398) = 1;
      return 1;
    }
  }
  if (*(int *)(param_1 + 0xb4310) <= iVar2) {
    return 1;
  }
  if (1 < *(int *)(param_1 + 0xb46e0)) {
    if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
       ((*(int *)(param_1 + 0x2f6cc) != 0 ||
        ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))))) {
      iVar4 = (*(int *)(param_1 + 0xb427c) * 3) / 2;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb427c) * 2;
    }
    if (iVar4 <= iVar2) {
      return 1;
    }
  }
  if (((param_2 < iVar2) && (param_4 < param_5)) || ((iVar2 < param_3 && (param_6 < param_4)))) {
    return 1;
  }
  if (*(int *)(param_1 + 0x2e57c) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2e5b0) < param_4) {
    if (iVar2 < *(int *)(param_1 + 0xb427c) * 7 >> 3) {
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1456258b0 FUN_1456258b0 body=865 status=ok
// SIG undefined FUN_1456258b0(void)

void FUN_1456258b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  lVar8 = *(longlong *)(param_1 + 0x2e4f0);
  if (*(int *)(param_1 + 0xb453c) == 0) {
    if (*(int *)(param_1 + 0x2a2f0) != 0) {
      *(undefined4 *)(param_1 + 0x2f698) = *(undefined4 *)(param_1 + 0x2f6a0);
      lVar6 = (longlong)*(int *)(param_1 + 0xb63a0);
      uVar11 = *(undefined4 *)(param_1 + 0xb62d4);
      if (1 < lVar6) {
        puVar9 = (undefined4 *)(param_1 + 0xb62d8);
        puVar10 = (undefined4 *)(param_1 + 0xb62d4);
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x2f6a0) = uVar11;
      *(int *)(param_1 + 0xb63a0) = *(int *)(param_1 + 0xb63a0) + -1;
    }
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x2f6a0);
    *(undefined4 *)(param_1 + 0x2f6a0) = *(undefined4 *)(param_1 + 0x2f69c);
    *(undefined4 *)(param_1 + 0x2f69c) = uVar11;
  }
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    iVar2 = *(int *)(param_1 + 0x2a2d8);
    lVar6 = lVar8 + 0x18;
    lVar7 = param_1 + (longlong)*(int *)(param_1 + 0x2f69c) * 4;
    iVar3 = *(int *)(lVar7 + 0x2a088);
    if (-1 < iVar3) {
      lVar5 = (longlong)iVar3 * 0xe0;
      iVar3 = *(int *)(lVar5 + lVar6);
      if (0 < iVar3) {
        *(int *)(lVar5 + lVar6) = iVar3 + -1;
      }
    }
    *(int *)(lVar7 + 0x2a088) = iVar2;
    piVar1 = (int *)((longlong)iVar2 * 0xe0 + lVar6);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(param_1 + 0x2a2d8);
    lVar7 = param_1 + (longlong)*(int *)(param_1 + 0x2f6a0) * 4;
    iVar3 = *(int *)(lVar7 + 0x2a088);
    if (-1 < iVar3) {
      lVar5 = (longlong)iVar3 * 0xe0;
      iVar3 = *(int *)(lVar5 + lVar6);
      if (0 < iVar3) {
        *(int *)(lVar5 + lVar6) = iVar3 + -1;
      }
    }
    *(int *)(lVar7 + 0x2a088) = iVar2;
    piVar1 = (int *)((longlong)iVar2 * 0xe0 + lVar6);
    *piVar1 = *piVar1 + 1;
  }
  else if (((*(int *)(param_1 + 0x2f6c8) == 0) || (*(int *)(param_1 + 0xb4304) == 0)) ||
          (*(int *)(param_1 + 0xb64dc) != 0)) {
    if (*(int *)(param_1 + 0x2f6cc) != 0) {
      iVar2 = *(int *)(param_1 + 0xb639c);
      uVar11 = *(undefined4 *)(param_1 + 0x2f6a0);
      for (lVar6 = (longlong)*(int *)(param_1 + 0xb63a0); 0 < lVar6; lVar6 = lVar6 + -1) {
        *(undefined4 *)(param_1 + 0xb62d4 + lVar6 * 4) =
             *(undefined4 *)(param_1 + 0xb62d0 + lVar6 * 4);
      }
      *(undefined4 *)(param_1 + 0xb62d4) = uVar11;
      lVar7 = param_1 + (longlong)iVar2 * 4;
      *(int *)(param_1 + 0xb63a0) = *(int *)(param_1 + 0xb63a0) + 1;
      iVar3 = *(int *)(lVar7 + 0x2a088);
      lVar6 = lVar8 + 0x18;
      iVar4 = *(int *)(param_1 + 0x2a2d8);
      if (-1 < iVar3) {
        lVar5 = (longlong)iVar3 * 0xe0;
        iVar3 = *(int *)(lVar5 + lVar6);
        if (0 < iVar3) {
          *(int *)(lVar5 + lVar6) = iVar3 + -1;
        }
      }
      *(int *)(lVar7 + 0x2a088) = iVar4;
      piVar1 = (int *)((longlong)iVar4 * 0xe0 + lVar6);
      *piVar1 = *piVar1 + 1;
      *(undefined8 *)(param_1 + 0xb4580) = *(undefined8 *)(param_1 + 0xb4550);
      *(undefined8 *)(param_1 + 0xb4588) = *(undefined8 *)(param_1 + 0xb4558);
      *(int *)(param_1 + 0x2f6a0) = iVar2;
    }
    lVar6 = lVar8 + 0x18;
    if (*(int *)(param_1 + 0x2f6c8) != 0) {
      iVar2 = *(int *)(param_1 + 0x2a2d8);
      lVar7 = param_1 + (longlong)*(int *)(param_1 + 0x2f69c) * 4;
      iVar3 = *(int *)(lVar7 + 0x2a088);
      if (-1 < iVar3) {
        lVar5 = (longlong)iVar3 * 0xe0;
        iVar3 = *(int *)(lVar5 + lVar6);
        if (0 < iVar3) {
          *(int *)(lVar5 + lVar6) = iVar3 + -1;
        }
      }
      *(int *)(lVar7 + 0x2a088) = iVar2;
      piVar1 = (int *)((longlong)iVar2 * 0xe0 + lVar6);
      *piVar1 = *piVar1 + 1;
      if (*(int *)(param_1 + 0xb4304) == 0) {
        uVar11 = *(undefined4 *)(param_1 + 0xb4550);
        uVar12 = *(undefined4 *)(param_1 + 0xb4554);
        uVar13 = *(undefined4 *)(param_1 + 0xb4558);
        uVar14 = *(undefined4 *)(param_1 + 0xb455c);
      }
      else {
        uVar11 = *(undefined4 *)(param_1 + 0xb4580);
        uVar12 = *(undefined4 *)(param_1 + 0xb4584);
        uVar13 = *(undefined4 *)(param_1 + 0xb4588);
        uVar14 = *(undefined4 *)(param_1 + 0xb458c);
      }
      *(undefined4 *)(param_1 + 0xb4570) = uVar11;
      *(undefined4 *)(param_1 + 0xb4574) = uVar12;
      *(undefined4 *)(param_1 + 0xb4578) = uVar13;
      *(undefined4 *)(param_1 + 0xb457c) = uVar14;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2a2d8);
    lVar6 = lVar8 + 0x18;
    lVar7 = param_1 + (longlong)*(int *)(param_1 + 0x2f6a0) * 4;
    iVar3 = *(int *)(lVar7 + 0x2a088);
    if (-1 < iVar3) {
      lVar5 = (longlong)iVar3 * 0xe0;
      iVar3 = *(int *)(lVar5 + lVar6);
      if (0 < iVar3) {
        *(int *)(lVar5 + lVar6) = iVar3 + -1;
      }
    }
    *(int *)(lVar7 + 0x2a088) = iVar2;
    piVar1 = (int *)((longlong)iVar2 * 0xe0 + lVar6);
    *piVar1 = *piVar1 + 1;
    uVar11 = *(undefined4 *)(param_1 + 0x2f6a0);
    *(undefined4 *)(param_1 + 0x2f6a0) = *(undefined4 *)(param_1 + 0x2f69c);
    *(undefined4 *)(param_1 + 0x2f69c) = uVar11;
  }
  lVar8 = lVar8 + 0x18;
  if (*(int *)(param_1 + 0x2f6c4) != 0) {
    iVar2 = *(int *)(param_1 + 0x2a2d8);
    lVar6 = param_1 + (longlong)*(int *)(param_1 + 0x2f698) * 4;
    iVar3 = *(int *)(lVar6 + 0x2a088);
    if (-1 < iVar3) {
      lVar7 = (longlong)iVar3 * 0xe0;
      iVar3 = *(int *)(lVar7 + lVar8);
      if (0 < iVar3) {
        *(int *)(lVar7 + lVar8) = iVar3 + -1;
      }
    }
    *(int *)(lVar6 + 0x2a088) = iVar2;
    piVar1 = (int *)((longlong)iVar2 * 0xe0 + lVar8);
    *piVar1 = *piVar1 + 1;
    if (*(int *)(param_1 + 0xb4304) == 0) {
      *(undefined8 *)(param_1 + 0xb4560) = *(undefined8 *)(param_1 + 0xb4550);
      *(undefined8 *)(param_1 + 0xb4568) = *(undefined8 *)(param_1 + 0xb4558);
    }
  }
  if (*(int *)(param_1 + 0xb5408 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4) == 5) {
    lVar8 = (longlong)*(int *)(param_1 + 0xb63a0);
    uVar11 = *(undefined4 *)(param_1 + 0xb62d4);
    if (1 < lVar8) {
      puVar9 = (undefined4 *)(param_1 + 0xb62d8);
      puVar10 = (undefined4 *)(param_1 + 0xb62d4);
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x2f6a0) = uVar11;
    *(int *)(param_1 + 0xb63a0) = *(int *)(param_1 + 0xb63a0) + -1;
  }
  return;
}



// FUNCTION 145625c20 FUN_145625c20 body=519 status=ok
// SIG undefined FUN_145625c20(void)

void FUN_145625c20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar2 = false;
  if ((((*(int *)(param_2 + 0x404) == 0) || (*(int *)(param_1 + 0x2f6c4) != 0)) ||
      (*(int *)(param_1 + 0x2f6c8) != 0)) || (*(int *)(param_1 + 0x2f6cc) != 0)) {
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0xcb6a0) == 1)) {
    bVar2 = *(int *)(param_1 + 0xcb784) == 0;
  }
  if (*(int *)(param_2 + 0x410) != 0) {
    *(undefined4 *)(param_2 + 0x1178) = 0;
    goto LAB_145625e1a;
  }
  if ((*(int *)(param_1 + 0xcef20) == 2) || ((!bVar2 && (*(int *)(param_1 + 0xcef20) == 1)))) {
    *(undefined4 *)(param_2 + 0x1178) = 0;
    uVar1 = *(undefined8 *)(param_2 + 400);
  }
  else {
    if (*(int *)(param_1 + 0x12424) == 0) {
      FUN_1425b0090();
      QueryPerformanceCounter(&local_40);
      if (*(int *)(param_1 + 0xb4304) == 0) {
        if ((*(int *)(param_1 + 0x2a2e4) == 0) && (*(int *)(param_1 + 0xb42f4) == 0)) {
          *(undefined4 *)(param_2 + 0x117c) = 0;
        }
        FUN_145691b10(*(undefined8 *)(param_1 + 0x2e6d8),param_1,*(undefined4 *)(param_1 + 0xb482c))
        ;
        *(undefined4 *)(param_2 + 0x117c) = *(undefined4 *)(param_2 + 0x1178);
      }
      else {
        *(undefined4 *)(param_2 + 0x1178) = 0;
      }
      QueryPerformanceCounter(&local_38);
      QueryPerformanceFrequency(&local_48);
      *(longlong *)(param_1 + 0xb4cc8) =
           *(longlong *)(param_1 + 0xb4cc8) +
           ((local_38.QuadPart - (longlong)local_40) * 1000000) / local_48.QuadPart;
    }
    else {
      *(undefined8 *)(param_2 + 0x1178) = 0;
    }
    if ((0 < *(int *)(param_2 + 0x1178)) && (bVar2)) {
      FUN_145474980(param_2,*(int *)(param_2 + 0x1178),0);
      if (1 < *(int *)(param_1 + 0xcd42c)) {
        local_58 = param_1 + 0xcd440;
        local_68 = *(undefined8 *)(param_1 + 0xcd430);
        local_70 = 0;
        local_78 = 0;
        local_60 = *(int *)(param_1 + 0xcd42c);
        FUN_145476250(*(undefined8 *)(param_2 + 400));
        uVar1 = *(undefined8 *)(param_2 + 400);
        goto LAB_145625e15;
      }
      local_70 = 0;
      local_78 = 0;
      FUN_145474320(*(undefined8 *)(param_2 + 400),param_2,param_1 + 0x121b0,
                    *(undefined4 *)(param_2 + 0x1178));
    }
    uVar1 = *(undefined8 *)(param_2 + 400);
  }
LAB_145625e15:
  FUN_14546c890(uVar1);
LAB_145625e1a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 145625e40 FUN_145625e40 body=148 status=ok
// SIG undefined FUN_145625e40(void)

void FUN_145625e40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0xe0 + *(longlong *)(param_1 + 0x4610);
  if (((*(longlong *)(lVar2 + 0x20) == 0) || (*(int *)(lVar2 + 0x28) < *(int *)(param_1 + 0x428)))
     || (*(int *)(lVar2 + 0x2c) < *(int *)(param_1 + 0x430))) {
    FUN_14518f040();
    lVar1 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x430) * *(int *)(param_1 + 0x428)),0xc);
    *(longlong *)(lVar2 + 0x20) = lVar1;
    if (lVar1 == 0) {
      FUN_144d82810(param_1,2,"Failed to allocate new_fb_ptr->mvs");
    }
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_1 + 0x428);
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x430);
  }
  return;
}



// FUNCTION 145625ee0 FUN_145625ee0 body=391 status=ok
// SIG undefined FUN_145625ee0(void)

void FUN_145625ee0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int aiStack_2f6b4 [48547];
  uint local_28;
  uint local_24;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)&local_28;
  if ((*(int *)(param_1 + 0x2e56c) == 0) && (*(int *)(param_1 + 0xb64dc) == 0)) {
    iVar5 = 1;
    local_28 = (uint)(*(int *)(param_1 + 0x2f6c4) != 0);
    local_24 = (uint)(*(int *)(param_1 + 0x2f6c8) != 0);
    local_20 = (uint)(*(int *)(param_1 + 0x2f6cc) != 0);
    piVar4 = (int *)(param_1 + 0x2f68c);
    do {
      if (*piVar4 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x2e4f0);
        lVar7 = (longlong)*piVar4 * 0xe0 + lVar6;
        if ((char)iVar5 == '\x01') {
          iVar1 = *(int *)(param_1 + 0x2f698);
        }
        else if ((char)iVar5 == '\x02') {
          iVar1 = *(int *)(param_1 + 0x2f69c);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x2f6a0);
        }
        if ((iVar1 == -1) ||
           (iVar1 = *(int *)(param_1 + 0x2a088 + (longlong)iVar1 * 4), iVar1 == -1)) {
          piVar2 = (int *)&DAT_00000008;
          piVar8 = (int *)&DAT_0000000c;
        }
        else {
          lVar3 = (longlong)iVar1 * 0xe0;
          piVar8 = (int *)(lVar6 + 100 + lVar3);
          piVar2 = (int *)(lVar6 + 0x60 + lVar3);
        }
        if ((*(int *)(((longlong)aiStack_2f6b4 - param_1) + (longlong)piVar4) != 0) ||
           ((*(int *)(lVar7 + 0x60) == *piVar2 && (*(int *)(lVar7 + 100) == *piVar8)))) {
          *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + -1;
          *piVar4 = -1;
        }
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < 4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)&local_28);
  }
  piVar4 = (int *)(param_1 + 0x2f68c);
  lVar6 = 3;
  do {
    if (*piVar4 != -1) {
      piVar2 = (int *)((longlong)*piVar4 * 0xe0 + 0x18 + *(longlong *)(param_1 + 0x2e4f0));
      *piVar2 = *piVar2 + -1;
      *piVar4 = -1;
    }
    piVar4 = piVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)&local_28);
}



// FUNCTION 145626080 FUN_145626080 body=143 status=ok
// SIG undefined FUN_145626080(void)

void FUN_145626080(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x2a04c);
  if ((int)*(uint *)(param_1 + 0x2a048) < (int)*(uint *)(param_1 + 0x2a04c)) {
    uVar3 = *(uint *)(param_1 + 0x2a048);
  }
  uVar2 = FUN_1455aac40(uVar3);
  *(undefined4 *)(param_1 + 0xb493c) = uVar2;
  if (*(int *)(param_1 + 0xb46b8) != 0) {
    if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
      if (*(int *)(param_1 + 0x2a2e8) != 0) {
        uVar1 = *(int *)(param_1 + 0xb4938) * 2;
        if (uVar1 <= uVar3) {
          uVar3 = uVar1;
        }
        uVar2 = FUN_1455aac40(uVar3);
        *(undefined4 *)(param_1 + 0xb493c) = uVar2;
      }
      *(undefined4 *)(param_1 + 0xb4938) = 0;
      return;
    }
    *(uint *)(param_1 + 0xb4938) = uVar3;
  }
  return;
}



// FUNCTION 145626110 FUN_145626110 body=816 status=ok
// SIG undefined FUN_145626110(void)

void FUN_145626110(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 0x2e56c) == 2) && (*(int *)(param_1 + 0x2e57c) == 0)) &&
     (((*(int *)(param_1 + 0x2e5bc) == 1 && (*(int *)(param_1 + 0x2e4c4) == 0)) ||
      ((*(int *)(param_1 + 0x2e5bc) == 2 && (*(int *)(param_1 + 0xcd398) != 0)))))) {
    FUN_14567e1f0(param_1,param_1 + 0x2e5c0,param_1 + 0x2e5c4);
    FUN_14561ffa0(param_1,*(undefined4 *)(param_1 + 0x2e5c0),*(undefined4 *)(param_1 + 0x2e5c4));
  }
  if ((((*(int *)(param_1 + 0x2e56c) == 0) && (*(int *)(param_1 + 0x2e57c) == 1)) &&
      (*(int *)(param_1 + 0x2e5bc) == 2)) && (*(int *)(param_1 + 0xcd398) != 0)) {
    if ((*(int *)(param_1 + 0xb64dc) == 0) || (*(int *)(param_1 + 0xcba6c) == 0)) {
      uVar1 = (longlong)(*(int *)(param_1 + 0xcd3a4) * *(int *)(param_1 + 0x2e518)) /
              (longlong)*(int *)(param_1 + 0xcd3a8);
      *(int *)(param_1 + 0x2e5c0) = (int)uVar1;
      uVar2 = (longlong)(*(int *)(param_1 + 0xcd3a4) * *(int *)(param_1 + 0x2e51c)) /
              (longlong)*(int *)(param_1 + 0xcd3a8);
      *(int *)(param_1 + 0x2e5c4) = (int)uVar2;
      FUN_14561ffa0(param_1,uVar1 & 0xffffffff,uVar2 & 0xffffffff);
    }
    FUN_145626080(param_1);
    FUN_145661490(param_1 + 0xcd3c0,*(undefined4 *)(param_1 + 0x2a048),
                  *(undefined4 *)(param_1 + 0x2a04c));
  }
  if ((*(int *)(param_1 + 0x2e56c) == 2) && (*(int *)(param_1 + 0xb64dc) == 0)) {
    FUN_145617a60(param_1);
  }
  FUN_145625e40(param_1 + 0x29ee0,*(undefined4 *)(param_1 + 0x2a2d8));
  iVar3 = FUN_145466a50((longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 +
                        *(longlong *)(param_1 + 0x2e4f0) + 0x58,*(undefined4 *)(param_1 + 0x2a048),
                        *(undefined4 *)(param_1 + 0x2a04c),*(undefined4 *)(param_1 + 0x2a060),
                        *(undefined4 *)(param_1 + 0x2a064),*(undefined4 *)(param_1 + 0x2a068),0xa0,
                        *(undefined4 *)(param_1 + 0x2e4e8),0,0,0);
  if (iVar3 != 0) {
    FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate frame buffer");
  }
  FUN_145622cf0(param_1);
  if (*(int *)(param_1 + 0xb46b0) == 1) {
    FUN_1455aa760(param_1 + 0xcba88);
  }
  else if (*(int *)(param_1 + 0xb46b0) == 0) {
    FUN_1455aa650(param_1 + 0xcba88,*(undefined4 *)(param_1 + 0x2e700));
  }
  iVar3 = 1;
  plVar5 = (longlong *)(param_1 + 0x2a0d0);
  do {
    if ((char)iVar3 == '\x01') {
      iVar4 = *(int *)(param_1 + 0x2f698);
    }
    else if ((char)iVar3 == '\x02') {
      iVar4 = *(int *)(param_1 + 0x2f69c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2f6a0);
    }
    if (iVar4 == -1) {
      *(undefined4 *)(plVar5 + -1) = 0xffffffff;
LAB_1456263e9:
      *plVar5 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2a088 + (longlong)iVar4 * 4);
      *(int *)(plVar5 + -1) = iVar4;
      if (iVar4 == -1) goto LAB_1456263e9;
      lVar6 = *(longlong *)(param_1 + 0x2e4f0) + 0x58 + (longlong)iVar4 * 0xe0;
      *plVar5 = lVar6;
      FUN_1454720f0(plVar5 + 1,*(undefined4 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0xc),
                    *(undefined4 *)(param_1 + 0x2a048),*(undefined4 *)(param_1 + 0x2a04c),
                    *(uint *)(lVar6 + 0x98) >> 3 & 1);
      if ((((int)plVar5[1] != -1) && (*(int *)((longlong)plVar5 + 0xc) != -1)) &&
         (((int)plVar5[1] != 0x4000 || (*(int *)((longlong)plVar5 + 0xc) != 0x4000)))) {
        FUN_14546c880(lVar6);
      }
    }
    iVar3 = iVar3 + 1;
    plVar5 = plVar5 + 0x16;
    if (3 < iVar3) {
      *(longlong *)(param_1 + 0x123b0) = param_1 + 0x2a0c8;
      *(longlong *)(param_1 + 0x123b8) = param_1 + 0x2a0c8;
      return;
    }
  } while( true );
}



// FUNCTION 145626440 FUN_145626440 body=2880 status=ok
// SIG undefined FUN_145626440(void)

undefined8 FUN_145626440(longlong param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int *piVar11;
  int local_res8 [2];
  int *local_res10;
  undefined8 local_res18;
  uint local_res20;
  uint in_stack_ffffffffffffff98;
  undefined4 local_54;
  undefined4 local_50 [4];
  
  lVar8 = param_1 + 0x29ee0;
  piVar1 = (int *)(param_1 + 0x2e56c);
  local_50[0] = 0;
  local_54 = 0;
  if ((*(int *)(param_1 + 0xb64dc) == 0) || (*piVar1 != 0)) {
    uVar9 = 0;
    if ((*(int *)(param_1 + 0xb64dc) != 0) && (uVar10 = 0, *piVar1 == 0)) goto LAB_1456264ab;
    local_res20 = 0;
  }
  else {
    uVar10 = *(undefined1 *)((longlong)*(int *)(param_1 + 0xb64e0) + 0xcb790 + param_1);
LAB_1456264ab:
    local_res20 = *(uint *)(param_1 + 0xcb798 + (longlong)*(int *)(param_1 + 0xb64e0) * 4);
    uVar9 = uVar10;
  }
  if (*(int *)(param_1 + 0x2a2f0) != 0) {
    *(undefined4 *)(param_1 + 0xb427c) = 0;
    if (*(int *)(param_1 + 0xb64c8) == 0) {
      return 1;
    }
    if (*piVar1 == 1) {
      return 1;
    }
    if (*(int *)(param_1 + 0x2a2e8) == 0) {
      return 1;
    }
    *(undefined8 *)(param_1 + 0x2e838) = *(undefined8 *)(param_1 + 0x2e6d8);
    return 1;
  }
  *(undefined8 *)(param_1 + 0xcba38 + (longlong)*(int *)(param_1 + 0xb64e0) * 8) =
       *(undefined8 *)(param_1 + 0xcba30);
  *(uint *)(param_1 + 0xcee48) = (uint)(*(int *)(param_1 + 0x2e568) == 2);
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_1425b0090();
  FUN_145626110(param_1);
  iVar3 = *piVar1;
  if (*(int *)(param_1 + 0xb64dc) == 0) {
LAB_1456266f3:
    in_stack_ffffffffffffff98 = CONCAT31((int3)(in_stack_ffffffffffffff98 >> 8),uVar9);
    uVar5 = FUN_145620410(lVar8,*(undefined8 *)(param_1 + 0x2e6e8),param_1 + 0x2e6f0,iVar3 == 0,
                          in_stack_ffffffffffffff98,local_res20);
    *(undefined8 *)(param_1 + 0x2e6d8) = uVar5;
  }
  else if (iVar3 == 0) {
    piVar11 = *(int **)(param_1 + 0x2e6e8);
    if (*piVar11 != *(int *)(param_1 + 0x2a048) * 4) goto LAB_14562669e;
    if (((piVar11[1] != *(int *)(param_1 + 0x2a04c) * 4) ||
        (*(int *)(param_1 + 0xb7558) != *(int *)(param_1 + 0x2a048) * 2)) ||
       (*(int *)(param_1 + 0xb755c) != *(int *)(param_1 + 0x2a04c) * 2)) goto LAB_14562669e;
    if ((*(int *)(param_1 + 0x2a310) << 3 != *piVar11) ||
       (*(int *)(param_1 + 0x2a308) << 3 != piVar11[1])) {
      if (*(int *)(param_1 + 0x2e4d0) == 8) {
        (*DAT_14c7fe6b8)(piVar11,param_1 + 0xb7558,*(undefined1 *)(param_1 + 0xcb791),
                         *(undefined4 *)(param_1 + 0xcb79c));
        (*DAT_14c7fe6b8)(param_1 + 0xb7558,param_1 + 0x2e6f0,uVar9,local_res20);
      }
      else {
        FUN_1456252c0(piVar11,param_1 + 0xb7558,*(int *)(param_1 + 0x2e4d0),
                      *(undefined1 *)(param_1 + 0xcb791),*(undefined4 *)(param_1 + 0xcb79c));
        in_stack_ffffffffffffff98 = local_res20;
        FUN_1456252c0(param_1 + 0xb7558,param_1 + 0x2e6f0,*(undefined4 *)(param_1 + 0x2e4d0),uVar9,
                      local_res20);
      }
      piVar11 = (int *)(param_1 + 0x2e6f0);
    }
    *(int **)(param_1 + 0x2e6d8) = piVar11;
    *(undefined4 *)(param_1 + 0xb75f8) = 1;
  }
  else {
LAB_14562669e:
    if (((*(int *)(param_1 + 0xb64dc) == 0) || (iVar3 != 0)) ||
       ((**(int **)(param_1 + 0x2e6e8) != *(int *)(param_1 + 0x2a048) * 2 ||
        (((*(int **)(param_1 + 0x2e6e8))[1] != *(int *)(param_1 + 0x2a04c) * 2 ||
         (*(int *)(param_1 + 0xb75f8) == 0)))))) goto LAB_1456266f3;
    *(longlong *)(param_1 + 0x2e6d8) = param_1 + 0xb7558;
    *(undefined4 *)(param_1 + 0xb75f8) = 0;
  }
  if (((*(int *)(param_1 + 0xb64c8) != 0) && (*piVar1 != 1)) && (*(int *)(param_1 + 0x2a2e8) != 0))
  {
    *(undefined8 *)(param_1 + 0x2e838) = *(undefined8 *)(param_1 + 0x2e6d8);
  }
  if (((*(int *)(param_1 + 0xb64dc) != 0) &&
      (((*(int *)(param_1 + 0xb64e0) < *(int *)(param_1 + 0xb64e8) + -1 ||
        (*(int *)(param_1 + 0xb64e4) < *(int *)(param_1 + 0xb64ec) + -1)) ||
       (*(int *)(param_1 + 0xcb780) < 1)))) ||
     (((*(int *)(param_1 + 0xcd398) != 0 || (*(int *)(param_1 + 0xcd39c) != 0)) ||
      (*(int *)(param_1 + 0xcd3a0) != 0)))) {
    *(undefined4 *)(param_1 + 0xcee48) = 0;
    if (*(void **)(param_1 + 0xcee40) != (void *)0x0) {
      memset(*(void **)(param_1 + 0xcee40),0,
             (longlong)
             (((*(int *)(param_1 + 0x2a308) >> 3) + 1) * (*(int *)(param_1 + 0x2a314) >> 3)));
    }
  }
  if ((*(longlong *)(param_1 + 0x2e790) != 0) &&
     ((((*(int *)(param_1 + 0x2e69c) == 1 ||
        (((((*piVar1 == 0 && (*(int *)(param_1 + 0x2e57c) == 0)) &&
           (*(int *)(param_1 + 0x2e568) == 2)) && (4 < *(int *)(param_1 + 0x2e558))) ||
         (*(int *)(param_1 + 0xb4748) == 4)))) ||
       ((*(int *)(param_1 + 0xcd3c0) != 0 && (*(int *)(param_1 + 0x2e550) == 0)))) ||
      (*(int *)(param_1 + 0xcee48) != 0)))) {
    uVar5 = FUN_145620410(lVar8,*(longlong *)(param_1 + 0x2e790),param_1 + 0x2e798,*piVar1 == 0,
                          in_stack_ffffffffffffff98 & 0xffffff00,0);
    *(undefined8 *)(param_1 + 0x2e6e0) = uVar5;
  }
  piVar11 = *(int **)(param_1 + 0x2e6e0);
  if (((piVar11 == (int *)0x0) || (*piVar11 != **(int **)(param_1 + 0x2e6d8))) ||
     (piVar11[1] != (*(int **)(param_1 + 0x2e6d8))[1])) {
    *(undefined4 *)(param_1 + 0xcee48) = 0;
  }
  if (((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
     (*(int *)(param_1 + 0xcd398) != 0)) {
    memset(*(void **)(param_1 + 0xcd3e8),0,
           (longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)));
  }
  *(undefined4 *)(param_1 + 0xb44d8) = 0;
  iVar3 = 0;
  *(undefined8 *)(param_1 + 0xb44e0) = 0;
  if (((*(int *)(param_1 + 0x2a2e8) != 0) && (*(int *)(param_1 + 0x2e568) == 2)) &&
     (((*(int *)(param_1 + 0x2e57c) == 0 || (*(int *)(param_1 + 0x2e69c) == 1)) ||
      ((4 < *(int *)(param_1 + 0x2e558) && (*(int *)(param_1 + 0x2e558) < 8)))))) {
    FUN_145617ec0(param_1);
    iVar3 = *(int *)(param_1 + 0xb44d8);
  }
  if (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xcb9fc)) {
    *(int *)(param_1 + 0xcb950) = iVar3;
    *(undefined4 *)(param_1 + 0xcb954) = *(undefined4 *)(param_1 + 0xb44cc);
    if (((iVar3 != 0) && (0 < *(int *)(param_1 + 0xb64e4))) && (*(int *)(param_1 + 0xcb6a0) == 1)) {
      uVar4 = *(undefined4 *)(param_1 + 0xb44d8);
      FUN_145688cb0(param_1,*(int *)(param_1 + 0x2a2e4) == 0);
      *(undefined4 *)(param_1 + 0xb44d8) = uVar4;
    }
  }
  FUN_145661550(param_1);
  if (((*(int *)(param_1 + 0xb44d8) == 0) && (*(int *)(param_1 + 0xcb950) == 0)) ||
     ((*(int *)(param_1 + 0xb4508) != 0 && (*(int *)(param_1 + 0xcb854) != 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*piVar1 == 0) && (*(int *)(param_1 + 0x2e57c) == 1)) {
    if (*(int *)(param_1 + 0x2a2e4) != 0) {
      if (((((*(char *)(param_1 + 0x2a2f4) == '\0') && (!bVar2)) &&
           (*(char *)(param_1 + 0xcb9da) == '\0')) &&
          ((*(int *)(param_1 + 0xb64dc) == 0 ||
           (*(int *)((longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb9054 + param_1) == 0)))) &&
         (iVar3 = FUN_145616f50(param_1), iVar3 != 0)) {
        return 0;
      }
      goto LAB_145626a0a;
    }
  }
  else {
LAB_145626a0a:
    if (((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) &&
       (((*(int *)(param_1 + 0xcba68) != 0 && (*(int *)(param_1 + 0x2e5bc) == 2)) ||
        (((*(int *)(param_1 + 0xb64dc) == 0 || (*piVar1 != 0)) || (*(int *)(param_1 + 0xcb764) == 0)
         ))))) {
      FUN_1456200a0(param_1);
    }
  }
  FUN_14568fb30(param_1,*(undefined4 *)(param_1 + 0x2e558));
  FUN_14561ba20(param_1);
  FUN_14561bc90(param_1);
  *(undefined1 *)(param_1 + 0x2a3fc) = *(undefined1 *)(param_1 + 0xb4888);
  FUN_14568ffe0(param_1,*(undefined4 *)(param_1 + 0x2e558));
  local_res8[0] = FUN_145617150(param_1,local_50,&local_54);
  if ((*(int *)(param_1 + 0x2e57c) == 1) && (*(int *)(param_1 + 0xb4500) != 0)) {
    local_res8[0] = *(int *)(param_1 + 0xb4390);
    *(undefined4 *)(param_1 + 0xb4500) = 0;
  }
  if (*(int *)(param_1 + 0xb64dc) != 0) {
    *(int *)(param_1 + 0xcb9c4 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = local_res8[0];
  }
  if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
    *(uint *)(param_1 + 0x2a2f8) = (uint)(local_res8[0] < 200);
    if (local_res8[0] < 200) {
      *(longlong *)(param_1 + 0x12508) = param_1 + 75000;
      lVar6 = param_1 + 0x12530;
    }
    else {
      *(longlong *)(param_1 + 0x12508) = param_1 + 0x124e8;
      lVar6 = param_1 + 0x12520;
    }
    *(longlong *)(param_1 + 0x12540) = lVar6;
  }
  if ((*piVar1 == 2) && (*(int *)(param_1 + 0xb46e8) != 0)) {
    FUN_1456228b0(param_1);
  }
  if (*(int *)(param_1 + 0xb46b0) == 1) {
    FUN_1455aa760(param_1 + 0xcba88);
  }
  else if (*(int *)(param_1 + 0xb46b0) == 0) {
    FUN_1455aa650(param_1 + 0xcba88,*(undefined4 *)(param_1 + 0x2e700));
  }
  if (*(int *)(param_1 + 0xb48e8) != 0) {
    FUN_145624fb0(param_1);
  }
  if (((*(int *)(param_1 + 0xb4908) != 0) &&
      (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -2)) &&
     (*(longlong *)(param_1 + 0xcb7b0) == 0)) {
    lVar6 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a314) * *(int *)(param_1 + 0x2a308)),1);
    *(longlong *)(param_1 + 0xcb7b0) = lVar6;
    if (lVar6 == 0) {
      FUN_144d82810(lVar8,2,"Failed to allocate svc->prev_partition_svc");
    }
  }
  if ((((*(int *)(param_1 + 0x2e4d0) == 8) && (4 < *(int *)(param_1 + 0x2e558))) &&
      ((*piVar1 == 0 && ((*(int *)(param_1 + 0x2e57c) == 1 && (*(int *)(param_1 + 0x2e69c) != 1)))))
      ) && (*(int *)(param_1 + 0x2e5b4) == 3)) {
    *(undefined4 *)(param_1 + 0xcd3b8) = 1;
  }
  if (((*(int *)(param_1 + 0xb450c) == 0) || (*(int *)(param_1 + 0x2e57c) != 1)) ||
     (uVar4 = 1, *(int *)(param_1 + 0x2a2e4) == 0)) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0xb4508) = uVar4;
  FUN_1455cb7d0(param_1,local_res8[0]);
  FUN_145600ea0(param_1,local_res8[0],0);
  FUN_145621f90(param_1);
  pcVar7 = *(char **)(param_1 + 0xb4950);
  if (((*(int *)(param_1 + 0xb4988) != 0) || (*(int *)(param_1 + 0xb498c) != 0)) &&
     (iVar3 = *(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308), lVar8 = (longlong)iVar3,
     0 < iVar3)) {
    do {
      if (*pcVar7 == '\a') {
        *pcVar7 = '\0';
      }
      pcVar7 = pcVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (*(int *)(param_1 + 0xb64dc) != 0) {
    if (0 < *(int *)(param_1 + 0xb64e0)) {
      FUN_1456890a0(param_1);
    }
    FUN_1456892e0(param_1);
  }
  if (*(int *)(param_1 + 0xb4504) != 0) {
    *(undefined4 *)(param_1 + 0xb44d8) = 1;
    *(undefined4 *)(param_1 + 0xcb950) = 1;
    *(undefined4 *)(param_1 + 0xb48ec) = 0;
    *(undefined4 *)(param_1 + 0xb4504) = 0;
  }
  if (((*(int *)(param_1 + 0xb490c) == 1) &&
      ((*(int *)(param_1 + 0xb44d8) != 0 ||
       ((*(int *)(param_1 + 0xb64dc) != 0 && (*(int *)(param_1 + 0xcb950) != 0)))))) &&
     (iVar3 = FUN_145618770(param_1,0xffffffff,local_res8), iVar3 != 0)) {
    FUN_1455cb7d0(param_1,local_res8[0]);
    FUN_145600ea0(param_1,local_res8[0],0);
  }
  iVar3 = *(int *)(param_1 + 0x2e5b4);
  if (iVar3 == 1) {
    FUN_145663040(param_1);
  }
  else if (iVar3 == 4) {
    FUN_145662760(param_1);
  }
  else if (iVar3 == 2) {
    FUN_145662cf0(param_1);
  }
  else if (iVar3 == 7) {
    FUN_14568e9b0(*(undefined8 *)(param_1 + 0xb64c0),param_1);
  }
  else if (((*(char *)(param_1 + 0xcee78) == '\0') || (*(int *)(param_1 + 0x2a2e4) == 0)) ||
          (*(char *)(param_1 + 0x2a2f4) != '\0')) {
    if (iVar3 == 3) {
      FUN_14565de40(param_1);
    }
  }
  else {
    if (*(int *)(param_1 + 0xceedc) != 0) {
      if (iVar3 == 3) {
        FUN_14565de40(param_1);
      }
      if (*(int *)(param_1 + 0xb42f0) < 0x15) goto LAB_145626e09;
    }
    FUN_145621d20(param_1);
  }
LAB_145626e09:
  FUN_145621c00(param_1);
  FUN_1455fff50(param_1);
  if ((*(int *)(param_1 + 0xb490c) == 2) &&
     ((*(int *)(param_1 + 0xb44d8) != 0 ||
      ((*(int *)(param_1 + 0xb64dc) != 0 && (*(int *)(param_1 + 0xcb950) != 0)))))) {
    FUN_1456226b0(param_1);
    piVar1 = local_res10;
    FUN_145682720(param_1,local_res18,local_res10);
    FUN_1456227b0(param_1);
    iVar3 = FUN_145618770(param_1,*piVar1 << 3,local_res8);
    if (iVar3 != 0) {
      FUN_1425b0090();
      FUN_1455cb7d0(param_1,local_res8[0]);
      FUN_145600ea0(param_1,local_res8[0],0);
      FUN_145621bb0(param_1);
      if (*(int *)(param_1 + 0x2e5b4) == 3) {
        lVar8 = *(longlong *)(param_1 + 0xb4980);
        memset(*(void **)(param_1 + 0xb4950),0,
               (longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)));
        memset(*(void **)(lVar8 + 0x28),0xff,
               (longlong)(*(int *)(param_1 + 0x2a308) * *(int *)(param_1 + 0x2a310)));
        *(undefined4 *)(lVar8 + 8) = 0;
        FUN_145679d60(param_1 + 0x2b088);
      }
      FUN_145621c00(param_1);
      FUN_1455fff50(param_1);
    }
  }
  if (((*(int *)(param_1 + 0x2e5b4) == 3) && (*(char *)(param_1 + 0x2b088) != '\0')) &&
     ((*(int *)(param_1 + 0x2a2e4) != 0 &&
      ((*(char *)(param_1 + 0x2a2f4) == '\0' &&
       (*(int *)(*(longlong *)(param_1 + 0xb4980) + 0x84) != 0)))))) {
    FUN_14565d7c0(param_1);
  }
  FUN_1425b0090();
  return 1;
}



// FUNCTION 145626f80 FUN_145626f80 body=122 status=ok
// SIG undefined FUN_145626f80(void)

uint FUN_145626f80(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f6a0) * 4);
  iVar2 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f698) * 4);
  iVar3 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f69c) * 4);
  uVar5 = 5;
  if (iVar3 != iVar2) {
    uVar5 = 7;
  }
  if (((*(int *)(param_1 + 0xb42d4) == 0x7fffffff) && (*(int *)(param_1 + 0xb64ec) == 1)) &&
     (*(int *)(param_1 + 0xb64e8) == 1)) {
    uVar5 = 5;
  }
  uVar4 = uVar5 & 0xfffffffb;
  if (iVar1 != iVar2) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4 & 0xfffffffb;
  if (iVar3 != iVar1) {
    uVar5 = uVar4;
  }
  return uVar5;
}



// FUNCTION 145627000 FUN_145627000 body=3101 status=ok
// SIG undefined FUN_145627000(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145627000(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  double dVar19;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d0;
  uint local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  uint *local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  uint local_70;
  int iStack_6c;
  int *local_68;
  longlong local_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_74 = *(undefined4 *)(param_1 + 0xb4310);
  iVar3 = 0;
  uVar1 = 0;
  local_a4 = 0;
  uVar8 = 0;
  local_a0 = 0;
  iVar4 = 0;
  local_88 = 0;
  local_84 = 0;
  local_a8 = 0;
  local_78 = 0;
  local_90 = 0;
  local_7c = 1;
  local_68 = param_2;
  local_60[0] = param_3;
  if (*(int *)(param_1 + 0x2a2f0) != 0) {
    *(undefined4 *)(param_1 + 0xb427c) = 0;
    if (((*(int *)(param_1 + 0xb64c8) != 0) && (*(int *)(param_1 + 0x2e56c) != 1)) &&
       (*(int *)(param_1 + 0x2a2e8) != 0)) {
      *(undefined8 *)(param_1 + 0x2e838) = *(undefined8 *)(param_1 + 0x2e6d8);
    }
    goto LAB_145627c11;
  }
  FUN_14568fb30(param_1,*(undefined4 *)(param_1 + 0x2e558));
  FUN_14561ba20(param_1);
  FUN_14561bc90(param_1);
  *(undefined1 *)(param_1 + 0x2a3fc) = *(undefined1 *)(param_1 + 0xb4888);
  if ((*(int *)(param_1 + 0xb4718) == 0) ||
     ((*(int *)(param_1 + 0x2a2e4) != 0 && (*(char *)(param_1 + 0xb5014) != '\x01')))) {
    local_80 = 0;
  }
  else {
    local_80 = 1;
  }
LAB_145627107:
  do {
    FUN_1425b0090();
    FUN_145626110(param_1);
    if ((iVar3 == 0) || (*(int *)(param_1 + 0xcd398) != 0)) {
      FUN_14568ffe0(param_1,*(undefined4 *)(param_1 + 0x2e558));
      uVar1 = FUN_145617150(param_1,&local_9c,&local_98);
      if ((*(int *)(param_1 + 0x2e57c) == 1) && (*(int *)(param_1 + 0xb4500) != 0)) {
        uVar1 = *(uint *)(param_1 + 0xb4390);
        *(undefined4 *)(param_1 + 0xb4500) = 0;
      }
      if (*(int *)(param_1 + 0xb64dc) != 0) {
        *(uint *)(param_1 + 0xcb9c4 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = uVar1;
      }
      if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) {
        *(uint *)(param_1 + 0x2a2f8) = (uint)((int)uVar1 < 200);
        if ((int)uVar1 < 200) {
          *(longlong *)(param_1 + 0x12508) = param_1 + 75000;
          lVar9 = param_1 + 0x12530;
        }
        else {
          *(longlong *)(param_1 + 0x12508) = param_1 + 0x124e8;
          lVar9 = param_1 + 0x12520;
        }
        *(longlong *)(param_1 + 0x12540) = lVar9;
      }
      if ((*(int *)(param_1 + 0x2e56c) == 2) && (*(int *)(param_1 + 0xb46e8) != 0)) {
        FUN_1456228b0(param_1);
      }
      FUN_145626080(param_1);
      local_a8 = local_98;
      local_88 = 0;
      local_84 = 0;
      *(undefined4 *)(param_1 + 0xcd398) = 0;
      local_a0 = 0;
      uVar8 = local_9c;
    }
    if (iVar3 == 0) {
      FUN_145617090(param_1,*(undefined4 *)(param_1 + 0xb427c),&local_8c,&local_94);
    }
    local_d0 = 0;
    lVar9 = param_1 + 0x29ee0;
    local_d8 = local_d8 & 0xffffff00;
    uVar10 = FUN_145620410(lVar9,*(undefined8 *)(param_1 + 0x2e6e8),param_1 + 0x2e6f0,
                           *(int *)(param_1 + 0x2e56c) == 0);
    *(undefined8 *)(param_1 + 0x2e6d8) = uVar10;
    iVar2 = FUN_145621b80(param_1);
    if (iVar2 != 0) {
      *(undefined8 *)(param_1 + 0x2e838) = uVar10;
    }
    if (*(longlong *)(param_1 + 0x2e790) != 0) {
      local_d0 = 0;
      local_d8 = local_d8 & 0xffffff00;
      uVar10 = FUN_145620410(lVar9,*(longlong *)(param_1 + 0x2e790),param_1 + 0x2e798,
                             *(int *)(param_1 + 0x2e56c) == 0);
      *(undefined8 *)(param_1 + 0x2e6e0) = uVar10;
    }
    iVar2 = FUN_14561cbe0(lVar9);
    if (iVar2 == 0) {
      if (0 < iVar3) {
        FUN_145625ee0(param_1);
      }
      FUN_1456200a0(param_1);
    }
    iVar2 = iVar3;
    if (((*(int *)(param_1 + 0xcef28) != 0) && (local_78 == 0)) &&
       ((*(byte *)(param_1 + 0xcef38) & 1) != 0)) {
      uVar17 = *(uint *)(param_1 + 0xb5408 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4);
      local_b8 = FUN_145626f80(param_1);
      if (*(int *)(param_1 + 0x2a2d8) == -1) {
        puVar16 = (undefined4 *)&DAT_0000001c;
      }
      else {
        puVar16 = (undefined4 *)
                  (*(longlong *)(param_1 + 0x2e4f0) + 0x34 +
                  (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0);
      }
      bVar15 = 1;
      iVar3 = *(int *)(param_1 + 0xb540c);
      do {
        if (bVar15 == 1) {
          iVar4 = *(int *)(param_1 + 0x2f698);
        }
        else if (bVar15 == 2) {
          iVar4 = *(int *)(param_1 + 0x2f69c);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x2f6a0);
        }
        lVar14 = 0;
        if ((iVar4 != -1) &&
           (iVar4 = *(int *)(param_1 + 0x2a088 + (longlong)iVar4 * 4), iVar4 != -1)) {
          lVar14 = *(longlong *)(param_1 + 0x2e4f0) + 0x18 + (longlong)iVar4 * 0xe0;
        }
        uVar11 = (ulonglong)bVar15;
        bVar15 = bVar15 + 1;
        local_60[uVar11] = lVar14;
      } while ((char)bVar15 < '\x04');
      local_b0 = &local_70;
      local_c0 = local_60 + 1;
      local_d0 = *(uint *)(param_1 + 0xb63a4);
      local_c8 = (uint)(iVar3 == 3);
      local_d8 = uVar17;
      iVar3 = FUN_14568ed30(param_1 + 0xcef28,*puVar16,*(undefined4 *)(param_1 + 0x2e4c8),
                            *(undefined1 *)(param_1 + 0xb5014));
      if (iVar3 != 0) {
        FUN_144d82810(lVar9,iVar3,"vp9_extrc_get_encodeframe_decision() failed");
      }
      if (local_70 != 0xffffffff) {
        local_7c = 0;
        uVar1 = local_70;
      }
      local_90 = iStack_6c;
      iVar2 = local_a4;
      iVar4 = iStack_6c;
    }
    FUN_1455cb7d0(param_1,uVar1);
    if (iVar2 == 0) {
      FUN_145621f90(param_1);
    }
    iVar3 = *(int *)(param_1 + 0x2e5b4);
    if (iVar3 == 1) {
      FUN_145663040(param_1);
    }
    else if (iVar3 == 4) {
      FUN_145662760(param_1);
    }
    else if (iVar3 == 2) {
      FUN_145662cf0(param_1);
    }
    else if (iVar3 == 7) {
      FUN_14568e9b0(*(undefined8 *)(param_1 + 0xb64c0),param_1);
    }
    else if (iVar3 == 6) {
      FUN_145679db0(param_1 + 0x2b088);
    }
    FUN_1455fff50(param_1);
    FUN_1425b0090();
    if (1 < *(int *)(param_1 + 0xb46e0)) {
      FUN_1456226b0(param_1);
      if (*(int *)(param_1 + 0xb4834) == 0) {
        FUN_145682720(param_1,local_60[0],local_68);
      }
      *(int *)(param_1 + 0xb4280) = *local_68 << 3;
      if (local_94 == 0) {
        local_94 = 1;
      }
    }
    uVar17 = local_a8;
    if ((*(int *)(param_1 + 0xcef28) != 0) && ((*(byte *)(param_1 + 0xcef38) & 1) != 0)) {
      if (iVar4 == 0) {
        if (local_7c == 0) break;
      }
      else if (iVar4 != -1) {
        *(int *)(param_1 + 0xb4310) = iVar4;
      }
      local_78 = 1;
    }
    if (*(int *)(param_1 + 0x2e57c) == 3) {
LAB_145627aaa:
      bVar18 = false;
    }
    else if (((*(int *)(param_1 + 0x2a2e4) == 0) && (*(int *)(param_1 + 0xb42f4) != 0)) &&
            (*(int *)(param_1 + 0xb4280) < *(int *)(param_1 + 0xb4310))) {
      lVar9 = *(longlong *)(param_1 + 0x307a8);
      lVar14 = lVar9 >> 1;
      if (*(int *)(param_1 + 0x2a068) == 0) {
        lVar12 = FUN_14568de60(*(undefined8 *)(param_1 + 0x2e6d8));
      }
      else {
        lVar12 = FUN_14568de90();
      }
      lVar12 = lVar12 + (ulonglong)(lVar12 == 0);
      if ((lVar9 < lVar12) && (*(int *)(param_1 + 0xb4280) <= local_94)) {
LAB_145627605:
        local_a8 = uVar1 - 1;
        if ((int)uVar1 <= (int)uVar8) {
          local_a8 = uVar8;
        }
        uVar17 = (int)(local_a8 + uVar8) >> 1;
        uVar13 = (uint)(((int)uVar1 * lVar9) / lVar12);
        if ((int)uVar13 < (int)uVar17) {
          uVar17 = uVar13;
        }
      }
      else {
        uVar17 = uVar1;
        if (lVar14 < lVar12) {
          if (*(int *)(param_1 + 0xb4280) <= local_8c) goto LAB_145627605;
        }
        else if ((lVar12 < lVar14) && (local_8c <= *(int *)(param_1 + 0xb4280))) {
          uVar8 = uVar1 + 1;
          if ((int)local_a8 <= (int)uVar1) {
            uVar8 = local_a8;
          }
          uVar13 = (int)(local_a8 + 1 + uVar8) >> 1;
          uVar17 = (uint)(((int)uVar1 * lVar14) / lVar12);
          if ((int)uVar13 <= (int)uVar17) {
            uVar17 = uVar13;
          }
        }
      }
      iVar2 = local_a4;
      if ((int)uVar17 < (int)uVar8) {
        bVar18 = uVar8 != uVar1;
        uVar1 = uVar8;
      }
      else {
        if ((int)local_a8 < (int)uVar17) {
          uVar17 = local_a8;
        }
        bVar18 = uVar17 != uVar1;
        uVar1 = uVar17;
      }
    }
    else {
      local_d8 = local_98;
      if ((int)local_98 < (int)local_a8) {
        local_d8 = local_a8;
      }
      local_d0 = local_9c;
      iVar3 = FUN_145625650(param_1,local_94,local_8c,uVar1);
      if (iVar3 == 0) goto LAB_145627aaa;
      iVar3 = 0;
      if (*(int *)(param_1 + 0xcd398) == 1) {
        iVar4 = 1 - *(int *)(param_1 + 0xb43c4);
        iVar3 = local_a4 + 1;
        *(int *)(param_1 + 0xb43c4) = iVar4;
        *(int *)(param_1 + 0xb43c8) = iVar4;
        iVar4 = local_90;
        local_a4 = iVar3;
        goto LAB_145627107;
      }
      iVar4 = *(int *)(param_1 + 0xb4280);
      iVar2 = *(int *)(param_1 + 0xb427c);
      if (iVar2 < iVar4) {
        if (uVar1 == uVar17) {
          iVar7 = *(int *)(param_1 + 0xb4310);
          if (iVar4 < iVar7) {
            uVar17 = local_a8;
            if (*(int *)(param_1 + 0xb4304) == 0) {
              if ((((*(int *)(param_1 + 0x2a2e4) == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
                  (*(int *)(param_1 + 0x2f6cc) != 0)) || (*(int *)(param_1 + 0x2f6c8) != 0)) {
                iVar2 = (*(int *)(param_1 + 0xb427c) * 3) / 2;
              }
              else {
                iVar2 = iVar2 * 2;
              }
              if (iVar2 <= iVar4) goto LAB_145627785;
            }
          }
          else {
LAB_145627785:
            iVar4 = *(int *)(param_1 + 0x2a2e4);
            if (((iVar4 == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
               ((*(int *)(param_1 + 0x2f6cc) != 0 ||
                ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))))) {
              iVar2 = *(int *)(param_1 + 0xb427c);
              iVar6 = (iVar2 * 3) / 2;
            }
            else {
              iVar2 = *(int *)(param_1 + 0xb427c);
              iVar6 = iVar2 * 2;
            }
            iVar5 = iVar7;
            if (iVar6 <= iVar7) {
              if ((((iVar4 == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
                  (*(int *)(param_1 + 0x2f6cc) != 0)) ||
                 ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))) {
                iVar5 = (*(int *)(param_1 + 0xb427c) * 3) / 2;
              }
              else {
                iVar5 = iVar2 * 2;
              }
            }
            if (iVar5 < 1) {
              iVar7 = 1;
            }
            else {
              if (((iVar4 == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
                 ((*(int *)(param_1 + 0x2f6cc) != 0 ||
                  ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))))) {
                iVar6 = (iVar2 * 3) / 2;
              }
              else {
                iVar6 = iVar2 * 2;
              }
              if (iVar6 <= iVar7) {
                if ((((iVar4 == 0) || (*(char *)(param_1 + 0x2a2f4) != '\0')) ||
                    (*(int *)(param_1 + 0x2f6cc) != 0)) ||
                   ((*(int *)(param_1 + 0x2f6c8) != 0 && (*(int *)(param_1 + 0xb4304) == 0)))) {
                  iVar7 = (*(int *)(param_1 + 0xb427c) * 3) / 2;
                }
                else {
                  iVar7 = iVar2 * 2;
                }
              }
            }
            dVar19 = (double)FUN_145614250(local_a8,*(undefined4 *)(param_1 + 0x2e4d0));
            uVar8 = FUN_1456142c0(dVar19 * ((double)*(int *)(param_1 + 0xb4280) / (double)iVar7),
                                  *(undefined4 *)(param_1 + 0x2e4d0));
            uVar17 = *(uint *)(param_1 + 0xb4394);
            local_a8 = uVar17;
            if (((int)uVar17 <= (int)uVar8) &&
               (uVar13 = *(uint *)(param_1 + 0xb4390), uVar17 = uVar8, local_a8 = uVar8,
               (int)uVar13 < (int)uVar8)) {
              uVar17 = uVar13;
              local_a8 = uVar13;
            }
          }
        }
        iVar4 = *(int *)(param_1 + 0xb427c);
        if (iVar4 == 0) {
          iVar4 = 0x7fffffff;
        }
        else {
          iVar4 = (iVar4 / 2 + *(int *)(param_1 + 0xb4280)) / iVar4;
        }
        iVar2 = 4;
        if (iVar4 < 4) {
          iVar2 = iVar4;
        }
        uVar8 = iVar2 + uVar1;
        if ((int)uVar17 <= (int)(iVar2 + uVar1)) {
          uVar8 = uVar17;
        }
        if ((local_84 == 0) && (local_a0 < 2)) {
          FUN_1456168a0(param_1);
          uVar13 = local_98;
          if ((int)local_98 < (int)uVar17) {
            uVar13 = uVar17;
          }
          uVar13 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),local_9c,uVar13);
          if ((int)uVar13 < (int)uVar8) {
            do {
              if (9 < iVar3) goto LAB_1456279a8;
              FUN_1456168a0(param_1);
              uVar13 = local_98;
              if ((int)local_98 < (int)uVar17) {
                uVar13 = uVar17;
              }
              uVar13 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),local_9c,uVar13);
              iVar3 = iVar3 + 1;
            } while ((int)uVar13 < (int)uVar8);
            local_88 = 1;
            goto LAB_145627a7a;
          }
        }
        else {
          FUN_1456168a0(param_1);
          uVar13 = (int)(uVar17 + 1 + uVar8) / 2;
        }
LAB_1456279a8:
        local_88 = 1;
      }
      else {
        if (iVar4 == 0) {
          iVar4 = 0x7fffffff;
        }
        else {
          iVar4 = (iVar4 / 2 + iVar2) / iVar4;
        }
        iVar2 = 4;
        if (iVar4 < 4) {
          iVar2 = iVar4;
        }
        uVar17 = uVar1 - iVar2;
        if ((int)(uVar1 - iVar2) <= (int)uVar8) {
          uVar17 = uVar8;
        }
        local_a8 = uVar17;
        if ((local_88 == 0) && (local_a0 < 2)) {
          FUN_1456168a0(param_1);
          uVar13 = local_9c;
          if ((int)uVar8 < (int)local_9c) {
            uVar13 = uVar8;
          }
          uVar13 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),uVar13,local_98);
          if ((*(int *)(param_1 + 0x2e57c) == 2) && ((int)uVar13 < (int)uVar8)) {
            uVar8 = uVar13;
          }
          for (; ((int)uVar17 < (int)uVar13 && (iVar3 < 10)); iVar3 = iVar3 + 1) {
            FUN_1456168a0(param_1);
            uVar13 = local_9c;
            if ((int)uVar8 < (int)local_9c) {
              uVar13 = uVar8;
            }
            uVar13 = FUN_1456171e0(param_1,*(undefined4 *)(param_1 + 0xb427c),uVar13,local_98);
          }
        }
        else {
          FUN_1456168a0(param_1);
          uVar13 = (int)(uVar17 + uVar8) / 2;
        }
        local_84 = 1;
      }
LAB_145627a7a:
      iVar2 = local_a4;
      if ((int)uVar13 < (int)uVar8) {
        bVar18 = uVar8 != uVar1;
        uVar1 = uVar8;
      }
      else {
        if ((int)uVar17 < (int)uVar13) {
          uVar13 = uVar17;
        }
        bVar18 = uVar13 != uVar1;
        uVar1 = uVar13;
      }
    }
    if ((*(int *)(param_1 + 0xb4304) != 0) &&
       (*(int *)(param_1 + 0xb4280) < *(int *)(param_1 + 0xb4310))) {
      bVar18 = false;
    }
    iVar7 = local_a0 + 1;
    iVar3 = iVar2 + 1;
    if (!bVar18) {
      iVar7 = local_a0;
      iVar3 = iVar2;
    }
    local_a4 = iVar3;
    local_a0 = iVar7;
    if ((1 < *(int *)(param_1 + 0xb46e0)) && (bVar18)) {
      FUN_1456227b0(param_1);
      iVar4 = local_90;
      local_a4 = iVar3;
      local_a0 = iVar7;
      goto LAB_145627107;
    }
    iVar4 = local_90;
  } while (bVar18);
  *(undefined4 *)(param_1 + 0xb4310) = local_74;
  if (((*(int *)(param_1 + 0x2a2e4) != 0) && (*(char *)(param_1 + 0x2a2f4) == '\0')) &&
     (*(int *)(param_1 + 0x2f6cc) == 0)) {
    if (*(int *)(param_1 + 0x2f6c8) == 0) {
      if ((*(int *)(param_1 + 0xb4304) != 0) || ((int)uVar1 <= *(int *)(param_1 + 0xb4fe4)))
      goto LAB_145627b75;
LAB_145627ba0:
      *(uint *)(param_1 + 0xb4fe4) = uVar1;
    }
    else if (*(int *)(param_1 + 0xb4304) != 0) {
LAB_145627b75:
      if (((*(int *)(param_1 + 0x2e5d8) != 0) && (uVar1 == uVar8)) &&
         (*(int *)(param_1 + 0xb4280) < *(int *)(param_1 + 0xb427c))) {
        uVar8 = *(int *)(param_1 + 0xb4fe4) - 1;
        if ((int)uVar1 <= (int)uVar8) {
          uVar1 = uVar8;
        }
        goto LAB_145627ba0;
      }
    }
  }
  if ((local_80 != 0) &&
     (iVar3 = FUN_145620ab0(param_1 + 0x29ee0),
     ((*(int *)(param_1 + 0x2a04c) * *(int *)(param_1 + 0x2a048) >> 10) * 0x10 -
     (int)(*(longlong *)(param_1 + 0x2e548) >> 10)) * (*(int *)(param_1 + 0x2a31c) + 0x7f) * 8 >> 9
     <= iVar3)) {
    FUN_1455fff50(param_1);
  }
  if (1 < *(int *)(param_1 + 0xb46e0)) {
    FUN_1425b0090();
    FUN_1456227b0(param_1);
  }
LAB_145627c11:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
}



// FUNCTION 145627c30 FUN_145627c30 body=988 status=ok
// SIG undefined FUN_145627c30(void)

void FUN_145627c30(longlong param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  int local_res18;
  longlong local_d8;
  int local_d0;
  
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x2e6d8) + 0x10);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2e6d8) + 0x38);
  iVar2 = (*(int *)(param_1 + 0x2a310) + 1) / 2;
  dVar14 = 0.0;
  local_res18 = 0;
  uVar11 = (longlong)(*(int *)(param_1 + 0x2a308) + 1) / 2;
  iVar3 = (int)uVar11;
  dVar13 = 0.0;
  if (0 < iVar3) {
    do {
      iVar12 = 0;
      if (0 < iVar2) {
        do {
          dVar13 = 0.0;
          dVar1 = 0.0;
          if (local_res18 * 2 < *(int *)(param_1 + 0x2a308)) {
            iVar8 = local_res18 * 2;
            dVar13 = 0.0;
            dVar1 = 0.0;
            do {
              if ((local_res18 + 1) * 2 <= iVar8) break;
              iVar7 = iVar12 * 2;
              if (iVar7 < *(int *)(param_1 + 0x2a310)) {
                do {
                  if ((iVar12 + 1) * 2 <= iVar7) break;
                  local_d8 = (longlong)(iVar7 * 8) + lVar9 + iVar8 * 8 * iVar10;
                  local_d0 = iVar10;
                  if ((*(byte *)(*(longlong *)(param_1 + 0x2e6d8) + 0x98) & 8) == 0) {
                    uVar4 = FUN_1455ffcc0(param_1,&local_d8,3);
                  }
                  else {
                    uVar4 = FUN_1455ffd60(param_1,&local_d8,3,*(undefined4 *)(param_1 + 0x12420));
                  }
                  dVar1 = dVar1 + 1.0;
                  iVar7 = iVar7 + 1;
                  dVar13 = dVar13 + (double)uVar4;
                } while (iVar7 < *(int *)(param_1 + 0x2a310));
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0x2a308));
          }
          dVar13 = exp((dVar13 / dVar1) * 0.015625 * -0.0021489);
          dVar13 = (1.0 - dVar13) * 67.035434 + 17.492222;
          *(double *)
           (*(longlong *)(param_1 + 0x2f700) + (longlong)(local_res18 * iVar2 + iVar12) * 8) =
               dVar13;
          dVar13 = log(dVar13);
          dVar14 = dVar14 + dVar13;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar2);
      }
      local_res18 = local_res18 + 1;
      dVar13 = dVar14;
    } while (local_res18 < iVar3);
  }
  uVar11 = uVar11 & 0xffffffff;
  dVar14 = exp(dVar13 / (double)(iVar3 * iVar2));
  if (0 < iVar3) {
    iVar10 = 0;
    lVar9 = 0x10;
    do {
      iVar3 = 0;
      if (3 < iVar2) {
        uVar4 = (iVar2 - 4U >> 2) + 1;
        uVar6 = (ulonglong)uVar4;
        iVar3 = uVar4 * 4;
        lVar5 = lVar9;
        do {
          *(double *)(lVar5 + -0x10 + *(longlong *)(param_1 + 0x2f700)) =
               *(double *)(lVar5 + -0x10 + *(longlong *)(param_1 + 0x2f700)) / dVar14;
          *(double *)(lVar5 + -8 + *(longlong *)(param_1 + 0x2f700)) =
               *(double *)(lVar5 + -8 + *(longlong *)(param_1 + 0x2f700)) / dVar14;
          *(double *)(lVar5 + *(longlong *)(param_1 + 0x2f700)) =
               *(double *)(lVar5 + *(longlong *)(param_1 + 0x2f700)) / dVar14;
          *(double *)(lVar5 + 8 + *(longlong *)(param_1 + 0x2f700)) =
               *(double *)(lVar5 + 8 + *(longlong *)(param_1 + 0x2f700)) / dVar14;
          uVar6 = uVar6 - 1;
          lVar5 = lVar5 + 0x20;
        } while (uVar6 != 0);
      }
      if (iVar3 < iVar2) {
        uVar6 = (ulonglong)(uint)(iVar2 - iVar3);
        lVar5 = (longlong)(iVar10 + iVar3) << 3;
        do {
          *(double *)(lVar5 + *(longlong *)(param_1 + 0x2f700)) =
               *(double *)(lVar5 + *(longlong *)(param_1 + 0x2f700)) / dVar14;
          uVar6 = uVar6 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar6 != 0);
      }
      iVar10 = iVar10 + iVar2;
      lVar9 = lVar9 + (longlong)iVar2 * 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 145628030 FUN_145628030 body=949 status=ok
// SIG undefined FUN_145628030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145628030(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  size_t _Size;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_24a8 [32];
  longlong local_2488;
  longlong local_2480;
  undefined1 *local_2478;
  undefined8 local_2470;
  undefined4 local_2468;
  uint local_2458;
  int local_2454;
  uint local_2450;
  int local_244c;
  longlong local_2448;
  longlong local_2440;
  uint local_2438 [9];
  undefined1 local_2414 [476];
  short local_2238;
  undefined1 local_1438 [1024];
  undefined1 local_1038 [2048];
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_24a8;
  lVar17 = *(longlong *)(param_1 + 0x2e6d8);
  uVar12 = 0;
  iVar11 = 0;
  local_2448 = *(longlong *)(lVar17 + 0x38);
  iVar10 = *(int *)(lVar17 + 0x10);
  *(longlong *)(param_1 + 0x123c0) = lVar17;
  local_2458 = 0;
  if ((*(byte *)(lVar17 + 0x98) & 8) == 0) {
    puVar14 = local_1438;
    _Size = 0x100;
    puVar1 = &stack0x00001058;
  }
  else {
    _Size = 0x200;
    puVar14 = (undefined1 *)((ulonglong)local_838 >> 1);
    puVar1 = &stack0x00001c58;
  }
  local_244c = iVar10;
  memset(puVar1 + -0x2490,0,_Size);
  *(undefined8 *)(param_1 + 0x2f6e8) = 0;
  uVar8 = uVar12;
  if (0 < *(int *)(param_1 + 0x2a304)) {
    iVar2 = iVar10 << 4;
    local_2450 = 0;
    uVar7 = uVar12;
    uVar9 = uVar12;
    uVar16 = uVar12;
    local_2454 = iVar2;
    do {
      iVar15 = (int)uVar16;
      uVar5 = (uint)uVar7;
      if (0 < *(int *)(param_1 + 0x2a30c)) {
        local_2440 = (longlong)(int)(uint)uVar7;
        lVar17 = (longlong)iVar10;
        uVar7 = uVar12;
        uVar16 = uVar12;
        do {
          local_2488 = (int)uVar7 + local_2440 + local_2448;
          local_2480 = lVar17;
          local_2478 = puVar14;
          if ((*(byte *)(*(longlong *)(param_1 + 0x123c0) + 0x98) & 8) == 0) {
            local_2470 = 0x10;
            (*DAT_14c7fbd98)(0x10,0x10,local_1038);
            (*DAT_14c7fb9e0)(local_1038,0x10,local_2438);
          }
          else {
            local_2468 = *(undefined4 *)(param_1 + 0x12420);
            local_2470 = 0x10;
            (*DAT_14c7fbc08)(0x10);
            (*DAT_14c7fbad0)(local_1038,0x10,local_2438);
          }
          lVar4 = 1;
          local_2438[0] = 0;
          if (1 < DAT_14c707900) {
            lVar6 = 0xf;
            lVar4 = 0xf1;
            pauVar3 = (undefined1 (*) [16])local_2414;
            do {
              auVar18 = pabsd(in_XMM1,pauVar3[-2]);
              pauVar3[-2] = auVar18;
              auVar18 = pabsd(auVar18,pauVar3[-1]);
              pauVar3[-1] = auVar18;
              auVar18 = pabsd(auVar18,*pauVar3);
              *pauVar3 = auVar18;
              in_XMM1 = pabsd(auVar18,pauVar3[1]);
              pauVar3[1] = in_XMM1;
              lVar6 = lVar6 + -1;
              pauVar3 = pauVar3 + 4;
            } while (lVar6 != 0);
          }
          do {
            uVar5 = (int)local_2438[lVar4] >> 0x1f;
            local_2438[lVar4] = (local_2438[lVar4] ^ uVar5) - uVar5;
            lVar4 = lVar4 + 1;
          } while (lVar4 < 0x100);
          qsort(local_2438,0xff,4,(_PtFuncCompare *)&LAB_145628010);
          puVar13 = local_2438;
          lVar4 = 0xff;
          uVar8 = uVar12;
          do {
            puVar13 = puVar13 + 1;
            lVar6 = (longlong)(int)*puVar13;
            if (local_2238 != 0) {
              lVar6 = (lVar6 * lVar6 * lVar6) /
                      ((longlong)local_2238 * (longlong)local_2238 + lVar6 * lVar6);
            }
            uVar8 = uVar8 + lVar6 * lVar6;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          uVar7 = (ulonglong)((int)uVar7 + 0x10);
          local_2458 = local_2458 + 1;
          uVar9 = (ulonglong)local_2458;
          iVar11 = (int)uVar16;
          *(longlong *)
           (*(longlong *)(param_1 + 0x2f6f0) +
           (longlong)(iVar15 * *(int *)(param_1 + 0x2a30c) + iVar11) * 8) =
               (longlong)(uVar8 + (byte)((longlong)uVar8 >> 0x3f)) >> 8;
          uVar16 = (ulonglong)(iVar11 + 1U);
          uVar8 = *(longlong *)(param_1 + 0x2f6e8) +
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x2f6f0) +
                   (longlong)(*(int *)(param_1 + 0x2a30c) * iVar15 + iVar11) * 8);
          *(ulonglong *)(param_1 + 0x2f6e8) = uVar8;
          iVar10 = local_244c;
          iVar2 = local_2454;
          uVar5 = local_2450;
        } while ((int)(iVar11 + 1U) < *(int *)(param_1 + 0x2a30c));
      }
      iVar11 = (int)uVar9;
      local_2450 = uVar5 + iVar2;
      uVar7 = (ulonglong)local_2450;
      uVar16 = (ulonglong)(iVar15 + 1U);
    } while ((int)(iVar15 + 1U) < *(int *)(param_1 + 0x2a304));
  }
  if (iVar11 != 0) {
    uVar8 = (longlong)uVar8 / (longlong)iVar11;
  }
  if ((longlong)uVar8 < 1) {
    uVar8 = 1;
  }
  *(ulonglong *)(param_1 + 0x2f6e8) = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_24a8);
}



// FUNCTION 1456283f0 FUN_1456283f0 body=3488 status=ok
// SIG undefined FUN_1456283f0(void)

void FUN_1456283f0(longlong param_1,longlong *param_2,undefined8 param_3,uint *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  char *pcVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 *puVar23;
  int *piVar24;
  uint uVar25;
  longlong lVar26;
  undefined4 *puVar27;
  int *piVar28;
  undefined4 *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  uint local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 *local_a0;
  longlong *local_98;
  undefined4 local_90 [2];
  longlong local_88;
  uint *local_80;
  undefined8 local_78;
  int iStack_70;
  int iStack_6c;
  longlong local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = param_2;
  local_88 = param_1;
  local_80 = param_4;
  if ((((*(int *)(param_1 + 0xb64dc) != 0) && (0 < *(int *)(param_1 + 0xb64e0))) &&
      (*(longlong *)(param_1 + 0x2e548) == 0)) &&
     (((*(int *)(param_1 + 0xcb948) == 1 ||
       ((*(int *)(param_1 + 0xcb948) == 3 &&
        (*(int *)(param_1 + 0xcb910 + (longlong)*(int *)(param_1 + 0xb64e8) * 4) == 0)))) ||
      (*(int *)(param_1 + 0xcb884) == 0)))) {
    *(undefined4 *)(param_1 + 0xcb84c) = 1;
    FUN_145616830();
    *(undefined4 *)(param_1 + 0x2f6d0) = 0;
    *(undefined1 *)(param_1 + 0xcee39) = 1;
    *(undefined4 *)(param_1 + 0xcb854 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = 1;
    *(undefined4 *)(param_1 + 0xcb884 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = 1;
    FUN_1456880c0(param_1);
    goto LAB_145629180;
  }
  uVar25 = 0;
  if (*(int *)(param_1 + 0x2f6e0) != 0) {
    *(undefined4 *)(param_1 + 0x2b040) = *(undefined4 *)(param_1 + 0x2f6e4);
    *(undefined4 *)(param_1 + 0x2f6e0) = 0;
  }
  if (*(int *)(param_1 + 0x2f6d0) != 0) {
    *(undefined4 *)(param_1 + 0x2f6c4) = *(undefined4 *)(param_1 + 0x2f6d4);
    *(undefined4 *)(param_1 + 0x2f6c8) = *(undefined4 *)(param_1 + 0x2f6d8);
    *(undefined4 *)(param_1 + 0x2f6cc) = *(undefined4 *)(param_1 + 0x2f6dc);
  }
  FUN_1425b0090();
  puVar29 = (undefined4 *)&DAT_0000001c;
  if (*(int *)(param_1 + 0x2a2f0) == 0) {
    if ((*(int *)(param_1 + 0x2a2d8) != -1) &&
       (lVar13 = *(longlong *)(param_1 + 0x2e4f0) + 0x18 +
                 (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0, lVar13 != 0)) {
      *(uint *)(lVar13 + 0x1c) =
           (uint)*(byte *)((ulonglong)*(byte *)(param_1 + 0xb5014) + 0xb57f8 + param_1) +
           *(int *)(param_1 + 0x2e4c4);
      *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(param_1 + 0x2e4c8);
    }
    if (*(int *)(param_1 + 0x2a2d8) == -1) {
      piVar14 = (int *)&DAT_0000001c;
    }
    else {
      piVar14 = (int *)(*(longlong *)(param_1 + 0x2e4f0) + 0x34 +
                       (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0);
    }
    iVar9 = *piVar14;
    bVar11 = 1;
    do {
      if (bVar11 == 1) {
        iVar4 = *(int *)(param_1 + 0x2f698);
      }
      else if (bVar11 == 2) {
        iVar4 = *(int *)(param_1 + 0x2f69c);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x2f6a0);
      }
      if (((iVar4 != -1) && (iVar4 = *(int *)(param_1 + 0x2a088 + (longlong)iVar4 * 4), iVar4 != -1)
          ) && (lVar13 = *(longlong *)(param_1 + 0x2e4f0) + 0x18 + (longlong)iVar4 * 0xe0,
               lVar13 != 0)) {
        *(uint *)(param_1 + 0x2b044 + (ulonglong)bVar11 * 4) =
             (uint)(iVar9 < *(int *)(lVar13 + 0x1c));
      }
      bVar11 = bVar11 + 1;
    } while ((char)bVar11 < '\x04');
  }
  *(undefined1 *)(param_1 + 0x2b069) = 0;
  if ((*(int *)(param_1 + 0x2e56c) == 2) && (*(int *)(param_1 + 0xb4890) != 0)) {
    local_78._4_4_ = 0;
    iStack_70 = 0;
    iStack_6c = 0;
    if ((*(int *)(param_1 + 0x2a2e0) != 0) && (*(int *)(param_1 + 0x2f6cc) == 0)) {
      piVar28 = (int *)((longlong)&local_78 + 4);
      lVar13 = 3;
      piVar14 = (int *)(param_1 + 0xb4560);
      do {
        iVar9 = *piVar28;
        lVar15 = 3;
        piVar8 = piVar14;
        do {
          iVar9 = iVar9 + *piVar8;
          piVar8 = piVar8 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        *piVar28 = iVar9;
        piVar14 = piVar14 + 4;
        piVar28 = piVar28 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      bVar11 = 0;
      uVar25 = 0;
      do {
        if ((((local_78._4_4_ != 0) &&
             (uVar6 = (ulonglong)bVar11, *(int *)(param_1 + 0xb4560 + uVar6 * 4) == 0)) &&
            ((iStack_70 == 0 || (*(int *)(param_1 + 0xb4570 + uVar6 * 4) * 0x32 < iStack_70)))) &&
           ((iStack_6c == 0 || (*(int *)(param_1 + 0xb4580 + uVar6 * 4) * 0x32 < iStack_6c)))) {
          uVar25 = uVar25 | 1 << (bVar11 & 0x1f);
        }
        bVar11 = bVar11 + 1;
      } while (bVar11 < 3);
    }
    *(uint *)(param_1 + 0xb4894) = uVar25;
  }
  pcVar20 = (char *)(param_1 + 0x2a2f4);
  local_78 = pcVar20;
  if ((*(int *)(param_1 + 0x2a2e4) == 0) || (*pcVar20 != '\0')) {
    FUN_14567a370((char *)(param_1 + 0x2b088));
    if (*(char *)(param_1 + 0x2b088) != '\0') {
      *(undefined2 *)(param_1 + 0x2b089) = 0x101;
    }
    *(undefined4 *)(param_1 + 0xb4300) = 0;
    *(int *)(param_1 + 0x2e4d8) = *(int *)(param_1 + 0x2e658);
    *(undefined4 *)(param_1 + 0x2e4dc) = *(undefined4 *)(param_1 + 0x2e65c);
    if (*(int *)(param_1 + 0x2e658) == 0) {
      if (*pcVar20 != '\0') {
        *(undefined4 *)(param_1 + 0x2a2fc) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2e4dc) = 1;
      *(undefined4 *)(param_1 + 0x2a2fc) = 0;
      *(undefined4 *)(param_1 + 0x2b040) = 0;
    }
  }
  if (*(int *)(param_1 + 0x2e698) == 1) {
    FUN_145627c30(param_1);
  }
  if (*(int *)(param_1 + 0x2e5b4) == 5) {
    if (((*(longlong *)(param_1 + 0x2f6f0) == 0) ||
        (*(int *)(param_1 + 0x2f6f8) < *(int *)(param_1 + 0x2a304))) ||
       (*(int *)(param_1 + 0x2f6fc) < *(int *)(param_1 + 0x2a30c))) {
      FUN_14518f040();
      *(undefined8 *)(param_1 + 0x2f6f0) = 0;
      lVar13 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a304) * *(int *)(param_1 + 0x2a30c)),8
                            );
      *(longlong *)(param_1 + 0x2f6f0) = lVar13;
      if (lVar13 == 0) {
        FUN_144d82810(param_1 + 0x29ee0,2);
      }
      *(undefined4 *)(param_1 + 0x2f6f8) = *(undefined4 *)(param_1 + 0x2a304);
      *(undefined4 *)(param_1 + 0x2f6fc) = *(undefined4 *)(param_1 + 0x2a30c);
    }
    FUN_145628030(param_1);
  }
  FUN_1425b0090();
  if ((*(int *)(param_1 + 0xcef28) != 0) && ((*(byte *)(param_1 + 0xcef38) & 4) != 0)) {
    bVar11 = *(byte *)(param_1 + 0xb5014);
    uVar5 = *(undefined4 *)(param_1 + 0xb5408 + (ulonglong)bVar11 * 4);
    local_a8 = FUN_145626f80(param_1);
    if (*(int *)(param_1 + 0x2a2d8) == -1) {
      puVar27 = (undefined4 *)&DAT_0000001c;
    }
    else {
      puVar27 = (undefined4 *)
                (*(longlong *)(param_1 + 0x2e4f0) + 0x34 +
                (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0);
    }
    local_90[0] = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0xb540c);
    bVar12 = 1;
    do {
      if (bVar12 == 1) {
        iVar4 = *(int *)(param_1 + 0x2f698);
      }
      else if (bVar12 == 2) {
        iVar4 = *(int *)(param_1 + 0x2f69c);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x2f6a0);
      }
      if ((iVar4 == -1) || (iVar4 = *(int *)(param_1 + 0x2a088 + (longlong)iVar4 * 4), iVar4 == -1))
      {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(param_1 + 0x2e4f0) + 0x18 + (longlong)iVar4 * 0xe0;
      }
      uVar6 = (ulonglong)bVar12;
      bVar12 = bVar12 + 1;
      *(longlong *)(&iStack_70 + uVar6 * 2) = lVar13;
    } while ((char)bVar12 < '\x04');
    local_a0 = local_90;
    local_b0 = local_68;
    local_c0 = *(undefined4 *)(param_1 + 0xb63a4);
    local_b8 = (uint)(iVar9 == 3);
    local_c8 = uVar5;
    iVar9 = FUN_14568ef60(param_1 + 0xcef28,*puVar27,*(undefined4 *)(param_1 + 0x2e4c8),bVar11);
    pcVar20 = local_78;
    if (iVar9 != 0) {
      FUN_144d82810(param_1 + 0x29ee0,iVar9,"vp9_extrc_get_frame_rdmult() failed");
      pcVar20 = local_78;
    }
    *(undefined4 *)(param_1 + 0xcef2c) = local_90[0];
    local_78 = pcVar20;
  }
  if (*(int *)(param_1 + 0xb46e0) == 0) {
    iVar9 = FUN_145626440();
    if (iVar9 == 0) goto LAB_145629180;
  }
  else {
    FUN_145627000(param_1,local_98,param_3);
  }
  if (*(int *)(param_1 + 0x2a2f0) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x2e4f0);
    iVar9 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(param_1 + 0x2f6a0) * 4);
    if (-1 < *(int *)(param_1 + 0x2a2d8)) {
      lVar15 = (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0;
      iVar4 = *(int *)(lVar15 + 0x18 + lVar13);
      if (0 < iVar4) {
        *(int *)(lVar15 + 0x18 + lVar13) = iVar4 + -1;
      }
    }
    *(int *)(param_1 + 0x2a2d8) = iVar9;
    piVar14 = (int *)((longlong)iVar9 * 0xe0 + 0x18 + lVar13);
    *piVar14 = *piVar14 + 1;
  }
  if ((*(int *)(param_1 + 0xb42f8) != 0) && (*(int *)(param_1 + 0xb42ec) == 1)) {
    if (*(int *)(param_1 + 0x2a068) == 0) {
      uVar7 = FUN_14568de60(*(undefined8 *)(param_1 + 0x2e6d8),
                            (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x58 +
                            *(longlong *)(param_1 + 0x2e4f0));
    }
    else {
      uVar7 = FUN_14568de90();
    }
    *(undefined8 *)(param_1 + 0x307a8) = uVar7;
  }
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    *(undefined4 *)(param_1 + 0x2f6c4) = 1;
  }
  plVar17 = (longlong *)(param_1 + 0x2e4f0);
  lVar13 = *plVar17 + (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x58;
  *(longlong *)(param_1 + 0x2a070) = lVar13;
  *(undefined4 *)(lVar13 + 0x84) = *(undefined4 *)(param_1 + 0x2a040);
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a070) + 0x88) = *(undefined4 *)(param_1 + 0x2a044);
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a070) + 0x8c) = *(undefined4 *)(param_1 + 0x2a050);
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a070) + 0x90) = *(undefined4 *)(param_1 + 0x2a054);
  FUN_145625c20(param_1,param_1 + 0x29ee0);
  if (*(int *)(param_1 + 0xb4508) != 0) {
    FUN_1456226b0(param_1);
  }
  FUN_145682720(param_1,param_3,local_98);
  plVar16 = local_98;
  if (*(int *)(param_1 + 0xcef28) != 0) {
    if (*(int *)(param_1 + 0x2a2d8) == -1) {
      lVar13 = 0x40;
    }
    else {
      lVar13 = *plVar17 + (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x58;
    }
    local_b8 = *(uint *)(param_1 + 0x2a31c);
    local_c0 = *(undefined4 *)(param_1 + 0x2e520);
    local_c8 = *(undefined4 *)(param_1 + 0x2e4d0);
    iVar9 = FUN_14568ee00(param_1 + 0xcef28,*local_98 << 3,*(undefined8 *)(param_1 + 0x2e6d8),lVar13
                         );
    if (iVar9 != 0) {
      FUN_144d82810(param_1 + 0x29ee0,iVar9,"vp9_extrc_update_encodeframe_result() failed");
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x2a2d8) != -1) {
      puVar29 = (undefined4 *)(*plVar17 + (longlong)*(int *)(param_1 + 0x2a2d8) * 0xe0 + 0x34);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x2a31c);
    uVar1 = *(undefined4 *)(param_1 + 0xb5408 + (ulonglong)*(byte *)(param_1 + 0xb5014) * 4);
    cVar3 = '\x01';
    do {
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\x04');
    *param_5 = *puVar29;
    param_5[1] = uVar1;
    param_5[2] = uVar5;
    local_78 = pcVar20;
  }
  if (((*(int *)(param_1 + 0xb4508) != 0) &&
      (*(int *)(param_1 + 0x2a31c) < *(int *)(param_1 + 0xb4390))) &&
     (*(int *)(param_1 + 0xb64e0) == 0)) {
    iVar9 = FUN_145616bd0(param_1,plVar16);
    if (iVar9 != 0) {
      FUN_1456227b0(param_1);
      goto LAB_145629180;
    }
  }
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0xcee39) = 0;
  *(undefined4 *)(param_1 + 0xcb854 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = 0;
  if (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1) {
    *(int *)(param_1 + 0xcba60) = *(int *)(param_1 + 0xcba60) + 1;
  }
  if (*(int *)(param_1 + 0xb64e4) == 0) {
    if (*(int *)(param_1 + 0x2f6c4) == 0) {
      if (*(int *)(param_1 + 0x2f6c8) == 0) {
        if (*(int *)(param_1 + 0x2f6cc) == 0) goto LAB_145628cd5;
        uVar5 = *(undefined4 *)(param_1 + 0x2f6a0);
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x2f69c);
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x2f698);
    }
    *(undefined4 *)(param_1 + 0xcb98c + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = uVar5;
  }
LAB_145628cd5:
  if (*(char *)(param_1 + 0x2b089) != '\0') {
    plVar17 = *(longlong **)(param_1 + 0x2a3b0);
    puVar18 = *(undefined1 **)(param_1 + 0x2a3e8);
    if (0 < *(int *)(param_1 + 0x2a308)) {
      iVar9 = *(int *)(param_1 + 0x2a310);
      uVar31 = uVar6;
      do {
        plVar16 = plVar17;
        puVar23 = puVar18;
        uVar19 = uVar6;
        if (0 < iVar9) {
          do {
            lVar13 = *plVar16;
            plVar16 = plVar16 + 1;
            uVar25 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar25;
            *puVar23 = *(undefined1 *)(lVar13 + 4);
            iVar9 = *(int *)(param_1 + 0x2a310);
            puVar23 = puVar23 + 1;
          } while ((int)uVar25 < iVar9);
        }
        uVar25 = (int)uVar31 + 1;
        uVar31 = (ulonglong)uVar25;
        plVar17 = plVar17 + *(int *)(param_1 + 0x2a314);
        puVar18 = puVar18 + iVar9;
      } while ((int)uVar25 < *(int *)(param_1 + 0x2a308));
    }
  }
  if ((*(int *)(param_1 + 0x2a2e4) != 0) && (*pcVar20 == '\0')) {
    FUN_145625ee0(param_1);
    local_78 = pcVar20;
  }
  FUN_1456258b0(param_1);
  pcVar2 = local_78;
  if ((*(int *)(param_1 + 0xb64dc) != 0) && (*(int *)(param_1 + 0x2e56c) == 0)) {
    FUN_145689410(param_1);
    pcVar2 = pcVar20;
  }
  lVar13 = local_88;
  local_78 = pcVar2;
  if (*(int *)(param_1 + 0x2a2f0) == 0) {
    piVar14 = (int *)(param_1 + 0x21274);
    lVar15 = 4;
    uVar31 = uVar6;
    do {
      lVar30 = 2;
      piVar28 = (int *)(*(longlong *)(param_1 + 0x27ea8) + 0x338 + uVar31);
      do {
        lVar21 = 2;
        do {
          lVar22 = 6;
          uVar19 = uVar6;
          do {
            piVar8 = piVar14;
            piVar24 = piVar28;
            lVar26 = 6;
            if ((int)uVar19 == 0) {
              lVar26 = 3;
            }
            do {
              piVar24[-2] = piVar8[-1];
              piVar24[-1] = *piVar8;
              iVar9 = piVar8[1];
              *piVar24 = iVar9;
              *piVar24 = iVar9 + piVar8[9] + piVar8[8] + piVar8[7] + piVar8[6] + piVar8[5] +
                                 piVar8[4] + piVar8[3] + piVar8[2];
              piVar24[1] = piVar8[10];
              lVar26 = lVar26 + -1;
              piVar8 = piVar8 + 0xc;
              piVar24 = piVar24 + 4;
            } while (lVar26 != 0);
            uVar19 = (ulonglong)((int)uVar19 + 1);
            piVar28 = piVar28 + 0x18;
            piVar14 = piVar14 + 0x48;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      uVar31 = uVar31 + 0x900;
      lVar15 = lVar15 + -1;
      param_1 = local_88;
    } while (lVar15 != 0);
    param_1 = lVar13;
    if ((*(int *)(local_88 + 0x2e4d8) == 0) && (*(int *)(local_88 + 0x2e4dc) == 0)) {
      if ((*(int *)(local_88 + 0x2a2e4) != 0) && (*pcVar2 == '\0')) {
        FUN_145470140(local_88 + 0x29ee0);
        FUN_14546f730(lVar13 + 0x29ee0,*(undefined4 *)(lVar13 + 0x2a2f8));
      }
      FUN_14546f360(lVar13 + 0x29ee0);
    }
  }
  *(undefined4 *)(param_1 + 0x2f6d0) = 0;
  uVar25 = *(uint *)(param_1 + 0xcba80) | 2;
  if (*(int *)(param_1 + 0x2f6c8) != 1) {
    uVar25 = *(uint *)(param_1 + 0xcba80) & 0xfffffffd;
  }
  *(uint *)(param_1 + 0xcba80) = uVar25;
  uVar10 = uVar25 | 4;
  if (*(int *)(param_1 + 0x2f6cc) != 1) {
    uVar10 = uVar25 & 0xfffffffb;
  }
  *(uint *)(param_1 + 0xcba80) = uVar10;
  uVar5 = FUN_145626f80(param_1);
  plVar17 = local_98;
  *(undefined4 *)(param_1 + 0xb46a8) = uVar5;
  *(undefined4 *)(param_1 + 0x2a2e0) = *(undefined4 *)(param_1 + 0x2a2e4);
  FUN_1456160c0(param_1,*local_98);
  if (((((*(int *)(param_1 + 0xcee4c) != 0) && (*(int *)(param_1 + 0x2e56c) == 0)) &&
       (*(int *)(param_1 + 0x2a2e4) != 0)) && (*pcVar2 == '\0')) &&
     ((*(int *)(param_1 + 0xb64dc) == 0 ||
      ((*(int *)((longlong)*(int *)(param_1 + 0xb64e4) * 0x1ab8 + 0xb9054 + param_1) == 0 &&
       (*(int *)(param_1 + 0xb64e0) == *(int *)(param_1 + 0xb64e8) + -1)))))) {
    FUN_145618c80(param_1);
  }
  lVar13 = *plVar17;
  if (lVar13 == 0) {
    lVar13 = 1;
  }
  *plVar17 = lVar13;
  uVar25 = *(uint *)(param_1 + 0xcba80) | 1;
  if (*(int *)(param_1 + 0x2a2e4) != 0) {
    uVar25 = *(uint *)(param_1 + 0xcba80) & 0xfffffffe;
  }
  *local_80 = uVar25;
  *(undefined4 *)(param_1 + 0x2a058) = *(undefined4 *)(param_1 + 0x2a048);
  *(undefined4 *)(param_1 + 0x2a05c) = *(undefined4 *)(param_1 + 0x2a04c);
  *(undefined2 *)(param_1 + 0x2b089) = 0;
  *(undefined1 *)(param_1 + 0x2b069) = 0;
  if (*(int *)(param_1 + 0x2a2f0) == 0) {
    *(undefined4 *)(param_1 + 0x2a2ec) = *(undefined4 *)(param_1 + 0x2a2e8);
    *(undefined8 *)(param_1 + 0x2a078) = *(undefined8 *)(param_1 + 0x2a080);
  }
  if (*(int *)(param_1 + 0x2a2e8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x2a3b8);
    lVar15 = *(longlong *)(param_1 + 0x2a380);
    if (*(int *)(param_1 + 0x2a2f0) == 0) {
      lVar21 = (longlong)*(int *)(param_1 + 0x2a314);
      lVar30 = *(longlong *)(param_1 + 0x2a370);
      *(longlong *)(param_1 + 0x2a370) = lVar15;
      *(longlong *)(param_1 + 0x2a380) = lVar30;
      *(longlong *)(param_1 + 0x2a378) = lVar15 + 0x44 + lVar21 * 0x44;
      lVar15 = *(longlong *)(param_1 + 0x2a3a8);
      *(longlong *)(param_1 + 0x2a3b8) = lVar15;
      *(longlong *)(param_1 + 0x2a388) = lVar21 * 0x44 + 0x44 + lVar30;
      *(longlong *)(param_1 + 0x2a3a8) = lVar13;
      *(longlong *)(param_1 + 0x2a3b0) = lVar13 + (lVar21 + 1) * 8;
      *(longlong *)(param_1 + 0x2a3c0) = lVar15 + (lVar21 + 1) * 8;
    }
    if (*(int *)(param_1 + 0xb64dc) != 0) {
      FUN_1456880c0(param_1);
    }
    if (*(int *)(param_1 + 0x2a2e8) != 0) {
      *(int *)(param_1 + 0x2e4c4) = *(int *)(param_1 + 0x2e4c4) + 1;
    }
  }
  *(int *)(param_1 + 0x2e4c8) = *(int *)(param_1 + 0x2e4c8) + 1;
  if (*(int *)(param_1 + 0xb64dc) != 0) {
    *(undefined4 *)
     ((longlong)
      (*(int *)(param_1 + 0xb64ec) * *(int *)(param_1 + 0xb64e0) + *(int *)(param_1 + 0xb64e4)) *
      0x1ab8 + 0xb905c + param_1) = *(undefined4 *)(param_1 + 0x2a2e4);
    *(undefined4 *)(param_1 + 0xcb9b0 + (longlong)*(int *)(param_1 + 0xb64e0) * 4) = 0;
  }
  *(undefined1 *)(param_1 + 0xb6418) = 0;
  if (*(int *)(param_1 + 0x2e5b4) == 7) {
    FUN_14568e9c0(*(undefined8 *)(param_1 + 0xb64c0),param_1);
  }
  *(char *)(param_1 + 0xcb9d9) = *pcVar2;
  *(undefined1 *)(param_1 + 0xcb9d8) = 0;
LAB_145629180:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1456291a0 FUN_1456291a0 body=1632 status=ok
// SIG undefined FUN_1456291a0(void)

void FUN_1456291a0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  double dVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  longlong local_res8;
  
  uVar12 = *(uint *)(param_1 + 0x2a048);
  lVar1 = param_1 + 0x29ee0;
  uVar11 = *(uint *)(param_1 + 0x2a04c);
  cVar4 = *(char *)(param_1 + 0xcee50);
  lVar17 = (longlong)cVar4;
  uVar18 = uVar12 * uVar11;
  if ((int)uVar12 <= (int)uVar11) {
    uVar12 = uVar11;
  }
  FUN_1425b0090();
  *(longlong *)(param_1 + 0xcd4b0) = *(longlong *)(param_1 + 0xcd4b0) + *param_2;
  if (*(int *)(param_1 + 0x2a2e8) != 0) {
    *(longlong *)(param_1 + 0xcd4b8) =
         *(longlong *)(param_1 + 0xcd4b8) +
         (ulonglong)
         (uVar18 + (uVar18 >>
                   ((char)*(undefined4 *)(param_1 + 0x2a064) +
                    (char)*(undefined4 *)(param_1 + 0x2a060) & 0x1fU)) * 2);
    *(double *)(param_1 + 0xcd4c0) =
         (double)(*(longlong *)(param_1 + 0xb4268) - *(longlong *)(param_1 + 0xb4270)) / 10000000.0;
  }
  uVar14 = 0;
  if (param_3 < 1) {
    *(int *)(param_1 + 0xcd4ac) = *(int *)(param_1 + 0xcd4ac) + 1;
  }
  else {
    puVar2 = (uint *)(param_1 + 0xcd4ac);
    if (*(char *)(param_1 + 0xcd4a8) == '\0') {
      *(undefined1 *)(param_1 + 0xcd4a8) = 1;
      *puVar2 = 0;
    }
    else {
      if (*puVar2 < *(uint *)(param_1 + 0xcdd0c)) {
        *(uint *)(param_1 + 0xcdd0c) = *puVar2;
      }
      *puVar2 = 0;
    }
  }
  bVar10 = *(byte *)(param_1 + 0xcdcc9);
  bVar5 = *(byte *)(param_1 + 0xcdcc8);
  if (bVar10 < 0x7f) {
    uVar11 = (uint)bVar5 + (uint)bVar10 & 0x7f;
    *(byte *)(param_1 + 0xcdcc9) = bVar10 + 1;
  }
  else {
    uVar11 = (uint)bVar5;
    *(byte *)(param_1 + 0xcdcc8) = bVar5 + 1 & 0x7f;
  }
  uVar16 = (ulonglong)uVar11;
  *(undefined8 *)(param_1 + 0xcd4a8 + (uVar16 + 2) * 0x10) = *(undefined8 *)(param_1 + 0xb4260);
  *(int *)(param_1 + 0xcd4d4 + uVar16 * 0x10) = (int)*param_2;
  *(uint *)(param_1 + 0xcd4d0 + uVar16 * 0x10) = uVar18;
  if (*(int *)(param_1 + 0x2a2e4) == 0) {
    *(undefined4 *)(param_1 + 0xcdcd0) = 0;
  }
  else {
    uVar11 = FUN_1456825a0(param_1);
    uVar11 = uVar11 | *(uint *)(param_1 + 0xcdcd0);
    *(uint *)(param_1 + 0xcdcd0) = uVar11;
    if (*(char *)(param_1 + 0x2a2f4) == '\0') {
      uVar11 = uVar11 | 1 << (*(uint *)(param_1 + 0x2f698) & 0x1f) |
               1 << (*(uint *)(param_1 + 0x2f69c) & 0x1f) |
               1 << (*(uint *)(param_1 + 0x2f6a0) & 0x1f);
      *(uint *)(param_1 + 0xcdcd0) = uVar11;
    }
    uVar11 = ((int)uVar11 >> 7 & 1U) + ((int)uVar11 >> 6 & 1U) + ((int)uVar11 >> 5 & 1U) +
             ((int)uVar11 >> 4 & 1U) + ((int)uVar11 >> 3 & 1U) + ((int)uVar11 >> 2 & 1U) +
             ((int)uVar11 >> 1 & 1U) + (uVar11 & 1);
    if (*(byte *)(param_1 + 0xcdd10) < uVar11) {
      *(char *)(param_1 + 0xcdd10) = (char)uVar11;
    }
  }
  *(double *)(param_1 + 0xcdcf0) =
       ((double)*(ulonglong *)(param_1 + 0xcd4b0) / 125.0) / *(double *)(param_1 + 0xcd4c0);
  uVar11 = (uint)*(byte *)(param_1 + 0xcdcc9);
  uVar16 = uVar14;
  if (*(byte *)(param_1 + 0xcdcc9) != 0) {
    uVar15 = uVar14;
    do {
      iVar9 = (int)uVar15;
      uVar8 = ((*(byte *)(param_1 + 0xcdcc8) + uVar11) - iVar9) - 1 & 0x8000007f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffff80) + 1;
      }
      lVar13 = (longlong)(int)uVar8;
      if (iVar9 == 0) {
        local_res8 = *(longlong *)(param_1 + 0xcd4a8 + (lVar13 + 2) * 0x10);
      }
      if (9999999 < (ulonglong)(local_res8 - *(longlong *)(param_1 + 0xcd4a8 + (lVar13 + 2) * 0x10))
         ) break;
      uVar15 = (ulonglong)(iVar9 + 1U);
      uVar16 = uVar16 + *(uint *)(param_1 + 0xcd4d0 + lVar13 * 0x10);
    } while ((int)(iVar9 + 1U) < (int)uVar11);
  }
  if (*(ulonglong *)(param_1 + 0xcdce0) < uVar16) {
    *(ulonglong *)(param_1 + 0xcdce0) = uVar16;
  }
  dVar6 = 0.0;
  dVar19 = 0.0;
  uVar16 = uVar14;
  do {
    iVar9 = (int)uVar16;
    if ((int)uVar11 <= iVar9) break;
    uVar8 = ((uint)*(byte *)(param_1 + 0xcdcc8) - iVar9) + -1 + uVar11 & 0x8000007f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffff80) + 1;
    }
    uVar16 = (ulonglong)(iVar9 + 1U);
    dVar19 = dVar19 + (double)*(uint *)(param_1 + 0xcd4d4 + (longlong)(int)uVar8 * 0x10);
  } while ((int)(iVar9 + 1U) < 4);
  dVar19 = dVar19 / 125.0;
  if (*(double *)(param_1 + 0xcdcf8) <= dVar19 && dVar19 != *(double *)(param_1 + 0xcdcf8)) {
    *(double *)(param_1 + 0xcdcf8) = dVar19;
  }
  uVar11 = *(uint *)(param_1 + 0xcdce8);
  if (*(uint *)(param_1 + 0xcdce8) < uVar18) {
    *(uint *)(param_1 + 0xcdce8) = uVar18;
    uVar11 = uVar18;
  }
  if (*(uint *)(param_1 + 0xcdcec) < uVar12) {
    *(uint *)(param_1 + 0xcdcec) = uVar12;
  }
  *(double *)(param_1 + 0xcdd00) =
       (((double)*(ulonglong *)(param_1 + 0xcd4b8) * (double)*(int *)(param_1 + 0x2e4d0)) /
       (double)*(ulonglong *)(param_1 + 0xcd4b0)) * 0.125;
  bVar10 = (byte)*(undefined4 *)(param_1 + 0x2e4e0);
  if ((int)(uint)*(byte *)(param_1 + 0xcdd08) < 1 << (bVar10 & 0x1f)) {
    *(char *)(param_1 + 0xcdd08) = '\x01' << (bVar10 & 0x1f);
  }
  puVar7 = PTR_s_The_picture_size_is_too_large__14c748028;
  if ((-1 < cVar4) && (*(char *)(param_1 + 0xcee51) == '\0')) {
    puVar3 = &DAT_149de9180 + lVar17 * 0x10;
    if ((uint)(&DAT_149de9190)[lVar17 * 0x10] < uVar11) {
      *(undefined1 *)(param_1 + 0xcee51) = 2;
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,puVar7);
    }
    if ((uint)(&DAT_149de9194)[lVar17 * 0x10] < *(uint *)(param_1 + 0xcdcec)) {
      *(byte *)(param_1 + 0xcee51) = *(byte *)(param_1 + 0xcee51) | 4;
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,
                    PTR_s_The_picture_width_height_is_too_l_14c748030);
    }
    if ((double)(ulonglong)(&DAT_149de9188)[lVar17 * 8] * 1.015 <
        (double)*(ulonglong *)(param_1 + 0xcdce0)) {
      *(byte *)(param_1 + 0xcee51) = *(byte *)(param_1 + 0xcee51) | 8;
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,
                    PTR_s_The_luma_sample_rate_is_too_larg_14c748038);
    }
    if ((byte)(&DAT_149de91b0)[lVar17 * 0x40] < *(byte *)(param_1 + 0xcdd08)) {
      *(byte *)(param_1 + 0xcee51) = *(byte *)(param_1 + 0xcee51) | 0x40;
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,
                    PTR_s_Too_many_column_tiles_are_used__14c748050);
    }
    if (*(uint *)(param_1 + 0xcdd0c) < (uint)(&DAT_149de91b4)[lVar17 * 0x10]) {
      *(byte *)(param_1 + 0xcee51) = *(byte *)(param_1 + 0xcee51) | 0x80;
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,
                    PTR_s_The_alt_ref_distance_is_too_smal_14c748058);
    }
    if ((byte)(&DAT_149de91b8)[lVar17 * 0x40] < *(byte *)(param_1 + 0xcdd10)) {
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,
                    PTR_s_Too_many_reference_buffers_are_u_14c748060);
    }
    if ((double)(&DAT_149de91a0)[lVar17 * 8] <= *(double *)(param_1 + 0xcdcf8) &&
        *(double *)(param_1 + 0xcdcf8) != (double)(&DAT_149de91a0)[lVar17 * 8]) {
      *(byte *)(param_1 + 0xcee51) = *(byte *)(param_1 + 0xcee51) | 0x10;
      FUN_144d82810(lVar1,1,"Failed to encode to the target level %d. %s",*puVar3,
                    PTR_s_The_CPB_size_is_too_large__14c748040);
    }
    do {
      iVar9 = (int)uVar14;
      if ((int)(uint)*(byte *)(param_1 + 0xcdcc9) <= iVar9) break;
      uVar12 = ((uint)*(byte *)(param_1 + 0xcdcc8) - iVar9) + -1 +
               (uint)*(byte *)(param_1 + 0xcdcc9) & 0x8000007f;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xffffff80) + 1;
      }
      uVar14 = (ulonglong)(iVar9 + 1U);
      dVar6 = dVar6 + (double)*(uint *)(param_1 + 0xcd4d4 + (longlong)(int)uVar12 * 0x10);
    } while ((int)(iVar9 + 1U) < 3);
    iVar9 = (int)(((double)(&DAT_149de91a0)[lVar17 * 8] - dVar6 / 125.0) * 1000.0);
    *(int *)(param_1 + 0xcee54) = iVar9;
    if (*(byte *)(param_1 + 0xcdcc9) < 3) {
      *(int *)(param_1 + 0xcee54) = iVar9 >> 1;
    }
  }
  return;
}



// FUNCTION 145629800 FUN_145629800 body=1181 status=ok
// SIG undefined FUN_145629800(void)

void FUN_145629800(longlong param_1,ulonglong *param_2,longlong param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  byte **ppbVar21;
  uint uVar22;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_b8;
  int local_b4;
  int *local_b0;
  int *local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80 [2];
  undefined8 uStack_78;
  undefined8 local_70;
  byte *local_68;
  undefined1 local_60;
  ulonglong local_58;
  ulonglong uVar23;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a0 = *(undefined4 *)(param_1 + 0x2e8bc);
  ppbVar21 = &local_68;
  uVar13 = 0;
  piVar9 = (int *)(*(longlong *)(param_1 + 0x2e4f0) + 0x18);
  iVar11 = 2;
  local_b8 = -1;
  local_68 = (byte *)0xffffffffffffffff;
  local_60 = 0xff;
  local_80[0] = -1;
  local_80[1] = -1;
  uStack_78 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  uVar10 = uVar13;
  lVar14 = param_1;
  uVar23 = uVar13;
  local_b0 = piVar9;
  local_a8 = param_4;
  local_98 = param_1;
  local_90 = param_3;
  local_88 = param_2;
  do {
    lVar8 = (longlong)(int)uVar10 * 0xe0;
    if (*(int *)(lVar8 + (longlong)piVar9) == 0) {
      lVar14 = *(longlong *)(param_1 + 0x2e4f0) + lVar8;
      if (((*(longlong *)(lVar14 + 0x20) == 0) ||
          (*(int *)(lVar14 + 0x28) < *(int *)(param_1 + 0x2a308))) ||
         (*(int *)(lVar14 + 0x2c) < *(int *)(param_1 + 0x2a310))) {
        FUN_14518f040();
        lVar7 = FUN_14518efb0((longlong)(*(int *)(param_1 + 0x2a310) * *(int *)(param_1 + 0x2a308)),
                              0xc);
        *(longlong *)(lVar14 + 0x20) = lVar7;
        if (lVar7 == 0) {
          FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate new_fb_ptr->mvs");
        }
        *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)(param_1 + 0x2a308);
        *(undefined4 *)(lVar14 + 0x2c) = *(undefined4 *)(param_1 + 0x2a310);
      }
      local_e0 = *(undefined4 *)(param_1 + 0x2e4e8);
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_f0 = *(undefined4 *)(param_1 + 0x2a068);
      local_e8 = 0xa0;
      local_f8 = *(undefined4 *)(param_1 + 0x2a064);
      iVar6 = FUN_145466a50(lVar8 + (longlong)piVar9 + 0x40,*(undefined4 *)(param_1 + 0x2a048),
                            *(undefined4 *)(param_1 + 0x2a04c),*(undefined4 *)(param_1 + 0x2a060));
      if (iVar6 != 0) {
        FUN_144d82810(param_1 + 0x29ee0,2,"Failed to allocate frame buffer");
      }
      uVar22 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar22;
      *(char *)ppbVar21 = (char)uVar10;
      ppbVar21 = (byte **)((longlong)ppbVar21 + 1);
      piVar9 = local_b0;
      lVar14 = local_98;
      if (*(int *)(local_98 + 0x2e650) + 3 <= (int)uVar22) break;
    }
    uVar22 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar22;
  } while ((int)uVar22 < 0xc);
  ppbVar21 = &local_68;
  lVar8 = 4;
  plVar15 = (longlong *)(lVar14 + 0x2f018);
  do {
    cVar1 = *(char *)ppbVar21;
    ppbVar21 = (byte **)((longlong)ppbVar21 + 1);
    *plVar15 = (longlong)cVar1 * 0xe0 + 0x40 + (longlong)local_b0;
    lVar8 = lVar8 + -1;
    plVar15 = plVar15 + 1;
  } while (lVar8 != 0);
  *local_a8 = 0;
  uVar10 = uVar13;
  if ((*(int *)(lVar14 + 0x2f69c) != -1) &&
     (iVar6 = *(int *)(param_1 + 0x2a088 + (longlong)*(int *)(lVar14 + 0x2f69c) * 4), iVar6 != -1))
  {
    uVar10 = *(longlong *)(lVar14 + 0x2e4f0) + 0x58 + (longlong)iVar6 * 0xe0;
  }
  local_b4 = 0;
  iVar6 = 1;
  *local_88 = uVar10;
  piVar9 = (int *)((longlong)local_88 + 0x3c);
  local_88[1] = 0xffffffffffffffff;
  *(undefined4 *)(local_88 + 2) = 0xffffffff;
  piVar20 = (int *)(local_90 + 0x3fc);
  *(undefined4 *)((longlong)local_88 + 0x14) = *(undefined4 *)(local_90 + 0x3f4);
  *local_a8 = *local_a8 + 1;
  local_88[3] = *(ulonglong *)(lVar14 + 0x2e6d8);
  *(undefined4 *)(local_88 + 4) = 0;
  lVar8 = -1;
  *(undefined8 *)((longlong)local_88 + 0x24) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)local_88 + 0x2c) = *(undefined4 *)(local_90 + 0x3f8);
  local_68 = (byte *)(local_90 + 0x9de);
  *local_a8 = *local_a8 + 1;
  piVar17 = local_a8;
  do {
    uVar22 = (uint)*local_68;
    local_b0 = piVar20;
    lVar7 = FUN_145613da0(*(undefined8 *)(lVar14 + 0x2e6c8),*local_68 - 1);
    lVar14 = local_98;
    uVar3 = local_a0;
    piVar2 = local_a8;
    if (lVar7 == 0) break;
    *(longlong *)(piVar9 + -3) = lVar7;
    piVar9[-1] = local_b4;
    *piVar9 = local_b8;
    piVar9[1] = iVar6;
    piVar9[2] = *piVar20;
    iVar12 = *piVar20;
    iVar4 = iVar11;
    if (iVar12 != 1) {
      uVar10 = uVar13;
      iVar4 = local_b8;
      if (iVar12 == 3) {
        for (; 0 < (longlong)uVar10; uVar10 = uVar10 - 1) {
          local_80[uVar10] = *(int *)((longlong)&local_88 + uVar10 * 4 + 4);
        }
        uVar13 = uVar13 + 1;
        local_80[0] = iVar6;
        lVar8 = lVar8 + 1;
        iVar6 = iVar11;
      }
      else {
        iVar5 = iVar11;
        if ((iVar12 == 4) || (local_b8 = iVar6, iVar5 = local_b4, iVar12 == 6)) {
          local_b4 = iVar5;
          iVar6 = local_80[0];
          if (1 < (longlong)uVar13) {
            piVar16 = local_80;
            piVar19 = local_80;
            for (lVar7 = lVar8; piVar16 = piVar16 + 1, piVar17 = local_a8, piVar20 = local_b0,
                lVar7 != 0; lVar7 = lVar7 + -1) {
              *piVar19 = *piVar16;
              piVar19 = piVar19 + 1;
            }
          }
          uVar13 = uVar13 - 1;
          lVar8 = lVar8 + -1;
          iVar4 = local_b8;
        }
      }
    }
    local_b8 = iVar4;
    *piVar17 = *piVar17 + 1;
    if (iVar11 == *(int *)(local_90 + 0x1390)) break;
    piVar20 = piVar20 + 1;
    local_68 = local_68 + 1;
    iVar11 = iVar11 + 1;
    piVar9 = piVar9 + 6;
    local_b0 = piVar20;
  } while (iVar11 < 0x32);
  iVar11 = iVar11 + 1;
  if (iVar11 < 0x19) {
    iVar6 = 0;
    piVar9 = (int *)((longlong)local_88 + (longlong)iVar11 * 0x18 + 0xc);
    puVar18 = (undefined4 *)(local_98 + 0x2e86c + (longlong)iVar11 * 0x28);
    do {
      iVar12 = iVar11;
      if ((1 < iVar6) ||
         (lVar8 = FUN_145613da0(*(undefined8 *)(lVar14 + 0x2e6c8),uVar22), lVar8 == 0)) break;
      *puVar18 = uVar3;
      iVar6 = iVar6 + 1;
      *(longlong *)(piVar9 + -3) = lVar8;
      uVar22 = uVar22 + 1;
      puVar18 = puVar18 + 10;
      piVar9[-1] = local_b4;
      *piVar9 = local_b8;
      piVar9[1] = -1;
      piVar9[2] = 1;
      piVar9 = piVar9 + 6;
      *piVar2 = *piVar2 + 1;
      iVar11 = iVar12 + 1;
      local_b8 = iVar12;
    } while (iVar12 + 1 < 0x19);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_118);
}



// FUNCTION 145629cc0 FUN_145629cc0 body=439 status=ok
// SIG undefined FUN_145629cc0(void)

void FUN_145629cc0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)(param_1 + 0x2e884);
  lVar2 = 5;
  do {
    memset(*(void **)(piVar1 + -0xd),0,(longlong)(piVar1[-10] * piVar1[-9]) * 0x30);
    *(undefined1 *)(piVar1 + -0xf) = 0;
    memset(*(void **)(piVar1 + -3),0,(longlong)(piVar1[1] * *piVar1) * 0x30);
    *(undefined1 *)(piVar1 + -5) = 0;
    memset(*(void **)(piVar1 + 7),0,(longlong)(piVar1[0xb] * piVar1[10]) * 0x30);
    *(undefined1 *)(piVar1 + 5) = 0;
    memset(*(void **)(piVar1 + 0x11),0,(longlong)(piVar1[0x15] * piVar1[0x14]) * 0x30);
    *(undefined1 *)(piVar1 + 0xf) = 0;
    memset(*(void **)(piVar1 + 0x1b),0,(longlong)(piVar1[0x1f] * piVar1[0x1e]) * 0x30);
    *(undefined1 *)(piVar1 + 0x19) = 0;
    memset(*(void **)(piVar1 + 0x25),0,(longlong)(piVar1[0x29] * piVar1[0x28]) * 0x30);
    *(undefined1 *)(piVar1 + 0x23) = 0;
    memset(*(void **)(piVar1 + 0x2f),0,(longlong)(piVar1[0x33] * piVar1[0x32]) * 0x30);
    *(undefined1 *)(piVar1 + 0x2d) = 0;
    memset(*(void **)(piVar1 + 0x39),0,(longlong)(piVar1[0x3d] * piVar1[0x3c]) * 0x30);
    *(undefined1 *)(piVar1 + 0x37) = 0;
    memset(*(void **)(piVar1 + 0x43),0,(longlong)(piVar1[0x47] * piVar1[0x46]) * 0x30);
    *(undefined1 *)(piVar1 + 0x41) = 0;
    memset(*(void **)(piVar1 + 0x4d),0,(longlong)(piVar1[0x51] * piVar1[0x50]) * 0x30);
    *(undefined1 *)(piVar1 + 0x4b) = 0;
    piVar1 = piVar1 + 100;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 145629e80 FUN_145629e80 body=1036 status=ok
// SIG undefined FUN_145629e80(void)

void FUN_145629e80(longlong param_1,longlong param_2,int param_3,int param_4,byte param_5)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint local_8c;
  int local_88;
  int local_74;
  
  bVar3 = (&DAT_149d549a0)[param_5];
  bVar4 = (&DAT_149d54990)[param_5];
  local_88 = 0;
  if (bVar3 != 0) {
    iVar21 = param_3 * 8;
    do {
      local_74 = 0;
      if (bVar4 != 0) {
        iVar15 = param_4 * 8;
        do {
          plVar14 = (longlong *)
                    ((longlong)
                     ((local_88 + param_3) * *(int *)(param_1 + 0x10) + local_74 + param_4) * 0x30 +
                    param_2);
          lVar5 = *(longlong *)(param_1 + 8 + (longlong)(int)plVar14[5] * 0x28);
          lVar2 = param_1 + (longlong)(int)plVar14[5] * 0x28;
          uVar25 = ((int)(short)((uint)*(undefined4 *)((longlong)plVar14 + 0x2c) >> 0x10) >> 3) +
                   iVar15;
          uVar11 = ((int)(short)*(undefined4 *)((longlong)plVar14 + 0x2c) >> 3) + iVar21;
          if ((int)uVar11 < 0) {
            uVar10 = ~((int)~uVar11 / 8);
          }
          else {
            uVar10 = (int)uVar11 / 8;
          }
          if ((int)uVar25 < 0) {
            uVar9 = ~((int)~uVar25 / 8);
          }
          else {
            uVar9 = (int)uVar25 / 8;
          }
          uVar24 = 0;
          local_8c = 0;
          do {
            uVar23 = (uint)uVar24;
            iVar19 = (int)(uVar24 >> 1) + uVar10;
            iVar20 = iVar19 * 8;
            iVar16 = (uVar23 & 1) + uVar9;
            iVar17 = iVar16 * 8;
            if ((((-1 < iVar20) && (iVar20 < *(int *)(lVar2 + 0x1c) << 3)) && (-1 < iVar17)) &&
               (iVar17 < *(int *)(lVar2 + 0x20) << 3)) {
              iVar12 = 0;
              iVar22 = 0;
              if (uVar23 == 0) {
                iVar12 = (8 - uVar25) + iVar17;
LAB_14562a0df:
                iVar22 = (8 - uVar11) + iVar20;
              }
              else {
                if (uVar23 == 1) {
                  iVar12 = iVar16 * -8 + 8 + uVar25;
                  goto LAB_14562a0df;
                }
                if (uVar23 == 2) {
                  iVar12 = (8 - uVar25) + iVar17;
                  iVar22 = iVar19 * -8 + 8 + uVar11;
                }
                else if (uVar23 == 3) {
                  iVar12 = iVar16 * -8 + 8 + uVar25;
                  iVar22 = iVar19 * -8 + 8 + uVar11;
                }
              }
              iVar16 = 0;
              lVar6 = plVar14[3];
              lVar7 = plVar14[1];
              lVar8 = *plVar14;
              do {
                iVar19 = 0;
                do {
                  iVar13 = (iVar16 + iVar20 / 8) * *(int *)(lVar2 + 0x10) + iVar19;
                  iVar19 = iVar19 + 1;
                  lVar18 = (longlong)(iVar13 + iVar17 / 8) * 0x30 + lVar5;
                  plVar1 = (longlong *)(lVar18 + 0x10);
                  *plVar1 = *plVar1 + ((longlong)(iVar22 * iVar12) *
                                      (lVar6 - (lVar6 * lVar7) / lVar8)) / 0x40;
                  plVar1 = (longlong *)(lVar18 + 0x20);
                  *plVar1 = *plVar1 + ((*plVar14 - plVar14[1]) * (longlong)(iVar22 * iVar12)) / 0x40
                  ;
                } while (iVar19 < 1);
                iVar16 = iVar16 + 1;
                uVar23 = local_8c;
              } while (iVar16 < 1);
            }
            local_8c = uVar23 + 1;
            uVar24 = (ulonglong)local_8c;
          } while ((int)local_8c < 4);
          local_74 = local_74 + 1;
          iVar15 = iVar15 + 8;
        } while (local_74 < (int)(uint)bVar4);
      }
      local_88 = local_88 + 1;
      iVar21 = iVar21 + 8;
    } while (local_88 < (int)(uint)bVar3);
  }
  return;
}



// FUNCTION 14562a290 FUN_14562a290 body=2577 status=ok
// SIG undefined FUN_14562a290(void)

void FUN_14562a290(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,int param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10,longlong param_11,int param_12,int param_13,
                  byte param_14,byte param_15,longlong param_16,longlong param_17,longlong *param_18
                  ,longlong *param_19)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  sbyte sVar13;
  int iVar14;
  undefined1 auStack_278 [32];
  undefined4 *local_258;
  longlong local_250;
  undefined8 local_248;
  byte *local_240;
  undefined8 local_238;
  undefined4 *local_230;
  undefined8 local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  byte local_1e8;
  byte local_1e4 [4];
  byte local_1e0;
  byte local_1df;
  int local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  longlong local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  undefined *local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_108 [80];
  undefined1 local_b8 [80];
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_150 = param_10;
  local_180 = param_11;
  local_1a8 = param_16;
  local_130 = param_18;
  local_148 = param_19;
  local_170 = (ulonglong)param_14;
  uVar9 = (ulonglong)param_14;
  local_1e8 = param_14;
  iVar14 = 4 << ((&DAT_149d54960)[local_170] & 0x1f);
  local_1dc = 4 << ((&DAT_149d54970)[uVar9] & 0x1f);
  local_1d4 = local_1dc * iVar14;
  local_188 = 0x7fffffffffffffff;
  local_178 = 0x7fffffffffffffff;
  local_168 = PTR_DAT_14c744430;
  local_1cc = param_12;
  iVar4 = *(int *)(*(longlong *)(param_3 + 0x210) + 0x10);
  local_1e0 = (&DAT_149d549a0)[uVar9];
  local_1df = (&DAT_149d54990)[uVar9];
  local_1c8 = param_13;
  local_198 = param_17;
  local_1b0 = -1;
  local_128 = (longlong *)
              ((longlong)(param_12 * *(int *)(param_7 + 0x10) + param_13) * 0x30 +
              *(longlong *)(param_7 + 8));
  *(int *)(param_3 + 0x1f0) = param_12 * -0x40;
  *(int *)(param_3 + 500) = ((*(int *)(param_1 + 0x2a308) - param_12) + -1) * 0x40;
  *(int *)(param_3 + 0x1e8) = param_13 * -0x40;
  *(int *)(param_3 + 0x1ec) = ((*(int *)(param_1 + 0x2a310) - param_13) + -1) * 0x40;
  pbVar11 = (byte *)(longlong)iVar14;
  local_1c0 = (longlong)((param_12 * iVar4 + param_13) * 8);
  puVar5 = local_108;
  if (param_12 < 1) {
    puVar5 = (undefined1 *)0x0;
  }
  *(undefined1 **)(param_3 + 0x1d0) = puVar5;
  puVar5 = local_b8;
  if (param_13 < 1) {
    puVar5 = (undefined1 *)0x0;
  }
  local_1e4[0] = 0;
  *(undefined1 **)(param_3 + 0x1c8) = puVar5;
  local_1b4 = iVar14;
  local_190 = param_1;
  local_160 = param_4;
  local_158 = param_2;
  local_138 = param_3;
  do {
    local_228 = local_228 & 0xffffffff00000000;
    local_230 = (undefined4 *)((ulonglong)local_230 & 0xffffffff00000000);
    iVar4 = *(int *)(*(longlong *)(param_3 + 0x210) + 0x10);
    lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x210) + 0x38) + local_1c0;
    local_238 = (undefined4 *)((ulonglong)local_238 & 0xffffffff00000000);
    local_240 = (byte *)CONCAT44(local_240._4_4_,iVar14);
    *(byte *)**(undefined8 **)(param_3 + 0x1c0) = local_1e8;
    local_250 = CONCAT44(local_250._4_4_,iVar4);
    *(undefined1 *)(**(longlong **)(param_3 + 0x1c0) + 8) = 0;
    local_258 = (undefined4 *)lVar12;
    local_248 = local_198;
    FUN_145477a70(param_3,(&DAT_149d54960)[local_170],param_15,local_1e4[0]);
    local_250 = (longlong)iVar4;
    local_240 = pbVar11;
    if ((*(byte *)(*(longlong *)(param_3 + 0x210) + 0x98) & 8) == 0) {
      local_248 = local_198;
      local_258 = (undefined4 *)lVar12;
      (*DAT_14c7fbd98)(local_1dc,iVar14,param_8,pbVar11);
      if (param_15 == 1) {
        (*DAT_14c7fb9f0)(param_8,pbVar11,param_9);
      }
      else if (param_15 == 2) {
        (*DAT_14c7fb9e0)(param_8,pbVar11,param_9);
      }
      else if (param_15 == 3) {
        (*DAT_14c7fb9e8)(param_8,pbVar11,param_9);
      }
      iVar4 = (*DAT_14c7fbcb8)(param_9,local_1d4);
    }
    else {
      local_238 = (undefined4 *)CONCAT44(local_238._4_4_,*(undefined4 *)(param_3 + 0x270));
      local_248 = local_198;
      local_258 = (undefined4 *)lVar12;
      (*DAT_14c7fbc08)();
      if (param_15 == 1) {
        (*DAT_14c7fbae0)(param_8,pbVar11,param_9);
LAB_14562a59a:
        iVar4 = (*DAT_14c7fbc00)(param_9,local_1d4);
      }
      else if (param_15 == 2) {
        (*DAT_14c7fbad0)(param_8,pbVar11,param_9);
        iVar4 = (*DAT_14c7fbc00)(param_9,local_1d4);
      }
      else {
        if (param_15 != 3) goto LAB_14562a59a;
        (*DAT_14c7fbad8)(param_8,pbVar11,param_9);
        iVar4 = (*DAT_14c7fbc00)(param_9,local_1d4);
      }
    }
    lVar12 = (longlong)iVar4;
    if (local_178 <= iVar4) {
      lVar12 = local_178;
    }
    local_1e4[0] = local_1e4[0] + 1;
    local_178 = lVar12;
  } while (local_1e4[0] < 10);
  uVar8 = 0;
  local_1c4 = 0;
  *(int *)(local_158 + 0x6528) = local_1cc * -8 + -9;
  *(int *)(local_158 + 0x652c) = (*(int *)(local_190 + 0x2a308) - local_1cc) * 8 + 1;
  *(int *)(local_158 + 0x6520) = local_1c8 * -8 + -9;
  *(int *)(local_158 + 0x6524) = (*(int *)(local_190 + 0x2a310) - local_1c8) * 8 + 1;
  local_1a0 = 0;
  lVar12 = local_1a8;
  lVar6 = local_190;
  do {
    if (*(longlong *)(local_1a0 + lVar12) != 0) {
      lVar12 = *(longlong *)(*(longlong *)(local_1a0 + lVar12) + 0x38);
      puVar1 = (undefined4 *)(lVar6 + 0x12550);
      local_120 = *puVar1;
      uStack_11c = *(undefined4 *)(lVar6 + 0x12554);
      uStack_118 = *(undefined4 *)(lVar6 + 0x12558);
      uStack_114 = *(undefined4 *)(lVar6 + 0x1255c);
      uVar2 = *(undefined4 *)(lVar6 + 0x12470);
      uVar3 = *(undefined4 *)(*(longlong *)(param_3 + 0x210) + 0x10);
      *(longlong *)(lVar6 + 0xe048) =
           *(longlong *)(*(longlong *)(param_3 + 0x210) + 0x38) + local_1c0;
      *(undefined4 *)(lVar6 + 0xe050) = uVar3;
      *(longlong *)(lVar6 + 0x121d0) = lVar12 + local_1c0;
      *(undefined4 *)(lVar6 + 0x121d8) = uVar3;
      iVar4 = *(int *)(lVar6 + 0xb46b4);
      local_1d8 = 0;
      local_1b8 = 0;
      FUN_1455aa900(puVar1,&local_1d8);
      lVar12 = local_190;
      local_240 = local_68;
      local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffff00000000);
      local_228 = local_228 & 0xffffffff00000000;
      if (*(int *)(local_190 + 0xb46bc) == 0) {
        local_240 = (undefined1 *)0x0;
      }
      local_230 = &local_1d0;
      iVar14 = 9;
      if (iVar4 < 9) {
        iVar14 = iVar4;
      }
      local_238 = &local_1d8;
      lVar7 = local_190 + 0xc030;
      local_250 = CONCAT44(local_250._4_4_,1);
      local_248._0_4_ = uVar2;
      local_258._0_4_ = iVar14;
      FUN_1455be8a0(local_190,lVar7,local_1e8,&local_1b8);
      local_238 = (undefined4 *)local_68;
      *puVar1 = local_120;
      *(undefined4 *)(lVar6 + 0x12554) = uStack_11c;
      *(undefined4 *)(lVar6 + 0x12558) = uStack_118;
      *(undefined4 *)(lVar6 + 0x1255c) = uStack_114;
      local_1f8 = 0;
      if (*(int *)(lVar12 + 0xb46bc) == 0) {
        local_238 = (undefined4 *)0x0;
      }
      local_200 = 0;
      local_208 = 0;
      local_210 = 0;
      local_250 = lVar12 + 0xb4a48 + local_170 * 0x30;
      local_218 = local_140;
      local_220 = local_13c;
      local_228 = 0;
      local_230 = (undefined4 *)0x0;
      local_248 = (ulonglong)local_248._4_4_ << 0x20;
      local_258 = (undefined4 *)CONCAT44(local_258._4_4_,*(undefined4 *)(lVar12 + 0x1246c));
      local_240._0_4_ = *(undefined4 *)(lVar12 + 0xb46c0);
      (**(code **)(lVar12 + 0xb4998))(lVar7,&local_1d0,&local_1d8,*(undefined4 *)(lVar12 + 0x2a2f8))
      ;
      param_3 = local_138;
      lVar6 = local_198;
      iVar4 = local_1b4;
      lVar12 = *(longlong *)(local_1a0 + local_1a8);
      if ((*(byte *)(*(longlong *)(local_138 + 0x210) + 0x98) & 8) == 0) {
        local_218 = (undefined1 *)CONCAT44(local_218._4_4_,local_1cc * 8);
        local_220 = (undefined1 *)CONCAT44(local_220._4_4_,local_1c8 * 8);
        local_228 = (ulonglong)local_228._4_4_ << 0x20;
        local_230 = (undefined4 *)local_168;
        local_238 = (undefined4 *)((ulonglong)local_238._4_4_ << 0x20);
        local_240 = (byte *)CONCAT44(local_240._4_4_,local_1dc);
        local_248 = CONCAT44(local_248._4_4_,local_1b4);
        local_250 = local_160;
        local_258 = &local_1d0;
        FUN_145479090(local_1c0 + *(longlong *)(lVar12 + 0x38),*(undefined4 *)(lVar12 + 0x10),
                      local_198,local_1b4);
        local_248 = lVar6;
        local_250 = (longlong)*(int *)(*(longlong *)(param_3 + 0x210) + 0x10);
        local_258 = (undefined4 *)(local_1c0 + *(longlong *)(*(longlong *)(param_3 + 0x210) + 0x38))
        ;
        local_240 = pbVar11;
        (*DAT_14c7fbd98)(local_1dc,iVar4,param_8,pbVar11);
        if (param_15 == 1) {
          (*DAT_14c7fb9f0)(param_8,pbVar11,param_9);
        }
        else if (param_15 == 2) {
          (*DAT_14c7fb9e0)(param_8,pbVar11,param_9);
        }
        else if (param_15 == 3) {
          (*DAT_14c7fb9e8)(param_8,pbVar11,param_9);
        }
        iVar4 = (*DAT_14c7fbcb8)(param_9,local_1d4);
      }
      else {
        local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(local_138 + 0x270));
        local_218 = (undefined1 *)CONCAT44(local_218._4_4_,local_1cc * 8);
        local_220 = (undefined1 *)CONCAT44(local_220._4_4_,local_1c8 * 8);
        local_228 = (ulonglong)local_228._4_4_ << 0x20;
        local_230 = (undefined4 *)local_168;
        local_238 = (undefined4 *)((ulonglong)local_238._4_4_ << 0x20);
        local_240 = (byte *)CONCAT44(local_240._4_4_,local_1dc);
        local_248 = CONCAT44(local_248._4_4_,local_1b4);
        local_250 = local_160;
        local_258 = &local_1d0;
        FUN_1454791d0(local_1c0 * 2 + *(longlong *)(lVar12 + 0x38) * 2,
                      *(undefined4 *)(lVar12 + 0x10),local_198 * 2,local_1b4);
        local_250 = (longlong)*(int *)(*(longlong *)(param_3 + 0x210) + 0x10);
        local_258 = (undefined4 *)(local_1c0 + *(longlong *)(*(longlong *)(param_3 + 0x210) + 0x38))
        ;
        local_238 = (undefined4 *)CONCAT44(local_238._4_4_,*(undefined4 *)(param_3 + 0x270));
        local_248 = lVar6;
        local_240 = pbVar11;
        (*DAT_14c7fbc08)(local_1dc,iVar4,param_8,pbVar11);
        if (param_15 == 1) {
          (*DAT_14c7fbae0)(param_8,pbVar11,param_9);
LAB_14562a9b2:
          iVar4 = (*DAT_14c7fbc00)(param_9,local_1d4);
        }
        else if (param_15 == 2) {
          (*DAT_14c7fbad0)(param_8,pbVar11,param_9);
          iVar4 = (*DAT_14c7fbc00)(param_9,local_1d4);
        }
        else {
          if (param_15 != 3) goto LAB_14562a9b2;
          (*DAT_14c7fbad8)(param_8,pbVar11,param_9);
          iVar4 = (*DAT_14c7fbc00)(param_9,local_1d4);
        }
      }
      uVar2 = local_1d0;
      lVar7 = (longlong)iVar4;
      lVar12 = local_1a8;
      lVar6 = local_190;
      if (lVar7 < local_188) {
        uVar9 = (ulonglong)param_15;
        local_1b0 = local_1c4;
        sVar13 = 2;
        if (param_15 == 3) {
          sVar13 = 0;
        }
        local_238 = (undefined4 *)(&PTR_DAT_149d54c70)[uVar9 * 3];
        local_230 = (undefined4 *)(&PTR_DAT_149d54c78)[uVar9 * 3];
        local_248 = *(longlong *)(local_158 + 0x61f8);
        lVar12 = (longlong)(1 << ((&DAT_149d549e0)[(byte)(&DAT_149d54af4)[uVar9]] & 0x1f));
        local_240 = local_1e4;
        local_250 = local_180;
        local_258 = (undefined4 *)local_150;
        local_188 = lVar7;
        if ((*(byte *)(*(longlong *)(local_158 + 0x6390) + 0x98) & 8) == 0) {
          (*DAT_14c7fe6b0)(param_9,lVar12,local_158 + 0x2030,*(undefined8 *)(local_158 + 0x2040));
        }
        else {
          (*DAT_14c7fe6a0)();
        }
        lVar6 = (*DAT_14c7fe660)(param_9,local_180,lVar12,local_148);
        lVar12 = 1;
        if (1 < lVar6 >> sVar13) {
          lVar12 = lVar6 >> sVar13;
        }
        *local_130 = lVar12;
        lVar12 = 1;
        if (1 < *local_148 >> sVar13) {
          lVar12 = *local_148 >> sVar13;
        }
        *local_148 = lVar12;
        lVar12 = local_1a8;
        lVar6 = local_190;
        uVar8 = uVar2;
      }
    }
    lVar7 = 1;
    local_1a0 = local_1a0 + 8;
    local_1c4 = local_1c4 + 1;
    if (2 < local_1c4) {
      lVar12 = lVar7;
      if (1 < local_178) {
        lVar12 = local_178;
      }
      lVar10 = (ulonglong)local_1e0 * (ulonglong)local_1df;
      lVar6 = local_188;
      if (lVar12 < local_188) {
        lVar6 = lVar12;
      }
      lVar6 = (lVar6 << 4) / lVar10;
      if (lVar6 < 1) {
        lVar6 = lVar7;
      }
      local_128[1] = lVar6;
      lVar6 = (lVar12 << 4) / lVar10;
      if (lVar6 < 1) {
        lVar6 = lVar7;
      }
      *local_128 = lVar6;
      *(undefined4 *)(local_128 + 5) =
           *(undefined4 *)(param_5 + 8 + ((longlong)local_1b0 + (longlong)param_6 * 6) * 4);
      *(undefined4 *)((longlong)local_128 + 0x2c) = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_278,(lVar12 << 4) % lVar10);
    }
  } while( true );
}



// FUNCTION 14562acc0 FUN_14562acc0 body=992 status=ok
// SIG undefined FUN_14562acc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14562acc0(longlong param_1,longlong param_2,int param_3,byte param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_5df8 [32];
  longlong local_5dd8;
  int local_5dd0;
  undefined1 *local_5dc8;
  undefined1 *local_5dc0;
  undefined1 *local_5db8;
  undefined1 *local_5db0;
  undefined1 *local_5da8;
  int local_5da0;
  int local_5d98;
  byte local_5d90;
  undefined1 local_5d88;
  undefined8 *local_5d80;
  undefined1 *local_5d78;
  undefined1 *local_5d70;
  undefined1 *local_5d68;
  undefined1 local_5d58;
  uint local_5d54;
  int local_5d50;
  uint local_5d4c;
  longlong local_5d48;
  undefined1 *local_5d40;
  byte *local_5d38;
  byte *local_5d30;
  undefined1 local_5d28 [8];
  undefined1 local_5d20 [8];
  undefined1 local_5d18 [160];
  undefined8 local_5c78;
  undefined8 uStack_5c70;
  undefined8 local_5c68;
  undefined1 local_5c58 [4096];
  undefined1 local_4c58 [4096];
  undefined1 local_3c58 [4096];
  undefined1 local_2c58 [2048];
  undefined1 local_2458 [3072];
  undefined1 local_1858 [6144];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_5df8;
  lVar12 = (longlong)param_3;
  local_5c68 = 0;
  local_5c78 = 0;
  uStack_5c70 = 0;
  puVar1 = (undefined1 *)(param_1 + lVar12 * 0x28 + 0x2e848);
  lVar4 = *(longlong *)(param_2 + lVar12 * 0x18);
  local_5d58 = (&DAT_149d54b30)[param_4];
  local_5d30 = &DAT_149d54990 + param_4;
  local_5d38 = &DAT_149d549a0 + param_4;
  local_5d4c = (uint)*local_5d30;
  local_5dd0 = *(int *)(param_1 + 0x2a068);
  local_5d54 = (uint)*local_5d38;
  local_5dd8 = CONCAT44(local_5dd8._4_4_,*(undefined4 *)(lVar4 + 0xc));
  local_5d50 = param_3;
  local_5d48 = param_2;
  FUN_1454720f0(local_5d18,*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0xc),
                *(undefined4 *)(lVar4 + 8));
  lVar14 = local_5d48;
  if ((*(byte *)(*(longlong *)(param_1 + 0x123c0) + 0x98) & 8) == 0) {
    local_5d40 = local_2458;
  }
  else {
    local_5d40 = (undefined1 *)((ulonglong)local_1858 >> 1);
  }
  iVar10 = *(int *)(local_5d48 + 8 + lVar12 * 0x18);
  if (iVar10 != -1) {
    local_5c78 = *(undefined8 *)(local_5d48 + (longlong)iVar10 * 0x18);
  }
  iVar10 = *(int *)(local_5d48 + 0xc + lVar12 * 0x18);
  if (iVar10 != -1) {
    uStack_5c70 = *(undefined8 *)(local_5d48 + (longlong)iVar10 * 0x18);
  }
  iVar10 = *(int *)(local_5d48 + 0x10 + lVar12 * 0x18);
  if (iVar10 != -1) {
    local_5c68 = *(undefined8 *)(local_5d48 + (longlong)iVar10 * 0x18);
  }
  *(undefined8 **)(param_1 + 0x12370) = *(undefined8 **)(param_1 + 0x2a3b0);
  **(undefined8 **)(param_1 + 0x2a3b0) = *(undefined8 *)(param_1 + 0x2a378);
  *(longlong *)(param_1 + 0x123c0) = lVar4;
  iVar10 = FUN_14561acd0(param_1,*(undefined4 *)(puVar1 + 0x24));
  *(uint *)(param_1 + 0x1246c) = (uint)(iVar10 >> 6 == 0) + (iVar10 >> 6);
  FUN_14561b250(param_1,param_1 + 0xc030,*(undefined4 *)(puVar1 + 0x24));
  *puVar1 = 1;
  *(undefined4 *)(param_1 + 0x2a31c) = *(undefined4 *)(puVar1 + 0x24);
  FUN_1455cadb0(param_1);
  iVar10 = 0;
  uVar11 = local_5d54;
  if (0 < *(int *)(param_1 + 0x2a308)) {
    do {
      iVar15 = 0;
      if (0 < *(int *)(param_1 + 0x2a310)) {
        do {
          local_5d68 = local_5d28;
          local_5d70 = local_5d20;
          local_5d78 = local_5d40;
          local_5d80 = &local_5c78;
          local_5d88 = local_5d58;
          local_5da8 = local_5c58;
          local_5db0 = local_4c58;
          local_5db8 = local_3c58;
          local_5dc0 = local_2c58;
          local_5dd0 = local_5d50;
          local_5dd8 = lVar14;
          local_5dc8 = puVar1;
          local_5da0 = iVar10;
          local_5d98 = iVar15;
          local_5d90 = param_4;
          FUN_14562a290(param_1,param_1 + 0xc030,param_1 + 0x121b0,local_5d18);
          iVar3 = *(int *)(puVar1 + 0x10);
          uVar19 = (ulonglong)*local_5d38;
          bVar2 = *local_5d30;
          puVar16 = (undefined8 *)
                    ((longlong)(iVar3 * iVar10 + iVar15) * 0x30 + *(longlong *)(puVar1 + 8));
          if (*local_5d38 != 0) {
            puVar18 = puVar16 + 4;
            do {
              puVar13 = puVar18;
              uVar17 = (ulonglong)bVar2;
              if (bVar2 != 0) {
                do {
                  uVar9 = puVar16[1];
                  lVar4 = puVar13[-2];
                  uVar5 = *puVar13;
                  puVar13[-4] = *puVar16;
                  puVar13[-3] = uVar9;
                  uVar9 = puVar16[3];
                  puVar13[-2] = puVar16[2];
                  puVar13[-1] = uVar9;
                  uVar6 = *(undefined4 *)((longlong)puVar16 + 0x24);
                  uVar7 = *(undefined4 *)(puVar16 + 5);
                  uVar8 = *(undefined4 *)((longlong)puVar16 + 0x2c);
                  *(undefined4 *)puVar13 = *(undefined4 *)(puVar16 + 4);
                  *(undefined4 *)((longlong)puVar13 + 4) = uVar6;
                  *(undefined4 *)(puVar13 + 1) = uVar7;
                  *(undefined4 *)((longlong)puVar13 + 0xc) = uVar8;
                  puVar13[-2] = lVar4;
                  puVar13[-1] = lVar4 + puVar13[-4];
                  *puVar13 = uVar5;
                  uVar17 = uVar17 - 1;
                  puVar13 = puVar13 + 6;
                } while (uVar17 != 0);
              }
              puVar18 = puVar18 + (longlong)iVar3 * 6;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          local_5dd8 = CONCAT71(local_5dd8._1_7_,param_4);
          FUN_145629e80(param_1 + 0x2e848,*(undefined8 *)(puVar1 + 8),iVar10,iVar15);
          iVar15 = iVar15 + local_5d4c;
          lVar14 = local_5d48;
          uVar11 = local_5d54;
        } while (iVar15 < *(int *)(param_1 + 0x2a310));
      }
      iVar10 = iVar10 + uVar11;
    } while (iVar10 < *(int *)(param_1 + 0x2a308));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_5df8);
}



// FUNCTION 14562b0c0 FUN_14562b0c0 body=370 status=ok
// SIG undefined FUN_14562b0c0(void)

void FUN_14562b0c0(undefined1 *param_1,undefined1 *param_2,int param_3,uint param_4,
                  undefined1 *param_5,int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  
  lVar21 = (longlong)param_3;
  if (param_3 < 9) {
    if (0 < (int)(param_3 * param_4)) {
      lVar21 = (longlong)param_6;
      uVar20 = (ulonglong)((param_3 * param_4 - 1 >> 4) + 1);
      if (param_3 == 4) {
        lVar19 = (longlong)param_1 - (longlong)param_2;
        do {
          if (param_6 == 4) {
            uVar22 = *param_5;
            uVar23 = param_5[1];
            uVar24 = param_5[2];
            uVar25 = param_5[3];
            uVar26 = param_5[4];
            uVar27 = param_5[5];
            uVar28 = param_5[6];
            uVar29 = param_5[7];
            uVar30 = param_5[8];
            uVar31 = param_5[9];
            uVar32 = param_5[10];
            uVar33 = param_5[0xb];
            uVar34 = param_5[0xc];
            uVar35 = param_5[0xd];
            uVar36 = param_5[0xe];
            uVar37 = param_5[0xf];
            lVar18 = 0x10;
          }
          else {
            puVar17 = param_5 + lVar21 * 2;
            uVar30 = *puVar17;
            uVar31 = puVar17[1];
            uVar32 = puVar17[2];
            uVar33 = puVar17[3];
            puVar17 = param_5 + lVar21 * 3;
            uVar34 = *puVar17;
            uVar35 = puVar17[1];
            uVar36 = puVar17[2];
            uVar37 = puVar17[3];
            puVar17 = param_5 + lVar21;
            uVar26 = *puVar17;
            uVar27 = puVar17[1];
            uVar28 = puVar17[2];
            uVar29 = puVar17[3];
            uVar22 = *param_5;
            uVar23 = param_5[1];
            uVar24 = param_5[2];
            uVar25 = param_5[3];
            lVar18 = (longlong)(param_6 * 4);
          }
          uVar22 = pavgb(*param_2,uVar22);
          uVar23 = pavgb(param_2[1],uVar23);
          uVar24 = pavgb(param_2[2],uVar24);
          uVar25 = pavgb(param_2[3],uVar25);
          uVar26 = pavgb(param_2[4],uVar26);
          uVar27 = pavgb(param_2[5],uVar27);
          uVar28 = pavgb(param_2[6],uVar28);
          uVar29 = pavgb(param_2[7],uVar29);
          uVar30 = pavgb(param_2[8],uVar30);
          uVar31 = pavgb(param_2[9],uVar31);
          uVar32 = pavgb(param_2[10],uVar32);
          uVar33 = pavgb(param_2[0xb],uVar33);
          uVar34 = pavgb(param_2[0xc],uVar34);
          uVar35 = pavgb(param_2[0xd],uVar35);
          uVar36 = pavgb(param_2[0xe],uVar36);
          uVar37 = pavgb(param_2[0xf],uVar37);
          param_5 = param_5 + lVar18;
          puVar17 = param_2 + lVar19;
          *puVar17 = uVar22;
          puVar17[1] = uVar23;
          puVar17[2] = uVar24;
          puVar17[3] = uVar25;
          puVar17[4] = uVar26;
          puVar17[5] = uVar27;
          puVar17[6] = uVar28;
          puVar17[7] = uVar29;
          puVar17[8] = uVar30;
          puVar17[9] = uVar31;
          puVar17[10] = uVar32;
          puVar17[0xb] = uVar33;
          puVar17[0xc] = uVar34;
          puVar17[0xd] = uVar35;
          puVar17[0xe] = uVar36;
          puVar17[0xf] = uVar37;
          param_2 = param_2 + 0x10;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        return;
      }
      do {
        if (param_3 == param_6) {
          uVar22 = *param_5;
          uVar23 = param_5[1];
          uVar24 = param_5[2];
          uVar25 = param_5[3];
          uVar26 = param_5[4];
          uVar27 = param_5[5];
          uVar28 = param_5[6];
          uVar29 = param_5[7];
          uVar30 = param_5[8];
          uVar31 = param_5[9];
          uVar32 = param_5[10];
          uVar33 = param_5[0xb];
          uVar34 = param_5[0xc];
          uVar35 = param_5[0xd];
          uVar36 = param_5[0xe];
          uVar37 = param_5[0xf];
          lVar19 = 0x10;
        }
        else {
          uVar22 = *param_5;
          uVar23 = param_5[1];
          uVar24 = param_5[2];
          uVar25 = param_5[3];
          uVar26 = param_5[4];
          uVar27 = param_5[5];
          uVar28 = param_5[6];
          uVar29 = param_5[7];
          puVar17 = param_5 + lVar21;
          uVar30 = *puVar17;
          uVar31 = puVar17[1];
          uVar32 = puVar17[2];
          uVar33 = puVar17[3];
          uVar34 = puVar17[4];
          uVar35 = puVar17[5];
          uVar36 = puVar17[6];
          uVar37 = puVar17[7];
          lVar19 = (longlong)(param_6 * 2);
        }
        uVar22 = pavgb(*param_2,uVar22);
        uVar23 = pavgb(param_2[1],uVar23);
        uVar24 = pavgb(param_2[2],uVar24);
        uVar25 = pavgb(param_2[3],uVar25);
        uVar26 = pavgb(param_2[4],uVar26);
        uVar27 = pavgb(param_2[5],uVar27);
        uVar28 = pavgb(param_2[6],uVar28);
        uVar29 = pavgb(param_2[7],uVar29);
        uVar30 = pavgb(param_2[8],uVar30);
        uVar31 = pavgb(param_2[9],uVar31);
        uVar32 = pavgb(param_2[10],uVar32);
        uVar33 = pavgb(param_2[0xb],uVar33);
        uVar34 = pavgb(param_2[0xc],uVar34);
        uVar35 = pavgb(param_2[0xd],uVar35);
        uVar36 = pavgb(param_2[0xe],uVar36);
        uVar37 = pavgb(param_2[0xf],uVar37);
        param_2 = param_2 + 0x10;
        *param_1 = uVar22;
        param_1[1] = uVar23;
        param_1[2] = uVar24;
        param_1[3] = uVar25;
        param_1[4] = uVar26;
        param_1[5] = uVar27;
        param_1[6] = uVar28;
        param_1[7] = uVar29;
        param_1[8] = uVar30;
        param_1[9] = uVar31;
        param_1[10] = uVar32;
        param_1[0xb] = uVar33;
        param_1[0xc] = uVar34;
        param_1[0xd] = uVar35;
        param_1[0xe] = uVar36;
        param_1[0xf] = uVar37;
        param_5 = param_5 + lVar19;
        param_1 = param_1 + 0x10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else if (0 < (int)param_4) {
    uVar20 = (ulonglong)param_4;
    do {
      if (lVar21 != 0) {
        lVar19 = (lVar21 - 1U >> 4) + 1;
        puVar17 = param_5;
        do {
          puVar1 = puVar17 + ((longlong)param_2 - (longlong)param_5);
          uVar22 = *puVar17;
          puVar2 = puVar17 + 1;
          puVar3 = puVar17 + 2;
          puVar4 = puVar17 + 3;
          puVar5 = puVar17 + 4;
          puVar6 = puVar17 + 5;
          puVar7 = puVar17 + 6;
          puVar8 = puVar17 + 7;
          puVar9 = puVar17 + 8;
          puVar10 = puVar17 + 9;
          puVar11 = puVar17 + 10;
          puVar12 = puVar17 + 0xb;
          puVar13 = puVar17 + 0xc;
          puVar14 = puVar17 + 0xd;
          puVar15 = puVar17 + 0xe;
          puVar16 = puVar17 + 0xf;
          puVar17 = puVar17 + 0x10;
          uVar22 = pavgb(*puVar1,uVar22);
          uVar23 = pavgb(puVar1[1],*puVar2);
          uVar24 = pavgb(puVar1[2],*puVar3);
          uVar25 = pavgb(puVar1[3],*puVar4);
          uVar26 = pavgb(puVar1[4],*puVar5);
          uVar27 = pavgb(puVar1[5],*puVar6);
          uVar28 = pavgb(puVar1[6],*puVar7);
          uVar29 = pavgb(puVar1[7],*puVar8);
          uVar30 = pavgb(puVar1[8],*puVar9);
          uVar31 = pavgb(puVar1[9],*puVar10);
          uVar32 = pavgb(puVar1[10],*puVar11);
          uVar33 = pavgb(puVar1[0xb],*puVar12);
          uVar34 = pavgb(puVar1[0xc],*puVar13);
          uVar35 = pavgb(puVar1[0xd],*puVar14);
          uVar36 = pavgb(puVar1[0xe],*puVar15);
          uVar37 = pavgb(puVar1[0xf],*puVar16);
          puVar1 = puVar17 + (longlong)(param_1 + (-0x10 - (longlong)param_5));
          *puVar1 = uVar22;
          puVar1[1] = uVar23;
          puVar1[2] = uVar24;
          puVar1[3] = uVar25;
          puVar1[4] = uVar26;
          puVar1[5] = uVar27;
          puVar1[6] = uVar28;
          puVar1[7] = uVar29;
          puVar1[8] = uVar30;
          puVar1[9] = uVar31;
          puVar1[10] = uVar32;
          puVar1[0xb] = uVar33;
          puVar1[0xc] = uVar34;
          puVar1[0xd] = uVar35;
          puVar1[0xe] = uVar36;
          puVar1[0xf] = uVar37;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      param_1 = param_1 + lVar21;
      param_2 = param_2 + lVar21;
      param_5 = param_5 + param_6;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    return;
  }
  return;
}



// FUNCTION 14562b240 FUN_14562b240 body=72 status=ok
// SIG undefined FUN_14562b240(void)

void FUN_14562b240(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint *param_5,int *param_6)

{
  FUN_14272f410(param_1 * 2,param_2,param_3 * 2,param_4,param_5,param_6);
  *param_6 = *param_6 + 2 >> 2;
  *param_5 = *param_5 + 8 >> 4;
  return;
}



// FUNCTION 14562b290 FUN_14562b290 body=72 status=ok
// SIG undefined FUN_14562b290(void)

void FUN_14562b290(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint *param_5,int *param_6)

{
  FUN_14272f5da(param_1 * 2,param_2,param_3 * 2,param_4,param_5,param_6);
  *param_6 = *param_6 + 2 >> 2;
  *param_5 = *param_5 + 8 >> 4;
  return;
}



// FUNCTION 14562b2e0 FUN_14562b2e0 body=59 status=ok
// SIG undefined FUN_14562b2e0(void)

void FUN_14562b2e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  uint local_res8 [4];
  undefined1 local_res18 [16];
  
  FUN_14272f410(param_1 * 2,param_2,param_3 * 2,param_4,local_res8,local_res18);
  *param_5 = (int)((ulonglong)local_res8[0] + 8 >> 4);
  return;
}



// FUNCTION 14562b320 FUN_14562b320 body=59 status=ok
// SIG undefined FUN_14562b320(void)

void FUN_14562b320(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  uint local_res8 [4];
  undefined1 local_res18 [16];
  
  FUN_14272f5da(param_1 * 2,param_2,param_3 * 2,param_4,local_res8,local_res18);
  *param_5 = (int)((ulonglong)local_res8[0] + 8 >> 4);
  return;
}



// FUNCTION 14562b360 FUN_14562b360 body=173 status=ok
// SIG undefined FUN_14562b360(void)

ulonglong FUN_14562b360(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,0x10,0x10,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 8);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562b410 FUN_14562b410 body=173 status=ok
// SIG undefined FUN_14562b410(void)

ulonglong FUN_14562b410(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,0x10,0x20,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 9);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562b4c0 FUN_14562b4c0 body=173 status=ok
// SIG undefined FUN_14562b4c0(void)

ulonglong FUN_14562b4c0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,0x10,8,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 7);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562b570 FUN_14562b570 body=312 status=ok
// SIG undefined FUN_14562b570(void)

ulonglong FUN_14562b570(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_res10 [2];
  
  lVar7 = (longlong)param_6;
  lVar3 = param_8 * 2;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,lVar7,lVar3,0x20,
                        0x10,&param_6,0,0);
  uVar4 = 0;
  iVar2 = FUN_142731710(param_1 * 2 + 0x20,(longlong)param_2,param_3 & 0xffffffff,
                        param_4 & 0xffffffff,param_5 * 2 + 0x20,lVar7,lVar3 + 0x20,0x20,0x10,
                        local_res10,0,0);
  uVar5 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar5;
  lVar3 = (longlong)(iVar1 + 2 + iVar2 >> 2);
  uVar6 = (ulonglong)uVar5 - (lVar3 * lVar3 >> 9);
  if (-1 < (longlong)uVar6) {
    uVar4 = uVar6 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14562b6b0 FUN_14562b6b0 body=312 status=ok
// SIG undefined FUN_14562b6b0(void)

ulonglong FUN_14562b6b0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_res10 [2];
  
  lVar7 = (longlong)param_6;
  lVar3 = param_8 * 2;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,lVar7,lVar3,0x20,
                        0x20,&param_6,0,0);
  uVar4 = 0;
  iVar2 = FUN_142731710(param_1 * 2 + 0x20,(longlong)param_2,param_3 & 0xffffffff,
                        param_4 & 0xffffffff,param_5 * 2 + 0x20,lVar7,lVar3 + 0x20,0x20,0x20,
                        local_res10,0,0);
  uVar5 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar5;
  lVar3 = (longlong)(iVar1 + 2 + iVar2 >> 2);
  uVar6 = (ulonglong)uVar5 - (lVar3 * lVar3 >> 10);
  if (-1 < (longlong)uVar6) {
    uVar4 = uVar6 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14562b7f0 FUN_14562b7f0 body=312 status=ok
// SIG undefined FUN_14562b7f0(void)

ulonglong FUN_14562b7f0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_res10 [2];
  
  lVar7 = (longlong)param_6;
  lVar3 = param_8 * 2;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,lVar7,lVar3,0x20,
                        0x40,&param_6,0,0);
  uVar4 = 0;
  iVar2 = FUN_142731710(param_1 * 2 + 0x20,(longlong)param_2,param_3 & 0xffffffff,
                        param_4 & 0xffffffff,param_5 * 2 + 0x20,lVar7,lVar3 + 0x20,0x20,0x40,
                        local_res10,0,0);
  uVar5 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar5;
  lVar3 = (longlong)(iVar1 + 2 + iVar2 >> 2);
  uVar6 = (ulonglong)uVar5 - (lVar3 * lVar3 >> 0xb);
  if (-1 < (longlong)uVar6) {
    uVar4 = uVar6 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14562b930 FUN_14562b930 body=512 status=ok
// SIG undefined FUN_14562b930(void)

ulonglong FUN_14562b930(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res10 [2];
  
  param_1 = param_1 * 2;
  lVar9 = (longlong)param_6;
  lVar10 = (longlong)param_2;
  param_5 = param_5 * 2;
  lVar5 = param_8 * 2;
  iVar1 = FUN_142731710(param_1,lVar10,param_3,param_4,param_5,lVar9,lVar5,0x40,0x20,&param_6,0,0);
  iVar2 = FUN_142731710(param_1 + 0x20,lVar10,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x20,lVar9,lVar5 + 0x20,0x40,0x20,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  iVar3 = FUN_142731710(param_1 + 0x40,lVar10,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x40,lVar9,lVar5 + 0x40,0x40,0x20,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  uVar6 = 0;
  iVar4 = FUN_142731710(param_1 + 0x60,lVar10,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x60,lVar9,lVar5 + 0x60,0x40,0x20,local_res10,0,0);
  uVar7 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar7;
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + 2 + iVar4 >> 2);
  uVar8 = (ulonglong)uVar7 - (lVar5 * lVar5 >> 0xb);
  if (-1 < (longlong)uVar8) {
    uVar6 = uVar8 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562bb30 FUN_14562bb30 body=512 status=ok
// SIG undefined FUN_14562bb30(void)

ulonglong FUN_14562bb30(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res10 [2];
  
  param_1 = param_1 * 2;
  lVar9 = (longlong)param_6;
  lVar10 = (longlong)param_2;
  param_5 = param_5 * 2;
  lVar5 = param_8 * 2;
  iVar1 = FUN_142731710(param_1,lVar10,param_3,param_4,param_5,lVar9,lVar5,0x40,0x40,&param_6,0,0);
  iVar2 = FUN_142731710(param_1 + 0x20,lVar10,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x20,lVar9,lVar5 + 0x20,0x40,0x40,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  iVar3 = FUN_142731710(param_1 + 0x40,lVar10,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x40,lVar9,lVar5 + 0x40,0x40,0x40,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  uVar6 = 0;
  iVar4 = FUN_142731710(param_1 + 0x60,lVar10,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x60,lVar9,lVar5 + 0x60,0x40,0x40,local_res10,0,0);
  uVar7 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar7;
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + 2 + iVar4 >> 2);
  uVar8 = (ulonglong)uVar7 - (lVar5 * lVar5 >> 0xc);
  if (-1 < (longlong)uVar8) {
    uVar6 = uVar8 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562bd30 FUN_14562bd30 body=173 status=ok
// SIG undefined FUN_14562bd30(void)

ulonglong FUN_14562bd30(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_142730c40(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,8,0x10,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 7);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562bde0 FUN_14562bde0 body=173 status=ok
// SIG undefined FUN_14562bde0(void)

ulonglong FUN_14562bde0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_142730c40(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,8,4,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 5);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562be90 FUN_14562be90 body=173 status=ok
// SIG undefined FUN_14562be90(void)

ulonglong FUN_14562be90(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_142730c40(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,8,8,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 6);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562bf40 FUN_14562bf40 body=138 status=ok
// SIG undefined FUN_14562bf40(void)

ulonglong FUN_14562bf40(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_1427301b0(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        0x10,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 8);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562bfd0 FUN_14562bfd0 body=138 status=ok
// SIG undefined FUN_14562bfd0(void)

ulonglong FUN_14562bfd0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_1427301b0(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        0x20,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 9);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562c060 FUN_14562c060 body=138 status=ok
// SIG undefined FUN_14562c060(void)

ulonglong FUN_14562c060(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_1427301b0(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        8,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 7);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562c0f0 FUN_14562c0f0 body=270 status=ok
// SIG undefined FUN_14562c0f0(void)

ulonglong FUN_14562c0f0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res10 [2];
  
  lVar3 = (longlong)param_6;
  uVar6 = 0;
  iVar1 = FUN_1427301b0(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,lVar3,0x10,
                        &param_6,0,0);
  iVar2 = FUN_1427301b0(param_1 * 2 + 0x20,(longlong)param_2,param_3 & 0xffffffff,
                        param_4 & 0xffffffff,param_5 * 2 + 0x20,lVar3,0x10,local_res10,0,0);
  uVar4 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar4;
  lVar3 = (longlong)(iVar1 + 2 + iVar2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar3 * lVar3 >> 9);
  if (-1 < (longlong)uVar5) {
    uVar6 = uVar5 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562c200 FUN_14562c200 body=270 status=ok
// SIG undefined FUN_14562c200(void)

ulonglong FUN_14562c200(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res10 [2];
  
  lVar3 = (longlong)param_6;
  uVar6 = 0;
  iVar1 = FUN_1427301b0(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,lVar3,0x20,
                        &param_6,0,0);
  iVar2 = FUN_1427301b0(param_1 * 2 + 0x20,(longlong)param_2,param_3 & 0xffffffff,
                        param_4 & 0xffffffff,param_5 * 2 + 0x20,lVar3,0x20,local_res10,0,0);
  uVar4 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar4;
  lVar3 = (longlong)(iVar1 + 2 + iVar2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar3 * lVar3 >> 10);
  if (-1 < (longlong)uVar5) {
    uVar6 = uVar5 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562c310 FUN_14562c310 body=270 status=ok
// SIG undefined FUN_14562c310(void)

ulonglong FUN_14562c310(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res10 [2];
  
  lVar3 = (longlong)param_6;
  uVar6 = 0;
  iVar1 = FUN_1427301b0(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,lVar3,0x40,
                        &param_6,0,0);
  iVar2 = FUN_1427301b0(param_1 * 2 + 0x20,(longlong)param_2,param_3 & 0xffffffff,
                        param_4 & 0xffffffff,param_5 * 2 + 0x20,lVar3,0x40,local_res10,0,0);
  uVar4 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar4;
  lVar3 = (longlong)(iVar1 + 2 + iVar2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar3 * lVar3 >> 0xb);
  if (-1 < (longlong)uVar5) {
    uVar6 = uVar5 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562c420 FUN_14562c420 body=428 status=ok
// SIG undefined FUN_14562c420(void)

ulonglong FUN_14562c420(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_res10 [2];
  
  param_1 = param_1 * 2;
  lVar5 = (longlong)param_6;
  uVar8 = 0;
  param_5 = param_5 * 2;
  lVar9 = (longlong)param_2;
  iVar1 = FUN_1427301b0(param_1,lVar9,param_3,param_4,param_5,lVar5,0x20,&param_6,0,0);
  iVar2 = FUN_1427301b0(param_1 + 0x20,lVar9,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x20,lVar5,0x20,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  iVar3 = FUN_1427301b0(param_1 + 0x40,lVar9,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x40,lVar5,0x20,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  iVar4 = FUN_1427301b0(param_1 + 0x60,lVar9,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x60,lVar5,0x20,local_res10,0,0);
  uVar6 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar6;
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + 2 + iVar4 >> 2);
  uVar7 = (ulonglong)uVar6 - (lVar5 * lVar5 >> 0xb);
  if (-1 < (longlong)uVar7) {
    uVar8 = uVar7 & 0xffffffff;
  }
  return uVar8;
}



// FUNCTION 14562c5d0 FUN_14562c5d0 body=428 status=ok
// SIG undefined FUN_14562c5d0(void)

ulonglong FUN_14562c5d0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_res10 [2];
  
  param_1 = param_1 * 2;
  lVar5 = (longlong)param_6;
  uVar8 = 0;
  param_5 = param_5 * 2;
  lVar9 = (longlong)param_2;
  iVar1 = FUN_1427301b0(param_1,lVar9,param_3,param_4,param_5,lVar5,0x40,&param_6,0,0);
  iVar2 = FUN_1427301b0(param_1 + 0x20,lVar9,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x20,lVar5,0x40,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  iVar3 = FUN_1427301b0(param_1 + 0x40,lVar9,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x40,lVar5,0x40,local_res10,0,0);
  param_6 = param_6 + local_res10[0];
  iVar4 = FUN_1427301b0(param_1 + 0x60,lVar9,param_3 & 0xffffffff,param_4 & 0xffffffff,
                        param_5 + 0x60,lVar5,0x40,local_res10,0,0);
  uVar6 = (uint)(param_6 + local_res10[0] + 8) >> 4;
  *param_7 = uVar6;
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + 2 + iVar4 >> 2);
  uVar7 = (ulonglong)uVar6 - (lVar5 * lVar5 >> 0xc);
  if (-1 < (longlong)uVar7) {
    uVar8 = uVar7 & 0xffffffff;
  }
  return uVar8;
}



// FUNCTION 14562c780 FUN_14562c780 body=138 status=ok
// SIG undefined FUN_14562c780(void)

ulonglong FUN_14562c780(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_14272f790(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        0x10,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 7);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562c810 FUN_14562c810 body=138 status=ok
// SIG undefined FUN_14562c810(void)

ulonglong FUN_14562c810(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_14272f790(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        4,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 5);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562c8a0 FUN_14562c8a0 body=138 status=ok
// SIG undefined FUN_14562c8a0(void)

ulonglong FUN_14562c8a0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = FUN_14272f790(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        8,&param_6,0,0);
  uVar4 = param_6 + 8U >> 4;
  *param_7 = uVar4;
  lVar2 = (longlong)(iVar1 + 2 >> 2);
  uVar5 = (ulonglong)uVar4 - (lVar2 * lVar2 >> 6);
  if (-1 < (longlong)uVar5) {
    uVar3 = uVar5 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14562c930 FUN_14562c930 body=94 status=ok
// SIG undefined FUN_14562c930(void)

ulonglong FUN_14562c930(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_res8 [4];
  int local_res18 [4];
  
  FUN_14272f410(param_1 * 2,param_2,param_3 * 2,param_4,local_res8,local_res18);
  uVar3 = (ulonglong)local_res8[0] + 8 >> 4;
  *param_5 = (int)uVar3;
  lVar2 = (longlong)(local_res18[0] + 2) >> 2;
  uVar3 = uVar3 - (lVar2 * lVar2 >> 8);
  uVar1 = 0;
  if (-1 < (longlong)uVar3) {
    uVar1 = uVar3 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14562c990 FUN_14562c990 body=223 status=ok
// SIG undefined FUN_14562c990(void)

ulonglong FUN_14562c990(longlong param_1,ulonglong param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res8 [2];
  uint local_res10;
  int local_res18 [2];
  
  local_res10 = (uint)param_2;
  param_1 = param_1 * 2;
  lVar3 = 0;
  param_3 = param_3 * 2;
  iVar2 = 0;
  iVar1 = local_res10 << 4;
  lVar6 = 2;
  do {
    FUN_14272f410(param_1,param_2,param_3,param_4,local_res8,local_res18);
    param_3 = param_3 + (longlong)(param_4 << 4) * 2;
    iVar2 = iVar2 + local_res18[0];
    lVar3 = lVar3 + (ulonglong)local_res8[0];
    param_2 = (ulonglong)local_res10;
    param_1 = param_1 + (longlong)iVar1 * 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar4 = lVar3 + 8U >> 4;
  *param_5 = (int)uVar4;
  lVar3 = (longlong)(iVar2 + 2) >> 2;
  uVar5 = (uVar4 & 0xffffffff) - (lVar3 * lVar3 >> 9);
  uVar4 = 0;
  if (-1 < (longlong)uVar5) {
    uVar4 = uVar5 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14562ca70 FUN_14562ca70 body=200 status=ok
// SIG undefined FUN_14562ca70(void)

ulonglong FUN_14562ca70(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  int local_res18 [4];
  
  uVar6 = 0;
  lVar1 = param_1 * 2;
  lVar2 = 2;
  uVar5 = uVar6;
  uVar4 = uVar6;
  do {
    FUN_14272f5da(lVar1,param_2,param_3 * 2 + param_1 * -2 + lVar1,param_4,local_res8,local_res18);
    lVar1 = lVar1 + 0x10;
    uVar3 = (int)uVar5 + local_res18[0];
    uVar5 = (ulonglong)uVar3;
    uVar4 = uVar4 + local_res8[0];
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uVar5 = uVar4 + 8 >> 4;
  *param_5 = (int)uVar5;
  lVar1 = (longlong)(int)(uVar3 + 2) >> 2;
  uVar5 = (uVar5 & 0xffffffff) - (lVar1 * lVar1 >> 7);
  if (-1 < (longlong)uVar5) {
    uVar6 = uVar5 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562cb40 FUN_14562cb40 body=200 status=ok
// SIG undefined FUN_14562cb40(void)

ulonglong FUN_14562cb40(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  int local_res18 [4];
  
  uVar6 = 0;
  lVar1 = param_1 * 2;
  lVar2 = 2;
  uVar5 = uVar6;
  uVar4 = uVar6;
  do {
    FUN_14272f410(lVar1,param_2,param_3 * 2 + param_1 * -2 + lVar1,param_4,local_res8,local_res18);
    lVar1 = lVar1 + 0x20;
    uVar3 = (int)uVar5 + local_res18[0];
    uVar5 = (ulonglong)uVar3;
    uVar4 = uVar4 + local_res8[0];
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uVar5 = uVar4 + 8 >> 4;
  *param_5 = (int)uVar5;
  lVar1 = (longlong)(int)(uVar3 + 2) >> 2;
  uVar5 = (uVar5 & 0xffffffff) - (lVar1 * lVar1 >> 9);
  if (-1 < (longlong)uVar5) {
    uVar6 = uVar5 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562cc10 FUN_14562cc10 body=355 status=ok
// SIG undefined FUN_14562cc10(void)

ulonglong FUN_14562cc10(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_res8 [2];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  longlong local_80;
  longlong local_78;
  
  uVar3 = 0;
  local_78 = 2;
  local_80 = 0;
  lVar9 = param_1 * 2;
  uVar6 = uVar3;
  uVar8 = uVar3;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    iVar2 = local_res20;
    iVar1 = local_res10;
    lVar7 = 2;
    lVar4 = lVar9;
    do {
      FUN_14272f410(lVar4,iVar1,(local_80 - uVar8) * 2 + param_1 * -2 + param_3 * 2 + lVar4,iVar2,
                    local_res8,local_res18);
      lVar4 = lVar4 + 0x20;
      uVar5 = (int)uVar3 + local_res18[0];
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + local_res8[0];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar9 = lVar9 + (longlong)(param_2 << 4) * 2;
    local_80 = local_80 + (param_4 << 4);
    uVar8 = uVar8 + (longlong)(param_2 << 4);
    local_78 = local_78 + -1;
  } while (local_78 != 0);
  lVar9 = (longlong)(int)(uVar5 + 2) >> 2;
  uVar6 = uVar6 + 8 >> 4;
  *param_5 = (int)uVar6;
  uVar8 = (uVar6 & 0xffffffff) - (lVar9 * lVar9 >> 10);
  uVar6 = 0;
  if (-1 < (longlong)uVar8) {
    uVar6 = uVar8;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14562cd80 FUN_14562cd80 body=355 status=ok
// SIG undefined FUN_14562cd80(void)

ulonglong FUN_14562cd80(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_res8 [2];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  longlong local_80;
  longlong local_78;
  
  uVar3 = 0;
  local_78 = 4;
  local_80 = 0;
  lVar9 = param_1 * 2;
  uVar6 = uVar3;
  uVar8 = uVar3;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    iVar2 = local_res20;
    iVar1 = local_res10;
    lVar7 = 2;
    lVar4 = lVar9;
    do {
      FUN_14272f410(lVar4,iVar1,(local_80 - uVar8) * 2 + param_1 * -2 + param_3 * 2 + lVar4,iVar2,
                    local_res8,local_res18);
      lVar4 = lVar4 + 0x20;
      uVar5 = (int)uVar3 + local_res18[0];
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + local_res8[0];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar9 = lVar9 + (longlong)(param_2 << 4) * 2;
    local_80 = local_80 + (param_4 << 4);
    uVar8 = uVar8 + (longlong)(param_2 << 4);
    local_78 = local_78 + -1;
  } while (local_78 != 0);
  lVar9 = (longlong)(int)(uVar5 + 2) >> 2;
  uVar6 = uVar6 + 8 >> 4;
  *param_5 = (int)uVar6;
  uVar8 = (uVar6 & 0xffffffff) - (lVar9 * lVar9 >> 0xb);
  uVar6 = 0;
  if (-1 < (longlong)uVar8) {
    uVar6 = uVar8;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14562cef0 FUN_14562cef0 body=355 status=ok
// SIG undefined FUN_14562cef0(void)

ulonglong FUN_14562cef0(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_res8 [2];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  longlong local_80;
  longlong local_78;
  
  uVar3 = 0;
  local_78 = 2;
  local_80 = 0;
  lVar9 = param_1 * 2;
  uVar6 = uVar3;
  uVar8 = uVar3;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    iVar2 = local_res20;
    iVar1 = local_res10;
    lVar7 = 4;
    lVar4 = lVar9;
    do {
      FUN_14272f410(lVar4,iVar1,(local_80 - uVar8) * 2 + param_1 * -2 + param_3 * 2 + lVar4,iVar2,
                    local_res8,local_res18);
      lVar4 = lVar4 + 0x20;
      uVar5 = (int)uVar3 + local_res18[0];
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + local_res8[0];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar9 = lVar9 + (longlong)(param_2 << 4) * 2;
    local_80 = local_80 + (param_4 << 4);
    uVar8 = uVar8 + (longlong)(param_2 << 4);
    local_78 = local_78 + -1;
  } while (local_78 != 0);
  lVar9 = (longlong)(int)(uVar5 + 2) >> 2;
  uVar6 = uVar6 + 8 >> 4;
  *param_5 = (int)uVar6;
  uVar8 = (uVar6 & 0xffffffff) - (lVar9 * lVar9 >> 0xb);
  uVar6 = 0;
  if (-1 < (longlong)uVar8) {
    uVar6 = uVar8;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14562d060 FUN_14562d060 body=355 status=ok
// SIG undefined FUN_14562d060(void)

ulonglong FUN_14562d060(longlong param_1,int param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_res8 [2];
  int local_res10;
  int local_res18 [2];
  int local_res20;
  longlong local_80;
  longlong local_78;
  
  uVar3 = 0;
  local_78 = 4;
  local_80 = 0;
  lVar9 = param_1 * 2;
  uVar6 = uVar3;
  uVar8 = uVar3;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    iVar2 = local_res20;
    iVar1 = local_res10;
    lVar7 = 4;
    lVar4 = lVar9;
    do {
      FUN_14272f410(lVar4,iVar1,(local_80 - uVar8) * 2 + param_1 * -2 + param_3 * 2 + lVar4,iVar2,
                    local_res8,local_res18);
      lVar4 = lVar4 + 0x20;
      uVar5 = (int)uVar3 + local_res18[0];
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + local_res8[0];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar9 = lVar9 + (longlong)(param_2 << 4) * 2;
    local_80 = local_80 + (param_4 << 4);
    uVar8 = uVar8 + (longlong)(param_2 << 4);
    local_78 = local_78 + -1;
  } while (local_78 != 0);
  lVar9 = (longlong)(int)(uVar5 + 2) >> 2;
  uVar6 = uVar6 + 8 >> 4;
  *param_5 = (int)uVar6;
  uVar8 = (uVar6 & 0xffffffff) - (lVar9 * lVar9 >> 0xc);
  uVar6 = 0;
  if (-1 < (longlong)uVar8) {
    uVar6 = uVar8;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14562d1d0 FUN_14562d1d0 body=223 status=ok
// SIG undefined FUN_14562d1d0(void)

ulonglong FUN_14562d1d0(longlong param_1,ulonglong param_2,longlong param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_res8 [2];
  uint local_res10;
  int local_res18 [2];
  
  local_res10 = (uint)param_2;
  param_1 = param_1 * 2;
  lVar3 = 0;
  param_3 = param_3 * 2;
  iVar2 = 0;
  iVar1 = local_res10 * 8;
  lVar6 = 2;
  do {
    FUN_14272f5da(param_1,param_2,param_3,param_4,local_res8,local_res18);
    param_3 = param_3 + (longlong)(param_4 * 8) * 2;
    iVar2 = iVar2 + local_res18[0];
    lVar3 = lVar3 + (ulonglong)local_res8[0];
    param_2 = (ulonglong)local_res10;
    param_1 = param_1 + (longlong)iVar1 * 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar4 = lVar3 + 8U >> 4;
  *param_5 = (int)uVar4;
  lVar3 = (longlong)(iVar2 + 2) >> 2;
  uVar5 = (uVar4 & 0xffffffff) - (lVar3 * lVar3 >> 7);
  uVar4 = 0;
  if (-1 < (longlong)uVar5) {
    uVar4 = uVar5 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14562d2b0 FUN_14562d2b0 body=94 status=ok
// SIG undefined FUN_14562d2b0(void)

ulonglong FUN_14562d2b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_res8 [4];
  int local_res18 [4];
  
  FUN_14272f5da(param_1 * 2,param_2,param_3 * 2,param_4,local_res8,local_res18);
  uVar3 = (ulonglong)local_res8[0] + 8 >> 4;
  *param_5 = (int)uVar3;
  lVar2 = (longlong)(local_res18[0] + 2) >> 2;
  uVar3 = uVar3 - (lVar2 * lVar2 >> 6);
  uVar1 = 0;
  if (-1 < (longlong)uVar3) {
    uVar1 = uVar3 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14562d310 FUN_14562d310 body=72 status=ok
// SIG undefined FUN_14562d310(void)

void FUN_14562d310(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint *param_5,int *param_6)

{
  FUN_14272f410(param_1 * 2,param_2,param_3 * 2,param_4,param_5,param_6);
  *param_6 = *param_6 + 8 >> 4;
  *param_5 = *param_5 + 0x80 >> 8;
  return;
}



// FUNCTION 14562d360 FUN_14562d360 body=72 status=ok
// SIG undefined FUN_14562d360(void)

void FUN_14562d360(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint *param_5,int *param_6)

{
  FUN_14272f5da(param_1 * 2,param_2,param_3 * 2,param_4,param_5,param_6);
  *param_6 = *param_6 + 8 >> 4;
  *param_5 = *param_5 + 0x80 >> 8;
  return;
}



// FUNCTION 14562d3b0 FUN_14562d3b0 body=59 status=ok
// SIG undefined FUN_14562d3b0(void)

void FUN_14562d3b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  uint local_res8 [4];
  undefined1 local_res18 [16];
  
  FUN_14272f410(param_1 * 2,param_2,param_3 * 2,param_4,local_res8,local_res18);
  *param_5 = (int)((ulonglong)local_res8[0] + 0x80 >> 8);
  return;
}



// FUNCTION 14562d3f0 FUN_14562d3f0 body=59 status=ok
// SIG undefined FUN_14562d3f0(void)

void FUN_14562d3f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  uint local_res8 [4];
  undefined1 local_res18 [16];
  
  FUN_14272f5da(param_1 * 2,param_2,param_3 * 2,param_4,local_res8,local_res18);
  *param_5 = (int)((ulonglong)local_res8[0] + 0x80 >> 8);
  return;
}



// FUNCTION 14562d430 FUN_14562d430 body=178 status=ok
// SIG undefined FUN_14562d430(void)

ulonglong FUN_14562d430(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,undefined4 *param_7,longlong param_8)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,0x10,0x10,&param_5,0,0);
  lVar3 = (longlong)(iVar1 + 8) >> 4;
  uVar2 = ((ulonglong)(uint)param_5 + 0x80 >> 8) - (lVar3 * lVar3 >> 8);
  *param_7 = (int)((ulonglong)(uint)param_5 + 0x80 >> 8);
  if (-1 < (longlong)uVar2) {
    uVar4 = uVar2 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14562d4f0 FUN_14562d4f0 body=347 status=ok
// SIG undefined FUN_14562d4f0(void)

ulonglong FUN_14562d4f0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                       longlong param_5,int param_6,undefined4 *param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  param_1 = param_1 * 2;
  uVar6 = 0;
  lVar5 = param_5 * 2;
  uVar4 = 0x20;
  lVar9 = param_8 * 2;
  lVar2 = (longlong)param_6;
  param_8 = (longlong)(param_6 << 4) * 2;
  uVar3 = param_3;
  uVar7 = param_4;
  uVar8 = uVar6;
  uVar11 = uVar6;
  do {
    uVar10 = 0x10;
    if (uVar4 < 0x10) {
      uVar10 = uVar4;
    }
    iVar1 = FUN_142731710(param_1,(longlong)param_2,uVar3,uVar7,lVar5,lVar2,lVar9,0x10,uVar10,
                          &param_5,0,0);
    lVar5 = lVar5 + param_8;
    uVar10 = (int)uVar11 + iVar1;
    uVar11 = (ulonglong)uVar10;
    uVar4 = uVar4 - 0x10;
    uVar7 = param_4 & 0xffffffff;
    uVar8 = uVar8 + (uint)param_5;
    uVar3 = param_3 & 0xffffffff;
    lVar9 = lVar9 + 0x200;
    param_1 = param_1 + (longlong)(param_2 << 4) * 2;
  } while (0 < (int)uVar4);
  lVar5 = (longlong)(int)(uVar10 + 8) >> 4;
  uVar3 = (uVar8 + 0x80 >> 8 & 0xffffffff) - (lVar5 * lVar5 >> 9);
  *param_7 = (int)(uVar8 + 0x80 >> 8);
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3 & 0xffffffff;
  }
  return uVar6;
}



// FUNCTION 14562d650 FUN_14562d650 body=178 status=ok
// SIG undefined FUN_14562d650(void)

ulonglong FUN_14562d650(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,int param_6,undefined4 *param_7,longlong param_8)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_142731710(param_1 * 2,(longlong)param_2,param_3,param_4,param_5 * 2,(longlong)param_6,
                        param_8 * 2,0x10,8,&param_5,0,0);
  lVar3 = (longlong)(iVar1 + 8) >> 4;
  uVar2 = ((ulonglong)(uint)param_5 + 0x80 >> 8) - (lVar3 * lVar3 >> 7);
  *param_7 = (int)((ulonglong)(uint)param_5 + 0x80 >> 8);
  if (-1 < (longlong)uVar2) {
    uVar4 = uVar2 & 0xffffffff;
  }
  return uVar4;
}


