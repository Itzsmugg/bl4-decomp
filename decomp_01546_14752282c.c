// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14752282c FUN_14752282c body=38 status=ok
// SIG undefined FUN_14752282c(void)

void FUN_14752282c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1475228a0 FUN_1475228a0 body=633 status=ok
// SIG undefined FUN_1475228a0(void)

void FUN_1475228a0(int *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  ulonglong local_50;
  uint local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar3 = FUN_1448332aa(param_2,&DAT_149e3906c), 6 < iVar3)) {
    uVar4 = FUN_1402d40ec(param_2,param_1);
    FUN_1402d40ec(uVar4,param_1 + 2);
  }
  else {
    local_50 = CONCAT71(local_50._1_7_,2);
    local_50 = local_50 & 0xffffffff;
    local_48[0] = CONCAT31(local_48[0]._1_3_,2);
    local_48[1] = 0;
    uVar4 = FUN_147522b6f(param_2,&local_50);
    FUN_147522b6f(uVar4,local_48);
    FUN_147572dde(&local_60,&local_50);
    *param_1 = local_60;
    param_1[1] = iStack_5c;
    param_1[2] = iStack_58;
    param_1[3] = iStack_54;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if (4 < iVar3) {
    FUN_14752254a(param_1 + 4,param_2);
    piVar6 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
      local_50 = CONCAT44(local_50._4_4_,(uint)*(byte *)(param_1 + 5));
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
      if (1 < (uint)local_50) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 5) = (uint)local_50 != 0;
    }
    else {
      *(bool *)(param_1 + 5) = *piVar6 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  local_60 = param_1[0x14];
  puVar2 = (ulonglong *)param_2[1];
  piVar6 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar6) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_60);
    }
  }
  else {
    local_60 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar6;
  }
  piVar6 = param_1 + 6;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      if (*(int **)(param_1 + 0x12) != (int *)0x0) {
        piVar6 = *(int **)(param_1 + 0x12);
      }
      if ((longlong)param_1[0x14] != 0) {
        lVar7 = (longlong)param_1[0x14] * 0xc;
        do {
          FUN_147522b1a(param_2,piVar6);
          piVar6 = piVar6 + 3;
          lVar7 = lVar7 + -0xc;
        } while (lVar7 != 0);
      }
    }
  }
  else if (0 < local_60) {
    iVar3 = 0;
    do {
      local_50 = 0x80000000ffffffff;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_147522b1a(param_2,&local_50);
      iVar1 = param_1[0x14];
      param_1[0x14] = iVar1 + 1U;
      if ((uint)param_1[0x15] < iVar1 + 1U) {
        FUN_147522c04(piVar6,iVar1);
      }
      piVar5 = *(int **)(param_1 + 0x12);
      if (*(int **)(param_1 + 0x12) == (int *)0x0) {
        piVar5 = piVar6;
      }
      piVar5[(longlong)iVar1 * 3 + 2] = local_48[0];
      *(ulonglong *)(piVar5 + (longlong)iVar1 * 3) = local_50;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147522b1a FUN_147522b1a body=85 status=ok
// SIG undefined FUN_147522b1a(void)

undefined8 FUN_147522b1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cab1fd0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1fd0 = FUN_140002ddd(FUN_146339e35,uVar1,L"SectionEvaluationData");
  }
  FUN_14047320e(DAT_14cab1fd0,param_1,param_2,0);
  return param_1;
}



// FUNCTION 147522b6f FUN_147522b6f body=148 status=ok
// SIG undefined FUN_147522b6f(void)

longlong * FUN_147522b6f(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 4);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147522c04 FUN_147522c04 body=133 status=ok
// SIG undefined FUN_147522c04(void)

void FUN_147522c04(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar4;
    FUN_147522c8a(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147522c8a FUN_147522c8a body=141 status=ok
// SIG undefined FUN_147522c8a(void)

void FUN_147522c8a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 147522d18 FUN_147522d18 body=105 status=ok
// SIG undefined FUN_147522d18(void)

void * FUN_147522d18(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x38);
    *(int *)((longlong)param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
    }
    else {
      FUN_147522d82(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x30);
        if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147522d82 FUN_147522d82 body=118 status=ok
// SIG undefined FUN_147522d82(void)

void FUN_147522d82(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147522c8a(param_1,0,iVar3,0xc);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 147522df8 FUN_147522df8 body=100 status=ok
// SIG undefined FUN_147522df8(void)

undefined8 FUN_147522df8(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_147522e5c();
  if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
      (*(char *)(param_1 + 0x14) == *(char *)(param_2 + 0x14))) &&
     (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50))) {
    lVar4 = param_2 + 0x18;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_2 + 0x48);
    }
    lVar3 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    uVar2 = FUN_147522ef5(lVar3,lVar4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147522e5c FUN_147522e5c body=153 status=ok
// SIG undefined FUN_147522e5c(void)

bool FUN_147522e5c(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    if (*param_2 != '\x02') {
      return false;
    }
    cVar2 = param_1[8];
  }
  else {
    cVar2 = param_1[8];
    if (((cVar2 != '\x02') &&
        (((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 4) ||
          ((*(int *)(param_1 + 4) == *(int *)(param_1 + 0xc) && (cVar1 == '\0' || cVar2 == '\0'))))
         && (*param_2 != '\x02')))) && (param_2[8] != '\x02')) {
      if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4)) {
        return true;
      }
      if ((*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc)) &&
         (param_2[8] == '\0' || *param_2 == '\0')) {
        return true;
      }
    }
    if (cVar1 != *param_2) {
      return false;
    }
    if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
      return false;
    }
  }
  if (cVar2 != param_2[8]) {
    return false;
  }
  if (cVar2 != '\x02') {
    return *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
  }
  return true;
}



// FUNCTION 147522ef5 FUN_147522ef5 body=77 status=ok
// SIG undefined FUN_147522ef5(void)

bool FUN_147522ef5(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return true;
  }
  lVar4 = 0;
  do {
    param_3 = param_3 + -1;
    bVar1 = *(int *)(param_2 + 4 + lVar4) == *(int *)(param_1 + 4 + lVar4);
    bVar2 = *(int *)(param_1 + lVar4) == *(int *)(param_2 + lVar4);
    bVar5 = *(char *)(param_1 + 8 + lVar4) == *(char *)(param_2 + 8 + lVar4);
    bVar3 = bVar5 && (bVar1 && bVar2);
    if (!bVar5 || (!bVar1 || !bVar2)) {
      return bVar3;
    }
    lVar4 = lVar4 + 0xc;
  } while (param_3 != 0);
  return bVar3;
}



// FUNCTION 14752307a FUN_14752307a body=59 status=ok
// SIG undefined FUN_14752307a(void)

undefined8 FUN_14752307a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523182 FUN_147523182 body=59 status=ok
// SIG undefined FUN_147523182(void)

undefined8 FUN_147523182(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523250 FUN_147523250 body=55 status=ok
// SIG undefined FUN_147523250(void)

void FUN_147523250(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2140 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2140 = FUN_14171c317(FUN_14633a9c8,uVar1,L"EMovieSceneTimeWarpType");
  }
  return;
}



// FUNCTION 147523288 FUN_147523288 body=213 status=ok
// SIG undefined FUN_147523288(void)

void FUN_147523288(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_18);
  lVar3 = local_18;
  if ((((local_18 == 0) || (lVar2 = FUN_1458f06e6(), lVar1 = local_18, lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (local_18 == 0 ||
      *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    FUN_144a6c4d8();
  }
  else {
    lVar3 = FUN_1458f06e6();
    if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (lVar2 = local_18,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30)) {
      lVar2 = 0;
    }
    plVar4 = *(longlong **)(lVar2 + 0x110);
    if (plVar4 == (longlong *)0x0) {
      FUN_140aa6c08(lVar2);
      plVar4 = *(longlong **)(lVar2 + 0x110);
    }
    (**(code **)(*plVar4 + 0x2d8))();
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752335e FUN_14752335e body=224 status=ok
// SIG undefined FUN_14752335e(void)

undefined8 FUN_14752335e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_20);
  lVar4 = local_20;
  if ((((local_20 == 0) || (lVar3 = FUN_1458f06e6(), lVar1 = local_20, lVar3 == 0)) ||
      (param_1 = (longlong *)(longlong)*(int *)(lVar3 + 0x38),
      *(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (bVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)param_1 * 8) == lVar3 + 0x30,
     param_1 = (longlong *)(ulonglong)(local_20 != 0 && bVar9), local_20 == 0 || !bVar9)) {
    bVar7 = (byte)param_1;
    bVar2 = 0;
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_1458f06e6();
    if (((lVar4 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (lVar3 = local_20,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)) {
      lVar3 = 0;
    }
    plVar8 = *(longlong **)(lVar3 + 0x110);
    if (plVar8 == (longlong *)0x0) {
      FUN_140aa6c08(lVar3);
      plVar8 = *(longlong **)(lVar3 + 0x110);
    }
    uVar5 = (**(code **)(*plVar8 + 0x2b8))(plVar8,param_2);
    bVar7 = (byte)uVar5;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    bVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar2 & bVar7);
}



// FUNCTION 147523440 FUN_147523440 body=51 status=ok
// SIG undefined FUN_147523440(void)

undefined8 FUN_147523440(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 147523474 FUN_147523474 body=150 status=ok
// SIG undefined FUN_147523474(void)

undefined8
FUN_147523474(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_5;
  local_20 = param_5[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = &local_28;
  (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
  plVar3 = (longlong *)param_5[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752350c FUN_14752350c body=51 status=ok
// SIG undefined FUN_14752350c(void)

undefined8 FUN_14752350c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 147523540 FUN_147523540 body=294 status=ok
// SIG undefined FUN_147523540(void)

longlong FUN_147523540(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_28);
  lVar3 = local_28;
  if (((local_28 != 0) && (lVar1 = FUN_1458f06e6(), lVar1 != 0)) &&
     (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) {
    lVar2 = 0;
    if ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30) || (local_28 == 0)) goto LAB_147523577;
    FUN_1458f06e6();
    lVar3 = local_28;
    if (((local_28 == 0) ||
        ((lVar1 = FUN_1458f06e6(), lVar1 == 0 || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))))
        ) || (lVar2 = local_28,
             *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
             lVar1 + 0x30)) {
      lVar2 = 0;
    }
    plVar4 = *(longlong **)(lVar2 + 0x110);
    if (plVar4 == (longlong *)0x0) {
      FUN_140aa6c08(lVar2);
      plVar4 = *(longlong **)(lVar2 + 0x110);
    }
    lVar2 = (**(code **)(*plVar4 + 0x2c0))(plVar4,param_2,param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f06e6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_147523577;
    }
  }
  lVar2 = 0;
LAB_147523577:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 147523668 FUN_147523668 body=297 status=ok
// SIG undefined FUN_147523668(void)

longlong * FUN_147523668(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_70 [2];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_2;
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar2 = FUN_1446f8646();
  local_78 = 0;
  FUN_140af9fb2(local_40,param_3,uVar2,uVar3);
  FUN_1400021e4(local_40,local_70);
  FUN_144a882a8(&local_60,local_70,L"_CustomBinding");
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar5,1);
  uVar3 = FUN_1446f8646();
  local_78 = 0;
  FUN_140af9fb2(&local_48,param_3,uVar3,local_50);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_147523792(param_3,*(undefined8 *)(param_1 + 0x10),local_48);
  (**(code **)(*plVar4 + 0x2f8))(plVar4,param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 147523792 FUN_147523792 body=196 status=ok
// SIG undefined FUN_147523792(void)

undefined8 FUN_147523792(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523858 FUN_147523858 body=93 status=ok
// SIG undefined FUN_147523858(void)

undefined8 FUN_147523858(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14479d2ce(*param_2 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
  }
  plVar3 = (longlong *)param_2[1];
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
  return uVar4;
}



// FUNCTION 1475238b6 FUN_1475238b6 body=88 status=ok
// SIG undefined FUN_1475238b6(void)

void FUN_1475238b6(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x70;
  local_18 = param_1 + 0x60;
  local_30 = param_1 + 0x50;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523910 FUN_147523910 body=497 status=ok
// SIG undefined FUN_147523910(void)

void FUN_147523910(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)*param_1;
  uVar8 = *(uint *)(plVar3 + 1);
  if (uVar8 != 0) {
    uVar10 = 0;
    if (((char)*param_2 != '\x02') && (uVar10 = 0, 0 < (int)uVar8)) {
      uVar10 = 0;
      uVar11 = uVar8;
      do {
        uVar7 = (uVar11 >> 1) + uVar10;
        if (*(int *)(*plVar3 + (ulonglong)uVar7 * 4) < (int)((ulonglong)*param_2 >> 0x20)) {
          uVar10 = uVar7 + (uVar11 & 1);
        }
        bVar2 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar2);
    }
    if ((char)param_2[1] != '\x02') {
      if ((int)uVar8 < 1) {
        uVar8 = 0;
      }
      else {
        uVar6 = (ulonglong)uVar8;
        uVar11 = uVar8;
        uVar8 = 0;
        do {
          uVar6 = uVar6 >> 1;
          uVar7 = (uint)uVar6 + uVar8;
          if (*(int *)(*plVar3 + (ulonglong)uVar7 * 4) <= (int)((ulonglong)param_2[1] >> 0x20)) {
            uVar8 = uVar7 + (uVar11 & 1);
          }
          bVar2 = 1 < uVar11;
          uVar11 = (uint)uVar6;
        } while (bVar2);
      }
    }
    uVar11 = uVar8 - uVar10;
    if (uVar11 != 0 && (int)uVar10 <= (int)uVar8) {
      if (param_3 != (longlong *)0x0) {
        iVar9 = (int)param_3[1];
        iVar5 = iVar9 + uVar11;
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        iVar4 = *(int *)((longlong)param_3 + 0xc);
        if (iVar4 < iVar5) {
          FUN_140aba11c(param_3);
          plVar3 = (longlong *)*param_1;
          iVar9 = (int)param_3[1];
          iVar4 = *(int *)((longlong)param_3 + 0xc);
          iVar5 = iVar9 + uVar11;
        }
        lVar1 = *plVar3;
        *(int *)(param_3 + 1) = iVar5;
        if ((uint)(iVar4 - iVar9) < uVar11) {
          FUN_14753e8f2(param_3,iVar9);
        }
        memcpy((void *)((longlong)iVar9 * 4 + *param_3),(void *)((ulonglong)uVar10 * 4 + lVar1),
               (ulonglong)uVar11 << 2);
      }
      if (param_4 != (longlong *)0x0) {
        iVar5 = uVar11 + (int)param_4[1];
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (*(int *)((longlong)param_4 + 0xc) < iVar5) {
          FUN_1406525c2(param_4,iVar5);
        }
        if ((int)uVar10 < (int)uVar8) {
          do {
            if (param_1[1] == 0) {
              FUN_14045d416(&local_4c);
            }
            else {
              FUN_147a404c6(param_1[1],&local_4c,uVar10);
            }
            iVar5 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
              FUN_14065110c(param_4,iVar5);
            }
            *(undefined4 *)(*param_4 + (longlong)iVar5 * 4) = local_4c;
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147523b04 FUN_147523b04 body=94 status=ok
// SIG undefined FUN_147523b04(void)

void FUN_147523b04(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = FUN_147a40458(param_1 + 0x70,*(undefined4 *)(lVar2 + lVar5 * 4));
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x58))) {
        *(undefined4 *)(lVar1 + lVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar4 * 4);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 147523b62 FUN_147523b62 body=97 status=ok
// SIG undefined FUN_147523b62(void)

void FUN_147523b62(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if (param_1[1] != 0) {
        uVar1 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar2 * 4));
        if ((-1 < (int)uVar1) && ((int)uVar1 < (int)((longlong *)*param_1)[1])) {
          *(undefined4 *)(*param_3 + lVar2 * 4) =
               *(undefined4 *)(*(longlong *)*param_1 + (ulonglong)uVar1 * 4);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 147523bc4 FUN_147523bc4 body=110 status=ok
// SIG undefined FUN_147523bc4(void)

void FUN_147523bc4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147523c34(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523c34 FUN_147523c34 body=96 status=ok
// SIG undefined FUN_147523c34(void)

void FUN_147523c34(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753e4c2(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 147523c94 FUN_147523c94 body=110 status=ok
// SIG undefined FUN_147523c94(void)

void FUN_147523c94(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147523d04(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523d04 FUN_147523d04 body=208 status=ok
// SIG undefined FUN_147523d04(void)

void FUN_147523d04(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      if ((param_1[1] == 0) ||
         (iVar1 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar3 * 4)), iVar1 == -1)) {
        FUN_147a3fc60(&local_34);
      }
      else {
        uVar2 = FUN_14753e556(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              *(undefined1 *)(*(longlong *)param_1[3] + (longlong)iVar1));
        if (param_1[1] == 0) {
          FUN_14045d416(&local_34);
        }
        else {
          FUN_147a404c6(param_1[1],&local_34,uVar2);
        }
      }
      *(undefined4 *)(*param_3 + lVar3 * 4) = local_34;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147523dd6 FUN_147523dd6 body=97 status=ok
// SIG undefined FUN_147523dd6(void)

void FUN_147523dd6(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_18 = param_1;
  FUN_147523e38(&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523e38 FUN_147523e38 body=80 status=ok
// SIG undefined FUN_147523e38(void)

void FUN_147523e38(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753e7a0(param_1,iVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 147523e88 FUN_147523e88 body=86 status=ok
// SIG undefined FUN_147523e88(void)

void FUN_147523e88(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_147523ee0(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147523ee0 FUN_147523ee0 body=329 status=ok
// SIG undefined FUN_147523ee0(void)

void FUN_147523ee0(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uStack_60 < 1) {
    uStack_80._0_4_ = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar4 = local_78;
      uVar3 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_147523f6a;
      }
      else if (iVar2 < param_2) {
LAB_147523f6a:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_147523e38(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752402a FUN_14752402a body=86 status=ok
// SIG undefined FUN_14752402a(void)

void FUN_14752402a(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_147524082(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524082 FUN_147524082 body=164 status=ok
// SIG undefined FUN_147524082(void)

void FUN_147524082(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  int local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  if (0 < (int)plVar1[1]) {
    lVar2 = 0;
    do {
      FUN_144a808d5(&local_48,*(undefined4 *)(*plVar1 + lVar2 * 4),param_2,param_3);
      *(uint *)(*(longlong *)*param_1 + lVar2 * 4) = (uint)(0.5 <= local_44) + local_48;
      lVar2 = lVar2 + 1;
      plVar1 = (longlong *)*param_1;
    } while (lVar2 < (int)plVar1[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524160 FUN_147524160 body=91 status=ok
// SIG undefined FUN_147524160(void)

void FUN_147524160(longlong param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_140aba11c(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14475e67c(param_1 + 0x60,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  FUN_147a408e2(param_1 + 0x70);
  return;
}



// FUNCTION 1475241c1 FUN_1475241c1 body=300 status=ok
// SIG undefined FUN_1475241c1(void)

void FUN_1475241c1(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulonglong unaff_RBP;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1 + 0x70;
  local_38 = (longlong *)(param_1 + 0x60);
  local_50 = (longlong *)(param_1 + 0x50);
  uVar6 = *(uint *)(param_1 + 0x58);
  local_40 = param_1;
  if (1 < (int)uVar6) {
    uVar3 = 0;
    if ((char)*(undefined8 *)(param_2 + 8) != '\x02') {
      uVar3 = 0;
      uVar7 = uVar6;
      do {
        uVar5 = (uVar7 >> 1) + uVar3;
        if (*(int *)(*local_50 + (ulonglong)uVar5 * 4) <
            (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) {
          uVar3 = uVar5 + (uVar7 & 1);
        }
        bVar2 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar2);
    }
    if ((char)*(undefined8 *)(param_2 + 0x10) != '\x02') {
      uVar7 = 0;
      uVar5 = uVar6;
      do {
        uVar6 = uVar7;
        uVar7 = (uVar5 >> 1) + uVar6;
        if (*(int *)(*local_50 + (ulonglong)uVar7 * 4) <=
            (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
          uVar6 = uVar7 + (uVar5 & 1);
        }
        bVar2 = 1 < uVar5;
        uVar7 = uVar6;
        uVar5 = uVar5 >> 1;
      } while (bVar2);
    }
    iVar8 = uVar6 - uVar3;
    if (iVar8 != 0 && (int)uVar3 <= (int)uVar6) {
      uVar4 = (ulonglong)uVar3;
      do {
        if ((longlong)(int)local_50[1] <= (longlong)uVar4) break;
        uVar1 = *(undefined4 *)(*local_50 + uVar4 * 4);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(*local_38 + uVar4));
        FUN_14753e7a0(&local_50,uVar4 & 0xffffffff);
        FUN_14753e556(&local_50,uVar1,unaff_RBP & 0xffffffff);
        uVar4 = uVar4 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475242ee FUN_1475242ee body=26 status=ok
// SIG undefined FUN_1475242ee(void)

undefined8 FUN_1475242ee(longlong param_1,undefined8 param_2)

{
  FUN_147a404c6(param_1 + 0x70);
  return param_2;
}



// FUNCTION 147524308 FUN_147524308 body=44 status=ok
// SIG undefined FUN_147524308(void)

undefined8 FUN_147524308(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14045d416(param_2);
  }
  else {
    FUN_147a404c6(*(longlong *)(param_1 + 8),param_2);
  }
  return param_2;
}



// FUNCTION 14752433e FUN_14752433e body=19 status=ok
// SIG undefined FUN_14752433e(void)

undefined4 FUN_14752433e(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c)) {
    lVar2 = lVar1 + 0x70;
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x78);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x80) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x38) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar3 * 0x10) == param_2) {
          if ((undefined4 *)(lVar2 + 4) == (undefined4 *)0x0 || lVar2 == 0) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar2 + 4);
        }
        iVar3 = *(int *)(lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147524352 FUN_147524352 body=86 status=ok
// SIG undefined FUN_147524352(void)

void FUN_147524352(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x70;
  local_10 = param_1 + 0x60;
  local_28 = param_1 + 0x50;
  local_18 = param_1;
  FUN_1475243aa(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475243aa FUN_1475243aa body=317 status=ok
// SIG undefined FUN_1475243aa(void)

void FUN_1475243aa(longlong *param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[2];
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x38) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar8) != 0)) {
        local_48 = 0;
        uStack_40 = 0;
        plVar5 = (longlong *)*param_1;
        if (0 < (int)plVar5[1]) {
          lVar4 = 0;
          do {
            uVar2 = uStack_40;
            iVar7 = *(int *)(*plVar5 + lVar4 * 4);
            lVar8 = (longlong)(int)uStack_40;
            uVar3 = (int)uStack_40 + 1;
            uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
            if (uStack_40._4_4_ < uVar3) {
              FUN_14753ec72(&local_48,uVar2 & 0xffffffff);
            }
            lVar8 = lVar8 * 0x10;
            *(int *)(local_48 + lVar8) = (int)lVar4;
            *(int *)(local_48 + 4 + lVar8) = iVar7;
            iVar7 = iVar7 + param_2;
            *(int *)(local_48 + 8 + lVar8) = (int)lVar4;
            *(int *)(local_48 + 0xc + lVar8) = iVar7;
            *(int *)(*(longlong *)*param_1 + lVar4 * 4) = iVar7;
            lVar4 = lVar4 + 1;
            plVar5 = (longlong *)*param_1;
          } while (lVar4 < (int)plVar5[1]);
          lVar4 = param_1[2];
        }
        FUN_14753ecf8(lVar4 + 0x38,lVar4,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_147524420;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(lVar4 + 0x40) * 0x10 != lVar8);
  }
  lVar4 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar4 != 0) {
    lVar8 = *(longlong *)*param_1;
    lVar6 = 0;
    do {
      piVar1 = (int *)(lVar8 + lVar6);
      *piVar1 = *piVar1 + param_2;
      lVar6 = lVar6 + 4;
    } while (lVar4 * 4 != lVar6);
  }
LAB_147524420:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475244f4 FUN_1475244f4 body=623 status=ok
// SIG undefined FUN_1475244f4(void)

undefined4 FUN_1475244f4(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_e5;
  undefined4 local_e4;
  longlong *local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong uStack_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab22a8) {
    FUN_144b3d300(&DAT_14cab22a8);
    if (DAT_14cab22a8 == -1) {
      FUN_1446ddc76(&DAT_14cab22a0,"IntegralCurve",1);
      _Init_thread_footer(&DAT_14cab22a8);
    }
  }
  local_c8 = (undefined **)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_2 + 8));
  uVar3 = FUN_1468ec2ac(&local_c8,DAT_14cab22a0);
  if ((char)uVar3 != '\0') {
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = &PTR_FUN_14a46be50;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0x7fffffff;
    local_4c = 0;
    uVar4 = FUN_1463c1964();
    FUN_14483b62e(uVar4,param_3,&local_c8,0);
    if (local_50 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 0x69) = 1;
      *(bool *)(param_1 + 0x68) = local_50 != 0;
    }
    if ((int)uStack_58 < 0) {
LAB_14752475c:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_58 & 0xffffffff);
    }
    if (*(int *)(param_1 + 100) < (int)uStack_58) {
      FUN_140aba11c(param_1 + 0x58);
      if ((int)uStack_58 < 0) goto LAB_14752475c;
    }
    if (*(int *)(param_1 + 0x7c) < (int)uStack_58) {
      FUN_14475e67c(param_1 + 0x70);
    }
    FUN_145cba7c3(&local_d0);
    FUN_147a3fcb4(&local_c8,&local_e0);
    if (-1 < (int)local_d8) {
      iVar5 = 0;
      do {
        if ((int)local_e0[1] <= (int)local_d8) break;
        FUN_147572fa9(&local_e4,0,local_d0,(double)*(float *)(*local_e0 + (ulonglong)local_d8 * 8));
        local_e5 = *(int *)(*local_e0 + 4 + (longlong)(int)local_d8 * 8) != 0;
        local_f8 = param_1 + 0x70;
        FUN_147524765(iVar5,local_e4,&local_e5,param_1 + 0x58);
        uVar1 = local_d8 + 1;
        bVar2 = -2 < (int)local_d8;
        iVar5 = iVar5 + 1;
        local_d8 = uVar1;
      } while (bVar2);
    }
    local_c8 = &PTR_FUN_14a46be50;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_c8 = &PTR_FUN_14a177080;
    FUN_144a78a1a(&local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524765 FUN_147524765 body=450 status=ok
// SIG undefined FUN_147524765(void)

void FUN_147524765(uint param_1,int param_2,undefined1 *param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  undefined1 *puVar7;
  
  if ((int)param_1 < 1) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = param_2;
  }
  else {
    _Src = (void *)*param_4;
    if (param_2 < *(int *)((longlong)_Src + (ulonglong)param_1 * 4 + -4)) {
      lVar5 = (ulonglong)param_1 - 1;
      do {
        if (lVar5 < 1) {
          uVar4 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar4 + 1) {
            FUN_14753e8f2(param_4,(ulonglong)uVar4);
            _Src = (void *)*param_4;
          }
          memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)uVar4 << 2);
          *(int *)*param_4 = param_2;
          uVar4 = *(uint *)(param_5 + 1);
          *(uint *)(param_5 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_5 + 0xc) < uVar4 + 1) {
            FUN_1401c3474(param_5,(ulonglong)uVar4);
          }
          memmove((void *)(*param_5 + 1),(void *)*param_5,(ulonglong)uVar4);
          puVar7 = (undefined1 *)*param_5;
          goto LAB_147524865;
        }
        lVar1 = lVar5 + -1;
        param_1 = param_1 - 1;
        lVar2 = lVar5 * 4;
        lVar5 = lVar1;
      } while (param_2 < *(int *)((longlong)_Src + lVar2 + -4));
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_4,iVar3);
        _Src = (void *)*param_4;
      }
      uVar6 = (ulonglong)((int)lVar1 + 1);
      memmove((void *)((longlong)_Src + uVar6 * 4 + 4),(void *)((longlong)_Src + uVar6 * 4),
              (ulonglong)(iVar3 - param_1) << 2);
      *(int *)(*param_4 + uVar6 * 4) = param_2;
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_1401c3474(param_5,iVar3);
      }
      memmove((void *)(*param_5 + uVar6 + 1),(void *)(*param_5 + uVar6),(ulonglong)(iVar3 - param_1)
             );
      goto LAB_147524862;
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
      _Src = (void *)*param_4;
    }
    *(int *)((longlong)_Src + (longlong)iVar3 * 4) = param_2;
  }
  iVar3 = (int)param_5[1];
  uVar6 = (ulonglong)iVar3;
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_1401c3474(param_5,iVar3);
  }
LAB_147524862:
  puVar7 = (undefined1 *)(uVar6 + *param_5);
LAB_147524865:
  *puVar7 = *param_3;
  return;
}



// FUNCTION 147524928 FUN_147524928 body=99 status=ok
// SIG undefined FUN_147524928(void)

void FUN_147524928(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x90))(param_1,local_48);
  FUN_147523910(local_48,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752498c FUN_14752498c body=147 status=ok
// SIG undefined FUN_14752498c(void)

void FUN_14752498c(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x90))(param_1,&local_48);
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if (local_40 != 0) {
        uVar4 = FUN_147a40458(local_40,*(undefined4 *)(lVar2 + lVar5 * 4));
        if ((-1 < (int)uVar4) && ((int)uVar4 < (int)local_48[1])) {
          *(undefined4 *)(lVar1 + lVar5 * 4) = *(undefined4 *)(*local_48 + (ulonglong)uVar4 * 4);
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524a20 FUN_147524a20 body=106 status=ok
// SIG undefined FUN_147524a20(void)

void FUN_147524a20(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x90))(param_1,local_40);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  FUN_147523c34(local_40);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524a8c FUN_147524a8c body=106 status=ok
// SIG undefined FUN_147524a8c(void)

void FUN_147524a8c(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x90))(param_1,local_40);
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  FUN_147523d04(local_40);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524af8 FUN_147524af8 body=89 status=ok
// SIG undefined FUN_147524af8(void)

void FUN_147524af8(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x90))(param_1,local_38);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_147523e38(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524b52 FUN_147524b52 body=191 status=ok
// SIG undefined FUN_147524b52(void)

void FUN_147524b52(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [7];
  undefined1 local_49;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x90))(param_1,local_48);
  if (0 < *(int *)(local_48[0] + 8)) {
    local_49 = 0;
    cVar1 = (**(code **)(*param_1 + 0x98))(param_1,param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x90))(param_1,local_48);
      FUN_147524c12(local_48,local_50,param_2,local_49);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1,local_48);
  FUN_147523ee0(local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524c12 FUN_147524c12 body=105 status=ok
// SIG undefined FUN_147524c12(void)

undefined8 FUN_147524c12(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_147525ee8(param_1,param_3,0);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_14753e556(param_1,param_3,param_4);
  }
  else {
    *(char *)(**(longlong **)(param_1 + 0x18) + (ulonglong)uVar1) = (char)param_4;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14045d416(param_2);
  }
  else {
    FUN_147a404c6(*(longlong *)(param_1 + 8),param_2,uVar1);
  }
  return param_2;
}



// FUNCTION 147524c7c FUN_147524c7c body=89 status=ok
// SIG undefined FUN_147524c7c(void)

void FUN_147524c7c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x90))(param_1,local_40);
  FUN_147524082(local_40,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524cd6 FUN_147524cd6 body=121 status=ok
// SIG undefined FUN_147524cd6(void)

longlong * FUN_147524cd6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x88))(param_1,local_28);
  if ((longlong)*(int *)(local_28[0] + 1) == 0) {
    lVar1 = 0;
    lVar2 = 0;
  }
  else {
    lVar1 = ((ulonglong)*(uint *)*local_28[0] << 0x20) + 1;
    lVar2 = ((ulonglong)((uint *)*local_28[0])[(longlong)*(int *)(local_28[0] + 1) + -1] << 0x20) +
            1;
  }
  *param_2 = lVar1;
  param_2[1] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524d54 FUN_147524d54 body=96 status=ok
// SIG undefined FUN_147524d54(void)

void FUN_147524d54(longlong param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_140aba11c(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14475e67c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_147a408e2(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}



// FUNCTION 147524db9 FUN_147524db9 body=338 status=ok
// SIG undefined FUN_147524db9(void)

void FUN_147524db9(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  ulonglong unaff_RBP;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  longlong *local_68 [3];
  longlong *local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x90))(param_1,local_68);
  uVar7 = *(uint *)(local_68[0] + 1);
  if (1 < (int)uVar7) {
    uVar8 = 0;
    if ((char)*(undefined8 *)(param_2 + 8) != '\x02') {
      uVar8 = 0;
      uVar6 = uVar7;
      do {
        uVar5 = (uVar6 >> 1) + uVar8;
        if (*(int *)(*local_68[0] + (ulonglong)uVar5 * 4) <
            (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) {
          uVar8 = uVar5 + (uVar6 & 1);
        }
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar3);
    }
    if ((char)*(undefined8 *)(param_2 + 0x10) != '\x02') {
      uVar6 = 0;
      uVar5 = uVar7;
      do {
        uVar7 = uVar6;
        uVar6 = (uVar5 >> 1) + uVar7;
        if (*(int *)(*local_68[0] + (ulonglong)uVar6 * 4) <=
            (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
          uVar7 = uVar6 + (uVar5 & 1);
        }
        bVar3 = 1 < uVar5;
        uVar6 = uVar7;
        uVar5 = uVar5 >> 1;
      } while (bVar3);
    }
    if ((int)uVar8 < (int)uVar7) {
      do {
        if ((int)local_68[0][1] <= (int)uVar8) break;
        uVar2 = *(undefined4 *)(*local_68[0] + (ulonglong)uVar8 * 4);
        cVar1 = *(char *)(*local_50 + (ulonglong)uVar8);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),cVar1);
        FUN_14753e7a0(local_68,uVar8);
        local_41 = '\0';
        cVar4 = (**(code **)(*param_1 + 0x98))(param_1,uVar2,&local_41);
        if ((cVar4 == '\0') || (local_41 != cVar1)) {
          FUN_14753e556(local_68,uVar2,unaff_RBP & 0xffffffff);
        }
        else {
          uVar8 = uVar8 - 1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147524f0c FUN_147524f0c body=79 status=ok
// SIG undefined FUN_147524f0c(void)

void FUN_147524f0c(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x90))(param_1,local_38);
  FUN_1475243aa(local_38,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524f5c FUN_147524f5c body=108 status=ok
// SIG undefined FUN_147524f5c(void)

undefined8 FUN_147524f5c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x90))(param_1,local_40);
  if (local_38 == 0) {
    FUN_14045d416(param_2);
  }
  else {
    FUN_147a404c6(local_38,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147524fca FUN_147524fca body=92 status=ok
// SIG undefined FUN_147524fca(void)

undefined8 FUN_147524fca(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x90))(param_1,local_38);
  if (local_30 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_147a40458(local_30,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525034 FUN_147525034 body=618 status=ok
// SIG undefined FUN_147525034(void)

undefined4 FUN_147525034(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_e5;
  undefined4 local_e4;
  longlong *local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong uStack_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab22d0) {
    FUN_144b3d300(&DAT_14cab22d0);
    if (DAT_14cab22d0 == -1) {
      FUN_1446ddc76(&DAT_14cab22c8,"IntegralCurve",1);
      _Init_thread_footer(&DAT_14cab22d0);
    }
  }
  local_c8 = (undefined **)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_2 + 8));
  uVar3 = FUN_1468ec2ac(&local_c8,DAT_14cab22c8);
  if ((char)uVar3 != '\0') {
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = &PTR_FUN_14a46be50;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0x7fffffff;
    local_4c = 0;
    uVar4 = FUN_1463c1964();
    FUN_14483b62e(uVar4,param_3,&local_c8,0);
    if (local_50 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 0x69) = 1;
      *(char *)(param_1 + 0x68) = (char)local_50;
    }
    if ((int)uStack_58 < 0) {
LAB_147525297:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_58 & 0xffffffff);
    }
    if (*(int *)(param_1 + 100) < (int)uStack_58) {
      FUN_140aba11c(param_1 + 0x58);
      if ((int)uStack_58 < 0) goto LAB_147525297;
    }
    if (*(int *)(param_1 + 0x7c) < (int)uStack_58) {
      FUN_144893a1c(param_1 + 0x70);
    }
    FUN_145cba7c3(&local_d0);
    FUN_147a3fcb4(&local_c8,&local_e0);
    if (-1 < (int)local_d8) {
      iVar5 = 0;
      do {
        if ((int)local_e0[1] <= (int)local_d8) break;
        FUN_147572fa9(&local_e4,0,local_d0,(double)*(float *)(*local_e0 + (ulonglong)local_d8 * 8));
        local_e5 = *(undefined1 *)(*local_e0 + 4 + (longlong)(int)local_d8 * 8);
        local_f8 = param_1 + 0x70;
        FUN_1475252a0(iVar5,local_e4,&local_e5,param_1 + 0x58);
        uVar1 = local_d8 + 1;
        bVar2 = -2 < (int)local_d8;
        iVar5 = iVar5 + 1;
        local_d8 = uVar1;
      } while (bVar2);
    }
    local_c8 = &PTR_FUN_14a46be50;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_c8 = &PTR_FUN_14a177080;
    FUN_144a78a1a(&local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475252a0 FUN_1475252a0 body=450 status=ok
// SIG undefined FUN_1475252a0(void)

void FUN_1475252a0(uint param_1,int param_2,undefined1 *param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  undefined1 *puVar7;
  
  if ((int)param_1 < 1) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = param_2;
  }
  else {
    _Src = (void *)*param_4;
    if (param_2 < *(int *)((longlong)_Src + (ulonglong)param_1 * 4 + -4)) {
      lVar5 = (ulonglong)param_1 - 1;
      do {
        if (lVar5 < 1) {
          uVar4 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar4 + 1) {
            FUN_14753e8f2(param_4,(ulonglong)uVar4);
            _Src = (void *)*param_4;
          }
          memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)uVar4 << 2);
          *(int *)*param_4 = param_2;
          uVar4 = *(uint *)(param_5 + 1);
          *(uint *)(param_5 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_5 + 0xc) < uVar4 + 1) {
            FUN_1447403be(param_5,(ulonglong)uVar4);
          }
          memmove((void *)(*param_5 + 1),(void *)*param_5,(ulonglong)uVar4);
          puVar7 = (undefined1 *)*param_5;
          goto LAB_1475253a0;
        }
        lVar1 = lVar5 + -1;
        param_1 = param_1 - 1;
        lVar2 = lVar5 * 4;
        lVar5 = lVar1;
      } while (param_2 < *(int *)((longlong)_Src + lVar2 + -4));
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_4,iVar3);
        _Src = (void *)*param_4;
      }
      uVar6 = (ulonglong)((int)lVar1 + 1);
      memmove((void *)((longlong)_Src + uVar6 * 4 + 4),(void *)((longlong)_Src + uVar6 * 4),
              (ulonglong)(iVar3 - param_1) << 2);
      *(int *)(*param_4 + uVar6 * 4) = param_2;
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_1447403be(param_5,iVar3);
      }
      memmove((void *)(*param_5 + uVar6 + 1),(void *)(*param_5 + uVar6),(ulonglong)(iVar3 - param_1)
             );
      goto LAB_14752539d;
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
      _Src = (void *)*param_4;
    }
    *(int *)((longlong)_Src + (longlong)iVar3 * 4) = param_2;
  }
  iVar3 = (int)param_5[1];
  uVar6 = (ulonglong)iVar3;
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_1447403be(param_5,iVar3);
  }
LAB_14752539d:
  puVar7 = (undefined1 *)(uVar6 + *param_5);
LAB_1475253a0:
  *puVar7 = *param_3;
  return;
}



// FUNCTION 147525462 FUN_147525462 body=91 status=ok
// SIG undefined FUN_147525462(void)

void FUN_147525462(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x88;
  local_18 = param_1 + 0x70;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475254be FUN_1475254be body=97 status=ok
// SIG undefined FUN_1475254be(void)

void FUN_1475254be(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = FUN_147a40458(param_1 + 0x88,*(undefined4 *)(lVar2 + lVar5 * 4));
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x60))) {
        *(undefined4 *)(lVar1 + lVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 4);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 147525520 FUN_147525520 body=113 status=ok
// SIG undefined FUN_147525520(void)

void FUN_147525520(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x88;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147525592(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525592 FUN_147525592 body=96 status=ok
// SIG undefined FUN_147525592(void)

void FUN_147525592(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753e978(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475255f2 FUN_1475255f2 body=113 status=ok
// SIG undefined FUN_1475255f2(void)

void FUN_1475255f2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x88;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147525664(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525664 FUN_147525664 body=208 status=ok
// SIG undefined FUN_147525664(void)

void FUN_147525664(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      if ((param_1[1] == 0) ||
         (iVar1 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar3 * 4)), iVar1 == -1)) {
        FUN_147a3fc60(&local_34);
      }
      else {
        uVar2 = FUN_14753ea0c(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              *(undefined1 *)(*(longlong *)param_1[3] + (longlong)iVar1));
        if (param_1[1] == 0) {
          FUN_14045d416(&local_34);
        }
        else {
          FUN_147a404c6(param_1[1],&local_34,uVar2);
        }
      }
      *(undefined4 *)(*param_3 + lVar3 * 4) = local_34;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147525736 FUN_147525736 body=100 status=ok
// SIG undefined FUN_147525736(void)

void FUN_147525736(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1 + 0x88;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_18 = param_1;
  FUN_14752579c(&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752579c FUN_14752579c body=80 status=ok
// SIG undefined FUN_14752579c(void)

void FUN_14752579c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753eb20(param_1,iVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1475257ec FUN_1475257ec body=187 status=ok
// SIG undefined FUN_1475257ec(void)

void FUN_1475257ec(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x60)) {
    local_29 = 0;
    cVar1 = FUN_1410676cc(param_1,param_2);
    if (cVar1 != '\0') {
      local_48 = param_1 + 0x88;
      local_38 = param_1 + 0x70;
      local_50 = param_1 + 0x58;
      local_40 = param_1;
      FUN_1475258a8(&local_50,local_54,param_2,local_29);
    }
  }
  local_48 = param_1 + 0x88;
  local_38 = param_1 + 0x70;
  local_50 = param_1 + 0x58;
  local_40 = param_1;
  FUN_147525912(&local_50,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475258a8 FUN_1475258a8 body=105 status=ok
// SIG undefined FUN_1475258a8(void)

undefined8 FUN_1475258a8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_147525ee8(param_1,param_3,0);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_14753ea0c(param_1,param_3,param_4);
  }
  else {
    *(char *)(**(longlong **)(param_1 + 0x18) + (ulonglong)uVar1) = (char)param_4;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14045d416(param_2);
  }
  else {
    FUN_147a404c6(*(longlong *)(param_1 + 8),param_2,uVar1);
  }
  return param_2;
}



// FUNCTION 147525912 FUN_147525912 body=329 status=ok
// SIG undefined FUN_147525912(void)

void FUN_147525912(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uStack_60 < 1) {
    uStack_80._0_4_ = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar4 = local_78;
      uVar3 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_14752599c;
      }
      else if (iVar2 < param_2) {
LAB_14752599c:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_14752579c(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147525a5c FUN_147525a5c body=89 status=ok
// SIG undefined FUN_147525a5c(void)

void FUN_147525a5c(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x88;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_147524082(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525aee FUN_147525aee body=96 status=ok
// SIG undefined FUN_147525aee(void)

void FUN_147525aee(longlong param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_140aba11c(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_144893a1c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_147a408e2(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}



// FUNCTION 147525b53 FUN_147525b53 body=346 status=ok
// SIG undefined FUN_147525b53(void)

void FUN_147525b53(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  ulonglong unaff_RBP;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 0x88;
  local_50 = (longlong *)(param_1 + 0x70);
  local_68 = (longlong *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x60);
  local_58 = param_1;
  if (1 < (int)uVar6) {
    uVar8 = 0;
    if ((char)*(undefined8 *)(param_2 + 8) != '\x02') {
      uVar8 = 0;
      uVar7 = uVar6;
      do {
        uVar5 = (uVar7 >> 1) + uVar8;
        if (*(int *)(*local_68 + (ulonglong)uVar5 * 4) <
            (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) {
          uVar8 = uVar5 + (uVar7 & 1);
        }
        bVar3 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar3);
    }
    if ((char)*(undefined8 *)(param_2 + 0x10) != '\x02') {
      uVar7 = 0;
      uVar5 = uVar6;
      do {
        uVar6 = uVar7;
        uVar7 = (uVar5 >> 1) + uVar6;
        if (*(int *)(*local_68 + (ulonglong)uVar7 * 4) <=
            (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
          uVar6 = uVar7 + (uVar5 & 1);
        }
        bVar3 = 1 < uVar5;
        uVar7 = uVar6;
        uVar5 = uVar5 >> 1;
      } while (bVar3);
    }
    if ((int)uVar8 < (int)uVar6) {
      do {
        if ((int)local_68[1] <= (int)uVar8) break;
        uVar2 = *(undefined4 *)(*local_68 + (ulonglong)uVar8 * 4);
        cVar1 = *(char *)(*local_50 + (ulonglong)uVar8);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),cVar1);
        FUN_14753eb20(&local_68,uVar8);
        local_41 = '\0';
        cVar4 = FUN_1410676cc(param_1,uVar2,&local_41);
        if ((cVar4 == '\0') || (local_41 != cVar1)) {
          FUN_14753ea0c(&local_68,uVar2,unaff_RBP & 0xffffffff);
        }
        else {
          uVar8 = uVar8 - 1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147525cae FUN_147525cae body=89 status=ok
// SIG undefined FUN_147525cae(void)

void FUN_147525cae(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x88;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_1475243aa(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525d0e FUN_147525d0e body=94 status=ok
// SIG undefined FUN_147525d0e(void)

void FUN_147525d0e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_c;
  local_18 = 1;
  local_28 = 1;
  local_20 = param_3;
  local_c = param_2;
  (**(code **)(*param_1 + 0x10))(param_1,&local_30,&local_20);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525d6e FUN_147525d6e body=97 status=ok
// SIG undefined FUN_147525d6e(void)

void FUN_147525d6e(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_c;
  local_20 = &local_10;
  local_18 = 1;
  local_28 = 1;
  local_10 = param_3;
  local_c = param_2;
  (**(code **)(*param_1 + 0x18))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525dd0 FUN_147525dd0 body=280 status=ok
// SIG undefined FUN_147525dd0(void)

void FUN_147525dd0(longlong *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  uVar8 = 0;
  uVar9 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar10 = (uVar9 >> 1) + uVar8;
      if (*(int *)(lVar2 + (ulonglong)uVar10 * 4) < param_2) {
        uVar8 = uVar10 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
  }
  uVar7 = (ulonglong)(uVar8 - 1);
  uVar9 = uVar8;
  uVar10 = uVar8;
  do {
    uVar4 = (uint)uVar7;
    if ((int)uVar1 <= (int)uVar10) {
      if (-1 < (int)uVar4) {
        iVar13 = *(int *)(lVar2 + uVar7 * 4) - param_2;
        iVar6 = -iVar13;
        if (iVar6 < 0) {
          iVar6 = iVar13;
        }
        uVar10 = uVar1;
        if (iVar6 <= param_3) goto LAB_147525ea4;
      }
      break;
    }
    iVar6 = *(int *)(lVar2 + (longlong)(int)uVar10 * 4);
    iVar16 = iVar6 - param_2;
    iVar13 = -iVar16;
    if (iVar13 < 0) {
      iVar13 = iVar16;
    }
    if ((int)uVar4 < 0) {
      if (param_3 < iVar13) break;
LAB_147525eb9:
      uVar7 = 0xffffffff;
LAB_147525ec0:
      uVar9 = uVar10 + 1;
      uVar10 = uVar9;
    }
    else {
      iVar16 = *(int *)(lVar2 + uVar7 * 4);
      iVar12 = iVar16 - param_2;
      iVar11 = -iVar12;
      if (iVar11 < 0) {
        iVar11 = iVar12;
      }
      if ((param_3 < iVar13) || (param_3 < iVar11)) {
        if (iVar13 <= param_3) goto LAB_147525eb9;
        uVar10 = uVar1;
        if (param_3 < iVar11) break;
      }
      else {
        uVar14 = param_2 - iVar6;
        uVar5 = -uVar14;
        if ((int)uVar5 < 0) {
          uVar5 = uVar14;
        }
        uVar15 = param_2 - iVar16;
        uVar14 = -uVar15;
        if ((int)uVar14 < 0) {
          uVar14 = uVar15;
        }
        if (uVar5 < uVar14) goto LAB_147525ec0;
      }
LAB_147525ea4:
      uVar7 = (ulonglong)(uVar4 - 1);
      uVar8 = uVar4;
    }
  } while ((int)uVar9 <= (int)uVar8);
  *param_4 = uVar8;
  *param_5 = uVar9;
  return;
}



// FUNCTION 147525ee8 FUN_147525ee8 body=161 status=ok
// SIG undefined FUN_147525ee8(void)

uint FUN_147525ee8(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_48;
  int local_40;
  undefined1 local_38 [4];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  lVar1 = *(longlong *)*param_1;
  iVar3 = (int)((longlong *)*param_1)[1];
  local_58 = local_38;
  local_48 = lVar1;
  local_40 = iVar3;
  FUN_147525dd0();
  uVar2 = 0xffffffff;
  if ((int)local_34 < iVar3 && -1 < (int)local_34) {
    param_2 = *(int *)(lVar1 + (ulonglong)local_34 * 4) - param_2;
    iVar3 = -param_2;
    if (iVar3 < 0) {
      iVar3 = param_2;
    }
    uVar2 = 0xffffffff;
    if (iVar3 <= param_3) {
      uVar2 = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147525f8a FUN_147525f8a body=215 status=ok
// SIG undefined FUN_147525f8a(void)

uint FUN_147525f8a(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_1;
  uVar2 = *(uint *)(plVar3 + 1);
  lVar5 = *plVar3;
  uVar7 = 0;
  uVar6 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar5 + (ulonglong)uVar1 * 4) <= param_2) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  *(uint *)(plVar3 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)plVar3 + 0xc) < uVar2 + 1) {
    FUN_14753e8f2(plVar3,uVar2);
    lVar5 = *plVar3;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar5 + uVar8 * 4 + 4),(void *)(lVar5 + uVar8 * 4),
          (ulonglong)(uVar2 - uVar7) << 2);
  *(int *)(*plVar3 + uVar8 * 4) = param_2;
  if (param_1[1] != 0) {
    FUN_147a407c8(param_1[1],local_3c,uVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147526062 FUN_147526062 body=620 status=ok
// SIG undefined FUN_147526062(void)

uint FUN_147526062(longlong *param_1,uint param_2,uint param_3)

{
  void *_Dst;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  uint *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_1;
  lVar8 = *plVar1;
  lVar10 = (longlong)(int)param_2;
  uVar4 = *(uint *)(plVar1 + 1);
  iVar7 = 0;
  uVar5 = uVar4;
  if (0 < (int)uVar4) {
    do {
      uVar9 = (uVar5 >> 1) + iVar7;
      if (*(int *)(lVar8 + (ulonglong)uVar9 * 4) < (int)param_3) {
        iVar7 = uVar9 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
  }
  uVar5 = *(uint *)(lVar8 + lVar10 * 4);
  if ((int)(param_2 + 1) < iVar7 || iVar7 < (int)param_2) {
    if (~param_2 + uVar4 != 0) {
      _Dst = (void *)(lVar8 + lVar10 * 4);
      memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)(int)(~param_2 + uVar4) << 2);
      uVar4 = *(uint *)(plVar1 + 1);
    }
    uVar9 = iVar7 - (uint)((int)param_2 < iVar7);
    *(uint *)(plVar1 + 1) = uVar4 - 1;
    plVar1 = (longlong *)*param_1;
    iVar7 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar7 + 1U) {
      FUN_14753e8f2(plVar1,iVar7);
    }
    lVar8 = (longlong)(int)uVar9;
    memmove((void *)(*plVar1 + lVar8 * 4 + 4),(void *)(*plVar1 + lVar8 * 4),
            (ulonglong)(iVar7 - uVar9) << 2);
    *(uint *)(*plVar1 + lVar8 * 4) = param_3;
    if (param_1[1] != 0) {
      FUN_147a40592(param_1[1],param_2,uVar9);
    }
    lVar8 = param_1[2];
    if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x40) != 0)) {
      lVar10 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar8 + 0x38) + 8 + lVar10) != 0) &&
           (*(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar10) != 0)) {
          local_58 = (uint *)0x0;
          uStack_50 = 1;
          FUN_14753ec72(&local_58,0);
          *local_58 = param_2;
          local_58[1] = uVar5;
          local_58[2] = uVar9;
          local_58[3] = param_3;
          FUN_14753ecf8(param_1[2] + 0x38,param_1[2],&local_58);
          if (local_58 != (uint *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)*(int *)(lVar8 + 0x40) * 0x10 != lVar10);
    }
  }
  else {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
      lVar6 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar6) != 0) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar6) != 0)) {
          local_58 = (uint *)0x0;
          uStack_50 = 1;
          FUN_14753ec72(&local_58,0);
          *local_58 = param_2;
          local_58[1] = uVar5;
          local_58[2] = param_2;
          local_58[3] = param_3;
          FUN_14753ecf8(param_1[2] + 0x38,param_1[2],&local_58);
          if (local_58 != (uint *)0x0) {
            FUN_1400020a8();
          }
          lVar8 = *(longlong *)*param_1;
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(lVar2 + 0x40) * 0x10 != lVar6);
    }
    *(uint *)(lVar8 + lVar10 * 4) = param_3;
    uVar9 = param_2;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1475262d0 FUN_1475262d0 body=69 status=ok
// SIG undefined FUN_1475262d0(void)

undefined8 *
FUN_1475262d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 147526316 FUN_147526316 body=132 status=ok
// SIG undefined FUN_147526316(void)

undefined8 FUN_147526316(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if ((*param_1 == 0) || (lVar6 = FUN_14752639a(*param_1,param_1[2]), lVar6 == 0)) {
      uVar7 = 0;
    }
    else {
      iVar5 = (int)param_1[3];
      uVar7 = 0;
      if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(lVar6 + 0x10))) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar5 * 8);
      }
    }
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
  return uVar7;
}



// FUNCTION 14752639a FUN_14752639a body=227 status=ok
// SIG undefined FUN_14752639a(void)

longlong FUN_14752639a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_1 + 0x28;
  uVar6 = *(uint *)(param_1 + 0x48);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar4 = lVar5;
  }
  uVar7 = 0;
  local_50 = param_2;
  if (0 < (int)uVar6) {
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      iVar3 = FUN_144a78538(lVar4 + (ulonglong)uVar1 * 0x18,&local_50);
      if (iVar3 < 0) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar2 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar2);
    uVar6 = *(uint *)(param_1 + 0x48);
  }
  if ((int)uVar7 < (int)uVar6) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = lVar5;
    }
    iVar3 = FUN_144a78538(&local_50,lVar4 + (ulonglong)uVar7 * 0x18);
    if (-1 < iVar3) {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x40);
      }
      lVar5 = lVar5 + (ulonglong)uVar7 * 0x18;
      goto LAB_147526456;
    }
  }
  lVar5 = 0;
LAB_147526456:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752647e FUN_14752647e body=4 status=ok
// SIG undefined FUN_14752647e(void)

undefined4 FUN_14752647e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 147526486 FUN_147526486 body=56 status=ok
// SIG undefined FUN_147526486(void)

int FUN_147526486(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    iVar1 = 0;
  }
  else {
    lVar3 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(lVar2 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x18 != lVar3);
  }
  return iVar1;
}



// FUNCTION 1475264be FUN_1475264be body=164 status=ok
// SIG undefined FUN_1475264be(void)

undefined8 *
FUN_1475264be(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_147526546:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = param_3;
    *(undefined4 *)(param_2 + 3) = param_4;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147526546;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *param_1;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    param_2[2] = param_3;
    *(undefined4 *)(param_2 + 3) = param_4;
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_2;
}



// FUNCTION 147526562 FUN_147526562 body=72 status=ok
// SIG undefined FUN_147526562(void)

ulonglong FUN_147526562(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_14752639a();
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar2 = (longlong)*(int *)(lVar1 + 0x10) << 3;
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 8) + uVar3 * 8) == param_3) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 1475265aa FUN_1475265aa body=797 status=ok
// SIG undefined FUN_1475265aa(void)

bool FUN_1475265aa(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if (iVar4 < 10) goto LAB_14752682d;
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3906c);
  puVar1 = *(undefined4 **)param_2[1];
  puVar2 = (undefined4 *)((undefined8 *)param_2[1])[1];
  if (iVar5 < 0xc) {
    if (puVar2 < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_1[1] = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,1);
    }
    else {
      *(undefined1 *)(param_1 + 4) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_1[2] = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    param_1 = param_1 + 3;
    puVar1 = *(undefined4 **)param_2[1];
    if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      goto LAB_14752682d;
    }
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0) {
      thunk_FUN_14572512c(param_2,param_1);
      goto LAB_14752682d;
    }
    lVar6 = *param_2;
    uVar7 = 4;
  }
  else {
    if (puVar2 < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_1[1] = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_1[2] = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_1[3] = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    param_1 = param_1 + 4;
    puVar3 = *(undefined1 **)param_2[1];
    if (puVar3 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
      *(undefined1 *)param_1 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      goto LAB_14752682d;
    }
    lVar6 = *param_2;
    uVar7 = 1;
  }
  (**(code **)(lVar6 + 0x170))(param_2,param_1,uVar7);
LAB_14752682d:
  return 9 < iVar4;
}



// FUNCTION 1475268c8 FUN_1475268c8 body=676 status=ok
// SIG undefined FUN_1475268c8(void)

double * FUN_1475268c8(double *param_1,longlong param_2,undefined4 param_3,int param_4,
                      double param_5,double param_6,double param_7,char param_8,int param_9,
                      double param_10,double param_11,double param_12,char param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  dVar5 = (double)(int)((ulonglong)param_2 >> 0x20);
  dVar6 = (double)(int)param_2;
  fVar7 = (float)(dVar5 / dVar6);
  dVar5 = (double)((ulonglong)dVar5 & 0x8000000000000000);
  dVar2 = ((double)((param_2 >> 0x20) * (longlong)param_4) + dVar5) / dVar6;
  dVar6 = ((double)((param_2 >> 0x20) * (longlong)param_9) + dVar5) / dVar6;
  dVar5 = dVar6 - dVar2;
  *(undefined4 *)(param_1 + 9) = param_3;
  *param_1 = (double)(param_9 - param_4);
  param_1[1] = param_5;
  param_1[5] = param_10;
  dVar3 = atan((double)(1.0 / fVar7) * param_6);
  dVar4 = sin(dVar3);
  dVar3 = cos(dVar3);
  if (param_8 == '\0') {
    dVar1 = (param_6 / (double)fVar7) * dVar5;
    param_7 = SQRT(dVar5 * dVar5 + dVar1 * dVar1) * 0.3333333333333333;
  }
  param_1[4] = param_7;
  param_1[3] = dVar4 * param_7 + param_5;
  param_1[2] = ((dVar3 * param_7 + dVar2) - dVar2) / dVar5;
  dVar3 = atan((double)(1.0 / fVar7) * param_11);
  dVar4 = sin(dVar3);
  dVar3 = cos(dVar3);
  if (param_13 == '\0') {
    dVar1 = (param_11 / (double)fVar7) * dVar5;
    param_12 = SQRT(dVar5 * dVar5 + dVar1 * dVar1) * 0.3333333333333333;
  }
  param_1[8] = param_12;
  param_1[7] = param_10 - dVar4 * param_12;
  param_1[6] = ((dVar6 - dVar3 * param_12) - dVar2) / dVar5;
  return param_1;
}



// FUNCTION 147526b6c FUN_147526b6c body=248 status=ok
// SIG undefined FUN_147526b6c(void)

void FUN_147526b6c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)(param_1 + 0x58) != param_2) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x58) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x60) = (int)param_2[1];
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if ((longlong *)(param_1 + 0x68) != param_3) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x68) = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 0x70) = (int)param_3[1];
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  FUN_147a408e2(param_1 + 0x80);
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar1 = 0;
    do {
      FUN_147a407c8(param_1 + 0x80,local_3c,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x60));
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147526c66 FUN_147526c66 body=325 status=ok
// SIG undefined FUN_147526c66(void)

uint FUN_147526c66(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x60);
  lVar6 = *(longlong *)(param_1 + 0x58);
  uVar8 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 4) <= param_2) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  *(uint *)(param_1 + 0x60) = uVar2 + 1;
  if (*(uint *)(param_1 + 100) < uVar2 + 1) {
    FUN_14753e8f2((longlong *)(param_1 + 0x58),uVar2);
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  uVar9 = (ulonglong)uVar8;
  memmove((void *)(lVar6 + uVar9 * 4 + 4),(void *)(lVar6 + uVar9 * 4),
          (ulonglong)(uVar2 - uVar8) << 2);
  *(int *)(*(longlong *)(param_1 + 0x58) + uVar9 * 4) = param_2;
  iVar3 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
    FUN_14753f2b0(param_1 + 0x68,iVar3);
  }
  lVar5 = uVar9 * 0x1c;
  memmove((void *)(*(longlong *)(param_1 + 0x68) + lVar5 + 0x1c),
          (void *)(*(longlong *)(param_1 + 0x68) + lVar5),(ulonglong)(iVar3 - uVar8) * 0x1c);
  lVar6 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(lVar6 + lVar5) = 0;
  ((undefined8 *)(lVar6 + lVar5))[1] = 0;
  *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
  *(undefined4 *)(lVar6 + 0x18 + lVar5) = 2;
  FUN_147a407c8(param_1 + 0x80,local_34,uVar8);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147526dac FUN_147526dac body=1477 status=ok
// SIG undefined FUN_147526dac(void)

void FUN_147526dac(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  
  if (1 < *(int *)(param_1 + 0x70)) {
    pfVar8 = *(float **)(param_1 + 0x68);
    if (*(char *)(pfVar8 + 6) == '\x02') {
      if ((*(byte *)((longlong)pfVar8 + 0x19) & 0xfb) == 0) {
        pfVar8[1] = 0.0;
        pfVar8[2] = 0.0;
        *(undefined1 *)(pfVar8 + 5) = 0;
      }
    }
    else if (*(char *)(pfVar8 + 6) == '\0') {
      *(undefined1 *)(pfVar8 + 5) = 0;
      fVar15 = (float)((*(int **)(param_1 + 0x58))[1] - **(int **)(param_1 + 0x58));
      fVar1 = 0.0001;
      if (0.0001 <= fVar15) {
        fVar1 = fVar15;
      }
      pfVar8[2] = (*(float *)(*(longlong *)(param_1 + 0x68) + 0x1c) - *pfVar8) / fVar1;
    }
    lVar12 = (longlong)(*(int *)(param_1 + 0x70) + -1) * 0x1c;
    pfVar8 = (float *)(*(longlong *)(param_1 + 0x68) + lVar12);
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x18 + lVar12);
    if (cVar4 == '\x02') {
      if ((*(byte *)((longlong)pfVar8 + 0x19) & 0xfb) == 0) {
        pfVar8[1] = 0.0;
        pfVar8[2] = 0.0;
        *(undefined1 *)(pfVar8 + 5) = 0;
      }
    }
    else if (cVar4 == '\0') {
      *(undefined1 *)(pfVar8 + 5) = 0;
      lVar12 = (longlong)*(int *)(param_1 + 0x70);
      fVar15 = (float)(*(int *)(*(longlong *)(param_1 + 0x58) + -4 + lVar12 * 4) -
                      *(int *)(*(longlong *)(param_1 + 0x58) + -8 + lVar12 * 4));
      fVar1 = 0.0001;
      if (0.0001 <= fVar15) {
        fVar1 = fVar15;
      }
      pfVar8[1] = (*pfVar8 - *(float *)(*(longlong *)(param_1 + 0x68) + lVar12 * 0x1c + -0x38)) /
                  fVar1;
    }
    if (2 < *(int *)(param_1 + 0x70)) {
      iVar14 = 1;
      iVar13 = 0;
      do {
        lVar11 = (longlong)iVar14;
        lVar12 = lVar11 + -1;
        lVar9 = *(longlong *)(param_1 + 0x68);
        fVar1 = *(float *)(lVar9 + lVar11 + -1 + lVar12 * 0x1b);
        pfVar8 = (float *)(lVar9 + lVar11 * 0x1c);
        cVar4 = *(char *)(lVar9 + 0x18 + lVar11 * 0x1c);
        if (cVar4 == '\0') {
          *(undefined1 *)(pfVar8 + 5) = 0;
          lVar9 = *(longlong *)(param_1 + 0x68);
          fVar2 = (float)(*(int *)(*(longlong *)(param_1 + 0x58) + lVar11 * 4) -
                         *(int *)(*(longlong *)(param_1 + 0x58) + lVar12 * 4));
          fVar15 = 0.0001;
          if (0.0001 <= fVar2) {
            fVar15 = fVar2;
          }
          pfVar8[1] = (*pfVar8 - fVar1) / fVar15;
          fVar15 = (float)(*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar11 * 4) -
                          *(int *)(*(longlong *)(param_1 + 0x58) + lVar11 * 4));
          fVar1 = 0.0001;
          if (0.0001 <= fVar15) {
            fVar1 = fVar15;
          }
          pfVar8[2] = (*(float *)(lVar9 + lVar11 * 0x1c + 0x1c) - *pfVar8) / fVar1;
        }
        else if ((cVar4 == '\x02') && ((*(byte *)((longlong)pfVar8 + 0x19) & 0xfb) == 0)) {
          if (*(byte *)((longlong)pfVar8 + 0x19) == 4) {
            fVar15 = (float)FUN_147527372(param_1,iVar14);
            if ((((ABS(pfVar8[1]) <= 0.001) || (ABS(pfVar8[1] - fVar15) <= 0.001)) || (9 < iVar13))
               || (iVar14 < 2)) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar13 + 1;
              iVar14 = iVar14 + -2;
            }
          }
          else {
            fVar2 = *(float *)(lVar9 + lVar11 * 0x1c + 0x1c);
            lVar9 = *(longlong *)(param_1 + 0x58);
            iVar5 = *(int *)(lVar9 + 4 + lVar11 * 4);
            iVar6 = *(int *)(lVar9 + lVar12 * 4);
            fVar15 = (float)(iVar5 - iVar6);
            fVar10 = 0.0001;
            if (0.0001 <= fVar15) {
              fVar10 = fVar15;
            }
            if (DAT_14c760fdc == 0) {
              fVar15 = (((*pfVar8 - fVar1) + (fVar2 - *pfVar8)) * (1.0 - param_2)) / fVar10;
            }
            else {
              fVar15 = 0.0;
              if ((0 < DAT_14c760fdc) &&
                 (((fVar3 = *pfVar8, fVar1 < fVar3 && (fVar3 < fVar2)) ||
                  ((fVar3 < fVar1 && (fVar2 < fVar3)))))) {
                fVar18 = fVar3 - fVar1;
                fVar15 = ((fVar18 + (fVar2 - fVar3)) * (1.0 - param_2)) / fVar10;
                if (DAT_14c760fdc == 2) {
                  iVar7 = *(int *)(lVar9 + lVar11 * 4);
                  dVar16 = (double)(iVar7 - iVar6);
                  dVar19 = (double)(iVar5 - iVar7);
                  dVar17 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar16) {
                    dVar17 = dVar16;
                  }
                  dVar16 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar19) {
                    dVar16 = dVar19;
                  }
                  dVar19 = (double)fVar18 / (dVar17 * 0.6666666666666666);
                  dVar16 = (double)(fVar2 - fVar3) / (dVar16 * 0.6666666666666666);
                  dVar17 = 0.0;
                  if ((0.0 < dVar16 != dVar19 <= 0.0) && (fVar15 <= 0.0 != 0.0 < dVar16)) {
                    dVar17 = (double)fVar15;
                    if (0.0 <= dVar16) {
                      if (dVar16 <= dVar17) {
                        dVar17 = dVar16;
                      }
                      if (dVar19 <= dVar17) {
                        dVar17 = dVar19;
                      }
                    }
                    else {
                      if (dVar17 <= dVar16) {
                        dVar17 = dVar16;
                      }
                      if (dVar17 <= dVar19) {
                        dVar17 = dVar19;
                      }
                    }
                  }
                  fVar15 = (float)dVar17;
                }
                else if (DAT_14c760fdc == 1) {
                  fVar1 = ABS(fVar18) / ABS(fVar2 - fVar1);
                  if (fVar1 <= 0.85) {
                    if (fVar1 < 0.15) {
                      fVar15 = fVar15 * (fVar1 / 0.15);
                    }
                  }
                  else {
                    fVar15 = ((fVar1 + -0.85) / -0.15 + 1.0) * fVar15;
                  }
                }
              }
            }
          }
          pfVar8[1] = fVar15;
          pfVar8[2] = fVar15;
          *(undefined1 *)(pfVar8 + 5) = 0;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_1 + 0x70) + -1);
    }
  }
  return;
}



// FUNCTION 147527372 FUN_147527372 body=997 status=ok
// SIG undefined FUN_147527372(void)

ulonglong FUN_147527372(longlong param_1,int param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar10 = (longlong)param_2;
  lVar4 = lVar10 * 0x1c;
  lVar6 = (lVar10 + -1) * 0x1b + lVar10 + -1;
  fVar1 = *(float *)(lVar3 + lVar6);
  lVar9 = lVar10 + 1;
  lVar12 = lVar10 + 1 + lVar9 * 0x1b;
  fVar20 = *(float *)(lVar3 + lVar12);
  fVar21 = *(float *)(lVar3 + 4 + lVar12);
  cVar11 = *(char *)(lVar3 + 0x18 + lVar12);
  bVar5 = *(byte *)(lVar3 + 0x19 + lVar12);
  fVar14 = *(float *)(lVar3 + lVar4);
  if (DAT_14c760fdc != 2) {
    if ((fVar14 <= fVar1) || (fVar20 <= fVar14)) {
      if (fVar1 <= fVar14) {
        return 0;
      }
      if (fVar14 <= fVar20) {
        return 0;
      }
    }
    lVar12 = (longlong)*(int *)(param_1 + 0x70) + -2;
    if (((param_2 < (int)lVar12) && (ABS(fVar21) <= 1e-08)) && (cVar11 == '\x02')) {
      pfVar8 = (float *)(lVar3 + lVar4 + 0x38);
      uVar7 = lVar10 + 1;
      while (((bVar5 & 0xfb) == 0 &&
             (((fVar14 < fVar20 && (fVar17 = *pfVar8, fVar20 < *pfVar8)) ||
              ((fVar20 < fVar14 && (fVar17 = *pfVar8, *pfVar8 < fVar20))))))) {
        fVar20 = fVar17;
        uVar13 = uVar7 + 1;
        fVar21 = pfVar8[1];
        cVar11 = *(char *)(pfVar8 + 6);
        bVar5 = *(byte *)((longlong)pfVar8 + 0x19);
        if (((lVar12 <= (longlong)uVar7) || (1e-08 < ABS(fVar21))) ||
           (pfVar8 = pfVar8 + 7, uVar7 = uVar13, cVar11 != '\x02')) goto LAB_1475276e0;
      }
      cVar11 = '\x02';
      uVar13 = uVar7 & 0xffffffff;
LAB_1475276e0:
      lVar9 = (longlong)(int)uVar13;
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x58);
  iVar2 = *(int *)(lVar12 + lVar10 * 4);
  dVar15 = (double)(iVar2 - *(int *)(lVar12 + (lVar10 + -1) * 4));
  dVar16 = 9.999999747378752e-05;
  if (9.999999747378752e-05 <= dVar15) {
    dVar16 = dVar15;
  }
  dVar19 = (double)(*(int *)(lVar12 + lVar9 * 4) - iVar2);
  dVar15 = 9.999999747378752e-05;
  if (9.999999747378752e-05 <= dVar19) {
    dVar15 = dVar19;
  }
  fVar18 = fVar14 - (float)((double)*(float *)(lVar3 + 8 + lVar6) * dVar16 * 0.3333333432674408 +
                           (double)fVar1);
  fVar17 = (float)((double)fVar20 - (double)fVar21 * dVar15 * 0.3333333432674408) - fVar14;
  fVar21 = (float)((double)(fVar18 + fVar17) /
                  (dVar16 * 0.6666666865348816 + dVar15 * 0.6666666865348816));
  if (DAT_14c760fdc != 2) {
    fVar14 = (float)(**(code **)(*DAT_14cab2360 + 0xb8))();
    if ((0.0 <= fVar14) && (fVar14 <= 1.0)) {
      fVar1 = ABS(*(float *)(lVar3 + lVar4) - fVar1) / ABS(fVar20 - fVar1);
      if (fVar1 <= fVar14) {
        if (fVar1 < 1.0 - fVar14) {
          fVar1 = fVar1 / (1.0 - fVar14);
          fVar21 = fVar21 * fVar1 + (1.0 - fVar1) * 0.0;
        }
      }
      else {
        fVar1 = (fVar1 - fVar14) / (1.0 - fVar14);
        fVar21 = fVar1 * 0.0 + (1.0 - fVar1) * fVar21;
      }
    }
    return (ulonglong)(uint)fVar21;
  }
  if (((ABS(fVar14 - fVar20) <= 1e-08) && (cVar11 == '\x02')) && ((bVar5 & 0xfb) == 0)) {
    return 0;
  }
  dVar19 = (double)fVar18 / (dVar16 * 0.6666666865348816);
  dVar15 = (double)fVar17 / (dVar15 * 0.6666666865348816);
  dVar16 = 0.0;
  if ((dVar19 <= 0.0 != 0.0 < dVar15) && (0.0 < dVar15 != fVar21 <= 0.0)) {
    dVar16 = (double)fVar21;
    if (0.0 <= dVar15) {
      if (dVar15 <= dVar16) {
        dVar16 = dVar15;
      }
      if (dVar19 <= dVar16) {
        dVar16 = dVar19;
      }
    }
    else {
      if (dVar16 <= dVar15) {
        dVar16 = dVar15;
      }
      if (dVar16 <= dVar19) {
        dVar16 = dVar19;
      }
    }
  }
  return CONCAT44((int)((ulonglong)dVar16 >> 0x20),(float)dVar16);
}



// FUNCTION 147527758 FUN_147527758 body=247 status=ok
// SIG undefined FUN_147527758(void)

void FUN_147527758(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_1 + 0x80;
  local_38 = param_1 + 0x68;
  local_50 = param_1 + 0x58;
  local_40 = param_1;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar6 = FUN_147525ee8(&local_50,param_2,0);
    if (iVar6 == -1) {
      local_54 = 0;
      cVar5 = FUN_1400f0204(param_1,0,param_2);
      uVar4 = local_54;
      if (cVar5 != '\0') {
        uVar7 = FUN_147526c66(param_1,param_2);
        lVar2 = *(longlong *)(param_1 + 0x68);
        lVar3 = (ulonglong)uVar7 * 0x1c;
        *(undefined4 *)(lVar2 + lVar3) = uVar4;
        *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
        puVar1 = (undefined8 *)(lVar2 + 4 + lVar3);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(lVar2 + 0x14 + lVar3) = 0;
        FUN_147526dac(param_1,0);
      }
    }
  }
  FUN_147527850(&local_50,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147527850 FUN_147527850 body=329 status=ok
// SIG undefined FUN_147527850(void)

void FUN_147527850(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uStack_60 < 1) {
    uStack_80._0_4_ = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar4 = local_78;
      uVar3 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475278da;
      }
      else if (iVar2 < param_2) {
LAB_1475278da:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_147527ed2(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752799a FUN_14752799a body=275 status=ok
// SIG undefined FUN_14752799a(void)

void FUN_14752799a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  int local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x60)) {
    fVar2 = ((float)(int)((ulonglong)param_3 >> 0x20) / (float)(int)param_3) /
            ((float)(int)((ulonglong)param_2 >> 0x20) / (float)(int)param_2);
    lVar4 = 2;
    lVar3 = 0;
    do {
      FUN_144a808d5(&local_68,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + lVar3 * 4),param_2,
                    param_3);
      *(uint *)(*(longlong *)(param_1 + 0x58) + lVar3 * 4) = (uint)(0.5 <= local_64) + local_68;
      lVar1 = *(longlong *)(param_1 + 0x68);
      *(float *)(lVar1 + -4 + lVar4 * 4) = *(float *)(lVar1 + -4 + lVar4 * 4) * fVar2;
      *(float *)(lVar1 + lVar4 * 4) = *(float *)(lVar1 + lVar4 * 4) * fVar2;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 7;
    } while (lVar3 < *(int *)(param_1 + 0x60));
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147527aae FUN_147527aae body=1058 status=ok
// SIG undefined FUN_147527aae(void)

void FUN_147527aae(longlong *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar15 = param_1 + 0x10;
  local_b8 = param_1 + 0xd;
  local_d0 = param_1 + 0xb;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c8 = plVar15;
  local_c0 = param_1;
  (**(code **)(*param_1 + 8))(param_1,param_2 + 2,local_e8,&local_f8);
  if (2 < (int)uStack_f0) {
    local_108 = 0;
    uStack_100 = 0;
    uVar17 = 1;
    iVar16 = 0;
    local_120 = param_1;
    do {
      uVar18 = (ulonglong)uVar17;
      if (plVar15 == (longlong *)0x0) {
        iVar11 = -1;
        plVar15 = (longlong *)0x0;
        iVar12 = -1;
      }
      else {
        iVar11 = FUN_147a40458(plVar15,*(undefined4 *)(local_f8 + uVar18 * 4));
        plVar15 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          iVar12 = -1;
          plVar15 = (longlong *)0x0;
        }
        else {
          iVar12 = FUN_147a40458(local_c8,*(undefined4 *)(local_f8 + (ulonglong)(uVar17 + 1) * 4));
        }
      }
      lVar9 = local_f8;
      uVar8 = uStack_100;
      uVar17 = uVar17 + 1;
      lVar19 = *local_b8;
      lVar5 = *local_d0;
      iVar2 = *(int *)(lVar5 + (longlong)iVar12 * 4);
      iVar3 = *(int *)(lVar5 + (longlong)iVar16 * 4);
      fVar21 = (float)(int)*(undefined8 *)(param_2 + 6) /
               (float)(int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20);
      pfVar13 = (float *)((longlong)iVar16 * 0x1c + lVar19);
      fVar20 = (float)(iVar2 - iVar3) / fVar21;
      if (fVar20 <= 0.0) {
        fVar22 = *pfVar13;
      }
      else {
        iVar4 = *(int *)(lVar5 + (longlong)iVar11 * 4);
        pfVar14 = (float *)(lVar19 + (longlong)iVar12 * 0x1c);
        if (*(char *)(pfVar13 + 6) == '\x01') {
          if (iVar4 < iVar2) {
            pfVar14 = pfVar13;
          }
          fVar22 = *pfVar14;
        }
        else {
          fVar7 = ((float)(iVar4 - iVar3) / fVar21) / fVar20;
          fVar22 = *pfVar13;
          fVar1 = *pfVar14;
          if ((*(char *)(pfVar13 + 6) == '\0') &&
             ((DAT_14c760fd8 == 0 || (*(char *)(pfVar14 + 6) != '\x02')))) {
            fVar22 = fVar7 * (fVar1 - fVar22) + fVar22;
          }
          else {
            fVar6 = pfVar13[2] * fVar21 * fVar20 * 0.33333334 + fVar22;
            fVar20 = fVar1 - pfVar14[1] * fVar21 * fVar20 * 0.33333334;
            fVar21 = (fVar20 - fVar6) * fVar7 + fVar6;
            fVar22 = (fVar6 - fVar22) * fVar7 + fVar22;
            fVar22 = (fVar21 - fVar22) * fVar7 + fVar22;
            fVar22 = (((((fVar1 - fVar20) * fVar7 + fVar20) - fVar21) * fVar7 + fVar21) - fVar22) *
                     fVar7 + fVar22;
          }
        }
      }
      fVar20 = ABS(fVar22 - *(float *)(lVar19 + (longlong)iVar11 * 0x1c));
      if (fVar20 < *param_2 || fVar20 == *param_2) {
        lVar19 = (longlong)(int)uStack_100;
        uVar10 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar10);
        if (uStack_100._4_4_ < uVar10) {
          FUN_14065110c(&local_108,uVar8 & 0xffffffff);
        }
        *(undefined4 *)(local_108 + lVar19 * 4) = *(undefined4 *)(lVar9 + uVar18 * 4);
        iVar11 = iVar16;
      }
      iVar16 = iVar11;
    } while ((int)uVar17 < (int)uStack_f0 + -1);
    local_118 = local_108;
    local_110 = (int)uStack_100;
    FUN_147527ed2(&local_d0);
    if (*(char *)(param_2 + 1) != '\0') {
      FUN_147526dac(local_120,0);
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147527ed2 FUN_147527ed2 body=80 status=ok
// SIG undefined FUN_147527ed2(void)

void FUN_147527ed2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753eda8(param_1,iVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 147527f22 FUN_147527f22 body=747 status=ok
// SIG undefined FUN_147527f22(void)

undefined8
FUN_147527f22(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,char param_5
             )

{
  undefined8 *puVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_2 + 0x68;
  local_98 = (undefined8 *)(param_2 + 0x58);
  local_90 = param_2 + 0x80;
  local_88 = param_2;
  local_74 = param_3;
  uVar6 = FUN_147525ee8(&local_98,param_3,0);
  if (uVar6 != 0xffffffff) {
    *(undefined4 *)(*(longlong *)(param_2 + 0x68) + (ulonglong)uVar6 * 0x1c) = param_4;
    goto LAB_1475281b2;
  }
  fVar9 = 0.0;
  if (((byte)(param_5 - 1U) < 2) && (1 < (longlong)*(int *)(param_2 + 0x60))) {
    puVar2 = *(uint **)(param_2 + 0x58);
    local_a8 = ((ulonglong)*puVar2 << 0x20) + 1;
    local_a0 = ((ulonglong)puVar2[(longlong)*(int *)(param_2 + 0x60) + -1] << 0x20) + 1;
    cVar5 = FUN_1400a246c(&local_a8,&local_74);
    fVar9 = 0.0;
    if (cVar5 != '\0') {
      dVar3 = (double)FUN_14752820e(param_2,local_74,param_4,0xbfb999999999999a);
      dVar4 = (double)FUN_14752820e(param_2,local_74,param_4,0x3fb999999999999a);
      fVar9 = ((float)dVar4 - (float)dVar3) * 0.5;
    }
  }
  uVar6 = 0xffffffff;
  switch(param_5) {
  case '\0':
    uVar6 = FUN_147526c66(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = param_4;
    *(undefined2 *)(lVar7 + 0x18 + lVar8) = 2;
    goto LAB_1475281a2;
  case '\x01':
    uVar6 = FUN_147526c66(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = param_4;
    *(undefined2 *)(lVar7 + 0x18 + lVar8) = 0x102;
    goto LAB_147528158;
  case '\x02':
    uVar6 = FUN_147526c66(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = param_4;
    *(undefined2 *)(lVar7 + 0x18 + lVar8) = 0x202;
LAB_147528158:
    *(float *)(lVar7 + 4 + lVar8) = fVar9;
    *(float *)(lVar7 + 8 + lVar8) = fVar9;
    *(undefined4 *)(lVar7 + 0x14 + lVar8) = 0;
    *(undefined8 *)(lVar7 + 0xc + lVar8) = 0;
    break;
  case '\x03':
    uVar6 = FUN_147526c66(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x1c) = param_4;
    *(undefined1 *)(lVar7 + 0x18 + (ulonglong)uVar6 * 0x1c) = 0;
    break;
  case '\x04':
    uVar6 = FUN_147526c66(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x1c) = param_4;
    *(undefined1 *)(lVar7 + 0x18 + (ulonglong)uVar6 * 0x1c) = 1;
    break;
  case '\x05':
    uVar6 = FUN_147526c66(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x1c;
    *(undefined4 *)(lVar7 + lVar8) = param_4;
    *(undefined2 *)(lVar7 + 0x18 + lVar8) = 0x402;
LAB_1475281a2:
    puVar1 = (undefined8 *)(lVar7 + 4 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar7 + 0x14 + lVar8) = 0;
    break;
  default:
    goto switchD_147528055_default;
  }
LAB_1475281b2:
  FUN_147526dac(param_2,0);
switchD_147528055_default:
  FUN_147a404c6(param_2 + 0x80,param_1,uVar6);
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14752820e FUN_14752820e body=911 status=ok
// SIG undefined FUN_14752820e(void)

double FUN_14752820e(longlong param_1,int param_2,float param_3,double param_4)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auStack_f8 [44];
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar11 = ABS(param_4);
  dVar16 = (double)(~-(ulonglong)(dVar11 <= 1e-08) & (ulonglong)param_4 |
                   -(ulonglong)(dVar11 <= 1e-08) & 0x3fb999999999999a);
  lVar1 = *(longlong *)(param_1 + 0x108);
  dVar5 = (double)(int)lVar1;
  dVar3 = (double)(int)((ulonglong)lVar1 >> 0x20);
  dVar6 = ((double)((lVar1 >> 0x20) * (longlong)param_2) +
          (double)((ulonglong)dVar3 & 0x8000000000000000)) / dVar5;
  local_c4 = 0.0;
  local_c8 = 0;
  local_cc = param_3;
  FUN_1400f0204(param_1,0,param_2);
  dVar4 = ((dVar16 + dVar6) * dVar5) / dVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar4;
  auVar12 = roundpd(auVar12,auVar12,1);
  dVar10 = auVar12._0_8_;
  dVar4 = dVar4 - dVar10;
  if (2147483647.0 <= dVar10) {
    dVar10 = 2147483647.0;
  }
  if (dVar10 <= -2147483648.0) {
    dVar10 = -2147483648.0;
  }
  iVar7 = (int)dVar4;
  fVar9 = (float)dVar4 - (float)iVar7;
  fVar13 = fVar9;
  if (0.99999994 <= fVar9) {
    fVar13 = 0.99999994;
  }
  fVar13 = (float)(~-(uint)(0.0 < fVar9) & (uint)fVar9 | (uint)fVar13 & -(uint)(0.0 < fVar9)) + 0.5
           + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  FUN_1400f0204(param_1,0,CONCAT44(fVar13,(int)dVar10 + iVar7),&local_c4);
  dVar4 = (double)local_cc;
  dVar10 = 0.1;
  if (1e-08 < dVar11) {
    dVar10 = dVar11;
  }
  dVar10 = ((double)local_c4 - dVar4) / dVar10;
  if (1e-08 < ABS(ABS(dVar10) + -1.79769313486232e+308)) {
    uVar8 = 10;
    dVar11 = dVar10;
    do {
      dVar16 = dVar16 * 0.5;
      dVar10 = ((dVar6 + dVar16) * dVar5) / dVar3;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar10;
      auVar12 = roundpd(auVar15,auVar15,1);
      dVar14 = auVar12._0_8_;
      dVar10 = dVar10 - dVar14;
      if (2147483647.0 <= dVar14) {
        dVar14 = 2147483647.0;
      }
      if (dVar14 <= -2147483648.0) {
        dVar14 = -2147483648.0;
      }
      iVar7 = (int)dVar10;
      fVar9 = (float)dVar10 - (float)iVar7;
      fVar13 = fVar9;
      if (0.99999994 <= fVar9) {
        fVar13 = 0.99999994;
      }
      fVar13 = (float)(~-(uint)(0.0 < fVar9) & (uint)fVar9 | (uint)fVar13 & -(uint)(0.0 < fVar9)) +
               0.5 + -0.5;
      if (0.99999994 <= fVar13) {
        fVar13 = 0.99999994;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      FUN_1400f0204(param_1,0,CONCAT44(fVar13,(int)dVar14 + iVar7),&local_c4);
      dVar10 = ((double)local_c4 - dVar4) / ABS(dVar16);
    } while ((1e-08 < ABS(ABS(dVar10) - ABS(dVar11))) &&
            (bVar2 = 1 < uVar8, uVar8 = uVar8 - 1, dVar11 = dVar10, bVar2));
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return (dVar3 / dVar5) * dVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752859e FUN_14752859e body=115 status=ok
// SIG undefined FUN_14752859e(void)

uint FUN_14752859e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = FUN_147526c66();
  lVar2 = *(longlong *)(param_1 + 0x68);
  lVar3 = (ulonglong)uVar7 * 0x1c;
  *(undefined4 *)(lVar2 + lVar3) = param_3;
  *(undefined1 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 *)(lVar2 + 0x19 + lVar3) = param_4;
  *(undefined4 *)(lVar2 + 0x14 + lVar3) = param_5[4];
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  puVar1 = (undefined4 *)(lVar2 + 4 + lVar3);
  *puVar1 = *param_5;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  FUN_147526dac(param_1,0);
  return uVar7;
}



// FUNCTION 147528612 FUN_147528612 body=794 status=ok
// SIG undefined FUN_147528612(void)

undefined4 FUN_147528612(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined4 local_12c;
  longlong *local_128;
  uint local_120;
  int local_118;
  int iStack_114;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  undefined2 local_84;
  longlong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab2378) {
    FUN_144b3d300(&DAT_14cab2378);
    if (DAT_14cab2378 == -1) {
      FUN_1446ddc76(&DAT_14cab2370,"RichCurve",1);
      _Init_thread_footer(&DAT_14cab2378);
    }
  }
  local_f0 = (undefined **)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_2 + 8));
  uVar7 = FUN_1468ec2ac(&local_f0,DAT_14cab2370);
  if ((char)uVar7 != '\0') {
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 3.4028235e+38;
    local_84 = 0x404;
    local_f0 = (undefined **)&DAT_14a176f00;
    local_80 = 0;
    uStack_78 = 0;
    uVar8 = FUN_14639173e();
    FUN_14483b62e(uVar8,param_3,&local_f0,0);
    if ((local_88 != 3.4028235e+38) || (NAN(local_88))) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      *(float *)(param_1 + 0x78) = local_88;
    }
    *(undefined1 *)(param_1 + 0x50) = (undefined1)local_84;
    *(undefined1 *)(param_1 + 0x51) = local_84._1_1_;
    if ((int)uStack_78 < 0) {
LAB_147528925:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_78 & 0xffffffff);
    }
    if (*(int *)(param_1 + 100) < (int)uStack_78) {
      FUN_140aba11c(param_1 + 0x58);
      if ((int)uStack_78 < 0) goto LAB_147528925;
    }
    if (*(int *)(param_1 + 0x74) < (int)uStack_78) {
      FUN_140eb5d8c(param_1 + 0x68);
    }
    FUN_145cba7c3(&local_118);
    fVar5 = (float)iStack_114;
    fVar4 = (float)local_118;
    FUN_147a410da(&local_f0,&local_128);
    if (-1 < (int)local_120) {
      iVar9 = 0;
      do {
        if ((int)local_128[1] <= (int)local_120) break;
        lVar2 = *local_128;
        lVar6 = (ulonglong)local_120 * 0x1c;
        FUN_147572fa9(&local_12c,0,CONCAT44(iStack_114,local_118),
                      (double)*(float *)(lVar2 + 4 + lVar6));
        local_f8 = 0;
        local_100 = 0;
        local_f2 = 0;
        local_10c = *(undefined4 *)(lVar2 + 8 + lVar6);
        local_f4 = *(undefined1 *)(lVar2 + lVar6);
        local_f3 = *(undefined1 *)(lVar2 + 1 + lVar6);
        local_108 = *(float *)(lVar2 + 0xc + lVar6) * (fVar5 / fVar4);
        local_104 = *(float *)(lVar2 + 0x14 + lVar6) * (fVar5 / fVar4);
        local_138 = param_1 + 0x68;
        FUN_14752892e(iVar9,local_12c,&local_10c,param_1 + 0x58);
        uVar1 = local_120 + 1;
        bVar3 = -2 < (int)local_120;
        iVar9 = iVar9 + 1;
        local_120 = uVar1;
      } while (bVar3);
    }
    local_f0 = (undefined **)&DAT_14a176f00;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    local_f0 = &PTR_FUN_14a177080;
    FUN_144a78a1a(&local_e8);
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752892e FUN_14752892e body=526 status=ok
// SIG undefined FUN_14752892e(void)

void FUN_14752892e(uint param_1,int param_2,undefined8 *param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *_Src;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  if ((int)param_1 < 1) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = param_2;
  }
  else {
    _Src = (void *)*param_4;
    if (param_2 < *(int *)((longlong)_Src + (ulonglong)param_1 * 4 + -4)) {
      lVar8 = (ulonglong)param_1 - 1;
      do {
        if (lVar8 < 1) {
          uVar4 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar4 + 1) {
            FUN_14753e8f2(param_4,(ulonglong)uVar4);
            _Src = (void *)*param_4;
          }
          memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)uVar4 << 2);
          *(int *)*param_4 = param_2;
          uVar4 = *(uint *)(param_5 + 1);
          *(uint *)(param_5 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_5 + 0xc) < uVar4 + 1) {
            FUN_14753f2b0(param_5,(ulonglong)uVar4);
          }
          memmove((void *)(*param_5 + 0x1c),(void *)*param_5,(ulonglong)uVar4 * 0x1c);
          puVar10 = (undefined8 *)*param_5;
          goto LAB_147528a3e;
        }
        lVar1 = lVar8 + -1;
        param_1 = param_1 - 1;
        lVar2 = lVar8 * 4;
        lVar8 = lVar1;
      } while (param_2 < *(int *)((longlong)_Src + lVar2 + -4));
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_4,iVar3);
        _Src = (void *)*param_4;
      }
      uVar9 = (ulonglong)((int)lVar1 + 1);
      memmove((void *)((longlong)_Src + uVar9 * 4 + 4),(void *)((longlong)_Src + uVar9 * 4),
              (ulonglong)(iVar3 - param_1) << 2);
      *(int *)(*param_4 + uVar9 * 4) = param_2;
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_14753f2b0(param_5,iVar3);
      }
      lVar8 = uVar9 * 0x1c;
      memmove((void *)(*param_5 + lVar8 + 0x1c),(void *)(*param_5 + lVar8),
              (ulonglong)(iVar3 - param_1) * 0x1c);
      goto LAB_147528a3b;
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
      _Src = (void *)*param_4;
    }
    *(int *)((longlong)_Src + (longlong)iVar3 * 4) = param_2;
  }
  iVar3 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_14753f2b0(param_5,iVar3);
  }
  lVar8 = (longlong)iVar3 * 0x1c;
LAB_147528a3b:
  puVar10 = (undefined8 *)(lVar8 + *param_5);
LAB_147528a3e:
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = *(undefined8 *)((longlong)param_3 + 0x14);
  *(undefined8 *)((longlong)puVar10 + 0xc) = *(undefined8 *)((longlong)param_3 + 0xc);
  *(undefined8 *)((longlong)puVar10 + 0x14) = uVar7;
  *puVar10 = uVar5;
  puVar10[1] = uVar6;
  return;
}



// FUNCTION 147528b3c FUN_147528b3c body=807 status=ok
// SIG undefined FUN_147528b3c(void)

bool FUN_147528b3c(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if (9 < iVar4) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    iVar5 = FUN_1448332aa(param_2,&DAT_149e3906c);
    puVar1 = *(undefined4 **)param_2[1];
    puVar2 = (undefined4 *)((undefined8 *)param_2[1])[1];
    if (iVar5 < 0xc) {
      if (puVar2 < (undefined4 *)((longlong)puVar1 + 1U)) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 6,1);
      }
      else {
        *(undefined1 *)(param_1 + 6) = *(undefined1 *)puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x19),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x19) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      FUN_1475265aa(param_1 + 1,param_2);
    }
    else {
      if (puVar2 < puVar1 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        param_1[1] = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar1 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        param_1[2] = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar1 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        param_1[3] = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar1 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        param_1[4] = *puVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 5,1);
      }
      else {
        *(undefined1 *)(param_1 + 5) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 6,1);
      }
      else {
        *(undefined1 *)(param_1 + 6) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x19),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x19) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar3 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x1a),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1a) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
    }
  }
  return 9 < iVar4;
}



// FUNCTION 147528e64 FUN_147528e64 body=123 status=ok
// SIG undefined FUN_147528e64(void)

undefined8 * FUN_147528e64(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (int)param_3;
  if (*(int *)(param_2 + 0x60) + -1 == iVar2) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar2 * 4);
    uVar3 = 0x7fffffff;
    if ((ulonglong)uVar1 != 0x7fffffff) {
      uVar3 = (ulonglong)(uVar1 + 1);
    }
    *param_1 = *(undefined8 *)
                (*(longlong *)(param_2 + 0x68) + (longlong)(*(int *)(param_2 + 0x70) + -1) * 0x20);
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[0xb] = uVar3 << 0x20 | (ulonglong)uVar1;
  }
  else {
    FUN_14010925c(param_1,param_2,param_3,iVar2 + 1,0);
  }
  return param_1;
}



// FUNCTION 147528ee0 FUN_147528ee0 body=314 status=ok
// SIG undefined FUN_147528ee0(void)

uint FUN_147528ee0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(uint *)(param_1 + 0x60);
  lVar6 = *(longlong *)(param_1 + 0x58);
  uVar8 = 0;
  uVar7 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 4) <= param_2) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar5 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar5);
  }
  *(uint *)(param_1 + 0x60) = uVar3 + 1;
  if (*(uint *)(param_1 + 100) < uVar3 + 1) {
    FUN_14753e8f2((longlong *)(param_1 + 0x58),uVar3);
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  uVar9 = (ulonglong)uVar8;
  memmove((void *)(lVar6 + uVar9 * 4 + 4),(void *)(lVar6 + uVar9 * 4),
          (ulonglong)(uVar3 - uVar8) << 2);
  *(int *)(*(longlong *)(param_1 + 0x58) + uVar9 * 4) = param_2;
  iVar4 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar4 + 1U) {
    FUN_14753f65a(param_1 + 0x68,iVar4);
  }
  lVar10 = uVar9 * 0x20;
  memmove((void *)(*(longlong *)(param_1 + 0x68) + lVar10 + 0x20),
          (void *)(*(longlong *)(param_1 + 0x68) + lVar10),(ulonglong)(iVar4 - uVar8) << 5);
  lVar6 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(lVar6 + lVar10) = 0;
  ((undefined8 *)(lVar6 + lVar10))[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0xc + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar6 + 0x1c + lVar10) = 2;
  FUN_147a407c8(param_1 + 0x88,local_34,uVar8);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14752901c FUN_14752901c body=1332 status=ok
// SIG undefined FUN_14752901c(void)

void FUN_14752901c(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (1 < *(int *)(param_1 + 0x70)) {
    pdVar5 = *(double **)(param_1 + 0x68);
    if (*(char *)((longlong)pdVar5 + 0x1c) == '\x02') {
      if ((*(byte *)((longlong)pdVar5 + 0x1d) & 0xfb) == 0) {
        pdVar5[1] = 0.0;
        *(undefined1 *)(pdVar5 + 3) = 0;
      }
    }
    else if (*(char *)((longlong)pdVar5 + 0x1c) == '\0') {
      *(undefined1 *)(pdVar5 + 3) = 0;
      dVar12 = (double)((*(int **)(param_1 + 0x58))[1] - **(int **)(param_1 + 0x58));
      dVar16 = 9.999999747378752e-05;
      if (9.999999747378752e-05 <= dVar12) {
        dVar16 = dVar12;
      }
      *(float *)((longlong)pdVar5 + 0xc) =
           (float)((*(double *)(*(longlong *)(param_1 + 0x68) + 0x20) - *pdVar5) / dVar16);
    }
    lVar8 = (longlong)(*(int *)(param_1 + 0x70) + -1) * 0x20;
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x68) + lVar8);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x1c + lVar8);
    if (cVar1 == '\x02') {
      if ((*(byte *)((longlong)pdVar5 + 0x1d) & 0xfb) == 0) {
        pdVar5[1] = 0.0;
        *(undefined1 *)(pdVar5 + 3) = 0;
      }
    }
    else if (cVar1 == '\0') {
      *(undefined1 *)(pdVar5 + 3) = 0;
      lVar8 = (longlong)*(int *)(param_1 + 0x70);
      dVar12 = (double)(*(int *)(*(longlong *)(param_1 + 0x58) + -4 + lVar8 * 4) -
                       *(int *)(*(longlong *)(param_1 + 0x58) + -8 + lVar8 * 4));
      dVar16 = 9.999999747378752e-05;
      if (9.999999747378752e-05 <= dVar12) {
        dVar16 = dVar12;
      }
      *(float *)(pdVar5 + 1) =
           (float)((*pdVar5 - *(double *)(*(longlong *)(param_1 + 0x68) + (lVar8 + -2) * 0x20)) /
                  dVar16);
    }
    if (2 < *(int *)(param_1 + 0x70)) {
      iVar10 = 1;
      iVar9 = 0;
      do {
        lVar7 = (longlong)iVar10;
        lVar8 = lVar7 + -1;
        lVar6 = *(longlong *)(param_1 + 0x68);
        dVar16 = *(double *)(lVar6 + lVar8 * 0x20);
        pdVar5 = (double *)(lVar6 + lVar7 * 0x20);
        cVar1 = *(char *)(lVar6 + 0x1c + lVar7 * 0x20);
        if (cVar1 == '\0') {
          *(undefined1 *)(pdVar5 + 3) = 0;
          lVar6 = *(longlong *)(param_1 + 0x68);
          dVar14 = (double)(*(int *)(*(longlong *)(param_1 + 0x58) + lVar7 * 4) -
                           *(int *)(*(longlong *)(param_1 + 0x58) + lVar8 * 4));
          dVar12 = 9.999999747378752e-05;
          if (9.999999747378752e-05 <= dVar14) {
            dVar12 = dVar14;
          }
          *(float *)(pdVar5 + 1) = (float)((*pdVar5 - dVar16) / dVar12);
          dVar12 = (double)(*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar7 * 4) -
                           *(int *)(*(longlong *)(param_1 + 0x58) + lVar7 * 4));
          dVar16 = 9.999999747378752e-05;
          if (9.999999747378752e-05 <= dVar12) {
            dVar16 = dVar12;
          }
          *(float *)((longlong)pdVar5 + 0xc) =
               (float)((*(double *)(lVar6 + (lVar7 + 1) * 0x20) - *pdVar5) / dVar16);
        }
        else if ((cVar1 == '\x02') && ((*(byte *)((longlong)pdVar5 + 0x1d) & 0xfb) == 0)) {
          if (*(byte *)((longlong)pdVar5 + 0x1d) == 4) {
            fVar11 = (float)FUN_147529550(param_1,iVar10);
            if ((((ABS(*(float *)(pdVar5 + 1)) <= 0.001) ||
                 (ABS(*(float *)(pdVar5 + 1) - fVar11) <= 0.001)) || (9 < iVar9)) || (iVar10 < 2)) {
              iVar9 = 0;
            }
            else {
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + -2;
            }
          }
          else {
            dVar12 = *(double *)(lVar6 + (lVar7 + 1) * 0x20);
            lVar6 = *(longlong *)(param_1 + 0x58);
            iVar2 = *(int *)(lVar6 + 4 + lVar7 * 4);
            iVar3 = *(int *)(lVar6 + lVar8 * 4);
            dVar13 = (double)(iVar2 - iVar3);
            dVar14 = 9.999999747378752e-05;
            if (9.999999747378752e-05 <= dVar13) {
              dVar14 = dVar13;
            }
            if (DAT_14c760fdc == 0) {
              dVar14 = (double)(float)(((*pdVar5 - dVar16) + (dVar12 - *pdVar5)) *
                                      (double)(1.0 - param_2)) / dVar14;
LAB_1475293eb:
              fVar11 = (float)dVar14;
            }
            else {
              fVar11 = 0.0;
              if ((0 < DAT_14c760fdc) &&
                 (((dVar13 = *pdVar5, dVar16 < dVar13 && (dVar13 < dVar12)) ||
                  ((dVar13 < dVar16 && (dVar12 < dVar13)))))) {
                dVar15 = dVar13 - dVar16;
                fVar11 = (float)((double)(float)((dVar15 + (dVar12 - dVar13)) *
                                                (double)(1.0 - param_2)) / dVar14);
                if (DAT_14c760fdc == 2) {
                  iVar4 = *(int *)(lVar6 + lVar7 * 4);
                  dVar14 = (double)(iVar4 - iVar3);
                  dVar16 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar14) {
                    dVar16 = dVar14;
                  }
                  dVar17 = (double)(iVar2 - iVar4);
                  dVar14 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar17) {
                    dVar14 = dVar17;
                  }
                  dVar15 = dVar15 / (dVar16 * 0.6666666666666666);
                  dVar12 = (dVar12 - dVar13) / (dVar14 * 0.6666666666666666);
                  dVar16 = 0.0;
                  if ((0.0 < dVar12 != dVar15 <= 0.0) && (fVar11 <= 0.0 != 0.0 < dVar12)) {
                    dVar16 = (double)fVar11;
                    if (0.0 <= dVar12) {
                      if (dVar12 <= dVar16) {
                        dVar16 = dVar12;
                      }
                      if (dVar15 <= dVar16) {
                        dVar16 = dVar15;
                      }
                    }
                    else {
                      if (dVar16 <= dVar12) {
                        dVar16 = dVar12;
                      }
                      if (dVar16 <= dVar15) {
                        dVar16 = dVar15;
                      }
                    }
                  }
                  fVar11 = (float)dVar16;
                }
                else if (DAT_14c760fdc == 1) {
                  dVar16 = ABS(dVar15 / (dVar12 - dVar16));
                  if (dVar16 <= 0.85) {
                    if (dVar16 < 0.15000000000000002) {
                      dVar14 = (double)fVar11 * (dVar16 / 0.15000000000000002);
                      goto LAB_1475293eb;
                    }
                  }
                  else {
                    fVar11 = (float)(((dVar16 + -0.85) / -0.15000000000000002 + 1.0) *
                                    (double)fVar11);
                  }
                }
              }
            }
          }
          *(float *)(pdVar5 + 1) = fVar11;
          *(float *)((longlong)pdVar5 + 0xc) = fVar11;
          *(undefined1 *)(pdVar5 + 3) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x70) + -1);
    }
  }
  return;
}



// FUNCTION 147529550 FUN_147529550 body=942 status=ok
// SIG undefined FUN_147529550(void)

ulonglong FUN_147529550(longlong param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar11 = (longlong)param_2;
  lVar10 = lVar11 * 0x20;
  lVar5 = (lVar11 + -1) * 0x20;
  dVar16 = *(double *)(lVar3 + lVar5);
  lVar9 = lVar11 + 1;
  lVar6 = lVar9 * 0x20;
  dVar17 = *(double *)(lVar3 + lVar6);
  uVar20 = SUB84(dVar17,0);
  uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
  fVar22 = *(float *)(lVar3 + 8 + lVar6);
  cVar12 = *(char *)(lVar3 + 0x1c + lVar6);
  bVar4 = *(byte *)(lVar3 + 0x1d + lVar6);
  dVar1 = *(double *)(lVar3 + lVar10);
  if (DAT_14c760fdc != 2) {
    if ((dVar1 <= dVar16) || (dVar17 <= dVar1)) {
      if (dVar16 <= dVar1) {
        return 0;
      }
      if (dVar1 <= dVar17) {
        return 0;
      }
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x70) + -2;
    if (((param_2 < (int)lVar6) && (ABS(fVar22) <= 1e-08)) && (cVar12 == '\x02')) {
      pdVar8 = (double *)(lVar10 + lVar3 + 0x40);
      uVar7 = lVar11 + 1;
      while (((bVar4 & 0xfb) == 0 &&
             (((dVar1 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar1
               && (dVar17 = *pdVar8,
                  (double)CONCAT44(uVar21,uVar20) <= dVar17 &&
                  dVar17 != (double)CONCAT44(uVar21,uVar20))) ||
              (((double)CONCAT44(uVar21,uVar20) <= dVar1 && dVar1 != (double)CONCAT44(uVar21,uVar20)
               && (dVar17 = *pdVar8,
                  dVar17 <= (double)CONCAT44(uVar21,uVar20) &&
                  (double)CONCAT44(uVar21,uVar20) != dVar17))))))) {
        uVar13 = uVar7 + 1;
        fVar22 = *(float *)(pdVar8 + 1);
        cVar12 = *(char *)((longlong)pdVar8 + 0x1c);
        bVar4 = *(byte *)((longlong)pdVar8 + 0x1d);
        if ((lVar6 <= (longlong)uVar7) || (1e-08 < ABS(fVar22))) goto LAB_147529887;
        pdVar8 = pdVar8 + 4;
        uVar20 = SUB84(dVar17,0);
        uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
        uVar7 = uVar13;
        if (cVar12 != '\x02') goto LAB_147529887;
      }
      cVar12 = '\x02';
      dVar17 = (double)CONCAT44(uVar21,uVar20);
      uVar13 = uVar7 & 0xffffffff;
LAB_147529887:
      lVar9 = (longlong)(int)uVar13;
      uVar20 = SUB84(dVar17,0);
      uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  iVar2 = *(int *)(lVar6 + lVar11 * 4);
  dVar15 = (double)(iVar2 - *(int *)(lVar6 + (lVar11 + -1) * 4));
  dVar17 = 9.999999747378752e-05;
  if (9.999999747378752e-05 <= dVar15) {
    dVar17 = dVar15;
  }
  dVar18 = (double)(*(int *)(lVar6 + lVar9 * 4) - iVar2);
  dVar15 = 9.999999747378752e-05;
  if (9.999999747378752e-05 <= dVar18) {
    dVar15 = dVar18;
  }
  dVar18 = dVar1 - ((double)*(float *)(lVar3 + 0xc + lVar5) * dVar17 * 0.3333333333333333 + dVar16);
  dVar19 = ((double)CONCAT44(uVar21,uVar20) - (double)fVar22 * dVar15 * 0.3333333333333333) - dVar1;
  fVar22 = (float)((dVar18 + dVar19) / (dVar17 * 0.6666666666666666 + dVar15 * 0.6666666666666666));
  if (DAT_14c760fdc == 2) {
    if (((ABS(dVar1 - (double)CONCAT44(uVar21,uVar20)) <= 1e-08) && (cVar12 == '\x02')) &&
       ((bVar4 & 0xfb) == 0)) {
      return 0;
    }
    dVar18 = dVar18 / (dVar17 * 0.6666666666666666);
    dVar19 = dVar19 / (dVar15 * 0.6666666666666666);
    dVar16 = 0.0;
    if ((dVar18 <= 0.0 != 0.0 < dVar19) && (0.0 < dVar19 != fVar22 <= 0.0)) {
      dVar16 = (double)fVar22;
      if (0.0 <= dVar19) {
        if (dVar19 <= dVar16) {
          dVar16 = dVar19;
        }
        if (dVar18 <= dVar16) {
          dVar16 = dVar18;
        }
      }
      else {
        if (dVar16 <= dVar19) {
          dVar16 = dVar19;
        }
        if (dVar16 <= dVar18) {
          dVar16 = dVar18;
        }
      }
    }
    return CONCAT44((int)((ulonglong)dVar16 >> 0x20),(float)dVar16);
  }
  fVar14 = (float)(**(code **)(*DAT_14cab2360 + 0xb8))();
  if ((0.0 <= fVar14) && (fVar14 <= 1.0)) {
    dVar16 = ABS((*(double *)(lVar3 + lVar10) - dVar16) / ((double)CONCAT44(uVar21,uVar20) - dVar16)
                );
    dVar17 = (double)fVar14;
    if (dVar16 <= dVar17) {
      if (1.0 - dVar17 <= dVar16) goto LAB_1475298dc;
      dVar16 = dVar16 / (1.0 - dVar17);
      dVar16 = (double)fVar22 * dVar16 + (1.0 - dVar16) * 0.0;
    }
    else {
      dVar16 = (dVar16 - dVar17) / (1.0 - dVar17);
      dVar16 = dVar16 * 0.0 + (1.0 - dVar16) * (double)fVar22;
    }
    fVar22 = (float)dVar16;
  }
LAB_1475298dc:
  return (ulonglong)(uint)fVar22;
}



// FUNCTION 1475298fe FUN_1475298fe body=300 status=ok
// SIG undefined FUN_1475298fe(void)

void FUN_1475298fe(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [96];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_1 + 0x88;
  local_c0 = param_1 + 0x68;
  local_d8 = param_1 + 0x58;
  local_c8 = param_1;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar5 = FUN_147525ee8(&local_d8,param_2,0);
    if (iVar5 == -1) {
      local_b8 = 0;
      FUN_140108c2a(local_b0,param_1,0,param_2);
      cVar4 = FUN_144809632(local_b0,param_2,&local_b8);
      uVar3 = local_b8;
      if (cVar4 != '\0') {
        uVar6 = FUN_147528ee0(param_1,param_2);
        lVar2 = *(longlong *)(param_1 + 0x68);
        lVar7 = (ulonglong)uVar6 * 0x20;
        *(undefined8 *)(lVar2 + lVar7) = uVar3;
        *(undefined2 *)(lVar2 + 0x1c + lVar7) = 2;
        puVar1 = (undefined8 *)(lVar2 + 8 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(lVar2 + 0x18 + lVar7) = 0;
        FUN_14752901c(param_1,0);
      }
    }
  }
  FUN_147529a2c(&local_d8,param_2,param_3);
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147529a2c FUN_147529a2c body=329 status=ok
// SIG undefined FUN_147529a2c(void)

void FUN_147529a2c(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uStack_60 < 1) {
    uStack_80._0_4_ = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar4 = local_78;
      uVar3 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_147529ab6;
      }
      else if (iVar2 < param_2) {
LAB_147529ab6:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_14752a060(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147529b76 FUN_147529b76 body=275 status=ok
// SIG undefined FUN_147529b76(void)

void FUN_147529b76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  int local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x60)) {
    fVar2 = ((float)(int)((ulonglong)param_3 >> 0x20) / (float)(int)param_3) /
            ((float)(int)((ulonglong)param_2 >> 0x20) / (float)(int)param_2);
    lVar4 = 3;
    lVar3 = 0;
    do {
      FUN_144a808d5(&local_68,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + lVar3 * 4),param_2,
                    param_3);
      *(uint *)(*(longlong *)(param_1 + 0x58) + lVar3 * 4) = (uint)(0.5 <= local_64) + local_68;
      lVar1 = *(longlong *)(param_1 + 0x68);
      *(float *)(lVar1 + -4 + lVar4 * 4) = *(float *)(lVar1 + -4 + lVar4 * 4) * fVar2;
      *(float *)(lVar1 + lVar4 * 4) = *(float *)(lVar1 + lVar4 * 4) * fVar2;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x60));
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147529c8a FUN_147529c8a body=981 status=ok
// SIG undefined FUN_147529c8a(void)

void FUN_147529c8a(longlong *param_1,float *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [3];
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar14 = param_1 + 0x11;
  local_a8 = param_1 + 0xd;
  local_c0 = param_1 + 0xb;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = plVar14;
  local_b0 = param_1;
  (**(code **)(*param_1 + 8))(param_1,param_2 + 2,local_d8,&local_e8);
  if (2 < (int)uStack_e0) {
    local_f8 = 0;
    uStack_f0 = 0;
    uVar16 = 1;
    iVar15 = 0;
    do {
      uVar17 = (ulonglong)uVar16;
      if (plVar14 == (longlong *)0x0) {
        iVar10 = -1;
        plVar14 = (longlong *)0x0;
        iVar11 = -1;
      }
      else {
        iVar10 = FUN_147a40458(plVar14,*(undefined4 *)(local_e8 + uVar17 * 4));
        plVar14 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          iVar11 = -1;
          plVar14 = (longlong *)0x0;
        }
        else {
          iVar11 = FUN_147a40458(local_b8,*(undefined4 *)(local_e8 + (ulonglong)(uVar16 + 1) * 4));
        }
      }
      lVar8 = local_e8;
      uVar7 = uStack_f0;
      uVar16 = uVar16 + 1;
      lVar18 = *local_a8;
      lVar5 = *local_c0;
      iVar2 = *(int *)(lVar5 + (longlong)iVar11 * 4);
      iVar3 = *(int *)(lVar5 + (longlong)iVar15 * 4);
      dVar20 = (double)(int)*(undefined8 *)(param_2 + 6) /
               (double)(int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20);
      pdVar12 = (double *)((longlong)iVar15 * 0x20 + lVar18);
      dVar22 = (double)(iVar2 - iVar3) / dVar20;
      if (dVar22 <= 0.0) {
        dVar21 = *pdVar12;
      }
      else {
        iVar4 = *(int *)(lVar5 + (longlong)iVar10 * 4);
        pdVar13 = (double *)(lVar18 + (longlong)iVar11 * 0x20);
        if (*(char *)((longlong)pdVar12 + 0x1c) == '\x01') {
          if (iVar4 < iVar2) {
            pdVar13 = pdVar12;
          }
          dVar21 = *pdVar13;
        }
        else {
          dVar19 = ((double)(iVar4 - iVar3) / dVar20) / dVar22;
          dVar21 = *pdVar12;
          dVar1 = *pdVar13;
          if ((*(char *)((longlong)pdVar12 + 0x1c) == '\0') &&
             ((DAT_14c760fd8 == 0 || (*(char *)((longlong)pdVar13 + 0x1c) != '\x02')))) {
            dVar21 = dVar19 * (dVar1 - dVar21) + dVar21;
          }
          else {
            dVar6 = (double)*(float *)((longlong)pdVar12 + 0xc) * dVar20 * dVar22 *
                    0.3333333333333333 + dVar21;
            dVar22 = dVar1 - (double)*(float *)(pdVar13 + 1) * dVar20 * dVar22 * 0.3333333333333333;
            dVar20 = (double)(float)dVar19;
            dVar19 = (dVar22 - dVar6) * dVar20 + dVar6;
            dVar21 = (dVar6 - dVar21) * dVar20 + dVar21;
            dVar21 = (dVar19 - dVar21) * dVar20 + dVar21;
            dVar21 = (((((dVar1 - dVar22) * dVar20 + dVar22) - dVar19) * dVar20 + dVar19) - dVar21)
                     * dVar20 + dVar21;
          }
        }
      }
      if (ABS(dVar21 - *(double *)(lVar18 + (longlong)iVar10 * 0x20)) <= (double)*param_2) {
        lVar18 = (longlong)(int)uStack_f0;
        uVar9 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
        if (uStack_f0._4_4_ < uVar9) {
          FUN_14065110c(&local_f8,uVar7 & 0xffffffff);
        }
        *(undefined4 *)(local_f8 + lVar18 * 4) = *(undefined4 *)(lVar8 + uVar17 * 4);
        iVar10 = iVar15;
      }
      iVar15 = iVar10;
    } while ((int)uVar16 < (int)uStack_e0 + -1);
    local_108 = local_f8;
    local_100 = (int)uStack_f0;
    FUN_14752a060(&local_c0);
    if (*(char *)(param_2 + 1) != '\0') {
      FUN_14752901c(param_1,0);
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752a060 FUN_14752a060 body=80 status=ok
// SIG undefined FUN_14752a060(void)

void FUN_14752a060(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753f34e(param_1,iVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14752a0b0 FUN_14752a0b0 body=723 status=ok
// SIG undefined FUN_14752a0b0(void)

undefined8
FUN_14752a0b0(undefined8 param_1,longlong param_2,undefined4 param_3,float param_4,char param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_2 + 0x68;
  local_98 = (undefined8 *)(param_2 + 0x58);
  local_90 = param_2 + 0x88;
  local_88 = param_2;
  local_74 = param_3;
  uVar6 = FUN_147525ee8(&local_98,param_3,0);
  if (uVar6 != 0xffffffff) {
    *(double *)(*(longlong *)(param_2 + 0x68) + (ulonglong)uVar6 * 0x20) = (double)param_4;
    goto LAB_14752a328;
  }
  fVar9 = 0.0;
  if (((byte)(param_5 - 1U) < 2) && (1 < (longlong)*(int *)(param_2 + 0x60))) {
    puVar2 = *(uint **)(param_2 + 0x58);
    local_a8 = ((ulonglong)*puVar2 << 0x20) + 1;
    local_a0 = ((ulonglong)puVar2[(longlong)*(int *)(param_2 + 0x60) + -1] << 0x20) + 1;
    cVar5 = FUN_1400a246c(&local_a8,&local_74);
    fVar9 = 0.0;
    if (cVar5 != '\0') {
      dVar3 = (double)FUN_14752a384(param_2,local_74,param_4,0xbfb999999999999a);
      dVar4 = (double)FUN_14752a384(param_2,local_74,param_4,0x3fb999999999999a);
      fVar9 = ((float)dVar4 - (float)dVar3) * 0.5;
    }
  }
  uVar6 = 0xffffffff;
  switch(param_5) {
  case '\0':
    uVar6 = FUN_147528ee0(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x20;
    *(double *)(lVar7 + lVar8) = (double)param_4;
    *(undefined2 *)(lVar7 + 0x1c + lVar8) = 2;
    goto LAB_14752a318;
  case '\x01':
    uVar6 = FUN_147528ee0(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x20;
    *(double *)(lVar7 + lVar8) = (double)param_4;
    *(undefined2 *)(lVar7 + 0x1c + lVar8) = 0x102;
    goto LAB_14752a2d1;
  case '\x02':
    uVar6 = FUN_147528ee0(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x20;
    *(double *)(lVar7 + lVar8) = (double)param_4;
    *(undefined2 *)(lVar7 + 0x1c + lVar8) = 0x202;
LAB_14752a2d1:
    *(float *)(lVar7 + 8 + lVar8) = fVar9;
    *(float *)(lVar7 + 0xc + lVar8) = fVar9;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = 0;
    *(undefined8 *)(lVar7 + 0x10 + lVar8) = 0;
    break;
  case '\x03':
    uVar6 = FUN_147528ee0(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    *(double *)(lVar7 + (ulonglong)uVar6 * 0x20) = (double)param_4;
    *(undefined1 *)(lVar7 + 0x1c + (ulonglong)uVar6 * 0x20) = 0;
    break;
  case '\x04':
    uVar6 = FUN_147528ee0(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    *(double *)(lVar7 + (ulonglong)uVar6 * 0x20) = (double)param_4;
    *(undefined1 *)(lVar7 + 0x1c + (ulonglong)uVar6 * 0x20) = 1;
    break;
  case '\x05':
    uVar6 = FUN_147528ee0(param_2,local_74);
    lVar7 = *(longlong *)(param_2 + 0x68);
    lVar8 = (ulonglong)uVar6 * 0x20;
    *(double *)(lVar7 + lVar8) = (double)param_4;
    *(undefined2 *)(lVar7 + 0x1c + lVar8) = 0x402;
LAB_14752a318:
    puVar1 = (undefined8 *)(lVar7 + 8 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar7 + 0x18 + lVar8) = 0;
    break;
  default:
    goto switchD_14752a1e3_default;
  }
LAB_14752a328:
  FUN_14752901c(param_2,0);
switchD_14752a1e3_default:
  FUN_147a404c6(param_2 + 0x88,param_1,uVar6);
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14752a384 FUN_14752a384 body=1064 status=ok
// SIG undefined FUN_14752a384(void)

double FUN_14752a384(longlong param_1,int param_2,float param_3,double param_4)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130 [96];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar6 = ABS(param_4);
  dVar20 = (double)(~-(ulonglong)(dVar6 <= 1e-08) & (ulonglong)param_4 |
                   -(ulonglong)(dVar6 <= 1e-08) & 0x3fb999999999999a);
  lVar1 = *(longlong *)(param_1 + 0x110);
  dVar4 = (double)(int)lVar1;
  dVar3 = (double)(int)((ulonglong)lVar1 >> 0x20);
  dVar5 = ((double)((lVar1 >> 0x20) * (longlong)param_2) +
          (double)((ulonglong)dVar3 & 0x8000000000000000)) / dVar4;
  local_138 = 0;
  FUN_140108c2a(local_130,param_1,0,param_2);
  FUN_144809632(local_130,param_2,&local_138);
  dVar14 = ((dVar20 + dVar5) * dVar4) / dVar3;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar14;
  auVar15 = roundpd(auVar15,auVar15,1);
  dVar13 = auVar15._0_8_;
  dVar14 = dVar14 - dVar13;
  if (2147483647.0 <= dVar13) {
    dVar13 = 2147483647.0;
  }
  if (dVar13 <= -2147483648.0) {
    dVar13 = -2147483648.0;
  }
  iVar8 = (int)dVar14;
  fVar12 = (float)dVar14 - (float)iVar8;
  fVar17 = fVar12;
  if (0.99999994 <= fVar12) {
    fVar17 = 0.99999994;
  }
  fVar17 = (float)(~-(uint)(0.0 < fVar12) & (uint)fVar12 | (uint)fVar17 & -(uint)(0.0 < fVar12)) +
           0.5 + -0.5;
  if (0.99999994 <= fVar17) {
    fVar17 = 0.99999994;
  }
  uVar9 = (ulonglong)(uint)fVar17;
  if (fVar17 <= 0.0) {
    uVar9 = 0;
  }
  uVar9 = (ulonglong)(uint)((int)dVar13 + iVar8) | uVar9 << 0x20;
  local_138 = 0;
  FUN_140108c2a(local_130,param_1,0,uVar9);
  cVar7 = FUN_144809632(local_130,uVar9,&local_138);
  if (cVar7 == '\0') {
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    uVar18 = (undefined4)local_138;
    uVar19 = (undefined4)((ulonglong)local_138 >> 0x20);
  }
  dVar14 = 0.1;
  if (1e-08 < dVar6) {
    dVar14 = dVar6;
  }
  dVar14 = ((double)CONCAT44(uVar19,uVar18) - (double)param_3) / dVar14;
  if (1e-08 < ABS(ABS(dVar14) + -1.79769313486232e+308)) {
    uVar11 = 10;
    dVar6 = dVar14;
    do {
      dVar20 = dVar20 * 0.5;
      dVar14 = ((dVar5 + dVar20) * dVar4) / dVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar14;
      auVar15 = roundpd(auVar16,auVar16,1);
      dVar13 = auVar15._0_8_;
      dVar14 = dVar14 - dVar13;
      if (2147483647.0 <= dVar13) {
        dVar13 = 2147483647.0;
      }
      if (dVar13 <= -2147483648.0) {
        dVar13 = -2147483648.0;
      }
      iVar8 = (int)dVar14;
      fVar12 = (float)dVar14 - (float)iVar8;
      fVar17 = fVar12;
      if (0.99999994 <= fVar12) {
        fVar17 = 0.99999994;
      }
      fVar17 = (float)(~-(uint)(0.0 < fVar12) & (uint)fVar12 | (uint)fVar17 & -(uint)(0.0 < fVar12))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar17) {
        fVar17 = 0.99999994;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      uVar10 = CONCAT44(fVar17,(int)dVar13 + iVar8);
      local_138 = 0;
      FUN_140108c2a(local_130,param_1,0,uVar10);
      cVar7 = FUN_144809632(local_130,uVar10);
      if (cVar7 != '\0') {
        uVar18 = (undefined4)local_138;
        uVar19 = (undefined4)((ulonglong)local_138 >> 0x20);
      }
      dVar14 = ((double)CONCAT44(uVar19,uVar18) - (double)param_3) / ABS(dVar20);
    } while ((1e-08 < ABS(ABS(dVar14) - ABS(dVar6))) &&
            (bVar2 = 1 < uVar11, uVar11 = uVar11 - 1, dVar6 = dVar14, bVar2));
  }
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (dVar3 / dVar4) * dVar14;
}



// FUNCTION 14752a7ae FUN_14752a7ae body=804 status=ok
// SIG undefined FUN_14752a7ae(void)

undefined4 FUN_14752a7ae(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined4 local_12c;
  longlong *local_128;
  uint local_120;
  int local_118;
  int iStack_114;
  double local_110;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  undefined2 local_84;
  longlong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab2388) {
    FUN_144b3d300(&DAT_14cab2388);
    if (DAT_14cab2388 == -1) {
      FUN_1446ddc76(&DAT_14cab2380,"RichCurve",1);
      _Init_thread_footer(&DAT_14cab2388);
    }
  }
  local_f0 = (undefined **)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_2 + 8));
  uVar7 = FUN_1468ec2ac(&local_f0,DAT_14cab2380);
  if ((char)uVar7 != '\0') {
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 3.4028235e+38;
    local_84 = 0x404;
    local_f0 = (undefined **)&DAT_14a176f00;
    local_80 = 0;
    uStack_78 = 0;
    uVar8 = FUN_14639173e();
    FUN_14483b62e(uVar8,param_3,&local_f0,0);
    if ((local_88 != 3.4028235e+38) || (NAN(local_88))) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      *(double *)(param_1 + 0x78) = (double)local_88;
    }
    *(undefined1 *)(param_1 + 0x50) = (undefined1)local_84;
    *(undefined1 *)(param_1 + 0x51) = local_84._1_1_;
    if ((int)uStack_78 < 0) {
LAB_14752aacb:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_78 & 0xffffffff);
    }
    if (*(int *)(param_1 + 100) < (int)uStack_78) {
      FUN_140aba11c(param_1 + 0x58);
      if ((int)uStack_78 < 0) goto LAB_14752aacb;
    }
    if (*(int *)(param_1 + 0x74) < (int)uStack_78) {
      FUN_140aba048(param_1 + 0x68);
    }
    FUN_145cba7c3(&local_118);
    fVar5 = (float)iStack_114;
    fVar4 = (float)local_118;
    FUN_147a410da(&local_f0,&local_128);
    if (-1 < (int)local_120) {
      iVar9 = 0;
      do {
        if ((int)local_128[1] <= (int)local_120) break;
        lVar2 = *local_128;
        lVar6 = (ulonglong)local_120 * 0x1c;
        FUN_147572fa9(&local_12c,0,CONCAT44(iStack_114,local_118),
                      (double)*(float *)(lVar2 + 4 + lVar6));
        local_f8 = 0;
        local_100 = 0;
        local_f2 = 0;
        local_110 = (double)*(float *)(lVar2 + 8 + lVar6);
        local_f4 = *(undefined1 *)(lVar2 + lVar6);
        local_f3 = *(undefined1 *)(lVar2 + 1 + lVar6);
        local_108 = *(float *)(lVar2 + 0xc + lVar6) * (fVar5 / fVar4);
        local_104 = *(float *)(lVar2 + 0x14 + lVar6) * (fVar5 / fVar4);
        local_138 = param_1 + 0x68;
        FUN_14752aad4(iVar9,local_12c,&local_110,param_1 + 0x58);
        uVar1 = local_120 + 1;
        bVar3 = -2 < (int)local_120;
        iVar9 = iVar9 + 1;
        local_120 = uVar1;
      } while (bVar3);
    }
    local_f0 = (undefined **)&DAT_14a176f00;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    local_f0 = &PTR_FUN_14a177080;
    FUN_144a78a1a(&local_e8);
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752aad4 FUN_14752aad4 body=507 status=ok
// SIG undefined FUN_14752aad4(void)

void FUN_14752aad4(uint param_1,int param_2,undefined8 *param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  if ((int)param_1 < 1) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = param_2;
  }
  else {
    _Src = (void *)*param_4;
    if (param_2 < *(int *)((longlong)_Src + (ulonglong)param_1 * 4 + -4)) {
      lVar9 = (ulonglong)param_1 - 1;
      do {
        if (lVar9 < 1) {
          uVar4 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar4 + 1) {
            FUN_14753e8f2(param_4,(ulonglong)uVar4);
            _Src = (void *)*param_4;
          }
          memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)uVar4 << 2);
          *(int *)*param_4 = param_2;
          uVar4 = *(uint *)(param_5 + 1);
          *(uint *)(param_5 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_5 + 0xc) < uVar4 + 1) {
            FUN_14753f65a(param_5,(ulonglong)uVar4);
          }
          memmove((void *)(*param_5 + 0x20),(void *)*param_5,(ulonglong)uVar4 << 5);
          puVar10 = (undefined8 *)*param_5;
          goto LAB_14752abd4;
        }
        lVar1 = lVar9 + -1;
        param_1 = param_1 - 1;
        lVar2 = lVar9 * 4;
        lVar9 = lVar1;
      } while (param_2 < *(int *)((longlong)_Src + lVar2 + -4));
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_4,iVar3);
        _Src = (void *)*param_4;
      }
      uVar8 = (ulonglong)((int)lVar1 + 1);
      memmove((void *)((longlong)_Src + uVar8 * 4 + 4),(void *)((longlong)_Src + uVar8 * 4),
              (ulonglong)(iVar3 - param_1) << 2);
      *(int *)(*param_4 + uVar8 * 4) = param_2;
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_14753f65a(param_5,iVar3);
      }
      lVar9 = uVar8 * 0x20;
      memmove((void *)(*param_5 + lVar9 + 0x20),(void *)(*param_5 + lVar9),
              (ulonglong)(iVar3 - param_1) << 5);
      goto LAB_14752abd1;
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
      _Src = (void *)*param_4;
    }
    *(int *)((longlong)_Src + (longlong)iVar3 * 4) = param_2;
  }
  iVar3 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_14753f65a(param_5,iVar3);
  }
  lVar9 = (longlong)iVar3 << 5;
LAB_14752abd1:
  puVar10 = (undefined8 *)(lVar9 + *param_5);
LAB_14752abd4:
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[3];
  puVar10[2] = param_3[2];
  puVar10[3] = uVar7;
  *puVar10 = uVar5;
  puVar10[1] = uVar6;
  return;
}



// FUNCTION 14752acd8 FUN_14752acd8 body=98 status=ok
// SIG undefined FUN_14752acd8(void)

byte FUN_14752acd8(double *param_1,double *param_2)

{
  byte bVar1;
  
  if ((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) ||
        (*(char *)((longlong)param_1 + 0x1c) != *(char *)((longlong)param_2 + 0x1c))) ||
       ((*(char *)((longlong)param_1 + 0x1d) != *(char *)((longlong)param_2 + 0x1d) ||
        (*(float *)(param_1 + 1) != *(float *)(param_2 + 1))))) ||
      ((NAN(*(float *)(param_1 + 1)) || NAN(*(float *)(param_2 + 1)) ||
       ((*(float *)((longlong)param_1 + 0xc) != *(float *)((longlong)param_2 + 0xc) ||
        (NAN(*(float *)((longlong)param_1 + 0xc)) || NAN(*(float *)((longlong)param_2 + 0xc))))))))
     || ((*(char *)(param_1 + 3) != *(char *)(param_2 + 3) ||
         ((*(float *)(param_1 + 2) != *(float *)(param_2 + 2) ||
          (NAN(*(float *)(param_1 + 2)) || NAN(*(float *)(param_2 + 2)))))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(*(float *)((longlong)param_2 + 0x14) == *(float *)((longlong)param_1 + 0x14)) & 1;
  }
  return bVar1;
}



// FUNCTION 14752ad3a FUN_14752ad3a body=130 status=ok
// SIG undefined FUN_14752ad3a(void)

void FUN_14752ad3a(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined1 auStack_b8 [40];
  double local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0.0;
  FUN_140108c2a(local_88,param_1,0,param_2);
  FUN_144809632(local_88,param_2,&local_90);
  *param_3 = (float)local_90;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752adbe thunk_FUN_14752901c body=5 status=ok
// SIG undefined thunk_FUN_14752901c(void)

void thunk_FUN_14752901c(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (1 < *(int *)(param_1 + 0x70)) {
    pdVar5 = *(double **)(param_1 + 0x68);
    if (*(char *)((longlong)pdVar5 + 0x1c) == '\x02') {
      if ((*(byte *)((longlong)pdVar5 + 0x1d) & 0xfb) == 0) {
        pdVar5[1] = 0.0;
        *(undefined1 *)(pdVar5 + 3) = 0;
      }
    }
    else if (*(char *)((longlong)pdVar5 + 0x1c) == '\0') {
      *(undefined1 *)(pdVar5 + 3) = 0;
      dVar12 = (double)((*(int **)(param_1 + 0x58))[1] - **(int **)(param_1 + 0x58));
      dVar16 = 9.999999747378752e-05;
      if (9.999999747378752e-05 <= dVar12) {
        dVar16 = dVar12;
      }
      *(float *)((longlong)pdVar5 + 0xc) =
           (float)((*(double *)(*(longlong *)(param_1 + 0x68) + 0x20) - *pdVar5) / dVar16);
    }
    lVar8 = (longlong)(*(int *)(param_1 + 0x70) + -1) * 0x20;
    pdVar5 = (double *)(*(longlong *)(param_1 + 0x68) + lVar8);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x1c + lVar8);
    if (cVar1 == '\x02') {
      if ((*(byte *)((longlong)pdVar5 + 0x1d) & 0xfb) == 0) {
        pdVar5[1] = 0.0;
        *(undefined1 *)(pdVar5 + 3) = 0;
      }
    }
    else if (cVar1 == '\0') {
      *(undefined1 *)(pdVar5 + 3) = 0;
      lVar8 = (longlong)*(int *)(param_1 + 0x70);
      dVar12 = (double)(*(int *)(*(longlong *)(param_1 + 0x58) + -4 + lVar8 * 4) -
                       *(int *)(*(longlong *)(param_1 + 0x58) + -8 + lVar8 * 4));
      dVar16 = 9.999999747378752e-05;
      if (9.999999747378752e-05 <= dVar12) {
        dVar16 = dVar12;
      }
      *(float *)(pdVar5 + 1) =
           (float)((*pdVar5 - *(double *)(*(longlong *)(param_1 + 0x68) + (lVar8 + -2) * 0x20)) /
                  dVar16);
    }
    if (2 < *(int *)(param_1 + 0x70)) {
      iVar10 = 1;
      iVar9 = 0;
      do {
        lVar7 = (longlong)iVar10;
        lVar8 = lVar7 + -1;
        lVar6 = *(longlong *)(param_1 + 0x68);
        dVar16 = *(double *)(lVar6 + lVar8 * 0x20);
        pdVar5 = (double *)(lVar6 + lVar7 * 0x20);
        cVar1 = *(char *)(lVar6 + 0x1c + lVar7 * 0x20);
        if (cVar1 == '\0') {
          *(undefined1 *)(pdVar5 + 3) = 0;
          lVar6 = *(longlong *)(param_1 + 0x68);
          dVar14 = (double)(*(int *)(*(longlong *)(param_1 + 0x58) + lVar7 * 4) -
                           *(int *)(*(longlong *)(param_1 + 0x58) + lVar8 * 4));
          dVar12 = 9.999999747378752e-05;
          if (9.999999747378752e-05 <= dVar14) {
            dVar12 = dVar14;
          }
          *(float *)(pdVar5 + 1) = (float)((*pdVar5 - dVar16) / dVar12);
          dVar12 = (double)(*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar7 * 4) -
                           *(int *)(*(longlong *)(param_1 + 0x58) + lVar7 * 4));
          dVar16 = 9.999999747378752e-05;
          if (9.999999747378752e-05 <= dVar12) {
            dVar16 = dVar12;
          }
          *(float *)((longlong)pdVar5 + 0xc) =
               (float)((*(double *)(lVar6 + (lVar7 + 1) * 0x20) - *pdVar5) / dVar16);
        }
        else if ((cVar1 == '\x02') && ((*(byte *)((longlong)pdVar5 + 0x1d) & 0xfb) == 0)) {
          if (*(byte *)((longlong)pdVar5 + 0x1d) == 4) {
            fVar11 = (float)FUN_147529550(param_1,iVar10);
            if ((((ABS(*(float *)(pdVar5 + 1)) <= 0.001) ||
                 (ABS(*(float *)(pdVar5 + 1) - fVar11) <= 0.001)) || (9 < iVar9)) || (iVar10 < 2)) {
              iVar9 = 0;
            }
            else {
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + -2;
            }
          }
          else {
            dVar12 = *(double *)(lVar6 + (lVar7 + 1) * 0x20);
            lVar6 = *(longlong *)(param_1 + 0x58);
            iVar2 = *(int *)(lVar6 + 4 + lVar7 * 4);
            iVar3 = *(int *)(lVar6 + lVar8 * 4);
            dVar13 = (double)(iVar2 - iVar3);
            dVar14 = 9.999999747378752e-05;
            if (9.999999747378752e-05 <= dVar13) {
              dVar14 = dVar13;
            }
            if (DAT_14c760fdc == 0) {
              dVar14 = (double)(float)(((*pdVar5 - dVar16) + (dVar12 - *pdVar5)) *
                                      (double)(1.0 - param_2)) / dVar14;
LAB_1475293eb:
              fVar11 = (float)dVar14;
            }
            else {
              fVar11 = 0.0;
              if ((0 < DAT_14c760fdc) &&
                 (((dVar13 = *pdVar5, dVar16 < dVar13 && (dVar13 < dVar12)) ||
                  ((dVar13 < dVar16 && (dVar12 < dVar13)))))) {
                dVar15 = dVar13 - dVar16;
                fVar11 = (float)((double)(float)((dVar15 + (dVar12 - dVar13)) *
                                                (double)(1.0 - param_2)) / dVar14);
                if (DAT_14c760fdc == 2) {
                  iVar4 = *(int *)(lVar6 + lVar7 * 4);
                  dVar14 = (double)(iVar4 - iVar3);
                  dVar16 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar14) {
                    dVar16 = dVar14;
                  }
                  dVar17 = (double)(iVar2 - iVar4);
                  dVar14 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar17) {
                    dVar14 = dVar17;
                  }
                  dVar15 = dVar15 / (dVar16 * 0.6666666666666666);
                  dVar12 = (dVar12 - dVar13) / (dVar14 * 0.6666666666666666);
                  dVar16 = 0.0;
                  if ((0.0 < dVar12 != dVar15 <= 0.0) && (fVar11 <= 0.0 != 0.0 < dVar12)) {
                    dVar16 = (double)fVar11;
                    if (0.0 <= dVar12) {
                      if (dVar12 <= dVar16) {
                        dVar16 = dVar12;
                      }
                      if (dVar15 <= dVar16) {
                        dVar16 = dVar15;
                      }
                    }
                    else {
                      if (dVar16 <= dVar12) {
                        dVar16 = dVar12;
                      }
                      if (dVar16 <= dVar15) {
                        dVar16 = dVar15;
                      }
                    }
                  }
                  fVar11 = (float)dVar16;
                }
                else if (DAT_14c760fdc == 1) {
                  dVar16 = ABS(dVar15 / (dVar12 - dVar16));
                  if (dVar16 <= 0.85) {
                    if (dVar16 < 0.15000000000000002) {
                      dVar14 = (double)fVar11 * (dVar16 / 0.15000000000000002);
                      goto LAB_1475293eb;
                    }
                  }
                  else {
                    fVar11 = (float)(((dVar16 + -0.85) / -0.15000000000000002 + 1.0) *
                                    (double)fVar11);
                  }
                }
              }
            }
          }
          *(float *)(pdVar5 + 1) = fVar11;
          *(float *)((longlong)pdVar5 + 0xc) = fVar11;
          *(undefined1 *)(pdVar5 + 3) = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x70) + -1);
    }
  }
  return;
}



// FUNCTION 14752adc4 FUN_14752adc4 body=91 status=ok
// SIG undefined FUN_14752adc4(void)

void FUN_14752adc4(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x88;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752ae20 FUN_14752ae20 body=97 status=ok
// SIG undefined FUN_14752ae20(void)

void FUN_14752ae20(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = FUN_147a40458(param_1 + 0x88,*(undefined4 *)(lVar2 + lVar5 * 4));
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x60))) {
        *(undefined4 *)(lVar1 + lVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 4);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 14752ae82 FUN_14752ae82 body=125 status=ok
// SIG undefined FUN_14752ae82(void)

void FUN_14752ae82(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1 + 0x88;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_20 = param_1;
  FUN_14752af00();
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_14752901c(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752af00 FUN_14752af00 body=96 status=ok
// SIG undefined FUN_14752af00(void)

void FUN_14752af00(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753f6e0(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14752af60 FUN_14752af60 body=113 status=ok
// SIG undefined FUN_14752af60(void)

void FUN_14752af60(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x88;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_14752afd2(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752afd2 FUN_14752afd2 body=249 status=ok
// SIG undefined FUN_14752afd2(void)

void FUN_14752afd2(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
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
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    do {
      if ((param_1[1] == 0) ||
         (iVar2 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar5 * 4)), iVar2 == -1)) {
        FUN_147a3fc60(&local_58);
        lVar4 = *param_3;
        uVar3 = local_58;
      }
      else {
        lVar4 = (longlong)iVar2 * 0x20;
        puVar1 = (undefined4 *)(*(longlong *)param_1[3] + lVar4);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        puVar1 = (undefined4 *)(*(longlong *)param_1[3] + 0x10 + lVar4);
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        uVar3 = FUN_14753f7ce(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar2 * 4),
                              &local_58);
        if (param_1[1] == 0) {
          FUN_14045d416(&local_5c);
        }
        else {
          FUN_147a404c6(param_1[1],&local_5c,uVar3);
        }
        lVar4 = *param_3;
        uVar3 = local_5c;
      }
      *(undefined4 *)(lVar4 + lVar5 * 4) = uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752b0cc FUN_14752b0cc body=112 status=ok
// SIG undefined FUN_14752b0cc(void)

void FUN_14752b0cc(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1 + 0x88;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_20 = param_1;
  FUN_14752a060();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_14752901c(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752b13e FUN_14752b13e body=29 status=ok
// SIG undefined FUN_14752b13e(void)

void FUN_14752b13e(undefined8 param_1)

{
  FUN_1475298fe();
  FUN_14752901c(param_1,0);
  return;
}



// FUNCTION 14752b19a FUN_14752b19a body=99 status=ok
// SIG undefined FUN_14752b19a(void)

void FUN_14752b19a(longlong param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_140aba11c(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_140aba048(param_1 + 0x68,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  FUN_147a408e2(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 14752b206 FUN_14752b206 body=101 status=ok
// SIG undefined FUN_14752b206(void)

void FUN_14752b206(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x88;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_1475243aa();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14752901c(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752b26c FUN_14752b26c body=29 status=ok
// SIG undefined FUN_14752b26c(void)

undefined8 FUN_14752b26c(longlong param_1,undefined8 param_2)

{
  FUN_147a404c6(param_1 + 0x88);
  return param_2;
}



// FUNCTION 14752b2a4 FUN_14752b2a4 body=189 status=ok
// SIG undefined FUN_14752b2a4(void)

undefined4 FUN_14752b2a4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar5 = *(int *)(param_1 + 0x60);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x58);
    iVar1 = *piVar2;
    iVar6 = (int)param_2;
    if ((iVar6 < iVar1) ||
       ((fVar4 = (float)((ulonglong)param_2 >> 0x20), iVar1 == iVar6 && (fVar4 < 0.0)))) {
      uVar3 = 0xffffffff;
      if (*(byte *)(param_1 + 0x50) - 3 < 3) goto LAB_14752b2ff;
      iVar5 = piVar2[iVar5 + -1];
    }
    else {
      iVar5 = piVar2[iVar5 + -1];
      if (((iVar5 < iVar6) || ((iVar5 == iVar6 && (0.0 < fVar4)))) &&
         (uVar3 = 1, *(byte *)(param_1 + 0x51) - 3 < 3)) goto LAB_14752b2ff;
    }
    FUN_140108ff7(local_30,iVar1,iVar5);
    uVar3 = local_20;
  }
LAB_14752b2ff:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14752b362 FUN_14752b362 body=256 status=ok
// SIG undefined FUN_14752b362(void)

void FUN_14752b362(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar4 = (longlong)*(int *)(param_1 + 0x60);
  if (lVar4 < 1) {
    lVar4 = 2;
    *param_2 = 2;
    goto LAB_14752b42d;
  }
  if (param_3 == 0) {
LAB_14752b3d8:
    iVar1 = **(int **)(param_1 + 0x58);
    iVar2 = (*(int **)(param_1 + 0x58))[lVar4 + -1];
    auVar6._0_8_ = (double)param_3 * (double)(iVar2 - iVar1);
    auVar6._8_8_ = 0;
    auVar6 = roundpd(auVar6,auVar6,1);
    dVar5 = auVar6._0_8_;
    if (2147483647.0 <= dVar5) {
      dVar5 = 2147483647.0;
    }
    if (dVar5 <= -2147483648.0) {
      dVar5 = -2147483648.0;
    }
    uVar3 = iVar2 + (int)dVar5;
    *param_2 = ((ulonglong)(uint)(iVar1 + (int)dVar5) << 0x20) + 1;
  }
  else {
    if ((param_3 < 0 && *(byte *)(param_1 + 0x50) < 3) ||
       (0 < param_3 && *(byte *)(param_1 + 0x51) < 3)) goto LAB_14752b3d8;
    if (-1 < param_3) {
      if (*(byte *)(param_1 + 0x51) - 3 < 2) {
        *param_2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x58) + -4 + lVar4 * 4) << 0x20;
        param_2[1] = 2;
        return;
      }
LAB_14752b458:
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    if (1 < *(byte *)(param_1 + 0x50) - 3) goto LAB_14752b458;
    uVar3 = **(uint **)(param_1 + 0x58);
    *param_2 = 2;
  }
  lVar4 = ((ulonglong)uVar3 << 0x20) + 1;
LAB_14752b42d:
  param_2[1] = lVar4;
  return;
}



// FUNCTION 14752b462 FUN_14752b462 body=576 status=ok
// SIG undefined FUN_14752b462(void)

ulonglong FUN_14752b462(longlong param_1,double param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [10];
  byte local_168;
  ulonglong local_160;
  undefined8 local_158 [11];
  undefined8 local_100;
  undefined8 local_f8 [14];
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(int *)(param_1 + 0x70) == 1) {
    if ((**(double **)(param_1 + 0x68) != param_2) ||
       (NAN(**(double **)(param_1 + 0x68)) || NAN(param_2))) {
      uVar4 = CONCAT71(uVar5,1);
      goto LAB_14752b50c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) != 0) {
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      FUN_140108c2a(local_158,param_1,0,param_3);
      uVar4 = CONCAT71(uVar5,1);
      if ((int)local_100 < local_100._4_4_) {
        do {
          uVar2 = FUN_14752b6a4(local_158,param_2,local_f8);
          if (0 < (int)uVar2) {
            uVar7 = 0;
            do {
              local_1b8[0] = local_f8[uVar7];
              cVar1 = (*(code *)*param_5)(param_5[1],local_1b8);
              if (cVar1 == '\0') {
                uVar4 = 0;
                goto LAB_14752b50c;
              }
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
          }
          if (local_100 >> 0x20 == 0x7fffffff) break;
          iVar9 = (int)(local_100 >> 0x20);
          if (((int)param_4 <= iVar9) &&
             (iVar9 != (int)param_4 || (float)((ulonglong)param_4 >> 0x20) <= 0.0)) break;
          FUN_140108c2a(local_1b8,param_1,0,iVar9 + 1);
          local_88 = local_168;
          (*(code *)(&PTR_LAB_14a46c4a0)[local_168])(local_f8 + 4,local_1b8);
          puVar6 = local_f8 + 4;
          puVar8 = local_158;
          for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          local_100 = local_160;
        } while ((int)local_160 < (int)(local_160 >> 0x20));
      }
      goto LAB_14752b50c;
    }
    uVar4 = CONCAT71(uVar5,1);
    if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_14752b50c;
    if ((*(double *)(param_1 + 0x78) != param_2) ||
       (NAN(*(double *)(param_1 + 0x78)) || NAN(param_2))) goto LAB_14752b50c;
  }
  local_158[0] = 0;
  uVar2 = (*(code *)*param_5)(param_5[1]);
  uVar4 = (ulonglong)uVar2;
LAB_14752b50c:
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14752b6a4 FUN_14752b6a4 body=400 status=ok
// SIG undefined FUN_14752b6a4(void)

ulonglong FUN_14752b6a4(double *param_1,double param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  
  cVar1 = *(char *)(param_1 + 10);
  if (param_1 == (double *)0x0 || cVar1 != '\x01') {
    if (cVar1 != '\x02' || param_1 == (double *)0x0) {
      if (cVar1 == '\x03' && param_1 != (double *)0x0) {
        FUN_147530b42(param_1,cVar1 != '\x03' || param_1 == (double *)0x0,param_3);
        uVar3 = 2;
        goto LAB_14752b772;
      }
      if (cVar1 != '\x04' || param_1 == (double *)0x0) {
        if (cVar1 != '\x05' || param_1 == (double *)0x0) {
          bVar5 = cVar1 != '\x06' || param_1 == (double *)0x0;
          if (cVar1 != '\x06' || param_1 == (double *)0x0) {
            if (cVar1 != '\a' || param_1 == (double *)0x0) {
              return 0;
            }
            uVar3 = FUN_147531752(param_1,bVar5,param_3);
          }
          else {
            uVar3 = FUN_1475314ec(param_1,bVar5,param_3);
          }
        }
        else {
          uVar3 = FUN_147530f18(param_1,cVar1 != '\x05' || param_1 == (double *)0x0,param_3);
        }
      }
      else {
        uVar3 = FUN_147530d7c(param_1,cVar1 != '\x04' || param_1 == (double *)0x0,param_3);
      }
    }
    else {
      uVar3 = FUN_147530a32(param_1,cVar1 != '\x02' || param_1 == (double *)0x0,param_3);
    }
    if (0 < (int)uVar3) {
LAB_14752b772:
      uVar6 = 0;
      uVar4 = 0;
      do {
        uVar2 = *(undefined8 *)(param_3 + uVar6 * 2);
        iVar7 = (int)uVar2;
        fVar8 = (float)((ulonglong)uVar2 >> 0x20);
        if (((*(int *)(param_1 + 0xb) < iVar7) ||
            ((*(int *)(param_1 + 0xb) == iVar7 && (0.0 <= fVar8)))) &&
           ((iVar7 < *(int *)((longlong)param_1 + 0x5c) ||
            ((*(int *)((longlong)param_1 + 0x5c) == iVar7 && (fVar8 <= 0.0)))))) {
          if (uVar6 != uVar4) {
            *(undefined8 *)(param_3 + (longlong)(int)uVar4 * 2) = uVar2;
          }
          uVar4 = (ulonglong)((int)uVar4 + 1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
      return uVar4;
    }
  }
  else if ((*param_1 == param_2) && (!NAN(*param_1) && !NAN(param_2))) {
    iVar7 = *(int *)(param_1 + 0xb);
    if ((SBORROW4(0,iVar7)) && (iVar7 = *(int *)((longlong)param_1 + 0x5c), SBORROW4(0,iVar7))) {
      param_3[0] = 0;
      param_3[1] = 0;
    }
    else {
      *param_3 = iVar7;
      param_3[1] = 0;
    }
    uVar3 = 1;
    goto LAB_14752b772;
  }
  return 0;
}



// FUNCTION 14752b834 FUN_14752b834 body=11 status=ok
// SIG undefined FUN_14752b834(void)

undefined8 * FUN_14752b834(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  return param_2;
}



// FUNCTION 14752b840 FUN_14752b840 body=1074 status=ok
// SIG undefined FUN_14752b840(void)

undefined8 *
FUN_14752b840(longlong param_1,undefined8 *param_2,double param_3,undefined8 param_4,byte param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  undefined1 auStack_258 [32];
  byte local_238 [4];
  undefined8 local_234;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 local_200 [4];
  undefined1 local_1fc;
  undefined1 local_1f8 [80];
  byte local_1a8;
  ulonglong local_1a0;
  undefined8 local_198 [14];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined4 local_108;
  undefined8 local_c0;
  undefined8 local_b8 [10];
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar9 = *(int *)(param_1 + 0x70);
  if (iVar9 == 1) {
    dVar10 = **(double **)(param_1 + 0x68);
LAB_14752b8a1:
    if ((dVar10 == param_3) && (!NAN(dVar10) && !NAN(param_3))) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_14752b95e;
    }
  }
  else if (iVar9 == 0) {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      dVar10 = *(double *)(param_1 + 0x78);
      goto LAB_14752b8a1;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x60) * 2;
    if (((param_5 & 8) != 0) &&
       (((*(char *)(param_1 + 0x50) == '\x01' || (*(char *)(param_1 + 0x51) == '\x01')) &&
        (1e-08 < ABS((*(double **)(param_1 + 0x68))[(longlong)(iVar9 + -1) * 4] -
                     **(double **)(param_1 + 0x68)))))) {
      iVar8 = 1000;
    }
    uVar1 = **(undefined4 **)(param_1 + 0x58);
    uVar2 = (*(undefined4 **)(param_1 + 0x58))[*(int *)(param_1 + 0x60) + -1];
    FUN_140108ff7(local_118,uVar1,uVar2,param_4);
    FUN_140108c2a(local_118,param_1,0,param_4);
    if ((int)local_c0 < local_c0._4_4_) {
      if ((param_5 & 2) == 0) {
        local_128 = 0;
        local_120 = 0xffffffff00000000;
      }
      else {
        FUN_140108c2a(local_198 + 4,param_1,0,(int)local_c0 + -1);
      }
      local_198[2] = 0;
      local_198[3] = 0;
      local_198[0] = 0;
      local_198[1] = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      local_210 = local_200;
      local_1fc = 0;
      local_218 = &local_208;
      local_208 = 0x7fefffffffffffff;
      local_238[0] = param_5;
      local_22c = local_108;
      iVar9 = 0;
      local_234 = param_4;
      local_228 = uVar1;
      local_224 = uVar2;
      local_220 = param_2;
      if (((int)local_c0 < local_c0._4_4_) && (iVar9 = 0, 0 < iVar8)) {
        iVar9 = 0;
        while( true ) {
          uVar3 = FUN_14752b6a4(local_118,param_3,local_198);
          if (0 < (int)uVar3) {
            uVar6 = 0;
            do {
              FUN_1432d2054(local_238,local_198[uVar6]);
              uVar6 = uVar6 + 1;
            } while (uVar3 != uVar6);
          }
          iVar9 = iVar9 + 1;
          if ((((param_5 & 1) == 0) || (*(char *)(param_2 + 1) != '\0')) ||
             (local_c0 >> 0x20 == 0x7fffffff)) break;
          FUN_140108c2a(local_1f8,param_1,0,(int)(local_c0 >> 0x20) + 1);
          local_68 = local_1a8;
          (*(code *)(&PTR_LAB_14a46c4a0)[local_1a8])(local_b8,local_1f8);
          puVar5 = local_b8;
          puVar7 = local_118;
          for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          local_c0 = local_1a0;
          if (((int)(local_1a0 >> 0x20) <= (int)local_1a0) || (iVar8 <= iVar9)) break;
        }
      }
      if (((int)local_120 < local_120._4_4_) && (iVar9 < iVar8)) {
        while( true ) {
          uVar3 = FUN_14752b6a4(local_198 + 4,param_3,local_198);
          if (0 < (int)uVar3) {
            uVar6 = 0;
            do {
              FUN_1432d2054(local_238,local_198[uVar6]);
              uVar6 = uVar6 + 1;
            } while (uVar3 != uVar6);
          }
          if ((*(char *)(param_2 + 1) != '\0') || ((local_120 & 0xffffffff) == 0x80000000)) break;
          FUN_140108c2a(local_1f8,param_1,0,(int)local_120 + -1);
          local_68 = local_1a8;
          (*(code *)(&PTR_LAB_14a46c4a0)[local_1a8])(local_b8,local_1f8);
          puVar5 = local_b8;
          puVar7 = local_198 + 4;
          for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          local_120 = local_1a0;
          if (((int)(local_1a0 >> 0x20) <= (int)local_1a0) || (iVar9 = iVar9 + 1, iVar8 <= iVar9))
          break;
        }
      }
      goto LAB_14752b95e;
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
LAB_14752b95e:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14752bc74 FUN_14752bc74 body=70 status=ok
// SIG undefined FUN_14752bc74(void)

undefined8 FUN_14752bc74(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  FUN_14752bcbb(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752bcbb FUN_14752bcbb body=5493 status=ok
// SIG undefined FUN_14752bcbb(void)

double * FUN_14752bcbb(double *param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  double *pdVar14;
  ulonglong uVar15;
  double *pdVar16;
  ulonglong uVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  double dVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  undefined8 uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  float fVar37;
  longlong *plVar38;
  double dVar39;
  longlong *plVar40;
  double dVar41;
  longlong *plVar42;
  undefined1 auVar43 [16];
  float fVar44;
  longlong *plVar45;
  undefined1 in_XMM2 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  longlong *plVar49;
  float fVar50;
  undefined1 in_XMM4 [16];
  undefined1 auVar51 [16];
  double dVar52;
  longlong *plVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auStack_238 [40];
  undefined8 local_210;
  undefined8 local_208;
  double *local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  int local_1c0;
  float local_1bc;
  int local_1b8;
  float local_1b4;
  longlong *local_1b0;
  double local_1a8;
  int local_1a0;
  float local_19c;
  int local_198;
  float local_194;
  double local_190;
  uint local_188;
  float fStack_184;
  uint uStack_180;
  char local_178;
  double local_170;
  uint local_168;
  float fStack_164;
  uint uStack_160;
  char local_158;
  double local_150;
  double local_148;
  int local_140;
  float local_13c;
  int local_138;
  float local_134;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dVar27 = (double)((ulonglong)param_3 >> 0x20);
  uVar23 = param_4 >> 0x20;
  lVar30 = *param_2;
  iVar21 = (int)param_3;
  iVar33 = (int)param_4;
  if (*(int *)(lVar30 + 0x70) < 2) {
    *param_1 = 1.79769313486232e+308;
    param_1[1] = -1.79769313486232e+308;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    if (*(char *)(lVar30 + 0x80) == '\x01') {
      dVar27 = *(double *)(lVar30 + 0x78);
      uVar55 = (undefined4)((ulonglong)param_3 >> 0x20);
      dVar41 = 1.79769313486232e+308;
      if (dVar27 < 1.79769313486232e+308) {
        *param_1 = dVar27;
        *(int *)(param_1 + 2) = iVar21;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar55;
        dVar41 = dVar27;
      }
      dVar39 = -1.79769313486232e+308;
      if (-1.79769313486232e+308 < dVar27) {
        param_1[1] = dVar27;
        *(int *)(param_1 + 3) = iVar21;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar55;
        dVar39 = dVar27;
      }
      uVar55 = (undefined4)(param_4 >> 0x20);
      if (dVar27 < dVar41) {
        *param_1 = dVar27;
        *(int *)(param_1 + 2) = iVar33;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar55;
      }
      if (dVar39 < dVar27) {
        param_1[1] = dVar27;
        *(int *)(param_1 + 3) = iVar33;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar55;
      }
    }
    goto LAB_14752c2d0;
  }
  uVar24 = **(uint **)(lVar30 + 0x58);
  uVar17 = (ulonglong)uVar24;
  local_1f0 = (longlong *)(ulonglong)(*(uint **)(lVar30 + 0x58))[*(int *)(lVar30 + 0x60) + -1];
  local_208 = param_2;
  local_200 = param_1;
  if (iVar21 < (int)uVar24 && *(char *)(lVar30 + 0x50) == '\x03') {
    uVar28 = param_4 & 0xffffffff;
    if ((int)uVar24 < iVar33) {
      uVar28 = (ulonglong)uVar24;
    }
    local_170 = 0.0;
    local_210 = param_3;
    FUN_140108c2a(&local_150,lVar30,0,(ulonglong)param_3 & 0xffffffff);
    cVar13 = FUN_144809632(&local_150,(ulonglong)param_3 & 0xffffffff,&local_170);
    param_2 = local_208;
    uVar55 = 0;
    uVar57 = 0;
    if (cVar13 == '\0') {
      uVar58 = 0;
      uVar59 = 0;
    }
    else {
      uVar58 = SUB84(local_170,0);
      uVar59 = (undefined4)((ulonglong)local_170 >> 0x20);
    }
    uVar26 = 0;
    local_170 = 0.0;
    FUN_140108c2a(&local_150,*local_208,0);
    cVar13 = FUN_144809632(&local_150,uVar28,&local_170);
    if (cVar13 != '\0') {
      uVar55 = SUB84(local_170,0);
      uVar57 = (undefined4)((ulonglong)local_170 >> 0x20);
    }
    iVar21 = 0;
    if ((double)CONCAT44(uVar59,uVar58) <= 1.79769313486232e+308 &&
        (double)CONCAT44(uVar59,uVar58) != 1.79769313486232e+308) {
      iVar21 = (int)local_210;
    }
    if (-1.79769313486232e+308 <= (double)CONCAT44(uVar59,uVar58) &&
        (double)CONCAT44(uVar59,uVar58) != -1.79769313486232e+308) {
      uVar26 = (ulonglong)local_210 & 0xffffffff;
    }
    dVar27 = (double)CONCAT44(uVar59,uVar58);
    if (1.79769313486232e+308 <= dVar27) {
      dVar27 = 1.79769313486232e+308;
    }
    in_XMM2._8_8_ = 0;
    in_XMM2._0_8_ = dVar27;
    if ((double)CONCAT44(uVar57,uVar55) <= dVar27 && dVar27 != (double)CONCAT44(uVar57,uVar55)) {
      iVar21 = (int)uVar28;
    }
    if ((double)CONCAT44(uVar59,uVar58) <= -1.79769313486232e+308) {
      uVar58 = 0xffffffff;
      uVar59 = 0xffefffff;
    }
    if ((double)CONCAT44(uVar59,uVar58) <= (double)CONCAT44(uVar57,uVar55) &&
        (double)CONCAT44(uVar57,uVar55) != (double)CONCAT44(uVar59,uVar58)) {
      uVar26 = uVar28;
    }
    uVar54 = uVar55;
    uVar56 = uVar57;
    if (dVar27 <= (double)CONCAT44(uVar57,uVar55)) {
      uVar54 = SUB84(dVar27,0);
      uVar56 = (undefined4)((ulonglong)dVar27 >> 0x20);
    }
    if ((double)CONCAT44(uVar57,uVar55) <= (double)CONCAT44(uVar59,uVar58)) {
      uVar55 = uVar58;
      uVar57 = uVar59;
    }
    if ((int)uVar24 < iVar33) {
      lVar30 = *param_2;
      dVar27 = 0.0;
      param_3 = (longlong *)(ulonglong)uVar24;
      local_1f8 = uVar26;
      goto LAB_14752bebd;
    }
LAB_14752c2b6:
    *local_200 = (double)CONCAT44(uVar56,uVar54);
    local_200[1] = (double)CONCAT44(uVar57,uVar55);
    *(int *)(local_200 + 2) = iVar21;
    *(undefined4 *)((longlong)local_200 + 0x14) = 0;
    *(int *)(local_200 + 3) = (int)uVar26;
    *(undefined4 *)((longlong)local_200 + 0x1c) = 0;
    param_1 = local_200;
    goto LAB_14752c2d0;
  }
  iVar21 = 0;
  uVar55 = 0xffffffff;
  uVar57 = 0xffefffff;
  uVar54 = 0xffffffff;
  uVar56 = 0x7fefffff;
  local_1f8 = 0;
LAB_14752bebd:
  uVar24 = (uint)param_3;
  local_1e8 = dVar27;
  if ((*(char *)(lVar30 + 0x51) == '\x03') && ((int)local_1f0 < iVar33)) {
    local_210 = (longlong *)CONCAT44(local_210._4_4_,iVar21);
    plVar38 = local_1f0;
    if ((int)local_1f0 < (int)uVar24) {
      plVar38 = param_3;
    }
    uVar28 = (ulonglong)plVar38 & 0xffffffff;
    local_170 = 0.0;
    local_1d8 = uVar17;
    FUN_140108c2a(&local_150,lVar30,0,uVar28);
    cVar13 = FUN_144809632(&local_150,uVar28,&local_170);
    uVar23 = local_1f8;
    uVar58 = 0;
    uVar59 = 0;
    if (cVar13 == '\0') {
      uVar60 = 0;
      uVar61 = 0;
    }
    else {
      uVar60 = SUB84(local_170,0);
      uVar61 = (undefined4)((ulonglong)local_170 >> 0x20);
    }
    local_170 = 0.0;
    FUN_140108c2a(&local_150,*param_2,0,param_4 & 0xffffffff);
    cVar13 = FUN_144809632(&local_150,param_4 & 0xffffffff,&local_170);
    if (cVar13 != '\0') {
      uVar58 = SUB84(local_170,0);
      uVar59 = (undefined4)((ulonglong)local_170 >> 0x20);
    }
    uVar17 = (ulonglong)local_210 & 0xffffffff;
    if ((double)CONCAT44(uVar61,uVar60) <= (double)CONCAT44(uVar56,uVar54) &&
        (double)CONCAT44(uVar56,uVar54) != (double)CONCAT44(uVar61,uVar60)) {
      uVar17 = uVar28;
    }
    uVar26 = uVar23 & 0xffffffff;
    if ((double)CONCAT44(uVar57,uVar55) <= (double)CONCAT44(uVar61,uVar60) &&
        (double)CONCAT44(uVar61,uVar60) != (double)CONCAT44(uVar57,uVar55)) {
      uVar26 = uVar28;
    }
    dVar27 = (double)CONCAT44(uVar61,uVar60);
    if ((double)CONCAT44(uVar56,uVar54) <= dVar27) {
      dVar27 = (double)CONCAT44(uVar56,uVar54);
    }
    iVar21 = (int)uVar17;
    if ((double)CONCAT44(uVar59,uVar58) <= dVar27 && dVar27 != (double)CONCAT44(uVar59,uVar58)) {
      iVar21 = iVar33;
    }
    if ((double)CONCAT44(uVar61,uVar60) <= (double)CONCAT44(uVar57,uVar55)) {
      uVar60 = uVar55;
      uVar61 = uVar57;
    }
    if ((double)CONCAT44(uVar61,uVar60) <= (double)CONCAT44(uVar59,uVar58) &&
        (double)CONCAT44(uVar59,uVar58) != (double)CONCAT44(uVar61,uVar60)) {
      uVar26 = param_4 & 0xffffffff;
    }
    uVar54 = uVar58;
    uVar56 = uVar59;
    if (dVar27 <= (double)CONCAT44(uVar59,uVar58)) {
      uVar54 = SUB84(dVar27,0);
      uVar56 = (undefined4)((ulonglong)dVar27 >> 0x20);
    }
    uVar55 = uVar58;
    uVar57 = uVar59;
    if ((double)CONCAT44(uVar59,uVar58) <= (double)CONCAT44(uVar61,uVar60)) {
      uVar55 = uVar60;
      uVar57 = uVar61;
    }
    if ((int)local_1f0 <= (int)uVar24) goto LAB_14752c2b6;
    lVar30 = *local_208;
    uVar23 = 0;
    param_4 = (ulonglong)local_1f0 & 0xffffffff;
    uVar17 = local_1d8;
    local_1f8 = uVar26;
  }
  plVar40 = local_1f0;
  plVar38 = (longlong *)CONCAT44(uVar56,uVar54);
  uVar19 = (uint)local_1f0;
  FUN_140108ff7(&local_170,uVar17,(ulonglong)local_1f0 & 0xffffffff,
                (ulonglong)param_3 & 0xffffffff | (longlong)local_1e8 << 0x20);
  uVar31 = (uint)param_4;
  uVar20 = (uint)uVar17;
  FUN_140108ff7(&local_190,uVar17 & 0xffffffff,(ulonglong)plVar40 & 0xffffffff,
                param_4 & 0xffffffff | uVar23 << 0x20);
  plVar40 = local_1f0;
  dVar27 = **(double **)(lVar30 + 0x68);
  dVar41 = (*(double **)(lVar30 + 0x68))[(longlong)(*(int *)(lVar30 + 0x70) + -1) * 4];
  fVar63 = local_1e8._0_4_;
  if (((int)uVar24 < (int)uVar20) || ((uVar24 == uVar20 && (local_1e8._0_4_ < 0.0)))) {
    switch(*(undefined1 *)(lVar30 + 0x50)) {
    case 1:
switchD_14752c15e_caseD_1:
      local_170 = (double)(int)uStack_160 * (dVar41 - dVar27);
      break;
    case 2:
switchD_14752c15e_caseD_2:
      if ((uStack_160 & 1) != 0) {
        local_158 = '\x01';
        fVar62 = fStack_164 + 0.5 + -0.5;
        if (0.99999994 <= fVar62) {
          fVar62 = 0.99999994;
        }
        in_XMM4 = ZEXT816(0);
        if (fVar62 <= 0.0) {
          fVar62 = 0.0;
        }
        fVar62 = 0.0 - fVar62;
        in_XMM2 = roundps(ZEXT416((uint)fVar62),ZEXT416((uint)fVar62),1);
        local_168 = ((uVar19 + uVar20) - local_168) + -1 + (int)in_XMM2._0_4_;
        fStack_164 = (fVar62 - in_XMM2._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fStack_164) {
          fStack_164 = 0.99999994;
        }
        if (fStack_164 <= 0.0) {
          fStack_164 = 0.0;
        }
      }
      break;
    case 3:
switchD_14752c15e_caseD_3:
      uStack_160 = 0;
      break;
    case 4:
    case 5:
      local_168 = uVar20;
LAB_14752c168:
      fStack_164 = 0.0;
      uStack_160 = 0;
    }
  }
  else if (((int)uVar19 < (int)uVar24) || ((uVar24 == uVar19 && (0.0 < local_1e8._0_4_)))) {
    switch(*(undefined1 *)(lVar30 + 0x51)) {
    case 1:
      goto switchD_14752c15e_caseD_1;
    case 2:
      goto switchD_14752c15e_caseD_2;
    case 3:
      goto switchD_14752c15e_caseD_3;
    case 4:
    case 5:
      local_168 = uVar19;
      goto LAB_14752c168;
    }
  }
  uVar24 = uStack_160;
  if (((int)uVar31 < (int)uVar20) || ((uVar31 == uVar20 && ((float)uVar23 < 0.0)))) {
    switch(*(undefined1 *)(lVar30 + 0x50)) {
    case 1:
switchD_14752c198_caseD_1:
      local_190 = (double)(int)uStack_180 * (dVar41 - dVar27);
      break;
    case 2:
switchD_14752c198_caseD_2:
      if ((uStack_180 & 1) != 0) {
        local_178 = '\x01';
        fVar62 = fStack_184 + 0.5 + -0.5;
        if (0.99999994 <= fVar62) {
          fVar62 = 0.99999994;
        }
        in_XMM4 = ZEXT816(0);
        if (fVar62 <= 0.0) {
          fVar62 = 0.0;
        }
        fVar62 = 0.0 - fVar62;
        in_XMM2 = roundps(ZEXT416((uint)fVar62),ZEXT416((uint)fVar62),1);
        local_188 = ((uVar19 + uVar20) - local_188) + -1 + (int)in_XMM2._0_4_;
        fStack_184 = (fVar62 - in_XMM2._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fStack_184) {
          fStack_184 = 0.99999994;
        }
        if (fStack_184 <= 0.0) {
          fStack_184 = 0.0;
        }
      }
      break;
    case 3:
switchD_14752c198_caseD_3:
      uStack_180 = 0;
      break;
    case 4:
    case 5:
      local_188 = uVar20;
LAB_14752c1a2:
      fStack_184 = 0.0;
      uStack_180 = 0;
    }
  }
  else if (((int)uVar19 < (int)uVar31) || ((uVar31 == uVar19 && (0.0 < (float)uVar23)))) {
    switch(*(undefined1 *)(lVar30 + 0x51)) {
    case 1:
      goto switchD_14752c198_caseD_1;
    case 2:
      goto switchD_14752c198_caseD_2;
    case 3:
      goto switchD_14752c198_caseD_3;
    case 4:
    case 5:
      local_188 = uVar19;
      goto LAB_14752c1a2;
    }
  }
  uVar19 = uStack_180;
  iVar33 = uStack_180 - uStack_160;
  if (uStack_180 == uStack_160) {
    uVar12 = CONCAT44(fStack_164,local_168);
    local_210 = param_3;
    if (local_188 == local_168) {
      if ((fStack_184 == fStack_164) && (!NAN(fStack_184) && !NAN(fStack_164))) {
        local_1d0 = (longlong *)0x0;
        if (((int)local_188 < (int)uVar20) || ((uVar20 == local_188 && (fStack_164 < 0.0)))) {
          local_1b0 = (longlong *)0x0;
          FUN_140108c2a(&local_150,lVar30,0,uVar12);
          cVar13 = FUN_144809632(&local_150,uVar12,&local_1b0);
          fVar63 = SUB84(local_1e8,0);
          plVar38 = local_1b0;
          if (cVar13 != '\0') goto LAB_14752c265;
LAB_14752c449:
          pdVar14 = local_200 + 1;
          local_200[1] = -1.79769313486232e+308;
          pdVar16 = local_200 + 3;
          pfVar18 = (float *)((longlong)local_200 + 0x1c);
          local_200[2] = 0.0;
          local_200[3] = 0.0;
          plVar38 = (longlong *)0x0;
          uVar55 = SUB84(local_210,0);
LAB_14752c477:
          *local_200 = (double)plVar38;
          *(undefined4 *)(local_200 + 2) = uVar55;
          *(float *)((longlong)local_200 + 0x14) = fVar63;
        }
        else {
          if (((int)(uint)local_1f0 < (int)local_188) ||
             (((uint)local_1f0 == local_188 && (0.0 <= fStack_164)))) {
            local_1b0 = (longlong *)0x0;
            FUN_140108c2a(&local_150,lVar30,0,uVar12);
            cVar13 = FUN_144809632(&local_150,uVar12,&local_1b0);
            plVar38 = local_1b0;
            if (cVar13 == '\0') goto LAB_14752c449;
          }
          else {
            FUN_140108c2a(&local_150,lVar30,0,uVar12);
            FUN_144809632(&local_150,CONCAT44(fStack_164,local_168),&local_1d0);
            plVar38 = local_1d0;
          }
LAB_14752c265:
          uVar55 = SUB84(local_210,0);
          *local_200 = 1.79769313486232e+308;
          pdVar14 = local_200 + 1;
          local_200[1] = -1.79769313486232e+308;
          pdVar16 = local_200 + 3;
          pfVar18 = (float *)((longlong)local_200 + 0x1c);
          local_200[2] = 0.0;
          local_200[3] = 0.0;
          if ((double)plVar38 < 1.79769313486232e+308) goto LAB_14752c477;
        }
        param_1 = local_200;
        if (-1.79769313486232e+308 < (double)plVar38) {
          *pdVar14 = (double)plVar38;
          *(undefined4 *)pdVar16 = uVar55;
          *pfVar18 = fVar63;
        }
        goto LAB_14752c2d0;
      }
    }
    uVar32 = uVar12;
    uVar11 = CONCAT44(fStack_184,local_188);
    if (local_158 != '\0') {
      uVar32 = CONCAT44(fStack_184,local_188);
      uVar11 = uVar12;
    }
    FUN_14753f90d(&local_150,local_208,uVar32,uVar11);
    plVar40 = (longlong *)(local_150 + local_170);
    fVar64 = 0.0;
    if (((double)plVar40 != 1.79769313486232e+308) || (NAN((double)plVar40))) {
      plVar4 = (longlong *)(local_170 + local_148);
      if (((double)plVar4 != -1.79769313486232e+308) || (NAN((double)plVar4))) {
        bVar36 = (double)CONCAT44(uVar56,uVar54) != (double)plVar40;
        bVar1 = (double)plVar40 <= (double)CONCAT44(uVar56,uVar54);
        iVar33 = iVar21;
        if (bVar1 && bVar36) {
          iVar33 = local_140;
        }
        fVar63 = local_13c;
        if ((NAN((double)CONCAT44(uVar56,uVar54)) || NAN((double)plVar40)) || (!bVar1 || !bVar36)) {
          fVar63 = 0.0;
        }
        bVar36 = (double)plVar40 != (double)CONCAT44(uVar57,uVar55);
        bVar1 = (double)CONCAT44(uVar57,uVar55) <= (double)plVar40;
        plVar49 = plVar40;
        if ((double)CONCAT44(uVar56,uVar54) <= (double)plVar40) {
          plVar49 = (longlong *)CONCAT44(uVar56,uVar54);
        }
        iVar22 = (int)local_1f8;
        if (bVar1 && bVar36) {
          iVar22 = local_140;
        }
        if ((NAN((double)plVar40) || NAN((double)CONCAT44(uVar57,uVar55))) || (!bVar1 || !bVar36)) {
          local_13c = 0.0;
        }
        if ((double)plVar40 <= (double)CONCAT44(uVar57,uVar55)) {
          plVar40 = (longlong *)CONCAT44(uVar57,uVar55);
        }
        plVar38 = plVar4;
        fVar64 = local_134;
        iVar21 = local_138;
        if ((double)plVar49 <= (double)plVar4) {
          plVar38 = plVar49;
          fVar64 = fVar63;
          iVar21 = iVar33;
        }
        fVar62 = local_134;
        iVar35 = local_138;
        if ((double)plVar4 <= (double)plVar40) {
          fVar62 = local_13c;
          iVar35 = iVar22;
          plVar4 = plVar40;
        }
        goto LAB_14752cbcd;
      }
    }
    fVar62 = 0.0;
    iVar35 = (int)local_1f8;
    plVar4 = (longlong *)CONCAT44(uVar57,uVar55);
  }
  else {
    local_210._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
    local_210 = (longlong *)CONCAT44(local_210._4_4_,iVar21);
    iVar21 = (uint)local_1f0 - uVar20;
    uVar23 = (ulonglong)(uint)fStack_164 << 0x20;
    uVar28 = (ulonglong)local_1f0 & 0xffffffff;
    if (local_158 != '\0') {
      uVar28 = (ulonglong)local_168;
    }
    uVar26 = (ulonglong)local_168;
    uVar15 = 0;
    if (local_158 != '\0') {
      uVar26 = uVar17 & 0xffffffff;
      uVar15 = uVar23;
      uVar23 = 0;
    }
    FUN_14753f90d(&local_150,local_208,uVar26 | uVar23,uVar28 | uVar15);
    plVar49 = (longlong *)(local_150 + local_170);
    plVar4 = (longlong *)(local_170 + local_148);
    local_1e8 = (double)iVar21;
    uStack_1e0 = 0;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = (double)(int)uVar24 * local_1e8;
    auVar43 = roundpd(auVar43,auVar43,1);
    dVar52 = auVar43._0_8_;
    dVar39 = (double)(int)uVar24 * local_1e8 - dVar52;
    if (2147483647.0 <= dVar52) {
      dVar52 = 2147483647.0;
    }
    if (dVar52 <= -2147483648.0) {
      dVar52 = -2147483648.0;
    }
    fVar63 = (float)dVar39;
    if (0.99999994 <= fVar63) {
      fVar63 = 0.99999994;
    }
    if (fVar63 <= 0.0) {
      fVar63 = 0.0;
    }
    fVar63 = fVar63 + 0.5 + -0.5;
    if (0.99999994 <= fVar63) {
      fVar63 = 0.99999994;
    }
    if (fVar63 <= 0.0) {
      fVar63 = 0.0;
    }
    local_1d8 = CONCAT44(local_1d8._4_4_,(int)dVar52);
    bVar36 = local_178 != '\0';
    uVar23 = uVar17 & 0xffffffff;
    if (bVar36) {
      uVar23 = (ulonglong)local_188;
    }
    uVar28 = (ulonglong)local_188;
    if (bVar36) {
      uVar28 = (ulonglong)plVar40 & 0xffffffff;
    }
    fVar62 = local_134 + fVar63;
    uVar15 = (ulonglong)(uint)fStack_184 << 0x20;
    uVar26 = 0;
    if (bVar36) {
      uVar15 = 0;
      uVar26 = (ulonglong)(uint)fStack_184 << 0x20;
    }
    FUN_14753f90d(&local_1b0,local_208,uVar23 | uVar26,uVar28 | uVar15);
    plVar40 = (longlong *)((double)local_1b0 + local_190);
    iVar35 = (int)local_1f8;
    if ((((double)plVar49 == 1.79769313486232e+308) && (!NAN((double)plVar49))) ||
       (((double)plVar4 == -1.79769313486232e+308 && (!NAN((double)plVar4))))) {
      plVar4 = (longlong *)CONCAT44(uVar57,uVar55);
      fVar64 = 0.0;
      fVar62 = 0.0;
    }
    else {
      local_13c = local_13c + fVar63;
      auVar43 = roundss(in_XMM2,ZEXT416((uint)local_13c),9);
      fVar63 = local_13c - auVar43._0_4_;
      iVar22 = local_140 + (int)local_1d8 + ((int)ROUND(local_13c + local_13c + -0.5) >> 1);
      bVar36 = (double)CONCAT44(uVar56,uVar54) != (double)plVar49;
      bVar1 = (double)plVar49 <= (double)CONCAT44(uVar56,uVar54);
      iVar21 = (int)local_210;
      if (bVar1 && bVar36) {
        iVar21 = iVar22;
      }
      fVar44 = fVar63;
      if ((NAN((double)CONCAT44(uVar56,uVar54)) || NAN((double)plVar49)) || (!bVar1 || !bVar36)) {
        fVar44 = 0.0;
      }
      auVar43 = roundss(in_XMM4,ZEXT416((uint)fVar62),9);
      iVar34 = local_138 + (int)dVar52 + ((int)ROUND(fVar62 + fVar62 + -0.5) >> 1);
      bVar36 = (double)plVar49 != (double)CONCAT44(uVar57,uVar55);
      bVar1 = (double)CONCAT44(uVar57,uVar55) <= (double)plVar49;
      plVar42 = plVar49;
      if ((double)CONCAT44(uVar56,uVar54) <= (double)plVar49) {
        plVar42 = (longlong *)CONCAT44(uVar56,uVar54);
      }
      iVar29 = iVar35;
      if (bVar1 && bVar36) {
        iVar29 = iVar22;
      }
      if ((NAN((double)plVar49) || NAN((double)CONCAT44(uVar57,uVar55))) || (!bVar1 || !bVar36)) {
        fVar63 = 0.0;
      }
      fVar62 = fVar62 - auVar43._0_4_;
      if ((double)plVar49 <= (double)CONCAT44(uVar57,uVar55)) {
        plVar49 = (longlong *)CONCAT44(uVar57,uVar55);
      }
      if ((double)plVar4 < (double)plVar42) {
        iVar21 = iVar34;
      }
      local_210 = (longlong *)CONCAT44(local_210._4_4_,iVar21);
      plVar38 = plVar4;
      fVar64 = fVar62;
      if ((double)plVar42 <= (double)plVar4) {
        plVar38 = plVar42;
        fVar64 = fVar44;
      }
      iVar35 = iVar34;
      if ((double)plVar4 <= (double)plVar49) {
        fVar62 = fVar63;
        iVar35 = iVar29;
        plVar4 = plVar49;
      }
    }
    if (((double)plVar40 != 1.79769313486232e+308) || (NAN((double)plVar40))) {
      plVar49 = (longlong *)(local_190 + local_1a8);
      if (((double)plVar49 != -1.79769313486232e+308) || (NAN((double)plVar49))) {
        auVar46._8_8_ = 0;
        auVar46._0_8_ = (double)(int)uVar19 * local_1e8;
        auVar43 = roundpd(auVar46,auVar46,1);
        dVar39 = auVar43._0_8_;
        fVar63 = (float)((double)(int)uVar19 * local_1e8 - dVar39);
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        fVar63 = fVar63 + 0.5 + -0.5;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        local_19c = local_19c + fVar63;
        fVar63 = fVar63 + local_194;
        if (2147483647.0 <= dVar39) {
          dVar39 = 2147483647.0;
        }
        if (dVar39 <= -2147483648.0) {
          dVar39 = -2147483648.0;
        }
        auVar43 = roundss(ZEXT816(0),ZEXT416((uint)local_19c),9);
        iVar21 = ((int)ROUND(local_19c + local_19c + -0.5) >> 1) + local_1a0 + (int)dVar39;
        local_19c = local_19c - auVar43._0_4_;
        iVar22 = (int)local_210;
        if ((double)plVar40 < (double)plVar38) {
          iVar22 = iVar21;
        }
        fVar44 = local_19c;
        if ((double)plVar38 <= (double)plVar40) {
          fVar44 = fVar64;
        }
        auVar3._4_4_ = uVar57;
        auVar3._0_4_ = fVar63;
        auVar3._8_8_ = 0;
        auVar43 = roundss(ZEXT416(0),auVar3,9);
        iVar34 = (int)dVar39 + local_198 + ((int)ROUND(fVar63 + fVar63 + -0.5) >> 1);
        plVar42 = plVar40;
        if ((double)plVar38 <= (double)plVar40) {
          plVar42 = plVar38;
        }
        if ((double)plVar40 <= (double)plVar4) {
          local_19c = fVar62;
          iVar21 = iVar35;
        }
        fVar62 = fVar63 - auVar43._0_4_;
        if ((double)plVar40 <= (double)plVar4) {
          plVar40 = plVar4;
        }
        if ((double)plVar49 < (double)plVar42) {
          iVar22 = iVar34;
        }
        local_210 = (longlong *)CONCAT44(local_210._4_4_,iVar22);
        plVar38 = plVar49;
        fVar64 = fVar62;
        if ((double)plVar42 <= (double)plVar49) {
          plVar38 = plVar42;
          fVar64 = fVar44;
        }
        iVar35 = iVar34;
        plVar4 = plVar49;
        if ((double)plVar49 <= (double)plVar40) {
          fVar62 = local_19c;
          iVar35 = iVar21;
          plVar4 = plVar40;
        }
      }
    }
    iVar21 = (int)local_210;
    if (1 < iVar33) {
      iVar33 = 0;
      iVar22 = 0;
      if (((int)uVar24 < 0) && (*(char *)(*local_208 + 0x50) == '\x01')) {
        iVar22 = ~uVar24 + ((int)uVar19 >> 0x1f & uVar19);
      }
      if (0 < (int)uVar19 && *(char *)(*local_208 + 0x51) == '\x01') {
        uVar20 = 0;
        if (0 < (int)uVar24) {
          uVar20 = uVar24;
        }
        iVar33 = uVar19 + ~uVar20;
      }
      FUN_14753f90d(&local_1d0,local_208,uVar17 & 0xffffffff);
      plVar40 = local_1d0;
      if (iVar33 + iVar22 != 0 && SCARRY4(iVar33,iVar22) == iVar33 + iVar22 < 0) {
        dVar39 = local_1e8 * (double)iVar33;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = dVar39;
        auVar43 = roundpd(auVar47,auVar47,1);
        dVar52 = auVar43._0_8_;
        dVar39 = dVar39 - dVar52;
        if (2147483647.0 <= dVar52) {
          dVar52 = 2147483647.0;
        }
        if (dVar52 <= -2147483648.0) {
          dVar52 = -2147483648.0;
        }
        fVar63 = (float)dVar39;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        fVar63 = fVar63 + 0.5 + -0.5;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        fVar44 = fVar63 + local_1b4;
        auVar43 = roundss(ZEXT416(0),ZEXT416((uint)fVar44),9);
        iVar34 = ((int)ROUND(fVar44 + fVar44 + -0.5) >> 1) + local_1b8 + (int)dVar52;
        fVar44 = (fVar44 - auVar43._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar44) {
          fVar44 = 0.99999994;
        }
        if (fVar44 <= 0.0) {
          fVar44 = 0.0;
        }
        dVar39 = (double)iVar33 * (dVar41 - dVar27);
        local_1f0 = local_1c8;
        plVar49 = (longlong *)(dVar39 + (double)local_1c8);
        fVar50 = fVar44;
        if (1.79769313486232e+308 <= (double)plVar49) {
          fVar50 = 0.0;
        }
        local_208 = plVar49;
        iVar33 = iVar34;
        if (1.79769313486232e+308 <= (double)plVar49) {
          local_208 = (longlong *)0x7fefffffffffffff;
          iVar33 = 0;
        }
        if ((double)plVar49 <= -1.79769313486232e+308) {
          fVar44 = 0.0;
          plVar49 = (longlong *)0xffefffffffffffff;
          iVar34 = 0;
        }
        fVar63 = fVar63 + local_1bc;
        auVar43 = roundss(ZEXT816(0),ZEXT416((uint)fVar63),9);
        iVar29 = (int)dVar52 + local_1c0 + ((int)ROUND(fVar63 + fVar63 + -0.5) >> 1);
        fVar63 = (fVar63 - auVar43._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        plVar42 = (longlong *)(dVar39 + (double)local_1d0);
        fVar37 = fVar63;
        if ((double)local_208 <= (double)plVar42) {
          fVar37 = fVar50;
        }
        local_1f8 = CONCAT44(local_1f8._4_4_,fVar37);
        local_210 = local_1d0;
        if ((double)plVar42 < (double)local_208) {
          iVar33 = iVar29;
        }
        if ((double)plVar49 < (double)plVar42) {
          iVar34 = iVar29;
          fVar44 = fVar63;
        }
        dVar52 = local_1e8 * (double)iVar22;
        auVar48._8_8_ = 0;
        auVar48._0_8_ = dVar52;
        auVar43 = roundpd(auVar48,auVar48,1);
        dVar39 = auVar43._0_8_;
        dVar52 = dVar52 - dVar39;
        if (2147483647.0 <= dVar39) {
          dVar39 = 2147483647.0;
        }
        if (dVar39 <= -2147483648.0) {
          dVar39 = -2147483648.0;
        }
        fVar63 = (float)dVar52;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        fVar63 = fVar63 + 0.5 + -0.5;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        fVar50 = local_1b4 - fVar63;
        auVar43 = roundps(ZEXT416((uint)fVar50),ZEXT416((uint)fVar50),1);
        iVar29 = (local_1b8 - (int)dVar39) + (int)auVar43._0_4_;
        fVar50 = (fVar50 - auVar43._0_4_) + 0.5 + -0.5;
        auVar51 = ZEXT416((uint)fVar50);
        dVar27 = -(dVar41 - dVar27) * (double)iVar22;
        plVar45 = (longlong *)(dVar27 + (double)local_1c8);
        iVar22 = 0;
        if ((double)plVar45 < 1.79769313486232e+308) {
          iVar22 = iVar29;
        }
        if (0.99999994 <= fVar50) {
          auVar51._4_12_ = ZEXT812(0);
          auVar51._0_4_ = 0x3f7fffff;
        }
        if (auVar51._0_4_ <= 0.0) {
          auVar5._12_4_ = 0;
          auVar5._0_12_ = auVar51._4_12_;
          auVar51 = auVar5 << 0x20;
        }
        plVar6 = plVar45;
        if (1.79769313486232e+308 <= (double)plVar45) {
          plVar6 = (longlong *)0x7fefffffffffffff;
        }
        auVar43 = auVar51;
        plVar53 = plVar45;
        if ((double)plVar45 <= -1.79769313486232e+308) {
          plVar53 = (longlong *)0xffefffffffffffff;
          auVar43 = ZEXT816(0);
          iVar29 = 0;
        }
        local_1e8 = (double)CONCAT44(local_1e8._4_4_,auVar43._0_4_);
        auVar46 = roundps(auVar43,ZEXT416((uint)(local_1bc - fVar63)),1);
        iVar25 = (local_1c0 - (int)dVar39) + (int)auVar46._0_4_;
        fVar63 = ((local_1bc - fVar63) - auVar46._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar63) {
          fVar63 = 0.99999994;
        }
        plVar2 = (longlong *)(dVar27 + (double)local_1d0);
        if (fVar63 <= 0.0) {
          fVar63 = 0.0;
        }
        plVar7 = plVar2;
        iVar10 = iVar25;
        if ((double)plVar6 <= (double)plVar2) {
          plVar7 = plVar6;
          iVar10 = iVar22;
        }
        fVar50 = fVar63;
        if ((double)plVar2 <= (double)plVar53) {
          fVar50 = auVar43._0_4_;
          iVar25 = iVar29;
        }
        plVar8 = plVar42;
        if ((double)local_208 <= (double)plVar42) {
          plVar8 = local_208;
        }
        if (((double)plVar7 != 1.79769313486232e+308) || (NAN((double)plVar7))) {
          uVar23 = (ulonglong)local_208 >> 0x20;
          local_208 = (longlong *)CONCAT44((int)uVar23,fVar50);
          plVar9 = plVar2;
          if ((double)plVar2 <= (double)plVar53) {
            plVar9 = plVar53;
          }
          if (((double)plVar9 != -1.79769313486232e+308) || (NAN((double)plVar9))) {
            if (1.79769313486232e+308 <= (double)plVar45) {
              auVar51 = ZEXT816(0);
            }
            if ((double)plVar6 <= (double)plVar2) {
              fVar63 = auVar51._0_4_;
            }
            uVar55 = SUB84(local_1d0,0);
            uVar57 = (undefined4)((ulonglong)local_1d0 >> 0x20);
            if ((double)plVar7 < (double)local_1d0) {
              uVar55 = SUB84(plVar7,0);
              uVar57 = (undefined4)((ulonglong)plVar7 >> 0x20);
              local_1c0 = iVar10;
              local_1bc = fVar63;
            }
            if ((double)local_1c8 < (double)plVar7) {
              local_1c8 = plVar7;
              local_1b8 = iVar10;
              local_1b4 = fVar63;
            }
            plVar40 = (longlong *)CONCAT44(uVar57,uVar55);
            if ((double)plVar9 <= (double)CONCAT44(uVar57,uVar55) &&
                (double)CONCAT44(uVar57,uVar55) != (double)plVar9) {
              plVar40 = plVar9;
              local_1c0 = iVar25;
              local_1bc = fVar50;
            }
            if ((double)local_1c8 < (double)plVar9) {
              local_1c8 = plVar9;
              local_1b8 = iVar25;
              local_1b4 = fVar50;
            }
          }
        }
        if (((double)plVar8 != 1.79769313486232e+308) || (NAN((double)plVar8))) {
          if ((double)plVar42 <= (double)plVar49) {
            plVar42 = plVar49;
          }
          if (((double)plVar42 != -1.79769313486232e+308) || (NAN((double)plVar42))) {
            if ((double)plVar8 < (double)plVar40) {
              plVar40 = plVar8;
              local_1c0 = iVar33;
              local_1bc = fVar37;
            }
            if ((double)local_1c8 < (double)plVar8) {
              local_1c8 = plVar8;
              local_1b8 = iVar33;
              local_1b4 = fVar37;
            }
            if ((double)plVar42 < (double)plVar40) {
              plVar40 = plVar42;
              local_1c0 = iVar34;
              local_1bc = fVar44;
            }
            if ((double)local_1c8 < (double)plVar42) {
              local_1c8 = plVar42;
              local_1b8 = iVar34;
              local_1b4 = fVar44;
            }
          }
        }
      }
      if ((((double)plVar40 != 1.79769313486232e+308) || (NAN((double)plVar40))) &&
         (((double)local_1c8 != -1.79769313486232e+308 || (NAN((double)local_1c8))))) {
        plVar49 = plVar40;
        fVar63 = local_1bc;
        iVar33 = local_1c0;
        if ((double)plVar38 <= (double)plVar40) {
          plVar49 = plVar38;
          fVar63 = fVar64;
          iVar33 = iVar21;
        }
        fVar44 = local_1bc;
        iVar22 = local_1c0;
        if ((double)plVar40 <= (double)plVar4) {
          plVar40 = plVar4;
          fVar44 = fVar62;
          iVar22 = iVar35;
        }
        uVar57 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        uVar55 = SUB84(local_1c8,0);
        fVar64 = local_1b4;
        iVar21 = local_1b8;
        if ((double)plVar49 <= (double)local_1c8) {
          uVar55 = SUB84(plVar49,0);
          uVar57 = (undefined4)((ulonglong)plVar49 >> 0x20);
          fVar64 = fVar63;
          iVar21 = iVar33;
        }
        fVar62 = local_1b4;
        iVar35 = local_1b8;
        plVar4 = local_1c8;
        plVar38 = (longlong *)CONCAT44(uVar57,uVar55);
        if ((double)local_1c8 <= (double)plVar40) {
          fVar62 = fVar44;
          iVar35 = iVar22;
          plVar4 = plVar40;
          plVar38 = (longlong *)CONCAT44(uVar57,uVar55);
        }
      }
    }
  }
LAB_14752cbcd:
  *local_200 = (double)plVar38;
  local_200[1] = (double)plVar4;
  *(int *)(local_200 + 2) = iVar21;
  *(float *)((longlong)local_200 + 0x14) = fVar64;
  *(int *)(local_200 + 3) = iVar35;
  *(float *)((longlong)local_200 + 0x1c) = fVar62;
  param_1 = local_200;
LAB_14752c2d0:
  if ((local_f0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752d232 FUN_14752d232 body=596 status=ok
// SIG undefined FUN_14752d232(void)

longlong * FUN_14752d232(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [80];
  byte local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 == 0) {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      *(undefined4 *)(param_2 + 1) = 1;
      FUN_14753fb50(param_2,0);
      puVar3 = (undefined8 *)*param_2;
      *(undefined1 *)(puVar3 + 10) = 1;
      *puVar3 = uVar1;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[0xb] = 0x7fffffff80000000;
    }
  }
  else {
    if (*(char *)(param_1 + 0x50) != '\x05') {
      local_70 = 0;
      local_68 = 0xffffffff00000000;
      cVar4 = FUN_1401090ca(param_1,**(int **)(param_1 + 0x58) + -1);
      if (cVar4 != '\0') {
        *(undefined4 *)(param_2 + 1) = 1;
        FUN_14753fb50(param_2,0);
        lVar2 = *param_2;
        *(byte *)(lVar2 + 0x50) = local_70;
        (*(code *)(&PTR_LAB_14a46cf50)[local_70])(lVar2,local_c0);
        *(undefined8 *)(lVar2 + 0x58) = local_68;
        iVar6 = *(int *)(param_1 + 0x60);
      }
    }
    if (1 < iVar6) {
      iVar5 = 0;
      do {
        FUN_147528e64(local_c0,param_1,iVar5);
        if ((int)local_68 < local_68._4_4_) {
          iVar6 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
            FUN_14753fb50(param_2,iVar6);
          }
          lVar2 = *param_2;
          lVar7 = (longlong)iVar6 * 0x60;
          *(byte *)(lVar2 + 0x50 + lVar7) = local_70;
          (*(code *)(&PTR_LAB_14a46cf50)[local_70])(lVar7 + lVar2,local_c0);
          *(undefined8 *)(lVar2 + 0x58 + lVar7) = local_68;
        }
        iVar5 = iVar5 + 1;
        iVar6 = *(int *)(param_1 + 0x60);
      } while (iVar5 < iVar6 + -1);
    }
    if (*(char *)(param_1 + 0x51) != '\x05') {
      local_70 = 0;
      local_68 = 0xffffffff00000000;
      cVar4 = FUN_1401090ca(param_1,*(int *)(*(longlong *)(param_1 + 0x58) +
                                            (longlong)(iVar6 + -1) * 4) + 1);
      if (cVar4 != '\0') {
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_14753fb50(param_2,iVar6);
        }
        lVar2 = *param_2;
        lVar7 = (longlong)iVar6 * 0x60;
        *(byte *)(lVar2 + 0x50 + lVar7) = local_70;
        (*(code *)(&PTR_LAB_14a46cf50)[local_70])(lVar2 + lVar7,local_c0);
        *(undefined8 *)(lVar2 + 0x58 + lVar7) = local_68;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752d487 FUN_14752d487 body=34 status=ok
// SIG undefined FUN_14752d487(void)

undefined8 FUN_14752d487(undefined8 param_1)

{
  FUN_14752a0b0();
  return param_1;
}



// FUNCTION 14752d4a9 FUN_14752d4a9 body=59 status=ok
// SIG undefined FUN_14752d4a9(void)

void FUN_14752d4a9(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_147a40458(param_1 + 0x88);
  if (iVar1 != -1) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 0x20) = param_3;
  }
  return;
}



// FUNCTION 14752d4e4 FUN_14752d4e4 body=63 status=ok
// SIG undefined FUN_14752d4e4(void)

void FUN_14752d4e4(longlong param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_147a40458(param_1 + 0x88);
  if (iVar1 != -1) {
    *(double *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 0x20) = (double)param_3;
  }
  return;
}



// FUNCTION 14752d524 FUN_14752d524 body=512 status=ok
// SIG undefined FUN_14752d524(void)

undefined8 FUN_14752d524(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_158 [40];
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar1 = FUN_14752a7ae();
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab23c8) {
      FUN_144b3d300(&DAT_14cab23c8);
      if (DAT_14cab23c8 == -1) {
        FUN_1446ddc76(&DAT_14cab23c0,"MovieSceneFloatChannel",1);
        _Init_thread_footer(&DAT_14cab23c8);
      }
    }
    local_130 = (undefined **)CONCAT44(local_130._4_4_,*(undefined4 *)(param_2 + 8));
    cVar1 = FUN_1468ec2ac(&local_130,DAT_14cab23c0);
    uVar2 = 0;
    if (cVar1 != '\0') {
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 2;
      local_114 = 0;
      uStack_10c = 0;
      local_104 = 0x200000000;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      local_e8 = 2;
      local_130 = &PTR_FUN_14a46ea60;
      local_e0 = 0x404;
      local_90 = 0;
      local_88 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      uStack_bb = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_84 = 0xffffffff00000080;
      local_58 = 0;
      local_50 = 0;
      local_6c = 0;
      local_7c = 0;
      uStack_74 = 0;
      local_4c = 0xffffffff00000080;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0x10000ea60;
      FUN_14752d726(param_1);
      if (DAT_14cab23f0 == 0) {
        uVar2 = FUN_140bd662f();
        DAT_14cab23f0 = FUN_140002ddd(FUN_14179ca83,uVar2,L"MovieSceneFloatChannel");
      }
      FUN_14483b62e(DAT_14cab23f0,param_3,&local_130,0);
      FUN_14752d99a(&local_130,param_1);
      FUN_1404dbc70(&local_130);
      uVar2 = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752d726 FUN_14752d726 body=626 status=ok
// SIG undefined FUN_14752d726(void)

void FUN_14752d726(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  
  *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_1 + 0x50);
  *(undefined1 *)(param_2 + 0x51) = *(undefined1 *)(param_1 + 0x51);
  cVar7 = *(char *)(param_1 + 0x80);
  fVar21 = 0.0;
  if (cVar7 == '\x01') {
    fVar21 = (float)*(double *)(param_1 + 0x78);
  }
  *(float *)(param_2 + 0x78) = fVar21;
  *(char *)(param_2 + 0x7c) = cVar7;
  uVar13 = *(uint *)(param_1 + 0x60);
  uVar19 = (ulonglong)uVar13;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar19);
  }
  lVar15 = *(longlong *)(param_1 + 0x58);
  lVar16 = *(longlong *)(param_1 + 0x68);
  iVar14 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(uint *)(param_2 + 100) != uVar13) {
    FUN_140aba11c(param_2 + 0x58);
  }
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  plVar1 = (longlong *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(int *)(param_2 + 0x74) != iVar14) {
    FUN_140eb5d8c(plVar1,iVar14);
  }
  if (uVar19 != 0) {
    lVar20 = 0;
    do {
      iVar14 = *(int *)(param_2 + 0x60);
      *(uint *)(param_2 + 0x60) = iVar14 + 1U;
      if (*(uint *)(param_2 + 100) < iVar14 + 1U) {
        FUN_14753e8f2(param_2 + 0x58,iVar14);
      }
      *(undefined4 *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar14 * 4) =
           *(undefined4 *)(lVar15 + lVar20);
      dVar6 = *(double *)(lVar16 + lVar20 * 8);
      uVar2 = *(undefined4 *)(lVar16 + 8 + lVar20 * 8);
      uVar3 = *(undefined4 *)(lVar16 + 0xc + lVar20 * 8);
      uVar4 = *(undefined4 *)(lVar16 + 0x10 + lVar20 * 8);
      uVar5 = *(undefined4 *)(lVar16 + 0x14 + lVar20 * 8);
      uVar8 = *(undefined1 *)(lVar16 + 0x18 + lVar20 * 8);
      uVar9 = *(undefined1 *)(lVar16 + 0x19 + lVar20 * 8);
      uVar12 = *(undefined2 *)(lVar16 + 0x1a + lVar20 * 8);
      uVar10 = *(undefined1 *)(lVar16 + 0x1c + lVar20 * 8);
      uVar11 = *(undefined1 *)(lVar16 + 0x1d + lVar20 * 8);
      iVar14 = *(int *)(param_2 + 0x70);
      *(uint *)(param_2 + 0x70) = iVar14 + 1U;
      if (*(uint *)(param_2 + 0x74) < iVar14 + 1U) {
        FUN_14753f2b0(plVar1,iVar14);
      }
      lVar17 = *plVar1;
      lVar18 = (longlong)iVar14 * 0x1c;
      *(float *)(lVar17 + lVar18) = (float)dVar6;
      *(undefined4 *)(lVar17 + 4 + lVar18) = uVar2;
      *(undefined4 *)(lVar17 + 8 + lVar18) = uVar3;
      *(undefined4 *)(lVar17 + 0xc + lVar18) = uVar4;
      *(undefined4 *)(lVar17 + 0x10 + lVar18) = uVar5;
      *(undefined1 *)(lVar17 + 0x14 + lVar18) = uVar8;
      *(undefined1 *)(lVar17 + 0x15 + lVar18) = uVar9;
      *(undefined2 *)(lVar17 + 0x16 + lVar18) = uVar12;
      *(undefined1 *)(lVar17 + 0x18 + lVar18) = uVar10;
      *(undefined1 *)(lVar17 + 0x19 + lVar18) = uVar11;
      *(undefined2 *)(lVar17 + 0x1a + lVar18) = 0;
      lVar20 = lVar20 + 4;
    } while (uVar19 << 2 != lVar20);
  }
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_1 + 0x110);
  return;
}



// FUNCTION 14752d99a FUN_14752d99a body=608 status=ok
// SIG undefined FUN_14752d99a(void)

void FUN_14752d99a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  
  *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_1 + 0x50);
  *(undefined1 *)(param_2 + 0x51) = *(undefined1 *)(param_1 + 0x51);
  cVar7 = *(char *)(param_1 + 0x7c);
  dVar21 = 0.0;
  if (cVar7 == '\x01') {
    dVar21 = (double)*(float *)(param_1 + 0x78);
  }
  *(double *)(param_2 + 0x78) = dVar21;
  *(char *)(param_2 + 0x80) = cVar7;
  uVar13 = *(uint *)(param_1 + 0x60);
  uVar17 = (ulonglong)uVar13;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  lVar15 = *(longlong *)(param_1 + 0x58);
  lVar16 = *(longlong *)(param_1 + 0x68);
  iVar14 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(uint *)(param_2 + 100) != uVar13) {
    FUN_140aba11c(param_2 + 0x58,uVar17);
  }
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  plVar1 = (longlong *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(int *)(param_2 + 0x74) != iVar14) {
    FUN_140aba048(plVar1,iVar14);
  }
  if (uVar17 != 0) {
    puVar18 = (undefined1 *)(lVar16 + 0x19);
    uVar20 = 0;
    do {
      iVar14 = *(int *)(param_2 + 0x60);
      *(uint *)(param_2 + 0x60) = iVar14 + 1U;
      if (*(uint *)(param_2 + 100) < iVar14 + 1U) {
        FUN_14753e8f2(param_2 + 0x58,iVar14);
      }
      *(undefined4 *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar14 * 4) =
           *(undefined4 *)(lVar15 + uVar20 * 4);
      fVar2 = *(float *)(puVar18 + -0x19);
      uVar3 = *(undefined4 *)(puVar18 + -0x15);
      uVar4 = *(undefined4 *)(puVar18 + -0x11);
      uVar5 = *(undefined4 *)(puVar18 + -0xd);
      uVar6 = *(undefined4 *)(puVar18 + -9);
      uVar8 = puVar18[-5];
      uVar9 = puVar18[-4];
      uVar12 = *(undefined2 *)(puVar18 + -3);
      uVar10 = puVar18[-1];
      uVar11 = *puVar18;
      iVar14 = *(int *)(param_2 + 0x70);
      *(uint *)(param_2 + 0x70) = iVar14 + 1U;
      if (*(uint *)(param_2 + 0x74) < iVar14 + 1U) {
        FUN_14753f65a(plVar1,iVar14);
      }
      lVar16 = *plVar1;
      lVar19 = (longlong)iVar14 * 0x20;
      *(double *)(lVar16 + lVar19) = (double)fVar2;
      *(undefined4 *)(lVar16 + 8 + lVar19) = uVar3;
      *(undefined4 *)(lVar16 + 0xc + lVar19) = uVar4;
      *(undefined4 *)(lVar16 + 0x10 + lVar19) = uVar5;
      *(undefined4 *)(lVar16 + 0x14 + lVar19) = uVar6;
      *(undefined1 *)(lVar16 + 0x18 + lVar19) = uVar8;
      *(undefined1 *)(lVar16 + 0x19 + lVar19) = uVar9;
      *(undefined2 *)(lVar16 + 0x1a + lVar19) = uVar12;
      *(undefined1 *)(lVar16 + 0x1c + lVar19) = uVar10;
      *(undefined1 *)(lVar16 + 0x1d + lVar19) = uVar11;
      *(undefined2 *)(lVar16 + 0x1e + lVar19) = 0;
      uVar20 = uVar20 + 1;
      puVar18 = puVar18 + 0x1c;
    } while (uVar17 != uVar20);
  }
  *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_1 + 0x108);
  return;
}



// FUNCTION 14752dc02 FUN_14752dc02 body=97 status=ok
// SIG undefined FUN_14752dc02(void)

byte FUN_14752dc02(float *param_1,float *param_2)

{
  byte bVar1;
  
  if ((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) ||
        (*(char *)(param_1 + 6) != *(char *)(param_2 + 6))) ||
       ((*(char *)((longlong)param_1 + 0x19) != *(char *)((longlong)param_2 + 0x19) ||
        (param_1[1] != param_2[1])))) ||
      ((NAN(param_1[1]) || NAN(param_2[1]) ||
       ((param_1[2] != param_2[2] || (NAN(param_1[2]) || NAN(param_2[2]))))))) ||
     ((*(char *)(param_1 + 5) != *(char *)(param_2 + 5) ||
      ((param_1[3] != param_2[3] || (NAN(param_1[3]) || NAN(param_2[3]))))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(param_2[4] == param_1[4]) & 1;
  }
  return bVar1;
}



// FUNCTION 14752dc64 FUN_14752dc64 body=269 status=ok
// SIG undefined FUN_14752dc64(void)

void FUN_14752dc64(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar2 = (longlong)local_40;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_14753bf48(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar2 * 0x1c);
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar2 = (longlong)local_50;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_147539e5c(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar2 << 2);
  }
  FUN_147526b6c(param_1,&local_58,&local_48);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752dd72 thunk_FUN_147526dac body=5 status=ok
// SIG undefined thunk_FUN_147526dac(void)

void thunk_FUN_147526dac(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  
  if (1 < *(int *)(param_1 + 0x70)) {
    pfVar8 = *(float **)(param_1 + 0x68);
    if (*(char *)(pfVar8 + 6) == '\x02') {
      if ((*(byte *)((longlong)pfVar8 + 0x19) & 0xfb) == 0) {
        pfVar8[1] = 0.0;
        pfVar8[2] = 0.0;
        *(undefined1 *)(pfVar8 + 5) = 0;
      }
    }
    else if (*(char *)(pfVar8 + 6) == '\0') {
      *(undefined1 *)(pfVar8 + 5) = 0;
      fVar15 = (float)((*(int **)(param_1 + 0x58))[1] - **(int **)(param_1 + 0x58));
      fVar1 = 0.0001;
      if (0.0001 <= fVar15) {
        fVar1 = fVar15;
      }
      pfVar8[2] = (*(float *)(*(longlong *)(param_1 + 0x68) + 0x1c) - *pfVar8) / fVar1;
    }
    lVar12 = (longlong)(*(int *)(param_1 + 0x70) + -1) * 0x1c;
    pfVar8 = (float *)(*(longlong *)(param_1 + 0x68) + lVar12);
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x68) + 0x18 + lVar12);
    if (cVar4 == '\x02') {
      if ((*(byte *)((longlong)pfVar8 + 0x19) & 0xfb) == 0) {
        pfVar8[1] = 0.0;
        pfVar8[2] = 0.0;
        *(undefined1 *)(pfVar8 + 5) = 0;
      }
    }
    else if (cVar4 == '\0') {
      *(undefined1 *)(pfVar8 + 5) = 0;
      lVar12 = (longlong)*(int *)(param_1 + 0x70);
      fVar15 = (float)(*(int *)(*(longlong *)(param_1 + 0x58) + -4 + lVar12 * 4) -
                      *(int *)(*(longlong *)(param_1 + 0x58) + -8 + lVar12 * 4));
      fVar1 = 0.0001;
      if (0.0001 <= fVar15) {
        fVar1 = fVar15;
      }
      pfVar8[1] = (*pfVar8 - *(float *)(*(longlong *)(param_1 + 0x68) + lVar12 * 0x1c + -0x38)) /
                  fVar1;
    }
    if (2 < *(int *)(param_1 + 0x70)) {
      iVar14 = 1;
      iVar13 = 0;
      do {
        lVar11 = (longlong)iVar14;
        lVar12 = lVar11 + -1;
        lVar9 = *(longlong *)(param_1 + 0x68);
        fVar1 = *(float *)(lVar9 + lVar11 + -1 + lVar12 * 0x1b);
        pfVar8 = (float *)(lVar9 + lVar11 * 0x1c);
        cVar4 = *(char *)(lVar9 + 0x18 + lVar11 * 0x1c);
        if (cVar4 == '\0') {
          *(undefined1 *)(pfVar8 + 5) = 0;
          lVar9 = *(longlong *)(param_1 + 0x68);
          fVar2 = (float)(*(int *)(*(longlong *)(param_1 + 0x58) + lVar11 * 4) -
                         *(int *)(*(longlong *)(param_1 + 0x58) + lVar12 * 4));
          fVar15 = 0.0001;
          if (0.0001 <= fVar2) {
            fVar15 = fVar2;
          }
          pfVar8[1] = (*pfVar8 - fVar1) / fVar15;
          fVar15 = (float)(*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar11 * 4) -
                          *(int *)(*(longlong *)(param_1 + 0x58) + lVar11 * 4));
          fVar1 = 0.0001;
          if (0.0001 <= fVar15) {
            fVar1 = fVar15;
          }
          pfVar8[2] = (*(float *)(lVar9 + lVar11 * 0x1c + 0x1c) - *pfVar8) / fVar1;
        }
        else if ((cVar4 == '\x02') && ((*(byte *)((longlong)pfVar8 + 0x19) & 0xfb) == 0)) {
          if (*(byte *)((longlong)pfVar8 + 0x19) == 4) {
            fVar15 = (float)FUN_147527372(param_1,iVar14);
            if ((((ABS(pfVar8[1]) <= 0.001) || (ABS(pfVar8[1] - fVar15) <= 0.001)) || (9 < iVar13))
               || (iVar14 < 2)) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar13 + 1;
              iVar14 = iVar14 + -2;
            }
          }
          else {
            fVar2 = *(float *)(lVar9 + lVar11 * 0x1c + 0x1c);
            lVar9 = *(longlong *)(param_1 + 0x58);
            iVar5 = *(int *)(lVar9 + 4 + lVar11 * 4);
            iVar6 = *(int *)(lVar9 + lVar12 * 4);
            fVar15 = (float)(iVar5 - iVar6);
            fVar10 = 0.0001;
            if (0.0001 <= fVar15) {
              fVar10 = fVar15;
            }
            if (DAT_14c760fdc == 0) {
              fVar15 = (((*pfVar8 - fVar1) + (fVar2 - *pfVar8)) * (1.0 - param_2)) / fVar10;
            }
            else {
              fVar15 = 0.0;
              if ((0 < DAT_14c760fdc) &&
                 (((fVar3 = *pfVar8, fVar1 < fVar3 && (fVar3 < fVar2)) ||
                  ((fVar3 < fVar1 && (fVar2 < fVar3)))))) {
                fVar18 = fVar3 - fVar1;
                fVar15 = ((fVar18 + (fVar2 - fVar3)) * (1.0 - param_2)) / fVar10;
                if (DAT_14c760fdc == 2) {
                  iVar7 = *(int *)(lVar9 + lVar11 * 4);
                  dVar16 = (double)(iVar7 - iVar6);
                  dVar19 = (double)(iVar5 - iVar7);
                  dVar17 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar16) {
                    dVar17 = dVar16;
                  }
                  dVar16 = 9.999999747378752e-05;
                  if (9.999999747378752e-05 <= dVar19) {
                    dVar16 = dVar19;
                  }
                  dVar19 = (double)fVar18 / (dVar17 * 0.6666666666666666);
                  dVar16 = (double)(fVar2 - fVar3) / (dVar16 * 0.6666666666666666);
                  dVar17 = 0.0;
                  if ((0.0 < dVar16 != dVar19 <= 0.0) && (fVar15 <= 0.0 != 0.0 < dVar16)) {
                    dVar17 = (double)fVar15;
                    if (0.0 <= dVar16) {
                      if (dVar16 <= dVar17) {
                        dVar17 = dVar16;
                      }
                      if (dVar19 <= dVar17) {
                        dVar17 = dVar19;
                      }
                    }
                    else {
                      if (dVar17 <= dVar16) {
                        dVar17 = dVar16;
                      }
                      if (dVar17 <= dVar19) {
                        dVar17 = dVar19;
                      }
                    }
                  }
                  fVar15 = (float)dVar17;
                }
                else if (DAT_14c760fdc == 1) {
                  fVar1 = ABS(fVar18) / ABS(fVar2 - fVar1);
                  if (fVar1 <= 0.85) {
                    if (fVar1 < 0.15) {
                      fVar15 = fVar15 * (fVar1 / 0.15);
                    }
                  }
                  else {
                    fVar15 = ((fVar1 + -0.85) / -0.15 + 1.0) * fVar15;
                  }
                }
              }
            }
          }
          pfVar8[1] = fVar15;
          pfVar8[2] = fVar15;
          *(undefined1 *)(pfVar8 + 5) = 0;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_1 + 0x70) + -1);
    }
  }
  return;
}



// FUNCTION 14752dd78 FUN_14752dd78 body=91 status=ok
// SIG undefined FUN_14752dd78(void)

void FUN_14752dd78(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x80;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752ddd4 FUN_14752ddd4 body=97 status=ok
// SIG undefined FUN_14752ddd4(void)

void FUN_14752ddd4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = FUN_147a40458(param_1 + 0x80,*(undefined4 *)(lVar2 + lVar5 * 4));
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x60))) {
        *(undefined4 *)(lVar1 + lVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 4);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 14752de36 FUN_14752de36 body=125 status=ok
// SIG undefined FUN_14752de36(void)

void FUN_14752de36(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1 + 0x80;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_20 = param_1;
  FUN_14752deb4();
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_147526dac(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752deb4 FUN_14752deb4 body=96 status=ok
// SIG undefined FUN_14752deb4(void)

void FUN_14752deb4(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753fbe4(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14752df14 FUN_14752df14 body=113 status=ok
// SIG undefined FUN_14752df14(void)

void FUN_14752df14(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x80;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_14752df86(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752df86 FUN_14752df86 body=253 status=ok
// SIG undefined FUN_14752df86(void)

void FUN_14752df86(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    do {
      if ((param_1[1] == 0) ||
         (iVar2 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar5 * 4)), iVar2 == -1)) {
        FUN_147a3fc60(&local_58);
        lVar4 = *param_3;
        uVar3 = local_58;
      }
      else {
        lVar4 = (longlong)iVar2 * 0x1c;
        puVar1 = (undefined4 *)(*(longlong *)param_1[3] + lVar4);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        lVar4 = *(longlong *)param_1[3] + 0xc + lVar4;
        uStack_48 = *(undefined4 *)(lVar4 + 4);
        uStack_44 = *(undefined4 *)(lVar4 + 8);
        uStack_40 = *(undefined4 *)(lVar4 + 0xc);
        uVar3 = FUN_14753fcec(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar2 * 4),
                              &local_58);
        if (param_1[1] == 0) {
          FUN_14045d416(&local_5c);
        }
        else {
          FUN_147a404c6(param_1[1],&local_5c,uVar3);
        }
        lVar4 = *param_3;
        uVar3 = local_5c;
      }
      *(undefined4 *)(lVar4 + lVar5 * 4) = uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752e084 FUN_14752e084 body=113 status=ok
// SIG undefined FUN_14752e084(void)

void FUN_14752e084(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1 + 0x80;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_20 = param_1;
  FUN_147527ed2();
  FUN_147526dac(param_1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752e0f6 FUN_14752e0f6 body=29 status=ok
// SIG undefined FUN_14752e0f6(void)

void FUN_14752e0f6(undefined8 param_1)

{
  FUN_147527758();
  FUN_147526dac(param_1,0);
  return;
}



// FUNCTION 14752e14e FUN_14752e14e body=4 status=ok
// SIG undefined FUN_14752e14e(void)

undefined4 FUN_14752e14e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 14752e152 FUN_14752e152 body=96 status=ok
// SIG undefined FUN_14752e152(void)

void FUN_14752e152(longlong param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_140aba11c(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_140eb5d8c(param_1 + 0x68,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  FUN_147a408e2(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 14752e1ba FUN_14752e1ba body=101 status=ok
// SIG undefined FUN_14752e1ba(void)

void FUN_14752e1ba(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x80;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_1475243aa();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_147526dac(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752e220 FUN_14752e220 body=26 status=ok
// SIG undefined FUN_14752e220(void)

undefined8 FUN_14752e220(longlong param_1,undefined8 param_2)

{
  FUN_147a404c6(param_1 + 0x80);
  return param_2;
}



// FUNCTION 14752e24f FUN_14752e24f body=30 status=ok
// SIG undefined FUN_14752e24f(void)

undefined8 FUN_14752e24f(undefined8 param_1)

{
  FUN_147527f22();
  return param_1;
}



// FUNCTION 14752e26d FUN_14752e26d body=125 status=ok
// SIG undefined FUN_14752e26d(void)

bool FUN_14752e26d(undefined8 param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar1 = *param_3;
  local_24 = 0.0;
  cVar2 = FUN_1400f0204(param_1,0,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return cVar2 != '\0' && ABS(local_24 - fVar1) <= 0.0001;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752e2eb FUN_14752e2eb body=66 status=ok
// SIG undefined FUN_14752e2eb(void)

void FUN_14752e2eb(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_147a40458(param_1 + 0x80);
  if (iVar1 != -1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 0x1c) = param_3;
  }
  return;
}



// FUNCTION 14752e32e FUN_14752e32e body=211 status=ok
// SIG undefined FUN_14752e32e(void)

void FUN_14752e32e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x60);
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    *(uint *)(param_1 + 0x60) = uVar1 + iVar2;
    if ((uint)(*(int *)(param_1 + 100) - iVar2) < uVar1) {
      FUN_14753e8f2((longlong *)(param_1 + 0x58),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x58)),(void *)*param_2,
           (longlong)(int)uVar1 << 2);
  }
  FUN_14752e402(param_1 + 0x68,param_3);
  if (iVar2 < *(int *)(param_1 + 0x60)) {
    do {
      FUN_147a407c8(param_1 + 0x80,local_44,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x60));
  }
  FUN_147526dac(param_1,0);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752e402 FUN_14752e402 body=110 status=ok
// SIG undefined FUN_14752e402(void)

void FUN_14752e402(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14753f2b0(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x1c + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x1c)
    ;
    return;
  }
  return;
}



// FUNCTION 14752e47c FUN_14752e47c body=618 status=ok
// SIG undefined FUN_14752e47c(void)

undefined4 FUN_14752e47c(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong uStack_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab2420) {
    FUN_144b3d300(&DAT_14cab2420);
    if (DAT_14cab2420 == -1) {
      FUN_1446ddc76(&DAT_14cab2418,"IntegralCurve",1);
      _Init_thread_footer(&DAT_14cab2420);
    }
  }
  local_c8 = (undefined **)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_2 + 8));
  uVar3 = FUN_1468ec2ac(&local_c8,DAT_14cab2418);
  if ((char)uVar3 != '\0') {
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = &PTR_FUN_14a46be50;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0x7fffffff;
    local_4c = 0;
    uVar4 = FUN_1463c1964();
    FUN_14483b62e(uVar4,param_3,&local_c8,0);
    if (local_50 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 0x6c) = 1;
      *(int *)(param_1 + 0x68) = local_50;
    }
    if ((int)uStack_58 < 0) {
LAB_14752e6df:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_58 & 0xffffffff);
    }
    if (*(int *)(param_1 + 100) < (int)uStack_58) {
      FUN_140aba11c(param_1 + 0x58);
      if ((int)uStack_58 < 0) goto LAB_14752e6df;
    }
    if (*(int *)(param_1 + 0x7c) < (int)uStack_58) {
      FUN_14481578e(param_1 + 0x70);
    }
    FUN_145cba7c3(&local_d0);
    FUN_147a3fcb4(&local_c8,&local_e0);
    if (-1 < (int)local_d8) {
      iVar5 = 0;
      do {
        if ((int)local_e0[1] <= (int)local_d8) break;
        FUN_147572fa9(&local_e4,0,local_d0,(double)*(float *)(*local_e0 + (ulonglong)local_d8 * 8));
        local_e8 = *(undefined4 *)(*local_e0 + 4 + (longlong)(int)local_d8 * 8);
        local_f8 = param_1 + 0x70;
        FUN_14752e6e8(iVar5,local_e4,&local_e8,param_1 + 0x58);
        uVar1 = local_d8 + 1;
        bVar2 = -2 < (int)local_d8;
        iVar5 = iVar5 + 1;
        local_d8 = uVar1;
      } while (bVar2);
    }
    local_c8 = &PTR_FUN_14a46be50;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_c8 = &PTR_FUN_14a177080;
    FUN_144a78a1a(&local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752e6e8 FUN_14752e6e8 body=471 status=ok
// SIG undefined FUN_14752e6e8(void)

void FUN_14752e6e8(uint param_1,int param_2,undefined4 *param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if ((int)param_1 < 1) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
    }
    *(int *)(*param_4 + (longlong)iVar3 * 4) = param_2;
  }
  else {
    _Src = (void *)*param_4;
    if (param_2 < *(int *)((longlong)_Src + (ulonglong)param_1 * 4 + -4)) {
      lVar5 = (ulonglong)param_1 - 1;
      do {
        if (lVar5 < 1) {
          uVar4 = *(uint *)(param_4 + 1);
          *(uint *)(param_4 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar4 + 1) {
            FUN_14753e8f2(param_4,(ulonglong)uVar4);
            _Src = (void *)*param_4;
          }
          memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)uVar4 << 2);
          *(int *)*param_4 = param_2;
          uVar4 = *(uint *)(param_5 + 1);
          *(uint *)(param_5 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_5 + 0xc) < uVar4 + 1) {
            FUN_1446f48e2(param_5,(ulonglong)uVar4);
          }
          memmove((void *)(*param_5 + 4),(void *)*param_5,(ulonglong)uVar4 << 2);
          puVar7 = (undefined4 *)*param_5;
          goto LAB_14752e7f6;
        }
        lVar1 = lVar5 + -1;
        param_1 = param_1 - 1;
        lVar2 = lVar5 * 4;
        lVar5 = lVar1;
      } while (param_2 < *(int *)((longlong)_Src + lVar2 + -4));
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_4,iVar3);
        _Src = (void *)*param_4;
      }
      uVar6 = (ulonglong)((int)lVar1 + 1);
      memmove((void *)((longlong)_Src + uVar6 * 4 + 4),(void *)((longlong)_Src + uVar6 * 4),
              (ulonglong)(iVar3 - param_1) << 2);
      *(int *)(*param_4 + uVar6 * 4) = param_2;
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_5,iVar3);
      }
      memmove((void *)(*param_5 + uVar6 * 4 + 4),(void *)(*param_5 + uVar6 * 4),
              (ulonglong)(iVar3 - param_1) << 2);
      goto LAB_14752e7f3;
    }
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_14753e8f2(param_4,iVar3);
      _Src = (void *)*param_4;
    }
    *(int *)((longlong)_Src + (longlong)iVar3 * 4) = param_2;
  }
  iVar3 = (int)param_5[1];
  uVar6 = (ulonglong)iVar3;
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_1446f48e2(param_5,iVar3);
  }
LAB_14752e7f3:
  puVar7 = (undefined4 *)(uVar6 * 4 + *param_5);
LAB_14752e7f6:
  *puVar7 = *param_3;
  return;
}



// FUNCTION 14752e8c0 FUN_14752e8c0 body=99 status=ok
// SIG undefined FUN_14752e8c0(void)

void FUN_14752e8c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_14752e924(param_1,param_2,&local_20);
  *param_3 = (int)((ulonglong)(longlong)ROUND(local_20 + local_20 + -0.5) >> 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752e924 FUN_14752e924 body=792 status=ok
// SIG undefined FUN_14752e924(void)

undefined8 FUN_14752e924(longlong param_1,undefined8 param_2,double *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined8 uVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_88 [40];
  double local_60;
  int local_58;
  float local_54;
  uint local_50;
  int *local_40;
  
  local_40 = (int *)(DAT_14c707940 ^ (ulonglong)auStack_88);
  uVar4 = *(uint *)(param_1 + 0x60);
  if (uVar4 == 0) {
    if (*(char *)(param_1 + 0x6c) != '\x01') {
LAB_14752ea01:
      uVar9 = 0;
      goto LAB_14752e98b;
    }
    dVar15 = (double)*(int *)(param_1 + 0x68);
    piVar10 = local_40;
  }
  else {
    piVar7 = *(int **)(param_1 + 0x58);
    iVar5 = *piVar7;
    iVar6 = piVar7[(int)(uVar4 - 1)];
    iVar14 = (int)param_2;
    fVar16 = (float)((ulonglong)param_2 >> 0x20);
    if ((iVar14 < iVar5) || ((iVar5 == iVar14 && (fVar16 < 0.0)))) {
      bVar2 = *(byte *)(param_1 + 0x50);
      if (1 < bVar2 - 3) {
LAB_14752e9fc:
        if (bVar2 == 5) goto LAB_14752ea01;
        goto LAB_14752ea0f;
      }
      dVar15 = (double)**(int **)(param_1 + 0x70);
      piVar10 = *(int **)(param_1 + 0x70);
    }
    else if ((iVar6 < iVar14) || ((iVar6 == iVar14 && (0.0 < fVar16)))) {
      bVar2 = *(byte *)(param_1 + 0x51);
      if (1 < bVar2 - 3) goto LAB_14752e9fc;
      piVar10 = (int *)(longlong)(*(int *)(param_1 + 0x78) + -1);
      dVar15 = (double)*(int *)(*(longlong *)(param_1 + 0x70) + (longlong)piVar10 * 4);
    }
    else {
LAB_14752ea0f:
      FUN_140108ff7(&local_60,iVar5,iVar6,param_2);
      piVar10 = *(int **)(param_1 + 0x70);
      if ((iVar14 < iVar5) || ((iVar5 == iVar14 && (fVar16 < 0.0)))) {
        cVar3 = *(char *)(param_1 + 0x50);
LAB_14752ea49:
        if (cVar3 == '\x02') {
          if ((local_50 & 1) != 0) {
            fVar16 = local_54 + 0.5 + -0.5;
            if (0.99999994 <= fVar16) {
              fVar16 = 0.99999994;
            }
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            fVar16 = 0.0 - fVar16;
            auVar17 = roundps(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),1);
            local_58 = ((iVar6 + iVar5) - local_58) + -1 + (int)auVar17._0_4_;
            local_54 = (fVar16 - auVar17._0_4_) + 0.5 + -0.5;
            if (0.99999994 <= local_54) {
              local_54 = 0.99999994;
            }
            if (local_54 <= 0.0) {
              local_54 = 0.0;
            }
          }
        }
        else if (cVar3 == '\x01') {
          local_60 = (double)(int)local_50 *
                     ((double)piVar10[*(int *)(param_1 + 0x78) + -1] - (double)*piVar10);
        }
      }
      else if ((iVar6 < iVar14) || ((iVar6 == iVar14 && (0.0 < fVar16)))) {
        cVar3 = *(char *)(param_1 + 0x51);
        goto LAB_14752ea49;
      }
      if ((int)uVar4 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar12 = uVar4;
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if ((piVar7[uVar1] <= local_58) && (piVar7[uVar1] != local_58 || 0.0 <= local_54)) {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar8 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar8);
      }
      uVar11 = 1;
      if (1 < (int)uVar13) {
        uVar11 = (ulonglong)uVar13;
      }
      uVar13 = (int)uVar11 - 1;
      if (((int)uVar11 < (int)uVar4) && (*(char *)(param_1 + 0x52) != '\0')) {
        dVar15 = (double)piVar10[uVar13];
        dVar15 = ((double)piVar10[uVar11] - dVar15) *
                 ((((double)local_54 + (double)local_58) - (double)piVar7[uVar13]) /
                 ((double)piVar7[uVar11] - (double)piVar7[uVar13])) + dVar15 + local_60 + 0.5;
      }
      else {
        dVar15 = (double)(piVar10[uVar13] + (int)(local_60 + 0.5));
        piVar10 = (int *)(ulonglong)(uint)(int)(local_60 + 0.5);
      }
    }
  }
  *param_3 = dVar15;
  uVar9 = CONCAT71((int7)((ulonglong)piVar10 >> 8),1);
LAB_14752e98b:
  if (((ulonglong)local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14752ec3e FUN_14752ec3e body=91 status=ok
// SIG undefined FUN_14752ec3e(void)

void FUN_14752ec3e(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x80;
  local_18 = param_1 + 0x70;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752ec9a FUN_14752ec9a body=97 status=ok
// SIG undefined FUN_14752ec9a(void)

void FUN_14752ec9a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = FUN_147a40458(param_1 + 0x80,*(undefined4 *)(lVar2 + lVar5 * 4));
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x60))) {
        *(undefined4 *)(lVar1 + lVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 4);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 14752ecfc FUN_14752ecfc body=113 status=ok
// SIG undefined FUN_14752ecfc(void)

void FUN_14752ecfc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x80;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_14752ed6e(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752ed6e FUN_14752ed6e body=96 status=ok
// SIG undefined FUN_14752ed6e(void)

void FUN_14752ed6e(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753fe3a(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14752edce FUN_14752edce body=113 status=ok
// SIG undefined FUN_14752edce(void)

void FUN_14752edce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0x80;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_14752ee40(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752ee40 FUN_14752ee40 body=208 status=ok
// SIG undefined FUN_14752ee40(void)

void FUN_14752ee40(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      if ((param_1[1] == 0) ||
         (iVar1 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar3 * 4)), iVar1 == -1)) {
        FUN_147a3fc60(&local_34);
      }
      else {
        uVar2 = FUN_14753fed8(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              *(undefined4 *)(*(longlong *)param_1[3] + (longlong)iVar1 * 4));
        if (param_1[1] == 0) {
          FUN_14045d416(&local_34);
        }
        else {
          FUN_147a404c6(param_1[1],&local_34,uVar2);
        }
      }
      *(undefined4 *)(*param_3 + lVar3 * 4) = local_34;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752ef12 FUN_14752ef12 body=100 status=ok
// SIG undefined FUN_14752ef12(void)

void FUN_14752ef12(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1 + 0x80;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_18 = param_1;
  FUN_14752ef78(&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752ef78 FUN_14752ef78 body=80 status=ok
// SIG undefined FUN_14752ef78(void)

void FUN_14752ef78(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14753fff2(param_1,iVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14752efc8 FUN_14752efc8 body=209 status=ok
// SIG undefined FUN_14752efc8(void)

void FUN_14752efc8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  double dVar2;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  double local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x60)) {
    local_48 = 0.0;
    cVar1 = FUN_14752e924(param_1,param_2);
    if (cVar1 != '\0') {
      dVar2 = local_48 + local_48;
      local_40 = param_1 + 0x80;
      local_30 = param_1 + 0x70;
      local_48 = (double)(param_1 + 0x58);
      local_38 = param_1;
      FUN_14752f09a(&local_48,local_4c,param_2,(ulonglong)(longlong)ROUND(dVar2 + -0.5) >> 1);
    }
  }
  local_40 = param_1 + 0x80;
  local_30 = param_1 + 0x70;
  local_48 = (double)(param_1 + 0x58);
  local_38 = param_1;
  FUN_14752f104(&local_48,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752f09a FUN_14752f09a body=105 status=ok
// SIG undefined FUN_14752f09a(void)

undefined8 FUN_14752f09a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_147525ee8(param_1,param_3,0);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_14753fed8(param_1,param_3,param_4);
  }
  else {
    *(undefined4 *)(**(longlong **)(param_1 + 0x18) + (ulonglong)uVar1 * 4) = param_4;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14045d416(param_2);
  }
  else {
    FUN_147a404c6(*(longlong *)(param_1 + 8),param_2,uVar1);
  }
  return param_2;
}



// FUNCTION 14752f104 FUN_14752f104 body=329 status=ok
// SIG undefined FUN_14752f104(void)

void FUN_14752f104(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uStack_60 < 1) {
    uStack_80._0_4_ = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar4 = local_78;
      uVar3 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_14752f18e;
      }
      else if (iVar2 < param_2) {
LAB_14752f18e:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_14752ef78(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752f24e FUN_14752f24e body=89 status=ok
// SIG undefined FUN_14752f24e(void)

void FUN_14752f24e(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x80;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_147524082(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752f2e0 FUN_14752f2e0 body=96 status=ok
// SIG undefined FUN_14752f2e0(void)

void FUN_14752f2e0(longlong param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_140aba11c(param_1 + 0x58,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14481578e(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_147a408e2(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 14752f345 FUN_14752f345 body=387 status=ok
// SIG undefined FUN_14752f345(void)

void FUN_14752f345(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 0x80;
  local_60 = (longlong *)(param_1 + 0x70);
  local_78 = (longlong *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x60);
  local_68 = param_1;
  if (1 < (int)uVar6) {
    uVar8 = 0;
    if ((char)*(undefined8 *)(param_2 + 8) != '\x02') {
      uVar8 = 0;
      uVar7 = uVar6;
      do {
        uVar5 = (uVar7 >> 1) + uVar8;
        if (*(int *)(*local_78 + (ulonglong)uVar5 * 4) <
            (int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20)) {
          uVar8 = uVar5 + (uVar7 & 1);
        }
        bVar3 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar3);
    }
    if ((char)*(undefined8 *)(param_2 + 0x10) != '\x02') {
      uVar7 = 0;
      uVar5 = uVar6;
      do {
        uVar6 = uVar7;
        uVar7 = (uVar5 >> 1) + uVar6;
        if (*(int *)(*local_78 + (ulonglong)uVar7 * 4) <=
            (int)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
          uVar6 = uVar7 + (uVar5 & 1);
        }
        bVar3 = 1 < uVar5;
        uVar7 = uVar6;
        uVar5 = uVar5 >> 1;
      } while (bVar3);
    }
    if ((int)uVar8 < (int)uVar6) {
      do {
        if ((int)local_78[1] <= (int)uVar8) break;
        uVar1 = *(undefined4 *)(*local_78 + (ulonglong)uVar8 * 4);
        iVar2 = *(int *)(*local_60 + (ulonglong)uVar8 * 4);
        FUN_14753fff2(&local_78,uVar8);
        local_58 = 0.0;
        cVar4 = FUN_14752e924(param_1,uVar1,&local_58);
        if ((cVar4 == '\0') ||
           (iVar2 != (int)((ulonglong)(longlong)ROUND(local_58 + local_58 + -0.5) >> 1))) {
          FUN_14753fed8(&local_78,uVar1,iVar2);
        }
        else {
          uVar8 = uVar8 - 1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar6);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14752f4ca FUN_14752f4ca body=89 status=ok
// SIG undefined FUN_14752f4ca(void)

void FUN_14752f4ca(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0x80;
  local_10 = param_1 + 0x70;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_1475243aa(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752f524 FUN_14752f524 body=26 status=ok
// SIG undefined FUN_14752f524(void)

undefined8 FUN_14752f524(longlong param_1,undefined8 param_2)

{
  FUN_147a404c6(param_1 + 0x80);
  return param_2;
}



// FUNCTION 14752f54e FUN_14752f54e body=35 status=ok
// SIG undefined FUN_14752f54e(void)

void FUN_14752f54e(double *param_1,double param_2,double param_3)

{
  if (param_2 < *param_1) {
    *param_1 = param_2;
    param_1[2] = param_3;
  }
  if (param_1[1] <= param_2 && param_2 != param_1[1]) {
    param_1[1] = param_2;
    param_1[3] = param_3;
  }
  return;
}



// FUNCTION 14752f572 FUN_14752f572 body=122 status=ok
// SIG undefined FUN_14752f572(void)

void FUN_14752f572(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_2;
  if (((dVar1 != 1.79769313486232e+308) || (NAN(dVar1))) &&
     ((param_2[1] != -1.79769313486232e+308 || (NAN(param_2[1]))))) {
    dVar2 = param_2[2];
    dVar3 = *param_1;
    if (dVar1 < *param_1) {
      *param_1 = dVar1;
      param_1[2] = dVar2;
      dVar3 = dVar1;
    }
    dVar4 = param_1[1];
    if (param_1[1] < dVar1) {
      param_1[1] = dVar1;
      param_1[3] = dVar2;
      dVar4 = dVar1;
    }
    dVar2 = param_2[3];
    dVar1 = param_2[1];
    if (dVar1 < dVar3) {
      *param_1 = dVar1;
      param_1[2] = dVar2;
    }
    if (dVar4 < dVar1) {
      param_1[1] = dVar1;
      param_1[3] = dVar2;
    }
  }
  return;
}



// FUNCTION 14752f5ec FUN_14752f5ec body=2408 status=ok
// SIG undefined FUN_14752f5ec(void)

double * FUN_14752f5ec(double *param_1,double *param_2,double param_3,double param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 1.79769313486232e+308;
  param_2[1] = -1.79769313486232e+308;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  cVar1 = *(char *)(param_1 + 10);
  if (param_1 == (double *)0x0 || cVar1 != '\x01') {
    fVar13 = (float)((ulonglong)param_3 >> 0x20);
    fVar11 = (float)((ulonglong)param_4 >> 0x20);
    if (cVar1 != '\x02' || param_1 == (double *)0x0) {
      if (cVar1 == '\x03' && param_1 != (double *)0x0) {
        iVar9 = *(int *)(param_1 + 3);
        auVar18 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
        fVar13 = (fVar13 - auVar18._0_4_) + 0.5 + -0.5;
        auVar17 = ZEXT416((uint)fVar13);
        if (0.99999994 <= fVar13) {
          auVar17 = ZEXT416(0x3f7fffff);
        }
        if (auVar17._0_4_ <= 0.0) {
          auVar6._12_4_ = 0;
          auVar6._0_12_ = auVar17._4_12_;
          auVar17 = auVar6 << 0x20;
        }
        dVar23 = (double)auVar17._0_4_ + (double)((SUB84(param_3,0) - iVar9) + (int)auVar18._0_4_);
        local_c8 = *param_1;
        local_c0 = param_1[1];
        dVar14 = param_1[2];
        dVar15 = local_c8 * dVar23 * dVar23 + local_c0 * dVar23 + dVar14;
        dVar23 = 1.79769313486232e+308;
        if (dVar15 < 1.79769313486232e+308) {
          *param_2 = dVar15;
          param_2[2] = param_3;
          dVar23 = dVar15;
        }
        dVar16 = -1.79769313486232e+308;
        if (-1.79769313486232e+308 < dVar15) {
          param_2[1] = dVar15;
          param_2[3] = param_3;
          dVar16 = dVar15;
        }
        auVar17._4_12_ = SUB1612(ZEXT816(0),4);
        auVar17._0_4_ = fVar11;
        auVar18 = roundps(auVar17,auVar17,1);
        fVar13 = (fVar11 - auVar18._0_4_) + 0.5 + -0.5;
        auVar17 = ZEXT416((uint)fVar13);
        if (0.99999994 <= fVar13) {
          auVar17 = ZEXT416(0x3f7fffff);
        }
        if (auVar17._0_4_ <= 0.0) {
          auVar7._12_4_ = 0;
          auVar7._0_12_ = auVar17._4_12_;
          auVar17 = auVar7 << 0x20;
        }
        dVar15 = (double)auVar17._0_4_ + (double)((SUB84(param_4,0) - iVar9) + (int)auVar18._0_4_);
        dVar14 = dVar14 + local_c8 * dVar15 * dVar15 + local_c0 * dVar15;
        if (dVar14 < dVar23) {
          *param_2 = dVar14;
          param_2[2] = param_4;
          dVar23 = dVar14;
        }
        if (dVar16 < dVar14) {
          param_2[1] = dVar14;
          param_2[3] = param_4;
          dVar16 = dVar14;
        }
        local_c8 = local_c8 + local_c8;
        local_b8 = (double)CONCAT44(local_b8._4_4_,iVar9);
        local_98[0] = 0.0;
        iVar9 = FUN_14752ff56(&local_c8,param_3,param_4);
        if (iVar9 != 0) {
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulonglong)local_98[0] >> 0x20;
          auVar18 = roundps(auVar18,auVar18,1);
          fVar13 = ((float)((ulonglong)local_98[0] >> 0x20) - auVar18._0_4_) + 0.5 + -0.5;
          auVar17 = ZEXT416((uint)fVar13);
          if (0.99999994 <= fVar13) {
            auVar17 = ZEXT416(0x3f7fffff);
          }
          if (auVar17._0_4_ <= 0.0) {
            auVar8._12_4_ = 0;
            auVar8._0_12_ = auVar17._4_12_;
            auVar17 = auVar8 << 0x20;
          }
          dVar14 = (double)auVar17._0_4_ +
                   (double)((SUB84(local_98[0],0) - *(int *)(param_1 + 3)) + (int)auVar18._0_4_);
          dVar14 = dVar14 * param_1[1] + *param_1 * dVar14 * dVar14 + param_1[2];
          if (dVar14 < dVar23) {
            *param_2 = dVar14;
            param_2[2] = local_98[0];
          }
          if (dVar16 < dVar14) {
            param_2[1] = dVar14;
            param_2[3] = local_98[0];
          }
        }
        goto LAB_14752f8b5;
      }
      dVar14 = param_3;
      dVar23 = param_3;
      if (cVar1 == '\x04' && param_1 != (double *)0x0) {
        dVar15 = (double)FUN_14752ffda(param_1,param_3);
        uVar24 = 0xffffffff;
        uVar25 = 0x7fefffff;
        uVar26 = (undefined4)((ulonglong)dVar15 >> 0x20);
        if (1.79769313486232e+308 <= dVar15) {
          dVar23 = 0.0;
        }
        else {
          *param_2 = dVar15;
          param_2[2] = param_3;
          uVar24 = SUB84(dVar15,0);
          uVar25 = uVar26;
        }
        uVar27 = 0xffffffff;
        uVar29 = 0xffefffff;
        if (dVar15 <= -1.79769313486232e+308) {
          dVar14 = 0.0;
        }
        else {
          param_2[1] = dVar15;
          param_2[3] = param_3;
          uVar27 = SUB84(dVar15,0);
          uVar29 = uVar26;
        }
        dVar15 = (double)FUN_14752ffda(param_1,param_4);
        uVar26 = (undefined4)((ulonglong)dVar15 >> 0x20);
        if (dVar15 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar15)
        {
          *param_2 = dVar15;
          param_2[2] = param_4;
          dVar23 = param_4;
          uVar24 = SUB84(dVar15,0);
          uVar25 = uVar26;
        }
        if ((double)CONCAT44(uVar29,uVar27) <= dVar15 && dVar15 != (double)CONCAT44(uVar29,uVar27))
        {
          param_2[1] = dVar15;
          param_2[3] = param_4;
          dVar14 = param_4;
          uVar27 = SUB84(dVar15,0);
          uVar29 = uVar26;
        }
        dVar15 = param_1[4];
        local_b8 = param_1[2] / dVar15;
        local_c0 = (param_1[1] + param_1[1]) / (dVar15 * dVar15);
        local_c8 = (*param_1 * 3.0) / (dVar15 * dVar15 * dVar15);
        local_b0 = (double)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 5));
        local_98[0] = 0.0;
        local_98[1] = 0.0;
        uVar10 = FUN_14753008a(&local_c8,param_3,param_4);
        if (uVar10 == 0) goto LAB_14752f8b5;
        uVar12 = 0;
        uVar26 = uVar24;
        uVar33 = uVar25;
        uVar28 = uVar27;
        uVar30 = uVar29;
        do {
          dVar15 = local_98[uVar12];
          dVar16 = (double)FUN_14752ffda(param_1,dVar15);
          bVar2 = (double)CONCAT44(uVar33,uVar26) != dVar16;
          bVar3 = dVar16 <= (double)CONCAT44(uVar33,uVar26);
          if (bVar3 && bVar2) {
            dVar23 = dVar15;
          }
          dVar21 = dVar16;
          if ((NAN((double)CONCAT44(uVar33,uVar26)) || NAN(dVar16)) || (!bVar3 || !bVar2)) {
            dVar21 = (double)CONCAT44(uVar25,uVar24);
          }
          bVar2 = dVar16 != (double)CONCAT44(uVar30,uVar28);
          bVar3 = (double)CONCAT44(uVar30,uVar28) <= dVar16;
          if (bVar3 && bVar2) {
            dVar14 = dVar15;
          }
          dVar15 = dVar16;
          if ((NAN(dVar16) || NAN((double)CONCAT44(uVar30,uVar28))) || (!bVar3 || !bVar2)) {
            dVar15 = (double)CONCAT44(uVar29,uVar27);
          }
          dVar22 = dVar16;
          if ((double)CONCAT44(uVar33,uVar26) <= dVar16) {
            dVar22 = (double)CONCAT44(uVar33,uVar26);
          }
          if (dVar16 <= (double)CONCAT44(uVar30,uVar28)) {
            dVar16 = (double)CONCAT44(uVar30,uVar28);
          }
          uVar12 = uVar12 + 1;
          uVar27 = SUB84(dVar15,0);
          uVar29 = (undefined4)((ulonglong)dVar15 >> 0x20);
          uVar24 = SUB84(dVar21,0);
          uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
          uVar26 = SUB84(dVar22,0);
          uVar33 = (undefined4)((ulonglong)dVar22 >> 0x20);
          uVar28 = SUB84(dVar16,0);
          uVar30 = (undefined4)((ulonglong)dVar16 >> 0x20);
        } while (uVar10 != uVar12);
      }
      else {
        if (cVar1 != '\x05' || param_1 == (double *)0x0) {
          if (cVar1 == '\x06' && param_1 != (double *)0x0) {
            dVar14 = (double)FUN_1400f028e(param_1,param_3);
            uVar24 = 0xffffffff;
            uVar25 = 0x7fefffff;
            uVar26 = 0;
            uVar27 = 0;
            uVar29 = (undefined4)((ulonglong)dVar14 >> 0x20);
            uVar33 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
            if (1.79769313486232e+308 <= dVar14) {
              dVar23 = 0.0;
            }
            else {
              *param_2 = dVar14;
              param_2[2] = param_3;
              uVar24 = SUB84(dVar14,0);
              uVar25 = uVar29;
              uVar26 = (int)extraout_XMM0_Qb;
              uVar27 = uVar33;
            }
            uVar28 = 0xffffffff;
            uVar30 = 0xffefffff;
            uVar31 = 0;
            uVar32 = 0;
            if (dVar14 <= -1.79769313486232e+308) {
              dVar15 = 0.0;
            }
            else {
              param_2[1] = dVar14;
              param_2[3] = param_3;
              dVar15 = param_3;
              uVar28 = SUB84(dVar14,0);
              uVar30 = uVar29;
              uVar31 = (int)extraout_XMM0_Qb;
              uVar32 = uVar33;
            }
            dVar14 = (double)FUN_1400f028e(param_1,param_4);
            uVar29 = (undefined4)((ulonglong)dVar14 >> 0x20);
            uVar33 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
            if (dVar14 <= (double)CONCAT44(uVar25,uVar24) &&
                (double)CONCAT44(uVar25,uVar24) != dVar14) {
              *param_2 = dVar14;
              param_2[2] = param_4;
              dVar23 = param_4;
              uVar24 = SUB84(dVar14,0);
              uVar25 = uVar29;
              uVar26 = (int)extraout_XMM0_Qb_00;
              uVar27 = uVar33;
            }
            if ((double)CONCAT44(uVar30,uVar28) <= dVar14 &&
                dVar14 != (double)CONCAT44(uVar30,uVar28)) {
              param_2[1] = dVar14;
              param_2[3] = param_4;
              dVar15 = param_4;
              uVar28 = SUB84(dVar14,0);
              uVar30 = uVar29;
              uVar31 = (int)extraout_XMM0_Qb_00;
              uVar32 = uVar33;
            }
            FUN_1475302ec(param_1,&local_c8);
            local_98[0] = 0.0;
            local_98[1] = 0.0;
            uVar10 = FUN_14753008a(&local_c8,param_3,param_4);
            if (uVar10 != 0) {
              uVar12 = 0;
              uVar29 = uVar24;
              uVar33 = uVar25;
              uVar34 = uVar28;
              uVar35 = uVar30;
              do {
                dVar14 = local_98[uVar12];
                dVar16 = (double)FUN_1400f028e(param_1,dVar14);
                bVar2 = (double)CONCAT44(uVar33,uVar29) != dVar16;
                bVar3 = dVar16 <= (double)CONCAT44(uVar33,uVar29);
                if (bVar3 && bVar2) {
                  dVar23 = dVar14;
                }
                auVar19._8_8_ = extraout_XMM0_Qb_01;
                auVar19._0_8_ = dVar16;
                if ((NAN((double)CONCAT44(uVar33,uVar29)) || NAN(dVar16)) || (!bVar3 || !bVar2)) {
                  auVar19._4_4_ = uVar25;
                  auVar19._0_4_ = uVar24;
                  auVar19._12_4_ = uVar27;
                  auVar19._8_4_ = uVar26;
                }
                bVar2 = dVar16 != (double)CONCAT44(uVar35,uVar34);
                bVar3 = (double)CONCAT44(uVar35,uVar34) <= dVar16;
                if (bVar3 && bVar2) {
                  dVar15 = dVar14;
                }
                auVar20._8_8_ = extraout_XMM0_Qb_01;
                auVar20._0_8_ = dVar16;
                if ((NAN(dVar16) || NAN((double)CONCAT44(uVar35,uVar34))) || (!bVar3 || !bVar2)) {
                  auVar20._4_4_ = uVar30;
                  auVar20._0_4_ = uVar28;
                  auVar20._12_4_ = uVar32;
                  auVar20._8_4_ = uVar31;
                }
                dVar14 = dVar16;
                if ((double)CONCAT44(uVar33,uVar29) <= dVar16) {
                  dVar14 = (double)CONCAT44(uVar33,uVar29);
                }
                if (dVar16 <= (double)CONCAT44(uVar35,uVar34)) {
                  dVar16 = (double)CONCAT44(uVar35,uVar34);
                }
                uVar12 = uVar12 + 1;
                uVar28 = auVar20._0_4_;
                uVar30 = auVar20._4_4_;
                uVar31 = auVar20._8_4_;
                uVar32 = auVar20._12_4_;
                uVar24 = auVar19._0_4_;
                uVar25 = auVar19._4_4_;
                uVar26 = auVar19._8_4_;
                uVar27 = auVar19._12_4_;
                uVar29 = SUB84(dVar14,0);
                uVar33 = (undefined4)((ulonglong)dVar14 >> 0x20);
                uVar34 = SUB84(dVar16,0);
                uVar35 = (undefined4)((ulonglong)dVar16 >> 0x20);
              } while (uVar10 != uVar12);
              param_2[2] = dVar23;
              param_2[1] = auVar20._0_8_;
              param_2[3] = dVar15;
              *param_2 = auVar19._0_8_;
            }
            goto LAB_14752f8b5;
          }
          if (cVar1 != '\a' || param_1 == (double *)0x0) goto LAB_14752f8b5;
          dVar14 = (double)FUN_1475303de(param_1,param_3);
          uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
          uVar24 = 0xffffffff;
          uVar25 = 0x7fefffff;
          if (dVar14 < 1.79769313486232e+308) {
            *param_2 = dVar14;
            param_2[2] = param_3;
            uVar24 = SUB84(dVar14,0);
            uVar25 = uVar26;
          }
          uVar27 = 0xffffffff;
          uVar29 = 0xffefffff;
          if (-1.79769313486232e+308 < dVar14) {
            param_2[1] = dVar14;
            param_2[3] = param_3;
            uVar27 = SUB84(dVar14,0);
            uVar29 = uVar26;
          }
          dVar14 = (double)FUN_1475303de(param_1,param_4);
          if (dVar14 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar14
             ) {
            *param_2 = dVar14;
            param_2[2] = param_4;
          }
          if (dVar14 < (double)CONCAT44(uVar29,uVar27) || dVar14 == (double)CONCAT44(uVar29,uVar27))
          goto LAB_14752f8b5;
          goto LAB_14752f8ac;
        }
        dVar15 = (double)FUN_14753018a(param_1,param_3);
        uVar24 = 0xffffffff;
        uVar25 = 0x7fefffff;
        uVar26 = (undefined4)((ulonglong)dVar15 >> 0x20);
        if (1.79769313486232e+308 <= dVar15) {
          dVar23 = 0.0;
        }
        else {
          *param_2 = dVar15;
          param_2[2] = param_3;
          uVar24 = SUB84(dVar15,0);
          uVar25 = uVar26;
        }
        uVar27 = 0xffffffff;
        uVar29 = 0xffefffff;
        if (dVar15 <= -1.79769313486232e+308) {
          dVar14 = 0.0;
        }
        else {
          param_2[1] = dVar15;
          param_2[3] = param_3;
          uVar27 = SUB84(dVar15,0);
          uVar29 = uVar26;
        }
        dVar15 = (double)FUN_14753018a(param_1,param_4);
        uVar26 = (undefined4)((ulonglong)dVar15 >> 0x20);
        if (dVar15 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar15)
        {
          *param_2 = dVar15;
          param_2[2] = param_4;
          dVar23 = param_4;
          uVar24 = SUB84(dVar15,0);
          uVar25 = uVar26;
        }
        if ((double)CONCAT44(uVar29,uVar27) <= dVar15 && dVar15 != (double)CONCAT44(uVar29,uVar27))
        {
          param_2[1] = dVar15;
          param_2[3] = param_4;
          dVar14 = param_4;
          uVar27 = SUB84(dVar15,0);
          uVar29 = uVar26;
        }
        local_a8 = param_1[5];
        local_b0 = param_1[3];
        local_b8 = param_1[2] + param_1[2];
        local_c0 = param_1[1] * 3.0;
        local_c8 = *param_1 * 4.0;
        local_a0 = *(undefined4 *)(param_1 + 6);
        local_98[0] = 0.0;
        local_98[1] = 0.0;
        local_98[2] = 0.0;
        uVar10 = FUN_147530254(&local_c8,param_3,param_4);
        if ((int)uVar10 < 1) goto LAB_14752f8b5;
        uVar12 = 0;
        uVar26 = uVar24;
        uVar33 = uVar25;
        uVar28 = uVar27;
        uVar30 = uVar29;
        do {
          dVar15 = local_98[uVar12];
          dVar16 = (double)FUN_14753018a(param_1,dVar15);
          bVar2 = (double)CONCAT44(uVar33,uVar26) != dVar16;
          bVar3 = dVar16 <= (double)CONCAT44(uVar33,uVar26);
          if (bVar3 && bVar2) {
            dVar23 = dVar15;
          }
          dVar21 = dVar16;
          if ((NAN((double)CONCAT44(uVar33,uVar26)) || NAN(dVar16)) || (!bVar3 || !bVar2)) {
            dVar21 = (double)CONCAT44(uVar25,uVar24);
          }
          bVar2 = dVar16 != (double)CONCAT44(uVar30,uVar28);
          bVar3 = (double)CONCAT44(uVar30,uVar28) <= dVar16;
          if (bVar3 && bVar2) {
            dVar14 = dVar15;
          }
          dVar15 = dVar16;
          if ((NAN(dVar16) || NAN((double)CONCAT44(uVar30,uVar28))) || (!bVar3 || !bVar2)) {
            dVar15 = (double)CONCAT44(uVar29,uVar27);
          }
          dVar22 = dVar16;
          if ((double)CONCAT44(uVar33,uVar26) <= dVar16) {
            dVar22 = (double)CONCAT44(uVar33,uVar26);
          }
          if (dVar16 <= (double)CONCAT44(uVar30,uVar28)) {
            dVar16 = (double)CONCAT44(uVar30,uVar28);
          }
          uVar12 = uVar12 + 1;
          uVar27 = SUB84(dVar15,0);
          uVar29 = (undefined4)((ulonglong)dVar15 >> 0x20);
          uVar24 = SUB84(dVar21,0);
          uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
          uVar26 = SUB84(dVar22,0);
          uVar33 = (undefined4)((ulonglong)dVar22 >> 0x20);
          uVar28 = SUB84(dVar16,0);
          uVar30 = (undefined4)((ulonglong)dVar16 >> 0x20);
        } while (uVar10 != uVar12);
      }
      *param_2 = dVar21;
      param_2[2] = dVar23;
      param_2[1] = dVar15;
      param_2[3] = dVar14;
      goto LAB_14752f8b5;
    }
    auVar17 = roundps(in_XMM1,ZEXT416((uint)fVar13),1);
    iVar9 = *(int *)(param_1 + 2);
    dVar23 = *param_1;
    fVar13 = (fVar13 - auVar17._0_4_) + 0.5 + -0.5;
    auVar18 = ZEXT416((uint)fVar13);
    if (0.99999994 <= fVar13) {
      auVar18 = ZEXT416(0x3f7fffff);
    }
    if (auVar18._0_4_ <= 0.0) {
      auVar4._12_4_ = 0;
      auVar4._0_12_ = auVar18._4_12_;
      auVar18 = auVar4 << 0x20;
    }
    dVar14 = param_1[1];
    dVar16 = ((double)auVar18._0_4_ + (double)((SUB84(param_3,0) - iVar9) + (int)auVar17._0_4_)) *
             dVar23 + dVar14;
    dVar15 = 1.79769313486232e+308;
    if (dVar16 < 1.79769313486232e+308) {
      *param_2 = dVar16;
      param_2[2] = param_3;
      dVar15 = dVar16;
    }
    dVar21 = -1.79769313486232e+308;
    if (-1.79769313486232e+308 < dVar16) {
      param_2[1] = dVar16;
      param_2[3] = param_3;
      dVar21 = dVar16;
    }
    auVar18 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),1);
    fVar13 = (fVar11 - auVar18._0_4_) + 0.5 + -0.5;
    auVar17 = ZEXT416((uint)fVar13);
    if (0.99999994 <= fVar13) {
      auVar17 = ZEXT416(0x3f7fffff);
    }
    if (auVar17._0_4_ <= 0.0) {
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auVar17._4_12_;
      auVar17 = auVar5 << 0x20;
    }
    dVar14 = dVar23 * ((double)auVar17._0_4_ +
                      (double)((SUB84(param_4,0) - iVar9) + (int)auVar18._0_4_)) + dVar14;
    if (dVar14 < dVar15) {
      *param_2 = dVar14;
      param_2[2] = param_4;
    }
    if (dVar14 <= dVar21) goto LAB_14752f8b5;
  }
  else {
    dVar14 = *param_1;
    dVar23 = 1.79769313486232e+308;
    if (dVar14 < 1.79769313486232e+308) {
      *param_2 = dVar14;
      param_2[2] = param_3;
      dVar23 = dVar14;
    }
    dVar15 = -1.79769313486232e+308;
    if (-1.79769313486232e+308 < dVar14) {
      param_2[1] = dVar14;
      param_2[3] = param_3;
      dVar15 = dVar14;
    }
    if (dVar14 < dVar23) {
      *param_2 = dVar14;
      param_2[2] = param_4;
    }
    if (dVar14 <= dVar15) goto LAB_14752f8b5;
  }
LAB_14752f8ac:
  param_2[1] = dVar14;
  param_2[3] = param_4;
LAB_14752f8b5:
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14752ff56 FUN_14752ff56 body=132 status=ok
// SIG undefined FUN_14752ff56(void)

undefined8 FUN_14752ff56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  dVar1 = *(double *)(param_1 + 8);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    iVar2 = FUN_147530a32(dVar1,0,param_4);
    if (iVar2 != 0) {
      iVar2 = (int)*param_4;
      fVar4 = (float)((ulonglong)*param_4 >> 0x20);
      if (((int)param_2 < iVar2) ||
         ((iVar2 == (int)param_2 && ((float)((ulonglong)param_2 >> 0x20) <= fVar4)))) {
        if (iVar2 < (int)param_3) {
          return 1;
        }
        if ((iVar2 == (int)param_3) && (fVar4 < (float)((ulonglong)param_3 >> 0x20))) {
          return 1;
        }
      }
    }
    uVar3 = 0;
  }
  else {
    *param_4 = param_2;
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14752ffda FUN_14752ffda body=176 status=ok
// SIG undefined FUN_14752ffda(void)

double FUN_14752ffda(double *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar4 [16];
  
  if (1e-08 < ABS(param_1[4])) {
    fVar2 = (float)((ulonglong)param_2 >> 0x20);
    auVar4._4_12_ = SUB1612(ZEXT816(0),4);
    auVar4._0_4_ = fVar2;
    auVar5 = roundps(auVar4,auVar4,1);
    fVar2 = (fVar2 - auVar5._0_4_) + 0.5 + -0.5;
    auVar4 = ZEXT416((uint)fVar2);
    if (0.99999994 <= fVar2) {
      auVar4 = ZEXT416(0x3f7fffff);
    }
    if (auVar4._0_4_ <= 0.0) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = auVar4._4_12_;
      auVar4 = auVar1 << 0x20;
    }
    dVar3 = ((double)auVar4._0_4_ +
            (double)(((int)param_2 - *(int *)(param_1 + 5)) + (int)auVar5._0_4_)) / param_1[4];
    return dVar3 * param_1[2] + *param_1 * dVar3 * dVar3 * dVar3 + param_1[1] * dVar3 * dVar3 +
           param_1[3];
  }
  return *param_1;
}



// FUNCTION 14753008a FUN_14753008a body=256 status=ok
// SIG undefined FUN_14753008a(void)

int FUN_14753008a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar4;
  
  FUN_147530b42(param_1,param_2,param_4);
  iVar2 = (int)*param_4;
  iVar7 = (int)param_2;
  iVar8 = (int)param_3;
  fVar3 = (float)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)((ulonglong)param_3 >> 0x20);
  if (((iVar2 < iVar7) ||
      (((fVar6 = (float)((ulonglong)*param_4 >> 0x20), iVar2 == iVar7 && (fVar6 < fVar3)) ||
       (iVar8 < iVar2)))) || ((iVar2 == iVar8 && (fVar4 <= fVar6)))) {
    uVar1 = param_4[1];
    iVar2 = 0;
    iVar5 = (int)uVar1;
    if ((iVar7 <= iVar5) &&
       ((((fVar6 = (float)((ulonglong)uVar1 >> 0x20), iVar5 != iVar7 || (fVar3 <= fVar6)) &&
         (iVar5 <= iVar8)) && ((iVar5 != iVar8 || (iVar2 = 0, fVar6 < fVar4)))))) {
      *param_4 = uVar1;
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
    iVar5 = (int)param_4[1];
    if (iVar7 <= iVar5) {
      fVar6 = (float)((ulonglong)param_4[1] >> 0x20);
      if ((iVar5 <= iVar8) && (iVar5 != iVar7 || fVar3 <= fVar6)) {
        iVar2 = 2 - (uint)(fVar4 <= fVar6 && iVar5 == iVar8);
      }
    }
  }
  return iVar2;
}



// FUNCTION 14753018a FUN_14753018a body=201 status=ok
// SIG undefined FUN_14753018a(void)

double FUN_14753018a(double *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar4 [16];
  
  if (1e-08 < ABS(param_1[5])) {
    fVar2 = (float)((ulonglong)param_2 >> 0x20);
    auVar4._4_12_ = SUB1612(ZEXT816(0),4);
    auVar4._0_4_ = fVar2;
    auVar5 = roundps(auVar4,auVar4,1);
    fVar2 = (fVar2 - auVar5._0_4_) + 0.5 + -0.5;
    auVar4 = ZEXT416((uint)fVar2);
    if (0.99999994 <= fVar2) {
      auVar4 = ZEXT416(0x3f7fffff);
    }
    if (auVar4._0_4_ <= 0.0) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = auVar4._4_12_;
      auVar4 = auVar1 << 0x20;
    }
    dVar3 = ((double)auVar4._0_4_ +
            (double)(((int)param_2 - *(int *)(param_1 + 6)) + (int)auVar5._0_4_)) / param_1[5];
    return dVar3 * param_1[3] +
           param_1[2] * dVar3 * dVar3 +
           *param_1 * dVar3 * dVar3 * dVar3 * dVar3 + param_1[1] * dVar3 * dVar3 * dVar3 +
           param_1[4];
  }
  return *param_1;
}



// FUNCTION 147530254 FUN_147530254 body=152 status=ok
// SIG undefined FUN_147530254(void)

ulonglong FUN_147530254(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  
  uVar2 = FUN_147530d7c(param_1,param_2,param_4);
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = *(undefined8 *)(param_4 + uVar4 * 8);
      iVar5 = (int)uVar1;
      fVar6 = (float)((ulonglong)uVar1 >> 0x20);
      if ((((int)param_2 < iVar5) ||
          ((iVar5 == (int)param_2 && ((float)((ulonglong)param_2 >> 0x20) <= fVar6)))) &&
         ((iVar5 < (int)param_3 ||
          ((iVar5 == (int)param_3 && (fVar6 <= (float)((ulonglong)param_3 >> 0x20))))))) {
        if (uVar4 != uVar3) {
          *(undefined8 *)(param_4 + (longlong)(int)uVar3 * 8) = uVar1;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  return uVar3;
}



// FUNCTION 1475302ec FUN_1475302ec body=242 status=ok
// SIG undefined FUN_1475302ec(void)

double * FUN_1475302ec(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  double dVar5;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar5 = (param_1[3] * 3.0 + dVar2 * 3.0 + dVar3 * -6.0) * (1.0 / (dVar1 * dVar1));
  uVar4 = *(undefined4 *)(param_1 + 5);
  *param_2 = (param_1[3] * -3.0 + (dVar3 * 3.0 - dVar2) + param_1[4]) *
             (1.0 / (dVar1 * dVar1 * dVar1)) * 3.0;
  param_2[1] = dVar5 + dVar5;
  param_2[2] = (1.0 / dVar1) * 3.0 * (dVar3 - dVar2);
  *(undefined4 *)(param_2 + 3) = uVar4;
  return param_2;
}



// FUNCTION 1475303de FUN_1475303de body=588 status=ok
// SIG undefined FUN_1475303de(void)

double FUN_1475303de(double *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  float fVar4;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  double *local_a0;
  double local_98 [4];
  double local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined1 auVar5 [16];
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  auVar7 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),1);
  iVar2 = *(int *)(param_1 + 9);
  fVar4 = (fVar4 - auVar7._0_4_) + 0.5 + -0.5;
  auVar5 = ZEXT416((uint)fVar4);
  if (0.99999994 <= fVar4) {
    auVar5 = ZEXT416(0x3f7fffff);
  }
  if (auVar5._0_4_ <= 0.0) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = auVar5._4_12_;
    auVar5 = auVar1 << 0x20;
  }
  dVar8 = *param_1;
  local_a8 = local_70;
  local_b0 = local_68;
  local_b8 = local_60;
  local_a0 = &local_78;
  FUN_147a3e199(local_b0,param_1[2],param_1[6],0x3ff0000000000000);
  local_78 = local_78 -
             ((double)auVar5._0_4_ + (double)(((int)param_2 - iVar2) + (int)auVar7._0_4_)) / dVar8;
  iVar2 = FUN_147a3de2a(&local_78,local_98);
  if (iVar2 != 1) {
    local_98[0] = -1.79769313486232e+308;
    lVar3 = 0;
    do {
      dVar8 = *(double *)((longlong)local_98 + lVar3);
      if (((0.0 < dVar8) || (ABS(dVar8) <= 1e-08)) &&
         ((dVar8 < 1.0 || (ABS(dVar8 + -1.0) <= 1e-08)))) {
        dVar10 = dVar8;
        if (dVar8 <= local_98[0]) {
          dVar10 = local_98[0];
        }
        local_98[0] = (double)(-(ulonglong)(local_98[0] < 0.0) & (ulonglong)dVar8 |
                              ~-(ulonglong)(local_98[0] < 0.0) & (ulonglong)dVar10);
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x18);
    if ((local_98[0] == -1.79769313486232e+308) && (!NAN(local_98[0]))) {
      local_98[0] = 0.0;
    }
  }
  dVar8 = param_1[3];
  dVar10 = param_1[7];
  dVar6 = (double)(float)local_98[0];
  dVar9 = (dVar10 - dVar8) * dVar6 + dVar8;
  dVar8 = (dVar8 - param_1[1]) * dVar6 + param_1[1];
  dVar8 = (dVar9 - dVar8) * dVar6 + dVar8;
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (((((param_1[5] - dVar10) * dVar6 + dVar10) - dVar9) * dVar6 + dVar9) - dVar8) * dVar6 +
         dVar8;
}



// FUNCTION 14753062c FUN_14753062c body=213 status=ok
// SIG undefined FUN_14753062c(void)

void FUN_14753062c(double *param_1,double param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 10);
  if (param_1 == (double *)0x0 || cVar1 != '\x01') {
    if (cVar1 == '\x02' && param_1 != (double *)0x0) {
      param_1 = param_1 + 1;
    }
    else if (cVar1 == '\x03' && param_1 != (double *)0x0) {
      param_1 = param_1 + 2;
    }
    else if (cVar1 == '\x04' && param_1 != (double *)0x0) {
      param_1 = param_1 + 3;
    }
    else {
      if (cVar1 != '\x05' || param_1 == (double *)0x0) {
        if (cVar1 != '\x06' || param_1 == (double *)0x0) {
          if (cVar1 != '\a' || param_1 == (double *)0x0) {
            return;
          }
          param_1[1] = param_1[1] + param_2;
          param_1 = param_1 + 5;
          goto LAB_1475306bc;
        }
        param_1[1] = param_1[1] + param_2;
        param_1[2] = param_1[2] + param_2;
        param_1[3] = param_1[3] + param_2;
      }
      param_1 = param_1 + 4;
    }
  }
LAB_1475306bc:
  *param_1 = param_2 + *param_1;
  return;
}



// FUNCTION 147530702 FUN_147530702 body=510 status=ok
// SIG undefined FUN_147530702(void)

double * FUN_147530702(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_98 [40];
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = *(char *)(param_1 + 10);
  if (param_1 == (double *)0x0 || cVar5 != '\x01') {
    if (cVar5 == '\x02' && param_1 != (double *)0x0) {
      dVar7 = *param_1;
      dVar1 = param_1[1];
      uVar6 = *(undefined4 *)(param_1 + 2);
      dVar8 = param_1[0xb];
      *(undefined1 *)(param_2 + 10) = 3;
      *param_2 = dVar7 * 0.5;
      param_2[1] = dVar1;
      param_2[2] = param_3;
      *(undefined4 *)(param_2 + 3) = uVar6;
      goto LAB_1475307a0;
    }
    if (cVar5 == '\x03' && param_1 != (double *)0x0) {
      dVar7 = param_1[2];
      dVar1 = *param_1;
      dVar2 = param_1[1];
      uVar6 = *(undefined4 *)(param_1 + 3);
      dVar8 = param_1[0xb];
      *(undefined1 *)(param_2 + 10) = 4;
      *param_2 = dVar1 / 3.0;
      param_2[1] = dVar2 * 0.5;
      param_2[2] = dVar7;
      param_2[3] = param_3;
      param_2[4] = 1.0;
      *(undefined4 *)(param_2 + 5) = uVar6;
      goto LAB_1475307a0;
    }
    if (cVar5 == '\x04' && param_1 != (double *)0x0) {
      dVar7 = param_1[4];
      dVar1 = param_1[3];
      dVar2 = param_1[2];
      dVar3 = param_1[1];
      dVar4 = *param_1;
      uVar6 = *(undefined4 *)(param_1 + 5);
      dVar8 = param_1[0xb];
      *(undefined1 *)(param_2 + 10) = 5;
      *param_2 = dVar4 * dVar7 * 0.25;
      param_2[1] = (dVar3 * dVar7) / 3.0;
      param_2[2] = dVar2 * dVar7 * 0.5;
      param_2[3] = dVar1 * dVar7;
      param_2[4] = param_3;
      param_2[5] = dVar7;
      *(undefined4 *)(param_2 + 6) = uVar6;
      goto LAB_1475307a0;
    }
    if (cVar5 != '\x06' || param_1 == (double *)0x0) {
      *(undefined1 *)(param_2 + 0xc) = 0;
      goto LAB_1475307a8;
    }
    FUN_147530902(param_1,&local_70);
    dVar7 = param_1[0xb];
    *(undefined1 *)(param_2 + 10) = 5;
    *param_2 = local_70;
    param_2[1] = dStack_68;
    param_2[2] = local_60;
    param_2[3] = dStack_58;
    *(undefined4 *)(param_2 + 4) = local_50;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_4c;
    *(undefined4 *)(param_2 + 5) = uStack_48;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_44;
    param_2[6] = local_40;
    param_2[0xb] = dVar7;
  }
  else {
    dVar7 = *param_1;
    uVar6 = *(undefined4 *)(param_1 + 1);
    dVar8 = param_1[0xb];
    *(undefined1 *)(param_2 + 10) = 2;
    *param_2 = dVar7;
    param_2[1] = param_3;
    *(undefined4 *)(param_2 + 2) = uVar6;
LAB_1475307a0:
    param_2[0xb] = dVar8;
  }
  *(undefined1 *)(param_2 + 0xc) = 1;
LAB_1475307a8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147530902 FUN_147530902 body=303 status=ok
// SIG undefined FUN_147530902(void)

void FUN_147530902(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  uVar5 = *(undefined4 *)(param_1 + 5);
  *param_2 = (dVar4 * -3.0 + (dVar3 * 3.0 - dVar2) + param_1[4]) * (1.0 / (dVar1 * dVar1 * dVar1)) *
             0.25;
  param_2[1] = ((dVar4 * 3.0 + dVar2 * 3.0 + dVar3 * -6.0) * (1.0 / (dVar1 * dVar1))) / 3.0;
  param_2[2] = (dVar3 - dVar2) * (1.0 / dVar1) * 3.0 * 0.5;
  param_2[3] = dVar2;
  param_2[4] = param_3;
  param_2[5] = 1.0;
  *(undefined4 *)(param_2 + 6) = uVar5;
  return;
}



// FUNCTION 147530a32 FUN_147530a32 body=271 status=ok
// SIG undefined FUN_147530a32(void)

undefined8 FUN_147530a32(double *param_1,double param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = *param_1;
  if ((dVar5 != 0.0) || (NAN(dVar5))) {
    dVar5 = (param_2 - param_1[1]) / dVar5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar5;
    auVar4 = roundpd(auVar4,auVar4,1);
    dVar3 = auVar4._0_8_;
    dVar5 = dVar5 - dVar3;
    if (2147483647.0 <= dVar3) {
      dVar3 = 2147483647.0;
    }
    if (dVar3 <= -2147483648.0) {
      dVar3 = -2147483648.0;
    }
    fVar2 = (float)dVar5;
    if (0.99999994 <= fVar2) {
      fVar2 = 0.99999994;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = fVar2 + 0.5 + -0.5;
    if (0.99999994 <= fVar2) {
      fVar2 = 0.99999994;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar2),9);
    iVar1 = ((int)ROUND(fVar2 + fVar2 + -0.5) >> 1) + *(int *)(param_1 + 2) + (int)dVar3;
    fVar2 = fVar2 - auVar4._0_4_;
  }
  else {
    dVar5 = param_1[1];
    if ((dVar5 != param_2) || (NAN(dVar5) || NAN(param_2))) {
      return 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar5;
    auVar4 = roundpd(auVar6,auVar6,1);
    dVar3 = auVar4._0_8_;
    dVar5 = dVar5 - dVar3;
    if (2147483647.0 <= dVar3) {
      dVar3 = 2147483647.0;
    }
    if (dVar3 <= -2147483648.0) {
      dVar3 = -2147483648.0;
    }
    iVar1 = (int)dVar3;
    fVar2 = (float)dVar5;
    if (0.99999994 <= fVar2) {
      fVar2 = 0.99999994;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  fVar2 = fVar2 + 0.5 + -0.5;
  if (0.99999994 <= fVar2) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_3 = iVar1;
  param_3[1] = (int)fVar2;
  return 1;
}



// FUNCTION 147530b42 FUN_147530b42 body=569 status=ok
// SIG undefined FUN_147530b42(void)

void FUN_147530b42(double *param_1,double param_2,int *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar13;
  undefined1 auVar9 [16];
  double dVar8;
  undefined1 auVar10 [16];
  undefined1 auVar12 [12];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  dVar8 = param_1[2];
  iVar1 = *(int *)(param_1 + 3);
  dVar7 = param_1[1];
  uVar13 = 0;
  dVar6 = dVar7 * dVar7 + *param_1 * -4.0 * (dVar8 - param_2);
  if (dVar6 < 0.0) {
    dVar6 = sqrt(dVar6);
    uVar13 = extraout_XMM0_Qb;
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  dVar7 = (dVar6 - dVar7) / (*param_1 + *param_1);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar7;
  auVar15 = roundpd(auVar14,auVar14,1);
  dVar6 = auVar15._0_8_;
  auVar15._0_8_ = dVar7 - dVar6;
  auVar15._8_8_ = uVar13;
  if (2147483647.0 <= dVar6) {
    dVar6 = 2147483647.0;
  }
  if (dVar6 <= -2147483648.0) {
    dVar6 = -2147483648.0;
  }
  auVar9._4_12_ = auVar15._4_12_;
  fVar4 = (float)auVar15._0_8_;
  if (0.99999994 <= fVar4) {
    fVar4 = 0.99999994;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = fVar4 + 0.5 + -0.5;
  if (0.99999994 <= fVar4) {
    fVar4 = 0.99999994;
  }
  auVar9._0_4_ = fVar4;
  if (fVar4 <= 0.0) {
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar9._4_12_;
    auVar9 = auVar2 << 0x20;
  }
  fVar4 = auVar9._0_4_;
  auVar15 = roundss(ZEXT416(0),auVar9,9);
  fVar5 = (fVar4 - auVar15._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *param_3 = ((int)ROUND(fVar4 + fVar4 + -0.5) >> 1) + iVar1 + (int)dVar6;
  param_3[1] = (int)fVar5;
  iVar1 = *(int *)(param_1 + 3);
  dVar7 = param_1[1];
  dVar8 = dVar7 * dVar7 + (dVar8 - param_2) * *param_1 * -4.0;
  if (dVar8 < 0.0) {
    dVar8 = sqrt(dVar8);
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  dVar8 = (-dVar7 - dVar8) / (*param_1 + *param_1);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar8;
  auVar15 = roundpd(auVar10,auVar10,1);
  dVar7 = auVar15._0_8_;
  dVar8 = dVar8 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  fVar4 = (float)dVar8;
  auVar12 = (undefined1  [12])0x0;
  if (0.99999994 <= fVar4) {
    auVar12 = ZEXT812(0);
    fVar4 = 0.99999994;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = fVar4 + 0.5 + -0.5;
  if (0.99999994 <= fVar4) {
    fVar4 = 0.99999994;
  }
  auVar11._4_12_ = auVar12;
  auVar11._0_4_ = fVar4;
  if (fVar4 <= 0.0) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar12;
    auVar11 = auVar3 << 0x20;
  }
  fVar4 = auVar11._0_4_;
  auVar15 = roundss(ZEXT416(0),auVar11,9);
  fVar5 = (fVar4 - auVar15._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_3[2] = ((int)ROUND(fVar4 + fVar4 + -0.5) >> 1) + iVar1 + (int)dVar7;
  param_3[3] = (int)fVar5;
  return;
}



// FUNCTION 147530d7c FUN_147530d7c body=411 status=ok
// SIG undefined FUN_147530d7c(void)

void FUN_147530d7c(undefined8 *param_1,double param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_a8 [32];
  double local_88 [4];
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (double)param_1[3] - param_2;
  local_60 = param_1[2];
  local_58 = param_1[1];
  local_50 = *param_1;
  uVar3 = FUN_147a3de2a();
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_88[uVar4];
      auVar8 = roundpd(auVar8,auVar8,1);
      dVar7 = auVar8._0_8_;
      dVar2 = local_88[uVar4] - dVar7;
      if (2147483647.0 <= dVar7) {
        dVar7 = 2147483647.0;
      }
      if (dVar7 <= -2147483648.0) {
        dVar7 = -2147483648.0;
      }
      fVar5 = (float)dVar2;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar5 = fVar5 + 0.5 + -0.5;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      dVar2 = ((double)fVar5 + (double)(int)dVar7) * (double)param_1[4];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar2;
      auVar8 = roundpd(auVar9,auVar9,1);
      dVar7 = auVar8._0_8_;
      dVar2 = dVar2 - dVar7;
      if (2147483647.0 <= dVar7) {
        dVar7 = 2147483647.0;
      }
      if (dVar7 <= -2147483648.0) {
        dVar7 = -2147483648.0;
      }
      fVar5 = (float)dVar2;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar5 = fVar5 + 0.5 + -0.5;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      auVar1._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar1._0_4_ = fVar5;
      auVar1._8_8_ = 0;
      auVar8 = roundss(ZEXT416(0),auVar1,9);
      fVar6 = (fVar5 - auVar8._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(int *)(param_3 + uVar4 * 8) =
           ((int)ROUND(fVar5 + fVar5 + -0.5) >> 1) + *(int *)(param_1 + 5) + (int)dVar7;
      *(float *)(param_3 + 4 + uVar4 * 8) = fVar6;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147530f18 FUN_147530f18 body=1490 status=ok
// SIG undefined FUN_147530f18(void)

uint FUN_147530f18(double *param_1,double param_2,int *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar24;
  undefined1 auVar16 [16];
  double dVar14;
  undefined1 auVar17 [16];
  undefined1 auVar23 [12];
  undefined1 auVar18 [16];
  double dVar15;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_138 [32];
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar14 = *param_1;
  dVar1 = param_1[1] / dVar14;
  dVar12 = param_1[2] / dVar14;
  dVar11 = dVar1 * 3.0 * dVar1;
  dVar15 = dVar12 - dVar11 * 0.125;
  dVar13 = dVar1 * dVar1 * dVar1 * 0.125 + dVar1 * dVar12 * -0.5 + param_1[3] / dVar14;
  local_f8 = -dVar13 * dVar13;
  local_f0 = dVar15 * dVar15 +
             (dVar11 * dVar1 * dVar1 * -0.00390625 +
             dVar1 * dVar1 * dVar12 * 0.0625 +
             (param_1[3] / dVar14) * dVar1 * -0.25 + (param_1[4] - param_2) / dVar14) * -4.0;
  local_e8 = dVar15 + dVar15;
  local_e0 = 0x3ff0000000000000;
  iVar6 = FUN_147a3de2a(&local_f8,local_118);
  if (iVar6 < 1) {
    uVar7 = 0;
  }
  else {
    dVar11 = SQRT(ABS(local_118[0]));
    dVar12 = dVar11 * dVar11;
    dVar14 = (dVar12 * dVar11 + dVar15 * dVar11 + dVar13) / (dVar11 + dVar11);
    dVar15 = (dVar14 - dVar13 / dVar11) * -4.0 + dVar12;
    dVar12 = dVar14 * -4.0 + dVar12;
    dVar1 = dVar1 * 0.25;
    uVar7 = 0;
    if (0.0 <= dVar15) {
      iVar6 = *(int *)(param_1 + 6);
      dVar14 = SQRT(dVar15);
      uVar24 = 0;
      dVar13 = dVar14;
      if (dVar15 < 0.0) {
        dVar13 = sqrt(dVar15);
        uVar24 = extraout_XMM0_Qb;
      }
      dVar13 = (dVar13 - dVar11) * 0.5 - dVar1;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar13;
      auVar27 = roundpd(auVar26,auVar26,1);
      dVar25 = auVar27._0_8_;
      auVar27._0_8_ = dVar13 - dVar25;
      auVar27._8_8_ = uVar24;
      if (2147483647.0 <= dVar25) {
        dVar25 = 2147483647.0;
      }
      if (dVar25 <= -2147483648.0) {
        dVar25 = -2147483648.0;
      }
      auVar16._4_12_ = auVar27._4_12_;
      fVar9 = (float)auVar27._0_8_;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      auVar16._0_4_ = fVar9;
      if (fVar9 <= 0.0) {
        auVar2._12_4_ = 0;
        auVar2._0_12_ = auVar16._4_12_;
        auVar16 = auVar2 << 0x20;
      }
      fVar9 = auVar16._0_4_;
      auVar27 = roundss(ZEXT416(0),auVar16,9);
      fVar10 = (fVar9 - auVar27._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      *param_3 = ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1) + iVar6 + (int)dVar25;
      param_3[1] = (int)fVar10;
      iVar6 = *(int *)(param_1 + 6);
      if (dVar15 < 0.0) {
        dVar14 = sqrt(dVar15);
      }
      dVar14 = (-dVar11 - dVar14) * 0.5 - dVar1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar14;
      auVar27 = roundpd(auVar17,auVar17,1);
      dVar15 = auVar27._0_8_;
      dVar14 = dVar14 - dVar15;
      if (2147483647.0 <= dVar15) {
        dVar15 = 2147483647.0;
      }
      if (dVar15 <= -2147483648.0) {
        dVar15 = -2147483648.0;
      }
      fVar9 = (float)dVar14;
      auVar23 = (undefined1  [12])0x0;
      if (0.99999994 <= fVar9) {
        auVar23 = ZEXT812(0);
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      auVar18._4_12_ = auVar23;
      auVar18._0_4_ = fVar9;
      if (fVar9 <= 0.0) {
        auVar3._12_4_ = 0;
        auVar3._0_12_ = auVar23;
        auVar18 = auVar3 << 0x20;
      }
      fVar9 = auVar18._0_4_;
      auVar27 = roundss(ZEXT416(0),auVar18,9);
      fVar10 = (fVar9 - auVar27._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      param_3[2] = ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1) + iVar6 + (int)dVar15;
      param_3[3] = (int)fVar10;
      uVar7 = 2;
    }
    if (0.0 <= dVar12) {
      iVar6 = *(int *)(param_1 + 6);
      dVar14 = SQRT(dVar12);
      uVar24 = 0;
      dVar15 = dVar14;
      if (dVar12 < 0.0) {
        dVar15 = sqrt(dVar12);
        uVar24 = extraout_XMM0_Qb_00;
      }
      dVar15 = (dVar15 + dVar11) * 0.5 - dVar1;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar15;
      auVar27 = roundpd(auVar28,auVar28,1);
      dVar13 = auVar27._0_8_;
      auVar19._0_8_ = dVar15 - dVar13;
      auVar19._8_8_ = uVar24;
      if (2147483647.0 <= dVar13) {
        dVar13 = 2147483647.0;
      }
      if (dVar13 <= -2147483648.0) {
        dVar13 = -2147483648.0;
      }
      auVar20._4_12_ = auVar19._4_12_;
      fVar9 = (float)auVar19._0_8_;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      auVar20._0_4_ = fVar9;
      if (fVar9 <= 0.0) {
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar20._4_12_;
        auVar20 = auVar4 << 0x20;
      }
      fVar9 = auVar20._0_4_;
      auVar27 = roundss(ZEXT416(0),auVar20,9);
      fVar10 = (fVar9 - auVar27._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      uVar8 = uVar7 | 1;
      param_3[(ulonglong)uVar7 * 2] = ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1) + iVar6 + (int)dVar13;
      param_3[(ulonglong)uVar7 * 2 + 1] = (int)fVar10;
      iVar6 = *(int *)(param_1 + 6);
      if (dVar12 < 0.0) {
        dVar14 = sqrt(dVar12);
      }
      dVar1 = (dVar11 - dVar14) * 0.5 - dVar1;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar1;
      auVar27 = roundpd(auVar21,auVar21,1);
      dVar14 = auVar27._0_8_;
      dVar1 = dVar1 - dVar14;
      if (2147483647.0 <= dVar14) {
        dVar14 = 2147483647.0;
      }
      if (dVar14 <= -2147483648.0) {
        dVar14 = -2147483648.0;
      }
      fVar9 = (float)dVar1;
      auVar23 = (undefined1  [12])0x0;
      if (0.99999994 <= fVar9) {
        auVar23 = ZEXT812(0);
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      auVar22._4_12_ = auVar23;
      auVar22._0_4_ = fVar9;
      if (fVar9 <= 0.0) {
        auVar5._12_4_ = 0;
        auVar5._0_12_ = auVar23;
        auVar22 = auVar5 << 0x20;
      }
      fVar9 = auVar22._0_4_;
      auVar27 = roundss(ZEXT416(0),auVar22,9);
      fVar10 = (fVar9 - auVar27._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      uVar7 = uVar7 + 2;
      param_3[(ulonglong)uVar8 * 2] = ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1) + iVar6 + (int)dVar14;
      param_3[(ulonglong)uVar8 * 2 + 1] = (int)fVar10;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475314ec FUN_1475314ec body=613 status=ok
// SIG undefined FUN_1475314ec(void)

int FUN_1475314ec(double *param_1,double param_2,longlong param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_f8 [32];
  double local_d8 [4];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = param_1[1];
  local_b8 = dVar1 - param_2;
  dVar7 = param_1[2] * 3.0;
  local_b0 = dVar1 * -3.0 + dVar7;
  local_a8 = param_1[3] * 3.0 + dVar1 * 3.0 + param_1[2] * -6.0;
  local_a0 = param_1[3] * -3.0 + (dVar7 - dVar1) + param_1[4];
  uVar3 = FUN_147a3de2a();
  if ((int)uVar3 < 1) {
    iVar4 = 0;
  }
  else {
    uVar5 = 0;
    iVar4 = 0;
    do {
      dVar1 = local_d8[uVar5];
      uVar8 = SUB84(dVar1,0);
      uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if ((-9.99999993922529e-09 <= dVar1) && (dVar1 <= 1.00000001)) {
        if (1.0 <= dVar1) {
          uVar8 = 0;
          uVar11 = 0x3ff00000;
        }
        if ((double)CONCAT44(uVar11,uVar8) <= 0.0) {
          uVar8 = 0;
          uVar11 = 0;
        }
        dVar1 = (double)CONCAT44(uVar11,uVar8) * *param_1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar1;
        auVar12 = roundpd(auVar12,auVar12,1);
        uVar8 = auVar12._0_4_;
        uVar11 = auVar12._4_4_;
        if (2147483647.0 <= auVar12._0_8_) {
          uVar8 = 0xffc00000;
          uVar11 = 0x41dfffff;
        }
        if ((double)CONCAT44(uVar11,uVar8) <= -2147483648.0) {
          uVar8 = 0;
          uVar11 = 0xc1e00000;
        }
        dVar1 = dVar1 - auVar12._0_8_;
        fVar9 = (float)dVar1;
        if (0.99999994 <= fVar9) {
          fVar9 = 0.99999994;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar9 = fVar9 + 0.5 + -0.5;
        if (0.99999994 <= fVar9) {
          fVar9 = 0.99999994;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        auVar2._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
        auVar2._0_4_ = fVar9;
        auVar2._8_8_ = 0;
        auVar12 = roundss(ZEXT416(0),auVar2,9);
        fVar10 = (fVar9 - auVar12._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar10) {
          fVar10 = 0.99999994;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        lVar6 = (longlong)iVar4;
        iVar4 = iVar4 + 1;
        *(int *)(param_3 + lVar6 * 8) =
             ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1) + *(int *)(param_1 + 5) +
             (int)(double)CONCAT44(uVar11,uVar8);
        *(float *)(param_3 + 4 + lVar6 * 8) = fVar10;
      }
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531752 FUN_147531752 body=772 status=ok
// SIG undefined FUN_147531752(void)

int FUN_147531752(double *param_1,double param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar1 = param_1[1];
  dVar2 = param_1[3] * 3.0;
  local_d0 = dVar1 * -3.0 + dVar2;
  local_c0 = param_1[7] * -3.0 + (dVar2 - dVar1) + param_1[5];
  local_d8 = dVar1 - param_2;
  local_c8 = param_1[7] * 3.0 + dVar1 * 3.0 + param_1[3] * -6.0;
  uVar5 = FUN_147a3de2a();
  if ((int)uVar5 < 1) {
    iVar6 = 0;
  }
  else {
    uVar7 = 0;
    fVar9 = 0.0;
    iVar6 = 0;
    do {
      dVar1 = local_f8[uVar7];
      uVar10 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if ((-9.99999993922529e-09 <= dVar1) && (dVar1 <= 1.00000001)) {
        if (1.0 <= dVar1) {
          uVar10 = 0;
          uVar13 = 0x3ff00000;
        }
        if ((double)CONCAT44(uVar13,uVar10) <= 0.0) {
          uVar10 = 0;
          uVar13 = 0;
        }
        dVar1 = param_1[2];
        dVar2 = param_1[6];
        dVar14 = (double)(float)(double)CONCAT44(uVar13,uVar10);
        dVar4 = dVar14 * dVar1 + 0.0;
        dVar1 = (dVar2 - dVar1) * dVar14 + dVar1;
        dVar4 = (dVar1 - dVar4) * dVar14 + dVar4;
        dVar1 = ((((((1.0 - dVar2) * dVar14 + dVar2) - dVar1) * dVar14 + dVar1) - dVar4) * dVar14 +
                dVar4) * *param_1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = dVar1;
        auVar15 = roundpd(auVar15,auVar15,1);
        uVar10 = auVar15._0_4_;
        uVar13 = auVar15._4_4_;
        if (2147483647.0 <= auVar15._0_8_) {
          uVar10 = 0xffc00000;
          uVar13 = 0x41dfffff;
        }
        if ((double)CONCAT44(uVar13,uVar10) <= -2147483648.0) {
          uVar10 = 0;
          uVar13 = 0xc1e00000;
        }
        dVar1 = dVar1 - auVar15._0_8_;
        fVar11 = (float)dVar1;
        if (0.99999994 <= fVar11) {
          fVar11 = 0.99999994;
        }
        if (fVar11 <= 0.0) {
          fVar11 = fVar9;
        }
        fVar11 = fVar11 + 0.5 + -0.5;
        if (0.99999994 <= fVar11) {
          fVar11 = 0.99999994;
        }
        if (fVar11 <= 0.0) {
          fVar11 = fVar9;
        }
        auVar3._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
        auVar3._0_4_ = fVar11;
        auVar3._8_8_ = 0;
        auVar15 = roundss(ZEXT416(0),auVar3,9);
        fVar12 = (fVar11 - auVar15._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar12) {
          fVar12 = 0.99999994;
        }
        if (fVar12 <= 0.0) {
          fVar12 = fVar9;
        }
        lVar8 = (longlong)iVar6;
        iVar6 = iVar6 + 1;
        *(int *)(param_3 + lVar8 * 8) =
             ((int)ROUND(fVar11 + fVar11 + -0.5) >> 1) + *(int *)(param_1 + 9) +
             (int)(double)CONCAT44(uVar13,uVar10);
        *(float *)(param_3 + 4 + lVar8 * 8) = fVar12;
      }
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531a58 FUN_147531a58 body=431 status=ok
// SIG undefined FUN_147531a58(void)

bool FUN_147531a58(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  void **ppvVar1;
  ulonglong uVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_68,0x13);
  uVar8 = local_68 & 0xffffffff;
  if (uVar2 == uVar8) {
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x130))(*(longlong **)(*param_3 + 8),&local_68);
    pvVar3 = pvStack_50;
    local_88 = (undefined4)uStack_60;
    uStack_84 = uStack_60._4_4_;
    uStack_80 = (undefined4)local_58;
    uStack_7c = local_58._4_4_;
    local_78 = (void *)0x0;
    lVar7 = (longlong)(int)(uint)local_48;
    local_70 = (uint)local_48;
    if (lVar7 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_48 & 0xffffffff,0);
      memcpy(local_78,pvVar3,lVar7 * 2);
    }
    iVar4 = local_70;
    pvVar3 = local_78;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = local_88;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_84;
    *(undefined4 *)(param_1 + 2) = uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_7c;
    ppvVar1 = (void **)(param_1 + 3);
    if (ppvVar1 != &local_78) {
      lVar7 = (longlong)local_70;
      *(int *)(param_1 + 4) = local_70;
      if (local_70 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_70);
        if (iVar4 != 0) {
          memcpy(*ppvVar1,pvVar3,lVar7 * 2);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((uint)local_48 < 2) {
      lVar7 = FUN_144a6654a(&local_68);
      if (lVar7 != 0) {
        uVar5 = FUN_144a7757c();
        lVar6 = FUN_144a78ede(lVar7,uVar5);
        if (lVar6 == 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar7);
          }
          param_1[5] = lVar7;
        }
      }
    }
    if (pvStack_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2 == uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531c08 FUN_147531c08 body=19 status=ok
// SIG undefined FUN_147531c08(void)

void FUN_147531c08(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147531c1c();
  return;
}



// FUNCTION 147531c1c FUN_147531c1c body=384 status=ok
// SIG undefined FUN_147531c1c(void)

undefined8 * FUN_147531c1c(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) < 0) {
      FUN_1446f8c06(param_1 + 3,0);
    }
    puVar2 = (undefined2 *)param_1[3];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    uVar4 = FUN_144a7757c();
    lVar5 = FUN_144a78ede(param_2,uVar4);
    if (lVar5 == 0) {
      lVar5 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
    }
    else {
      lVar5 = 0;
    }
    param_1[5] = lVar5;
    FUN_1400bbfae(&local_40,param_2);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 2) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
    if (param_1 + 1 == (undefined8 *)&local_40) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_30;
      local_30 = 0;
      *(undefined4 *)(param_1 + 4) = local_28;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_24;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_147531d7b;
      }
    }
    FUN_14485c47a(param_1,param_2);
  }
LAB_147531d7b:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531d9e FUN_147531d9e body=91 status=ok
// SIG undefined FUN_147531d9e(void)

void FUN_147531d9e(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0xa8;
  local_18 = param_1 + 0x68;
  local_30 = param_1 + 0x58;
  local_20 = param_1;
  FUN_147523910(&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531dfa FUN_147531dfa body=97 status=ok
// SIG undefined FUN_147531dfa(void)

void FUN_147531dfa(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if (0 < (longlong)(int)lVar3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar4 = FUN_147a40458(param_1 + 0xa8,*(undefined4 *)(lVar2 + lVar5 * 4));
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x60))) {
        *(undefined4 *)(lVar1 + lVar5 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 4);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 147531e5c FUN_147531e5c body=113 status=ok
// SIG undefined FUN_147531e5c(void)

void FUN_147531e5c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0xa8;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147531ece(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531ece FUN_147531ece body=96 status=ok
// SIG undefined FUN_147531ece(void)

void FUN_147531ece(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_14754014a(param_1,iVar1,*(undefined4 *)(*param_3 + lVar2 * 4));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 147531f2e FUN_147531f2e body=113 status=ok
// SIG undefined FUN_147531f2e(void)

void FUN_147531f2e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_1 + 0xa8;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_18 = param_1;
  FUN_147531fa0(&local_28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147531fa0 FUN_147531fa0 body=271 status=ok
// SIG undefined FUN_147531fa0(void)

void FUN_147531fa0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined4 local_70 [6];
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      if ((param_1[1] == 0) ||
         (iVar1 = FUN_147a40458(param_1[1],*(undefined4 *)(*param_2 + lVar3 * 4)), iVar1 == -1)) {
        FUN_147a3fc60(local_70);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_70[0];
      }
      else {
        FUN_14753c5f8(local_70,(longlong)iVar1 * 0x30 + *(longlong *)param_1[3]);
        uVar2 = FUN_147540348(param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar1 * 4),
                              local_70);
        if (param_1[1] == 0) {
          FUN_14045d416(&local_74);
        }
        else {
          FUN_147a404c6(param_1[1],&local_74,uVar2);
        }
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_74;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475320b0 FUN_1475320b0 body=270 status=ok
// SIG undefined FUN_1475320b0(void)

void FUN_1475320b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < *(int *)(param_1 + 0x60)) {
    local_40 = 0;
    cVar1 = FUN_140cc21ce(param_1,param_2);
    if (cVar1 != '\0') {
      local_58 = param_1 + 0xa8;
      local_48 = param_1 + 0x68;
      local_98 = 0;
      lStack_90 = 0;
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_60 = param_1 + 0x58;
      local_50 = param_1;
      FUN_147531c1c(&local_98,local_40);
      FUN_1475321c0(&local_60,local_9c,param_2,&local_98);
      if (lStack_80 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lStack_90 = param_1 + 0xa8;
  lStack_80 = param_1 + 0x68;
  local_98 = param_1 + 0x58;
  local_88 = param_1;
  FUN_14753223e(&local_98,param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475321c0 FUN_1475321c0 body=126 status=ok
// SIG undefined FUN_1475321c0(void)

undefined8 FUN_1475321c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_147525ee8(param_1,param_3,0);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_147540348(param_1,param_3,param_4);
  }
  else {
    FUN_14179cae6((ulonglong)uVar1 * 0x30 + **(longlong **)(param_1 + 0x18),param_4);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14045d416(param_2);
  }
  else {
    FUN_147a404c6(*(longlong *)(param_1 + 8),param_2,uVar1);
  }
  return param_2;
}



// FUNCTION 14753223e FUN_14753223e body=329 status=ok
// SIG undefined FUN_14753223e(void)

void FUN_14753223e(undefined8 param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  uStack_80 = 2;
  FUN_147523910(param_1,&local_88,&local_68);
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uStack_60 < 1) {
    uStack_80._0_4_ = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = (int)uStack_60;
    do {
      lVar4 = local_78;
      uVar3 = uStack_80;
      iVar2 = *(int *)(local_68 + lVar6 * 4);
      if (param_3 == '\0') {
        if (param_2 < iVar2) goto LAB_1475322c8;
      }
      else if (iVar2 < param_2) {
LAB_1475322c8:
        iVar5 = (int)uStack_80;
        uVar1 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        if (uStack_80._4_4_ < uVar1) {
          FUN_14065110c(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_88 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
        iVar5 = (int)uStack_60;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_1475323ee(param_1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147532388 FUN_147532388 body=100 status=ok
// SIG undefined FUN_147532388(void)

void FUN_147532388(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1 + 0xa8;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_18 = param_1;
  FUN_1475323ee(&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475323ee FUN_1475323ee body=80 status=ok
// SIG undefined FUN_1475323ee(void)

void FUN_1475323ee(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (iVar1 = FUN_147a40458(*(longlong *)(param_1 + 8),*(undefined4 *)(*param_2 + lVar2 * 4)),
         iVar1 != -1)) {
        FUN_147540420(param_1,iVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14753243e FUN_14753243e body=89 status=ok
// SIG undefined FUN_14753243e(void)

void FUN_14753243e(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0xa8;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_147524082(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475324d0 FUN_1475324d0 body=89 status=ok
// SIG undefined FUN_1475324d0(void)

void FUN_1475324d0(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0xa8;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_14753252a(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753252a FUN_14753252a body=336 status=ok
// SIG undefined FUN_14753252a(void)

void FUN_14753252a(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_1[2];
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x28) != 0)) {
    lVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x20) + 8 + lVar7) != 0) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x20) + lVar7) != 0)) {
        local_48 = 0;
        uStack_40 = 0;
        plVar6 = (longlong *)*param_1;
        if (0 < (int)plVar6[1]) {
          lVar8 = 0;
          do {
            uVar4 = uStack_40;
            uVar2 = *(uint *)(*plVar6 + lVar8 * 4);
            lVar7 = (longlong)(int)uStack_40;
            uVar5 = (int)uStack_40 + 1;
            uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
            if (uStack_40._4_4_ < uVar5) {
              FUN_14753e66a(&local_48,uVar4 & 0xffffffff);
            }
            *(ulonglong *)(local_48 + lVar7 * 8) = ((ulonglong)uVar2 << 0x20) + lVar8;
            lVar8 = lVar8 + 1;
            plVar6 = (longlong *)*param_1;
          } while (lVar8 < (int)plVar6[1]);
          lVar8 = param_1[2];
        }
        FUN_14753e6f0(lVar8 + 0x20,lVar8,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(lVar8 + 0x28) * 0x10 != lVar7);
  }
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 8) = 0;
  if (*(int *)(lVar8 + 0xc) < 0) {
    FUN_140aba11c(lVar8,0);
  }
  puVar3 = (undefined8 *)param_1[3];
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
  FUN_140e91e06(*puVar3,*(undefined4 *)(puVar3 + 1));
  *(undefined4 *)(puVar3 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)puVar3 + 0xc) != 0)) {
    FUN_14754054c(puVar3);
  }
  if (param_1[1] != 0) {
    FUN_147a408e2();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753267c FUN_14753267c body=89 status=ok
// SIG undefined FUN_14753267c(void)

void FUN_14753267c(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1 + 0xa8;
  local_10 = param_1 + 0x68;
  local_28 = param_1 + 0x58;
  local_18 = param_1;
  FUN_1475243aa(&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475326d6 FUN_1475326d6 body=29 status=ok
// SIG undefined FUN_1475326d6(void)

undefined8 FUN_1475326d6(longlong param_1,undefined8 param_2)

{
  FUN_147a404c6(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 147532702 FUN_147532702 body=83 status=ok
// SIG undefined FUN_147532702(void)

void FUN_147532702(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x90),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x90);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 147532756 FUN_147532756 body=270 status=ok
// SIG undefined FUN_147532756(void)

longlong * FUN_147532756(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0 [80];
  byte local_60;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  local_b8 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x60;
    do {
      FUN_147530702(lVar3,local_b0,local_b8);
      if (local_50 == '\x01') {
        FUN_144809632(local_b0,*(undefined4 *)(lVar3 + 0x5c),&local_b8);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14753fb50(param_2,iVar1);
        }
        lVar2 = *param_2;
        lVar5 = (longlong)iVar1 * 0x60;
        *(byte *)(lVar2 + 0x50 + lVar5) = local_60;
        (*(code *)(&PTR_LAB_14a46cf50)[local_60])(lVar5 + lVar2,local_b0);
        *(undefined8 *)(lVar2 + 0x58 + lVar5) = local_58;
      }
      lVar3 = lVar3 + 0x60;
      lVar4 = lVar4 + -0x60;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147532866 FUN_147532866 body=67 status=ok
// SIG undefined FUN_147532866(void)

void FUN_147532866(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x60;
    do {
      FUN_14753062c(lVar1,param_2);
      lVar1 = lVar1 + 0x60;
      lVar2 = lVar2 + -0x60;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1475328aa FUN_1475328aa body=124 status=ok
// SIG undefined FUN_1475328aa(void)

longlong FUN_1475328aa(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0x60;
    do {
      uVar2 = *(ulonglong *)(lVar5 + 0x58);
      if (((int)uVar2 <= param_3) &&
         ((uVar2 >> 0x20 == 0x7fffffff || (param_3 < (int)(uVar2 >> 0x20))))) {
        bVar1 = *(byte *)(lVar5 + 0x50);
        *(byte *)(param_2 + 0x50) = bVar1;
        (*(code *)(&PTR_LAB_14a46cf50)[bVar1])(param_2,lVar5);
        uVar4 = *(undefined8 *)(lVar5 + 0x58);
        goto LAB_1475328fa;
      }
      lVar5 = lVar5 + 0x60;
      lVar3 = lVar3 + -0x60;
    } while (lVar3 != 0);
  }
  *(undefined1 *)(param_2 + 0x50) = 0;
  uVar4 = 0xffffffff00000000;
LAB_1475328fa:
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  return param_2;
}



// FUNCTION 147532926 FUN_147532926 body=114 status=ok
// SIG undefined FUN_147532926(void)

undefined8 FUN_147532926(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [88];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1475328aa(param_1,local_80,param_2);
  if (local_28 < local_24) {
    uVar1 = FUN_144809632(local_80,param_2,param_3);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14753299a FUN_14753299a body=893 status=ok
// SIG undefined FUN_14753299a(void)

longlong FUN_14753299a(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_258 [32];
  byte local_238 [4];
  undefined8 local_234;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  longlong local_220;
  undefined8 *local_218;
  undefined1 *local_210;
  undefined8 local_208;
  undefined1 local_200 [4];
  undefined1 local_1fc;
  undefined1 local_1f8 [80];
  byte local_1a8;
  ulonglong local_1a0;
  undefined8 local_198 [14];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118 [11];
  undefined8 local_c0;
  undefined8 local_b8 [10];
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(*param_1 + 0x58);
    uVar3 = *(undefined4 *)(*param_1 + 0x5c + (longlong)(iVar1 + -1) * 0x60);
    FUN_1475328aa(param_1,local_118,param_4);
    if ((int)local_c0 < local_c0._4_4_) {
      if ((param_5 & 2) == 0) {
        local_128 = 0;
        local_120 = 0xffffffff00000000;
      }
      else {
        FUN_1475328aa(param_1,local_198 + 4,(int)local_c0 + -1);
      }
      local_198[2] = 0;
      local_198[3] = 0;
      local_198[0] = 0;
      local_198[1] = 0;
      *(undefined1 *)(param_2 + 8) = 0;
      local_210 = local_200;
      local_1fc = 0;
      local_218 = &local_208;
      local_208 = 0x7fefffffffffffff;
      local_238[0] = param_5;
      local_22c = 0;
      iVar9 = 0;
      local_234 = param_4;
      local_228 = uVar2;
      local_224 = uVar3;
      local_220 = param_2;
      if ((0 < iVar1) && (iVar9 = 0, (int)local_c0 < local_c0._4_4_)) {
        iVar9 = 0;
        do {
          uVar4 = FUN_14752b6a4(local_118,param_3,local_198);
          if (0 < (int)uVar4) {
            uVar7 = 0;
            do {
              FUN_1432d21e8(local_238,local_198[uVar7]);
              uVar7 = uVar7 + 1;
            } while (uVar4 != uVar7);
          }
          iVar9 = iVar9 + 1;
          if ((((param_5 & 1) == 0) || (*(char *)(param_2 + 8) != '\0')) ||
             (local_c0 >> 0x20 == 0x7fffffff)) break;
          FUN_1475328aa(param_1,local_1f8,(int)(local_c0 >> 0x20) + 1);
          local_68 = local_1a8;
          (*(code *)(&PTR_LAB_14a46c4a0)[local_1a8])(local_b8,local_1f8);
          puVar6 = local_b8;
          puVar8 = local_118;
          for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          local_c0 = local_1a0;
        } while ((int)local_1a0 < (int)(local_1a0 >> 0x20) && iVar9 < iVar1);
      }
      if (iVar9 < iVar1 && (int)local_120 < local_120._4_4_) {
        while( true ) {
          uVar4 = FUN_14752b6a4(local_198 + 4,param_3,local_198);
          if (0 < (int)uVar4) {
            uVar7 = 0;
            do {
              FUN_1432d21e8(local_238,local_198[uVar7]);
              uVar7 = uVar7 + 1;
            } while (uVar4 != uVar7);
          }
          if ((*(char *)(param_2 + 8) != '\0') || ((local_120 & 0xffffffff) == 0x80000000)) break;
          FUN_1475328aa(param_1,local_1f8,(int)local_120 + -1);
          local_68 = local_1a8;
          (*(code *)(&PTR_LAB_14a46c4a0)[local_1a8])(local_b8,local_1f8);
          puVar6 = local_b8;
          puVar8 = local_198 + 4;
          for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          local_120 = local_1a0;
          if (((int)(local_1a0 >> 0x20) <= (int)local_1a0) || (iVar9 = iVar9 + 1, iVar1 <= iVar9))
          break;
        }
      }
      goto LAB_1475329d5;
    }
  }
  *(undefined1 *)(param_2 + 8) = 0;
LAB_1475329d5:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147532d18 FUN_147532d18 body=463 status=ok
// SIG undefined FUN_147532d18(void)

ulonglong FUN_147532d18(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8 [10];
  byte local_168;
  ulonglong local_160;
  undefined8 local_158 [11];
  undefined8 local_100;
  undefined8 local_f8 [14];
  byte local_88;
  ulonglong local_80;
  undefined7 uVar5;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (*(int *)(param_1 + 8) != 0) {
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_1475328aa(0,local_158);
    uVar4 = CONCAT71(uVar5,1);
    if ((int)local_100 < local_100._4_4_) {
      do {
        uVar2 = FUN_14752b6a4(local_158,param_2,local_f8);
        if (0 < (int)uVar2) {
          uVar7 = 0;
          do {
            local_1b8[0] = local_f8[uVar7];
            cVar1 = (*(code *)*param_5)(param_5[1],local_1b8);
            if (cVar1 == '\0') {
              uVar4 = 0;
              goto LAB_147532d5e;
            }
            uVar7 = uVar7 + 1;
          } while (uVar2 != uVar7);
        }
        if (local_100 >> 0x20 == 0x7fffffff) break;
        iVar9 = (int)(local_100 >> 0x20);
        if (((int)param_4 <= iVar9) &&
           (iVar9 != (int)param_4 || (float)((ulonglong)param_4 >> 0x20) <= 0.0)) break;
        FUN_1475328aa(param_1,local_1b8,iVar9 + 1);
        local_88 = local_168;
        (*(code *)(&PTR_LAB_14a46c4a0)[local_168])(local_f8 + 4,local_1b8);
        puVar6 = local_f8 + 4;
        puVar8 = local_158;
        for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        local_100 = local_160;
      } while ((int)local_160 < (int)(local_160 >> 0x20));
    }
  }
LAB_147532d5e:
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147532ee8 FUN_147532ee8 body=3 status=ok
// SIG undefined FUN_147532ee8(void)

undefined8 FUN_147532ee8(void)

{
  return 0;
}



// FUNCTION 147532eec FUN_147532eec body=4 status=ok
// SIG undefined FUN_147532eec(void)

undefined8 FUN_147532eec(void)

{
  return 0;
}



// FUNCTION 147532ef0 FUN_147532ef0 body=4 status=ok
// SIG undefined FUN_147532ef0(void)

undefined8 FUN_147532ef0(void)

{
  return 0;
}



// FUNCTION 147532ef4 FUN_147532ef4 body=4 status=ok
// SIG undefined FUN_147532ef4(void)

undefined8 FUN_147532ef4(void)

{
  return 0;
}



// FUNCTION 147532ef8 FUN_147532ef8 body=7 status=ok
// SIG undefined FUN_147532ef8(void)

undefined4 FUN_147532ef8(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 8);
}



// FUNCTION 147532f00 FUN_147532f00 body=138 status=ok
// SIG undefined FUN_147532f00(void)

int FUN_147532f00(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(uint *)((longlong *)*param_1 + 1);
  if (0 < (int)uVar2) {
    lVar4 = *(longlong *)*param_1;
    iVar3 = *param_2;
    iVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + iVar8;
      if (*(int *)(lVar4 + 0x58 + (ulonglong)uVar1 * 0x60) <= iVar3) {
        iVar8 = uVar1 + (uVar7 & 1);
      }
      bVar6 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar6);
    if (((iVar8 <= (int)uVar2 && iVar8 != 0) &&
        (uVar5 = *(ulonglong *)(lVar4 + 0x58 + (longlong)(iVar8 + -1) * 0x60), (int)uVar5 <= iVar3))
       && (uVar5 >> 0x20 == 0x7fffffff || iVar3 < (int)(uVar5 >> 0x20))) {
      return iVar8 + -1;
    }
  }
  return -1;
}



// FUNCTION 147532f8a FUN_147532f8a body=73 status=ok
// SIG undefined FUN_147532f8a(void)

longlong FUN_147532f8a(undefined8 *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)*param_1;
  lVar3 = (longlong)param_3 * 0x60;
  bVar1 = *(byte *)(lVar2 + 0x50 + lVar3);
  *(byte *)(param_2 + 0x50) = bVar1;
  (*(code *)(&PTR_LAB_14a46cf50)[bVar1])(param_2,lVar2 + lVar3);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar2 + 0x58 + lVar3);
  return param_2;
}



// FUNCTION 147532fd4 FUN_147532fd4 body=108 status=ok
// SIG undefined FUN_147532fd4(void)

longlong FUN_147532fd4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = FUN_147532f00(param_1,param_3);
  if (((int)uVar3 < 0) || ((int)((longlong *)*param_1)[1] <= (int)uVar3)) {
    *(undefined1 *)(param_2 + 0x50) = 0;
    uVar4 = 0xffffffff00000000;
  }
  else {
    lVar2 = *(longlong *)*param_1;
    lVar5 = (ulonglong)uVar3 * 0x60;
    bVar1 = *(byte *)(lVar2 + 0x50 + lVar5);
    *(byte *)(param_2 + 0x50) = bVar1;
    (*(code *)(&PTR_LAB_14a46cf50)[bVar1])(param_2,lVar2 + lVar5);
    uVar4 = *(undefined8 *)(lVar2 + 0x58 + lVar5);
  }
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  return param_2;
}



// FUNCTION 147533040 FUN_147533040 body=15 status=ok
// SIG undefined FUN_147533040(void)

undefined4 * FUN_147533040(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(longlong *)*param_1 + 0x58);
  return param_2;
}



// FUNCTION 147533050 FUN_147533050 body=32 status=ok
// SIG undefined FUN_147533050(void)

void FUN_147533050(longlong *param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)*param_1 + 0x5c + (longlong)((int)((longlong *)*param_1)[1] + -1) * 0x60
              );
  return;
}



// FUNCTION 147533070 FUN_147533070 body=6 status=ok
// SIG undefined FUN_147533070(void)

undefined8 FUN_147533070(void)

{
  return 5;
}



// FUNCTION 147533076 FUN_147533076 body=6 status=ok
// SIG undefined FUN_147533076(void)

undefined8 FUN_147533076(void)

{
  return 5;
}



// FUNCTION 14753307c FUN_14753307c body=81 status=ok
// SIG undefined FUN_14753307c(void)

void FUN_14753307c(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144809632(*(longlong *)*param_1,*(undefined4 *)(*(longlong *)*param_1 + 0x58),&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18);
}



// FUNCTION 1475330ce FUN_1475330ce body=102 status=ok
// SIG undefined FUN_1475330ce(void)

void FUN_1475330ce(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)*param_1;
  lVar2 = (longlong)((int)((longlong *)*param_1)[1] + -1) * 0x60;
  FUN_144809632(lVar1 + lVar2,*(undefined4 *)(lVar1 + 0x5c + lVar2),&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18);
}



// FUNCTION 14753313a FUN_14753313a body=109 status=ok
// SIG undefined FUN_14753313a(void)

undefined8 FUN_14753313a(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  iVar1 = FUN_144a788f7(param_2 & 0xffffffff);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U & iVar1 + (int)(param_2 >> 0x20)) * 4);
    if (iVar1 != -1) {
      do {
        bVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x18) == param_2;
        uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),bVar4);
        if (bVar4) {
          return uVar2;
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1475331a8 FUN_1475331a8 body=7 status=ok
// SIG undefined FUN_1475331a8(void)

int FUN_1475331a8(longlong param_1)

{
  return *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c);
}


