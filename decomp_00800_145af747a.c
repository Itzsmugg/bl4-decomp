// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145af747a FUN_145af747a body=48 status=ok
// SIG undefined FUN_145af747a(void)

void FUN_145af747a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145af74da(param_1 + 0x30);
  return;
}



// FUNCTION 145af74aa FUN_145af74aa body=48 status=ok
// SIG undefined FUN_145af74aa(void)

void FUN_145af74aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145af74da FUN_145af74da body=55 status=ok
// SIG undefined FUN_145af74da(void)

void FUN_145af74da(longlong *param_1)

{
  FUN_145af75d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af7512 FUN_145af7512 body=59 status=ok
// SIG undefined FUN_145af7512(void)

void FUN_145af7512(longlong *param_1)

{
  FUN_145a200ea(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145af754e FUN_145af754e body=60 status=ok
// SIG undefined FUN_145af754e(void)

void FUN_145af754e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    FUN_145af758a(*(undefined8 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 8 + lVar1));
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return;
}



// FUNCTION 145af758a FUN_145af758a body=77 status=ok
// SIG undefined FUN_145af758a(void)

void FUN_145af758a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145af75d8 FUN_145af75d8 body=123 status=ok
// SIG undefined FUN_145af75d8(void)

void FUN_145af75d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145af7654 FUN_145af7654 body=102 status=ok
// SIG undefined FUN_145af7654(void)

void FUN_145af7654(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[5];
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145af76ba(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af76ba FUN_145af76ba body=77 status=ok
// SIG undefined FUN_145af76ba(void)

void FUN_145af76ba(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145af7708 FUN_145af7708 body=53 status=ok
// SIG undefined FUN_145af7708(void)

void FUN_145af7708(longlong *param_1)

{
  FUN_145af773e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af773e FUN_145af773e body=90 status=ok
// SIG undefined FUN_145af773e(void)

void FUN_145af773e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145af7798 FUN_145af7798 body=53 status=ok
// SIG undefined FUN_145af7798(void)

void FUN_145af7798(longlong *param_1)

{
  FUN_145af77ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af77ce FUN_145af77ce body=90 status=ok
// SIG undefined FUN_145af77ce(void)

void FUN_145af77ce(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145af7830 FUN_145af7830 body=135 status=ok
// SIG undefined FUN_145af7830(void)

undefined8 * FUN_145af7830(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b334f40;
  param_1[0x72] = &PTR_FUN_14b335580;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_141067f36(param_1,0);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1403121a6(param_1,0);
  puVar1 = param_1;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40000000;
      return param_1;
    }
    if ((*(uint *)(puVar1 + 1) & 0x30) != 0) break;
    puVar1 = (undefined8 *)puVar1[4];
  }
  return param_1;
}



// FUNCTION 145af78b8 FUN_145af78b8 body=138 status=ok
// SIG undefined FUN_145af78b8(void)

void FUN_145af78b8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      iVar4 = (int)(uVar3 / 0x30);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_145af7942(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145af7942 FUN_145af7942 body=148 status=ok
// SIG undefined FUN_145af7942(void)

void FUN_145af7942(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x30);
  return;
}



// FUNCTION 145af79d6 FUN_145af79d6 body=40 status=ok
// SIG undefined FUN_145af79d6(void)

undefined8 FUN_145af79d6(undefined8 param_1,int param_2)

{
  FUN_145af79fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af79fe FUN_145af79fe body=66 status=ok
// SIG undefined FUN_145af79fe(void)

void FUN_145af79fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6b8df0;
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1414ba612(param_1);
  return;
}



// FUNCTION 145af7a40 FUN_145af7a40 body=53 status=ok
// SIG undefined FUN_145af7a40(void)

void FUN_145af7a40(longlong *param_1)

{
  FUN_145af7a76();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af7a76 FUN_145af7a76 body=90 status=ok
// SIG undefined FUN_145af7a76(void)

void FUN_145af7a76(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145af7ad0 FUN_145af7ad0 body=40 status=ok
// SIG undefined FUN_145af7ad0(void)

undefined8 FUN_145af7ad0(undefined8 param_1,int param_2)

{
  FUN_145af7af8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af7af8 FUN_145af7af8 body=149 status=ok
// SIG undefined FUN_145af7af8(void)

void FUN_145af7af8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb6ba30;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145af7b8d(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145af7b8d(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_145af7bb8(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145af7b8d FUN_145af7b8d body=43 status=ok
// SIG undefined FUN_145af7b8d(void)

void FUN_145af7b8d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145af7bb8(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 145af7bb8 FUN_145af7bb8 body=54 status=ok
// SIG undefined FUN_145af7bb8(void)

void FUN_145af7bb8(longlong param_1)

{
  FUN_1401f95f4(param_1 + 0x20);
  FUN_145bdc764(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af7bf4 FUN_145af7bf4 body=326 status=ok
// SIG undefined FUN_145af7bf4(void)

void FUN_145af7bf4(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong local_68 [3];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_50 = 0xffff;
  if (*param_2 < 0) {
    local_4c = 0xffffffff;
    local_68[0] = param_1;
  }
  else {
    lVar2 = FUN_140b9ffa8(param_1,param_2);
    FUN_140fe4ff6(param_1,lVar2,local_68);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x8f) == '\0') {
        local_69 = 3;
        FUN_1414ba756(param_1 + 0x28,local_68,lVar2 + 0x2c,&local_69);
        local_69 = 3;
        FUN_1414ba756(param_1 + 0x40,local_68,lVar2 + 0x2c,&local_69);
      }
      FUN_144757f48(lVar2,0x40000000);
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      do {
        uVar1 = *(uint *)(lVar2 + 8);
        if ((uVar1 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar3 = uVar1 == *(uint *)(lVar2 + 8);
        if (bVar3) {
          *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  FUN_145af7d3c(param_1 + 0x160,*param_2);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145af7d3c FUN_145af7d3c body=81 status=ok
// SIG undefined FUN_145af7d3c(void)

void FUN_145af7d3c(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_145af7d8e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145af7d8e FUN_145af7d8e body=85 status=ok
// SIG undefined FUN_145af7d8e(void)

void FUN_145af7d8e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145af7de4();
  return;
}



// FUNCTION 145af7de4 FUN_145af7de4 body=116 status=ok
// SIG undefined FUN_145af7de4(void)

void FUN_145af7de4(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 145af7e58 FUN_145af7e58 body=303 status=ok
// SIG undefined FUN_145af7e58(void)

undefined4 * FUN_145af7e58(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145af8092(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  FUN_145af800c(local_38,*param_3);
  *(undefined8 *)(local_38 + 0x28) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 0x30) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 0x38) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = FUN_14020648b(local_38);
  cVar3 = FUN_145af7f88(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_38 + 0x3c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0x38) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145af8178(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af7f88 FUN_145af7f88 body=131 status=ok
// SIG undefined FUN_145af7f88(void)

undefined8 FUN_145af7f88(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_1402062fe(), iVar15 != -1)) {
    lVar2 = *param_1;
    lVar16 = (longlong)iVar15 * 0x40;
    FUN_1458b2326(lVar2 + lVar16);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined8 *)(lVar2 + 0x30 + lVar16) = *(undefined8 *)(param_3 + 0xc);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar16);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar16);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar16);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14694f40c(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 145af800c FUN_145af800c body=134 status=ok
// SIG undefined FUN_145af800c(void)

undefined8 * FUN_145af800c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145af8092 FUN_145af8092 body=230 status=ok
// SIG undefined FUN_145af8092(void)

int * FUN_145af8092(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406cd6a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 145af8178 FUN_145af8178 body=453 status=ok
// SIG undefined FUN_145af8178(void)

void FUN_145af8178(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = FUN_14020648b(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145af833e FUN_145af833e body=221 status=ok
// SIG undefined FUN_145af833e(void)

longlong * FUN_145af833e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x118,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b96d600;
  plVar1 = plVar4 + 2;
  FUN_145af841e(plVar1,param_3);
  plVar4[2] = (longlong)&PTR_FUN_14b96d620;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_145af8510(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af841e FUN_145af841e body=116 status=ok
// SIG undefined FUN_145af841e(void)

undefined8 * FUN_145af841e(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3fa760;
  param_1[3] = param_2;
  DAT_14cb7940c = DAT_14cb7940c + 1 + (uint)(DAT_14cb7940c == -1);
  *(int *)(param_1 + 4) = DAT_14cb7940c;
  FUN_145af8492(param_1 + 5);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 145af8492 FUN_145af8492 body=125 status=ok
// SIG undefined FUN_145af8492(void)

undefined8 * FUN_145af8492(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  FUN_140c25b54(param_1 + 5);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_140c25b54(param_1 + 0xd);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 145af8510 FUN_145af8510 body=162 status=ok
// SIG undefined FUN_145af8510(void)

void FUN_145af8510(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145af854f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145af854f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145af854f:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145af85ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145af85b2 FUN_145af85b2 body=151 status=ok
// SIG undefined FUN_145af85b2(void)

void FUN_145af85b2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3d0) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x3d8);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x3d8) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x3d0) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x3d8);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_145af85fb;
    }
    *(longlong **)(param_1 + 0x3d8) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_145af85fb:
                    /* WARNING: Could not recover jumptable at 0x000145af8607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145af8664 FUN_145af8664 body=38 status=ok
// SIG undefined FUN_145af8664(void)

undefined8 FUN_145af8664(undefined8 param_1,int param_2)

{
  FUN_145af868a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af868a FUN_145af868a body=1 status=ok
// SIG undefined FUN_145af868a(void)

void FUN_145af868a(void)

{
  return;
}



// FUNCTION 145af868c FUN_145af868c body=124 status=ok
// SIG undefined FUN_145af868c(void)

longlong * FUN_145af868c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5ecaa0;
  FUN_145af8708(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
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
  }
  return param_2;
}



// FUNCTION 145af8708 FUN_145af8708 body=91 status=ok
// SIG undefined FUN_145af8708(void)

undefined8 * FUN_145af8708(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1411e624c(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1411e624c();
  }
  FUN_140aed452(param_1,param_2);
  *param_1 = &PTR_FUN_14b964fe0;
  return param_1;
}



// FUNCTION 145af8764 FUN_145af8764 body=124 status=ok
// SIG undefined FUN_145af8764(void)

longlong * FUN_145af8764(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b676f10;
  FUN_145af87e0(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
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
  }
  return param_2;
}



// FUNCTION 145af87e0 FUN_145af87e0 body=91 status=ok
// SIG undefined FUN_145af87e0(void)

undefined8 * FUN_145af87e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_14595dc4e(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_14595dc4e();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a1540;
  return param_1;
}



// FUNCTION 145af883c FUN_145af883c body=66 status=ok
// SIG undefined FUN_145af883c(void)

undefined8 * FUN_145af883c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14bef5540;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -1);
  }
  return param_1 + -1;
}



// FUNCTION 145af887e FUN_145af887e body=52 status=ok
// SIG undefined FUN_145af887e(void)

undefined8 * FUN_145af887e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bef8c40;
  FUN_145af88b2(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af88b2 FUN_145af88b2 body=43 status=ok
// SIG undefined FUN_145af88b2(void)

void FUN_145af88b2(longlong *param_1)

{
  FUN_145af88dd(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145af88dd FUN_145af88dd body=54 status=ok
// SIG undefined FUN_145af88dd(void)

void FUN_145af88dd(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145af8914 FUN_145af8914 body=77 status=ok
// SIG undefined FUN_145af8914(void)

void FUN_145af8914(longlong param_1,longlong *param_2,undefined8 param_3)

{
  if (*param_2 == DAT_14cb8ced0) {
    FUN_145af8d44(param_1,param_3);
    if ((*(char *)(param_1 + 0x120) == '\x02') &&
       (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03')) {
      FUN_145763bda(param_1);
      FUN_145af8962(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145af8962 FUN_145af8962 body=210 status=ok
// SIG undefined FUN_145af8962(void)

void FUN_145af8962(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x168);
  if (lVar2 != 0) {
    FUN_140257a06(lVar2,&DAT_14cb8ceb8,9);
    if (*(longlong *)(lVar2 + 0xa8) == 0) {
      uVar3 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xa8) + 0x1c8);
      if (lVar1 == 0) {
        local_28 = DAT_14c8464f0;
        local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_38 = *(undefined8 *)(lVar1 + 0x260);
        uStack_30 = *(undefined8 *)(lVar1 + 0x268);
        local_28 = *(undefined8 *)(lVar1 + 0x270);
      }
      uVar3 = FUN_145af8ad0(param_1 + 0x128,&local_38);
    }
    FUN_145af8a36(lVar2,param_1 + 0x128,uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af8a36 FUN_145af8a36 body=32 status=ok
// SIG undefined FUN_145af8a36(void)

void FUN_145af8a36(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if ((&DAT_00001100)[param_1] == '\t') {
    FUN_145af8a56(param_1 + 0x10c0,param_2,*(undefined8 *)(param_1 + 0x1f0),param_3);
    return;
  }
  return;
}



// FUNCTION 145af8a56 FUN_145af8a56 body=122 status=ok
// SIG undefined FUN_145af8a56(void)

void FUN_145af8a56(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((param_3 != 0) && (0.0 < *(float *)((longlong)param_2 + 0x34))) &&
     (lVar6 = FUN_1447210f0(param_3), lVar6 != 0)) {
    param_1[6] = param_2[6];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined4 *)(param_1 + 7) = param_4;
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 145af8ad0 FUN_145af8ad0 body=621 status=ok
// SIG undefined FUN_145af8ad0(void)

float FUN_145af8ad0(double *param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_108 [32];
  float *local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar1 = *(float *)((longlong)param_1 + 0x34);
  fVar5 = fVar1 * 0.5;
  fVar3 = fVar5;
  if (fVar1 <= fVar5) {
    fVar3 = fVar1;
  }
  fVar4 = 0.0;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  dVar2 = (double)fVar3;
  local_a8 = dVar2 * 0.0 +
             (double)(fVar3 * *(float *)(param_1 + 6) * 0.5 * fVar3 + fVar3 * (float)param_1[5]) +
             param_1[2];
  local_b0 = param_1[4] * dVar2 + 0.0 + param_1[1];
  local_b8 = dVar2 * param_1[3] + 0.0 + *param_1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  dVar2 = (double)fVar1;
  local_c0 = dVar2 * 0.0 +
             (double)(*(float *)(param_1 + 6) * 0.5 * fVar1 * fVar1 + (float)param_1[5] * fVar1) +
             param_1[2];
  local_c8 = param_1[4] * dVar2 + 0.0 + param_1[1];
  local_d0 = param_1[3] * dVar2 + 0.0 + *param_1;
  local_e8 = &local_d8;
  FUN_1414ba816(param_2,param_1,&local_b8,&local_d4);
  if (0.0 < local_d4) {
    local_e8 = &local_e0;
    FUN_1414ba816(param_2,&local_b8,&local_d0,&local_dc);
    if ((0.0 < local_dc) && (local_e0 < local_d8)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_108);
    }
    if (1.0 <= local_d4) {
      local_d4 = 1.0;
    }
    fVar4 = fVar5 * local_d4;
  }
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af8d44 FUN_145af8d44 body=1297 status=ok
// SIG undefined FUN_145af8d44(void)

void FUN_145af8d44(longlong param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double *pdVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined1 local_f8 [8];
  undefined8 ***local_f0;
  undefined4 local_d0;
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(char *)(*(longlong *)(param_1 + 0x160) + 0x4cc) != '\x01') ||
     (((*(char *)(*(longlong *)(param_1 + 0x160) + 0xd0) == '\0' &&
       (*(char *)(param_1 + 0x110) != '\0')) || (*(char *)(param_2 + 0x20) == '\0'))))
  goto LAB_145af8d97;
  local_108 = DAT_14c8464f0;
  local_118 = (undefined4)DAT_14c8464e0;
  uStack_114 = DAT_14c8464e0._4_4_;
  uStack_110 = (undefined4)DAT_14c8464e8;
  uStack_10c = DAT_14c8464e8._4_4_;
  cVar7 = FUN_1418115bc(param_2,&local_118);
  if (cVar7 == '\0') goto LAB_145af8d97;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
  pdVar8 = (double *)&DAT_14c846480;
  if (lVar9 != 0) {
    pdVar8 = (double *)(lVar9 + 0x240);
  }
  dVar14 = (double)CONCAT44(uStack_114,local_118) - pdVar8[4];
  dVar15 = (double)CONCAT44(uStack_10c,uStack_110) - pdVar8[5];
  dVar3 = local_108 - pdVar8[6];
  dVar4 = -*pdVar8;
  dVar5 = -pdVar8[1];
  dVar11 = pdVar8[2] * -1.0;
  dVar12 = pdVar8[3] * 1.0;
  dVar16 = dVar14 * dVar11 - dVar4 * dVar3;
  dVar13 = dVar15 * dVar4 - dVar14 * dVar5;
  dVar6 = dVar3 * dVar5 - dVar15 * dVar11;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  local_138 = (undefined8 ****)((dVar13 * dVar5 - dVar16 * dVar11) + dVar12 * dVar6 + dVar14);
  uStack_130 = *pdVar8 * dVar13 + dVar11 * dVar6 + dVar12 * dVar16 + dVar15;
  dVar11 = (double)local_138 * (double)local_138 + uStack_130 * uStack_130;
  if ((dVar11 != 1.0) || (NAN(dVar11))) {
    if (9.99999993922529e-09 <= dVar11) {
      uStack_130 = uStack_130 * (1.0 / SQRT(dVar11));
      local_138 = (undefined8 ****)((1.0 / SQRT(dVar11)) * (double)local_138);
      goto LAB_145af8f9f;
    }
    local_128 = DAT_14c8464f0;
    local_138 = (undefined8 ****)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_130 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_128 = dVar3 + dVar12 * dVar13 + (dVar16 * dVar4 - dVar6 * dVar5);
    if ((local_128 != 0.0) || (NAN(local_128))) {
LAB_145af8f9f:
      local_128 = 0.0;
    }
  }
  local_80 = 0;
  local_78 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x160) + 0xcc) == 0) {
    FUN_144a79a9c(&local_138,local_f8);
    ppppuVar10 = (undefined8 ****)local_f0;
    if (local_78 != 0x15) {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar10 = (undefined8 ****)local_98;
        if (local_80 < 0x19) {
          ppppuVar10 = &local_98;
        }
        (*pcVar2)(ppppuVar10);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98);
      }
      local_80 = 8;
      local_98 = local_f0;
      local_78 = 0x15;
      ppppuVar10 = (undefined8 ****)local_98;
    }
  }
  else {
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_98), 0x18 < local_80)) {
      FUN_1400020a8(local_98);
    }
    local_88 = local_128;
    uStack_90 = (undefined4)uStack_130;
    uStack_8c = uStack_130._4_4_;
    local_80 = 0x18;
    local_78 = 4;
    ppppuVar10 = local_138;
  }
  local_98 = ppppuVar10;
  lVar9 = *(longlong *)(param_1 + 0x160);
  iVar1 = *(int *)(lVar9 + 0x9c);
  if (iVar1 == 3) {
    lVar9 = FUN_140502f56(*(undefined8 *)(param_1 + 0x38));
    if (lVar9 != 0) {
      FUN_140af060e(lVar9,*(longlong *)(param_1 + 0x160) + 0xc0,&local_98);
    }
  }
  else if (iVar1 == 2) {
    if (*(longlong *)(lVar9 + 0xa0) != 0) {
      FUN_1408834b4(param_1,lVar9 + 0xa0,&local_98);
    }
  }
  else if (((iVar1 == 1) && (lVar9 = FUN_144873cc0(lVar9 + 0xa8), lVar9 != 0)) &&
          (cVar7 = FUN_1470dbef6(lVar9), cVar7 != '\0')) {
    local_f8[0] = 0;
    local_d0 = 0;
    FUN_1456bb102(local_f8,*(undefined8 *)(param_1 + 0x38));
    local_c8[0] = 0;
    local_a0 = 0;
    FUN_140e4698e(lVar9,local_f8,&local_98);
    FUN_144a5ac3a(local_c8);
    FUN_144a5ac3a(local_f8);
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar10 = (undefined8 ****)local_98;
    if (local_80 < 0x19) {
      ppppuVar10 = &local_98;
    }
    (*pcVar2)(ppppuVar10);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98);
  }
LAB_145af8d97:
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145af9262 FUN_145af9262 body=159 status=ok
// SIG undefined FUN_145af9262(void)

undefined8 * FUN_145af9262(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_145af9302(param_1 + 5);
  *param_1 = &PTR_FUN_14b443910;
  param_1[5] = &PTR_FUN_14b443bb0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  return param_1;
}



// FUNCTION 145af9302 FUN_145af9302 body=189 status=ok
// SIG undefined FUN_145af9302(void)

undefined8 * FUN_145af9302(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b446c70;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 145af93c0 FUN_145af93c0 body=237 status=ok
// SIG undefined FUN_145af93c0(void)

void FUN_145af93c0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8 [8];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar1 = *(byte *)(param_1 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    if ((*(longlong *)(param_1 + 0x30) == 0) ||
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x3f0);
    }
    FUN_1411371f6(local_a8);
    lVar2 = FUN_145af94ae();
    local_a8[0] = *(undefined8 *)(lVar2 + 0x18);
    uVar3 = FUN_145af94ae();
    local_b8 = local_a8;
    uVar3 = FUN_141137228(param_1,uVar3,0,0);
    *(undefined8 *)(lVar4 + 0xf0) = uVar3;
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145af94ae FUN_145af94ae body=228 status=ok
// SIG undefined FUN_145af94ae(void)

longlong FUN_145af94ae(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11b10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147dcb15d;
    local_40 = &LAB_1459b0597;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x3b0;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionReplay",&DAT_14cb11b10,&DAT_147dcb15c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11b10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af9594 FUN_145af9594 body=201 status=ok
// SIG undefined FUN_145af9594(void)

ulonglong FUN_145af9594(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_14490b2fc(param_1 + 0x2a);
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  FUN_145af9661(param_1[2],(int)param_1[3]);
  *(undefined4 *)(param_1 + 3) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
    FUN_14951eeca(param_1 + 2);
  }
  FUN_144a6a7be(param_1 + 0x2a);
  FUN_14490b2fc(param_1 + 0x2b);
  uVar4 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar4) {
    lVar5 = uVar4 * 0x40 + -0x28;
    do {
      cVar3 = (**(code **)(**(longlong **)(*param_1 + lVar5) + 0x30))();
      if (cVar3 != '\0') {
        FUN_145af9722(param_1,(int)uVar4 + -1);
        FUN_145af968a(param_1);
      }
      lVar5 = lVar5 + -0x40;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  }
  FUN_144a6a7be(param_1 + 0x2b);
  return CONCAT71((int7)(uVar4 >> 8),(int)uVar4 == 0) & 0xffffffff;
}



// FUNCTION 145af9661 FUN_145af9661 body=40 status=ok
// SIG undefined FUN_145af9661(void)

void FUN_145af9661(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494ff962(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 145af968a FUN_145af968a body=62 status=ok
// SIG undefined FUN_145af968a(void)

void FUN_145af968a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145af96c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 145af96c8 FUN_145af96c8 body=89 status=ok
// SIG undefined FUN_145af96c8(void)

ulonglong FUN_145af96c8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 145af9722 FUN_145af9722 body=108 status=ok
// SIG undefined FUN_145af9722(void)

void FUN_145af9722(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + lVar1);
  FUN_14606bbe0(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x40),(longlong)iVar3 << 6);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145af978e FUN_145af978e body=254 status=ok
// SIG undefined FUN_145af978e(void)

longlong *
FUN_145af978e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_145af9890(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145af9908(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af9890 FUN_145af9890 body=120 status=ok
// SIG undefined FUN_145af9890(void)

undefined8 * FUN_145af9890(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99c7d0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99c7f0;
  param_1[6] = &PTR_FUN_14b99c830;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145af9908 FUN_145af9908 body=162 status=ok
// SIG undefined FUN_145af9908(void)

void FUN_145af9908(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145af9947;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145af9947;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145af9947:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145af99a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145af99aa FUN_145af99aa body=143 status=ok
// SIG undefined FUN_145af99aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145af99aa(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c997ba0) {
    FUN_144b3d300(&DAT_14c997ba0);
    if (DAT_14c997ba0 == -1) {
      _DAT_14c997b90 = 0x8000000149f722b0;
      _DAT_14c997b98 = FUN_145af9a3a("FChaosSceneSimCallback",0x16);
      DAT_14c997b9c = 0;
      _Init_thread_footer(&DAT_14c997ba0);
    }
  }
  FUN_1446f57c6(&DAT_14c997b90,param_2);
  return param_2;
}



// FUNCTION 145af9a3a FUN_145af9a3a body=61 status=ok
// SIG undefined FUN_145af9a3a(void)

void FUN_145af9a3a(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_145af9a78(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af9a78 FUN_145af9a78 body=155 status=ok
// SIG undefined FUN_145af9a78(void)

int FUN_145af9a78(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar1 = *param_2;
  lVar5 = (longlong)iVar1;
  pcVar2 = param_1 + lVar5 + -1;
  if (param_1 <= pcVar2) {
    uVar6 = 0;
    do {
      if (9 < (byte)(*pcVar2 - 0x30U)) break;
      uVar6 = uVar6 + 1;
      pcVar2 = pcVar2 + -1;
    } while (param_1 <= pcVar2);
    if (uVar6 == 0 || iVar1 <= (int)uVar6) {
      return 0;
    }
    if (10 < uVar6) {
      return 0;
    }
    lVar4 = -(ulonglong)uVar6;
    if (param_1[lVar4 + lVar5 + -1] != '_') {
      return 0;
    }
    if ((uVar6 != 1) && (param_1[lVar4 + lVar5] == '0')) {
      return 0;
    }
    lVar3 = 0;
    do {
      lVar3 = (longlong)param_1[lVar4 + lVar5] + lVar3 * 10 + -0x30;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
    if (lVar3 < 0x7fffffff) {
      *param_2 = ~uVar6 + iVar1;
      return (int)lVar3 + 1;
    }
  }
  return 0;
}



// FUNCTION 145af9b14 FUN_145af9b14 body=95 status=ok
// SIG undefined FUN_145af9b14(void)

void FUN_145af9b14(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_145af9b74(&local_28);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_28,param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145af9b74 FUN_145af9b74 body=120 status=ok
// SIG undefined FUN_145af9b74(void)

undefined8 * FUN_145af9b74(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca75f00) {
    FUN_144b3d300(&DAT_14ca75f00);
    if (DAT_14ca75f00 == -1) {
      FUN_1446f470e(&DAT_14ca75ef8,&DAT_14a33f218,1);
      _Init_thread_footer(&DAT_14ca75f00);
    }
  }
  *param_1 = DAT_14ca75ef8;
  return param_1;
}



// FUNCTION 145af9bec FUN_145af9bec body=40 status=ok
// SIG undefined FUN_145af9bec(void)

undefined8 FUN_145af9bec(undefined8 param_1,int param_2)

{
  FUN_145af9c14();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af9c14 FUN_145af9c14 body=104 status=ok
// SIG undefined FUN_145af9c14(void)

void FUN_145af9c14(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a586460;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x10);
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_1477f2a0c(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1411a8230(param_1);
  return;
}



// FUNCTION 145af9c88 FUN_145af9c88 body=61 status=ok
// SIG undefined FUN_145af9c88(void)

undefined8 * FUN_145af9c88(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a5e3020;
  param_1[5] = &PTR_LAB_14a5e3310;
  *(undefined2 *)((longlong)param_1 + 0x6d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6f) = 1;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  return param_1;
}



// FUNCTION 145af9cc6 FUN_145af9cc6 body=40 status=ok
// SIG undefined FUN_145af9cc6(void)

undefined8 FUN_145af9cc6(undefined8 param_1,int param_2)

{
  FUN_145af9cee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af9cee FUN_145af9cee body=59 status=ok
// SIG undefined FUN_145af9cee(void)

void FUN_145af9cee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a618190;
  FUN_145af9d29(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145af9d29 FUN_145af9d29 body=45 status=ok
// SIG undefined FUN_145af9d29(void)

void FUN_145af9d29(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145af9d56 FUN_145af9d56 body=40 status=ok
// SIG undefined FUN_145af9d56(void)

void FUN_145af9d56(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_145af9d7e(param_1,uVar1);
  *param_1 = &PTR_FUN_14a6439e0;
  return;
}



// FUNCTION 145af9d7e FUN_145af9d7e body=32 status=ok
// SIG undefined FUN_145af9d7e(void)

undefined8 * FUN_145af9d7e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab0b980;
  return param_1;
}



// FUNCTION 145af9daa FUN_145af9daa body=61 status=ok
// SIG undefined FUN_145af9daa(void)

undefined8 * FUN_145af9daa(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d2f70;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145af9de8 FUN_145af9de8 body=40 status=ok
// SIG undefined FUN_145af9de8(void)

undefined8 FUN_145af9de8(undefined8 param_1,int param_2)

{
  FUN_145af9e10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af9e10 FUN_145af9e10 body=104 status=ok
// SIG undefined FUN_145af9e10(void)

void FUN_145af9e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d6b60;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145af9e84 FUN_145af9e84 body=61 status=ok
// SIG undefined FUN_145af9e84(void)

undefined8 * FUN_145af9e84(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6de800;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145af9ecc FUN_145af9ecc body=61 status=ok
// SIG undefined FUN_145af9ecc(void)

undefined8 * FUN_145af9ecc(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a76b560;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x141e;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x141e;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 145af9f52 FUN_145af9f52 body=67 status=ok
// SIG undefined FUN_145af9f52(void)

undefined8 * FUN_145af9f52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad1b140;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145af9f96 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145af9f9c FUN_145af9f9c body=39 status=ok
// SIG undefined FUN_145af9f9c(void)

undefined8 FUN_145af9f9c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144848644();
  if (cVar1 != '\0') {
    uVar2 = FUN_144a885cc(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  return 0;
}



// FUNCTION 145af9fce FUN_145af9fce body=61 status=ok
// SIG undefined FUN_145af9fce(void)

undefined8 * FUN_145af9fce(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b2d5680;
  param_1[6] = &PTR_FUN_14b2d5938;
  param_1[7] = &PTR_FUN_14b2d5950;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}



// FUNCTION 145afa018 FUN_145afa018 body=228 status=ok
// SIG undefined FUN_145afa018(void)

longlong FUN_145afa018(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaca18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148c2ec53;
    local_40 = &LAB_1461562b4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewerFog",&DAT_14cbaca18,&DAT_148c2ec52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaca18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa0fe FUN_145afa0fe body=38 status=ok
// SIG undefined FUN_145afa0fe(void)

undefined8 FUN_145afa0fe(undefined8 param_1,int param_2)

{
  FUN_145afa124();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afa124 FUN_145afa124 body=264 status=ok
// SIG undefined FUN_145afa124(void)

void FUN_145afa124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ce070;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145afa2b9(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145afa22c(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  if ((longlong *)param_1[0x29] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x29] + 0x10))();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145afa22c FUN_145afa22c body=38 status=ok
// SIG undefined FUN_145afa22c(void)

void FUN_145afa22c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145afa252(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145afa252 FUN_145afa252 body=60 status=ok
// SIG undefined FUN_145afa252(void)

void FUN_145afa252(longlong param_1)

{
  FUN_145afa28e(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145afa28e FUN_145afa28e body=43 status=ok
// SIG undefined FUN_145afa28e(void)

void FUN_145afa28e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145afa2b9 FUN_145afa2b9 body=61 status=ok
// SIG undefined FUN_145afa2b9(void)

void FUN_145afa2b9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145afa2f6 FUN_145afa2f6 body=179 status=ok
// SIG undefined FUN_145afa2f6(void)

bool FUN_145afa2f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa3b6 FUN_145afa3b6 body=510 status=ok
// SIG undefined FUN_145afa3b6(void)

void FUN_145afa3b6(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = FUN_1408bb964(param_1 + 0x44);
      if (lVar3 != 0) {
        lVar4 = FUN_1403ca142();
        if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
            (lVar3 = *(longlong *)(lVar3 + 0x1e0), lVar3 != 0)) &&
           (lVar4 = *(longlong *)(lVar3 + 0x30), lVar4 != 0)) {
          lVar3 = *(longlong *)(lVar3 + 0x68);
          lVar5 = FUN_14130c5c8();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (lVar3 != 0)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            FUN_140d27df6(lVar3,local_2c,lVar2);
            if (*(longlong *)(param_1 + 0x70) == 0) {
              local_48 = (undefined8 *)0x0;
              local_40 = 0;
              FUN_1446efa72(&local_48,0,3,0x10);
              puVar1 = local_48;
              local_40 = 3;
              *local_48 = &PTR_LAB_14b98d0c0;
              LOCK();
              UNLOCK();
              lVar3 = DAT_14c758608 + 1;
              lVar2 = DAT_14c758608 + 1;
              if (lVar3 == 0) {
                LOCK();
                UNLOCK();
                lVar3 = DAT_14c758608 + 2;
                lVar2 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar2;
              local_48[2] = lVar3;
              *local_48 = &PTR_FUN_14b9af0c0;
              local_48[3] = 0;
              FUN_14485c47a(local_48 + 3,param_1);
              puVar1[4] = FUN_14169d88c;
              *(undefined4 *)(puVar1 + 5) = 0;
              FUN_1458e16ec(lVar4,&local_38,local_2c,&local_48);
              *(undefined8 *)(param_1 + 0x70) = local_38;
              FUN_1449db362(&local_48);
            }
            FUN_1458e1650(lVar4,local_2c);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa5b6 FUN_145afa5b6 body=156 status=ok
// SIG undefined FUN_145afa5b6(void)

bool FUN_145afa5b6(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa654 FUN_145afa654 body=59 status=ok
// SIG undefined FUN_145afa654(void)

void FUN_145afa654(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14140fc00();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x130));
  *(int *)(lVar1 + 0x128) = *(int *)(lVar1 + 0x128) + 1;
  *(undefined4 *)(lVar1 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000145afa688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x130));
  return;
}



// FUNCTION 145afa690 FUN_145afa690 body=156 status=ok
// SIG undefined FUN_145afa690(void)

bool FUN_145afa690(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa72e FUN_145afa72e body=59 status=ok
// SIG undefined FUN_145afa72e(void)

void FUN_145afa72e(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 3) {
    return;
  }
  lVar1 = FUN_144a2383e();
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x580,param_1);
  }
  FUN_14132acb8(param_1);
  return;
}



// FUNCTION 145afa76a FUN_145afa76a body=317 status=ok
// SIG undefined FUN_145afa76a(void)

undefined4 * FUN_145afa76a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145afaa76(param_1,local_48);
  FUN_145afa8a8(param_3,local_40);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145afa9be(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x5c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1414baa9a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa8a8 FUN_145afa8a8 body=151 status=ok
// SIG undefined FUN_145afa8a8(void)

undefined8 * FUN_145afa8a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_145afa940(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145aa0888(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afa940 FUN_145afa940 body=125 status=ok
// SIG undefined FUN_145afa940(void)

undefined8 * FUN_145afa940(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145afab66();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145afa9be FUN_145afa9be body=184 status=ok
// SIG undefined FUN_145afa9be(void)

undefined8 FUN_145afa9be(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145aa0888((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148f02af0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 145afaa76 FUN_145afaa76 body=239 status=ok
// SIG undefined FUN_145afaa76(void)

int * FUN_145afaa76(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 145afab66 FUN_145afab66 body=438 status=ok
// SIG undefined FUN_145afab66(void)

longlong * FUN_145afab66(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x40 + (longlong)iVar6 * 0x90) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145afad1d FUN_145afad1d body=56 status=ok
// SIG undefined FUN_145afad1d(void)

void FUN_145afad1d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145afad56(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb95200;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 145afad56 FUN_145afad56 body=88 status=ok
// SIG undefined FUN_145afad56(void)

undefined8 * FUN_145afad56(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bad9ed0;
  param_1[5] = 0;
  param_1[6] = &PTR_FUN_14bb02a30;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 145afadae FUN_145afadae body=40 status=ok
// SIG undefined FUN_145afadae(void)

undefined8 FUN_145afadae(undefined8 param_1,int param_2)

{
  FUN_145afadd6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afadd6 FUN_145afadd6 body=104 status=ok
// SIG undefined FUN_145afadd6(void)

void FUN_145afadd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcbe870;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  return;
}



// FUNCTION 145afae3e FUN_145afae3e body=40 status=ok
// SIG undefined FUN_145afae3e(void)

undefined8 FUN_145afae3e(undefined8 param_1,int param_2)

{
  FUN_145afae66();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afae66 FUN_145afae66 body=59 status=ok
// SIG undefined FUN_145afae66(void)

void FUN_145afae66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcef7d0;
  FUN_145afaea1(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145afaea1 FUN_145afaea1 body=45 status=ok
// SIG undefined FUN_145afaea1(void)

void FUN_145afaea1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145afaed4 FUN_145afaed4 body=67 status=ok
// SIG undefined FUN_145afaed4(void)

void FUN_145afaed4(longlong param_1)

{
  FUN_1459bb97d(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1497da148(param_1 + 0x58);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 145afaf18 FUN_145afaf18 body=53 status=ok
// SIG undefined FUN_145afaf18(void)

void FUN_145afaf18(longlong param_1)

{
  FUN_145afaf4e();
  if ((*(int *)(param_1 + 0x2d8) != 0) && (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145afaf42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 145afaf4e FUN_145afaf4e body=238 status=ok
// SIG undefined FUN_145afaf4e(void)

void FUN_145afaf4e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 8);
  if (lVar2 != 0) {
    lVar6 = param_1 + 0x270;
    if (*(char *)(param_1 + 0x2b4) == '\0') {
      lVar6 = 0;
    }
    FUN_145afb0de(lVar2,lVar6);
    *(undefined1 *)(param_1 + 0x2b4) = 0;
    lVar6 = param_1 + 0x29c;
    if (*(char *)(param_1 + 0x2b5) == '\0') {
      lVar6 = 0;
    }
    FUN_145afb03c(lVar2,lVar6);
    *(undefined1 *)(param_1 + 0x2b5) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  FUN_145afb196(&DAT_14cb90e48,uVar1);
  if (((*(int *)(param_1 + 0x208) == 0) || (*(longlong **)(param_1 + 0x200) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x30))(), cVar3 == '\0')) {
    *(undefined4 *)(param_1 + 0x268) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x208) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x200);
    }
    uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5,uVar1);
    *(uint *)(param_1 + 0x268) = uVar4;
    if ((uVar4 & 0xfffffffd) != 0) goto LAB_145afafe4;
  }
  FUN_145afb2c0(&DAT_14cb90e48,uVar1);
LAB_145afafe4:
  FUN_145af498a(*(undefined8 *)(param_1 + 0x248),0);
  return;
}



// FUNCTION 145afb03c FUN_145afb03c body=161 status=ok
// SIG undefined FUN_145afb03c(void)

void FUN_145afb03c(longlong *param_1,int *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined7 uStack_28;
  undefined1 uStack_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_28 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  if (param_2 != (int *)0x0) {
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    uStack_28 = (undefined7)*(undefined8 *)(param_2 + 4);
    uStack_21 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x38);
    uStack_2c = 2;
  }
  local_38 = (**(code **)(*param_1 + 0x68))(param_1);
  local_38 = local_38 * 2;
  iStack_34 = (**(code **)(*param_1 + 0x70))(param_1);
  iStack_34 = iStack_34 * 2;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0xd8))(param_1,&local_38,1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afb0de FUN_145afb0de body=183 status=ok
// SIG undefined FUN_145afb0de(void)

void FUN_145afb0de(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_48 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  if (param_2 == 0) {
    uStack_24 = 0x1000000;
  }
  else {
    iStack_40 = *(undefined4 *)(param_2 + 8);
    iStack_3c = *(undefined4 *)(param_2 + 0xc);
    uStack_38 = *(undefined8 *)(param_2 + 0x10);
    uStack_30 = *(undefined4 *)(param_2 + 0x18);
    local_2c = *(undefined4 *)(param_2 + 0x1c);
    uStack_28 = *(undefined4 *)(param_2 + 0x20);
    uStack_24 = *(undefined8 *)(param_2 + 0x24);
    local_48 = CONCAT44(*(undefined4 *)(param_2 + 4),2);
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  _iStack_40 = CONCAT44(iStack_3c,iVar1 * 2);
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  _iStack_40 = CONCAT44(iVar1 * 2,iStack_40);
  local_58 = 0;
  (**(code **)(*param_1 + 0xe8))(param_1,&local_48,0,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afb196 FUN_145afb196 body=297 status=ok
// SIG undefined FUN_145afb196(void)

void FUN_145afb196(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [36];
  uint local_94;
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_94 = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar6 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x80) == param_2) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
            local_90 = *(undefined4 *)(lVar6 + 8);
            local_80 = &local_78;
            local_88 = local_68;
            local_78 = **(undefined8 **)(lVar6 + 0x18);
            uStack_70 = (*(undefined8 **)(lVar6 + 0x18))[1];
            memcpy(local_88,*(void **)(lVar6 + 0x10),0x44);
            puVar7 = (undefined4 *)FUN_1489d7064(param_1 + 0x60,param_2,&local_94);
            puVar4 = local_80;
            uVar1 = *puVar7;
            *puVar7 = local_90;
            puVar2 = *(undefined8 **)(puVar7 + 4);
            uVar3 = *puVar2;
            *puVar2 = *local_80;
            local_90 = uVar1;
            *local_80 = uVar3;
            uVar3 = puVar2[1];
            puVar2[1] = puVar4[1];
            puVar4[1] = uVar3;
            uVar3 = **(undefined8 **)(puVar7 + 2);
            **(undefined8 **)(puVar7 + 2) = *local_88;
            *local_88 = uVar3;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x78);
      } while (iVar5 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145afb2c0 FUN_145afb2c0 body=382 status=ok
// SIG undefined FUN_145afb2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_145afb2c0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
    puVar7 = param_1 + 9;
    if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[10];
    }
    iVar6 = *(int *)((longlong)puVar7 + (ulonglong)(*(int *)(param_1 + 0xb) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar3 = param_1[2] + (longlong)iVar6 * 0x80;
        if (*(uint *)(param_1[2] + (longlong)iVar6 * 0x80) == param_2) {
          if (lVar3 != -8 && lVar3 != 0) {
            local_80 = *(undefined4 *)(lVar3 + 8);
            local_70 = &local_68;
            local_78 = &local_58;
            uStack_50 = 0;
            local_48 = 0;
            uStack_40 = 0;
            local_38 = 0;
            uStack_30 = 0;
            local_28 = 0;
            uStack_20 = 0;
            local_18 = 0;
            puVar7 = *(undefined8 **)(lVar3 + 0x18);
            local_68 = *puVar7;
            *puVar7 = 0;
            uStack_60 = puVar7[1];
            puVar7[1] = 0;
            local_58 = **(undefined8 **)(lVar3 + 0x10);
            **(undefined8 **)(lVar3 + 0x10) = 0;
            *(undefined4 *)(lVar3 + 8) = local_80;
            plVar4 = (longlong *)param_1[1];
            if (plVar4 == (longlong *)0x0) goto LAB_145afb429;
            iVar6 = (int)plVar4[1];
            goto LAB_145afb3e0;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x78);
      } while (iVar6 != -1);
    }
  }
  goto LAB_145afb2e2;
LAB_145afb429:
  (**(code **)(*_DAT_00000000 + 0x98))();
  goto LAB_145afb2e2;
  while( true ) {
    LOCK();
    iVar5 = (int)plVar4[1];
    bVar8 = iVar6 == iVar5;
    if (bVar8) {
      *(int *)(plVar4 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
    if (bVar8) break;
LAB_145afb3e0:
    if (iVar6 == 0) goto LAB_145afb429;
  }
  (**(code **)(**(longlong **)*param_1 + 0x98))();
  LOCK();
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_145afb2e2:
  if ((local_10 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145afb440 FUN_145afb440 body=94 status=ok
// SIG undefined FUN_145afb440(void)

void FUN_145afb440(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x50 + 0x48);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_145afb49e();
  return;
}



// FUNCTION 145afb49e FUN_145afb49e body=75 status=ok
// SIG undefined FUN_145afb49e(void)

void FUN_145afb49e(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0x50;
  FUN_145d5702a(lVar1 + 0x28);
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145afb4ea(param_1,param_2);
  return;
}



// FUNCTION 145afb4ea FUN_145afb4ea body=120 status=ok
// SIG undefined FUN_145afb4ea(void)

void FUN_145afb4ea(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145afb56e FUN_145afb56e body=274 status=ok
// SIG undefined FUN_145afb56e(void)

undefined8 * FUN_145afb56e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14146eb06();
  *param_1 = &PTR_FUN_14ac1c090;
  param_1[5] = &PTR_FUN_14ac1c350;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3e99999a;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_145afb682(&local_28);
  FUN_14485c47a((longlong)param_1 + 0x9c,param_1);
  *(undefined8 *)((longlong)param_1 + 0xa4) = local_28;
  FUN_14113f0c0((longlong)param_1 + 0x9c);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afb682 FUN_145afb682 body=183 status=ok
// SIG undefined FUN_145afb682(void)

undefined8 * FUN_145afb682(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20bf8) {
    FUN_144b3d300(&DAT_14cb20bf8);
    if (DAT_14cb20bf8 == -1) {
      pwVar2 = L"OnPerceptionStimuliSourceEndPlay";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0;
      FUN_1446f470e(&DAT_14cb20bf0,local_68,1);
      _Init_thread_footer(&DAT_14cb20bf8);
    }
  }
  *param_1 = DAT_14cb20bf0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afb73a FUN_145afb73a body=24 status=ok
// SIG undefined FUN_145afb73a(void)

void FUN_145afb73a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145afb74e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145afb752 FUN_145afb752 body=38 status=ok
// SIG undefined FUN_145afb752(void)

undefined8 FUN_145afb752(undefined8 param_1,int param_2)

{
  FUN_145afb778();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afb778 FUN_145afb778 body=119 status=ok
// SIG undefined FUN_145afb778(void)

void FUN_145afb778(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4023f0;
  param_1[4] = &PTR_FUN_14b402410;
  FUN_144a6a7e8(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145afb7eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145afb7fa FUN_145afb7fa body=628 status=ok
// SIG undefined FUN_145afb7fa(void)

undefined8 * FUN_145afb7fa(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *param_1 = &PTR_FUN_14ace5260;
  *(undefined1 *)(param_1 + 10) = 0;
  *(byte *)((longlong)param_1 + 0x51) = *(byte *)((longlong)param_1 + 0x51) & 0xe0 | 0x1b;
  lVar2 = FUN_145afba70();
  FUN_1446f470e(&local_28,L"ReceiveExitState",1);
  lVar3 = FUN_1400796d0(param_1[2],local_28,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) << 5;
  }
  *(byte *)((longlong)param_1 + 0x51) = *(byte *)((longlong)param_1 + 0x51) & 0xdf | bVar1;
  lVar2 = FUN_145afba70();
  FUN_1446f470e(&local_30,L"ReceiveStateCompleted",1);
  lVar3 = FUN_1400796d0(param_1[2],local_30,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) << 6;
  }
  *(byte *)((longlong)param_1 + 0x51) = *(byte *)((longlong)param_1 + 0x51) & 0xbf | bVar1;
  lVar2 = FUN_145afba70();
  FUN_1446f470e(&local_38,L"ReceiveLatentEnterState",1);
  lVar3 = FUN_1400796d0(param_1[2],local_38,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) << 7;
  }
  *(byte *)((longlong)param_1 + 0x51) = *(byte *)((longlong)param_1 + 0x51) & 0x7f | bVar1;
  lVar2 = FUN_145afba70();
  FUN_1446f470e(&local_40,L"ReceiveLatentTick",1);
  lVar3 = FUN_1400796d0(param_1[2],local_40,1);
  if (lVar3 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(longlong *)(lVar3 + 0x20) != lVar2;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)((longlong)param_1 + 0x52) & 0xfe | bVar4;
  lVar2 = FUN_145afba70();
  FUN_1446f470e(&local_48,L"ReceiveEnterState",1);
  lVar3 = FUN_1400796d0(param_1[2],local_48,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) * '\x02';
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)((longlong)param_1 + 0x52) & 0xfd | bVar1;
  lVar2 = FUN_145afba70();
  FUN_1446f470e(&local_50,L"ReceiveTick",1);
  lVar3 = FUN_1400796d0(param_1[2],local_50,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) << 2;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)((longlong)param_1 + 0x52) & 0xfb | bVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afba70 FUN_145afba70 body=228 status=ok
// SIG undefined FUN_145afba70(void)

longlong FUN_145afba70(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb27fd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459097ea;
    local_38 = &LAB_147fa4fe1;
    local_40 = &LAB_145afb7ef;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/StateTreeModule",L"StateTreeTaskBlueprintBase",&DAT_14cb27fd8,
                  FUN_146450864);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27fd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afbb56 FUN_145afbb56 body=254 status=ok
// SIG undefined FUN_145afbb56(void)

undefined8
FUN_145afbb56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a90c070;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a90a0c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145afbc56(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afbc56 FUN_145afbc56 body=216 status=ok
// SIG undefined FUN_145afbc56(void)

undefined8 * FUN_145afbc56(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afbd3c FUN_145afbd3c body=24 status=ok
// SIG undefined FUN_145afbd3c(void)

bool FUN_145afbd3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145afbd54 FUN_145afbd54 body=291 status=ok
// SIG undefined FUN_145afbd54(void)

void FUN_145afbd54(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0xffffffffffffffff;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140665542(local_68,&local_48);
  local_58 = local_38;
  FUN_145afbe78(local_68,uVar1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afbe78 FUN_145afbe78 body=34 status=ok
// SIG undefined FUN_145afbe78(void)

void FUN_145afbe78(undefined8 *param_1)

{
  FUN_14072d42a();
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  return;
}



// FUNCTION 145afbe9a FUN_145afbe9a body=54 status=ok
// SIG undefined FUN_145afbe9a(void)

void FUN_145afbe9a(longlong param_1)

{
  FUN_145afbed0();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afbed0 FUN_145afbed0 body=338 status=ok
// SIG undefined FUN_145afbed0(void)

void FUN_145afbed0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x70;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_144a81a4c(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < *(int *)(local_38 + 0x10)) {
    do {
      lVar3 = *(longlong *)(local_68 + 0x60);
      if (*(longlong *)(local_68 + 0x60) == 0) {
        lVar3 = local_68;
      }
      puVar2 = *(undefined8 **)(lVar3 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_144a81a4c(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_145afc092(param_1);
  }
  *(undefined8 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (0x20 < *(uint *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = 0x20;
    FUN_14008f53c(lVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc024 FUN_145afc024 body=38 status=ok
// SIG undefined FUN_145afc024(void)

undefined8 FUN_145afc024(undefined8 param_1,int param_2)

{
  FUN_145afc04a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afc04a FUN_145afc04a body=71 status=ok
// SIG undefined FUN_145afc04a(void)

void FUN_145afc04a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b433848;
  if (param_1[0x13e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13c] != 0) {
    FUN_1400020a8();
  }
  FUN_14023c33c(param_1 + 3);
  return;
}



// FUNCTION 145afc092 FUN_145afc092 body=78 status=ok
// SIG undefined FUN_145afc092(void)

void FUN_145afc092(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x60),
              (longlong)*(int *)((longlong)param_1 + 0x68) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x60,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 145afc0e0 FUN_145afc0e0 body=154 status=ok
// SIG undefined FUN_145afc0e0(void)

bool FUN_145afc0e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc17c FUN_145afc17c body=87 status=ok
// SIG undefined FUN_145afc17c(void)

void FUN_145afc17c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (((param_2 != 0) && (lVar1 == param_2)) && (param_1[6] != 0)) {
    lVar1 = FUN_1411db1ae(param_2);
    if (lVar1 != 0) {
      if (param_1[6] != 0) {
        FUN_14480f766(lVar1 + 0x20);
      }
      param_1[6] = 0;
    }
  }
  return;
}



// FUNCTION 145afc1d4 FUN_145afc1d4 body=271 status=ok
// SIG undefined FUN_145afc1d4(void)

void FUN_145afc1d4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((param_2 != 0) && (lVar5 == param_2)) {
    lVar5 = FUN_1411db1ae(param_2);
    if (lVar5 != 0) {
      if ((param_1[6] != 0) && (iVar1 = *(int *)(lVar5 + 0x28), (longlong)iVar1 != 0)) {
        lVar2 = *(longlong *)(lVar5 + 0x20);
        lVar6 = 0;
        do {
          if (((*(int *)(lVar2 + 8 + lVar6) != 0) &&
              (plVar3 = *(longlong **)(lVar2 + lVar6), plVar3 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar4 != '\0'))
          goto LAB_145afc23c;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      FUN_145afc336(lVar5 + 0x20,&local_38,param_1);
      param_1[6] = local_38;
    }
LAB_145afc23c:
    if ((char)param_1[9] == '\0') {
      FUN_1414bac82(param_1,&DAT_14cbcf4c8);
      *(undefined1 *)(param_1 + 9) = 1;
    }
    lVar5 = FUN_145afc2ec(param_1);
    if ((lVar5 != 0) && (lVar5 = FUN_145afc2e4(lVar5), 1 < *(int *)(lVar5 + 8))) {
      FUN_1414bac82(param_1,lVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145afc2e4 FUN_145afc2e4 body=8 status=ok
// SIG undefined FUN_145afc2e4(void)

longlong FUN_145afc2e4(longlong param_1)

{
  return param_1 + 0xcb8;
}



// FUNCTION 145afc2ec FUN_145afc2ec body=74 status=ok
// SIG undefined FUN_145afc2ec(void)

longlong FUN_145afc2ec(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x178), lVar1 != 0)) {
    lVar2 = FUN_14030d660();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145afc336 FUN_145afc336 body=244 status=ok
// SIG undefined FUN_145afc336(void)

undefined8 FUN_145afc336(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b403ee0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b994500;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1410e8d16;
  FUN_145afc42c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc42c FUN_145afc42c body=216 status=ok
// SIG undefined FUN_145afc42c(void)

undefined8 * FUN_145afc42c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc512 FUN_145afc512 body=37 status=ok
// SIG undefined FUN_145afc512(void)

undefined4 FUN_145afc512(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_145afc538();
  if (lVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x448);
  }
  return uVar2;
}



// FUNCTION 145afc538 FUN_145afc538 body=63 status=ok
// SIG undefined FUN_145afc538(void)

longlong FUN_145afc538(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145afc578();
  if (lVar1 != 0) {
    lVar2 = FUN_14592c56a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145afc578 FUN_145afc578 body=154 status=ok
// SIG undefined FUN_145afc578(void)

longlong FUN_145afc578(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x390);
  if ((((lVar1 == 0) || (lVar2 = FUN_14117928e(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar1 = *(longlong *)(param_1 + 0x390), lVar1 == 0)))) {
    return 0;
  }
  lVar2 = FUN_14117928e();
  if ((lVar2 == 0) ||
     ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)))) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x390);
  }
  if (plVar3[0x22] != 0) {
    return plVar3[0x22];
  }
  (**(code **)(*plVar3 + 1000))(plVar3);
  return plVar3[0x22];
}



// FUNCTION 145afc612 FUN_145afc612 body=299 status=ok
// SIG undefined FUN_145afc612(void)

void FUN_145afc612(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = *param_1;
  uVar7 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar4 = *(undefined8 *)(param_1 + 6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined1 *)(param_1 + 10);
  uVar6 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar3 = param_1[0xe];
  param_1[0xe] = 0;
  local_a8[0] = (code *)0x0;
  local_e8[0] = uVar2;
  local_c0 = uVar1;
  local_98 = (undefined8 *)FUN_14001cc68(0x48,8);
  *local_98 = &PTR_LAB_14ae37d40;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  *(undefined4 *)(local_98 + 1) = uVar2;
  local_98[2] = uVar7;
  local_98[3] = uVar8;
  local_98[4] = uVar4;
  local_98[5] = uVar5;
  *(undefined1 *)(local_98 + 6) = uVar1;
  local_98[7] = uVar6;
  *(undefined4 *)(local_98 + 8) = uVar3;
  if (local_98 + 1 != (undefined8 *)0x0) {
    local_a8[0] = FUN_143ae3f20;
  }
  FUN_1407461b0(0x4ff,local_a8);
  FUN_145afc73e(local_e8);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc73e FUN_145afc73e body=81 status=ok
// SIG undefined FUN_145afc73e(void)

void FUN_145afc73e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145afc78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145afc790 FUN_145afc790 body=104 status=ok
// SIG undefined FUN_145afc790(void)

undefined8 FUN_145afc790(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145afc7fa(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc7fa FUN_145afc7fa body=22 status=ok
// SIG undefined FUN_145afc7fa(void)

undefined8 FUN_145afc7fa(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb84648;
  if (DAT_14cb84648 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb84648 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb84648 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb84648[0x3a] <= *(int *)((longlong)DAT_14cb84648 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb84648 + 0x300))(DAT_14cb84648);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145afc810 FUN_145afc810 body=104 status=ok
// SIG undefined FUN_145afc810(void)

undefined8 FUN_145afc810(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1414baffc(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afc87a FUN_145afc87a body=40 status=ok
// SIG undefined FUN_145afc87a(void)

undefined8 FUN_145afc87a(undefined8 param_1,int param_2)

{
  FUN_145afc8a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afc8a2 FUN_145afc8a2 body=87 status=ok
// SIG undefined FUN_145afc8a2(void)

void FUN_145afc8a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b730dd0;
  param_1[5] = &PTR_FUN_14b731260;
  param_1[6] = &PTR_LAB_14b7312a0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa437e(param_1);
  return;
}



// FUNCTION 145afc8fa FUN_145afc8fa body=40 status=ok
// SIG undefined FUN_145afc8fa(void)

undefined8 FUN_145afc8fa(undefined8 param_1,int param_2)

{
  FUN_145afc922();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afc922 FUN_145afc922 body=214 status=ok
// SIG undefined FUN_145afc922(void)

void FUN_145afc922(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b828a40;
  param_1[6] = &PTR_FUN_14b828d00;
  param_1[7] = &PTR_LAB_14b828d90;
  plVar3 = (longlong *)param_1[0x11];
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
  if (param_1[0xf] != 0) {
    FUN_140113f3a();
    param_1[0xf] = 0;
  }
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[0xc] != 0) {
    FUN_140113f3a();
    param_1[0xc] = 0;
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 145afc9f8 FUN_145afc9f8 body=160 status=ok
// SIG undefined FUN_145afc9f8(void)

void FUN_145afc9f8(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140670e16();
  *(undefined1 *)(param_1 + 0x131) = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar2 = FUN_14070cc62();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x18);
      FUN_1409e8532(lVar1,&local_28,0);
    }
  }
  FUN_145afca9a(param_1);
  if (param_2 == '\0') {
    FUN_145afcaf8(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afca9a FUN_145afca9a body=92 status=ok
// SIG undefined FUN_145afca9a(void)

void FUN_145afca9a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [128];
  undefined1 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14479d2ce(param_1 + 0x1a8);
  if (lVar1 != 0) {
    local_18 = 0;
    FUN_140ce3c98(lVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afcaf8 FUN_145afcaf8 body=616 status=ok
// SIG undefined FUN_145afcaf8(void)

void FUN_145afcaf8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [32];
  double local_178;
  double dStack_170;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_14070cc62();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x858), lVar1 != 0)) {
      lVar3 = FUN_144a7c224(lVar1);
      if (lVar3 != 0) {
        FUN_140bb5078(*(longlong *)(param_1 + 0x1a0) + 0x238,local_138,
                      *(undefined8 *)(param_1 + 0x98),&DAT_14cb8d438);
        if (local_130 != (longlong *)0x0) {
          lVar4 = FUN_1402576f0();
          if (((local_130 != (longlong *)0x0) && (lVar4 != 0)) &&
             ((lVar2 = local_130[2], lVar2 != 0 &&
              ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)))))) {
            fVar5 = (float)(**(code **)(*local_130 + 0x2b0))(local_130);
            FUN_1409cd860(local_130,local_198,
                          fVar5 - *(float *)(*(longlong *)(param_1 + 0x1a0) + 0x390),0x7f7fffff);
            fVar5 = *(float *)(*(longlong *)(param_1 + 0x1a0) + 0x38c);
            if (fVar5 * fVar5 < (float)(local_178 * local_178 + dStack_170 * dStack_170)) {
              local_b0 = (**(code **)(*local_130 + 0x2b0))(local_130);
              local_b8 = local_130;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(local_130);
              }
              FUN_14125199e(lVar3,&local_1a8);
              if (local_1a8 != 0) {
                local_b8 = (longlong *)CONCAT44(0x3f800000,local_1a0);
                local_b0 = CONCAT31(local_b0._1_3_,1);
                local_a8 = local_1a8;
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c();
                }
                local_48 = '\0';
                FUN_140b2207e(lVar1,&local_b8,0);
                if ((local_48 == '\x01') && (local_58 != 0)) {
                  FUN_1400020a8();
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afcd62 FUN_145afcd62 body=336 status=ok
// SIG undefined FUN_145afcd62(void)

void FUN_145afcd62(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_145afceb4(local_28,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afceb4 FUN_145afceb4 body=160 status=ok
// SIG undefined FUN_145afceb4(void)

void FUN_145afceb4(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  if ((int)param_2[1] == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  FUN_14485c47a(local_38,param_1);
  local_50 = local_38[0];
  local_48 = local_40;
  FUN_1414bb012();
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afcf56 FUN_145afcf56 body=40 status=ok
// SIG undefined FUN_145afcf56(void)

undefined8 FUN_145afcf56(undefined8 param_1,int param_2)

{
  FUN_145afcf7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afcf7e FUN_145afcf7e body=154 status=ok
// SIG undefined FUN_145afcf7e(void)

void FUN_145afcf7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bec1d50;
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_145afd152(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145afd018(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_145afd0aa(param_1 + 0x1e);
  FUN_145afd0e2(param_1 + 0xf);
  FUN_145afd044(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145afd018 FUN_145afd018 body=43 status=ok
// SIG undefined FUN_145afd018(void)

void FUN_145afd018(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149879726(param_1);
    param_1 = param_1 + 0x280;
  }
  return;
}



// FUNCTION 145afd044 FUN_145afd044 body=101 status=ok
// SIG undefined FUN_145afd044(void)

void FUN_145afd044(longlong param_1)

{
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afd0aa FUN_145afd0aa body=56 status=ok
// SIG undefined FUN_145afd0aa(void)

void FUN_145afd0aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_145afd0e2(param_1);
  return;
}



// FUNCTION 145afd0e2 FUN_145afd0e2 body=112 status=ok
// SIG undefined FUN_145afd0e2(void)

void FUN_145afd0e2(longlong *param_1)

{
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afd152 FUN_145afd152 body=75 status=ok
// SIG undefined FUN_145afd152(void)

void FUN_145afd152(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14becce80;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x56;
  }
  return;
}



// FUNCTION 145afd19e FUN_145afd19e body=349 status=ok
// SIG undefined FUN_145afd19e(void)

undefined4 * FUN_145afd19e(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145afd394(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_145afd2fc(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c949560 - DAT_14c94958c;
    if (uVar6 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9495a0)) {
      uVar10 = DAT_14c9495a0 - 1U & uVar10;
      *(uint *)(local_38 + 2) = uVar10;
      puVar7 = DAT_14c949598;
      if (DAT_14c949598 == (undefined *)0x0) {
        puVar7 = &DAT_14c949590;
      }
      *(undefined4 *)((longlong)local_38 + 0xc) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9495a0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c949598;
      if (DAT_14c949598 == (undefined *)0x0) {
        puVar7 = &DAT_14c949590;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9495a0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9495a0 = iVar9;
      FUN_1414bbcac();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afd2fc FUN_145afd2fc body=151 status=ok
// SIG undefined FUN_145afd2fc(void)

undefined8 FUN_145afd2fc(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((DAT_14c949560 - DAT_14c94958c != 1) && (DAT_14c949560 != DAT_14c94958c)) {
    puVar4 = &DAT_14c949590;
    if (DAT_14c949598 != (undefined *)0x0) {
      puVar4 = DAT_14c949598;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14c9495a0 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c949558 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_2) {
          lVar2 = *param_2;
          *(int *)(plVar1 + 1) = (int)param_2[1];
          *plVar1 = lVar2;
          FUN_1468b345c(*param_3);
          *param_3 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145afd394 FUN_145afd394 body=283 status=ok
// SIG undefined FUN_145afd394(void)

int * FUN_145afd394(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c949588;
  iVar3 = DAT_14c949560;
  if (DAT_14c94958c == 0) {
    iVar2 = DAT_14c949560 + 1;
    bVar7 = DAT_14c949564 == DAT_14c949560;
    DAT_14c949560 = iVar2;
    if (bVar7) {
      FUN_140171ad2(&DAT_14c949558,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c949568,1);
    puVar4 = DAT_14c949578;
    if (DAT_14c949578 == (undefined *)0x0) {
      puVar4 = &DAT_14c949568;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c949588;
    DAT_14c949588 = *(int *)(DAT_14c949558 + 4 + lVar6 * 0x14);
    DAT_14c94958c = DAT_14c94958c + -1;
    if (DAT_14c94958c != 0) {
      *(undefined4 *)(DAT_14c949558 + (longlong)DAT_14c949588 * 0x14) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c949568;
  if (DAT_14c949578 != (undefined *)0x0) {
    puVar4 = DAT_14c949578;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x14 + DAT_14c949558;
  return param_1;
}



// FUNCTION 145afd4b0 FUN_145afd4b0 body=213 status=ok
// SIG undefined FUN_145afd4b0(void)

void FUN_145afd4b0(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145afd586(local_50,&LAB_14029b882);
  FUN_14126834e(&DAT_14cb10998,local_58,local_50);
  FUN_1401cb1ee(local_50);
  FUN_145afd586(local_50,FUN_146325634);
  FUN_14126834e(&DAT_14cb10a38,local_58,local_50);
  FUN_1401cb1ee(local_50);
  FUN_145afd72c(local_50);
  FUN_145afd646(&DAT_14c872cf8,local_50,param_1,FUN_145dc6da0);
  FUN_145afd646(&DAT_14c872d10,local_50,param_1,FUN_145dc6d40);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afd586 FUN_145afd586 body=191 status=ok
// SIG undefined FUN_145afd586(void)

LPCRITICAL_SECTION FUN_145afd586(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 2) {
    FUN_1446efa72(param_1 + 1,0,2,0x10);
    param_1[1].LockCount = 2;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a3cb1d0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145afd646 FUN_145afd646 body=228 status=ok
// SIG undefined FUN_145afd646(void)

undefined8
FUN_145afd646(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14a3cb390;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afd72c FUN_145afd72c body=207 status=ok
// SIG undefined FUN_145afd72c(void)

undefined8 FUN_145afd72c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14a3cb320;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14a3cb2b0;
  local_28[3] = FUN_147461c81;
  FUN_145afd7fc(param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afd7fc FUN_145afd7fc body=233 status=ok
// SIG undefined FUN_145afd7fc(void)

undefined8 * FUN_145afd7fc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb109d8,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb109e0;
      lVar6 = (longlong)(int)DAT_14cb109e0;
      DAT_14cb109e0 = DAT_14cb109e0 + 1;
      if (DAT_14cb109e4 < DAT_14cb109e0) {
        FUN_1447a71f6(&DAT_14cb109d8,uVar3);
      }
      lVar2 = DAT_14cb109d8;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb109d8 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afd900 FUN_145afd900 body=175 status=ok
// SIG undefined FUN_145afd900(void)

undefined8 * FUN_145afd900(undefined8 *param_1)

{
  FUN_145afd9b0();
  *param_1 = &PTR_FUN_14bce6250;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 145afd9b0 FUN_145afd9b0 body=32 status=ok
// SIG undefined FUN_145afd9b0(void)

undefined8 * FUN_145afd9b0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6b38d0;
  return param_1;
}



// FUNCTION 145afd9d0 FUN_145afd9d0 body=40 status=ok
// SIG undefined FUN_145afd9d0(void)

undefined8 FUN_145afd9d0(undefined8 param_1,int param_2)

{
  FUN_145afd9f8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afd9f8 FUN_145afd9f8 body=133 status=ok
// SIG undefined FUN_145afd9f8(void)

void FUN_145afd9f8(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b1ecbc0;
  if (param_1[0x80] != 0) {
    plVar1 = param_1 + 0x84;
    if ((longlong *)param_1[0x82] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x82];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_145afda7e(param_1 + 0x75);
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145afda7e FUN_145afda7e body=55 status=ok
// SIG undefined FUN_145afda7e(void)

void FUN_145afda7e(longlong *param_1)

{
  FUN_145afdab6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afdab6 FUN_145afdab6 body=388 status=ok
// SIG undefined FUN_145afdab6(void)

void FUN_145afdab6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1449db362(*local_70 + (longlong)iStack_54 * 0x20 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145afdc3c FUN_145afdc3c body=150 status=ok
// SIG undefined FUN_145afdc3c(void)

undefined8 * FUN_145afdc3c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x110))(param_1,&local_30);
  if (local_30 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*param_1 + 0x140))(param_1,param_2);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afdcd4 FUN_145afdcd4 body=165 status=ok
// SIG undefined FUN_145afdcd4(void)

undefined8 * FUN_145afdcd4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x100))(param_1,&local_28);
  if (local_28 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    (**(code **)(*local_28 + 0x18))(local_28,param_2,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afdd7a FUN_145afdd7a body=83 status=ok
// SIG undefined FUN_145afdd7a(void)

undefined8 * FUN_145afdd7a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 145afddd8 FUN_145afddd8 body=222 status=ok
// SIG undefined FUN_145afddd8(void)

undefined8 * FUN_145afddd8(undefined8 *param_1)

{
  FUN_145afdeb6();
  *param_1 = &PTR_FUN_14aea6b10;
  param_1[5] = &PTR_FUN_14aea6db0;
  param_1[0xc] = 0;
  param_1[0xe] = &PTR_LAB_14aeb5620;
  param_1[0xf] = &LAB_14841be36;
  param_1[10] = &LAB_14841be3a;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14aeb5640;
  param_1[0x17] = &LAB_14841be52;
  param_1[0x12] = &LAB_14841be56;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 145afdeb6 FUN_145afdeb6 body=58 status=ok
// SIG undefined FUN_145afdeb6(void)

undefined8 * FUN_145afdeb6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aeca3d0;
  param_1[5] = &PTR_FUN_14aeca670;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  return param_1;
}



// FUNCTION 145afdefc FUN_145afdefc body=199 status=ok
// SIG undefined FUN_145afdefc(void)

void FUN_145afdefc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_145afdfc4();
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x6888), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x6880);
    lVar6 = 0;
    do {
      local_48 = *(undefined8 *)(lVar3 + lVar6);
      pcVar2 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_48);
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145afdfc4 FUN_145afdfc4 body=91 status=ok
// SIG undefined FUN_145afdfc4(void)

longlong FUN_145afdfc4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (cVar1 = FUN_144729dda(param_1 + 0x58), cVar1 != '\0')) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))(), lVar2 != 0)) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 145afe02e FUN_145afe02e body=40 status=ok
// SIG undefined FUN_145afe02e(void)

undefined8 FUN_145afe02e(undefined8 param_1,int param_2)

{
  FUN_145afe056();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afe056 FUN_145afe056 body=611 status=ok
// SIG undefined FUN_145afe056(void)

void FUN_145afe056(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b76b680;
  if (param_1[0x246] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x241] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x232] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x230] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x227] != 0) {
    FUN_1400020a8();
  }
  FUN_1412dafa6(param_1 + 0x21b);
  if (param_1[0x218] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x217) = 0;
  if (param_1[0x216] != 0) {
    FUN_1400020a8();
  }
  FUN_145afe2ba(param_1 + 0x20e);
  if (param_1[0x20b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1dc] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x184] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x184] + 0x50));
  }
  if (param_1[0x17c] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x163);
  FUN_14051f4c4(param_1 + 0x14c);
  FUN_14051f4c4(param_1 + 0x135);
  FUN_14051f4c4(param_1 + 0x11f);
  if (param_1[0x11c] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x103);
  FUN_145afe39c(param_1 + 0x98);
  FUN_145afe2f1(param_1[0x96],*(undefined4 *)(param_1 + 0x97));
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x80);
  FUN_145afe462(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145afe2ba FUN_145afe2ba body=55 status=ok
// SIG undefined FUN_145afe2ba(void)

void FUN_145afe2ba(longlong *param_1)

{
  FUN_145afe320(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afe2f1 FUN_145afe2f1 body=46 status=ok
// SIG undefined FUN_145afe2f1(void)

void FUN_145afe2f1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x10b;
  }
  return;
}



// FUNCTION 145afe320 FUN_145afe320 body=123 status=ok
// SIG undefined FUN_145afe320(void)

void FUN_145afe320(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145afe39c FUN_145afe39c body=198 status=ok
// SIG undefined FUN_145afe39c(void)

void FUN_145afe39c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afe462 FUN_145afe462 body=295 status=ok
// SIG undefined FUN_145afe462(void)

void FUN_145afe462(longlong param_1)

{
  *(undefined **)(param_1 + 0x2f0) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x2f0) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x2f8);
  *(undefined **)(param_1 + 0x260) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x260) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x268);
  *(undefined **)(param_1 + 0x1d8) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x1d8) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x1e0);
  *(undefined **)(param_1 + 0xf0) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0xf0) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afe592 FUN_145afe592 body=230 status=ok
// SIG undefined FUN_145afe592(void)

undefined8 * FUN_145afe592(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14adbabc0;
  param_1[7] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x128);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14adbb060;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  memset(puVar2 + 0xc,0,0xa8);
  FUN_145afe678(puVar2 + 0xc);
  puVar2[0x21] = 0;
  *(undefined1 *)(puVar2 + 0x22) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x114) = 0x4000;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  puVar1 = (undefined8 *)param_1[5];
  param_1[5] = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145afe678 FUN_145afe678 body=126 status=ok
// SIG undefined FUN_145afe678(void)

undefined8 * FUN_145afe678(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[7] = 0;
  param_1[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  return param_1;
}



// FUNCTION 145afe6f6 FUN_145afe6f6 body=103 status=ok
// SIG undefined FUN_145afe6f6(void)

ulonglong FUN_145afe6f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145afe740:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145afe740;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145afe75e FUN_145afe75e body=79 status=ok
// SIG undefined FUN_145afe75e(void)

void FUN_145afe75e(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145afe7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 145afe7ae FUN_145afe7ae body=103 status=ok
// SIG undefined FUN_145afe7ae(void)

ulonglong FUN_145afe7ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145afe7f8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145afe7f8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145afe816 FUN_145afe816 body=79 status=ok
// SIG undefined FUN_145afe816(void)

void FUN_145afe816(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145afe85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x30))(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 145afe865 FUN_145afe865 body=91 status=ok
// SIG undefined FUN_145afe865(void)

void FUN_145afe865(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145afe8c0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8090b0;
  puVar1[0x73] = &PTR_FUN_14b8096f0;
  puVar1[0x74] = &PTR_FUN_14b809710;
  puVar1[0x75] = &PTR_FUN_14b8097b0;
  puVar1[0x76] = &PTR_FUN_14b809800;
  return;
}



// FUNCTION 145afe8c0 FUN_145afe8c0 body=272 status=ok
// SIG undefined FUN_145afe8c0(void)

undefined8 * FUN_145afe8c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CollisionComp",1);
  uVar2 = FUN_1400b5618();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140e2e424(param_1,param_2);
  *param_1 = &PTR_FUN_14b2ca5b0;
  param_1[0x73] = &PTR_FUN_14b2cabf0;
  param_1[0x74] = &PTR_FUN_14b2cac10;
  param_1[0x75] = &PTR_FUN_14b2cacb0;
  param_1[0x76] = &PTR_FUN_14b2cad00;
  plVar1 = (longlong *)param_1[0x72];
  *(undefined4 *)(plVar1 + 0xc5) = 0xff64ff64;
  plVar1[200] = 0x4220000042a00000;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb8cf60,1);
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afe9dc FUN_145afe9dc body=82 status=ok
// SIG undefined FUN_145afe9dc(void)

void FUN_145afe9dc(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14588c37e(param_1 + 2);
  FUN_140e1e029(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145afea2e FUN_145afea2e body=54 status=ok
// SIG undefined FUN_145afea2e(void)

void FUN_145afea2e(void)

{
  FUN_145afea64();
  if (DAT_14cb7d7e8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7d7c8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145afea64 FUN_145afea64 body=373 status=ok
// SIG undefined FUN_145afea64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145afea64(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cb7d7d8;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cb7d7f0 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cb7d7c8;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cb7d7d0 = 0;
  if (DAT_14cb7d7d4 != 0) {
    FUN_1446f4a44(&DAT_14cb7d7c8,0);
  }
  _DAT_14cb7d7f8 = 0xffffffff;
  DAT_14cb7d7f0 = 0;
  if (0x80 < DAT_14cb7d7f4) {
    DAT_14cb7d7f4 = 0x80;
    FUN_1446efbd8(&DAT_14cb7d7d8,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afebe4 FUN_145afebe4 body=45 status=ok
// SIG undefined FUN_145afebe4(void)

int FUN_145afebe4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_140e55850();
  iVar2 = FUN_144a885dc();
  iVar3 = iVar1 + -1;
  if (iVar1 < iVar2) {
    iVar3 = iVar2 + -2;
  }
  iVar1 = 2;
  if (2 < iVar3) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// FUNCTION 145afec12 FUN_145afec12 body=158 status=ok
// SIG undefined FUN_145afec12(void)

bool FUN_145afec12(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145afecb8 FUN_145afecb8 body=86 status=ok
// SIG undefined FUN_145afecb8(void)

void FUN_145afecb8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_145afed0e(param_1 + 0x10,lVar2,uVar1);
    FUN_140659bfa(param_1 + 0x28,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x44,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 145afed0e FUN_145afed0e body=151 status=ok
// SIG undefined FUN_145afed0e(void)

void FUN_145afed0e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_145afed41;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_145afed41:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145afed94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 145afeda6 FUN_145afeda6 body=70 status=ok
// SIG undefined FUN_145afeda6(void)

undefined8 * FUN_145afeda6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd0f4d0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145afedec(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afedec FUN_145afedec body=207 status=ok
// SIG undefined FUN_145afedec(void)

void FUN_145afedec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcd7f50;
  FUN_1414bc010(param_1[0x1b]);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x11);
  FUN_145afeebb(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1414bbfd0(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145afeebb FUN_145afeebb body=52 status=ok
// SIG undefined FUN_145afeebb(void)

void FUN_145afeebb(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145afeef0 FUN_145afeef0 body=38 status=ok
// SIG undefined FUN_145afeef0(void)

undefined8 FUN_145afeef0(undefined8 param_1,int param_2)

{
  FUN_145afef16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145afef16 FUN_145afef16 body=450 status=ok
// SIG undefined FUN_145afef16(void)

void FUN_145afef16(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bcd9fb0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x2e);
  FUN_144a886ae(param_1 + 0x2b);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    FUN_145973f1a(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[0x21];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x1f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 10);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1414c143a();
  }
  FUN_145aff0d8(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aff0d8 FUN_145aff0d8 body=40 status=ok
// SIG undefined FUN_145aff0d8(void)

void FUN_145aff0d8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149457f4a(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145aff10c FUN_145aff10c body=62 status=ok
// SIG undefined FUN_145aff10c(void)

undefined8 * FUN_145aff10c(undefined8 *param_1)

{
  FUN_145a1f1cc();
  *param_1 = &PTR_FUN_14a16a8a0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xfffffffe;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  return param_1;
}



// FUNCTION 145aff158 FUN_145aff158 body=59 status=ok
// SIG undefined FUN_145aff158(void)

undefined8 * FUN_145aff158(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1bef30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff19e FUN_145aff19e body=62 status=ok
// SIG undefined FUN_145aff19e(void)

undefined8 * FUN_145aff19e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d34c0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 145aff1e8 FUN_145aff1e8 body=62 status=ok
// SIG undefined FUN_145aff1e8(void)

undefined8 * FUN_145aff1e8(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_14a6d39a0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145aff226 FUN_145aff226 body=40 status=ok
// SIG undefined FUN_145aff226(void)

undefined8 FUN_145aff226(undefined8 param_1,int param_2)

{
  FUN_145aff24e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff24e FUN_145aff24e body=57 status=ok
// SIG undefined FUN_145aff24e(void)

void FUN_145aff24e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9ef8a0;
  FUN_1414bc4f0(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aff292 FUN_145aff292 body=62 status=ok
// SIG undefined FUN_145aff292(void)

undefined8 * FUN_145aff292(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14abc9fb0;
  param_1[9] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xf8;
  *(undefined4 *)(param_1 + 5) = 0xff00ff00;
  return param_1;
}



// FUNCTION 145aff2d0 FUN_145aff2d0 body=40 status=ok
// SIG undefined FUN_145aff2d0(void)

undefined8 FUN_145aff2d0(undefined8 param_1,int param_2)

{
  FUN_145aff2f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff2f8 FUN_145aff2f8 body=106 status=ok
// SIG undefined FUN_145aff2f8(void)

void FUN_145aff2f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae615c0;
  param_1[5] = &PTR_FUN_14ae618c0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145aff370 FUN_145aff370 body=59 status=ok
// SIG undefined FUN_145aff370(void)

undefined8 * FUN_145aff370(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b221ae0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff3ac FUN_145aff3ac body=35 status=ok
// SIG undefined FUN_145aff3ac(void)

void FUN_145aff3ac(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = cohtml::Property::operator_new(0x90);
  FUN_145aff3d0(pvVar1,param_1);
  return;
}



// FUNCTION 145aff3d0 FUN_145aff3d0 body=111 status=ok
// SIG undefined FUN_145aff3d0(void)

undefined8 * FUN_145aff3d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140841c04();
  *param_1 = &PTR_FUN_14b4559e0;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))();
  param_1[6] = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x28))();
  param_1[7] = uVar1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 145aff440 FUN_145aff440 body=40 status=ok
// SIG undefined FUN_145aff440(void)

undefined8 FUN_145aff440(undefined8 param_1,int param_2)

{
  FUN_145aff468();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff468 FUN_145aff468 body=59 status=ok
// SIG undefined FUN_145aff468(void)

void FUN_145aff468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b45dad0;
  FUN_145aff4a3(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aff4a3 FUN_145aff4a3 body=47 status=ok
// SIG undefined FUN_145aff4a3(void)

void FUN_145aff4a3(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_143eaaf3e(param_1);
      param_1 = param_1 + 0xc0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aff4d2 FUN_145aff4d2 body=40 status=ok
// SIG undefined FUN_145aff4d2(void)

undefined8 FUN_145aff4d2(undefined8 param_1,int param_2)

{
  FUN_145aff4fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff4fa FUN_145aff4fa body=57 status=ok
// SIG undefined FUN_145aff4fa(void)

void FUN_145aff4fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b74f150;
  FUN_145aff533(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aff533 FUN_145aff533 body=49 status=ok
// SIG undefined FUN_145aff533(void)

void FUN_145aff533(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aff56c FUN_145aff56c body=65 status=ok
// SIG undefined FUN_145aff56c(void)

void FUN_145aff56c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aff5bc FUN_145aff5bc body=59 status=ok
// SIG undefined FUN_145aff5bc(void)

undefined8 * FUN_145aff5bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9113b0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aff602 FUN_145aff602 body=208 status=ok
// SIG undefined FUN_145aff602(void)

undefined8 * FUN_145aff602(undefined8 *param_1)

{
  FUN_1400ea892();
  *param_1 = &PTR_FUN_14ba865f0;
  param_1[5] = &PTR_FUN_14ba87070;
  param_1[6] = &PTR_LAB_14ba870b0;
  param_1[0x55] = &PTR_FUN_14ba87100;
  param_1[0x56] = &PTR_FUN_14ba87180;
  param_1[0x57] = &PTR_FUN_14ba87190;
  param_1[0xca] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined2 *)(param_1 + 0xcb) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x65a) = 1;
  param_1[0xd7] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 145aff6d2 FUN_145aff6d2 body=113 status=ok
// SIG undefined FUN_145aff6d2(void)

ulonglong FUN_145aff6d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145aff726:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145aff726;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145aff744 FUN_145aff744 body=140 status=ok
// SIG undefined FUN_145aff744(void)

void FUN_145aff744(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 0x28;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(lVar5);
    lVar3 = FUN_1447210f0(uVar2);
    lVar4 = FUN_1447210f0(param_2);
    if (lVar3 == lVar4) {
      lVar5 = FUN_14479d2ce(lVar5);
      if (*(int *)(lVar5 + 0x394) == *(int *)(param_2 + 0x394)) goto LAB_145aff7a3;
    }
    return;
  }
LAB_145aff7a3:
  FUN_145aff7d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 145aff7d0 FUN_145aff7d0 body=366 status=ok
// SIG undefined FUN_145aff7d0(void)

void FUN_145aff7d0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_a8 [39];
  char local_81;
  ulonglong local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lVar4 = FUN_145aff940(lVar1);
    if (lVar4 == param_3) {
      if ((longlong)(param_5 - param_4) < 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = FUN_145affa5a(lVar1);
        FUN_148935522(uVar5,uVar6);
      }
      if (param_5 != param_4) {
        uVar5 = FUN_1401b2ade(param_2);
        local_80 = (ulonglong)*(int *)(lVar1 + 0x88);
        local_81 = (longlong)local_80 < 1;
        iVar7 = 0;
        local_78[0] = 0;
        local_50 = 0;
        FUN_1456bb102(local_78,uVar5);
        iVar2 = FUN_145affb7a(lVar1,local_78);
        FUN_144a5ac3a(local_78);
        local_78[0] = 0;
        local_50 = 0;
        FUN_1456bb102(local_78,uVar5);
        iVar3 = FUN_145affae0(lVar1,local_78);
        FUN_144a5ac3a(local_78);
        if (0 < iVar2 && local_81 == '\0') {
          iVar7 = ((int)(param_5 / local_80) - (int)(param_4 / local_80)) * iVar2;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = FUN_145affa5a(lVar1);
        FUN_145aff9c8(uVar5,uVar6,iVar7 + (int)(param_5 - param_4) * iVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aff940 FUN_145aff940 body=136 status=ok
// SIG undefined FUN_145aff940(void)

void FUN_145aff940(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uVar4 = FUN_140b1c3dc();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    return;
  }
  return;
}



// FUNCTION 145aff9c8 FUN_145aff9c8 body=74 status=ok
// SIG undefined FUN_145aff9c8(void)

void FUN_145aff9c8(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0xa8) != 0) && (param_2 != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    cVar1 = FUN_145affa12(param_1 + 0xf0);
    if (cVar1 != '\0') {
      FUN_1410cebe2(param_1 + 0x60,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145affa12 FUN_145affa12 body=71 status=ok
// SIG undefined FUN_145affa12(void)

undefined8 FUN_145affa12(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_140fcdefe();
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x30))) {
      uVar2 = FUN_1414bc522(param_1,uVar1,
                            param_3 + *(int *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar1 * 4)
                            ,1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145affa5a FUN_145affa5a body=134 status=ok
// SIG undefined FUN_145affa5a(void)

void FUN_145affa5a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_145764ed6();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    return;
  }
  return;
}



// FUNCTION 145affae0 FUN_145affae0 body=153 status=ok
// SIG undefined FUN_145affae0(void)

undefined4 FUN_145affae0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0x38,local_40,param_2);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


