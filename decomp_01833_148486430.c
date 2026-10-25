// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148486430 FUN_148486430 body=208 status=ok
// SIG undefined FUN_148486430(void)

void FUN_148486430(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)*param_1;
  lVar4 = param_1[1];
  iVar1 = (int)plVar3[2];
  iVar2 = *(int *)((longlong)plVar3 + 0x14);
  iVar5 = param_2 / (iVar2 * iVar1);
  iVar6 = 0;
  lVar9 = 8;
  do {
    iVar7 = (int)((longlong)
                  ((ulonglong)(uint)((int)((longlong)param_2 / (longlong)iVar1) >> 0x1f) << 0x20 |
                  (longlong)param_2 / (longlong)iVar1 & 0xffffffffU) % (longlong)iVar2);
    iVar6 = (iVar6 + 1) -
            (uint)(*(float *)(*(longlong *)(lVar4 + 0x80) +
                             (longlong)
                             (*(int *)((longlong)&PTR_FUN_14aee5928 + lVar9) + param_2 % iVar1 +
                             (*(int *)((longlong)&PTR_FUN_14aee5928 + lVar9 + 4) + iVar7 +
                             (*(int *)((longlong)&DAT_14aee5930 + lVar9) + iVar5) *
                             *(int *)(lVar4 + 0x94)) * *(int *)(lVar4 + 0x90)) * 4) <
                  *(float *)(lVar4 + 0x20));
    lVar9 = lVar9 + 0xc;
  } while (lVar9 != 0x68);
  uVar8 = 2;
  if ((iVar6 == 8) || (uVar8 = 1, 0 < iVar6)) {
    *(undefined4 *)(*plVar3 + (longlong)((iVar5 * iVar2 + iVar7) * iVar1 + param_2 % iVar1) * 4) =
         uVar8;
  }
  return;
}



// FUNCTION 148486500 FUN_148486500 body=115 status=ok
// SIG undefined FUN_148486500(void)

void FUN_148486500(int *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1[8] == 0) {
    FUN_1484867bc(param_1 + 6);
    **(undefined1 **)(param_1 + 6) = 0;
  }
  else {
    iVar2 = param_1[1];
    if (iVar2 != 0xff) goto LAB_14848651d;
    iVar2 = FUN_14848682c(param_1);
    *param_1 = iVar2;
  }
  iVar2 = -1;
LAB_14848651d:
  iVar2 = iVar2 + 1;
  param_1[1] = iVar2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 6) + 8 + (longlong)*param_1 * 0x10);
  *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc) = *param_2;
  return;
}



// FUNCTION 148486574 FUN_148486574 body=209 status=ok
// SIG undefined FUN_148486574(void)

void FUN_148486574(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  param_2[2] = param_1[2];
  dVar12 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = dVar12;
  param_2[5] = param_1[2];
  dVar12 = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = dVar12;
  if ((longlong)*(int *)(param_1 + 4) != 0) {
    pdVar5 = (double *)param_1[3];
    pdVar1 = pdVar5 + (longlong)*(int *)(param_1 + 4) * 3;
    dVar12 = *param_2;
    dVar11 = param_2[1];
    dVar10 = param_2[2];
    dVar9 = param_2[3];
    dVar8 = param_2[4];
    uVar6 = SUB84(param_2[5],0);
    uVar7 = (undefined4)((ulonglong)param_2[5] >> 0x20);
    do {
      dVar2 = *pdVar5;
      dVar3 = pdVar5[1];
      if (dVar2 <= dVar12) {
        dVar12 = dVar2;
      }
      if (dVar3 <= dVar11) {
        dVar11 = dVar3;
      }
      dVar4 = pdVar5[2];
      if (dVar4 <= dVar10) {
        dVar10 = dVar4;
      }
      if (dVar9 <= dVar2) {
        dVar9 = dVar2;
      }
      if (dVar8 <= dVar3) {
        dVar8 = dVar3;
      }
      if ((double)CONCAT44(uVar7,uVar6) <= dVar4) {
        uVar6 = SUB84(dVar4,0);
        uVar7 = (int)((ulonglong)dVar4 >> 0x20);
      }
      pdVar5 = pdVar5 + 3;
    } while (pdVar5 != pdVar1);
    *param_2 = dVar12;
    param_2[1] = dVar11;
    param_2[2] = dVar10;
    param_2[3] = dVar9;
    param_2[4] = dVar8;
    param_2[5] = (double)CONCAT44(uVar7,uVar6);
  }
  *(undefined1 *)(param_2 + 6) = 1;
  return;
}



// FUNCTION 148486646 FUN_148486646 body=372 status=ok
// SIG undefined FUN_148486646(void)

ulonglong FUN_148486646(double *param_1,double *param_2)

{
  int iVar1;
  ulonglong uVar2;
  double *pdVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 4);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
    if ((*param_1 < *param_2) || (param_2[3] < *param_1)) goto LAB_1484866ad;
    uVar2 = 0;
    if ((param_1[1] < param_2[1]) || (uVar2 = 0, param_2[4] < param_1[1])) goto LAB_1484866ad;
    if (param_2[2] <= param_1[2]) {
      uVar2 = (ulonglong)(param_1[2] <= param_2[5]);
      goto LAB_1484866ad;
    }
  }
  else {
    FUN_148486574(param_1,&local_68);
    if (((((local_68 < param_2[3] || local_68 == param_2[3]) && (*param_2 <= local_50)) &&
         (local_60 < param_2[4] || local_60 == param_2[4])) &&
        ((param_2[1] <= local_48 && (local_58 < param_2[5] || local_58 == param_2[5])))) &&
       (param_2[2] <= local_40)) {
      pdVar3 = (double *)param_1[3];
      lVar4 = (longlong)iVar1 * 0x18;
      do {
        lVar4 = lVar4 + -0x18;
        local_58 = pdVar3[2] - param_1[2];
        local_60 = pdVar3[1] - param_1[1];
        local_68 = *pdVar3 - *param_1;
        local_78 = 0;
        uVar2 = FUN_144a3f41e(param_2,param_1,pdVar3,&local_68);
        if ((char)uVar2 != '\0') break;
        pdVar3 = pdVar3 + 3;
      } while (lVar4 != 0);
      goto LAB_1484866ad;
    }
  }
  uVar2 = 0;
LAB_1484866ad:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1484867bc FUN_1484867bc body=112 status=ok
// SIG undefined FUN_1484867bc(void)

void FUN_1484867bc(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 1U - iVar1) {
      FUN_1484868f4(param_1,iVar1);
    }
    FUN_1484868ad((longlong)iVar1 * 0x10 + *param_1,1U - iVar1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_14848697a(param_1,iVar1 + -1);
  FUN_1484869ca(param_1);
  return;
}



// FUNCTION 14848682c FUN_14848682c body=129 status=ok
// SIG undefined FUN_14848682c(void)

void FUN_14848682c(int *param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1[4] < 1) {
    iVar2 = param_1[8];
    FUN_148486a96(param_1 + 6);
  }
  else {
    iVar2 = -1;
    if (0 < (longlong)param_1[8]) {
      pcVar3 = *(char **)(param_1 + 6);
      lVar1 = 0;
      do {
        if (*pcVar3 == '\x01') {
          param_1[4] = param_1[4] + -1;
          iVar2 = (int)lVar1;
          break;
        }
        lVar1 = lVar1 + 1;
        pcVar3 = pcVar3 + 0x10;
      } while (param_1[8] != lVar1);
    }
  }
  *(int *)(*(longlong *)(param_1 + 6) + 4 + (longlong)*param_1 * 0x10) = iVar2;
  *(undefined1 *)(*(longlong *)(param_1 + 6) + (longlong)iVar2 * 0x10) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 6) + 4 + (longlong)iVar2 * 0x10) = 0xffffffff;
  return;
}



// FUNCTION 1484868ad FUN_1484868ad body=71 status=ok
// SIG undefined FUN_1484868ad(void)

void FUN_1484868ad(undefined1 *param_1,int param_2)

{
  void *_Dst;
  
  do {
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    _Dst = (void *)FUN_144a7d36f(0xc00);
    memset(_Dst,0,0xc00);
    *(void **)(param_1 + 8) = _Dst;
    param_1 = param_1 + 0x10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1484868f4 FUN_1484868f4 body=132 status=ok
// SIG undefined FUN_1484868f4(void)

void FUN_1484868f4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14848697a FUN_14848697a body=79 status=ok
// SIG undefined FUN_14848697a(void)

void FUN_14848697a(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x10);
  FUN_148486a08(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 1484869ca FUN_1484869ca body=62 status=ok
// SIG undefined FUN_1484869ca(void)

void FUN_1484869ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148486a38(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148486a08 FUN_148486a08 body=47 status=ok
// SIG undefined FUN_148486a08(void)

void FUN_148486a08(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar1 = plVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148486a38 FUN_148486a38 body=93 status=ok
// SIG undefined FUN_148486a38(void)

ulonglong FUN_148486a38(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148486a96 FUN_148486a96 body=60 status=ok
// SIG undefined FUN_148486a96(void)

void FUN_148486a96(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1484868f4(param_1,iVar1);
  }
  FUN_1484868ad((longlong)iVar1 * 0x10 + *param_1,1);
  return;
}



// FUNCTION 148486ad2 FUN_148486ad2 body=95 status=ok
// SIG undefined FUN_148486ad2(void)

undefined8 * FUN_148486ad2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146c8b4d6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148486b92(param_1,iVar1);
      FUN_148486c05(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148486b32 FUN_148486b32 body=95 status=ok
// SIG undefined FUN_148486b32(void)

undefined8 * FUN_148486b32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146c8b514(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148486c3a(param_1,iVar1);
      FUN_148486cad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148486b92 FUN_148486b92 body=115 status=ok
// SIG undefined FUN_148486b92(void)

void FUN_148486b92(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148486c05 FUN_148486c05 body=52 status=ok
// SIG undefined FUN_148486c05(void)

void FUN_148486c05(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148473e96(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148486c3a FUN_148486c3a body=115 status=ok
// SIG undefined FUN_148486c3a(void)

void FUN_148486c3a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148486cad FUN_148486cad body=52 status=ok
// SIG undefined FUN_148486cad(void)

void FUN_148486cad(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14834e804(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148486ce2 FUN_148486ce2 body=215 status=ok
// SIG undefined FUN_148486ce2(void)

void FUN_148486ce2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14aee3000;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x14];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x12];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148486dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 148486dba FUN_148486dba body=100 status=ok
// SIG undefined FUN_148486dba(void)

void FUN_148486dba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148486e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148486e1e FUN_148486e1e body=140 status=ok
// SIG undefined FUN_148486e1e(void)

void FUN_148486e1e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14aee4320;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x1d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_148486dba(param_1 + 0x11);
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148486ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148486eaa FUN_148486eaa body=200 status=ok
// SIG undefined FUN_148486eaa(void)

undefined8 *
FUN_148486eaa(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0x7fefffffffffffff;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  param_1[6] = 0xffefffffffffffff;
  param_1[7] = 0xffefffffffffffff;
  *(undefined2 *)(param_1 + 8) = 0;
  local_a8 = local_88;
  puVar2 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  local_98 = *(undefined8 *)(param_2 + 0xc0);
  local_90 = *(undefined4 *)(param_2 + 200);
  local_a0 = param_5;
  FUN_14848cc62(param_1,param_2,&local_98,param_3);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148486f73 FUN_148486f73 body=754 status=ok
// SIG undefined FUN_148486f73(void)

void FUN_148486f73(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined4 local_68;
  int iStack_64;
  undefined4 local_60;
  undefined1 local_5c [20];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146c1a132(*(undefined8 *)(param_1 + 0x208));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x208) + 0x38);
  if (iVar1 < 2) {
    uVar8 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30);
    uVar8 = *(undefined8 *)(lVar2 + 8);
    if (iVar1 != 2) {
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
      goto LAB_148486fc7;
    }
  }
  uVar7 = 0;
LAB_148486fc7:
  FUN_146c19dca(uVar8);
  FUN_146c19dca(uVar7);
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_144a127d2(local_78,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  uVar10 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar11 = 0;
  if ((uVar10 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar12 = 1;
    uVar5 = 1;
    if (1 < (int)uVar10) {
      uVar12 = uVar10;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar5) break;
      uVar6 = uVar5 >> 9;
      uVar9 = uVar5 & 0x1ff;
      uVar11 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar6] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar11 != uVar10) {
    do {
      FUN_148488623(param_1,uVar11,&local_68,local_5c);
      uVar4 = FUN_146c2f9e2(uVar8,&local_68);
      FUN_146c2f9e2(uVar7,local_5c);
      *(undefined4 *)(local_78[0] + (longlong)(int)uVar11 * 4) = uVar4;
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar10) {
        uVar12 = uVar10;
      }
      do {
        uVar5 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar5 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar5;
    } while (uVar11 != uVar10);
  }
  uVar10 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar11 = 0;
  if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar5 = 1;
    if (1 < (int)uVar10) {
      uVar12 = uVar10;
    }
    do {
      uVar11 = uVar12;
      if (uVar12 == uVar5) break;
      uVar6 = uVar5 >> 9;
      uVar9 = uVar5 & 0x1ff;
      uVar11 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar6] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar11 != uVar10) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
      uVar3 = *(undefined8 *)(lVar2 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      iStack_64 = (int)((ulonglong)uVar3 >> 0x20);
      _local_68 = CONCAT44(*(undefined4 *)(local_78[0] + (longlong)iStack_64 * 4),
                           *(undefined4 *)(local_78[0] + (longlong)(int)uVar3 * 4));
      local_60 = *(undefined4 *)
                  (local_78[0] +
                  (longlong)*(int *)(lVar2 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc) * 4);
      FUN_146c01580(uVar8,uVar11,&local_68,1);
      FUN_146c01580(uVar7,uVar11,&local_68,1);
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar10) {
        uVar12 = uVar10;
      }
      do {
        uVar5 = uVar12;
        if (uVar12 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar5 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar5;
    } while (uVar11 != uVar10);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148487266 FUN_148487266 body=726 status=ok
// SIG undefined FUN_148487266(void)

void FUN_148487266(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int iStack_84;
  undefined4 local_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_1 + 0x208) + 0xa8))();
  if (0 < (int)param_2) {
    uVar7 = 0;
    do {
      if ((longlong)uVar7 < (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
        uVar11 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + uVar7 * 8);
      }
      else {
        uVar11 = 0;
      }
      FUN_146c19cce(uVar11);
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_144a127d2(local_78,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
      uVar9 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
      uVar10 = 0;
      if ((uVar9 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
        uVar5 = 1;
        uVar6 = 1;
        if (1 < (int)uVar9) {
          uVar5 = uVar9;
        }
        do {
          uVar10 = uVar5;
          if (uVar5 == uVar6) break;
          uVar4 = uVar6 >> 9;
          uVar8 = uVar6 & 0x1ff;
          uVar10 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar4] +
                                             (ulonglong)uVar8 * 2) - 1U));
      }
LAB_1484873c7:
      if (uVar10 != uVar9) {
        FUN_1484884f7(param_1,uVar10,&local_88,uVar7 & 0xffffffff);
        uVar3 = FUN_146c2d0a4(uVar11,&local_88);
        *(undefined4 *)(local_78[0] + (longlong)(int)uVar10 * 4) = uVar3;
        uVar5 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar9) {
          uVar5 = uVar9;
        }
        uVar6 = uVar10;
        do {
          uVar10 = uVar5;
          if (uVar5 - 1 == uVar6) break;
          uVar10 = uVar6 + 1;
          uVar6 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        goto LAB_1484873c7;
      }
      uVar9 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
      uVar10 = 0;
      if ((uVar9 != 0) &&
         (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
        uVar5 = 1;
        uVar6 = 1;
        if (1 < (int)uVar9) {
          uVar5 = uVar9;
        }
        do {
          uVar10 = uVar5;
          if (uVar5 == uVar6) break;
          uVar4 = uVar6 >> 9;
          uVar8 = uVar6 & 0x1ff;
          uVar10 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar4] +
                                             (ulonglong)uVar8 * 2) - 1U));
      }
LAB_1484874ec:
      if (uVar10 != uVar9) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar10 >> 9) * 8);
        uVar2 = *(undefined8 *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
        iStack_84 = (int)((ulonglong)uVar2 >> 0x20);
        _local_88 = CONCAT44(*(undefined4 *)(local_78[0] + (longlong)iStack_84 * 4),
                             *(undefined4 *)(local_78[0] + (longlong)(int)uVar2 * 4));
        local_80 = *(undefined4 *)
                    (local_78[0] +
                    (longlong)*(int *)(lVar1 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc) * 4);
        FUN_146c01486(uVar11,uVar10,&local_88,1);
        uVar5 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar9) {
          uVar5 = uVar9;
        }
        uVar6 = uVar10;
        do {
          uVar10 = uVar5;
          if (uVar5 - 1 == uVar6) break;
          uVar10 = uVar6 + 1;
          uVar6 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        goto LAB_1484874ec;
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_2);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848753d FUN_14848753d body=1664 status=ok
// SIG undefined FUN_14848753d(void)

void FUN_14848753d(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 auStack_f8 [36];
  undefined4 auStack_d4 [3];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xa0))();
    uVar15 = (ulonglong)uVar6;
    uVar23 = 0;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      puVar24 = &DAT_14cb4be20;
      uVar23 = 0;
      do {
        cVar4 = FUN_146bce360(*(undefined8 *)(param_1 + 0x208),*puVar24);
        if (cVar4 == '\0') goto LAB_1484875b2;
        uVar23 = uVar23 + 1;
        puVar24 = puVar24 + 1;
      } while (uVar23 != 8);
      uVar23 = 8;
    }
LAB_1484875b2:
    if ((int)uVar23 < (int)uVar6) {
      uVar15 = uVar23 & 0xffffffff;
    }
    if (0 < (int)uVar15) {
      uVar23 = 0;
      do {
        if ((longlong)uVar23 < (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
          uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + uVar23 * 8)
          ;
        }
        else {
          uVar9 = 0;
        }
        FUN_1484886d3(param_1,uVar9);
        uVar23 = uVar23 + 1;
      } while (uVar15 != uVar23);
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    if (0 < iVar7) {
      lVar12 = 0;
      do {
        if (lVar12 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar12 * 8)
          ;
        }
        else {
          uVar9 = 0;
        }
        FUN_148488b1e(param_1,uVar9);
        lVar12 = lVar12 + 1;
        iVar7 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
      } while (lVar12 < iVar7);
    }
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_50 = param_1;
    FUN_146bc8e62();
    if (0 < (int)uVar15) {
      uVar23 = 0;
      do {
        if ((longlong)uVar23 < (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
          lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + uVar23 * 8);
        }
        else {
          lVar12 = 0;
        }
        lVar8 = FUN_146bce3f6();
        uVar6 = *(int *)(lVar12 + 8) * 0x200 + *(int *)(lVar12 + 0xc);
        uVar10 = 0;
        if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x10) - 1U))) {
          uVar10 = 1;
          uVar17 = 1;
          if (1 < (int)uVar6) {
            uVar10 = (ulonglong)uVar6;
          }
          do {
            uVar22 = uVar17;
            if ((uint)uVar10 == uVar22) goto LAB_1484877e5;
            uVar17 = uVar22 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x10))[uVar22 >> 9] +
                                               (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
          uVar10 = (ulonglong)uVar22;
        }
LAB_1484877e5:
        uVar17 = (uint)uVar10;
        if (uVar17 != uVar6) {
          uVar22 = *(uint *)(*(longlong *)(*(longlong *)(lVar12 + 0x60) + (uVar10 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
          if (uVar22 != 0xffffffff) {
            lVar16 = *(longlong *)
                      (*(longlong *)(lVar12 + 0x48) + (ulonglong)((uint)(uVar10 >> 5) & 0x3fffff8));
            uVar19 = (ulonglong)((uVar17 & 0xff) << 3);
            uVar1 = *(undefined4 *)(lVar16 + 4 + uVar19);
            uVar20 = (ulonglong)(uVar22 >> 5 & 0x3fffff8);
            uVar18 = (ulonglong)((uVar22 & 0xff) << 3);
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + uVar20) + uVar18) =
                 *(undefined4 *)(lVar16 + uVar19);
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + uVar20) + 4 + uVar18) =
                 uVar1;
          }
          uVar22 = uVar17 + 1;
          if ((int)(uVar17 + 1) < (int)uVar6) {
            uVar22 = uVar6;
          }
          do {
            iVar7 = (int)uVar10;
            uVar10 = (ulonglong)uVar22;
            if (uVar22 - 1 == iVar7) break;
            uVar17 = iVar7 + 1;
            uVar10 = (ulonglong)uVar17;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar12 + 0x10) +
                                                 (ulonglong)(uVar17 >> 9) * 8) +
                                               (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
          goto LAB_1484877e5;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar15);
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    lVar12 = *(longlong *)(param_1 + 0x208);
    if (0 < iVar7) {
      if (*(int *)(lVar12 + 0x38) < 1) {
        lVar8 = 0;
      }
      else {
        lVar8 = **(longlong **)(lVar12 + 0x30);
      }
      uVar17 = *(int *)(lVar8 + 8) * 0x200 + *(int *)(lVar8 + 0xc);
      uVar6 = 0;
      if ((uVar17 != 0) &&
         (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x10) - 1U))) {
        uVar22 = 1;
        uVar11 = 1;
        if (1 < (int)uVar17) {
          uVar22 = uVar17;
        }
        do {
          uVar6 = uVar22;
          if (uVar22 == uVar11) break;
          uVar21 = uVar11 >> 9;
          uVar14 = uVar11 & 0x1ff;
          uVar6 = uVar11;
          uVar11 = uVar11 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x10))[uVar21] +
                                             (ulonglong)uVar14 * 2) - 1U));
      }
      if (uVar6 != uVar17) {
        do {
          uVar22 = *(uint *)(*(longlong *)
                              (*(longlong *)(lVar8 + 0x60) + (ulonglong)(uVar6 >> 9) * 8) +
                            (ulonglong)(uVar6 & 0x1ff) * 4);
          if (uVar22 != 0xffffffff) {
            lVar12 = *(longlong *)(lVar8 + 0x48);
            lVar16 = 0;
            do {
              uVar11 = uVar6 * 3 + (int)lVar16;
              *(undefined4 *)((longlong)&local_48 + lVar16 * 4) =
                   *(undefined4 *)
                    (*(longlong *)(lVar12 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 3);
            if (*(char *)(param_1 + 0x70) == '\x01') {
              lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar22 >> 9) * 8);
              *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar22 & 0x1ff) * 0xc) = (undefined4)local_40
              ;
              *(undefined8 *)(lVar12 + (ulonglong)(uVar22 & 0x1ff) * 0xc) = local_48;
            }
          }
          uVar22 = uVar6 + 1;
          if ((int)(uVar6 + 1) < (int)uVar17) {
            uVar22 = uVar17;
          }
          do {
            uVar11 = uVar22;
            if (uVar22 - 1 == uVar6) break;
            uVar6 = uVar6 + 1;
            uVar11 = uVar6;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar8 + 0x10) +
                                                 (ulonglong)(uVar6 >> 9) * 8) +
                                               (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
          uVar6 = uVar11;
        } while (uVar6 != uVar17);
        lVar12 = *(longlong *)(param_1 + 0x208);
      }
    }
    uVar6 = *(uint *)(lVar12 + 0x38);
    if (((((0 < (int)uVar6) && (uVar6 != 1)) &&
         (plVar2 = *(longlong **)(lVar12 + 0x30), *plVar2 != 0)) &&
        ((2 < uVar6 && (plVar2[1] != 0)))) && (plVar2[2] != 0)) {
      uVar9 = FUN_146bce3f6(lVar12,DAT_14cb4bdf8);
      local_40 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be00);
      local_48 = uVar9;
      lVar12 = 1;
      bVar5 = false;
      do {
        if (lVar12 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar12 * 8);
        }
        else {
          lVar8 = 0;
        }
        uVar23 = 0;
        uVar6 = *(int *)(lVar8 + 8) * 0x200 + *(int *)(lVar8 + 0xc);
        if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x10) - 1U))) {
          uVar23 = 1;
          uVar17 = 1;
          if (1 < (int)uVar6) {
            uVar23 = (ulonglong)uVar6;
          }
          do {
            uVar22 = uVar17;
            if ((uint)uVar23 == uVar22) goto LAB_148487a7a;
            uVar17 = uVar22 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x10))[uVar22 >> 9] +
                                               (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
          uVar23 = (ulonglong)uVar22;
        }
LAB_148487a7a:
        if ((uint)uVar23 != uVar6) {
          lVar12 = (&local_50)[lVar12];
          do {
            uVar17 = (uint)uVar23;
            iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x60) + (uVar23 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
            if (iVar7 != -1) {
              lVar16 = *(longlong *)(lVar8 + 0x48);
              lVar13 = 0;
              do {
                uVar22 = uVar17 * 3 + (int)lVar13;
                auStack_d4[lVar13] =
                     *(undefined4 *)
                      (*(longlong *)(lVar16 + (ulonglong)(uVar22 >> 9) * 8) +
                      (ulonglong)(uVar22 & 0x1ff) * 4);
                lVar13 = lVar13 + 1;
              } while (lVar13 != 3);
              lVar16 = 0;
              do {
                uVar22 = iVar7 * 3 + (int)lVar16;
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x20) + (ulonglong)(uVar22 >> 9) * 8) +
                 (ulonglong)(uVar22 & 0x1ff) * 4) = auStack_d4[lVar16];
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
            }
            uVar22 = uVar17 + 1;
            if ((int)(uVar17 + 1) < (int)uVar6) {
              uVar22 = uVar6;
            }
            do {
              iVar7 = (int)uVar23;
              uVar23 = (ulonglong)uVar22;
              if (uVar22 - 1 == iVar7) break;
              uVar17 = iVar7 + 1;
              uVar23 = (ulonglong)uVar17;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar8 + 0x10) +
                                                   (ulonglong)(uVar17 >> 9) * 8) +
                                                 (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
          } while ((uint)uVar23 != uVar6);
        }
        lVar12 = 2;
        bVar3 = !bVar5;
        bVar5 = true;
      } while (bVar3);
    }
    FUN_146bc8622(&local_c8);
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148487bbe FUN_148487bbe body=381 status=ok
// SIG undefined FUN_148487bbe(void)

void FUN_148487bbe(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1401f66f6(param_2,DAT_14c996af0);
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a127d2(local_48 + 2,uVar2,1);
  FUN_144a127d2(local_48,uVar2,1);
  if (0 < *(int *)(param_2 + 0x498)) {
    lVar3 = 0;
    do {
      *(undefined4 *)(local_48[2] + lVar3 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x490) + lVar3 * 4);
      *(undefined4 *)(local_48[0] + lVar3 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x450) + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 0x498));
  }
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar3 * 8);
      lVar4 = (longlong)
              *(int *)(*(longlong *)(param_2 + 400) + (longlong)*(int *)(lVar1 + 0x220) * 4);
      *(undefined4 *)(local_48[2] + lVar4 * 4) = *(undefined4 *)(lVar1 + 0x170);
      *(undefined4 *)(local_48[0] + lVar4 * 4) = *(undefined4 *)(lVar1 + 0x50);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  FUN_146ebaf18(param_2,local_48 + 2,local_48,0);
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar3 * 8);
      FUN_148493004(lVar1 + 0x230,lVar1,
                    *(undefined4 *)
                     (*(longlong *)(param_2 + 400) + (longlong)*(int *)(lVar1 + 0x220) * 4),param_2)
      ;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  FUN_143b63a6b(param_2,0,0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148487d3c FUN_148487d3c body=245 status=ok
// SIG undefined FUN_148487d3c(void)

void FUN_148487d3c(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  FUN_14582ed12();
  if (0 < (int)param_2) {
    uVar6 = 8;
    if (param_2 < 8) {
      uVar6 = param_2;
    }
    uVar5 = 0;
    do {
      cVar2 = FUN_146bce360(*(undefined8 *)(param_1 + 0x208),
                            *(undefined8 *)((longlong)&DAT_14cb4be20 + uVar5));
      if (cVar2 == '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x208);
        puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14aee5bc0;
        puVar3[2] = param_1;
        FUN_14582f01a(puVar3 + 3);
        FUN_1484a34aa(puVar3);
        FUN_146c18272(uVar1,*(undefined8 *)((longlong)&DAT_14cb4be20 + uVar5),puVar3);
      }
      uVar5 = uVar5 + 8;
    } while (uVar6 << 3 != uVar5);
    if (7 < (int)param_2) {
      return;
    }
  }
  lVar4 = (longlong)(int)param_2;
  puVar3 = &DAT_14cb4be20 + lVar4;
  do {
    lVar4 = lVar4 + 1;
    FUN_146c3d890(*(undefined8 *)(param_1 + 0x208),*puVar3);
    puVar3 = puVar3 + 1;
  } while ((int)lVar4 != 8);
  return;
}



// FUNCTION 148487e31 FUN_148487e31 body=537 status=ok
// SIG undefined FUN_148487e31(void)

void FUN_148487e31(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = DAT_14c84636c;
  local_48 = DAT_14c846364;
  FUN_146c01e94();
  FUN_14582ed12(param_1);
  FUN_14582ed9a(*(undefined8 *)(param_1 + 0x208));
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14aee5cd0;
  puVar2[2] = param_1;
  FUN_14582f01a(puVar2 + 3);
  FUN_1484a4172(puVar2);
  FUN_146c18272(uVar1,DAT_14cb4bdf0,puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14aee5de0;
  puVar2[2] = param_1;
  FUN_14582f01a(puVar2 + 3);
  FUN_1484a4e42(puVar2);
  FUN_146c18272(uVar1,DAT_14cb4bdf8,puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14aee5de0;
  puVar2[2] = param_1;
  FUN_14582f01a(puVar2 + 3);
  FUN_1484a4e42(puVar2);
  FUN_146c18272(uVar1,DAT_14cb4be00,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14aee5fc0;
  FUN_1484a6020(puVar2 + 3);
  puVar2[2] = param_1;
  FUN_14848804c(puVar2,0);
  *puVar2 = &PTR_FUN_14aee5ef0;
  FUN_14848804c(puVar2,1);
  FUN_146c18272(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be08,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14aee5fc0;
  FUN_1484a6020(puVar2 + 3);
  puVar2[2] = param_1;
  FUN_14848804c(puVar2,0);
  *puVar2 = &PTR_FUN_14aee5ef0;
  FUN_14848804c(puVar2,1);
  FUN_146c18272(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be10,puVar2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_148487d3c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848804c FUN_14848804c body=94 status=ok
// SIG undefined FUN_14848804c(void)

void FUN_14848804c(longlong param_1,undefined1 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1484a62c6(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x140) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x144));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined1 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3) = param_2
        ;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 1484880aa FUN_1484880aa body=832 status=ok
// SIG undefined FUN_1484880aa(void)

void FUN_1484880aa(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined4 local_70 [6];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),DAT_14cb4bdf0);
  lVar3 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),DAT_14cb4bdf8);
  lVar4 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be00);
  uVar9 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar11 = 0;
  if ((uVar9 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar7 = 1;
    uVar5 = 1;
    if (1 < (int)uVar9) {
      uVar7 = uVar9;
    }
    do {
      uVar11 = uVar7;
      if (uVar7 == uVar5) break;
      uVar8 = uVar5 >> 9;
      uVar10 = uVar5 & 0x1ff;
      uVar11 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar8] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  local_71 = param_2;
  if (uVar11 != uVar9) {
    do {
      if (*(char *)(param_1 + 0x70) == '\0') {
        local_50 = DAT_14c846378;
        local_58 = DAT_14c846370;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar11 >> 9) * 8);
        local_50 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
        local_58 = *(undefined8 *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      }
      FUN_146bb4800(&local_58,local_70 + 3,local_70);
      lVar6 = 0;
      do {
        uVar7 = uVar11 * 3 + (int)lVar6;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
         (ulonglong)(uVar7 & 0x1ff) * 4) = local_70[lVar6 + 3];
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      lVar6 = 0;
      do {
        uVar7 = uVar11 * 3 + (int)lVar6;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
         (ulonglong)(uVar7 & 0x1ff) * 4) = local_70[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      lVar6 = 0;
      do {
        *(undefined4 *)
         (lVar6 + *(longlong *)
                   (*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar11 >> 7 & 0x7fffff) * 8) +
                  (ulonglong)((uVar11 & 0x7f) << 4)) =
             *(undefined4 *)((longlong)&DAT_14cb4bdd0 + lVar6);
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x10);
      uVar7 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar7 = uVar9;
      }
      do {
        uVar5 = uVar7;
        if (uVar7 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar5 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar5;
    } while (uVar11 != uVar9);
  }
  lVar2 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be08);
  uVar1 = local_71;
  uVar9 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar11 = 0;
  if ((uVar9 != 0) &&
     (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar5 = 1;
    if (1 < (int)uVar9) {
      uVar7 = uVar9;
    }
    do {
      uVar11 = uVar7;
      if (uVar7 == uVar5) break;
      uVar8 = uVar5 >> 9;
      uVar10 = uVar5 & 0x1ff;
      uVar11 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar8] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  if (uVar11 != uVar9) {
    do {
      local_58 = CONCAT71(local_58._1_7_,uVar1);
      FUN_1484a639e(lVar2 + 0x18,&local_58,uVar11);
      uVar7 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar9) {
        uVar7 = uVar9;
      }
      do {
        uVar5 = uVar7;
        if (uVar7 - 1 == uVar11) break;
        uVar11 = uVar11 + 1;
        uVar5 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar11 >> 9) * 8) +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      uVar11 = uVar5;
    } while (uVar11 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484883eb FUN_1484883eb body=111 status=ok
// SIG undefined FUN_1484883eb(void)

void FUN_1484883eb(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_4 < 8) {
    lVar1 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),(&DAT_14cb4be20)[param_4]);
    if (lVar1 != 0) {
      uVar2 = (ulonglong)(param_2 >> 5 & 0x3fffff8);
      uVar3 = (ulonglong)((param_2 & 0xff) << 3);
      *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2) + uVar3) = (int)param_3;
      *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2) + 4 + uVar3) =
           (int)((ulonglong)param_3 >> 0x20);
    }
  }
  return;
}



// FUNCTION 14848845a FUN_14848845a body=157 status=ok
// SIG undefined FUN_14848845a(void)

void FUN_14848845a(longlong param_1,uint param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (0 < (int)param_4) {
    uVar5 = 8;
    if (param_4 < 8) {
      uVar5 = param_4;
    }
    uVar3 = (ulonglong)(param_2 * 2 & 0x1fe);
    uVar2 = 0;
    uVar4 = (ulonglong)(((param_2 & 0x7fffffff) >> 8) << 3);
    do {
      lVar1 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),
                            *(undefined8 *)((longlong)&DAT_14cb4be20 + uVar2));
      if (lVar1 != 0) {
        *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar4) + uVar3 * 4) = (int)param_3;
        *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar4) + (uVar3 + 1) * 4) =
             (int)((ulonglong)param_3 >> 0x20);
      }
      uVar2 = uVar2 + 8;
    } while (uVar5 << 3 != uVar2);
  }
  return;
}



// FUNCTION 1484884f7 FUN_1484884f7 body=124 status=ok
// SIG undefined FUN_1484884f7(void)

void FUN_1484884f7(longlong param_1,uint param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_4 < 8) {
    lVar1 = FUN_146c3d58a(*(undefined8 *)(param_1 + 0x208),(&DAT_14cb4be20)[param_4]);
    if (lVar1 != 0) {
      uVar2 = (ulonglong)(param_2 >> 5 & 0x3fffff8);
      uVar3 = (ulonglong)((param_2 & 0xff) << 3);
      *(undefined4 *)param_3 =
           *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2) + uVar3);
      *(undefined4 *)((longlong)param_3 + 4) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar2) + 4 + uVar3);
    }
  }
  else {
    *param_3 = DAT_14c84635c;
  }
  return;
}



// FUNCTION 148488573 FUN_148488573 body=176 status=ok
// SIG undefined FUN_148488573(void)

void FUN_148488573(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar1 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208),DAT_14cb4bdf8);
  lVar2 = FUN_146bce3f6(*(undefined8 *)(param_1 + 0x208));
  lVar3 = 0;
  do {
    uVar4 = param_2 * 3 + (int)lVar3;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
     (ulonglong)(uVar4 & 0x1ff) * 4) = *(undefined4 *)(param_3 + lVar3 * 4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar1 = 0;
  do {
    uVar4 = param_2 * 3 + (int)lVar1;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
     (ulonglong)(uVar4 & 0x1ff) * 4) = *(undefined4 *)(param_4 + lVar1 * 4);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  return;
}



// FUNCTION 148488623 FUN_148488623 body=176 status=ok
// SIG undefined FUN_148488623(void)

void FUN_148488623(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar1 = FUN_146c3d58a(*(undefined8 *)(param_1 + 0x208),DAT_14cb4bdf8);
  lVar2 = FUN_146c3d58a(*(undefined8 *)(param_1 + 0x208));
  lVar3 = 0;
  do {
    uVar4 = param_2 * 3 + (int)lVar3;
    *(undefined4 *)(param_3 + lVar3 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
          (ulonglong)(uVar4 & 0x1ff) * 4);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar1 = 0;
  do {
    uVar4 = param_2 * 3 + (int)lVar1;
    *(undefined4 *)(param_4 + lVar1 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
          (ulonglong)(uVar4 & 0x1ff) * 4);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  return;
}



// FUNCTION 1484886d3 FUN_1484886d3 body=1098 status=ok
// SIG undefined FUN_1484886d3(void)

void FUN_1484886d3(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_168 [32];
  longlong *local_148;
  byte local_135;
  uint local_134;
  int local_130;
  uint local_12c;
  longlong local_128;
  longlong local_120;
  int local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  longlong *local_100;
  longlong local_f8 [3];
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [3];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_100 = local_c8 + 2;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f8[2] = 0;
  uStack_e0 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  uVar9 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
  local_108 = param_1;
  local_c8[2] = param_2;
  if (0 < (int)uVar9) {
    uVar10 = 0;
    local_12c = uVar9;
    do {
      if (((int)uVar10 < (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24)) &&
         ((ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(uVar10 >> 9) * 8) +
                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        local_148 = local_f8;
        FUN_146c13054(param_1,uVar10,local_c8,&local_d8);
        if (0 < (int)uStack_d0) {
          lVar11 = 0;
          local_130 = 0;
          do {
            iVar3 = local_130;
            iVar1 = *(int *)(local_d8 + lVar11 * 4);
            local_135 = *(byte *)(local_f8[0] + lVar11);
            uVar4 = FUN_1484a6838(&local_108,uVar10,
                                  *(undefined4 *)(local_c8[0] + (longlong)local_130 * 4));
            lVar12 = *(longlong *)
                      (*(longlong *)(local_c8[2] + 0x48) + (ulonglong)(uVar4 >> 5 & 0x3fffff8));
            uVar7 = (ulonglong)((uVar4 & 0xff) << 3);
            fVar17 = *(float *)(lVar12 + uVar7);
            fVar19 = *(float *)(lVar12 + 4 + uVar7);
            bVar13 = (longlong)uStack_e0 < 0;
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            if (bVar13) {
              FUN_14481578e(local_f8 + 2,0);
            }
            local_130 = iVar1 + iVar3;
            if (1 < iVar1) {
              lVar12 = (longlong)(iVar3 + 1);
              local_128 = (longlong)local_130;
              local_134 = 0;
              uVar5 = uVar4;
              do {
                uVar2 = *(undefined4 *)(local_c8[0] + lVar12 * 4);
                uVar9 = FUN_1484a6838(&local_108,uVar10,uVar2);
                if (uVar9 == uVar5) {
LAB_1484888da:
                  fVar16 = fVar17;
                  fVar18 = fVar19;
                  uVar9 = uVar5;
                  if ((local_134 & 1) != 0) goto LAB_1484889ce;
                }
                else {
                  lVar8 = *(longlong *)
                           (*(longlong *)(local_c8[2] + 0x48) + (ulonglong)(uVar9 >> 5 & 0x3fffff8))
                  ;
                  uVar6 = (uVar9 & 0xff) << 3;
                  fVar16 = *(float *)(lVar8 + (ulonglong)uVar6);
                  fVar18 = *(float *)(lVar8 + 4 + (ulonglong)uVar6);
                  fVar15 = fVar16 - fVar17;
                  uVar14 = -(uint)(-fVar15 <= fVar15);
                  if (((float)(~uVar14 & (uint)-fVar15 | (uint)fVar15 & uVar14) < 1e-06) &&
                     (fVar15 = fVar18 - fVar19, uVar14 = -(uint)(-fVar15 <= fVar15),
                     (float)(~uVar14 & (uint)-fVar15 | (uint)fVar15 & uVar14) < 1e-06))
                  goto LAB_1484888da;
                  local_134 = (uint)CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
                  if (0 < (int)uStack_e0) {
                    local_120 = local_f8[2];
                    local_118 = (int)uStack_e0;
                    (**(code **)(*param_1 + 0x48))(param_1,uVar10,&local_120,local_110);
                    bVar13 = (longlong)uStack_e0 < 0;
                    uStack_e0 = uStack_e0 & 0xffffffff00000000;
                    if (bVar13) {
                      FUN_14481578e(local_f8 + 2,0);
                    }
                  }
LAB_1484889ce:
                  uVar7 = uStack_e0;
                  lVar8 = (longlong)(int)uStack_e0;
                  uVar5 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar5);
                  if (uStack_e0._4_4_ < uVar5) {
                    FUN_1446f48e2(local_f8 + 2,uVar7 & 0xffffffff);
                  }
                  *(undefined4 *)(local_f8[2] + lVar8 * 4) = uVar2;
                  fVar17 = fVar16;
                  fVar19 = fVar18;
                  uVar5 = uVar9;
                }
                uVar9 = local_12c;
                lVar12 = lVar12 + 1;
              } while (lVar12 < local_128);
              if ((local_134 & 1) != 0) {
                if ((0 < (int)uStack_e0) && ((uVar5 == uVar4 & local_135) == 0)) {
                  local_120 = local_f8[2];
                  local_118 = (int)uStack_e0;
                  (**(code **)(*param_1 + 0x48))(param_1,uVar10,&local_120,local_110);
                }
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < (int)uStack_d0);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_f8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148488b1e FUN_148488b1e body=1253 status=ok
// SIG undefined FUN_148488b1e(void)

void FUN_148488b1e(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_198 [32];
  longlong *local_178;
  byte local_169;
  uint local_168;
  int local_164;
  ulonglong local_160;
  longlong local_158;
  undefined8 local_150;
  float local_148;
  undefined1 local_13c [8];
  float local_134 [3];
  longlong *local_128;
  longlong *local_120;
  longlong local_118 [3];
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_120 = local_e8 + 2;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_118[2] = 0;
  uStack_100 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  uVar7 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
  local_128 = param_1;
  local_e8[2] = param_2;
  if (0 < (int)uVar7) {
    uVar8 = 0;
    local_168 = uVar7;
    do {
      if (((int)uVar8 < (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24)) &&
         ((ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(uVar8 >> 9) * 8) +
                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        local_178 = local_118;
        FUN_146c13054(param_1,uVar8,local_e8,&local_f8);
        if (0 < (int)uStack_f0) {
          lVar10 = 0;
          iVar11 = 0;
          do {
            iVar2 = *(int *)(local_f8 + lVar10 * 4);
            bVar1 = *(byte *)(local_118[0] + lVar10);
            local_160 = FUN_1484a6928(&local_128,uVar8,
                                      *(undefined4 *)(local_e8[0] + (longlong)iVar11 * 4));
            lVar13 = *(longlong *)(local_e8[2] + 0x48);
            lVar5 = 0;
            do {
              uVar9 = (int)local_160 * 3 + (int)lVar5;
              local_134[lVar5] =
                   *(float *)(*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 9) * 8) +
                             (ulonglong)(uVar9 & 0x1ff) * 4);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 3);
            bVar15 = (longlong)uStack_100 < 0;
            uStack_100 = uStack_100 & 0xffffffff00000000;
            if (bVar15) {
              FUN_14481578e(local_118 + 2,0);
            }
            iVar12 = iVar2 + iVar11;
            if (1 < iVar2) {
              lVar13 = (longlong)(iVar11 + 1);
              local_158 = (longlong)iVar12;
              bVar15 = false;
              uVar14 = local_160 & 0xffffffff;
              fVar19 = local_134[1];
              fVar21 = local_134[2];
              fVar23 = local_134[0];
              local_169 = bVar1;
              local_164 = iVar12;
              do {
                uVar3 = *(undefined4 *)(local_e8[0] + lVar13 * 4);
                uVar7 = FUN_1484a6928(&local_128,uVar8,uVar3);
                if (uVar7 == (uint)uVar14) {
LAB_148488d5b:
                  fVar18 = fVar19;
                  fVar20 = fVar21;
                  fVar22 = fVar23;
                  if (bVar15) goto LAB_148488e97;
                }
                else {
                  lVar5 = *(longlong *)(local_e8[2] + 0x48);
                  lVar6 = 0;
                  do {
                    uVar9 = uVar7 * 3 + (int)lVar6;
                    *(undefined4 *)((longlong)&local_150 + lVar6 * 4) =
                         *(undefined4 *)
                          (*(longlong *)(lVar5 + (ulonglong)(uVar9 >> 9) * 8) +
                          (ulonglong)(uVar9 & 0x1ff) * 4);
                    fVar20 = local_148;
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != 3);
                  fVar22 = (float)local_150;
                  fVar18 = local_150._4_4_;
                  fVar17 = (float)local_150 - fVar23;
                  uVar9 = -(uint)(-fVar17 <= fVar17);
                  if ((((float)(~uVar9 & (uint)-fVar17 | (uint)fVar17 & uVar9) < 1e-06) &&
                      (fVar17 = local_150._4_4_ - fVar19, uVar9 = -(uint)(-fVar17 <= fVar17),
                      (float)(~uVar9 & (uint)-fVar17 | (uint)fVar17 & uVar9) < 1e-06)) &&
                     (fVar17 = local_148 - fVar21, uVar9 = -(uint)(-fVar17 <= fVar17),
                     (float)(~uVar9 & (uint)-fVar17 | (uint)fVar17 & uVar9) < 1e-06))
                  goto LAB_148488d5b;
                  bVar15 = true;
                  if (0 < (int)(float)uStack_100) {
                    local_150 = local_118[2];
                    local_148 = (float)uStack_100;
                    (**(code **)(*param_1 + 0x48))(param_1,uVar8,&local_150,local_13c);
                    bVar16 = (longlong)uStack_100 < 0;
                    uStack_100 = uStack_100 & 0xffffffff00000000;
                    if (bVar16) {
                      FUN_14481578e(local_118 + 2,0);
                    }
                  }
                  uVar14 = (ulonglong)uVar7;
LAB_148488e97:
                  uVar4 = uStack_100;
                  lVar5 = (longlong)(int)(float)uStack_100;
                  uVar7 = (int)(float)uStack_100 + 1;
                  uStack_100 = CONCAT44(uStack_100._4_4_,uVar7);
                  if (uStack_100._4_4_ < uVar7) {
                    FUN_1446f48e2(local_118 + 2,uVar4 & 0xffffffff);
                  }
                  *(undefined4 *)(local_118[2] + lVar5 * 4) = uVar3;
                  fVar19 = fVar18;
                  fVar21 = fVar20;
                  fVar23 = fVar22;
                }
                iVar12 = local_164;
                uVar7 = local_168;
                lVar13 = lVar13 + 1;
              } while (lVar13 < local_158);
              if (bVar15) {
                if ((0 < (int)(float)uStack_100) &&
                   (((int)uVar14 == (int)local_160 & local_169) == 0)) {
                  local_150 = local_118[2];
                  local_148 = (float)uStack_100;
                  (**(code **)(*param_1 + 0x48))(param_1,uVar8,&local_150,local_13c);
                }
              }
            }
            iVar11 = iVar12;
            lVar10 = lVar10 + 1;
          } while (lVar10 < (int)uStack_f0);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148489004 FUN_148489004 body=2162 status=ok
// SIG undefined FUN_148489004(void)

void FUN_148489004(longlong param_1,char param_2,byte param_3,byte param_4,float param_5)

{
  int iVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_238 [45];
  byte local_20b;
  char local_20a;
  byte local_209;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  float afStack_1dc [6];
  int local_1c4 [3];
  undefined8 local_1b8;
  char *local_1b0;
  longlong *plStack_1a8;
  double *local_1a0;
  longlong *local_198;
  undefined1 *local_190;
  undefined8 *local_188;
  longlong local_180;
  longlong local_178;
  undefined8 uStack_170;
  double local_168;
  undefined **local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_118;
  longlong local_108;
  longlong local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_c0;
  longlong local_90;
  longlong local_80;
  char local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_20b = param_3 & param_4;
  if (*(int *)(*(longlong *)(param_1 + 0x208) + 0x38) < 1) {
    lVar19 = 0;
  }
  else {
    lVar19 = **(longlong **)(*(longlong *)(param_1 + 0x208) + 0x30);
  }
  local_209 = param_3 ^ 1 | param_4;
  local_20a = param_2;
  local_71 = param_2;
  FUN_146c39810(lVar19);
  uVar21 = 1;
  if ((local_20b != 0) && (uVar21 = 0, *(longlong *)(param_1 + 0x208) != 0)) {
    puVar9 = &DAT_14cb4be20;
    uVar21 = 0;
    do {
      cVar3 = FUN_146bce360(*(undefined8 *)(param_1 + 0x208),*puVar9);
      if (cVar3 == '\0') goto LAB_14848909b;
      uVar21 = uVar21 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar21 != 8);
    uVar21 = 8;
  }
LAB_14848909b:
  FUN_148487266(param_1,uVar21 & 0xffffffff);
  lVar8 = *(longlong *)(param_1 + 0x208);
  if (*(int *)(lVar8 + 0x28) < 1) {
    uVar18 = 0;
  }
  else {
    uVar18 = **(undefined8 **)(lVar8 + 0x20);
  }
  local_80 = FUN_146bce3f6(lVar8,DAT_14cb4be10);
  if (local_20b != 0) {
    FUN_14582f100(&local_108,param_1);
    FUN_148486f73(param_1);
    local_160 = &PTR_FUN_149f36300;
    local_150 = 0x3eb0c6f7a0000000;
    local_148 = 0;
    local_118 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    local_12c = 0;
    uStack_124 = 0;
    local_158 = param_1;
    FUN_146c3d996();
    FUN_146c17e98(&local_108,lVar19);
    local_168 = cos((double)param_5 * 0.017453292519943295);
    local_178 = 0;
    uStack_170 = 0;
    local_180 = param_1;
    FUN_146c38358(&local_180);
    local_1b8 = &local_80;
    local_188 = &local_1b8;
    local_1b0 = &local_71;
    local_190 = &LAB_143b69d96;
    plStack_1a8 = &local_180;
    local_1a0 = &local_168;
    local_198 = &local_108;
    FUN_146c2fed0(lVar19,&local_190,0);
    local_1b0 = (char *)0x0;
    plStack_1a8 = (longlong *)0x0;
    local_1b8 = (longlong *)param_1;
    FUN_146c383fc(&local_1b8,lVar19,1,1);
    uVar4 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar7 = 0;
    if ((uVar4 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar21 = 1;
      uVar20 = 1;
      if (1 < (int)uVar4) {
        uVar20 = uVar4;
      }
      do {
        uVar5 = (uint)uVar21;
        uVar7 = uVar20;
        if (uVar20 == uVar5) break;
        uVar6 = uVar21 >> 9;
        uVar21 = (ulonglong)(uVar5 + 1);
        uVar7 = uVar5;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar6] +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    }
joined_r0x000148489211:
    uVar20 = uVar7;
    if (uVar20 != uVar4) {
      uVar7 = uVar20 * 3 + 2;
      uVar15 = (ulonglong)(uVar7 >> 9);
      lVar8 = *(longlong *)(lVar19 + 0x78);
      uVar12 = (ulonglong)(uVar7 & 0x1ff);
      uVar7 = uVar20 * 3 + 1;
      uVar17 = (ulonglong)(uVar7 >> 9);
      uVar16 = (ulonglong)(uVar7 & 0x1ff);
      uVar6 = (ulonglong)(uVar20 * 3 >> 9);
      uVar21 = (ulonglong)(uVar20 * 3 & 0x1ff);
      local_1c4[0] = *(int *)(*(longlong *)(lVar8 + uVar6 * 8) + uVar21 * 4);
      local_1c4[1] = *(undefined4 *)(*(longlong *)(lVar8 + uVar17 * 8) + uVar16 * 4);
      local_1c4[2] = *(undefined4 *)(*(longlong *)(lVar8 + uVar15 * 8) + uVar12 * 4);
      if ((local_20a == '\0') ||
         (*(char *)(*(longlong *)(*(longlong *)(local_80 + 0x20) + (ulonglong)(uVar20 >> 9) * 8) +
                   (ulonglong)(uVar20 & 0x1ff)) == '\x01')) {
        lVar8 = 0;
        do {
          iVar1 = local_1c4[lVar8];
          lVar13 = (longlong)iVar1;
          afStack_1dc[3] = (float)*(double *)((longlong)local_1b0 + lVar13 * 0x18);
          afStack_1dc[4] = (float)*(double *)((longlong)local_1b0 + 8 + lVar13 * 0x18);
          afStack_1dc[5] = (float)*(double *)((longlong)local_1b0 + 0x10 + lVar13 * 0x18);
          lVar13 = 0;
          do {
            uVar7 = iVar1 * 3 + (int)lVar13;
            *(float *)(*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4) = afStack_1dc[lVar13 + 3];
            lVar13 = lVar13 + 1;
          } while (lVar13 != 3);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
      }
      else {
        afStack_1dc[3] = *(float *)(*(longlong *)(local_90 + uVar6 * 8) + uVar21 * 4);
        afStack_1dc[4] = *(float *)(*(longlong *)(local_90 + uVar17 * 8) + uVar16 * 4);
        afStack_1dc[5] = *(float *)(*(longlong *)(local_90 + uVar15 * 8) + uVar12 * 4);
        lVar8 = 0;
        do {
          iVar1 = local_1c4[lVar8];
          fVar2 = afStack_1dc[lVar8 + 3];
          lVar13 = 0;
          do {
            uVar7 = (int)fVar2 * 3 + (int)lVar13;
            afStack_1dc[lVar13] =
                 *(float *)(*(longlong *)(local_c0 + (ulonglong)(uVar7 >> 9) * 8) +
                           (ulonglong)(uVar7 & 0x1ff) * 4);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 3);
          lVar13 = 0;
          do {
            uVar7 = iVar1 * 3 + (int)lVar13;
            *(float *)(*(longlong *)(*(longlong *)(lVar19 + 0x48) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4) = afStack_1dc[lVar13];
            lVar13 = lVar13 + 1;
          } while (lVar13 != 3);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
      }
      uVar5 = uVar20 + 1;
      if ((int)(uVar20 + 1) < (int)uVar4) {
        uVar5 = uVar4;
      }
      do {
        uVar7 = uVar5;
        if (uVar5 - 1 == uVar20) break;
        uVar20 = uVar20 + 1;
        uVar7 = uVar20;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar20 >> 9) * 8) +
                                           (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
      goto joined_r0x000148489211;
    }
    FUN_146c09afc(param_1,0);
    FUN_14848753d(param_1);
    if (local_1b0 != (char *)0x0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    FUN_1457ed45a(&local_108);
  }
  local_180 = CONCAT62(local_180._2_6_,0x101);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_108 = param_1;
  FUN_146c3a866(&local_108,lVar19,uVar18);
  uVar4 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar7 = 0;
  if ((uVar4 != 0) &&
     (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar20 = 1;
    uVar5 = 1;
    if (1 < (int)uVar4) {
      uVar20 = uVar4;
    }
    do {
      uVar7 = uVar20;
      if (uVar20 == uVar5) break;
      uVar14 = uVar5 >> 9;
      uVar10 = uVar5 & 0x1ff;
      uVar7 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar14] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  if (uVar7 != uVar4) {
    do {
      if (local_20a == '\0') {
        uVar21 = (ulonglong)(uVar7 >> 9);
        uVar6 = (ulonglong)(uVar7 & 0x1ff);
LAB_14848930f:
        uVar20 = uVar7 * 3;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar21 * 8);
        local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(lVar8 + 8 + uVar6 * 0xc));
        local_160 = *(undefined ***)(lVar8 + uVar6 * 0xc);
        local_1b8 = (longlong *)0xffffffffffffffff;
        local_1b0 = (char *)CONCAT44(local_1b0._4_4_,0xffffffff);
        if (local_20b == 0) {
          lVar8 = *(longlong *)(lVar19 + 0x78);
          local_1b8 = (longlong *)
                      CONCAT44(*(undefined4 *)
                                (*(longlong *)(lVar8 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                                (ulonglong)(uVar20 + 1 & 0x1ff) * 4),
                               *(undefined4 *)
                                (*(longlong *)(lVar8 + (ulonglong)(uVar20 >> 9) * 8) +
                                (ulonglong)(uVar20 & 0x1ff) * 4));
          local_1b0 = (char *)CONCAT44(local_1b0._4_4_,
                                       *(undefined4 *)
                                        (*(longlong *)(lVar8 + (ulonglong)(uVar20 + 2 >> 9) * 8) +
                                        (ulonglong)(uVar20 + 2 & 0x1ff) * 4));
        }
        lVar8 = 0;
        do {
          uVar5 = *(uint *)((longlong)&local_160 + lVar8 * 4);
          if (local_20b == 0) {
            iVar1 = *(int *)((longlong)&local_1b8 + lVar8 * 4);
            lVar13 = *(longlong *)(lVar19 + 0x48);
            lVar11 = 0;
            do {
              uVar14 = iVar1 * 3 + (int)lVar11;
              *(undefined4 *)((longlong)&local_1e8 + lVar11 * 4) =
                   *(undefined4 *)
                    (*(longlong *)(lVar13 + (ulonglong)(uVar14 >> 9) * 8) +
                    (ulonglong)(uVar14 & 0x1ff) * 4);
              lVar11 = lVar11 + 1;
            } while (lVar11 != 3);
          }
          else if (*(char *)(param_1 + 0x70) == '\0') {
            local_1e0 = DAT_14c846378;
            local_1e8 = DAT_14c846370;
          }
          else {
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar5 >> 9) * 8);
            local_1e0 = *(undefined4 *)(lVar13 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
            local_1e8 = *(undefined8 *)(lVar13 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
          }
          if ((local_209 == 0) && (*(char *)(param_1 + 0x70) == '\x01')) {
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar5 >> 9) * 8);
            *(undefined4 *)(lVar13 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc) = local_1e0;
            *(undefined8 *)(lVar13 + (ulonglong)(uVar5 & 0x1ff) * 0xc) = local_1e8;
          }
          lVar13 = ((int)uVar20 + lVar8) * 0xc;
          local_1f8 = *(undefined8 *)(local_f0 + lVar13);
          local_1f0 = *(undefined4 *)(local_f0 + 8 + lVar13);
          local_208 = *(undefined8 *)(local_100 + lVar13);
          local_200 = *(undefined4 *)(local_100 + 8 + lVar13);
          FUN_148488573(param_1,uVar5,&local_208,&local_1f8);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
      }
      else {
        uVar21 = (ulonglong)(uVar7 >> 9);
        uVar6 = (ulonglong)(uVar7 & 0x1ff);
        if (*(char *)(*(longlong *)(*(longlong *)(local_80 + 0x20) + uVar21 * 8) + uVar6) == '\x01')
        goto LAB_14848930f;
      }
      uVar20 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar4) {
        uVar20 = uVar4;
      }
      do {
        uVar5 = uVar20;
        if (uVar20 - 1 == uVar7) break;
        uVar7 = uVar7 + 1;
        uVar5 = uVar7;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar7 >> 9) * 8) +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      uVar7 = uVar5;
    } while (uVar7 != uVar4);
  }
  FUN_145bfa8f2(&local_108);
  if ((local_70 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148489877 FUN_148489877 body=3492 status=ok
// SIG undefined FUN_148489877(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148489877(double param_1,double param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 **local_340;
  double local_338;
  double local_330;
  float local_324;
  float local_320;
  float local_31c;
  ulonglong local_318;
  double local_310;
  double local_308;
  uint *local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  uint local_2bc;
  undefined8 local_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined8 local_2a0;
  float local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_288;
  undefined2 local_280;
  undefined1 local_27e;
  int local_270 [4];
  double local_260;
  double dStack_258;
  double local_250;
  double local_248 [4];
  double local_228 [4];
  longlong local_208;
  ulonglong uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  longlong local_1e0;
  ulonglong uStack_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  uint *local_1b8;
  uint local_1ac;
  double local_1a8;
  undefined4 local_1a0;
  double *local_188 [2];
  double local_178 [8];
  undefined8 local_138;
  undefined8 local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_138 = 0;
  local_128 = 0;
  local_338 = param_1;
  local_330 = param_2;
  local_1e8 = param_1;
  FUN_142984024(&local_1e8);
  local_1f8 = 0;
  uStack_1f0 = 0;
  if ((int)uStack_1d8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_1d8 & 0xffffffff);
  }
  if ((uStack_1d8 & 0xffffffff) != 0) {
    FUN_1484a6a42(&local_1f8);
    if (0 < (int)uStack_1d8) {
      dVar20 = local_330 * 0.5;
      iVar14 = 0;
      do {
        uVar15 = uStack_1f0;
        lVar13 = (longlong)(int)uStack_1f0;
        uVar4 = (int)uStack_1f0 + 1;
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar4);
        if (uStack_1f0._4_4_ < uVar4) {
          FUN_1484a6aac(&local_1f8,uVar15 & 0xffffffff);
        }
        puVar1 = (undefined8 *)(local_1f8 + lVar13 * 0x88);
        puVar1[4] = 0;
        *(undefined4 *)(puVar1 + 5) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((longlong)puVar1 + 0x2c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
        puVar1[8] = 0;
        *(undefined4 *)(puVar1 + 9) = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 10));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 10),4000);
        puVar1[0xf] = dVar20 / 0.5773502691896258;
        *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uStack_1d8);
    }
  }
  local_208 = 0;
  uStack_200 = 0;
  local_188[0] = (double *)CONCAT44(local_188[0]._4_4_,0xffffffff);
  FUN_1448156a8(&local_208,local_188,
                *(int *)((longlong)local_338 + 0x20) * 0x200 + *(int *)((longlong)local_338 + 0x24))
  ;
  iVar14 = (int)uStack_1d8;
  if (0 < (int)uStack_1d8) {
    uVar15 = 0;
    do {
      puVar1 = *(undefined8 **)(local_1e0 + uVar15 * 8);
      lVar13 = (longlong)*(int *)(puVar1 + 1);
      if (lVar13 != 0) {
        puVar18 = (uint *)*puVar1;
        puVar16 = puVar18 + lVar13;
        do {
          lVar13 = *(longlong *)
                    (*(longlong *)((longlong)local_338 + 0x130) + (ulonglong)(*puVar18 >> 9) * 8);
          uVar17 = (ulonglong)(*puVar18 & 0x1ff);
          local_1a0 = *(undefined4 *)(lVar13 + 8 + uVar17 * 0xc);
          local_1a8 = *(double *)(lVar13 + uVar17 * 0xc);
          lVar13 = 0;
          do {
            uVar4 = *(uint *)((longlong)&local_1a8 + lVar13 * 4);
            local_248[0] = (double)CONCAT44(local_248[0]._4_4_,uVar4);
            if (uVar15 != *(uint *)(local_208 + (longlong)(int)uVar4 * 4)) {
              *(int *)(local_208 + (longlong)(int)uVar4 * 4) = (int)uVar15;
              lVar10 = *(longlong *)
                        (*(longlong *)((longlong)local_338 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
              uVar17 = (ulonglong)(uVar4 & 0x1ff);
              dVar20 = *(double *)(local_1f8 + 0x78 + uVar15 * 0x88);
              auVar27._0_8_ = *(double *)(lVar10 + 0x10 + uVar17 * 0x18) / dVar20;
              auVar27._8_8_ = 0;
              auVar27 = roundsd(auVar27,auVar27,9);
              auVar24._0_8_ = *(double *)(lVar10 + 8 + uVar17 * 0x18) / dVar20;
              auVar24._8_8_ = 0;
              auVar24 = roundsd(auVar24,auVar24,9);
              auVar22._0_8_ = *(double *)(lVar10 + uVar17 * 0x18) / dVar20;
              auVar22._8_8_ = 0;
              auVar22 = roundsd(auVar22,auVar22,9);
              local_2b8 = (double)CONCAT44((int)auVar24._0_8_,(int)auVar22._0_8_);
              dStack_2b0 = (double)CONCAT44(dStack_2b0._4_4_,(int)auVar27._0_8_);
              local_188[0] = (double *)&local_2b8;
              local_188[1] = local_248;
              FUN_146be634e(local_1f8 + uVar15 * 0x88,local_228,local_188,0);
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != 3);
          puVar18 = puVar18 + 1;
        } while (puVar18 != puVar16);
        iVar14 = (int)uStack_1d8;
      }
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < (longlong)iVar14);
  }
  uVar15 = uStack_200 >> 0x20;
  uStack_200 = uStack_200 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    FUN_14481578e(&local_208,0);
    iVar14 = (int)uStack_1d8;
  }
  if (0 < iVar14) {
    local_308 = local_330 * local_330;
    local_310 = local_330 * 0.5;
    lVar13 = 0;
    do {
      puVar1 = *(undefined8 **)(local_1e0 + lVar13 * 8);
      lVar10 = (longlong)*(int *)(puVar1 + 1);
      if (lVar10 != 0) {
        puVar16 = (uint *)*puVar1;
        local_300 = puVar16 + lVar10;
        do {
          uVar15 = (ulonglong)*puVar16 & 0x1ff;
          lVar10 = *(longlong *)((longlong)local_338 + 0x10);
          lVar8 = *(longlong *)
                   (*(longlong *)((longlong)local_338 + 0x130) + (ulonglong)(*puVar16 >> 9) * 8);
          uVar4 = *(uint *)(lVar8 + uVar15 * 0xc);
          lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar4 >> 9) * 8);
          uVar17 = (ulonglong)uVar4 & 0x1ff;
          local_178[0] = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
          plVar2 = (longlong *)(lVar11 + uVar17 * 0x18);
          local_188[0] = (double *)*plVar2;
          local_188[1] = (double *)plVar2[1];
          uVar4 = *(uint *)(lVar8 + 4 + uVar15 * 0xc);
          lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar4 >> 9) * 8);
          uVar17 = (ulonglong)uVar4 & 0x1ff;
          local_178[3] = *(double *)(lVar11 + 0x10 + uVar17 * 0x18);
          pdVar7 = (double *)(lVar11 + uVar17 * 0x18);
          local_178[1] = *pdVar7;
          local_178[2] = pdVar7[1];
          uVar4 = *(uint *)(lVar8 + 8 + uVar15 * 0xc);
          lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar4 >> 9) * 8);
          uVar15 = (ulonglong)uVar4 & 0x1ff;
          local_178[6] = *(double *)(lVar10 + 0x10 + uVar15 * 0x18);
          pdVar7 = (double *)(lVar10 + uVar15 * 0x18);
          local_178[4] = *pdVar7;
          local_178[5] = pdVar7[1];
          uVar5 = 2;
          lVar10 = 0;
          pdVar7 = local_178;
          uVar4 = 0;
          dVar20 = 0.0;
          do {
            uVar15 = (ulonglong)uVar5;
            dVar19 = (*pdVar7 - local_178[uVar15 * 3]) * (*pdVar7 - local_178[uVar15 * 3]) +
                     (pdVar7[-2] - (double)local_188[uVar15 * 3]) *
                     (pdVar7[-2] - (double)local_188[uVar15 * 3]) +
                     (pdVar7[-1] - (double)local_188[uVar15 * 3 + 1]) *
                     (pdVar7[-1] - (double)local_188[uVar15 * 3 + 1]);
            if (dVar20 < dVar19) {
              uVar4 = uVar5;
            }
            (&local_1a8)[uVar15] = dVar19;
            if (dVar19 <= dVar20) {
              dVar19 = dVar20;
            }
            uVar5 = (uint)lVar10;
            lVar10 = lVar10 + 1;
            pdVar7 = pdVar7 + 3;
            dVar20 = dVar19;
          } while (lVar10 != 3);
          if (local_308 < dVar19) {
            FUN_146baf581(&local_2b8,local_188,local_178 + 1,local_178 + 4);
            local_31c = (float)dStack_2a8;
            local_320 = (float)dStack_2b0;
            local_324 = (float)local_2b8;
            if (dVar19 < 0.0) {
              dVar19 = sqrt(dVar19);
            }
            else {
              dVar19 = SQRT(dVar19);
            }
            uVar5 = (int)ROUND(dVar19 / local_330 + dVar19 / local_330 + -0.5) >> 1;
            local_318 = (ulonglong)uVar5;
            if (0 < (int)uVar5) {
              iVar6 = ((int)(uVar4 + 1) / 3) * -3 + uVar4 + 1;
              local_2e0 = (longlong)iVar6;
              iVar14 = ((int)(uVar4 + 2) / 3) * -3 + uVar4 + 2;
              if ((&local_1a8)[iVar14] < (&local_1a8)[local_2e0] ||
                  (&local_1a8)[iVar14] == (&local_1a8)[local_2e0]) {
                iVar14 = iVar6;
              }
              cVar3 = (char)iVar14 + '\x01';
              uVar9 = cVar3 * 0x56;
              local_2e8 = (longlong)(int)uVar4;
              local_2f0 = (longlong)iVar14;
              local_2f8 = (longlong)
                          (char)(cVar3 + ((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 8)) * -3
                                );
              iVar14 = 0;
              do {
                iVar14 = iVar14 + 1;
                dVar20 = (double)iVar14 * (1.0 / (double)(int)(uVar5 + 1));
                local_228[0] = 0.0;
                local_228[1] = 0.0;
                local_228[2] = 0.0;
                local_248[2] = 0.0;
                local_248[0] = 0.0;
                local_248[1] = 0.0;
                local_228[local_2e8] = dVar20;
                local_228[local_2e0] = 1.0 - dVar20;
                local_248[local_2f0] = 1.0 - dVar20;
                local_248[local_2f8] = dVar20;
                dVar25 = (local_248[2] * local_178[6] +
                         local_248[1] * local_178[3] + local_248[0] * local_178[0]) -
                         (local_178[6] * local_228[2] +
                         local_178[3] * local_228[1] + local_178[0] * local_228[0]);
                dVar20 = (local_248[2] * local_178[5] +
                         local_248[1] * local_178[2] + local_248[0] * (double)local_188[1]) -
                         (local_178[5] * local_228[2] +
                         local_178[2] * local_228[1] + (double)local_188[1] * local_228[0]);
                dVar19 = (local_248[2] * local_178[4] +
                         local_248[1] * local_178[1] + local_248[0] * (double)local_188[0]) -
                         (local_178[4] * local_228[2] +
                         local_178[1] * local_228[1] + (double)local_188[0] * local_228[0]);
                dVar20 = SQRT(dVar25 * dVar25 + dVar19 * dVar19 + dVar20 * dVar20) / local_330;
                iVar6 = (int)ROUND(-0.5 - (dVar20 + dVar20)) >> 1;
                if (iVar6 < 0) {
                  iVar12 = 0;
                  do {
                    iVar12 = iVar12 + 1;
                    dVar28 = (double)iVar12 * (1.0 / (double)(1 - iVar6));
                    dVar25 = 1.0 - dVar28;
                    dVar20 = local_228[2] * dVar25 + local_248[2] * dVar28;
                    dVar19 = local_228[1] * dVar25 + local_248[1] * dVar28;
                    dVar25 = dVar25 * local_228[0] + dVar28 * local_248[0];
                    local_250 = local_178[6] * dVar20 +
                                local_178[3] * dVar19 + local_178[0] * dVar25;
                    dStack_258 = local_178[5] * dVar20 +
                                 local_178[2] * dVar19 + (double)local_188[1] * dVar25;
                    local_260 = dVar20 * local_178[4] +
                                dVar19 * local_178[1] + dVar25 * (double)local_188[0];
                    lVar10 = lVar13 * 0x88;
                    cVar3 = FUN_14848a61e(local_1f8 + lVar10,&local_260);
                    if (cVar3 != '\0') {
                      local_2b8 = local_338;
                      local_2a0 = local_250;
                      dStack_2b0 = local_260;
                      dStack_2a8 = dStack_258;
                      local_1b8 = &local_1ac;
                      local_1c0 = (undefined8 *)&LAB_146c80466;
                      local_1d0 = &LAB_143b69e48;
                      local_1c8 = &local_2b8;
                      local_340 = &local_1c0;
                      local_348 = &local_1d0;
                      FUN_146c80058(local_1f8 + lVar10,local_270,&local_260,local_310);
                      dVar20 = local_338;
                      if (local_270[0] == -1) {
                        dStack_2a8 = local_250;
                        local_2b8 = local_260;
                        dStack_2b0 = dStack_258;
                        local_2a0 = (double)CONCAT44(local_320,local_324);
                        local_298 = local_31c;
                        local_28c = DAT_14c846338;
                        local_294 = DAT_14c846330;
                        local_288 = DAT_14c84635c;
                        local_280 = 1;
                        local_27e = 0;
                        uVar4 = FUN_146c02208(local_338,&local_2b8);
                        local_2d8 = _DAT_14cb4bde0;
                        uStack_2d0 = _DAT_14cb4bde8;
                        local_2bc = uVar4;
                        lVar8 = FUN_146bce3f6(*(undefined8 *)((longlong)dVar20 + 0x208));
                        lVar11 = 0;
                        do {
                          *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)(lVar8 + 0x20) + (ulonglong)(uVar4 >> 7 & 0x7fffff) * 8)
                            + (ulonglong)((uVar4 & 0x7f) << 4) + lVar11 * 4) =
                               *(undefined4 *)((longlong)&local_2d8 + lVar11 * 4);
                          lVar11 = lVar11 + 1;
                        } while (lVar11 != 4);
                        dVar20 = *(double *)(local_1f8 + 0x78 + lVar10);
                        auVar21._0_8_ = local_250 / dVar20;
                        auVar21._8_8_ = 0;
                        auVar22 = roundsd(auVar21,auVar21,9);
                        auVar26._0_8_ = dStack_258 / dVar20;
                        auVar26._8_8_ = 0;
                        auVar27 = roundsd(auVar26,auVar26,9);
                        auVar23._0_8_ = local_260 / dVar20;
                        auVar23._8_8_ = 0;
                        auVar24 = roundsd(auVar23,auVar23,9);
                        local_1d0 = (undefined1 *)CONCAT44((int)auVar27._0_8_,(int)auVar24._0_8_);
                        local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,(int)auVar22._0_8_);
                        local_1c0 = &local_1d0;
                        local_1b8 = &local_2bc;
                        FUN_146be634e(local_1f8 + lVar10,&local_1ac,&local_1c0,0);
                      }
                    }
                  } while (iVar12 != -iVar6);
                }
              } while (iVar14 != (int)local_318);
            }
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 != local_300);
        iVar14 = (int)uStack_1d8;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar14);
  }
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  FUN_1484a6a18(local_1f8,uStack_1f0 & 0xffffffff);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146be9400(&local_1e0);
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848a61e FUN_14848a61e body=162 status=ok
// SIG undefined FUN_14848a61e(void)

bool FUN_14848a61e(longlong param_1,double *param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_48 [36];
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar1 = *(double *)(param_1 + 0x78);
  auVar4._0_8_ = param_2[2] / dVar1;
  auVar4._8_8_ = 0;
  auVar4 = roundsd(auVar4,auVar4,9);
  local_1c = (int)auVar4._0_8_;
  auVar6._0_8_ = param_2[1] / dVar1;
  auVar6._8_8_ = 0;
  auVar4 = roundsd(auVar6,auVar6,9);
  local_20 = (int)auVar4._0_8_;
  auVar5._0_8_ = *param_2 / dVar1;
  auVar5._8_8_ = 0;
  auVar4 = roundsd(auVar5,auVar5,9);
  local_24 = (int)auVar4._0_8_;
  uVar2 = FUN_1448eb174(&local_24,0xc,0);
  iVar3 = FUN_1484a6b44(param_1,uVar2,&local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar3 == -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848a6c1 FUN_14848a6c1 body=123 status=ok
// SIG undefined FUN_14848a6c1(void)

void FUN_14848a6c1(longlong param_1)

{
  FUN_146c03a3e();
  FUN_146c3d890(*(undefined8 *)(param_1 + 0x208),DAT_14cb4bdf0);
  FUN_146c3d890(*(undefined8 *)(param_1 + 0x208),DAT_14cb4bdf8);
  FUN_146c3d890(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be00);
  FUN_146c3d890(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be08);
  FUN_146c3d890(*(undefined8 *)(param_1 + 0x208),DAT_14cb4be10);
  FUN_148487d3c(param_1,0);
  return;
}



// FUNCTION 14848a73c FUN_14848a73c body=451 status=ok
// SIG undefined FUN_14848a73c(void)

void FUN_14848a73c(longlong *param_1,undefined4 param_2,undefined8 param_3,int *param_4,
                  double *param_5,undefined8 param_6,double param_7,char param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  FUN_14848b312(param_1,param_3);
  fVar8 = (float)param_4[0x14];
  uVar7 = -(uint)(0.0 < fVar8);
  iVar2 = *param_4;
  iVar5 = iVar2;
  if ((param_8 != '\0') &&
     (((iVar2 != 2 || (param_4[4] != 1)) ||
      (iVar5 = 2, *(int *)(*(longlong *)(param_4 + 10) + 8) != 0)))) {
    *(int *)(param_1 + 2) = iVar2;
    iVar5 = iVar2 + 1;
  }
  fVar8 = (float)(~uVar7 & 0x3f800000 | (uint)fVar8 & uVar7);
  FUN_14848a900(param_1,iVar5);
  cVar1 = (char)param_4[0x1b];
  if (cVar1 != '\0') {
    param_7 = param_7 + (double)(float)param_4[0x15];
  }
  param_5[3] = param_5[3] + param_7;
  param_5[4] = param_5[4] + param_7;
  param_5[5] = param_5[5] + param_7;
  *param_5 = *param_5 - param_7;
  param_5[1] = param_5[1] - param_7;
  param_5[2] = param_5[2] - param_7;
  if (((*param_4 == 2) && (param_4[4] == 1)) && (*(int *)(*(longlong *)(param_4 + 10) + 8) == 0)) {
    FUN_143b609cc(param_1,param_4,param_5,cVar1,(double)fVar8,param_6,0);
  }
  else {
    if (cVar1 == '\0') {
      FUN_14848b40e(param_1,param_4);
    }
    else {
      FUN_143b61bb0(param_1,iVar5,param_4,SUB84((double)fVar8,0));
    }
    FUN_14848bc06(param_1,param_6);
  }
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      FUN_1484880aa(*(undefined8 *)(lVar3 + lVar6),(char)param_4[0x13]);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14848a900 FUN_14848a900 body=148 status=ok
// SIG undefined FUN_14848a900(void)

void FUN_14848a900(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_148499ca4();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (0 < param_2) {
    do {
      uVar3 = FUN_14001cc68(0x220,0x10);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
      FUN_1411b354a(uVar3,0,0,0,0);
      FUN_148487e31(uVar3,uVar1);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14848a994 FUN_14848a994 body=345 status=ok
// SIG undefined FUN_14848a994(void)

void FUN_14848a994(longlong *param_1,int *param_2,double *param_3,double param_4)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  FUN_148499ca4();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1447ab16c(param_1,0);
  }
  if ((((0.0 < param_4) && (*param_2 == 2)) && (param_2[4] == 1)) &&
     (*(int *)(*(longlong *)(param_2 + 10) + 8) == 0)) {
    fVar1 = (float)param_2[0x14];
    uVar7 = -(uint)(0.0 < fVar1);
    FUN_14848a900(param_1,1);
    iVar4 = param_2[0x1b];
    if ((char)iVar4 == '\0') {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)(float)param_2[0x15];
    }
    param_3[3] = param_3[3] + dVar3;
    param_3[4] = param_3[4] + dVar3;
    param_3[5] = param_3[5] + dVar3;
    *param_3 = *param_3 - dVar3;
    param_3[1] = param_3[1] - dVar3;
    param_3[2] = param_3[2] - dVar3;
    FUN_143b609cc(param_1,param_2,param_3,(char)iVar4,
                  (double)(float)(~uVar7 & 0x3f800000 | (uint)fVar1 & uVar7),param_4,1);
    lVar5 = param_1[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar2 = *param_1;
      lVar6 = 0;
      do {
        FUN_1484880aa(*(undefined8 *)(lVar2 + lVar6),(char)param_2[0x13]);
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 14848aaee FUN_14848aaee body=852 status=ok
// SIG undefined FUN_14848aaee(void)

void FUN_14848aaee(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_6b8 [40];
  uint *local_690;
  undefined8 *local_688;
  undefined4 local_680;
  uint local_674;
  undefined8 local_670;
  uint **local_668;
  undefined1 local_65c [4];
  undefined1 local_658 [184];
  undefined1 local_5a0;
  longlong local_598;
  longlong lStack_590;
  undefined8 local_588;
  undefined3 uStack_580;
  undefined5 local_57d;
  undefined3 uStack_578;
  undefined8 uStack_575;
  undefined1 *local_56c;
  undefined8 local_558;
  undefined8 local_548;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4cc;
  undefined4 local_4c4;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_47c;
  undefined4 local_474;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 local_438 [340];
  undefined1 local_2e4;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  FUN_14831e922(local_438,param_1);
  local_2e4 = 1;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4cc = 0xffffffff00000080;
  local_4c4 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_488 = 0;
  local_480 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_47c = 0xffffffff00000080;
  local_474 = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  lStack_590 = 0;
  uStack_578 = 0;
  uStack_575 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_57d = 0;
  local_56c = &DAT_100000002;
  local_558 = 0;
  local_548 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_598 = param_1;
  FUN_146c68b4c(&local_598);
  if ((int)local_588 != 0) {
    uVar5 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar7 = 0;
    if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar3 = 1;
      uVar8 = 1;
      if (1 < (int)uVar5) {
        uVar8 = uVar5;
      }
      do {
        uVar4 = uVar3;
        uVar7 = uVar8;
        if (uVar8 == uVar4) break;
        uVar3 = uVar4 + 1;
        uVar7 = uVar4;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar4 >> 9] +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
    }
    if (uVar7 != uVar5) {
      do {
        local_670 = (uint *)CONCAT62(local_670._2_6_,1);
        local_670 = (uint *)CONCAT44(uVar7,(undefined4)local_670);
        local_668 = (uint **)0x0;
        local_690 = &local_674;
        local_688 = &local_670;
        local_674 = uVar7;
        FUN_1482f586a(&local_4a8,local_65c,&local_690,0);
        uVar3 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar5) {
          uVar3 = uVar5;
        }
        do {
          uVar8 = uVar3;
          if (uVar3 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar8 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar7 = uVar8;
      } while (uVar7 != uVar5);
    }
    local_690 = (uint *)CONCAT44(local_690._4_4_,5);
    local_688 = (undefined8 *)0x0;
    local_680 = 0xffffffff;
    iVar1 = *(int *)(lStack_590 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lStack_590 + 0x18);
      lVar6 = 0;
      do {
        local_674 = *(uint *)(lVar2 + lVar6);
        local_670 = &local_674;
        local_668 = &local_690;
        FUN_1482f537c(&local_4f8,local_65c,&local_670,0);
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar1 * 4 != lVar6);
    }
    FUN_14845db0c(local_658,&local_4f8);
    local_5a0 = 1;
    FUN_14831cf9c(local_438,local_658);
    FUN_14837d278(local_438,param_2);
    FUN_14837d29e(local_438);
    FUN_14837bfb0(local_438);
  }
  FUN_1482f1656(&local_598);
  FUN_1482f5f8c(&local_4f8);
  FUN_14831e9f0(local_438);
  if ((local_60 ^ (ulonglong)auStack_6b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848ae44 FUN_14848ae44 body=206 status=ok
// SIG undefined FUN_14848ae44(void)

float FUN_14848ae44(double *param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 < 1) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    fVar4 = 1.0;
    fVar5 = 1.0;
    do {
      local_78 = (double)fVar5;
      local_68 = param_1[2] * local_78;
      local_70 = param_1[1] * local_78;
      local_78 = local_78 * *param_1;
      fVar2 = (float)FUN_1467f9650(&local_78);
      fVar5 = fVar5 * *(float *)(param_2 + 0x10);
      fVar3 = fVar3 + fVar2 * fVar4;
      fVar4 = fVar4 * *(float *)(param_2 + 0x14);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar3;
}



// FUNCTION 14848af14 FUN_14848af14 body=398 status=ok
// SIG undefined FUN_14848af14(void)

double * FUN_14848af14(longlong param_1,double *param_2,double *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = (double)param_4[1];
  dVar6 = param_3[2] * dVar1;
  dVar2 = param_3[1] * dVar1;
  dVar1 = dVar1 * *param_3;
  local_78 = *(double *)(param_1 + 0x58) + dVar6;
  local_80 = *(double *)(param_1 + 0x50) + dVar2;
  local_88 = *(double *)(param_1 + 0x48) + dVar1;
  fVar3 = (float)FUN_14848ae44(&local_88,param_4);
  local_90 = *(double *)(param_1 + 0x40) + dVar6;
  local_98 = *(double *)(param_1 + 0x38) + dVar2;
  local_a0 = *(double *)(param_1 + 0x30) + dVar1;
  fVar4 = (float)FUN_14848ae44(&local_a0,param_4);
  local_a8 = dVar6 + *(double *)(param_1 + 0x28);
  local_b0 = dVar2 + *(double *)(param_1 + 0x20);
  local_b8 = dVar1 + *(double *)(param_1 + 0x18);
  fVar5 = (float)FUN_14848ae44(&local_b8,param_4);
  dVar6 = (double)*param_4;
  *param_2 = (double)fVar5 * dVar6;
  param_2[1] = (double)fVar4 * dVar6;
  param_2[2] = (double)fVar3 * dVar6;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848b0a4 FUN_14848b0a4 body=621 status=ok
// SIG undefined FUN_14848b0a4(void)

void FUN_14848b0a4(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4,
                  char param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar13 = 0;
  if ((uVar9 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar11 = 1;
    uVar12 = 1;
    if (1 < (int)uVar9) {
      uVar11 = uVar9;
    }
    do {
      uVar13 = uVar11;
      if (uVar11 == uVar12) break;
      uVar8 = uVar12 >> 9;
      uVar10 = uVar12 & 0x1ff;
      uVar13 = uVar12;
      uVar12 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar8] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
  do {
    if (uVar13 == uVar9) {
      if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
    uVar7 = (ulonglong)(uVar13 & 0x1ff);
    dVar2 = *(double *)(lVar5 + uVar7 * 0x18);
    dVar3 = *(double *)(lVar5 + 8 + uVar7 * 0x18);
    dVar4 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
    local_98 = dVar2;
    dStack_90 = dVar3;
    local_88 = dVar4;
    FUN_14848af14(param_1,&local_b0,&local_98,param_4);
    if ((param_5 != '\0') || (cVar6 = FUN_146c0b51e(param_2,uVar13), cVar6 == '\0')) {
      local_b0 = local_a0 * param_3[2] + local_b0 * *param_3 + local_a8 * param_3[1];
      local_a0 = param_3[2] * local_b0;
      local_a8 = param_3[1] * local_b0;
      local_b0 = local_b0 * *param_3;
    }
    local_88 = dVar4 + local_a0;
    dStack_90 = dVar3 + local_a8;
    local_98 = dVar2 + local_b0;
    cVar6 = FUN_146bfed03(&local_98);
    if (cVar6 != '\0') {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
      *(double *)(lVar5 + 0x10 + uVar7 * 0x18) = local_88;
      pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
      *pdVar1 = local_98;
      pdVar1[1] = dStack_90;
      if (*(char *)(param_2 + 0x210) == '\x01') {
        LOCK();
        *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
        UNLOCK();
      }
    }
    uVar11 = uVar13 + 1;
    if ((int)(uVar13 + 1) < (int)uVar9) {
      uVar11 = uVar9;
    }
    uVar12 = uVar13;
    do {
      uVar13 = uVar11;
      if (uVar11 - 1 == uVar12) break;
      uVar13 = uVar12 + 1;
      uVar12 = uVar13;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x28) +
                                           (ulonglong)(uVar13 >> 9) * 8) +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14848b312 FUN_14848b312 body=250 status=ok
// SIG undefined FUN_14848b312(void)

void FUN_14848b312(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477ee866(param_2,&local_48);
  *(double *)(param_1 + 0x18) = local_48 * 100.0;
  *(double *)(param_1 + 0x20) = local_40 * 100.0;
  *(double *)(param_1 + 0x28) = local_38 * 100.0;
  FUN_1477ee866(param_2,&local_48);
  *(double *)(param_1 + 0x30) = local_48 * 100.0;
  *(double *)(param_1 + 0x38) = local_40 * 100.0;
  *(double *)(param_1 + 0x40) = local_38 * 100.0;
  FUN_1477ee866(param_2,&local_48);
  *(double *)(param_1 + 0x48) = local_48 * 100.0;
  *(double *)(param_1 + 0x50) = local_40 * 100.0;
  *(double *)(param_1 + 0x58) = local_38 * 100.0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848b40e FUN_14848b40e body=2039 status=ok
// SIG undefined FUN_14848b40e(void)

void FUN_14848b40e(longlong *param_1,longlong param_2,double param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint unaff_XMM12_Db;
  uint unaff_XMM12_Dc;
  uint unaff_XMM12_Dd;
  float fVar23;
  undefined1 auStack_2b8 [40];
  undefined8 *local_290;
  int *local_288;
  longlong *local_280;
  longlong local_278;
  uint local_26c;
  longlong local_268;
  longlong local_260;
  float local_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  int local_248;
  int iStack_244;
  int local_240;
  undefined8 local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined2 local_208;
  undefined1 local_206;
  undefined4 local_204;
  longlong local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  float local_17c;
  float local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined1 local_150 [60];
  undefined4 local_114;
  int local_110 [2];
  longlong local_108 [25];
  
  local_108[3] = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_280 = param_1;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar7 = 0;
    local_278 = param_2;
    do {
      local_260 = *(longlong *)
                   (*local_280 + (longlong)*(int *)(*(longlong *)(local_278 + 0x18) + lVar7 * 8) * 8
                   );
      local_108[1] = 0;
      uVar16 = *(uint *)(*(longlong *)(local_278 + 0x18) + 4 + lVar7 * 8);
      if (((int)uVar16 < 0) && (uVar16 = *(uint *)(local_280 + 2), (int)uVar16 < 0)) {
        lVar9 = 1;
      }
      else {
        local_108[1] = *(undefined8 *)(*local_280 + (ulonglong)uVar16 * 8);
        lVar9 = 2;
      }
      local_290 = (undefined8 *)(lVar7 * 0x10 + *(longlong *)(local_278 + 0x28));
      lVar12 = *(longlong *)(local_278 + 8);
      lVar8 = lVar7 * 0x20;
      fVar20 = (float)*(double *)(lVar12 + 0x10 + lVar8);
      fVar21 = (float)*(double *)(lVar12 + 8 + lVar8);
      fVar22 = (float)*(double *)(lVar12 + lVar8);
      local_268 = lVar7;
      local_108[0] = local_260;
      FUN_143b635ed(local_150,lVar12 + lVar8);
      local_188 = DAT_14c8464f0;
      local_198 = DAT_14c8464e0;
      uStack_190 = DAT_14c8464e8;
      local_16c = DAT_14c846338;
      local_174 = DAT_14c846330;
      local_168 = DAT_14c84635c;
      local_15e = 0;
      local_160 = 0x101;
      local_110[0] = -1;
      local_110[1] = -1;
      local_258 = -fVar22;
      uStack_254 = unaff_XMM12_Db ^ 0x80000000;
      uStack_250 = unaff_XMM12_Dc ^ 0x80000000;
      uStack_24c = unaff_XMM12_Dd ^ 0x80000000;
      lVar12 = 0;
      local_26c = uVar16;
      do {
        lVar7 = local_278;
        local_180 = fVar22;
        local_17c = fVar21;
        local_178 = fVar20;
        if ((lVar12 == 1) && (uVar16 != *(uint *)(local_280 + 2))) {
          local_180 = local_258;
          local_17c = -fVar21;
          local_178 = -fVar20;
        }
        lVar8 = local_108[lVar12];
        *(int *)((longlong)local_108 + lVar12 * 4 + -8) =
             *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24);
        iVar10 = *(int *)(local_290 + 1);
        if ((longlong)iVar10 != 0) {
          local_288 = (int *)*local_290;
          lVar14 = 0;
          fVar23 = 3.4028235e+38;
          fVar18 = 3.4028235e+38;
          do {
            local_228 = *(undefined8 *)
                         (*(longlong *)(lVar7 + 0x38) + 0x10 +
                         (longlong)*(int *)((longlong)local_288 + lVar14) * 0x18);
            pdVar1 = (double *)
                     (*(longlong *)(lVar7 + 0x38) +
                     (longlong)*(int *)((longlong)local_288 + lVar14) * 0x18);
            local_238 = *pdVar1;
            dStack_230 = pdVar1[1];
            FUN_146bca7ae(local_150,&local_1e0,&local_238,2);
            uVar16 = local_26c;
            uVar17 = -(uint)((float)(double)CONCAT44(uStack_1dc,local_1e0) <= fVar23);
            fVar23 = (float)(~uVar17 & (uint)fVar23 |
                            (uint)(float)(double)CONCAT44(uStack_1dc,local_1e0) & uVar17);
            uVar17 = -(uint)((float)local_1d8 <= fVar18);
            fVar18 = (float)(~uVar17 & (uint)fVar18 | (uint)(float)local_1d8 & uVar17);
            lVar14 = lVar14 + 4;
          } while ((longlong)iVar10 * 4 != lVar14);
          if ((longlong)*(int *)(local_290 + 1) != 0) {
            piVar15 = (int *)*local_290;
            local_288 = piVar15 + *(int *)(local_290 + 1);
            do {
              puVar2 = (undefined8 *)(*(longlong *)(local_278 + 0x38) + (longlong)*piVar15 * 0x18);
              local_198 = *puVar2;
              uStack_190 = puVar2[1];
              local_188 = *(undefined8 *)
                           (*(longlong *)(local_278 + 0x38) + 0x10 + (longlong)*piVar15 * 0x18);
              FUN_146bca7ae(local_150,&local_238,&local_198,2);
              dVar4 = local_238;
              fVar19 = (float)dStack_230;
              uVar17 = FUN_146c02208(lVar8,&local_198);
              local_1a8[0] = DAT_14cb4bdd0;
              local_1a8[1] = DAT_14cb4bdd4;
              local_1a8[2] = uRam000000014cb4bdd8;
              local_1a8[3] = uRam000000014cb4bddc;
              lVar7 = FUN_146bce3f6(*(undefined8 *)(lVar8 + 0x208),DAT_14cb4bdf0);
              lVar14 = 0;
              do {
                *(undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(lVar7 + 0x20) + (ulonglong)(uVar17 >> 7 & 0x7fffff) * 8) +
                  (ulonglong)((uVar17 & 0x7f) << 4) + lVar14 * 4) = local_1a8[lVar14];
                lVar14 = lVar14 + 1;
              } while (lVar14 != 4);
              FUN_14848845a(lVar8,uVar17,
                            CONCAT44((fVar19 - fVar18) * (float)param_3,
                                     ((float)dVar4 - fVar23) * (float)param_3),
                            *(undefined4 *)((longlong)local_280 + 0x14));
              piVar15 = piVar15 + 1;
            } while (piVar15 != local_288);
          }
        }
        lVar8 = local_260;
        lVar7 = local_268;
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar9);
      local_288 = (int *)CONCAT44(local_288._4_4_,~(uint)local_268);
      if (*(char *)(local_278 + 4) == '\x01') {
        if (2 < *(int *)(local_290 + 1)) {
          iVar10 = 1;
          iVar11 = 2;
          do {
            lVar12 = 0;
            do {
              iVar6 = *(int *)((longlong)local_108 + lVar12 * 4 + -8);
              local_238 = (double)CONCAT44(iVar6 + iVar10,iVar6);
              dStack_230 = (double)CONCAT44(dStack_230._4_4_,iVar6 + iVar11);
              if ((lVar12 == 1) && (uVar16 != *(uint *)(local_280 + 2))) {
                local_238 = (double)CONCAT44(iVar6 + iVar11,iVar6);
                dStack_230 = (double)CONCAT44(dStack_230._4_4_,iVar6 + iVar10);
              }
              lVar8 = local_108[lVar12];
              iVar6 = FUN_146c01152(lVar8,&local_238,0);
              if (-1 < iVar6) {
                local_1e0 = local_288._0_4_;
                FUN_146bedf4e(*(longlong *)(*(longlong *)(lVar8 + 0x208) + 0x48) + 0x18,&local_1e0);
              }
              lVar12 = lVar12 + 1;
            } while (lVar9 != lVar12);
            iVar6 = iVar11 + 1;
            iVar10 = iVar11;
            iVar11 = iVar6;
          } while (iVar6 < *(int *)(local_290 + 1));
        }
      }
      else {
        local_1b8 = 0;
        uStack_1b0 = 0;
        if (0 < *(int *)(local_290 + 1)) {
          iVar11 = 0;
          iVar10 = local_110[0];
          do {
            FUN_1484884f7(lVar8,iVar10 + iVar11,&local_238,0);
            uVar5 = uStack_1b0;
            lVar7 = (longlong)(int)uStack_1b0;
            uVar17 = (int)uStack_1b0 + 1;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar17);
            if (uStack_1b0._4_4_ < uVar17) {
              FUN_140752556(&local_1b8,uVar5 & 0xffffffff);
            }
            *(double *)(local_1b8 + lVar7 * 8) = local_238;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(local_290 + 1));
        }
        FUN_148267944(&local_1e0,&local_1b8);
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0.0;
        dStack_230 = 0.0;
        local_208 = 1;
        local_206 = 0;
        local_200 = 0;
        uStack_1f8 = 0;
        local_1f0 = 0xffffffff;
        local_204 = 1;
        FUN_1482671ac(&local_238,&local_1e0);
        FUN_1482671f8(&local_238);
        lVar7 = 0;
        do {
          lVar12 = local_200;
          lVar8 = (longlong)(int)uStack_1f8;
          if (lVar8 != 0) {
            iVar10 = *(int *)((longlong)local_108 + lVar7 * 4 + -8);
            lVar14 = local_108[lVar7];
            lVar13 = 0;
            do {
              uVar3 = *(undefined8 *)(lVar12 + lVar13);
              iVar6 = (int)uVar3 + iVar10;
              iStack_244 = (int)((ulonglong)uVar3 >> 0x20);
              iVar11 = iStack_244 + iVar10;
              local_240 = *(int *)(lVar12 + 8 + lVar13) + iVar10;
              _local_248 = CONCAT44(iVar11,iVar6);
              if ((lVar7 == 1) && (uVar16 != *(uint *)(local_280 + 2))) {
                _local_248 = CONCAT44(local_240,iVar6);
                local_240 = iVar11;
              }
              iVar11 = FUN_146c01152(lVar14,&local_248,0);
              if (-1 < iVar11) {
                local_114 = local_288._0_4_;
                FUN_146bedf4e(*(longlong *)(*(longlong *)(lVar14 + 0x208) + 0x48) + 0x18,&local_114,
                              iVar11);
              }
              lVar13 = lVar13 + 0xc;
            } while (lVar8 * 0xc != lVar13);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != lVar9);
        FUN_1482678f8(&local_238);
        FUN_148267a08(&local_1e0);
        lVar7 = local_268;
        if (local_1b8 != 0) {
          FUN_1400020a8();
          lVar7 = local_268;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_278 + 0x20));
  }
  if ((local_108[3] ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848bc06 FUN_14848bc06 body=1855 status=ok
// SIG undefined FUN_14848bc06(void)

void FUN_14848bc06(longlong *param_1,double param_2)

{
  undefined *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_4e8 [32];
  undefined8 *local_4c8;
  undefined1 local_4c0;
  longlong local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  uint local_47c;
  undefined8 local_478 [2];
  undefined8 local_468;
  undefined8 local_438 [2];
  undefined8 local_428;
  double local_3f8;
  double dStack_3f0;
  double *local_3e8;
  double local_3e0;
  double local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
  int *local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined2 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined2 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_170;
  undefined4 local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int *local_138;
  uint local_130;
  uint local_12c;
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined *local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (0.0 < param_2) {
    iVar4 = (int)param_1[1];
    if (0 < iVar4) {
      uVar10 = 0;
      do {
        if (uVar10 != *(uint *)(param_1 + 2)) {
          local_4b8 = *(longlong *)(*param_1 + uVar10 * 8);
          local_488 = 0.0;
          local_498 = 0.0;
          dStack_490 = 0.0;
          local_d8 = (code *)0x0;
          local_c8 = &PTR_DAT_149f363e0;
          local_e8 = &DAT_146be727e;
          local_c0 = local_4b8;
          FUN_146be708e(local_4b8 + 0x20,&local_3f8,&local_e8);
          FUN_146be6fec(&local_3f8,&local_e8);
          local_130 = *local_3b8 * 0x200 + local_3b8[1];
          local_118 = (longlong *)0x0;
          local_128[0] = 0;
          local_138 = local_3b8;
          local_12c = local_130;
          FUN_146be715a(local_128,&local_3f8);
          uVar5 = (uint)local_e0;
          if ((uint)local_e0 != local_130) {
            do {
              pcVar3 = local_d8;
              ppuVar8 = local_c8;
              if (local_c8 == (undefined **)0x0) {
                ppuVar8 = local_b8;
              }
              local_47c = uVar5;
              uVar6 = (**(code **)(*ppuVar8 + 8))();
              (*pcVar3)(&local_4b0,uVar6,&local_47c);
              local_498 = local_4b0 + local_498;
              dStack_490 = local_4a8 + dStack_490;
              local_488 = local_4a0 + local_488;
              iVar4 = local_e0._4_4_;
              uVar5 = (uint)local_e0;
              do {
                uVar5 = uVar5 + 1;
                local_e0 = (double)CONCAT44(local_e0._4_4_,uVar5);
                if (iVar4 <= (int)uVar5) break;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(local_e8 + 8) +
                                                     (ulonglong)(uVar5 >> 9) * 8) +
                                                   (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
            } while (local_130 != uVar5);
          }
          if (local_128[0] != 0) {
            plVar7 = local_118;
            if (local_118 == (longlong *)0x0) {
              plVar7 = local_108;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          lVar2 = local_4b8;
          if (local_d8 != (code *)0x0) {
            ppuVar8 = local_c8;
            if (local_c8 == (undefined **)0x0) {
              ppuVar8 = local_b8;
            }
            (**(code **)(*ppuVar8 + 0x10))();
          }
          if (local_3f8 != 0.0) {
            pdVar9 = local_3e8;
            if (local_3e8 == (double *)0x0) {
              pdVar9 = &local_3d8;
            }
            (**(code **)((longlong)*pdVar9 + 0x10))();
          }
          dVar12 = 1.0 / (double)*(int *)(lVar2 + 0x50);
          local_498 = local_498 * dVar12;
          dStack_490 = dStack_490 * dVar12;
          local_488 = dVar12 * local_488;
          FUN_145c688c4(lVar2,&local_3f8,1);
          dVar12 = (double)CONCAT44(uStack_3cc,local_3d0) - (double)local_3e8;
          dVar12 = (double)(-(ulonglong)(0.0 <= dVar12) & (ulonglong)dVar12);
          dVar13 = (double)(-(ulonglong)(0.0 <= local_3d8 - dStack_3f0) &
                           (ulonglong)(local_3d8 - dStack_3f0));
          uVar11 = -(ulonglong)(dVar12 <= dVar13);
          dVar12 = (double)(~uVar11 & (ulonglong)dVar12 | uVar11 & (ulonglong)dVar13);
          dVar13 = (double)(-(ulonglong)(0.0 <= local_3e0 - local_3f8) &
                           (ulonglong)(local_3e0 - local_3f8));
          uVar11 = -(ulonglong)(dVar12 <= dVar13);
          dVar12 = (double)(uVar11 & (ulonglong)dVar13 | ~uVar11 & (ulonglong)dVar12);
          dVar12 = (-param_2 * 0.5 + dVar12) / dVar12;
          if (dVar12 < 1e-05) {
            FUN_14582f278(lVar2);
            FUN_148487e31(lVar2,*(undefined4 *)((longlong)param_1 + 0x14));
          }
          else {
            local_d8 = (code *)(DAT_14c846520 * dVar12);
            local_e0 = DAT_14c846518 * dVar12;
            local_e8 = (undefined *)(dVar12 * DAT_14c846510);
            local_4c8 = (undefined8 *)((ulonglong)local_4c8 & 0xffffffffffffff00);
            FUN_146c3c569(lVar2,&local_e8,&local_498,0);
          }
          iVar4 = (int)param_1[1];
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)iVar4);
    }
    if ((longlong)(int)param_1[2] != -1) {
      puVar1 = *(undefined **)(*param_1 + (longlong)(int)param_1[2] * 8);
      FUN_14582f278(puVar1);
      FUN_148487e31(puVar1,*(undefined4 *)((longlong)param_1 + 0x14));
      iVar4 = (int)param_1[1];
      local_e8 = puVar1;
      if (0 < iVar4) {
        uVar10 = 0;
        do {
          if (uVar10 != *(uint *)(param_1 + 2)) {
            local_3d8 = 0.0;
            local_3d0 = 0;
            local_3f8 = 0.0;
            dStack_3f0 = 0.0;
            uStack_3cc = 0x80;
            uStack_3c8 = 0xffffffff;
            local_3c4 = 0;
            local_3b8 = (int *)0x0;
            local_3b0 = 0;
            local_388 = 0;
            local_380 = 0;
            local_3a8 = 0;
            uStack_3a0 = 0;
            local_37c = 0xffffffff00000080;
            local_374 = 0;
            local_368 = 0;
            local_360 = 0;
            local_358 = 0x101;
            local_330 = 0;
            local_328 = 0;
            local_350 = 0;
            uStack_348 = 0;
            local_324 = 0xffffffff00000080;
            local_31c = 0;
            local_310 = 0;
            local_308 = 0;
            local_2e0 = 0;
            local_2d8 = 0;
            local_300 = 0;
            uStack_2f8 = 0;
            local_2d4 = 0xffffffff00000080;
            local_2cc = 0;
            local_2c0 = 0;
            local_2b8 = 0;
            local_2b0 = 0x101;
            local_288 = 0;
            local_280 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_27c = 0xffffffff00000080;
            local_274 = 0;
            local_268 = 0;
            local_260 = 0;
            local_238 = 0;
            local_230 = 0;
            local_258 = 0;
            uStack_250 = 0;
            local_22c = 0xffffffff00000080;
            local_224 = 0;
            local_218 = 0;
            local_210 = 0;
            local_208 = 0x101;
            local_1e0 = 0;
            local_1d8 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_1d4 = 0xffffffff00000080;
            local_1cc = 0;
            local_1c0 = 0;
            local_1b8 = 0;
            local_190 = 0;
            local_188 = 0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_184 = 0xffffffff00000080;
            local_17c = 0;
            local_170 = 0;
            local_168 = 0;
            local_160 = 0x101;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_438[0] = 0;
            local_428 = 0;
            local_478[0] = 0;
            local_468 = 0;
            local_4c8 = local_438;
            local_4c0 = 0;
            FUN_146bcbbdc(&local_e8,*(undefined8 *)(*param_1 + uVar10 * 8),&local_3f8,local_478);
            FUN_146bfdcfe(&local_3f8);
            iVar4 = (int)param_1[1];
          }
          uVar10 = uVar10 + 1;
        } while ((longlong)uVar10 < (longlong)iVar4);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848c346 FUN_14848c346 body=1104 status=ok
// SIG undefined FUN_14848c346(void)

void FUN_14848c346(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  undefined1 local_3a0;
  longlong local_390 [3];
  undefined8 local_378;
  undefined8 local_348 [2];
  undefined8 local_338;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 local_270;
  undefined2 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_2e8 = 0;
  local_2e0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2dc = 0xffffffff00000080;
  local_2d4 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_28c = 0xffffffff00000080;
  local_284 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0x101;
  local_240 = 0;
  local_238 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_234 = 0xffffffff00000080;
  local_22c = 0;
  local_220 = 0;
  local_218 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0x101;
  local_198 = 0;
  local_190 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_18c = 0xffffffff00000080;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_117 = 1;
  local_118 = 1;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0x101;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_3a8 = local_348;
  local_348[0] = 0;
  local_338 = 0;
  local_390[1] = 0;
  local_378 = 0;
  local_3a0 = 0;
  local_390[0] = param_1;
  FUN_146bcbbdc(local_390,param_2);
  if (param_3 != '\0') {
    uVar8 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar7 = 0;
    if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar3 = 1;
      uVar5 = 1;
      if (1 < (int)uVar8) {
        uVar5 = uVar8;
      }
      do {
        uVar6 = uVar3;
        uVar7 = uVar5;
        if (uVar5 == uVar6) break;
        uVar3 = uVar6 + 1;
        uVar7 = uVar6;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar6 >> 9] +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    }
    if (uVar7 != uVar8) {
      do {
        uVar2 = FUN_146bcd1d8(&local_260,uVar7);
        FUN_146c0adfe(param_1,uVar2);
        uVar3 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar8) {
          uVar3 = uVar8;
        }
        do {
          uVar5 = uVar3;
          if (uVar3 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar5 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar7 = uVar5;
      } while (uVar7 != uVar8);
    }
    uVar8 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    uVar7 = 0;
    if ((uVar8 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar3 = 1;
      uVar5 = 1;
      if (1 < (int)uVar8) {
        uVar3 = uVar8;
      }
      do {
        uVar7 = uVar3;
        if (uVar3 == uVar5) break;
        uVar6 = uVar5 >> 9;
        uVar9 = uVar5 & 0x1ff;
        uVar7 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar6] +
                                           (ulonglong)uVar9 * 2) - 1U));
    }
    if (uVar7 != uVar8) {
      do {
        uVar3 = FUN_146bcd1d8(&local_308,uVar7);
        if (*(char *)(param_1 + 0x70) == '\x01') {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar3 >> 9) * 8);
          uVar4 = (ulonglong)(uVar3 & 0x1ff);
          *(uint *)(lVar1 + uVar4 * 0xc) = *(uint *)(lVar1 + uVar4 * 0xc) ^ 0x80000000;
          *(uint *)(lVar1 + 4 + uVar4 * 0xc) = *(uint *)(lVar1 + 4 + uVar4 * 0xc) ^ 0x80000000;
          *(uint *)(lVar1 + 8 + uVar4 * 0xc) = *(uint *)(lVar1 + 8 + uVar4 * 0xc) ^ 0x80000000;
        }
        uVar3 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar8) {
          uVar3 = uVar8;
        }
        do {
          uVar5 = uVar3;
          if (uVar3 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar5 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x28) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar7 = uVar5;
      } while (uVar7 != uVar8);
    }
  }
  FUN_146bfdcfe(&local_308);
  if ((local_40 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848c798 FUN_14848c798 body=754 status=ok
// SIG undefined FUN_14848c798(void)

void FUN_14848c798(longlong *param_1,double *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  int local_88;
  int local_84;
  longlong local_80;
  undefined8 *local_78;
  int local_6c;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_4;
  local_78 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    dVar13 = (double)param_1[0xf];
    auVar18._0_8_ = (param_2[2] - DAT_14c846520 * 1e-08) / dVar13;
    auVar18._8_8_ = 0;
    auVar18 = roundsd(auVar18,auVar18,9);
    auVar16._0_8_ = (DAT_14c846520 * 1e-08 + param_2[2]) / dVar13;
    auVar16._8_8_ = 0;
    auVar16 = roundsd(auVar16,auVar16,9);
    local_88 = (int)auVar16._0_8_;
    if ((int)auVar18._0_8_ <= local_88) {
      auVar19._0_8_ = (param_2[1] - DAT_14c846518 * 1e-08) / dVar13;
      auVar19._8_8_ = 0;
      auVar16 = roundsd(auVar19,auVar19,9);
      local_98 = (int)auVar16._0_8_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (*param_2 - DAT_14c846510 * 1e-08) / dVar13;
      auVar16 = roundsd(ZEXT816(0),auVar15,9);
      local_84 = (int)auVar16._0_8_;
      auVar14._0_8_ = (DAT_14c846510 * 1e-08 + *param_2) / dVar13;
      auVar14._8_8_ = 0;
      auVar16 = roundsd(auVar14,auVar14,9);
      auVar17._0_8_ = (DAT_14c846518 * 1e-08 + param_2[1]) / dVar13;
      auVar17._8_8_ = 0;
      auVar15 = roundsd(ZEXT816(0),auVar17,9);
      local_94 = (int)auVar15._0_8_;
      iVar9 = (int)auVar18._0_8_;
      do {
        iVar7 = local_98;
        if (local_98 <= local_94) {
          do {
            iVar10 = local_84;
            if (local_84 <= (int)auVar16._0_8_) {
LAB_14848c91a:
              local_6c = iVar10;
              local_68 = iVar7;
              local_64 = iVar9;
              if ((int)param_1[9] != 0) {
                iVar3 = FUN_1448eb174(&local_6c,0xc,0);
                plVar5 = (longlong *)param_1[8];
                if ((longlong *)param_1[8] == (longlong *)0x0) {
                  plVar5 = param_1 + 7;
                }
                iVar3 = *(int *)((longlong)plVar5 +
                                ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
                if (iVar3 != -1) {
                  lVar6 = *param_1;
                  do {
                    lVar1 = (longlong)iVar3 * 0x1c;
                    iVar8 = *(int *)(lVar6 + 0x14 + lVar1);
                    if (((*(int *)(lVar6 + lVar1) == local_6c) &&
                        (*(int *)(lVar1 + lVar6 + 4) == local_68)) &&
                       (*(int *)(lVar1 + lVar6 + 8) == local_64)) goto LAB_14848c9fa;
                    iVar3 = iVar8;
                  } while (iVar8 != -1);
                }
              }
              goto LAB_14848c9a1;
            }
LAB_14848c90d:
            bVar12 = iVar7 != local_94;
            iVar7 = iVar7 + 1;
          } while (bVar12);
        }
        bVar12 = iVar9 != local_88;
        iVar9 = iVar9 + 1;
      } while (bVar12);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14848c9fa:
  while( true ) {
    puVar11 = (undefined8 *)(lVar6 + (longlong)iVar3 * 0x1c + 0xc);
    cVar2 = (*(code *)*param_5)(param_5[1],puVar11);
    if ((cVar2 == '\0') &&
       (dVar13 = (double)(*(code *)*local_78)(local_78[1],puVar11), dVar13 < 1.0000000000000001e-16)
       ) {
      lVar6 = (longlong)(int)local_90[1];
      uVar4 = (int)local_90[1] + 1;
      *(uint *)(local_90 + 1) = uVar4;
      if (*(uint *)((longlong)local_90 + 0xc) < uVar4) {
        local_80 = lVar6;
        FUN_146be54b8(local_90,lVar6);
        lVar6 = local_80;
      }
      *(undefined8 *)(*local_90 + lVar6 * 8) = *puVar11;
    }
    if (iVar8 == -1) break;
    lVar6 = *param_1;
    iVar3 = iVar8;
    while( true ) {
      lVar1 = (longlong)iVar3 * 0x1c;
      iVar8 = *(int *)(lVar6 + 0x14 + lVar1);
      if (((*(int *)(lVar6 + lVar1) == local_6c) && (*(int *)(lVar1 + lVar6 + 4) == local_68)) &&
         (*(int *)(lVar1 + lVar6 + 8) == local_64)) break;
      iVar3 = iVar8;
      if (iVar8 == -1) goto LAB_14848c9a1;
    }
  }
LAB_14848c9a1:
  bVar12 = iVar10 == (int)auVar16._0_8_;
  iVar10 = iVar10 + 1;
  if (bVar12) goto LAB_14848c90d;
  goto LAB_14848c91a;
}



// FUNCTION 14848ca8c FUN_14848ca8c body=309 status=ok
// SIG undefined FUN_14848ca8c(void)

void FUN_14848ca8c(longlong param_1,undefined8 param_2,double *param_3,double *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar1 = *(double *)(param_1 + 0x78);
  auVar2._0_8_ = param_3[2] / dVar1;
  auVar2._8_8_ = 0;
  auVar2 = roundsd(auVar2,auVar2,9);
  local_3c = (int)auVar2._0_8_;
  auVar6._0_8_ = param_3[1] / dVar1;
  auVar6._8_8_ = 0;
  auVar2 = roundsd(auVar6,auVar6,9);
  local_40 = (int)auVar2._0_8_;
  auVar3._0_8_ = *param_3 / dVar1;
  auVar3._8_8_ = 0;
  auVar2 = roundsd(auVar3,auVar3,9);
  local_44 = (int)auVar2._0_8_;
  auVar4._0_8_ = param_4[2] / dVar1;
  auVar4._8_8_ = 0;
  auVar2 = roundsd(auVar4,auVar4,9);
  local_48 = (int)auVar2._0_8_;
  auVar7._0_8_ = param_4[1] / dVar1;
  auVar7._8_8_ = 0;
  auVar2 = roundsd(auVar7,auVar7,9);
  local_4c = (int)auVar2._0_8_;
  auVar5._0_8_ = *param_4 / dVar1;
  auVar5._8_8_ = 0;
  auVar2 = roundsd(auVar5,auVar5,9);
  local_50 = (int)auVar2._0_8_;
  if (((local_44 != local_50) || (local_40 != local_4c)) || (local_3c != local_48)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
    EnterCriticalSection(lpCriticalSection);
    FUN_1484a7dc6(param_1,&local_44,param_2);
    LeaveCriticalSection(lpCriticalSection);
    EnterCriticalSection(lpCriticalSection);
    local_38 = &local_50;
    local_30 = param_2;
    FUN_1484a79ec(param_1,local_24);
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14848cbc2 FUN_14848cbc2 body=107 status=ok
// SIG undefined FUN_14848cbc2(void)

void FUN_14848cbc2(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_14171ef34(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_140752556(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 14848cc2e FUN_14848cc2e body=51 status=ok
// SIG undefined FUN_14848cc2e(void)

void FUN_14848cc2e(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_148499bd8(param_1);
  return;
}



// FUNCTION 14848cc62 FUN_14848cc62 body=6686 status=ok
// SIG undefined FUN_14848cc62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14848cc62(longlong *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  double *param_5,char param_6)

{
  double dVar1;
  double dVar2;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  double *pdVar20;
  double dVar21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  int *piVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auStack_4a8 [40];
  longlong local_480;
  longlong local_478;
  ulonglong local_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  longlong *local_448;
  longlong *local_440;
  longlong local_438;
  longlong local_430;
  int *local_428;
  int *local_420;
  longlong local_418;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  int local_3ec [3];
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  undefined4 local_3c8 [4];
  longlong local_3b8;
  longlong lStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  undefined1 local_300 [16];
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong local_2c0 [8];
  uint local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined2 local_140;
  undefined1 local_13e;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_448 = param_3;
  FUN_1474aeba2(local_2c0);
  local_470 = (ulonglong)local_280;
  FUN_148499b96(param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1447ab16c(param_1,0);
  }
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0x7fefffffffffffff;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = -0x10000000000001;
  param_1[6] = -0x10000000000001;
  param_1[7] = -0x10000000000001;
  if ((longlong)*(int *)(param_4 + 1) != 0) {
    piVar22 = (int *)*param_4;
    piVar27 = piVar22 + *(int *)(param_4 + 1);
    local_438 = param_2 + 0x310;
    local_430 = param_2 + 0x380;
    local_478 = param_2;
    local_440 = param_1;
    local_428 = piVar27;
    do {
      auVar39 = _DAT_149934d80;
      iVar4 = *piVar22;
      lVar25 = (longlong)*(int *)(*(longlong *)(param_2 + 400) + (longlong)iVar4 * 4);
      if (lVar25 != -1) {
        local_338 = ZEXT816(0);
        local_328 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_308 = DAT_14c8464f0;
        local_318._8_8_ = DAT_14c8464e8;
        local_318._0_8_ = DAT_14c8464e0;
        local_2f0 = (double)DAT_14c846520;
        local_300._8_8_ = DAT_14c846518;
        local_300._0_8_ = DAT_14c846510;
        local_480 = lVar25;
        local_420 = piVar22;
        if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
          lVar25 = *local_448;
          lVar16 = (longlong)iVar4 * 0x30;
          uVar17 = *(undefined8 *)(lVar25 + 0x20 + lVar16);
          dVar29 = (double)(float)uVar17;
          dVar33 = (double)(float)((ulonglong)uVar17 >> 0x20);
          uVar17 = *(undefined8 *)(lVar25 + 0x28 + lVar16);
          auVar50._0_8_ = (double)(float)uVar17;
          auVar50._8_8_ = (double)(float)((ulonglong)uVar17 >> 0x20);
          uVar17 = *(undefined8 *)(lVar25 + 0x10 + lVar16);
          local_468 = (double)(float)uVar17;
          dStack_460 = (double)(float)((ulonglong)uVar17 >> 0x20);
          dVar36 = (double)(float)*(undefined8 *)(lVar25 + 0x18 + lVar16);
          dVar34 = (double)(float)*(undefined8 *)(lVar25 + lVar16);
          dVar35 = (double)(float)((ulonglong)*(undefined8 *)(lVar25 + lVar16) >> 0x20);
          uVar17 = *(undefined8 *)(lVar25 + 8 + lVar16);
          dVar49 = (double)(float)uVar17;
          dVar53 = (double)(float)((ulonglong)uVar17 >> 0x20);
          auVar47 = *(undefined1 (*) [16])(param_5 + 8);
          dVar21 = auVar47._0_8_;
          dVar7 = auVar47._8_8_;
          dVar6 = SUB168(*(undefined1 (*) [16])(param_5 + 10),0);
          auVar46._8_8_ = dVar33;
          auVar46._0_8_ = dVar29;
          auVar47 = minpd(auVar46,auVar47);
          auVar51 = minpd(auVar50,*(undefined1 (*) [16])(param_5 + 10));
          auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
          auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
          iVar13 = movmskpd((int)lVar16,auVar48);
          auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
          auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
          uVar19 = movmskpd((int)lVar25,auVar52);
          local_458 = auVar50;
          if ((uVar19 & 0x3fffffff) == 0 && iVar13 == 0) {
            dVar9 = *param_5;
            dVar10 = param_5[1];
            dVar11 = param_5[2];
            dVar43 = param_5[3];
            dVar44 = param_5[3];
            dVar45 = param_5[1];
            dVar1 = param_5[1];
            dVar2 = param_5[2];
            dVar3 = param_5[2];
            dVar8 = dVar35 * dVar2 * -1.0 +
                    dVar49 * dVar45 + dVar53 * *param_5 * 1.0 + dVar43 * dVar34;
            dVar41 = dVar34 * dVar3 * 1.0 +
                     dVar53 * dVar1 + dVar49 * *param_5 * -1.0 + dVar44 * dVar35;
            local_328._0_8_ =
                 dVar53 * dVar2 * 1.0 +
                 ((*param_5 * dVar35 * 1.0 + dVar43 * dVar49) - dVar45 * dVar34);
            local_328._8_8_ =
                 dVar49 * dVar3 * -1.0 +
                 ((*param_5 * dVar34 * -1.0 + dVar44 * dVar53) - dVar1 * dVar35);
            dVar34 = local_468 * dVar21;
            dVar35 = dStack_460 * dVar7;
            dVar36 = dVar36 * dVar6;
            dVar53 = dVar35 * dVar9 - dVar34 * dVar10;
            dVar45 = dVar36 * dVar10 - dVar35 * dVar11;
            dVar49 = dVar34 * dVar11 - dVar36 * dVar9;
            dVar45 = dVar45 + dVar45;
            dVar49 = dVar49 + dVar49;
            dVar53 = dVar53 + dVar53;
            dVar34 = (dVar53 * dVar10 - dVar11 * dVar49) + dVar43 * dVar45 + dVar34 + param_5[4];
            dVar35 = (dVar45 * dVar11 - dVar53 * dVar9) + dVar44 * dVar49 + dVar35 + param_5[5];
            local_308 = (dVar49 * dVar9 - dVar10 * dVar45) + dVar43 * dVar53 + dVar36 + param_5[6];
          }
          else {
            dVar3 = *param_5;
            dVar9 = param_5[1];
            dVar10 = param_5[2];
            dVar41 = dVar9 + dVar9;
            dVar43 = dVar10 + dVar10;
            dVar44 = dVar3 * (dVar3 + dVar3);
            dVar2 = (1.0 - (dVar10 * dVar43 + dVar44)) * dVar7;
            dVar8 = param_5[3];
            dVar45 = dVar43 * dVar8;
            dVar1 = (dVar3 + dVar3) * param_5[3];
            dVar8 = dVar41 * dVar8;
            dStack_1b0 = (dVar43 * dVar9 - dVar1) * dVar6;
            local_1b8 = (dVar8 + *param_5 * dVar43) * dVar6;
            local_1a8 = (1.0 - (dVar44 + dVar9 * dVar41)) * dVar6;
            dVar44 = (dVar41 * dVar3 + dVar45) * dVar21;
            local_1c8 = (dVar43 * dVar9 + dVar1) * dVar7;
            local_1e8 = (*param_5 * dVar43 - dVar8) * dVar21;
            local_1f8._8_4_ = SUB84(dVar44,0);
            local_1f8._0_8_ = (1.0 - (dVar10 * dVar43 + dVar9 * dVar41)) * dVar21;
            local_1f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar2,0);
            local_1d8._0_8_ = (dVar41 * dVar3 - dVar45) * dVar7;
            local_1d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_5[4];
            dStack_190 = param_5[5];
            local_188 = param_5[6];
            uStack_180 = 0x3ff0000000000000;
            dVar8 = dVar35 + dVar35;
            dVar44 = dVar49 + dVar49;
            dVar45 = (dVar34 + dVar34) * dVar34;
            local_228 = (1.0 - (dVar45 + dVar8 * dVar35)) * auVar50._0_8_;
            dVar43 = (dVar34 + dVar34) * dVar53;
            dVar41 = (dVar44 * dVar35 - dVar43) * auVar50._0_8_;
            local_278 = ((double)DAT_149934d80 - (dVar44 * dVar49 + dVar8 * dVar35)) * dVar29;
            dStack_270 = (dVar8 * dVar34 + dVar44 * dVar53) * dVar29;
            local_248 = (dVar44 * dVar35 + dVar43) * dVar33;
            local_268 = (dVar34 * dVar44 - dVar8 * dVar53) * dVar29;
            uStack_260 = 0;
            local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar44 * dVar49 + dVar45)) * dVar33;
            local_258._0_8_ = (dVar8 * dVar34 - dVar44 * dVar53) * dVar33;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar41,0);
            local_238._0_8_ = (dVar34 * dVar44 + dVar8 * dVar53) * auVar50._0_8_;
            local_238._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            uStack_220 = 0;
            uStack_200 = 0x3ff0000000000000;
            local_218 = local_468;
            dStack_210 = dStack_460;
            local_208 = dVar36;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar30._8_8_ = -(ulonglong)(0.0 <= dVar7 * dVar33);
            auVar30._0_8_ = -(ulonglong)(0.0 <= dVar21 * dVar29);
            auVar47 = blendvpd(_DAT_149936790,auVar39,auVar30);
            uVar28 = -(ulonglong)(0.0 <= dVar6 * auVar50._0_8_);
            dVar34 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar35 = auVar47._0_8_;
            local_168 = local_168 * dVar35;
            dStack_170 = dStack_170 * dVar35;
            local_178 = local_178 * dVar35;
            dVar35 = auVar47._8_8_;
            local_148 = local_148 * dVar35;
            uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150) * dVar35;
            local_158 = dVar35 * (double)CONCAT44(local_158._4_4_,(float)local_158);
            local_128 = local_128 * dVar34;
            local_130 = local_130 * dVar34;
            local_138 = dVar34 * local_138;
            FUN_14481fd10(&local_398,&local_178);
            dVar34 = local_388 * local_388 + local_398 * local_398;
            dVar35 = dStack_380 * dStack_380 + dStack_390 * dStack_390;
            auVar37._0_8_ = dVar34 + dVar35;
            auVar37._8_8_ = dVar34 + dVar35;
            auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
            auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
            auVar47 = sqrtpd(auVar37,auVar37);
            auVar39 = divpd(auVar39,auVar47);
            auVar40._0_8_ = auVar39._0_8_ * local_388;
            auVar40._8_8_ = auVar39._8_8_ * dStack_380;
            dVar8 = (double)((ulonglong)(local_398 * auVar39._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
            dVar41 = (double)((ulonglong)(dStack_390 * auVar39._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
            local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar31);
            dVar34 = local_118;
            dVar35 = dStack_110;
            local_308 = local_108;
          }
          local_2f0 = auVar50._0_8_ * dVar6;
          dVar33 = dVar33 * dVar7;
          dVar29 = dVar29 * dVar21;
          local_338._8_4_ = SUB84(dVar41,0);
          local_338._0_8_ = dVar8;
          local_338._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          local_318._8_4_ = SUB84(dVar35,0);
          local_318._0_8_ = dVar34;
          local_318._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        }
        else {
          local_3a8 = *(undefined8 *)(param_2 + 0x120);
          local_3a0 = *(undefined4 *)(param_2 + 0x128);
          local_3b8 = *local_448;
          lStack_3b0 = local_448[1];
          pdVar20 = &local_398;
          uVar15 = FUN_146eba195(pdVar20,&local_3b8,&local_3a8,iVar4);
          auVar47 = _DAT_149934d80;
          auVar39 = *(undefined1 (*) [16])(param_5 + 8);
          dVar21 = auVar39._0_8_;
          dVar34 = auVar39._8_8_;
          dVar6 = SUB168(*(undefined1 (*) [16])(param_5 + 10),0);
          dVar29 = local_358._0_8_;
          dVar33 = local_358._8_8_;
          dVar7 = local_348._0_8_;
          auVar39 = minpd(local_358,auVar39);
          auVar42 = minpd(local_348,*(undefined1 (*) [16])(param_5 + 10));
          auVar51._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar51._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          iVar13 = movmskpd(uVar15,auVar51);
          auVar39._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
          auVar39._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
          uVar19 = movmskpd((int)pdVar20,auVar39);
          if ((uVar19 & 0x3fffffff) == 0 && iVar13 == 0) {
            dVar45 = *param_5;
            dVar1 = param_5[1];
            dVar2 = param_5[2];
            dVar53 = param_5[3];
            dVar49 = param_5[3];
            dVar36 = param_5[1];
            dVar35 = param_5[1];
            dVar8 = param_5[2];
            dVar41 = param_5[2];
            local_338._0_8_ =
                 dStack_390 * dVar8 * -1.0 +
                 local_388 * dVar36 + dStack_380 * *param_5 * 1.0 + local_398 * dVar53;
            local_338._8_8_ =
                 local_398 * dVar41 * 1.0 +
                 dStack_380 * dVar35 + local_388 * *param_5 * -1.0 + dStack_390 * dVar49;
            local_328._0_8_ =
                 dStack_380 * dVar8 * 1.0 +
                 ((*param_5 * dStack_390 * 1.0 + local_388 * dVar53) - local_398 * dVar36);
            local_328._8_8_ =
                 local_388 * dVar41 * -1.0 +
                 ((*param_5 * local_398 * -1.0 + dStack_380 * dVar49) - dStack_390 * dVar35);
            dVar35 = local_378 * dVar21;
            dVar43 = dStack_370 * dVar34;
            dVar44 = local_368 * dVar6;
            dVar36 = dVar43 * dVar45 - dVar1 * dVar35;
            dVar8 = dVar44 * dVar1 - dVar2 * dVar43;
            dVar41 = dVar35 * dVar2 - dVar45 * dVar44;
            dVar8 = dVar8 + dVar8;
            dVar41 = dVar41 + dVar41;
            dVar36 = dVar36 + dVar36;
            dVar35 = (dVar36 * dVar1 - dVar2 * dVar41) + dVar53 * dVar8 + dVar35 + param_5[4];
            dVar49 = (dVar8 * dVar2 - dVar36 * dVar45) + dVar49 * dVar41 + dVar43 + param_5[5];
            local_308 = (dVar41 * dVar45 - dVar1 * dVar8) + dVar53 * dVar36 + dVar44 + param_5[6];
          }
          else {
            dVar53 = *param_5;
            dVar36 = param_5[1];
            dVar8 = param_5[2];
            dVar41 = dVar36 + dVar36;
            dVar44 = dVar8 + dVar8;
            dVar49 = dVar53 * (dVar53 + dVar53);
            local_1a8 = (1.0 - (dVar49 + dVar36 * dVar41)) * dVar6;
            dVar35 = param_5[3];
            dVar43 = dVar44 * dVar35;
            dVar45 = (dVar53 + dVar53) * param_5[3];
            dVar35 = dVar41 * dVar35;
            local_1b8 = (dVar35 + *param_5 * dVar44) * dVar6;
            dVar49 = (DAT_149934d80._8_8_ - (dVar8 * dVar44 + dVar49)) * dVar34;
            local_1c8 = (dVar44 * dVar36 + dVar45) * dVar34;
            dStack_1b0 = (dVar44 * dVar36 - dVar45) * dVar6;
            local_1e8 = (*param_5 * dVar44 - dVar35) * dVar21;
            local_1f8._8_8_ = (dVar41 * dVar53 + dVar43) * dVar21;
            local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar8 * dVar44 + dVar36 * dVar41)) * dVar21;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar49,0);
            local_1d8._0_8_ = (dVar41 * dVar53 - dVar43) * dVar34;
            local_1d8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = param_5[4];
            dStack_190 = param_5[5];
            local_188 = param_5[6];
            uStack_180 = 0x3ff0000000000000;
            dVar49 = dStack_390 + dStack_390;
            dVar53 = local_388 + local_388;
            dVar35 = local_398 * (local_398 + local_398);
            local_228 = (1.0 - (dVar35 + dStack_390 * dVar49)) * dVar7;
            dVar36 = (local_398 + local_398) * dStack_380;
            local_278 = ((double)DAT_149934d80 - (local_388 * dVar53 + dStack_390 * dVar49)) *
                        dVar29;
            dVar35 = (DAT_149934d80._8_8_ - (local_388 * dVar53 + dVar35)) * dVar33;
            dStack_270 = (dVar49 * local_398 + dVar53 * dStack_380) * dVar29;
            local_248 = (dVar53 * dStack_390 + dVar36) * dVar33;
            local_268 = (local_398 * dVar53 - dVar49 * dStack_380) * dVar29;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar35,0);
            local_258._0_8_ = (dVar49 * local_398 - dVar53 * dStack_380) * dVar33;
            local_258._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            uStack_240 = 0;
            local_238._8_8_ = (dVar53 * dStack_390 - dVar36) * dVar7;
            local_238._0_8_ = (dVar49 * dStack_380 + local_398 * dVar53) * dVar7;
            uStack_220 = 0;
            local_218 = local_378;
            dStack_210 = dStack_370;
            local_208 = local_368;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar42._8_8_ = -(ulonglong)(0.0 <= dVar34 * dVar33);
            auVar42._0_8_ = -(ulonglong)(0.0 <= dVar21 * dVar29);
            auVar39 = blendvpd(_DAT_149936790,auVar47,auVar42);
            uVar28 = -(ulonglong)(0.0 <= dVar6 * dVar7);
            dVar35 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar49 = auVar39._0_8_;
            local_168 = local_168 * dVar49;
            dStack_170 = dStack_170 * dVar49;
            local_178 = local_178 * dVar49;
            dVar49 = auVar39._8_8_;
            local_148 = local_148 * dVar49;
            uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150) * dVar49;
            local_158 = dVar49 * (double)CONCAT44(local_158._4_4_,(float)local_158);
            local_128 = local_128 * dVar35;
            local_130 = local_130 * dVar35;
            local_138 = dVar35 * local_138;
            FUN_14481fd10(&local_2e8,&local_178);
            dVar35 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
            dVar49 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
            auVar38._0_8_ = dVar35 + dVar49;
            auVar38._8_8_ = dVar35 + dVar49;
            auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
            auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
            auVar39 = sqrtpd(auVar38,auVar38);
            auVar39 = divpd(auVar47,auVar39);
            auVar47._0_8_ = auVar39._0_8_ * local_2d8;
            auVar47._8_8_ = auVar39._8_8_ * dStack_2d0;
            local_338._0_8_ =
                 (ulonglong)(local_2e8 * auVar39._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
            local_338._8_8_ =
                 (ulonglong)(dStack_2e0 * auVar39._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
            local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar32);
            dVar35 = local_118;
            dVar49 = dStack_110;
            local_308 = local_108;
          }
          dVar33 = dVar33 * dVar34;
          dVar29 = dVar29 * dVar21;
          local_2f0 = dVar7 * dVar6;
          local_318._8_4_ = SUB84(dVar49,0);
          local_318._0_8_ = dVar35;
          local_318._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        }
        local_300._8_4_ = SUB84(dVar33,0);
        local_300._0_8_ = dVar29;
        local_300._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        uVar17 = FUN_14001cc68(0x2d0,0x10);
        FUN_148498f5a(uVar17,local_470);
        iVar13 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar13 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
          FUN_1456bd870(param_1,iVar13);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar13 * 8) = uVar17;
        lVar25 = *(longlong *)(*param_1 + (longlong)iVar13 * 8);
        *(int *)(lVar25 + 0x220) = iVar4;
        *(undefined1 (*) [16])(lVar25 + 0x230) = local_338;
        *(undefined1 (*) [16])(lVar25 + 0x240) = local_328;
        *(undefined8 *)(lVar25 + 0x250) = local_318._0_8_;
        *(undefined8 *)(lVar25 + 600) = local_318._8_8_;
        *(double *)(lVar25 + 0x260) = local_308;
        *(undefined8 *)(lVar25 + 0x268) = 0;
        *(undefined8 *)(lVar25 + 0x270) = local_300._0_8_;
        *(undefined8 *)(lVar25 + 0x278) = local_300._8_8_;
        *(double *)(lVar25 + 0x280) = local_2f0;
        *(undefined8 *)(lVar25 + 0x288) = 0;
        FUN_14582ed12(lVar25);
        FUN_14582ed9a(*(undefined8 *)(lVar25 + 0x208));
        iVar4 = *(int *)(*(longlong *)(param_2 + 0x430) + local_480 * 4);
        lVar16 = (longlong)iVar4;
        local_458._0_8_ = lVar16;
        iVar13 = *(int *)(*(longlong *)(param_2 + 0x450) + local_480 * 4);
        dVar21 = (double)(longlong)*(int *)(*(longlong *)(param_2 + 0x490) + local_480 * 4);
        local_168 = DAT_14c8464f0;
        local_178 = DAT_14c8464e0;
        dStack_170 = DAT_14c8464e8;
        local_158._0_4_ = DAT_14c846338;
        local_160 = DAT_14c846330;
        uStack_150._4_4_ = DAT_14c846338;
        local_158._4_4_ = (undefined4)DAT_14c846330;
        uStack_150._0_4_ = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
        local_148 = DAT_14c84635c;
        local_140 = 0x101;
        local_13e = 0;
        if (0 < iVar13) {
          local_418 = (longlong)(iVar13 + iVar4);
          local_468 = dVar21;
          do {
            lVar18 = *(longlong *)(param_2 + 0x230);
            lVar5 = lVar16 * 0xc;
            local_268 = (double)*(float *)(lVar18 + 8 + lVar5) * local_2f0;
            dStack_270 = (double)*(float *)(lVar18 + 4 + lVar5) * (double)local_300._8_8_;
            local_278 = (double)*(float *)(lVar18 + lVar5) * (double)local_300._0_8_;
            FUN_146bed047(local_1f8,local_338,&local_278);
            local_168 = local_1e8 + local_308;
            dStack_170 = (double)local_1f8._8_8_ + (double)local_318._8_8_;
            local_178 = (double)local_1f8._0_8_ + (double)local_318._0_8_;
            lVar23 = lVar16 * 0x10;
            uVar17 = *(undefined8 *)(*(longlong *)(param_2 + 0x250) + lVar23);
            uStack_150._4_4_ = *(float *)(*(longlong *)(param_2 + 0x250) + 8 + lVar23);
            local_158._4_4_ = (undefined4)uVar17;
            uStack_150._0_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
            lVar18 = *(longlong *)(param_2 + 0x2b0);
            local_268 = (double)*(float *)(lVar18 + 8 + lVar5);
            dStack_270 = (double)*(float *)(lVar18 + 4 + lVar5);
            local_278 = (double)*(float *)(lVar18 + lVar5);
            FUN_146bed047(local_1f8,local_338);
            local_158._0_4_ = (float)local_1e8;
            local_160 = CONCAT44((float)(double)local_1f8._8_8_,(float)(double)local_1f8._0_8_);
            uVar19 = FUN_146c02208(lVar25,&local_178);
            lVar18 = *(longlong *)(param_2 + 0x250);
            local_3c8[0] = *(undefined4 *)(lVar18 + lVar23);
            local_3c8[1] = *(undefined4 *)(lVar18 + 4 + lVar23);
            local_3c8[2] = *(undefined4 *)(lVar18 + 8 + lVar23);
            local_3c8[3] = *(undefined4 *)(lVar18 + 0xc + lVar23);
            lVar18 = FUN_146bce3f6(*(undefined8 *)(lVar25 + 0x208),DAT_14cb4bdf0);
            lVar23 = 0;
            do {
              *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)(lVar18 + 0x20) + (ulonglong)(uVar19 >> 7 & 0x7fffff) * 8) +
                (ulonglong)((uVar19 & 0x7f) << 4) + lVar23 * 4) = local_3c8[lVar23];
              lVar23 = lVar23 + 1;
            } while (lVar23 != 4);
            lVar18 = *(longlong *)(param_2 + 0x290);
            local_268 = (double)*(float *)(lVar18 + 8 + lVar5);
            dStack_270 = (double)*(float *)(lVar18 + 4 + lVar5);
            local_278 = (double)*(float *)(lVar18 + lVar5);
            FUN_146bed047(local_1f8,local_338,&local_278);
            local_3cc = (float)local_1e8;
            local_3d0 = (float)(double)local_1f8._8_8_;
            local_3d4 = (float)(double)local_1f8._0_8_;
            lVar18 = *(longlong *)(param_2 + 0x270);
            local_2d8 = (double)*(float *)(lVar18 + 8 + lVar5);
            dStack_2e0 = (double)*(float *)(lVar18 + 4 + lVar5);
            local_2e8 = (double)*(float *)(lVar18 + lVar5);
            FUN_146bed047(&local_398,local_338,&local_2e8);
            local_3d8 = (float)local_388;
            local_3dc = (float)dStack_390;
            local_3e0 = (float)local_398;
            FUN_148488573(lVar25,uVar19,&local_3e0,&local_3d4);
            uVar28 = local_470;
            if (0 < (int)local_470) {
              uVar26 = 0;
              do {
                FUN_1484883eb(lVar25,uVar19,
                              *(undefined8 *)(*(longlong *)(local_2c0[uVar26] + 0x10) + lVar16 * 8),
                              uVar26 & 0xffffffff);
                uVar26 = uVar26 + 1;
              } while (uVar28 != uVar26);
            }
            lVar16 = lVar16 + 1;
            dVar21 = local_468;
            param_1 = local_440;
          } while (lVar16 < local_418);
        }
        if (0 < SUB84(dVar21,0)) {
          lVar16 = (longlong)*(int *)(*(longlong *)(param_2 + 0x470) + local_480 * 4);
          dVar21 = (double)((longlong)dVar21 + lVar16);
          local_468 = dVar21;
          do {
            uVar19 = (uint)lVar16;
            if ((char)param_1[8] == '\x01') {
              lVar18 = *(longlong *)(param_2 + 800);
              if (*(longlong *)(param_2 + 800) == 0) {
                lVar18 = local_438;
              }
              uVar14 = uVar19 + 0x1f;
              if (-1 < (int)uVar19) {
                uVar14 = uVar19;
              }
              if ((*(uint *)(lVar18 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0
                 ) goto LAB_14848e1b4;
            }
            else {
LAB_14848e1b4:
              lVar18 = *(longlong *)(param_2 + 0x2f0);
              local_3ec[2] = local_458._0_4_;
              local_3ec[0] = *(int *)(lVar18 + lVar16 * 0xc) - local_3ec[2];
              local_3ec[1] = *(int *)(lVar18 + 4 + lVar16 * 0xc) - local_3ec[2];
              local_3ec[2] = *(int *)(lVar18 + 8 + lVar16 * 0xc) - local_3ec[2];
              uVar14 = FUN_146c01152(lVar25,local_3ec,0);
              if (uVar14 == 0xfffffffe) {
                local_3f8 = 0xffffffffffffffff;
                local_3f0 = 0xffffffff;
                lVar18 = 0;
                do {
                  uVar15 = FUN_146c08ff0(lVar25,lVar25,local_3ec[lVar18]);
                  lVar12 = local_478;
                  lVar24 = (longlong)local_3ec[lVar18] + local_458._0_8_;
                  lVar5 = *(longlong *)(local_478 + 0x290);
                  lVar23 = lVar24 * 0xc;
                  local_268 = (double)*(float *)(lVar5 + 8 + lVar23);
                  dStack_270 = (double)*(float *)(lVar5 + 4 + lVar23);
                  local_278 = (double)*(float *)(lVar5 + lVar23);
                  FUN_146bed047(local_1f8,local_338,&local_278);
                  local_3fc = (float)local_1e8;
                  local_400 = (float)(double)local_1f8._8_8_;
                  local_404 = (float)(double)local_1f8._0_8_;
                  lVar5 = *(longlong *)(lVar12 + 0x270);
                  local_2d8 = (double)*(float *)(lVar5 + 8 + lVar23);
                  dStack_2e0 = (double)*(float *)(lVar5 + 4 + lVar23);
                  local_2e8 = (double)*(float *)(lVar5 + lVar23);
                  FUN_146bed047(&local_398,local_338,&local_2e8);
                  local_408 = (float)local_388;
                  local_40c = (float)dStack_390;
                  local_410 = (float)local_398;
                  FUN_148488573(lVar25,uVar15,&local_410,&local_404);
                  uVar28 = local_470;
                  if (0 < (int)local_470) {
                    uVar26 = 0;
                    do {
                      FUN_1484883eb(lVar25,uVar15,
                                    *(undefined8 *)
                                     (*(longlong *)(local_2c0[uVar26] + 0x10) + lVar24 * 8),
                                    uVar26 & 0xffffffff);
                      uVar26 = uVar26 + 1;
                    } while (uVar28 != uVar26);
                  }
                  *(undefined4 *)((longlong)&local_3f8 + lVar18 * 4) = uVar15;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 3);
                uVar14 = FUN_146c01152(lVar25,&local_3f8,0);
                dVar21 = local_468;
                param_2 = local_478;
                param_1 = local_440;
              }
              if (-1 < (int)uVar14) {
                uVar28 = (ulonglong)(uVar14 >> 9);
                uVar26 = (ulonglong)(uVar14 & 0x1ff);
                *(undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(lVar25 + 0x208) + 0x48) + 0x20) +
                   uVar28 * 8) + uVar26 * 4) =
                     *(undefined4 *)(*(longlong *)(param_2 + 0x360) + lVar16 * 4);
                lVar18 = *(longlong *)(param_2 + 800);
                if (*(longlong *)(param_2 + 800) == 0) {
                  lVar18 = local_438;
                }
                uVar14 = uVar19 + 0x1f;
                if (-1 < (int)uVar19) {
                  uVar14 = uVar19;
                }
                local_480 = CONCAT44(local_480._4_4_,
                                     *(undefined4 *)(lVar18 + (longlong)((int)uVar14 >> 5) * 4));
                lVar18 = FUN_146bce3f6(*(undefined8 *)(lVar25 + 0x208),DAT_14cb4be08);
                *(bool *)(*(longlong *)(*(longlong *)(lVar18 + 0x20) + uVar28 * 8) + uVar26) =
                     ((uint)local_480 >> (uVar19 & 0x1f) & 1) != 0;
                lVar18 = *(longlong *)(local_478 + 0x390);
                if (*(longlong *)(local_478 + 0x390) == 0) {
                  lVar18 = local_430;
                }
                uVar14 = *(uint *)(lVar18 + (longlong)((int)uVar14 >> 5) * 4);
                lVar18 = FUN_146bce3f6(*(undefined8 *)(lVar25 + 0x208),DAT_14cb4be10);
                *(bool *)(*(longlong *)(*(longlong *)(lVar18 + 0x20) + uVar28 * 8) + uVar26) =
                     (uVar14 >> (uVar19 & 0x1f) & 1) != 0;
                param_2 = local_478;
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < (longlong)dVar21);
        }
        if (param_6 == '\0') {
          local_1f8._0_8_ = lVar25;
          FUN_146bc4fa2(local_1f8);
        }
        if (*(char *)(lVar25 + 0x290) == '\0') {
          FUN_145c688c4(lVar25,local_1f8,1);
          *(undefined1 (*) [16])(lVar25 + 0x2b8) = local_1d8;
          *(double *)(lVar25 + 0x2a8) = local_1e8;
          *(undefined8 *)(lVar25 + 0x2b0) = uStack_1e0;
          *(undefined8 *)(lVar25 + 0x298) = local_1f8._0_8_;
          *(undefined8 *)(lVar25 + 0x2a0) = local_1f8._8_8_;
          *(undefined1 *)(lVar25 + 0x290) = 1;
        }
        dVar21 = (double)param_1[2];
        if (*(double *)(lVar25 + 0x298) <= (double)param_1[2]) {
          dVar21 = *(double *)(lVar25 + 0x298);
        }
        param_1[2] = (longlong)dVar21;
        dVar21 = (double)param_1[3];
        if (*(double *)(lVar25 + 0x2a0) <= (double)param_1[3]) {
          dVar21 = *(double *)(lVar25 + 0x2a0);
        }
        param_1[3] = (longlong)dVar21;
        dVar21 = (double)param_1[4];
        if (*(double *)(lVar25 + 0x2a8) <= (double)param_1[4]) {
          dVar21 = *(double *)(lVar25 + 0x2a8);
        }
        param_1[4] = (longlong)dVar21;
        dVar21 = (double)param_1[5];
        if ((double)param_1[5] <= *(double *)(lVar25 + 0x2b0)) {
          dVar21 = *(double *)(lVar25 + 0x2b0);
        }
        param_1[5] = (longlong)dVar21;
        dVar21 = (double)param_1[6];
        if ((double)param_1[6] <= *(double *)(lVar25 + 0x2b8)) {
          dVar21 = *(double *)(lVar25 + 0x2b8);
        }
        param_1[6] = (longlong)dVar21;
        dVar21 = (double)param_1[7];
        if ((double)param_1[7] <= *(double *)(lVar25 + 0x2c0)) {
          dVar21 = *(double *)(lVar25 + 0x2c0);
        }
        param_1[7] = (longlong)dVar21;
        piVar22 = local_420;
        piVar27 = local_428;
      }
      piVar22 = piVar22 + 1;
    } while (piVar22 != piVar27);
  }
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14848e682 FUN_14848e682 body=6915 status=ok
// SIG undefined FUN_14848e682(void)

int FUN_14848e682(longlong *param_1,longlong *param_2,double param_3,double param_4,char param_5,
                 undefined4 param_6,undefined ***param_7,undefined8 *param_8,char param_9,
                 char *param_10)

{
  longlong *plVar1;
  uint *puVar2;
  code *pcVar3;
  byte bVar4;
  double dVar5;
  void *_Src;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  longlong *plVar17;
  float *pfVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  float *pfVar29;
  bool bVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_738 [32];
  undefined ***local_718;
  undefined ***local_710;
  double local_708;
  undefined1 local_700;
  longlong *local_6f8;
  longlong *local_6f0;
  undefined8 *local_6e8;
  float *local_6e0;
  float *local_6d8;
  longlong local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  longlong *local_6b8;
  longlong local_6b0;
  undefined **local_6a8;
  int local_6a0;
  undefined4 local_69c;
  longlong *local_698;
  ulonglong *local_690;
  undefined4 *local_688;
  int *local_680;
  float *local_678;
  undefined8 uStack_670;
  undefined8 local_668 [12];
  longlong *local_608;
  undefined8 uStack_600;
  longlong local_5f8;
  longlong lStack_5f0;
  longlong local_5e8;
  longlong lStack_5e0;
  longlong local_5d8;
  longlong lStack_5d0;
  int *local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  longlong *local_5b0;
  char local_5a0;
  undefined8 *local_568;
  ulonglong uStack_560;
  ulonglong local_558;
  undefined4 local_500;
  undefined4 local_4fc;
  longlong local_4f8;
  ulonglong uStack_4f0;
  undefined8 local_4e8;
  int **ppiStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  ulonglong uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined2 uStack_490;
  undefined1 uStack_48e;
  undefined1 uStack_48d;
  undefined8 uStack_48c;
  undefined4 local_484;
  undefined4 uStack_480;
  uint uStack_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined4 local_434;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418 [2];
  undefined8 local_408;
  undefined **local_3d8 [2];
  undefined8 local_3c8;
  undefined4 local_398;
  int iStack_394;
  int local_390 [2];
  undefined4 *local_388;
  uint local_380;
  uint uStack_37c;
  char local_370;
  undefined **local_368;
  double dStack_360;
  undefined ***local_358;
  undefined8 uStack_350;
  double local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  longlong lStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  longlong lStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  int local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_288;
  undefined2 local_287;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined2 local_260;
  undefined1 local_25e;
  undefined4 local_25c;
  undefined1 local_258;
  undefined4 local_254;
  ulonglong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong lStack_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined1 local_177;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_738;
  uVar8 = FUN_146eaf23a(param_7);
  local_500 = param_6;
  local_4fc = param_6;
  iVar10 = (int)param_2[1];
  local_6e8 = (undefined8 *)CONCAT44(local_6e8._4_4_,uVar8);
  local_6f0 = param_1;
  local_6c8 = param_2;
  if (param_3 <= 0.0) {
    local_608 = (longlong *)0x0;
    uStack_600 = 0;
    lVar20 = param_1[1];
    if ((longlong)(int)lVar20 != 0) {
      lVar23 = *param_1;
      lVar28 = 0;
      do {
        lVar21 = *(longlong *)(lVar23 + lVar28);
        lVar11 = FUN_14001cc68(0x2d0,0x10);
        FUN_146bff712(lVar11,lVar21);
        memcpy((void *)(lVar11 + 0x220),(void *)(lVar21 + 0x220),0xa8);
        uVar31 = uStack_600;
        lVar21 = (longlong)(int)uStack_600;
        uVar9 = (int)uStack_600 + 1;
        uStack_600 = CONCAT44(uStack_600._4_4_,uVar9);
        if (uStack_600._4_4_ < uVar9) {
          FUN_1484a7fe6(&local_608,uVar31 & 0xffffffff);
        }
        local_608[lVar21] = lVar11;
        lVar28 = lVar28 + 8;
      } while ((longlong)(int)lVar20 * 8 != lVar28);
      iVar10 = (int)param_2[1];
    }
    if (0 < iVar10) {
      local_6c0 = (longlong *)(param_10 + 0x90);
      local_6d8 = (float *)((longlong)param_8 + 0xc);
      local_6b8 = local_6f0 + 2;
      local_6d0 = 0;
      do {
        if (param_10 != (char *)0x0) {
          iVar10 = -1;
          if (*param_10 != '\0') goto LAB_14848fe68;
          pcVar3 = *(code **)(param_10 + 0x70);
          plVar19 = *(longlong **)(param_10 + 0x80);
          if (*(longlong **)(param_10 + 0x80) == (longlong *)0x0) {
            plVar19 = local_6c0;
          }
          uVar15 = (**(code **)(*plVar19 + 8))();
          cVar7 = (*pcVar3)(uVar15);
          *param_10 = cVar7;
          if (cVar7 != '\0') goto LAB_14848fe68;
        }
        FUN_144a5dc74(&local_368);
        FUN_146c8a29c(&local_5c8,param_10);
        if (local_368 != (undefined **)0x0) {
          (**(code **)(*local_368 + 0x10))();
        }
        lVar20 = local_6d0 * 0x20;
        local_4e8._4_4_ = (uint)((ulonglong)local_4e8 >> 0x20) & 0xffffff00;
        local_4b0 = 0;
        uStack_4a8 = 0;
        local_4c0 = 0;
        uStack_4b8 = 0;
        local_4d0 = 0;
        uStack_4c8 = 0;
        ppiStack_4e0 = (int **)0x0;
        uStack_4d8 = 0;
        local_4a0 = CONCAT35((int3)((ulonglong)local_4a0 >> 0x28),0x100000000);
        local_498 = 0x3f800000;
        uStack_47c = uStack_47c & 0xffffff00;
        local_4e8 = (undefined **)CONCAT44(local_4e8._4_4_,2);
        FUN_148493e76(&local_4e8,*param_2 + lVar20);
        local_498 = *(undefined4 *)(param_8 + 1);
        local_4a0 = *param_8;
        if (&local_4a0 != param_8) {
          if (*(char *)((longlong)param_8 + 0x24) == '\x01') {
            local_484 = (undefined4)*(undefined8 *)(local_6d8 + 4);
            uStack_480 = (undefined4)((ulonglong)*(undefined8 *)(local_6d8 + 4) >> 0x20);
            uVar15 = *(undefined8 *)local_6d8;
            uStack_48c = *(undefined8 *)(local_6d8 + 2);
            uStack_494 = (undefined4)uVar15;
            uStack_490 = (undefined2)((ulonglong)uVar15 >> 0x20);
            uStack_48e = (undefined1)((ulonglong)uVar15 >> 0x30);
            uStack_48d = (undefined1)((ulonglong)uVar15 >> 0x38);
            uVar6 = 1;
          }
          else {
            if ((char)uStack_47c != '\x01') goto LAB_14848f13f;
            uVar6 = 0;
          }
          uStack_47c = CONCAT31(uStack_47c._1_3_,uVar6);
        }
LAB_14848f13f:
        dVar32 = (double)(-(ulonglong)(0.0 <= (double)local_6f0[7] - (double)local_6f0[4]) &
                         (ulonglong)((double)local_6f0[7] - (double)local_6f0[4]));
        dVar33 = (double)(-(ulonglong)(0.0 <= (double)local_6f0[6] - (double)local_6f0[3]) &
                         (ulonglong)((double)local_6f0[6] - (double)local_6f0[3]));
        uVar31 = -(ulonglong)(dVar32 <= dVar33);
        dVar32 = (double)(~uVar31 & (ulonglong)dVar32 | uVar31 & (ulonglong)dVar33);
        dVar33 = (double)(-(ulonglong)(0.0 <= (double)local_6f0[5] - (double)local_6f0[2]) &
                         (ulonglong)((double)local_6f0[5] - (double)local_6f0[2]));
        uVar31 = -(ulonglong)(dVar32 <= dVar33);
        local_708 = (double)(uVar31 & (ulonglong)dVar33 | ~uVar31 & (ulonglong)dVar32) * 0.01;
        local_368 = (undefined **)*local_6b8;
        dStack_360 = (double)local_6b8[1];
        local_358 = (undefined ***)local_6b8[2];
        uStack_350 = (double)local_6b8[3];
        local_348 = (double)local_6b8[4];
        uStack_340 = (undefined4)local_6b8[5];
        uStack_33c = (undefined4)((ulonglong)local_6b8[5] >> 0x20);
        local_568 = (undefined8 *)0x0;
        uStack_560 = 0;
        local_558 = 0x1ffffffff;
        local_718 = &local_368;
        local_700 = 0;
        local_710 = (undefined ***)0x0;
        FUN_14848a73c(&local_568,(ulonglong)local_6e8 & 0xffffffff,&local_500,&local_4e8);
        local_6e0 = (float *)(longlong)(int)uStack_600;
        if (0 < (longlong)local_6e0) {
          pfVar29 = (float *)0x0;
          local_6b0 = lVar20;
          do {
            dVar32 = (double)local_608[(longlong)pfVar29];
            local_6f8 = (longlong *)
                        CONCAT44(local_6f8._4_4_,*(undefined4 *)((longlong)dVar32 + 0x220));
            puVar24 = (undefined8 *)((longlong)dVar32 + 0x230);
            puVar25 = local_668;
            for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
              *puVar25 = *puVar24;
              puVar24 = puVar24 + 1;
              puVar25 = puVar25 + 1;
            }
            if (*(char *)((longlong)dVar32 + 0x290) == '\0') {
              FUN_145c688c4(dVar32,&local_368,1);
              *(double *)((longlong)dVar32 + 0x2b8) = local_348;
              *(ulonglong *)((longlong)dVar32 + 0x2c0) = CONCAT44(uStack_33c,uStack_340);
              *(undefined ****)((longlong)dVar32 + 0x2a8) = local_358;
              *(double *)((longlong)dVar32 + 0x2b0) = uStack_350;
              *(undefined ***)((longlong)dVar32 + 0x298) = local_368;
              *(double *)((longlong)dVar32 + 0x2a0) = dStack_360;
              *(undefined1 *)((longlong)dVar32 + 0x290) = 1;
            }
            local_368 = *(undefined ***)((longlong)dVar32 + 0x298);
            dStack_360 = *(double *)((longlong)dVar32 + 0x2a0);
            local_358 = *(undefined ****)((longlong)dVar32 + 0x2a8);
            uStack_350 = *(double *)((longlong)dVar32 + 0x2b0);
            local_348 = *(double *)((longlong)dVar32 + 0x2b8);
            dVar33 = *(double *)((longlong)dVar32 + 0x2c0);
            if (*(char *)((longlong)param_8 + 0x24) == '\x01') {
              dVar5 = (double)*local_6d8;
              uStack_350 = uStack_350 + dVar5;
              local_348 = local_348 + dVar5;
              dVar33 = dVar33 + dVar5;
              local_368 = (undefined **)((double)local_368 - dVar5);
              dStack_360 = dStack_360 - dVar5;
              local_358 = (undefined ***)((double)local_358 - dVar5);
            }
            uStack_340 = SUB84(dVar33,0);
            uStack_33c = (undefined4)((ulonglong)dVar33 >> 0x20);
            uStack_338 = CONCAT31(uStack_338._1_3_,
                                  (double)local_358 <= dVar33 &
                                  -((double)local_368 <= uStack_350 && dStack_360 <= local_348));
            cVar7 = FUN_140eb46be(*param_2 + lVar20,&local_368);
            if (cVar7 != '\0') {
              local_678 = (float *)0x0;
              uStack_670 = 0;
              lVar20 = 0;
              bVar30 = true;
              do {
                bVar22 = bVar30;
                uVar15 = FUN_14001cc68(0x2d0,0x10);
                FUN_148498f5a(uVar15,(ulonglong)local_6e8 & 0xffffffff);
                uVar31 = uStack_670;
                lVar23 = (longlong)(int)uStack_670;
                uVar9 = (int)uStack_670 + 1;
                uStack_670 = CONCAT44(uStack_670._4_4_,uVar9);
                if (uStack_670._4_4_ < uVar9) {
                  FUN_1484a7fe6(&local_678,uVar31 & 0xffffffff);
                }
                *(undefined8 *)(local_678 + lVar23 * 2) = uVar15;
                *(undefined4 *)(*(longlong *)(local_678 + lVar20 * 2) + 0x220) = local_6f8._0_4_;
                puVar24 = local_668;
                puVar25 = (undefined8 *)(*(longlong *)(local_678 + lVar20 * 2) + 0x230);
                for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                  *puVar25 = *puVar24;
                  puVar24 = puVar24 + 1;
                  puVar25 = puVar25 + 1;
                }
                lVar20 = 1;
                bVar30 = false;
              } while (bVar22);
              uVar31 = 0;
              bVar30 = true;
              do {
                bVar22 = bVar30;
                local_358 = (undefined ***)local_568[uVar31];
                local_368 = &PTR_FUN_149f64a58;
                local_308 = DAT_14c846520;
                local_318 = DAT_14c846510;
                uStack_310 = DAT_14c846518;
                local_320 = DAT_14c8464f0;
                local_330 = DAT_14c8464e0;
                lStack_328 = DAT_14c8464e8;
                uStack_340 = 0;
                uStack_33c = 0;
                uStack_350 = 0.0;
                local_348 = 0.0;
                uStack_338 = 0;
                uStack_334 = 0x3ff00000;
                uStack_2b8 = DAT_14c846520;
                local_2c8 = DAT_14c846510;
                uStack_2c0 = DAT_14c846518;
                local_2d0 = DAT_14c8464f0;
                local_2b0 = (uVar31 != (local_558 & 0xffffffff)) + 1;
                local_2e0 = DAT_14c8464e0;
                lStack_2d8 = DAT_14c8464e8;
                local_2f0 = 0;
                uStack_2ec = 0;
                local_300 = 0;
                uStack_2f8 = 0;
                uStack_2e8 = 0;
                uStack_2e4 = 0x3ff00000;
                local_2a8 = 0x3eb0c6f7a0000000;
                local_2a0 = CONCAT71(local_2a0._1_7_,1);
                local_298 = 0;
                uStack_294 = 0x3ff80000;
                uStack_290 = 0;
                uStack_28c = 0x3fe00000;
                local_288 = 1;
                local_280 = 0;
                local_270 = 0x3fb999999999999a;
                uStack_268 = 0x3fe0000000000000;
                local_260 = 0x101;
                local_25e = 1;
                local_25c = 0x358637bd;
                local_258 = 1;
                local_254 = 0x3c23d70a;
                local_248 = (undefined4)*(undefined8 *)(local_678 + uVar31 * 2);
                uStack_244 = (undefined4)
                             ((ulonglong)*(undefined8 *)(local_678 + uVar31 * 2) >> 0x20);
                local_230 = 0;
                uStack_240 = 0;
                uStack_23c = 0;
                uStack_238 = 0;
                local_228 = 0x3ff0000000000000;
                uStack_210 = DAT_14c8464f0;
                local_220 = DAT_14c8464e0;
                lStack_218 = DAT_14c8464e8;
                local_1f8 = DAT_14c846520;
                local_208 = DAT_14c846510;
                uStack_200 = DAT_14c846518;
                uStack_1c0 = 0;
                local_1b8 = 0;
                local_1e0 = 0;
                uStack_1d8 = 0;
                local_1f0 = 0;
                uStack_1ec = 0;
                uStack_1e8 = 0;
                uStack_1e4 = 0;
                local_1b4 = 0xffffffff00000080;
                local_1ac = 0;
                local_1a0 = 0;
                uStack_19c = 0;
                uStack_198 = 0;
                local_190 = 0;
                uStack_168 = 0;
                local_160 = 0;
                local_188 = 0;
                uStack_180 = 0;
                local_15c = 0xffffffff00000080;
                local_154 = 0;
                local_148 = 0;
                uStack_144 = 0;
                uStack_140 = 0;
                uStack_118 = 0;
                local_110 = 0;
                local_138 = 0;
                uStack_130 = 0;
                local_10c = 0xffffffff00000080;
                local_104 = 0;
                local_f8 = 0;
                uStack_f4 = 0;
                uStack_f0 = 0;
                local_e8 = 0x101;
                local_278 = CONCAT31(local_278._1_3_,1);
                local_250 = local_250 & 0xffffffff00000000;
                local_287 = 0x100;
                dStack_360 = dVar32;
                FUN_146c6fae2(&local_368);
                iVar10 = *(int *)(*(longlong *)(local_678 + uVar31 * 2) + 0x170);
                FUN_146ec7826(&local_368);
                if (iVar10 == 0) goto LAB_14848fb38;
                uVar31 = 1;
                bVar30 = false;
              } while (bVar22);
              pfVar18 = (float *)(local_608 + (longlong)pfVar29);
              if (pfVar18 != local_678) {
                lVar20 = *(longlong *)pfVar18;
                *(undefined8 *)pfVar18 = *(undefined8 *)local_678;
                local_678[0] = 0.0;
                local_678[1] = 0.0;
                if (lVar20 != 0) {
                  FUN_141082778(lVar20);
                  FUN_1400020a8(lVar20);
                }
              }
              uVar31 = uStack_600;
              pfVar18 = local_678;
              iVar10 = (int)uStack_600;
              uVar9 = (int)uStack_600 + 1;
              uStack_600 = CONCAT44(uStack_600._4_4_,uVar9);
              if (uStack_600._4_4_ < uVar9) {
                FUN_1484a7fe6(&local_608,uVar31 & 0xffffffff);
              }
              local_608[iVar10] = *(longlong *)(pfVar18 + 2);
              pfVar18[2] = 0.0;
              pfVar18[3] = 0.0;
              local_398 = SUB84(pfVar29,0);
              iStack_394 = iVar10;
              local_680 = local_390;
              local_688 = &local_398;
              FUN_1483f1f46(&local_368,&local_688);
              local_4f8 = 0x100000000;
              local_698 = &local_4f8;
              local_690 = &uStack_4f0;
              FUN_1483f1f46(&local_398,&local_698);
              local_4f8 = 0;
              uStack_4f0 = 0;
              lVar20 = 0;
              bVar30 = true;
              do {
                bVar22 = bVar30;
                if (param_5 != '\0') {
                  pppuVar12 = local_358;
                  if (local_358 == (undefined ***)0x0) {
                    pppuVar12 = &local_368;
                  }
                  cVar7 = FUN_148490d98(local_608[*(int *)((longlong)pppuVar12 + lVar20 * 4)],
                                        &local_4f8);
                  if (cVar7 != '\0') {
                    pppuVar12 = local_358;
                    if (local_358 == (undefined ***)0x0) {
                      pppuVar12 = &local_368;
                    }
                    lVar23 = local_608[*(int *)((longlong)pppuVar12 + lVar20 * 4)];
                    *(undefined1 *)(lVar23 + 0x290) = 0;
                    local_710 = (undefined ***)CONCAT71(local_710._1_7_,1);
                    local_718 = (undefined ***)CONCAT71(local_718._1_7_,1);
                    FUN_146c005f0(lVar23,local_4f8,1,1);
                    if (1 < (int)uStack_4f0) {
                      lVar28 = 1;
                      lVar23 = 0x220;
                      do {
                        lVar11 = local_4f8 + lVar23;
                        lVar21 = FUN_14001cc68(0x2d0,0x10);
                        FUN_146bff712(lVar21,lVar11);
                        uVar31 = uStack_600;
                        *(undefined4 *)(lVar21 + 0x220) = local_6f8._0_4_;
                        puVar24 = local_668;
                        puVar25 = (undefined8 *)(lVar21 + 0x230);
                        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                          *puVar25 = *puVar24;
                          puVar24 = puVar24 + 1;
                          puVar25 = puVar25 + 1;
                        }
                        *(undefined1 *)(lVar21 + 0x290) = 0;
                        *(undefined8 *)(lVar21 + 0x298) = 0x7fefffffffffffff;
                        *(undefined8 *)(lVar21 + 0x2a0) = 0x7fefffffffffffff;
                        *(undefined8 *)(lVar21 + 0x2a8) = 0x7fefffffffffffff;
                        *(undefined8 *)(lVar21 + 0x2b0) = 0xffefffffffffffff;
                        *(undefined8 *)(lVar21 + 0x2b8) = 0xffefffffffffffff;
                        *(undefined8 *)(lVar21 + 0x2c0) = 0xffefffffffffffff;
                        iVar10 = (int)uStack_600;
                        uVar9 = (int)uStack_600 + 1;
                        uStack_600 = CONCAT44(uStack_600._4_4_,uVar9);
                        if (uStack_600._4_4_ < uVar9) {
                          FUN_1484a7fe6(&local_608,uVar31 & 0xffffffff);
                        }
                        dVar32 = uStack_350;
                        local_608[iVar10] = lVar21;
                        lVar21 = (longlong)(int)uStack_350;
                        uVar9 = (int)uStack_350 + 1;
                        uStack_350 = (double)CONCAT44(uStack_350._4_4_,uVar9);
                        if (uStack_350._4_4_ < uVar9) {
                          FUN_1400c4ccc(&local_368,(ulonglong)dVar32 & 0xffffffff);
                        }
                        uVar9 = local_380;
                        pppuVar12 = local_358;
                        if (local_358 == (undefined ***)0x0) {
                          pppuVar12 = &local_368;
                        }
                        *(int *)((longlong)pppuVar12 + lVar21 * 4) = iVar10;
                        lVar21 = (longlong)(int)local_380;
                        local_380 = local_380 + 1;
                        if (uStack_37c < local_380) {
                          FUN_1400c4ccc(&local_398,uVar9);
                        }
                        puVar13 = local_388;
                        if (local_388 == (undefined4 *)0x0) {
                          puVar13 = &local_398;
                        }
                        puVar13[lVar21] = (int)lVar20;
                        lVar28 = lVar28 + 1;
                        lVar23 = lVar23 + 0x220;
                      } while (lVar28 < (int)uStack_4f0);
                    }
                  }
                }
                lVar20 = 1;
                bVar30 = false;
              } while (bVar22);
              FUN_1461a8f9d(local_4f8,uStack_4f0 & 0xffffffff);
              if (local_4f8 != 0) {
                FUN_1400020a8();
              }
              if (local_388 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_358 != (undefined ***)0x0) {
                FUN_1400020a8();
              }
LAB_14848fb38:
              FUN_1484a7fa6(local_678,uStack_670 & 0xffffffff);
              param_2 = local_6c8;
              lVar20 = local_6b0;
              if (local_678 != (float *)0x0) {
                FUN_1400020a8();
                param_2 = local_6c8;
                lVar20 = local_6b0;
              }
            }
            pfVar29 = (float *)((longlong)pfVar29 + 1);
          } while (pfVar29 != local_6e0);
        }
        FUN_148499c66(&local_568);
        FUN_148490186(&local_4e8);
        if (local_5a0 == '\0') {
          FUN_146c8a3d8(&local_5c8);
        }
        if (local_5b0 != (longlong *)0x0) {
          (**(code **)(*local_5b0 + 0x10))();
        }
        local_6d0 = local_6d0 + 1;
      } while (local_6d0 < (int)param_2[1]);
    }
    iVar10 = 0;
    local_348 = 0.0;
    uStack_340 = 0;
    local_368 = (undefined **)0x0;
    dStack_360 = 0.0;
    uStack_33c = 0x80;
    uStack_338 = 0xffffffff;
    uStack_334 = 0;
    lStack_328 = 0;
    local_320 = local_320 & 0xffffffff00000000;
    local_5c8 = (int *)((ulonglong)local_5c8 & 0xffffffff00000000);
    if (0 < (int)uStack_600) {
      do {
        local_4e8 = (undefined **)(local_608[iVar10] + 0x220);
        ppiStack_4e0 = &local_5c8;
        FUN_1406b2a14(&local_368,&local_568,&local_4e8,0);
        iVar10 = (int)local_5c8 + 1;
        local_5c8 = (int *)CONCAT44(local_5c8._4_4_,iVar10);
      } while (iVar10 < (int)uStack_600);
    }
    local_4e8 = (undefined **)0x0;
    ppiStack_4e0 = (int **)0x0;
    local_568 = (undefined8 *)CONCAT44(local_568._4_4_,0xffffffff);
    FUN_1448156a8(&local_4e8,&local_568);
    local_568 = (undefined8 *)0x0;
    uStack_560 = 0;
    local_5c8 = (int *)0x0;
    uStack_5c0 = 0;
    iVar26 = -1;
    if ((longlong)(int)local_6f0[1] != 0) {
      pfVar29 = (float *)*local_6f0;
      local_6d8 = pfVar29 + (longlong)(int)local_6f0[1] * 2;
      do {
        lVar20 = *(longlong *)pfVar29;
        iVar10 = *(int *)((longlong)param_7[0x32] + (longlong)*(int *)(lVar20 + 0x220) * 4);
        local_6e0 = pfVar29;
        if (param_9 == '\0') {
          uVar8 = *(undefined4 *)param_8;
        }
        else {
          uVar8 = FUN_1484917dc(param_7,iVar10);
        }
        local_6f8 = (longlong *)CONCAT44(local_6f8._4_4_,uVar8);
        bVar30 = (longlong)uStack_560 < 0;
        uStack_560 = uStack_560 & 0xffffffff00000000;
        if (bVar30) {
          FUN_14481578e(&local_568,0);
        }
        FUN_146be72fa(&local_368,*(undefined4 *)(lVar20 + 0x220),&local_568,0);
        uVar31 = uStack_5c0;
        if (1 < (int)uStack_560) {
          lVar20 = (longlong)(int)uStack_5c0;
          uVar9 = (int)uStack_5c0 + 1;
          uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar9);
          if (uStack_5c0._4_4_ < uVar9) {
            FUN_1446f48e2(&local_5c8,uVar31 & 0xffffffff);
          }
          local_5c8[lVar20] = iVar10;
          if ((longlong)(int)uStack_560 != 0) {
            local_6e8 = local_568;
            lVar20 = (longlong)(int)uStack_560 << 2;
            uVar31 = 0;
            do {
              lVar21 = (longlong)*(int *)((longlong)local_6e8 + uVar31 * 4);
              lVar23 = local_608[lVar21];
              FUN_148491834(&local_398,param_7,*(undefined4 *)(lVar23 + 0x220),uVar31 & 0xffffffff);
              local_6a8 = (undefined **)0x0;
              lVar28 = (longlong)local_390[0];
              _Src = (void *)CONCAT44(iStack_394,local_398);
              local_6a0 = local_390[0];
              if (lVar28 == 0) {
                local_69c = 0;
              }
              else {
                FUN_1446dd670(&local_6a8,local_390[0],0);
                memcpy(local_6a8,_Src,lVar28 * 2);
              }
              local_718 = &local_6a8;
              local_708 = (double)CONCAT44(local_708._4_4_,local_6f8._0_4_);
              local_710 = param_7;
              iVar10 = FUN_148491900(local_608[lVar21] + 0x230,lVar23,param_4);
              *(int *)((longlong)local_4e8 + lVar21 * 4) = iVar10;
              if (iVar26 == -1) {
                iVar26 = iVar10;
              }
              if (CONCAT44(iStack_394,local_398) != 0) {
                FUN_1400020a8();
              }
              uVar31 = uVar31 + 1;
              lVar20 = lVar20 + -4;
            } while (lVar20 != 0);
          }
        }
        pfVar29 = local_6e0 + 2;
      } while (pfVar29 != local_6d8);
    }
    if (param_10 == (char *)0x0) {
LAB_14848fd7e:
      FUN_143b63a6b(param_7,iVar26,1);
      iVar10 = iVar26;
      if (0 < (longlong)(int)uStack_5c0) {
        piVar14 = local_5c8;
        do {
          iVar26 = *(int *)((longlong)param_7[0x92] + (longlong)*piVar14 * 4);
          if (0 < iVar26) {
            iVar16 = *(int *)((longlong)param_7[0x8e] + (longlong)*piVar14 * 4);
            iVar26 = iVar26 + iVar16;
            do {
              pppuVar12 = (undefined ***)param_7[100];
              if ((undefined ***)param_7[100] == (undefined ***)0x0) {
                pppuVar12 = param_7 + 0x62;
              }
              iVar27 = iVar16 + 0x1f;
              if (-1 < iVar16) {
                iVar27 = iVar16;
              }
              bVar4 = (byte)iVar16 & 0x1f;
              puVar2 = (uint *)((longlong)pppuVar12 + (longlong)(iVar27 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar26);
          }
          piVar14 = piVar14 + 1;
        } while (piVar14 != local_5c8 + (int)uStack_5c0);
      }
    }
    else {
      iVar10 = -1;
      if (*param_10 == '\0') {
        pcVar3 = *(code **)(param_10 + 0x70);
        plVar19 = (longlong *)(param_10 + 0x90);
        if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
          plVar19 = *(longlong **)(param_10 + 0x80);
        }
        uVar15 = (**(code **)(*plVar19 + 8))();
        cVar7 = (*pcVar3)(uVar15);
        *param_10 = cVar7;
        if (cVar7 == '\0') goto LAB_14848fd7e;
      }
    }
    if (local_5c8 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_568 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_4e8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    local_320 = local_320 & 0xffffffff00000000;
    if (lStack_328 != 0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_368);
LAB_14848fe68:
    FUN_1484a7fa6(local_608,uStack_600 & 0xffffffff);
    if (local_608 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14848efa6;
  }
  local_568 = (undefined8 *)0x0;
  uStack_560 = 0;
  local_558 = 0x1ffffffff;
  FUN_14848b312(&local_568,&local_500);
  FUN_14848a900(&local_568,2);
  plVar19 = local_6f0;
  local_6e0 = (float *)*local_568;
  local_348 = 0.0;
  uStack_340 = 0;
  local_368 = (undefined **)0x0;
  dStack_360 = 0.0;
  uStack_33c = 0x80;
  uStack_338 = 0xffffffff;
  uStack_334 = 0;
  lStack_328 = 0;
  local_320 = (ulonglong)local_320._4_4_ << 0x20;
  uStack_2f8 = 0;
  local_2f0 = 0;
  local_318 = 0;
  uStack_310 = 0;
  uStack_2ec = 0x80;
  uStack_2e8 = 0xffffffff;
  uStack_2e4 = 0;
  lStack_2d8 = 0;
  local_2d0 = (ulonglong)local_2d0._4_4_ << 0x20;
  local_2c8 = CONCAT62(local_2c8._2_6_,0x101);
  local_2a0 = 0;
  local_298 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_294 = 0x80;
  uStack_290 = 0xffffffff;
  uStack_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  uStack_244 = 0x80;
  uStack_240 = 0xffffffff;
  uStack_23c = 0;
  local_230 = 0;
  local_228 = (ulonglong)local_228._4_4_ << 0x20;
  local_220 = CONCAT62(local_220._2_6_,0x101);
  local_1f8 = 0;
  local_1f0 = 0;
  lStack_218 = 0;
  uStack_210 = 0;
  uStack_1ec = 0x80;
  uStack_1e8 = 0xffffffff;
  uStack_1e4 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_19c = 0x80;
  uStack_198 = 0xffffffff;
  local_194 = 0;
  local_188 = 0;
  uStack_180 = (ulonglong)uStack_180._4_4_ << 0x20;
  local_177 = 1;
  local_178 = 1;
  local_150 = 0;
  local_148 = 0;
  local_170 = 0;
  uStack_168 = 0;
  uStack_144 = 0x80;
  uStack_140 = 0xffffffff;
  local_13c = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_f4 = 0x80;
  uStack_f0 = 0xffffffff;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0x101;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_678 = local_6e0;
  if (0 < (int)param_2[1]) {
    local_6e8 = (undefined8 *)((longlong)param_8 + 0xc);
    plVar1 = local_6f0 + 2;
    local_6f8 = (longlong *)(param_10 + 0x90);
    lVar20 = 0;
    lVar23 = 0;
    do {
      FUN_144a5dc74(&local_4e8);
      FUN_146c8a29c(&local_398,param_10);
      if (local_4e8 != (undefined **)0x0) {
        (**(code **)(*local_4e8 + 0x10))();
      }
      local_4e8._4_4_ = (uint)((ulonglong)local_4e8 >> 0x20) & 0xffffff00;
      local_4b0 = 0;
      uStack_4a8 = 0;
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4d0 = 0;
      uStack_4c8 = 0;
      ppiStack_4e0 = (int **)0x0;
      uStack_4d8 = 0;
      local_4a0 = CONCAT35((int3)((ulonglong)local_4a0 >> 0x28),0x100000000);
      local_498 = 0x3f800000;
      uStack_47c = uStack_47c & 0xffffff00;
      local_4e8 = (undefined **)CONCAT44(local_4e8._4_4_,2);
      FUN_148493e76(&local_4e8,*param_2 + lVar20);
      local_498 = *(undefined4 *)(param_8 + 1);
      local_4a0 = *param_8;
      if (&local_4a0 != param_8) {
        if (*(char *)((longlong)param_8 + 0x24) == '\x01') {
          local_484 = (undefined4)local_6e8[2];
          uStack_480 = (undefined4)((ulonglong)local_6e8[2] >> 0x20);
          uVar15 = *local_6e8;
          uStack_48c = local_6e8[1];
          uStack_494 = (undefined4)uVar15;
          uStack_490 = (undefined2)((ulonglong)uVar15 >> 0x20);
          uStack_48e = (undefined1)((ulonglong)uVar15 >> 0x30);
          uStack_48d = (undefined1)((ulonglong)uVar15 >> 0x38);
          uVar6 = 1;
        }
        else {
          if ((char)uStack_47c != '\x01') goto LAB_14848eab1;
          uVar6 = 0;
        }
        uStack_47c = CONCAT31(uStack_47c._1_3_,uVar6);
      }
LAB_14848eab1:
      local_5c8 = (int *)0x0;
      uStack_5c0 = 0;
      local_5b8 = 0x1ffffffff;
      FUN_14848b312(&local_5c8,&local_500);
      local_5f8 = *plVar1;
      lStack_5f0 = plVar19[3];
      local_5e8 = plVar19[4];
      lStack_5e0 = plVar19[5];
      local_5d8 = plVar19[6];
      lStack_5d0 = plVar19[7];
      FUN_14848a994(&local_5c8,&local_4e8,&local_5f8);
      local_3d8[0] = (undefined **)0x0;
      local_3c8 = 0;
      local_418[0] = 0;
      local_408 = 0;
      local_718 = local_3d8;
      local_710 = (undefined ***)((ulonglong)local_710 & 0xffffffffffffff00);
      FUN_146bcbbdc(&local_678,*(undefined8 *)local_5c8,&local_368,local_418);
      if (param_10 != (char *)0x0) {
        if (*param_10 == '\0') {
          pcVar3 = *(code **)(param_10 + 0x70);
          plVar17 = *(longlong **)(param_10 + 0x80);
          if (*(longlong **)(param_10 + 0x80) == (longlong *)0x0) {
            plVar17 = local_6f8;
          }
          uVar15 = (**(code **)(*plVar17 + 8))();
          cVar7 = (*pcVar3)(uVar15);
          *param_10 = cVar7;
          param_2 = local_6c8;
          if (cVar7 == '\0') goto LAB_14848eb8d;
        }
        FUN_148499c66(&local_5c8);
        FUN_148490186(&local_4e8);
        if (local_370 == '\0') {
          FUN_146c8a3d8(&local_398);
        }
        if ((longlong *)CONCAT44(uStack_37c,local_380) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_37c,local_380) + 0x10))();
        }
        iVar10 = -1;
        goto LAB_14848ef8c;
      }
LAB_14848eb8d:
      FUN_148499c66(&local_5c8);
      FUN_148490186(&local_4e8);
      if (local_370 == '\0') {
        FUN_146c8a3d8(&local_398);
      }
      if ((longlong *)CONCAT44(uStack_37c,local_380) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_37c,local_380) + 0x10))();
      }
      lVar23 = lVar23 + 1;
      lVar20 = lVar20 + 0x20;
    } while (lVar23 < (int)param_2[1]);
  }
  FUN_144a5dc74(&local_4e8);
  FUN_146c8a29c(&local_5c8,param_10);
  if (local_4e8 != (undefined **)0x0) {
    (**(code **)(*local_4e8 + 0x10))();
  }
  pfVar29 = local_6e0;
  local_4e8 = &PTR_FUN_149f64a48;
  ppiStack_4e0 = (int **)CONCAT71(ppiStack_4e0._1_7_,1);
  uStack_4d8 = 0x3ff8000000000000;
  local_4d0 = 0x3eb0c6f7a0000000;
  uStack_4c8 = 0x3eb0c6f7a0000000;
  local_4c0 = 0x3fe0000000000000;
  local_4b0 = 0;
  local_4a0 = 0x3fb999999999999a;
  local_498 = 0;
  uStack_494 = 0x3fd00000;
  uStack_490 = 0x101;
  uStack_48e = 1;
  uStack_48c = CONCAT35(uStack_48c._5_3_,0x1358637bd);
  local_484 = 0x3c23d70a;
  uStack_480 = SUB84(local_6e0,0);
  uStack_47c = (uint)((ulonglong)local_6e0 >> 0x20);
  local_448 = 0;
  local_440 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_43c = 0xffffffff00000080;
  local_434 = 0;
  local_428 = 0;
  local_420 = 0;
  uStack_4a8 = CONCAT71(uStack_4a8._1_7_,1);
  uStack_4b8 = uStack_4b8 & 0xffffffffff000000;
  FUN_146c7648e();
  FUN_146c8a3d8(&local_5c8);
  if (param_10 == (char *)0x0) {
LAB_14848ee53:
    FUN_144a5dc74(&local_608);
    FUN_146c8a302(&local_398,param_10);
    if (local_608 != (longlong *)0x0) {
      (**(code **)(*local_608 + 0x10))();
    }
    local_710._0_1_ = 1;
    local_718 = (undefined ***)CONCAT71(local_718._1_7_,1);
    FUN_146c005f0(local_568[1],pfVar29,1,1);
    local_558 = CONCAT44(local_558._4_4_,1);
    local_608 = (longlong *)0x0;
    uStack_600 = 1;
    FUN_1406b704c(&local_608,0);
    *local_608 = -0x100000000;
    local_710 = (undefined ***)CONCAT71(local_710._1_7_,param_9);
    local_718 = param_7;
    local_708 = param_4;
    iVar10 = FUN_1484901e8(local_6f0,param_8,&local_568,param_5);
    if (local_608 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_370 == '\0') {
      FUN_146c8a3d8(&local_398);
    }
    if ((longlong *)CONCAT44(uStack_37c,local_380) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_37c,local_380) + 0x10))();
    }
  }
  else {
    iVar10 = -1;
    if (*param_10 == '\0') {
      pcVar3 = *(code **)(param_10 + 0x70);
      plVar19 = (longlong *)(param_10 + 0x90);
      if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
        plVar19 = *(longlong **)(param_10 + 0x80);
      }
      uVar15 = (**(code **)(*plVar19 + 8))();
      cVar7 = (*pcVar3)(uVar15);
      *param_10 = cVar7;
      if (cVar7 == '\0') goto LAB_14848ee53;
    }
  }
  FUN_146ec77cc(&local_4e8);
  if (local_5a0 == '\0') {
    FUN_146c8a3d8(&local_5c8);
  }
  if (local_5b0 != (longlong *)0x0) {
    (**(code **)(*local_5b0 + 0x10))();
  }
LAB_14848ef8c:
  FUN_146bfdcfe(&local_368);
  FUN_148499c66(&local_568);
LAB_14848efa6:
  if ((local_a0 ^ (ulonglong)auStack_738) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar10;
}



// FUNCTION 148490186 FUN_148490186 body=98 status=ok
// SIG undefined FUN_148490186(void)

void FUN_148490186(longlong param_1)

{
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484901e8 FUN_1484901e8 body=2990 status=ok
// SIG undefined FUN_1484901e8(void)

int FUN_1484901e8(longlong *param_1,undefined4 *param_2,longlong *param_3,char param_4,
                 ulonglong param_5,char param_6,undefined4 param_7)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStack_2c8 [32];
  void **local_2a8;
  ulonglong local_2a0;
  undefined8 *local_298;
  int local_28c;
  char local_285;
  uint local_284;
  undefined4 local_280;
  int local_27c;
  longlong local_278;
  longlong *local_270;
  longlong local_268;
  undefined4 *local_260;
  longlong *local_258;
  longlong *local_250;
  ulonglong local_248;
  void *local_240;
  int local_238;
  undefined4 local_234;
  int local_22c;
  void *local_228;
  int local_220;
  undefined4 local_21c;
  void *local_218;
  int local_210;
  longlong local_208;
  ulonglong uStack_200;
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  int *local_180;
  int *local_178;
  undefined1 local_16c [4];
  code *local_168;
  undefined8 *puStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong lStack_b0;
  undefined4 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  iVar19 = (int)param_3[1];
  local_260 = param_2;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar19);
  }
  if ((iVar19 != 0) && (FUN_14840200a(&local_1a8), 0 < (int)param_3[1])) {
    lVar16 = 0;
    do {
      FUN_145c688c4(*(undefined8 *)(*param_3 + lVar16 * 8),&local_c8,1);
      uVar13 = uStack_1a0;
      lVar22 = (longlong)(int)uStack_1a0;
      uVar7 = (int)uStack_1a0 + 1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar7);
      if (uStack_1a0._4_4_ < uVar7) {
        FUN_146bf26b8(&local_1a8,uVar13 & 0xffffffff);
      }
      lVar22 = lVar22 * 0x30;
      plVar11 = (longlong *)(local_1a8 + 0x20 + lVar22);
      *plVar11 = (longlong)local_a8;
      plVar11[1] = CONCAT44(uStack_9c,uStack_a0);
      plVar11 = (longlong *)(local_1a8 + 0x10 + lVar22);
      *plVar11 = (longlong)local_b8;
      plVar11[1] = lStack_b0;
      puVar2 = (undefined4 *)(local_1a8 + lVar22);
      *puVar2 = (undefined4)local_c8;
      puVar2[1] = local_c8._4_4_;
      puVar2[2] = (undefined4)uStack_c0;
      puVar2[3] = uStack_c0._4_4_;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)param_3[1]);
  }
  if ((longlong)(int)param_1[1] == 0) {
    local_28c = -1;
  }
  else {
    plVar11 = (longlong *)*param_1;
    local_258 = plVar11 + (int)param_1[1];
    local_28c = -1;
    do {
      lVar16 = *plVar11;
      local_27c = *(int *)(*(longlong *)(param_5 + 400) + (longlong)*(int *)(lVar16 + 0x220) * 4);
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_250 = plVar11;
      FUN_1484925fa(&local_1b8,(int)param_3[1]);
      if (*(char *)(lVar16 + 0x290) == '\0') {
        FUN_145c688c4(lVar16,&local_c8,1);
        *(undefined4 **)(lVar16 + 0x2b8) = local_a8;
        *(ulonglong *)(lVar16 + 0x2c0) = CONCAT44(uStack_9c,uStack_a0);
        *(longlong **)(lVar16 + 0x2a8) = local_b8;
        *(longlong *)(lVar16 + 0x2b0) = lStack_b0;
        *(longlong **)(lVar16 + 0x298) = local_c8;
        *(longlong **)(lVar16 + 0x2a0) = uStack_c0;
        *(undefined1 *)(lVar16 + 0x290) = 1;
      }
      local_1e8 = *(undefined4 *)(lVar16 + 0x298);
      uStack_1e4 = *(undefined4 *)(lVar16 + 0x29c);
      uStack_1e0 = *(undefined4 *)(lVar16 + 0x2a0);
      uStack_1dc = *(undefined4 *)(lVar16 + 0x2a4);
      local_1d8 = *(undefined4 *)(lVar16 + 0x2a8);
      uStack_1d4 = *(undefined4 *)(lVar16 + 0x2ac);
      uStack_1d0 = *(undefined4 *)(lVar16 + 0x2b0);
      uStack_1cc = *(undefined4 *)(lVar16 + 0x2b4);
      local_1c8 = *(undefined4 *)(lVar16 + 0x2b8);
      uStack_1c4 = *(undefined4 *)(lVar16 + 700);
      uStack_1c0 = *(undefined4 *)(lVar16 + 0x2c0);
      uStack_1bc = *(undefined4 *)(lVar16 + 0x2c4);
      local_c8 = &local_1b8;
      local_b8 = &local_1a8;
      local_a8 = &local_1e8;
      local_118 = 0;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      local_168 = FUN_143b6aa6a;
      puStack_160 = &local_c8;
      local_298 = &local_118;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_278 = lVar16;
      uStack_c0 = param_3;
      lStack_b0 = lVar16;
      FUN_1401f8d10(L"ParallelFor Task",(int)param_3[1]);
      iVar19 = 0;
      if ((longlong)(int)uStack_1b0 != 0) {
        lVar16 = 0;
        iVar10 = 0;
        do {
          if (*(longlong *)(local_1b8 + lVar16) != 0) {
            iVar10 = iVar10 + (uint)(0 < *(int *)(*(longlong *)(local_1b8 + lVar16) + 0x170));
          }
          lVar16 = lVar16 + 8;
        } while ((longlong)(int)uStack_1b0 << 3 != lVar16);
        iVar19 = (int)uStack_1b0;
        if (1 < iVar10) {
          local_a8 = (undefined4 *)0x0;
          uStack_a0 = 0;
          local_c8 = (longlong *)0x0;
          uStack_c0 = (longlong *)0x0;
          uStack_9c = 0x80;
          uStack_98 = 0xffffffff;
          local_94 = 0;
          local_88 = 0;
          local_80 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_ec = 0xffffffff00000080;
          local_e4 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_148 = 0;
          local_140 = 0;
          local_168 = (code *)0x0;
          puStack_160 = (undefined8 *)0x0;
          local_13c = 0xffffffff00000080;
          local_134 = 0;
          local_128 = 0;
          local_120 = 0;
          if (param_6 == '\0') {
            local_280 = *local_260;
          }
          else {
            local_280 = FUN_1484917dc(param_5,local_27c);
          }
          local_1ec = 0;
          iVar19 = (int)param_3[1];
          if (0 < iVar19) {
            local_268 = local_278 + 0x230;
            local_284 = 0;
            local_285 = param_4;
            local_270 = param_3;
            do {
              lVar16 = *(longlong *)(local_1b8 + (longlong)local_1ec * 8);
              if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x170))) {
                uVar14 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
                uVar7 = 0;
                if ((uVar14 != 0) &&
                   (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U)))
                {
                  uVar21 = 1;
                  uVar6 = 1;
                  if (1 < (int)uVar14) {
                    uVar21 = uVar14;
                  }
                  do {
                    uVar7 = uVar21;
                    if (uVar21 == uVar6) break;
                    uVar12 = uVar6 >> 9;
                    uVar18 = uVar6 & 0x1ff;
                    uVar7 = uVar6;
                    uVar6 = uVar6 + 1;
                  } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar12] +
                                                       (ulonglong)uVar18 * 2) - 1U));
                }
LAB_1484906c1:
                if (uVar7 != uVar14) {
                  uVar21 = *(uint *)(*(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(*(longlong *)(lVar16 + 0x208) + 0x48) + 0x20)
                                      + (ulonglong)(uVar7 >> 9) * 8) +
                                    (ulonglong)(uVar7 & 0x1ff) * 4);
                  uVar6 = ~uVar21;
                  if (-1 < (int)uVar21) {
                    uVar6 = 0xffffffff;
                  }
                  local_180 = (int *)CONCAT44(local_180._4_4_,uVar6);
                  if (-1 < (int)uVar6) {
                    FUN_1447cbafe(&local_c8,&local_208,&local_180,0);
                  }
                  uVar21 = uVar7 + 1;
                  if ((int)(uVar7 + 1) < (int)uVar14) {
                    uVar21 = uVar14;
                  }
                  uVar6 = uVar7;
                  do {
                    uVar7 = uVar21;
                    if (uVar21 - 1 == uVar6) break;
                    uVar7 = uVar6 + 1;
                    uVar6 = uVar7;
                  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                         (*(longlong *)(lVar16 + 0x148) +
                                                         (ulonglong)(uVar7 >> 9) * 8) +
                                                       (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
                  goto LAB_1484906c1;
                }
                local_1f0 = -1;
                local_208 = 0;
                uStack_200 = 0;
                if ((param_4 == '\0') || (cVar5 = FUN_148490d98(lVar16,&local_208), cVar5 == '\0'))
                {
                  FUN_148491834(&local_218,param_5,*(undefined4 *)(local_278 + 0x220),local_284);
                  pvVar4 = local_218;
                  param_3 = local_270;
                  local_240 = (void *)0x0;
                  lVar22 = (longlong)local_210;
                  local_238 = local_210;
                  if (lVar22 == 0) {
                    local_234 = 0;
                  }
                  else {
                    FUN_1446dd670(&local_240,local_210,0);
                    memcpy(local_240,pvVar4,lVar22 * 2);
                  }
                  local_2a8 = &local_240;
                  local_298 = (undefined8 *)CONCAT44(local_298._4_4_,local_280);
                  local_2a0 = param_5;
                  local_1f0 = FUN_148491900(local_268,lVar16,param_7);
                  local_180 = &local_1ec;
                  local_178 = &local_1f0;
                  FUN_1406b2a14(&local_118,local_16c,&local_180);
                  local_180 = &local_1f0;
                  local_178 = &local_1ec;
                  FUN_140263e2a(&local_168,local_16c,&local_180);
                  if (local_28c == -1) {
                    local_28c = local_1f0;
                  }
                  if (local_218 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  local_284 = local_284 + 1;
                  uVar13 = uStack_200 & 0xffffffff;
                }
                else {
                  uVar13 = uStack_200 & 0xffffffff;
                  param_3 = local_270;
                  if (0 < (int)uStack_200) {
                    local_248 = (ulonglong)local_284;
                    lVar16 = 0;
                    lVar22 = 0;
                    do {
                      lVar17 = local_208 + lVar16;
                      FUN_148491834(&local_218,param_5,*(undefined4 *)(local_278 + 0x220),
                                    (int)local_248 + (int)lVar22);
                      pvVar4 = local_218;
                      local_228 = (void *)0x0;
                      lVar15 = (longlong)local_210;
                      local_220 = local_210;
                      if (lVar15 == 0) {
                        local_21c = 0;
                      }
                      else {
                        FUN_1446dd670(&local_228,local_210,0);
                        memcpy(local_228,pvVar4,lVar15 * 2);
                      }
                      local_2a8 = &local_228;
                      local_298 = (undefined8 *)CONCAT44(local_298._4_4_,local_280);
                      local_2a0 = param_5;
                      local_1f0 = FUN_148491900(local_268,lVar17,param_7);
                      local_180 = &local_1ec;
                      local_178 = &local_1f0;
                      FUN_1406b2a14(&local_118,local_16c,&local_180);
                      if (lVar22 == 0) {
                        local_2a0 = CONCAT71(local_2a0._1_7_,1);
                        local_2a8 = (void **)CONCAT71(local_2a8._1_7_,1);
                        FUN_146c005f0(*(undefined8 *)(local_1b8 + (longlong)local_1ec * 8),lVar17,1)
                        ;
                        local_180 = &local_1f0;
                        local_178 = &local_1ec;
                        FUN_140263e2a(&local_168,local_16c,&local_180);
                      }
                      else {
                        uVar8 = FUN_14001cc68(0x220,0x10);
                        FUN_146bff712(uVar8,lVar17);
                        uVar13 = uStack_1b0;
                        iVar19 = (int)uStack_1b0;
                        uVar7 = (int)uStack_1b0 + 1;
                        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar7);
                        if (uStack_1b0._4_4_ < uVar7) {
                          FUN_1484a80a0(&local_1b8,uVar13 & 0xffffffff);
                        }
                        *(undefined8 *)(local_1b8 + (longlong)iVar19 * 8) = uVar8;
                        local_22c = iVar19;
                        local_180 = &local_1f0;
                        local_178 = &local_22c;
                        FUN_140c0fbee(&local_168,local_16c,&local_180);
                      }
                      if (local_28c == -1) {
                        local_28c = local_1f0;
                      }
                      if (local_218 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      lVar22 = lVar22 + 1;
                      uVar13 = (ulonglong)(int)uStack_200;
                      lVar16 = lVar16 + 0x220;
                    } while (lVar22 < (longlong)uVar13);
                    local_284 = local_284 + (int)lVar22;
                    param_3 = local_270;
                    param_4 = local_285;
                  }
                }
                FUN_1461a8f9d(local_208,uVar13);
                if (local_208 != 0) {
                  FUN_1400020a8();
                }
                iVar19 = (int)param_3[1];
              }
              local_1ec = local_1ec + 1;
            } while (local_1ec < iVar19);
          }
          uVar13 = uStack_190;
          lVar16 = (longlong)(int)uStack_190;
          uVar7 = (int)uStack_190 + 1;
          uStack_190 = CONCAT44(uStack_190._4_4_,uVar7);
          if (uStack_190._4_4_ < uVar7) {
            FUN_1446f48e2(&local_198,uVar13 & 0xffffffff);
          }
          local_198[lVar16] = local_27c;
          local_120 = 0;
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          FUN_144a6bfa8(&local_168);
          local_d0 = 0;
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          FUN_144a6bfa8(&local_118);
          local_80 = 0;
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_c8);
          iVar19 = (int)uStack_1b0;
        }
      }
      FUN_1484a806b(local_1b8,iVar19);
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      plVar11 = local_250 + 1;
    } while (plVar11 != local_258);
  }
  FUN_143b63a6b(param_5,local_28c,1);
  if (0 < (longlong)(int)uStack_190) {
    piVar9 = local_198;
    do {
      iVar19 = *(int *)(*(longlong *)(param_5 + 0x490) + (longlong)*piVar9 * 4);
      if (0 < iVar19) {
        iVar10 = *(int *)(*(longlong *)(param_5 + 0x470) + (longlong)*piVar9 * 4);
        iVar19 = iVar19 + iVar10;
        do {
          lVar16 = *(longlong *)(param_5 + 800);
          if (*(longlong *)(param_5 + 800) == 0) {
            lVar16 = param_5 + 0x310;
          }
          iVar20 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar20 = iVar10;
          }
          bVar3 = (byte)iVar10 & 0x1f;
          puVar1 = (uint *)(lVar16 + (longlong)(iVar20 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar19);
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != local_198 + (int)uStack_190);
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28c;
}



// FUNCTION 148490d98 FUN_148490d98 body=2627 status=ok
// SIG undefined FUN_148490d98(void)

uint FUN_148490d98(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_5a8 [32];
  undefined1 **local_588;
  undefined1 **local_580;
  byte local_571;
  longlong *local_570;
  longlong *local_568;
  longlong *local_560;
  longlong local_558;
  int local_550;
  undefined8 local_548;
  undefined4 local_540;
  code *local_538;
  longlong **local_530;
  undefined8 local_528;
  int local_520;
  undefined1 *local_518;
  longlong **local_510;
  undefined1 *local_508;
  longlong *local_500;
  undefined1 *local_4f8;
  undefined8 *local_4f0;
  longlong local_4e8 [3];
  uint local_4cc;
  undefined8 local_4c8 [2];
  undefined8 local_4b8;
  undefined1 *local_488 [2];
  undefined8 local_478;
  longlong *local_448;
  uint *puStack_440;
  longlong *plStack_438;
  double local_430;
  longlong local_428;
  undefined4 local_420;
  undefined8 local_41c;
  undefined4 local_414;
  int *local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined2 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined4 local_36c;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined2 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined2 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178 [2];
  longlong *local_168;
  longlong local_158 [4];
  undefined *local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined **local_118;
  longlong *local_110;
  int local_108 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  _RTL_CRITICAL_SECTION local_98;
  double local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  iVar14 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_568 = param_2;
  InitializeCriticalSection(&local_98);
  SetCriticalSectionSpinCount(&local_98,4000);
  local_70 = 0.01;
  local_68 = 0xffffffff;
  iVar11 = (int)param_1[4] * 0x200;
  iVar6 = *(int *)((longlong)param_1 + 0x24);
  local_4e8[0] = 0;
  local_4e8[1] = 0;
  local_570 = param_1;
  FUN_14017c08a(local_4e8,iVar11 + iVar6,0);
  local_110 = local_570;
  iVar11 = iVar11 + iVar6;
  if (iVar11 != 0) {
    do {
      *(int *)(local_4e8[0] + (longlong)iVar14 * 4) = iVar14;
      iVar14 = iVar14 + 1;
    } while (iVar11 != iVar14);
  }
  uVar12 = (int)local_570[4] * 0x200 + *(int *)((longlong)local_570 + 0x24);
  uVar17 = 0;
  if ((uVar12 != 0) && (uVar17 = 0, 0xfffd < (ushort)(**(short **)local_570[5] - 1U))) {
    uVar18 = 1;
    uVar7 = 1;
    if (1 < (int)uVar12) {
      uVar18 = uVar12;
    }
    do {
      uVar17 = uVar18;
      if (uVar18 == uVar7) break;
      uVar9 = uVar7 >> 9;
      uVar15 = uVar7 & 0x1ff;
      uVar17 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)local_570[5])[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar17 != uVar12) {
    do {
      lVar2 = *(longlong *)(local_110[2] + (ulonglong)(uVar17 >> 9) * 8);
      local_430 = *(double *)(lVar2 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar2 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      puStack_440 = (uint *)*pdVar1;
      plStack_438 = (longlong *)pdVar1[1];
      local_4f8 = &LAB_146be62c8;
      local_188 = local_4e8;
      local_508 = &LAB_143b6ae3e;
      local_448 = local_110;
      local_518 = &LAB_143b6adec;
      local_580 = &local_4f8;
      local_588 = &local_508;
      local_510 = &local_448;
      local_500 = &local_188;
      local_4f0 = &local_528;
      local_4cc = uVar17;
      uStack_180 = &local_4cc;
      local_138 = (undefined *)puStack_440;
      uStack_130 = plStack_438;
      local_128 = (code *)local_430;
      FUN_146be5fbe(&local_e8,&local_138);
      auVar19._0_8_ = (double)local_128 / local_70;
      auVar19._8_8_ = 0;
      auVar19 = roundsd(auVar19,auVar19,9);
      auVar21._0_8_ = (double)uStack_130 / local_70;
      auVar21._8_8_ = 0;
      auVar21 = roundsd(auVar21,auVar21,9);
      auVar20._0_8_ = (double)local_138 / local_70;
      auVar20._8_8_ = 0;
      auVar20 = roundsd(auVar20,auVar20,9);
      local_188 = (longlong *)CONCAT44((int)auVar21._0_8_,(int)auVar20._0_8_);
      uStack_180 = (uint *)CONCAT44(uStack_180._4_4_,(int)auVar19._0_8_);
      local_448 = &local_188;
      puStack_440 = &local_4cc;
      FUN_146be634e(&local_e8,&local_528,&local_448,0);
      uVar18 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar12) {
        uVar18 = uVar12;
      }
      do {
        uVar7 = uVar18;
        if (uVar18 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar7 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (local_110[5] + (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      uVar17 = uVar7;
    } while (uVar17 != uVar12);
  }
  local_128 = (code *)0x0;
  local_118 = &PTR_DAT_149f3b6a0;
  local_138 = &DAT_146c408a8;
  FUN_146c406b8(local_110 + 0x28,&local_448);
  FUN_146bfea58(&local_448,&local_138);
  iVar6 = *local_408 * 0x200 + local_408[1];
  local_168 = (longlong *)0x0;
  local_178[0] = 0;
  local_188 = (longlong *)local_408;
  uStack_180 = (uint *)CONCAT44(iVar6,iVar6);
  FUN_146c40784(local_178,&local_448);
  if ((uint)uStack_130 != (uint)uStack_180) {
    uVar17 = (uint)uStack_130;
    do {
      pcVar4 = local_128;
      ppuVar8 = local_118;
      if (local_118 == (undefined **)0x0) {
        ppuVar8 = (undefined **)local_108;
      }
      local_4cc = uVar17;
      uVar5 = (**(code **)(*ppuVar8 + 8))();
      (*pcVar4)(&local_528,uVar5,&local_4cc);
      uVar10 = (ulonglong)(int)local_528._4_4_;
      uVar16 = (ulonglong)(int)local_528;
      uVar17 = *(uint *)(local_4e8[0] + uVar16 * 4);
      uVar12 = *(uint *)(local_4e8[0] + uVar10 * 4);
      if (uVar17 != uVar12) {
        do {
          if (uVar17 < uVar12) {
            *(uint *)(local_4e8[0] + (longlong)(int)(uint)uVar16 * 4) = uVar12;
            if ((uint)uVar16 == uVar17) break;
            uVar16 = (ulonglong)uVar17;
            uVar17 = *(uint *)(local_4e8[0] + (longlong)(int)uVar17 * 4);
          }
          else {
            *(uint *)(local_4e8[0] + (longlong)(int)(uint)uVar10 * 4) = uVar17;
            if ((uint)uVar10 == uVar12) break;
            uVar10 = (ulonglong)uVar12;
            uVar12 = *(uint *)(local_4e8[0] + (longlong)(int)uVar12 * 4);
          }
        } while (uVar17 != uVar12);
        uVar17 = *(uint *)(local_4e8[0] + (longlong)(int)local_528._4_4_ * 4);
      }
      uVar10 = (ulonglong)local_520;
      uVar12 = *(uint *)(local_4e8[0] + uVar10 * 4);
      uVar18 = local_528._4_4_;
      while (uVar7 = uVar17, uVar7 != uVar12) {
        if (uVar7 < uVar12) {
          *(uint *)(local_4e8[0] + (longlong)(int)uVar18 * 4) = uVar12;
          if (uVar18 == uVar7) break;
          uVar17 = *(uint *)(local_4e8[0] + (longlong)(int)uVar7 * 4);
          uVar18 = uVar7;
        }
        else {
          *(uint *)(local_4e8[0] + (longlong)(int)(uint)uVar10 * 4) = uVar7;
          if ((uint)uVar10 == uVar12) break;
          uVar10 = (ulonglong)uVar12;
          uVar12 = *(uint *)(local_4e8[0] + (longlong)(int)uVar12 * 4);
          uVar17 = uVar7;
        }
      }
      iVar6 = uStack_130._4_4_;
      uVar17 = (uint)uStack_130;
      do {
        uVar17 = uVar17 + 1;
        uStack_130 = (longlong *)CONCAT44(uStack_130._4_4_,uVar17);
        if (iVar6 <= (int)uVar17) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_138 + 8) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    } while ((uint)uStack_180 != uVar17);
  }
  plVar3 = local_568;
  if (local_178[0] != 0) {
    plVar13 = local_168;
    if (local_168 == (longlong *)0x0) {
      plVar13 = local_158;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_128 != (code *)0x0) {
    ppuVar8 = local_118;
    if (local_118 == (undefined **)0x0) {
      ppuVar8 = (undefined **)local_108;
    }
    (**(code **)(*ppuVar8 + 0x10))();
  }
  if (local_448 != (longlong *)0x0) {
    plVar13 = plStack_438;
    if (plStack_438 == (longlong *)0x0) {
      plVar13 = &local_428;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  local_448 = local_570;
  puStack_440 = (uint *)local_4e8;
  local_538 = FUN_143b6ae74;
  local_530 = &local_448;
  uVar17 = FUN_146bcec82(local_570,plVar3,&local_538,0xffffffff);
  if ((byte)uVar17 != 0) {
    local_548 = 0;
    local_540 = 0;
    local_558 = *plVar3;
    local_550 = (int)plVar3[1];
    local_571 = (byte)uVar17;
    FUN_1484926b6(&local_138);
    local_118 = (undefined **)CONCAT26((short)((ulonglong)local_118 >> 0x30),0x10000000000);
    FUN_148492740(&local_138);
    local_188 = (longlong *)0x0;
    uStack_180 = (uint *)0x0;
    local_448 = (longlong *)CONCAT71(local_448._1_7_,1);
    FUN_14475e60e(&local_188,&local_448,(int)plVar3[1]);
    if ((longlong)local_108[0] != 0) {
      local_560 = local_110 + (longlong)local_108[0] * 3;
      plVar13 = local_110;
      do {
        local_528 = (longlong)(int)*plVar13 * 0x220 + *plVar3;
        local_428 = 0;
        local_420 = 0;
        local_448 = (longlong *)0x0;
        puStack_440 = (uint *)0x0;
        local_41c = 0xffffffff00000080;
        local_414 = 0;
        local_408 = (int *)0x0;
        local_400 = 0;
        local_3d8 = 0;
        local_3d0 = 0;
        local_3f8 = 0;
        uStack_3f0 = 0;
        local_3cc = 0xffffffff00000080;
        local_3c4 = 0;
        local_3b8 = 0;
        local_3b0 = 0;
        local_3a8 = 0x101;
        local_380 = 0;
        local_378 = 0;
        local_3a0 = 0;
        uStack_398 = 0;
        local_374 = 0xffffffff00000080;
        local_36c = 0;
        local_360 = 0;
        local_358 = 0;
        local_330 = 0;
        local_328 = 0;
        local_350 = 0;
        uStack_348 = 0;
        local_324 = 0xffffffff00000080;
        local_31c = 0;
        local_310 = 0;
        local_308 = 0;
        local_300 = 0x101;
        local_2d8 = 0;
        local_2d0 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2cc = 0xffffffff00000080;
        local_2c4 = 0;
        local_2b8 = 0;
        local_2b0 = 0;
        local_288 = 0;
        local_280 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_27c = 0xffffffff00000080;
        local_274 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0x101;
        local_230 = 0;
        local_228 = 0;
        local_250 = 0;
        uStack_248 = 0;
        local_224 = 0xffffffff00000080;
        local_21c = 0;
        local_210 = 0;
        local_208 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_200 = 0;
        uStack_1f8 = 0;
        local_1d4 = 0xffffffff00000080;
        local_1cc = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0x101;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_570 = (longlong *)(longlong)(int)plVar13[2];
        local_568 = plVar13;
        if (local_570 != (longlong *)0x0) {
          lVar2 = plVar13[1];
          local_570 = (longlong *)((longlong)local_570 << 2);
          plVar13 = (longlong *)0x0;
          do {
            iVar6 = *(int *)(lVar2 + (longlong)plVar13);
            local_488[0] = (undefined1 *)0x0;
            local_478 = 0;
            local_4c8[0] = 0;
            local_4b8 = 0;
            local_580 = (undefined1 **)((ulonglong)local_580 & 0xffffffffffffff00);
            local_588 = local_488;
            FUN_146bcbbdc(&local_528,(longlong)iVar6 * 0x220 + *plVar3,&local_448,local_4c8);
            *(undefined1 *)((longlong)local_188 + (longlong)iVar6) = 0;
            plVar13 = (longlong *)((longlong)plVar13 + 4);
          } while (local_570 != plVar13);
        }
        FUN_146bfdcfe(&local_448);
        plVar13 = local_568 + 3;
      } while (plVar13 != local_560);
    }
    iVar6 = (int)plVar3[1];
    if (0 < iVar6) {
      uVar17 = 0;
      do {
        if (*(char *)((longlong)local_188 + (longlong)(int)uVar17) == '\0') {
          FUN_1484a8a1c(plVar3,uVar17);
          iVar6 = ~uVar17 + (uint)uStack_180;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              iVar6 = 1;
            }
            memmove((void *)((longlong)(int)uVar17 + (longlong)local_188),
                    (void *)((longlong)(int)((uint)uStack_180 - iVar6) + (longlong)local_188),
                    (longlong)iVar6);
          }
          uStack_180 = (uint *)CONCAT44(uStack_180._4_4_,(uint)uStack_180 + -1);
          uVar17 = uVar17 - 1;
          iVar6 = (int)plVar3[1];
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < iVar6);
    }
    uVar17 = (uint)local_571;
    if (local_188 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_148492fba(&local_138);
  }
  if (local_4e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146be6294(&local_e8);
  if ((local_60 ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 1484917dc FUN_1484917dc body=88 status=ok
// SIG undefined FUN_1484917dc(void)

ulonglong FUN_1484917dc(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2f8);
  if ((-1 < (int)param_2) &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + 0x470) + (ulonglong)param_2 * 4),
     uVar4 = FUN_143b65670(param_1,iVar2,
                           *(int *)(*(longlong *)(param_1 + 0x490) + (ulonglong)param_2 * 4) + iVar2
                          ), (int)uVar4 != -1)) {
    return uVar4;
  }
  uVar3 = FUN_143b65670(param_1,0,uVar1);
  uVar4 = (ulonglong)uVar3;
  if (uVar3 == 0xffffffff) {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 148491834 FUN_148491834 body=202 status=ok
// SIG undefined FUN_148491834(void)

undefined8 FUN_148491834(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a83b10(local_48,param_4);
  FUN_1400b22c2(local_68,L"_Common");
  FUN_1407ec8fc(local_58,(longlong)param_3 * 0x10 + *(longlong *)(param_2 + 0xe0),local_68);
  FUN_1401c7f3e(param_1,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148491900 FUN_148491900 body=3320 status=ok
// SIG undefined FUN_148491900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_148491900(double *param_1,longlong param_2,double param_3,uint param_4,longlong *param_5,
                 longlong param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_1b8 [40];
  int local_190;
  int local_18c;
  ulonglong local_188;
  longlong local_180;
  int local_174;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  int local_13c;
  longlong local_138 [9];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar12 = -1;
  if (*(int *)(param_2 + 0x170) != 0) {
    if (((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0) ||
        (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) != 0)) ||
       (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0)) {
      FUN_146c09afc(param_2,0);
    }
    if (0.0 < param_3) {
      FUN_148489877(param_2);
    }
    local_18c = *(int *)(param_6 + 0x238);
    uVar13 = *(undefined4 *)(param_6 + 0x2f8);
    iVar12 = 0;
    if (*(longlong *)(param_2 + 0x208) != 0) {
      puVar17 = &DAT_14cb4be20;
      lVar23 = 0;
      do {
        cVar11 = FUN_146bce360(*(undefined8 *)(param_2 + 0x208),*puVar17);
        if (cVar11 == '\0') goto LAB_148491ae4;
        lVar23 = lVar23 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar23 != 8);
      lVar23 = 8;
LAB_148491ae4:
      iVar12 = (int)lVar23;
    }
    uVar22 = iVar12 + (uint)(iVar12 == 0);
    iVar12 = FUN_1409bcbd8(param_6,1,DAT_14c996af0);
    local_13c = FUN_1409bcbd8(param_6,1,DAT_14c9974a8);
    local_190 = *(undefined4 *)(param_2 + 0x50);
    uVar6 = *(undefined4 *)(param_2 + 0x170);
    local_168 = (longlong)iVar12;
    *(undefined4 *)(*(longlong *)(param_6 + 0x490) + local_168 * 4) = uVar6;
    *(undefined4 *)(*(longlong *)(param_6 + 0x470) + local_168 * 4) = uVar13;
    *(int *)(*(longlong *)(param_6 + 0x450) + local_168 * 4) = local_190;
    *(int *)(*(longlong *)(param_6 + 0x430) + local_168 * 4) = local_18c;
    *(int *)(*(longlong *)(param_6 + 0x3b0) + local_168 * 4) = local_13c;
    *(int *)(*(longlong *)(param_6 + 400) + (longlong)local_13c * 4) = iVar12;
    local_174 = iVar12;
    if (-1 < (int)param_4) {
      lVar18 = (longlong)local_13c;
      lVar23 = lVar18 * 0x10;
      iVar12 = (int)param_5[1] + -1;
      if ((int)param_5[1] == 0) {
        iVar12 = 0;
      }
      FUN_1402980a2(*(longlong *)(param_6 + 0xe0) + lVar23,*param_5,iVar12);
      uVar24 = (ulonglong)param_4;
      puVar1 = (undefined4 *)(*(longlong *)(param_6 + 0x100) + uVar24 * 0x10);
      uVar13 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)(param_6 + 0x100) + lVar23);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      *(uint *)(*(longlong *)(param_6 + 0x120) + lVar18 * 4) = param_4;
      FUN_1447cbafe(uVar24 * 0x50 + *(longlong *)(param_6 + 0x140),local_138,&local_13c,0);
      *(undefined4 *)(*(longlong *)(param_6 + 0x1b0) + uVar24 * 4) = 2;
    }
    uVar9 = uRam000000014c846088;
    lVar23 = *(longlong *)(param_6 + 0xc0);
    lVar18 = (longlong)local_13c * 0x30;
    puVar17 = (undefined8 *)(lVar23 + 0x20 + lVar18);
    *puVar17 = _DAT_14c846080;
    puVar17[1] = uVar9;
    uVar9 = uRam000000014c846078;
    puVar17 = (undefined8 *)(lVar23 + 0x10 + lVar18);
    *puVar17 = _DAT_14c846070;
    puVar17[1] = uVar9;
    uVar8 = uRam000000014c84606c;
    uVar7 = uRam000000014c846068;
    uVar13 = uRam000000014c846064;
    puVar1 = (undefined4 *)(lVar23 + lVar18);
    *puVar1 = _DAT_14c846060;
    puVar1[1] = uVar13;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(undefined4 *)(*(longlong *)(param_6 + 0x1b0) + (longlong)local_13c * 4) = 1;
    uVar13 = FUN_1409bcbd8(param_6,uVar6,DAT_14c996ae8);
    local_188 = CONCAT44(local_188._4_4_,uVar13);
    local_190 = FUN_1409bcbd8(param_6,local_190,DAT_14c996ae0);
    thunk_FUN_146eaece8(param_6,uVar22);
    FUN_1474aeb20(local_138,param_6);
    auVar10 = _DAT_149934d80;
    if (0 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
      local_180 = (longlong)local_190;
      uVar24 = 0;
      do {
        uVar25 = uVar24 >> 9 & 0x7fffff;
        lVar23 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar25 * 8);
        uVar16 = (uint)uVar24 & 0x1ff;
        pdVar3 = (double *)(lVar23 + (ulonglong)uVar16 * 0x18);
        dVar32 = *pdVar3 - param_1[4];
        dVar33 = pdVar3[1] - param_1[5];
        dVar29 = *(double *)(lVar23 + 0x10 + (ulonglong)uVar16 * 0x18) - param_1[6];
        dVar37 = *param_1;
        dVar36 = -dVar37;
        dVar38 = -param_1[1];
        dVar30 = param_1[2] * -1.0;
        dVar31 = param_1[3] * 1.0;
        dVar35 = dVar32 * dVar30 - dVar36 * dVar29;
        dVar34 = dVar33 * dVar36 - dVar32 * dVar38;
        dVar28 = dVar29 * dVar38 - dVar33 * dVar30;
        dVar28 = dVar28 + dVar28;
        dVar35 = dVar35 + dVar35;
        dVar34 = dVar34 + dVar34;
        auVar5 = *(undefined1 (*) [16])(param_1 + 8);
        auVar27 = divpd(auVar10,auVar5);
        dVar4 = param_1[10];
        lVar23 = uVar24 + local_180;
        lVar18 = *(longlong *)(param_6 + 0x230);
        *(float *)(lVar18 + lVar23 * 0xc) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar27._0_8_
                             ) * ((dVar34 * dVar38 - dVar35 * dVar30) + dVar31 * dVar28 + dVar32));
        *(float *)(lVar18 + 4 + lVar23 * 0xc) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar27._8_8_
                             ) * (dVar37 * dVar34 + dVar30 * dVar28 + dVar31 * dVar35 + dVar33));
        *(float *)(lVar18 + 8 + lVar23 * 0xc) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar4)) &
                             (ulonglong)(1.0 / dVar4)) *
                    (dVar31 * dVar34 + dVar29 + (dVar35 * dVar36 - dVar28 * dVar38)));
        pfVar21 = (float *)&DAT_14c846370;
        if (*(char *)(param_2 + 0x70) == '\x01') {
          pfVar21 = (float *)((ulonglong)(uVar16 * 0xc) +
                             *(longlong *)(*(longlong *)(param_2 + 0x60) + uVar25 * 8));
        }
        dVar4 = (double)pfVar21[2];
        dVar28 = (double)pfVar21[1];
        dVar36 = (double)*pfVar21;
        dVar34 = *param_1;
        dVar32 = -dVar34;
        dVar33 = -param_1[1];
        dVar30 = param_1[2] * -1.0;
        dVar31 = param_1[3] * 1.0;
        dVar37 = dVar36 * dVar30 - dVar32 * dVar4;
        dVar29 = dVar28 * dVar32 - dVar36 * dVar33;
        dVar35 = dVar4 * dVar33 - dVar28 * dVar30;
        dVar35 = dVar35 + dVar35;
        dVar37 = dVar37 + dVar37;
        dVar29 = dVar29 + dVar29;
        lVar18 = *(longlong *)(param_6 + 0x2b0);
        *(float *)(lVar18 + lVar23 * 0xc) =
             (float)((dVar29 * dVar33 - dVar37 * dVar30) + dVar31 * dVar35 + dVar36);
        *(float *)(lVar18 + 4 + lVar23 * 0xc) =
             (float)(dVar34 * dVar29 + dVar30 * dVar35 + dVar31 * dVar37 + dVar28);
        *(float *)(lVar18 + 8 + lVar23 * 0xc) =
             (float)(dVar31 * dVar29 + dVar4 + (dVar37 * dVar32 - dVar35 * dVar33));
        uVar25 = 0;
        do {
          FUN_1484884f7(param_2,uVar24 & 0xffffffff,&local_148,uVar25 & 0xffffffff);
          *(ulonglong *)(*(longlong *)(local_138[uVar25] + 0x10) + lVar23 * 8) =
               CONCAT44(fStack_144,local_148);
          uVar25 = uVar25 + 1;
        } while (uVar22 != uVar25);
        FUN_148488623(param_2,uVar24 & 0xffffffff,&local_148,&local_154);
        dVar4 = (double)local_140;
        dVar28 = (double)fStack_144;
        dVar36 = (double)local_148;
        dVar34 = *param_1;
        dVar32 = -dVar34;
        dVar33 = -param_1[1];
        dVar30 = param_1[2] * -1.0;
        dVar31 = param_1[3] * 1.0;
        dVar37 = dVar36 * dVar30 - dVar32 * dVar4;
        dVar29 = dVar28 * dVar32 - dVar36 * dVar33;
        dVar35 = dVar4 * dVar33 - dVar28 * dVar30;
        dVar35 = dVar35 + dVar35;
        dVar37 = dVar37 + dVar37;
        dVar29 = dVar29 + dVar29;
        lVar18 = *(longlong *)(param_6 + 0x270);
        lVar14 = lVar23 * 0xc;
        *(float *)(lVar18 + lVar14) =
             (float)((dVar29 * dVar33 - dVar37 * dVar30) + dVar31 * dVar35 + dVar36);
        *(float *)(lVar18 + 4 + lVar14) =
             (float)(dVar34 * dVar29 + dVar30 * dVar35 + dVar31 * dVar37 + dVar28);
        *(float *)(lVar18 + 8 + lVar14) =
             (float)(dVar31 * dVar29 + dVar4 + (dVar37 * dVar32 - dVar35 * dVar33));
        dVar4 = (double)local_14c;
        dVar28 = (double)local_150;
        dVar36 = (double)local_154;
        dVar34 = *param_1;
        dVar32 = -dVar34;
        dVar33 = -param_1[1];
        dVar30 = param_1[2] * -1.0;
        dVar31 = param_1[3] * 1.0;
        dVar37 = dVar36 * dVar30 - dVar32 * dVar4;
        dVar29 = dVar28 * dVar32 - dVar36 * dVar33;
        dVar35 = dVar4 * dVar33 - dVar28 * dVar30;
        dVar35 = dVar35 + dVar35;
        dVar37 = dVar37 + dVar37;
        dVar29 = dVar29 + dVar29;
        lVar18 = *(longlong *)(param_6 + 0x290);
        *(float *)(lVar18 + lVar14) =
             (float)((dVar29 * dVar33 - dVar37 * dVar30) + dVar31 * dVar35 + dVar36);
        *(float *)(lVar18 + 4 + lVar14) =
             (float)(dVar34 * dVar29 + dVar30 * dVar35 + dVar31 * dVar37 + dVar28);
        *(float *)(lVar18 + 8 + lVar14) =
             (float)(dVar31 * dVar29 + dVar4 + (dVar37 * dVar32 - dVar35 * dVar33));
        lVar18 = FUN_146c3d58a(*(undefined8 *)(param_2 + 0x208),DAT_14cb4bdf0);
        puVar1 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(lVar18 + 0x20) + (ulonglong)((uint)(uVar24 >> 4) & 0x3fffff8)) +
                 (ulonglong)(((uint)uVar24 & 0x7f) << 4));
        uVar13 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(*(longlong *)(param_6 + 0x250) + lVar23 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(int *)(*(longlong *)(param_6 + 0x2d0) + lVar23 * 4) = local_13c;
        uVar24 = uVar24 + 1;
      } while ((longlong)uVar24 <
               (longlong)(*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)));
    }
    if (0 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
      local_180 = param_6 + 0x310;
      local_170 = param_6 + 0x380;
      lVar23 = (longlong)(int)local_188 * 3 + 2;
      local_160 = local_188 & 0xffffffff;
      uVar24 = 0;
      local_188 = (longlong)(int)local_188 * 4;
      do {
        lVar14 = FUN_146c3d58a(*(undefined8 *)(param_2 + 0x208),DAT_14cb4be08);
        uVar22 = (uint)uVar24;
        uVar25 = uVar24 >> 9 & 0x7fffff;
        uVar26 = (ulonglong)(uVar22 & 0x1ff);
        iVar12 = (int)local_160 + uVar22;
        uVar16 = 1 << ((byte)iVar12 & 0x1f);
        lVar18 = *(longlong *)(param_6 + 800);
        if (*(longlong *)(param_6 + 800) == 0) {
          lVar18 = local_180;
        }
        iVar20 = (int)local_160 + uVar22 + 0x1f;
        if (-1 < iVar12) {
          iVar20 = iVar12;
        }
        lVar19 = (longlong)(iVar20 >> 5);
        if (*(char *)(*(longlong *)(*(longlong *)(lVar14 + 0x20) + uVar25 * 8) + uVar26) == '\x01')
        {
          uVar22 = *(uint *)(lVar18 + lVar19 * 4) | uVar16;
        }
        else {
          uVar22 = ~uVar16 & *(uint *)(lVar18 + lVar19 * 4);
        }
        *(uint *)(lVar18 + lVar19 * 4) = uVar22;
        iVar12 = *(int *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48) + 0x20) +
                           uVar25 * 8) + uVar26 * 4);
        if (iVar12 < 0) {
          lVar18 = *(longlong *)(param_6 + 0x390);
          if (*(longlong *)(param_6 + 0x390) == 0) {
            lVar18 = local_170;
          }
          puVar15 = (uint *)(lVar18 + lVar19 * 4);
          iVar12 = param_7;
LAB_1484923dd:
          uVar16 = uVar16 | *puVar15;
        }
        else {
          lVar14 = FUN_146c3d58a(*(longlong *)(param_2 + 0x208),DAT_14cb4be10);
          lVar18 = *(longlong *)(param_6 + 0x390);
          if (*(longlong *)(param_6 + 0x390) == 0) {
            lVar18 = local_170;
          }
          puVar15 = (uint *)(lVar18 + lVar19 * 4);
          if (*(char *)(*(longlong *)(*(longlong *)(lVar14 + 0x20) + uVar25 * 8) + uVar26) == '\x01'
             ) goto LAB_1484923dd;
          uVar16 = ~uVar16 & *puVar15;
        }
        *puVar15 = uVar16;
        *(int *)(*(longlong *)(param_6 + 0x360) + local_188 + uVar24 * 4) = iVar12;
        lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar25 * 8);
        iVar12 = *(int *)(lVar18 + 4 + uVar26 * 0xc);
        iVar20 = *(int *)(lVar18 + 8 + uVar26 * 0xc);
        lVar14 = *(longlong *)(param_6 + 0x2f0);
        *(int *)(lVar14 + -8 + lVar23 * 4) = *(int *)(lVar18 + uVar26 * 0xc) + local_190;
        *(int *)(lVar14 + -4 + lVar23 * 4) = iVar12 + local_190;
        *(int *)(lVar14 + lVar23 * 4) = iVar20 + local_190;
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 3;
      } while ((longlong)uVar24 <
               (longlong)(*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)));
    }
    iVar12 = local_174;
    if (*(int *)(param_6 + 0x3d8) != 0) {
      lVar23 = *(longlong *)(param_6 + 0x3d0);
      lVar18 = local_168 * 0x38;
      *(undefined8 *)(lVar23 + 0x28 + lVar18) = DAT_14c8464f0;
      uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar17 = (undefined8 *)(lVar23 + 0x18 + lVar18);
      *puVar17 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar17[1] = uVar9;
      uVar8 = DAT_14c8464e8._4_4_;
      uVar7 = (undefined4)DAT_14c8464e8;
      uVar6 = DAT_14c8464e0._4_4_;
      uVar13 = (undefined4)DAT_14c8464e0;
      *(undefined8 *)(lVar23 + 0x10 + lVar18) = DAT_14c8464f0;
      puVar1 = (undefined4 *)(lVar23 + lVar18);
      *puVar1 = uVar13;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined1 *)(lVar23 + 0x30 + lVar18) = 0;
      if (local_18c < *(int *)(param_6 + 0x238)) {
        lVar14 = (longlong)local_18c;
        lVar23 = lVar14 * 0xc + 8;
        do {
          lVar19 = *(longlong *)(param_6 + 0x230);
          dVar4 = (double)*(float *)(lVar19 + lVar23);
          dVar29 = (double)*(float *)(lVar19 + -4 + lVar23);
          dVar34 = (double)*(float *)(lVar19 + -8 + lVar23);
          pdVar3 = (double *)(*(longlong *)(param_6 + 0x3d0) + lVar18);
          if (*(char *)(*(longlong *)(param_6 + 0x3d0) + 0x30 + lVar18) == '\0') {
            pdVar3[3] = dVar34;
            pdVar3[4] = dVar29;
            pdVar3[5] = dVar4;
            *(undefined4 *)pdVar3 = *(undefined4 *)(pdVar3 + 3);
            *(undefined4 *)((longlong)pdVar3 + 4) = *(undefined4 *)((longlong)pdVar3 + 0x1c);
            *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)(pdVar3 + 4);
            *(undefined4 *)((longlong)pdVar3 + 0xc) = *(undefined4 *)((longlong)pdVar3 + 0x24);
            pdVar3[2] = pdVar3[5];
            *(undefined1 *)(pdVar3 + 6) = 1;
          }
          else {
            dVar28 = *pdVar3;
            if (dVar34 <= *pdVar3) {
              dVar28 = dVar34;
            }
            *pdVar3 = dVar28;
            dVar28 = pdVar3[1];
            if (dVar29 <= pdVar3[1]) {
              dVar28 = dVar29;
            }
            pdVar3[1] = dVar28;
            dVar28 = pdVar3[2];
            if (dVar4 <= pdVar3[2]) {
              dVar28 = dVar4;
            }
            pdVar3[2] = dVar28;
            dVar28 = pdVar3[3];
            if (pdVar3[3] <= dVar34) {
              dVar28 = dVar34;
            }
            pdVar3[3] = dVar28;
            dVar34 = pdVar3[4];
            if (pdVar3[4] <= dVar29) {
              dVar34 = dVar29;
            }
            pdVar3[4] = dVar34;
            dVar29 = pdVar3[5];
            if (pdVar3[5] <= dVar4) {
              dVar29 = dVar4;
            }
            pdVar3[5] = dVar29;
          }
          lVar14 = lVar14 + 1;
          lVar23 = lVar23 + 0xc;
        } while (lVar14 < *(int *)(param_6 + 0x238));
      }
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar12;
}



// FUNCTION 1484925fa FUN_1484925fa body=187 status=ok
// SIG undefined FUN_1484925fa(void)

void FUN_1484925fa(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1484a80a0(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_1484a806b(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_1484a8126(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484926b6 FUN_1484926b6 body=138 status=ok
// SIG undefined FUN_1484926b6(void)

undefined8 * FUN_1484926b6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0x101;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar1 = *(int *)(param_3 + 1);
  if (iVar1 == *(int *)(param_2 + 1)) {
    _Src = (void *)*param_3;
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_148401f96(param_1 + 2,iVar1,0);
      memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 0x30);
    }
  }
  else {
    FUN_1484a81c2(param_1);
  }
  return param_1;
}



// FUNCTION 148492740 FUN_148492740 body=2169 status=ok
// SIG undefined FUN_148492740(void)

void FUN_148492740(longlong *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_2b8 [40];
  longlong *local_290;
  ulonglong local_288;
  longlong *local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  longlong local_258 [6];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  longlong **local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  iVar6 = (int)param_1[3];
  if (iVar6 != (int)param_1[1]) {
    FUN_1484a81c2(param_1);
    iVar6 = (int)param_1[3];
  }
  if (iVar6 == 0) {
    uVar24 = 0xffffffff;
    uVar25 = 0x7fefffff;
    uVar22 = 0xffffffff;
    uVar23 = 0xffefffff;
    uVar26 = uVar22;
    uVar27 = uVar23;
    uVar28 = uVar24;
    uVar29 = uVar25;
    uVar31 = uVar22;
    uVar32 = uVar23;
    uVar33 = uVar24;
    uVar34 = uVar25;
  }
  else {
    pdVar4 = (double *)param_1[2];
    pdVar8 = pdVar4 + (longlong)iVar6 * 6;
    uVar24 = 0xffffffff;
    uVar25 = 0x7fefffff;
    uVar22 = 0xffffffff;
    uVar23 = 0xffefffff;
    uVar26 = uVar22;
    uVar27 = uVar23;
    uVar28 = uVar24;
    uVar29 = uVar25;
    uVar31 = uVar22;
    uVar32 = uVar23;
    uVar33 = uVar24;
    uVar34 = uVar25;
    do {
      dVar21 = *pdVar4;
      if (dVar21 <= (double)CONCAT44(uVar25,uVar24)) {
        uVar24 = SUB84(dVar21,0);
        uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      dVar21 = pdVar4[1];
      if (dVar21 <= (double)CONCAT44(uVar29,uVar28)) {
        uVar28 = SUB84(dVar21,0);
        uVar29 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      dVar21 = pdVar4[2];
      if (dVar21 <= (double)CONCAT44(uVar34,uVar33)) {
        uVar33 = SUB84(dVar21,0);
        uVar34 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      dVar21 = pdVar4[3];
      if ((double)CONCAT44(uVar23,uVar22) <= dVar21) {
        uVar22 = SUB84(dVar21,0);
        uVar23 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      dVar21 = pdVar4[4];
      if ((double)CONCAT44(uVar27,uVar26) <= dVar21) {
        uVar26 = SUB84(dVar21,0);
        uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      dVar21 = pdVar4[5];
      if ((double)CONCAT44(uVar32,uVar31) <= dVar21) {
        uVar31 = SUB84(dVar21,0);
        uVar32 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      pdVar4 = pdVar4 + 6;
    } while (pdVar4 != pdVar8);
  }
  FUN_1484a32b7(param_1[5],(int)param_1[6]);
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_1484a8402(param_1 + 5);
  }
  iVar6 = (int)param_1[1];
  uVar10 = (ulonglong)iVar6;
  local_258[4] = 0;
  local_258[5] = 0;
  local_280 = param_1 + 5;
  FUN_144a1a59e(local_258 + 4,iVar6,1);
  if (0 < (longlong)uVar10) {
    uVar5 = 0;
    do {
      *(int *)(local_258[4] + uVar5 * 4) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar10 != uVar5);
  }
  local_258[2] = 0;
  local_258[3] = 0;
  FUN_1484a83ba(local_258 + 2,iVar6);
  if (0 < iVar6) {
    dVar19 = (double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar34,uVar33);
    dVar19 = (double)(-(ulonglong)(0.0 <= dVar19) & (ulonglong)dVar19);
    dVar21 = (double)CONCAT44(uVar27,uVar26) - (double)CONCAT44(uVar29,uVar28);
    dVar21 = (double)(-(ulonglong)(0.0 <= dVar21) & (ulonglong)dVar21);
    uVar5 = -(ulonglong)(dVar19 <= dVar21);
    dVar19 = (double)(~uVar5 & (ulonglong)dVar19 | uVar5 & (ulonglong)dVar21);
    dVar21 = (double)CONCAT44(uVar23,uVar22) - (double)CONCAT44(uVar25,uVar24);
    dVar21 = (double)(-(ulonglong)(0.0 <= dVar21) & (ulonglong)dVar21);
    uVar5 = -(ulonglong)(dVar19 <= dVar21);
    lVar16 = 0;
    lVar13 = 0;
    do {
      dVar18 = (double)FUN_146ec788e(*param_1 + lVar13,
                                     1.0 / ((double)(uVar5 & (ulonglong)dVar21 |
                                                    ~uVar5 & (ulonglong)dVar19) +
                                           9.999999747378752e-05));
      dVar20 = -dVar18;
      *(bool *)(local_258[2] + 8 + lVar16) = dVar20 <= dVar18;
      if (dVar20 > dVar18) {
        dVar18 = dVar20;
      }
      *(double *)(local_258[2] + lVar16) = dVar18;
      lVar13 = lVar13 + 0x220;
      lVar16 = lVar16 + 0x10;
    } while (uVar10 * 0x220 - lVar13 != 0);
  }
  local_198 = local_258 + 2;
  FUN_1484a8553(local_258[4],local_258[5] & 0xffffffff,&local_198);
  local_258[0] = 0;
  local_258[1] = 0;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,0xffffffff);
  FUN_1448156a8(local_258,&local_198,iVar6);
  if (1 < iVar6) {
    plVar17 = (longlong *)(ulonglong)(iVar6 - 1);
    uVar5 = 1;
    plVar14 = (longlong *)0x0;
    local_290 = plVar17;
    do {
      lVar13 = (longlong)*(int *)(local_258[4] + (longlong)plVar14 * 4);
      if ((int)param_1[4] == 0) {
        if (*(int *)(local_258[0] + (longlong)plVar14 * 4) == -1) {
          uVar30 = 0x3ff00000;
          if (*(char *)(local_258[2] + 8 + lVar13 * 0x10) == '\0') goto LAB_148492a66;
          goto LAB_148492aa0;
        }
      }
      else {
        uVar30 = 0x3ff00000;
        if ((*(char *)(local_258[2] + 8 + lVar13 * 0x10) == '\0') &&
           (uVar30 = 0xbff00000, (int)param_1[4] != 1)) {
LAB_148492a66:
          uVar30 = 0xbff00000;
          if (*(char *)((longlong)param_1 + 0x25) != '\0') goto LAB_148492a71;
        }
LAB_148492aa0:
        FUN_146ba21d6(&local_198,lVar13 * 0x220 + *param_1,1);
        local_1e0 = 0;
        local_1d8 = 0;
        local_200 = 0;
        uStack_1f8 = 0;
        local_1d4 = 0xffffffff00000080;
        local_1cc = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0x4000000000000000;
        local_1a0 = 2;
        local_208 = &local_198;
        FUN_146bef8a8(&local_208);
        local_288 = uVar5;
        do {
          lVar16 = (longlong)*(int *)(local_258[4] + uVar5 * 4);
          lVar13 = lVar16 * 0x220;
          if ((*(int *)(*param_1 + 0x50 + lVar13) != 0) &&
             (((int)param_1[4] != 0 ||
              (((*(char *)((longlong)param_1 + 0x24) != '\x01' ||
                (*(char *)(local_258[2] + 8 + lVar16 * 0x10) == '\0')) &&
               (*(int *)(local_258[0] + uVar5 * 4) == -1)))))) {
            lVar13 = *param_1 + lVar13;
            if (*(char *)((longlong)param_1 + 0x26) == '\0') {
              iVar3 = *(int *)(lVar13 + 0x20);
              iVar7 = *(int *)(lVar13 + 0x24);
              if (0 < iVar3 * 0x200 + iVar7) {
                uVar11 = 0;
                do {
                  uVar12 = (ulonglong)((uint)uVar11 & 0x1ff);
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar13 + 0x28) + (uVar11 >> 9) * 8) +
                                         uVar12 * 2) - 1U) < 0xfffe) {
                    lVar16 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (uVar11 >> 9) * 8);
                    local_268 = *(undefined8 *)(lVar16 + 0x10 + uVar12 * 0x18);
                    puVar1 = (undefined4 *)(lVar16 + uVar12 * 0x18);
                    local_278 = *puVar1;
                    uStack_274 = puVar1[1];
                    uStack_270 = puVar1[2];
                    uStack_26c = puVar1[3];
                    FUN_146bef8a8(&local_208,0);
                    local_218 = local_268;
                    local_228 = local_278;
                    uStack_224 = uStack_274;
                    uStack_220 = uStack_270;
                    uStack_21c = uStack_26c;
                    dVar21 = (double)FUN_146bed438(&local_208,
                                                   *(undefined4 *)((longlong)local_208 + 0xcc),
                                                   &local_228);
                    if (dVar21 * (double)((ulonglong)uVar30 << 0x20) < 0.5) goto LAB_148492d18;
                    iVar3 = *(int *)(lVar13 + 0x20);
                    iVar7 = *(int *)(lVar13 + 0x24);
                  }
                  uVar15 = (uint)uVar11 + 1;
                  uVar11 = (ulonglong)uVar15;
                } while ((int)uVar15 < iVar3 * 0x200 + iVar7);
              }
            }
            else {
              uVar15 = *(int *)(lVar13 + 0x20) * 0x200 + *(int *)(lVar13 + 0x24);
              if (0 < (int)uVar15) {
                uVar11 = 0;
                do {
                  uVar12 = (ulonglong)((uint)uVar11 & 0x1ff);
                  if ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar13 + 0x28) + (uVar11 >> 9) * 8) +
                                         uVar12 * 2) - 1U) < 0xfffe) {
                    lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (uVar11 >> 9) * 8);
                    local_268 = *(undefined8 *)(lVar13 + 0x10 + uVar12 * 0x18);
                    puVar1 = (undefined4 *)(lVar13 + uVar12 * 0x18);
                    local_278 = *puVar1;
                    uStack_274 = puVar1[1];
                    uStack_270 = puVar1[2];
                    uStack_26c = puVar1[3];
                    break;
                  }
                  uVar9 = (uint)uVar11 + 1;
                  uVar11 = (ulonglong)uVar9;
                } while (uVar15 != uVar9);
              }
              FUN_146bef8a8(&local_208,0);
              local_218 = local_268;
              local_228 = local_278;
              uStack_224 = uStack_274;
              uStack_220 = uStack_270;
              uStack_21c = uStack_26c;
              dVar21 = (double)FUN_146bed438(&local_208,*(undefined4 *)((longlong)local_208 + 0xcc),
                                             &local_228);
              if (dVar21 * (double)((ulonglong)uVar30 << 0x20) <= 0.5) goto LAB_148492d18;
            }
            *(int *)(local_258[0] + uVar5 * 4) = (int)plVar14;
          }
LAB_148492d18:
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar10);
        local_1b8 = 0;
        if (local_1c0 != 0) {
          FUN_1400020a8();
        }
        FUN_146bddd50(&local_200);
        FUN_1457e5b52(&local_198);
        uVar5 = local_288;
        plVar17 = local_290;
      }
LAB_148492a71:
      uVar5 = uVar5 + 1;
      plVar14 = (longlong *)((longlong)plVar14 + 1);
    } while (plVar14 != plVar17);
  }
  local_198 = (longlong *)0x0;
  uStack_190 = 0;
  FUN_1403ed7b2(&local_198,iVar6,1);
  if (0 < iVar6) {
    local_290 = param_1 + 7;
    local_288 = 1;
    uVar5 = 0;
    do {
      if (*(char *)((longlong)local_198 + uVar5) == '\0') {
        iVar6 = *(int *)(local_258[4] + uVar5 * 4);
        if ((*(char *)((longlong)param_1 + 0x25) == '\x01') &&
           (*(char *)(local_258[2] + 8 + (longlong)iVar6 * 0x10) == '\0')) {
          iVar3 = (int)param_1[8];
          *(uint *)(param_1 + 8) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0x44) < iVar3 + 1U) {
            FUN_1446f48e2(local_290,iVar3);
          }
          *(int *)(*local_290 + (longlong)iVar3 * 4) = iVar6;
        }
        else {
          iVar3 = (int)param_1[6];
          *(uint *)(param_1 + 6) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
            FUN_1484a8988(local_280,iVar3);
          }
          lVar13 = param_1[5];
          piVar2 = (int *)(lVar13 + (longlong)iVar3 * 0x18);
          piVar2[1] = -1;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2[4] = 0;
          piVar2[5] = 0;
          *piVar2 = iVar6;
          if (((int)param_1[4] == 1) &&
             (lVar16 = (longlong)*(int *)(local_258[0] + uVar5 * 4), -1 < lVar16)) {
            piVar2[1] = *(int *)(local_258[4] + lVar16 * 4);
          }
          if (uVar5 + 1 < uVar10) {
            plVar17 = (longlong *)(lVar13 + (longlong)iVar3 * 0x18 + 8);
            uVar11 = local_288;
            do {
              if ((uVar5 == *(uint *)(local_258[0] + uVar11 * 4)) &&
                 ((iVar6 = *(int *)(local_258[4] + uVar11 * 4),
                  *(char *)(local_258[2] + 8 + (longlong)iVar6 * 0x10) != '\x01' ||
                  (*(char *)((longlong)param_1 + 0x24) == '\0')))) {
                iVar3 = piVar2[4];
                piVar2[4] = iVar3 + 1U;
                if ((uint)piVar2[5] < iVar3 + 1U) {
                  FUN_1446f48e2(plVar17,iVar3);
                }
                *(int *)(*plVar17 + (longlong)iVar3 * 4) = iVar6;
                *(undefined1 *)((longlong)local_198 + uVar11) = 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar10 != uVar11);
          }
        }
      }
      uVar5 = uVar5 + 1;
      local_288 = local_288 + 1;
    } while (uVar5 != uVar10);
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_258[0] != 0) {
    FUN_1400020a8();
  }
  if (local_258[2] != 0) {
    FUN_1400020a8();
  }
  if (local_258[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148492fba FUN_148492fba body=74 status=ok
// SIG undefined FUN_148492fba(void)

void FUN_148492fba(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1484a32b7(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148493004 FUN_148493004 body=2878 status=ok
// SIG undefined FUN_148493004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_148493004(double *param_1,longlong param_2,int param_3,longlong param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  int iVar24;
  float *pfVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined1 uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_1b8 [39];
  undefined1 local_191;
  double *local_190;
  ulonglong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  longlong local_138 [9];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = param_1;
  if (((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) != 0) ||
      (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) != 0)) ||
     (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) != 0)) {
    FUN_146c09afc(param_2,0);
  }
  lVar29 = (longlong)param_3;
  iVar21 = *(int *)(*(longlong *)(param_4 + 0x450) + lVar29 * 4);
  iVar24 = *(int *)(*(longlong *)(param_4 + 0x490) + lVar29 * 4);
  uVar30 = 0;
  if (*(longlong *)(param_2 + 0x208) != 0) {
    puVar23 = &DAT_14cb4be20;
    uVar30 = 0;
    do {
      cVar14 = FUN_146bce360(*(undefined8 *)(param_2 + 0x208),*puVar23);
      if (cVar14 == '\0') goto LAB_14849312b;
      uVar30 = uVar30 + 1;
      puVar23 = puVar23 + 1;
    } while (uVar30 != 8);
    uVar30 = 8;
  }
LAB_14849312b:
  thunk_FUN_146eaece8(param_4,uVar30 & 0xffffffff);
  FUN_1474aeb20(local_138,param_4);
  auVar12 = _DAT_149934d80;
  bVar6 = iVar24 == *(int *)(param_2 + 0x170);
  bVar7 = iVar21 == *(int *)(param_2 + 0x50);
  uVar31 = bVar6 && bVar7;
  if (bVar6 && bVar7) {
    local_170 = (longlong)*(int *)(*(longlong *)(param_4 + 0x430) + lVar29 * 4);
    local_188 = (ulonglong)*(int *)(*(longlong *)(param_4 + 0x470) + lVar29 * 4);
    local_191 = uVar31;
    local_160 = lVar29;
    if (0 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)) {
      local_180 = CONCAT44(local_180._4_4_,
                           *(undefined4 *)(*(longlong *)(param_4 + 0x3b0) + lVar29 * 4));
      uVar28 = 0;
      pdVar17 = local_190;
      do {
        uVar22 = uVar28 >> 9 & 0x7fffff;
        lVar29 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar22 * 8);
        uVar20 = (uint)uVar28 & 0x1ff;
        pdVar1 = (double *)(lVar29 + (ulonglong)uVar20 * 0x18);
        dVar37 = *pdVar1 - pdVar17[4];
        dVar38 = pdVar1[1] - pdVar17[5];
        dVar34 = *(double *)(lVar29 + 0x10 + (ulonglong)uVar20 * 0x18) - pdVar17[6];
        dVar42 = *pdVar17;
        dVar41 = -dVar42;
        dVar43 = -pdVar17[1];
        dVar35 = pdVar17[2] * -1.0;
        dVar36 = pdVar17[3] * 1.0;
        dVar40 = dVar37 * dVar35 - dVar41 * dVar34;
        dVar39 = dVar38 * dVar41 - dVar37 * dVar43;
        dVar33 = dVar34 * dVar43 - dVar38 * dVar35;
        dVar33 = dVar33 + dVar33;
        dVar40 = dVar40 + dVar40;
        dVar39 = dVar39 + dVar39;
        auVar5 = *(undefined1 (*) [16])(pdVar17 + 8);
        auVar32 = divpd(auVar12,auVar5);
        dVar4 = pdVar17[10];
        lVar29 = uVar28 + local_170;
        lVar15 = *(longlong *)(param_4 + 0x230);
        *(float *)(lVar15 + lVar29 * 0xc) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar32._0_8_
                             ) * ((dVar39 * dVar43 - dVar40 * dVar35) + dVar36 * dVar33 + dVar37));
        *(float *)(lVar15 + 4 + lVar29 * 0xc) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar32._8_8_
                             ) * (dVar42 * dVar39 + dVar35 * dVar33 + dVar36 * dVar40 + dVar38));
        *(float *)(lVar15 + 8 + lVar29 * 0xc) =
             (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar4)) &
                             (ulonglong)(1.0 / dVar4)) *
                    (dVar36 * dVar39 + dVar34 + (dVar40 * dVar41 - dVar33 * dVar43)));
        pfVar25 = (float *)&DAT_14c846370;
        if (*(char *)(param_2 + 0x70) == '\x01') {
          pfVar25 = (float *)((ulonglong)(uVar20 * 0xc) +
                             *(longlong *)(*(longlong *)(param_2 + 0x60) + uVar22 * 8));
        }
        dVar4 = (double)pfVar25[2];
        dVar33 = (double)pfVar25[1];
        dVar41 = (double)*pfVar25;
        dVar39 = *pdVar17;
        dVar37 = -dVar39;
        dVar38 = -pdVar17[1];
        dVar35 = pdVar17[2] * -1.0;
        dVar36 = pdVar17[3] * 1.0;
        dVar42 = dVar41 * dVar35 - dVar37 * dVar4;
        dVar34 = dVar33 * dVar37 - dVar41 * dVar38;
        dVar40 = dVar4 * dVar38 - dVar33 * dVar35;
        dVar40 = dVar40 + dVar40;
        dVar42 = dVar42 + dVar42;
        dVar34 = dVar34 + dVar34;
        lVar15 = *(longlong *)(param_4 + 0x2b0);
        *(float *)(lVar15 + lVar29 * 0xc) =
             (float)((dVar34 * dVar38 - dVar42 * dVar35) + dVar36 * dVar40 + dVar41);
        *(float *)(lVar15 + 4 + lVar29 * 0xc) =
             (float)(dVar39 * dVar34 + dVar35 * dVar40 + dVar36 * dVar42 + dVar33);
        *(float *)(lVar15 + 8 + lVar29 * 0xc) =
             (float)(dVar36 * dVar34 + dVar4 + (dVar42 * dVar37 - dVar40 * dVar38));
        if ((int)uVar30 != 0) {
          uVar22 = 0;
          do {
            FUN_1484884f7(param_2,uVar28 & 0xffffffff,&local_148,uVar22 & 0xffffffff);
            *(ulonglong *)(*(longlong *)(local_138[uVar22] + 0x10) + lVar29 * 8) =
                 CONCAT44(fStack_144,local_148);
            uVar22 = uVar22 + 1;
          } while ((uVar30 & 0xffffffff) != uVar22);
        }
        FUN_148488623(param_2,uVar28 & 0xffffffff,&local_148,&local_154);
        pdVar17 = local_190;
        dVar4 = (double)local_140;
        dVar33 = (double)fStack_144;
        dVar41 = (double)local_148;
        dVar39 = *local_190;
        dVar37 = -dVar39;
        dVar38 = -local_190[1];
        dVar35 = local_190[2] * -1.0;
        dVar36 = local_190[3] * 1.0;
        dVar42 = dVar41 * dVar35 - dVar37 * dVar4;
        dVar34 = dVar33 * dVar37 - dVar41 * dVar38;
        dVar40 = dVar4 * dVar38 - dVar33 * dVar35;
        dVar40 = dVar40 + dVar40;
        dVar42 = dVar42 + dVar42;
        dVar34 = dVar34 + dVar34;
        lVar15 = *(longlong *)(param_4 + 0x270);
        lVar16 = lVar29 * 0xc;
        *(float *)(lVar15 + lVar16) =
             (float)((dVar34 * dVar38 - dVar42 * dVar35) + dVar36 * dVar40 + dVar41);
        *(float *)(lVar15 + 4 + lVar16) =
             (float)(dVar39 * dVar34 + dVar35 * dVar40 + dVar36 * dVar42 + dVar33);
        *(float *)(lVar15 + 8 + lVar16) =
             (float)(dVar36 * dVar34 + dVar4 + (dVar42 * dVar37 - dVar40 * dVar38));
        dVar4 = (double)local_14c;
        dVar33 = (double)local_150;
        dVar41 = (double)local_154;
        dVar39 = *local_190;
        dVar37 = -dVar39;
        dVar38 = -local_190[1];
        dVar35 = local_190[2] * -1.0;
        dVar36 = local_190[3] * 1.0;
        dVar42 = dVar41 * dVar35 - dVar37 * dVar4;
        dVar34 = dVar33 * dVar37 - dVar41 * dVar38;
        dVar40 = dVar4 * dVar38 - dVar33 * dVar35;
        dVar40 = dVar40 + dVar40;
        dVar42 = dVar42 + dVar42;
        dVar34 = dVar34 + dVar34;
        lVar15 = *(longlong *)(param_4 + 0x290);
        *(float *)(lVar15 + lVar16) =
             (float)((dVar34 * dVar38 - dVar42 * dVar35) + dVar36 * dVar40 + dVar41);
        *(float *)(lVar15 + 4 + lVar16) =
             (float)(dVar39 * dVar34 + dVar35 * dVar40 + dVar36 * dVar42 + dVar33);
        *(float *)(lVar15 + 8 + lVar16) =
             (float)(dVar36 * dVar34 + dVar4 + (dVar42 * dVar37 - dVar40 * dVar38));
        lVar15 = FUN_146c3d58a(*(undefined8 *)(param_2 + 0x208),DAT_14cb4bdf0);
        puVar2 = (undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(lVar15 + 0x20) + (ulonglong)((uint)(uVar28 >> 4) & 0x3fffff8)) +
                 (ulonglong)(((uint)uVar28 & 0x7f) << 4));
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(*(longlong *)(param_4 + 0x250) + lVar29 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined4 *)(*(longlong *)(param_4 + 0x2d0) + lVar29 * 4) = (undefined4)local_180;
        uVar28 = uVar28 + 1;
      } while ((longlong)uVar28 <
               (longlong)(*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24)));
    }
    if (0 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
      local_190 = (double *)(param_4 + 0x310);
      local_168 = param_4 + 0x380;
      lVar29 = local_188 * 3 + 2;
      local_180 = local_188 * 4;
      local_188 = local_188 & 0xffffffff;
      uVar30 = 0;
      local_178 = param_4;
      do {
        lVar15 = local_178;
        lVar16 = FUN_146c3d58a(*(undefined8 *)(param_2 + 0x208),DAT_14cb4be08);
        uVar20 = (uint)uVar30;
        uVar28 = uVar30 >> 9 & 0x7fffff;
        uVar22 = (ulonglong)(uVar20 & 0x1ff);
        iVar21 = (int)local_188 + uVar20;
        uVar27 = 1 << ((byte)iVar21 & 0x1f);
        pdVar17 = *(double **)(lVar15 + 800);
        if (*(double **)(lVar15 + 800) == (double *)0x0) {
          pdVar17 = local_190;
        }
        iVar24 = (int)local_188 + uVar20 + 0x1f;
        if (-1 < iVar21) {
          iVar24 = iVar21;
        }
        lVar15 = (longlong)(iVar24 >> 5);
        if (*(char *)(*(longlong *)(*(longlong *)(lVar16 + 0x20) + uVar28 * 8) + uVar22) == '\x01')
        {
          uVar20 = *(uint *)((longlong)pdVar17 + lVar15 * 4) | uVar27;
        }
        else {
          uVar20 = ~uVar27 & *(uint *)((longlong)pdVar17 + lVar15 * 4);
        }
        *(uint *)((longlong)pdVar17 + lVar15 * 4) = uVar20;
        iVar21 = *(int *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48) + 0x20) +
                           uVar28 * 8) + uVar22 * 4);
        if (iVar21 < 0) {
          lVar16 = *(longlong *)(local_178 + 0x390);
          if (*(longlong *)(local_178 + 0x390) == 0) {
            lVar16 = local_168;
          }
          puVar18 = (uint *)(lVar16 + lVar15 * 4);
          iVar21 = -1;
LAB_1484938a1:
          uVar27 = uVar27 | *puVar18;
        }
        else {
          lVar19 = FUN_146c3d58a(*(longlong *)(param_2 + 0x208),DAT_14cb4be10);
          lVar16 = *(longlong *)(local_178 + 0x390);
          if (*(longlong *)(local_178 + 0x390) == 0) {
            lVar16 = local_168;
          }
          puVar18 = (uint *)(lVar16 + lVar15 * 4);
          if (*(char *)(*(longlong *)(*(longlong *)(lVar19 + 0x20) + uVar28 * 8) + uVar22) == '\x01'
             ) goto LAB_1484938a1;
          uVar27 = ~uVar27 & *puVar18;
        }
        *puVar18 = uVar27;
        *(int *)(*(longlong *)(local_178 + 0x360) + local_180 + uVar30 * 4) = iVar21;
        lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x130) + uVar28 * 8);
        iVar26 = (int)local_170;
        iVar21 = *(int *)(lVar15 + 4 + uVar22 * 0xc);
        iVar24 = *(int *)(lVar15 + 8 + uVar22 * 0xc);
        lVar16 = *(longlong *)(local_178 + 0x2f0);
        *(int *)(lVar16 + -8 + lVar29 * 4) = *(int *)(lVar15 + uVar22 * 0xc) + iVar26;
        *(int *)(lVar16 + -4 + lVar29 * 4) = iVar21 + iVar26;
        *(int *)(lVar16 + lVar29 * 4) = iVar24 + iVar26;
        uVar30 = uVar30 + 1;
        lVar29 = lVar29 + 3;
        param_4 = local_178;
      } while ((longlong)uVar30 <
               (longlong)(*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)));
    }
    uVar31 = local_191;
    if (*(int *)(param_4 + 0x3d8) != 0) {
      lVar29 = *(longlong *)(param_4 + 0x3d0);
      lVar15 = local_160 * 0x38;
      *(undefined8 *)(lVar29 + 0x28 + lVar15) = DAT_14c8464f0;
      uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar23 = (undefined8 *)(lVar29 + 0x18 + lVar15);
      *puVar23 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar23[1] = uVar11;
      uVar13 = DAT_14c8464e8._4_4_;
      uVar10 = (undefined4)DAT_14c8464e8;
      uVar9 = DAT_14c8464e0._4_4_;
      uVar8 = (undefined4)DAT_14c8464e0;
      *(undefined8 *)(lVar29 + 0x10 + lVar15) = DAT_14c8464f0;
      puVar2 = (undefined4 *)(lVar29 + lVar15);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar13;
      *(undefined1 *)(lVar29 + 0x30 + lVar15) = 0;
      if (0 < *(int *)(*(longlong *)(param_4 + 0x450) + local_160 * 4)) {
        lVar29 = local_170 * 0xc + 8;
        lVar16 = local_170;
        do {
          lVar19 = *(longlong *)(param_4 + 0x230);
          dVar4 = (double)*(float *)(lVar19 + lVar29);
          dVar34 = (double)*(float *)(lVar19 + -4 + lVar29);
          dVar39 = (double)*(float *)(lVar19 + -8 + lVar29);
          pdVar17 = (double *)(*(longlong *)(param_4 + 0x3d0) + lVar15);
          if (*(char *)(*(longlong *)(param_4 + 0x3d0) + 0x30 + lVar15) == '\0') {
            pdVar17[3] = dVar39;
            pdVar17[4] = dVar34;
            pdVar17[5] = dVar4;
            *(undefined4 *)pdVar17 = *(undefined4 *)(pdVar17 + 3);
            *(undefined4 *)((longlong)pdVar17 + 4) = *(undefined4 *)((longlong)pdVar17 + 0x1c);
            *(undefined4 *)(pdVar17 + 1) = *(undefined4 *)(pdVar17 + 4);
            *(undefined4 *)((longlong)pdVar17 + 0xc) = *(undefined4 *)((longlong)pdVar17 + 0x24);
            pdVar17[2] = pdVar17[5];
            *(undefined1 *)(pdVar17 + 6) = 1;
          }
          else {
            dVar33 = *pdVar17;
            if (dVar39 <= *pdVar17) {
              dVar33 = dVar39;
            }
            *pdVar17 = dVar33;
            dVar33 = pdVar17[1];
            if (dVar34 <= pdVar17[1]) {
              dVar33 = dVar34;
            }
            pdVar17[1] = dVar33;
            dVar33 = pdVar17[2];
            if (dVar4 <= pdVar17[2]) {
              dVar33 = dVar4;
            }
            pdVar17[2] = dVar33;
            dVar33 = pdVar17[3];
            if (pdVar17[3] <= dVar39) {
              dVar33 = dVar39;
            }
            pdVar17[3] = dVar33;
            dVar39 = pdVar17[4];
            if (pdVar17[4] <= dVar34) {
              dVar39 = dVar34;
            }
            pdVar17[4] = dVar39;
            dVar34 = pdVar17[5];
            if (pdVar17[5] <= dVar4) {
              dVar34 = dVar4;
            }
            pdVar17[5] = dVar34;
          }
          lVar16 = lVar16 + 1;
          lVar29 = lVar29 + 0xc;
        } while (lVar16 < *(int *)(*(longlong *)(param_4 + 0x450) + local_160 * 4) + local_170);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar31;
}



// FUNCTION 148493b44 FUN_148493b44 body=818 status=ok
// SIG undefined FUN_148493b44(void)

void FUN_148493b44(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar10 = *(longlong *)(param_2 + 0xb0);
  lVar16 = FUN_146eb20ae(*(undefined8 *)(param_2 + 8),DAT_14c996a90,DAT_14c996a88);
  plVar11 = *(longlong **)(param_2 + 0x270);
  uVar15 = (**(code **)(*plVar11 + 0x60))(plVar11);
  fVar20 = 0.0;
  fVar23 = 0.0;
  if (0 < (int)uVar15) {
    lVar12 = plVar11[2];
    lVar10 = *(longlong *)(lVar10 + 0x10);
    lVar16 = *(longlong *)(lVar16 + 0x10);
    fVar20 = 0.0;
    lVar19 = 0;
    do {
      lVar17 = (longlong)*(int *)(lVar12 + 4 + lVar19);
      lVar18 = (longlong)*(int *)(lVar12 + lVar19);
      fVar21 = *(float *)(lVar10 + lVar17 * 0xc);
      fVar22 = *(float *)(lVar10 + 4 + lVar17 * 0xc);
      fVar1 = *(float *)(lVar16 + 4 + lVar17 * 8);
      fVar2 = *(float *)(lVar10 + lVar18 * 0xc);
      fVar3 = *(float *)(lVar10 + 4 + lVar18 * 0xc);
      fVar4 = *(float *)(lVar16 + lVar17 * 8);
      fVar5 = *(float *)(lVar16 + 4 + lVar18 * 8);
      fVar27 = fVar21 - fVar2;
      fVar25 = *(float *)(lVar10 + 8 + lVar17 * 0xc);
      fVar6 = *(float *)(lVar16 + lVar18 * 8);
      fVar30 = fVar22 - fVar3;
      lVar17 = (longlong)*(int *)(lVar12 + 8 + lVar19);
      fVar29 = *(float *)(lVar10 + lVar17 * 0xc);
      fVar26 = *(float *)(lVar10 + 4 + lVar17 * 0xc);
      fVar21 = fVar21 - fVar29;
      fVar22 = fVar22 - fVar26;
      fVar14 = fVar4 - fVar6;
      fVar13 = fVar1 - fVar5;
      fVar28 = *(float *)(lVar10 + 8 + lVar17 * 0xc);
      fVar24 = fVar25 - fVar28;
      fVar7 = *(float *)(lVar10 + 8 + lVar18 * 0xc);
      fVar25 = fVar25 - fVar7;
      fVar8 = *(float *)(lVar16 + lVar17 * 8);
      fVar4 = fVar4 - fVar8;
      fVar9 = *(float *)(lVar16 + 4 + lVar17 * 8);
      fVar1 = fVar1 - fVar9;
      fVar29 = fVar29 - fVar2;
      fVar26 = fVar26 - fVar3;
      fVar28 = fVar28 - fVar7;
      fVar8 = fVar8 - fVar6;
      fVar9 = fVar9 - fVar5;
      fVar23 = SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar29 * fVar29) +
               SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar21 * fVar21) +
               SQRT(fVar25 * fVar25 + fVar30 * fVar30 + fVar27 * fVar27) + fVar23;
      fVar20 = SQRT(fVar9 * fVar9 + fVar8 * fVar8) +
               SQRT(fVar1 * fVar1 + fVar4 * fVar4) +
               SQRT(fVar13 * fVar13 + fVar14 * fVar14) + fVar20;
      lVar19 = lVar19 + 0xc;
    } while ((ulonglong)uVar15 * 0xc != lVar19);
  }
  _finite((double)*(float *)(param_1 + 8));
  if (fVar23 <= 0.0) {
    fVar20 = *(float *)(param_1 + 8);
  }
  else {
    fVar20 = fVar20 / fVar23;
    *(float *)(param_1 + 8) = fVar20;
  }
  _finite((double)fVar20);
  fVar20 = *(float *)(param_1 + 8);
  if (fVar20 <= 0.0) {
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
    fVar20 = 1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x000148493e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _finite((double)fVar20);
  return;
}



// FUNCTION 148493e76 FUN_148493e76 body=163 status=ok
// SIG undefined FUN_148493e76(void)

void FUN_148493e76(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_146bfae70(param_1 + 8,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  puVar2 = (undefined4 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x20);
  *puVar2 = param_2[4];
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x20);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_1406b704c(param_1 + 0x18,iVar3);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8) = 0x100000000;
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_140bfc2d4((longlong *)(param_1 + 0x28),iVar3);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 148493f1a FUN_148493f1a body=899 status=ok
// SIG undefined FUN_148493f1a(void)

uint * FUN_148493f1a(uint *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_138 [32];
  longlong *local_118;
  ulonglong local_108;
  longlong *local_100;
  uint *local_f8;
  uint *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined1 *)(param_1 + 1) = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_100 = param_2;
  FUN_146c9491c(param_3,&local_a8,0xffffffff);
  *(undefined1 *)(param_1 + 1) = 1;
  uVar6 = uStack_a0 & 0xffffffff;
  *param_1 = (uint)uStack_a0;
  if (0 < (int)(uint)uStack_a0) {
    local_f8 = param_1 + 0xe;
    uVar9 = 0;
    local_f0 = param_1;
    do {
      iVar2 = *(int *)(local_a8 + 0x28 + uVar9 * 0x40);
      if (0 < iVar2) {
        plVar12 = (longlong *)(local_a8 + uVar9 * 0x40);
        lVar7 = 0;
        uVar11 = 0xffffffff;
        local_e8 = uVar9 * 3;
        iVar4 = 0;
        local_108 = uVar9;
        do {
          iVar1 = *(int *)(plVar12[4] + lVar7 * 4);
          lVar10 = (longlong)iVar1;
          lVar8 = (longlong)iVar4;
          if (lVar10 <= (longlong)uVar9) {
            lVar13 = plVar12[6];
            dVar15 = *(double *)(lVar13 + lVar7 * 0x18);
            dVar16 = *(double *)(lVar13 + 8 + lVar7 * 0x18);
            dVar14 = *(double *)(lVar13 + 0x10 + lVar7 * 0x18);
            if ((((dVar15 == 0.0) && (!NAN(dVar15))) && (dVar16 == 0.0)) &&
               (((!NAN(dVar16) && (dVar14 == 0.0)) && (!NAN(dVar14))))) {
              uVar9 = local_108;
              if (iVar1 < 0) goto LAB_148494035;
              lVar13 = *local_100;
              dVar14 = *(double *)(lVar13 + 0x10 + lVar10 * 0x18) -
                       *(double *)(lVar13 + 0x10 + local_e8 * 8);
              dVar16 = *(double *)(lVar13 + 8 + lVar10 * 0x18) -
                       *(double *)(lVar13 + 8 + local_e8 * 8);
              dVar15 = *(double *)(lVar13 + lVar10 * 0x18) - *(double *)(lVar13 + local_e8 * 8);
              dVar17 = dVar14 * dVar14 + dVar15 * dVar15 + dVar16 * dVar16;
              if (9.99999993922529e-09 < dVar17) {
                dVar17 = 1.0 / SQRT(dVar17);
                dVar15 = dVar15 * dVar17;
                dVar16 = dVar16 * dVar17;
                dVar14 = dVar14 * dVar17;
              }
            }
            lVar13 = *plVar12;
            lVar5 = (longlong)*(int *)(plVar12[2] + 4 + lVar8 * 4);
            local_b0 = *(double *)(lVar13 + 0x10 + lVar5 * 0x18) * dVar14 +
                       *(double *)(lVar13 + lVar5 * 0x18) * dVar15 +
                       *(double *)(lVar13 + 8 + lVar5 * 0x18) * dVar16;
            local_e0 = lVar10;
            local_c8 = dVar15;
            local_c0 = dVar16;
            local_b8 = dVar14;
            if ((int)uVar11 < 0) {
              uVar11 = param_1[0x10];
              FUN_14070416c(local_f8,plVar12);
            }
            local_d8 = 0;
            uStack_d0 = 0;
            lVar13 = (longlong)*(int *)(plVar12[2] + lVar8 * 4);
            lVar10 = lVar8;
            if (0 < lVar13) {
              do {
                uVar6 = uStack_d0;
                iVar2 = *(int *)(plVar12[2] + (lVar10 + 1) * 4);
                lVar5 = (longlong)(int)uStack_d0;
                uVar3 = (int)uStack_d0 + 1;
                uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar3);
                if (uStack_d0._4_4_ < uVar3) {
                  FUN_1446f48e2(&local_d8,uVar6 & 0xffffffff);
                }
                *(uint *)(local_d8 + lVar5 * 4) = iVar2 + uVar11;
                lVar13 = lVar13 + -1;
                lVar10 = lVar10 + 1;
              } while (lVar13 != 0);
            }
            param_1 = local_f0;
            uVar9 = local_108;
            local_118 = &local_d8;
            FUN_14849429e(local_f0,&local_c8,local_108 & 0xffffffff,local_e0);
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
            iVar2 = (int)plVar12[5];
          }
LAB_148494035:
          lVar7 = lVar7 + 1;
          iVar4 = *(int *)(plVar12[2] + lVar8 * 4) + iVar4 + 1;
        } while (lVar7 < iVar2);
        uVar6 = (ulonglong)*param_1;
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)(int)uVar6);
    uVar6 = uStack_a0 & 0xffffffff;
  }
  FUN_146c94b38(local_a8,uVar6);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14849429e FUN_14849429e body=257 status=ok
// SIG undefined FUN_14849429e(void)

int FUN_14849429e(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_146bfae70(param_1 + 8,iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  puVar2 = (undefined4 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x20);
  *puVar2 = param_2[4];
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x20);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_1406b704c(param_1 + 0x18,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar5 + (longlong)iVar4 * 8) = param_3;
  *(undefined4 *)(lVar5 + 4 + (longlong)iVar4 * 8) = param_4;
  iVar4 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
    FUN_140bfc2d4((longlong *)(param_1 + 0x28),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar13 = (longlong)iVar4 * 0x10;
  puVar1 = (undefined8 *)(lVar5 + lVar13);
  *(undefined8 *)(lVar5 + lVar13) = 0;
  iVar4 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(lVar5 + 8 + lVar13) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(puVar1,iVar4,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar4 << 2);
  }
  return iVar3;
}



// FUNCTION 1484943a0 FUN_1484943a0 body=5274 status=ok
// SIG undefined FUN_1484943a0(void)

int * FUN_1484943a0(int *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  void *_Src;
  longlong lVar8;
  double dVar9;
  double dVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined4 **ppuVar23;
  double *pdVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  ulonglong uVar28;
  longlong *plVar29;
  bool bVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  uint uVar36;
  undefined1 local_5d8 [32];
  int **local_5b8;
  undefined4 local_5b0;
  int local_5a8;
  int local_594;
  int *local_590;
  uint local_584;
  longlong *local_580;
  ulonglong local_578;
  longlong local_570;
  double local_568;
  double local_560;
  int *local_558;
  int *local_550;
  double *local_548;
  undefined8 *local_540;
  ulonglong *local_538;
  longlong local_530;
  double *local_528;
  ulonglong local_520;
  int *local_518;
  undefined4 local_50c;
  undefined4 *local_508;
  undefined8 *local_500;
  undefined4 *local_4f8;
  undefined8 *local_4f0;
  int *local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  int *local_4b0;
  longlong *local_4a8;
  double *local_4a0;
  int **local_498;
  undefined8 local_490;
  uint *local_488;
  ulonglong uStack_480;
  void *local_470;
  int local_468;
  undefined4 local_464;
  undefined4 *local_460;
  undefined4 *local_458;
  undefined1 local_44c [4];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  double local_410;
  double local_408;
  undefined8 local_400;
  undefined4 uStack_3f8;
  undefined4 local_3f4;
  longlong local_3e8;
  undefined4 local_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  ulonglong uStack_3c0;
  undefined8 local_3b8;
  ulonglong uStack_3b0;
  longlong local_3a8 [4];
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  longlong local_368;
  undefined4 local_360;
  int *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined8 local_318;
  undefined4 local_310;
  _RTL_CRITICAL_SECTION local_308;
  undefined8 local_2e0;
  undefined4 local_2d8;
  double local_2c8 [3];
  ulonglong local_2b0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_5d8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  local_468 = (int)param_2[1];
  lVar25 = (longlong)local_468;
  *param_1 = local_468;
  local_470 = (void *)0x0;
  _Src = (void *)*param_2;
  local_580 = param_2;
  if (lVar25 == 0) {
    local_464 = 0;
  }
  else {
    FUN_147468894(&local_470,local_468,0);
    memcpy(local_470,_Src,lVar25 * 0x38);
  }
  local_590 = param_1;
  if (param_3 == '\0') {
    if (0 < *param_1) {
      local_550 = param_1 + 0xe;
      lVar25 = 0x28;
      uVar28 = 0;
      do {
        piVar11 = local_550;
        lVar22 = *local_580;
        iVar20 = param_1[0x10];
        uVar36 = iVar20 + 1;
        param_1[0x10] = uVar36;
        local_560 = (double)CONCAT44(local_560._4_4_,uVar36);
        if ((uint)param_1[0x11] < uVar36) {
          FUN_1403e3958(local_550,iVar20);
        }
        lVar26 = lVar22 + lVar25;
        local_538 = (ulonglong *)(lVar26 + -0x28);
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar20 * 0x18) = *(undefined8 *)(lVar26 + -0x18);
        uVar31 = *(undefined4 *)(lVar26 + -0x24);
        uVar12 = *(undefined4 *)(lVar26 + -0x20);
        uVar13 = *(undefined4 *)(lVar26 + -0x1c);
        puVar2 = (undefined4 *)(lVar8 + (longlong)iVar20 * 0x18);
        *puVar2 = *(undefined4 *)local_538;
        puVar2[1] = uVar31;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
        uVar4 = *(undefined8 *)(lVar26 + -0x20);
        uVar5 = *(undefined8 *)(lVar26 + -0x18);
        uVar6 = *(undefined8 *)(lVar26 + -0x10);
        iVar19 = param_1[0x10];
        lVar26 = (longlong)iVar19;
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + lVar26 * 0x18) = uVar6;
        *(undefined8 *)(lVar8 + 8 + lVar26 * 0x18) = uVar4;
        *(undefined8 *)(lVar8 + 0x10 + lVar26 * 0x18) = uVar5;
        uVar4 = *(undefined8 *)(lVar22 + -0x18 + lVar25);
        uVar5 = *(undefined8 *)(lVar22 + -0x10 + lVar25);
        uVar6 = *(undefined8 *)(lVar22 + -8 + lVar25);
        iVar19 = param_1[0x10];
        lVar26 = (longlong)iVar19;
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + lVar26 * 0x18) = uVar5;
        *(undefined8 *)(lVar8 + 8 + lVar26 * 0x18) = uVar6;
        *(undefined8 *)(lVar8 + 0x10 + lVar26 * 0x18) = uVar4;
        uVar4 = *(undefined8 *)(lVar22 + -0x28 + lVar25);
        uVar5 = *(undefined8 *)(lVar22 + -0x18 + lVar25);
        uVar6 = *(undefined8 *)(lVar22 + -8 + lVar25);
        iVar19 = param_1[0x10];
        lVar26 = (longlong)iVar19;
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + lVar26 * 0x18) = uVar4;
        *(undefined8 *)(lVar8 + 8 + lVar26 * 0x18) = uVar6;
        *(undefined8 *)(lVar8 + 0x10 + lVar26 * 0x18) = uVar5;
        uVar4 = *(undefined8 *)(lVar22 + lVar25);
        uVar5 = *(undefined8 *)(lVar22 + -0x28 + lVar25);
        uVar6 = *(undefined8 *)(lVar22 + -0x20 + lVar25);
        iVar19 = param_1[0x10];
        lVar26 = (longlong)iVar19;
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + lVar26 * 0x18) = uVar5;
        *(undefined8 *)(lVar8 + 8 + lVar26 * 0x18) = uVar6;
        *(undefined8 *)(lVar8 + 0x10 + lVar26 * 0x18) = uVar4;
        uVar4 = *(undefined8 *)(lVar22 + lVar25);
        uVar5 = *(undefined8 *)(lVar22 + -0x20 + lVar25);
        uVar6 = *(undefined8 *)(lVar22 + -0x10 + lVar25);
        iVar19 = param_1[0x10];
        lVar26 = (longlong)iVar19;
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + lVar26 * 0x18) = uVar6;
        *(undefined8 *)(lVar8 + 8 + lVar26 * 0x18) = uVar5;
        *(undefined8 *)(lVar8 + 0x10 + lVar26 * 0x18) = uVar4;
        iVar19 = param_1[0x10];
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        puVar16 = (undefined8 *)(lVar22 + lVar25);
        local_540 = puVar16 + -2;
        lVar26 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar26 + 0x10 + (longlong)iVar19 * 0x18) = *puVar16;
        uVar31 = *(undefined4 *)((longlong)puVar16 + -0xc);
        uVar12 = *(undefined4 *)(puVar16 + -1);
        uVar13 = *(undefined4 *)((longlong)puVar16 + -4);
        puVar2 = (undefined4 *)(lVar26 + (longlong)iVar19 * 0x18);
        *puVar2 = *(undefined4 *)local_540;
        puVar2[1] = uVar31;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
        uVar4 = *puVar16;
        uVar5 = puVar16[-5];
        uVar6 = puVar16[-1];
        iVar19 = param_1[0x10];
        lVar26 = (longlong)iVar19;
        param_1[0x10] = iVar19 + 1U;
        if ((uint)param_1[0x11] < iVar19 + 1U) {
          FUN_1403e3958(piVar11,iVar19);
        }
        lVar8 = *(longlong *)(param_1 + 0xe);
        *(undefined8 *)(lVar8 + lVar26 * 0x18) = uVar5;
        *(undefined8 *)(lVar8 + 8 + lVar26 * 0x18) = uVar6;
        *(undefined8 *)(lVar8 + 0x10 + lVar26 * 0x18) = uVar4;
        local_358 = (int *)0x0;
        uStack_350 = CONCAT44(uStack_350._4_4_,4);
        FUN_144a06ca8(&local_358,4,0);
        *local_358 = iVar20;
        local_358[1] = local_560._0_4_;
        local_568 = (double)CONCAT44(local_568._4_4_,iVar20 + 2);
        local_358[2] = iVar20 + 2;
        local_570 = CONCAT44(local_570._4_4_,iVar20 + 3);
        local_358[3] = iVar20 + 3;
        local_2c8[0] = 0.0;
        local_2c8[1] = 0.0;
        local_2c8[2] = -1.0;
        local_2b0 = *(ulonglong *)(lVar22 + -0x18 + lVar25) ^ 0x8000000000000000;
        local_5b8 = &local_358;
        local_578 = uVar28;
        FUN_14849429e(param_1,local_2c8,uVar28 & 0xffffffff,0xffffffff);
        if (local_358 != (int *)0x0) {
          FUN_1400020a8();
        }
        iVar19 = iVar20 + 7;
        iVar1 = iVar20 + 6;
        local_358 = (int *)0x0;
        uStack_350 = CONCAT44(uStack_350._4_4_,4);
        FUN_144a06ca8(&local_358,4,0);
        uVar28 = local_578;
        local_558 = (int *)CONCAT44(local_558._4_4_,iVar20 + 4);
        *local_358 = iVar20 + 4;
        local_358[1] = iVar19;
        local_358[2] = iVar1;
        local_358[3] = iVar20 + 5;
        local_2b0 = *(undefined8 *)(lVar22 + lVar25);
        local_2c8[0] = 0.0;
        local_2c8[1] = 0.0;
        local_2c8[2] = 1.0;
        local_5b8 = &local_358;
        local_594 = iVar20 + 5;
        FUN_14849429e(local_590,local_2c8,local_578 & 0xffffffff,0xffffffff);
        if (local_358 != (int *)0x0) {
          FUN_1400020a8();
        }
        local_358 = (int *)0x0;
        uStack_350 = CONCAT44(uStack_350._4_4_,4);
        FUN_144a06ca8(&local_358,4,0);
        *local_358 = iVar20;
        local_358[1] = (int)local_558;
        local_358[2] = local_594;
        local_358[3] = local_560._0_4_;
        local_2c8[0] = 0.0;
        local_2c8[1] = -1.0;
        local_2c8[2] = 0.0;
        local_2b0 = *(ulonglong *)(lVar22 + -0x20 + lVar25) ^ 0x8000000000000000;
        local_5b8 = &local_358;
        FUN_14849429e(local_590,local_2c8,uVar28 & 0xffffffff,0xffffffff);
        if (local_358 != (int *)0x0) {
          FUN_1400020a8();
        }
        local_358 = (int *)0x0;
        uStack_350 = CONCAT44(uStack_350._4_4_,4);
        FUN_144a06ca8(&local_358,4,0);
        *local_358 = (int)local_570;
        local_358[1] = local_568._0_4_;
        local_358[2] = iVar1;
        local_358[3] = iVar19;
        local_2b0 = *(undefined8 *)(lVar22 + -8 + lVar25);
        local_2c8[0] = 0.0;
        local_2c8[1] = 1.0;
        local_2c8[2] = 0.0;
        local_5b8 = &local_358;
        FUN_14849429e(local_590,local_2c8,uVar28 & 0xffffffff,0xffffffff);
        if (local_358 != (int *)0x0) {
          FUN_1400020a8();
        }
        local_358 = (int *)0x0;
        uStack_350 = CONCAT44(uStack_350._4_4_,4);
        FUN_144a06ca8(&local_358,4,0);
        param_1 = local_590;
        *local_358 = iVar20;
        local_358[1] = (int)local_570;
        local_358[2] = iVar19;
        local_358[3] = (int)local_558;
        local_2c8[0] = -1.0;
        local_2c8[1] = 0.0;
        local_2c8[2] = 0.0;
        local_2b0 = *local_538 ^ 0x8000000000000000;
        local_5b8 = &local_358;
        FUN_14849429e(local_590,local_2c8,uVar28 & 0xffffffff,0xffffffff);
        if (local_358 != (int *)0x0) {
          FUN_1400020a8();
        }
        local_358 = (int *)0x0;
        uStack_350 = CONCAT44(uStack_350._4_4_,4);
        FUN_144a06ca8(&local_358,4,0);
        *local_358 = local_560._0_4_;
        local_358[1] = local_594;
        local_358[2] = iVar1;
        local_358[3] = local_568._0_4_;
        local_2b0 = *local_540;
        local_2c8[0] = 1.0;
        local_2c8[1] = 0.0;
        local_2c8[2] = 0.0;
        local_5b8 = &local_358;
        FUN_14849429e(param_1,local_2c8,uVar28 & 0xffffffff,0xffffffff);
        if (local_358 != (int *)0x0) {
          FUN_1400020a8();
        }
        uVar28 = uVar28 + 1;
        lVar25 = lVar25 + 0x38;
      } while ((longlong)uVar28 < (longlong)*param_1);
    }
  }
  else {
    FUN_1458481c0(local_2c8);
    uVar31 = 0;
    uVar12 = 0;
    local_2c8[0] = 0.0;
    if ((longlong)(int)local_580[1] != 0) {
      lVar25 = *local_580;
      lVar22 = 0;
      do {
        dVar32 = *(double *)(lVar25 + 0x28 + lVar22) - *(double *)(lVar25 + 0x10 + lVar22);
        dVar34 = *(double *)(lVar25 + 0x20 + lVar22) - *(double *)(lVar25 + 8 + lVar22);
        dVar35 = *(double *)(lVar25 + 0x18 + lVar22) - *(double *)(lVar25 + lVar22);
        if (dVar35 <= dVar34) {
          dVar35 = dVar34;
        }
        if (dVar35 <= dVar32) {
          dVar35 = dVar32;
        }
        if ((double)CONCAT44(uVar12,uVar31) <= dVar35) {
          uVar31 = SUB84(dVar35,0);
          uVar12 = (undefined4)((ulonglong)dVar35 >> 0x20);
        }
        lVar22 = lVar22 + 0x38;
      } while ((longlong)(int)local_580[1] * 0x38 - lVar22 != 0);
      local_2c8[0] = (double)CONCAT44(uVar12,uVar31) * 4.0;
    }
    if (0 < *param_1) {
      lVar25 = 0;
      uVar28 = 0;
      do {
        lVar22 = *local_580;
        if (*(char *)(lVar22 + 0x30 + lVar25) == '\0') {
          local_358 = (int *)0x7fefffffffffffff;
          uStack_350 = 0x7fefffffffffffff;
          local_348 = 0x7fefffffffffffff;
          local_340 = 0xffefffffffffffff;
          uStack_338 = 0xffefffffffffffff;
          local_330 = 0xffffffff;
          uStack_32c = 0xffefffff;
        }
        else {
          puVar16 = (undefined8 *)(lVar22 + lVar25);
          local_358 = (int *)*puVar16;
          uStack_350 = puVar16[1];
          local_348 = puVar16[2];
          puVar16 = (undefined8 *)(lVar22 + 0x18 + lVar25);
          local_340 = *puVar16;
          uStack_338 = puVar16[1];
          uVar4 = *(undefined8 *)(lVar22 + 0x28 + lVar25);
          local_330 = (undefined4)uVar4;
          uStack_32c = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        FUN_146c86256(local_2c8,uVar28 & 0xffffffff,&local_358);
        uVar28 = uVar28 + 1;
        lVar25 = lVar25 + 0x38;
      } while ((longlong)uVar28 < (longlong)*local_590);
    }
    uStack_338 = 0;
    local_330 = 0;
    local_358 = (int *)0x0;
    uStack_350 = 0;
    uStack_32c = 0x80;
    uStack_328 = 0xffffffff;
    local_324 = 0;
    local_318 = 0;
    local_310 = 0;
    InitializeCriticalSection(&local_308);
    SetCriticalSectionSpinCount(&local_308,4000);
    local_2e0 = 0x3f50624dd2f1a9fc;
    local_2d8 = 0xffffffff;
    local_388 = 0;
    local_380 = 0;
    local_3a8[0] = 0;
    local_3a8[1] = 0;
    local_37c = 0xffffffff00000080;
    local_374 = 0;
    local_368 = 0;
    local_360 = 0;
    local_488 = (uint *)0x0;
    uStack_480 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    param_1 = local_590;
    if (0 < *local_590) {
      local_530 = 0x18;
      local_578 = 0;
      do {
        lVar25 = *local_580;
        bVar30 = (longlong)uStack_3d0 < 0;
        uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
        if (bVar30) {
          FUN_140cb0586(&local_3d8,0);
        }
        bVar30 = (longlong)uStack_3c0 < 0;
        uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
        if (bVar30) {
          FUN_140cb0586(&local_3c8,0);
        }
        bVar30 = (longlong)uStack_3b0 < 0;
        uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
        if (bVar30) {
          FUN_140cb0586(&local_3b8,0);
        }
        bVar30 = (longlong)uStack_480 < 0;
        uStack_480 = uStack_480 & 0xffffffff00000000;
        if (bVar30) {
          FUN_14481578e(&local_488,0);
        }
        lVar22 = local_578 * 0x38;
        local_528 = (double *)(lVar25 + lVar22);
        local_568 = local_528[5] + 0.0001;
        dVar35 = local_528[4];
        dVar32 = local_528[3];
        local_560 = local_528[2] + -0.0001;
        dVar10 = local_528[1] + -0.0001;
        dVar34 = *local_528 + -0.0001;
        local_570 = lVar25;
        local_428 = dVar34;
        dStack_420 = dVar10;
        local_418 = local_560;
        local_410 = dVar32 + 0.0001;
        local_408 = dVar35 + 0.0001;
        local_400 = local_568;
        FUN_146c88a30(local_2c8,&local_428,&local_488);
        if ((longlong)(int)uStack_480 != 0) {
          puVar3 = local_488 + (int)uStack_480;
          lVar25 = local_570 + local_530;
          plVar18 = local_580;
          puVar27 = local_488;
          do {
            if (((((local_578 != *puVar27) &&
                  (pdVar24 = (double *)((longlong)(int)*puVar27 * 0x38 + *plVar18),
                  dVar34 < pdVar24[3] || dVar34 == pdVar24[3])) && (*pdVar24 <= dVar32 + 0.0001)) &&
                ((dVar10 < pdVar24[4] || dVar10 == pdVar24[4] && (pdVar24[1] <= dVar35 + 0.0001))))
               && ((local_560 < pdVar24[5] || local_560 == pdVar24[5] && (pdVar24[2] <= local_568)))
               ) {
              lVar26 = -3;
              plVar29 = &local_3d8;
              do {
                dVar7 = pdVar24[lVar26 + 3];
                dVar9 = *(double *)(lVar25 + lVar26 * 8) + 0.0001;
                dVar33 = *(double *)(lVar25 + 0x18 + lVar26 * 8) + -0.0001;
                if ((dVar9 < dVar7) && (dVar7 < dVar33)) {
                  iVar20 = (int)plVar29[1];
                  *(uint *)(plVar29 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)plVar29 + 0xc) < iVar20 + 1U) {
                    FUN_144941252(plVar29,iVar20);
                    plVar18 = local_580;
                  }
                  *(double *)(*plVar29 + (longlong)iVar20 * 8) = dVar7;
                  dVar9 = *(double *)(lVar25 + lVar26 * 8) + 0.0001;
                  dVar33 = *(double *)(lVar25 + 0x18 + lVar26 * 8) + -0.0001;
                }
                dVar7 = pdVar24[lVar26 + 6];
                if ((dVar9 < dVar7) && (dVar7 < dVar33)) {
                  iVar20 = (int)plVar29[1];
                  *(uint *)(plVar29 + 1) = iVar20 + 1U;
                  if (*(uint *)((longlong)plVar29 + 0xc) < iVar20 + 1U) {
                    FUN_144941252(plVar29,iVar20);
                    plVar18 = local_580;
                  }
                  *(double *)(*plVar29 + (longlong)iVar20 * 8) = dVar7;
                }
                plVar29 = plVar29 + 2;
                lVar26 = lVar26 + 1;
              } while (lVar26 != 0);
            }
            puVar27 = puVar27 + 1;
          } while (puVar27 != puVar3);
        }
        param_1 = local_590;
        local_548 = (double *)(local_570 + lVar22 + 0x18);
        lVar25 = 0;
        do {
          lVar22 = lVar25 * 0x10;
          plVar18 = &local_3d8 + lVar25 * 2;
          dVar35 = local_528[lVar25];
          iVar20 = *(int *)(&uStack_3d0 + lVar25 * 2);
          *(uint *)(&uStack_3d0 + lVar25 * 2) = iVar20 + 1U;
          if (*(uint *)((longlong)&uStack_3d0 + lVar22 + 4) < iVar20 + 1U) {
            FUN_144941252(plVar18,iVar20);
          }
          *(double *)(*plVar18 + (longlong)iVar20 * 8) = dVar35;
          dVar35 = local_548[lVar25];
          iVar20 = *(int *)(&uStack_3d0 + lVar25 * 2);
          *(uint *)(&uStack_3d0 + lVar25 * 2) = iVar20 + 1U;
          if (*(uint *)((longlong)&uStack_3d0 + lVar22 + 4) < iVar20 + 1U) {
            FUN_144941252(plVar18,iVar20);
          }
          *(double *)(*plVar18 + (longlong)iVar20 * 8) = dVar35;
          FUN_1484a8a8c(*plVar18,*(undefined4 *)(&uStack_3d0 + lVar25 * 2));
          iVar20 = *(int *)(&uStack_3d0 + lVar25 * 2);
          iVar19 = 1;
          if (1 < iVar20) {
            puVar16 = (undefined8 *)*plVar18;
            uVar31 = (undefined4)*puVar16;
            uVar12 = (undefined4)((ulonglong)*puVar16 >> 0x20);
            iVar19 = 1;
            lVar26 = 1;
            do {
              if (0.0001 <= (double)puVar16[lVar26] - (double)CONCAT44(uVar12,uVar31)) {
                puVar16[iVar19] = puVar16[lVar26];
                puVar16 = (undefined8 *)*plVar18;
                uVar31 = (undefined4)puVar16[lVar26];
                uVar12 = (undefined4)((ulonglong)puVar16[lVar26] >> 0x20);
                iVar19 = iVar19 + 1;
                iVar20 = *(int *)(&uStack_3d0 + lVar25 * 2);
              }
              lVar26 = lVar26 + 1;
            } while (lVar26 < iVar20);
          }
          FUN_1400bd09c(plVar18,iVar19,0);
          dVar35 = local_548[lVar25];
          if (*(int *)(&uStack_3d0 + lVar25 * 2) == 1) {
            *(undefined4 *)(&uStack_3d0 + lVar25 * 2) = 2;
            if (*(uint *)((longlong)&uStack_3d0 + lVar22 + 4) < 2) {
              FUN_144941252(plVar18,1);
            }
            pdVar24 = (double *)(*plVar18 + 8);
          }
          else {
            pdVar24 = (double *)((longlong)(*(int *)(&uStack_3d0 + lVar25 * 2) + -1) * 8 + *plVar18)
            ;
          }
          *pdVar24 = dVar35;
          lVar25 = lVar25 + 1;
        } while (lVar25 != 3);
        local_408 = 0.0;
        local_400._0_4_ = 0;
        local_428 = 0.0;
        dStack_420 = 0.0;
        local_400._4_4_ = 0x80;
        uStack_3f8 = 0xffffffff;
        local_3f4 = 0;
        local_3e8 = 0;
        local_3e0 = 0;
        local_4b0 = param_1;
        local_4a8 = &local_3d8;
        local_498 = &local_358;
        local_490 = 0x3f1a36e2eb1c432d;
        uVar28 = 0;
        local_4a0 = &local_428;
        do {
          local_520 = uVar28 + 1;
          puVar17 = (ulonglong *)0x0;
          local_538 = (ulonglong *)(local_520 & 0xffffffff);
          if (local_520 == 3) {
            local_538 = puVar17;
          }
          iVar20 = (int)uVar28 + (((int)uVar28 + 2U) / 3) * -3 + 2;
          local_550 = (int *)(&uStack_3d0 + (longlong)local_538 * 2);
          local_518 = (int *)(&uStack_3d0 + uVar28 * 2);
          local_540 = (undefined8 *)CONCAT44(local_540._4_4_,iVar20);
          local_558 = (int *)((longlong)&uStack_3d0 + (ulonglong)(uint)(iVar20 * 0x10));
          local_584 = (uint)CONCAT71((int7)((ulonglong)local_558 >> 8),1);
          uVar36 = 0xbff00000;
          do {
            local_594 = 0;
            if (puVar17 != (ulonglong *)0x0) {
              local_594 = *local_518 + -1;
            }
            local_4c8 = 0;
            uStack_4c0 = 0;
            local_4b8 = 0;
            (&local_4c8)[uVar28] = (ulonglong)uVar36 << 0x20;
            pdVar24 = local_548;
            if ((local_584 & 1) != 0) {
              pdVar24 = local_528;
            }
            iVar20 = *local_550;
            if (1 < iVar20) {
              dVar35 = pdVar24[uVar28];
              iVar19 = *local_558;
              dVar32 = 0.0;
              dVar34 = 4.94065645841247e-324;
              do {
                local_570 = CONCAT44(local_570._4_4_,SUB84(dVar32,0));
                dVar32 = dVar34;
                if (1 < iVar19) {
                  iVar20 = 1;
                  local_568 = dVar34;
                  do {
                    puVar17 = local_538;
                    puVar16 = local_540;
                    iVar19 = local_594;
                    uVar31 = (int)local_570;
                    local_5b0 = (int)local_570;
                    local_5b8._0_4_ = local_594;
                    local_5a8 = iVar20 + -1;
                    uVar12 = FUN_143b658bc(&local_4b0,uVar28 & 0xffffffff,
                                           (ulonglong)local_538 & 0xffffffff,
                                           (ulonglong)local_540 & 0xffffffff);
                    local_560 = (double)CONCAT44(local_560._4_4_,uVar12);
                    uVar13 = SUB84(local_568,0);
                    local_5b8._0_4_ = iVar19;
                    local_5b0 = uVar13;
                    local_5a8 = iVar20 + -1;
                    uVar12 = FUN_143b658bc(&local_4b0,uVar28 & 0xffffffff,
                                           (ulonglong)puVar17 & 0xffffffff,
                                           (ulonglong)puVar16 & 0xffffffff);
                    local_5b8._0_4_ = iVar19;
                    local_5b0 = uVar13;
                    local_5a8 = iVar20;
                    uVar13 = FUN_143b658bc(&local_4b0,uVar28 & 0xffffffff,
                                           (ulonglong)puVar17 & 0xffffffff,
                                           (ulonglong)puVar16 & 0xffffffff);
                    local_5b0 = uVar31;
                    local_5b8 = (int **)CONCAT44(local_5b8._4_4_,iVar19);
                    uVar31 = local_560._0_4_;
                    local_5a8 = iVar20;
                    uVar14 = FUN_143b658bc(&local_4b0,uVar28 & 0xffffffff,
                                           (ulonglong)puVar17 & 0xffffffff,
                                           (ulonglong)puVar16 & 0xffffffff);
                    local_4d8 = uVar31;
                    local_4d4 = uVar12;
                    local_4d0 = uVar13;
                    local_4cc = uVar14;
                    uVar15 = (*(code *)PTR_FUN_14c75b148)(&local_4d8,0x10,0);
                    iVar19 = FUN_1484a8e28(local_3a8,uVar15,&local_4d8);
                    if ((iVar19 == -1) ||
                       (lVar25 = (longlong)iVar19 * 0x1c + local_3a8[0], lVar25 == 0)) {
                      local_4e8 = (int *)0x0;
                      uStack_4e0 = 0;
                      if ((local_584 & 1) == 0) {
                        uStack_444 = uVar31;
                        local_500 = &local_438;
                        ppuVar23 = &local_508;
                        local_508 = &local_448;
                        local_448 = uVar12;
                        uStack_440 = uVar14;
                        uStack_43c = uVar13;
                      }
                      else {
                        local_4f0 = &local_438;
                        ppuVar23 = &local_4f8;
                        local_4f8 = &local_448;
                        local_448 = uVar31;
                        uStack_444 = uVar12;
                        uStack_440 = uVar13;
                        uStack_43c = uVar14;
                      }
                      FUN_140aece26(&local_4e8,ppuVar23);
                      param_1 = local_590;
                      local_438 = local_4b8;
                      local_448 = (undefined4)local_4c8;
                      uStack_444 = local_4c8._4_4_;
                      uStack_440 = (undefined4)uStack_4c0;
                      uStack_43c = uStack_4c0._4_4_;
                      local_5b8 = &local_4e8;
                      local_430 = (double)((ulonglong)uVar36 << 0x20) * dVar35;
                      local_50c = FUN_14849429e(local_590,&local_448,local_578,0xffffffff);
                      local_460 = &local_4d8;
                      local_458 = &local_50c;
                      FUN_1484a8ea0(local_3a8,local_44c,&local_460);
                      if (local_4e8 != (int *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    else {
                      *(int *)(*(longlong *)(local_590 + 6) + 4 +
                              (longlong)*(int *)(lVar25 + 0x10) * 8) = (int)local_578;
                      param_1 = local_590;
                    }
                    iVar20 = iVar20 + 1;
                    iVar19 = *local_558;
                  } while (iVar20 < iVar19);
                  iVar20 = *local_550;
                  dVar32 = local_568;
                }
                uVar21 = SUB84(dVar32,0) + 1;
                dVar34 = (double)(ulonglong)uVar21;
              } while ((int)uVar21 < iVar20);
            }
            puVar17 = (ulonglong *)&DAT_00000001;
            uVar21 = local_584 & 1;
            local_584 = 0;
            uVar36 = 0x3ff00000;
          } while (uVar21 != 0);
          uVar28 = local_520;
        } while (local_520 != 3);
        local_3e0 = 0;
        if (local_3e8 != 0) {
          FUN_1400020a8();
        }
        FUN_146be8cc8(&local_428);
        local_578 = local_578 + 1;
        local_530 = local_530 + 0x38;
      } while ((longlong)local_578 < (longlong)*param_1);
    }
    lVar25 = 0x30;
    do {
      if (*(longlong *)((longlong)&local_3e8 + lVar25) != 0) {
        FUN_1400020a8();
      }
      lVar25 = lVar25 + -0x10;
    } while (lVar25 != 0);
    if (local_488 != (uint *)0x0) {
      FUN_1400020a8();
    }
    local_360 = 0;
    if (local_368 != 0) {
      FUN_1400020a8();
    }
    FUN_1484a32e6(local_3a8);
    FUN_146be6294(&local_358);
    FUN_145820e5c(local_2c8);
  }
  if (local_470 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)local_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14849583b FUN_14849583b body=2682 status=ok
// SIG undefined FUN_14849583b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14849583b(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      double param_5,undefined4 param_6,double *param_7,undefined1 param_8,
                      char param_9,char *param_10,double *param_11,undefined1 param_12)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  double *pdVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 unaff_R12;
  ulonglong uVar15;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar21;
  double dVar22;
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_718 [32];
  double *local_6f8;
  undefined8 local_6f0;
  double local_6e8;
  undefined1 local_6e0;
  undefined8 local_6d8;
  longlong *local_6d0 [2];
  longlong *local_6c0 [3];
  longlong *local_6a8;
  char local_698;
  undefined4 local_690;
  undefined4 local_68c;
  double local_688;
  double dStack_680;
  double local_678;
  longlong *plStack_670;
  char local_660;
  double local_658;
  double dStack_650;
  undefined1 local_648 [16];
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [24];
  longlong *local_5e0;
  char local_5d0;
  longlong *local_5c8;
  double dStack_5c0;
  double local_5b8;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_588;
  double local_580;
  double local_578;
  double local_568;
  double dStack_560;
  double local_558;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  longlong *plStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  undefined7 uVar16;
  
  uVar16 = (undefined7)((ulonglong)unaff_R12 >> 8);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_718;
  local_6d8 = param_4;
  FUN_144a5dc74(&local_5c8);
  FUN_146c8a302(local_5f8,param_10);
  plVar13 = local_5c8;
  if (local_5c8 != (longlong *)0x0) {
    (**(code **)(*local_5c8 + 0x10))();
  }
  uVar9 = SUB84(plVar13,0);
  if (param_9 != '\0') {
    lVar14 = param_1 + 0x48;
    FUN_146e9b1a8(&local_5c8,param_2);
    uVar16 = (undefined7)((ulonglong)&local_5c8 >> 8);
    FUN_148493b44(lVar14,&local_5c8);
    uVar9 = (undefined4)lVar14;
  }
  auVar30 = _DAT_149934d80;
  uVar15 = CONCAT71(uVar16,param_9);
  pdVar10 = (double *)&DAT_14c846480;
  if (*(char *)(param_7 + 0xc) != '\0') {
    pdVar10 = param_7;
  }
  dVar29 = *pdVar10;
  dVar19 = pdVar10[1];
  dVar21 = pdVar10[2];
  dVar33 = pdVar10[3];
  dVar5 = pdVar10[4];
  dVar6 = pdVar10[5];
  auVar1 = *(undefined1 (*) [16])(pdVar10 + 8);
  dVar34 = auVar1._0_8_;
  dVar22 = auVar1._8_8_;
  auVar2 = *(undefined1 (*) [16])(pdVar10 + 10);
  dVar23 = auVar2._0_8_;
  auVar24 = minpd(auVar1,_DAT_149934d80);
  auVar27 = minpd(auVar2,ZEXT816(0x3ff0000000000000));
  auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
  iVar8 = movmskpd((int)pdVar10,auVar25);
  auVar24._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  uVar12 = movmskpd(uVar9,auVar24);
  if ((uVar12 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar28 = dVar29 * 0.0;
    dVar32 = dVar19 * 0.0;
    dVar34 = dVar33 * 0.0 * 1.0;
    dVar22 = dVar21 * 0.0 * -1.0;
    local_658 = dVar32 * -1.0 + dVar29 + dVar34 + dVar21 * 0.0;
    dStack_650 = dVar28 * 1.0 + dVar19 + dVar22 + dVar33 * 0.0;
    local_648._0_8_ = ((dVar32 * 1.0 + dVar21) - dVar28) + dVar34;
    local_648._8_8_ = ((dVar28 * -1.0 + dVar33) - dVar32) + dVar22;
    dVar19 = pdVar10[6] * 1.0;
    dVar21 = pdVar10[7] * 0.0;
    dVar29 = dVar6 * 0.0 - dVar5 * 0.0;
    dVar33 = dVar19 * 0.0 - dVar6 * 0.0;
    dVar34 = dVar5 * 0.0 - dVar19 * 0.0;
    dVar22 = dVar21 * 1.0 - dVar21 * 1.0;
    dVar33 = dVar33 + dVar33;
    dVar34 = dVar34 + dVar34;
    dVar29 = dVar29 + dVar29;
    dVar22 = dVar22 + dVar22;
    local_568 = -*param_11 + (dVar29 * 0.0 - dVar34 * 0.0) + dVar5 + dVar33;
    dStack_560 = -param_11[1] + (dVar33 * 0.0 - dVar29 * 0.0) + dVar6 + dVar34;
    local_558 = -param_11[2] + (dVar34 * 0.0 - dVar33 * 0.0) + dVar19 + dVar29;
    dStack_620 = (dVar22 * 1.0 - dVar22 * 1.0) + dVar21 + dVar22 + 0.0;
  }
  else {
    local_178 = 0x3ff0000000000000;
    uStack_170 = 0;
    local_168 = 0.0;
    dStack_160 = 0.0;
    local_148 = 0.0;
    dStack_140 = 0.0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0;
    uStack_100 = 0x3ff0000000000000;
    dVar26 = dVar19 + dVar19;
    dVar32 = dVar21 + dVar21;
    dVar28 = dVar29 * (dVar29 + dVar29);
    local_1f8 = ((double)DAT_149934d80 - (dVar21 * dVar32 + dVar19 * dVar26)) * dVar34;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar21 * dVar32 + dVar28)) * dVar22;
    dVar4 = (dVar29 + dVar29) * dVar33;
    local_1d8 = (dVar26 * dVar29 - dVar32 * dVar33) * dVar22;
    dVar21 = (dVar32 * dVar19 - dVar4) * dVar23;
    dStack_1f0 = (dVar26 * dVar29 + dVar32 * dVar33) * dVar34;
    local_1c8 = (dVar32 * dVar19 + dVar4) * dVar22;
    local_1e8 = (dVar29 * dVar32 - dVar26 * dVar33) * dVar34;
    plStack_1e0 = (longlong *)0x0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar21,0);
    local_1b8._0_8_ = (dVar26 * dVar33 + dVar29 * dVar32) * dVar23;
    local_1b8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    local_1a8 = (1.0 - (dVar28 + dVar19 * dVar26)) * dVar23;
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_198 = dVar5;
    dStack_190 = dVar6;
    local_188 = pdVar10[6];
    local_158 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_118 = -*param_11;
    dStack_110 = -param_11[1];
    local_108 = -param_11[2];
    FUN_1447fea8d(&local_5c8);
    FUN_144a1c686(&local_5c8,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= dVar22);
    auVar27._0_8_ = -(ulonglong)(0.0 <= dVar34);
    auVar24 = blendvpd(_DAT_149936790,auVar30,auVar27);
    uVar17 = -(ulonglong)(0.0 <= dVar23 * 1.0);
    dVar34 = (double)(~uVar17 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar17 >> 0x20) & 0x3ff00000) << 0x20);
    dVar22 = auVar24._0_8_;
    local_5b8 = local_5b8 * dVar22;
    dStack_5c0 = dStack_5c0 * dVar22;
    local_5c8 = (longlong *)((double)local_5c8 * dVar22);
    dVar22 = auVar24._8_8_;
    local_598 = local_598 * dVar22;
    local_5a0 = local_5a0 * dVar22;
    local_5a8 = dVar22 * local_5a8;
    local_578 = local_578 * dVar34;
    local_580 = local_580 * dVar34;
    local_588 = dVar34 * local_588;
    param_11 = (double *)(uVar15 & 0xffffffff);
    FUN_14481fd10(&local_688,&local_5c8);
    uVar15 = uVar15 & 0xffffffff;
    dVar34 = local_678 * local_678 + local_688 * local_688;
    dVar22 = (double)plStack_670 * (double)plStack_670 + dStack_680 * dStack_680;
    auVar20._0_8_ = dVar34 + dVar22;
    auVar20._8_8_ = dVar34 + dVar22;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar24 = sqrtpd(auVar20,auVar20);
    auVar30 = divpd(auVar30,auVar24);
    auVar31._0_8_ = auVar30._0_8_ * local_678;
    auVar31._8_8_ = auVar30._8_8_ * (double)plStack_670;
    local_658 = (double)((ulonglong)(local_688 * auVar30._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dStack_650 = (double)((ulonglong)(dStack_680 * auVar30._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    local_648 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar18);
    dStack_620 = 0.0;
  }
  dVar34 = auVar2._8_8_ * 0.0;
  local_608._8_4_ = SUB84(dVar34,0);
  local_608._0_8_ = dVar23 * 1.0;
  local_608._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  local_6f8 = (double *)((ulonglong)local_6f8 & 0xffffffffffffff00);
  local_638 = local_568;
  dStack_630 = dStack_560;
  local_628 = local_558;
  local_618 = auVar1;
  FUN_148486eaa(&local_178,param_2,param_3);
  FUN_146c8a3d8(local_5f8);
  if (param_10 != (char *)0x0) {
    param_11 = (double *)&DAT_ffffffff;
    if (*param_10 != '\0') goto LAB_14849612d;
    pcVar3 = *(code **)(param_10 + 0x70);
    plVar13 = (longlong *)(param_10 + 0x90);
    if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_10 + 0x80);
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    cVar7 = (*pcVar3)(uVar11);
    *param_10 = cVar7;
    if (cVar7 != '\0') goto LAB_14849612d;
  }
  param_11 = (double *)CONCAT71((int7)((ulonglong)param_11 >> 8),param_8);
  FUN_144a5dc74(&local_5c8);
  FUN_146c8a302(&local_688,param_10);
  if (local_5c8 != (longlong *)0x0) {
    (**(code **)(*local_5c8 + 0x10))();
  }
  dVar34 = (double)(-(ulonglong)(0.0 <= dStack_140 - (double)local_158._0_8_) &
                   (ulonglong)(dStack_140 - (double)local_158._0_8_));
  dVar23 = (double)(-(ulonglong)(0.0 <= local_148 - dStack_160) &
                   (ulonglong)(local_148 - dStack_160));
  uVar17 = -(ulonglong)(dVar34 <= dVar23);
  dVar34 = (double)(~uVar17 & (ulonglong)dVar34 | uVar17 & (ulonglong)dVar23);
  dVar23 = (double)(-(ulonglong)(0.0 <= (double)local_158._8_8_ - local_168) &
                   (ulonglong)((double)local_158._8_8_ - local_168));
  uVar17 = -(ulonglong)(dVar34 <= dVar23);
  local_690 = param_6;
  local_68c = param_6;
  local_1d8 = local_148;
  dStack_1d0 = dStack_140;
  local_1e8 = (double)local_158._0_8_;
  plStack_1e0 = (longlong *)local_158._8_8_;
  local_1f8 = local_168;
  dStack_1f0 = dStack_160;
  uVar9 = FUN_146eaf23a(param_2);
  local_5c8 = (longlong *)0x0;
  dStack_5c0 = 0.0;
  local_5b8 = 4.24399158143648e-314;
  local_6e0 = param_8;
  local_6f0 = local_6d8;
  local_6f8 = &local_1f8;
  local_6e8 = (double)(uVar17 & (ulonglong)dVar23 | ~uVar17 & (ulonglong)dVar34) * 0.01;
  FUN_14848a73c(&local_5c8,uVar9,&local_690,param_1);
  FUN_146c8a3d8(&local_688);
  if (param_10 == (char *)0x0) {
LAB_148495fd4:
    FUN_144a5dc74(local_6c0);
    FUN_146c8a302(&local_1f8,param_10);
    if (local_6c0[0] != (longlong *)0x0) {
      (**(code **)(*local_6c0[0] + 0x10))();
    }
    local_6e8 = param_5;
    local_6f0 = CONCAT71(local_6f0._1_7_,(char)uVar15);
    local_6f8 = param_2;
    uVar12 = FUN_1484901e8(&local_178,param_1 + 0x48,&local_5c8,
                           CONCAT71((int7)((ulonglong)param_11 >> 8),param_12) & 0xffffffff);
    FUN_146c8a3d8(&local_1f8);
    if (param_10 == (char *)0x0) {
LAB_148496062:
      FUN_144a5dc74(local_6d0);
      FUN_146c8a302(local_6c0,param_10);
      if (local_6d0[0] != (longlong *)0x0) {
        (**(code **)(*local_6d0[0] + 0x10))();
      }
      thunk_FUN_146eaf28c(param_2);
      FUN_146c8a3d8(local_6c0);
      if (local_698 == '\0') {
        FUN_146c8a3d8(local_6c0);
      }
      if (local_6a8 != (longlong *)0x0) {
        (**(code **)(*local_6a8 + 0x10))();
      }
      param_11 = (double *)(ulonglong)uVar12;
    }
    else {
      param_11 = (double *)&DAT_ffffffff;
      if (*param_10 == '\0') {
        pcVar3 = *(code **)(param_10 + 0x70);
        plVar13 = (longlong *)(param_10 + 0x90);
        if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
          plVar13 = *(longlong **)(param_10 + 0x80);
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        cVar7 = (*pcVar3)(uVar11);
        *param_10 = cVar7;
        if (cVar7 == '\0') goto LAB_148496062;
      }
    }
    if (dStack_1d0._0_1_ == '\0') {
      FUN_146c8a3d8(&local_1f8);
    }
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x10))();
    }
  }
  else {
    param_11 = (double *)&DAT_ffffffff;
    if (*param_10 == '\0') {
      pcVar3 = *(code **)(param_10 + 0x70);
      plVar13 = (longlong *)(param_10 + 0x90);
      if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_10 + 0x80);
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      cVar7 = (*pcVar3)(uVar11);
      *param_10 = cVar7;
      if (cVar7 == '\0') goto LAB_148495fd4;
    }
  }
  FUN_148499c66(&local_5c8);
  if (local_660 == '\0') {
    FUN_146c8a3d8(&local_688);
  }
  if (plStack_670 != (longlong *)0x0) {
    (**(code **)(*plStack_670 + 0x10))();
  }
LAB_14849612d:
  FUN_148499b58(&local_178);
  if (local_5d0 == '\0') {
    FUN_146c8a3d8(local_5f8);
  }
  if (local_5e0 != (longlong *)0x0) {
    (**(code **)(*local_5e0 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_11;
}



// FUNCTION 1484962b6 FUN_1484962b6 body=1723 status=ok
// SIG undefined FUN_1484962b6(void)

undefined4
FUN_1484962b6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 *param_8,
             char param_9,char *param_10,undefined1 param_11)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined4 uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined1 auStack_6b8 [32];
  undefined1 local_698;
  undefined4 local_690;
  undefined8 local_688;
  undefined8 local_680;
  char local_678;
  char *local_670;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  longlong *local_620 [2];
  longlong *local_610;
  undefined4 local_608;
  longlong *local_5f8;
  char local_5e8;
  undefined1 local_5dc [4];
  wchar_t *local_5d8;
  undefined4 local_5d0;
  longlong *local_5c0;
  char local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  longlong local_538;
  longlong *local_4f8;
  undefined8 uStack_4f0;
  wchar_t *local_4e8;
  undefined4 local_4e0;
  undefined1 local_120 [24];
  longlong *local_108;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  local_4e8 = L"CutWithMultiplePlanesInit";
  local_4e0 = 0x19;
  local_660 = param_2;
  FUN_1446e940c(&local_548,&local_4e8);
  local_4e8 = L"PlanarCut";
  local_4e0 = 9;
  FUN_1446e940c(&local_5d8,&local_4e8);
  FUN_140208bae(&local_4e8,&local_5d8,&local_548,L"Preparing to cut with planes");
  FUN_146c8a302(local_120,param_10,0x3dcccccd,&local_4e8);
  if (local_4e8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_4e8 + 0x10))();
  }
  FUN_146e9b1a8(&local_4e8,param_3);
  cVar17 = FUN_146e9bde4(&local_4e8);
  uVar23 = 0xffffffff;
  if (cVar17 == '\0') goto LAB_14849641a;
  if (param_9 != '\0') {
    FUN_148493b44(local_660,&local_4e8);
  }
  uVar21 = DAT_14c8464f0;
  uVar18 = DAT_14c8464e0._4_4_;
  uVar23 = (undefined4)DAT_14c8464e0;
  puVar20 = &DAT_14c846480;
  if (*(char *)(param_8 + 0xc) != '\0') {
    puVar20 = param_8;
  }
  local_658 = *puVar20;
  uStack_650 = puVar20[1];
  uVar12 = puVar20[2];
  uVar13 = puVar20[3];
  dVar10 = (double)puVar20[4];
  dVar11 = (double)puVar20[5];
  local_638 = puVar20[8];
  uStack_630 = puVar20[9];
  local_648 = puVar20[10];
  uStack_640 = 0;
  dVar2 = (double)puVar20[6];
  uVar26 = (undefined4)DAT_14c8464e8;
  uVar14 = (ulonglong)DAT_14c8464e8 >> 0x20;
  local_4f8 = (longlong *)0x0;
  uStack_4f0 = 0;
  iVar7 = (int)param_1[1];
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_1484a950e(&local_4f8);
    lVar15 = param_1[1];
    if ((longlong)(int)lVar15 != 0) {
      lVar9 = *param_1;
      lVar25 = 0;
      do {
        uVar16 = uStack_4f0;
        dVar3 = *(double *)(lVar9 + 0x18 + lVar25);
        dVar4 = *(double *)(lVar9 + 0x10 + lVar25);
        dVar5 = *(double *)(lVar9 + lVar25);
        dVar6 = *(double *)(lVar9 + 8 + lVar25);
        local_538 = *(longlong *)(lVar9 + 0x10 + lVar25);
        puVar1 = (undefined4 *)(lVar9 + lVar25);
        local_548 = *puVar1;
        uStack_544 = puVar1[1];
        uStack_540 = puVar1[2];
        uStack_53c = puVar1[3];
        lVar24 = (longlong)(int)uStack_4f0;
        uVar19 = (int)uStack_4f0 + 1;
        uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar19);
        if (uStack_4f0._4_4_ < uVar19) {
          FUN_146bfae70(&local_4f8,uVar16 & 0xffffffff);
        }
        local_4f8[lVar24 * 4 + 2] = local_538;
        local_4f8[lVar24 * 4] = CONCAT44(uStack_544,local_548);
        (local_4f8 + lVar24 * 4)[1] = CONCAT44(uStack_53c,uStack_540);
        local_4f8[lVar24 * 4 + 3] =
             (longlong)
             ((dVar3 * dVar4 - dVar2) * dVar4 +
             (dVar3 * dVar5 - dVar10) * dVar5 + (dVar3 * dVar6 - dVar11) * dVar6);
        lVar25 = lVar25 + 0x20;
      } while ((longlong)(int)lVar15 * 0x20 != lVar25);
    }
  }
  local_5a8 = local_658;
  uStack_5a0 = uStack_650;
  local_588 = uVar23;
  uStack_584 = uVar18;
  local_578 = uVar21;
  uStack_570 = 0;
  local_568 = local_638;
  uStack_560 = uStack_630;
  local_558 = (undefined4)local_648;
  uStack_554 = local_648._4_4_;
  uStack_550 = (undefined4)uStack_640;
  uStack_54c = uStack_640._4_4_;
  local_698 = 0;
  local_598 = uVar12;
  uStack_590 = uVar13;
  uStack_580 = uVar26;
  uStack_57c = (int)uVar14;
  FUN_148486eaa(&local_548,param_3,param_4);
  FUN_146c8a3d8(local_120);
  if (param_10 == (char *)0x0) {
LAB_1484965ef:
    local_5d8 = L"CutWithMultiplePlanesBody";
    local_5d0 = 0x19;
    FUN_1446e940c(local_620,&local_5d8);
    local_5d8 = L"PlanarCut";
    local_5d0 = 9;
    FUN_1446e940c(local_5dc,&local_5d8);
    FUN_140208bae(&local_610,local_5dc,local_620,L"Cutting with planes");
    FUN_146c8a302(&local_5d8,param_10,0x3f7d70a4,&local_610);
    if (local_610 != (longlong *)0x0) {
      (**(code **)(*local_610 + 0x10))();
    }
    local_610 = local_4f8;
    local_608 = (int)uStack_4f0;
    local_670 = param_10;
    local_678 = param_9;
    local_680 = local_660;
    local_690 = param_7;
    local_698 = param_11;
    local_688 = param_3;
    uVar18 = FUN_14848e682(&local_548,&local_610,param_5,param_6);
    FUN_146c8a3d8(&local_5d8);
    if (param_10 == (char *)0x0) {
LAB_148496723:
      FUN_144a5dc74(local_620);
      FUN_146c8a302(&local_610,param_10,0x3f800000,local_620);
      if (local_620[0] != (longlong *)0x0) {
        (**(code **)(*local_620[0] + 0x10))();
      }
      thunk_FUN_146eaf28c(param_3);
      FUN_146c8a3d8(&local_610);
      if (local_5e8 == '\0') {
        FUN_146c8a3d8(&local_610);
      }
      uVar23 = uVar18;
      if (local_5f8 != (longlong *)0x0) {
        (**(code **)(*local_5f8 + 0x10))();
      }
    }
    else {
      uVar23 = 0xffffffff;
      if (*param_10 == '\0') {
        pcVar8 = *(code **)(param_10 + 0x70);
        plVar22 = (longlong *)(param_10 + 0x90);
        if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
          plVar22 = *(longlong **)(param_10 + 0x80);
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        cVar17 = (*pcVar8)(uVar21);
        *param_10 = cVar17;
        if (cVar17 == '\0') goto LAB_148496723;
      }
    }
    if (local_5b0 == '\0') {
      FUN_146c8a3d8(&local_5d8);
    }
    if (local_5c0 != (longlong *)0x0) {
      (**(code **)(*local_5c0 + 0x10))();
    }
  }
  else {
    uVar23 = 0xffffffff;
    if (*param_10 == '\0') {
      pcVar8 = *(code **)(param_10 + 0x70);
      plVar22 = (longlong *)(param_10 + 0x90);
      if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
        plVar22 = *(longlong **)(param_10 + 0x80);
      }
      uVar21 = (**(code **)(*plVar22 + 8))();
      cVar17 = (*pcVar8)(uVar21);
      *param_10 = cVar17;
      if (cVar17 == '\0') goto LAB_1484965ef;
    }
  }
  FUN_148499b58(&local_548);
  if (local_4f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14849641a:
  if (local_f8 == '\0') {
    FUN_146c8a3d8(local_120);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)auStack_6b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 148496974 FUN_148496974 body=62 status=ok
// SIG undefined FUN_148496974(void)

void FUN_148496974(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484969b2 FUN_1484969b2 body=457 status=ok
// SIG undefined FUN_1484969b2(void)

void FUN_1484969b2(longlong param_1,undefined8 *param_2,longlong *param_3,double param_4,
                  char param_5)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_140cb0586(param_3,0);
  }
  FUN_146ec1438(param_1);
  uVar1 = DAT_14c9974a8;
  FUN_1446ddc76(&local_58,"Volume",1);
  lVar2 = FUN_14061a004(param_1,local_58,uVar1);
  local_68 = (void *)0x0;
  local_60 = *(uint *)(param_2 + 1);
  lVar5 = (longlong)(int)local_60;
  _Src = (void *)*param_2;
  if (lVar5 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar5 << 2);
    uVar3 = local_60;
    if (local_60 != 0) goto LAB_148496ad0;
  }
  if (*(int *)(param_1 + 0x198) < 1) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      uVar3 = local_60;
      lVar5 = (longlong)(int)local_60;
      local_60 = local_60 + 1;
      if (local_5c < local_60) {
        FUN_1446f48e2(&local_68,uVar3);
      }
      *(int *)((longlong)local_68 + lVar5 * 4) = iVar4;
      iVar4 = iVar4 + 1;
      uVar3 = local_60;
    } while (iVar4 < *(int *)(param_1 + 0x198));
  }
LAB_148496ad0:
  FUN_1400bd09c(param_3,uVar3,1);
  if (0 < (int)local_60) {
    lVar5 = 0;
    do {
      if ((param_5 != '\0') ||
         (dVar6 = 0.0,
         *(int *)(*(longlong *)(param_1 + 0x1b0) +
                 (longlong)*(int *)((longlong)local_68 + lVar5 * 4) * 4) == 1)) {
        dVar6 = (double)*(float *)(*(longlong *)(lVar2 + 0x10) + lVar5 * 4) *
                param_4 * param_4 * param_4;
      }
      *(double *)(*param_3 + lVar5 * 8) = dVar6;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)local_60);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148496b7c FUN_148496b7c body=251 status=ok
// SIG undefined FUN_148496b7c(void)

void FUN_148496b7c(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_5 + 8) = 0;
  if (*(int *)(param_5 + 0xc) < 0) {
    FUN_14481578e(param_5,0);
  }
  local_48 = param_5;
  local_40 = param_6;
  iVar1 = (int)param_2[1];
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x198);
    if ((0 < (longlong)iVar1) && ((int)param_3[1] == iVar1)) {
      uVar2 = 0;
      do {
        FUN_143b65b32(&local_60,uVar2 & 0xffffffff,*(undefined8 *)(*param_3 + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while ((longlong)iVar1 != uVar2);
    }
  }
  else if ((0 < iVar1) && ((int)param_3[1] == iVar1)) {
    lVar3 = 0;
    do {
      FUN_143b65b32(&local_60,*(undefined4 *)(*param_2 + lVar3 * 4),
                    *(undefined8 *)(*param_3 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148496c78 FUN_148496c78 body=106 status=ok
// SIG undefined FUN_148496c78(void)

void FUN_148496c78(void)

{
  undefined8 in_XMM3_Qa;
  undefined8 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = &local_20;
  local_18 = &LAB_143b6aede;
  local_30 = in_stack_00000030;
  local_38 = in_stack_00000028;
  local_20 = in_XMM3_Qa;
  FUN_148496b7c();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148496ce4 FUN_148496ce4 body=114 status=ok
// SIG undefined FUN_148496ce4(void)

void FUN_148496ce4(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 4;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(int *)(lVar2 + lVar4 * 4) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 4),(void *)(lVar2 + (lVar3 >> 0x20) * 4 + 4),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 2);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 148496d56 FUN_148496d56 body=5429 status=ok
// SIG undefined FUN_148496d56(void)

void FUN_148496d56(longlong param_1,undefined8 param_2,double param_3,undefined8 *param_4,
                  int param_5,char param_6,char param_7)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 *puVar25;
  undefined1 uVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  float *pfVar34;
  longlong *plVar35;
  bool bVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  double local_328;
  double dStack_320;
  ulonglong local_318;
  longlong local_310;
  double local_308;
  double dStack_300;
  int local_2f4;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  longlong *plStack_298;
  longlong *local_290;
  undefined8 uStack_288;
  longlong *local_280;
  undefined8 uStack_278;
  longlong *local_270;
  double local_268;
  void *local_258;
  int local_250;
  undefined4 local_24c;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  undefined1 local_1fc [4];
  undefined4 *local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8 [2];
  undefined8 local_1c8;
  int local_1c0;
  undefined8 local_1bc;
  int local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  iVar20 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  if (iVar20 != 0) {
    local_208 = param_1;
    FUN_146eca9e2(&local_208,0);
    uVar19 = DAT_14c996af0;
    FUN_1446ddc76(&local_210,"Proximity",1);
    lVar23 = FUN_146eab2fc(param_1,local_210,uVar19);
    uVar19 = DAT_14c9974a8;
    FUN_1446ddc76(&local_218,"Level",1);
    lVar24 = FUN_146eb0af2(param_1,local_218,uVar19);
    if (lVar24 != 0) {
      local_228 = 0;
      uStack_220 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_2f0 = param_3;
      local_2c0 = lVar23;
      FUN_146eb7819(param_1 + 0xb0,param_1 + 0x110);
      FUN_140ee07f2(&local_228,*(undefined4 *)(param_1 + 0x3b8),1);
      if (0 < (int)uStack_220) {
        lVar23 = 0;
        do {
          lVar27 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + lVar23 * 4);
          if (lVar27 < 1) {
            uVar26 = 0;
            dVar42 = 0.0;
            dVar40 = 0.0;
            dVar41 = 0.0;
            dVar8 = 0.0;
            dVar7 = 0.0;
            dVar6 = 0.0;
          }
          else {
            lVar30 = (longlong)*(int *)(*(longlong *)(param_1 + 0x3b0) + lVar23 * 4) * 0x60;
            dVar15 = *(double *)(local_238 + lVar30);
            dVar16 = ((double *)(local_238 + lVar30))[1];
            pdVar2 = (double *)(local_238 + 0x10 + lVar30);
            dVar17 = *pdVar2;
            dVar18 = pdVar2[1];
            pdVar2 = (double *)(local_238 + 0x20 + lVar30);
            local_328 = *pdVar2;
            dStack_320 = pdVar2[1];
            pdVar2 = (double *)(local_238 + 0x40 + lVar30);
            local_2e8 = *pdVar2;
            dStack_2e0 = pdVar2[1];
            pdVar2 = (double *)(local_238 + 0x50 + lVar30);
            local_308 = *pdVar2;
            dStack_300 = pdVar2[1];
            lVar31 = (longlong)*(int *)(*(longlong *)(param_1 + 0x430) + lVar23 * 4);
            lVar27 = lVar27 + lVar31;
            pfVar34 = (float *)(*(longlong *)(param_1 + 0x230) + 8 + lVar31 * 0xc);
            puVar25 = &DAT_00000001;
            dVar39 = 0.0;
            dVar12 = 0.0;
            dVar38 = 0.0;
            dVar13 = 0.0;
            dVar37 = 0.0;
            dVar14 = 0.0;
            do {
              dVar40 = (double)pfVar34[-2] * local_2e8;
              dVar41 = (double)pfVar34[-1] * dStack_2e0;
              dVar42 = (double)*pfVar34 * local_308;
              dVar6 = dVar41 * dVar15 - dVar16 * dVar40;
              dVar7 = dVar42 * dVar16 - dVar17 * dVar41;
              dVar8 = dVar40 * dVar17 - dVar15 * dVar42;
              dVar7 = dVar7 + dVar7;
              dVar8 = dVar8 + dVar8;
              dVar6 = dVar6 + dVar6;
              dVar40 = (dVar6 * dVar16 - dVar8 * dVar17) + dVar18 * dVar7 + dVar40 + local_328;
              dVar41 = (dVar17 * dVar7 - dVar15 * dVar6) + dVar18 * dVar8 + dVar41 + dStack_320;
              dVar11 = dVar6 * dVar18 + dVar42 + (dVar8 * dVar15 - dVar7 * dVar16) +
                       *(double *)(local_238 + lVar30 + 0x30);
              dVar6 = dVar11;
              dVar7 = dVar41;
              dVar8 = dVar40;
              dVar42 = dVar11;
              if ((char)puVar25 == '\0') {
                if (dVar40 <= dVar37) {
                  dVar37 = dVar40;
                }
                if (dVar39 <= dVar40) {
                  dVar39 = dVar40;
                }
                if (dVar41 <= dVar14) {
                  dVar14 = dVar41;
                }
                if (dVar11 <= dVar38) {
                  dVar38 = dVar11;
                }
                if (dVar12 <= dVar41) {
                  dVar12 = dVar41;
                }
                dVar41 = dVar12;
                dVar40 = dVar39;
                dVar6 = dVar38;
                dVar7 = dVar14;
                dVar8 = dVar37;
                dVar42 = dVar13;
                if (dVar13 <= dVar11) {
                  dVar42 = dVar11;
                }
              }
              lVar31 = lVar31 + 1;
              pfVar34 = pfVar34 + 3;
              puVar25 = (undefined1 *)0x0;
              dVar39 = dVar40;
              dVar12 = dVar41;
              dVar38 = dVar6;
              dVar13 = dVar42;
              dVar37 = dVar8;
              dVar14 = dVar7;
            } while (lVar31 < lVar27);
            uVar26 = 1;
          }
          lVar27 = lVar23 * 0x38;
          auVar10._8_4_ = SUB84(dVar7,0);
          auVar10._0_8_ = dVar8;
          auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          *(undefined1 (*) [16])(local_228 + lVar27) = auVar10;
          *(double *)(local_228 + 0x10 + lVar27) = dVar6;
          auVar9._8_4_ = SUB84(dVar41,0);
          auVar9._0_8_ = dVar40;
          auVar9._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          *(undefined1 (*) [16])(local_228 + 0x18 + lVar27) = auVar9;
          *(double *)(local_228 + 0x28 + lVar27) = dVar42;
          *(undefined1 *)(local_228 + 0x30 + lVar27) = uVar26;
          lVar23 = lVar23 + 1;
        } while (lVar23 < (int)uStack_220);
      }
      local_128 = 0;
      local_120 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = (undefined1 *)0x0;
      local_100 = 0;
      local_178 = 0;
      local_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_16c = 0xffffffff00000080;
      local_164 = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1bc = 0xffffffff00000080;
      local_1b4 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_258 = (void *)0x0;
      local_250 = *(int *)(param_4 + 1);
      lVar23 = (longlong)local_250;
      _Src = (void *)*param_4;
      if (lVar23 == 0) {
        local_24c = 0;
      }
      else {
        FUN_144a06ca8(&local_258,local_250,0);
        memcpy(local_258,_Src,lVar23 << 2);
        uVar32 = 0;
        if (0 < local_250) {
          iVar20 = local_250;
          local_310 = lVar24;
          local_2d0 = param_2;
          do {
            lVar23 = (longlong)(int)uVar32;
            uVar29 = *(uint *)((longlong)local_258 + lVar23 * 4);
            local_328 = (double)(ulonglong)uVar29;
            dVar40 = (double)(longlong)(int)uVar29;
            if (*(int *)(*(longlong *)(param_1 + 0x120) + (longlong)dVar40 * 4) != -1) {
              if ((int)uStack_190 != local_164) {
                puVar25 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar25 = local_160;
                }
                for (iVar28 = *(int *)(puVar25 + (ulonglong)(local_150 - 1U & uVar29) * 4);
                    iVar28 != -1; iVar28 = *(int *)(local_198 + (longlong)iVar28 * 0xc + 4)) {
                  if (*(uint *)(local_198 + (longlong)iVar28 * 0xc) == uVar29) goto LAB_148498032;
                }
              }
              local_2f4 = *(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)dVar40 * 4);
              local_318 = uVar32;
              local_308 = dVar40;
              local_2c8 = lVar23;
              if ((int)uStack_140 != local_114) {
                puVar25 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar25 = local_110;
                }
                for (iVar28 = *(int *)(puVar25 + (ulonglong)(local_100 - 1U & uVar29) * 4);
                    iVar28 != -1; iVar28 = *(int *)(local_148 + (longlong)iVar28 * 0xc + 4)) {
                  if (*(uint *)(local_148 + (longlong)iVar28 * 0xc) == uVar29) {
                    dVar40 = (double)FUN_143b682f8(param_1,param_2,local_328);
                    uVar32 = local_318;
                    if (local_2f0 < dVar40) goto LAB_148498032;
                    break;
                  }
                }
              }
              dVar40 = local_308;
              FUN_1402226aa(&local_1e8);
              iVar20 = *(int *)(*(longlong *)(lVar24 + 0x10) + (longlong)dVar40 * 4);
              local_1f8 = (undefined4 *)0x0;
              uStack_1f0 = 1;
              FUN_1446f48e2(&local_1f8,0);
              *local_1f8 = SUB84(local_328,0);
              if ((int)uStack_1f0 != 0) {
                local_2e8 = (double)CONCAT44(local_2e8._4_4_,
                                             *(undefined4 *)
                                              (*(longlong *)(param_1 + 0x120) +
                                              (longlong)local_308 * 4));
                do {
                  lVar24 = (longlong)(int)local_1f8[(longlong)(int)uStack_1f0 + -1];
                  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)uStack_1f0 + -1);
                  FUN_14479f406(&local_1f8);
                  iVar28 = *(int *)(*(longlong *)(param_1 + 0x1b0) + lVar24 * 4);
                  if (iVar28 == 2) {
                    lVar23 = *(longlong *)(param_1 + 0x140);
                    lVar24 = lVar24 * 0x50;
                    iVar28 = (*(int *)(lVar23 + 8 + lVar24) - *(int *)(lVar23 + 0x34 + lVar24)) +
                             (int)uStack_1f0;
                    if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(iVar28);
                    }
                    if ((int)uStack_1f0._4_4_ < iVar28) {
                      FUN_14481578e(&local_1f8);
                      lVar23 = *(longlong *)(param_1 + 0x140);
                    }
                    plVar33 = (longlong *)(lVar23 + lVar24 + 0x10);
                    local_2b8 = (longlong *)&DAT_100000000;
                    uStack_2a8 = (longlong *)&DAT_ffffffff;
                    uStack_2a0 = (longlong *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
                    uStack_2b0 = plVar33;
                    if (*(int *)(lVar23 + lVar24 + 0x28) != 0) {
                      FUN_1449c0562(&local_2b8);
                    }
                    plVar35 = (longlong *)(lVar23 + lVar24);
                    uStack_278 = uStack_2a8;
                    local_270 = uStack_2a0;
                    uStack_288 = local_2b8;
                    local_280 = uStack_2b0;
                    iVar28 = (int)plVar35[5];
                    local_2b8 = (longlong *)CONCAT44(1 << ((byte)iVar28 & 0x1f),iVar28 >> 5);
                    uStack_2a8 = (longlong *)CONCAT44(iVar28,-1 << ((byte)iVar28 & 0x1f));
                    uStack_2a0 = (longlong *)
                                 (CONCAT44(uStack_2a0._4_4_,iVar28) & 0xffffffffffffffe0);
                    uStack_2b0 = plVar33;
                    local_290 = plVar35;
                    if ((int)plVar35[5] != iVar28) {
                      FUN_1449c0562(&local_2b8);
                      iVar28 = uStack_2a8._4_4_;
                    }
                    plVar33 = uStack_2b0;
                    while (((uVar32 = uStack_1f0, uStack_278._4_4_ != iVar28 ||
                            (local_280 != plVar33)) || (local_290 != plVar35))) {
                      uVar22 = *(undefined4 *)(*local_290 + (longlong)uStack_278._4_4_ * 0xc);
                      lVar24 = (longlong)(int)uStack_1f0;
                      uVar29 = (int)uStack_1f0 + 1;
                      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar29);
                      if (uStack_1f0._4_4_ < uVar29) {
                        FUN_1446f48e2(&local_1f8,uVar32 & 0xffffffff);
                      }
                      local_1f8[lVar24] = uVar22;
                      uStack_278 = (longlong *)
                                   CONCAT44(uStack_278._4_4_,(uint)uStack_278 & ~uStack_288._4_4_);
                      FUN_1449c0562(&uStack_288);
                    }
                  }
                  else if ((iVar28 == 1) &&
                          (lVar24 = (longlong)*(int *)(*(longlong *)(param_1 + 400) + lVar24 * 4),
                          lVar24 != -1)) {
                    lVar27 = *(longlong *)(local_2c0 + 0x10);
                    lVar24 = lVar24 * 0x50;
                    lVar23 = lVar27 + lVar24;
                    plVar33 = (longlong *)(lVar23 + 0x10);
                    local_2b8 = (longlong *)&DAT_100000000;
                    uStack_2a8 = (longlong *)&DAT_ffffffff;
                    uStack_2a0 = (longlong *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
                    uStack_2b0 = plVar33;
                    if (*(int *)(lVar23 + 0x28) != 0) {
                      FUN_1449c0562(&local_2b8);
                    }
                    plVar35 = (longlong *)(lVar27 + lVar24);
                    uStack_278 = uStack_2a8;
                    local_270 = uStack_2a0;
                    uStack_288 = local_2b8;
                    local_280 = uStack_2b0;
                    iVar28 = (int)plVar35[5];
                    local_2b8 = (longlong *)CONCAT44(1 << ((byte)iVar28 & 0x1f),iVar28 >> 5);
                    uStack_2a8 = (longlong *)CONCAT44(iVar28,-1 << ((byte)iVar28 & 0x1f));
                    uStack_2a0 = (longlong *)
                                 (CONCAT44(uStack_2a0._4_4_,iVar28) & 0xffffffffffffffe0);
                    uStack_2b0 = plVar33;
                    local_290 = plVar35;
                    if ((int)plVar35[5] != iVar28) {
                      FUN_1449c0562(&local_2b8);
                      iVar28 = uStack_2a8._4_4_;
                    }
                    plVar33 = uStack_2b0;
                    lVar24 = local_310;
                    while (((uStack_278._4_4_ != iVar28 || (local_280 != plVar33)) ||
                           (local_290 != plVar35))) {
                      iVar21 = *(int *)(*(longlong *)(param_1 + 0x3b0) +
                                       (longlong)
                                       *(int *)(*local_290 + (longlong)uStack_278._4_4_ * 0xc) * 4);
                      local_2b8._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
                      local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,iVar21);
                      if (iVar21 != -1) {
                        do {
                          lVar23 = (longlong)iVar21;
                          iVar3 = *(int *)(*(longlong *)(lVar24 + 0x10) + lVar23 * 4);
                          if (iVar3 <= iVar20) {
                            iVar4 = *(int *)(*(longlong *)(param_1 + 0x1b0) + lVar23 * 4);
                            bVar36 = true;
                            if (param_7 != '\0') {
                              bVar36 = *(int *)(*(longlong *)(param_1 + 0x120) + lVar23 * 4) ==
                                       local_2e8._0_4_;
                            }
                            if (((iVar21 != local_328._0_4_) && ((bool)(iVar3 == iVar20 & bVar36)))
                               && (iVar4 == 1 ||
                                   *(int *)(*(longlong *)(param_1 + 0x140) + 8 + lVar23 * 0x50) !=
                                   *(int *)(*(longlong *)(param_1 + 0x140) + 0x34 + lVar23 * 0x50)
                                   && iVar4 == 2)) {
                              FUN_1447cbafe(&local_1e8,local_1fc,&local_2b8,0);
                            }
                            break;
                          }
                          iVar21 = *(int *)(*(longlong *)(param_1 + 0x120) + lVar23 * 4);
                          local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,iVar21);
                        } while (iVar21 != -1);
                      }
                      uStack_278 = (longlong *)
                                   CONCAT44(uStack_278._4_4_,(uint)uStack_278 & ~uStack_288._4_4_);
                      FUN_1449c0562(&uStack_288);
                    }
                  }
                } while ((int)uStack_1f0 != 0);
              }
              if (local_1f8 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              param_2 = local_2d0;
              lVar24 = local_310;
              local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,0xffffffff);
              if ((int)uStack_1e0 == local_1b4 && param_6 == '\0') {
                FUN_143b6850c(&local_290,param_1,&local_228,local_328);
                lVar24 = local_310;
                uVar32 = local_318;
                dVar40 = local_308;
                plVar33 = uStack_2a0;
                if (0 < *(int *)(param_1 + 200)) {
                  dVar41 = (double)local_280 + local_268;
                  dVar6 = (double)uStack_288 + (double)local_270;
                  dVar7 = (double)local_290 + (double)uStack_278;
                  dVar42 = 0.0;
                  dVar8 = 1.79769313486232e+308;
                  do {
                    if (((local_328 != dVar42) &&
                        (*(int *)(*(longlong *)(lVar24 + 0x10) + (longlong)dVar40 * 4) ==
                         *(int *)(*(longlong *)(lVar24 + 0x10) + (longlong)dVar42 * 4))) &&
                       (*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)dVar42 * 4) == 2)) {
                      FUN_143b6850c(&local_290,param_1,&local_228,(ulonglong)dVar42 & 0xffffffff);
                      dVar38 = ((double)local_280 + local_268) * 0.5 - dVar41 * 0.5;
                      dVar40 = ((double)uStack_288 + (double)local_270) * 0.5 - dVar6 * 0.5;
                      dVar39 = ((double)local_290 + (double)uStack_278) * 0.5 - dVar7 * 0.5;
                      dVar38 = dVar38 * dVar38 + dVar40 * dVar40 + dVar39 * dVar39;
                      uVar32 = local_318;
                      dVar40 = local_308;
                      if (((int)local_1f8 == -1) || (dVar38 < dVar8)) {
                        local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,SUB84(dVar42,0));
                        dVar8 = dVar38;
                      }
                    }
                    dVar42 = (double)((longlong)dVar42 + 1);
                    plVar33 = uStack_2a0;
                  } while ((longlong)dVar42 < (longlong)*(int *)(param_1 + 200));
                }
              }
              else if (param_5 == 1) {
                FUN_143b6850c(&local_290,param_1,&local_228,local_328);
                lVar24 = local_310;
                dVar41 = (double)local_280 + local_268;
                dVar7 = (double)uStack_288 + (double)local_270;
                dVar6 = (double)local_290 + (double)uStack_278;
                local_290 = (longlong *)&DAT_100000000;
                uStack_288 = local_1d8;
                local_280 = (longlong *)&DAT_ffffffff;
                uStack_278 = (longlong *)((ulonglong)uStack_278 & 0xffffffff00000000);
                if (local_1c0 == 0) {
                  iVar20 = 0;
                }
                else {
                  FUN_1449c0562(&local_290);
                  iVar20 = local_1c0;
                }
                uStack_2a0 = local_280;
                plVar33 = uStack_2a0;
                plStack_298 = uStack_278;
                uStack_2b0 = local_290;
                uStack_2a8 = uStack_288;
                local_2b8 = &local_1e8;
                uStack_2a0._4_4_ = (int)((ulonglong)local_280 >> 0x20);
                if ((uStack_2a0._4_4_ != iVar20) ||
                   (uVar32 = local_318, dVar40 = local_308, uStack_288 != local_1d8)) {
                  iVar28 = uStack_2a0._4_4_;
                  dVar8 = 1.79769313486232e+308;
                  uStack_2a0 = plVar33;
                  do {
                    uVar22 = *(undefined4 *)(*local_2b8 + (longlong)iVar28 * 0xc);
                    FUN_143b6850c(&local_290,param_1,&local_228,uVar22);
                    dVar42 = ((double)local_280 + local_268) * 0.5 - dVar41 * 0.5;
                    dVar40 = ((double)uStack_288 + (double)local_270) * 0.5 - dVar7 * 0.5;
                    dVar38 = ((double)local_290 + (double)uStack_278) * 0.5 - dVar6 * 0.5;
                    dVar40 = dVar42 * dVar42 + dVar40 * dVar40 + dVar38 * dVar38;
                    if (((int)local_1f8 == -1) || (dVar40 < dVar8)) {
                      local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,uVar22);
                      dVar8 = dVar40;
                    }
                    uStack_2a0 = (longlong *)
                                 CONCAT44(uStack_2a0._4_4_,(uint)uStack_2a0 & ~uStack_2b0._4_4_);
                    FUN_1449c0562(&uStack_2b0);
                    uVar32 = local_318;
                    dVar40 = local_308;
                    iVar28 = uStack_2a0._4_4_;
                    plVar33 = uStack_2a0;
                  } while (local_2b8 != &local_1e8 ||
                           (uStack_2a8 != local_1d8 || uStack_2a0._4_4_ != iVar20));
                }
              }
              else {
                local_2b8 = (longlong *)&DAT_100000000;
                uStack_2b0 = local_1d8;
                uStack_2a8 = (longlong *)&DAT_ffffffff;
                uStack_2a0 = (longlong *)((ulonglong)uStack_2a0 & 0xffffffff00000000);
                if (local_1c0 == 0) {
                  iVar20 = 0;
                }
                else {
                  FUN_1449c0562(&local_2b8);
                  iVar20 = local_1c0;
                }
                uStack_278 = uStack_2a8;
                plVar35 = uStack_278;
                local_270 = uStack_2a0;
                uStack_288 = local_2b8;
                local_280 = uStack_2b0;
                local_290 = &local_1e8;
                uStack_278._4_4_ = (int)((ulonglong)uStack_2a8 >> 0x20);
                uVar22 = 0;
                uVar43 = 0xbff00000;
                iVar28 = uStack_278._4_4_;
                if ((uStack_278._4_4_ != iVar20) ||
                   (uVar32 = local_318, dVar40 = local_308, plVar33 = uStack_2a0,
                   uStack_278 = plVar35, uStack_2b0 != local_1d8)) {
                  do {
                    uStack_278 = plVar35;
                    uVar5 = *(undefined4 *)(*local_290 + (longlong)iVar28 * 0xc);
                    dVar40 = (double)FUN_143b682f8(param_1,param_2,uVar5);
                    if (((int)local_1f8 == -1) ||
                       ((double)CONCAT44(uVar43,uVar22) <= dVar40 &&
                        dVar40 != (double)CONCAT44(uVar43,uVar22))) {
                      local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,uVar5);
                      uVar22 = SUB84(dVar40,0);
                      uVar43 = (undefined4)((ulonglong)dVar40 >> 0x20);
                    }
                    uStack_278 = (longlong *)
                                 CONCAT44(uStack_278._4_4_,(uint)uStack_278 & ~uStack_288._4_4_);
                    FUN_1449c0562(&uStack_288);
                    uVar32 = local_318;
                    dVar40 = local_308;
                    iVar28 = uStack_278._4_4_;
                    plVar33 = uStack_2a0;
                    plVar35 = uStack_278;
                  } while (local_290 != &local_1e8 ||
                           (local_280 != local_1d8 || uStack_278._4_4_ != iVar20));
                }
              }
              uStack_2a0 = plVar33;
              iVar28 = (int)local_1f8;
              iVar20 = local_250;
              if ((longlong)(int)local_1f8 != -1) {
                iVar20 = SUB84(local_328,0);
                iVar21 = (int)local_1f8;
                if (*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)(int)local_1f8 * 4) != 2) {
                  if (*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)dVar40 * 4) != 2) {
                    uVar29 = uStack_240._4_4_;
                    iVar20 = 0;
                    if ((longlong)uStack_240 < 0) {
                      uStack_240 = (ulonglong)uStack_240._4_4_ << 0x20;
                      FUN_14481578e(&local_248,0);
                      uVar29 = uStack_240._4_4_;
                      iVar20 = (uint)uStack_240;
                    }
                    uVar1 = iVar20 + 1;
                    uStack_240._0_4_ = uVar1;
                    if (uVar29 < uVar1) {
                      FUN_1446f48e2(&local_248,iVar20);
                    }
                    uVar29 = (uint)uStack_240;
                    *(int *)(local_248 + (longlong)iVar20 * 4) = SUB84(local_328,0);
                    lVar23 = (longlong)(int)(uint)uStack_240;
                    uStack_240._0_4_ = (uint)uStack_240 + 1;
                    if (uStack_240._4_4_ < (uint)uStack_240) {
                      FUN_1446f48e2(&local_248,uVar29);
                    }
                    *(int *)(local_248 + lVar23 * 4) = (int)local_1f8;
                    local_338 = 0;
                    uVar22 = FUN_146ebb682(param_1,local_328,&local_248,1);
                    FUN_1447cbafe(&local_198,&local_290,&local_1f8,0);
                    dVar40 = (double)FUN_143b682f8(param_1,param_2,uVar22);
                    uVar32 = local_318;
                    iVar20 = local_250;
                    if (dVar40 < local_2f0) {
                      *(undefined4 *)((longlong)local_258 + local_2c8 * 4) = uVar22;
                      uVar32 = (ulonglong)((int)local_2c8 - 1);
                    }
                    goto LAB_148498032;
                  }
                  local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,iVar20);
                  iVar21 = iVar20;
                  iVar20 = iVar28;
                }
                bVar36 = (longlong)uStack_240 < 0;
                uStack_240 = (ulonglong)uStack_240._4_4_ << 0x20;
                if (bVar36) {
                  FUN_14481578e(&local_248,0);
                }
                uVar32 = uStack_240;
                if (local_2f4 == 2) {
                  FUN_140619b9c((longlong)iVar20 * 0x50 + *(longlong *)(param_1 + 0x140),&local_290)
                  ;
                  uVar32 = uStack_240;
                  lVar23 = (longlong)(int)(uint)uStack_288;
                  if (lVar23 != 0) {
                    iVar20 = (uint)uStack_240;
                    lVar27 = (longlong)(int)(uint)uStack_240;
                    uStack_240 = CONCAT44(uStack_240._4_4_,(uint)uStack_288 + (uint)uStack_240);
                    if (uStack_240._4_4_ - iVar20 < (uint)uStack_288) {
                      FUN_1446f48e2(&local_248,uVar32 & 0xffffffff);
                    }
                    memmove((void *)(lVar27 * 4 + local_248),local_290,lVar23 << 2);
                    uStack_288 = (longlong *)((ulonglong)uStack_288 & 0xffffffff00000000);
                  }
                  if (local_290 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  lVar23 = (longlong)(int)(uint)uStack_240;
                  uVar29 = (uint)uStack_240 + 1;
                  uStack_240 = CONCAT44(uStack_240._4_4_,uVar29);
                  if (uStack_240._4_4_ < uVar29) {
                    FUN_1446f48e2(&local_248,uVar32 & 0xffffffff);
                  }
                  *(int *)(local_248 + lVar23 * 4) = iVar20;
                }
                FUN_146ebc92a(param_1,iVar21,&local_248);
                FUN_1447cbafe(&local_148,&local_290,&local_1f8,0);
                uVar32 = local_318;
                iVar20 = local_250;
              }
            }
LAB_148498032:
            uVar29 = (int)uVar32 + 1;
            uVar32 = (ulonglong)uVar29;
          } while ((int)uVar29 < iVar20);
        }
      }
      FUN_146ebda4e(param_1);
      FUN_146ebd86e(param_1);
      if (local_258 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_248 != 0) {
        FUN_1400020a8();
      }
      local_1a0 = 0;
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_1e8);
      local_150 = 0;
      if (local_158 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_198);
      local_100 = 0;
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_148);
      if (local_238 != 0) {
        FUN_1400020a8();
      }
      if (local_228 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849828d FUN_14849828d body=3275 status=ok
// SIG undefined FUN_14849828d(void)

void FUN_14849828d(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined **ppuVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined ***pppuVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined **ppuVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_638 [32];
  undefined8 *local_618;
  undefined1 local_610;
  ulonglong local_600;
  undefined **local_5f8;
  longlong *local_5f0;
  uint local_5e4;
  longlong local_5e0;
  longlong local_5d8;
  undefined8 uStack_5d0;
  longlong local_5c0;
  undefined8 local_5b8 [13];
  longlong *local_550;
  uint local_548;
  uint local_544;
  undefined8 local_508 [13];
  longlong local_4a0;
  int local_498;
  undefined **local_458;
  undefined8 uStack_450;
  undefined **local_448;
  ulonglong uStack_440;
  int *local_438;
  int local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  uint local_400;
  undefined4 local_3fc;
  undefined8 local_3f8 [2];
  undefined8 local_3e8;
  undefined8 local_3b8 [2];
  undefined8 local_3a8;
  undefined **local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined8 uStack_338;
  ulonglong local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  ulonglong local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined2 local_270;
  undefined1 local_26e;
  undefined4 local_26c;
  undefined1 local_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 local_240;
  ulonglong local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  ulonglong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
  undefined2 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  uVar3 = DAT_14c9974a8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_638;
  if (*(int *)(param_2 + 1) == 0) goto LAB_148498445;
  local_5f8 = (undefined **)CONCAT71(local_5f8._1_7_,param_3);
  local_5f0 = param_1;
  FUN_1446ddc76(&local_420,"Level",1);
  plVar20 = local_5f0;
  cVar5 = FUN_140498cd4(local_5f0,local_420,uVar3);
  if (cVar5 == '\0') {
    FUN_146ebb8e4(plVar20,0xffffffff);
  }
  uVar3 = DAT_14c9974a8;
  FUN_1446ddc76(&local_428,"Level",1);
  plVar20 = local_5f0;
  lVar10 = FUN_140619ac2(local_5f0,local_428,uVar3);
  piVar2 = (int *)*param_2;
  local_600 = (ulonglong)*piVar2;
  iVar14 = *(int *)(*(longlong *)(lVar10 + 0x10) + local_600 * 4);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar8 = *(int *)(param_2 + 1);
  if ((longlong)iVar8 != 0) {
    lVar18 = 0;
    do {
      uVar6 = *(uint *)((longlong)piVar2 + lVar18);
      iVar1 = *(int *)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)uVar6 * 4);
      local_600 = local_600 & 0xffffffff;
      if (iVar1 < iVar14) {
        local_600 = (ulonglong)uVar6;
        iVar14 = iVar1;
      }
      FUN_143b68812(plVar20,&local_b8);
      lVar18 = lVar18 + 4;
    } while ((longlong)iVar8 * 4 != lVar18);
  }
  FUN_140619b9c(&local_b8,&local_438);
  if (1 < local_430) {
    local_448 = (undefined **)0x0;
    local_458 = (undefined **)0x0;
    uStack_450 = 0;
    uStack_440 = 1;
    FUN_1446f48e2(&local_448,0);
    *(int *)local_448 = (int)local_600;
    lVar10 = (longlong)local_430;
    if (lVar10 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_430 + -1);
    }
    if ((int)uStack_450._4_4_ < local_430 + -1) {
      FUN_14481578e(&local_458);
      lVar10 = (longlong)local_430;
      if (lVar10 != 0) goto LAB_1484984f2;
    }
    else {
LAB_1484984f2:
      piVar2 = local_438 + lVar10;
      uVar11 = local_600;
      piVar12 = local_438;
      do {
        uVar4 = uStack_450;
        iVar14 = *piVar12;
        if (iVar14 != (int)uVar11) {
          lVar10 = (longlong)(int)uStack_450;
          uVar6 = (int)uStack_450 + 1;
          uStack_450 = CONCAT44(uStack_450._4_4_,uVar6);
          if (uStack_450._4_4_ < uVar6) {
            FUN_1446f48e2(&local_458,uVar4 & 0xffffffff);
            uVar11 = local_600;
          }
          *(int *)((longlong)local_458 + lVar10 * 4) = iVar14;
        }
        piVar12 = piVar12 + 1;
      } while (piVar12 != piVar2);
    }
    FUN_144958a06(local_458,uStack_450 & 0xffffffff);
    FUN_144958a06(local_448,uStack_440 & 0xffffffff);
    puVar15 = &DAT_14c846480;
    puVar17 = local_5b8;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    }
    puVar15 = &DAT_14c846480;
    puVar17 = local_508;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
    }
    local_378 = local_458;
    uStack_370._0_4_ = (int)uStack_450;
    local_618._0_1_ = 1;
    FUN_148486eaa(&local_4a0,plVar20,&local_378);
    local_378 = local_448;
    uStack_370 = CONCAT44(uStack_370._4_4_,(undefined4)uStack_440);
    local_618 = (undefined8 *)CONCAT71(local_618._1_7_,1);
    FUN_148486eaa(&local_550,plVar20,&local_378,local_5b8);
    local_5e4 = local_548;
    if (local_548 == 0) {
      uVar7 = FUN_146eaf23a(plVar20);
      lVar10 = FUN_14001cc68(0x2d0,0x10);
      FUN_148498f5a(lVar10,uVar7);
      uVar7 = (undefined4)local_600;
      FUN_146eba115(&local_378,plVar20 + 0x16,plVar20 + 0x22,local_600 & 0xffffffff);
      uVar6 = local_548;
      pppuVar16 = &local_378;
      puVar15 = (undefined8 *)(lVar10 + 0x230);
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *puVar15 = *pppuVar16;
        pppuVar16 = pppuVar16 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined4 *)(lVar10 + 0x220) = uVar7;
      lVar18 = (longlong)(int)local_548;
      local_548 = local_548 + 1;
      if (local_544 < local_548) {
        FUN_1456bd870(&local_550,uVar6);
      }
      local_550[lVar18] = lVar10;
    }
    local_5e0 = *local_550;
    local_5c0 = local_5e0;
    if (0 < local_498) {
      lVar10 = 0;
      do {
        lVar18 = *(longlong *)(local_4a0 + lVar10 * 8);
        if ((char)local_5f8 == '\0') {
          uStack_358 = 0;
          local_350 = 0;
          local_378 = (undefined **)0x0;
          uStack_370 = 0;
          uStack_34c = 0x80;
          local_348 = 0xffffffff;
          uStack_344 = 0;
          uStack_338 = 0;
          local_330 = local_330 & 0xffffffff00000000;
          uStack_308 = 0;
          local_300 = 0;
          local_328 = 0;
          uStack_320 = 0;
          uStack_2fc = 0x80;
          local_2f8 = 0xffffffff;
          uStack_2f4 = 0;
          uStack_2e8 = 0;
          local_2e0 = local_2e0 & 0xffffffff00000000;
          local_2d8 = CONCAT62(local_2d8._2_6_,0x101);
          local_2b0 = 0;
          local_2a8 = 0;
          uStack_2d0 = 0;
          local_2c8 = 0;
          uStack_2a4 = 0x80;
          local_2a0 = 0xffffffff;
          uStack_29c = 0;
          local_290 = 0;
          local_288 = 0;
          uStack_260 = 0;
          uStack_25c = 0;
          local_258 = 0;
          local_280 = 0;
          uStack_278 = 0;
          uStack_254 = 0x80;
          local_250 = 0xffffffff;
          uStack_24c = 0;
          local_240 = 0;
          local_238 = local_238 & 0xffffffff00000000;
          local_230 = CONCAT62(local_230._2_6_,0x101);
          local_208 = 0;
          local_200 = 0;
          uStack_228 = 0;
          local_220 = 0;
          uStack_1fc = 0x80;
          uStack_1f8 = 0xffffffff;
          uStack_1f4 = 0;
          uStack_1e8 = 0;
          local_1e0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1ac = 0x80;
          local_1a8 = 0xffffffff;
          local_1a4 = 0;
          local_198 = 0;
          uStack_190 = uStack_190 & 0xffffffff00000000;
          local_188 = 0x101;
          local_160 = 0;
          local_158 = 0;
          local_180 = 0;
          uStack_178 = 0;
          uStack_154 = 0x80;
          local_150 = 0xffffffff;
          local_14c = 0;
          uStack_140 = 0;
          local_138 = 0;
          local_110 = 0;
          local_108 = 0;
          local_130 = 0;
          uStack_128 = 0;
          uStack_104 = 0x80;
          local_100 = 0xffffffff;
          local_fc = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0x101;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_3b8[0] = 0;
          local_3a8 = 0;
          local_3f8[0] = 0;
          local_3e8 = 0;
          local_618 = local_3b8;
          local_610 = 0;
          FUN_146bcbbdc(&local_5c0,lVar18,&local_378,local_3f8);
          FUN_146bfdcfe(&local_378);
        }
        else {
          local_378 = &PTR_FUN_149f64a58;
          uStack_370 = local_5e0;
          local_318 = DAT_14c846520;
          local_328 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
          uStack_320 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
          local_330 = DAT_14c8464f0;
          local_340 = DAT_14c8464e0;
          uStack_338 = DAT_14c8464e8;
          local_350 = 0;
          uStack_34c = 0;
          local_360 = 0;
          uStack_358 = 0;
          local_348 = 0;
          uStack_344 = 0x3ff00000;
          local_2c8 = DAT_14c846520;
          local_2d8 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
          uStack_2d0 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
          local_2e0 = DAT_14c8464f0;
          local_2f0 = DAT_14c8464e0;
          uStack_2e8 = DAT_14c8464e8;
          local_300 = 0;
          uStack_2fc = 0;
          local_310 = 0;
          uStack_308 = 0;
          local_2f8 = 0;
          uStack_2f4 = 0x3ff00000;
          local_2c0 = 0;
          local_2b8 = 0x3eb0c6f7a0000000;
          local_2b0 = CONCAT71(local_2b0._1_7_,1);
          local_2a8 = 0;
          uStack_2a4 = 0x3ff80000;
          local_2a0 = 0;
          uStack_29c = 0x3fe00000;
          local_298 = 1;
          local_296 = 0;
          local_290 = 0;
          local_280 = 0x3fb999999999999a;
          uStack_278 = 0x3fe0000000000000;
          local_270 = 0x101;
          local_26e = 1;
          local_26c = 0x358637bd;
          local_268 = 1;
          local_264 = 0x3c23d70a;
          uStack_260 = 0xffffffff;
          local_258 = (undefined4)local_5e0;
          uStack_254 = (undefined4)((ulonglong)local_5e0 >> 0x20);
          local_240 = 0;
          local_250 = 0;
          uStack_24c = 0;
          uStack_248 = 0;
          local_238 = 0x3ff0000000000000;
          local_220 = DAT_14c8464f0;
          local_230 = DAT_14c8464e0;
          uStack_228 = DAT_14c8464e8;
          local_208 = DAT_14c846520;
          local_218 = (undefined4)DAT_14c846510;
          uStack_214 = DAT_14c846510._4_4_;
          uStack_210 = (undefined4)DAT_14c846518;
          uStack_20c = DAT_14c846518._4_4_;
          uStack_1d0 = 0;
          local_1c8 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_200 = 0;
          uStack_1fc = 0;
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          local_1c4 = 0xffffffff00000080;
          local_1bc = 0;
          local_1b0 = 0;
          uStack_1ac = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          uStack_178 = 0;
          local_170 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_16c = 0xffffffff00000080;
          local_164 = 0;
          local_158 = 0;
          uStack_154 = 0;
          local_150 = 0;
          uStack_128 = 0;
          local_120 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_11c = 0xffffffff00000080;
          local_114 = 0;
          local_108 = 0;
          uStack_104 = 0;
          local_100 = 0;
          local_f8 = 0x101;
          local_297 = 0;
          local_288 = CONCAT31(local_288._1_3_,1);
          local_368 = lVar18;
          FUN_146c6fae2(&local_378);
          FUN_146ec7826(&local_378);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < local_498);
    }
    if (0 < *(int *)(local_5e0 + 0x170)) {
      iVar14 = (int)local_600;
      if ((local_5e4 == 0) && (*(int *)(plVar20[0x32] + (longlong)iVar14 * 4) == -1)) {
        iVar8 = FUN_1409bcbd8(plVar20,1,DAT_14c996af0);
        *(int *)(plVar20[0x32] + (longlong)iVar14 * 4) = iVar8;
        lVar10 = (longlong)iVar8;
        *(int *)(plVar20[0x76] + lVar10 * 4) = iVar14;
        *(undefined4 *)(plVar20[0x92] + lVar10 * 4) = 0;
        *(int *)(plVar20[0x8e] + lVar10 * 4) = (int)plVar20[0x5f];
        *(undefined4 *)(plVar20[0x8a] + lVar10 * 4) = 0;
        *(int *)(plVar20[0x86] + lVar10 * 4) = (int)plVar20[0x47];
      }
      *(undefined4 *)(plVar20[0x36] + (longlong)iVar14 * 4) = 1;
      FUN_148487bbe(&local_550,plVar20);
    }
    local_5d8 = 0;
    uStack_5d0 = 0;
    if ((longlong)(int)uStack_450 != 0) {
      local_5f8 = (undefined **)((longlong)local_458 + (longlong)(int)uStack_450 * 4);
      ppuVar19 = local_458;
      do {
        iVar14 = *(int *)ppuVar19;
        lVar18 = plVar20[0x28];
        lVar10 = lVar18 + (longlong)iVar14 * 0x50;
        lVar21 = lVar10 + 0x10;
        local_418 = 0x100000000;
        local_408 = 0xffffffff;
        local_400 = 0;
        local_410 = lVar21;
        if (*(int *)(lVar10 + 0x28) != 0) {
          FUN_1449c0562(&local_418);
        }
        ppuVar13 = (undefined **)(lVar18 + (longlong)iVar14 * 0x50);
        local_360 = local_408;
        uStack_358 = CONCAT44(local_3fc,local_400);
        uStack_370 = local_418;
        local_368 = local_410;
        uVar6 = *(uint *)(ppuVar13 + 5);
        local_418 = CONCAT44(1 << ((byte)uVar6 & 0x1f),(int)uVar6 >> 5);
        local_408 = CONCAT44(uVar6,-1 << ((byte)uVar6 & 0x1f));
        local_400 = uVar6 & 0xffffffe0;
        local_410 = lVar21;
        local_378 = ppuVar13;
        if (*(uint *)(ppuVar13 + 5) != uVar6) {
          FUN_1449c0562(&local_418);
          uVar6 = local_408._4_4_;
        }
        lVar10 = local_410;
        if ((local_378 != ppuVar13 || local_368 != local_410) || local_360._4_4_ != uVar6) {
          do {
            uVar11 = uStack_5d0;
            uVar7 = *(undefined4 *)(*local_378 + (longlong)(int)local_360._4_4_ * 0xc);
            lVar18 = (longlong)(int)uStack_5d0;
            uVar9 = (int)uStack_5d0 + 1;
            uStack_5d0 = CONCAT44(uStack_5d0._4_4_,uVar9);
            if (uStack_5d0._4_4_ < uVar9) {
              FUN_1446f48e2(&local_5d8,uVar11 & 0xffffffff);
            }
            *(undefined4 *)(local_5d8 + lVar18 * 4) = uVar7;
            local_360 = CONCAT44(local_360._4_4_,(uint)local_360 & ~uStack_370._4_4_);
            FUN_1449c0562(&uStack_370);
          } while (local_378 != ppuVar13 || (local_368 != lVar10 || local_360._4_4_ != uVar6));
        }
        plVar20 = local_5f0;
        ppuVar19 = (undefined **)((longlong)ppuVar19 + 4);
      } while (ppuVar19 != local_5f8);
      if ((int)uStack_5d0 != 0) {
        FUN_146eb9b25(local_5f0,local_600,&local_5d8);
      }
    }
    (**(code **)(*plVar20 + 0x28))(plVar20,&DAT_14c9974a8,&local_458,0x100);
    if (local_5d8 != 0) {
      FUN_1400020a8();
    }
    FUN_148499b58(&local_550);
    FUN_148499b58(&local_4a0);
    if (local_458 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_448 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_438 != (int *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
LAB_148498445:
  if ((local_60 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148498f5a FUN_148498f5a body=190 status=ok
// SIG undefined FUN_148498f5a(void)

longlong FUN_148498f5a(longlong param_1,undefined4 param_2)

{
  FUN_1411b354a(param_1,0,0,0,0);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x280) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2a8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x2b0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2b8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x2c0) = 0xffefffffffffffff;
  FUN_148487e31(param_1,param_2);
  return param_1;
}



// FUNCTION 148499018 FUN_148499018 body=254 status=ok
// SIG undefined FUN_148499018(void)

void FUN_148499018(uint param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_e8 [12];
  longlong local_88;
  int local_80;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar2 = &DAT_14c846480;
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f8 = CONCAT31(local_f8._1_3_,1);
  FUN_148486eaa(&local_88,param_4,param_5);
  if (0 < local_80) {
    lVar1 = 0;
    do {
      local_f8 = param_3;
      FUN_148489004(*(undefined8 *)(local_88 + lVar1 * 8),
                    CONCAT71((int7)((ulonglong)&local_88 >> 8),param_6) & 0xffffffff,param_1 ^ 1,
                    param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < local_80);
  }
  FUN_148487bbe(&local_88,param_4);
  thunk_FUN_146eaf28c(param_4);
  FUN_148499b58(&local_88);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148499117 FUN_148499117 body=214 status=ok
// SIG undefined FUN_148499117(void)

undefined8 FUN_148499117(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_d8 [12];
  longlong local_78;
  int local_70;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_e8 = 0;
  FUN_148486eaa(&local_78);
  if (0 < local_70) {
    lVar1 = 0;
    do {
      FUN_148489877(*(undefined8 *)(local_78 + lVar1 * 8),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < local_70);
  }
  FUN_148487bbe(&local_78,param_2);
  thunk_FUN_146eaf28c(param_2);
  FUN_148499b58(&local_78);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484991ee FUN_1484991ee body=344 status=ok
// SIG undefined FUN_1484991ee(void)

void FUN_1484991ee(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 *param_6,byte param_7,undefined8 *param_8,
                  longlong *param_9,undefined1 param_10,undefined1 param_11)

{
  longlong *plVar1;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined1 local_d0;
  byte local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = *param_9;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar1 = param_9 + 4;
    if ((longlong *)param_9[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_9[2];
    }
    (**(code **)*plVar1)(plVar1,local_78);
  }
  local_98 = *param_8;
  uStack_90 = param_8[1];
  local_e0 = &local_98;
  local_a8 = *param_6;
  uStack_a4 = param_6[1];
  uStack_a0 = param_6[2];
  uStack_9c = param_6[3];
  local_e8 = &local_a8;
  local_b8 = param_11;
  local_c0 = param_10;
  local_d0 = param_5;
  local_d8 = local_88;
  local_c8 = param_7 ^ 1;
  FUN_148499347(param_1,param_2,param_3,param_4);
  if (*param_9 != 0) {
    plVar1 = param_9 + 4;
    if ((longlong *)param_9[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_9[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148499347 FUN_148499347 body=2060 status=ok
// SIG undefined FUN_148499347(void)

void FUN_148499347(double param_1,undefined8 *param_2,char param_3,longlong param_4,double *param_5,
                  undefined8 param_6,longlong *param_7,char param_8,byte param_9,byte param_10,
                  char param_11)

{
  double dVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  undefined1 auStack_4f8 [32];
  undefined ***local_4d8;
  undefined1 local_4d0;
  char local_4b9;
  double local_4b8;
  uint local_4ac;
  undefined8 *local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong *local_488;
  longlong local_480;
  double local_478;
  double dStack_470;
  double local_468;
  longlong local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  byte local_418;
  byte local_417;
  undefined8 local_408 [12];
  undefined8 local_3a8 [2];
  undefined8 local_398;
  undefined **local_368 [2];
  undefined8 local_358;
  undefined **local_328;
  double dStack_320;
  double local_318;
  undefined1 local_310;
  undefined7 uStack_30f;
  double local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  ulonglong local_2f4;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  ulonglong local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined2 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  ulonglong uVar15;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  puVar10 = &DAT_14c846480;
  puVar11 = local_408;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar10 = &DAT_14c846480;
  puVar11 = param_2;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0x7fefffffffffffff;
  local_440 = 0x7fefffffffffffff;
  local_438 = 0x7fefffffffffffff;
  local_430 = 0xffefffffffffffff;
  local_428 = 0xffefffffffffffff;
  local_420 = 0xffefffffffffffff;
  local_418 = param_10 ^ 1;
  local_417 = *(int *)(param_5 + 1) != 0 & param_9;
  if (*(int *)(param_5 + 1) == 0) {
    puVar10 = local_408;
    pppuVar12 = &local_328;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pppuVar12 = (undefined **)*puVar10;
      puVar10 = puVar10 + 1;
      pppuVar12 = pppuVar12 + 1;
    }
    local_478 = *(double *)(param_4 + 0xc0);
    dStack_470 = (double)CONCAT44(dStack_470._4_4_,*(undefined4 *)(param_4 + 200));
  }
  else {
    puVar10 = local_408;
    pppuVar12 = &local_328;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pppuVar12 = (undefined **)*puVar10;
      puVar10 = puVar10 + 1;
      pppuVar12 = pppuVar12 + 1;
    }
    local_478 = *param_5;
    dStack_470 = param_5[1];
  }
  local_4d8 = &local_328;
  local_4d0 = 0;
  local_4b9 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_2;
  FUN_14848cc62(&local_458,param_4,&local_478,param_6);
  uVar4 = FUN_146eaf23a(param_4);
  dVar1 = local_4b8;
  FUN_148487e31(local_4b8,uVar4);
  FUN_146c1a132(*(undefined8 *)((longlong)dVar1 + 0x208));
  if (param_11 != '\0') {
    FUN_14582eef4(local_4b8,0);
  }
  local_498 = (longlong)(int)uStack_450;
  if (0 < local_498) {
    local_488 = param_7 + 4;
    lVar7 = 0;
    local_4a0 = param_4;
    do {
      lVar5 = local_4a0;
      dVar1 = *(double *)(local_458 + lVar7 * 8);
      if (param_11 != '\0') {
        FUN_14582eef4(dVar1,0);
      }
      if (*(int *)(*(longlong *)((longlong)dVar1 + 0x208) + 0x38) < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined8 **)(*(longlong *)((longlong)dVar1 + 0x208) + 0x30);
      }
      local_490 = lVar7;
      FUN_146c39810(uVar6,1);
      uVar4 = FUN_146eaf23a(lVar5);
      FUN_148487266(dVar1,uVar4);
      FUN_148486f73();
      if (*param_7 != 0) {
        uVar13 = *(int *)((longlong)dVar1 + 0x140) * 0x200 + *(int *)((longlong)dVar1 + 0x144);
        uVar15 = 0;
        if ((uVar13 != 0) &&
           (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)dVar1 + 0x148) - 1U))) {
          uVar16 = 1;
          uVar3 = 1;
          if (1 < (int)uVar13) {
            uVar16 = (ulonglong)uVar13;
          }
          do {
            uVar9 = uVar3;
            uVar14 = (uint)uVar9;
            uVar15 = uVar16;
            if ((uint)uVar16 == uVar14) break;
            uVar3 = (ulonglong)(uVar14 + 1);
            uVar15 = uVar9;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)dVar1 + 0x148))
                                                [uVar9 >> 9] + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U
                                    ));
        }
        if ((uint)uVar15 != uVar13) {
          local_480 = *(longlong *)(*(longlong *)((longlong)dVar1 + 0x208) + 0x48);
          local_4ac = uVar13;
          do {
            lVar7 = local_480;
            uVar3 = uVar15 >> 9;
            uVar13 = (uint)uVar15 & 0x1ff;
            uVar16 = (ulonglong)(uVar13 << 2);
            uVar4 = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(local_480 + 0x20) + uVar3 * 8) + uVar16);
            lVar5 = FUN_146c3d58a(*(undefined8 *)((longlong)dVar1 + 0x208),DAT_14cb4be10);
            local_478 = (double)CONCAT71(local_478._1_7_,
                                         *(undefined1 *)
                                          (*(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar3 * 8) +
                                          (ulonglong)uVar13));
            local_328 = (undefined **)CONCAT44(local_328._4_4_,uVar4);
            pcVar2 = (code *)*param_7;
            plVar8 = (longlong *)param_7[2];
            if ((longlong *)param_7[2] == (longlong *)0x0) {
              plVar8 = local_488;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            uVar4 = (*pcVar2)(uVar6,&local_328,&local_478);
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + uVar3 * 8) + uVar16) = uVar4
            ;
            uVar13 = (uint)uVar15 + 1;
            if ((int)uVar13 < (int)local_4ac) {
              uVar13 = local_4ac;
            }
            do {
              if (uVar13 - 1 == (int)uVar15) {
                uVar15 = (ulonglong)uVar13;
                break;
              }
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)((longlong)dVar1 + 0x148) +
                                                   (ulonglong)(uVar14 >> 9) * 8) +
                                                 (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
          } while ((uint)uVar15 != local_4ac);
        }
      }
      if ((param_8 != '\0') && (0 < *(int *)((longlong)dVar1 + 0x170))) {
        local_328 = &PTR_FUN_149f36300;
        local_318 = 9.999999974752427e-07;
        local_310 = 0;
        local_2e0 = 0;
        uStack_2f8 = uStack_2f8 & 0xffffff00;
        local_308 = 0.0;
        uStack_300 = 0;
        uStack_2fc = 0;
        local_2f4 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        dStack_320 = dVar1;
        FUN_146c3d996();
      }
      lVar7 = local_490;
      if (local_490 == 0) {
        local_4d0 = 1;
        local_4d8 = (undefined ***)CONCAT71(local_4d8._1_7_,1);
        FUN_146c005f0(local_4b8,dVar1,1,1);
      }
      else {
        local_478 = local_4b8;
        local_308 = 0.0;
        uStack_300 = 0;
        local_328 = (undefined **)0x0;
        dStack_320 = 0.0;
        uStack_2fc = 0x80;
        uStack_2f8 = 0xffffffff;
        local_2f4 = local_2f4 & 0xffffffff00000000;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2b8 = 0;
        local_2b0 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2ac = 0xffffffff00000080;
        local_2a4 = 0;
        local_298 = 0;
        local_290 = 0;
        local_288 = 0x101;
        local_260 = 0;
        local_258 = 0;
        local_280 = 0;
        uStack_278 = 0;
        local_254 = 0xffffffff00000080;
        local_24c = 0;
        local_240 = 0;
        local_238 = 0;
        local_210 = 0;
        local_208 = 0;
        local_230 = 0;
        uStack_228 = 0;
        local_204 = 0xffffffff00000080;
        local_1fc = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0x101;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1ac = 0xffffffff00000080;
        local_1a4 = 0;
        local_198 = 0;
        local_190 = 0;
        local_168 = 0;
        local_160 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_15c = 0xffffffff00000080;
        local_154 = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0x101;
        local_110 = 0;
        local_108 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_104 = 0xffffffff00000080;
        local_fc = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_b4 = 0xffffffff00000080;
        local_ac = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0x101;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_368[0] = (undefined **)0x0;
        local_358 = 0;
        local_3a8[0] = 0;
        local_398 = 0;
        local_4d8 = local_368;
        local_4d0 = 0;
        FUN_146bcbbdc(&local_478,dVar1,&local_328,local_3a8);
        FUN_146bfdcfe();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != local_498);
  }
  dVar1 = local_4b8;
  if (local_4b9 != '\0') {
    FUN_145c688c4(local_4b8,&local_328,1);
    local_468 = (local_318 + (double)CONCAT44(uStack_2fc,uStack_300)) * -0.5;
    dStack_470 = (dStack_320 + local_308) * -0.5;
    local_478 = ((double)local_328 + (double)CONCAT71(uStack_30f,local_310)) * -0.5;
    FUN_146c3c4e4(dVar1,&local_478);
    *local_4a8 = 0;
    local_4a8[1] = 0;
    local_4a8[2] = 0;
    local_4a8[3] = 0x3ff0000000000000;
    local_4a8[4] = -local_478;
    local_4a8[5] = -dStack_470;
    local_4a8[6] = -local_468;
    local_4a8[7] = 0;
    local_4a8[8] = 0x3ff0000000000000;
    local_4a8[9] = 0x3ff0000000000000;
    local_4a8[10] = 0x3ff0000000000000;
    local_4a8[0xb] = 0;
  }
  FUN_14848a6c1(local_4b8);
  FUN_148499b58(&local_458);
  if (*param_7 != 0) {
    plVar8 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148499b58 FUN_148499b58 body=61 status=ok
// SIG undefined FUN_148499b58(void)

void FUN_148499b58(longlong *param_1)

{
  FUN_148499b96();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148499b96 FUN_148499b96 body=66 status=ok
// SIG undefined FUN_148499b96(void)

void FUN_148499b96(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_141082778(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 148499bd8 FUN_148499bd8 body=52 status=ok
// SIG undefined FUN_148499bd8(void)

void FUN_148499bd8(longlong *param_1)

{
  FUN_148499c0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148499c0c FUN_148499c0c body=89 status=ok
// SIG undefined FUN_148499c0c(void)

void FUN_148499c0c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148499c66 FUN_148499c66 body=61 status=ok
// SIG undefined FUN_148499c66(void)

void FUN_148499c66(longlong *param_1)

{
  FUN_148499ca4();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148499ca4 FUN_148499ca4 body=66 status=ok
// SIG undefined FUN_148499ca4(void)

void FUN_148499ca4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_141082778(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 148499ce6 FUN_148499ce6 body=286 status=ok
// SIG undefined FUN_148499ce6(void)

void FUN_148499ce6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = **(undefined4 **)(param_1 + 0x20);
    if (1 < *(longlong *)(param_1 + 8)) {
      lVar2 = 1;
      do {
        lVar5 = *(longlong *)(param_1 + 0x18);
        iVar6 = *(int *)(lVar5 + lVar2 * 4);
        iVar1 = *(int *)(lVar5 + 4 + lVar2 * 4);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4);
        if (0 < iVar4 && iVar6 < iVar3) {
          lVar5 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x30) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) * 4 + lVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 4 + lVar5 * 4);
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x28) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) * 4 + lVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 4 + lVar5 * 4);
            lVar5 = lVar5 + 1;
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4);
          } while (lVar5 < iVar4);
          lVar5 = *(longlong *)(param_1 + 0x18);
          iVar6 = *(int *)(lVar5 + lVar2 * 4);
        }
        lVar2 = lVar2 + 1;
        *(int *)(lVar5 + lVar2 * 4) = iVar4 + iVar6;
        iVar3 = iVar1;
      } while (lVar2 < *(longlong *)(param_1 + 8));
    }
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_146de0756(param_1 + 0x28,
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 8) * 4)
                  ,0);
    if (*(longlong *)(param_1 + 0x38) < *(longlong *)(param_1 + 0x40)) {
      FUN_146de07b6(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 148499e04 FUN_148499e04 body=231 status=ok
// SIG undefined FUN_148499e04(void)

undefined1 * FUN_148499e04(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_146dde6fa(param_1 + 0x30,0,0);
  param_1[0xc0] = 0;
  param_1[0x1e8] = 0;
  memset(param_1 + 200,0,200);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0x10;
  *(undefined8 *)(param_1 + 0x1f8) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0x80;
  *(undefined8 *)(param_1 + 0x208) = 0x10;
  *(undefined8 *)(param_1 + 0x210) = 8;
  *(undefined8 *)(param_1 + 0x218) = 0x14;
  return param_1;
}



// FUNCTION 148499eec FUN_148499eec body=1044 status=ok
// SIG undefined FUN_148499eec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148499eec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined1 **local_d8;
  longlong *plStack_d0;
  undefined1 *local_c8;
  undefined1 **local_c0;
  undefined1 *local_b8;
  longlong lStack_b0;
  undefined1 *local_90 [2];
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)&local_68;
  lVar1 = param_1 + 0x30;
  FUN_146de1ac6(lVar1);
  FUN_14849b904(lVar1,(longlong *)(param_1 + 0x100));
  puVar12 = auStack_e8;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_14849bd08(lVar1);
    if ((uint)((ulonglong)(*(longlong *)(param_2 + 8) + -0x3fffffffffffffff) >> 0x3e) < 3) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    puVar12 = auStack_e8;
    puVar9 = *(undefined1 **)(param_2 + 0x18);
    if (puVar9 == (undefined1 *)0x0 || *(longlong *)(param_2 + 0x20) != 0) {
      uVar3 = *(longlong *)(param_2 + 8) * 4 + 1;
      if (uVar3 < 0x20001) {
        lVar14 = -(*(longlong *)(param_2 + 8) * 4 + 0x1fU & 0xfffffffffffffff0);
        puVar12 = auStack_e8 + lVar14;
        puVar9 = auStack_e8 + lVar14;
      }
      else {
        puVar9 = (undefined1 *)FUN_14001cc68(uVar3,0x10);
        puVar12 = auStack_e8;
        if (puVar9 == (undefined1 *)0x0) {
          FUN_14001cc68(0xffffffffffffffff,0x10);
          puVar12 = auStack_e8;
          puVar9 = (undefined1 *)0x0;
        }
      }
    }
    puVar13 = (undefined1 *)0x0;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      puVar13 = puVar9;
    }
    uVar3 = *(ulonglong *)(param_2 + 8);
    uVar8 = uVar3;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      lStack_b0 = uVar3 + 1;
      local_78 = *(longlong *)(param_1 + 0x48);
      local_c0 = &local_b8;
      plStack_d0 = &local_78;
      local_d8 = local_90;
      local_c8 = &local_d9;
      local_b8 = puVar9;
      local_90[0] = puVar9;
      local_80 = lStack_b0;
      local_68 = lStack_b0;
      *(undefined8 *)(puVar12 + -0x28) = 0x14849a0bd;
      FUN_1483c6342();
      uVar8 = *(ulonglong *)(param_2 + 8);
      puVar13 = puVar9;
    }
    if (0 < (longlong)uVar8) {
      lVar14 = 0;
      do {
        iVar4 = *(int *)(puVar9 + lVar14 * 4);
        *(int *)(*(longlong *)(param_1 + 0x48) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar14 * 4) * 4) = iVar4;
        lVar11 = lVar14 * 4;
        lVar10 = lVar14 * 4;
        lVar14 = lVar14 + 1;
        *(int *)(*(longlong *)(param_1 + 0x50) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar10) * 4) =
             *(int *)(puVar9 + lVar11 + 4) - iVar4;
      } while (lVar14 < *(longlong *)(param_2 + 8));
    }
    if ((uVar3 & 0x3fffffffffff8000) != 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x14849a129;
      FUN_1400020a8(puVar13);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x120);
  local_d8 = (undefined1 **)0x0;
  plStack_d0 = (longlong *)0x0;
  *(undefined8 *)(puVar12 + -0x28) = 0x148499f78;
  FUN_14849bd68(lVar1,plVar2);
  if (*(char *)(param_1 + 0x1e8) != '\0') goto LAB_148499f89;
  local_b8 = (undefined1 *)0x0;
  lStack_b0 = 0;
  local_78 = 0;
  lStack_70 = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(puVar12 + -0x28) = 0x14849a19a;
  FUN_1483c6193(uVar5,plVar2);
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar14 = lVar1 + 1;
  if (lVar14 == 0) {
LAB_14849a1ba:
    lStack_70 = lVar14;
    *(undefined8 *)(puVar12 + -0x28) = 0x14849a1c6;
    FUN_148291d6a(plVar2,&local_78,local_90);
    lVar14 = 0;
    lVar10 = 0;
    if (*(longlong *)(param_1 + 0x108) != 0) {
LAB_14849a1dc:
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      *(longlong *)(param_1 + 0x100) = lVar10;
      *(longlong *)(param_1 + 0x108) = lVar1;
      *(undefined8 *)(puVar12 + -0x28) = 0x14849a1fa;
      FUN_1400020a8(uVar6);
    }
  }
  else {
    if (lVar1 < 0) {
      local_78 = 0;
      goto LAB_14849a1ba;
    }
    *(undefined8 *)(puVar12 + -0x28) = 0x14849a246;
    local_78 = FUN_141729f83();
    if (lVar1 == 0) goto LAB_14849a1ba;
    lVar10 = 0;
    do {
      *(undefined4 *)(local_78 + (longlong)*(int *)(local_b8 + lVar10 * 4) * 4) =
           *(undefined4 *)(local_b8 + (longlong)*(int *)(*plVar2 + lVar10 * 4) * 4);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lStack_70 = lVar14;
    *(undefined8 *)(puVar12 + -0x28) = 0x14849a2a6;
    FUN_148291d6a(plVar2,&local_78,local_90);
    *(undefined8 *)(puVar12 + -0x28) = 0x14849a2ae;
    lVar14 = FUN_141729f83(lVar1);
    lVar10 = 0;
    do {
      *(undefined4 *)(lVar14 + lVar10 * 4) = *(undefined4 *)(local_b8 + lVar10 * 4);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      *(undefined8 *)(puVar12 + -0x28) = 0x14849a2e4;
      lVar10 = FUN_141729f83();
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar11 * 4) =
             *(undefined4 *)
              (lVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar11 * 4) * 4);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      goto LAB_14849a1dc;
    }
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x14849a20a;
  FUN_1400020a8(lVar14);
  lVar1 = local_78;
  *(undefined8 *)(puVar12 + -0x28) = 0x14849a21b;
  FUN_1400020a8(lVar1);
  puVar9 = local_b8;
  *(undefined8 *)(puVar12 + -0x28) = 0x14849a22c;
  FUN_1400020a8(puVar9);
LAB_148499f89:
  ppuVar7 = local_d8;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)(puVar12 + -0x28) = 0x148499f9a;
  FUN_1400020a8(ppuVar7);
  if ((local_60 ^ (ulonglong)&local_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x28) = &UNK_14849a13b;
  FUN_144d8e3a0();
}



// FUNCTION 14849a306 FUN_14849a306 body=3679 status=ok
// SIG undefined FUN_14849a306(void)

void FUN_14849a306(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *****pppppuVar7;
  undefined1 *puVar8;
  undefined8 *****pppppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined8 *****pppppuVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  undefined8 ****ppppuVar20;
  undefined1 auStack_3f8 [32];
  undefined8 ****local_3d8;
  undefined8 ****local_3d0;
  undefined8 ****local_3c8;
  undefined8 ****local_3c0;
  undefined8 ****local_3b8;
  undefined8 ****local_3b0;
  undefined8 ***local_3a8;
  undefined8 **local_3a0;
  undefined8 ***local_398;
  undefined8 ****local_390;
  undefined8 ****local_388;
  undefined8 ****local_380;
  undefined8 ****local_378;
  undefined1 *local_370;
  longlong local_368;
  longlong local_360;
  undefined8 ****local_358;
  undefined1 *local_350;
  longlong local_348;
  undefined8 ****local_340;
  undefined1 *local_338;
  longlong local_330;
  longlong local_328;
  undefined8 ****local_320;
  undefined8 ***local_318;
  undefined1 *local_310;
  longlong local_308;
  longlong lStack_300;
  undefined8 ***local_2f8;
  longlong local_2f0;
  undefined8 ***local_2e8;
  longlong local_2e0;
  undefined8 **local_2d8;
  longlong local_2d0;
  undefined8 ***local_2c8;
  undefined1 *puStack_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  undefined8 ***local_2a8;
  longlong lStack_2a0;
  undefined8 ***local_298;
  longlong lStack_290;
  undefined8 **local_288;
  longlong lStack_280;
  undefined8 ***local_278;
  longlong local_270;
  undefined8 ***local_268;
  longlong local_260;
  undefined8 ****local_248 [2];
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  undefined **local_220;
  undefined4 local_214;
  ios_base local_1a0 [96];
  undefined8 ***local_140;
  longlong local_138;
  undefined8 ***local_120;
  longlong local_118;
  undefined8 ***local_100;
  longlong local_f8;
  undefined8 ***local_e0;
  longlong local_d8;
  undefined8 ***local_c0;
  longlong local_b8;
  longlong local_a0;
  longlong local_98;
  undefined8 ***local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  *param_1 = 1;
  puVar17 = param_1 + 0x30;
  FUN_146de1ac6(puVar17);
  plVar1 = (longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    FUN_141729ef6(plVar1,*(undefined8 *)(param_2 + 8));
    if (0 < *(longlong *)(param_2 + 8)) {
      lVar4 = 0;
      do {
        *(int *)(*plVar1 + lVar4 * 4) = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(longlong *)(param_2 + 8));
    }
    goto LAB_14849a3fb;
  }
  FUN_14849bd08();
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 == 0) {
    lVar6 = *(longlong *)(param_2 + 8);
    lVar19 = *(longlong *)(param_2 + 0x18);
LAB_14849a3a0:
    if (0 < lVar6) {
      lVar4 = 0;
      do {
        iVar2 = *(int *)(lVar19 + lVar4 * 4);
        *(int *)(*(longlong *)(param_1 + 0x48) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar4 * 4) * 4) = iVar2;
        lVar15 = lVar4 * 4;
        lVar6 = lVar4 * 4;
        lVar4 = lVar4 + 1;
        *(int *)(*(longlong *)(param_1 + 0x50) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + lVar6) * 4) =
             *(int *)(lVar19 + 4 + lVar15) - iVar2;
      } while (lVar4 < *(longlong *)(param_2 + 8));
      lVar4 = *(longlong *)(param_2 + 0x20);
    }
  }
  else {
    lVar6 = *(longlong *)(param_2 + 8);
    lVar19 = FUN_144a7d36f(-(ulonglong)(lVar6 + 1U >> 0x3e != 0) | lVar6 * 4 + 4U);
    if (-1 < lVar6) {
      lVar15 = *(longlong *)(param_1 + 0x48);
      lVar11 = -1;
      do {
        *(undefined4 *)(lVar19 + 4 + lVar11 * 4) = *(undefined4 *)(lVar15 + 4 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      goto LAB_14849a3a0;
    }
  }
  if ((lVar19 != 0) && (lVar4 != 0)) {
    thunk_FUN_1400020a8(lVar19);
  }
LAB_14849a3fb:
  puVar18 = *(undefined1 **)(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar5 = FUN_146de087c(puVar17);
  lVar19 = *(longlong *)(param_1 + 0x1f0) * lVar4;
  pppppuVar14 = (undefined8 *****)(param_1 + 0x130);
  local_3d8 = pppppuVar14;
  lVar6 = FUN_14849c172(lVar4,puVar18,uVar5,*(undefined8 *)(param_1 + 0x218));
  if (lVar6 == 0) {
    local_278 = (undefined8 ****)0x0;
    if (lVar4 != 0) {
      if (lVar4 < 1) {
        local_278 = (undefined8 ****)0x0;
      }
      else {
        local_278 = (undefined8 ***)FUN_141729f83(lVar4);
      }
    }
    local_214 = 0;
    local_270 = lVar4;
    local_220 = (undefined **)lVar4;
    FUN_146de04ef(&local_278,&local_228,local_248);
    local_288 = (undefined8 ***)0x0;
    lStack_280 = 0;
    if (0 < lVar4) {
      local_288 = (undefined8 **)FUN_141729f83(lVar4);
    }
    local_214 = 0;
    lStack_280 = lVar4;
    local_220 = (undefined **)lVar4;
    FUN_146de04ef(&local_288,&local_228,local_248);
    local_298 = (undefined8 ****)0x0;
    lStack_290 = 0;
    if (0 < lVar4) {
      local_298 = (undefined8 ***)FUN_141729f83(lVar4);
    }
    local_214 = 0;
    lStack_290 = lVar4;
    local_220 = (undefined **)lVar4;
    FUN_146de04ef(&local_298,&local_228,local_248);
    local_2a8 = (undefined8 ****)0x0;
    lStack_2a0 = 0;
    lVar6 = lStack_2a0;
    if ((lVar19 == 0) || (lVar6 = lVar19, lVar19 < 1)) {
      lStack_2a0 = lVar6;
      local_2b8 = 0;
    }
    else {
      local_2a8 = (undefined8 ***)FUN_141729f83(lVar19);
      lStack_2b0 = 0;
      lStack_2a0 = lVar19;
      local_2b8 = FUN_141729f83(lVar19);
    }
    local_2c8 = (undefined8 ****)0x0;
    puStack_2c0 = (undefined1 *)0x0;
    local_380 = pppppuVar14;
    lStack_2b0 = lVar19;
    if (0 < (longlong)puVar18) {
      local_2c8 = (undefined8 ***)FUN_141729f83(puVar18);
    }
    local_214 = 0;
    local_370 = puVar18;
    puStack_2c0 = puVar18;
    local_220 = (undefined **)puVar18;
    FUN_146de04ef(&local_2c8,&local_228,local_248);
    local_2d0 = lVar4 * 3;
    local_2d8 = (undefined8 ***)0x0;
    if (0 < lVar4) {
      local_2d8 = (undefined8 **)FUN_141729f83(local_2d0);
    }
    local_214 = 0;
    local_220 = (undefined **)local_2d0;
    FUN_146de04ef(&local_2d8,&local_228,local_248);
    local_220 = (undefined **)lStack_2a0;
    local_214 = 0xffffffff;
    FUN_146de04ef(&local_2a8,&local_228,local_248);
    local_220 = (undefined **)lStack_2b0;
    local_214 = 0xffffffff;
    FUN_146de04ef(&local_2b8,&local_228,local_248);
    local_2e8 = (undefined8 ****)0x0;
    if (0 < lVar19) {
      local_2e8 = (undefined8 ***)FUN_141729e88(lVar19);
    }
    local_214 = 0;
    local_2e0 = lVar19;
    local_220 = (undefined **)lVar19;
    FUN_146dde1b2(&local_2e8,&local_228,local_248);
    local_2f8 = (undefined8 ****)0x0;
    local_2f0 = (*(longlong *)(param_1 + 0x200) + lVar4) * *(longlong *)(param_1 + 0x1f0);
    if (local_2f0 < lVar4) {
      local_2f0 = lVar4;
    }
    if (0 < local_2f0) {
      local_2f8 = (undefined8 ***)FUN_141729e88(local_2f0);
    }
    local_214 = 0;
    local_220 = (undefined **)local_2f0;
    FUN_146dde1b2(&local_2f8,&local_228,local_248);
    lVar6 = *(longlong *)(param_1 + 0x108);
    local_308 = 0;
    lStack_300 = 0;
    if (lVar6 != 0) {
      if (lVar6 < 1) {
        local_308 = 0;
      }
      else {
        local_308 = FUN_141729f83();
      }
      lStack_300 = lVar6;
      if (0 < (int)(uint)lVar6) {
        uVar10 = 0;
        do {
          *(int *)(local_308 + (longlong)*(int *)(*plVar1 + uVar10 * 4) * 4) = (int)uVar10;
          uVar10 = uVar10 + 1;
        } while (((uint)lVar6 & 0x7fffffff) != uVar10);
      }
    }
    puVar18 = local_370;
    local_318 = (undefined8 ****)0x0;
    if (0 < (longlong)local_370) {
      local_318 = (undefined8 ***)FUN_141729f83(local_370);
    }
    local_310 = puVar18;
    if (param_1[0x1e8] == '\x01') {
      local_3d8 = &local_318;
      FUN_14849c334(puVar18,param_1 + 0x120,*(undefined8 *)(param_1 + 0x1f8),&local_2d8);
    }
    else {
      local_3d8 = &local_318;
      FUN_14849c62a(puVar18,param_1 + 0x120,*(undefined8 *)(param_1 + 0x1f8),&local_2d8);
    }
    pppppuVar14 = (undefined8 *****)(param_1 + 0x110);
    FUN_141729ef6(pppppuVar14,lVar4);
    local_220 = *(undefined ***)(param_1 + 0x118);
    local_214 = 0xffffffff;
    local_378 = pppppuVar14;
    FUN_146de04ef(pppppuVar14,&local_228,local_248);
    local_220 = (undefined **)local_2d0;
    local_214 = 0xffffffff;
    FUN_146de04ef(&local_2d8,&local_228,local_248);
    pppppuVar14 = (undefined8 *****)local_380;
    *(undefined8 *)(param_1 + 0x238) = 1;
    **(undefined4 **)(param_1 + 0x140) = 0xffffffff;
    local_220 = *(undefined ***)(param_1 + 0x138);
    local_214 = 0;
    FUN_146de04ef(local_380,&local_228,local_248);
    **(undefined4 **)(param_1 + 0x170) = 0;
    **(undefined4 **)(param_1 + 0x1c0) = 0;
    **(undefined4 **)(param_1 + 0x180) = 0;
    **(undefined4 **)(param_1 + 0x130) = 0;
    if (0 < (longlong)puVar18) {
      local_338 = param_1 + 2;
      pppppuVar7 = (undefined8 *****)0x0;
      local_368 = lVar4;
      local_350 = puVar17;
      do {
        local_3d0 = (undefined8 ****)&local_328;
        lVar6 = *(longlong *)(param_1 + 0x1f0);
        puVar12 = (undefined1 *)(lVar6 + (longlong)pppppuVar7);
        if ((longlong)puVar18 < lVar6 + (longlong)pppppuVar7) {
          puVar12 = puVar18;
        }
        puVar8 = (undefined1 *)((longlong)pppppuVar7 + 1);
        if ((longlong)pppppuVar7 + 1 < (longlong)puVar12) {
          puVar8 = puVar12;
        }
        lVar19 = 0;
        do {
          if ((longlong)puVar12 <= (longlong)((longlong)pppppuVar7 + lVar19 + 1))
          goto LAB_14849aa04;
          lVar15 = lVar19 + 1;
          lVar11 = lVar19 * 4;
          lVar19 = lVar15;
        } while (*(int *)((longlong)local_318 + lVar11 + (longlong)pppppuVar7 * 4 + 4) == -1);
        puVar8 = (undefined1 *)(lVar15 + (longlong)pppppuVar7);
        lVar6 = lVar15;
LAB_14849aa04:
        lVar19 = (longlong)puVar18 - (longlong)pppppuVar7;
        if (puVar8 != puVar18) {
          lVar19 = lVar6;
        }
        local_390 = &local_298;
        local_398 = &local_288;
        local_3a0 = &local_2d8;
        local_3a8 = &local_2c8;
        local_3b8 = &local_278;
        local_3c0 = (undefined8 ****)&local_2b8;
        local_3c8 = &local_2e8;
        local_3d8 = local_378;
        local_3b0 = &local_2a8;
        local_388 = pppppuVar14;
        FUN_14849c742(lVar4,lVar19,pppppuVar7,puVar17);
        lVar6 = local_328;
        local_3c8 = &local_278;
        local_3d0 = &local_2f8;
        local_3d8 = &local_2e8;
        local_3c0 = &local_2a8;
        local_3b8 = pppppuVar14;
        FUN_14849c96e(lVar4,lVar19,pppppuVar7,local_328);
        pppppuVar9 = (undefined8 *****)(lVar19 + (longlong)pppppuVar7);
        if (0 < lVar19) {
          local_348 = lVar4 - lVar6;
          local_360 = lVar6;
          pppppuVar14 = pppppuVar7;
          local_340 = (undefined8 *****)(lVar19 + (longlong)pppppuVar7);
          do {
            lVar6 = local_348;
            lVar15 = ((longlong)pppppuVar14 - (longlong)pppppuVar7) * lVar4 * 4;
            local_a0 = local_2b8 + lVar15;
            ppppuVar20 = (undefined8 ****)((longlong)local_2a8 + lVar15);
            local_3d8 = *(undefined8 *****)(param_1 + 0x200);
            local_390 = local_380;
            local_398 = &local_298;
            local_3a0 = &local_288;
            local_3a8 = &local_2d8;
            local_3b0 = &local_2c8;
            local_3b8 = &local_80;
            local_3c0 = &local_278;
            local_3c8 = (undefined8 ****)&local_a0;
            local_3d0 = (undefined8 ****)&local_330;
            local_330 = local_360;
            local_98 = lVar4;
            local_80 = ppppuVar20;
            local_78 = lVar4;
            FUN_14849d1d8(local_338,lVar4,pppppuVar14,local_378);
            lVar19 = local_330;
            ppppuVar16 = (undefined8 ****)(lVar15 + (longlong)local_2e8);
            local_e0 = (undefined8 ***)(local_360 * 4 + (longlong)local_278);
            local_3c0 = local_380;
            local_3d0 = &local_c0;
            local_3d8 = &local_e0;
            local_3c8 = pppppuVar7;
            local_100 = ppppuVar16;
            local_f8 = lVar4;
            local_d8 = lVar6;
            local_c0 = ppppuVar20;
            local_b8 = lVar4;
            lVar6 = FUN_14849d4ee(pppppuVar14,local_330 - local_360,&local_100,&local_2f8);
            ppppuVar3 = local_380;
            if (lVar6 != 0) {
              pcVar13 = "UNABLE TO EXPAND MEMORY IN COLUMN_BMOD() ";
LAB_14849af6a:
              FUN_1401d7cf8(param_1 + 0x10,pcVar13);
              *(undefined4 *)(param_1 + 4) = 1;
              param_1[8] = 0;
              goto LAB_14849af7a;
            }
            local_3c8 = local_380;
            local_3d0 = &local_120;
            local_3d8 = local_378;
            local_140 = ppppuVar20;
            local_138 = lVar4;
            local_120 = ppppuVar16;
            local_118 = lVar4;
            lVar4 = FUN_14849d934(pppppuVar14,lVar19,&local_278,&local_140);
            ppppuVar16 = local_378;
            if (lVar4 != 0) {
              pcVar13 = "UNABLE TO EXPAND MEMORY IN COPY_TO_UCOL() ";
              goto LAB_14849af6a;
            }
            local_3d0 = ppppuVar3;
            local_3d8 = &local_320;
            lVar4 = FUN_14849db34(pppppuVar14,param_1 + 0x220,local_378,&local_308);
            if (lVar4 != 0) {
              FUN_1401d7cf8(param_1 + 0x10,"THE MATRIX IS STRUCTURALLY SINGULAR ... ZERO COLUMN AT "
                           );
              FUN_1483c8064((basic_ostream<char,std::char_traits<char>_> *)&local_228,1);
              std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        ((basic_ostream<char,std::char_traits<char>_> *)&local_228,lVar4);
              FUN_1470ab43c((basic_streambuf<char,std::char_traits<char>_> *)&local_220,local_248);
              pppppuVar14 = local_248;
              if (0xf < local_230) {
                pppppuVar14 = (undefined8 *****)local_248[0];
              }
              FUN_144a6594a(param_1 + 0x10,pppppuVar14,local_238);
              FUN_1401d9a90(local_248);
              *(undefined4 *)(param_1 + 4) = 1;
              param_1[8] = 0;
              *(undefined ***)((longlong)&local_228 + (longlong)*(int *)(local_228 + 4)) =
                   &PTR_LAB_14ae75850;
              *(int *)((longlong)&local_230 + (longlong)*(int *)(local_228 + 4) + 4) =
                   *(int *)(local_228 + 4) + -0x88;
              local_220 = &PTR_FUN_14a179f40;
              FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)&local_220);
              std::basic_streambuf<char,std::char_traits<char>_>::
              ~basic_streambuf<char,std::char_traits<char>_>
                        ((basic_streambuf<char,std::char_traits<char>_> *)&local_220);
              std::ios_base::~ios_base(local_1a0);
              goto LAB_14849af7a;
            }
            if ((undefined8 *****)local_320 != pppppuVar14) {
              *(longlong *)(param_1 + 0x238) = -*(longlong *)(param_1 + 0x238);
            }
            local_260 = local_368;
            local_3c0 = local_380;
            local_3c8 = &local_2c8;
            local_3d0 = &local_268;
            local_3d8 = &local_278;
            local_358 = pppppuVar14;
            local_268 = ppppuVar20;
            FUN_14849dd32(pppppuVar14,ppppuVar16,local_320,lVar19);
            if (0 < lVar19) {
              lVar4 = 0;
              do {
                *(undefined4 *)
                 ((longlong)ppppuVar20 + (longlong)*(int *)((longlong)local_278 + lVar4 * 4) * 4) =
                     0xffffffff;
                lVar4 = lVar4 + 1;
              } while (lVar19 != lVar4);
            }
            pppppuVar14 = (undefined8 *****)((longlong)local_358 + 1);
            pppppuVar9 = (undefined8 *****)local_340;
            puVar17 = local_350;
            lVar4 = local_368;
          } while ((longlong)pppppuVar14 < (longlong)local_340);
        }
        pppppuVar7 = pppppuVar9;
        puVar18 = local_370;
        pppppuVar14 = (undefined8 *****)local_380;
      } while ((longlong)pppppuVar9 < (longlong)local_370);
    }
    ppppuVar3 = local_378;
    uVar5 = FUN_1483c82d8(local_378);
    *(undefined8 *)(param_1 + 0x238) = uVar5;
    uVar5 = FUN_1483c82d8(plVar1);
    *(undefined8 *)(param_1 + 0x240) = uVar5;
    FUN_14849deb8(puVar18,param_1 + 0x228,param_1 + 0x230);
    FUN_14849df48(puVar18,ppppuVar3,pppppuVar14);
    *(longlong *)(param_1 + 0x78) = lVar4;
    *(undefined1 **)(param_1 + 0x80) = puVar18;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x180);
    *(longlong *)(param_1 + 0x88) =
         (longlong)*(int *)(*(longlong *)(param_1 + 0x140) + (longlong)puVar18 * 4);
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x130);
    param_1[0xc0] = 0;
    *(undefined1 **)(param_1 + 200) = puVar18;
    *(longlong *)(param_1 + 0xd0) = lVar4;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[8] = 1;
LAB_14849af7a:
    FUN_1400020a8(local_318);
    FUN_1400020a8(local_308);
    FUN_1400020a8(local_2f8);
    FUN_1400020a8(local_2e8);
    FUN_1400020a8(local_2d8);
    FUN_1400020a8(local_2c8);
    FUN_1400020a8(local_2b8);
    FUN_1400020a8(local_2a8);
    FUN_1400020a8(local_298);
    FUN_1400020a8(local_288);
    FUN_1400020a8(local_278);
  }
  else {
    FUN_1401d7cf8(param_1 + 0x10,"UNABLE TO ALLOCATE WORKING MEMORY\n\n");
    param_1[8] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849b166 FUN_14849b166 body=82 status=ok
// SIG undefined FUN_14849b166(void)

void FUN_14849b166(longlong param_1)

{
  FUN_1484a3200(param_1 + 0x130);
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x120));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x110));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x100));
  FUN_146de02bc(param_1 + 0x30);
  FUN_1401d9a90(param_1 + 0x10);
  return;
}



// FUNCTION 14849b1b8 FUN_14849b1b8 body=225 status=ok
// SIG undefined FUN_14849b1b8(void)

void FUN_14849b1b8(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  lVar6 = (longlong)param_2 - lVar1;
  uVar5 = (param_1[1] - lVar1 >> 2) * -0x5555555555555555 + 1;
  uVar4 = (param_1[2] - lVar1 >> 2) * -0x5555555555555555;
  uVar3 = 0x1555555555555555 - (uVar4 >> 1);
  uVar7 = (uVar4 >> 1) + uVar4;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    uVar7 = 0x1555555555555555;
  }
  _Dst = (void *)FUN_14849b30c(uVar7);
  *(undefined8 *)((longlong)_Dst + lVar6) = *param_3;
  *(undefined4 *)((longlong)_Dst + lVar6 + 8) = *(undefined4 *)(param_3 + 1);
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + lVar6 + 0xc),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14849b29a(param_1,_Dst,uVar5,uVar7);
  return;
}



// FUNCTION 14849b29a FUN_14849b29a body=112 status=ok
// SIG undefined FUN_14849b29a(void)

void FUN_14849b29a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}



// FUNCTION 14849b30c FUN_14849b30c body=86 status=ok
// SIG undefined FUN_14849b30c(void)

undefined8 FUN_14849b30c(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x1555555555555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x155 < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0xc);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0xc,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14849b363 FUN_14849b363 body=366 status=ok
// SIG undefined FUN_14849b363(void)

void FUN_14849b363(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_146dd92fc(local_90,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  lVar7 = local_88;
  if (*param_1 != *param_2) {
    local_a0 = 0;
    if (0 < local_88) {
      local_a0 = FUN_141729f83(local_88);
    }
    local_98 = lVar7;
    local_38 = lVar7;
    local_2c = 0;
    FUN_146de04ef(&local_a0,local_40,&local_41);
    piVar6 = (int *)*param_1;
    if ((int *)*param_2 != piVar6) {
      do {
        piVar1 = (int *)(local_a0 + (longlong)*piVar6 * 4);
        *piVar1 = *piVar1 + 1;
        piVar6 = piVar6 + 3;
      } while (piVar6 != (int *)*param_2);
    }
    FUN_14849b64a(local_90,&local_a0);
    piVar6 = (int *)*param_1;
    if ((int *)*param_2 != piVar6) {
      do {
        iVar2 = piVar6[2];
        iVar3 = piVar6[1];
        lVar7 = (longlong)*piVar6;
        iVar4 = *(int *)(local_78 + lVar7 * 4);
        iVar5 = *(int *)(lStack_70 + lVar7 * 4);
        *(int *)(lStack_70 + lVar7 * 4) = iVar5 + 1;
        lVar7 = (longlong)iVar4 + (longlong)iVar5;
        *(int *)(lStack_60 + lVar7 * 4) = iVar3;
        *(int *)(local_68 + lVar7 * 4) = iVar2;
        piVar6 = piVar6 + 3;
      } while (piVar6 != (int *)*param_2);
    }
    FUN_14849b4d2(local_90);
    FUN_1400020a8(local_a0);
  }
  FUN_146de0e5a(param_3,local_90);
  FUN_146ddcf04(local_90);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14849b4d2 FUN_14849b4d2 body=375 status=ok
// SIG undefined FUN_14849b4d2(void)

void FUN_14849b4d2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined1 local_30 [8];
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_48 = 0;
  if (lVar7 != 0) {
    if (lVar7 < 1) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_141729f83(lVar7);
    }
  }
  local_1c = 0xffffffff;
  local_40 = lVar7;
  local_28 = lVar7;
  FUN_146de04ef(&local_48,local_30,&local_31);
  lVar7 = *(longlong *)(param_1 + 8);
  iVar5 = 0;
  if (0 < lVar7) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4);
      iVar5 = iVar4;
      if (0 < lVar6) {
        lVar7 = (longlong)*(int *)(lVar7 + lVar3 * 4);
        lVar6 = lVar6 + lVar7;
        do {
          lVar2 = *(longlong *)(param_1 + 0x28);
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
          iVar1 = *(int *)(local_48 + lVar8 * 4);
          if (iVar1 < iVar4) {
            *(undefined4 *)(lVar2 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar2 + lVar7 * 4);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
            *(int *)(local_48 + lVar8 * 4) = iVar5;
            iVar5 = iVar5 + 1;
          }
          else {
            *(float *)(lVar2 + (longlong)iVar1 * 4) =
                 *(float *)(lVar2 + (longlong)iVar1 * 4) + *(float *)(lVar2 + lVar7 * 4);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
        lVar7 = *(longlong *)(param_1 + 0x18);
      }
      *(int *)(lVar7 + lVar3 * 4) = iVar4;
      lVar3 = lVar3 + 1;
      lVar7 = *(longlong *)(param_1 + 8);
      iVar4 = iVar5;
    } while (lVar3 < lVar7);
  }
  *(int *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4) = iVar5;
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_146de0756(param_1 + 0x28,
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 8) * 4),0
               );
  FUN_1400020a8(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849b64a FUN_14849b64a body=697 status=ok
// SIG undefined FUN_14849b64a(void)

void FUN_14849b64a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  
  lVar9 = *(longlong *)(param_1 + 8) * 4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar9 = FUN_14001cc68();
    *(longlong *)(param_1 + 0x20) = lVar9;
    if (lVar9 == 0) {
      FUN_14001cc68();
      lVar9 = *(longlong *)(param_1 + 0x20);
    }
    lVar6 = *(longlong *)(param_1 + 8);
    iVar7 = 0;
    lVar10 = 0;
    if (0 < lVar6) {
      lVar11 = 0;
      do {
        *(int *)(lVar9 + lVar11 * 4) = iVar7;
        iVar12 = *(int *)(*param_2 + lVar11 * 4);
        lVar6 = *(longlong *)(param_1 + 8);
        iVar7 = (iVar7 + iVar12 + *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar11 * 4)) -
                *(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + iVar12;
      } while (lVar11 < lVar6);
    }
    if (*(longlong *)(param_1 + 0x40) < lVar10 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de07b6(param_1 + 0x28);
      lVar6 = *(longlong *)(param_1 + 8);
    }
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (0 < lVar6) {
      iVar7 = *(int *)(lVar10 + lVar6 * 4);
      do {
        lVar10 = lVar6 + -1;
        lVar11 = *(longlong *)(param_1 + 0x18);
        iVar12 = *(int *)(lVar11 + -4 + lVar6 * 4);
        iVar8 = iVar7 - iVar12;
        bVar14 = iVar12 <= iVar7;
        iVar7 = iVar12;
        if (iVar8 != 0 && bVar14) {
          uVar13 = (ulonglong)(iVar8 - 1);
          do {
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar9 + lVar10 * 4) * 4 +
             uVar13 * 4) = *(undefined4 *)
                            (*(longlong *)(param_1 + 0x30) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 +
                            uVar13 * 4);
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar9 + lVar10 * 4) * 4 +
             uVar13 * 4) = *(undefined4 *)
                            (*(longlong *)(param_1 + 0x28) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 +
                            uVar13 * 4);
            bVar14 = uVar13 != 0;
            uVar13 = uVar13 - 1;
          } while (bVar14);
          lVar11 = *(longlong *)(param_1 + 0x18);
          iVar7 = *(int *)(lVar11 + lVar10 * 4);
        }
        *(undefined4 *)(lVar11 + lVar10 * 4) = *(undefined4 *)(lVar9 + lVar10 * 4);
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar10 * 4) = iVar8;
        bVar14 = 1 < lVar6;
        lVar6 = lVar10;
      } while (bVar14);
      lVar6 = *(longlong *)(param_1 + 8);
      lVar10 = *(longlong *)(param_1 + 0x18);
      if (0 < lVar6) {
        *(int *)(lVar10 + lVar6 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar6 * 4) +
             *(int *)(lVar10 + -4 + lVar6 * 4) + *(int *)(*param_2 + -4 + lVar6 * 4);
        lVar6 = *(longlong *)(param_1 + 8);
        lVar10 = *(longlong *)(param_1 + 0x18);
      }
    }
    FUN_146de0756(param_1 + 0x28,(longlong)*(int *)(lVar10 + lVar6 * 4),0);
    return;
  }
  lVar9 = FUN_14001cc68(lVar9 + 4 + (ulonglong)(lVar9 == -4),0x10);
  if (lVar9 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  iVar7 = 0;
  if (0 < lVar6) {
    piVar3 = *(int **)(param_1 + 0x18);
    lVar11 = *(longlong *)(param_1 + 0x20);
    lVar4 = *param_2;
    lVar10 = 0;
    iVar7 = 0;
    iVar12 = *piVar3;
    do {
      *(int *)(lVar9 + lVar10 * 4) = iVar7;
      iVar8 = piVar3[lVar10 + 1];
      iVar1 = *(int *)(lVar11 + lVar10 * 4);
      iVar2 = *(int *)(lVar4 + lVar10 * 4);
      lVar10 = lVar10 + 1;
      iVar12 = iVar8 - (iVar12 + iVar1);
      if (iVar12 < iVar2) {
        iVar12 = iVar2;
      }
      iVar7 = iVar1 + iVar7 + iVar12;
      iVar12 = iVar8;
    } while (lVar6 != lVar10);
  }
  *(int *)(lVar9 + lVar6 * 4) = iVar7;
  FUN_146de0756(param_1 + 0x28,(longlong)iVar7,0);
  lVar6 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar10 = lVar6 + -1;
      iVar7 = *(int *)(lVar9 + -4 + lVar6 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar6 * 4) < iVar7) &&
         (iVar12 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar10 * 4), 0 < iVar12)) {
        uVar13 = (ulonglong)(iVar12 - 1);
        lVar11 = (longlong)iVar7 * 4;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar11 + uVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x30) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 + uVar13 * 4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar11 + uVar13 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x28) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) * 4 + uVar13 * 4);
          bVar14 = uVar13 != 0;
          uVar13 = uVar13 - 1;
        } while (bVar14);
      }
      bVar14 = 1 < lVar6;
      lVar6 = lVar10;
    } while (bVar14);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar9;
  FUN_1400020a8(uVar5);
  return;
}



// FUNCTION 14849b904 FUN_14849b904 body=1027 status=ok
// SIG undefined FUN_14849b904(void)

void FUN_14849b904(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_1b8 [32];
  int *local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  int *local_178;
  undefined4 *local_170;
  ulonglong local_160;
  longlong local_158;
  ulonglong local_150;
  undefined4 local_144;
  int local_140;
  int local_13c;
  int local_138 [20];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar11 = *(ulonglong *)(param_1 + 8);
  uVar6 = FUN_146de087c();
  uVar15 = (uint)uVar11;
  if ((int)(uVar15 | uVar3 | uVar6) < 0) {
    lVar17 = (uVar11 << 0x20) + 0x100000000;
    local_160 = 0xffffffff;
  }
  else {
    lVar17 = (uVar11 << 0x20) + 0x100000000;
    local_160 = (ulonglong)
                ((int)((ulonglong)((lVar17 >> 0x1d) * 3) >> 2) +
                 uVar15 + uVar3 * 4 + uVar6 * 2 + uVar6 / 5 + 4);
  }
  local_158 = uVar11 << 0x20;
  piVar9 = (int *)0x0;
  local_150 = (ulonglong)uVar3;
  memset(local_d8,0,0x90);
  local_e8 = 0x3fe0000000000000;
  local_e0 = 0x3fe0000000000000;
  if (0 < lVar17 >> 0x20 && lVar17 != 0) {
    piVar9 = (int *)FUN_141729f83();
  }
  if ((int)local_160 < 1) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)FUN_141729f83();
  }
  uVar5 = local_150;
  if (-1 < (int)uVar15) {
    uVar12 = 0;
    do {
      piVar9[uVar12] = *(int *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar15 + 1 != uVar12);
  }
  if (0 < (int)uVar6) {
    uVar12 = 0;
    do {
      piVar10[uVar12] = *(int *)(*(longlong *)(param_1 + 0x30) + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while ((uVar6 & 0x7fffffff) != uVar12);
  }
  local_138[6] = 0;
  local_138[7] = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[8] = 0;
  local_138[9] = 0;
  local_138[10] = 0;
  local_138[0xb] = 0;
  local_138[0xc] = 0;
  local_138[0xd] = 0;
  local_138[0xe] = 0;
  local_138[0xf] = 0;
  local_138[0x10] = 0;
  local_138[0x11] = 0;
  local_138[0x12] = 0;
  local_138[0x13] = 0;
  local_138[4] = -1;
  local_138[5] = -1;
  if (piVar10 == (int *)0x0) {
    local_138[2] = 0;
    local_138[3] = -1;
  }
  else if (piVar9 == (int *)0x0) {
    local_138[2] = 0;
    local_138[3] = -2;
  }
  else {
    iVar14 = (int)local_150;
    if (iVar14 < 0) {
      local_138[2] = 0;
      local_138[3] = -3;
      local_138[5] = 0xffffffff;
      local_138[4] = iVar14;
    }
    else {
      if ((int)uVar15 < 0) {
        FUN_141729ef6(param_2,local_158 >> 0x20);
        goto LAB_14849bb2d;
      }
      iVar4 = piVar9[uVar15 & 0x7fffffff];
      if (iVar4 < 0) {
        local_138[2] = 0;
        local_138[3] = -5;
        local_138[5] = 0xffffffff;
        local_138[4] = iVar4;
      }
      else if (*piVar9 == 0) {
        iVar7 = uVar15 * 6 + 6;
        iVar13 = uVar15 + iVar14 * 4 + iVar7 + iVar4 * 2 + 4;
        iVar16 = (int)local_160;
        if (iVar16 < iVar13) {
          local_138[2] = 0;
          local_138[3] = -7;
          local_138[5] = iVar16;
          local_138[4] = iVar13;
        }
        else {
          iVar16 = iVar16 - (iVar14 * 4 + uVar15 * 6);
          iVar13 = iVar16 + -10;
          local_160 = CONCAT44(local_160._4_4_,iVar13);
          piVar1 = piVar10 + iVar13;
          piVar2 = piVar10 + (iVar16 + -10 + iVar7);
          local_188 = local_138;
          local_198 = piVar10;
          local_190 = piVar9;
          iVar7 = FUN_143b68d6e(local_150 & 0xffffffff,uVar11 & 0xffffffff,piVar2,piVar1);
          if (iVar7 != 0) {
            local_170 = &local_144;
            local_178 = &local_13c;
            local_180 = &local_140;
            local_188 = (int *)&local_e8;
            local_198 = piVar10;
            local_190 = piVar9;
            FUN_143b690d5(uVar5 & 0xffffffff,uVar11 & 0xffffffff,piVar2,piVar1);
            local_170 = (undefined4 *)CONCAT44(local_170._4_4_,iVar4 * 2);
            local_178 = (int *)CONCAT44(local_178._4_4_,local_144);
            local_180 = (int *)CONCAT44(local_180._4_4_,local_13c);
            local_198 = piVar1;
            local_190 = piVar10;
            local_188 = piVar9;
            uVar8 = FUN_143b693ac(uVar5 & 0xffffffff,uVar11 & 0xffffffff,local_160 & 0xffffffff,
                                  piVar2);
            FUN_143b69c71(uVar11 & 0xffffffff,piVar1,piVar9);
            local_138[1] = uVar15 - local_13c;
            local_138[0] = iVar14 - local_140;
            local_138[2] = uVar8;
          }
        }
      }
      else {
        local_138[2] = 0;
        local_138[3] = -6;
        local_138[5] = 0xffffffff;
        local_138[4] = *piVar9;
      }
    }
  }
  FUN_141729ef6(param_2,local_158 >> 0x20);
  if (0 < (int)uVar15) {
    uVar11 = 0;
    do {
      *(int *)(*param_2 + (longlong)piVar9[uVar11] * 4) = (int)uVar11;
      uVar11 = uVar11 + 1;
    } while ((uVar15 & 0x7fffffff) != uVar11);
  }
LAB_14849bb2d:
  FUN_1400020a8(piVar10);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    FUN_1400020a8(piVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14849bd08 FUN_14849bd08 body=96 status=ok
// SIG undefined FUN_14849bd08(void)

void FUN_14849bd08(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = *(longlong *)(param_1 + 8) * 4;
    uVar1 = FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    if (0 < *(longlong *)(param_1 + 8)) {
      lVar2 = 0;
      do {
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 4) -
             *(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(longlong *)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 14849bd68 FUN_14849bd68 body=1033 status=ok
// SIG undefined FUN_14849bd68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14849bd68(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_79;
  undefined1 local_78 [8];
  longlong local_70;
  uint local_64;
  ulonglong local_60;
  longlong lVar18;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = *(ulonglong *)(param_1 + 8);
  uVar16 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar7 = (uint)local_b8;
  uVar12 = uVar7;
  if ((int)uVar16 < (int)uVar7) {
    uVar12 = uVar16;
  }
  lVar17 = (longlong)(int)uVar7;
  local_90 = 0;
  if ((local_b8 & 0xffffffff) != 0) {
    if (lVar17 < 1) {
      local_90 = 0;
    }
    else {
      local_90 = FUN_141729f83(lVar17);
    }
  }
  local_64 = 0;
  local_88 = lVar17;
  local_70 = lVar17;
  FUN_146de04ef(&local_90,local_78,&local_a0);
  local_a0 = 0;
  if (0 < lVar17) {
    local_a0 = FUN_141729f83(lVar17);
  }
  local_64 = 0;
  local_98 = lVar17;
  local_70 = lVar17;
  FUN_146de04ef(&local_a0,local_78,&local_79);
  FUN_141729ef6(param_2,*(undefined8 *)(param_1 + 8));
  local_b0 = (longlong)(int)uVar16;
  FUN_141729ef6(param_3);
  local_70 = param_3[1];
  local_64 = uVar7;
  FUN_146de04ef(param_3,local_78,&local_79);
  auVar4 = _DAT_149931e80;
  iVar5 = uVar12 - 1;
  iVar14 = 1;
  if (1 < (int)uVar12) {
    iVar14 = iVar5;
  }
  iVar3 = iVar5 / iVar14;
  uVar11 = (longlong)iVar5 % (longlong)iVar14 & 0xffffffff;
  if (0 < (int)uVar12) {
    lVar17 = *param_3;
    lVar10 = (ulonglong)uVar12 - 1;
    auVar19._8_4_ = (int)lVar10;
    auVar19._0_8_ = lVar10;
    auVar19._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    uVar11 = (ulonglong)(uint)(iVar3 * 3);
    auVar20 = pmovsxbq(in_XMM1,0x302);
    auVar21 = pmovsxbq(in_XMM2,0x100);
    iVar14 = 0;
    auVar19 = auVar19 ^ _DAT_149931e80;
    lVar18 = auVar19._0_8_;
    auVar22 = pmovsxbq(in_XMM5,0x404);
    lVar10 = 0;
    do {
      auVar23 = auVar21 ^ auVar4;
      lVar15 = auVar19._8_8_;
      if ((bool)(~(lVar18 < auVar23._0_8_) & 1)) {
        *(int *)(lVar17 + lVar10) = iVar14;
      }
      if (auVar23._8_8_ <= lVar15) {
        *(int *)(lVar17 + 4 + lVar10) = iVar3 + iVar14;
      }
      auVar23 = auVar20 ^ auVar4;
      if (auVar23._0_8_ <= lVar18) {
        *(int *)(lVar17 + 8 + lVar10) = iVar3 * 2 + iVar14;
      }
      if (auVar23._8_8_ <= lVar15) {
        *(int *)(lVar17 + 0xc + lVar10) = iVar3 * 3 + iVar14;
      }
      lVar15 = auVar21._8_8_;
      auVar21._0_8_ = auVar21._0_8_ + auVar22._0_8_;
      auVar21._8_8_ = lVar15 + auVar22._8_8_;
      lVar15 = auVar20._8_8_;
      auVar20._0_8_ = auVar20._0_8_ + auVar22._0_8_;
      auVar20._8_8_ = lVar15 + auVar22._8_8_;
      lVar10 = lVar10 + 0x10;
      iVar14 = iVar14 + iVar3 * 4;
    } while ((ulonglong)(uVar12 + 3 >> 2) << 4 != lVar10);
  }
  if (0 < (int)(uint)local_b8) {
    local_a8 = (ulonglong)((uint)local_b8 & 0x7fffffff);
    uVar8 = 0;
    do {
      iVar14 = (int)uVar8;
      lVar17 = (longlong)iVar14;
      uVar11 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar17 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        uVar13 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar17 * 4);
      }
      else {
        uVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar17 * 4) + uVar11;
      }
      if ((longlong)uVar11 < (longlong)uVar13) {
        lVar17 = *(longlong *)(param_1 + 0x30);
        do {
          lVar10 = (longlong)*(int *)(lVar17 + uVar11 * 4);
          iVar5 = *(int *)(*param_3 + lVar10 * 4);
          if (iVar14 < iVar5) {
            iVar5 = iVar14;
          }
          *(int *)(*param_3 + lVar10 * 4) = iVar5;
          uVar11 = uVar11 + 1;
        } while (uVar13 != uVar11);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_a8);
    uVar8 = 0;
    do {
      uVar11 = CONCAT71((int7)(uVar11 >> 8),local_b0 <= (longlong)uVar8);
      iVar14 = (int)uVar8;
      *(int *)(local_a0 + uVar8 * 4) = iVar14;
      *(int *)(local_90 + uVar8 * 4) = iVar14;
      *(uint *)(*param_2 + uVar8 * 4) = (uint)local_b8;
      lVar17 = (longlong)iVar14;
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar17 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar17 * 4);
      }
      else {
        lVar17 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar17 * 4) + lVar10;
      }
      lVar18 = *(longlong *)(param_1 + 0x30);
      bVar2 = lVar17 <= lVar10;
      if ((longlong)uVar8 < local_b0) {
        uVar13 = uVar8 & 0xffffffff;
LAB_14849c073:
        do {
          uVar6 = uVar8;
          if (!bVar2) {
            uVar6 = (ulonglong)*(int *)(lVar18 + lVar10 * 4);
          }
          uVar12 = *(uint *)(*param_3 + uVar6 * 4);
          uVar7 = (uint)uVar13;
          if ((longlong)(int)uVar12 < (longlong)uVar8) {
            uVar16 = *(uint *)(local_a0 + (longlong)(int)uVar12 * 4);
            while( true ) {
              lVar15 = (longlong)(int)uVar16;
              uVar1 = *(uint *)(local_a0 + lVar15 * 4);
              if (uVar1 == uVar16) break;
              *(uint *)(local_a0 + (longlong)(int)uVar12 * 4) = uVar1;
              uVar16 = *(uint *)(local_a0 + (longlong)(int)uVar1 * 4);
              uVar12 = uVar1;
            }
            uVar12 = *(uint *)(local_90 + lVar15 * 4);
            if (uVar8 != uVar12) {
              *(int *)(*param_2 + (longlong)(int)uVar12 * 4) = iVar14;
              *(uint *)(local_a0 + (longlong)(int)uVar7 * 4) = uVar16;
              *(int *)(local_90 + lVar15 * 4) = iVar14;
              uVar7 = uVar16;
            }
          }
          bVar9 = (byte)uVar11 | uVar6 == uVar8;
          uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar9);
          lVar10 = lVar10 + 1;
          bVar2 = lVar17 <= lVar10;
          uVar13 = (ulonglong)uVar7;
        } while ((bVar2 & bVar9) == 0);
      }
      else {
        uVar13 = uVar8 & 0xffffffff;
        if (lVar10 < lVar17) goto LAB_14849c073;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != local_a8);
  }
  FUN_1400020a8(local_a0,uVar11);
  FUN_1400020a8(local_90);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849c172 FUN_14849c172 body=449 status=ok
// SIG undefined FUN_14849c172(void)

longlong FUN_14849c172(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)(param_5 + 0xb0);
  *(undefined8 *)(param_5 + 0xb0) = 0;
  lVar5 = ((param_3 + 1) * param_4) / param_2;
  if (lVar5 < param_1) {
    param_1 = lVar5;
  }
  plVar1 = (longlong *)(param_5 + 0x68);
  *(longlong *)(param_5 + 0x68) = param_1 * param_2;
  plVar4 = (longlong *)(param_5 + 0xa0);
  *(longlong *)(param_5 + 0xa0) = param_1 * param_2;
  lVar5 = 4;
  if (4 < param_4) {
    lVar5 = param_4;
  }
  lVar5 = lVar5 * (param_3 + 1);
  lVar6 = lVar5 + 3;
  if (-1 < lVar5) {
    lVar6 = lVar5;
  }
  plVar2 = (longlong *)(param_5 + 0x60);
  *(longlong *)(param_5 + 0x60) = lVar6 >> 2;
  param_2 = param_2 + 1;
  FUN_141729ef6(param_5,param_2);
  FUN_141729ef6(param_5 + 0x10,param_2);
  FUN_141729ef6(param_5 + 0x50,param_2);
  FUN_141729ef6(param_5 + 0x40,param_2);
  FUN_141729ef6(param_5 + 0x90,param_2);
  do {
    lVar5 = FUN_14849dfee(param_5 + 0x20,plVar1,0,plVar3);
    if ((((lVar5 < 0) || (lVar5 = FUN_14849dfee(param_5 + 0x70,plVar4,0,plVar3), lVar5 < 0)) ||
        (lVar5 = FUN_14849e1f2(param_5 + 0x30,plVar2,0,0,plVar3), lVar5 < 0)) ||
       (lVar5 = FUN_14849e1f2(param_5 + 0x80,plVar4,0,1,plVar3), lVar5 < 0)) {
      lVar5 = *plVar1 / 2;
      *plVar1 = lVar5;
      *plVar4 = *plVar4 / 2;
      *plVar2 = *plVar2 / 2;
      if (lVar5 < param_3) {
        return lVar5;
      }
    }
  } while (((*(longlong *)(param_5 + 0x28) == 0) || (*(longlong *)(param_5 + 0x78) == 0)) ||
          ((*(longlong *)(param_5 + 0x38) == 0 || (*(longlong *)(param_5 + 0x88) == 0))));
  *plVar3 = *plVar3 + 1;
  return 0;
}



// FUNCTION 14849c334 FUN_14849c334 body=756 status=ok
// SIG undefined FUN_14849c334(void)

void FUN_14849c334(ulonglong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_79;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1483c6193();
  lVar10 = param_1 + 1;
  if ((lVar10 == 0) || ((longlong)param_1 < 0)) {
    local_a8 = 0;
    local_b8 = 0;
    lVar4 = 0;
    uStack_a0 = param_1;
  }
  else {
    lVar4 = FUN_141729f83(lVar10);
    lVar5 = 0;
    do {
      *(int *)(lVar4 + (longlong)*(int *)(local_98 + lVar5 * 4) * 4) = (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar10 != lVar5);
    local_a8 = 0;
    uStack_a0 = 0;
    if (param_1 != 0) {
      lVar5 = FUN_141729f83(param_1);
      local_a8 = lVar5;
      uStack_a0 = param_1;
      local_b8 = FUN_141729f83(lVar10);
      uVar3 = 0;
      do {
        *(undefined4 *)(lVar5 + (longlong)*(int *)(local_98 + uVar3 * 4) * 4) =
             *(undefined4 *)(local_98 + (longlong)*(int *)(*param_2 + uVar3 * 4) * 4);
        uVar3 = uVar3 + 1;
      } while (param_1 != uVar3);
      bVar2 = true;
      goto LAB_14849c3ac;
    }
    local_b8 = FUN_141729f83(1);
  }
  bVar2 = false;
LAB_14849c3ac:
  lStack_b0 = lVar10;
  FUN_148291d6a(&local_b8,param_2,local_78);
  FUN_148291d6a(param_2,&local_a8,local_78);
  local_70 = param_5[1];
  local_64 = 0xffffffff;
  FUN_146de04ef(param_5,local_78,&local_79);
  local_70 = param_4[1];
  local_64 = 0;
  FUN_146de04ef(param_4,local_78,&local_79);
  if (bVar2) {
    uVar3 = 0;
    do {
      uVar6 = (ulonglong)*(int *)(*param_2 + uVar3 * 4);
      if (uVar6 != param_1) {
        lVar10 = *param_4;
        *(int *)(lVar10 + uVar6 * 4) =
             *(int *)(lVar10 + uVar3 * 4) + *(int *)(lVar10 + uVar6 * 4) + 1;
      }
      uVar3 = uVar3 + 1;
    } while (param_1 != uVar3);
    lVar10 = *param_4;
    uVar3 = 0;
    do {
      uVar6 = uVar3;
      do {
        uVar7 = uVar6;
        uVar6 = (ulonglong)*(int *)(*param_2 + uVar7 * 4);
        if (uVar6 == param_1) break;
      } while (*(int *)(lVar10 + uVar6 * 4) < param_3);
      iVar11 = (int)param_1;
      if ((longlong)uVar7 < (longlong)uVar3) {
        iVar9 = *(int *)(lVar4 + uVar7 * 4);
        if (uVar7 - uVar3 == (longlong)(iVar9 - iVar11)) {
LAB_14849c4bb:
          *(int *)(*param_5 + (longlong)iVar11 * 4) = iVar9;
        }
      }
      else {
        uVar8 = param_1 & 0xffffffff;
        uVar6 = uVar3;
        do {
          uVar1 = *(uint *)(lVar4 + uVar6 * 4);
          if ((int)uVar1 < (int)uVar8) {
            uVar8 = (ulonglong)uVar1;
          }
          iVar11 = (int)uVar8;
          uVar6 = uVar6 + 1;
        } while (uVar7 + 1 != uVar6);
        iVar9 = *(int *)(lVar4 + uVar7 * 4);
        if (uVar7 - uVar3 == (longlong)(iVar9 - iVar11)) goto LAB_14849c4bb;
        do {
          if (*(int *)(*param_4 + uVar3 * 4) == 0) {
            iVar11 = *(int *)(lVar4 + uVar3 * 4);
            *(int *)(*param_5 + (longlong)iVar11 * 4) = iVar11;
          }
          uVar3 = uVar3 + 1;
        } while (uVar7 + 1 != uVar3);
      }
      lVar10 = *param_4;
      uVar3 = uVar7;
      do {
        uVar3 = uVar3 + 1;
        if ((longlong)param_1 <= (longlong)uVar3) break;
      } while (*(int *)(lVar10 + uVar3 * 4) != 0);
    } while ((longlong)uVar3 < (longlong)param_1);
  }
  FUN_148291d6a(param_2,&local_b8,local_78);
  FUN_1400020a8(local_b8);
  FUN_1400020a8(local_a8);
  FUN_1400020a8(lVar4);
  FUN_1400020a8(local_98);
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849c62a FUN_14849c62a body=279 status=ok
// SIG undefined FUN_14849c62a(void)

void FUN_14849c62a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_5[1];
  local_3c = 0xffffffff;
  FUN_146de04ef(param_5,local_50,&local_51);
  local_48 = param_4[1];
  local_3c = 0;
  FUN_146de04ef(param_4,local_50,&local_51);
  if (0 < param_1) {
    lVar1 = 0;
    do {
      lVar2 = (longlong)*(int *)(*param_2 + lVar1 * 4);
      if (lVar2 != param_1) {
        lVar4 = *param_4;
        *(int *)(lVar4 + lVar2 * 4) = *(int *)(lVar4 + lVar1 * 4) + *(int *)(lVar4 + lVar2 * 4) + 1;
      }
      lVar1 = lVar1 + 1;
    } while (param_1 != lVar1);
    lVar1 = *param_4;
    lVar2 = 0;
    do {
      lVar4 = lVar2;
      do {
        lVar3 = lVar4;
        lVar4 = (longlong)*(int *)(*param_2 + lVar3 * 4);
        if (lVar4 == param_1) break;
      } while (*(int *)(lVar1 + lVar4 * 4) < param_3);
      *(int *)(*param_5 + lVar2 * 4) = (int)lVar3;
      lVar1 = *param_4;
      lVar2 = lVar3;
      do {
        lVar2 = lVar2 + 1;
        if (param_1 <= lVar2) break;
      } while (*(int *)(lVar1 + lVar2 * 4) != 0);
    } while (lVar2 < param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14849c742 FUN_14849c742 body=554 status=ok
// SIG undefined FUN_14849c742(void)

void FUN_14849c742(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,undefined8 param_8,
                  undefined8 param_9,longlong *param_10,undefined8 param_11,longlong *param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = param_1 * 4 + *param_12;
  *param_6 = 0;
  local_b8 = param_2 + param_3;
  uVar5 = (ulonglong)(int)param_3;
  local_c0 = param_4;
  local_b0 = param_3;
  local_a0 = param_3;
  if ((longlong)uVar5 < local_b8) {
    do {
      local_90 = (uVar5 - local_b0) * param_1;
      lVar8 = (longlong)*(int *)(*(longlong *)(local_c0 + 0x18) + uVar5 * 4);
      if (*(longlong *)(local_c0 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(local_c0 + 0x18) + 4 + uVar5 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(local_c0 + 0x20) + uVar5 * 4) + lVar8;
      }
      if (lVar8 < lVar6) {
        lVar7 = local_90 * 4;
        local_a8 = *param_10 + lVar7;
        lVar1 = *param_7;
        lVar2 = *(longlong *)(local_c0 + 0x28);
        lVar3 = *(longlong *)(local_c0 + 0x30);
        do {
          lVar4 = (longlong)*(int *)(lVar3 + lVar8 * 4);
          *(undefined4 *)(lVar7 + lVar1 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar8 * 4);
          if (*(int *)(*param_12 + lVar4 * 4) != (int)uVar5) {
            local_60 = param_12[1];
            local_88 = local_a8;
            local_d0 = &local_a0;
            local_e0 = &local_90;
            local_e8 = param_15;
            local_f0 = param_14;
            local_f8 = param_13;
            local_100 = &local_68;
            local_108 = param_11;
            local_110 = &local_88;
            local_118 = param_9;
            local_d8 = lVar4;
            local_80 = param_1;
            local_68 = *param_12;
            FUN_14849e5d8(uVar5 & 0xffffffff,param_5,param_6,param_8);
          }
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < local_b8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849c96e FUN_14849c96e body=2152 status=ok
// SIG undefined FUN_14849c96e(void)

void FUN_14849c96e(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_e9;
  longlong **local_e8;
  undefined4 *local_e0;
  undefined1 *local_d8;
  longlong **local_d0;
  undefined4 local_c8 [2];
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_60 [2];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_120 = param_4;
  if (0 < param_4) {
    lVar2 = (longlong)param_3 + param_2;
    plVar1 = param_9 + 6;
    local_150 = param_9 + 4;
    local_110 = param_1 * 4;
    lVar4 = 0;
    local_160 = param_3;
    local_128 = param_2;
    do {
      uVar11 = (ulonglong)*(int *)(*param_7 + -4 + param_4 * 4);
      local_148 = (longlong)*(int *)(*param_9 + (longlong)*(int *)(param_9[2] + uVar11 * 4) * 4);
      uVar3 = uVar11 - local_148;
      local_168 = (longlong *)(longlong)*(int *)(param_9[10] + local_148 * 4);
      local_140 = (longlong *)
                  (((longlong)*(int *)(param_9[10] + 4 + local_148 * 4) - (longlong)local_168) +
                  ~uVar3);
      plVar5 = param_3;
      local_108 = lVar4;
      local_100 = param_4;
      if (param_2 < 1) {
        if (0 < (longlong)uVar3) {
          lVar10 = 0;
          lVar4 = 0;
          goto LAB_14849cccc;
        }
      }
      else {
        piVar8 = (int *)(uVar11 * 4 + *param_8);
        lVar10 = 0;
        lVar4 = 0;
        plVar17 = param_3;
        do {
          if ((longlong)*piVar8 != -1) {
            lVar15 = (uVar11 + 1) - (longlong)*piVar8;
            lVar10 = lVar10 + 1;
            if (lVar4 < lVar15) {
              lVar4 = lVar15;
            }
          }
          plVar17 = (longlong *)((longlong)plVar17 + 1);
          piVar8 = (int *)((longlong)piVar8 + local_110);
        } while ((longlong)plVar17 < lVar2);
        if ((longlong)uVar3 < 1) {
          do {
            local_a0 = ((longlong)param_3 - (longlong)plVar5) * param_1;
            local_c0 = (longlong *)(local_a0 * 4 + *param_5);
            local_90 = param_5[1];
            lVar4 = (longlong)*(int *)(*param_8 + local_a0 * 4 + uVar11 * 4);
            local_b8 = param_1;
            local_a8 = param_5;
            if (lVar4 != -1) {
              lVar10 = uVar11 - lVar4;
              local_f8 = (longlong)*(int *)(param_9[8] + local_148 * 4);
              local_198 = (longlong *)(*(int *)(param_9[8] + 4 + local_148 * 4) - local_f8);
              plVar5 = (longlong *)(lVar4 - local_148);
              local_188 = plVar1;
              if (lVar10 == 2) {
                local_180 = local_168;
                local_190 = local_140;
                local_178 = plVar5;
                FUN_14849ff96(&local_c0,param_6,local_150,&local_f8);
                plVar5 = local_160;
              }
              else if (lVar10 == 1) {
                local_180 = local_168;
                local_190 = local_140;
                local_178 = plVar5;
                FUN_14849fd48(&local_c0,param_6,local_150,&local_f8);
                plVar5 = local_160;
              }
              else if (lVar10 == 0) {
                local_188 = local_168;
                local_198 = local_140;
                local_190 = plVar1;
                local_180 = plVar5;
                FUN_14849fc3c(&local_c0,local_150,&local_f8);
                plVar5 = local_160;
              }
              else {
                local_178 = local_168;
                local_188 = local_140;
                local_190 = local_198;
                local_198 = &local_f8;
                local_180 = plVar1;
                local_170 = plVar5;
                FUN_1484a01e8(lVar10 + 1,&local_c0,param_6,local_150);
                plVar5 = local_160;
              }
            }
            param_3 = (longlong *)((longlong)param_3 + 1);
          } while ((longlong)param_3 < lVar2);
        }
        else {
LAB_14849cccc:
          local_118 = (longlong *)(lVar4 + 3U & 0xfffffffffffffffc);
          local_c0 = (longlong *)*param_6;
          if (0 < param_2) {
            local_130 = ~uVar11;
            lVar15 = 0;
            do {
              lVar14 = ((longlong)param_3 - (longlong)plVar5) * param_1 * 4;
              lVar16 = (longlong)*(int *)(*param_8 + lVar14 + uVar11 * 4);
              if (lVar16 != -1) {
                lVar6 = *param_5;
                uVar3 = ~(uVar11 - lVar16);
                lVar9 = uVar3 + lVar4;
                if (lVar9 != 0 && SCARRY8(uVar3,lVar4) == lVar9 < 0) {
                  lVar12 = 0;
                  do {
                    *(undefined4 *)
                     ((longlong)local_c0 + lVar12 * 4 + (longlong)local_118 * lVar15 * 4) = 0;
                    lVar12 = lVar12 + 1;
                  } while (lVar12 < lVar9);
                }
                if (-1 < (longlong)(uVar11 - lVar16)) {
                  lVar9 = (longlong)local_168 + (lVar16 - local_148);
                  uVar3 = local_130;
                  do {
                    *(undefined4 *)
                     ((longlong)local_c0 +
                     uVar3 * 4 + ((longlong)local_118 * lVar15 + lVar4 + lVar16) * 4) =
                         *(undefined4 *)
                          (lVar14 + lVar6 + (longlong)*(int *)(*plVar1 + lVar9 * 4) * 4);
                    lVar9 = lVar9 + 1;
                    uVar3 = uVar3 + 1;
                  } while (-uVar3 != lVar16);
                }
                lVar15 = lVar15 + 1;
                plVar5 = local_160;
              }
              param_3 = (longlong *)((longlong)param_3 + 1);
              param_2 = local_128;
            } while ((longlong)param_3 < lVar2);
          }
          local_138 = uVar11 + 1;
          lVar15 = (longlong)*(int *)(param_9[8] + local_148 * 4);
          local_158 = (longlong *)(*(int *)(param_9[8] + 4 + local_148 * 4) - lVar15);
          lVar15 = ((longlong)local_158 + 1) * ((local_138 - lVar4) - local_148) + lVar15;
          local_88 = (longlong *)(lVar15 * 4 + param_9[4]);
          local_b8 = lVar4;
          local_b0 = lVar10;
          local_a8 = local_118;
          local_80 = (longlong *)lVar4;
          local_78 = lVar4;
          local_70 = local_158;
          FUN_1484a045e(&local_88,&local_c0,&local_c0);
          plVar17 = local_140;
          local_f8 = lVar15 + lVar4;
          uVar13 = local_f8 * 4 + param_9[4];
          uVar3 = (longlong)local_140 + 6;
          if (-1 < (longlong)((longlong)local_140 + 3U)) {
            uVar3 = (longlong)local_140 + 3U;
          }
          local_70 = (longlong *)(uVar3 & 0xfffffffffffffffc);
          uVar3 = (ulonglong)((uint)(uVar13 >> 2) & 3);
          if ((uVar13 & 3) != 0) {
            uVar3 = 0;
          }
          local_88 = (longlong *)((longlong)local_118 * param_2 * 4 + *param_6 + uVar3 * 4);
          local_80 = local_140;
          local_c8[0] = 0;
          local_e8 = local_60;
          local_e0 = local_c8;
          local_d8 = &local_e9;
          local_d0 = &local_88;
          local_78 = lVar10;
          local_60[0] = local_88;
          local_50 = local_70;
          FUN_1484a070c(&local_e8);
          local_178 = local_70;
          local_180 = local_88;
          local_188 = local_a8;
          local_190 = local_c0;
          local_198 = local_158;
          FUN_14849e7d6(local_80,local_78,lVar4,uVar13);
          plVar5 = local_160;
          if (0 < param_2) {
            local_130 = (longlong)local_168 - local_148;
            local_168 = (longlong *)((longlong)local_168 * 4 + local_148 * -4);
            lVar10 = 0;
            plVar7 = local_160;
            do {
              lVar15 = ((longlong)plVar7 - (longlong)local_160) * param_1 * 4;
              lVar14 = (longlong)*(int *)(*param_8 + lVar15 + uVar11 * 4);
              if (lVar14 != -1) {
                lVar15 = lVar15 + *param_5;
                lVar16 = local_130 + lVar14;
                if (-1 < (longlong)(uVar11 - lVar14)) {
                  lVar6 = lVar4 * 4 + uVar11 * -4 + -4 + lVar14 * 4;
                  lVar9 = 0;
                  do {
                    *(undefined4 *)
                     (lVar15 + (longlong)
                               *(int *)((longlong)local_168 + lVar9 * 4 + *plVar1 + lVar14 * 4) * 4)
                         = *(undefined4 *)
                            ((longlong)local_c0 +
                            lVar9 * 4 + lVar6 + (longlong)local_a8 * lVar10 * 4);
                    *(undefined4 *)
                     ((longlong)local_c0 + lVar9 * 4 + lVar6 + (longlong)local_a8 * lVar10 * 4) = 0;
                    lVar9 = lVar9 + 1;
                  } while (local_138 - lVar14 != lVar9);
                  lVar16 = lVar16 + lVar9;
                  plVar17 = local_140;
                  param_2 = local_128;
                }
                if (0 < (longlong)plVar17) {
                  lVar14 = 0;
                  do {
                    lVar6 = (longlong)*(int *)(*plVar1 + lVar16 * 4 + lVar14 * 4);
                    *(float *)(lVar15 + lVar6 * 4) =
                         *(float *)(lVar15 + lVar6 * 4) -
                         *(float *)((longlong)local_88 +
                                   lVar14 * 4 + (longlong)local_70 * lVar10 * 4);
                    *(undefined4 *)
                     ((longlong)local_88 + lVar14 * 4 + (longlong)local_70 * lVar10 * 4) = 0;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < (longlong)plVar17);
                }
                lVar10 = lVar10 + 1;
                local_158 = plVar7;
              }
              plVar7 = (longlong *)((longlong)plVar7 + 1);
            } while ((longlong)plVar7 < lVar2);
          }
        }
      }
      param_4 = local_100 + -1;
      lVar4 = local_108 + 1;
      param_3 = plVar5;
    } while (lVar4 != local_120);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849d1d8 FUN_14849d1d8 body=788 status=ok
// SIG undefined FUN_14849d1d8(void)

void FUN_14849d1d8(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7,undefined8 param_8,
                  undefined4 *param_9,longlong *param_10,longlong *param_11,undefined8 param_12,
                  undefined8 param_13,longlong *param_14)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar6 = (undefined4 *)param_14[2];
  iVar3 = puVar6[param_3];
  local_90 = (longlong)iVar3;
  local_b0 = &local_90;
  local_98 = (longlong)*(int *)(param_14[10] + param_3 * 4);
  lVar7 = param_2 * 8 + *param_11;
  local_a8 = param_14;
  iVar8 = (int)param_3;
  local_b8 = param_3;
  local_a0 = param_1;
  if (0 < param_2) {
    lVar12 = 0;
    plVar10 = param_14 + 6;
    do {
      lVar4 = (longlong)*(int *)(*param_7 + lVar12 * 4);
      if (lVar4 == -1) break;
      *(undefined4 *)(*param_7 + lVar12 * 4) = 0xffffffff;
      if ((longlong)*(int *)(lVar7 + lVar4 * 4) != param_3) {
        local_88 = *param_9;
        uStack_84 = param_9[1];
        uStack_80 = param_9[2];
        uStack_7c = param_9[3];
        local_78 = *(undefined8 *)(param_9 + 4);
        local_d0 = &local_b8;
        local_e0 = &local_98;
        local_100 = &local_68;
        local_108 = param_10;
        local_110 = &local_88;
        local_118 = param_8;
        local_f8 = param_12;
        local_f0 = param_13;
        local_e8 = param_14;
        local_d8 = lVar4;
        local_c0 = plVar10;
        local_68 = lVar7;
        local_60 = param_2;
        FUN_1484a1702(param_3 & 0xffffffff,param_4,param_6);
        plVar10 = local_c0;
      }
      lVar12 = lVar12 + 1;
    } while (param_2 != lVar12);
    puVar6 = (undefined4 *)param_14[2];
    iVar3 = puVar6[param_3];
  }
  lVar7 = param_3 - 1;
  if (param_3 == 0) {
    *puVar6 = 0;
    iVar3 = 0;
  }
  else {
    lVar12 = param_14[10];
    lVar9 = (longlong)*(int *)(*param_14 + (longlong)iVar3 * 4);
    iVar11 = *(int *)(lVar12 + param_3 * 4);
    uVar1 = *(uint *)(lVar12 + lVar7 * 4);
    lVar4 = (longlong)(int)uVar1;
    if (((longlong)(param_3 - lVar9) < param_5) &&
       (local_98 - iVar11 == (longlong)(int)(~uVar1 + iVar11))) {
      if (local_90 != -1) goto LAB_14849d3ca;
    }
    else {
      local_90 = -1;
    }
    if (lVar9 < (longlong)(param_3 - 2)) {
      uVar2 = *(uint *)(lVar12 + 4 + lVar9 * 4);
      uVar5 = (ulonglong)uVar2;
      *(uint *)(lVar12 + lVar7 * 4) = uVar2;
      iVar11 = (iVar11 - uVar1) + uVar2;
      *(int *)(*param_10 + lVar7 * 4) = iVar11;
      *(int *)(param_14[10] + param_3 * 4) = iVar11;
      if (lVar4 < local_98) {
        uVar5 = (ulonglong)(int)uVar2;
        do {
          *(undefined4 *)(param_14[6] + uVar5 * 4) = *(undefined4 *)(param_14[6] + lVar4 * 4);
          lVar4 = lVar4 + 1;
          uVar5 = uVar5 + 1;
        } while (local_98 != lVar4);
      }
      local_98 = (longlong)(int)uVar5;
      puVar6 = (undefined4 *)param_14[2];
    }
    iVar3 = iVar3 + 1;
    puVar6[param_3] = iVar3;
  }
LAB_14849d3ca:
  *(int *)(*param_14 + 4 + (longlong)iVar3 * 4) = iVar8 + 1;
  *(int *)(param_14[2] + 4 + (longlong)iVar8 * 4) = iVar3;
  *(undefined4 *)(*param_10 + param_3 * 4) = (undefined4)local_98;
  *(undefined4 *)(param_14[10] + 4 + (longlong)iVar8 * 4) = (undefined4)local_98;
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14849d4ee FUN_14849d4ee body=1092 status=ok
// SIG undefined FUN_14849d4ee(void)

longlong FUN_14849d4ee(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                      longlong *param_5,longlong *param_6,ulonglong param_7,longlong *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined1 local_121;
  undefined4 local_120 [2];
  longlong local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  longlong *local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_88;
  undefined8 local_80;
  undefined4 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar1 = *(int *)(param_8[2] + param_1 * 4);
  local_148 = param_1;
  local_138 = param_4;
  if (0 < param_2) {
    local_150 = param_8 + 6;
    local_140 = param_8 + 4;
    do {
      uVar4 = (ulonglong)*(int *)(*param_5 + -4 + param_2 * 4);
      iVar2 = *(int *)(param_8[2] + uVar4 * 4);
      if (iVar1 != iVar2) {
        uVar8 = (ulonglong)*(int *)(*param_8 + (longlong)iVar2 * 4);
        uVar6 = uVar8;
        if ((longlong)uVar8 <= (longlong)param_7) {
          uVar6 = param_7;
        }
        lVar11 = uVar6 - uVar8;
        lVar3 = (longlong)*(int *)(param_8[8] + uVar6 * 4);
        local_130 = lVar11 + lVar3;
        uVar9 = (ulonglong)*(int *)(*param_6 + uVar4 * 4);
        if ((longlong)uVar9 <= (longlong)param_7) {
          uVar9 = param_7;
        }
        lVar5 = (longlong)*(int *)(param_8[10] + uVar8 * 4);
        local_158 = (longlong *)(lVar11 + lVar5);
        local_178 = (longlong *)
                    (((*(int *)(param_8[10] + 4 + uVar8 * 4) - lVar5) - lVar11) + ~uVar4 + uVar6);
        local_180 = (longlong *)(*(int *)(param_8[8] + 4 + uVar6 * 4) - lVar3);
        if (uVar9 == uVar4) {
          local_180 = local_150;
          local_188 = local_178;
          local_178 = local_158;
          local_170 = (longlong *)(uVar9 - uVar6);
          FUN_1484a19c8(param_3,local_140,&local_130);
        }
        else {
          local_170 = local_150;
          local_188 = &local_130;
          local_168 = local_158;
          local_160 = (longlong *)(uVar9 - uVar6);
          FUN_1484a1ad4((uVar4 - uVar9) + 1,param_3,local_138,local_140);
        }
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  lVar11 = (longlong)*(int *)(param_8[8] + local_148 * 4);
  uVar6 = (ulonglong)*(int *)(*param_8 + (longlong)iVar1 * 4);
  uVar8 = (*(int *)(param_8[10] + 4 + uVar6 * 4) + lVar11) -
          (longlong)*(int *)(param_8[10] + uVar6 * 4);
  uVar4 = uVar8 + 6;
  if (-1 < (longlong)(uVar8 + 3)) {
    uVar4 = uVar8 + 3;
  }
  uVar4 = uVar4 & 0xfffffffffffffffc;
  local_150 = (longlong *)(uVar4 - uVar8);
  local_158 = param_8 + 4;
  while (plVar10 = local_150, param_8[0xd] < (longlong)uVar4) {
    lVar3 = FUN_14849dfee(local_158,param_8 + 0xd,lVar11,param_8 + 0x16);
    if (lVar3 != 0) goto LAB_14849d76e;
  }
  iVar1 = *(int *)(param_8[10] + uVar6 * 4);
  lVar3 = (longlong)iVar1;
  if (iVar1 < *(int *)(param_8[10] + 4 + uVar6 * 4)) {
    do {
      lVar5 = (longlong)*(int *)(param_8[6] + lVar3 * 4);
      *(undefined4 *)(param_8[4] + lVar11 * 4) = *(undefined4 *)(*param_3 + lVar5 * 4);
      *(undefined4 *)(*param_3 + lVar5 * 4) = 0;
      lVar11 = lVar11 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_8[10] + 4 + uVar6 * 4));
  }
  if (uVar4 != uVar8) {
    local_118 = lVar11 * 4 + param_8[4];
    uStack_68 = &local_118;
    local_110 = (undefined4 *)local_150;
    local_100 = local_158;
    puStack_e8 = (undefined4 *)param_8[5];
    puStack_78 = local_120;
    local_120[0] = 0;
    local_80 = &local_b8;
    local_70 = &local_121;
    local_f8 = lVar11;
    local_b8 = local_118;
    local_a8 = puStack_e8;
    FUN_1484a1d4a();
    lVar11 = lVar11 + (longlong)plVar10;
  }
  *(int *)(param_8[8] + 4 + local_148 * 4) = (int)lVar11;
  if ((longlong)param_7 < (longlong)uVar6) {
    param_7 = uVar6;
  }
  puVar12 = (undefined4 *)(local_148 - param_7);
  if (puVar12 != (undefined4 *)0x0 && (longlong)param_7 <= local_148) {
    lVar11 = param_8[8];
    lVar13 = (longlong)*(int *)(lVar11 + param_7 * 4) + (param_7 - uVar6);
    lVar5 = (uVar6 - local_148) +
            ((longlong)*(int *)(param_8[10] + 4 + uVar6 * 4) -
            (longlong)*(int *)(param_8[10] + uVar6 * 4));
    lVar3 = (longlong)*(int *)(lVar11 + local_148 * 4);
    lVar7 = (param_7 - uVar6) + lVar3;
    plVar10 = (longlong *)(*(int *)(lVar11 + 4 + local_148 * 4) - lVar3);
    local_118 = param_8[4] + lVar13 * 4;
    local_80 = (longlong *)(param_8[4] + lVar7 * 4);
    uStack_68 = local_158;
    local_50 = param_8[5];
    local_110 = puVar12;
    local_108 = puVar12;
    local_100 = plVar10;
    puStack_78 = puVar12;
    local_60 = lVar7;
    FUN_1484a1e02(&local_118,&local_80,&local_80);
    local_118 = param_8[4] + lVar13 * 4 + (longlong)puVar12 * 4;
    local_98 = lVar7 + (longlong)puVar12;
    local_b8 = param_8[4] + local_98 * 4;
    local_a0 = local_158;
    local_88 = param_8[5];
    local_f0 = (undefined4)local_80;
    uStack_ec = local_80._4_4_;
    puStack_e8 = puStack_78;
    local_e0 = (undefined4)local_70;
    uStack_dc = local_70._4_4_;
    uStack_d8 = (undefined4)uStack_68;
    uStack_d4 = uStack_68._4_4_;
    local_d0 = (undefined4)local_60;
    uStack_cc = local_60._4_4_;
    uStack_c8 = uStack_58;
    uStack_c4 = uStack_54;
    local_c0 = local_50;
    local_120[0] = 0xbf800000;
    local_110 = (undefined4 *)lVar5;
    local_108 = puVar12;
    local_100 = plVar10;
    local_b0 = lVar5;
    FUN_1484a20a2(&local_b8,&local_118);
  }
  lVar3 = 0;
LAB_14849d76e:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14849d934 FUN_14849d934 body=512 status=ok
// SIG undefined FUN_14849d934(void)

longlong FUN_14849d934(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar11 = param_7[0x12];
  iVar8 = *(int *)(lVar11 + param_1 * 4);
  if (0 < param_2) {
    iVar2 = *(int *)(param_7[2] + param_1 * 4);
    plVar1 = param_7 + 0x14;
    lVar10 = 0;
    lVar11 = param_2;
    do {
      uVar12 = (ulonglong)*(int *)(*param_3 + -4 + lVar11 * 4);
      iVar3 = *(int *)(param_7[2] + uVar12 * 4);
      if ((iVar2 != iVar3) && (lVar9 = (longlong)*(int *)(*param_4 + uVar12 * 4), lVar9 != -1)) {
        lVar4 = (longlong)*(int *)(*param_7 + (longlong)iVar3 * 4);
        lVar4 = (lVar9 - lVar4) + (longlong)*(int *)(param_7[10] + lVar4 * 4);
        lVar7 = (longlong)iVar8;
        while (*plVar1 < (longlong)((uVar12 - lVar9) + lVar7 + 1)) {
          lVar5 = FUN_14849dfee(param_7 + 0xe,plVar1,lVar7,param_7 + 0x16);
          if (lVar5 != 0) {
            return lVar5;
          }
          lVar5 = FUN_14849e1f2(param_7 + 0x10,plVar1,lVar7,1,param_7 + 0x16);
          if (lVar5 != 0) {
            return lVar5;
          }
        }
        if (-1 < (longlong)(uVar12 - lVar9)) {
          lVar5 = 0;
          do {
            lVar6 = (longlong)*(int *)(param_7[6] + lVar4 * 4);
            *(undefined4 *)(param_7[0x10] + lVar7 * 4) = *(undefined4 *)(*param_5 + lVar6 * 4);
            *(undefined4 *)(param_7[0xe] + lVar7 * 4) = *(undefined4 *)(*param_6 + lVar6 * 4);
            *(undefined4 *)(*param_6 + lVar6 * 4) = 0;
            lVar7 = lVar7 + 1;
            lVar4 = lVar4 + 1;
            lVar5 = lVar5 + -1;
          } while (~uVar12 + lVar9 != lVar5);
          iVar8 = iVar8 - (int)lVar5;
        }
      }
      lVar11 = lVar11 + -1;
      lVar10 = lVar10 + 1;
    } while (lVar10 != param_2);
    lVar11 = param_7[0x12];
  }
  *(int *)(lVar11 + 4 + param_1 * 4) = iVar8;
  return 0;
}



// FUNCTION 14849db34 FUN_14849db34 body=510 status=ok
// SIG undefined FUN_14849db34(void)

longlong FUN_14849db34(longlong param_1,float *param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,longlong *param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  
  lVar11 = (longlong)*(int *)(*param_6 + (longlong)*(int *)(param_6[2] + param_1 * 4) * 4);
  lVar7 = param_1 - lVar11;
  lVar15 = (longlong)*(int *)(param_6[10] + lVar11 * 4);
  lVar6 = *(int *)(param_6[10] + 4 + lVar11 * 4) - lVar15;
  iVar8 = *(int *)(*param_4 + param_1 * 4);
  if (lVar7 < lVar6) {
    lVar3 = param_6[8];
    iVar1 = *(int *)(lVar3 + 4 + lVar11 * 4);
    lVar9 = (longlong)*(int *)(lVar3 + lVar11 * 4);
    lVar4 = param_6[4];
    lVar17 = lVar4 + lVar9 * 4;
    lVar12 = (longlong)*(int *)(lVar3 + param_1 * 4);
    lVar3 = lVar4 + lVar12 * 4;
    lVar16 = lVar15 * 4 + param_6[6];
    lVar14 = -1;
    lVar13 = lVar7;
    lVar15 = lVar7;
    fVar18 = -1.0;
    do {
      fVar19 = ABS(*(float *)(lVar3 + lVar13 * 4));
      lVar5 = lVar13;
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
        lVar5 = lVar15;
      }
      lVar15 = lVar5;
      if (*(int *)(lVar16 + lVar13 * 4) == iVar8) {
        lVar14 = lVar13;
      }
      lVar13 = lVar13 + 1;
      fVar18 = fVar19;
    } while (lVar13 < lVar6);
    if (0.0 < fVar19) {
      if ((-1 < lVar14) &&
         (fVar18 = *(float *)(lVar3 + lVar14 * 4), fVar19 * *param_2 <= ABS(fVar18) && fVar18 != 0.0
         )) {
        lVar15 = lVar14;
      }
      lVar13 = (longlong)*(int *)(lVar16 + lVar15 * 4);
      *param_5 = lVar13;
      *(int *)(*param_3 + lVar13 * 4) = (int)param_1;
      if (lVar15 != lVar7) {
        uVar2 = *(undefined4 *)(lVar16 + lVar15 * 4);
        *(undefined4 *)(lVar16 + lVar15 * 4) = *(undefined4 *)(lVar16 + lVar7 * 4);
        *(undefined4 *)(lVar16 + lVar7 * 4) = uVar2;
        if (-1 < lVar7) {
          lVar13 = (param_1 - lVar11) + 1;
          lVar14 = param_1 * 4 + lVar11 * -4;
          do {
            uVar2 = *(undefined4 *)(lVar17 + lVar15 * 4);
            *(undefined4 *)(lVar17 + lVar15 * 4) = *(undefined4 *)(lVar17 + lVar14);
            *(undefined4 *)(lVar17 + lVar14) = uVar2;
            lVar17 = lVar17 + (longlong)iVar1 * 4 + lVar9 * -4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
      lVar15 = lVar7 + 1;
      if (lVar15 < lVar6) {
        fVar18 = *(float *)(lVar3 + lVar7 * 4);
        pfVar10 = (float *)((param_1 + lVar12) * 4 + lVar11 * -4 + lVar4);
        do {
          pfVar10 = pfVar10 + 1;
          *pfVar10 = *pfVar10 * (1.0 / fVar18);
          lVar15 = lVar15 + 1;
        } while (lVar15 < lVar6);
        return 0;
      }
      return 0;
    }
    if (0.0 <= fVar19) {
      iVar8 = *(int *)(lVar16 + lVar15 * 4);
    }
  }
  *param_5 = (longlong)iVar8;
  *(int *)(*param_3 + (longlong)iVar8 * 4) = (int)param_1;
  return param_1 + 1;
}



// FUNCTION 14849dd32 FUN_14849dd32 body=389 status=ok
// SIG undefined FUN_14849dd32(void)

void FUN_14849dd32(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 < 1) {
    return;
  }
  iVar2 = *(int *)(param_8[2] + param_1 * 4);
  lVar9 = 0;
LAB_14849dd76:
  iVar3 = *(int *)(*param_5 + lVar9 * 4);
  lVar7 = (longlong)iVar3;
  if (((*(int *)(*param_6 + lVar7 * 4) != -1) &&
      (iVar4 = *(int *)(param_8[2] + lVar7 * 4), iVar4 != *(int *)(param_8[2] + 4 + lVar7 * 4))) &&
     (iVar4 != iVar2)) {
    iVar5 = *(int *)(param_8[10] + 4 + lVar7 * 4);
    if ((iVar5 <= *(int *)(*param_7 + lVar7 * 4)) &&
       (iVar6 = *(int *)(param_8[10] + lVar7 * 4), lVar13 = (longlong)iVar6, iVar6 < iVar5)) {
      lVar11 = (longlong)iVar5 + -1;
      lVar8 = lVar13 + -1;
      do {
        if (*(int *)(param_8[6] + 4 + lVar8 * 4) == param_3) {
          iVar4 = *(int *)(*param_8 + (longlong)iVar4 * 4);
          goto LAB_14849ddf9;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar11);
    }
  }
  goto LAB_14849de9a;
LAB_14849ddf9:
  do {
    lVar8 = param_8[6];
    iVar5 = *(int *)(lVar8 + lVar11 * 4);
    if (*(int *)(*param_2 + (longlong)iVar5 * 4) == -1) {
LAB_14849de87:
      lVar11 = lVar11 + -1;
    }
    else {
      iVar6 = *(int *)(lVar8 + lVar13 * 4);
      if (*(int *)(*param_2 + (longlong)iVar6 * 4) == -1) {
        *(int *)(lVar8 + lVar13 * 4) = iVar5;
        *(int *)(lVar8 + lVar11 * 4) = iVar6;
        if (iVar3 == iVar4) {
          lVar10 = (longlong)*(int *)(param_8[8] + lVar7 * 4);
          lVar12 = (longlong)*(int *)(param_8[10] + lVar7 * 4);
          lVar8 = param_8[4] + (lVar11 - lVar12) * 4;
          lVar12 = param_8[4] + (lVar13 - lVar12) * 4;
          uVar1 = *(undefined4 *)(lVar12 + lVar10 * 4);
          *(undefined4 *)(lVar12 + lVar10 * 4) = *(undefined4 *)(lVar8 + lVar10 * 4);
          *(undefined4 *)(lVar8 + lVar10 * 4) = uVar1;
        }
        lVar13 = lVar13 + 1;
        goto LAB_14849de87;
      }
      lVar13 = lVar13 + 1;
    }
  } while (lVar13 <= lVar11);
  *(int *)(*param_7 + lVar7 * 4) = (int)lVar13;
LAB_14849de9a:
  lVar9 = lVar9 + 1;
  if (lVar9 == param_4) {
    return;
  }
  goto LAB_14849dd76;
}



// FUNCTION 14849deb8 FUN_14849deb8 body=144 status=ok
// SIG undefined FUN_14849deb8(void)

void FUN_14849deb8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  *param_2 = 0;
  *param_3 = (longlong)*(int *)(param_4[0x12] + param_1 * 4);
  uVar2 = *(uint *)(param_4[2] + param_1 * 4);
  if (-1 < (int)uVar2 && 0 < param_1) {
    lVar6 = *param_4;
    uVar4 = 0;
    do {
      iVar3 = *(int *)(lVar6 + uVar4 * 4);
      lVar8 = (longlong)iVar3;
      if (iVar3 < *(int *)(lVar6 + 4 + uVar4 * 4)) {
        lVar7 = (longlong)*(int *)(param_4[10] + 4 + lVar8 * 4) -
                (longlong)*(int *)(param_4[10] + lVar8 * 4);
        lVar5 = 1;
        do {
          *param_2 = *param_2 + lVar7;
          *param_3 = *param_3 + lVar5;
          lVar7 = lVar7 + -1;
          lVar6 = *param_4;
          lVar1 = lVar8 + lVar5;
          lVar5 = lVar5 + 1;
        } while (lVar1 < *(int *)(lVar6 + (uVar4 + 1) * 4));
      }
      bVar9 = uVar4 != uVar2;
      uVar4 = uVar4 + 1;
    } while (bVar9);
  }
  return;
}



// FUNCTION 14849df48 FUN_14849df48 body=166 status=ok
// SIG undefined FUN_14849df48(void)

void FUN_14849df48(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = (longlong)*(int *)(param_3[2] + param_1 * 4);
  if (lVar2 < 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = *param_3;
    lVar6 = 0;
    lVar3 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar4 + lVar3 * 4);
      iVar1 = *(int *)(param_3[10] + lVar7 * 4);
      lVar4 = (longlong)iVar1;
      *(int *)(param_3[10] + lVar7 * 4) = (int)lVar6;
      if (iVar1 < *(int *)(param_3[10] + 4 + lVar7 * 4)) {
        lVar6 = (longlong)(int)lVar6;
        do {
          *(undefined4 *)(param_3[6] + lVar6 * 4) =
               *(undefined4 *)(*param_2 + (longlong)*(int *)(param_3[6] + lVar4 * 4) * 4);
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_3[10] + 4 + lVar7 * 4));
      }
      uVar5 = (undefined4)lVar6;
      lVar4 = *param_3;
      iVar1 = *(int *)(lVar4 + 4 + lVar3 * 4);
      while (lVar7 = lVar7 + 1, lVar7 < iVar1) {
        *(undefined4 *)(param_3[10] + lVar7 * 4) = uVar5;
        lVar4 = *param_3;
        iVar1 = *(int *)(lVar4 + (lVar3 + 1) * 4);
      }
      bVar8 = lVar3 != lVar2;
      lVar3 = lVar3 + 1;
    } while (bVar8);
  }
  *(undefined4 *)(param_3[10] + param_1 * 4) = uVar5;
  return;
}



// FUNCTION 14849dfee FUN_14849dfee body=515 status=ok
// SIG undefined FUN_14849dfee(void)

longlong FUN_14849dfee(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_e9;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_90;
  undefined8 local_88 [2];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *param_2;
  lVar2 = lVar1;
  if (*param_4 != 0) {
    lVar2 = lVar1 + 1;
    if (lVar1 + 1 <= (longlong)((float)lVar1 * 1.5)) {
      lVar2 = (longlong)((float)lVar1 * 1.5);
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  if (0 < param_3) {
    local_c0 = *param_1;
    local_a0 = 0;
    local_90 = param_1[1];
    local_b8 = param_3;
    local_a8 = param_1;
    FUN_14849e421(&local_108,&local_c0,&local_e8);
  }
  FUN_146ddd2fa(param_1,lVar2);
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    if (*param_4 == 0) {
      lVar2 = -1;
    }
    else {
      fVar4 = 1.5;
      lVar3 = 0xb;
      do {
        fVar4 = (fVar4 + 1.0) * 0.5;
        lVar1 = (longlong)((float)*param_2 * fVar4);
        lVar2 = *param_2 + 1;
        if (lVar2 <= lVar1) {
          lVar2 = lVar1;
        }
        FUN_146ddd2fa(param_1,lVar2);
        lVar1 = param_1[1];
        if (lVar1 != 0) goto LAB_14849e0ad;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
LAB_14849e0ad:
    if (0 < param_3) {
      local_c0 = *param_1;
      local_d0 = &local_c0;
      local_a0 = 0;
      local_e0 = &local_c8;
      local_c8 = local_108;
      local_e8 = local_88;
      local_d8 = &local_e9;
      local_b8 = param_3;
      local_a8 = param_1;
      local_90 = lVar1;
      local_88[0] = local_c0;
      local_78 = lVar1;
      FUN_14849e51e();
    }
    *param_2 = lVar2;
    if (*param_4 != 0) {
      *param_4 = *param_4 + 1;
    }
    lVar2 = 0;
  }
  FUN_1400020a8(local_108);
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14849e1f2 FUN_14849e1f2 body=558 status=ok
// SIG undefined FUN_14849e1f2(void)

ulonglong FUN_14849e1f2(undefined8 *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_e9;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_90;
  undefined8 local_88 [2];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *param_2;
  uVar3 = uVar2;
  if ((param_4 == 0) && (*param_5 != 0)) {
    uVar3 = uVar2 + 1;
    if ((longlong)(uVar2 + 1) <= (longlong)((float)(longlong)uVar2 * 1.5)) {
      uVar3 = (longlong)((float)(longlong)uVar2 * 1.5);
    }
  }
  local_108 = 0;
  uStack_100 = 0;
  if (0 < param_3) {
    local_c0 = *param_1;
    local_a0 = 0;
    local_90 = param_1[1];
    local_b8 = param_3;
    local_a8 = param_1;
    FUN_1483c8acc(&local_108,&local_c0,&local_e8);
  }
  FUN_141729ef6(param_1,uVar3);
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    if (*param_5 == 0 || param_4 != 0) {
      uVar3 = uVar3 | -(ulonglong)(*param_5 == 0);
    }
    else {
      fVar5 = 1.5;
      lVar4 = 0xb;
      do {
        fVar5 = (fVar5 + 1.0) * 0.5;
        uVar2 = (ulonglong)((float)(longlong)*param_2 * fVar5);
        uVar3 = *param_2 + 1;
        if ((longlong)uVar3 <= (longlong)uVar2) {
          uVar3 = uVar2;
        }
        FUN_141729ef6(param_1,uVar3);
        lVar1 = param_1[1];
        if (lVar1 != 0) goto LAB_14849e291;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  else {
LAB_14849e291:
    if (0 < param_3) {
      local_c0 = *param_1;
      local_d0 = &local_c0;
      local_a0 = 0;
      local_e0 = &local_c8;
      local_c8 = local_108;
      local_e8 = local_88;
      local_d8 = &local_e9;
      local_b8 = param_3;
      local_a8 = param_1;
      local_90 = lVar1;
      local_88[0] = local_c0;
      local_78 = lVar1;
      FUN_1483c8bc8();
    }
    *param_2 = uVar3;
    if (*param_5 != 0) {
      *param_5 = *param_5 + 1;
    }
    uVar3 = 0;
  }
  FUN_1400020a8(local_108);
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14849e421 FUN_14849e421 body=142 status=ok
// SIG undefined FUN_14849e421(void)

void FUN_14849e421(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = *(undefined8 *)(param_2[3] + 8);
  if (param_1[1] != param_2[1]) {
    FUN_146dddaba(param_1,param_2[1],1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_14849e4b0();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14849e4b0 FUN_14849e4b0 body=110 status=ok
// SIG undefined FUN_14849e4b0(void)

void FUN_14849e4b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 + 3;
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 4);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 4;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 14849e51e FUN_14849e51e body=148 status=ok
// SIG undefined FUN_14849e51e(void)

void FUN_14849e51e(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_14849e5b2(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_14849e5b2(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 14849e5b2 FUN_14849e5b2 body=38 status=ok
// SIG undefined FUN_14849e5b2(void)

void FUN_14849e5b2(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 14849e5d8 FUN_14849e5d8 body=510 status=ok
// SIG undefined FUN_14849e5d8(void)

void FUN_14849e5d8(int param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong param_13,longlong *param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  *(int *)(*param_8 + param_13 * 4) = param_1;
  iVar2 = *(int *)(*param_2 + param_13 * 4);
  if ((longlong)iVar2 == -1) {
    lVar4 = *param_12;
    *param_12 = lVar4 + 1;
    *(int *)(*param_4 + lVar4 * 4) = (int)param_13;
  }
  else {
    lVar4 = (longlong)
            *(int *)(*param_11 + 4 + (longlong)*(int *)(param_11[2] + (longlong)iVar2 * 4) * 4);
    iVar7 = *(int *)(*param_6 + -4 + lVar4 * 4);
    if (iVar7 == -1) {
      lVar8 = lVar4 + -1;
      *(undefined4 *)(*param_9 + -4 + lVar4 * 4) = 0xffffffff;
      *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
      piVar5 = (int *)(param_11[10] + lVar8 * 4);
      piVar3 = (int *)(lVar8 * 4 + *param_7);
      while( true ) {
        iVar7 = (int)lVar8;
        iVar2 = *piVar5;
        lVar4 = (longlong)*piVar3;
        if (iVar2 < *piVar3) {
          lVar6 = (longlong)iVar2;
          do {
            iVar7 = *(int *)(param_11[6] + lVar6 * 4);
            iVar2 = iVar2 + 1;
            lVar6 = (longlong)iVar7;
            if (*(int *)(*param_8 + lVar6 * 4) != param_1) {
              *(int *)(*param_8 + lVar6 * 4) = param_1;
              iVar1 = *(int *)(*param_2 + lVar6 * 4);
              if ((longlong)iVar1 == -1) {
                lVar6 = *param_12;
                *param_12 = lVar6 + 1;
                *(int *)(*param_4 + lVar6 * 4) = iVar7;
              }
              else {
                lVar6 = (longlong)
                        *(int *)(*param_11 + 4 +
                                (longlong)*(int *)(param_11[2] + (longlong)iVar1 * 4) * 4);
                iVar7 = *(int *)(*param_6 + -4 + lVar6 * 4);
                if (iVar7 == -1) {
                  iVar7 = (int)lVar8;
                  lVar8 = lVar6 + -1;
                  *(int *)(*param_10 + (longlong)iVar7 * 4) = iVar2;
                  *(int *)(*param_9 + -4 + lVar6 * 4) = iVar7;
                  *(int *)(*param_6 + -4 + lVar6 * 4) = iVar1;
                  iVar2 = *(int *)(param_11[10] + -4 + lVar6 * 4);
                  lVar4 = (longlong)*(int *)(*param_7 + -4 + lVar6 * 4);
                }
                else if (iVar1 < iVar7) {
                  *(int *)(*param_6 + -4 + lVar6 * 4) = iVar1;
                }
              }
            }
            iVar7 = (int)lVar8;
            lVar6 = (longlong)iVar2;
          } while (lVar6 < lVar4);
        }
        lVar4 = (longlong)iVar7;
        if ((longlong)*(int *)(param_14[1] + lVar4 * 4) < *param_14) {
          *(int *)(param_14[1] + lVar4 * 4) = param_1;
          *(int *)(*param_5 + *param_3 * 4) = iVar7;
          *param_3 = *param_3 + 1;
        }
        lVar8 = (longlong)*(int *)(*param_9 + lVar4 * 4);
        if (lVar8 == -1) break;
        piVar5 = (int *)(*param_10 + lVar8 * 4);
        piVar3 = (int *)(lVar8 * 4 + *param_7);
      }
    }
    else if (iVar2 < iVar7) {
      *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
    }
  }
  return;
}



// FUNCTION 14849e7d6 FUN_14849e7d6 body=5221 status=ok
// SIG undefined FUN_14849e7d6(void)

void FUN_14849e7d6(ulonglong param_1,longlong param_2,ulonglong param_3,float *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  float *pfVar23;
  float *pfVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auStack_408 [39];
  char local_3e1;
  float *local_3e0;
  float *local_3d8;
  float *local_3d0;
  float *local_3c8;
  float *local_3c0;
  float *local_3b8;
  ulonglong local_3b0;
  ulonglong local_3a8;
  ulonglong local_3a0;
  float *local_398;
  float *local_390;
  undefined8 ***local_388;
  float *local_380;
  float *local_378;
  float *local_370;
  float *local_368;
  float *local_360;
  float *local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  longlong local_320;
  longlong local_318;
  ulonglong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  undefined8 ***local_2d0;
  float *local_2c8;
  float *local_2c0;
  longlong local_2b8;
  float *local_2b0;
  float *local_2a8;
  undefined4 *local_2a0;
  float *local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  longlong local_278;
  ulonglong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  longlong local_228;
  ulonglong local_220;
  undefined8 ***local_218;
  longlong local_210;
  float *local_208;
  ulonglong local_200;
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  undefined1 local_1d9;
  undefined8 ***local_1d8;
  float *local_1d0;
  float local_1b8 [4];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  float *local_190;
  float *local_188;
  undefined4 local_17c;
  float *local_170;
  float *local_160;
  undefined8 local_158;
  undefined4 local_14c;
  float *local_148;
  float *local_140;
  float *local_138;
  undefined8 ***local_118;
  float *local_110;
  undefined1 *local_108;
  undefined8 ***local_100;
  undefined8 ***local_f8 [2];
  float *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_3b0 = param_3 + 3;
  if (-1 < (longlong)param_3) {
    local_3b0 = param_3;
  }
  uVar14 = param_1;
  if ((((ulonglong)param_4 & 3) == 0) &&
     (uVar14 = (ulonglong)(-((uint)((ulonglong)param_4 >> 2) & 0x3fffffff) & 3),
     (longlong)param_1 <= (longlong)uVar14)) {
    uVar14 = param_1;
  }
  if (0 < (longlong)uVar14) {
    uVar26 = 0;
    pfVar7 = param_4;
    do {
      if (0 < param_2) {
        lVar20 = param_8 + uVar26 * 4;
        lVar11 = 0;
        lVar18 = param_6;
        do {
          fVar28 = *(float *)(lVar20 + lVar11 * param_9 * 4);
          if (0 < (longlong)param_3) {
            uVar22 = 0;
            pfVar10 = pfVar7;
            do {
              fVar28 = fVar28 + *(float *)(lVar18 + uVar22 * 4) * *pfVar10;
              uVar22 = uVar22 + 1;
              pfVar10 = pfVar10 + param_5;
            } while (param_3 != uVar22);
          }
          *(float *)(lVar20 + lVar11 * param_9 * 4) = fVar28;
          lVar11 = lVar11 + 1;
          lVar18 = lVar18 + param_7 * 4;
        } while (lVar11 != param_2);
      }
      uVar26 = uVar26 + 1;
      pfVar7 = pfVar7 + 1;
    } while (uVar26 != uVar14);
  }
  lVar20 = param_1 - uVar14;
  local_3b8 = param_4;
  local_2e0 = param_3;
  if (lVar20 != 0 && (longlong)uVar14 <= (longlong)param_1) {
    local_3b0 = local_3b0 & 0xfffffffffffffffc;
    local_220 = param_2 - (param_2 >> 0x3f) & 0xfffffffffffffffe;
    local_3e0 = (float *)CONCAT71(local_3e0._1_7_,param_2 <= (longlong)local_220);
    local_280 = (float *)(param_6 + (param_2 + -1) * param_7 * 4);
    local_278 = param_3 - local_3b0;
    local_288 = param_4 + local_3b0 * param_5;
    local_290 = param_4 + (local_3b0 | 1) * param_5;
    local_258 = param_9 * 4;
    local_2f8 = local_258 + uVar14 * 4;
    local_300 = param_8 + 0x70 + local_2f8;
    local_308 = param_8 + uVar14 * 4 + 0x70;
    local_2f8 = local_2f8 + param_8;
    local_388 = (undefined8 ***)(param_8 + uVar14 * 4);
    local_320 = uVar14 * 4 + (param_2 / 2) * param_9 * 8;
    local_2e8 = param_8 + local_320 + 0x70;
    local_320 = param_8 + local_320;
    local_298 = param_4 + (local_3b0 | 2) * param_5;
    local_3e1 = (longlong)param_3 < 4 || param_2 <= (longlong)local_220;
    local_228 = param_9 * 8;
    local_2d8 = param_5 << 4;
    local_368 = param_4 + param_5 * 3 + uVar14;
    local_330 = local_368 + 0x20;
    local_370 = param_4 + param_5 * 2 + uVar14;
    local_338 = local_370 + 0x20;
    local_378 = param_4 + uVar14 + param_5;
    local_340 = local_378 + 0x20;
    local_380 = param_4 + uVar14;
    local_328 = local_380 + 0x20;
    local_348 = param_4 + param_5 * 3 + uVar14 + 4;
    local_350 = param_4 + param_5 * 2 + uVar14 + 4;
    local_358 = param_4 + uVar14 + param_5 + 4;
    local_2a0 = (undefined4 *)(param_6 + local_3b0 * 4);
    local_360 = param_4 + uVar14 + 4;
    local_260 = param_7 * 4;
    local_270 = param_1;
    local_268 = param_2;
    do {
      lVar11 = local_268;
      lVar18 = local_278;
      local_318 = 0x400;
      if (lVar20 < 0x400) {
        local_318 = lVar20;
      }
      local_2c0 = (float *)(local_270 - uVar14);
      local_3d0 = (float *)&DAT_00000400;
      if ((longlong)local_2c0 < 0x400) {
        local_3d0 = local_2c0;
      }
      pfVar10 = (float *)((longlong)local_3d0 + 3);
      pfVar7 = (float *)((longlong)local_3d0 + 0x1f);
      if (-1 < (longlong)local_3d0) {
        pfVar10 = local_3d0;
        pfVar7 = local_3d0;
      }
      local_3a8 = (ulonglong)pfVar7 & 0xffffffffffffffe0;
      local_3d8 = (float *)((longlong)pfVar10 >> 2);
      local_3a0 = (ulonglong)pfVar10 & 0xfffffffffffffffc;
      local_2c8 = local_3b8 + uVar14;
      if (1 < param_2) {
        local_3e0 = (float *)(local_318 - local_3a0);
        lVar8 = local_2f8 + (longlong)local_3d8 * 0x10;
        ppppuVar12 = (undefined8 ****)(local_388 + (longlong)local_3d8 * 2);
        local_238 = local_368 + (longlong)local_3d8 * 4;
        local_240 = local_370 + (longlong)local_3d8 * 4;
        local_248 = local_378 + (longlong)local_3d8 * 4;
        local_230 = local_380 + (longlong)local_3d8 * 4;
        local_2d0 = local_388;
        local_310 = 0;
        lVar6 = local_308;
        lVar9 = local_2f8;
        lVar16 = local_300;
        do {
          local_2b8 = lVar9;
          if (3 < (longlong)local_2e0) {
            local_3c8 = (float *)(param_6 + (local_310 | 1) * param_7 * 4);
            local_398 = local_360;
            local_2a8 = local_358;
            local_2b0 = local_348;
            local_3c0 = local_230;
            pfVar7 = local_338;
            pfVar10 = local_350;
            pfVar13 = (float *)(param_6 + local_310 * param_7 * 4);
            pfVar15 = local_328;
            pfVar1 = local_238;
            pfVar19 = local_340;
            uVar26 = 0;
            pfVar17 = local_240;
            pfVar23 = local_330;
            pfVar5 = local_248;
            do {
              local_1e8 = pfVar5;
              local_1f0 = pfVar17;
              local_200 = uVar26;
              local_1f8 = pfVar1;
              local_208 = pfVar13;
              local_390 = pfVar10;
              fVar28 = *local_208;
              fVar2 = local_208[1];
              fVar3 = local_208[2];
              fVar4 = local_208[3];
              fVar49 = *local_3c8;
              fVar50 = local_3c8[1];
              fVar51 = local_3c8[2];
              fVar52 = local_3c8[3];
              pfVar10 = local_2c8 + local_200 * param_5;
              fVar45 = *pfVar10;
              fVar46 = pfVar10[1];
              fVar47 = pfVar10[2];
              fVar48 = pfVar10[3];
              pfVar10 = local_2c8 + (local_200 | 1) * param_5;
              fVar37 = *pfVar10;
              fVar39 = pfVar10[1];
              fVar41 = pfVar10[2];
              fVar43 = pfVar10[3];
              pfVar10 = local_2c8 + (local_200 | 2) * param_5;
              fVar29 = *pfVar10;
              fVar31 = pfVar10[1];
              fVar33 = pfVar10[2];
              fVar35 = pfVar10[3];
              pfVar10 = local_2c8 + (local_200 | 3) * param_5;
              fVar57 = *pfVar10;
              fVar59 = pfVar10[1];
              fVar61 = pfVar10[2];
              fVar30 = pfVar10[3];
              uVar26 = local_3a8;
              if (0x1f < (longlong)local_2c0) {
                lVar9 = 0;
                do {
                  pfVar10 = (float *)(lVar6 + -0x70 + lVar9 * 4);
                  fVar32 = pfVar10[1];
                  fVar34 = pfVar10[2];
                  fVar36 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x70 + lVar9 * 4);
                  fVar38 = *pfVar13;
                  fVar40 = pfVar13[1];
                  fVar42 = pfVar13[2];
                  fVar44 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -0x1c;
                  fVar53 = *pfVar13;
                  fVar54 = pfVar13[1];
                  fVar55 = pfVar13[2];
                  fVar56 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -0x1c;
                  fVar58 = *pfVar13;
                  fVar60 = pfVar13[1];
                  fVar62 = pfVar13[2];
                  fVar63 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -0x1c;
                  fVar64 = *pfVar13;
                  fVar65 = pfVar13[1];
                  fVar66 = pfVar13[2];
                  fVar67 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -0x1c;
                  fVar68 = *pfVar13;
                  fVar69 = pfVar13[1];
                  fVar70 = pfVar13[2];
                  fVar71 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x70 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar57 +
                             fVar3 * fVar29 + fVar2 * fVar37 + fVar28 * fVar45 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar59 +
                               fVar3 * fVar31 + fVar2 * fVar39 + fVar28 * fVar46 + fVar32;
                  pfVar13[2] = fVar4 * fVar61 +
                               fVar3 * fVar33 + fVar2 * fVar41 + fVar28 * fVar47 + fVar34;
                  pfVar13[3] = fVar4 * fVar30 +
                               fVar3 * fVar35 + fVar2 * fVar43 + fVar28 * fVar48 + fVar36;
                  pfVar10 = (float *)(lVar16 + -0x70 + lVar9 * 4);
                  *pfVar10 = fVar57 * fVar52 +
                             fVar29 * fVar51 + fVar37 * fVar50 + fVar45 * fVar49 + fVar38;
                  pfVar10[1] = fVar59 * fVar52 +
                               fVar31 * fVar51 + fVar39 * fVar50 + fVar46 * fVar49 + fVar40;
                  pfVar10[2] = fVar61 * fVar52 +
                               fVar33 * fVar51 + fVar41 * fVar50 + fVar47 * fVar49 + fVar42;
                  pfVar10[3] = fVar30 * fVar52 +
                               fVar35 * fVar51 + fVar43 * fVar50 + fVar48 * fVar49 + fVar44;
                  pfVar10 = (float *)(lVar6 + -0x60 + lVar9 * 4);
                  fVar45 = pfVar10[1];
                  fVar46 = pfVar10[2];
                  fVar47 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x60 + lVar9 * 4);
                  fVar48 = *pfVar13;
                  fVar37 = pfVar13[1];
                  fVar39 = pfVar13[2];
                  fVar41 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -0x18;
                  fVar43 = *pfVar13;
                  fVar29 = pfVar13[1];
                  fVar31 = pfVar13[2];
                  fVar33 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -0x18;
                  fVar35 = *pfVar13;
                  fVar57 = pfVar13[1];
                  fVar59 = pfVar13[2];
                  fVar61 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -0x18;
                  fVar30 = *pfVar13;
                  fVar32 = pfVar13[1];
                  fVar34 = pfVar13[2];
                  fVar36 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -0x18;
                  fVar38 = *pfVar13;
                  fVar40 = pfVar13[1];
                  fVar42 = pfVar13[2];
                  fVar44 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x60 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar68 +
                             fVar3 * fVar64 + fVar2 * fVar58 + fVar28 * fVar53 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar69 +
                               fVar3 * fVar65 + fVar2 * fVar60 + fVar28 * fVar54 + fVar45;
                  pfVar13[2] = fVar4 * fVar70 +
                               fVar3 * fVar66 + fVar2 * fVar62 + fVar28 * fVar55 + fVar46;
                  pfVar13[3] = fVar4 * fVar71 +
                               fVar3 * fVar67 + fVar2 * fVar63 + fVar28 * fVar56 + fVar47;
                  pfVar10 = (float *)(lVar16 + -0x60 + lVar9 * 4);
                  *pfVar10 = fVar68 * fVar52 +
                             fVar64 * fVar51 + fVar58 * fVar50 + fVar53 * fVar49 + fVar48;
                  pfVar10[1] = fVar69 * fVar52 +
                               fVar65 * fVar51 + fVar60 * fVar50 + fVar54 * fVar49 + fVar37;
                  pfVar10[2] = fVar70 * fVar52 +
                               fVar66 * fVar51 + fVar62 * fVar50 + fVar55 * fVar49 + fVar39;
                  pfVar10[3] = fVar71 * fVar52 +
                               fVar67 * fVar51 + fVar63 * fVar50 + fVar56 * fVar49 + fVar41;
                  pfVar10 = (float *)(lVar6 + -0x50 + lVar9 * 4);
                  fVar45 = pfVar10[1];
                  fVar46 = pfVar10[2];
                  fVar47 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x50 + lVar9 * 4);
                  fVar48 = *pfVar13;
                  fVar37 = pfVar13[1];
                  fVar39 = pfVar13[2];
                  fVar41 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -0x14;
                  fVar53 = *pfVar13;
                  fVar54 = pfVar13[1];
                  fVar55 = pfVar13[2];
                  fVar56 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -0x14;
                  fVar58 = *pfVar13;
                  fVar60 = pfVar13[1];
                  fVar62 = pfVar13[2];
                  fVar63 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -0x14;
                  fVar64 = *pfVar13;
                  fVar65 = pfVar13[1];
                  fVar66 = pfVar13[2];
                  fVar67 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -0x14;
                  fVar68 = *pfVar13;
                  fVar69 = pfVar13[1];
                  fVar70 = pfVar13[2];
                  fVar71 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x50 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar38 +
                             fVar3 * fVar30 + fVar2 * fVar35 + fVar28 * fVar43 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar40 +
                               fVar3 * fVar32 + fVar2 * fVar57 + fVar28 * fVar29 + fVar45;
                  pfVar13[2] = fVar4 * fVar42 +
                               fVar3 * fVar34 + fVar2 * fVar59 + fVar28 * fVar31 + fVar46;
                  pfVar13[3] = fVar4 * fVar44 +
                               fVar3 * fVar36 + fVar2 * fVar61 + fVar28 * fVar33 + fVar47;
                  pfVar10 = (float *)(lVar16 + -0x50 + lVar9 * 4);
                  *pfVar10 = fVar38 * fVar52 +
                             fVar30 * fVar51 + fVar35 * fVar50 + fVar43 * fVar49 + fVar48;
                  pfVar10[1] = fVar40 * fVar52 +
                               fVar32 * fVar51 + fVar57 * fVar50 + fVar29 * fVar49 + fVar37;
                  pfVar10[2] = fVar42 * fVar52 +
                               fVar34 * fVar51 + fVar59 * fVar50 + fVar31 * fVar49 + fVar39;
                  pfVar10[3] = fVar44 * fVar52 +
                               fVar36 * fVar51 + fVar61 * fVar50 + fVar33 * fVar49 + fVar41;
                  pfVar10 = (float *)(lVar6 + -0x40 + lVar9 * 4);
                  fVar45 = pfVar10[1];
                  fVar46 = pfVar10[2];
                  fVar47 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x40 + lVar9 * 4);
                  fVar48 = *pfVar13;
                  fVar37 = pfVar13[1];
                  fVar39 = pfVar13[2];
                  fVar41 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -0x10;
                  fVar43 = *pfVar13;
                  fVar29 = pfVar13[1];
                  fVar31 = pfVar13[2];
                  fVar33 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -0x10;
                  fVar35 = *pfVar13;
                  fVar57 = pfVar13[1];
                  fVar59 = pfVar13[2];
                  fVar61 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -0x10;
                  fVar30 = *pfVar13;
                  fVar32 = pfVar13[1];
                  fVar34 = pfVar13[2];
                  fVar36 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -0x10;
                  fVar38 = *pfVar13;
                  fVar40 = pfVar13[1];
                  fVar42 = pfVar13[2];
                  fVar44 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x40 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar68 +
                             fVar3 * fVar64 + fVar2 * fVar58 + fVar28 * fVar53 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar69 +
                               fVar3 * fVar65 + fVar2 * fVar60 + fVar28 * fVar54 + fVar45;
                  pfVar13[2] = fVar4 * fVar70 +
                               fVar3 * fVar66 + fVar2 * fVar62 + fVar28 * fVar55 + fVar46;
                  pfVar13[3] = fVar4 * fVar71 +
                               fVar3 * fVar67 + fVar2 * fVar63 + fVar28 * fVar56 + fVar47;
                  pfVar10 = (float *)(lVar16 + -0x40 + lVar9 * 4);
                  *pfVar10 = fVar68 * fVar52 +
                             fVar64 * fVar51 + fVar58 * fVar50 + fVar53 * fVar49 + fVar48;
                  pfVar10[1] = fVar69 * fVar52 +
                               fVar65 * fVar51 + fVar60 * fVar50 + fVar54 * fVar49 + fVar37;
                  pfVar10[2] = fVar70 * fVar52 +
                               fVar66 * fVar51 + fVar62 * fVar50 + fVar55 * fVar49 + fVar39;
                  pfVar10[3] = fVar71 * fVar52 +
                               fVar67 * fVar51 + fVar63 * fVar50 + fVar56 * fVar49 + fVar41;
                  pfVar10 = (float *)(lVar6 + -0x30 + lVar9 * 4);
                  fVar45 = pfVar10[1];
                  fVar46 = pfVar10[2];
                  fVar47 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x30 + lVar9 * 4);
                  fVar48 = *pfVar13;
                  fVar37 = pfVar13[1];
                  fVar39 = pfVar13[2];
                  fVar41 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -0xc;
                  fVar53 = *pfVar13;
                  fVar54 = pfVar13[1];
                  fVar55 = pfVar13[2];
                  fVar56 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -0xc;
                  fVar58 = *pfVar13;
                  fVar60 = pfVar13[1];
                  fVar62 = pfVar13[2];
                  fVar63 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -0xc;
                  fVar64 = *pfVar13;
                  fVar65 = pfVar13[1];
                  fVar66 = pfVar13[2];
                  fVar67 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -0xc;
                  fVar68 = *pfVar13;
                  fVar69 = pfVar13[1];
                  fVar70 = pfVar13[2];
                  fVar71 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x30 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar38 +
                             fVar3 * fVar30 + fVar2 * fVar35 + fVar28 * fVar43 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar40 +
                               fVar3 * fVar32 + fVar2 * fVar57 + fVar28 * fVar29 + fVar45;
                  pfVar13[2] = fVar4 * fVar42 +
                               fVar3 * fVar34 + fVar2 * fVar59 + fVar28 * fVar31 + fVar46;
                  pfVar13[3] = fVar4 * fVar44 +
                               fVar3 * fVar36 + fVar2 * fVar61 + fVar28 * fVar33 + fVar47;
                  pfVar10 = (float *)(lVar16 + -0x30 + lVar9 * 4);
                  *pfVar10 = fVar38 * fVar52 +
                             fVar30 * fVar51 + fVar35 * fVar50 + fVar43 * fVar49 + fVar48;
                  pfVar10[1] = fVar40 * fVar52 +
                               fVar32 * fVar51 + fVar57 * fVar50 + fVar29 * fVar49 + fVar37;
                  pfVar10[2] = fVar42 * fVar52 +
                               fVar34 * fVar51 + fVar59 * fVar50 + fVar31 * fVar49 + fVar39;
                  pfVar10[3] = fVar44 * fVar52 +
                               fVar36 * fVar51 + fVar61 * fVar50 + fVar33 * fVar49 + fVar41;
                  pfVar10 = (float *)(lVar6 + -0x20 + lVar9 * 4);
                  fVar45 = pfVar10[1];
                  fVar46 = pfVar10[2];
                  fVar47 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x20 + lVar9 * 4);
                  fVar48 = *pfVar13;
                  fVar37 = pfVar13[1];
                  fVar39 = pfVar13[2];
                  fVar41 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -8;
                  fVar43 = *pfVar13;
                  fVar29 = pfVar13[1];
                  fVar31 = pfVar13[2];
                  fVar33 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -8;
                  fVar35 = *pfVar13;
                  fVar57 = pfVar13[1];
                  fVar59 = pfVar13[2];
                  fVar61 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -8;
                  fVar30 = *pfVar13;
                  fVar32 = pfVar13[1];
                  fVar34 = pfVar13[2];
                  fVar36 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -8;
                  fVar38 = *pfVar13;
                  fVar40 = pfVar13[1];
                  fVar42 = pfVar13[2];
                  fVar44 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x20 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar68 +
                             fVar3 * fVar64 + fVar2 * fVar58 + fVar28 * fVar53 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar69 +
                               fVar3 * fVar65 + fVar2 * fVar60 + fVar28 * fVar54 + fVar45;
                  pfVar13[2] = fVar4 * fVar70 +
                               fVar3 * fVar66 + fVar2 * fVar62 + fVar28 * fVar55 + fVar46;
                  pfVar13[3] = fVar4 * fVar71 +
                               fVar3 * fVar67 + fVar2 * fVar63 + fVar28 * fVar56 + fVar47;
                  pfVar10 = (float *)(lVar16 + -0x20 + lVar9 * 4);
                  *pfVar10 = fVar68 * fVar52 +
                             fVar64 * fVar51 + fVar58 * fVar50 + fVar53 * fVar49 + fVar48;
                  pfVar10[1] = fVar69 * fVar52 +
                               fVar65 * fVar51 + fVar60 * fVar50 + fVar54 * fVar49 + fVar37;
                  pfVar10[2] = fVar70 * fVar52 +
                               fVar66 * fVar51 + fVar62 * fVar50 + fVar55 * fVar49 + fVar39;
                  pfVar10[3] = fVar71 * fVar52 +
                               fVar67 * fVar51 + fVar63 * fVar50 + fVar56 * fVar49 + fVar41;
                  pfVar10 = (float *)(lVar6 + -0x10 + lVar9 * 4);
                  fVar45 = pfVar10[1];
                  fVar46 = pfVar10[2];
                  fVar47 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + -0x10 + lVar9 * 4);
                  fVar48 = *pfVar13;
                  fVar37 = pfVar13[1];
                  fVar39 = pfVar13[2];
                  fVar41 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9 + -4;
                  fVar53 = *pfVar13;
                  fVar54 = pfVar13[1];
                  fVar55 = pfVar13[2];
                  fVar56 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9 + -4;
                  fVar58 = *pfVar13;
                  fVar60 = pfVar13[1];
                  fVar62 = pfVar13[2];
                  fVar63 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9 + -4;
                  fVar64 = *pfVar13;
                  fVar65 = pfVar13[1];
                  fVar66 = pfVar13[2];
                  fVar67 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9 + -4;
                  fVar68 = *pfVar13;
                  fVar69 = pfVar13[1];
                  fVar70 = pfVar13[2];
                  fVar71 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + -0x10 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar38 +
                             fVar3 * fVar30 + fVar2 * fVar35 + fVar28 * fVar43 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar40 +
                               fVar3 * fVar32 + fVar2 * fVar57 + fVar28 * fVar29 + fVar45;
                  pfVar13[2] = fVar4 * fVar42 +
                               fVar3 * fVar34 + fVar2 * fVar59 + fVar28 * fVar31 + fVar46;
                  pfVar13[3] = fVar4 * fVar44 +
                               fVar3 * fVar36 + fVar2 * fVar61 + fVar28 * fVar33 + fVar47;
                  pfVar10 = (float *)(lVar16 + -0x10 + lVar9 * 4);
                  *pfVar10 = fVar38 * fVar52 +
                             fVar30 * fVar51 + fVar35 * fVar50 + fVar43 * fVar49 + fVar48;
                  pfVar10[1] = fVar40 * fVar52 +
                               fVar32 * fVar51 + fVar57 * fVar50 + fVar29 * fVar49 + fVar37;
                  pfVar10[2] = fVar42 * fVar52 +
                               fVar34 * fVar51 + fVar59 * fVar50 + fVar31 * fVar49 + fVar39;
                  pfVar10[3] = fVar44 * fVar52 +
                               fVar36 * fVar51 + fVar61 * fVar50 + fVar33 * fVar49 + fVar41;
                  pfVar10 = (float *)(lVar6 + lVar9 * 4);
                  fVar32 = pfVar10[1];
                  fVar34 = pfVar10[2];
                  fVar36 = pfVar10[3];
                  pfVar13 = (float *)(lVar16 + lVar9 * 4);
                  fVar38 = *pfVar13;
                  fVar40 = pfVar13[1];
                  fVar42 = pfVar13[2];
                  fVar44 = pfVar13[3];
                  pfVar13 = pfVar15 + lVar9;
                  fVar45 = *pfVar13;
                  fVar46 = pfVar13[1];
                  fVar47 = pfVar13[2];
                  fVar48 = pfVar13[3];
                  pfVar13 = pfVar19 + lVar9;
                  fVar37 = *pfVar13;
                  fVar39 = pfVar13[1];
                  fVar41 = pfVar13[2];
                  fVar43 = pfVar13[3];
                  pfVar13 = pfVar7 + lVar9;
                  fVar29 = *pfVar13;
                  fVar31 = pfVar13[1];
                  fVar33 = pfVar13[2];
                  fVar35 = pfVar13[3];
                  pfVar13 = pfVar23 + lVar9;
                  fVar57 = *pfVar13;
                  fVar59 = pfVar13[1];
                  fVar61 = pfVar13[2];
                  fVar30 = pfVar13[3];
                  pfVar13 = (float *)(lVar6 + lVar9 * 4);
                  *pfVar13 = fVar4 * fVar68 +
                             fVar3 * fVar64 + fVar2 * fVar58 + fVar28 * fVar53 + *pfVar10;
                  pfVar13[1] = fVar4 * fVar69 +
                               fVar3 * fVar65 + fVar2 * fVar60 + fVar28 * fVar54 + fVar32;
                  pfVar13[2] = fVar4 * fVar70 +
                               fVar3 * fVar66 + fVar2 * fVar62 + fVar28 * fVar55 + fVar34;
                  pfVar13[3] = fVar4 * fVar71 +
                               fVar3 * fVar67 + fVar2 * fVar63 + fVar28 * fVar56 + fVar36;
                  pfVar10 = (float *)(lVar16 + lVar9 * 4);
                  *pfVar10 = fVar68 * fVar52 +
                             fVar64 * fVar51 + fVar58 * fVar50 + fVar53 * fVar49 + fVar38;
                  pfVar10[1] = fVar69 * fVar52 +
                               fVar65 * fVar51 + fVar60 * fVar50 + fVar54 * fVar49 + fVar40;
                  pfVar10[2] = fVar70 * fVar52 +
                               fVar66 * fVar51 + fVar62 * fVar50 + fVar55 * fVar49 + fVar42;
                  pfVar10[3] = fVar71 * fVar52 +
                               fVar67 * fVar51 + fVar63 * fVar50 + fVar56 * fVar49 + fVar44;
                  lVar9 = lVar9 + 0x20;
                } while (lVar9 < (longlong)local_3a8);
              }
              for (; (longlong)uVar26 < (longlong)local_3a0; uVar26 = uVar26 + 4) {
                fVar72 = fVar28 * fVar45;
                fVar74 = fVar28 * fVar46;
                fVar76 = fVar28 * fVar47;
                fVar78 = fVar28 * fVar48;
                pfVar10 = (float *)((longlong)local_2d0 + uVar26 * 4);
                fVar32 = pfVar10[1];
                fVar34 = pfVar10[2];
                fVar36 = pfVar10[3];
                fVar68 = fVar45 * fVar49;
                fVar69 = fVar46 * fVar49;
                fVar70 = fVar47 * fVar49;
                fVar71 = fVar48 * fVar49;
                pfVar13 = (float *)(local_2b8 + uVar26 * 4);
                fVar38 = *pfVar13;
                fVar40 = pfVar13[1];
                fVar42 = pfVar13[2];
                fVar44 = pfVar13[3];
                fVar80 = fVar2 * fVar37;
                fVar82 = fVar2 * fVar39;
                fVar84 = fVar2 * fVar41;
                fVar86 = fVar2 * fVar43;
                fVar64 = fVar37 * fVar50;
                fVar65 = fVar39 * fVar50;
                fVar66 = fVar41 * fVar50;
                fVar67 = fVar43 * fVar50;
                pfVar13 = local_398 + uVar26;
                fVar45 = *pfVar13;
                fVar46 = pfVar13[1];
                fVar47 = pfVar13[2];
                fVar48 = pfVar13[3];
                fVar73 = fVar3 * fVar29;
                fVar75 = fVar3 * fVar31;
                fVar77 = fVar3 * fVar33;
                fVar79 = fVar3 * fVar35;
                fVar53 = fVar29 * fVar51;
                fVar54 = fVar31 * fVar51;
                fVar55 = fVar33 * fVar51;
                fVar56 = fVar35 * fVar51;
                pfVar13 = local_2a8 + uVar26;
                fVar37 = *pfVar13;
                fVar39 = pfVar13[1];
                fVar41 = pfVar13[2];
                fVar43 = pfVar13[3];
                fVar81 = fVar4 * fVar57;
                fVar83 = fVar4 * fVar59;
                fVar85 = fVar4 * fVar61;
                fVar87 = fVar4 * fVar30;
                fVar58 = fVar57 * fVar52;
                fVar60 = fVar59 * fVar52;
                fVar62 = fVar61 * fVar52;
                fVar63 = fVar30 * fVar52;
                pfVar13 = local_390 + uVar26;
                fVar29 = *pfVar13;
                fVar31 = pfVar13[1];
                fVar33 = pfVar13[2];
                fVar35 = pfVar13[3];
                pfVar13 = local_2b0 + uVar26;
                fVar57 = *pfVar13;
                fVar59 = pfVar13[1];
                fVar61 = pfVar13[2];
                fVar30 = pfVar13[3];
                pfVar13 = (float *)((longlong)local_2d0 + uVar26 * 4);
                *pfVar13 = fVar81 + fVar73 + fVar80 + fVar72 + *pfVar10;
                pfVar13[1] = fVar83 + fVar75 + fVar82 + fVar74 + fVar32;
                pfVar13[2] = fVar85 + fVar77 + fVar84 + fVar76 + fVar34;
                pfVar13[3] = fVar87 + fVar79 + fVar86 + fVar78 + fVar36;
                pfVar10 = (float *)(local_2b8 + uVar26 * 4);
                *pfVar10 = fVar58 + fVar53 + fVar64 + fVar68 + fVar38;
                pfVar10[1] = fVar60 + fVar54 + fVar65 + fVar69 + fVar40;
                pfVar10[2] = fVar62 + fVar55 + fVar66 + fVar70 + fVar42;
                pfVar10[3] = fVar63 + fVar56 + fVar67 + fVar71 + fVar44;
              }
              if ((longlong)local_3a0 < (longlong)local_3d0) {
                pfVar10 = (float *)0x0;
                do {
                  *(float *)((longlong)ppppuVar12 + (longlong)pfVar10 * 4) =
                       local_1f8[(longlong)pfVar10] * local_208[3] +
                       local_1f0[(longlong)pfVar10] * local_208[2] +
                       local_3c0[(longlong)pfVar10] * *local_208 +
                       local_1e8[(longlong)pfVar10] * local_208[1] +
                       *(float *)((longlong)ppppuVar12 + (longlong)pfVar10 * 4);
                  *(float *)(lVar8 + (longlong)pfVar10 * 4) =
                       local_1f8[(longlong)pfVar10] * local_3c8[3] +
                       local_1f0[(longlong)pfVar10] * local_3c8[2] +
                       local_3c0[(longlong)pfVar10] * *local_3c8 +
                       local_1e8[(longlong)pfVar10] * local_3c8[1] +
                       *(float *)(lVar8 + (longlong)pfVar10 * 4);
                  pfVar10 = (float *)((longlong)pfVar10 + 1);
                } while (local_3e0 != pfVar10);
              }
              local_3c8 = local_3c8 + 4;
              pfVar23 = (float *)((longlong)pfVar23 + local_2d8);
              pfVar7 = (float *)((longlong)pfVar7 + local_2d8);
              pfVar19 = (float *)((longlong)pfVar19 + local_2d8);
              pfVar15 = (float *)((longlong)pfVar15 + local_2d8);
              local_2b0 = (float *)((longlong)local_2b0 + local_2d8);
              local_2a8 = (float *)((longlong)local_2a8 + local_2d8);
              local_398 = (float *)((longlong)local_398 + local_2d8);
              local_3c0 = (float *)((longlong)local_3c0 + local_2d8);
              pfVar10 = (float *)((longlong)local_390 + local_2d8);
              pfVar13 = local_208 + 4;
              pfVar1 = (float *)((longlong)local_1f8 + local_2d8);
              uVar26 = local_200 + 4;
              pfVar17 = (float *)((longlong)local_1f0 + local_2d8);
              pfVar5 = (float *)((longlong)local_1e8 + local_2d8);
              local_218 = ppppuVar12;
              local_210 = lVar8;
            } while ((longlong)(local_200 + 4) < (longlong)local_3b0);
          }
          local_310 = local_310 + 2;
          lVar16 = lVar16 + local_228;
          lVar6 = lVar6 + local_228;
          local_2d0 = (undefined8 ***)((longlong)local_2d0 + local_228);
          lVar8 = lVar8 + local_228;
          ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + local_228);
          lVar9 = local_2b8 + local_228;
        } while ((longlong)local_310 < (longlong)local_220);
      }
      if (local_3e1 == '\0') {
        local_318 = local_318 - local_3a0;
        lVar16 = local_320 + (longlong)local_3d8 * 0x10;
        lVar8 = (longlong)local_3d8 * 4;
        lVar6 = (longlong)local_3d8 * 4;
        lVar9 = (longlong)local_3d8 * 4;
        local_3d8 = local_380 + (longlong)local_3d8 * 4;
        local_3e0 = local_360;
        pfVar7 = local_340;
        pfVar10 = (float *)0x0;
        pfVar13 = local_348;
        pfVar15 = local_328;
        pfVar1 = local_368 + lVar8;
        pfVar19 = local_378 + lVar9;
        pfVar17 = local_358;
        pfVar23 = local_350;
        pfVar5 = local_370 + lVar6;
        pfVar21 = local_280;
        pfVar24 = local_338;
        pfVar27 = local_330;
        do {
          local_3c8 = pfVar5;
          local_390 = pfVar19;
          local_3c0 = pfVar1;
          local_398 = pfVar10;
          fVar28 = *pfVar21;
          fVar2 = pfVar21[1];
          fVar3 = pfVar21[2];
          fVar4 = pfVar21[3];
          pfVar10 = local_2c8 + (longlong)local_398 * param_5;
          fVar49 = *pfVar10;
          fVar50 = pfVar10[1];
          fVar51 = pfVar10[2];
          fVar52 = pfVar10[3];
          pfVar10 = local_2c8 + ((ulonglong)local_398 | 1) * param_5;
          fVar45 = *pfVar10;
          fVar46 = pfVar10[1];
          fVar47 = pfVar10[2];
          fVar48 = pfVar10[3];
          pfVar10 = local_2c8 + ((ulonglong)local_398 | 2) * param_5;
          fVar37 = *pfVar10;
          fVar39 = pfVar10[1];
          fVar41 = pfVar10[2];
          fVar43 = pfVar10[3];
          pfVar10 = local_2c8 + ((ulonglong)local_398 | 3) * param_5;
          fVar29 = *pfVar10;
          fVar31 = pfVar10[1];
          fVar33 = pfVar10[2];
          fVar35 = pfVar10[3];
          uVar26 = local_3a8;
          if (0x1f < (longlong)local_2c0) {
            lVar8 = 0;
            do {
              pfVar10 = (float *)(local_2e8 + -0x70 + lVar8 * 4);
              fVar57 = pfVar10[1];
              fVar59 = pfVar10[2];
              fVar61 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -0x1c;
              fVar30 = *pfVar1;
              fVar32 = pfVar1[1];
              fVar34 = pfVar1[2];
              fVar36 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -0x1c;
              fVar38 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar42 = pfVar1[2];
              fVar44 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -0x1c;
              fVar53 = *pfVar1;
              fVar54 = pfVar1[1];
              fVar55 = pfVar1[2];
              fVar56 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -0x1c;
              fVar58 = *pfVar1;
              fVar60 = pfVar1[1];
              fVar62 = pfVar1[2];
              fVar63 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x70 + lVar8 * 4);
              *pfVar1 = fVar29 * fVar4 +
                        fVar37 * fVar3 + fVar45 * fVar2 + fVar49 * fVar28 + *pfVar10;
              pfVar1[1] = fVar31 * fVar4 +
                          fVar39 * fVar3 + fVar46 * fVar2 + fVar50 * fVar28 + fVar57;
              pfVar1[2] = fVar33 * fVar4 +
                          fVar41 * fVar3 + fVar47 * fVar2 + fVar51 * fVar28 + fVar59;
              pfVar1[3] = fVar35 * fVar4 +
                          fVar43 * fVar3 + fVar48 * fVar2 + fVar52 * fVar28 + fVar61;
              pfVar10 = (float *)(local_2e8 + -0x60 + lVar8 * 4);
              fVar49 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar51 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -0x18;
              fVar52 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar46 = pfVar1[2];
              fVar47 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -0x18;
              fVar48 = *pfVar1;
              fVar37 = pfVar1[1];
              fVar39 = pfVar1[2];
              fVar41 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -0x18;
              fVar43 = *pfVar1;
              fVar29 = pfVar1[1];
              fVar31 = pfVar1[2];
              fVar33 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -0x18;
              fVar35 = *pfVar1;
              fVar57 = pfVar1[1];
              fVar59 = pfVar1[2];
              fVar61 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x60 + lVar8 * 4);
              *pfVar1 = fVar30 * fVar28 + *pfVar10 + fVar38 * fVar2 + fVar53 * fVar3 +
                        fVar58 * fVar4;
              pfVar1[1] = fVar32 * fVar28 + fVar49 + fVar40 * fVar2 + fVar54 * fVar3 +
                          fVar60 * fVar4;
              pfVar1[2] = fVar34 * fVar28 + fVar50 + fVar42 * fVar2 + fVar55 * fVar3 +
                          fVar62 * fVar4;
              pfVar1[3] = fVar36 * fVar28 + fVar51 + fVar44 * fVar2 + fVar56 * fVar3 +
                          fVar63 * fVar4;
              pfVar10 = (float *)(local_2e8 + -0x50 + lVar8 * 4);
              fVar49 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar51 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -0x14;
              fVar30 = *pfVar1;
              fVar32 = pfVar1[1];
              fVar34 = pfVar1[2];
              fVar36 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -0x14;
              fVar38 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar42 = pfVar1[2];
              fVar44 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -0x14;
              fVar53 = *pfVar1;
              fVar54 = pfVar1[1];
              fVar55 = pfVar1[2];
              fVar56 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -0x14;
              fVar58 = *pfVar1;
              fVar60 = pfVar1[1];
              fVar62 = pfVar1[2];
              fVar63 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x50 + lVar8 * 4);
              *pfVar1 = fVar52 * fVar28 + *pfVar10 + fVar48 * fVar2 + fVar43 * fVar3 +
                        fVar35 * fVar4;
              pfVar1[1] = fVar45 * fVar28 + fVar49 + fVar37 * fVar2 + fVar29 * fVar3 +
                          fVar57 * fVar4;
              pfVar1[2] = fVar46 * fVar28 + fVar50 + fVar39 * fVar2 + fVar31 * fVar3 +
                          fVar59 * fVar4;
              pfVar1[3] = fVar47 * fVar28 + fVar51 + fVar41 * fVar2 + fVar33 * fVar3 +
                          fVar61 * fVar4;
              pfVar10 = (float *)(local_2e8 + -0x40 + lVar8 * 4);
              fVar49 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar51 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -0x10;
              fVar52 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar46 = pfVar1[2];
              fVar47 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -0x10;
              fVar48 = *pfVar1;
              fVar37 = pfVar1[1];
              fVar39 = pfVar1[2];
              fVar41 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -0x10;
              fVar43 = *pfVar1;
              fVar29 = pfVar1[1];
              fVar31 = pfVar1[2];
              fVar33 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -0x10;
              fVar35 = *pfVar1;
              fVar57 = pfVar1[1];
              fVar59 = pfVar1[2];
              fVar61 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x40 + lVar8 * 4);
              *pfVar1 = fVar30 * fVar28 + *pfVar10 + fVar38 * fVar2 + fVar53 * fVar3 +
                        fVar58 * fVar4;
              pfVar1[1] = fVar32 * fVar28 + fVar49 + fVar40 * fVar2 + fVar54 * fVar3 +
                          fVar60 * fVar4;
              pfVar1[2] = fVar34 * fVar28 + fVar50 + fVar42 * fVar2 + fVar55 * fVar3 +
                          fVar62 * fVar4;
              pfVar1[3] = fVar36 * fVar28 + fVar51 + fVar44 * fVar2 + fVar56 * fVar3 +
                          fVar63 * fVar4;
              pfVar10 = (float *)(local_2e8 + -0x30 + lVar8 * 4);
              fVar49 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar51 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -0xc;
              fVar30 = *pfVar1;
              fVar32 = pfVar1[1];
              fVar34 = pfVar1[2];
              fVar36 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -0xc;
              fVar38 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar42 = pfVar1[2];
              fVar44 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -0xc;
              fVar53 = *pfVar1;
              fVar54 = pfVar1[1];
              fVar55 = pfVar1[2];
              fVar56 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -0xc;
              fVar58 = *pfVar1;
              fVar60 = pfVar1[1];
              fVar62 = pfVar1[2];
              fVar63 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x30 + lVar8 * 4);
              *pfVar1 = fVar52 * fVar28 + *pfVar10 + fVar48 * fVar2 + fVar43 * fVar3 +
                        fVar35 * fVar4;
              pfVar1[1] = fVar45 * fVar28 + fVar49 + fVar37 * fVar2 + fVar29 * fVar3 +
                          fVar57 * fVar4;
              pfVar1[2] = fVar46 * fVar28 + fVar50 + fVar39 * fVar2 + fVar31 * fVar3 +
                          fVar59 * fVar4;
              pfVar1[3] = fVar47 * fVar28 + fVar51 + fVar41 * fVar2 + fVar33 * fVar3 +
                          fVar61 * fVar4;
              pfVar10 = (float *)(local_2e8 + -0x20 + lVar8 * 4);
              fVar49 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar51 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -8;
              fVar52 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar46 = pfVar1[2];
              fVar47 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -8;
              fVar48 = *pfVar1;
              fVar37 = pfVar1[1];
              fVar39 = pfVar1[2];
              fVar41 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -8;
              fVar43 = *pfVar1;
              fVar29 = pfVar1[1];
              fVar31 = pfVar1[2];
              fVar33 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -8;
              fVar35 = *pfVar1;
              fVar57 = pfVar1[1];
              fVar59 = pfVar1[2];
              fVar61 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x20 + lVar8 * 4);
              *pfVar1 = fVar30 * fVar28 + *pfVar10 + fVar38 * fVar2 + fVar53 * fVar3 +
                        fVar58 * fVar4;
              pfVar1[1] = fVar32 * fVar28 + fVar49 + fVar40 * fVar2 + fVar54 * fVar3 +
                          fVar60 * fVar4;
              pfVar1[2] = fVar34 * fVar28 + fVar50 + fVar42 * fVar2 + fVar55 * fVar3 +
                          fVar62 * fVar4;
              pfVar1[3] = fVar36 * fVar28 + fVar51 + fVar44 * fVar2 + fVar56 * fVar3 +
                          fVar63 * fVar4;
              pfVar10 = (float *)(local_2e8 + -0x10 + lVar8 * 4);
              fVar49 = pfVar10[1];
              fVar50 = pfVar10[2];
              fVar51 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8 + -4;
              fVar30 = *pfVar1;
              fVar32 = pfVar1[1];
              fVar34 = pfVar1[2];
              fVar36 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8 + -4;
              fVar38 = *pfVar1;
              fVar40 = pfVar1[1];
              fVar42 = pfVar1[2];
              fVar44 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8 + -4;
              fVar53 = *pfVar1;
              fVar54 = pfVar1[1];
              fVar55 = pfVar1[2];
              fVar56 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8 + -4;
              fVar58 = *pfVar1;
              fVar60 = pfVar1[1];
              fVar62 = pfVar1[2];
              fVar63 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + -0x10 + lVar8 * 4);
              *pfVar1 = fVar52 * fVar28 + *pfVar10 + fVar48 * fVar2 + fVar43 * fVar3 +
                        fVar35 * fVar4;
              pfVar1[1] = fVar45 * fVar28 + fVar49 + fVar37 * fVar2 + fVar29 * fVar3 +
                          fVar57 * fVar4;
              pfVar1[2] = fVar46 * fVar28 + fVar50 + fVar39 * fVar2 + fVar31 * fVar3 +
                          fVar59 * fVar4;
              pfVar1[3] = fVar47 * fVar28 + fVar51 + fVar41 * fVar2 + fVar33 * fVar3 +
                          fVar61 * fVar4;
              pfVar10 = (float *)(local_2e8 + lVar8 * 4);
              fVar57 = pfVar10[1];
              fVar59 = pfVar10[2];
              fVar61 = pfVar10[3];
              pfVar1 = pfVar15 + lVar8;
              fVar49 = *pfVar1;
              fVar50 = pfVar1[1];
              fVar51 = pfVar1[2];
              fVar52 = pfVar1[3];
              pfVar1 = pfVar7 + lVar8;
              fVar45 = *pfVar1;
              fVar46 = pfVar1[1];
              fVar47 = pfVar1[2];
              fVar48 = pfVar1[3];
              pfVar1 = pfVar24 + lVar8;
              fVar37 = *pfVar1;
              fVar39 = pfVar1[1];
              fVar41 = pfVar1[2];
              fVar43 = pfVar1[3];
              pfVar1 = pfVar27 + lVar8;
              fVar29 = *pfVar1;
              fVar31 = pfVar1[1];
              fVar33 = pfVar1[2];
              fVar35 = pfVar1[3];
              pfVar1 = (float *)(local_2e8 + lVar8 * 4);
              *pfVar1 = fVar30 * fVar28 + *pfVar10 + fVar38 * fVar2 + fVar53 * fVar3 +
                        fVar58 * fVar4;
              pfVar1[1] = fVar32 * fVar28 + fVar57 + fVar40 * fVar2 + fVar54 * fVar3 +
                          fVar60 * fVar4;
              pfVar1[2] = fVar34 * fVar28 + fVar59 + fVar42 * fVar2 + fVar55 * fVar3 +
                          fVar62 * fVar4;
              pfVar1[3] = fVar36 * fVar28 + fVar61 + fVar44 * fVar2 + fVar56 * fVar3 +
                          fVar63 * fVar4;
              lVar8 = lVar8 + 0x20;
            } while (lVar8 < (longlong)local_3a8);
          }
          for (; (longlong)uVar26 < (longlong)local_3a0; uVar26 = uVar26 + 4) {
            fVar58 = fVar49 * fVar28;
            fVar60 = fVar50 * fVar28;
            fVar62 = fVar51 * fVar28;
            fVar63 = fVar52 * fVar28;
            pfVar10 = (float *)(local_320 + uVar26 * 4);
            fVar57 = pfVar10[1];
            fVar59 = pfVar10[2];
            fVar61 = pfVar10[3];
            fVar53 = fVar45 * fVar2;
            fVar54 = fVar46 * fVar2;
            fVar55 = fVar47 * fVar2;
            fVar56 = fVar48 * fVar2;
            pfVar1 = local_3e0 + uVar26;
            fVar49 = *pfVar1;
            fVar50 = pfVar1[1];
            fVar51 = pfVar1[2];
            fVar52 = pfVar1[3];
            fVar38 = fVar37 * fVar3;
            fVar40 = fVar39 * fVar3;
            fVar42 = fVar41 * fVar3;
            fVar44 = fVar43 * fVar3;
            pfVar1 = pfVar17 + uVar26;
            fVar45 = *pfVar1;
            fVar46 = pfVar1[1];
            fVar47 = pfVar1[2];
            fVar48 = pfVar1[3];
            fVar30 = fVar29 * fVar4;
            fVar32 = fVar31 * fVar4;
            fVar34 = fVar33 * fVar4;
            fVar36 = fVar35 * fVar4;
            pfVar1 = pfVar23 + uVar26;
            fVar37 = *pfVar1;
            fVar39 = pfVar1[1];
            fVar41 = pfVar1[2];
            fVar43 = pfVar1[3];
            pfVar1 = pfVar13 + uVar26;
            fVar29 = *pfVar1;
            fVar31 = pfVar1[1];
            fVar33 = pfVar1[2];
            fVar35 = pfVar1[3];
            pfVar1 = (float *)(local_320 + uVar26 * 4);
            *pfVar1 = fVar30 + fVar38 + fVar53 + fVar58 + *pfVar10;
            pfVar1[1] = fVar32 + fVar40 + fVar54 + fVar60 + fVar57;
            pfVar1[2] = fVar34 + fVar42 + fVar55 + fVar62 + fVar59;
            pfVar1[3] = fVar36 + fVar44 + fVar56 + fVar63 + fVar61;
          }
          if ((longlong)local_3a0 < (longlong)local_3d0) {
            lVar8 = 0;
            do {
              *(float *)(lVar16 + lVar8 * 4) =
                   local_3c0[lVar8] * pfVar21[3] +
                   local_3c8[lVar8] * pfVar21[2] +
                   local_3d8[lVar8] * *pfVar21 + local_390[lVar8] * pfVar21[1] +
                   *(float *)(lVar16 + lVar8 * 4);
              lVar8 = lVar8 + 1;
            } while (local_318 != lVar8);
          }
          pfVar21 = pfVar21 + 4;
          pfVar27 = (float *)((longlong)pfVar27 + local_2d8);
          pfVar24 = (float *)((longlong)pfVar24 + local_2d8);
          pfVar7 = (float *)((longlong)pfVar7 + local_2d8);
          pfVar15 = (float *)((longlong)pfVar15 + local_2d8);
          pfVar13 = (float *)((longlong)pfVar13 + local_2d8);
          pfVar23 = (float *)((longlong)pfVar23 + local_2d8);
          pfVar17 = (float *)((longlong)pfVar17 + local_2d8);
          local_3e0 = (float *)((longlong)local_3e0 + local_2d8);
          local_3d8 = (float *)((longlong)local_3d8 + local_2d8);
          pfVar10 = local_398 + 1;
          pfVar1 = (float *)((longlong)local_3c0 + local_2d8);
          pfVar19 = (float *)((longlong)local_390 + local_2d8);
          pfVar5 = (float *)((longlong)local_3c8 + local_2d8);
        } while ((longlong)(local_398 + 1) < (longlong)local_3b0);
      }
      local_2f0 = uVar14;
      local_250 = lVar20;
      if ((0 < local_278) && (0 < local_268)) {
        pfVar7 = local_288 + uVar14;
        pfVar10 = local_290 + uVar14;
        pfVar13 = local_298 + uVar14;
        lVar20 = local_268;
        puVar25 = local_2a0;
        ppppuVar12 = (undefined8 ****)local_388;
        do {
          local_118 = ppppuVar12;
          if (lVar18 == 2) {
            local_14c = puVar25[1];
            local_1a0 = local_3d0;
            local_198 = (float *)CONCAT44(*puVar25,(undefined4)local_198);
            local_188 = local_3d0;
            local_158 = local_3d0;
            local_140 = local_3d0;
            local_110 = local_3d0;
            local_190 = pfVar7;
            local_148 = pfVar10;
            FUN_1484a095b(&local_118,local_1b8,&local_1d8);
          }
          else {
            local_198 = pfVar7;
            if (lVar18 == 1) {
              local_1a8 = local_3d0;
              local_1a0 = (float *)CONCAT44(*puVar25,(undefined4)local_1a0);
              local_190 = local_3d0;
              local_110 = local_3d0;
              FUN_1484a085b(&local_118,local_1b8,&local_1d8);
            }
            else {
              local_17c = puVar25[1];
              local_1d0 = local_3d0;
              local_1a8 = (float *)CONCAT44(*puVar25,(undefined4)local_1a8);
              local_188 = local_3d0;
              local_160 = local_3d0;
              local_158 = (float *)CONCAT44(puVar25[2],(undefined4)local_158);
              local_138 = local_3d0;
              local_e8 = local_3d0;
              local_118 = local_f8;
              local_110 = local_1b8;
              local_108 = &local_1d9;
              local_100 = &local_1d8;
              local_1d8 = ppppuVar12;
              local_170 = pfVar10;
              local_148 = pfVar13;
              local_f8[0] = ppppuVar12;
              FUN_1484a0aa6(&local_118);
            }
          }
          ppppuVar12 = (undefined8 ****)((longlong)ppppuVar12 + local_258);
          puVar25 = (undefined4 *)((longlong)puVar25 + local_260);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      uVar14 = local_2f0 + 0x400;
      lVar20 = local_250 + -0x400;
      local_300 = local_300 + 0x1000;
      local_308 = local_308 + 0x1000;
      local_330 = local_330 + 0x400;
      local_338 = local_338 + 0x400;
      local_340 = local_340 + 0x400;
      local_328 = local_328 + 0x400;
      local_348 = local_348 + 0x400;
      local_350 = local_350 + 0x400;
      local_358 = local_358 + 0x400;
      local_360 = local_360 + 0x400;
      local_2f8 = local_2f8 + 0x1000;
      local_388 = local_388 + 0x200;
      local_368 = local_368 + 0x400;
      local_370 = local_370 + 0x400;
      local_378 = local_378 + 0x400;
      local_380 = local_380 + 0x400;
      local_2e8 = local_2e8 + 0x1000;
      local_320 = local_320 + 0x1000;
      param_2 = lVar11;
    } while ((longlong)uVar14 < (longlong)local_270);
  }
  if ((local_e0 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14849fc3c FUN_14849fc3c body=267 status=ok
// SIG undefined FUN_14849fc3c(void)

void FUN_14849fc3c(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  
  fVar1 = *(float *)(*param_1 + (longlong)*(int *)(*param_6 + param_7 * 4 + param_8 * 4) * 4);
  lVar12 = (param_4 + 1) * param_8;
  lVar13 = *param_3;
  *param_3 = lVar12 + lVar13 + 1;
  pfVar11 = (float *)((lVar12 + lVar13) * 4 + 4 + *param_2);
  piVar7 = (int *)(param_7 * 4 + *param_6 + param_8 * 4 + 4);
  if (param_5 < 2) {
    lVar13 = 0;
  }
  else {
    fVar14 = -fVar1;
    piVar5 = piVar7;
    pfVar6 = pfVar11;
    lVar12 = 0;
    do {
      pfVar10 = pfVar6;
      piVar9 = piVar5;
      piVar5 = piVar7 + lVar12;
      iVar4 = piVar5[1];
      lVar13 = *param_1;
      pfVar6 = pfVar11 + lVar12 + 2;
      fVar2 = pfVar6[-1];
      fVar3 = *(float *)(lVar13 + (longlong)iVar4 * 4);
      *(float *)(lVar13 + (longlong)*piVar5 * 4) =
           pfVar6[-2] * fVar14 + *(float *)(lVar13 + (longlong)*piVar5 * 4);
      *(float *)(*param_1 + (longlong)iVar4 * 4) = fVar2 * fVar14 + fVar3;
      lVar13 = lVar12 + 2;
      lVar8 = lVar12 + 3;
      piVar5 = piVar5 + 2;
      lVar12 = lVar13;
    } while (lVar8 < param_5);
    piVar7 = piVar9 + 2;
    pfVar11 = pfVar10 + 2;
  }
  if (lVar13 < param_5) {
    *(float *)(*param_1 + (longlong)*piVar7 * 4) =
         *(float *)(*param_1 + (longlong)*piVar7 * 4) - fVar1 * *pfVar11;
  }
  return;
}



// FUNCTION 14849fd48 FUN_14849fd48 body=588 status=ok
// SIG undefined FUN_14849fd48(void)

void FUN_14849fd48(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  longlong param_9)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  longlong local_e8;
  float *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  ulonglong local_c8;
  float *local_c0;
  undefined1 local_b1;
  longlong *local_b0;
  undefined4 *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined4 local_90 [2];
  longlong local_88;
  longlong local_80;
  ulonglong local_70;
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_8 = param_8 + param_9;
  lVar2 = param_8 * 4;
  lVar7 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    *(undefined4 *)(*param_2 + lVar7 * 4) =
         *(undefined4 *)(*param_1 + (longlong)*(int *)(*param_7 + lVar2) * 4);
    lVar2 = lVar2 + 4;
    lVar7 = 1;
    uVar8 = 0;
    bVar1 = false;
  } while (bVar3);
  lVar2 = (param_5 + 1) * param_9 + *param_4;
  *param_4 = lVar2;
  local_c0 = (float *)*param_2;
  local_c0[1] = local_c0[1] - *(float *)(*param_3 + 4 + lVar2 * 4) * *local_c0;
  lVar2 = *param_4;
  *param_4 = lVar2 + 2;
  local_70 = param_6 + 6;
  if (-1 < (longlong)(param_6 + 3U)) {
    local_70 = param_6 + 3U;
  }
  local_70 = local_70 & 0xfffffffffffffffc;
  uVar5 = lVar2 * 4 + 8 + *param_3;
  uVar6 = *param_2 + 8;
  uVar4 = 4;
  if ((uVar6 & 3) == 0) {
    uVar4 = (ulonglong)(-((uint)(uVar6 >> 2) & 0x3fffffff) & 3);
  }
  uVar6 = (ulonglong)((uint)(uVar5 >> 2) & 3);
  if ((uVar5 & 3) != 0) {
    uVar6 = uVar8;
  }
  local_88 = *param_2 + 8 + uVar4 * 4 + uVar6 * 4;
  local_98 = &local_88;
  local_80 = param_6;
  local_a8 = local_90;
  local_90[0] = 0;
  local_b0 = local_60;
  local_a0 = &local_b1;
  local_60[0] = local_88;
  local_50 = local_70;
  FUN_1484a0b84();
  local_c8 = local_70;
  local_d0 = local_88;
  local_e0 = local_c0;
  local_e8 = param_5;
  local_d8 = 2;
  FUN_14849e7d6(local_80,1,2,uVar5);
  bVar1 = true;
  do {
    bVar3 = bVar1;
    lVar2 = param_8 * 4;
    param_8 = param_8 + 1;
    *(undefined4 *)(*param_1 + (longlong)*(int *)(*param_7 + lVar2) * 4) =
         *(undefined4 *)(*param_2 + uVar8 * 4);
    uVar8 = 1;
    bVar1 = false;
  } while (bVar3);
  if (0 < param_6) {
    lVar2 = 0;
    do {
      lVar7 = (longlong)*(int *)(*param_7 + (param_8 + lVar2) * 4);
      *(float *)(*param_1 + lVar7 * 4) =
           *(float *)(*param_1 + lVar7 * 4) - *(float *)(local_88 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (param_6 != lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14849ff96 FUN_14849ff96 body=593 status=ok
// SIG undefined FUN_14849ff96(void)

void FUN_14849ff96(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong *param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_d8;
  undefined1 local_c9;
  longlong *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_78 [3];
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = param_9 + param_8;
  lVar2 = 0;
  do {
    *(undefined4 *)(*param_2 + lVar2 * 4) =
         *(undefined4 *)
          (*param_1 + (longlong)*(int *)(*param_7 + param_8 * 4 + param_9 * 4 + lVar2 * 4) * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  lVar2 = (param_5 + 1) * param_9 + *param_4;
  *param_4 = lVar2;
  local_a0 = lVar2 * 4 + *param_3;
  local_d8 = *param_2;
  local_90 = param_5;
  local_78[0] = local_d8;
  FUN_1484a0c3c(&local_a0,local_78,local_78);
  lVar2 = *param_4;
  *param_4 = lVar2 + 3;
  local_88 = param_6 + 6;
  if (-1 < (longlong)(param_6 + 3U)) {
    local_88 = param_6 + 3U;
  }
  local_88 = local_88 & 0xfffffffffffffffc;
  uVar7 = lVar2 * 4 + 0xc + *param_3;
  uVar5 = *param_2 + 0xc;
  uVar3 = 4;
  if ((uVar5 & 3) == 0) {
    uVar3 = (ulonglong)(-((uint)(uVar5 >> 2) & 0x3fffffff) & 3);
  }
  uVar6 = 0;
  uVar5 = (ulonglong)((uint)(uVar7 >> 2) & 3);
  if ((uVar7 & 3) != 0) {
    uVar5 = uVar6;
  }
  local_a0 = *param_2 + uVar3 * 4 + 0xc + uVar5 * 4;
  local_98 = param_6;
  local_c0 = local_a8;
  local_a8[0] = 0;
  local_c8 = local_60;
  local_b8 = &local_c9;
  local_b0 = &local_a0;
  local_60[0] = local_a0;
  local_50 = local_88;
  FUN_1484a0b84();
  local_e8 = local_88;
  local_f0 = local_a0;
  local_100 = local_d8;
  local_108 = param_5;
  local_f8 = 3;
  FUN_14849e7d6(local_98,1,3,uVar7);
  do {
    lVar2 = lVar4 * 4;
    lVar4 = lVar4 + 1;
    *(undefined4 *)(*param_1 + (longlong)*(int *)(*param_7 + lVar2) * 4) =
         *(undefined4 *)(*param_2 + uVar6 * 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 != 3);
  if (0 < param_6) {
    lVar2 = 0;
    do {
      lVar1 = (longlong)*(int *)(*param_7 + (lVar2 + lVar4) * 4);
      *(float *)(*param_1 + lVar1 * 4) =
           *(float *)(*param_1 + lVar1 * 4) - *(float *)(local_a0 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (param_6 != lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a01e8 FUN_1484a01e8 body=628 status=ok
// SIG undefined FUN_1484a01e8(void)

void FUN_1484a01e8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong *param_8,
                  longlong param_9,longlong param_10)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  undefined1 local_d1;
  longlong *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < param_1) {
    lVar4 = 0;
    do {
      *(undefined4 *)(*param_3 + lVar4 * 4) =
           *(undefined4 *)
            (*param_2 + (longlong)*(int *)(*param_8 + param_9 * 4 + param_10 * 4 + lVar4 * 4) * 4);
      lVar4 = lVar4 + 1;
    } while (param_1 != lVar4);
  }
  param_9 = param_9 + param_10;
  lVar4 = (param_6 + 1) * param_10 + *param_5;
  *param_5 = lVar4;
  local_a8 = lVar4 * 4 + *param_4;
  local_80 = *param_3;
  local_90 = param_6;
  local_e0 = param_4;
  local_a0 = param_1;
  local_98 = param_1;
  uStack_78 = param_1;
  FUN_1484a0cb2(&local_a8,&local_80,&local_80);
  lVar4 = *param_5;
  local_90 = param_7 + 6;
  if (-1 < (longlong)(param_7 + 3U)) {
    local_90 = param_7 + 3U;
  }
  *param_5 = lVar4 + param_1;
  uVar6 = (lVar4 + param_1) * 4 + *local_e0;
  uVar2 = param_1 * 4 + *param_3;
  local_90 = local_90 & 0xfffffffffffffffc;
  uVar5 = 4;
  if ((uVar2 & 3) == 0) {
    uVar5 = (ulonglong)(-((uint)(uVar2 >> 2) & 0x3fffffff) & 3);
  }
  uVar1 = 0;
  if ((uVar6 & 3) == 0) {
    uVar1 = (uint)(uVar6 >> 2) & 3;
  }
  local_a8 = uVar2 + uVar5 * 4 + (ulonglong)uVar1 * 4;
  local_a0 = param_7;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_d0 = local_60;
  local_c0 = &local_d1;
  local_b8 = &local_a8;
  local_60[0] = local_a8;
  local_50 = local_90;
  FUN_1484a0b84();
  local_e8 = local_90;
  local_f0 = local_a8;
  local_100 = (undefined4)local_80;
  uStack_fc = local_80._4_4_;
  uStack_f8 = (undefined4)uStack_78;
  uStack_f4 = uStack_78._4_4_;
  local_108 = param_6;
  FUN_14849e7d6(local_a0,1,param_1,uVar6);
  if (0 < param_1) {
    lVar4 = 0;
    do {
      lVar3 = param_9 * 4;
      param_9 = param_9 + 1;
      *(undefined4 *)(*param_2 + (longlong)*(int *)(*param_8 + lVar3) * 4) =
           *(undefined4 *)(*param_3 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (param_1 != lVar4);
  }
  if (0 < param_7) {
    lVar4 = 0;
    do {
      lVar3 = (longlong)*(int *)(*param_8 + param_9 * 4 + lVar4 * 4);
      *(float *)(*param_2 + lVar3 * 4) =
           *(float *)(*param_2 + lVar3 * 4) - *(float *)(local_a8 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (param_7 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a045e FUN_1484a045e body=168 status=ok
// SIG undefined FUN_1484a045e(void)

void FUN_1484a045e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[3] != param_2[3])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[3];
    local_30[0] = *param_2;
    local_20 = param_2[3];
    FUN_1484a0508();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1484a061c(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a0508 FUN_1484a0508 body=276 status=ok
// SIG undefined FUN_1484a0508(void)

void FUN_1484a0508(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = param_1[3];
  lVar3 = *(longlong *)(lVar12 + 0x10);
  if (0 < lVar3) {
    lVar4 = *(longlong *)(lVar12 + 8);
    uVar9 = (ulonglong)(-*(int *)(lVar12 + 0x18) & 3);
    lVar10 = 0;
    lVar12 = 0;
    lVar13 = 0;
    do {
      if (0 < lVar12) {
        lVar7 = 0;
        do {
          *(undefined4 *)(((longlong *)*param_1)[2] * lVar10 + *(longlong *)*param_1 + lVar7 * 4) =
               *(undefined4 *)
                (((longlong *)param_1[1])[2] * lVar10 + *(longlong *)param_1[1] + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar12 != lVar7);
      }
      uVar6 = lVar4 - lVar12 & 0xfffffffffffffffc;
      lVar7 = uVar6 + lVar12;
      lVar8 = lVar12;
      if (0 < (longlong)uVar6) {
        do {
          puVar1 = (undefined8 *)
                   (((longlong *)param_1[1])[2] * lVar10 + *(longlong *)param_1[1] + lVar8 * 4);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)
                   (((longlong *)*param_1)[2] * lVar10 + *(longlong *)*param_1 + lVar8 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          lVar8 = lVar8 + 4;
        } while (lVar8 < lVar7);
      }
      for (; lVar7 < lVar4; lVar7 = lVar7 + 1) {
        *(undefined4 *)(((longlong *)*param_1)[2] * lVar10 + *(longlong *)*param_1 + lVar7 * 4) =
             *(undefined4 *)
              (((longlong *)param_1[1])[2] * lVar10 + *(longlong *)param_1[1] + lVar7 * 4);
      }
      uVar11 = lVar12 + uVar9;
      uVar6 = lVar12 + uVar9 + 3;
      if (-1 < (longlong)uVar11) {
        uVar6 = uVar11;
      }
      lVar12 = uVar11 - (uVar6 & 0xfffffffffffffffc);
      if (lVar4 < lVar12) {
        lVar12 = lVar4;
      }
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + 4;
    } while (lVar13 != lVar3);
  }
  return;
}



// FUNCTION 1484a061c FUN_1484a061c body=239 status=ok
// SIG undefined FUN_1484a061c(void)

void FUN_1484a061c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[1];
  lVar2 = param_2[2];
  local_68 = param_2[1];
  local_78 = 0;
  uStack_70 = 0;
  local_60 = lVar2;
  local_58 = lVar1;
  local_38 = lVar2;
  FUN_140eb83c2(&local_58,&local_68,&local_38,1);
  local_50 = local_68 * local_58;
  local_48 = local_58 * local_60;
  local_98 = *param_2;
  local_88 = param_2[3];
  local_80 = &local_78;
  local_90 = 1;
  FUN_140eb9374(lVar1,lVar2,*param_1,param_1[3]);
  FUN_1400020a8(local_78);
  FUN_1400020a8(uStack_70);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a070c FUN_1484a070c body=335 status=ok
// SIG undefined FUN_1484a070c(void)

void FUN_1484a070c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  puVar12 = (ulonglong *)param_1[3];
  if ((*puVar12 & 3) == 0) {
    uVar3 = puVar12[2];
    if (0 < (longlong)uVar3) {
      uVar4 = puVar12[1];
      uVar11 = (ulonglong)(-(int)puVar12[3] & 3);
      uVar6 = (ulonglong)(-((uint)(*puVar12 >> 2) & 0x3fffffff) & 3);
      if ((longlong)uVar4 <= (longlong)uVar6) {
        uVar6 = uVar4;
      }
      lVar5 = 0;
      uVar13 = 0;
      do {
        if (0 < (longlong)uVar6) {
          uVar9 = 0;
          do {
            *(undefined4 *)(((longlong *)*param_1)[2] * lVar5 + *(longlong *)*param_1 + uVar9 * 4) =
                 *(undefined4 *)param_1[1];
            uVar9 = uVar9 + 1;
          } while (uVar6 != uVar9);
        }
        uVar8 = uVar4 - uVar6 & 0xfffffffffffffffc;
        lVar7 = uVar8 + uVar6;
        uVar9 = uVar6;
        if (0 < (longlong)uVar8) {
          do {
            uVar2 = *(undefined4 *)param_1[1];
            puVar1 = (undefined4 *)
                     (((longlong *)*param_1)[2] * lVar5 + *(longlong *)*param_1 + uVar9 * 4);
            *puVar1 = uVar2;
            puVar1[1] = uVar2;
            puVar1[2] = uVar2;
            puVar1[3] = uVar2;
            uVar9 = uVar9 + 4;
          } while ((longlong)uVar9 < lVar7);
        }
        for (; lVar7 < (longlong)uVar4; lVar7 = lVar7 + 1) {
          *(undefined4 *)(((longlong *)*param_1)[2] * lVar5 + *(longlong *)*param_1 + lVar7 * 4) =
               *(undefined4 *)param_1[1];
        }
        uVar9 = uVar6 + uVar11;
        uVar6 = uVar6 + uVar11 + 3;
        if (-1 < (longlong)uVar9) {
          uVar6 = uVar9;
        }
        uVar6 = uVar9 - (uVar6 & 0xfffffffffffffffc);
        if ((longlong)uVar4 < (longlong)uVar6) {
          uVar6 = uVar4;
        }
        uVar13 = uVar13 + 1;
        lVar5 = lVar5 + 4;
      } while (uVar13 != uVar3);
    }
  }
  else if (0 < (longlong)puVar12[2]) {
    lVar5 = 0;
    lVar7 = 0;
    do {
      if (0 < (longlong)puVar12[1]) {
        lVar10 = 0;
        do {
          *(undefined4 *)(((longlong *)*param_1)[2] * lVar5 + *(longlong *)*param_1 + lVar10 * 4) =
               *(undefined4 *)param_1[1];
          lVar10 = lVar10 + 1;
          puVar12 = (ulonglong *)param_1[3];
        } while (lVar10 < (longlong)puVar12[1]);
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar7 < (longlong)puVar12[2]);
  }
  return;
}



// FUNCTION 1484a085b FUN_1484a085b body=205 status=ok
// SIG undefined FUN_1484a085b(void)

void FUN_1484a085b(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48 [2];
  ulonglong local_38;
  undefined1 local_30 [4];
  float local_2c;
  longlong lStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = *(float *)(param_2 + 0x1c);
  local_60 = local_30;
  lStack_20 = *(longlong *)(param_2 + 0x20);
  local_10 = *(undefined8 *)(param_2 + 0x28);
  local_48[0] = *param_1;
  local_68 = local_48;
  local_38 = param_1[1];
  uVar11 = local_38 + 3;
  if (-1 < (longlong)local_38) {
    uVar11 = local_38;
  }
  if (3 < (longlong)local_38) {
    lVar10 = 0;
    do {
      pfVar1 = (float *)(lStack_20 + lVar10 * 4);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(local_48[0] + lVar10 * 4);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(local_48[0] + lVar10 * 4);
      *pfVar3 = local_2c * *pfVar1 + *pfVar2;
      pfVar3[1] = local_2c * fVar4 + fVar7;
      pfVar3[2] = local_2c * fVar5 + fVar8;
      pfVar3[3] = local_2c * fVar6 + fVar9;
      lVar10 = lVar10 + 4;
    } while (lVar10 < (longlong)(uVar11 & 0xfffffffffffffffc));
  }
  local_58 = param_3;
  local_50 = param_1;
  FUN_1484a092a(&local_68);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a092a FUN_1484a092a body=49 status=ok
// SIG undefined FUN_1484a092a(void)

void FUN_1484a092a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 4) * *(float *)(param_1[1] + 4) +
           *(float *)(*(longlong *)*param_1 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a095b FUN_1484a095b body=259 status=ok
// SIG undefined FUN_1484a095b(void)

void FUN_1484a095b(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [2];
  ulonglong local_68;
  undefined1 local_60 [12];
  float local_54;
  longlong lStack_48;
  undefined8 local_38;
  float local_2c;
  longlong lStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_54 = *(float *)(param_2 + 0x24);
  local_90 = local_60;
  lStack_48 = *(longlong *)(param_2 + 0x28);
  local_38 = *(undefined8 *)(param_2 + 0x30);
  local_2c = *(float *)(param_2 + 0x6c);
  lStack_20 = *(longlong *)(param_2 + 0x70);
  local_10 = *(undefined8 *)(param_2 + 0x78);
  local_78[0] = *param_1;
  local_98 = local_78;
  local_68 = param_1[1];
  uVar15 = local_68 + 3;
  if (-1 < (longlong)local_68) {
    uVar15 = local_68;
  }
  if (3 < (longlong)local_68) {
    lVar14 = 0;
    do {
      pfVar1 = (float *)(lStack_20 + lVar14 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(lStack_48 + lVar14 * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(local_78[0] + lVar14 * 4);
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      fVar13 = pfVar3[3];
      pfVar4 = (float *)(local_78[0] + lVar14 * 4);
      *pfVar4 = local_54 * *pfVar2 + local_2c * *pfVar1 + *pfVar3;
      pfVar4[1] = local_54 * fVar8 + local_2c * fVar5 + fVar11;
      pfVar4[2] = local_54 * fVar9 + local_2c * fVar6 + fVar12;
      pfVar4[3] = local_54 * fVar10 + local_2c * fVar7 + fVar13;
      lVar14 = lVar14 + 4;
    } while (lVar14 < (longlong)(uVar15 & 0xfffffffffffffffc));
  }
  local_88 = param_3;
  local_80 = param_1;
  FUN_1484a0a60(&local_98);
  if ((local_8 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a0a60 FUN_1484a0a60 body=70 status=ok
// SIG undefined FUN_1484a0a60(void)

void FUN_1484a0a60(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)(lVar1 + 0x18) + param_2 * 4) * *(float *)(lVar1 + 0xc) +
           *(float *)(*(longlong *)(lVar1 + 0x40) + param_2 * 4) * *(float *)(lVar1 + 0x34) +
           *(float *)(*(longlong *)*param_1 + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a0aa6 FUN_1484a0aa6 body=222 status=ok
// SIG undefined FUN_1484a0aa6(void)

void FUN_1484a0aa6(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  uVar9 = *(ulonglong *)(param_1[3] + 8);
  uVar24 = uVar9 + 3;
  if (-1 < (longlong)uVar9) {
    uVar24 = uVar9;
  }
  uVar24 = uVar24 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar9) {
    lVar23 = 0;
    do {
      lVar10 = param_1[1];
      fVar6 = *(float *)(lVar10 + 100);
      pfVar1 = (float *)(*(longlong *)(lVar10 + 0x70) + lVar23 * 4);
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar7 = *(float *)(lVar10 + 0x3c);
      pfVar2 = (float *)(*(longlong *)(lVar10 + 0x48) + lVar23 * 4);
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      fVar8 = *(float *)(lVar10 + 0x14);
      pfVar3 = (float *)(*(longlong *)(lVar10 + 0x20) + lVar23 * 4);
      fVar17 = pfVar3[1];
      fVar18 = pfVar3[2];
      fVar19 = pfVar3[3];
      pfVar4 = (float *)(*(longlong *)*param_1 + lVar23 * 4);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      pfVar5 = (float *)(*(longlong *)*param_1 + lVar23 * 4);
      *pfVar5 = fVar8 * *pfVar3 + fVar7 * *pfVar2 + fVar6 * *pfVar1 + *pfVar4;
      pfVar5[1] = fVar8 * fVar17 + fVar7 * fVar14 + fVar6 * fVar11 + fVar20;
      pfVar5[2] = fVar8 * fVar18 + fVar7 * fVar15 + fVar6 * fVar12 + fVar21;
      pfVar5[3] = fVar8 * fVar19 + fVar7 * fVar16 + fVar6 * fVar13 + fVar22;
      lVar23 = lVar23 + 4;
    } while (lVar23 < (longlong)uVar24);
  }
  if ((longlong)uVar24 < (longlong)uVar9) {
    do {
      lVar23 = param_1[1];
      *(float *)(*(longlong *)*param_1 + uVar24 * 4) =
           *(float *)(*(longlong *)(lVar23 + 0x20) + uVar24 * 4) * *(float *)(lVar23 + 0x14) +
           *(float *)(*(longlong *)(lVar23 + 0x48) + uVar24 * 4) * *(float *)(lVar23 + 0x3c) +
           *(float *)(*(longlong *)(lVar23 + 0x70) + uVar24 * 4) * *(float *)(lVar23 + 100) +
           *(float *)(*(longlong *)*param_1 + uVar24 * 4);
      uVar24 = uVar24 + 1;
    } while (uVar9 != uVar24);
  }
  return;
}



// FUNCTION 1484a0b84 FUN_1484a0b84 body=149 status=ok
// SIG undefined FUN_1484a0b84(void)

void FUN_1484a0b84(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar4 = uVar3;
  if (((uVar5 & 3) == 0) &&
     (uVar4 = (ulonglong)(-((uint)(uVar5 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar4)) {
    uVar4 = uVar3;
  }
  uVar7 = uVar3 - uVar4;
  uVar5 = uVar7 + 3;
  if (-1 < (longlong)uVar7) {
    uVar5 = uVar7;
  }
  lVar6 = (uVar5 & 0xfffffffffffffffc) + uVar4;
  FUN_1484a0c1a(param_1,0,uVar4);
  if (3 < (longlong)uVar7) {
    do {
      uVar2 = *(undefined4 *)param_1[1];
      puVar1 = (undefined4 *)(*(longlong *)*param_1 + uVar4 * 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
      puVar1[3] = uVar2;
      uVar4 = uVar4 + 4;
    } while ((longlong)uVar4 < lVar6);
  }
  FUN_1484a0c1a(param_1,lVar6,uVar3);
  return;
}



// FUNCTION 1484a0c1a FUN_1484a0c1a body=34 status=ok
// SIG undefined FUN_1484a0c1a(void)

void FUN_1484a0c1a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) = *(undefined4 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a0c3c FUN_1484a0c3c body=117 status=ok
// SIG undefined FUN_1484a0c3c(void)

void FUN_1484a0c3c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar2 = (float *)*param_3;
  pfVar1 = (float *)*param_2;
  if (pfVar2 != pfVar1) {
    *pfVar2 = *pfVar1;
    pfVar2[1] = pfVar1[1];
    pfVar2[2] = pfVar1[2];
    pfVar2 = (float *)*param_3;
  }
  pfVar2[1] = pfVar2[1] - *(float *)(*param_1 + 4) * *pfVar2;
  pfVar2 = (float *)*param_3;
  pfVar2[2] = pfVar2[2] -
              (*(float *)(*param_1 + 8) * *pfVar2 +
              *(float *)(*param_1 + 8 + param_1[2] * 4) * pfVar2[1]);
  return;
}



// FUNCTION 1484a0cb2 FUN_1484a0cb2 body=168 status=ok
// SIG undefined FUN_1484a0cb2(void)

void FUN_1484a0cb2(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[1] != param_2[1])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[1];
    local_30[0] = *param_2;
    local_20 = param_2[1];
    FUN_1484a0d5c();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1484a0e16(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a0d5c FUN_1484a0d5c body=148 status=ok
// SIG undefined FUN_1484a0d5c(void)

void FUN_1484a0d5c(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_1484a0df0(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_1484a0df0(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 1484a0df0 FUN_1484a0df0 body=38 status=ok
// SIG undefined FUN_1484a0df0(void)

void FUN_1484a0df0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a0e16 FUN_1484a0e16 body=286 status=ok
// SIG undefined FUN_1484a0e16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1484a0e16(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 4;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1484a0ead;
  FUN_1484a0f3a(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 2)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1484a0ecc;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1484a0ef3;
  FUN_144d8e3a0();
}



// FUNCTION 1484a0f3a FUN_1484a0f3a body=643 status=ok
// SIG undefined FUN_1484a0f3a(void)

void FUN_1484a0f3a(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e1;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_3;
  local_120 = param_2;
  local_118 = param_4;
  if (0 < param_1) {
    param_2 = param_2 + 4;
    local_108 = (longlong)param_3 * 0x20 + 0x20;
    param_4 = param_4 + 4;
    lVar7 = 0;
    lVar6 = param_1;
    local_110 = param_1;
    do {
      lVar5 = 8;
      if (param_1 < 8) {
        lVar5 = param_1;
      }
      lVar4 = 1;
      if (1 < lVar5) {
        lVar4 = lVar5;
      }
      lVar2 = lVar6 - lVar7;
      lVar3 = 8;
      if (lVar2 < 8) {
        lVar3 = lVar2;
      }
      if (0 < lVar2) {
        lVar2 = param_2;
        lVar8 = 1;
        lVar9 = param_4;
        local_100 = lVar3;
        local_f8 = param_1;
        local_f0 = param_4;
        do {
          lVar5 = lVar5 + -1;
          fVar1 = *(float *)(lVar9 + -4);
          if (((fVar1 != 0.0) || (NAN(fVar1))) && (0 < lVar5)) {
            local_88 = CONCAT44(fVar1,(undefined4)local_88);
            local_68 = local_128;
            local_e0 = local_a0;
            local_d8 = &local_88;
            local_d0 = &local_e1;
            local_c8 = &local_c0;
            local_c0 = lVar9;
            local_b8 = lVar5;
            local_a0[0] = lVar9;
            local_90 = lVar5;
            local_78 = lVar2;
            FUN_1484a1624(&local_e0);
            lVar3 = local_100;
            param_1 = local_f8;
            lVar6 = local_110;
            param_4 = local_f0;
          }
          lVar2 = lVar2 + (longlong)param_3 * 4 + 4;
          lVar9 = lVar9 + 4;
          bVar10 = lVar8 != lVar4;
          lVar8 = lVar8 + 1;
        } while (bVar10);
      }
      lVar5 = lVar3 + lVar7;
      if (lVar6 - lVar5 != 0 && lVar5 <= lVar6) {
        local_138 = local_118 + lVar5 * 4;
        local_88 = local_118 + lVar7 * 4;
        local_80 = 1;
        local_e0 = (longlong *)(local_120 + lVar7 * (longlong)local_128 * 4 + lVar5 * 4);
        local_d8 = local_128;
        FUN_1484a11be(lVar6 - lVar5,lVar3,&local_e0,&local_88);
        lVar6 = local_110;
      }
      lVar7 = lVar7 + 8;
      param_1 = param_1 + -8;
      param_2 = param_2 + local_108;
      param_4 = param_4 + 0x20;
    } while (lVar7 < lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a11be FUN_1484a11be body=1125 status=ok
// SIG undefined FUN_1484a11be(void)

void FUN_1484a11be(ulonglong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  if (0 < param_2) {
    lVar18 = *param_3;
    lVar3 = param_3[1];
    if ((longlong)param_1 < 0x20) {
      uVar20 = 0;
    }
    else {
      pfVar23 = (float *)(lVar18 + 0x70);
      uVar20 = 0;
      do {
        fVar44 = 0.0;
        fVar45 = 0.0;
        fVar46 = 0.0;
        fVar47 = 0.0;
        lVar22 = 0;
        fVar52 = 0.0;
        fVar53 = 0.0;
        fVar54 = 0.0;
        fVar55 = 0.0;
        fVar48 = 0.0;
        fVar49 = 0.0;
        fVar50 = 0.0;
        fVar51 = 0.0;
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        pfVar19 = pfVar23;
        do {
          fVar2 = *(float *)(*param_4 + lVar22 * 4);
          fVar44 = fVar44 + pfVar19[-0x1c] * fVar2;
          fVar45 = fVar45 + pfVar19[-0x1b] * fVar2;
          fVar46 = fVar46 + pfVar19[-0x1a] * fVar2;
          fVar47 = fVar47 + pfVar19[-0x19] * fVar2;
          fVar52 = fVar52 + pfVar19[-0x18] * fVar2;
          fVar53 = fVar53 + pfVar19[-0x17] * fVar2;
          fVar54 = fVar54 + pfVar19[-0x16] * fVar2;
          fVar55 = fVar55 + pfVar19[-0x15] * fVar2;
          fVar48 = fVar48 + pfVar19[-0x14] * fVar2;
          fVar49 = fVar49 + pfVar19[-0x13] * fVar2;
          fVar50 = fVar50 + pfVar19[-0x12] * fVar2;
          fVar51 = fVar51 + pfVar19[-0x11] * fVar2;
          fVar40 = fVar40 + pfVar19[-0x10] * fVar2;
          fVar41 = fVar41 + pfVar19[-0xf] * fVar2;
          fVar42 = fVar42 + pfVar19[-0xe] * fVar2;
          fVar43 = fVar43 + pfVar19[-0xd] * fVar2;
          fVar36 = fVar36 + pfVar19[-0xc] * fVar2;
          fVar37 = fVar37 + pfVar19[-0xb] * fVar2;
          fVar38 = fVar38 + pfVar19[-10] * fVar2;
          fVar39 = fVar39 + pfVar19[-9] * fVar2;
          fVar32 = fVar32 + pfVar19[-8] * fVar2;
          fVar33 = fVar33 + pfVar19[-7] * fVar2;
          fVar34 = fVar34 + pfVar19[-6] * fVar2;
          fVar35 = fVar35 + pfVar19[-5] * fVar2;
          fVar28 = fVar28 + pfVar19[-4] * fVar2;
          fVar29 = fVar29 + pfVar19[-3] * fVar2;
          fVar30 = fVar30 + pfVar19[-2] * fVar2;
          fVar31 = fVar31 + pfVar19[-1] * fVar2;
          fVar24 = fVar24 + *pfVar19 * fVar2;
          fVar25 = fVar25 + pfVar19[1] * fVar2;
          fVar26 = fVar26 + pfVar19[2] * fVar2;
          fVar27 = fVar27 + pfVar19[3] * fVar2;
          lVar22 = lVar22 + 1;
          pfVar19 = pfVar19 + lVar3;
        } while (param_2 != lVar22);
        pfVar19 = (float *)(param_5 + uVar20 * 4);
        fVar2 = pfVar19[1];
        fVar4 = pfVar19[2];
        fVar5 = pfVar19[3];
        pfVar1 = (float *)(param_5 + 0x10 + uVar20 * 4);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar1 = (float *)(param_5 + 0x20 + uVar20 * 4);
        fVar10 = *pfVar1;
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar1 = (float *)(param_5 + 0x30 + uVar20 * 4);
        fVar14 = *pfVar1;
        fVar15 = pfVar1[1];
        fVar16 = pfVar1[2];
        fVar17 = pfVar1[3];
        pfVar1 = (float *)(param_5 + uVar20 * 4);
        *pfVar1 = *pfVar19 - fVar44;
        pfVar1[1] = fVar2 - fVar45;
        pfVar1[2] = fVar4 - fVar46;
        pfVar1[3] = fVar5 - fVar47;
        pfVar19 = (float *)(param_5 + 0x10 + uVar20 * 4);
        *pfVar19 = fVar6 - fVar52;
        pfVar19[1] = fVar7 - fVar53;
        pfVar19[2] = fVar8 - fVar54;
        pfVar19[3] = fVar9 - fVar55;
        pfVar19 = (float *)(param_5 + 0x20 + uVar20 * 4);
        *pfVar19 = fVar10 - fVar48;
        pfVar19[1] = fVar11 - fVar49;
        pfVar19[2] = fVar12 - fVar50;
        pfVar19[3] = fVar13 - fVar51;
        pfVar19 = (float *)(param_5 + 0x30 + uVar20 * 4);
        *pfVar19 = fVar14 - fVar40;
        pfVar19[1] = fVar15 - fVar41;
        pfVar19[2] = fVar16 - fVar42;
        pfVar19[3] = fVar17 - fVar43;
        pfVar19 = (float *)(param_5 + 0x40 + uVar20 * 4);
        fVar40 = pfVar19[1];
        fVar41 = pfVar19[2];
        fVar42 = pfVar19[3];
        pfVar1 = (float *)(param_5 + 0x40 + uVar20 * 4);
        *pfVar1 = *pfVar19 - fVar36;
        pfVar1[1] = fVar40 - fVar37;
        pfVar1[2] = fVar41 - fVar38;
        pfVar1[3] = fVar42 - fVar39;
        pfVar19 = (float *)(param_5 + 0x50 + uVar20 * 4);
        fVar36 = pfVar19[1];
        fVar37 = pfVar19[2];
        fVar38 = pfVar19[3];
        pfVar1 = (float *)(param_5 + 0x50 + uVar20 * 4);
        *pfVar1 = *pfVar19 - fVar32;
        pfVar1[1] = fVar36 - fVar33;
        pfVar1[2] = fVar37 - fVar34;
        pfVar1[3] = fVar38 - fVar35;
        pfVar19 = (float *)(param_5 + 0x60 + uVar20 * 4);
        fVar32 = pfVar19[1];
        fVar33 = pfVar19[2];
        fVar34 = pfVar19[3];
        pfVar1 = (float *)(param_5 + 0x60 + uVar20 * 4);
        *pfVar1 = *pfVar19 - fVar28;
        pfVar1[1] = fVar32 - fVar29;
        pfVar1[2] = fVar33 - fVar30;
        pfVar1[3] = fVar34 - fVar31;
        pfVar19 = (float *)(param_5 + 0x70 + uVar20 * 4);
        fVar28 = pfVar19[1];
        fVar29 = pfVar19[2];
        fVar30 = pfVar19[3];
        pfVar1 = (float *)(param_5 + 0x70 + uVar20 * 4);
        *pfVar1 = *pfVar19 - fVar24;
        pfVar1[1] = fVar28 - fVar25;
        pfVar1[2] = fVar29 - fVar26;
        pfVar1[3] = fVar30 - fVar27;
        uVar20 = uVar20 + 0x20;
        pfVar23 = pfVar23 + 0x20;
      } while ((longlong)uVar20 < (longlong)(param_1 - 0x1f));
    }
    if ((longlong)uVar20 < (longlong)(param_1 - 0xf)) {
      lVar22 = 1;
      if (1 < param_2) {
        lVar22 = param_2;
      }
      pfVar23 = (float *)(lVar18 + uVar20 * 4 + 0x30);
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      lVar21 = 0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      do {
        fVar40 = *(float *)(*param_4 + lVar21 * 4);
        fVar28 = fVar28 + pfVar23[-0xc] * fVar40;
        fVar29 = fVar29 + pfVar23[-0xb] * fVar40;
        fVar30 = fVar30 + pfVar23[-10] * fVar40;
        fVar31 = fVar31 + pfVar23[-9] * fVar40;
        fVar36 = fVar36 + pfVar23[-8] * fVar40;
        fVar37 = fVar37 + pfVar23[-7] * fVar40;
        fVar38 = fVar38 + pfVar23[-6] * fVar40;
        fVar39 = fVar39 + pfVar23[-5] * fVar40;
        fVar32 = fVar32 + pfVar23[-4] * fVar40;
        fVar33 = fVar33 + pfVar23[-3] * fVar40;
        fVar34 = fVar34 + pfVar23[-2] * fVar40;
        fVar35 = fVar35 + pfVar23[-1] * fVar40;
        fVar24 = fVar24 + *pfVar23 * fVar40;
        fVar25 = fVar25 + pfVar23[1] * fVar40;
        fVar26 = fVar26 + pfVar23[2] * fVar40;
        fVar27 = fVar27 + pfVar23[3] * fVar40;
        lVar21 = lVar21 + 1;
        pfVar23 = pfVar23 + lVar3;
      } while (lVar22 != lVar21);
      pfVar23 = (float *)(param_5 + uVar20 * 4);
      fVar40 = pfVar23[1];
      fVar41 = pfVar23[2];
      fVar42 = pfVar23[3];
      pfVar19 = (float *)(param_5 + 0x10 + uVar20 * 4);
      fVar43 = *pfVar19;
      fVar44 = pfVar19[1];
      fVar45 = pfVar19[2];
      fVar46 = pfVar19[3];
      pfVar19 = (float *)(param_5 + 0x20 + uVar20 * 4);
      fVar47 = *pfVar19;
      fVar48 = pfVar19[1];
      fVar49 = pfVar19[2];
      fVar50 = pfVar19[3];
      pfVar19 = (float *)(param_5 + 0x30 + uVar20 * 4);
      fVar51 = *pfVar19;
      fVar52 = pfVar19[1];
      fVar53 = pfVar19[2];
      fVar54 = pfVar19[3];
      pfVar19 = (float *)(param_5 + uVar20 * 4);
      *pfVar19 = *pfVar23 - fVar28;
      pfVar19[1] = fVar40 - fVar29;
      pfVar19[2] = fVar41 - fVar30;
      pfVar19[3] = fVar42 - fVar31;
      pfVar23 = (float *)(param_5 + 0x10 + uVar20 * 4);
      *pfVar23 = fVar43 - fVar36;
      pfVar23[1] = fVar44 - fVar37;
      pfVar23[2] = fVar45 - fVar38;
      pfVar23[3] = fVar46 - fVar39;
      pfVar23 = (float *)(param_5 + 0x20 + uVar20 * 4);
      *pfVar23 = fVar47 - fVar32;
      pfVar23[1] = fVar48 - fVar33;
      pfVar23[2] = fVar49 - fVar34;
      pfVar23[3] = fVar50 - fVar35;
      pfVar23 = (float *)(param_5 + 0x30 + uVar20 * 4);
      *pfVar23 = fVar51 - fVar24;
      pfVar23[1] = fVar52 - fVar25;
      pfVar23[2] = fVar53 - fVar26;
      pfVar23[3] = fVar54 - fVar27;
      uVar20 = uVar20 | 0x10;
    }
    if ((longlong)uVar20 < (longlong)(param_1 - 0xb)) {
      lVar22 = 1;
      if (1 < param_2) {
        lVar22 = param_2;
      }
      pfVar23 = (float *)(lVar18 + uVar20 * 4 + 0x20);
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      lVar21 = 0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      do {
        fVar36 = *(float *)(*param_4 + lVar21 * 4);
        fVar24 = fVar24 + pfVar23[-8] * fVar36;
        fVar25 = fVar25 + pfVar23[-7] * fVar36;
        fVar26 = fVar26 + pfVar23[-6] * fVar36;
        fVar27 = fVar27 + pfVar23[-5] * fVar36;
        fVar32 = fVar32 + pfVar23[-4] * fVar36;
        fVar33 = fVar33 + pfVar23[-3] * fVar36;
        fVar34 = fVar34 + pfVar23[-2] * fVar36;
        fVar35 = fVar35 + pfVar23[-1] * fVar36;
        fVar28 = fVar28 + *pfVar23 * fVar36;
        fVar29 = fVar29 + pfVar23[1] * fVar36;
        fVar30 = fVar30 + pfVar23[2] * fVar36;
        fVar31 = fVar31 + pfVar23[3] * fVar36;
        lVar21 = lVar21 + 1;
        pfVar23 = pfVar23 + lVar3;
      } while (lVar22 != lVar21);
      pfVar23 = (float *)(param_5 + uVar20 * 4);
      fVar36 = pfVar23[1];
      fVar37 = pfVar23[2];
      fVar38 = pfVar23[3];
      pfVar19 = (float *)(param_5 + 0x10 + uVar20 * 4);
      fVar39 = *pfVar19;
      fVar40 = pfVar19[1];
      fVar41 = pfVar19[2];
      fVar42 = pfVar19[3];
      pfVar19 = (float *)(param_5 + 0x20 + uVar20 * 4);
      fVar43 = *pfVar19;
      fVar44 = pfVar19[1];
      fVar45 = pfVar19[2];
      fVar46 = pfVar19[3];
      pfVar19 = (float *)(param_5 + uVar20 * 4);
      *pfVar19 = *pfVar23 - fVar24;
      pfVar19[1] = fVar36 - fVar25;
      pfVar19[2] = fVar37 - fVar26;
      pfVar19[3] = fVar38 - fVar27;
      pfVar23 = (float *)(param_5 + 0x10 + uVar20 * 4);
      *pfVar23 = fVar39 - fVar32;
      pfVar23[1] = fVar40 - fVar33;
      pfVar23[2] = fVar41 - fVar34;
      pfVar23[3] = fVar42 - fVar35;
      pfVar23 = (float *)(param_5 + 0x20 + uVar20 * 4);
      *pfVar23 = fVar43 - fVar28;
      pfVar23[1] = fVar44 - fVar29;
      pfVar23[2] = fVar45 - fVar30;
      pfVar23[3] = fVar46 - fVar31;
      uVar20 = uVar20 + 0xc;
    }
    if ((longlong)uVar20 < (longlong)(param_1 - 7)) {
      lVar22 = 1;
      if (1 < param_2) {
        lVar22 = param_2;
      }
      pfVar23 = (float *)(lVar18 + uVar20 * 4 + 0x10);
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      lVar21 = 0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      do {
        fVar32 = *(float *)(*param_4 + lVar21 * 4);
        fVar28 = fVar28 + pfVar23[-4] * fVar32;
        fVar29 = fVar29 + pfVar23[-3] * fVar32;
        fVar30 = fVar30 + pfVar23[-2] * fVar32;
        fVar31 = fVar31 + pfVar23[-1] * fVar32;
        fVar24 = fVar24 + *pfVar23 * fVar32;
        fVar25 = fVar25 + pfVar23[1] * fVar32;
        fVar26 = fVar26 + pfVar23[2] * fVar32;
        fVar27 = fVar27 + pfVar23[3] * fVar32;
        lVar21 = lVar21 + 1;
        pfVar23 = pfVar23 + lVar3;
      } while (lVar22 != lVar21);
      pfVar23 = (float *)(param_5 + uVar20 * 4);
      fVar32 = pfVar23[1];
      fVar33 = pfVar23[2];
      fVar34 = pfVar23[3];
      pfVar19 = (float *)(param_5 + 0x10 + uVar20 * 4);
      fVar35 = *pfVar19;
      fVar36 = pfVar19[1];
      fVar37 = pfVar19[2];
      fVar38 = pfVar19[3];
      pfVar19 = (float *)(param_5 + uVar20 * 4);
      *pfVar19 = *pfVar23 - fVar28;
      pfVar19[1] = fVar32 - fVar29;
      pfVar19[2] = fVar33 - fVar30;
      pfVar19[3] = fVar34 - fVar31;
      pfVar23 = (float *)(param_5 + 0x10 + uVar20 * 4);
      *pfVar23 = fVar35 - fVar24;
      pfVar23[1] = fVar36 - fVar25;
      pfVar23[2] = fVar37 - fVar26;
      pfVar23[3] = fVar38 - fVar27;
      uVar20 = uVar20 + 8;
    }
    if ((longlong)uVar20 < (longlong)(param_1 - 3)) {
      pfVar23 = (float *)(lVar18 + uVar20 * 4);
      lVar22 = 1;
      if (1 < param_2) {
        lVar22 = param_2;
      }
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      lVar21 = 0;
      do {
        fVar28 = *(float *)(*param_4 + lVar21 * 4);
        fVar24 = fVar24 + *pfVar23 * fVar28;
        fVar25 = fVar25 + pfVar23[1] * fVar28;
        fVar26 = fVar26 + pfVar23[2] * fVar28;
        fVar27 = fVar27 + pfVar23[3] * fVar28;
        lVar21 = lVar21 + 1;
        pfVar23 = pfVar23 + lVar3;
      } while (lVar22 != lVar21);
      pfVar23 = (float *)(param_5 + uVar20 * 4);
      fVar28 = pfVar23[1];
      fVar29 = pfVar23[2];
      fVar30 = pfVar23[3];
      pfVar19 = (float *)(param_5 + uVar20 * 4);
      *pfVar19 = *pfVar23 - fVar24;
      pfVar19[1] = fVar28 - fVar25;
      pfVar19[2] = fVar29 - fVar26;
      pfVar19[3] = fVar30 - fVar27;
      uVar20 = uVar20 + 4;
    }
    if ((longlong)uVar20 < (longlong)param_1) {
      lVar22 = 1;
      if (1 < param_2) {
        lVar22 = param_2;
      }
      pfVar23 = (float *)(lVar18 + uVar20 * 4);
      do {
        fVar24 = 0.0;
        lVar18 = 0;
        pfVar19 = pfVar23;
        do {
          fVar24 = fVar24 + *pfVar19 * *(float *)(*param_4 + lVar18 * 4);
          lVar18 = lVar18 + 1;
          pfVar19 = pfVar19 + lVar3;
        } while (lVar22 != lVar18);
        *(float *)(param_5 + uVar20 * 4) = *(float *)(param_5 + uVar20 * 4) - fVar24;
        uVar20 = uVar20 + 1;
        pfVar23 = pfVar23 + 1;
      } while (uVar20 != param_1);
    }
  }
  return;
}



// FUNCTION 1484a1624 FUN_1484a1624 body=168 status=ok
// SIG undefined FUN_1484a1624(void)

void FUN_1484a1624(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar13 = *(ulonglong *)param_1[3];
  uVar5 = ((ulonglong *)param_1[3])[1];
  uVar12 = uVar5;
  if (((uVar13 & 3) == 0) &&
     (uVar12 = (ulonglong)(-((uint)(uVar13 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar5 <= (longlong)uVar12)) {
    uVar12 = uVar5;
  }
  uVar15 = uVar5 - uVar12;
  uVar13 = uVar15 + 3;
  if (-1 < (longlong)uVar15) {
    uVar13 = uVar15;
  }
  lVar14 = (uVar13 & 0xfffffffffffffffc) + uVar12;
  FUN_1484a16cc(param_1,0,uVar12);
  if (3 < (longlong)uVar15) {
    do {
      pfVar1 = (float *)(*(longlong *)(param_1[1] + 0x10) + uVar12 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      fVar4 = *(float *)(param_1[1] + 4);
      pfVar2 = (float *)(*(longlong *)*param_1 + uVar12 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(*(longlong *)*param_1 + uVar12 * 4);
      *pfVar3 = *pfVar2 - fVar4 * *pfVar1;
      pfVar3[1] = fVar9 - fVar4 * fVar6;
      pfVar3[2] = fVar10 - fVar4 * fVar7;
      pfVar3[3] = fVar11 - fVar4 * fVar8;
      uVar12 = uVar12 + 4;
    } while ((longlong)uVar12 < lVar14);
  }
  FUN_1484a16cc(param_1,lVar14,uVar5);
  return;
}



// FUNCTION 1484a16cc FUN_1484a16cc body=54 status=ok
// SIG undefined FUN_1484a16cc(void)

void FUN_1484a16cc(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)*param_1 + param_2 * 4) -
           *(float *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 4) * *(float *)(param_1[1] + 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a1702 FUN_1484a1702 body=710 status=ok
// SIG undefined FUN_1484a1702(void)

void FUN_1484a1702(int param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong param_13,longlong *param_14)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(*param_8 + param_13 * 4);
  *(int *)(*param_8 + param_13 * 4) = param_1;
  iVar7 = *(int *)(*param_2 + param_13 * 4);
  if ((longlong)iVar7 == -1) {
    lVar5 = *param_12;
    *param_12 = lVar5 + 1;
    *(int *)(*param_4 + lVar5 * 4) = (int)param_13;
    lVar5 = param_14[2];
    if (*(longlong *)(lVar5 + 0x60) <= *param_12) {
      FUN_14849e1f2(param_4,lVar5 + 0x60,*param_12,0,lVar5 + 0xb0);
    }
    if (*param_14 + -1 != (longlong)iVar9) {
      *(undefined8 *)param_14[1] = 0xffffffffffffffff;
    }
  }
  else {
    lVar5 = (longlong)
            *(int *)(*param_11 + 4 + (longlong)*(int *)(param_11[2] + (longlong)iVar7 * 4) * 4);
    iVar9 = *(int *)(*param_6 + -4 + lVar5 * 4);
    if (iVar9 == -1) {
      lVar8 = lVar5 + -1;
      *(undefined4 *)(*param_9 + -4 + lVar5 * 4) = 0xffffffff;
      *(int *)(*param_6 + -4 + lVar5 * 4) = iVar7;
      piVar6 = (int *)(param_11[10] + lVar8 * 4);
      piVar3 = (int *)(lVar8 * 4 + *param_7);
      while( true ) {
        iVar7 = (int)lVar8;
        iVar9 = *piVar6;
        lVar5 = (longlong)*piVar3;
        if (iVar9 < *piVar3) {
          lVar4 = (longlong)iVar9;
          do {
            iVar7 = *(int *)(param_11[6] + lVar4 * 4);
            iVar9 = iVar9 + 1;
            lVar4 = (longlong)iVar7;
            iVar1 = *(int *)(*param_8 + lVar4 * 4);
            if (iVar1 != param_1) {
              *(int *)(*param_8 + lVar4 * 4) = param_1;
              iVar2 = *(int *)(*param_2 + lVar4 * 4);
              if ((longlong)iVar2 == -1) {
                lVar4 = *param_12;
                *param_12 = lVar4 + 1;
                *(int *)(*param_4 + lVar4 * 4) = iVar7;
                lVar4 = param_14[2];
                if (*(longlong *)(lVar4 + 0x60) <= *param_12) {
                  FUN_14849e1f2(param_4,lVar4 + 0x60,*param_12,0,lVar4 + 0xb0);
                }
                if (*param_14 + -1 != (longlong)iVar1) {
                  *(undefined8 *)param_14[1] = 0xffffffffffffffff;
                }
              }
              else {
                lVar4 = (longlong)
                        *(int *)(*param_11 + 4 +
                                (longlong)*(int *)(param_11[2] + (longlong)iVar2 * 4) * 4);
                iVar7 = *(int *)(*param_6 + -4 + lVar4 * 4);
                if (iVar7 == -1) {
                  iVar7 = (int)lVar8;
                  lVar8 = lVar4 + -1;
                  *(int *)(*param_10 + (longlong)iVar7 * 4) = iVar9;
                  *(int *)(*param_9 + -4 + lVar4 * 4) = iVar7;
                  *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
                  iVar9 = *(int *)(param_11[10] + -4 + lVar4 * 4);
                  lVar5 = (longlong)*(int *)(*param_7 + -4 + lVar4 * 4);
                }
                else if (iVar2 < iVar7) {
                  *(int *)(*param_6 + -4 + lVar4 * 4) = iVar2;
                }
              }
            }
            iVar7 = (int)lVar8;
            lVar4 = (longlong)iVar9;
          } while (lVar4 < lVar5);
        }
        *(int *)(*param_5 + *param_3 * 4) = iVar7;
        *param_3 = *param_3 + 1;
        lVar8 = (longlong)*(int *)(*param_9 + (longlong)iVar7 * 4);
        if (lVar8 == -1) break;
        piVar6 = (int *)(*param_10 + lVar8 * 4);
        piVar3 = (int *)(lVar8 * 4 + *param_7);
      }
    }
    else if (iVar7 < iVar9) {
      *(int *)(*param_6 + -4 + lVar5 * 4) = iVar7;
    }
  }
  return;
}



// FUNCTION 1484a19c8 FUN_1484a19c8 body=267 status=ok
// SIG undefined FUN_1484a19c8(void)

void FUN_1484a19c8(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  
  fVar1 = *(float *)(*param_1 + (longlong)*(int *)(*param_6 + param_7 * 4 + param_8 * 4) * 4);
  lVar12 = (param_4 + 1) * param_8;
  lVar13 = *param_3;
  *param_3 = lVar12 + lVar13 + 1;
  pfVar11 = (float *)((lVar12 + lVar13) * 4 + 4 + *param_2);
  piVar7 = (int *)(param_7 * 4 + *param_6 + param_8 * 4 + 4);
  if (param_5 < 2) {
    lVar13 = 0;
  }
  else {
    fVar14 = -fVar1;
    piVar5 = piVar7;
    pfVar6 = pfVar11;
    lVar12 = 0;
    do {
      pfVar10 = pfVar6;
      piVar9 = piVar5;
      piVar5 = piVar7 + lVar12;
      iVar4 = piVar5[1];
      lVar13 = *param_1;
      pfVar6 = pfVar11 + lVar12 + 2;
      fVar2 = pfVar6[-1];
      fVar3 = *(float *)(lVar13 + (longlong)iVar4 * 4);
      *(float *)(lVar13 + (longlong)*piVar5 * 4) =
           pfVar6[-2] * fVar14 + *(float *)(lVar13 + (longlong)*piVar5 * 4);
      *(float *)(*param_1 + (longlong)iVar4 * 4) = fVar2 * fVar14 + fVar3;
      lVar13 = lVar12 + 2;
      lVar8 = lVar12 + 3;
      piVar5 = piVar5 + 2;
      lVar12 = lVar13;
    } while (lVar8 < param_5);
    piVar7 = piVar9 + 2;
    pfVar11 = pfVar10 + 2;
  }
  if (lVar13 < param_5) {
    *(float *)(*param_1 + (longlong)*piVar7 * 4) =
         *(float *)(*param_1 + (longlong)*piVar7 * 4) - fVar1 * *pfVar11;
  }
  return;
}



// FUNCTION 1484a1ad4 FUN_1484a1ad4 body=628 status=ok
// SIG undefined FUN_1484a1ad4(void)

void FUN_1484a1ad4(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong *param_8,
                  longlong param_9,longlong param_10)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  undefined1 local_d1;
  longlong *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < param_1) {
    lVar4 = 0;
    do {
      *(undefined4 *)(*param_3 + lVar4 * 4) =
           *(undefined4 *)
            (*param_2 + (longlong)*(int *)(*param_8 + param_9 * 4 + param_10 * 4 + lVar4 * 4) * 4);
      lVar4 = lVar4 + 1;
    } while (param_1 != lVar4);
  }
  param_9 = param_9 + param_10;
  lVar4 = (param_6 + 1) * param_10 + *param_5;
  *param_5 = lVar4;
  local_a8 = lVar4 * 4 + *param_4;
  local_80 = *param_3;
  local_90 = param_6;
  local_e0 = param_4;
  local_a0 = param_1;
  local_98 = param_1;
  uStack_78 = param_1;
  FUN_1484a0cb2(&local_a8,&local_80,&local_80);
  lVar4 = *param_5;
  local_90 = param_7 + 6;
  if (-1 < (longlong)(param_7 + 3U)) {
    local_90 = param_7 + 3U;
  }
  *param_5 = lVar4 + param_1;
  uVar6 = (lVar4 + param_1) * 4 + *local_e0;
  uVar2 = param_1 * 4 + *param_3;
  local_90 = local_90 & 0xfffffffffffffffc;
  uVar5 = 4;
  if ((uVar2 & 3) == 0) {
    uVar5 = (ulonglong)(-((uint)(uVar2 >> 2) & 0x3fffffff) & 3);
  }
  uVar1 = 0;
  if ((uVar6 & 3) == 0) {
    uVar1 = (uint)(uVar6 >> 2) & 3;
  }
  local_a8 = uVar2 + uVar5 * 4 + (ulonglong)uVar1 * 4;
  local_a0 = param_7;
  local_c8 = local_b0;
  local_b0[0] = 0;
  local_d0 = local_60;
  local_c0 = &local_d1;
  local_b8 = &local_a8;
  local_60[0] = local_a8;
  local_50 = local_90;
  FUN_1484a0b84();
  local_e8 = local_90;
  local_f0 = local_a8;
  local_100 = (undefined4)local_80;
  uStack_fc = local_80._4_4_;
  uStack_f8 = (undefined4)uStack_78;
  uStack_f4 = uStack_78._4_4_;
  local_108 = param_6;
  FUN_14849e7d6(local_a0,1,param_1,uVar6);
  if (0 < param_1) {
    lVar4 = 0;
    do {
      lVar3 = param_9 * 4;
      param_9 = param_9 + 1;
      *(undefined4 *)(*param_2 + (longlong)*(int *)(*param_8 + lVar3) * 4) =
           *(undefined4 *)(*param_3 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (param_1 != lVar4);
  }
  if (0 < param_7) {
    lVar4 = 0;
    do {
      lVar3 = (longlong)*(int *)(*param_8 + param_9 * 4 + lVar4 * 4);
      *(float *)(*param_2 + lVar3 * 4) =
           *(float *)(*param_2 + lVar3 * 4) - *(float *)(local_a8 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (param_7 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a1d4a FUN_1484a1d4a body=149 status=ok
// SIG undefined FUN_1484a1d4a(void)

void FUN_1484a1d4a(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar4 = uVar3;
  if (((uVar5 & 3) == 0) &&
     (uVar4 = (ulonglong)(-((uint)(uVar5 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar4)) {
    uVar4 = uVar3;
  }
  uVar7 = uVar3 - uVar4;
  uVar5 = uVar7 + 3;
  if (-1 < (longlong)uVar7) {
    uVar5 = uVar7;
  }
  lVar6 = (uVar5 & 0xfffffffffffffffc) + uVar4;
  FUN_1484a1de0(param_1,0,uVar4);
  if (3 < (longlong)uVar7) {
    do {
      uVar2 = *(undefined4 *)param_1[1];
      puVar1 = (undefined4 *)(*(longlong *)*param_1 + uVar4 * 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar2;
      puVar1[3] = uVar2;
      uVar4 = uVar4 + 4;
    } while ((longlong)uVar4 < lVar6);
  }
  FUN_1484a1de0(param_1,lVar6,uVar3);
  return;
}



// FUNCTION 1484a1de0 FUN_1484a1de0 body=34 status=ok
// SIG undefined FUN_1484a1de0(void)

void FUN_1484a1de0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) = *(undefined4 *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a1e02 FUN_1484a1e02 body=192 status=ok
// SIG undefined FUN_1484a1e02(void)

void FUN_1484a1e02(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_3 == *param_2) {
    lVar2 = *(longlong *)(param_3[3] + 8);
    lVar1 = *(longlong *)(param_2[3] + 8);
    if (lVar2 == lVar1) goto LAB_1484a1e43;
  }
  else {
    lVar1 = *(longlong *)(param_2[3] + 8);
    lVar2 = *(longlong *)(param_3[3] + 8);
  }
  local_60 = local_30;
  local_68 = local_48;
  local_58 = &local_69;
  local_50 = param_3;
  local_48[0] = *param_3;
  local_38 = lVar2;
  local_30[0] = *param_2;
  local_20 = lVar1;
  FUN_1484a1ec4();
LAB_1484a1e43:
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1484a1f7e(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a1ec4 FUN_1484a1ec4 body=148 status=ok
// SIG undefined FUN_1484a1ec4(void)

void FUN_1484a1ec4(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_1484a1f58(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_1484a1f58(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 1484a1f58 FUN_1484a1f58 body=38 status=ok
// SIG undefined FUN_1484a1f58(void)

void FUN_1484a1f58(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a1f7e FUN_1484a1f7e body=286 status=ok
// SIG undefined FUN_1484a1f7e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1484a1f7e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 4;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1484a2015;
  FUN_1484a0f3a(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 2)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1484a2034;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1484a205b;
  FUN_144d8e3a0();
}



// FUNCTION 1484a20a2 FUN_1484a20a2 body=242 status=ok
// SIG undefined FUN_1484a20a2(void)

void FUN_1484a20a2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[1] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      pfVar2 = (float *)*param_2;
      fVar4 = *(float *)*param_3 * *pfVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pfVar2 = pfVar2 + param_2[3];
          fVar4 = fVar4 + ((float *)*param_3)[lVar3] * *pfVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(float *)*param_1 = *param_4 * fVar4 + *(float *)*param_1;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[3];
    local_20 = *param_3;
    local_38 = *param_4;
    local_48 = *param_1;
    local_18 = 1;
    local_40 = 1;
    FUN_147509b58(param_2[1],param_2[2]);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a2196 FUN_1484a2196 body=306 status=ok
// SIG undefined FUN_1484a2196(void)

void FUN_1484a2196(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong *local_98;
  undefined8 local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_58;
  undefined8 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146dddaba(param_3,param_2[1],1);
  local_78 = param_1 + 0x110;
  local_70 = *param_2;
  local_68 = param_2[1];
  local_50 = 0;
  local_b0 = *param_3;
  local_a8 = param_3[1];
  local_90 = 0;
  local_98 = param_3;
  local_80 = local_a8;
  local_58 = param_2;
  local_40 = local_68;
  FUN_1484a2442(&local_b0,local_78,&local_70);
  FUN_1484a2578(param_1 + 0x78,param_3);
  local_70 = param_1 + 0xc0;
  local_78 = param_1 + 0x78;
  FUN_1484a22ca(&local_78,param_3);
  local_78 = param_1 + 0x100;
  local_b0 = *param_3;
  local_a8 = param_3[1];
  local_50 = 0;
  local_90 = 0;
  local_98 = param_3;
  local_80 = local_a8;
  local_70 = local_b0;
  local_68 = local_a8;
  local_58 = param_3;
  local_40 = local_a8;
  FUN_1484a30cc(&local_b0,local_78);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a22ca FUN_1484a22ca body=375 status=ok
// SIG undefined FUN_1484a22ca(void)

void FUN_1484a22ca(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (-1 < *(longlong *)(*param_1 + 0x10)) {
    lVar3 = param_2[1];
    lVar12 = *(longlong *)(*param_1 + 0x10);
    do {
      lVar4 = *param_1;
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x40) + lVar12 * 4);
      lVar11 = (longlong)iVar1;
      lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar11 * 4);
      iVar2 = *(int *)(*(longlong *)(lVar4 + 0x40) + 4 + lVar12 * 4);
      lVar9 = iVar2 - lVar11;
      if (lVar9 == 1) {
        *(float *)(*param_2 + lVar11 * 4) =
             *(float *)(*param_2 + lVar11 * 4) / *(float *)(*(longlong *)(lVar4 + 0x18) + lVar8 * 4)
        ;
      }
      else {
        local_80 = *(int *)(*(longlong *)(lVar4 + 0x20) + 4 + lVar11 * 4) - lVar8;
        local_98 = lVar8 * 4 + *(longlong *)(lVar4 + 0x18);
        local_70 = lVar11 * 4 + *param_2;
        local_90 = lVar9;
        local_88 = lVar9;
        local_68 = lVar9;
        local_58 = lVar3;
        FUN_1484a2c8e(&local_98,&local_70,&local_70);
      }
      if (iVar1 < iVar2) {
        do {
          lVar4 = param_1[1];
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar11 * 4);
          if (*(longlong *)(lVar4 + 0x38) == 0) {
            lVar9 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + 4 + lVar11 * 4);
          }
          else {
            lVar9 = *(int *)(*(longlong *)(lVar4 + 0x38) + lVar11 * 4) + lVar8;
          }
          if (lVar8 < lVar9) {
            lVar5 = *(longlong *)(lVar4 + 0x30);
            lVar4 = *(longlong *)(lVar4 + 0x28);
            do {
              lVar10 = (longlong)*(int *)(lVar4 + lVar8 * 4);
              lVar6 = *param_2;
              *(float *)(lVar6 + lVar10 * 4) =
                   *(float *)(lVar6 + lVar10 * 4) -
                   *(float *)(lVar6 + lVar11 * 4) * *(float *)(lVar5 + lVar8 * 4);
              lVar8 = lVar8 + 1;
            } while (lVar9 != lVar8);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != iVar2);
      }
      bVar7 = 0 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a2442 FUN_1484a2442 body=309 status=ok
// SIG undefined FUN_1484a2442(void)

void FUN_1484a2442(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_3;
  lVar3 = param_3[1];
  if ((*param_1 == lVar4) && (*(longlong *)(param_1[3] + 8) == *(longlong *)(param_3[3] + 8))) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar4 = param_2[1];
    if (0 < lVar4) {
      lVar3 = 0;
      do {
        while (lVar5 = lVar3 + 1, *(char *)((longlong)local_38 + lVar3) != '\x01') {
          *(undefined1 *)((longlong)local_38 + lVar3) = 1;
          iVar2 = *(int *)(*param_2 + -4 + lVar5 * 4);
          while (lVar4 = (longlong)iVar2, lVar5 - lVar4 != 1) {
            lVar3 = *param_1;
            uVar1 = *(undefined4 *)(lVar3 + lVar4 * 4);
            *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)(lVar3 + -4 + lVar5 * 4);
            *(undefined4 *)(lVar3 + -4 + lVar5 * 4) = uVar1;
            *(undefined1 *)((longlong)local_38 + lVar4) = 1;
            iVar2 = *(int *)(*param_2 + lVar4 * 4);
          }
          lVar4 = param_2[1];
          lVar3 = lVar5;
          if (lVar4 <= lVar5) goto LAB_1484a2569;
        }
        lVar3 = lVar5;
      } while (lVar5 < lVar4);
    }
LAB_1484a2569:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar3) {
    lVar5 = 0;
    do {
      *(undefined4 *)(*param_1 + (longlong)*(int *)(*param_2 + lVar5 * 4) * 4) =
           *(undefined4 *)(lVar4 + lVar5 * 4);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a2578 FUN_1484a2578 body=760 status=ok
// SIG undefined FUN_1484a2578(void)

void FUN_1484a2578(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = (longlong)(int)param_2[1];
  local_120 = *(longlong *)(param_1 + 0x18);
  local_108 = 0;
  lStack_100 = 0;
  FUN_146dddaba(&local_108,local_118,1);
  local_b8 = lStack_100;
  local_b0 = (ulonglong)(uint)local_b0;
  FUN_146dde1b2(&local_108,&local_c0,&local_f8);
  if (-1 < *(longlong *)(param_1 + 0x10)) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar5 = *(longlong *)(param_1 + 0x40);
      lVar9 = (longlong)*(int *)(lVar5 + lVar8 * 4);
      lVar4 = (longlong)*(int *)(lVar5 + 4 + lVar8 * 4);
      uVar10 = lVar4 - lVar9;
      if (uVar10 == 1) {
        lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar9 * 4);
        if (lVar4 + 1 < lVar2) {
          lVar6 = (longlong)
                  *(int *)(lVar5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + lVar9 * 4) * 4
                          );
          lVar5 = (longlong)*(int *)(lVar3 + lVar6 * 4);
          lVar3 = (longlong)*(int *)(lVar3 + 4 + lVar6 * 4);
          if (lVar5 + 1 < lVar3) {
            lVar4 = lVar4 + 2;
            lVar5 = lVar5 + 2;
            do {
              lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + -4 + lVar5 * 4);
              lVar6 = *param_2;
              *(float *)(lVar6 + lVar7 * 4) =
                   *(float *)(lVar6 + lVar7 * 4) -
                   *(float *)(lVar6 + lVar9 * 4) *
                   *(float *)(*(longlong *)(param_1 + 0x18) + -4 + lVar4 * 4);
              if (lVar2 <= lVar4) break;
              lVar4 = lVar4 + 1;
              bVar1 = lVar5 < lVar3;
              lVar5 = lVar5 + 1;
            } while (bVar1);
          }
        }
      }
      else {
        local_128 = (longlong)*(int *)(lVar3 + lVar9 * 4);
        lVar5 = (longlong)*(int *)(lVar3 + 4 + lVar9 * 4) - (local_128 + uVar10);
        lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
        lVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar9 * 4) - lVar3;
        local_110 = local_120 + lVar3 * 4;
        local_70 = *param_2 + lVar9 * 4;
        local_58 = local_118;
        local_c0 = local_110;
        local_b8 = uVar10;
        local_b0 = uVar10;
        local_a8 = lVar2;
        uStack_68 = uVar10;
        FUN_1484a2872(&local_c0,&local_70,&local_70);
        local_c0 = local_110 + uVar10 * 4;
        local_88 = local_60;
        local_98 = (undefined4)local_70;
        uStack_94 = local_70._4_4_;
        uStack_90 = (undefined4)uStack_68;
        uStack_8c = uStack_68._4_4_;
        local_80 = local_58;
        local_f8 = local_108;
        local_e0 = &local_108;
        local_d8 = 0;
        local_c8 = lStack_100;
        local_f0 = lVar5;
        local_b8 = lVar5;
        local_b0 = uVar10;
        local_a8 = lVar2;
        FUN_1484a2afa(&local_f8,&local_c0);
        if (0 < lVar5) {
          lVar3 = 0;
          do {
            lVar2 = (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x28) + lVar4 * 4 + local_128 * 4 + lVar9 * -4
                            + lVar3 * 4);
            *(float *)(*param_2 + lVar2 * 4) =
                 *(float *)(*param_2 + lVar2 * 4) - *(float *)(local_108 + lVar3 * 4);
            *(undefined4 *)(local_108 + lVar3 * 4) = 0;
            lVar3 = lVar3 + 1;
          } while (lVar3 < lVar5);
        }
      }
      bVar1 = lVar8 < *(longlong *)(param_1 + 0x10);
      lVar8 = lVar8 + 1;
    } while (bVar1);
  }
  FUN_1400020a8(local_108);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a2872 FUN_1484a2872 body=168 status=ok
// SIG undefined FUN_1484a2872(void)

void FUN_1484a2872(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[3] != param_2[3])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[3];
    local_30[0] = *param_2;
    local_20 = param_2[3];
    FUN_1484a291c();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1484a29d6(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a291c FUN_1484a291c body=148 status=ok
// SIG undefined FUN_1484a291c(void)

void FUN_1484a291c(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar3 = ((ulonglong *)param_1[3])[1];
  uVar7 = uVar3;
  if (((uVar8 & 3) == 0) &&
     (uVar7 = (ulonglong)(-((uint)(uVar8 >> 2) & 0x3fffffff) & 3),
     (longlong)uVar3 <= (longlong)uVar7)) {
    uVar7 = uVar3;
  }
  uVar10 = uVar3 - uVar7;
  uVar8 = uVar10 + 3;
  if (-1 < (longlong)uVar10) {
    uVar8 = uVar10;
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar7;
  FUN_1484a29b0(param_1,0,uVar7);
  if (3 < (longlong)uVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar7 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar7 = uVar7 + 4;
    } while ((longlong)uVar7 < lVar9);
  }
  FUN_1484a29b0(param_1,lVar9,uVar3);
  return;
}



// FUNCTION 1484a29b0 FUN_1484a29b0 body=38 status=ok
// SIG undefined FUN_1484a29b0(void)

void FUN_1484a29b0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1484a29d6 FUN_1484a29d6 body=286 status=ok
// SIG undefined FUN_1484a29d6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1484a29d6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 4;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1484a2a6d;
  FUN_1484a0f3a(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 2)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1484a2a8c;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1484a2ab3;
  FUN_144d8e3a0();
}



// FUNCTION 1484a2afa FUN_1484a2afa body=158 status=ok
// SIG undefined FUN_1484a2afa(void)

void FUN_1484a2afa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  undefined8 local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = local_48;
  local_48[0] = 0;
  local_40[0] = *param_1;
  local_68 = local_40;
  local_30 = *(undefined8 *)(param_1[3] + 8);
  local_58 = &local_69;
  local_50 = param_1;
  FUN_1484a1d4a(&local_68);
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,0x3f800000);
  FUN_1484a2b9a(param_1,param_2,param_3,&local_68);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a2b9a FUN_1484a2b9a body=242 status=ok
// SIG undefined FUN_1484a2b9a(void)

void FUN_1484a2b9a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[1] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      pfVar2 = (float *)*param_2;
      fVar4 = *(float *)*param_3 * *pfVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pfVar2 = pfVar2 + param_2[3];
          fVar4 = fVar4 + ((float *)*param_3)[lVar3] * *pfVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(float *)*param_1 = *param_4 * fVar4 + *(float *)*param_1;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[3];
    local_20 = *param_3;
    local_38 = *param_4;
    local_48 = *param_1;
    local_18 = 1;
    local_40 = 1;
    FUN_147509b58(param_2[1],param_2[2]);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a2c8e FUN_1484a2c8e body=168 status=ok
// SIG undefined FUN_1484a2c8e(void)

void FUN_1484a2c8e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_3 != *param_2) || (param_3[3] != param_2[3])) {
    local_60 = local_30;
    local_68 = local_48;
    local_58 = &local_69;
    local_50 = param_3;
    local_48[0] = *param_3;
    local_38 = param_3[3];
    local_30[0] = *param_2;
    local_20 = param_2[3];
    FUN_1484a291c();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1484a2d38(param_1,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a2d38 FUN_1484a2d38 body=286 status=ok
// SIG undefined FUN_1484a2d38(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1484a2d38(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  if ((ulonglong)param_2[1] >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  puVar9 = auStack_38;
  puVar7 = (undefined1 *)*param_2;
  if (puVar7 == (undefined1 *)0x0) {
    uVar6 = param_2[1] * 4;
    if (uVar6 < 0x20001) {
      lVar1 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      puVar9 = auStack_38 + lVar1;
      puVar7 = auStack_38 + lVar1;
    }
    else {
      puVar7 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      puVar9 = auStack_38;
      if (puVar7 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar9 = auStack_38;
        puVar7 = (undefined1 *)0x0;
      }
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar3 = param_1[3];
  uVar4 = *param_1;
  uVar5 = param_1[2];
  *(undefined8 *)(puVar9 + -0x28) = 0x1484a2dcf;
  FUN_1484a2e5c(uVar5,uVar4,uVar3,puVar7);
  if (0x20000 < (ulonglong)(lVar2 << 2)) {
    puVar8 = (undefined1 *)0x0;
    if (lVar1 == 0) {
      puVar8 = puVar7;
    }
    *(undefined8 *)(puVar9 + -0x28) = 0x1484a2dee;
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_1484a2e15;
  FUN_144d8e3a0();
}



// FUNCTION 1484a2e5c FUN_1484a2e5c body=622 status=ok
// SIG undefined FUN_1484a2e5c(void)

void FUN_1484a2e5c(ulonglong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_128;
  undefined8 *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  float *local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e1;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_4;
  local_120 = param_3;
  local_118 = param_2;
  if (0 < (longlong)param_1) {
    lVar3 = param_1 * 4 + (param_1 - 1) * (longlong)param_3 * 4;
    pfVar9 = (float *)(param_2 + lVar3 + -4);
    local_108 = ~(ulonglong)param_3 << 5;
    lVar3 = lVar3 + param_2;
    lVar6 = param_4 + param_1 * 4 + -4;
    do {
      uVar7 = 8;
      if (param_1 < 8) {
        uVar7 = param_1;
      }
      lVar4 = lVar3 - (ulonglong)(uint)((int)uVar7 * 4);
      lVar5 = param_1 - uVar7;
      local_110 = local_128 + lVar5 * 4;
      lVar8 = 0;
      local_100 = pfVar9;
      local_f8 = lVar3;
      local_f0 = param_1;
      do {
        fVar1 = *(float *)(lVar6 + lVar8 * 4);
        if ((fVar1 != 0.0) || (NAN(fVar1))) {
          fVar2 = *pfVar9;
          *(float *)(lVar6 + lVar8 * 4) = fVar1 / fVar2;
          lVar3 = lVar8 + uVar7 + -1;
          if (0 < lVar3) {
            local_c0 = local_110;
            local_88 = CONCAT44(fVar1 / fVar2,(undefined4)local_88);
            local_68 = local_120;
            local_a0[0] = local_110;
            local_e0 = local_a0;
            local_d8 = &local_88;
            local_d0 = &local_e1;
            local_c8 = &local_c0;
            local_b8 = lVar3;
            local_90 = lVar3;
            local_78 = lVar4;
            FUN_1484a1624(&local_e0);
          }
        }
        lVar8 = lVar8 + -1;
        pfVar9 = (float *)((longlong)pfVar9 + ((longlong)param_3 * 4 ^ 0xfffffffffffffffcU));
        lVar4 = lVar4 + (longlong)param_3 * -4;
      } while (uVar7 + lVar8 != 0);
      if (0 < lVar5) {
        local_88 = local_110;
        local_80 = 1;
        local_e0 = (longlong *)(local_118 + lVar5 * (longlong)local_120 * 4);
        local_d8 = local_120;
        local_138 = local_128;
        FUN_1484a11be(lVar5,uVar7,&local_e0,&local_88);
      }
      param_1 = local_f0 - 8;
      pfVar9 = (float *)((longlong)local_100 + local_108);
      lVar3 = local_f8 + local_108;
      lVar6 = lVar6 + -0x20;
    } while (8 < (longlong)local_f0);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a30cc FUN_1484a30cc body=307 status=ok
// SIG undefined FUN_1484a30cc(void)

void FUN_1484a30cc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  size_t sStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_3;
  lVar4 = param_3[1];
  if ((*param_1 == lVar5) && (*(longlong *)(param_1[3] + 8) == *(longlong *)(param_3[3] + 8))) {
    local_38 = (void *)0x0;
    sStack_30 = 0;
    FUN_146de2a82(&local_38,param_2[1],param_2[1],1);
    if (0 < (longlong)sStack_30) {
      memset(local_38,0,sStack_30);
    }
    lVar5 = param_2[1];
    if (0 < lVar5) {
      lVar4 = 0;
      do {
        while (*(char *)((longlong)local_38 + lVar4) == '\x01') {
          lVar4 = lVar4 + 1;
          if (lVar5 <= lVar4) goto LAB_1484a31f1;
        }
        *(undefined1 *)((longlong)local_38 + lVar4) = 1;
        iVar2 = *(int *)(*param_2 + lVar4 * 4);
        lVar5 = lVar4;
        while (lVar6 = (longlong)iVar2, lVar6 != lVar4) {
          lVar3 = *param_1;
          uVar1 = *(undefined4 *)(lVar3 + lVar6 * 4);
          *(undefined4 *)(lVar3 + lVar6 * 4) = *(undefined4 *)(lVar3 + lVar5 * 4);
          *(undefined4 *)(lVar3 + lVar5 * 4) = uVar1;
          *(undefined1 *)((longlong)local_38 + lVar6) = 1;
          lVar5 = lVar6;
          iVar2 = *(int *)(*param_2 + lVar6 * 4);
        }
        lVar4 = lVar4 + 1;
        lVar5 = param_2[1];
      } while (lVar4 < lVar5);
    }
LAB_1484a31f1:
    FUN_1400020a8(local_38);
  }
  else if (0 < lVar4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(*param_1 + lVar6 * 4) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(*param_2 + lVar6 * 4) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a3200 FUN_1484a3200 body=99 status=ok
// SIG undefined FUN_1484a3200(void)

void FUN_1484a3200(undefined8 *param_1)

{
  FUN_1400020a8(param_1[0x12]);
  FUN_1400020a8(param_1[0x10]);
  FUN_1400020a8(param_1[0xe]);
  FUN_1400020a8(param_1[10]);
  FUN_1400020a8(param_1[8]);
  FUN_1400020a8(param_1[6]);
  FUN_1400020a8(param_1[4]);
  FUN_1400020a8(param_1[2]);
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 1484a3264 FUN_1484a3264 body=82 status=ok
// SIG undefined FUN_1484a3264(void)

void FUN_1484a3264(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1484a32b7 FUN_1484a32b7 body=47 status=ok
// SIG undefined FUN_1484a32b7(void)

void FUN_1484a32b7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1484a32e6 FUN_1484a32e6 body=52 status=ok
// SIG undefined FUN_1484a32e6(void)

void FUN_1484a32e6(longlong *param_1)

{
  FUN_1484a331a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484a331a FUN_1484a331a body=89 status=ok
// SIG undefined FUN_1484a331a(void)

void FUN_1484a331a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1484a3374 FUN_1484a3374 body=141 status=ok
// SIG undefined FUN_1484a3374(void)

void FUN_1484a3374(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 2,4);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 2)) {
    uVar3 = uVar2 >> 2;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,4,4);
  return;
}



// FUNCTION 1484a3402 FUN_1484a3402 body=67 status=ok
// SIG undefined FUN_1484a3402(void)

void FUN_1484a3402(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1484a3446(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,4,4);
  }
  return;
}



// FUNCTION 1484a3446 FUN_1484a3446 body=100 status=ok
// SIG undefined FUN_1484a3446(void)

ulonglong FUN_1484a3446(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (((((param_3 - param_2 & 0x3ffffffffffff000) != 0) ||
       ((longlong)(param_2 * 3) < (longlong)(param_3 * 2))) &&
      (param_2 == 0 || 0x40 < (longlong)(param_3 - param_2))) &&
     (param_3 = param_2, 0 < (longlong)param_2)) {
    uVar1 = FUN_144a3809e(param_2 << 2,4);
    param_3 = uVar1 >> 2;
  }
  return param_3;
}



// FUNCTION 1484a34aa FUN_1484a34aa body=91 status=ok
// SIG undefined FUN_1484a34aa(void)

void FUN_1484a34aa(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_146bfd442(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x400 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24) * 2);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 1484a3506 FUN_1484a3506 body=68 status=ok
// SIG undefined FUN_1484a3506(void)

undefined8 * FUN_1484a3506(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5bc0;
  FUN_1457ed392(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a354a FUN_1484a354a body=113 status=ok
// SIG undefined FUN_1484a354a(void)

undefined8 * FUN_1484a354a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5bc0;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a34aa(puVar1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146c4426a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}



// FUNCTION 1484a35bc FUN_1484a35bc body=84 status=ok
// SIG undefined FUN_1484a35bc(void)

undefined8 * FUN_1484a35bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5bc0;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a34aa(puVar1);
  FUN_1484a34aa(puVar1);
  return puVar1;
}



// FUNCTION 1484a3610 FUN_1484a3610 body=110 status=ok
// SIG undefined FUN_1484a3610(void)

undefined8 * FUN_1484a3610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5bc0;
  puVar1[2] = param_3;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a34aa(puVar1);
  FUN_1484a34aa(puVar1);
  FUN_1484a3ce2(puVar1,param_2,param_1);
  return puVar1;
}



// FUNCTION 1484a367e FUN_1484a367e body=190 status=ok
// SIG undefined FUN_1484a367e(void)

void FUN_1484a367e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*param_2 + uVar4 * 4);
      if ((longlong)iVar1 <= (longlong)uVar4 && (longlong)iVar1 != -1) {
        uVar3 = uVar4 >> 8 & 0xffffff;
        uVar5 = ((uint)uVar4 & 0xff) << 3;
        FUN_146bfd34a(param_1 + 0x18,
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) + (ulonglong)uVar5,
                      iVar1 * 2);
        FUN_146bfd34a(param_1 + 0x18,
                      (ulonglong)(uVar5 | 4) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8),iVar1 * 2 + 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != (longlong)(int)lVar2);
  }
  FUN_146bfd442(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x400 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24) * 2);
  return;
}



// FUNCTION 1484a3742 FUN_1484a3742 body=380 status=ok
// SIG undefined FUN_1484a3742(void)

undefined8 FUN_1484a3742(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = *(uint *)(param_3 + 5);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar5 = (ulonglong)uStack_54;
  local_90 = param_3;
  if ((uStack_54 != uVar8) || (uStack_60 != plVar1)) {
    do {
      lVar3 = *local_90;
      lVar9 = (longlong)(int)uVar5 * 0x10;
      cVar4 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar3 + lVar9),&local_68,8);
      if (cVar4 == '\0') {
        uVar6 = 0;
        goto LAB_1484a37d6;
      }
      uVar2 = *(uint *)(lVar3 + lVar9 + 4);
      uVar5 = (ulonglong)(uVar2 >> 5 & 0x3fffff8);
      uVar7 = (ulonglong)((uVar2 & 0xff) << 3);
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar5) + uVar7) =
           (undefined4)local_68;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar5) + 4 + uVar7) = local_68._4_4_;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar5 = (ulonglong)uStack_74;
    } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || uStack_74 != uVar8) ||
             local_90 != param_3);
  }
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_1484a37d6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1484a397a FUN_1484a397a body=56 status=ok
// SIG undefined FUN_1484a397a(void)

undefined8 * FUN_1484a397a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14aee5ca0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1484a39b2 FUN_1484a39b2 body=62 status=ok
// SIG undefined FUN_1484a39b2(void)

void FUN_1484a39b2(longlong *param_1,longlong param_2)

{
  FUN_1484a3d6c(param_1,*(undefined4 *)(param_2 + 0x20));
  (**(code **)(*param_1 + 200))
            (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1484a39f2 FUN_1484a39f2 body=40 status=ok
// SIG undefined FUN_1484a39f2(void)

void FUN_1484a39f2(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 0xc),*param_2,*param_2,param_2[1],
             *(undefined8 *)(param_2 + 0xc));
  return;
}



// FUNCTION 1484a3a1a FUN_1484a3a1a body=81 status=ok
// SIG undefined FUN_1484a3a1a(void)

void FUN_1484a3a1a(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  FUN_1484a3d6c(param_1,*(undefined4 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0xd0))
            (param_1,*(undefined4 *)(param_2 + 0x10),uVar1,uVar2,uVar3,param_2 + 0x28);
  return;
}



// FUNCTION 1484a3a6c FUN_1484a3a6c body=98 status=ok
// SIG undefined FUN_1484a3a6c(void)

void FUN_1484a3a6c(longlong *param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
               *(int *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x68));
  }
  if (*(int *)(param_2 + 0x14) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),
               *(int *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 1484a3ace FUN_1484a3ace body=40 status=ok
// SIG undefined FUN_1484a3ace(void)

void FUN_1484a3ace(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 2),*param_2,*param_2,param_2[1],*(undefined8 *)(param_2 + 2))
  ;
  return;
}



// FUNCTION 1484a3af6 FUN_1484a3af6 body=108 status=ok
// SIG undefined FUN_1484a3af6(void)

void FUN_1484a3af6(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = param_2[1];
  uVar3 = (ulonglong)(*param_2 >> 5 & 0x3fffff8);
  uVar2 = (*param_2 & 0xff) << 3;
  FUN_146bfd34a(param_1 + 0x18,
                *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3) + (ulonglong)uVar2,uVar1 * 2);
  FUN_146bfd34a(param_1 + 0x18,
                (ulonglong)(uVar2 | 4) + *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3),
                uVar1 * 2 + 1);
  return;
}



// FUNCTION 1484a3b66 FUN_1484a3b66 body=168 status=ok
// SIG undefined FUN_1484a3b66(void)

void FUN_1484a3b66(longlong param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)((param_2 & 0x7fffffff) >> 8) * 8) +
              (uVar4 | param_2 * 2 & 0x1fe) * 4) =
         (float)((double)*(float *)(*(longlong *)
                                     (lVar1 + (ulonglong)((param_4 & 0x7fffffff) >> 8) * 8) +
                                   (uVar4 | param_4 * 2 & 0x1fe) * 4) * param_5 +
                (double)*(float *)(*(longlong *)
                                    (lVar1 + (ulonglong)((param_3 & 0x7fffffff) >> 8) * 8) +
                                  (uVar4 | param_3 * 2 & 0x1fe) * 4) * (1.0 - param_5));
    uVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



// FUNCTION 1484a3c0e FUN_1484a3c0e body=212 status=ok
// SIG undefined FUN_1484a3c0e(void)

void FUN_1484a3c0e(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  double *param_6)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)((param_2 & 0x7fffffff) >> 8) * 8) +
              (uVar4 | param_2 * 2 & 0x1fe) * 4) =
         (float)((double)*(float *)(*(longlong *)
                                     (lVar1 + (ulonglong)((param_5 & 0x7fffffff) >> 8) * 8) +
                                   (uVar4 | param_5 * 2 & 0x1fe) * 4) * param_6[2] +
                (double)*(float *)(*(longlong *)
                                    (lVar1 + (ulonglong)((param_3 & 0x7fffffff) >> 8) * 8) +
                                  (uVar4 | param_3 * 2 & 0x1fe) * 4) * *param_6 +
                (double)*(float *)(*(longlong *)
                                    (lVar1 + (ulonglong)((param_4 & 0x7fffffff) >> 8) * 8) +
                                  (uVar4 | param_4 * 2 & 0x1fe) * 4) * param_6[1]);
    uVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



// FUNCTION 1484a3ce2 FUN_1484a3ce2 body=138 status=ok
// SIG undefined FUN_1484a3ce2(void)

void FUN_1484a3ce2(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  lVar4 = param_2[1];
  if (0 < (longlong)(int)lVar4) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(uint *)(*param_2 + uVar7 * 4);
      if (uVar2 != 0xffffffff) {
        lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x20) + (uVar7 >> 8 & 0xffffff) * 8);
        uVar1 = *(undefined4 *)(lVar3 + 4 + (ulonglong)(uVar6 & 0x7f8));
        uVar5 = (ulonglong)(uVar2 >> 5 & 0x3fffff8);
        uVar8 = (ulonglong)((uVar2 & 0xff) << 3);
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar5) + uVar8) =
             *(undefined4 *)(lVar3 + (ulonglong)(uVar6 & 0x7f8));
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar5) + 4 + uVar8) = uVar1;
      }
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 != uVar7);
  }
  return;
}



// FUNCTION 1484a3d6c FUN_1484a3d6c body=130 status=ok
// SIG undefined FUN_1484a3d6c(void)

void FUN_1484a3d6c(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((-1 < (int)param_2) &&
     (uVar1 = (ulonglong)param_2 * 2 + 2,
     (uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) < uVar1)) {
    uVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
    lVar3 = param_1[3];
    iVar2 = *(int *)((longlong)param_1 + 0x1c);
    FUN_146bfd442(param_1 + 3,uVar1 & 0xffffffff);
    for (uVar4 = (int)lVar3 * 0x200 + iVar2; uVar4 < (uint)uVar1; uVar4 = uVar4 + 1) {
      *(undefined4 *)
       (*(longlong *)(param_1[4] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4) =
           uVar5;
    }
  }
  return;
}



// FUNCTION 1484a3dee FUN_1484a3dee body=71 status=ok
// SIG undefined FUN_1484a3dee(void)

undefined8 * FUN_1484a3dee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5ca0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a3e36 FUN_1484a3e36 body=139 status=ok
// SIG undefined FUN_1484a3e36(void)

void FUN_1484a3e36(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1;
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1484a406e((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar2 + lVar5 * 0xc) = 0;
  *(uint *)(lVar2 + 8 + lVar5 * 0xc) = (uint)param_3;
  uVar3 = (ulonglong)((uint)(param_3 >> 5) & 0x3fffff8);
  uVar4 = (ulonglong)(((uint)param_3 & 0xff) << 3);
  *(undefined4 *)(lVar2 + lVar5 * 0xc) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + uVar3) + uVar4);
  *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + uVar3) + 4 + uVar4);
  return;
}



// FUNCTION 1484a3ec2 FUN_1484a3ec2 body=240 status=ok
// SIG undefined FUN_1484a3ec2(void)

void FUN_1484a3ec2(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar5 = (int)param_3[1];
  iVar6 = *(int *)(param_1 + 0x20) + iVar5;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar6) {
    FUN_1484a4102(plVar1);
    iVar5 = (int)param_3[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_3;
    lVar9 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar9);
      iVar6 = *(int *)(param_1 + 0x20);
      lVar10 = (longlong)iVar6;
      *(uint *)(param_1 + 0x20) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
        FUN_1484a406e(plVar1,iVar6);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + lVar10 * 0xc) = 0;
      *(uint *)(lVar4 + 8 + lVar10 * 0xc) = uVar2;
      uVar7 = (ulonglong)(uVar2 >> 5 & 0x3fffff8);
      uVar8 = (ulonglong)((uVar2 & 0xff) << 3);
      *(undefined4 *)(lVar4 + lVar10 * 0xc) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + uVar7) + uVar8);
      *(undefined4 *)(lVar4 + 4 + lVar10 * 0xc) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + uVar7) + 4 + uVar8);
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar5 * 4 != lVar9);
  }
  return;
}



// FUNCTION 1484a406e FUN_1484a406e body=147 status=ok
// SIG undefined FUN_1484a406e(void)

void FUN_1484a406e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484a4102 FUN_1484a4102 body=112 status=ok
// SIG undefined FUN_1484a4102(void)

void FUN_1484a4102(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1484a4172 FUN_1484a4172 body=91 status=ok
// SIG undefined FUN_1484a4172(void)

void FUN_1484a4172(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_146bfd442(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x800 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24) * 4);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 1484a41ce FUN_1484a41ce body=68 status=ok
// SIG undefined FUN_1484a41ce(void)

undefined8 * FUN_1484a41ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5cd0;
  FUN_1457ed392(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a4212 FUN_1484a4212 body=113 status=ok
// SIG undefined FUN_1484a4212(void)

undefined8 * FUN_1484a4212(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5cd0;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a4172(puVar1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146c4426a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}



// FUNCTION 1484a4284 FUN_1484a4284 body=84 status=ok
// SIG undefined FUN_1484a4284(void)

undefined8 * FUN_1484a4284(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5cd0;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a4172(puVar1);
  FUN_1484a4172(puVar1);
  return puVar1;
}



// FUNCTION 1484a42d8 FUN_1484a42d8 body=110 status=ok
// SIG undefined FUN_1484a42d8(void)

undefined8 * FUN_1484a42d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5cd0;
  puVar1[2] = param_3;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a4172(puVar1);
  FUN_1484a4172(puVar1);
  FUN_1484a4998(puVar1,param_2,param_1);
  return puVar1;
}



// FUNCTION 1484a4346 FUN_1484a4346 body=204 status=ok
// SIG undefined FUN_1484a4346(void)

void FUN_1484a4346(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    iVar6 = 0;
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*param_2 + uVar4 * 4);
      if ((longlong)iVar1 <= (longlong)uVar4 && (longlong)iVar1 != -1) {
        uVar3 = (ulonglong)(iVar6 * 4 & 0x7f0);
        lVar5 = 0;
        do {
          FUN_146bfd34a(param_1 + 0x18,
                        *(longlong *)
                         (*(longlong *)(param_1 + 0x20) +
                         (ulonglong)((uint)(uVar4 >> 7) & 0x7fffff) * 8) + uVar3,
                        (int)lVar5 + iVar1 * 4);
          lVar5 = lVar5 + 1;
          uVar3 = uVar3 + 4;
        } while (lVar5 != 4);
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 != (longlong)(int)lVar2);
  }
  FUN_146bfd442(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x800 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24) * 4);
  return;
}



// FUNCTION 1484a4418 FUN_1484a4418 body=378 status=ok
// SIG undefined FUN_1484a4418(void)

undefined8 FUN_1484a4418(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    uVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar7 = *(uint *)(param_3 + 5);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar4 = (ulonglong)uStack_54;
  local_90 = param_3;
  if ((uStack_54 != uVar7) || (uStack_60 != plVar1)) {
    do {
      lVar6 = *local_90;
      lVar8 = (longlong)(int)uVar4 * 0x10;
      cVar3 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar6 + lVar8),&local_68,0x10);
      if (cVar3 == '\0') {
        uVar5 = 0;
        goto LAB_1484a44ac;
      }
      uVar2 = *(uint *)(lVar6 + lVar8 + 4);
      lVar6 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
          (ulonglong)((uVar2 & 0x7f) << 4) + lVar6 * 4) =
             *(undefined4 *)((longlong)&local_68 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar4 = (ulonglong)uStack_74;
    } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || uStack_74 != uVar7) ||
             local_90 != param_3);
  }
  uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_1484a44ac:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1484a4646 FUN_1484a4646 body=56 status=ok
// SIG undefined FUN_1484a4646(void)

undefined8 * FUN_1484a4646(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14aee5db0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1484a467e FUN_1484a467e body=62 status=ok
// SIG undefined FUN_1484a467e(void)

void FUN_1484a467e(longlong *param_1,longlong param_2)

{
  FUN_1484a4a54(param_1,*(undefined4 *)(param_2 + 0x20));
  (**(code **)(*param_1 + 200))
            (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1484a46be FUN_1484a46be body=40 status=ok
// SIG undefined FUN_1484a46be(void)

void FUN_1484a46be(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 0xc),*param_2,*param_2,param_2[1],
             *(undefined8 *)(param_2 + 0xc));
  return;
}



// FUNCTION 1484a46e6 FUN_1484a46e6 body=81 status=ok
// SIG undefined FUN_1484a46e6(void)

void FUN_1484a46e6(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  FUN_1484a4a54(param_1,*(undefined4 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0xd0))
            (param_1,*(undefined4 *)(param_2 + 0x10),uVar1,uVar2,uVar3,param_2 + 0x28);
  return;
}



// FUNCTION 1484a4738 FUN_1484a4738 body=98 status=ok
// SIG undefined FUN_1484a4738(void)

void FUN_1484a4738(longlong *param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
               *(int *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x68));
  }
  if (*(int *)(param_2 + 0x14) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),
               *(int *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 1484a479a FUN_1484a479a body=40 status=ok
// SIG undefined FUN_1484a479a(void)

void FUN_1484a479a(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 2),*param_2,*param_2,param_2[1],*(undefined8 *)(param_2 + 2))
  ;
  return;
}



// FUNCTION 1484a47c2 FUN_1484a47c2 body=103 status=ok
// SIG undefined FUN_1484a47c2(void)

void FUN_1484a47c2(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (ulonglong)((uVar1 & 0x7f) << 4);
  lVar4 = 0;
  do {
    FUN_146bfd34a(param_1 + 0x18,
                  *(longlong *)
                   (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar1 >> 7 & 0x7fffff) * 8) + uVar3,
                  uVar2 * 4 + (int)lVar4);
    lVar4 = lVar4 + 1;
    uVar3 = uVar3 + 4;
  } while (lVar4 != 4);
  return;
}



// FUNCTION 1484a482e FUN_1484a482e body=156 status=ok
// SIG undefined FUN_1484a482e(void)

void FUN_1484a482e(longlong param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)(param_2 >> 7 & 0x7fffff) * 8) +
               (ulonglong)((param_2 & 0x7f) << 4) + lVar2 * 4) =
         (float)((double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_4 >> 7 & 0x7fffff) * 8)
                                    + (ulonglong)((param_4 & 0x7f) << 4) + lVar2 * 4) * param_5 +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_3 >> 7 & 0x7fffff) * 8) +
                                   (ulonglong)((param_3 & 0x7f) << 4) + lVar2 * 4) * (1.0 - param_5)
                );
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 1484a48ca FUN_1484a48ca body=205 status=ok
// SIG undefined FUN_1484a48ca(void)

void FUN_1484a48ca(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  double *param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(float *)(*(longlong *)(lVar1 + (ulonglong)(param_2 >> 7 & 0x7fffff) * 8) +
               (ulonglong)((param_2 & 0x7f) << 4) + lVar2 * 4) =
         (float)((double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_5 >> 7 & 0x7fffff) * 8)
                                    + (ulonglong)((param_5 & 0x7f) << 4) + lVar2 * 4) * param_6[2] +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_3 >> 7 & 0x7fffff) * 8) +
                                   (ulonglong)((param_3 & 0x7f) << 4) + lVar2 * 4) * *param_6 +
                (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(param_4 >> 7 & 0x7fffff) * 8) +
                                   (ulonglong)((param_4 & 0x7f) << 4) + lVar2 * 4) * param_6[1]);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}



// FUNCTION 1484a4998 FUN_1484a4998 body=187 status=ok
// SIG undefined FUN_1484a4998(void)

void FUN_1484a4998(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    uVar5 = 0;
    do {
      uVar2 = *(uint *)(*param_2 + uVar5 * 4);
      if (uVar2 != 0xffffffff) {
        puVar1 = (undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_3 + 0x20) + (ulonglong)((uint)(uVar5 >> 4) & 0x3fffff8)) +
                 (ulonglong)(((uint)uVar5 & 0x7f) << 4));
        local_28 = *puVar1;
        uStack_20 = puVar1[1];
        lVar4 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
            (ulonglong)((uVar2 & 0x7f) << 4) + lVar4 * 4) =
               *(undefined4 *)((longlong)&local_28 + lVar4 * 4);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (longlong)(int)lVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a4a54 FUN_1484a4a54 body=130 status=ok
// SIG undefined FUN_1484a4a54(void)

void FUN_1484a4a54(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if ((-1 < (int)param_2) &&
     (uVar1 = (ulonglong)param_2 * 4 + 4,
     (uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) < uVar1)) {
    uVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
    lVar3 = param_1[3];
    iVar2 = *(int *)((longlong)param_1 + 0x1c);
    FUN_146bfd442(param_1 + 3,uVar1 & 0xffffffff);
    for (uVar4 = (int)lVar3 * 0x200 + iVar2; uVar4 < (uint)uVar1; uVar4 = uVar4 + 1) {
      *(undefined4 *)
       (*(longlong *)(param_1[4] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4) =
           uVar5;
    }
  }
  return;
}



// FUNCTION 1484a4ad6 FUN_1484a4ad6 body=71 status=ok
// SIG undefined FUN_1484a4ad6(void)

undefined8 * FUN_1484a4ad6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5db0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a4b1e FUN_1484a4b1e body=128 status=ok
// SIG undefined FUN_1484a4b1e(void)

void FUN_1484a4b1e(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = iVar2 + 1;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (*(uint *)(param_1 + 0x14) < uVar3) {
    FUN_1484a4d3e((longlong *)(param_1 + 8));
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(uint *)(puVar1 + 2) = (uint)param_3;
  lVar4 = 0;
  do {
    *(undefined4 *)((longlong)puVar1 + lVar4 * 4) =
         *(undefined4 *)
          (*(longlong *)
            (*(longlong *)(param_2 + 0x20) + (ulonglong)((uint)(param_3 >> 7) & 0x7fffff) * 8) +
           (ulonglong)(((uint)param_3 & 0x7f) << 4) + lVar4 * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  return;
}



// FUNCTION 1484a4b9e FUN_1484a4b9e body=232 status=ok
// SIG undefined FUN_1484a4b9e(void)

void FUN_1484a4b9e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  
  iVar5 = *(int *)(param_3 + 1);
  iVar7 = *(int *)(param_1 + 0x20) + iVar5;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar7) {
    FUN_1484a4dd2(plVar1);
    iVar5 = *(int *)(param_3 + 1);
  }
  if (iVar5 != 0) {
    puVar9 = (uint *)*param_3;
    puVar2 = puVar9 + iVar5;
    do {
      uVar4 = *puVar9;
      iVar5 = *(int *)(param_1 + 0x20);
      uVar6 = iVar5 + 1;
      *(uint *)(param_1 + 0x20) = uVar6;
      if (*(uint *)(param_1 + 0x24) < uVar6) {
        FUN_1484a4d3e(plVar1);
      }
      puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x14);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(uint *)(puVar3 + 2) = uVar4;
      lVar8 = 0;
      do {
        *(undefined4 *)((longlong)puVar3 + lVar8 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar4 >> 7 & 0x7fffff) * 8)
               + (ulonglong)((uVar4 & 0x7f) << 4) + lVar8 * 4);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
  }
  return;
}



// FUNCTION 1484a4d3e FUN_1484a4d3e body=147 status=ok
// SIG undefined FUN_1484a4d3e(void)

void FUN_1484a4d3e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484a4dd2 FUN_1484a4dd2 body=112 status=ok
// SIG undefined FUN_1484a4dd2(void)

void FUN_1484a4dd2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 1484a4e42 FUN_1484a4e42 body=91 status=ok
// SIG undefined FUN_1484a4e42(void)

void FUN_1484a4e42(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_146bfd442(param_1 + 0x18,
                (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24)) * 3);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 1484a4e9e FUN_1484a4e9e body=68 status=ok
// SIG undefined FUN_1484a4e9e(void)

undefined8 * FUN_1484a4e9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5de0;
  FUN_1457ed392(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a4ee2 FUN_1484a4ee2 body=113 status=ok
// SIG undefined FUN_1484a4ee2(void)

undefined8 * FUN_1484a4ee2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5de0;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a4e42(puVar1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146c4426a(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}



// FUNCTION 1484a4f54 FUN_1484a4f54 body=84 status=ok
// SIG undefined FUN_1484a4f54(void)

undefined8 * FUN_1484a4f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5de0;
  puVar1[2] = param_2;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a4e42(puVar1);
  FUN_1484a4e42(puVar1);
  return puVar1;
}



// FUNCTION 1484a4fa8 FUN_1484a4fa8 body=110 status=ok
// SIG undefined FUN_1484a4fa8(void)

undefined8 * FUN_1484a4fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5de0;
  puVar1[2] = param_3;
  FUN_14582f01a(puVar1 + 3);
  FUN_1484a4e42(puVar1);
  FUN_1484a4e42(puVar1);
  FUN_1484a5626(puVar1,param_2,param_1);
  return puVar1;
}



// FUNCTION 1484a5016 FUN_1484a5016 body=173 status=ok
// SIG undefined FUN_1484a5016(void)

void FUN_1484a5016(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    iVar5 = 0;
    lVar4 = 0;
    do {
      iVar1 = *(int *)(*param_2 + lVar4 * 4);
      if (iVar1 <= lVar4 && (longlong)iVar1 != -1) {
        iVar3 = 0;
        do {
          FUN_146bfd34a(param_1 + 0x18,
                        (ulonglong)((iVar5 + iVar3 & 0x1ffU) << 2) +
                        *(longlong *)
                         (*(longlong *)(param_1 + 0x20) +
                         (ulonglong)((uint)(iVar5 + iVar3) >> 9) * 8),iVar1 * 3 + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 != 3);
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 3;
    } while (lVar4 != (int)lVar2);
  }
  FUN_146bfd442(param_1 + 0x18,
                (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24)) * 3);
  return;
}



// FUNCTION 1484a50ca FUN_1484a50ca body=377 status=ok
// SIG undefined FUN_1484a50ca(void)

undefined8 FUN_1484a50ca(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = *(uint *)(param_3 + 5);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar4 = (ulonglong)uStack_54;
  local_90 = param_3;
  if ((uStack_54 != uVar8) || (uStack_60 != plVar1)) {
    do {
      lVar6 = *local_90;
      lVar9 = (longlong)(int)uVar4 * 0x10;
      cVar3 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar6 + lVar9),&local_68,0xc);
      if (cVar3 == '\0') {
        uVar5 = 0;
        goto LAB_1484a515e;
      }
      iVar2 = *(int *)(lVar6 + lVar9 + 4);
      lVar6 = 0;
      do {
        uVar7 = iVar2 * 3 + (int)lVar6;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
         (ulonglong)(uVar7 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_68 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar4 = (ulonglong)uStack_74;
    } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || uStack_74 != uVar8) ||
             local_90 != param_3);
  }
  uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_1484a515e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1484a5244 FUN_1484a5244 body=67 status=ok
// SIG undefined FUN_1484a5244(void)

bool FUN_1484a5244(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_4 == 0xc) {
    lVar1 = 0;
    do {
      uVar2 = param_2 * 3 + (int)lVar1;
      *(undefined4 *)(param_3 + lVar1 * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff) * 4);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
  }
  return param_4 == 0xc;
}



// FUNCTION 1484a5288 FUN_1484a5288 body=67 status=ok
// SIG undefined FUN_1484a5288(void)

bool FUN_1484a5288(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_4 == 0xc) {
    lVar1 = 0;
    do {
      uVar2 = param_2 * 3 + (int)lVar1;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = *(undefined4 *)(param_3 + lVar1 * 4);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
  }
  return param_4 == 0xc;
}



// FUNCTION 1484a52fa FUN_1484a52fa body=56 status=ok
// SIG undefined FUN_1484a52fa(void)

undefined8 * FUN_1484a52fa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14aee5ec0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1484a5332 FUN_1484a5332 body=62 status=ok
// SIG undefined FUN_1484a5332(void)

void FUN_1484a5332(longlong *param_1,longlong param_2)

{
  FUN_1484a56f6(param_1,*(undefined4 *)(param_2 + 0x20));
  (**(code **)(*param_1 + 200))
            (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1484a5372 FUN_1484a5372 body=40 status=ok
// SIG undefined FUN_1484a5372(void)

void FUN_1484a5372(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 0xc),*param_2,*param_2,param_2[1],
             *(undefined8 *)(param_2 + 0xc));
  return;
}



// FUNCTION 1484a539a FUN_1484a539a body=81 status=ok
// SIG undefined FUN_1484a539a(void)

void FUN_1484a539a(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  FUN_1484a56f6(param_1,*(undefined4 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0xd0))
            (param_1,*(undefined4 *)(param_2 + 0x10),uVar1,uVar2,uVar3,param_2 + 0x28);
  return;
}



// FUNCTION 1484a53ec FUN_1484a53ec body=98 status=ok
// SIG undefined FUN_1484a53ec(void)

void FUN_1484a53ec(longlong *param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
               *(int *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x68));
  }
  if (*(int *)(param_2 + 0x14) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),
               *(int *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 1484a544e FUN_1484a544e body=40 status=ok
// SIG undefined FUN_1484a544e(void)

void FUN_1484a544e(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 2),*param_2,*param_2,param_2[1],*(undefined8 *)(param_2 + 2))
  ;
  return;
}



// FUNCTION 1484a5476 FUN_1484a5476 body=92 status=ok
// SIG undefined FUN_1484a5476(void)

void FUN_1484a5476(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar4 = 0;
  do {
    uVar3 = iVar1 * 3 + iVar4;
    FUN_146bfd34a(param_1 + 0x18,
                  (ulonglong)((uVar3 & 0x1ff) << 2) +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8),
                  iVar2 * 3 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  return;
}



// FUNCTION 1484a54d6 FUN_1484a54d6 body=145 status=ok
// SIG undefined FUN_1484a54d6(void)

void FUN_1484a54d6(longlong param_1,int param_2,int param_3,int param_4,double param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    uVar1 = param_3 * 3 + iVar5;
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar2 = param_4 * 3 + iVar5;
    uVar3 = param_2 * 3 + iVar5;
    *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4)
         = (float)((double)*(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                                     (ulonglong)(uVar2 & 0x1ff) * 4) * param_5 +
                  (double)*(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 4) * (1.0 - param_5));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  return;
}



// FUNCTION 1484a5568 FUN_1484a5568 body=190 status=ok
// SIG undefined FUN_1484a5568(void)

void FUN_1484a5568(longlong param_1,int param_2,int param_3,int param_4,int param_5,double *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    uVar1 = param_3 * 3 + iVar6;
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar2 = param_4 * 3 + iVar6;
    uVar3 = param_5 * 3 + iVar6;
    uVar4 = param_2 * 3 + iVar6;
    *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4)
         = (float)((double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                                     (ulonglong)(uVar3 & 0x1ff) * 4) * param_6[2] +
                  (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 4) * *param_6 +
                  (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 4) * param_6[1]);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  return;
}



// FUNCTION 1484a5626 FUN_1484a5626 body=207 status=ok
// SIG undefined FUN_1484a5626(void)

void FUN_1484a5626(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 auStack_34 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    iVar6 = 0;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*param_2 + lVar7 * 4);
      if (iVar1 != -1) {
        lVar4 = *(longlong *)(param_3 + 0x20);
        lVar5 = 0;
        do {
          uVar3 = iVar6 + (int)lVar5;
          auStack_34[lVar5] =
               *(undefined4 *)
                (*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4
                );
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
        lVar4 = 0;
        do {
          uVar3 = iVar1 * 3 + (int)lVar4;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
           (ulonglong)(uVar3 & 0x1ff) * 4) = auStack_34[lVar4];
          lVar4 = lVar4 + 1;
        } while (lVar4 != 3);
      }
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + 3;
    } while (lVar7 != (int)lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


