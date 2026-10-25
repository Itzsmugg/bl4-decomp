// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146def120 FUN_146def120 body=158 status=ok
// SIG undefined FUN_146def120(void)

void FUN_146def120(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140969c9a(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar2 = puVar2 + 3;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_146def1c0(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_146def226(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146def1c0 FUN_146def1c0 body=101 status=ok
// SIG undefined FUN_146def1c0(void)

void FUN_146def1c0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_140c0c7b9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146def226 FUN_146def226 body=63 status=ok
// SIG undefined FUN_146def226(void)

void FUN_146def226(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146def266(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146def266 FUN_146def266 body=117 status=ok
// SIG undefined FUN_146def266(void)

ulonglong FUN_146def266(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146def2dc FUN_146def2dc body=161 status=ok
// SIG undefined FUN_146def2dc(void)

void FUN_146def2dc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140969b20(param_1,iVar1);
    }
    if (uVar3 != 0) {
      lVar2 = (longlong)iVar1 * 0x1c + *param_1 + 0x18;
      do {
        *(undefined8 *)(lVar2 + -0x14) = 0x7f7fffff7f7fffff;
        *(undefined8 *)(lVar2 + -0xc) = 0xff7fffff7f7fffff;
        *(undefined1 **)(lVar2 + -4) = &DAT_ff7fffffff7fffff;
        lVar2 = lVar2 + 0x1c;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146dee32e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146def37e FUN_146def37e body=104 status=ok
// SIG undefined FUN_146def37e(void)

void FUN_146def37e(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
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
  FUN_14004b71e(param_2,param_1 + 1);
  return;
}



// FUNCTION 146def3e6 FUN_146def3e6 body=212 status=ok
// SIG undefined FUN_146def3e6(void)

void FUN_146def3e6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1406276ca(param_2,&local_48);
    lVar2 = local_48;
    lVar3 = (longlong)(int)uStack_40;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar2 + lVar4);
        if ((int)param_1[1] <= iVar1) {
          FUN_140c10d7e(param_1,(iVar1 - (int)param_1[1]) + 1);
        }
        *(undefined1 *)(*param_1 + 0x14 + (longlong)iVar1 * 0x18) = 1;
        FUN_146def4bc((longlong)iVar1 * 0x18 + *param_1,param_2);
        lVar4 = lVar4 + 4;
      } while (lVar3 * 4 != lVar4);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146def4bc FUN_146def4bc body=328 status=ok
// SIG undefined FUN_146def4bc(void)

void FUN_146def4bc(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
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
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_1[4] = 0xffffffff;
  }
  return;
}



// FUNCTION 146def604 FUN_146def604 body=48 status=ok
// SIG undefined FUN_146def604(void)

void FUN_146def604(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146def634 FUN_146def634 body=68 status=ok
// SIG undefined FUN_146def634(void)

void FUN_146def634(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146def679(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146def6b4(param_1,param_2);
  return;
}



// FUNCTION 146def679 FUN_146def679 body=59 status=ok
// SIG undefined FUN_146def679(void)

void FUN_146def679(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1407b1382(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146def6b4 FUN_146def6b4 body=112 status=ok
// SIG undefined FUN_146def6b4(void)

void FUN_146def6b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146def724 FUN_146def724 body=147 status=ok
// SIG undefined FUN_146def724(void)

void FUN_146def724(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146def7b8 FUN_146def7b8 body=122 status=ok
// SIG undefined FUN_146def7b8(void)

longlong FUN_146def7b8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146def832(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146def832 FUN_146def832 body=115 status=ok
// SIG undefined FUN_146def832(void)

undefined8 * FUN_146def832(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1407b13ba(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 146def8a6 FUN_146def8a6 body=124 status=ok
// SIG undefined FUN_146def8a6(void)

void FUN_146def8a6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146def924 FUN_146def924 body=119 status=ok
// SIG undefined FUN_146def924(void)

void FUN_146def924(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146def99c FUN_146def99c body=109 status=ok
// SIG undefined FUN_146def99c(void)

void FUN_146def99c(longlong *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (2 < (longlong)iVar1) {
    if (iVar1 != 3) {
      *(undefined4 *)(param_1 + 1) = 3;
    }
    return;
  }
  *(undefined4 *)(param_1 + 1) = 3;
  uVar3 = 3 - iVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
    FUN_146defa0a(param_1,iVar1);
  }
  puVar2 = (undefined1 *)((longlong)iVar1 * 0x38 + *param_1);
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0x7f7fffff;
    puVar2 = puVar2 + 0x38;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}



// FUNCTION 146defa0a FUN_146defa0a body=143 status=ok
// SIG undefined FUN_146defa0a(void)

void FUN_146defa0a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,4);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146defa9a FUN_146defa9a body=96 status=ok
// SIG undefined FUN_146defa9a(void)

void FUN_146defa9a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_140ad3c8a(param_1,param_2,1);
  return;
}



// FUNCTION 146defafa FUN_146defafa body=69 status=ok
// SIG undefined FUN_146defafa(void)

void FUN_146defafa(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140ad3d14(param_1);
    return;
  }
  return;
}



// FUNCTION 146defb40 FUN_146defb40 body=161 status=ok
// SIG undefined FUN_146defb40(void)

void FUN_146defb40(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          if (lVar1 != 0) goto LAB_146defbc5;
          break;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  local_28 = param_3;
  local_20 = param_4;
  FUN_146defbe2(param_1,local_14,param_2,&local_28);
LAB_146defbc5:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146defbe2 FUN_146defbe2 body=283 status=ok
// SIG undefined FUN_146defbe2(void)

undefined4 * FUN_146defbe2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ad3aa0(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined4 *)*param_4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_140ad3a08(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ad3d14(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146defcfe FUN_146defcfe body=338 status=ok
// SIG undefined FUN_146defcfe(void)

void FUN_146defcfe(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar8 = uVar3 - iVar2;
    iVar7 = iVar8;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar9 = (int)param_1[6];
      uVar11 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 0x10);
        if (iVar9 < iVar8) {
          puVar15 = (undefined8 *)((longlong)iVar9 * 0x10 + lVar5);
          plVar16 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar16 = param_1 + 2;
          }
          puVar13 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x10 + lVar5 + 0x10);
          uVar10 = uVar11;
          do {
            puVar12 = puVar13;
            uVar11 = uVar10 - 1;
            uVar14 = uVar10 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar14 = uVar11;
            }
            puVar13 = puVar12 + -2;
            uVar10 = uVar11;
          } while ((*(uint *)((longlong)plVar16 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) == 0);
          uVar6 = puVar12[-1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar6;
          plVar16 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar16 = param_1 + 2;
          }
          iVar17 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar17 = iVar9;
          }
          puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar17 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
        }
        iVar9 = iVar4;
      } while (iVar4 != -1);
      iVar9 = (int)param_1[1] - uVar3;
      if (iVar9 != 0) {
        _Dst = (void *)((longlong)iVar8 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x10 + (longlong)_Dst),(longlong)iVar9 << 4);
        iVar7 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar7;
    FUN_144a6134a(param_1 + 2,iVar8,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14472eb64(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 146defe58 FUN_146defe58 body=3646 status=ok
// SIG undefined FUN_146defe58(void)

void FUN_146defe58(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 **ppuVar14;
  int *piVar15;
  longlong lVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  float local_220;
  longlong local_218;
  undefined1 **local_210;
  undefined4 ***local_208;
  undefined1 **local_200;
  longlong **local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined1 *local_1c8;
  undefined4 *local_1c0;
  undefined4 **local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 **local_190;
  undefined4 **local_188;
  undefined2 local_180;
  undefined1 *local_178;
  longlong *local_170;
  undefined1 *local_168;
  longlong *local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 **local_128;
  undefined8 uStack_120;
  undefined4 *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar3 = *param_1;
  lVar8 = param_1[2];
  if (*(int *)(lVar8 + 0x2d0) == 0) {
    iVar13 = *(int *)(lVar3 + 0x178);
  }
  else {
    iVar13 = *(int *)(lVar3 + 0x178);
    param_2 = *(int *)(*(longlong *)(lVar8 + 0x2c8) + (longlong)(int)param_2 * 4) - iVar13;
  }
  iVar11 = param_2 + iVar13;
  lVar16 = param_1[5];
  lVar9 = (longlong)iVar11;
  fVar22 = *(float *)(*(longlong *)(lVar16 + 0x90) + lVar9 * 4);
  if ((fVar22 == 0.0) && (!NAN(fVar22))) goto LAB_146deff2c;
  if (((int)param_2 < 0) || (*(int *)(lVar3 + 0x130) <= (int)param_2)) {
    local_1ec = 0;
  }
  else {
    local_1ec = (undefined4)
                CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x128) >> 8),
                         *(int *)(*(longlong *)(lVar3 + 0x128) + (ulonglong)param_2 * 8) != -1);
  }
  local_1e0 = (longlong)(int)param_2;
  if ((*(int *)(lVar3 + 0x28) < 1) || (ABS(*(float *)(lVar3 + 0x34)) <= 0.0001)) {
    fVar22 = *(float *)(lVar3 + 0x30);
    fVar25 = fVar22;
  }
  else {
    fVar22 = *(float *)(lVar3 + 0x30);
    fVar25 = *(float *)(lVar3 + 0x34) * *(float *)(*(longlong *)(lVar3 + 0x20) + local_1e0 * 4) +
             fVar22;
  }
  local_128 = (undefined4 **)0x0;
  uStack_120 = 0;
  local_150 = (undefined1)local_1ec;
  local_138 = param_1[9];
  local_130 = param_1[10];
  local_158 = lVar3;
  local_148 = lVar16;
  local_140 = lVar8;
  if (*(char *)(lVar3 + 0x40) == '\0') {
    if ((*(int *)(lVar3 + 0x28) < 1) || (ABS(*(float *)(lVar3 + 0x34)) <= 0.0001)) {
      local_170 = &local_158;
      local_210 = &local_178;
      local_178 = &LAB_146df0c98;
      local_220 = fVar25 * 1.5;
      local_1b8 = *(undefined4 ***)(lVar16 + 0x28);
      local_228 = (undefined4 *)((longlong)local_1b8 + lVar9 * 0xc);
      uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(lVar16 + 0x30));
      local_208 = &local_128;
      local_218 = CONCAT44(local_218._4_4_,fVar22 * 1.5);
      FUN_146e2700c(lVar8 + 8,param_1[3],&local_1b8,iVar11);
    }
    else {
      local_218 = lVar3 + 8;
      local_160 = &local_158;
      local_200 = &local_168;
      local_168 = &LAB_146df0c98;
      local_220 = fVar25 * 1.5;
      local_1b8 = *(undefined4 ***)(lVar16 + 0x28);
      local_228 = (undefined4 *)((longlong)local_1b8 + lVar9 * 0xc);
      uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(lVar16 + 0x30));
      local_1f8 = (longlong **)&local_128;
      local_208 = (undefined4 ***)CONCAT44(local_208._4_4_,iVar13);
      local_210 = (undefined1 **)CONCAT44(local_210._4_4_,0x3fc00000);
      FUN_146e28bea(lVar8 + 8,param_1[3],&local_1b8,iVar11);
    }
  }
  local_1f0 = iVar11;
  local_1e8 = lVar9;
  if ((int)uStack_120 != 0) {
    if (3 < (int)uStack_120) {
      FUN_146df0f04();
      FUN_146def99c(&local_128);
    }
    if ((int)uStack_120 != 0) {
      local_1d8 = (longlong)(int)uStack_120 * 0x38;
      lVar8 = 0;
      do {
        lVar16 = (longlong)*(int *)((longlong)local_128 + lVar8 + 8);
        piVar15 = (int *)(lVar16 * 0xc + *(longlong *)(param_1[2] + 8));
        if ((int)((longlong *)param_1[0xb])[1] == 0) {
          fVar24 = *(float *)((longlong)local_128 + lVar8 + 0x18);
          fVar22 = *(float *)((longlong)local_128 + lVar8 + 0x10);
          fVar26 = *(float *)((longlong)local_128 + lVar8 + 0x14);
LAB_146df01dd:
          if (((char)local_1ec == '\0') ||
             (iVar13 = *(int *)(*(longlong *)(lVar3 + 0x118) +
                               (longlong)*(int *)(*(longlong *)(param_1[2] + 0x2a8) + lVar16 * 4) *
                               4), iVar13 == -1)) {
LAB_146df0332:
            lVar18 = (longlong)piVar15[2];
            lVar9 = *(longlong *)(param_1[5] + 0x28);
            lVar19 = (longlong)piVar15[1];
            lVar21 = (longlong)*piVar15;
            fVar27 = *(float *)(lVar9 + lVar21 * 0xc);
            fVar28 = *(float *)(lVar9 + 4 + lVar21 * 0xc);
            fVar30 = *(float *)(lVar9 + 8 + lVar21 * 0xc);
            fVar23 = *(float *)(lVar9 + 8 + lVar18 * 0xc) - fVar30;
            fVar31 = *(float *)(lVar9 + 4 + lVar18 * 0xc) - fVar28;
            fVar32 = *(float *)(lVar9 + lVar18 * 0xc) - fVar27;
            fVar30 = *(float *)(lVar9 + 8 + lVar19 * 0xc) - fVar30;
            fVar28 = *(float *)(lVar9 + 4 + lVar19 * 0xc) - fVar28;
            fVar27 = *(float *)(lVar9 + lVar19 * 0xc) - fVar27;
            fVar29 = fVar27 * fVar31 - fVar32 * fVar28;
            fVar32 = fVar30 * fVar32 - fVar23 * fVar27;
            fVar27 = fVar28 * fVar23 - fVar30 * fVar31;
            fVar28 = fVar29 * fVar29 + fVar27 * fVar27 + fVar32 * fVar32;
            if (((fVar28 != 1.0) || (fVar30 = fVar27, fVar31 = fVar29, fVar23 = fVar32, NAN(fVar28))
                ) && (fVar30 = (float)DAT_14c846330, fVar31 = DAT_14c846338,
                     fVar23 = DAT_14c846330._4_4_, 1e-08 <= fVar28)) {
              fVar28 = 1.0 / SQRT(fVar28);
              fVar30 = fVar27 * fVar28;
              fVar31 = fVar29 * fVar28;
              fVar23 = fVar32 * fVar28;
            }
            fVar27 = (*(float *)(lVar9 + local_1e8 * 0xc) -
                     *(float *)((longlong)local_128 + lVar8 + 0x1c)) * fVar30 +
                     (*(float *)(lVar9 + 4 + local_1e8 * 0xc) -
                     *(float *)((longlong)local_128 + lVar8 + 0x20)) * fVar23 +
                     (*(float *)(lVar9 + 8 + local_1e8 * 0xc) -
                     *(float *)((longlong)local_128 + lVar8 + 0x24)) * fVar31;
            bVar20 = fVar27 < 0.0;
            if (*(char *)(lVar3 + 0x180) == '\x01') {
              lVar9 = *(longlong *)param_1[9];
              uVar1 = *(uint *)(lVar9 + 4 + local_1e8 * 8);
              uVar12 = *(uint *)(lVar9 + local_1e8 * 8) & 0xfffffffe;
              if (((((*(uint *)(lVar9 + 4 + lVar21 * 8) ^ uVar1) & *(uint *)(lVar9 + lVar21 * 8) &
                    uVar12) == 0) &&
                  (((*(uint *)(lVar9 + 4 + lVar19 * 8) ^ uVar1) & *(uint *)(lVar9 + lVar19 * 8) &
                   uVar12) == 0)) &&
                 ((((*(uint *)(lVar9 + 4 + lVar18 * 8) ^ uVar1) & *(uint *)(lVar9 + lVar18 * 8) &
                   uVar12) == 0 &&
                  (((uVar1 ^ *(uint *)(*(longlong *)param_1[10] + 4 + lVar16 * 8)) &
                    *(uint *)(*(longlong *)param_1[10] + lVar16 * 8) & uVar12) == 0)))) {
                uVar17 = 0;
                iVar11 = local_1f0;
              }
              else {
                bVar20 = 0.0 <= fVar27;
                uVar17 = 1;
                iVar11 = local_1f0;
              }
            }
            else {
LAB_146df049e:
              uVar17 = 0;
            }
          }
          else {
            if (iVar13 < *(int *)(*(longlong *)(lVar3 + 0x128) + local_1e0 * 8)) {
              bVar20 = true;
              goto LAB_146df049e;
            }
            uVar17 = 0;
            bVar20 = false;
            if (iVar13 <= *(int *)(*(longlong *)(lVar3 + 0x128) + 4 + local_1e0 * 8))
            goto LAB_146df0332;
          }
          piVar4 = (int *)param_1[6];
          LOCK();
          iVar13 = *piVar4;
          *piVar4 = *piVar4 + 1;
          UNLOCK();
          uVar5 = *(undefined8 *)piVar15;
          iVar7 = piVar15[2];
          lVar16 = *(longlong *)(lVar3 + 0x88);
          lVar18 = (longlong)iVar13;
          lVar9 = lVar18 * 0x10;
          *(int *)(lVar16 + lVar9) = iVar11;
          *(undefined8 *)(lVar16 + 4 + lVar9) = uVar5;
          *(int *)(lVar16 + 0xc + lVar9) = iVar7;
          lVar16 = *(longlong *)(lVar3 + 0x98);
          *(float *)(lVar16 + lVar18 * 0xc) = fVar22;
          *(float *)(lVar16 + 4 + lVar18 * 0xc) = fVar26;
          *(float *)(lVar16 + 8 + lVar18 * 0xc) = fVar24;
          *(bool *)(*(longlong *)(lVar3 + 0xa8) + lVar18) = bVar20;
          *(undefined1 *)(*(longlong *)(lVar3 + 0x138) + lVar18) = uVar17;
        }
        else {
          lVar21 = (longlong)*piVar15;
          lVar18 = (longlong)piVar15[1];
          lVar9 = (longlong)piVar15[2];
          fVar22 = *(float *)((longlong)local_128 + lVar8 + 0x10);
          fVar26 = *(float *)((longlong)local_128 + lVar8 + 0x14);
          fVar24 = *(float *)((longlong)local_128 + lVar8 + 0x18);
          if (*(int *)(lVar3 + 0x28) < 1) {
            fVar27 = *(float *)(lVar3 + 0x30);
          }
          else {
            fVar27 = *(float *)(lVar3 + 0x30);
            fVar28 = *(float *)(lVar3 + 0x34);
            if (0.0001 < ABS(fVar28)) {
              lVar10 = (longlong)*(int *)(lVar3 + 0x178);
              lVar19 = *(longlong *)(lVar3 + 0x20);
              fVar27 = (fVar28 * *(float *)(lVar19 + (lVar9 - lVar10) * 4) + fVar27) * fVar24 +
                       (*(float *)(lVar19 + (lVar21 - lVar10) * 4) * fVar28 + fVar27) * fVar22 +
                       (*(float *)(lVar19 + (lVar18 - lVar10) * 4) * fVar28 + fVar27) * fVar26;
              iVar11 = local_1f0;
            }
          }
          lVar19 = *(longlong *)param_1[0xb];
          fVar30 = ((*(float *)(lVar19 + local_1e8 * 0xc) -
                    *(float *)(lVar19 + lVar21 * 0xc) * fVar22) -
                   *(float *)(lVar19 + lVar18 * 0xc) * fVar26) -
                   *(float *)(lVar19 + lVar9 * 0xc) * fVar24;
          fVar31 = ((*(float *)(lVar19 + 4 + local_1e8 * 0xc) -
                    *(float *)(lVar19 + 4 + lVar21 * 0xc) * fVar22) -
                   *(float *)(lVar19 + 4 + lVar18 * 0xc) * fVar26) -
                   *(float *)(lVar19 + 4 + lVar9 * 0xc) * fVar24;
          fVar28 = ((*(float *)(lVar19 + 8 + local_1e8 * 0xc) -
                    *(float *)(lVar19 + 8 + lVar21 * 0xc) * fVar22) -
                   *(float *)(lVar19 + 8 + lVar18 * 0xc) * fVar26) -
                   *(float *)(lVar19 + 8 + lVar9 * 0xc) * fVar24;
          if ((fVar27 + fVar25) * (fVar27 + fVar25) <=
              fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31) goto LAB_146df01dd;
        }
        lVar8 = lVar8 + 0x38;
      } while (local_1d8 != lVar8);
    }
  }
  lVar16 = local_1e0 * 0x50;
  lVar8 = *(longlong *)(lVar3 + 0x168) + lVar16;
  local_108 = lVar8 + 0x10;
  ppuVar14 = (undefined4 **)(*(longlong *)(lVar3 + 0x168) + lVar16);
  local_110 = (undefined4 *)&DAT_100000000;
  local_100 = 0xffffffff;
  local_f8 = 0;
  if (*(int *)(lVar8 + 0x28) != 0) {
    FUN_1449c0562(&local_110);
  }
  lVar8 = local_1e8;
  local_1a0 = local_100;
  uVar5 = local_1a0;
  local_198 = local_f8;
  local_194 = local_f4;
  uStack_1b0 = local_110;
  local_1a8 = local_108;
  local_180 = 0;
  local_1a0._4_4_ = (int)((ulonglong)local_100 >> 0x20);
  local_1b8 = ppuVar14;
  local_190 = ppuVar14;
  local_188 = ppuVar14;
  if (local_1a0._4_4_ < *(int *)(local_108 + 0x18)) {
    iVar13 = local_1a0._4_4_;
    local_1a0 = uVar5;
    do {
      (*local_1b8)[(longlong)iVar13 * 4 + 1] =
           *(float *)(param_1 + 1) + (float)(*local_1b8)[(longlong)iVar13 * 4 + 1];
      if (0.1 < (float)(*local_1b8)[(longlong)local_1a0._4_4_ * 4 + 1]) {
        FUN_146defa9a(local_190);
        local_180 = CONCAT11(local_180._1_1_,1);
      }
      local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_1a0 & ~uStack_1b0._4_4_);
      FUN_1449c0562(&uStack_1b0);
      iVar13 = local_1a0._4_4_;
    } while (local_1a0._4_4_ < *(int *)(local_1a8 + 0x18));
    uVar5 = local_1a0;
    if (((local_180 & 1) != 0) && (local_180._1_1_ == '\x01')) {
      FUN_146defafa(local_188,*(int *)(local_188 + 1) - *(int *)((longlong)local_188 + 0x34));
      uVar5 = local_1a0;
    }
  }
  local_1a0 = uVar5;
  if (0 < *(int *)(param_1[2] + 0x158)) {
    local_208 = &local_1b8;
    local_1b8 = (undefined4 **)0x0;
    uStack_1b0 = (undefined4 *)0x0;
    local_1c0 = &local_1cc;
    local_210 = &local_1c8;
    local_1c8 = &LAB_146df166c;
    local_220 = fVar25 * 1.5;
    local_110 = *(undefined4 **)(param_1[5] + 0x28);
    local_228 = local_110 + lVar8 * 3;
    local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(param_1[5] + 0x30));
    local_218 = CONCAT44(local_218._4_4_,*(float *)(lVar3 + 0x44) * 1.5);
    cVar6 = FUN_146e2700c(param_1[2] + 0x150,param_1[4],&local_110,iVar11);
    if (cVar6 != '\0') {
      if (3 < (int)uStack_1b0) {
        FUN_146df166f(local_1b8);
        FUN_146def99c(&local_1b8);
      }
      ppuVar14 = local_1b8;
      if ((int)uStack_1b0 != 0) {
        lVar8 = (longlong)(int)uStack_1b0;
        lVar9 = 0;
        do {
          uVar2 = *(undefined4 *)
                   (*(longlong *)(param_1[2] + 0x2b8) +
                   (longlong)*(int *)((longlong)ppuVar14 + lVar9 + 8) * 4);
          local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar2);
          local_1cc = 0;
          FUN_146defb40(*(longlong *)(lVar3 + 0x168) + lVar16,uVar2,&local_110,&local_1cc);
          lVar9 = lVar9 + 0x38;
        } while (lVar8 * 0x38 - lVar9 != 0);
      }
    }
    iVar11 = local_1f0;
    if (local_1b8 != (undefined4 **)0x0) {
      FUN_1400020a8(local_1b8);
      iVar11 = local_1f0;
    }
  }
  lVar8 = *(longlong *)(lVar3 + 0x168);
  iVar13 = *(int *)(lVar8 + 8 + lVar16);
  iVar7 = *(int *)(lVar8 + 0x34 + lVar16);
  if (3 < iVar13 - iVar7) {
    local_110 = &local_1cc;
    local_1b8 = &local_110;
    FUN_146df1dd6(lVar8 + lVar16);
    FUN_140ad3d14(lVar8 + lVar16);
    iVar13 = *(int *)(*(longlong *)(lVar3 + 0x168) + 8 + lVar16);
    iVar7 = *(int *)(*(longlong *)(lVar3 + 0x168) + 0x34 + lVar16);
  }
  if (iVar7 < iVar13) {
    piVar15 = (int *)param_1[7];
    LOCK();
    iVar13 = *piVar15;
    *piVar15 = *piVar15 + 1;
    UNLOCK();
    lVar8 = (longlong)iVar13;
    *(int *)(*(longlong *)(lVar3 + 0x148) + lVar8 * 4) = iVar11;
    ppuVar14 = (undefined4 **)(*(longlong *)(lVar3 + 0x168) + lVar16);
    local_108 = *(longlong *)(lVar3 + 0x168) + 0x10 + lVar16;
    local_110 = (undefined4 *)&DAT_100000000;
    local_100 = 0xffffffff;
    local_f8 = 0;
    if (*(int *)(local_108 + 0x18) != 0) {
      FUN_1449c0562(&local_110);
    }
    local_1a0 = local_100;
    uVar5 = local_1a0;
    local_198 = local_f8;
    local_194 = local_f4;
    uStack_1b0 = local_110;
    local_1a8 = local_108;
    local_180 = 0;
    local_1a0._4_4_ = (int)((ulonglong)local_100 >> 0x20);
    local_1b8 = ppuVar14;
    local_1a0 = uVar5;
    local_190 = ppuVar14;
    local_188 = ppuVar14;
    if (local_1a0._4_4_ < *(int *)(local_108 + 0x18)) {
      iVar13 = 0;
      iVar11 = local_1a0._4_4_;
      do {
        if (iVar13 < 3) {
          lVar16 = (longlong)iVar13;
          iVar13 = iVar13 + 1;
          *(undefined4 *)(*(longlong *)(lVar3 + 0x158) + lVar8 * 0xc + lVar16 * 4) =
               (*local_1b8)[(longlong)iVar11 * 4];
        }
        else {
          FUN_146defa9a(local_190);
          local_180 = CONCAT11(local_180._1_1_,1);
        }
        local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_1a0 & ~uStack_1b0._4_4_);
        FUN_1449c0562(&uStack_1b0);
        iVar11 = local_1a0._4_4_;
      } while (local_1a0._4_4_ < *(int *)(local_1a8 + 0x18));
      if (((local_180 & 1) != 0) && (local_180._1_1_ == '\x01')) {
        FUN_146defafa(local_188,*(int *)(local_188 + 1) - *(int *)((longlong)local_188 + 0x34));
      }
      if (2 < iVar13) goto LAB_146df0b9f;
    }
    else {
      iVar13 = 0;
    }
    lVar16 = (longlong)iVar13;
    do {
      lVar16 = lVar16 + 1;
      *(undefined4 *)(*(longlong *)(lVar3 + 0x158) + lVar8 * 0xc + -4 + lVar16 * 4) = 0xffffffff;
    } while ((int)lVar16 != 3);
  }
LAB_146df0b9f:
  if (local_128 != (undefined4 **)0x0) {
    FUN_1400020a8();
  }
LAB_146deff2c:
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df0ca2 FUN_146df0ca2 body=610 status=ok
// SIG undefined FUN_146df0ca2(void)

undefined8 FUN_146df0ca2(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar4 = *param_1;
  lVar5 = (longlong)param_3;
  piVar11 = (int *)(lVar5 * 0xc + *(longlong *)(param_1[3] + 8));
  if (((char)param_1[1] == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)(lVar4 + 0x118) +
                      (longlong)*(int *)(*(longlong *)(param_1[3] + 0x2a8) + lVar5 * 4) * 4),
     iVar7 != -1)) {
    lVar13 = (longlong)(int)param_2 - (longlong)*(int *)(lVar4 + 0x178);
    if ((iVar7 < *(int *)(*(longlong *)(lVar4 + 0x128) + lVar13 * 8)) ||
       (*(int *)(*(longlong *)(lVar4 + 0x128) + 4 + lVar13 * 8) < iVar7)) goto LAB_146df0d91;
  }
  if (*(char *)(lVar4 + 0x180) == '\x01') {
    lVar13 = *(longlong *)param_1[4];
    lVar14 = (longlong)(int)param_2;
    uVar12 = *(uint *)(lVar13 + lVar14 * 8);
    if (((uVar12 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar14 * 8) & 1) != 0)) {
      lVar9 = (longlong)*piVar11;
      uVar1 = *(uint *)(lVar13 + lVar9 * 8);
      if (((uVar1 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar9 * 8) & 1) != 0)) {
        lVar10 = (longlong)piVar11[1];
        uVar2 = *(uint *)(lVar13 + lVar10 * 8);
        if (((uVar2 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar10 * 8) & 1) != 0)) {
          lVar15 = (longlong)piVar11[2];
          uVar3 = *(uint *)(lVar13 + lVar15 * 8);
          if ((((uVar3 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar15 * 8) & 1) != 0)) &&
             ((((uVar12 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar14 * 8) & 1) == 0)) ||
              ((((((uVar1 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar9 * 8) & 1) == 0)) &&
                 (((uVar2 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar10 * 8) & 1) == 0)))) &&
                (((uVar3 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar15 * 8) & 1) == 0)))) &&
               (((*(byte *)(*(longlong *)param_1[5] + lVar5 * 8) & 1) == 0 ||
                ((*(byte *)(*(longlong *)param_1[5] + 4 + lVar5 * 8) & 1) == 0))))))))
          goto LAB_146df0d91;
        }
      }
    }
    return 0;
  }
LAB_146df0d91:
  uVar6 = CONCAT71((int7)(int3)((uint)param_3 >> 8),1);
  if (*(int *)(lVar4 + 0xd0) != *(int *)(lVar4 + 0xfc)) {
    lVar5 = lVar4 + 0x100;
    if (*(longlong *)(lVar4 + 0x108) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x108);
    }
    uVar12 = *(int *)(lVar4 + 0x110) - 1;
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             ((*piVar11 + param_2 * 0x40 + (param_2 >> 2) + 0x9e3779b9 ^ param_2) &
                             uVar12) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)iVar7 * 0x10) ==
            CONCAT44(*piVar11,param_2)) {
          return 0;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar4 + 200) + 8);
      } while (iVar7 != -1);
    }
    iVar8 = param_2 * 0x40 + (param_2 >> 2) + -0x61c88647;
    iVar7 = *(int *)(lVar5 + (ulonglong)((piVar11[1] + iVar8 ^ param_2) & uVar12) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)iVar7 * 0x10) ==
            CONCAT44(piVar11[1],param_2)) {
          return 0;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar4 + 200) + 8);
      } while (iVar7 != -1);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)((iVar8 + piVar11[2] ^ param_2) & uVar12) * 4);
    if (iVar7 != -1) {
      do {
        bVar16 = *(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)iVar7 * 0x10) ==
                 CONCAT44(piVar11[2],param_2);
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),!bVar16);
        if (bVar16) {
          return uVar6;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar4 + 200) + 8);
      } while (iVar7 != -1);
    }
  }
  return uVar6;
}



// FUNCTION 146df0f04 FUN_146df0f04 body=1064 status=ok
// SIG undefined FUN_146df0f04(void)

void FUN_146df0f04(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  memset(local_368,0,0x2f0);
  local_370 = (ulonglong)param_2 * 0x38 + param_1 + -0x38;
  local_378 = param_1;
  fVar29 = logf((float)(int)param_2);
  local_368[0] = (int)(longlong)(fVar29 + fVar29);
  plVar22 = &local_378;
  while( true ) {
    puVar15 = (undefined8 *)*plVar22;
    puVar23 = (undefined8 *)plVar22[1];
    iVar25 = (int)plVar22[2];
    iVar16 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar15) >> 3);
    puVar26 = puVar23;
    puVar27 = puVar15;
    if (iVar25 != 0) break;
LAB_146df12fb:
    FUN_146df132d(puVar15);
LAB_146df12e9:
    plVar22 = plVar22 + -3;
    if (plVar22 < &local_378) {
      if ((local_38 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_146df0f9e:
  uVar18 = iVar16 * -0x49249249 + 1;
  if (8 < (int)uVar18) {
    uVar19 = (ulonglong)(uVar18 >> 1);
    uVar2 = puVar15[uVar19 * 7 + 6];
    uVar3 = puVar15[uVar19 * 7];
    uVar4 = (puVar15 + uVar19 * 7)[1];
    uVar5 = puVar15[uVar19 * 7 + 2];
    uVar6 = (puVar15 + uVar19 * 7 + 2)[1];
    uVar7 = puVar15[uVar19 * 7 + 4];
    uVar8 = (puVar15 + uVar19 * 7 + 4)[1];
    puVar15[uVar19 * 7 + 6] = puVar15[6];
    uVar9 = *puVar15;
    uVar10 = puVar15[1];
    uVar11 = puVar15[2];
    uVar12 = puVar15[3];
    uVar13 = puVar15[5];
    puVar15[uVar19 * 7 + 4] = puVar15[4];
    (puVar15 + uVar19 * 7 + 4)[1] = uVar13;
    puVar15[uVar19 * 7 + 2] = uVar11;
    (puVar15 + uVar19 * 7 + 2)[1] = uVar12;
    puVar15[uVar19 * 7] = uVar9;
    (puVar15 + uVar19 * 7)[1] = uVar10;
    puVar15[6] = uVar2;
    puVar15[4] = uVar7;
    puVar15[5] = uVar8;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    *puVar15 = uVar3;
    puVar15[1] = uVar4;
    puVar20 = puVar23 + 7;
    puVar17 = puVar15;
    do {
      puVar14 = puVar17 + 7;
      puVar24 = puVar17 + 7;
      do {
        puVar17 = puVar24;
        puVar21 = puVar14;
        if (puVar23 < puVar17) break;
        puVar14 = puVar21 + 7;
        puVar24 = puVar17 + 7;
      } while (*(float *)((longlong)puVar17 + 0x34) < *(float *)((longlong)puVar15 + 0x34) ||
               *(float *)((longlong)puVar17 + 0x34) == *(float *)((longlong)puVar15 + 0x34));
      puVar14 = puVar20 + -0xe;
      do {
        puVar24 = puVar20;
        puVar28 = puVar14;
        puVar20 = puVar24 + -7;
        if (puVar20 <= puVar15) break;
        puVar14 = puVar28 + -7;
      } while (*(float *)((longlong)puVar15 + 0x34) < *(float *)((longlong)puVar24 + -4) ||
               *(float *)((longlong)puVar15 + 0x34) == *(float *)((longlong)puVar24 + -4));
      if (puVar20 < puVar17) goto LAB_146df1113;
      uVar2 = puVar17[6];
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = puVar17[4];
      uVar8 = puVar17[5];
      puVar17[6] = puVar24[-1];
      uVar9 = *puVar20;
      uVar10 = puVar24[-6];
      uVar11 = puVar24[-5];
      uVar12 = puVar24[-4];
      uVar13 = puVar24[-2];
      puVar17[4] = puVar24[-3];
      puVar17[5] = uVar13;
      puVar17[2] = uVar11;
      puVar17[3] = uVar12;
      *puVar17 = uVar9;
      puVar17[1] = uVar10;
      puVar24[-1] = uVar2;
      puVar24[-3] = uVar7;
      puVar24[-2] = uVar8;
      puVar24[-5] = uVar5;
      puVar24[-4] = uVar6;
      *puVar20 = uVar3;
      puVar24[-6] = uVar4;
    } while( true );
  }
  for (; puVar26 = puVar15, puVar27 = puVar15, puVar15 < puVar23; puVar23 = puVar23 + -7) {
    while (puVar20 = puVar26, puVar26 = puVar27 + 7, puVar26 <= puVar23) {
      pfVar1 = (float *)((longlong)puVar27 + 0x6c);
      puVar27 = puVar26;
      if (*pfVar1 < *(float *)((longlong)puVar20 + 0x34) ||
          *pfVar1 == *(float *)((longlong)puVar20 + 0x34)) {
        puVar26 = puVar20;
      }
    }
    local_48 = puVar20[6];
    local_78 = *puVar20;
    uStack_70 = puVar20[1];
    local_68 = puVar20[2];
    uStack_60 = puVar20[3];
    local_58 = puVar20[4];
    uStack_50 = puVar20[5];
    uVar7 = local_78;
    uVar8 = uStack_70;
    puVar20[6] = puVar23[6];
    uVar2 = *puVar23;
    uVar3 = puVar23[1];
    uVar4 = puVar23[2];
    uVar5 = puVar23[3];
    uVar6 = puVar23[5];
    puVar20[4] = puVar23[4];
    puVar20[5] = uVar6;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *puVar20 = uVar2;
    puVar20[1] = uVar3;
    puVar23[6] = local_48;
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    puVar23[4] = local_58;
    puVar23[5] = uStack_50;
    puVar23[2] = local_68;
    puVar23[3] = uStack_60;
    *(undefined4 *)puVar23 = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
    *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
    local_78 = uVar7;
    uStack_70 = uVar8;
  }
  goto LAB_146df12e9;
LAB_146df1113:
  local_48 = puVar15[6];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  local_58 = puVar15[4];
  uStack_50 = puVar15[5];
  uVar7 = local_78;
  uVar8 = uStack_70;
  puVar15[6] = puVar24[-1];
  uVar2 = *puVar20;
  uVar3 = puVar24[-6];
  uVar4 = puVar24[-5];
  uVar5 = puVar24[-4];
  uVar6 = puVar24[-2];
  puVar15[4] = puVar24[-3];
  puVar15[5] = uVar6;
  puVar15[2] = uVar4;
  puVar15[3] = uVar5;
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  puVar24[-1] = local_48;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar24[-3] = local_58;
  puVar24[-2] = uStack_50;
  puVar24[-5] = local_68;
  puVar24[-4] = uStack_60;
  *(undefined4 *)puVar20 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar24 + -0x34) = local_78._4_4_;
  *(undefined4 *)(puVar24 + -6) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar24 + -0x2c) = uStack_70._4_4_;
  iVar25 = iVar25 + -1;
  puVar24 = puVar24 + -0xe;
  local_78 = uVar7;
  uStack_70 = uVar8;
  if ((longlong)puVar28 - (longlong)puVar27 < (longlong)puVar26 - (longlong)puVar21) {
    if (puVar17 < puVar23) {
      *plVar22 = (longlong)puVar17;
      plVar22[1] = (longlong)puVar23;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar21 = puVar15;
    if (puVar20 <= puVar15 + 7) goto LAB_146df12e9;
  }
  else {
    if (puVar15 + 7 < puVar20) {
      *plVar22 = (longlong)puVar15;
      plVar22[1] = (longlong)puVar24;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar15 = puVar17;
    puVar24 = puVar23;
    puVar28 = puVar23;
    if (puVar23 <= puVar17) goto LAB_146df12e9;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar21) >> 3);
  puVar23 = puVar24;
  puVar26 = puVar28;
  puVar27 = puVar21;
  if (iVar25 == 0) goto LAB_146df12fb;
  goto LAB_146df0f9e;
}



// FUNCTION 146df132d FUN_146df132d body=829 status=ok
// SIG undefined FUN_146df132d(void)

void FUN_146df132d(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar21 = iVar16;
joined_r0x000146df1361:
    do {
      iVar18 = iVar16 * 2 + 1;
      if (iVar18 < (int)param_2) {
        iVar20 = iVar16 * 2 + 2;
        if ((iVar20 < (int)param_2) &&
           (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34),
           fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
          iVar18 = iVar20;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          puVar22 = param_1 + (longlong)iVar16 * 7;
          puVar19 = param_1 + (longlong)iVar18 * 7;
          local_18 = puVar22[6];
          uVar4 = *puVar22;
          uVar5 = puVar22[1];
          uVar6 = puVar22[2];
          uVar7 = puVar22[3];
          uVar8 = puVar22[4];
          uVar9 = puVar22[5];
          puVar22[6] = puVar19[6];
          uVar10 = *puVar19;
          uVar11 = puVar19[1];
          uVar12 = puVar19[2];
          uVar13 = puVar19[3];
          uVar14 = puVar19[5];
          puVar22[4] = puVar19[4];
          puVar22[5] = uVar14;
          puVar22[2] = uVar12;
          puVar22[3] = uVar13;
          *puVar22 = uVar10;
          puVar22[1] = uVar11;
          puVar19[6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar19 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_20._4_4_;
          *(undefined4 *)(puVar19 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          iVar16 = iVar18;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
          goto joined_r0x000146df1361;
        }
      }
      bVar23 = iVar21 != 0;
      iVar16 = iVar21 + -1;
      iVar21 = iVar16;
    } while (bVar23);
    if (1 < (int)param_2) {
      uVar17 = (ulonglong)param_2 - 1;
      local_18 = param_1[6];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar9 = param_1[5];
      param_1[6] = param_1[uVar17 * 7 + 6];
      uVar10 = param_1[uVar17 * 7];
      uVar11 = (param_1 + uVar17 * 7)[1];
      uVar12 = param_1[uVar17 * 7 + 2];
      uVar13 = (param_1 + uVar17 * 7 + 2)[1];
      uVar14 = (param_1 + uVar17 * 7 + 4)[1];
      param_1[4] = param_1[uVar17 * 7 + 4];
      param_1[5] = uVar14;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[uVar17 * 7 + 6] = local_18;
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar19 = param_1 + uVar17 * 7 + 4;
      *(undefined4 *)puVar19 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
      puVar19 = param_1 + uVar17 * 7 + 2;
      *(undefined4 *)puVar19 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
      puVar19 = param_1 + uVar17 * 7;
      *(undefined4 *)puVar19 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
      local_48 = uVar4;
      uStack_40 = uVar5;
      local_38 = uVar6;
      uStack_30 = uVar7;
      local_28 = uVar8;
      uStack_20 = uVar9;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar18 = 1;
          iVar21 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar20 = iVar18;
            if (((longlong)iVar16 < (longlong)uVar17) &&
               (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34),
               fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
              iVar20 = iVar16;
            }
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar21 * 0x38 + 0x34);
            if (fVar3 < *pfVar2 || fVar3 == *pfVar2) break;
            puVar22 = param_1 + (longlong)iVar21 * 7;
            puVar19 = param_1 + (longlong)iVar20 * 7;
            uVar4 = puVar22[6];
            uVar5 = *puVar22;
            uVar6 = puVar22[1];
            uVar7 = puVar22[2];
            uVar8 = puVar22[3];
            uVar9 = puVar22[4];
            uVar10 = puVar22[5];
            puVar22[6] = puVar19[6];
            uVar11 = *puVar19;
            uVar12 = puVar19[1];
            uVar13 = puVar19[2];
            uVar14 = puVar19[3];
            uVar15 = puVar19[5];
            puVar22[4] = puVar19[4];
            puVar22[5] = uVar15;
            puVar22[2] = uVar13;
            puVar22[3] = uVar14;
            *puVar22 = uVar11;
            puVar22[1] = uVar12;
            puVar19[6] = uVar4;
            puVar19[4] = uVar9;
            puVar19[5] = uVar10;
            puVar19[2] = uVar7;
            puVar19[3] = uVar8;
            *puVar19 = uVar5;
            puVar19[1] = uVar6;
            iVar16 = iVar20 * 2;
            iVar18 = iVar20 * 2 + 1;
            iVar21 = iVar20;
          } while ((longlong)iVar18 < (longlong)uVar17);
          uVar1 = uVar17 - 1;
          local_18 = param_1[6];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          uVar8 = param_1[4];
          uVar9 = param_1[5];
          param_1[6] = param_1[uVar1 * 7 + 6];
          uVar10 = param_1[uVar1 * 7];
          uVar11 = (param_1 + uVar1 * 7)[1];
          uVar12 = param_1[uVar1 * 7 + 2];
          uVar13 = (param_1 + uVar1 * 7 + 2)[1];
          uVar14 = (param_1 + uVar1 * 7 + 4)[1];
          param_1[4] = param_1[uVar1 * 7 + 4];
          param_1[5] = uVar14;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[uVar1 * 7 + 6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          puVar19 = param_1 + uVar1 * 7 + 4;
          *(undefined4 *)puVar19 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
          puVar19 = param_1 + uVar1 * 7 + 2;
          *(undefined4 *)puVar19 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
          puVar19 = param_1 + uVar1 * 7;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          bVar23 = 2 < uVar17;
          uVar17 = uVar1;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
        } while (bVar23);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df166f FUN_146df166f body=1064 status=ok
// SIG undefined FUN_146df166f(void)

void FUN_146df166f(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  memset(local_368,0,0x2f0);
  local_370 = (ulonglong)param_2 * 0x38 + param_1 + -0x38;
  local_378 = param_1;
  fVar29 = logf((float)(int)param_2);
  local_368[0] = (int)(longlong)(fVar29 + fVar29);
  plVar22 = &local_378;
  while( true ) {
    puVar15 = (undefined8 *)*plVar22;
    puVar23 = (undefined8 *)plVar22[1];
    iVar25 = (int)plVar22[2];
    iVar16 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar15) >> 3);
    puVar26 = puVar23;
    puVar27 = puVar15;
    if (iVar25 != 0) break;
LAB_146df1a66:
    FUN_146df1a98(puVar15);
LAB_146df1a54:
    plVar22 = plVar22 + -3;
    if (plVar22 < &local_378) {
      if ((local_38 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_146df1709:
  uVar18 = iVar16 * -0x49249249 + 1;
  if (8 < (int)uVar18) {
    uVar19 = (ulonglong)(uVar18 >> 1);
    uVar2 = puVar15[uVar19 * 7 + 6];
    uVar3 = puVar15[uVar19 * 7];
    uVar4 = (puVar15 + uVar19 * 7)[1];
    uVar5 = puVar15[uVar19 * 7 + 2];
    uVar6 = (puVar15 + uVar19 * 7 + 2)[1];
    uVar7 = puVar15[uVar19 * 7 + 4];
    uVar8 = (puVar15 + uVar19 * 7 + 4)[1];
    puVar15[uVar19 * 7 + 6] = puVar15[6];
    uVar9 = *puVar15;
    uVar10 = puVar15[1];
    uVar11 = puVar15[2];
    uVar12 = puVar15[3];
    uVar13 = puVar15[5];
    puVar15[uVar19 * 7 + 4] = puVar15[4];
    (puVar15 + uVar19 * 7 + 4)[1] = uVar13;
    puVar15[uVar19 * 7 + 2] = uVar11;
    (puVar15 + uVar19 * 7 + 2)[1] = uVar12;
    puVar15[uVar19 * 7] = uVar9;
    (puVar15 + uVar19 * 7)[1] = uVar10;
    puVar15[6] = uVar2;
    puVar15[4] = uVar7;
    puVar15[5] = uVar8;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    *puVar15 = uVar3;
    puVar15[1] = uVar4;
    puVar20 = puVar23 + 7;
    puVar17 = puVar15;
    do {
      puVar14 = puVar17 + 7;
      puVar24 = puVar17 + 7;
      do {
        puVar17 = puVar24;
        puVar21 = puVar14;
        if (puVar23 < puVar17) break;
        puVar14 = puVar21 + 7;
        puVar24 = puVar17 + 7;
      } while (*(float *)((longlong)puVar17 + 0x34) < *(float *)((longlong)puVar15 + 0x34) ||
               *(float *)((longlong)puVar17 + 0x34) == *(float *)((longlong)puVar15 + 0x34));
      puVar14 = puVar20 + -0xe;
      do {
        puVar24 = puVar20;
        puVar28 = puVar14;
        puVar20 = puVar24 + -7;
        if (puVar20 <= puVar15) break;
        puVar14 = puVar28 + -7;
      } while (*(float *)((longlong)puVar15 + 0x34) < *(float *)((longlong)puVar24 + -4) ||
               *(float *)((longlong)puVar15 + 0x34) == *(float *)((longlong)puVar24 + -4));
      if (puVar20 < puVar17) goto LAB_146df187e;
      uVar2 = puVar17[6];
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = puVar17[4];
      uVar8 = puVar17[5];
      puVar17[6] = puVar24[-1];
      uVar9 = *puVar20;
      uVar10 = puVar24[-6];
      uVar11 = puVar24[-5];
      uVar12 = puVar24[-4];
      uVar13 = puVar24[-2];
      puVar17[4] = puVar24[-3];
      puVar17[5] = uVar13;
      puVar17[2] = uVar11;
      puVar17[3] = uVar12;
      *puVar17 = uVar9;
      puVar17[1] = uVar10;
      puVar24[-1] = uVar2;
      puVar24[-3] = uVar7;
      puVar24[-2] = uVar8;
      puVar24[-5] = uVar5;
      puVar24[-4] = uVar6;
      *puVar20 = uVar3;
      puVar24[-6] = uVar4;
    } while( true );
  }
  for (; puVar26 = puVar15, puVar27 = puVar15, puVar15 < puVar23; puVar23 = puVar23 + -7) {
    while (puVar20 = puVar26, puVar26 = puVar27 + 7, puVar26 <= puVar23) {
      pfVar1 = (float *)((longlong)puVar27 + 0x6c);
      puVar27 = puVar26;
      if (*pfVar1 < *(float *)((longlong)puVar20 + 0x34) ||
          *pfVar1 == *(float *)((longlong)puVar20 + 0x34)) {
        puVar26 = puVar20;
      }
    }
    local_48 = puVar20[6];
    local_78 = *puVar20;
    uStack_70 = puVar20[1];
    local_68 = puVar20[2];
    uStack_60 = puVar20[3];
    local_58 = puVar20[4];
    uStack_50 = puVar20[5];
    uVar7 = local_78;
    uVar8 = uStack_70;
    puVar20[6] = puVar23[6];
    uVar2 = *puVar23;
    uVar3 = puVar23[1];
    uVar4 = puVar23[2];
    uVar5 = puVar23[3];
    uVar6 = puVar23[5];
    puVar20[4] = puVar23[4];
    puVar20[5] = uVar6;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *puVar20 = uVar2;
    puVar20[1] = uVar3;
    puVar23[6] = local_48;
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    puVar23[4] = local_58;
    puVar23[5] = uStack_50;
    puVar23[2] = local_68;
    puVar23[3] = uStack_60;
    *(undefined4 *)puVar23 = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
    *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
    local_78 = uVar7;
    uStack_70 = uVar8;
  }
  goto LAB_146df1a54;
LAB_146df187e:
  local_48 = puVar15[6];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  local_58 = puVar15[4];
  uStack_50 = puVar15[5];
  uVar7 = local_78;
  uVar8 = uStack_70;
  puVar15[6] = puVar24[-1];
  uVar2 = *puVar20;
  uVar3 = puVar24[-6];
  uVar4 = puVar24[-5];
  uVar5 = puVar24[-4];
  uVar6 = puVar24[-2];
  puVar15[4] = puVar24[-3];
  puVar15[5] = uVar6;
  puVar15[2] = uVar4;
  puVar15[3] = uVar5;
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  puVar24[-1] = local_48;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar24[-3] = local_58;
  puVar24[-2] = uStack_50;
  puVar24[-5] = local_68;
  puVar24[-4] = uStack_60;
  *(undefined4 *)puVar20 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar24 + -0x34) = local_78._4_4_;
  *(undefined4 *)(puVar24 + -6) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar24 + -0x2c) = uStack_70._4_4_;
  iVar25 = iVar25 + -1;
  puVar24 = puVar24 + -0xe;
  local_78 = uVar7;
  uStack_70 = uVar8;
  if ((longlong)puVar28 - (longlong)puVar27 < (longlong)puVar26 - (longlong)puVar21) {
    if (puVar17 < puVar23) {
      *plVar22 = (longlong)puVar17;
      plVar22[1] = (longlong)puVar23;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar21 = puVar15;
    if (puVar20 <= puVar15 + 7) goto LAB_146df1a54;
  }
  else {
    if (puVar15 + 7 < puVar20) {
      *plVar22 = (longlong)puVar15;
      plVar22[1] = (longlong)puVar24;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar15 = puVar17;
    puVar24 = puVar23;
    puVar28 = puVar23;
    if (puVar23 <= puVar17) goto LAB_146df1a54;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar21) >> 3);
  puVar23 = puVar24;
  puVar26 = puVar28;
  puVar27 = puVar21;
  if (iVar25 == 0) goto LAB_146df1a66;
  goto LAB_146df1709;
}



// FUNCTION 146df1a98 FUN_146df1a98 body=829 status=ok
// SIG undefined FUN_146df1a98(void)

void FUN_146df1a98(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar21 = iVar16;
joined_r0x000146df1acc:
    do {
      iVar18 = iVar16 * 2 + 1;
      if (iVar18 < (int)param_2) {
        iVar20 = iVar16 * 2 + 2;
        if ((iVar20 < (int)param_2) &&
           (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34),
           fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
          iVar18 = iVar20;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          puVar22 = param_1 + (longlong)iVar16 * 7;
          puVar19 = param_1 + (longlong)iVar18 * 7;
          local_18 = puVar22[6];
          uVar4 = *puVar22;
          uVar5 = puVar22[1];
          uVar6 = puVar22[2];
          uVar7 = puVar22[3];
          uVar8 = puVar22[4];
          uVar9 = puVar22[5];
          puVar22[6] = puVar19[6];
          uVar10 = *puVar19;
          uVar11 = puVar19[1];
          uVar12 = puVar19[2];
          uVar13 = puVar19[3];
          uVar14 = puVar19[5];
          puVar22[4] = puVar19[4];
          puVar22[5] = uVar14;
          puVar22[2] = uVar12;
          puVar22[3] = uVar13;
          *puVar22 = uVar10;
          puVar22[1] = uVar11;
          puVar19[6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar19 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_20._4_4_;
          *(undefined4 *)(puVar19 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          iVar16 = iVar18;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
          goto joined_r0x000146df1acc;
        }
      }
      bVar23 = iVar21 != 0;
      iVar16 = iVar21 + -1;
      iVar21 = iVar16;
    } while (bVar23);
    if (1 < (int)param_2) {
      uVar17 = (ulonglong)param_2 - 1;
      local_18 = param_1[6];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar9 = param_1[5];
      param_1[6] = param_1[uVar17 * 7 + 6];
      uVar10 = param_1[uVar17 * 7];
      uVar11 = (param_1 + uVar17 * 7)[1];
      uVar12 = param_1[uVar17 * 7 + 2];
      uVar13 = (param_1 + uVar17 * 7 + 2)[1];
      uVar14 = (param_1 + uVar17 * 7 + 4)[1];
      param_1[4] = param_1[uVar17 * 7 + 4];
      param_1[5] = uVar14;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[uVar17 * 7 + 6] = local_18;
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar19 = param_1 + uVar17 * 7 + 4;
      *(undefined4 *)puVar19 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
      puVar19 = param_1 + uVar17 * 7 + 2;
      *(undefined4 *)puVar19 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
      puVar19 = param_1 + uVar17 * 7;
      *(undefined4 *)puVar19 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
      local_48 = uVar4;
      uStack_40 = uVar5;
      local_38 = uVar6;
      uStack_30 = uVar7;
      local_28 = uVar8;
      uStack_20 = uVar9;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar18 = 1;
          iVar21 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar20 = iVar18;
            if (((longlong)iVar16 < (longlong)uVar17) &&
               (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34),
               fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
              iVar20 = iVar16;
            }
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar21 * 0x38 + 0x34);
            if (fVar3 < *pfVar2 || fVar3 == *pfVar2) break;
            puVar22 = param_1 + (longlong)iVar21 * 7;
            puVar19 = param_1 + (longlong)iVar20 * 7;
            uVar4 = puVar22[6];
            uVar5 = *puVar22;
            uVar6 = puVar22[1];
            uVar7 = puVar22[2];
            uVar8 = puVar22[3];
            uVar9 = puVar22[4];
            uVar10 = puVar22[5];
            puVar22[6] = puVar19[6];
            uVar11 = *puVar19;
            uVar12 = puVar19[1];
            uVar13 = puVar19[2];
            uVar14 = puVar19[3];
            uVar15 = puVar19[5];
            puVar22[4] = puVar19[4];
            puVar22[5] = uVar15;
            puVar22[2] = uVar13;
            puVar22[3] = uVar14;
            *puVar22 = uVar11;
            puVar22[1] = uVar12;
            puVar19[6] = uVar4;
            puVar19[4] = uVar9;
            puVar19[5] = uVar10;
            puVar19[2] = uVar7;
            puVar19[3] = uVar8;
            *puVar19 = uVar5;
            puVar19[1] = uVar6;
            iVar16 = iVar20 * 2;
            iVar18 = iVar20 * 2 + 1;
            iVar21 = iVar20;
          } while ((longlong)iVar18 < (longlong)uVar17);
          uVar1 = uVar17 - 1;
          local_18 = param_1[6];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          uVar8 = param_1[4];
          uVar9 = param_1[5];
          param_1[6] = param_1[uVar1 * 7 + 6];
          uVar10 = param_1[uVar1 * 7];
          uVar11 = (param_1 + uVar1 * 7)[1];
          uVar12 = param_1[uVar1 * 7 + 2];
          uVar13 = (param_1 + uVar1 * 7 + 2)[1];
          uVar14 = (param_1 + uVar1 * 7 + 4)[1];
          param_1[4] = param_1[uVar1 * 7 + 4];
          param_1[5] = uVar14;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[uVar1 * 7 + 6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          puVar19 = param_1 + uVar1 * 7 + 4;
          *(undefined4 *)puVar19 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
          puVar19 = param_1 + uVar1 * 7 + 2;
          *(undefined4 *)puVar19 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
          puVar19 = param_1 + uVar1 * 7;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          bVar23 = 2 < uVar17;
          uVar17 = uVar1;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
        } while (bVar23);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df1dd6 FUN_146df1dd6 body=46 status=ok
// SIG undefined FUN_146df1dd6(void)

void FUN_146df1dd6(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_146defcfe();
  FUN_146df1e04(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 146df1e04 FUN_146df1e04 body=652 status=ok
// SIG undefined FUN_146df1e04(void)

void FUN_146df1e04(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar12;
      puVar13 = (undefined8 *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar6) >> 4);
      puVar16 = puVar13;
      puVar17 = puVar6;
      if (iVar15 != 0) {
LAB_146df1ec6:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar2 = puVar6[uVar9 * 2];
          uVar3 = (puVar6 + uVar9 * 2)[1];
          uVar4 = puVar6[1];
          puVar6[uVar9 * 2] = *puVar6;
          (puVar6 + uVar9 * 2)[1] = uVar4;
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          puVar10 = puVar13 + 2;
          puVar7 = puVar6;
          do {
            puVar5 = puVar7 + 2;
            puVar14 = puVar7 + 2;
            do {
              puVar7 = puVar14;
              puVar11 = puVar5;
              if (puVar13 < puVar7) break;
              puVar5 = puVar11 + 2;
              puVar14 = puVar7 + 2;
            } while (*(float *)((longlong)puVar7 + 4) < *(float *)((longlong)puVar6 + 4) ||
                     *(float *)((longlong)puVar7 + 4) == *(float *)((longlong)puVar6 + 4));
            puVar5 = puVar10 + -4;
            do {
              puVar14 = puVar10;
              puVar18 = puVar5;
              puVar10 = puVar14 + -2;
              if (puVar10 <= puVar6) break;
              puVar5 = puVar18 + -2;
            } while (*(float *)((longlong)puVar6 + 4) < *(float *)((longlong)puVar14 + -0xc) ||
                     *(float *)((longlong)puVar6 + 4) == *(float *)((longlong)puVar14 + -0xc));
            if (puVar10 < puVar7) goto LAB_146df1f6e;
            uVar2 = *puVar7;
            uVar3 = puVar7[1];
            uVar4 = puVar14[-1];
            *puVar7 = *puVar10;
            puVar7[1] = uVar4;
            *puVar10 = uVar2;
            puVar14[-1] = uVar3;
          } while( true );
        }
        for (; puVar16 = puVar6, puVar17 = puVar6, puVar6 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar10 = puVar16, puVar16 = puVar17 + 2, puVar16 <= puVar13) {
            pfVar1 = (float *)((longlong)puVar17 + 0x14);
            puVar17 = puVar16;
            if (*pfVar1 < *(float *)((longlong)puVar10 + 4) ||
                *pfVar1 == *(float *)((longlong)puVar10 + 4)) {
              puVar16 = puVar10;
            }
          }
          local_48 = *puVar10;
          uStack_40 = puVar10[1];
          uVar3 = local_48;
          uVar4 = uStack_40;
          uVar2 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar2;
          local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
          uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar13 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_40._4_4_;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
        goto LAB_146df206f;
      }
LAB_146df2084:
      FUN_146df2091(puVar6);
LAB_146df206f:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_38 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146df1f6e:
  local_48 = *puVar6;
  uStack_40 = puVar6[1];
  uVar3 = local_48;
  uVar4 = uStack_40;
  uVar2 = puVar14[-1];
  *puVar6 = *puVar10;
  puVar6[1] = uVar2;
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar14 + -0xc) = local_48._4_4_;
  *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar14 + -4) = uStack_40._4_4_;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -4;
  local_48 = uVar3;
  uStack_40 = uVar4;
  if ((longlong)puVar18 - (longlong)puVar17 < (longlong)puVar16 - (longlong)puVar11) {
    if (puVar7 < puVar13) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar11 = puVar6;
    if (puVar10 <= puVar6 + 2) goto LAB_146df206f;
  }
  else {
    if (puVar6 + 2 < puVar10) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar6 = puVar7;
    puVar14 = puVar13;
    puVar18 = puVar13;
    if (puVar13 <= puVar7) goto LAB_146df206f;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar11) >> 4);
  puVar13 = puVar14;
  puVar16 = puVar18;
  puVar17 = puVar11;
  if (iVar15 == 0) goto LAB_146df2084;
  goto LAB_146df1ec6;
}



// FUNCTION 146df2091 FUN_146df2091 body=467 status=ok
// SIG undefined FUN_146df2091(void)

void FUN_146df2091(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar7;
joined_r0x000146df20c5:
    do {
      iVar9 = iVar7 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar11 = iVar7 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4),
           fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
          iVar9 = iVar11;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 4);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          puVar10 = param_1 + (longlong)iVar7 * 2;
          puVar13 = param_1 + (longlong)iVar9 * 2;
          uVar4 = *puVar10;
          uVar5 = puVar10[1];
          uVar6 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar6;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar13 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_20._4_4_;
          iVar7 = iVar9;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146df20c5;
        }
      }
      bVar14 = iVar12 != 0;
      iVar7 = iVar12 + -1;
      iVar12 = iVar7;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar8 * 2)[1];
      *param_1 = param_1[uVar8 * 2];
      param_1[1] = uVar6;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar10 = param_1 + uVar8 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar9 = 1;
          iVar12 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar11 = iVar9;
            if (((longlong)iVar7 < (longlong)uVar8) &&
               (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 4),
               fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
              iVar11 = iVar7;
            }
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar12 * 0x10 + 4);
            if (fVar3 < *pfVar2 || fVar3 == *pfVar2) break;
            puVar10 = param_1 + (longlong)iVar12 * 2;
            puVar13 = param_1 + (longlong)iVar11 * 2;
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            uVar6 = puVar13[1];
            *puVar10 = *puVar13;
            puVar10[1] = uVar6;
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            iVar7 = iVar11 * 2;
            iVar9 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar1 = uVar8 - 1;
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar6;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
          bVar14 = 2 < uVar8;
          uVar8 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar14);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df226e FUN_146df226e body=3724 status=ok
// SIG undefined FUN_146df226e(void)

void FUN_146df226e(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 **ppuVar14;
  int *piVar15;
  longlong lVar16;
  undefined1 uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  longlong lVar24;
  longlong lVar25;
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
  undefined1 auStack_248 [32];
  longlong local_228;
  float local_220;
  longlong local_218;
  undefined1 **local_210;
  undefined4 ***local_208;
  undefined1 **local_200;
  longlong **local_1f8;
  int local_1e8;
  undefined4 local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined1 *local_1c8;
  undefined4 *local_1c0;
  undefined4 **local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 **local_190;
  undefined4 **local_188;
  undefined2 local_180;
  undefined1 *local_178;
  longlong *local_170;
  undefined1 *local_168;
  longlong *local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 **local_128;
  undefined8 uStack_120;
  undefined4 *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar3 = *param_1;
  lVar9 = param_1[2];
  if (*(int *)(lVar9 + 0x2d0) == 0) {
    iVar12 = *(int *)(lVar3 + 0x178);
  }
  else {
    iVar12 = *(int *)(lVar3 + 0x178);
    param_2 = *(int *)(*(longlong *)(lVar9 + 0x2c8) + (longlong)(int)param_2 * 4) - iVar12;
  }
  iVar11 = param_2 + iVar12;
  lVar16 = param_1[5];
  lVar10 = (longlong)iVar11;
  fVar26 = *(float *)(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x90) +
                     (*(int *)(lVar16 + 0x10) + lVar10) * 4);
  if ((fVar26 == 0.0) && (!NAN(fVar26))) goto LAB_146df234d;
  if (((int)param_2 < 0) || (*(int *)(lVar3 + 0x130) <= (int)param_2)) {
    local_1e4 = 0;
  }
  else {
    local_1e4 = (undefined4)
                CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x128) >> 8),
                         *(int *)(*(longlong *)(lVar3 + 0x128) + (ulonglong)param_2 * 8) != -1);
  }
  local_1e0 = (longlong)(int)param_2;
  if ((*(int *)(lVar3 + 0x28) < 1) || (ABS(*(float *)(lVar3 + 0x34)) <= 0.0001)) {
    fVar26 = *(float *)(lVar3 + 0x30);
    fVar29 = fVar26;
  }
  else {
    fVar26 = *(float *)(lVar3 + 0x30);
    fVar29 = *(float *)(lVar3 + 0x34) * *(float *)(*(longlong *)(lVar3 + 0x20) + local_1e0 * 4) +
             fVar26;
  }
  local_128 = (undefined4 **)0x0;
  uStack_120 = 0;
  local_150 = (undefined1)local_1e4;
  local_138 = param_1[9];
  local_130 = param_1[10];
  local_1e8 = iVar11;
  local_158 = lVar3;
  local_148 = lVar16;
  local_140 = lVar9;
  if (*(char *)(lVar3 + 0x40) == '\0') {
    if ((*(int *)(lVar3 + 0x28) < 1) || (ABS(*(float *)(lVar3 + 0x34)) <= 0.0001)) {
      local_170 = &local_158;
      local_210 = &local_178;
      local_178 = &LAB_146df30fc;
      local_220 = fVar29 * 1.5;
      lVar20 = *(longlong *)(*(longlong *)(lVar16 + 8) + 0x28);
      local_228 = lVar20 + (*(int *)(lVar16 + 0x10) + lVar10) * 0xc;
      local_1b8 = (undefined4 **)(lVar20 + (longlong)*(int *)(lVar16 + 0x10) * 0xc);
      uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(lVar16 + 0x14));
      local_208 = &local_128;
      local_218 = CONCAT44(local_218._4_4_,fVar26 * 1.5);
      FUN_146e2700c(lVar9 + 8,param_1[3],&local_1b8,iVar11);
    }
    else {
      local_218 = lVar3 + 8;
      local_160 = &local_158;
      local_200 = &local_168;
      local_168 = &LAB_146df30fc;
      local_220 = fVar29 * 1.5;
      lVar20 = *(longlong *)(*(longlong *)(lVar16 + 8) + 0x28);
      local_228 = lVar20 + (*(int *)(lVar16 + 0x10) + lVar10) * 0xc;
      local_1b8 = (undefined4 **)(lVar20 + (longlong)*(int *)(lVar16 + 0x10) * 0xc);
      uStack_1b0 = (undefined4 *)CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(lVar16 + 0x14));
      local_1f8 = (longlong **)&local_128;
      local_208 = (undefined4 ***)CONCAT44(local_208._4_4_,iVar12);
      local_210 = (undefined1 **)CONCAT44(local_210._4_4_,0x3fc00000);
      FUN_146e28bea(lVar9 + 8,param_1[3],&local_1b8,iVar11);
    }
  }
  if ((int)uStack_120 != 0) {
    if (3 < (int)uStack_120) {
      FUN_146df3368();
      FUN_146def99c(&local_128);
    }
    if ((int)uStack_120 != 0) {
      local_1d8 = (longlong)(int)uStack_120 * 0x38;
      lVar9 = 0;
      do {
        lVar16 = (longlong)*(int *)((longlong)local_128 + lVar9 + 8);
        piVar15 = (int *)(lVar16 * 0xc + *(longlong *)(param_1[2] + 8));
        if ((int)((longlong *)param_1[0xb])[1] == 0) {
          fVar28 = *(float *)((longlong)local_128 + lVar9 + 0x18);
          fVar26 = *(float *)((longlong)local_128 + lVar9 + 0x10);
          fVar30 = *(float *)((longlong)local_128 + lVar9 + 0x14);
LAB_146df25f0:
          if (((char)local_1e4 == '\0') ||
             (iVar12 = *(int *)(*(longlong *)(lVar3 + 0x118) +
                               (longlong)*(int *)(*(longlong *)(param_1[2] + 0x2a8) + lVar16 * 4) *
                               4), iVar12 == -1)) {
LAB_146df274f:
            lVar13 = (longlong)piVar15[2];
            lVar25 = (longlong)*(int *)(param_1[5] + 0x10);
            lVar20 = lVar25 + lVar13;
            lVar4 = *(longlong *)(*(longlong *)(param_1[5] + 8) + 0x28);
            lVar18 = (longlong)piVar15[1];
            lVar21 = lVar18 + lVar25;
            lVar22 = (longlong)*piVar15;
            lVar24 = lVar22 + lVar25;
            fVar31 = *(float *)(lVar4 + lVar24 * 0xc);
            fVar32 = *(float *)(lVar4 + 4 + lVar24 * 0xc);
            fVar34 = *(float *)(lVar4 + 8 + lVar24 * 0xc);
            fVar27 = *(float *)(lVar4 + 8 + lVar20 * 0xc) - fVar34;
            fVar35 = *(float *)(lVar4 + 4 + lVar20 * 0xc) - fVar32;
            fVar36 = *(float *)(lVar4 + lVar20 * 0xc) - fVar31;
            fVar34 = *(float *)(lVar4 + 8 + lVar21 * 0xc) - fVar34;
            fVar32 = *(float *)(lVar4 + 4 + lVar21 * 0xc) - fVar32;
            fVar31 = *(float *)(lVar4 + lVar21 * 0xc) - fVar31;
            fVar33 = fVar31 * fVar35 - fVar36 * fVar32;
            fVar36 = fVar34 * fVar36 - fVar27 * fVar31;
            fVar31 = fVar32 * fVar27 - fVar34 * fVar35;
            fVar32 = fVar33 * fVar33 + fVar31 * fVar31 + fVar36 * fVar36;
            if (((fVar32 != 1.0) || (fVar34 = fVar31, fVar35 = fVar33, fVar27 = fVar36, NAN(fVar32))
                ) && (fVar34 = (float)DAT_14c846330, fVar35 = DAT_14c846338,
                     fVar27 = DAT_14c846330._4_4_, 1e-08 <= fVar32)) {
              fVar32 = 1.0 / SQRT(fVar32);
              fVar34 = fVar31 * fVar32;
              fVar35 = fVar33 * fVar32;
              fVar27 = fVar36 * fVar32;
            }
            lVar25 = lVar25 + lVar10;
            fVar31 = (*(float *)(lVar4 + lVar25 * 0xc) -
                     *(float *)((longlong)local_128 + lVar9 + 0x1c)) * fVar34 +
                     (*(float *)(lVar4 + 4 + lVar25 * 0xc) -
                     *(float *)((longlong)local_128 + lVar9 + 0x20)) * fVar27 +
                     (*(float *)(lVar4 + 8 + lVar25 * 0xc) -
                     *(float *)((longlong)local_128 + lVar9 + 0x24)) * fVar35;
            bVar23 = fVar31 < 0.0;
            if (*(char *)(lVar3 + 0x180) == '\x01') {
              lVar20 = *(longlong *)param_1[9];
              uVar1 = *(uint *)(lVar20 + 4 + lVar10 * 8);
              uVar19 = *(uint *)(lVar20 + lVar10 * 8) & 0xfffffffe;
              if (((((*(uint *)(lVar20 + 4 + lVar22 * 8) ^ uVar1) & *(uint *)(lVar20 + lVar22 * 8) &
                    uVar19) != 0) ||
                  (((*(uint *)(lVar20 + 4 + lVar18 * 8) ^ uVar1) & *(uint *)(lVar20 + lVar18 * 8) &
                   uVar19) != 0)) ||
                 ((((*(uint *)(lVar20 + 4 + lVar13 * 8) ^ uVar1) & *(uint *)(lVar20 + lVar13 * 8) &
                   uVar19) != 0 ||
                  (((uVar1 ^ *(uint *)(*(longlong *)param_1[10] + 4 + lVar16 * 8)) &
                    *(uint *)(*(longlong *)param_1[10] + lVar16 * 8) & uVar19) != 0)))) {
                bVar23 = 0.0 <= fVar31;
                uVar17 = 1;
                iVar11 = local_1e8;
                goto LAB_146df2946;
              }
            }
            uVar17 = 0;
            iVar11 = local_1e8;
          }
          else if (iVar12 < *(int *)(*(longlong *)(lVar3 + 0x128) + local_1e0 * 8)) {
            bVar23 = true;
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            bVar23 = false;
            if (iVar12 <= *(int *)(*(longlong *)(lVar3 + 0x128) + 4 + local_1e0 * 8))
            goto LAB_146df274f;
          }
LAB_146df2946:
          piVar5 = (int *)param_1[6];
          LOCK();
          iVar12 = *piVar5;
          *piVar5 = *piVar5 + 1;
          UNLOCK();
          uVar6 = *(undefined8 *)piVar15;
          iVar8 = piVar15[2];
          lVar16 = *(longlong *)(lVar3 + 0x88);
          lVar21 = (longlong)iVar12;
          lVar20 = lVar21 * 0x10;
          *(int *)(lVar16 + lVar20) = iVar11;
          *(undefined8 *)(lVar16 + 4 + lVar20) = uVar6;
          *(int *)(lVar16 + 0xc + lVar20) = iVar8;
          lVar16 = *(longlong *)(lVar3 + 0x98);
          *(float *)(lVar16 + lVar21 * 0xc) = fVar26;
          *(float *)(lVar16 + 4 + lVar21 * 0xc) = fVar30;
          *(float *)(lVar16 + 8 + lVar21 * 0xc) = fVar28;
          *(bool *)(*(longlong *)(lVar3 + 0xa8) + lVar21) = bVar23;
          *(undefined1 *)(*(longlong *)(lVar3 + 0x138) + lVar21) = uVar17;
        }
        else {
          lVar21 = (longlong)*piVar15;
          lVar24 = (longlong)piVar15[1];
          lVar20 = (longlong)piVar15[2];
          fVar26 = *(float *)((longlong)local_128 + lVar9 + 0x10);
          fVar30 = *(float *)((longlong)local_128 + lVar9 + 0x14);
          fVar28 = *(float *)((longlong)local_128 + lVar9 + 0x18);
          if (*(int *)(lVar3 + 0x28) < 1) {
            fVar31 = *(float *)(lVar3 + 0x30);
          }
          else {
            fVar31 = *(float *)(lVar3 + 0x30);
            fVar32 = *(float *)(lVar3 + 0x34);
            if (0.0001 < ABS(fVar32)) {
              lVar13 = (longlong)*(int *)(lVar3 + 0x178);
              lVar4 = *(longlong *)(lVar3 + 0x20);
              fVar31 = (fVar32 * *(float *)(lVar4 + (lVar20 - lVar13) * 4) + fVar31) * fVar28 +
                       (*(float *)(lVar4 + (lVar21 - lVar13) * 4) * fVar32 + fVar31) * fVar26 +
                       (*(float *)(lVar4 + (lVar24 - lVar13) * 4) * fVar32 + fVar31) * fVar30;
              iVar11 = local_1e8;
            }
          }
          lVar4 = *(longlong *)param_1[0xb];
          fVar34 = ((*(float *)(lVar4 + lVar10 * 0xc) - *(float *)(lVar4 + lVar21 * 0xc) * fVar26) -
                   *(float *)(lVar4 + lVar24 * 0xc) * fVar30) -
                   *(float *)(lVar4 + lVar20 * 0xc) * fVar28;
          fVar35 = ((*(float *)(lVar4 + 4 + lVar10 * 0xc) -
                    *(float *)(lVar4 + 4 + lVar21 * 0xc) * fVar26) -
                   *(float *)(lVar4 + 4 + lVar24 * 0xc) * fVar30) -
                   *(float *)(lVar4 + 4 + lVar20 * 0xc) * fVar28;
          fVar32 = ((*(float *)(lVar4 + 8 + lVar10 * 0xc) -
                    *(float *)(lVar4 + 8 + lVar21 * 0xc) * fVar26) -
                   *(float *)(lVar4 + 8 + lVar24 * 0xc) * fVar30) -
                   *(float *)(lVar4 + 8 + lVar20 * 0xc) * fVar28;
          if ((fVar31 + fVar29) * (fVar31 + fVar29) <=
              fVar32 * fVar32 + fVar34 * fVar34 + fVar35 * fVar35) goto LAB_146df25f0;
        }
        lVar9 = lVar9 + 0x38;
      } while (local_1d8 != lVar9);
    }
  }
  lVar16 = local_1e0 * 0x50;
  lVar9 = *(longlong *)(lVar3 + 0x168) + lVar16;
  local_108 = lVar9 + 0x10;
  ppuVar14 = (undefined4 **)(*(longlong *)(lVar3 + 0x168) + lVar16);
  local_110 = (undefined4 *)&DAT_100000000;
  local_100 = 0xffffffff;
  local_f8 = 0;
  if (*(int *)(lVar9 + 0x28) != 0) {
    FUN_1449c0562(&local_110);
  }
  local_1a0 = local_100;
  uVar6 = local_1a0;
  local_198 = local_f8;
  local_194 = local_f4;
  uStack_1b0 = local_110;
  local_1a8 = local_108;
  local_180 = 0;
  local_1a0._4_4_ = (int)((ulonglong)local_100 >> 0x20);
  local_1b8 = ppuVar14;
  local_190 = ppuVar14;
  local_188 = ppuVar14;
  if (local_1a0._4_4_ < *(int *)(local_108 + 0x18)) {
    iVar12 = local_1a0._4_4_;
    local_1a0 = uVar6;
    do {
      (*local_1b8)[(longlong)iVar12 * 4 + 1] =
           *(float *)(param_1 + 1) + (float)(*local_1b8)[(longlong)iVar12 * 4 + 1];
      if (0.1 < (float)(*local_1b8)[(longlong)local_1a0._4_4_ * 4 + 1]) {
        FUN_146defa9a(local_190);
        local_180 = CONCAT11(local_180._1_1_,1);
      }
      local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_1a0 & ~uStack_1b0._4_4_);
      FUN_1449c0562(&uStack_1b0);
      iVar12 = local_1a0._4_4_;
    } while (local_1a0._4_4_ < *(int *)(local_1a8 + 0x18));
    uVar6 = local_1a0;
    if (((local_180 & 1) != 0) && (local_180._1_1_ == '\x01')) {
      FUN_146defafa(local_188,*(int *)(local_188 + 1) - *(int *)((longlong)local_188 + 0x34));
      uVar6 = local_1a0;
    }
  }
  local_1a0 = uVar6;
  if (0 < *(int *)(param_1[2] + 0x158)) {
    local_208 = &local_1b8;
    local_1b8 = (undefined4 **)0x0;
    uStack_1b0 = (undefined4 *)0x0;
    local_1c0 = &local_1cc;
    local_210 = &local_1c8;
    local_1c8 = &LAB_146df3ad0;
    local_220 = fVar29 * 1.5;
    lVar9 = param_1[5];
    lVar20 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x28);
    local_228 = lVar20 + (lVar10 + *(int *)(lVar9 + 0x10)) * 0xc;
    local_110 = (undefined4 *)(lVar20 + (longlong)*(int *)(lVar9 + 0x10) * 0xc);
    local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(lVar9 + 0x14));
    local_218 = CONCAT44(local_218._4_4_,*(float *)(lVar3 + 0x44) * 1.5);
    cVar7 = FUN_146e2700c(param_1[2] + 0x150,param_1[4],&local_110,iVar11);
    if (cVar7 != '\0') {
      if (3 < (int)uStack_1b0) {
        FUN_146df3ad3(local_1b8);
        FUN_146def99c(&local_1b8);
      }
      ppuVar14 = local_1b8;
      if ((int)uStack_1b0 != 0) {
        lVar9 = (longlong)(int)uStack_1b0;
        lVar10 = 0;
        do {
          uVar2 = *(undefined4 *)
                   (*(longlong *)(param_1[2] + 0x2b8) +
                   (longlong)*(int *)((longlong)ppuVar14 + lVar10 + 8) * 4);
          local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar2);
          local_1cc = 0;
          FUN_146defb40(*(longlong *)(lVar3 + 0x168) + lVar16,uVar2,&local_110,&local_1cc);
          lVar10 = lVar10 + 0x38;
        } while (lVar9 * 0x38 - lVar10 != 0);
      }
    }
    iVar11 = local_1e8;
    if (local_1b8 != (undefined4 **)0x0) {
      FUN_1400020a8(local_1b8);
      iVar11 = local_1e8;
    }
  }
  lVar9 = *(longlong *)(lVar3 + 0x168);
  iVar12 = *(int *)(lVar9 + 8 + lVar16);
  iVar8 = *(int *)(lVar9 + 0x34 + lVar16);
  if (3 < iVar12 - iVar8) {
    local_110 = &local_1cc;
    local_1b8 = &local_110;
    FUN_146df423a(lVar9 + lVar16);
    FUN_140ad3d14(lVar9 + lVar16);
    iVar12 = *(int *)(*(longlong *)(lVar3 + 0x168) + 8 + lVar16);
    iVar8 = *(int *)(*(longlong *)(lVar3 + 0x168) + 0x34 + lVar16);
  }
  if (iVar8 < iVar12) {
    piVar15 = (int *)param_1[7];
    LOCK();
    iVar12 = *piVar15;
    *piVar15 = *piVar15 + 1;
    UNLOCK();
    lVar9 = (longlong)iVar12;
    *(int *)(*(longlong *)(lVar3 + 0x148) + lVar9 * 4) = iVar11;
    ppuVar14 = (undefined4 **)(*(longlong *)(lVar3 + 0x168) + lVar16);
    local_108 = *(longlong *)(lVar3 + 0x168) + 0x10 + lVar16;
    local_110 = (undefined4 *)&DAT_100000000;
    local_100 = 0xffffffff;
    local_f8 = 0;
    if (*(int *)(local_108 + 0x18) != 0) {
      FUN_1449c0562(&local_110);
    }
    local_1a0 = local_100;
    uVar6 = local_1a0;
    local_198 = local_f8;
    local_194 = local_f4;
    uStack_1b0 = local_110;
    local_1a8 = local_108;
    local_180 = 0;
    local_1a0._4_4_ = (int)((ulonglong)local_100 >> 0x20);
    local_1b8 = ppuVar14;
    local_1a0 = uVar6;
    local_190 = ppuVar14;
    local_188 = ppuVar14;
    if (local_1a0._4_4_ < *(int *)(local_108 + 0x18)) {
      iVar12 = 0;
      iVar11 = local_1a0._4_4_;
      do {
        if (iVar12 < 3) {
          lVar16 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          *(undefined4 *)(*(longlong *)(lVar3 + 0x158) + lVar9 * 0xc + lVar16 * 4) =
               (*local_1b8)[(longlong)iVar11 * 4];
        }
        else {
          FUN_146defa9a(local_190);
          local_180 = CONCAT11(local_180._1_1_,1);
        }
        local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_1a0 & ~uStack_1b0._4_4_);
        FUN_1449c0562(&uStack_1b0);
        iVar11 = local_1a0._4_4_;
      } while (local_1a0._4_4_ < *(int *)(local_1a8 + 0x18));
      if (((local_180 & 1) != 0) && (local_180._1_1_ == '\x01')) {
        FUN_146defafa(local_188,*(int *)(local_188 + 1) - *(int *)((longlong)local_188 + 0x34));
      }
      if (2 < iVar12) goto LAB_146df300b;
    }
    else {
      iVar12 = 0;
    }
    lVar16 = (longlong)iVar12;
    do {
      lVar16 = lVar16 + 1;
      *(undefined4 *)(*(longlong *)(lVar3 + 0x158) + lVar9 * 0xc + -4 + lVar16 * 4) = 0xffffffff;
    } while ((int)lVar16 != 3);
  }
LAB_146df300b:
  if (local_128 != (undefined4 **)0x0) {
    FUN_1400020a8();
  }
LAB_146df234d:
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df3106 FUN_146df3106 body=610 status=ok
// SIG undefined FUN_146df3106(void)

undefined8 FUN_146df3106(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar4 = *param_1;
  lVar5 = (longlong)param_3;
  piVar11 = (int *)(lVar5 * 0xc + *(longlong *)(param_1[3] + 8));
  if (((char)param_1[1] == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)(lVar4 + 0x118) +
                      (longlong)*(int *)(*(longlong *)(param_1[3] + 0x2a8) + lVar5 * 4) * 4),
     iVar7 != -1)) {
    lVar13 = (longlong)(int)param_2 - (longlong)*(int *)(lVar4 + 0x178);
    if ((iVar7 < *(int *)(*(longlong *)(lVar4 + 0x128) + lVar13 * 8)) ||
       (*(int *)(*(longlong *)(lVar4 + 0x128) + 4 + lVar13 * 8) < iVar7)) goto LAB_146df31f5;
  }
  if (*(char *)(lVar4 + 0x180) == '\x01') {
    lVar13 = *(longlong *)param_1[4];
    lVar14 = (longlong)(int)param_2;
    uVar12 = *(uint *)(lVar13 + lVar14 * 8);
    if (((uVar12 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar14 * 8) & 1) != 0)) {
      lVar9 = (longlong)*piVar11;
      uVar1 = *(uint *)(lVar13 + lVar9 * 8);
      if (((uVar1 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar9 * 8) & 1) != 0)) {
        lVar10 = (longlong)piVar11[1];
        uVar2 = *(uint *)(lVar13 + lVar10 * 8);
        if (((uVar2 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar10 * 8) & 1) != 0)) {
          lVar15 = (longlong)piVar11[2];
          uVar3 = *(uint *)(lVar13 + lVar15 * 8);
          if ((((uVar3 & 1) == 0) || ((*(byte *)(lVar13 + 4 + lVar15 * 8) & 1) != 0)) &&
             ((((uVar12 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar14 * 8) & 1) == 0)) ||
              ((((((uVar1 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar9 * 8) & 1) == 0)) &&
                 (((uVar2 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar10 * 8) & 1) == 0)))) &&
                (((uVar3 & 1) == 0 || ((*(byte *)(lVar13 + 4 + lVar15 * 8) & 1) == 0)))) &&
               (((*(byte *)(*(longlong *)param_1[5] + lVar5 * 8) & 1) == 0 ||
                ((*(byte *)(*(longlong *)param_1[5] + 4 + lVar5 * 8) & 1) == 0))))))))
          goto LAB_146df31f5;
        }
      }
    }
    return 0;
  }
LAB_146df31f5:
  uVar6 = CONCAT71((int7)(int3)((uint)param_3 >> 8),1);
  if (*(int *)(lVar4 + 0xd0) != *(int *)(lVar4 + 0xfc)) {
    lVar5 = lVar4 + 0x100;
    if (*(longlong *)(lVar4 + 0x108) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x108);
    }
    uVar12 = *(int *)(lVar4 + 0x110) - 1;
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             ((*piVar11 + param_2 * 0x40 + (param_2 >> 2) + 0x9e3779b9 ^ param_2) &
                             uVar12) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)iVar7 * 0x10) ==
            CONCAT44(*piVar11,param_2)) {
          return 0;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar4 + 200) + 8);
      } while (iVar7 != -1);
    }
    iVar8 = param_2 * 0x40 + (param_2 >> 2) + -0x61c88647;
    iVar7 = *(int *)(lVar5 + (ulonglong)((piVar11[1] + iVar8 ^ param_2) & uVar12) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)iVar7 * 0x10) ==
            CONCAT44(piVar11[1],param_2)) {
          return 0;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar4 + 200) + 8);
      } while (iVar7 != -1);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)((iVar8 + piVar11[2] ^ param_2) & uVar12) * 4);
    if (iVar7 != -1) {
      do {
        bVar16 = *(longlong *)(*(longlong *)(lVar4 + 200) + (longlong)iVar7 * 0x10) ==
                 CONCAT44(piVar11[2],param_2);
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),!bVar16);
        if (bVar16) {
          return uVar6;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar4 + 200) + 8);
      } while (iVar7 != -1);
    }
  }
  return uVar6;
}



// FUNCTION 146df3368 FUN_146df3368 body=1064 status=ok
// SIG undefined FUN_146df3368(void)

void FUN_146df3368(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  memset(local_368,0,0x2f0);
  local_370 = (ulonglong)param_2 * 0x38 + param_1 + -0x38;
  local_378 = param_1;
  fVar29 = logf((float)(int)param_2);
  local_368[0] = (int)(longlong)(fVar29 + fVar29);
  plVar22 = &local_378;
  while( true ) {
    puVar15 = (undefined8 *)*plVar22;
    puVar23 = (undefined8 *)plVar22[1];
    iVar25 = (int)plVar22[2];
    iVar16 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar15) >> 3);
    puVar26 = puVar23;
    puVar27 = puVar15;
    if (iVar25 != 0) break;
LAB_146df375f:
    FUN_146df3791(puVar15);
LAB_146df374d:
    plVar22 = plVar22 + -3;
    if (plVar22 < &local_378) {
      if ((local_38 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_146df3402:
  uVar18 = iVar16 * -0x49249249 + 1;
  if (8 < (int)uVar18) {
    uVar19 = (ulonglong)(uVar18 >> 1);
    uVar2 = puVar15[uVar19 * 7 + 6];
    uVar3 = puVar15[uVar19 * 7];
    uVar4 = (puVar15 + uVar19 * 7)[1];
    uVar5 = puVar15[uVar19 * 7 + 2];
    uVar6 = (puVar15 + uVar19 * 7 + 2)[1];
    uVar7 = puVar15[uVar19 * 7 + 4];
    uVar8 = (puVar15 + uVar19 * 7 + 4)[1];
    puVar15[uVar19 * 7 + 6] = puVar15[6];
    uVar9 = *puVar15;
    uVar10 = puVar15[1];
    uVar11 = puVar15[2];
    uVar12 = puVar15[3];
    uVar13 = puVar15[5];
    puVar15[uVar19 * 7 + 4] = puVar15[4];
    (puVar15 + uVar19 * 7 + 4)[1] = uVar13;
    puVar15[uVar19 * 7 + 2] = uVar11;
    (puVar15 + uVar19 * 7 + 2)[1] = uVar12;
    puVar15[uVar19 * 7] = uVar9;
    (puVar15 + uVar19 * 7)[1] = uVar10;
    puVar15[6] = uVar2;
    puVar15[4] = uVar7;
    puVar15[5] = uVar8;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    *puVar15 = uVar3;
    puVar15[1] = uVar4;
    puVar20 = puVar23 + 7;
    puVar17 = puVar15;
    do {
      puVar14 = puVar17 + 7;
      puVar24 = puVar17 + 7;
      do {
        puVar17 = puVar24;
        puVar21 = puVar14;
        if (puVar23 < puVar17) break;
        puVar14 = puVar21 + 7;
        puVar24 = puVar17 + 7;
      } while (*(float *)((longlong)puVar17 + 0x34) < *(float *)((longlong)puVar15 + 0x34) ||
               *(float *)((longlong)puVar17 + 0x34) == *(float *)((longlong)puVar15 + 0x34));
      puVar14 = puVar20 + -0xe;
      do {
        puVar24 = puVar20;
        puVar28 = puVar14;
        puVar20 = puVar24 + -7;
        if (puVar20 <= puVar15) break;
        puVar14 = puVar28 + -7;
      } while (*(float *)((longlong)puVar15 + 0x34) < *(float *)((longlong)puVar24 + -4) ||
               *(float *)((longlong)puVar15 + 0x34) == *(float *)((longlong)puVar24 + -4));
      if (puVar20 < puVar17) goto LAB_146df3577;
      uVar2 = puVar17[6];
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = puVar17[4];
      uVar8 = puVar17[5];
      puVar17[6] = puVar24[-1];
      uVar9 = *puVar20;
      uVar10 = puVar24[-6];
      uVar11 = puVar24[-5];
      uVar12 = puVar24[-4];
      uVar13 = puVar24[-2];
      puVar17[4] = puVar24[-3];
      puVar17[5] = uVar13;
      puVar17[2] = uVar11;
      puVar17[3] = uVar12;
      *puVar17 = uVar9;
      puVar17[1] = uVar10;
      puVar24[-1] = uVar2;
      puVar24[-3] = uVar7;
      puVar24[-2] = uVar8;
      puVar24[-5] = uVar5;
      puVar24[-4] = uVar6;
      *puVar20 = uVar3;
      puVar24[-6] = uVar4;
    } while( true );
  }
  for (; puVar26 = puVar15, puVar27 = puVar15, puVar15 < puVar23; puVar23 = puVar23 + -7) {
    while (puVar20 = puVar26, puVar26 = puVar27 + 7, puVar26 <= puVar23) {
      pfVar1 = (float *)((longlong)puVar27 + 0x6c);
      puVar27 = puVar26;
      if (*pfVar1 < *(float *)((longlong)puVar20 + 0x34) ||
          *pfVar1 == *(float *)((longlong)puVar20 + 0x34)) {
        puVar26 = puVar20;
      }
    }
    local_48 = puVar20[6];
    local_78 = *puVar20;
    uStack_70 = puVar20[1];
    local_68 = puVar20[2];
    uStack_60 = puVar20[3];
    local_58 = puVar20[4];
    uStack_50 = puVar20[5];
    uVar7 = local_78;
    uVar8 = uStack_70;
    puVar20[6] = puVar23[6];
    uVar2 = *puVar23;
    uVar3 = puVar23[1];
    uVar4 = puVar23[2];
    uVar5 = puVar23[3];
    uVar6 = puVar23[5];
    puVar20[4] = puVar23[4];
    puVar20[5] = uVar6;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *puVar20 = uVar2;
    puVar20[1] = uVar3;
    puVar23[6] = local_48;
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    puVar23[4] = local_58;
    puVar23[5] = uStack_50;
    puVar23[2] = local_68;
    puVar23[3] = uStack_60;
    *(undefined4 *)puVar23 = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
    *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
    local_78 = uVar7;
    uStack_70 = uVar8;
  }
  goto LAB_146df374d;
LAB_146df3577:
  local_48 = puVar15[6];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  local_58 = puVar15[4];
  uStack_50 = puVar15[5];
  uVar7 = local_78;
  uVar8 = uStack_70;
  puVar15[6] = puVar24[-1];
  uVar2 = *puVar20;
  uVar3 = puVar24[-6];
  uVar4 = puVar24[-5];
  uVar5 = puVar24[-4];
  uVar6 = puVar24[-2];
  puVar15[4] = puVar24[-3];
  puVar15[5] = uVar6;
  puVar15[2] = uVar4;
  puVar15[3] = uVar5;
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  puVar24[-1] = local_48;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar24[-3] = local_58;
  puVar24[-2] = uStack_50;
  puVar24[-5] = local_68;
  puVar24[-4] = uStack_60;
  *(undefined4 *)puVar20 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar24 + -0x34) = local_78._4_4_;
  *(undefined4 *)(puVar24 + -6) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar24 + -0x2c) = uStack_70._4_4_;
  iVar25 = iVar25 + -1;
  puVar24 = puVar24 + -0xe;
  local_78 = uVar7;
  uStack_70 = uVar8;
  if ((longlong)puVar28 - (longlong)puVar27 < (longlong)puVar26 - (longlong)puVar21) {
    if (puVar17 < puVar23) {
      *plVar22 = (longlong)puVar17;
      plVar22[1] = (longlong)puVar23;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar21 = puVar15;
    if (puVar20 <= puVar15 + 7) goto LAB_146df374d;
  }
  else {
    if (puVar15 + 7 < puVar20) {
      *plVar22 = (longlong)puVar15;
      plVar22[1] = (longlong)puVar24;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar15 = puVar17;
    puVar24 = puVar23;
    puVar28 = puVar23;
    if (puVar23 <= puVar17) goto LAB_146df374d;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar21) >> 3);
  puVar23 = puVar24;
  puVar26 = puVar28;
  puVar27 = puVar21;
  if (iVar25 == 0) goto LAB_146df375f;
  goto LAB_146df3402;
}



// FUNCTION 146df3791 FUN_146df3791 body=829 status=ok
// SIG undefined FUN_146df3791(void)

void FUN_146df3791(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar21 = iVar16;
joined_r0x000146df37c5:
    do {
      iVar18 = iVar16 * 2 + 1;
      if (iVar18 < (int)param_2) {
        iVar20 = iVar16 * 2 + 2;
        if ((iVar20 < (int)param_2) &&
           (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34),
           fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
          iVar18 = iVar20;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          puVar22 = param_1 + (longlong)iVar16 * 7;
          puVar19 = param_1 + (longlong)iVar18 * 7;
          local_18 = puVar22[6];
          uVar4 = *puVar22;
          uVar5 = puVar22[1];
          uVar6 = puVar22[2];
          uVar7 = puVar22[3];
          uVar8 = puVar22[4];
          uVar9 = puVar22[5];
          puVar22[6] = puVar19[6];
          uVar10 = *puVar19;
          uVar11 = puVar19[1];
          uVar12 = puVar19[2];
          uVar13 = puVar19[3];
          uVar14 = puVar19[5];
          puVar22[4] = puVar19[4];
          puVar22[5] = uVar14;
          puVar22[2] = uVar12;
          puVar22[3] = uVar13;
          *puVar22 = uVar10;
          puVar22[1] = uVar11;
          puVar19[6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar19 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_20._4_4_;
          *(undefined4 *)(puVar19 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          iVar16 = iVar18;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
          goto joined_r0x000146df37c5;
        }
      }
      bVar23 = iVar21 != 0;
      iVar16 = iVar21 + -1;
      iVar21 = iVar16;
    } while (bVar23);
    if (1 < (int)param_2) {
      uVar17 = (ulonglong)param_2 - 1;
      local_18 = param_1[6];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar9 = param_1[5];
      param_1[6] = param_1[uVar17 * 7 + 6];
      uVar10 = param_1[uVar17 * 7];
      uVar11 = (param_1 + uVar17 * 7)[1];
      uVar12 = param_1[uVar17 * 7 + 2];
      uVar13 = (param_1 + uVar17 * 7 + 2)[1];
      uVar14 = (param_1 + uVar17 * 7 + 4)[1];
      param_1[4] = param_1[uVar17 * 7 + 4];
      param_1[5] = uVar14;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[uVar17 * 7 + 6] = local_18;
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar19 = param_1 + uVar17 * 7 + 4;
      *(undefined4 *)puVar19 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
      puVar19 = param_1 + uVar17 * 7 + 2;
      *(undefined4 *)puVar19 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
      puVar19 = param_1 + uVar17 * 7;
      *(undefined4 *)puVar19 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
      local_48 = uVar4;
      uStack_40 = uVar5;
      local_38 = uVar6;
      uStack_30 = uVar7;
      local_28 = uVar8;
      uStack_20 = uVar9;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar18 = 1;
          iVar21 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar20 = iVar18;
            if (((longlong)iVar16 < (longlong)uVar17) &&
               (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34),
               fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
              iVar20 = iVar16;
            }
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar21 * 0x38 + 0x34);
            if (fVar3 < *pfVar2 || fVar3 == *pfVar2) break;
            puVar22 = param_1 + (longlong)iVar21 * 7;
            puVar19 = param_1 + (longlong)iVar20 * 7;
            uVar4 = puVar22[6];
            uVar5 = *puVar22;
            uVar6 = puVar22[1];
            uVar7 = puVar22[2];
            uVar8 = puVar22[3];
            uVar9 = puVar22[4];
            uVar10 = puVar22[5];
            puVar22[6] = puVar19[6];
            uVar11 = *puVar19;
            uVar12 = puVar19[1];
            uVar13 = puVar19[2];
            uVar14 = puVar19[3];
            uVar15 = puVar19[5];
            puVar22[4] = puVar19[4];
            puVar22[5] = uVar15;
            puVar22[2] = uVar13;
            puVar22[3] = uVar14;
            *puVar22 = uVar11;
            puVar22[1] = uVar12;
            puVar19[6] = uVar4;
            puVar19[4] = uVar9;
            puVar19[5] = uVar10;
            puVar19[2] = uVar7;
            puVar19[3] = uVar8;
            *puVar19 = uVar5;
            puVar19[1] = uVar6;
            iVar16 = iVar20 * 2;
            iVar18 = iVar20 * 2 + 1;
            iVar21 = iVar20;
          } while ((longlong)iVar18 < (longlong)uVar17);
          uVar1 = uVar17 - 1;
          local_18 = param_1[6];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          uVar8 = param_1[4];
          uVar9 = param_1[5];
          param_1[6] = param_1[uVar1 * 7 + 6];
          uVar10 = param_1[uVar1 * 7];
          uVar11 = (param_1 + uVar1 * 7)[1];
          uVar12 = param_1[uVar1 * 7 + 2];
          uVar13 = (param_1 + uVar1 * 7 + 2)[1];
          uVar14 = (param_1 + uVar1 * 7 + 4)[1];
          param_1[4] = param_1[uVar1 * 7 + 4];
          param_1[5] = uVar14;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[uVar1 * 7 + 6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          puVar19 = param_1 + uVar1 * 7 + 4;
          *(undefined4 *)puVar19 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
          puVar19 = param_1 + uVar1 * 7 + 2;
          *(undefined4 *)puVar19 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
          puVar19 = param_1 + uVar1 * 7;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          bVar23 = 2 < uVar17;
          uVar17 = uVar1;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
        } while (bVar23);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df3ad3 FUN_146df3ad3 body=1064 status=ok
// SIG undefined FUN_146df3ad3(void)

void FUN_146df3ad3(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  memset(local_368,0,0x2f0);
  local_370 = (ulonglong)param_2 * 0x38 + param_1 + -0x38;
  local_378 = param_1;
  fVar29 = logf((float)(int)param_2);
  local_368[0] = (int)(longlong)(fVar29 + fVar29);
  plVar22 = &local_378;
  while( true ) {
    puVar15 = (undefined8 *)*plVar22;
    puVar23 = (undefined8 *)plVar22[1];
    iVar25 = (int)plVar22[2];
    iVar16 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar15) >> 3);
    puVar26 = puVar23;
    puVar27 = puVar15;
    if (iVar25 != 0) break;
LAB_146df3eca:
    FUN_146df3efc(puVar15);
LAB_146df3eb8:
    plVar22 = plVar22 + -3;
    if (plVar22 < &local_378) {
      if ((local_38 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_146df3b6d:
  uVar18 = iVar16 * -0x49249249 + 1;
  if (8 < (int)uVar18) {
    uVar19 = (ulonglong)(uVar18 >> 1);
    uVar2 = puVar15[uVar19 * 7 + 6];
    uVar3 = puVar15[uVar19 * 7];
    uVar4 = (puVar15 + uVar19 * 7)[1];
    uVar5 = puVar15[uVar19 * 7 + 2];
    uVar6 = (puVar15 + uVar19 * 7 + 2)[1];
    uVar7 = puVar15[uVar19 * 7 + 4];
    uVar8 = (puVar15 + uVar19 * 7 + 4)[1];
    puVar15[uVar19 * 7 + 6] = puVar15[6];
    uVar9 = *puVar15;
    uVar10 = puVar15[1];
    uVar11 = puVar15[2];
    uVar12 = puVar15[3];
    uVar13 = puVar15[5];
    puVar15[uVar19 * 7 + 4] = puVar15[4];
    (puVar15 + uVar19 * 7 + 4)[1] = uVar13;
    puVar15[uVar19 * 7 + 2] = uVar11;
    (puVar15 + uVar19 * 7 + 2)[1] = uVar12;
    puVar15[uVar19 * 7] = uVar9;
    (puVar15 + uVar19 * 7)[1] = uVar10;
    puVar15[6] = uVar2;
    puVar15[4] = uVar7;
    puVar15[5] = uVar8;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    *puVar15 = uVar3;
    puVar15[1] = uVar4;
    puVar20 = puVar23 + 7;
    puVar17 = puVar15;
    do {
      puVar14 = puVar17 + 7;
      puVar24 = puVar17 + 7;
      do {
        puVar17 = puVar24;
        puVar21 = puVar14;
        if (puVar23 < puVar17) break;
        puVar14 = puVar21 + 7;
        puVar24 = puVar17 + 7;
      } while (*(float *)((longlong)puVar17 + 0x34) < *(float *)((longlong)puVar15 + 0x34) ||
               *(float *)((longlong)puVar17 + 0x34) == *(float *)((longlong)puVar15 + 0x34));
      puVar14 = puVar20 + -0xe;
      do {
        puVar24 = puVar20;
        puVar28 = puVar14;
        puVar20 = puVar24 + -7;
        if (puVar20 <= puVar15) break;
        puVar14 = puVar28 + -7;
      } while (*(float *)((longlong)puVar15 + 0x34) < *(float *)((longlong)puVar24 + -4) ||
               *(float *)((longlong)puVar15 + 0x34) == *(float *)((longlong)puVar24 + -4));
      if (puVar20 < puVar17) goto LAB_146df3ce2;
      uVar2 = puVar17[6];
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = puVar17[4];
      uVar8 = puVar17[5];
      puVar17[6] = puVar24[-1];
      uVar9 = *puVar20;
      uVar10 = puVar24[-6];
      uVar11 = puVar24[-5];
      uVar12 = puVar24[-4];
      uVar13 = puVar24[-2];
      puVar17[4] = puVar24[-3];
      puVar17[5] = uVar13;
      puVar17[2] = uVar11;
      puVar17[3] = uVar12;
      *puVar17 = uVar9;
      puVar17[1] = uVar10;
      puVar24[-1] = uVar2;
      puVar24[-3] = uVar7;
      puVar24[-2] = uVar8;
      puVar24[-5] = uVar5;
      puVar24[-4] = uVar6;
      *puVar20 = uVar3;
      puVar24[-6] = uVar4;
    } while( true );
  }
  for (; puVar26 = puVar15, puVar27 = puVar15, puVar15 < puVar23; puVar23 = puVar23 + -7) {
    while (puVar20 = puVar26, puVar26 = puVar27 + 7, puVar26 <= puVar23) {
      pfVar1 = (float *)((longlong)puVar27 + 0x6c);
      puVar27 = puVar26;
      if (*pfVar1 < *(float *)((longlong)puVar20 + 0x34) ||
          *pfVar1 == *(float *)((longlong)puVar20 + 0x34)) {
        puVar26 = puVar20;
      }
    }
    local_48 = puVar20[6];
    local_78 = *puVar20;
    uStack_70 = puVar20[1];
    local_68 = puVar20[2];
    uStack_60 = puVar20[3];
    local_58 = puVar20[4];
    uStack_50 = puVar20[5];
    uVar7 = local_78;
    uVar8 = uStack_70;
    puVar20[6] = puVar23[6];
    uVar2 = *puVar23;
    uVar3 = puVar23[1];
    uVar4 = puVar23[2];
    uVar5 = puVar23[3];
    uVar6 = puVar23[5];
    puVar20[4] = puVar23[4];
    puVar20[5] = uVar6;
    puVar20[2] = uVar4;
    puVar20[3] = uVar5;
    *puVar20 = uVar2;
    puVar20[1] = uVar3;
    puVar23[6] = local_48;
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    puVar23[4] = local_58;
    puVar23[5] = uStack_50;
    puVar23[2] = local_68;
    puVar23[3] = uStack_60;
    *(undefined4 *)puVar23 = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
    *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
    local_78 = uVar7;
    uStack_70 = uVar8;
  }
  goto LAB_146df3eb8;
LAB_146df3ce2:
  local_48 = puVar15[6];
  local_78 = *puVar15;
  uStack_70 = puVar15[1];
  local_68 = puVar15[2];
  uStack_60 = puVar15[3];
  local_58 = puVar15[4];
  uStack_50 = puVar15[5];
  uVar7 = local_78;
  uVar8 = uStack_70;
  puVar15[6] = puVar24[-1];
  uVar2 = *puVar20;
  uVar3 = puVar24[-6];
  uVar4 = puVar24[-5];
  uVar5 = puVar24[-4];
  uVar6 = puVar24[-2];
  puVar15[4] = puVar24[-3];
  puVar15[5] = uVar6;
  puVar15[2] = uVar4;
  puVar15[3] = uVar5;
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  puVar24[-1] = local_48;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  puVar24[-3] = local_58;
  puVar24[-2] = uStack_50;
  puVar24[-5] = local_68;
  puVar24[-4] = uStack_60;
  *(undefined4 *)puVar20 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar24 + -0x34) = local_78._4_4_;
  *(undefined4 *)(puVar24 + -6) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar24 + -0x2c) = uStack_70._4_4_;
  iVar25 = iVar25 + -1;
  puVar24 = puVar24 + -0xe;
  local_78 = uVar7;
  uStack_70 = uVar8;
  if ((longlong)puVar28 - (longlong)puVar27 < (longlong)puVar26 - (longlong)puVar21) {
    if (puVar17 < puVar23) {
      *plVar22 = (longlong)puVar17;
      plVar22[1] = (longlong)puVar23;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar21 = puVar15;
    if (puVar20 <= puVar15 + 7) goto LAB_146df3eb8;
  }
  else {
    if (puVar15 + 7 < puVar20) {
      *plVar22 = (longlong)puVar15;
      plVar22[1] = (longlong)puVar24;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    puVar15 = puVar17;
    puVar24 = puVar23;
    puVar28 = puVar23;
    if (puVar23 <= puVar17) goto LAB_146df3eb8;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar21) >> 3);
  puVar23 = puVar24;
  puVar26 = puVar28;
  puVar27 = puVar21;
  if (iVar25 == 0) goto LAB_146df3eca;
  goto LAB_146df3b6d;
}



// FUNCTION 146df3efc FUN_146df3efc body=829 status=ok
// SIG undefined FUN_146df3efc(void)

void FUN_146df3efc(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar21 = iVar16;
joined_r0x000146df3f30:
    do {
      iVar18 = iVar16 * 2 + 1;
      if (iVar18 < (int)param_2) {
        iVar20 = iVar16 * 2 + 2;
        if ((iVar20 < (int)param_2) &&
           (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34),
           fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
          iVar18 = iVar20;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          puVar22 = param_1 + (longlong)iVar16 * 7;
          puVar19 = param_1 + (longlong)iVar18 * 7;
          local_18 = puVar22[6];
          uVar4 = *puVar22;
          uVar5 = puVar22[1];
          uVar6 = puVar22[2];
          uVar7 = puVar22[3];
          uVar8 = puVar22[4];
          uVar9 = puVar22[5];
          puVar22[6] = puVar19[6];
          uVar10 = *puVar19;
          uVar11 = puVar19[1];
          uVar12 = puVar19[2];
          uVar13 = puVar19[3];
          uVar14 = puVar19[5];
          puVar22[4] = puVar19[4];
          puVar22[5] = uVar14;
          puVar22[2] = uVar12;
          puVar22[3] = uVar13;
          *puVar22 = uVar10;
          puVar22[1] = uVar11;
          puVar19[6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar19 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_20._4_4_;
          *(undefined4 *)(puVar19 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          iVar16 = iVar18;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
          goto joined_r0x000146df3f30;
        }
      }
      bVar23 = iVar21 != 0;
      iVar16 = iVar21 + -1;
      iVar21 = iVar16;
    } while (bVar23);
    if (1 < (int)param_2) {
      uVar17 = (ulonglong)param_2 - 1;
      local_18 = param_1[6];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar9 = param_1[5];
      param_1[6] = param_1[uVar17 * 7 + 6];
      uVar10 = param_1[uVar17 * 7];
      uVar11 = (param_1 + uVar17 * 7)[1];
      uVar12 = param_1[uVar17 * 7 + 2];
      uVar13 = (param_1 + uVar17 * 7 + 2)[1];
      uVar14 = (param_1 + uVar17 * 7 + 4)[1];
      param_1[4] = param_1[uVar17 * 7 + 4];
      param_1[5] = uVar14;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[uVar17 * 7 + 6] = local_18;
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar19 = param_1 + uVar17 * 7 + 4;
      *(undefined4 *)puVar19 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
      puVar19 = param_1 + uVar17 * 7 + 2;
      *(undefined4 *)puVar19 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
      puVar19 = param_1 + uVar17 * 7;
      *(undefined4 *)puVar19 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
      local_48 = uVar4;
      uStack_40 = uVar5;
      local_38 = uVar6;
      uStack_30 = uVar7;
      local_28 = uVar8;
      uStack_20 = uVar9;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar18 = 1;
          iVar21 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar20 = iVar18;
            if (((longlong)iVar16 < (longlong)uVar17) &&
               (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar18 * 0x38 + 0x34),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar16 * 0x38 + 0x34),
               fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
              iVar20 = iVar16;
            }
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar20 * 0x38 + 0x34);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar21 * 0x38 + 0x34);
            if (fVar3 < *pfVar2 || fVar3 == *pfVar2) break;
            puVar22 = param_1 + (longlong)iVar21 * 7;
            puVar19 = param_1 + (longlong)iVar20 * 7;
            uVar4 = puVar22[6];
            uVar5 = *puVar22;
            uVar6 = puVar22[1];
            uVar7 = puVar22[2];
            uVar8 = puVar22[3];
            uVar9 = puVar22[4];
            uVar10 = puVar22[5];
            puVar22[6] = puVar19[6];
            uVar11 = *puVar19;
            uVar12 = puVar19[1];
            uVar13 = puVar19[2];
            uVar14 = puVar19[3];
            uVar15 = puVar19[5];
            puVar22[4] = puVar19[4];
            puVar22[5] = uVar15;
            puVar22[2] = uVar13;
            puVar22[3] = uVar14;
            *puVar22 = uVar11;
            puVar22[1] = uVar12;
            puVar19[6] = uVar4;
            puVar19[4] = uVar9;
            puVar19[5] = uVar10;
            puVar19[2] = uVar7;
            puVar19[3] = uVar8;
            *puVar19 = uVar5;
            puVar19[1] = uVar6;
            iVar16 = iVar20 * 2;
            iVar18 = iVar20 * 2 + 1;
            iVar21 = iVar20;
          } while ((longlong)iVar18 < (longlong)uVar17);
          uVar1 = uVar17 - 1;
          local_18 = param_1[6];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          uVar8 = param_1[4];
          uVar9 = param_1[5];
          param_1[6] = param_1[uVar1 * 7 + 6];
          uVar10 = param_1[uVar1 * 7];
          uVar11 = (param_1 + uVar1 * 7)[1];
          uVar12 = param_1[uVar1 * 7 + 2];
          uVar13 = (param_1 + uVar1 * 7 + 2)[1];
          uVar14 = (param_1 + uVar1 * 7 + 4)[1];
          param_1[4] = param_1[uVar1 * 7 + 4];
          param_1[5] = uVar14;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[uVar1 * 7 + 6] = local_18;
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          puVar19 = param_1 + uVar1 * 7 + 4;
          *(undefined4 *)puVar19 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar19 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_20._4_4_;
          puVar19 = param_1 + uVar1 * 7 + 2;
          *(undefined4 *)puVar19 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar19 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_30._4_4_;
          puVar19 = param_1 + uVar1 * 7;
          *(undefined4 *)puVar19 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar19 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_40._4_4_;
          bVar23 = 2 < uVar17;
          uVar17 = uVar1;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
        } while (bVar23);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df423a FUN_146df423a body=46 status=ok
// SIG undefined FUN_146df423a(void)

void FUN_146df423a(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_146defcfe();
  FUN_146df4268(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 146df4268 FUN_146df4268 body=652 status=ok
// SIG undefined FUN_146df4268(void)

void FUN_146df4268(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar12 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar12;
      puVar13 = (undefined8 *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar6) >> 4);
      puVar16 = puVar13;
      puVar17 = puVar6;
      if (iVar15 != 0) {
LAB_146df432a:
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar2 = puVar6[uVar9 * 2];
          uVar3 = (puVar6 + uVar9 * 2)[1];
          uVar4 = puVar6[1];
          puVar6[uVar9 * 2] = *puVar6;
          (puVar6 + uVar9 * 2)[1] = uVar4;
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          puVar10 = puVar13 + 2;
          puVar7 = puVar6;
          do {
            puVar5 = puVar7 + 2;
            puVar14 = puVar7 + 2;
            do {
              puVar7 = puVar14;
              puVar11 = puVar5;
              if (puVar13 < puVar7) break;
              puVar5 = puVar11 + 2;
              puVar14 = puVar7 + 2;
            } while (*(float *)((longlong)puVar7 + 4) < *(float *)((longlong)puVar6 + 4) ||
                     *(float *)((longlong)puVar7 + 4) == *(float *)((longlong)puVar6 + 4));
            puVar5 = puVar10 + -4;
            do {
              puVar14 = puVar10;
              puVar18 = puVar5;
              puVar10 = puVar14 + -2;
              if (puVar10 <= puVar6) break;
              puVar5 = puVar18 + -2;
            } while (*(float *)((longlong)puVar6 + 4) < *(float *)((longlong)puVar14 + -0xc) ||
                     *(float *)((longlong)puVar6 + 4) == *(float *)((longlong)puVar14 + -0xc));
            if (puVar10 < puVar7) goto LAB_146df43d2;
            uVar2 = *puVar7;
            uVar3 = puVar7[1];
            uVar4 = puVar14[-1];
            *puVar7 = *puVar10;
            puVar7[1] = uVar4;
            *puVar10 = uVar2;
            puVar14[-1] = uVar3;
          } while( true );
        }
        for (; puVar16 = puVar6, puVar17 = puVar6, puVar6 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar10 = puVar16, puVar16 = puVar17 + 2, puVar16 <= puVar13) {
            pfVar1 = (float *)((longlong)puVar17 + 0x14);
            puVar17 = puVar16;
            if (*pfVar1 < *(float *)((longlong)puVar10 + 4) ||
                *pfVar1 == *(float *)((longlong)puVar10 + 4)) {
              puVar16 = puVar10;
            }
          }
          local_48 = *puVar10;
          uStack_40 = puVar10[1];
          uVar3 = local_48;
          uVar4 = uStack_40;
          uVar2 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar2;
          local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
          uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar13 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_40._4_4_;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
        goto LAB_146df44d3;
      }
LAB_146df44e8:
      FUN_146df44f5(puVar6);
LAB_146df44d3:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  if ((local_38 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146df43d2:
  local_48 = *puVar6;
  uStack_40 = puVar6[1];
  uVar3 = local_48;
  uVar4 = uStack_40;
  uVar2 = puVar14[-1];
  *puVar6 = *puVar10;
  puVar6[1] = uVar2;
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar14 + -0xc) = local_48._4_4_;
  *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar14 + -4) = uStack_40._4_4_;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -4;
  local_48 = uVar3;
  uStack_40 = uVar4;
  if ((longlong)puVar18 - (longlong)puVar17 < (longlong)puVar16 - (longlong)puVar11) {
    if (puVar7 < puVar13) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar11 = puVar6;
    if (puVar10 <= puVar6 + 2) goto LAB_146df44d3;
  }
  else {
    if (puVar6 + 2 < puVar10) {
      *plVar12 = (longlong)puVar6;
      plVar12[1] = (longlong)puVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    puVar6 = puVar7;
    puVar14 = puVar13;
    puVar18 = puVar13;
    if (puVar13 <= puVar7) goto LAB_146df44d3;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar11) >> 4);
  puVar13 = puVar14;
  puVar16 = puVar18;
  puVar17 = puVar11;
  if (iVar15 == 0) goto LAB_146df44e8;
  goto LAB_146df432a;
}



// FUNCTION 146df44f5 FUN_146df44f5 body=467 status=ok
// SIG undefined FUN_146df44f5(void)

void FUN_146df44f5(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar7;
joined_r0x000146df4529:
    do {
      iVar9 = iVar7 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar11 = iVar7 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4),
           fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
          iVar9 = iVar11;
        }
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 4);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          puVar10 = param_1 + (longlong)iVar7 * 2;
          puVar13 = param_1 + (longlong)iVar9 * 2;
          uVar4 = *puVar10;
          uVar5 = puVar10[1];
          uVar6 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar6;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar13 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_20._4_4_;
          iVar7 = iVar9;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146df4529;
        }
      }
      bVar14 = iVar12 != 0;
      iVar7 = iVar12 + -1;
      iVar12 = iVar7;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar8 * 2)[1];
      *param_1 = param_1[uVar8 * 2];
      param_1[1] = uVar6;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar10 = param_1 + uVar8 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar9 = 1;
          iVar12 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar11 = iVar9;
            if (((longlong)iVar7 < (longlong)uVar8) &&
               (fVar3 = *(float *)((longlong)param_1 + (longlong)iVar9 * 0x10 + 4),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 4),
               fVar3 < *pfVar2 || fVar3 == *pfVar2)) {
              iVar11 = iVar7;
            }
            fVar3 = *(float *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar12 * 0x10 + 4);
            if (fVar3 < *pfVar2 || fVar3 == *pfVar2) break;
            puVar10 = param_1 + (longlong)iVar12 * 2;
            puVar13 = param_1 + (longlong)iVar11 * 2;
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            uVar6 = puVar13[1];
            *puVar10 = *puVar13;
            puVar10[1] = uVar6;
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            iVar7 = iVar11 * 2;
            iVar9 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar1 = uVar8 - 1;
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar6;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
          bVar14 = 2 < uVar8;
          uVar8 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar14);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df46ca FUN_146df46ca body=161 status=ok
// SIG undefined FUN_146df46ca(void)

longlong FUN_146df46ca(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x800000000;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar7 = 0;
    uVar5 = 0;
    do {
      iVar2 = *(int *)(lVar3 + lVar7);
      uVar6 = (ulonglong)iVar2;
      if ((longlong)uVar6 < 1) {
        uVar6 = (ulonglong)(uint)-iVar2;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x48);
        *(uint *)(param_2 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
          FUN_146d8b45e(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar4 = param_2;
        }
        *(ulonglong *)(lVar4 + (longlong)iVar2 * 8) = uVar5 | uVar6 << 0x20;
      }
      lVar7 = lVar7 + 4;
      uVar5 = uVar6 & 0xffffffff;
    } while ((longlong)iVar1 * 4 != lVar7);
  }
  return param_2;
}



// FUNCTION 146df4774 FUN_146df4774 body=250 status=ok
// SIG undefined FUN_146df4774(void)

void FUN_146df4774(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df4878 FUN_146df4878 body=808 status=ok
// SIG undefined FUN_146df4878(void)

void FUN_146df4878(longlong *param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *param_1;
  uVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar15 = *(float *)(*(longlong *)(lVar5 + 0x310) + uVar13 * 4) *
           *(float *)(*(longlong *)(lVar5 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar17 = 0.0;
  fVar16 = 0.0;
  if (fVar15 <= 0.9999) {
    if (fVar15 <= 1e-08) {
      fVar17 = *(float *)(param_1 + 9);
      fVar16 = 1.0;
    }
    else {
      fVar15 = logf(1.0 - fVar15);
      fVar16 = expf(*(float *)(param_1 + 9) * fVar15 * 60.0);
      fVar17 = (fVar16 + -1.0) / (fVar15 * 60.0);
    }
  }
  lVar1 = lVar5 + 0x20;
  fVar15 = *(float *)(*(longlong *)(lVar5 + 0xb0) + uVar13 * 4);
  local_94 = (undefined4)uVar13;
  if ((fVar15 != 0.0) || (NAN(fVar15))) {
    puVar6 = (undefined8 *)param_1[3];
    lVar7 = *(longlong *)(lVar5 + 0x80);
    lVar10 = uVar13 * 0xc;
    *(undefined4 *)(lVar7 + 8 + lVar10) = *(undefined4 *)(puVar6 + 1);
    *(undefined8 *)(lVar7 + lVar10) = *puVar6;
    puVar6 = (undefined8 *)param_1[2];
    local_98 = (undefined4)param_1[9];
    pcVar8 = (code *)*puVar6;
    plVar12 = puVar6 + 4;
    if ((longlong *)puVar6[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar6[2];
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar8)(uVar11,lVar1,&local_98,&local_94);
    FUN_144b06178(param_1[4],lVar1,(int)param_1[9],uVar13 & 0xffffffff);
    lVar1 = *(longlong *)(lVar5 + 0x68);
    lVar7 = *(longlong *)(lVar5 + 0x80);
    fVar15 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar7 + 8 + lVar10);
    fVar3 = *(float *)(lVar7 + 4 + lVar10);
    *(float *)(lVar1 + lVar10) = fVar15 * *(float *)(lVar7 + lVar10) + *(float *)(lVar1 + lVar10);
    *(float *)(lVar1 + 4 + lVar10) = fVar3 * fVar15 + *(float *)(lVar1 + 4 + lVar10);
    *(float *)(lVar1 + 8 + lVar10) = fVar2 * fVar15 + *(float *)(lVar1 + 8 + lVar10);
    FUN_144b06214(param_1[5],*(longlong *)(lVar5 + 0x48) + lVar10,
                  *(longlong *)(lVar5 + 0x68) + lVar10);
    lVar1 = *(longlong *)(lVar5 + 0x48);
    lVar7 = *(longlong *)(lVar5 + 0x68);
    fVar15 = *(float *)(lVar7 + 8 + lVar10);
    fVar2 = *(float *)(lVar7 + 4 + lVar10);
    fVar3 = *(float *)(lVar1 + 8 + lVar10);
    fVar4 = *(float *)(lVar1 + 4 + lVar10);
    lVar9 = *(longlong *)(lVar5 + 200);
    lVar14 = uVar13 * 0x10;
    *(float *)(lVar9 + lVar14) = fVar17 * *(float *)(lVar7 + lVar10) + *(float *)(lVar1 + lVar10);
    *(float *)(lVar9 + 4 + lVar14) = fVar2 * fVar17 + fVar4;
    *(float *)(lVar9 + 8 + lVar14) = fVar15 * fVar17 + fVar3;
    lVar5 = *(longlong *)(lVar5 + 0x68);
    *(float *)(lVar5 + lVar10) = *(float *)(lVar5 + lVar10) * fVar16;
    *(float *)(lVar5 + 4 + lVar10) = *(float *)(lVar5 + 4 + lVar10) * fVar16;
    *(float *)(lVar5 + 8 + lVar10) = fVar16 * *(float *)(lVar5 + 8 + lVar10);
  }
  else {
    local_98 = *(undefined4 *)(lVar5 + 0x460);
    local_9c = (undefined4)param_1[9];
    pcVar8 = *(code **)(lVar5 + 0x3c0);
    plVar12 = (longlong *)(lVar5 + 0x3e0);
    if (*(longlong **)(lVar5 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar5 + 0x3d0);
    }
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_a8 = &local_94;
    (*pcVar8)(uVar11,lVar1,&local_9c,&local_98);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df4baa FUN_146df4baa body=250 status=ok
// SIG undefined FUN_146df4baa(void)

void FUN_146df4baa(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df4cae FUN_146df4cae body=736 status=ok
// SIG undefined FUN_146df4cae(void)

void FUN_146df4cae(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  uVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar15 = *(float *)(*(longlong *)(lVar4 + 0x310) + uVar13 * 4) *
           *(float *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar17 = 0.0;
  fVar16 = 0.0;
  if (fVar15 <= 0.9999) {
    if (fVar15 <= 1e-08) {
      fVar17 = *(float *)(param_1 + 9);
      fVar16 = 1.0;
    }
    else {
      fVar15 = logf(1.0 - fVar15);
      fVar16 = expf(*(float *)(param_1 + 9) * fVar15 * 60.0);
      fVar17 = (fVar16 + -1.0) / (fVar15 * 60.0);
    }
  }
  fVar15 = *(float *)(*(longlong *)(lVar4 + 0xb0) + uVar13 * 4);
  if ((fVar15 != 0.0) || (NAN(fVar15))) {
    puVar5 = (undefined8 *)param_1[3];
    lVar6 = *(longlong *)(lVar4 + 0x80);
    lVar10 = uVar13 * 0xc;
    *(undefined4 *)(lVar6 + 8 + lVar10) = *(undefined4 *)(puVar5 + 1);
    *(undefined8 *)(lVar6 + lVar10) = *puVar5;
    FUN_144b06178(param_1[4],lVar4 + 0x20,(int)param_1[9],uVar13 & 0xffffffff);
    lVar6 = *(longlong *)(lVar4 + 0x68);
    lVar7 = *(longlong *)(lVar4 + 0x80);
    fVar15 = *(float *)(param_1 + 9);
    fVar1 = *(float *)(lVar7 + 8 + lVar10);
    fVar2 = *(float *)(lVar7 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar15 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 4 + lVar10) = fVar2 * fVar15 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar1 * fVar15 + *(float *)(lVar6 + 8 + lVar10);
    FUN_144b06214(param_1[5],*(longlong *)(lVar4 + 0x48) + lVar10,
                  *(longlong *)(lVar4 + 0x68) + lVar10);
    lVar6 = *(longlong *)(lVar4 + 0x48);
    lVar7 = *(longlong *)(lVar4 + 0x68);
    fVar15 = *(float *)(lVar7 + 8 + lVar10);
    fVar1 = *(float *)(lVar7 + 4 + lVar10);
    fVar2 = *(float *)(lVar6 + 8 + lVar10);
    fVar3 = *(float *)(lVar6 + 4 + lVar10);
    lVar8 = *(longlong *)(lVar4 + 200);
    lVar14 = uVar13 * 0x10;
    *(float *)(lVar8 + lVar14) = fVar17 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar8 + 4 + lVar14) = fVar1 * fVar17 + fVar3;
    *(float *)(lVar8 + 8 + lVar14) = fVar15 * fVar17 + fVar2;
    lVar4 = *(longlong *)(lVar4 + 0x68);
    *(float *)(lVar4 + lVar10) = *(float *)(lVar4 + lVar10) * fVar16;
    *(float *)(lVar4 + 4 + lVar10) = *(float *)(lVar4 + 4 + lVar10) * fVar16;
    *(float *)(lVar4 + 8 + lVar10) = fVar16 * *(float *)(lVar4 + 8 + lVar10);
  }
  else {
    local_88 = *(undefined4 *)(lVar4 + 0x460);
    local_8c = (undefined4)param_1[9];
    pcVar9 = *(code **)(lVar4 + 0x3c0);
    plVar12 = (longlong *)(lVar4 + 0x3e0);
    if (*(longlong **)(lVar4 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar4 + 0x3d0);
    }
    local_84 = (int)uVar13;
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_98 = &local_84;
    (*pcVar9)(uVar11,lVar4 + 0x20,&local_8c,&local_88);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df4f98 FUN_146df4f98 body=525 status=ok
// SIG undefined FUN_146df4f98(void)

void FUN_146df4f98(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  uVar14 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)(lVar6 + 0x80);
    lVar12 = uVar14 * 0xc;
    *(undefined4 *)(lVar8 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
    *(undefined8 *)(lVar8 + lVar12) = *puVar7;
    FUN_144b06178(param_1[4],lVar6 + 0x20,(int)param_1[9],uVar14 & 0xffffffff);
    lVar8 = *(longlong *)(lVar6 + 0x68);
    lVar9 = *(longlong *)(lVar6 + 0x80);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    *(float *)(lVar8 + lVar12) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar8 + 4 + lVar12) = fVar3 * fVar1 + *(float *)(lVar8 + 4 + lVar12);
    *(float *)(lVar8 + 8 + lVar12) = fVar2 * fVar1 + *(float *)(lVar8 + 8 + lVar12);
    FUN_144b06214(param_1[5],*(longlong *)(lVar6 + 0x48) + lVar12,
                  *(longlong *)(lVar6 + 0x68) + lVar12);
    lVar8 = *(longlong *)(lVar6 + 0x48);
    lVar9 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar12);
    lVar10 = *(longlong *)(lVar6 + 200);
    lVar15 = uVar14 * 0x10;
    *(float *)(lVar10 + lVar15) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar10 + 4 + lVar15) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar10 + 8 + lVar15) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) * fVar1;
    *(float *)(lVar6 + 4 + lVar12) = *(float *)(lVar6 + 4 + lVar12) * fVar1;
    *(float *)(lVar6 + 8 + lVar12) = fVar1 * *(float *)(lVar6 + 8 + lVar12);
  }
  else {
    local_40 = *(undefined4 *)(lVar6 + 0x460);
    local_44 = (undefined4)param_1[9];
    pcVar11 = *(code **)(lVar6 + 0x3c0);
    plVar16 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar16 = *(longlong **)(lVar6 + 0x3d0);
    }
    local_3c = (int)uVar14;
    uVar13 = (**(code **)(*plVar16 + 8))(plVar16);
    local_58 = &local_3c;
    (*pcVar11)(uVar13,lVar6 + 0x20,&local_44,&local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df51ae FUN_146df51ae body=250 status=ok
// SIG undefined FUN_146df51ae(void)

void FUN_146df51ae(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df52b2 FUN_146df52b2 body=785 status=ok
// SIG undefined FUN_146df52b2(void)

void FUN_146df52b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *param_1;
  uVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar15 = *(float *)(*(longlong *)(lVar5 + 0x310) + uVar13 * 4) *
           *(float *)(*(longlong *)(lVar5 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar17 = 0.0;
  fVar16 = 0.0;
  if (fVar15 <= 0.9999) {
    if (fVar15 <= 1e-08) {
      fVar17 = *(float *)(param_1 + 9);
      fVar16 = 1.0;
    }
    else {
      fVar15 = logf(1.0 - fVar15);
      fVar16 = expf(*(float *)(param_1 + 9) * fVar15 * 60.0);
      fVar17 = (fVar16 + -1.0) / (fVar15 * 60.0);
    }
  }
  lVar1 = lVar5 + 0x20;
  fVar15 = *(float *)(*(longlong *)(lVar5 + 0xb0) + uVar13 * 4);
  local_94 = (undefined4)uVar13;
  if ((fVar15 != 0.0) || (NAN(fVar15))) {
    puVar6 = (undefined8 *)param_1[3];
    lVar7 = *(longlong *)(lVar5 + 0x80);
    lVar10 = uVar13 * 0xc;
    *(undefined4 *)(lVar7 + 8 + lVar10) = *(undefined4 *)(puVar6 + 1);
    *(undefined8 *)(lVar7 + lVar10) = *puVar6;
    puVar6 = (undefined8 *)param_1[2];
    local_98 = (undefined4)param_1[9];
    pcVar8 = (code *)*puVar6;
    plVar12 = puVar6 + 4;
    if ((longlong *)puVar6[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar6[2];
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar8)(uVar11,lVar1,&local_98,&local_94);
    FUN_144b06178(param_1[4],lVar1,(int)param_1[9],uVar13 & 0xffffffff);
    lVar1 = *(longlong *)(lVar5 + 0x68);
    lVar7 = *(longlong *)(lVar5 + 0x80);
    fVar15 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar7 + 8 + lVar10);
    fVar3 = *(float *)(lVar7 + 4 + lVar10);
    *(float *)(lVar1 + lVar10) = fVar15 * *(float *)(lVar7 + lVar10) + *(float *)(lVar1 + lVar10);
    *(float *)(lVar1 + 4 + lVar10) = fVar3 * fVar15 + *(float *)(lVar1 + 4 + lVar10);
    *(float *)(lVar1 + 8 + lVar10) = fVar2 * fVar15 + *(float *)(lVar1 + 8 + lVar10);
    lVar1 = *(longlong *)(lVar5 + 0x48);
    lVar7 = *(longlong *)(lVar5 + 0x68);
    fVar15 = *(float *)(lVar7 + 8 + lVar10);
    fVar2 = *(float *)(lVar7 + 4 + lVar10);
    fVar3 = *(float *)(lVar1 + 8 + lVar10);
    fVar4 = *(float *)(lVar1 + 4 + lVar10);
    lVar9 = *(longlong *)(lVar5 + 200);
    lVar14 = uVar13 * 0x10;
    *(float *)(lVar9 + lVar14) = fVar17 * *(float *)(lVar7 + lVar10) + *(float *)(lVar1 + lVar10);
    *(float *)(lVar9 + 4 + lVar14) = fVar2 * fVar17 + fVar4;
    *(float *)(lVar9 + 8 + lVar14) = fVar15 * fVar17 + fVar3;
    lVar5 = *(longlong *)(lVar5 + 0x68);
    *(float *)(lVar5 + lVar10) = *(float *)(lVar5 + lVar10) * fVar16;
    *(float *)(lVar5 + 4 + lVar10) = *(float *)(lVar5 + 4 + lVar10) * fVar16;
    *(float *)(lVar5 + 8 + lVar10) = fVar16 * *(float *)(lVar5 + 8 + lVar10);
  }
  else {
    local_98 = *(undefined4 *)(lVar5 + 0x460);
    local_9c = (undefined4)param_1[9];
    pcVar8 = *(code **)(lVar5 + 0x3c0);
    plVar12 = (longlong *)(lVar5 + 0x3e0);
    if (*(longlong **)(lVar5 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar5 + 0x3d0);
    }
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_a8 = &local_94;
    (*pcVar8)(uVar11,lVar1,&local_9c,&local_98);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df55cc FUN_146df55cc body=250 status=ok
// SIG undefined FUN_146df55cc(void)

void FUN_146df55cc(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df56d0 FUN_146df56d0 body=713 status=ok
// SIG undefined FUN_146df56d0(void)

void FUN_146df56d0(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  uVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar15 = *(float *)(*(longlong *)(lVar4 + 0x310) + uVar13 * 4) *
           *(float *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar17 = 0.0;
  fVar16 = 0.0;
  if (fVar15 <= 0.9999) {
    if (fVar15 <= 1e-08) {
      fVar17 = *(float *)(param_1 + 9);
      fVar16 = 1.0;
    }
    else {
      fVar15 = logf(1.0 - fVar15);
      fVar16 = expf(*(float *)(param_1 + 9) * fVar15 * 60.0);
      fVar17 = (fVar16 + -1.0) / (fVar15 * 60.0);
    }
  }
  fVar15 = *(float *)(*(longlong *)(lVar4 + 0xb0) + uVar13 * 4);
  if ((fVar15 != 0.0) || (NAN(fVar15))) {
    puVar5 = (undefined8 *)param_1[3];
    lVar6 = *(longlong *)(lVar4 + 0x80);
    lVar10 = uVar13 * 0xc;
    *(undefined4 *)(lVar6 + 8 + lVar10) = *(undefined4 *)(puVar5 + 1);
    *(undefined8 *)(lVar6 + lVar10) = *puVar5;
    FUN_144b06178(param_1[4],lVar4 + 0x20,(int)param_1[9],uVar13 & 0xffffffff);
    lVar6 = *(longlong *)(lVar4 + 0x68);
    lVar7 = *(longlong *)(lVar4 + 0x80);
    fVar15 = *(float *)(param_1 + 9);
    fVar1 = *(float *)(lVar7 + 8 + lVar10);
    fVar2 = *(float *)(lVar7 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar15 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 4 + lVar10) = fVar2 * fVar15 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar1 * fVar15 + *(float *)(lVar6 + 8 + lVar10);
    lVar6 = *(longlong *)(lVar4 + 0x48);
    lVar7 = *(longlong *)(lVar4 + 0x68);
    fVar15 = *(float *)(lVar7 + 8 + lVar10);
    fVar1 = *(float *)(lVar7 + 4 + lVar10);
    fVar2 = *(float *)(lVar6 + 8 + lVar10);
    fVar3 = *(float *)(lVar6 + 4 + lVar10);
    lVar8 = *(longlong *)(lVar4 + 200);
    lVar14 = uVar13 * 0x10;
    *(float *)(lVar8 + lVar14) = fVar17 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar8 + 4 + lVar14) = fVar1 * fVar17 + fVar3;
    *(float *)(lVar8 + 8 + lVar14) = fVar15 * fVar17 + fVar2;
    lVar4 = *(longlong *)(lVar4 + 0x68);
    *(float *)(lVar4 + lVar10) = *(float *)(lVar4 + lVar10) * fVar16;
    *(float *)(lVar4 + 4 + lVar10) = *(float *)(lVar4 + 4 + lVar10) * fVar16;
    *(float *)(lVar4 + 8 + lVar10) = fVar16 * *(float *)(lVar4 + 8 + lVar10);
  }
  else {
    local_88 = *(undefined4 *)(lVar4 + 0x460);
    local_8c = (undefined4)param_1[9];
    pcVar9 = *(code **)(lVar4 + 0x3c0);
    plVar12 = (longlong *)(lVar4 + 0x3e0);
    if (*(longlong **)(lVar4 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar4 + 0x3d0);
    }
    local_84 = (int)uVar13;
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_98 = &local_84;
    (*pcVar9)(uVar11,lVar4 + 0x20,&local_8c,&local_88);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df59a2 FUN_146df59a2 body=502 status=ok
// SIG undefined FUN_146df59a2(void)

void FUN_146df59a2(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  uVar14 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + uVar14 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)(lVar6 + 0x80);
    lVar12 = uVar14 * 0xc;
    *(undefined4 *)(lVar8 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
    *(undefined8 *)(lVar8 + lVar12) = *puVar7;
    FUN_144b06178(param_1[4],lVar6 + 0x20,(int)param_1[9],uVar14 & 0xffffffff);
    lVar8 = *(longlong *)(lVar6 + 0x68);
    lVar9 = *(longlong *)(lVar6 + 0x80);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    *(float *)(lVar8 + lVar12) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar8 + 4 + lVar12) = fVar3 * fVar1 + *(float *)(lVar8 + 4 + lVar12);
    *(float *)(lVar8 + 8 + lVar12) = fVar2 * fVar1 + *(float *)(lVar8 + 8 + lVar12);
    lVar8 = *(longlong *)(lVar6 + 0x48);
    lVar9 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar12);
    lVar10 = *(longlong *)(lVar6 + 200);
    lVar15 = uVar14 * 0x10;
    *(float *)(lVar10 + lVar15) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar10 + 4 + lVar15) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar10 + 8 + lVar15) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) * fVar1;
    *(float *)(lVar6 + 4 + lVar12) = *(float *)(lVar6 + 4 + lVar12) * fVar1;
    *(float *)(lVar6 + 8 + lVar12) = fVar1 * *(float *)(lVar6 + 8 + lVar12);
  }
  else {
    local_40 = *(undefined4 *)(lVar6 + 0x460);
    local_44 = (undefined4)param_1[9];
    pcVar11 = *(code **)(lVar6 + 0x3c0);
    plVar16 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar16 = *(longlong **)(lVar6 + 0x3d0);
    }
    local_3c = (int)uVar14;
    uVar13 = (**(code **)(*plVar16 + 8))(plVar16);
    local_58 = &local_3c;
    (*pcVar11)(uVar13,lVar6 + 0x20,&local_44,&local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df5ba2 FUN_146df5ba2 body=250 status=ok
// SIG undefined FUN_146df5ba2(void)

void FUN_146df5ba2(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df5ca6 FUN_146df5ca6 body=792 status=ok
// SIG undefined FUN_146df5ca6(void)

void FUN_146df5ca6(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *param_1;
  lVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar14 = *(float *)(*(longlong *)(lVar4 + 0x310) + lVar13 * 4) *
           *(float *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar16 = 0.0;
  fVar15 = 0.0;
  if (fVar14 <= 0.9999) {
    if (fVar14 <= 1e-08) {
      fVar16 = *(float *)(param_1 + 9);
      fVar15 = 1.0;
    }
    else {
      fVar14 = logf(1.0 - fVar14);
      fVar15 = expf(*(float *)(param_1 + 9) * fVar14 * 60.0);
      fVar16 = (fVar15 + -1.0) / (fVar14 * 60.0);
    }
  }
  fVar14 = *(float *)(*(longlong *)(lVar4 + 0xb0) + lVar13 * 4);
  local_94 = (undefined4)lVar13;
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    puVar5 = (undefined8 *)param_1[3];
    lVar6 = *(longlong *)(lVar4 + 0x80);
    lVar10 = lVar13 * 0xc;
    *(undefined4 *)(lVar6 + 8 + lVar10) = *(undefined4 *)(puVar5 + 1);
    *(undefined8 *)(lVar6 + lVar10) = *puVar5;
    puVar5 = (undefined8 *)param_1[2];
    local_98 = (undefined4)param_1[9];
    pcVar7 = (code *)*puVar5;
    plVar12 = puVar5 + 4;
    if ((longlong *)puVar5[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar5[2];
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar7)(uVar11,lVar4 + 0x20,&local_98,&local_94);
    lVar6 = *(longlong *)(lVar4 + 0x68);
    lVar8 = *(longlong *)(lVar4 + 0x80);
    fVar14 = *(float *)(param_1 + 9);
    fVar1 = *(float *)(lVar8 + 8 + lVar10);
    fVar2 = *(float *)(lVar8 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar14 * *(float *)(lVar8 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 4 + lVar10) = fVar2 * fVar14 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar1 * fVar14 + *(float *)(lVar6 + 8 + lVar10);
    FUN_144b06214(param_1[5],*(longlong *)(lVar4 + 0x48) + lVar10,
                  *(longlong *)(lVar4 + 0x68) + lVar10);
    lVar6 = *(longlong *)(lVar4 + 0x48);
    lVar8 = *(longlong *)(lVar4 + 0x68);
    fVar14 = *(float *)(lVar8 + 8 + lVar10);
    fVar1 = *(float *)(lVar8 + 4 + lVar10);
    fVar2 = *(float *)(lVar6 + 8 + lVar10);
    fVar3 = *(float *)(lVar6 + 4 + lVar10);
    lVar9 = *(longlong *)(lVar4 + 200);
    lVar13 = lVar13 * 0x10;
    *(float *)(lVar9 + lVar13) = fVar16 * *(float *)(lVar8 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar9 + 4 + lVar13) = fVar1 * fVar16 + fVar3;
    *(float *)(lVar9 + 8 + lVar13) = fVar14 * fVar16 + fVar2;
    lVar4 = *(longlong *)(lVar4 + 0x68);
    *(float *)(lVar4 + lVar10) = *(float *)(lVar4 + lVar10) * fVar15;
    *(float *)(lVar4 + 4 + lVar10) = *(float *)(lVar4 + 4 + lVar10) * fVar15;
    *(float *)(lVar4 + 8 + lVar10) = fVar15 * *(float *)(lVar4 + 8 + lVar10);
  }
  else {
    local_98 = *(undefined4 *)(lVar4 + 0x460);
    local_9c = (undefined4)param_1[9];
    pcVar7 = *(code **)(lVar4 + 0x3c0);
    plVar12 = (longlong *)(lVar4 + 0x3e0);
    if (*(longlong **)(lVar4 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar4 + 0x3d0);
    }
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_a8 = &local_94;
    (*pcVar7)(uVar11,lVar4 + 0x20,&local_9c,&local_98);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df5fc8 FUN_146df5fc8 body=581 status=ok
// SIG undefined FUN_146df5fc8(void)

void FUN_146df5fc8(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  lVar15 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + lVar15 * 4);
  local_4c = (undefined4)lVar15;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)(lVar6 + 0x80);
    lVar12 = lVar15 * 0xc;
    *(undefined4 *)(lVar8 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
    *(undefined8 *)(lVar8 + lVar12) = *puVar7;
    puVar7 = (undefined8 *)param_1[2];
    local_50 = (undefined4)param_1[9];
    pcVar9 = (code *)*puVar7;
    plVar14 = puVar7 + 4;
    if ((longlong *)puVar7[2] != (longlong *)0x0) {
      plVar14 = (longlong *)puVar7[2];
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar9)(uVar13,lVar6 + 0x20,&local_50,&local_4c);
    lVar8 = *(longlong *)(lVar6 + 0x68);
    lVar10 = *(longlong *)(lVar6 + 0x80);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar10 + 8 + lVar12);
    fVar3 = *(float *)(lVar10 + 4 + lVar12);
    *(float *)(lVar8 + lVar12) = fVar1 * *(float *)(lVar10 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar8 + 4 + lVar12) = fVar3 * fVar1 + *(float *)(lVar8 + 4 + lVar12);
    *(float *)(lVar8 + 8 + lVar12) = fVar2 * fVar1 + *(float *)(lVar8 + 8 + lVar12);
    FUN_144b06214(param_1[5],*(longlong *)(lVar6 + 0x48) + lVar12,
                  *(longlong *)(lVar6 + 0x68) + lVar12);
    lVar8 = *(longlong *)(lVar6 + 0x48);
    lVar10 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar10 + 8 + lVar12);
    fVar3 = *(float *)(lVar10 + 4 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar12);
    lVar11 = *(longlong *)(lVar6 + 200);
    lVar15 = lVar15 * 0x10;
    *(float *)(lVar11 + lVar15) = fVar1 * *(float *)(lVar10 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar11 + 4 + lVar15) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar11 + 8 + lVar15) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) * fVar1;
    *(float *)(lVar6 + 4 + lVar12) = *(float *)(lVar6 + 4 + lVar12) * fVar1;
    *(float *)(lVar6 + 8 + lVar12) = fVar1 * *(float *)(lVar6 + 8 + lVar12);
  }
  else {
    local_50 = *(undefined4 *)(lVar6 + 0x460);
    local_54 = (undefined4)param_1[9];
    pcVar9 = *(code **)(lVar6 + 0x3c0);
    plVar14 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar14 = *(longlong **)(lVar6 + 0x3d0);
    }
    uVar13 = (**(code **)(*plVar14 + 8))(plVar14);
    local_68 = &local_4c;
    (*pcVar9)(uVar13,lVar6 + 0x20,&local_54,&local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df6216 FUN_146df6216 body=250 status=ok
// SIG undefined FUN_146df6216(void)

void FUN_146df6216(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df631a FUN_146df631a body=701 status=ok
// SIG undefined FUN_146df631a(void)

void FUN_146df631a(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  lVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar14 = *(float *)(*(longlong *)(lVar4 + 0x310) + lVar13 * 4) *
           *(float *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar16 = 0.0;
  fVar15 = 0.0;
  if (fVar14 <= 0.9999) {
    if (fVar14 <= 1e-08) {
      fVar16 = *(float *)(param_1 + 9);
      fVar15 = 1.0;
    }
    else {
      fVar14 = logf(1.0 - fVar14);
      fVar15 = expf(*(float *)(param_1 + 9) * fVar14 * 60.0);
      fVar16 = (fVar15 + -1.0) / (fVar14 * 60.0);
    }
  }
  fVar14 = *(float *)(*(longlong *)(lVar4 + 0xb0) + lVar13 * 4);
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    puVar5 = (undefined8 *)param_1[3];
    lVar6 = *(longlong *)(lVar4 + 0x80);
    lVar10 = lVar13 * 0xc;
    *(undefined4 *)(lVar6 + 8 + lVar10) = *(undefined4 *)(puVar5 + 1);
    *(undefined8 *)(lVar6 + lVar10) = *puVar5;
    lVar6 = *(longlong *)(lVar4 + 0x68);
    lVar7 = *(longlong *)(lVar4 + 0x80);
    fVar14 = *(float *)(param_1 + 9);
    fVar1 = *(float *)(lVar7 + 8 + lVar10);
    fVar2 = *(float *)(lVar7 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar14 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 4 + lVar10) = fVar2 * fVar14 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar1 * fVar14 + *(float *)(lVar6 + 8 + lVar10);
    FUN_144b06214(param_1[5],*(longlong *)(lVar4 + 0x48) + lVar10,
                  *(longlong *)(lVar4 + 0x68) + lVar10);
    lVar6 = *(longlong *)(lVar4 + 0x48);
    lVar7 = *(longlong *)(lVar4 + 0x68);
    fVar14 = *(float *)(lVar7 + 8 + lVar10);
    fVar1 = *(float *)(lVar7 + 4 + lVar10);
    fVar2 = *(float *)(lVar6 + 8 + lVar10);
    fVar3 = *(float *)(lVar6 + 4 + lVar10);
    lVar8 = *(longlong *)(lVar4 + 200);
    lVar13 = lVar13 * 0x10;
    *(float *)(lVar8 + lVar13) = fVar16 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar8 + 4 + lVar13) = fVar1 * fVar16 + fVar3;
    *(float *)(lVar8 + 8 + lVar13) = fVar14 * fVar16 + fVar2;
    lVar4 = *(longlong *)(lVar4 + 0x68);
    *(float *)(lVar4 + lVar10) = *(float *)(lVar4 + lVar10) * fVar15;
    *(float *)(lVar4 + 4 + lVar10) = *(float *)(lVar4 + 4 + lVar10) * fVar15;
    *(float *)(lVar4 + 8 + lVar10) = fVar15 * *(float *)(lVar4 + 8 + lVar10);
  }
  else {
    local_88 = *(undefined4 *)(lVar4 + 0x460);
    local_8c = (undefined4)param_1[9];
    local_84 = (undefined4)lVar13;
    pcVar9 = *(code **)(lVar4 + 0x3c0);
    plVar12 = (longlong *)(lVar4 + 0x3e0);
    if (*(longlong **)(lVar4 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar4 + 0x3d0);
    }
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_98 = &local_84;
    (*pcVar9)(uVar11,lVar4 + 0x20,&local_8c,&local_88);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df65e0 FUN_146df65e0 body=488 status=ok
// SIG undefined FUN_146df65e0(void)

void FUN_146df65e0(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  lVar15 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + lVar15 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)(lVar6 + 0x80);
    lVar12 = lVar15 * 0xc;
    *(undefined4 *)(lVar8 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
    *(undefined8 *)(lVar8 + lVar12) = *puVar7;
    lVar8 = *(longlong *)(lVar6 + 0x68);
    lVar9 = *(longlong *)(lVar6 + 0x80);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    *(float *)(lVar8 + lVar12) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar8 + 4 + lVar12) = fVar3 * fVar1 + *(float *)(lVar8 + 4 + lVar12);
    *(float *)(lVar8 + 8 + lVar12) = fVar2 * fVar1 + *(float *)(lVar8 + 8 + lVar12);
    FUN_144b06214(param_1[5],*(longlong *)(lVar6 + 0x48) + lVar12,
                  *(longlong *)(lVar6 + 0x68) + lVar12);
    lVar8 = *(longlong *)(lVar6 + 0x48);
    lVar9 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar12);
    lVar10 = *(longlong *)(lVar6 + 200);
    lVar15 = lVar15 * 0x10;
    *(float *)(lVar10 + lVar15) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar10 + 4 + lVar15) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar10 + 8 + lVar15) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) * fVar1;
    *(float *)(lVar6 + 4 + lVar12) = *(float *)(lVar6 + 4 + lVar12) * fVar1;
    *(float *)(lVar6 + 8 + lVar12) = fVar1 * *(float *)(lVar6 + 8 + lVar12);
  }
  else {
    local_40 = *(undefined4 *)(lVar6 + 0x460);
    local_44 = (undefined4)param_1[9];
    local_3c = (undefined4)lVar15;
    pcVar11 = *(code **)(lVar6 + 0x3c0);
    plVar14 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar14 = *(longlong **)(lVar6 + 0x3d0);
    }
    uVar13 = (**(code **)(*plVar14 + 8))(plVar14);
    local_58 = &local_3c;
    (*pcVar11)(uVar13,lVar6 + 0x20,&local_44,&local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df67d2 FUN_146df67d2 body=250 status=ok
// SIG undefined FUN_146df67d2(void)

void FUN_146df67d2(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df68d6 FUN_146df68d6 body=769 status=ok
// SIG undefined FUN_146df68d6(void)

void FUN_146df68d6(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *param_1;
  lVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar14 = *(float *)(*(longlong *)(lVar4 + 0x310) + lVar13 * 4) *
           *(float *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar16 = 0.0;
  fVar15 = 0.0;
  if (fVar14 <= 0.9999) {
    if (fVar14 <= 1e-08) {
      fVar16 = *(float *)(param_1 + 9);
      fVar15 = 1.0;
    }
    else {
      fVar14 = logf(1.0 - fVar14);
      fVar15 = expf(*(float *)(param_1 + 9) * fVar14 * 60.0);
      fVar16 = (fVar15 + -1.0) / (fVar14 * 60.0);
    }
  }
  fVar14 = *(float *)(*(longlong *)(lVar4 + 0xb0) + lVar13 * 4);
  local_94 = (undefined4)lVar13;
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    puVar5 = (undefined8 *)param_1[3];
    lVar6 = *(longlong *)(lVar4 + 0x80);
    lVar10 = lVar13 * 0xc;
    *(undefined4 *)(lVar6 + 8 + lVar10) = *(undefined4 *)(puVar5 + 1);
    *(undefined8 *)(lVar6 + lVar10) = *puVar5;
    puVar5 = (undefined8 *)param_1[2];
    local_98 = (undefined4)param_1[9];
    pcVar7 = (code *)*puVar5;
    plVar12 = puVar5 + 4;
    if ((longlong *)puVar5[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar5[2];
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar7)(uVar11,lVar4 + 0x20,&local_98,&local_94);
    lVar6 = *(longlong *)(lVar4 + 0x68);
    lVar8 = *(longlong *)(lVar4 + 0x80);
    fVar14 = *(float *)(param_1 + 9);
    fVar1 = *(float *)(lVar8 + 8 + lVar10);
    fVar2 = *(float *)(lVar8 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar14 * *(float *)(lVar8 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 4 + lVar10) = fVar2 * fVar14 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar1 * fVar14 + *(float *)(lVar6 + 8 + lVar10);
    lVar6 = *(longlong *)(lVar4 + 0x48);
    lVar8 = *(longlong *)(lVar4 + 0x68);
    fVar14 = *(float *)(lVar8 + 8 + lVar10);
    fVar1 = *(float *)(lVar8 + 4 + lVar10);
    fVar2 = *(float *)(lVar6 + 8 + lVar10);
    fVar3 = *(float *)(lVar6 + 4 + lVar10);
    lVar9 = *(longlong *)(lVar4 + 200);
    lVar13 = lVar13 * 0x10;
    *(float *)(lVar9 + lVar13) = fVar16 * *(float *)(lVar8 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar9 + 4 + lVar13) = fVar1 * fVar16 + fVar3;
    *(float *)(lVar9 + 8 + lVar13) = fVar14 * fVar16 + fVar2;
    lVar4 = *(longlong *)(lVar4 + 0x68);
    *(float *)(lVar4 + lVar10) = *(float *)(lVar4 + lVar10) * fVar15;
    *(float *)(lVar4 + 4 + lVar10) = *(float *)(lVar4 + 4 + lVar10) * fVar15;
    *(float *)(lVar4 + 8 + lVar10) = fVar15 * *(float *)(lVar4 + 8 + lVar10);
  }
  else {
    local_98 = *(undefined4 *)(lVar4 + 0x460);
    local_9c = (undefined4)param_1[9];
    pcVar7 = *(code **)(lVar4 + 0x3c0);
    plVar12 = (longlong *)(lVar4 + 0x3e0);
    if (*(longlong **)(lVar4 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar4 + 0x3d0);
    }
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_a8 = &local_94;
    (*pcVar7)(uVar11,lVar4 + 0x20,&local_9c,&local_98);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df6be0 FUN_146df6be0 body=558 status=ok
// SIG undefined FUN_146df6be0(void)

void FUN_146df6be0(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  lVar15 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + lVar15 * 4);
  local_4c = (undefined4)lVar15;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)(lVar6 + 0x80);
    lVar12 = lVar15 * 0xc;
    *(undefined4 *)(lVar8 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
    *(undefined8 *)(lVar8 + lVar12) = *puVar7;
    puVar7 = (undefined8 *)param_1[2];
    local_50 = (undefined4)param_1[9];
    pcVar9 = (code *)*puVar7;
    plVar14 = puVar7 + 4;
    if ((longlong *)puVar7[2] != (longlong *)0x0) {
      plVar14 = (longlong *)puVar7[2];
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar9)(uVar13,lVar6 + 0x20,&local_50,&local_4c);
    lVar8 = *(longlong *)(lVar6 + 0x68);
    lVar10 = *(longlong *)(lVar6 + 0x80);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar10 + 8 + lVar12);
    fVar3 = *(float *)(lVar10 + 4 + lVar12);
    *(float *)(lVar8 + lVar12) = fVar1 * *(float *)(lVar10 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar8 + 4 + lVar12) = fVar3 * fVar1 + *(float *)(lVar8 + 4 + lVar12);
    *(float *)(lVar8 + 8 + lVar12) = fVar2 * fVar1 + *(float *)(lVar8 + 8 + lVar12);
    lVar8 = *(longlong *)(lVar6 + 0x48);
    lVar10 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar10 + 8 + lVar12);
    fVar3 = *(float *)(lVar10 + 4 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar12);
    lVar11 = *(longlong *)(lVar6 + 200);
    lVar15 = lVar15 * 0x10;
    *(float *)(lVar11 + lVar15) = fVar1 * *(float *)(lVar10 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar11 + 4 + lVar15) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar11 + 8 + lVar15) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) * fVar1;
    *(float *)(lVar6 + 4 + lVar12) = *(float *)(lVar6 + 4 + lVar12) * fVar1;
    *(float *)(lVar6 + 8 + lVar12) = fVar1 * *(float *)(lVar6 + 8 + lVar12);
  }
  else {
    local_50 = *(undefined4 *)(lVar6 + 0x460);
    local_54 = (undefined4)param_1[9];
    pcVar9 = *(code **)(lVar6 + 0x3c0);
    plVar14 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar14 = *(longlong **)(lVar6 + 0x3d0);
    }
    uVar13 = (**(code **)(*plVar14 + 8))(plVar14);
    local_68 = &local_4c;
    (*pcVar9)(uVar13,lVar6 + 0x20,&local_54,&local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df6e18 FUN_146df6e18 body=250 status=ok
// SIG undefined FUN_146df6e18(void)

void FUN_146df6e18(longlong *param_1,int param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar7 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xb0) + lVar7 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 200);
    *(undefined4 *)(lVar2 + 8 + lVar7 * 0x10) = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined8 *)(lVar2 + lVar7 * 0x10) = *(undefined8 *)(lVar3 + lVar7 * 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  local_38 = *(undefined4 *)(lVar2 + 0x460);
  local_3c = (undefined4)param_1[7];
  local_34 = (undefined4)lVar7;
  pcVar4 = *(code **)(lVar2 + 0x3c0);
  plVar6 = (longlong *)(lVar2 + 0x3e0);
  if (*(longlong **)(lVar2 + 0x3d0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0x3d0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  local_48 = &local_34;
  (*pcVar4)(uVar5,lVar2 + 0x20,&local_3c,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df6f1c FUN_146df6f1c body=635 status=ok
// SIG undefined FUN_146df6f1c(void)

void FUN_146df6f1c(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_1;
  lVar13 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar16 = *(float *)(*(longlong *)(lVar4 + 0x310) + lVar13 * 4) *
           *(float *)(*(longlong *)(lVar4 + 0x2c8) + (longlong)*(int *)param_1[7] * 4);
  if (1.0 <= fVar16) {
    fVar16 = 1.0;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar15 = 0.0;
  fVar14 = 0.0;
  if (fVar16 <= 0.9999) {
    if (fVar16 <= 1e-08) {
      fVar15 = *(float *)(param_1 + 9);
      fVar14 = 1.0;
    }
    else {
      fVar16 = logf(1.0 - fVar16);
      fVar14 = expf(*(float *)(param_1 + 9) * fVar16 * 60.0);
      fVar15 = (fVar14 + -1.0) / (fVar16 * 60.0);
    }
  }
  fVar16 = *(float *)(*(longlong *)(lVar4 + 0xb0) + lVar13 * 4);
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    puVar5 = (undefined8 *)param_1[3];
    lVar6 = *(longlong *)(lVar4 + 0x80);
    lVar10 = lVar13 * 0xc;
    *(undefined4 *)(lVar6 + 8 + lVar10) = *(undefined4 *)(puVar5 + 1);
    *(undefined8 *)(lVar6 + lVar10) = *puVar5;
    lVar6 = *(longlong *)(lVar4 + 0x68);
    lVar7 = *(longlong *)(lVar4 + 0x80);
    fVar16 = *(float *)(param_1 + 9);
    fVar1 = *(float *)(lVar7 + 8 + lVar10);
    fVar2 = *(float *)(lVar7 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar16 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 4 + lVar10) = fVar2 * fVar16 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar1 * fVar16 + *(float *)(lVar6 + 8 + lVar10);
    lVar6 = *(longlong *)(lVar4 + 0x48);
    lVar7 = *(longlong *)(lVar4 + 0x68);
    fVar16 = *(float *)(lVar7 + 8 + lVar10);
    fVar1 = *(float *)(lVar7 + 4 + lVar10);
    fVar2 = *(float *)(lVar6 + 8 + lVar10);
    fVar3 = *(float *)(lVar6 + 4 + lVar10);
    lVar8 = *(longlong *)(lVar4 + 200);
    lVar13 = lVar13 * 0x10;
    *(float *)(lVar8 + lVar13) = fVar15 * *(float *)(lVar7 + lVar10) + *(float *)(lVar6 + lVar10);
    *(float *)(lVar8 + 4 + lVar13) = fVar1 * fVar15 + fVar3;
    *(float *)(lVar8 + 8 + lVar13) = fVar16 * fVar15 + fVar2;
    lVar4 = *(longlong *)(lVar4 + 0x68);
    *(float *)(lVar4 + lVar10) = *(float *)(lVar4 + lVar10) * fVar14;
    *(float *)(lVar4 + 4 + lVar10) = *(float *)(lVar4 + 4 + lVar10) * fVar14;
    *(float *)(lVar4 + 8 + lVar10) = fVar14 * *(float *)(lVar4 + 8 + lVar10);
  }
  else {
    local_68 = *(undefined4 *)(lVar4 + 0x460);
    local_6c = (undefined4)param_1[9];
    local_64 = (undefined4)lVar13;
    pcVar9 = *(code **)(lVar4 + 0x3c0);
    plVar12 = (longlong *)(lVar4 + 0x3e0);
    if (*(longlong **)(lVar4 + 0x3d0) != (longlong *)0x0) {
      plVar12 = *(longlong **)(lVar4 + 0x3d0);
    }
    uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
    local_78 = &local_64;
    (*pcVar9)(uVar11,lVar4 + 0x20,&local_6c,&local_68);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df71a0 FUN_146df71a0 body=480 status=ok
// SIG undefined FUN_146df71a0(void)

void FUN_146df71a0(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *param_1;
  lVar15 = (longlong)param_2 + (longlong)*(int *)param_1[1];
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + lVar15 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)(lVar6 + 0x80);
    lVar12 = lVar15 * 0xc;
    *(undefined4 *)(lVar8 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
    *(undefined8 *)(lVar8 + lVar12) = *puVar7;
    lVar8 = *(longlong *)(lVar6 + 0x68);
    lVar9 = *(longlong *)(lVar6 + 0x80);
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    *(float *)(lVar8 + lVar12) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar8 + 4 + lVar12) = fVar3 * fVar1 + *(float *)(lVar8 + 4 + lVar12);
    *(float *)(lVar8 + 8 + lVar12) = fVar2 * fVar1 + *(float *)(lVar8 + 8 + lVar12);
    lVar8 = *(longlong *)(lVar6 + 0x48);
    lVar9 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar9 + 8 + lVar12);
    fVar3 = *(float *)(lVar9 + 4 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar12);
    lVar10 = *(longlong *)(lVar6 + 200);
    lVar15 = lVar15 * 0x10;
    *(float *)(lVar10 + lVar15) = fVar1 * *(float *)(lVar9 + lVar12) + *(float *)(lVar8 + lVar12);
    *(float *)(lVar10 + 4 + lVar15) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar10 + 8 + lVar15) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar12) = *(float *)(lVar6 + lVar12) * fVar1;
    *(float *)(lVar6 + 4 + lVar12) = *(float *)(lVar6 + 4 + lVar12) * fVar1;
    *(float *)(lVar6 + 8 + lVar12) = fVar1 * *(float *)(lVar6 + 8 + lVar12);
  }
  else {
    local_38 = *(undefined4 *)(lVar6 + 0x460);
    local_3c = (undefined4)param_1[9];
    local_34 = (undefined4)lVar15;
    pcVar11 = *(code **)(lVar6 + 0x3c0);
    plVar14 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar14 = *(longlong **)(lVar6 + 0x3d0);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    local_48 = &local_34;
    (*pcVar11)(uVar13,lVar6 + 0x20,&local_3c,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df7382 FUN_146df7382 body=271 status=ok
// SIG undefined FUN_146df7382(void)

void FUN_146df7382(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_2c = *(int *)(**(longlong **)(param_1 + 0x28) + (longlong)param_4 * 4);
    local_24 = *(undefined4 *)(**(longlong **)(param_1 + 0x40) + (longlong)local_2c * 4);
    local_28 = *(undefined4 *)(**(longlong **)(param_1 + 0x38) + (longlong)local_2c * 4);
    local_18 = &LAB_146df9f4e;
  }
  else {
    local_2c = *(int *)(**(longlong **)(param_1 + 0x28) + (longlong)param_4 * 4);
    local_24 = *(undefined4 *)(**(longlong **)(param_1 + 0x40) + (longlong)local_2c * 4);
    local_28 = *(undefined4 *)(**(longlong **)(param_1 + 0x38) + (longlong)local_2c * 4);
    local_18 = &LAB_146df92e4;
  }
  local_10 = &local_40;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_4;
  local_20 = param_3;
  FUN_1400bd65e(param_5 - param_4,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df7492 FUN_146df7492 body=232 status=ok
// SIG undefined FUN_146df7492(void)

void FUN_146df7492(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  float local_2c;
  undefined4 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *(int *)(**(longlong **)(param_1 + 0x30) + (longlong)param_4 * 4);
  local_2c = *(float *)(**(longlong **)(param_1 + 0x98) + (longlong)local_30 * 4);
  uVar1 = *(undefined4 *)(**(longlong **)(param_1 + 0x90) + (longlong)local_30 * 4);
  if (local_2c <= 0.0001) {
    puVar3 = &local_58;
    puVar2 = &LAB_146df845e;
    local_50 = &local_48;
  }
  else {
    puVar3 = &local_20;
    puVar2 = &LAB_146df7666;
    local_18 = &local_48;
  }
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_34 = param_4;
  local_28 = uVar1;
  *puVar3 = puVar2;
  FUN_1400bd65e(param_5 - param_4,uVar1,0);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df757c FUN_146df757c body=232 status=ok
// SIG undefined FUN_146df757c(void)

void FUN_146df757c(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  float local_2c;
  undefined4 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *(int *)(**(longlong **)(param_1 + 0x30) + (longlong)param_4 * 4);
  local_2c = *(float *)(**(longlong **)(param_1 + 0x98) + (longlong)local_30 * 4);
  uVar1 = *(undefined4 *)(**(longlong **)(param_1 + 0x90) + (longlong)local_30 * 4);
  if (local_2c <= 0.0001) {
    puVar3 = &local_58;
    puVar2 = &LAB_146df8fca;
    local_50 = &local_48;
  }
  else {
    puVar3 = &local_20;
    puVar2 = &LAB_146df88b4;
    local_18 = &local_48;
  }
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_34 = param_4;
  local_28 = uVar1;
  *puVar3 = puVar2;
  FUN_1400bd65e(param_5 - param_4,uVar1,0);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df766e FUN_146df766e body=244 status=ok
// SIG undefined FUN_146df766e(void)

void FUN_146df766e(longlong *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  lVar8 = (longlong)param_2 + (longlong)*(int *)((longlong)param_1 + 0x14);
  local_3c = (undefined4)lVar8;
  lVar4 = param_1[1];
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0x90) + lVar8 * 4);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    puVar5 = *(undefined8 **)(lVar3 + 8);
    local_60 = param_1 + 2;
    local_58 = &local_3c;
    local_50 = (undefined4)param_1[3];
    local_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_48 = (undefined4)param_1[4];
    local_70 = lVar3;
    local_68 = lVar4;
    if ((longlong)*(int *)(puVar5 + 2) != 0) {
      piVar9 = (int *)puVar5[1];
      piVar1 = piVar9 + *(int *)(puVar5 + 2);
      iVar7 = 0;
      do {
        iVar6 = *piVar9;
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else if (iVar7 < iVar6) {
          do {
            FUN_146df7764(&local_70,*puVar5,iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        piVar9 = piVar9 + 1;
        iVar7 = iVar6;
      } while (piVar9 != piVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df7764 FUN_146df7764 body=1790 status=ok
// SIG undefined FUN_146df7764(void)

void FUN_146df7764(undefined8 *param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar18;
  double dVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined8 uStack_15c;
  float local_154;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  int *local_108;
  float *local_100;
  undefined1 local_f4 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pcVar3 = (char *)*param_1;
  lVar9 = (longlong)param_3;
  iVar7 = *(int *)(**(longlong **)(pcVar3 + 0x38) + lVar9 * 4);
  if ((iVar7 == -1) || (*(int *)(param_1 + 4) == iVar7)) {
    plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x60) + lVar9 * 8);
    if (*(char *)((longlong)plVar4 + 0x1c) != '\x11') {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar9 * 0xc);
      auVar17 = insertps(auVar17,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar9 * 0xc),
                         0x20);
      auVar20._8_8_ = 0;
      auVar20._0_8_ =
           *(ulonglong *)(*(longlong *)(param_1[1] + 0xa8) + (longlong)*(int *)param_1[3] * 0x10);
      auVar20 = insertps(auVar20,*(undefined4 *)
                                  (*(longlong *)(param_1[1] + 0xa8) + 8 +
                                  (longlong)*(int *)param_1[3] * 0x10),0x20);
      pfVar8 = (float *)(*(longlong *)(param_2 + 0x48) + lVar9 * 0x10);
      fVar28 = *pfVar8;
      fVar1 = pfVar8[1];
      fVar26 = pfVar8[2];
      fVar2 = pfVar8[3];
      auVar21._0_4_ = auVar20._0_4_ - auVar17._0_4_;
      auVar21._4_4_ = auVar20._4_4_ - auVar17._4_4_;
      auVar21._8_4_ = auVar20._8_4_ - auVar17._8_4_;
      auVar21._12_4_ = auVar20._12_4_ - auVar17._12_4_;
      auVar17 = blendps(ZEXT816(0),auVar21,7);
      fVar22 = fVar28 * -1.0;
      fVar23 = fVar1 * -1.0;
      fVar24 = fVar26 * -1.0;
      fVar25 = fVar2 * 1.0;
      fVar15 = auVar17._4_4_ * fVar22 - auVar17._0_4_ * fVar23;
      fVar18 = auVar17._8_4_ * fVar23 - auVar17._4_4_ * fVar24;
      fVar19 = auVar17._0_4_ * fVar24 - auVar17._8_4_ * fVar22;
      fVar15 = fVar15 + fVar15;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      local_120 = (double)((fVar15 * fVar23 - fVar19 * fVar24) + fVar25 * fVar18 + auVar21._0_4_);
      local_110 = (double)((fVar19 * fVar22 - fVar18 * fVar23) + fVar25 * fVar15 + auVar21._8_4_);
      local_118 = (double)((fVar18 * fVar24 - fVar15 * fVar22) + fVar25 * fVar19 + auVar21._4_4_);
      if (plVar4 == (longlong *)0x0 || *(char *)((longlong)plVar4 + 0x1c) != '&') {
        dVar16 = (double)(**(code **)(*plVar4 + 0x70))(plVar4,&local_120,&local_138);
        fVar18 = (float)dVar16;
        fVar15 = *(float *)(param_1 + 5) - fVar18;
      }
      else {
        local_168 = -NAN;
        fStack_164 = -NAN;
        fStack_160 = -NAN;
        uStack_15c = CONCAT44(uStack_15c._4_4_,0xffffffff);
        local_178 = 0;
        dVar16 = (double)FUN_146e420d2(plVar4,&local_120,&local_138);
        fVar18 = (float)dVar16;
        fVar15 = *(float *)(param_1 + 5) - fVar18;
        if (0.0 < fVar15) {
          iVar7 = FUN_146df7e64(&local_168,plVar4 + 0xf);
          if (iVar7 != -1) {
            param_3 = *(int *)(plVar4[0x28] + (longlong)iVar7 * 4);
          }
        }
      }
      if (0.0 < fVar15) {
        auVar17 = insertps(ZEXT416((uint)(float)local_138),ZEXT416((uint)(float)local_130),0x1c);
        auVar17 = insertps(auVar17,ZEXT416((uint)(float)local_128),0x28);
        fVar19 = auVar17._0_4_ * 1.0;
        fVar22 = auVar17._4_4_ * 1.0;
        fVar23 = auVar17._8_4_ * 1.0;
        fVar24 = fVar22 * fVar28 - fVar1 * fVar19;
        fVar25 = fVar23 * fVar1 - fVar26 * fVar22;
        fVar27 = fVar19 * fVar26 - fVar28 * fVar23;
        fVar24 = fVar24 + fVar24;
        fVar25 = fVar25 + fVar25;
        fVar27 = fVar27 + fVar27;
        fVar19 = (fVar24 * fVar1 - fVar27 * fVar26) + fVar2 * fVar25 + fVar19;
        fVar26 = (fVar25 * fVar26 - fVar24 * fVar28) + fVar2 * fVar27 + fVar22;
        fVar28 = (fVar27 * fVar28 - fVar25 * fVar1) + fVar2 * fVar24 + fVar23;
        lpCriticalSection = *(LPCRITICAL_SECTION *)(pcVar3 + 0xa0);
        EnterCriticalSection(lpCriticalSection);
        plVar4 = *(longlong **)(pcVar3 + 0x18);
        puVar14 = (undefined8 *)
                  ((longlong)*(int *)param_1[3] * 0x10 + *(longlong *)(param_1[1] + 0xa8));
        iVar7 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
          FUN_140aacb36(plVar4,iVar7);
        }
        lVar9 = *plVar4;
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar7 * 0xc) = *(undefined4 *)(puVar14 + 1);
        *(undefined8 *)(lVar9 + (longlong)iVar7 * 0xc) = *puVar14;
        plVar4 = *(longlong **)(pcVar3 + 0x20);
        iVar7 = (int)plVar4[1];
        lVar9 = (longlong)iVar7;
        *(uint *)(plVar4 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
          FUN_140aacb36(plVar4,iVar7);
        }
        lVar10 = *plVar4;
        *(float *)(lVar10 + lVar9 * 0xc) = fVar19;
        *(float *)(lVar10 + 4 + lVar9 * 0xc) = fVar26;
        *(float *)(lVar10 + 8 + lVar9 * 0xc) = fVar28;
        plVar4 = *(longlong **)(pcVar3 + 0x28);
        iVar7 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
          FUN_14475e4ac(plVar4,iVar7);
        }
        *(float *)(*plVar4 + (longlong)iVar7 * 4) = fVar18;
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        lVar9 = *(longlong *)(param_1[1] + 0xa8);
        lVar10 = (longlong)*(int *)param_1[3] * 0x10;
        *(float *)(lVar9 + lVar10) = fVar15 * fVar19 + *(float *)(lVar9 + lVar10);
        *(float *)(lVar9 + 4 + lVar10) = fVar15 * fVar26 + *(float *)(lVar9 + 4 + lVar10);
        *(float *)(lVar9 + 8 + lVar10) = fVar15 * fVar28 + *(float *)(lVar9 + 8 + lVar10);
        if (*pcVar3 == '\x01') {
          lVar11 = (longlong)*(int *)param_1[3];
          lVar9 = *(longlong *)(param_1[1] + 0xa8);
          lVar12 = lVar11 * 0x10;
          lVar13 = (longlong)param_3 * 0xc;
          fVar1 = *(float *)(lVar9 + 8 + lVar12);
          lVar10 = *(longlong *)(param_2 + 0x28);
          fVar30 = fVar1 - *(float *)(lVar10 + 8 + lVar13);
          fVar2 = *(float *)(lVar9 + 4 + lVar12);
          fVar29 = fVar2 - *(float *)(lVar10 + 4 + lVar13);
          fVar18 = *(float *)(lVar9 + lVar12);
          fVar27 = fVar18 - *(float *)(lVar10 + lVar13);
          lVar10 = *(longlong *)(param_1[1] + 0x28);
          lVar5 = *(longlong *)(param_2 + 0x78);
          lVar6 = *(longlong *)(param_2 + 0x90);
          fVar22 = *(float *)(lVar6 + 4 + lVar13);
          fVar23 = *(float *)(lVar6 + 8 + lVar13);
          fVar24 = *(float *)param_1[2];
          fVar25 = (fVar1 - *(float *)(lVar10 + 8 + lVar11 * 0xc)) -
                   ((*(float *)(lVar6 + lVar13) * fVar29 - fVar27 * fVar22) +
                   *(float *)(lVar5 + 8 + lVar13)) * fVar24;
          fVar27 = (fVar2 - *(float *)(lVar10 + 4 + lVar11 * 0xc)) -
                   ((fVar27 * fVar23 - fVar30 * *(float *)(lVar6 + lVar13)) +
                   *(float *)(lVar5 + 4 + lVar13)) * fVar24;
          fVar22 = (fVar18 - *(float *)(lVar10 + lVar11 * 0xc)) -
                   ((fVar22 * fVar30 - fVar29 * fVar23) + *(float *)(lVar5 + lVar13)) * fVar24;
          fVar23 = fVar25 * fVar28 + fVar22 * fVar19 + fVar26 * fVar27;
          fVar25 = fVar25 - fVar23 * fVar28;
          fVar27 = fVar27 - fVar26 * fVar23;
          fVar22 = fVar22 - fVar19 * fVar23;
          fVar28 = SQRT(fVar25 * fVar25 + fVar22 * fVar22 + fVar27 * fVar27);
          if (1e-08 <= fVar28) {
            fVar15 = fVar15 * *(float *)((longlong)param_1 + 0x24);
            pfVar8 = (float *)(lVar9 + lVar12);
            if (fVar28 <= fVar15) {
              fVar15 = fVar28;
            }
            fVar15 = fVar15 / fVar28;
            *pfVar8 = fVar18 - fVar22 * fVar15;
            pfVar8[1] = fVar2 - fVar27 * fVar15;
            pfVar8[2] = fVar1 - fVar25 * fVar15;
          }
        }
        else {
          local_108 = (int *)param_1[3];
          lVar9 = *(longlong *)(param_1[1] + 0xa8);
          lVar13 = (longlong)*local_108 * 0x10;
          lVar6 = (longlong)param_3 * 0xc;
          lVar10 = *(longlong *)(param_2 + 0x28);
          lVar5 = *(longlong *)(param_2 + 0x78);
          fVar18 = *(float *)(lVar9 + 8 + lVar13) - *(float *)(lVar10 + 8 + lVar6);
          fVar22 = *(float *)(lVar9 + 4 + lVar13) - *(float *)(lVar10 + 4 + lVar6);
          fVar15 = *(float *)(lVar9 + lVar13) - *(float *)(lVar10 + lVar6);
          lVar9 = *(longlong *)(param_2 + 0x90);
          fVar1 = *(float *)(lVar9 + 4 + lVar6);
          fVar2 = *(float *)(lVar9 + 8 + lVar6);
          fStack_160 = (*(float *)(lVar9 + lVar6) * fVar22 - fVar15 * fVar1) +
                       *(float *)(lVar5 + 8 + lVar6);
          fStack_164 = (fVar15 * fVar2 - fVar18 * *(float *)(lVar9 + lVar6)) +
                       *(float *)(lVar5 + 4 + lVar6);
          local_168 = (fVar1 * fVar18 - fVar22 * fVar2) + *(float *)(lVar5 + lVar6);
          local_100 = &local_168;
          uStack_15c = CONCAT44(fVar26,fVar19);
          local_154 = fVar28;
          FUN_146df7faa(pcVar3 + 0x40,local_f4);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df7e64 FUN_146df7e64 body=324 status=ok
// SIG undefined FUN_146df7e64(void)

ulonglong FUN_146df7e64(int *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [32];
  float local_48 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (longlong)param_1[3];
  if (lVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar5 = (undefined4 *)&DAT_14c993f00;
    if ((param_1[1] + *param_1 + param_1[2] & 1U) == 0) {
      puVar5 = &DAT_14c993e10;
    }
    local_48[0] = (float)*(double *)(param_1 + 4);
    local_48[1] = (float)*(double *)(param_1 + 6);
    local_48[2] = (float)*(double *)(param_1 + 8);
    local_48[3] = ((1.0 - (float)*(double *)(param_1 + 4)) - (float)*(double *)(param_1 + 6)) -
                  (float)*(double *)(param_1 + 8);
    fVar8 = 0.0;
    uVar2 = 0xffffffff;
    lVar4 = 0;
    do {
      lVar3 = (longlong)
              (puVar5[lVar1 * 0xc + lVar4 * 3 + 2] + param_1[2] +
              (puVar5[lVar1 * 0xc + lVar4 * 3 + 1] + param_1[1] +
              (puVar5[lVar1 * 0xc + lVar4 * 3] + *param_1) * *(int *)(param_2 + 4)) *
              *(int *)(param_2 + 8)) * 0x4c;
      uVar6 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x10) + lVar3);
      if (uVar6 != 0) {
        lVar3 = lVar3 + *(longlong *)(param_2 + 0x10);
        uVar7 = 0;
        do {
          fVar9 = *(float *)(lVar3 + 0x1c + uVar7 * 4) * local_48[lVar4];
          if (fVar8 < fVar9) {
            uVar2 = (ulonglong)*(ushort *)(lVar3 + 2 + uVar7 * 2);
            fVar8 = fVar9;
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df7faa FUN_146df7faa body=295 status=ok
// SIG undefined FUN_146df7faa(void)

undefined4 * FUN_146df7faa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146df80d2(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  *(undefined8 *)(local_40 + 5) = *(undefined8 *)(puVar1 + 4);
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_146df81b8(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[7] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146df82ba(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df80d2 FUN_146df80d2 body=230 status=ok
// SIG undefined FUN_146df80d2(void)

int * FUN_146df80d2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14042c636(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x24) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 146df81b8 FUN_146df81b8 body=144 status=ok
// SIG undefined FUN_146df81b8(void)

undefined8 FUN_146df81b8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x24);
        if (*piVar1 == *param_3) {
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          uVar2 = *(undefined8 *)(param_3 + 4);
          piVar1[6] = param_3[6];
          *(undefined8 *)(piVar1 + 4) = uVar2;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_146df8248(iVar3,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar1[7];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 146df8248 FUN_146df8248 body=114 status=ok
// SIG undefined FUN_146df8248(void)

void FUN_146df8248(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 146df82ba FUN_146df82ba body=419 status=ok
// SIG undefined FUN_146df82ba(void)

void FUN_146df82ba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x24);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x20 + lVar6 * 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1c + lVar6 * 0x24) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df8466 FUN_146df8466 body=244 status=ok
// SIG undefined FUN_146df8466(void)

void FUN_146df8466(longlong *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  lVar8 = (longlong)param_2 + (longlong)*(int *)((longlong)param_1 + 0x14);
  local_3c = (undefined4)lVar8;
  lVar4 = param_1[1];
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0x90) + lVar8 * 4);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    puVar5 = *(undefined8 **)(lVar3 + 8);
    local_60 = param_1 + 2;
    local_58 = &local_3c;
    local_50 = (undefined4)param_1[3];
    local_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_48 = (undefined4)param_1[4];
    local_70 = lVar3;
    local_68 = lVar4;
    if ((longlong)*(int *)(puVar5 + 2) != 0) {
      piVar9 = (int *)puVar5[1];
      piVar1 = piVar9 + *(int *)(puVar5 + 2);
      iVar7 = 0;
      do {
        iVar6 = *piVar9;
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else if (iVar7 < iVar6) {
          do {
            FUN_146df855c(&local_70,*puVar5,iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        piVar9 = piVar9 + 1;
        iVar7 = iVar6;
      } while (piVar9 != piVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df855c FUN_146df855c body=855 status=ok
// SIG undefined FUN_146df855c(void)

void FUN_146df855c(longlong *param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar13;
  double dVar11;
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *param_1;
  lVar8 = (longlong)param_3;
  iVar2 = *(int *)(**(longlong **)(lVar3 + 0x38) + lVar8 * 4);
  if (((iVar2 == -1) || ((int)param_1[4] == iVar2)) &&
     (plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x60) + lVar8 * 8),
     *(char *)((longlong)plVar4 + 0x1c) != '\x11')) {
    pfVar1 = (float *)(*(longlong *)(param_2 + 0x48) + lVar8 * 0x10);
    fVar22 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar21 = pfVar1[2];
    fVar7 = pfVar1[3];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    auVar12 = insertps(auVar12,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar8 * 0xc),0x20
                      );
    auVar15._8_8_ = 0;
    auVar15._0_8_ =
         *(ulonglong *)(*(longlong *)(param_1[1] + 0xa8) + (longlong)*(int *)param_1[3] * 0x10);
    auVar15 = insertps(auVar15,*(undefined4 *)
                                (*(longlong *)(param_1[1] + 0xa8) + 8 +
                                (longlong)*(int *)param_1[3] * 0x10),0x20);
    auVar16._0_4_ = auVar15._0_4_ - auVar12._0_4_;
    auVar16._4_4_ = auVar15._4_4_ - auVar12._4_4_;
    auVar16._8_4_ = auVar15._8_4_ - auVar12._8_4_;
    auVar16._12_4_ = auVar15._12_4_ - auVar12._12_4_;
    auVar12 = blendps(ZEXT816(0),auVar16,7);
    fVar17 = fVar22 * -1.0;
    fVar18 = fVar6 * -1.0;
    fVar19 = fVar21 * -1.0;
    fVar20 = fVar7 * 1.0;
    fVar10 = auVar12._4_4_ * fVar17 - auVar12._0_4_ * fVar18;
    fVar13 = auVar12._8_4_ * fVar18 - auVar12._4_4_ * fVar19;
    fVar14 = auVar12._0_4_ * fVar19 - auVar12._8_4_ * fVar17;
    fVar10 = fVar10 + fVar10;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    local_a8 = (double)((fVar10 * fVar18 - fVar14 * fVar19) + fVar20 * fVar13 + auVar16._0_4_);
    local_98 = (double)((fVar14 * fVar17 - fVar13 * fVar18) + fVar20 * fVar10 + auVar16._8_4_);
    local_a0 = (double)((fVar13 * fVar19 - fVar10 * fVar17) + fVar20 * fVar14 + auVar16._4_4_);
    dVar11 = (double)(**(code **)(*plVar4 + 0x70))(plVar4,&local_a8,&local_c0);
    fVar10 = *(float *)(param_1 + 5) - (float)dVar11;
    if (0.0 < fVar10) {
      auVar12 = insertps(ZEXT416((uint)(float)local_c0),ZEXT416((uint)(float)local_b8),0x1c);
      auVar12 = insertps(auVar12,ZEXT416((uint)(float)local_b0),0x28);
      fVar13 = auVar12._0_4_ * 1.0;
      fVar14 = auVar12._4_4_ * 1.0;
      fVar17 = auVar12._8_4_ * 1.0;
      fVar18 = fVar14 * fVar22 - fVar6 * fVar13;
      fVar19 = fVar17 * fVar6 - fVar21 * fVar14;
      fVar20 = fVar13 * fVar21 - fVar22 * fVar17;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar13 = (fVar18 * fVar6 - fVar20 * fVar21) + fVar7 * fVar19 + fVar13;
      fVar21 = (fVar19 * fVar21 - fVar18 * fVar22) + fVar7 * fVar20 + fVar14;
      fVar22 = (fVar20 * fVar22 - fVar19 * fVar6) + fVar7 * fVar18 + fVar17;
      lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar3 + 0xa0);
      EnterCriticalSection(lpCriticalSection);
      plVar4 = *(longlong **)(lVar3 + 0x18);
      puVar9 = (undefined8 *)
               ((longlong)*(int *)param_1[3] * 0x10 + *(longlong *)(param_1[1] + 0xa8));
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_140aacb36(plVar4,iVar2);
      }
      lVar8 = *plVar4;
      *(undefined4 *)(lVar8 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar9 + 1);
      *(undefined8 *)(lVar8 + (longlong)iVar2 * 0xc) = *puVar9;
      plVar4 = *(longlong **)(lVar3 + 0x20);
      iVar2 = (int)plVar4[1];
      lVar8 = (longlong)iVar2;
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_140aacb36(plVar4,iVar2);
      }
      lVar5 = *plVar4;
      *(float *)(lVar5 + lVar8 * 0xc) = fVar13;
      *(float *)(lVar5 + 4 + lVar8 * 0xc) = fVar21;
      *(float *)(lVar5 + 8 + lVar8 * 0xc) = fVar22;
      plVar4 = *(longlong **)(lVar3 + 0x28);
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_14475e4ac(plVar4,iVar2);
      }
      *(float *)(*plVar4 + (longlong)iVar2 * 4) = (float)dVar11;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      lVar3 = *(longlong *)(param_1[1] + 0xa8);
      lVar8 = (longlong)*(int *)param_1[3] * 0x10;
      *(float *)(lVar3 + lVar8) = fVar10 * fVar13 + *(float *)(lVar3 + lVar8);
      *(float *)(lVar3 + 4 + lVar8) = fVar21 * fVar10 + *(float *)(lVar3 + 4 + lVar8);
      *(float *)(lVar3 + 8 + lVar8) = fVar22 * fVar10 + *(float *)(lVar3 + 8 + lVar8);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df88bc FUN_146df88bc body=244 status=ok
// SIG undefined FUN_146df88bc(void)

void FUN_146df88bc(longlong *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  lVar8 = (longlong)param_2 + (longlong)*(int *)((longlong)param_1 + 0x14);
  local_3c = (undefined4)lVar8;
  lVar4 = param_1[1];
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0x90) + lVar8 * 4);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    puVar5 = *(undefined8 **)(lVar3 + 8);
    local_60 = param_1 + 2;
    local_58 = &local_3c;
    local_50 = (undefined4)param_1[3];
    local_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_48 = (undefined4)param_1[4];
    local_70 = lVar3;
    local_68 = lVar4;
    if ((longlong)*(int *)(puVar5 + 2) != 0) {
      piVar9 = (int *)puVar5[1];
      piVar1 = piVar9 + *(int *)(puVar5 + 2);
      iVar7 = 0;
      do {
        iVar6 = *piVar9;
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else if (iVar7 < iVar6) {
          do {
            FUN_146df89b2(&local_70,*puVar5,iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        piVar9 = piVar9 + 1;
        iVar7 = iVar6;
      } while (piVar9 != piVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df89b2 FUN_146df89b2 body=1558 status=ok
// SIG undefined FUN_146df89b2(void)

void FUN_146df89b2(undefined8 *param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar17;
  double dVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined8 uStack_13c;
  float local_134;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  int *local_e8;
  float *local_e0;
  undefined1 local_d4 [4];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pcVar3 = (char *)*param_1;
  lVar9 = (longlong)param_3;
  iVar7 = *(int *)(**(longlong **)(pcVar3 + 0x38) + lVar9 * 4);
  if ((iVar7 == -1) || (*(int *)(param_1 + 4) == iVar7)) {
    plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x60) + lVar9 * 8);
    if (*(char *)((longlong)plVar4 + 0x1c) != '\x11') {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar9 * 0xc);
      auVar16 = insertps(auVar16,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar9 * 0xc),
                         0x20);
      auVar21._8_8_ = 0;
      auVar21._0_8_ =
           *(ulonglong *)(*(longlong *)(param_1[1] + 0xa8) + (longlong)*(int *)param_1[3] * 0x10);
      auVar21 = insertps(auVar21,*(undefined4 *)
                                  (*(longlong *)(param_1[1] + 0xa8) + 8 +
                                  (longlong)*(int *)param_1[3] * 0x10),0x20);
      pfVar8 = (float *)(*(longlong *)(param_2 + 0x48) + lVar9 * 0x10);
      fVar20 = *pfVar8;
      fVar1 = pfVar8[1];
      fVar18 = pfVar8[2];
      fVar2 = pfVar8[3];
      auVar22._0_4_ = auVar21._0_4_ - auVar16._0_4_;
      auVar22._4_4_ = auVar21._4_4_ - auVar16._4_4_;
      auVar22._8_4_ = auVar21._8_4_ - auVar16._8_4_;
      auVar22._12_4_ = auVar21._12_4_ - auVar16._12_4_;
      auVar16 = blendps(ZEXT816(0),auVar22,7);
      fVar23 = fVar20 * -1.0;
      fVar24 = fVar1 * -1.0;
      fVar25 = fVar18 * -1.0;
      fVar26 = fVar2 * 1.0;
      fVar14 = auVar16._4_4_ * fVar23 - auVar16._0_4_ * fVar24;
      fVar17 = auVar16._8_4_ * fVar24 - auVar16._4_4_ * fVar25;
      fVar19 = auVar16._0_4_ * fVar25 - auVar16._8_4_ * fVar23;
      fVar14 = fVar14 + fVar14;
      fVar17 = fVar17 + fVar17;
      fVar19 = fVar19 + fVar19;
      local_100 = (double)((fVar14 * fVar24 - fVar19 * fVar25) + fVar26 * fVar17 + auVar22._0_4_);
      local_f0 = (double)((fVar19 * fVar23 - fVar17 * fVar24) + fVar26 * fVar14 + auVar22._8_4_);
      local_f8 = (double)((fVar17 * fVar25 - fVar14 * fVar23) + fVar26 * fVar19 + auVar22._4_4_);
      if (plVar4 == (longlong *)0x0 || *(char *)((longlong)plVar4 + 0x1c) != '&') {
        dVar15 = (double)(**(code **)(*plVar4 + 0x70))(plVar4,&local_100,&local_118);
        fVar14 = *(float *)(param_1 + 5) - (float)dVar15;
      }
      else {
        local_148 = -NAN;
        fStack_144 = -NAN;
        fStack_140 = -NAN;
        uStack_13c = CONCAT44(uStack_13c._4_4_,0xffffffff);
        local_158 = 0;
        dVar15 = (double)FUN_146e420d2(plVar4,&local_100,&local_118);
        fVar14 = *(float *)(param_1 + 5) - (float)dVar15;
        if (0.0 < fVar14) {
          iVar7 = FUN_146df7e64(&local_148,plVar4 + 0xf);
          if (iVar7 != -1) {
            param_3 = *(int *)(plVar4[0x28] + (longlong)iVar7 * 4);
          }
        }
      }
      if (0.0 < fVar14) {
        auVar16 = insertps(ZEXT416((uint)(float)local_118),ZEXT416((uint)(float)local_110),0x1c);
        auVar16 = insertps(auVar16,ZEXT416((uint)(float)local_108),0x28);
        fVar19 = auVar16._0_4_ * 1.0;
        fVar25 = auVar16._4_4_ * 1.0;
        fVar26 = auVar16._8_4_ * 1.0;
        fVar17 = fVar25 * fVar20 - fVar1 * fVar19;
        fVar23 = fVar26 * fVar1 - fVar18 * fVar25;
        fVar24 = fVar19 * fVar18 - fVar20 * fVar26;
        fVar17 = fVar17 + fVar17;
        fVar23 = fVar23 + fVar23;
        fVar24 = fVar24 + fVar24;
        fVar19 = (fVar17 * fVar1 - fVar24 * fVar18) + fVar2 * fVar23 + fVar19;
        fVar18 = (fVar23 * fVar18 - fVar17 * fVar20) + fVar2 * fVar24 + fVar25;
        fVar20 = (fVar24 * fVar20 - fVar23 * fVar1) + fVar2 * fVar17 + fVar26;
        lVar9 = *(longlong *)(param_1[1] + 0xa8);
        lVar10 = (longlong)*(int *)param_1[3] * 0x10;
        *(float *)(lVar9 + lVar10) = fVar14 * fVar19 + *(float *)(lVar9 + lVar10);
        *(float *)(lVar9 + 4 + lVar10) = fVar14 * fVar18 + *(float *)(lVar9 + 4 + lVar10);
        *(float *)(lVar9 + 8 + lVar10) = fVar20 * fVar14 + *(float *)(lVar9 + 8 + lVar10);
        if (*pcVar3 == '\x01') {
          lVar11 = (longlong)*(int *)param_1[3];
          lVar9 = *(longlong *)(param_1[1] + 0xa8);
          lVar12 = lVar11 * 0x10;
          lVar13 = (longlong)param_3 * 0xc;
          fVar1 = *(float *)(lVar9 + 8 + lVar12);
          lVar10 = *(longlong *)(param_2 + 0x28);
          fVar29 = fVar1 - *(float *)(lVar10 + 8 + lVar13);
          fVar2 = *(float *)(lVar9 + 4 + lVar12);
          fVar28 = fVar2 - *(float *)(lVar10 + 4 + lVar13);
          fVar17 = *(float *)(lVar9 + lVar12);
          fVar27 = fVar17 - *(float *)(lVar10 + lVar13);
          lVar10 = *(longlong *)(param_1[1] + 0x28);
          lVar5 = *(longlong *)(param_2 + 0x78);
          lVar6 = *(longlong *)(param_2 + 0x90);
          fVar23 = *(float *)(lVar6 + 4 + lVar13);
          fVar24 = *(float *)(lVar6 + 8 + lVar13);
          fVar25 = *(float *)param_1[2];
          fVar26 = (fVar1 - *(float *)(lVar10 + 8 + lVar11 * 0xc)) -
                   ((*(float *)(lVar6 + lVar13) * fVar28 - fVar27 * fVar23) +
                   *(float *)(lVar5 + 8 + lVar13)) * fVar25;
          fVar27 = (fVar2 - *(float *)(lVar10 + 4 + lVar11 * 0xc)) -
                   ((fVar27 * fVar24 - fVar29 * *(float *)(lVar6 + lVar13)) +
                   *(float *)(lVar5 + 4 + lVar13)) * fVar25;
          fVar23 = (fVar17 - *(float *)(lVar10 + lVar11 * 0xc)) -
                   ((fVar23 * fVar29 - fVar28 * fVar24) + *(float *)(lVar5 + lVar13)) * fVar25;
          fVar24 = fVar26 * fVar20 + fVar23 * fVar19 + fVar18 * fVar27;
          fVar26 = fVar26 - fVar24 * fVar20;
          fVar27 = fVar27 - fVar18 * fVar24;
          fVar23 = fVar23 - fVar19 * fVar24;
          fVar20 = SQRT(fVar26 * fVar26 + fVar23 * fVar23 + fVar27 * fVar27);
          if (1e-08 <= fVar20) {
            fVar14 = fVar14 * *(float *)((longlong)param_1 + 0x24);
            pfVar8 = (float *)(lVar9 + lVar12);
            if (fVar20 <= fVar14) {
              fVar14 = fVar20;
            }
            fVar14 = fVar14 / fVar20;
            *pfVar8 = fVar17 - fVar23 * fVar14;
            pfVar8[1] = fVar2 - fVar27 * fVar14;
            pfVar8[2] = fVar1 - fVar26 * fVar14;
          }
        }
        else {
          local_e8 = (int *)param_1[3];
          lVar9 = *(longlong *)(param_1[1] + 0xa8);
          lVar13 = (longlong)*local_e8 * 0x10;
          lVar6 = (longlong)param_3 * 0xc;
          lVar10 = *(longlong *)(param_2 + 0x28);
          lVar5 = *(longlong *)(param_2 + 0x78);
          fVar17 = *(float *)(lVar9 + 8 + lVar13) - *(float *)(lVar10 + 8 + lVar6);
          fVar23 = *(float *)(lVar9 + 4 + lVar13) - *(float *)(lVar10 + 4 + lVar6);
          fVar14 = *(float *)(lVar9 + lVar13) - *(float *)(lVar10 + lVar6);
          lVar9 = *(longlong *)(param_2 + 0x90);
          fVar1 = *(float *)(lVar9 + 4 + lVar6);
          fVar2 = *(float *)(lVar9 + 8 + lVar6);
          fStack_140 = (*(float *)(lVar9 + lVar6) * fVar23 - fVar14 * fVar1) +
                       *(float *)(lVar5 + 8 + lVar6);
          fStack_144 = (fVar14 * fVar2 - fVar17 * *(float *)(lVar9 + lVar6)) +
                       *(float *)(lVar5 + 4 + lVar6);
          local_148 = (fVar1 * fVar17 - fVar23 * fVar2) + *(float *)(lVar5 + lVar6);
          local_e0 = &local_148;
          uStack_13c = CONCAT44(fVar18,fVar19);
          local_134 = fVar20;
          FUN_146df7faa(pcVar3 + 0x40,local_d4);
        }
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df8fd2 FUN_146df8fd2 body=244 status=ok
// SIG undefined FUN_146df8fd2(void)

void FUN_146df8fd2(longlong *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  lVar8 = (longlong)param_2 + (longlong)*(int *)((longlong)param_1 + 0x14);
  local_3c = (undefined4)lVar8;
  lVar4 = param_1[1];
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0x90) + lVar8 * 4);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    puVar5 = *(undefined8 **)(lVar3 + 8);
    local_60 = param_1 + 2;
    local_58 = &local_3c;
    local_50 = (undefined4)param_1[3];
    local_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_48 = (undefined4)param_1[4];
    local_70 = lVar3;
    local_68 = lVar4;
    if ((longlong)*(int *)(puVar5 + 2) != 0) {
      piVar9 = (int *)puVar5[1];
      piVar1 = piVar9 + *(int *)(puVar5 + 2);
      iVar7 = 0;
      do {
        iVar6 = *piVar9;
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else if (iVar7 < iVar6) {
          do {
            FUN_146df90c8(&local_70,*puVar5,iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        piVar9 = piVar9 + 1;
        iVar7 = iVar6;
      } while (piVar9 != piVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df90c8 FUN_146df90c8 body=538 status=ok
// SIG undefined FUN_146df90c8(void)

void FUN_146df90c8(longlong *param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar13;
  double dVar11;
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = (longlong)param_3;
  iVar2 = *(int *)(**(longlong **)(*param_1 + 0x38) + lVar8 * 4);
  if (((iVar2 == -1) || ((int)param_1[4] == iVar2)) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x60) + lVar8 * 8),
     *(char *)((longlong)plVar3 + 0x1c) != '\x11')) {
    pfVar1 = (float *)(*(longlong *)(param_2 + 0x48) + lVar8 * 0x10);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar7 = pfVar1[3];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    auVar12 = insertps(auVar12,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar8 * 0xc),0x20
                      );
    auVar15._8_8_ = 0;
    auVar15._0_8_ =
         *(ulonglong *)(*(longlong *)(param_1[1] + 0xa8) + (longlong)*(int *)param_1[3] * 0x10);
    auVar15 = insertps(auVar15,*(undefined4 *)
                                (*(longlong *)(param_1[1] + 0xa8) + 8 +
                                (longlong)*(int *)param_1[3] * 0x10),0x20);
    auVar16._0_4_ = auVar15._0_4_ - auVar12._0_4_;
    auVar16._4_4_ = auVar15._4_4_ - auVar12._4_4_;
    auVar16._8_4_ = auVar15._8_4_ - auVar12._8_4_;
    auVar16._12_4_ = auVar15._12_4_ - auVar12._12_4_;
    auVar12 = blendps(ZEXT816(0),auVar16,7);
    fVar17 = fVar4 * -1.0;
    fVar18 = fVar5 * -1.0;
    fVar19 = fVar6 * -1.0;
    fVar20 = fVar7 * 1.0;
    fVar10 = auVar12._4_4_ * fVar17 - auVar12._0_4_ * fVar18;
    fVar13 = auVar12._8_4_ * fVar18 - auVar12._4_4_ * fVar19;
    fVar14 = auVar12._0_4_ * fVar19 - auVar12._8_4_ * fVar17;
    fVar10 = fVar10 + fVar10;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    local_38 = (double)((fVar10 * fVar18 - fVar14 * fVar19) + fVar20 * fVar13 + auVar16._0_4_);
    local_28 = (double)((fVar14 * fVar17 - fVar13 * fVar18) + fVar20 * fVar10 + auVar16._8_4_);
    local_30 = (double)((fVar13 * fVar19 - fVar10 * fVar17) + fVar20 * fVar14 + auVar16._4_4_);
    dVar11 = (double)(**(code **)(*plVar3 + 0x70))(plVar3,&local_38,&local_50);
    fVar10 = *(float *)(param_1 + 5) - (float)dVar11;
    if (0.0 < fVar10) {
      auVar12 = insertps(ZEXT416((uint)(float)local_50),ZEXT416((uint)(float)local_48),0x1c);
      auVar12 = insertps(auVar12,ZEXT416((uint)(float)local_40),0x28);
      fVar18 = auVar12._0_4_ * 1.0;
      fVar19 = auVar12._4_4_ * 1.0;
      fVar20 = auVar12._8_4_ * 1.0;
      fVar13 = fVar19 * fVar4 - fVar5 * fVar18;
      fVar14 = fVar20 * fVar5 - fVar6 * fVar19;
      fVar17 = fVar18 * fVar6 - fVar4 * fVar20;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
      fVar17 = fVar17 + fVar17;
      lVar8 = *(longlong *)(param_1[1] + 0xa8);
      lVar9 = (longlong)*(int *)param_1[3] * 0x10;
      *(float *)(lVar8 + lVar9) =
           ((fVar13 * fVar5 - fVar17 * fVar6) + fVar7 * fVar14 + fVar18) * fVar10 +
           *(float *)(lVar8 + lVar9);
      *(float *)(lVar8 + 4 + lVar9) =
           ((fVar14 * fVar6 - fVar13 * fVar4) + fVar7 * fVar17 + fVar19) * fVar10 +
           *(float *)(lVar8 + 4 + lVar9);
      *(float *)(lVar8 + 8 + lVar9) =
           ((fVar17 * fVar4 - fVar14 * fVar5) + fVar7 * fVar13 + fVar20) * fVar10 +
           *(float *)(lVar8 + 8 + lVar9);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df92ec FUN_146df92ec body=245 status=ok
// SIG undefined FUN_146df92ec(void)

void FUN_146df92ec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)*param_1;
  local_3c = (undefined4)((longlong)param_2 + (longlong)*(int *)(param_1 + 2));
  lVar4 = param_1[1];
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0x90) +
                    ((longlong)param_2 + (longlong)*(int *)(param_1 + 2)) * 4);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    puVar5 = (undefined8 *)*plVar3;
    local_58 = &local_3c;
    local_50 = *(undefined4 *)((longlong)param_1 + 0x14);
    local_4c = *(undefined4 *)(param_1 + 3);
    local_48 = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_44 = *(undefined4 *)(param_1 + 4);
    local_68 = plVar3;
    local_60 = lVar4;
    if ((longlong)*(int *)(puVar5 + 2) != 0) {
      piVar8 = (int *)puVar5[1];
      piVar1 = piVar8 + *(int *)(puVar5 + 2);
      iVar7 = 0;
      do {
        iVar6 = *piVar8;
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else if (iVar7 < iVar6) {
          do {
            FUN_146df93e2(&local_68,*puVar5,iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        piVar8 = piVar8 + 1;
        iVar7 = iVar6;
      } while (piVar8 != piVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df93e2 FUN_146df93e2 body=2035 status=ok
// SIG undefined FUN_146df93e2(void)

void FUN_146df93e2(longlong *param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  double dVar18;
  uint uVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  undefined4 uVar37;
  uint uVar38;
  undefined1 auStack_198 [32];
  double local_178;
  int local_164;
  longlong local_160;
  longlong local_158;
  undefined8 uStack_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar13 = *param_1;
  lVar14 = (longlong)param_3;
  iVar7 = *(int *)(**(longlong **)(lVar13 + 0x30) + lVar14 * 4);
  if (((iVar7 == -1) || ((int)param_1[3] == iVar7)) &&
     (lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x60) + lVar14 * 8),
     *(char *)(lVar12 + 0x1c) != '\x11')) {
    lVar11 = (longlong)*(int *)param_1[2];
    lVar3 = *(longlong *)(param_1[1] + 0xa8);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)(lVar3 + lVar11 * 0x10);
    auVar21 = insertps(auVar21,*(undefined4 *)(lVar3 + 8 + lVar11 * 0x10),0x20);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar14 * 0xc);
    auVar34 = insertps(auVar34,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar14 * 0xc),
                       0x28);
    local_178 = (double)*(float *)((longlong)param_1 + 0x1c);
    pfVar8 = (float *)(*(longlong *)(param_2 + 0x48) + lVar14 * 0x10);
    fVar36 = *pfVar8;
    fVar1 = pfVar8[1];
    fVar35 = pfVar8[2];
    fVar2 = pfVar8[3];
    fVar20 = auVar21._0_4_ - auVar34._0_4_;
    fVar22 = auVar21._4_4_ - auVar34._4_4_;
    auVar24._4_4_ = fVar22;
    auVar24._0_4_ = fVar20;
    fVar23 = auVar21._8_4_ - auVar34._8_4_;
    auVar24._8_4_ = fVar23;
    auVar24._12_4_ = auVar21._12_4_ - auVar34._12_4_;
    auVar21 = blendps(auVar24,ZEXT816(0),8);
    fVar27 = fVar36 * -1.0;
    fVar28 = fVar1 * -1.0;
    fVar29 = fVar35 * -1.0;
    fVar30 = fVar2 * 1.0;
    fVar31 = auVar21._4_4_ * fVar27 - auVar21._0_4_ * fVar28;
    fVar32 = auVar21._8_4_ * fVar28 - auVar21._4_4_ * fVar29;
    fVar33 = auVar21._0_4_ * fVar29 - auVar21._8_4_ * fVar27;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    fVar33 = fVar33 + fVar33;
    local_128 = (double)((fVar31 * fVar28 - fVar33 * fVar29) + fVar30 * fVar32 + fVar20);
    local_118 = (double)((fVar33 * fVar27 - fVar32 * fVar28) + fVar30 * fVar31 + fVar23);
    local_120 = (double)((fVar32 * fVar29 - fVar31 * fVar27) + fVar30 * fVar33 + fVar22);
    lVar3 = *(longlong *)(param_1[1] + 0x28);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulonglong *)(lVar3 + lVar11 * 0xc);
    auVar21 = insertps(auVar25,*(undefined4 *)(lVar3 + 8 + lVar11 * 0xc),0x20);
    pfVar8 = (float *)(**(longlong **)(lVar13 + 8) + 0x10 + lVar14 * 0x30);
    auVar26._0_4_ = auVar21._0_4_ - *pfVar8;
    auVar26._4_4_ = auVar21._4_4_ - pfVar8[1];
    auVar26._8_4_ = auVar21._8_4_ - pfVar8[2];
    auVar26._12_4_ = auVar21._12_4_ - pfVar8[3];
    auVar21 = blendps(ZEXT816(0),auVar26,7);
    pfVar8 = (float *)(**(longlong **)(lVar13 + 8) + lVar14 * 0x30);
    fVar20 = *pfVar8 * -1.0;
    fVar22 = pfVar8[1] * -1.0;
    fVar23 = pfVar8[2] * -1.0;
    fVar27 = pfVar8[3] * 1.0;
    fVar28 = auVar21._4_4_ * fVar20 - auVar21._0_4_ * fVar22;
    fVar29 = auVar21._8_4_ * fVar22 - auVar21._4_4_ * fVar23;
    fVar30 = auVar21._0_4_ * fVar23 - auVar21._8_4_ * fVar20;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    local_140 = (double)((fVar28 * fVar22 - fVar30 * fVar23) + fVar27 * fVar29 + auVar26._0_4_);
    local_130 = (double)((fVar30 * fVar20 - fVar29 * fVar22) + fVar27 * fVar28 + auVar26._8_4_);
    local_138 = (double)((fVar29 * fVar23 - fVar28 * fVar20) + fVar27 * fVar30 + auVar26._4_4_);
    FUN_146dae232(lVar12,&local_110);
    if (local_f8 == '\x01') {
      *(undefined1 *)(**(longlong **)(lVar13 + 0x10) + lVar14) = 1;
      FUN_146dae152(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + lVar14 * 8),&local_128,
                    &local_110);
      auVar21 = insertps(ZEXT416((uint)(float)local_128),ZEXT416((uint)(float)local_120),0x1c);
      auVar6._4_4_ = extraout_XMM0_Db;
      auVar6._0_4_ = (float)local_118;
      auVar6._8_4_ = extraout_XMM0_Dc;
      auVar6._12_4_ = extraout_XMM0_Dd;
      auVar21 = insertps(auVar21,auVar6,0x28);
      fVar20 = auVar21._0_4_;
      fVar22 = auVar21._4_4_;
      fVar23 = auVar21._8_4_;
      fVar27 = fVar22 * fVar36 - fVar1 * fVar20;
      fVar28 = fVar23 * fVar1 - fVar35 * fVar22;
      fVar29 = fVar20 * fVar35 - fVar36 * fVar23;
      fVar27 = fVar27 + fVar27;
      fVar28 = fVar28 + fVar28;
      fVar29 = fVar29 + fVar29;
      fVar30 = (fVar27 * fVar1 - fVar29 * fVar35) + fVar2 * fVar28 + fVar20;
      fVar31 = (fVar28 * fVar35 - fVar27 * fVar36) + fVar2 * fVar29 + fVar22;
      fVar32 = (fVar29 * fVar36 - fVar28 * fVar1) + fVar2 * fVar27 + fVar23;
      auVar21 = insertps(ZEXT416((uint)(float)local_110),ZEXT416((uint)(float)local_108),0x1c);
      auVar21 = insertps(auVar21,ZEXT416((uint)(float)local_100),0x28);
      fVar27 = auVar21._0_4_;
      fVar28 = auVar21._4_4_;
      fVar29 = auVar21._8_4_;
      fVar20 = fVar28 * fVar36 - fVar1 * fVar27;
      fVar22 = fVar29 * fVar1 - fVar35 * fVar28;
      fVar23 = fVar27 * fVar35 - fVar36 * fVar29;
      fVar20 = fVar20 + fVar20;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar27 = auVar34._0_4_ + (fVar20 * fVar1 - fVar23 * fVar35) + fVar2 * fVar22 + fVar27;
      fVar35 = auVar34._4_4_ + (fVar22 * fVar35 - fVar20 * fVar36) + fVar2 * fVar23 + fVar28;
      fVar36 = auVar34._8_4_ + (fVar23 * fVar36 - fVar22 * fVar1) + fVar2 * fVar20 + fVar29;
      lpCriticalSection = *(LPCRITICAL_SECTION *)(lVar13 + 0x48);
      EnterCriticalSection(lpCriticalSection);
      plVar4 = *(longlong **)(lVar13 + 0x18);
      iVar7 = (int)plVar4[1];
      lVar12 = (longlong)iVar7;
      *(uint *)(plVar4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
        FUN_140aacb36(plVar4,iVar7);
      }
      lVar3 = *plVar4;
      *(float *)(lVar3 + lVar12 * 0xc) = fVar27;
      *(float *)(lVar3 + 4 + lVar12 * 0xc) = fVar35;
      *(float *)(lVar3 + 8 + lVar12 * 0xc) = fVar36;
      plVar4 = *(longlong **)(lVar13 + 0x20);
      iVar7 = (int)plVar4[1];
      lVar13 = (longlong)iVar7;
      *(uint *)(plVar4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
        FUN_140aacb36(plVar4,iVar7);
      }
      lVar12 = *plVar4;
      *(float *)(lVar12 + lVar13 * 0xc) = fVar30;
      *(float *)(lVar12 + 4 + lVar13 * 0xc) = fVar31;
      *(float *)(lVar12 + 8 + lVar13 * 0xc) = fVar32;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      lVar13 = *(longlong *)(param_1[1] + 0xa8);
      lVar12 = (longlong)*(int *)param_1[2] * 0x10;
      fVar1 = *(float *)(lVar13 + 8 + lVar12);
      fVar2 = *(float *)(lVar13 + 4 + lVar12);
      fVar35 = (fVar36 - fVar1) * fVar32 +
               (fVar27 - *(float *)(lVar13 + lVar12)) * fVar30 + (fVar35 - fVar2) * fVar31;
      fVar36 = 0.0;
      if (0.0 <= fVar35) {
        fVar36 = fVar35;
      }
      fVar36 = fVar36 + 0.1;
      *(float *)(lVar13 + lVar12) = fVar30 * fVar36 + *(float *)(lVar13 + lVar12);
      *(float *)(lVar13 + 4 + lVar12) = fVar31 * fVar36 + fVar2;
      *(float *)(lVar13 + 8 + lVar12) = fVar32 * fVar36 + fVar1;
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x60) + lVar14 * 8);
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x1c) == '&')) {
        local_158 = 0;
        uStack_150 = 0;
        FUN_146e42678(lVar13,&local_110,&local_158,0);
        if (0 < (int)uStack_150) {
          local_160 = lVar13 + 0x20;
          uVar15 = 0xffffffff;
          lVar14 = 0;
          uVar16 = 0;
          uVar37 = 0xc0000000;
          uVar38 = 0x47eff933;
          local_164 = param_3;
          do {
            uVar5 = *(undefined8 *)(lVar13 + 0x230);
            FUN_146df9bd6(local_158 + lVar14,&local_140,local_160);
            dVar18 = (double)FUN_146dd2aa0(uVar5,&local_140,&local_128);
            uVar17 = SUB84(dVar18,0);
            uVar19 = (uint)((ulonglong)dVar18 >> 0x20) & 0x7fffffff;
            if ((double)CONCAT44(uVar38,uVar37) <= ABS(dVar18)) {
              uVar17 = uVar37;
              uVar19 = uVar38;
            }
            if (ABS(dVar18) <= (double)CONCAT44(uVar38,uVar37) &&
                (double)CONCAT44(uVar38,uVar37) != ABS(dVar18)) {
              uVar15 = uVar16 & 0xffffffff;
            }
            uVar16 = uVar16 + 1;
            lVar14 = lVar14 + 0x28;
            uVar37 = uVar17;
            uVar38 = uVar19;
          } while ((longlong)uVar16 < (longlong)(int)uStack_150);
          param_3 = local_164;
          if (((int)uVar15 != -1) &&
             (iVar7 = FUN_146df7e64((longlong)(int)uVar15 * 0x28 + local_158,lVar13 + 0x78),
             param_3 = local_164, iVar7 != -1)) {
            param_3 = *(int *)(*(longlong *)(lVar13 + 0x140) + (longlong)iVar7 * 4);
          }
        }
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        lVar14 = (longlong)param_3;
      }
      lVar9 = (longlong)*(int *)param_1[2];
      lVar13 = *(longlong *)(param_1[1] + 0xa8);
      lVar10 = lVar9 * 0x10;
      lVar14 = lVar14 * 0xc;
      fVar1 = *(float *)(lVar13 + 8 + lVar10);
      lVar12 = *(longlong *)(param_2 + 0x28);
      fVar33 = fVar1 - *(float *)(lVar12 + 8 + lVar14);
      fVar35 = *(float *)(lVar13 + 4 + lVar10);
      fVar29 = fVar35 - *(float *)(lVar12 + 4 + lVar14);
      fVar2 = *(float *)(lVar13 + lVar10);
      fVar28 = fVar2 - *(float *)(lVar12 + lVar14);
      lVar12 = *(longlong *)(param_1[1] + 0x28);
      lVar3 = *(longlong *)(param_2 + 0x78);
      lVar11 = *(longlong *)(param_2 + 0x90);
      fVar20 = *(float *)(lVar11 + 4 + lVar14);
      fVar22 = *(float *)(lVar11 + 8 + lVar14);
      fVar23 = *(float *)((longlong)param_1 + 0x24);
      fVar27 = (fVar1 - *(float *)(lVar12 + 8 + lVar9 * 0xc)) -
               ((*(float *)(lVar11 + lVar14) * fVar29 - fVar28 * fVar20) +
               *(float *)(lVar3 + 8 + lVar14)) * fVar23;
      fVar28 = (fVar35 - *(float *)(lVar12 + 4 + lVar9 * 0xc)) -
               ((fVar28 * fVar22 - fVar33 * *(float *)(lVar11 + lVar14)) +
               *(float *)(lVar3 + 4 + lVar14)) * fVar23;
      fVar20 = (fVar2 - *(float *)(lVar12 + lVar9 * 0xc)) -
               ((fVar20 * fVar33 - fVar29 * fVar22) + *(float *)(lVar3 + lVar14)) * fVar23;
      fVar22 = fVar27 * fVar32 + fVar20 * fVar30 + fVar31 * fVar28;
      fVar27 = fVar27 - fVar22 * fVar32;
      fVar28 = fVar28 - fVar31 * fVar22;
      fVar20 = fVar20 - fVar30 * fVar22;
      fVar22 = SQRT(fVar27 * fVar27 + fVar20 * fVar20 + fVar28 * fVar28);
      if (1e-08 <= fVar22) {
        pfVar8 = (float *)(lVar13 + lVar10);
        fVar23 = fVar36 * *(float *)(param_1 + 4);
        if (fVar22 <= fVar36 * *(float *)(param_1 + 4)) {
          fVar23 = fVar22;
        }
        fVar23 = fVar23 / fVar22;
        *pfVar8 = fVar2 - fVar20 * fVar23;
        pfVar8[1] = fVar35 - fVar28 * fVar23;
        pfVar8[2] = fVar1 - fVar27 * fVar23;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146df9bd6 FUN_146df9bd6 body=886 status=ok
// SIG undefined FUN_146df9bd6(void)

double * FUN_146df9bd6(int *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auStack_178 [32];
  undefined8 uStack_158;
  int local_150;
  int local_14c;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_128;
  int local_120;
  int local_11c;
  undefined8 local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_f8;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  double dStack_e0;
  double local_d8;
  int local_c4 [3];
  double local_b8 [3];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  iVar4 = *param_1;
  iVar5 = param_1[1];
  iVar6 = param_1[2];
  lVar9 = (longlong)param_1[3];
  puVar8 = (undefined4 *)&DAT_14c993f00;
  if ((iVar5 + iVar4 + iVar6 & 1U) == 0) {
    puVar8 = &DAT_14c993e10;
  }
  local_c4[0] = puVar8[lVar9 * 0xc] + iVar4;
  local_c4[1] = puVar8[lVar9 * 0xc + 1] + iVar5;
  local_c4[2] = puVar8[lVar9 * 0xc + 2] + iVar6;
  local_b8[0] = *param_3;
  local_b8[1] = param_3[1];
  local_b8[2] = param_3[2];
  lVar7 = 8;
  do {
    (&uStack_f8)[lVar7] =
         (double)*(int *)((longlong)&local_e8 + lVar7 * 4 + 4) * param_3[lVar7] +
         (double)(&uStack_f8)[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xb);
  dVar1 = *(double *)(param_1 + 4);
  uStack_f8._4_4_ = puVar8[lVar9 * 0xc + 3] + iVar4;
  local_f0 = puVar8[lVar9 * 0xc + 4] + iVar5;
  local_ec = puVar8[lVar9 * 0xc + 5] + iVar6;
  local_e8 = *param_3;
  dStack_e0 = param_3[1];
  local_d8 = param_3[2];
  lVar7 = 8;
  do {
    (&uStack_128)[lVar7] =
         (double)*(int *)((longlong)&local_118 + lVar7 * 4 + 4) * param_3[lVar7] +
         (double)(&uStack_128)[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xb);
  dVar2 = *(double *)(param_1 + 6);
  uStack_128._4_4_ = puVar8[lVar9 * 0xc + 6] + iVar4;
  local_120 = puVar8[lVar9 * 0xc + 7] + iVar5;
  local_11c = puVar8[lVar9 * 0xc + 8] + iVar6;
  local_118 = *param_3;
  dStack_110 = param_3[1];
  local_108 = param_3[2];
  lVar7 = 8;
  do {
    (&uStack_158)[lVar7] =
         (double)*(int *)((longlong)&local_148 + lVar7 * 4 + 4) * param_3[lVar7] +
         (double)(&uStack_158)[lVar7];
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xb);
  dVar3 = *(double *)(param_1 + 8);
  uStack_158._4_4_ = iVar4 + puVar8[lVar9 * 0xc + 9];
  local_150 = iVar5 + puVar8[lVar9 * 0xc + 10];
  local_14c = iVar6 + puVar8[lVar9 * 0xc + 0xb];
  local_148 = *param_3;
  dStack_140 = param_3[1];
  local_138 = param_3[2];
  lVar9 = 0;
  do {
    (&local_148)[lVar9] =
         (double)*(int *)((longlong)&uStack_158 + lVar9 * 4 + 4) * param_3[lVar9 + 8] +
         (double)(&local_148)[lVar9];
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  dVar10 = ((1.0 - dVar1) - dVar2) - dVar3;
  *param_2 = local_148 * dVar10 + local_118 * dVar3 + local_e8 * dVar2 + local_b8[0] * dVar1;
  param_2[1] = dStack_140 * dVar10 + dStack_110 * dVar3 + dStack_e0 * dVar2 + local_b8[1] * dVar1;
  param_2[2] = dVar10 * local_138 + local_108 * dVar3 + local_d8 * dVar2 + local_b8[2] * dVar1;
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146df9f56 FUN_146df9f56 body=245 status=ok
// SIG undefined FUN_146df9f56(void)

void FUN_146df9f56(undefined8 *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)*param_1;
  local_3c = (undefined4)((longlong)param_2 + (longlong)*(int *)(param_1 + 2));
  lVar4 = param_1[1];
  fVar2 = *(float *)(*(longlong *)(lVar4 + 0x90) +
                    ((longlong)param_2 + (longlong)*(int *)(param_1 + 2)) * 4);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    puVar5 = (undefined8 *)*plVar3;
    local_58 = &local_3c;
    local_50 = *(undefined4 *)((longlong)param_1 + 0x14);
    local_4c = *(undefined4 *)(param_1 + 3);
    local_48 = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_44 = *(undefined4 *)(param_1 + 4);
    local_68 = plVar3;
    local_60 = lVar4;
    if ((longlong)*(int *)(puVar5 + 2) != 0) {
      piVar8 = (int *)puVar5[1];
      piVar1 = piVar8 + *(int *)(puVar5 + 2);
      iVar7 = 0;
      do {
        iVar6 = *piVar8;
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else if (iVar7 < iVar6) {
          do {
            FUN_146dfa04c(&local_68,*puVar5,iVar7);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
        piVar8 = piVar8 + 1;
        iVar7 = iVar6;
      } while (piVar8 != piVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dfa04c FUN_146dfa04c body=1874 status=ok
// SIG undefined FUN_146dfa04c(void)

void FUN_146dfa04c(longlong *param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db;
  double dVar17;
  uint uVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  uint uVar38;
  undefined1 auStack_198 [32];
  double local_178;
  int local_164;
  longlong local_160;
  longlong local_158;
  undefined8 uStack_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = *param_1;
  lVar13 = (longlong)param_3;
  iVar7 = *(int *)(**(longlong **)(lVar3 + 0x30) + lVar13 * 4);
  if (((iVar7 == -1) || ((int)param_1[3] == iVar7)) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x60) + lVar13 * 8),
     *(char *)(lVar8 + 0x1c) != '\x11')) {
    lVar12 = (longlong)*(int *)param_1[2];
    lVar4 = *(longlong *)(param_1[1] + 0xa8);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)(lVar4 + lVar12 * 0x10);
    auVar21 = insertps(auVar21,*(undefined4 *)(lVar4 + 8 + lVar12 * 0x10),0x20);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar13 * 0xc);
    auVar36 = insertps(auVar36,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar13 * 0xc),
                       0x28);
    local_178 = (double)*(float *)((longlong)param_1 + 0x1c);
    pfVar9 = (float *)(*(longlong *)(param_2 + 0x48) + lVar13 * 0x10);
    fVar35 = *pfVar9;
    fVar19 = pfVar9[1];
    fVar1 = pfVar9[2];
    fVar2 = pfVar9[3];
    fVar20 = auVar21._0_4_ - auVar36._0_4_;
    fVar22 = auVar21._4_4_ - auVar36._4_4_;
    auVar24._4_4_ = fVar22;
    auVar24._0_4_ = fVar20;
    fVar23 = auVar21._8_4_ - auVar36._8_4_;
    auVar24._8_4_ = fVar23;
    auVar24._12_4_ = auVar21._12_4_ - auVar36._12_4_;
    auVar21 = blendps(auVar24,ZEXT816(0),8);
    fVar27 = fVar35 * -1.0;
    fVar28 = fVar19 * -1.0;
    fVar29 = fVar1 * -1.0;
    fVar30 = fVar2 * 1.0;
    fVar31 = auVar21._4_4_ * fVar27 - auVar21._0_4_ * fVar28;
    fVar32 = auVar21._8_4_ * fVar28 - auVar21._4_4_ * fVar29;
    fVar33 = auVar21._0_4_ * fVar29 - auVar21._8_4_ * fVar27;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    fVar33 = fVar33 + fVar33;
    local_128 = (double)((fVar31 * fVar28 - fVar33 * fVar29) + fVar30 * fVar32 + fVar20);
    local_118 = (double)((fVar33 * fVar27 - fVar32 * fVar28) + fVar30 * fVar31 + fVar23);
    local_120 = (double)((fVar32 * fVar29 - fVar31 * fVar27) + fVar30 * fVar33 + fVar22);
    lVar4 = *(longlong *)(param_1[1] + 0x28);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulonglong *)(lVar4 + lVar12 * 0xc);
    auVar21 = insertps(auVar25,*(undefined4 *)(lVar4 + 8 + lVar12 * 0xc),0x20);
    pfVar9 = (float *)(**(longlong **)(lVar3 + 8) + 0x10 + lVar13 * 0x30);
    auVar26._0_4_ = auVar21._0_4_ - *pfVar9;
    auVar26._4_4_ = auVar21._4_4_ - pfVar9[1];
    auVar26._8_4_ = auVar21._8_4_ - pfVar9[2];
    auVar26._12_4_ = auVar21._12_4_ - pfVar9[3];
    auVar21 = blendps(ZEXT816(0),auVar26,7);
    pfVar9 = (float *)(**(longlong **)(lVar3 + 8) + lVar13 * 0x30);
    fVar20 = *pfVar9 * -1.0;
    fVar22 = pfVar9[1] * -1.0;
    fVar23 = pfVar9[2] * -1.0;
    fVar27 = pfVar9[3] * 1.0;
    fVar28 = auVar21._4_4_ * fVar20 - auVar21._0_4_ * fVar22;
    fVar29 = auVar21._8_4_ * fVar22 - auVar21._4_4_ * fVar23;
    fVar30 = auVar21._0_4_ * fVar23 - auVar21._8_4_ * fVar20;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    local_140 = (double)((fVar28 * fVar22 - fVar30 * fVar23) + fVar27 * fVar29 + auVar26._0_4_);
    local_130 = (double)((fVar30 * fVar20 - fVar29 * fVar22) + fVar27 * fVar28 + auVar26._8_4_);
    local_138 = (double)((fVar29 * fVar23 - fVar28 * fVar20) + fVar27 * fVar30 + auVar26._4_4_);
    FUN_146dae232(lVar8,&local_110);
    if (local_f8 == '\x01') {
      *(undefined1 *)(**(longlong **)(lVar3 + 0x10) + lVar13) = 1;
      FUN_146dae152(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + lVar13 * 8),&local_128,
                    &local_110);
      auVar21 = insertps(ZEXT416((uint)(float)local_128),ZEXT416((uint)(float)local_120),0x1c);
      auVar6._4_4_ = extraout_XMM0_Db;
      auVar6._0_4_ = (float)local_118;
      auVar6._8_4_ = extraout_XMM0_Dc;
      auVar6._12_4_ = extraout_XMM0_Dd;
      auVar21 = insertps(auVar21,auVar6,0x28);
      fVar20 = auVar21._0_4_;
      fVar22 = auVar21._4_4_;
      fVar23 = auVar21._8_4_;
      fVar27 = fVar22 * fVar35 - fVar19 * fVar20;
      fVar28 = fVar23 * fVar19 - fVar1 * fVar22;
      fVar29 = fVar20 * fVar1 - fVar35 * fVar23;
      fVar27 = fVar27 + fVar27;
      fVar28 = fVar28 + fVar28;
      fVar29 = fVar29 + fVar29;
      fVar32 = (fVar27 * fVar19 - fVar29 * fVar1) + fVar2 * fVar28 + fVar20;
      fVar33 = (fVar28 * fVar1 - fVar27 * fVar35) + fVar2 * fVar29 + fVar22;
      fVar34 = (fVar29 * fVar35 - fVar28 * fVar19) + fVar2 * fVar27 + fVar23;
      auVar21 = insertps(ZEXT416((uint)(float)local_110),ZEXT416((uint)(float)local_108),0x1c);
      auVar21 = insertps(auVar21,ZEXT416((uint)(float)local_100),0x28);
      fVar29 = auVar21._0_4_;
      fVar30 = auVar21._4_4_;
      fVar31 = auVar21._8_4_;
      fVar23 = fVar30 * fVar35 - fVar19 * fVar29;
      fVar27 = fVar31 * fVar19 - fVar1 * fVar30;
      fVar28 = fVar29 * fVar1 - fVar35 * fVar31;
      fVar23 = fVar23 + fVar23;
      fVar27 = fVar27 + fVar27;
      fVar28 = fVar28 + fVar28;
      lVar3 = *(longlong *)(param_1[1] + 0xa8);
      lVar8 = (longlong)*(int *)param_1[2] * 0x10;
      fVar20 = *(float *)(lVar3 + 8 + lVar8);
      fVar22 = *(float *)(lVar3 + 4 + lVar8);
      fVar19 = ((auVar36._8_4_ + (fVar28 * fVar35 - fVar27 * fVar19) + fVar2 * fVar23 + fVar31) -
               fVar20) * fVar34 +
               ((auVar36._0_4_ + (fVar23 * fVar19 - fVar28 * fVar1) + fVar2 * fVar27 + fVar29) -
               *(float *)(lVar3 + lVar8)) * fVar32 +
               ((auVar36._4_4_ + (fVar27 * fVar1 - fVar23 * fVar35) + fVar2 * fVar28 + fVar30) -
               fVar22) * fVar33;
      fVar35 = 0.0;
      if (0.0 <= fVar19) {
        fVar35 = fVar19;
      }
      fVar35 = fVar35 + 0.1;
      *(float *)(lVar3 + lVar8) = fVar32 * fVar35 + *(float *)(lVar3 + lVar8);
      *(float *)(lVar3 + 4 + lVar8) = fVar33 * fVar35 + fVar22;
      *(float *)(lVar3 + 8 + lVar8) = fVar34 * fVar35 + fVar20;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x60) + lVar13 * 8);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1c) == '&')) {
        local_158 = 0;
        uStack_150 = 0;
        FUN_146e42678(lVar3,&local_110,&local_158,0);
        if (0 < (int)uStack_150) {
          local_160 = lVar3 + 0x20;
          uVar14 = 0xffffffff;
          lVar13 = 0;
          uVar15 = 0;
          uVar37 = 0xc0000000;
          uVar38 = 0x47eff933;
          local_164 = param_3;
          do {
            uVar5 = *(undefined8 *)(lVar3 + 0x230);
            FUN_146df9bd6(local_158 + lVar13,&local_140,local_160);
            dVar17 = (double)FUN_146dd2aa0(uVar5,&local_140,&local_128);
            uVar16 = SUB84(dVar17,0);
            uVar18 = (uint)((ulonglong)dVar17 >> 0x20) & 0x7fffffff;
            if ((double)CONCAT44(uVar38,uVar37) <= ABS(dVar17)) {
              uVar16 = uVar37;
              uVar18 = uVar38;
            }
            if (ABS(dVar17) <= (double)CONCAT44(uVar38,uVar37) &&
                (double)CONCAT44(uVar38,uVar37) != ABS(dVar17)) {
              uVar14 = uVar15 & 0xffffffff;
            }
            uVar15 = uVar15 + 1;
            lVar13 = lVar13 + 0x28;
            uVar37 = uVar16;
            uVar38 = uVar18;
          } while ((longlong)uVar15 < (longlong)(int)uStack_150);
          param_3 = local_164;
          if (((int)uVar14 != -1) &&
             (iVar7 = FUN_146df7e64((longlong)(int)uVar14 * 0x28 + local_158,lVar3 + 0x78),
             param_3 = local_164, iVar7 != -1)) {
            param_3 = *(int *)(*(longlong *)(lVar3 + 0x140) + (longlong)iVar7 * 4);
          }
        }
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        lVar13 = (longlong)param_3;
      }
      lVar10 = (longlong)*(int *)param_1[2];
      lVar3 = *(longlong *)(param_1[1] + 0xa8);
      lVar11 = lVar10 * 0x10;
      lVar13 = lVar13 * 0xc;
      fVar19 = *(float *)(lVar3 + 8 + lVar11);
      lVar8 = *(longlong *)(param_2 + 0x28);
      fVar30 = fVar19 - *(float *)(lVar8 + 8 + lVar13);
      fVar1 = *(float *)(lVar3 + 4 + lVar11);
      fVar29 = fVar1 - *(float *)(lVar8 + 4 + lVar13);
      fVar2 = *(float *)(lVar3 + lVar11);
      fVar28 = fVar2 - *(float *)(lVar8 + lVar13);
      lVar8 = *(longlong *)(param_1[1] + 0x28);
      lVar4 = *(longlong *)(param_2 + 0x78);
      lVar12 = *(longlong *)(param_2 + 0x90);
      fVar20 = *(float *)(lVar12 + 4 + lVar13);
      fVar22 = *(float *)(lVar12 + 8 + lVar13);
      fVar23 = *(float *)((longlong)param_1 + 0x24);
      fVar27 = (fVar19 - *(float *)(lVar8 + 8 + lVar10 * 0xc)) -
               ((*(float *)(lVar12 + lVar13) * fVar29 - fVar28 * fVar20) +
               *(float *)(lVar4 + 8 + lVar13)) * fVar23;
      fVar28 = (fVar1 - *(float *)(lVar8 + 4 + lVar10 * 0xc)) -
               ((fVar28 * fVar22 - fVar30 * *(float *)(lVar12 + lVar13)) +
               *(float *)(lVar4 + 4 + lVar13)) * fVar23;
      fVar20 = (fVar2 - *(float *)(lVar8 + lVar10 * 0xc)) -
               ((fVar20 * fVar30 - fVar29 * fVar22) + *(float *)(lVar4 + lVar13)) * fVar23;
      fVar22 = fVar27 * fVar34 + fVar20 * fVar32 + fVar33 * fVar28;
      fVar27 = fVar27 - fVar22 * fVar34;
      fVar28 = fVar28 - fVar33 * fVar22;
      fVar20 = fVar20 - fVar32 * fVar22;
      fVar22 = SQRT(fVar27 * fVar27 + fVar20 * fVar20 + fVar28 * fVar28);
      if (1e-08 <= fVar22) {
        pfVar9 = (float *)(lVar3 + lVar11);
        fVar23 = fVar35 * *(float *)(param_1 + 4);
        if (fVar22 <= fVar35 * *(float *)(param_1 + 4)) {
          fVar23 = fVar22;
        }
        fVar23 = fVar23 / fVar22;
        *pfVar9 = fVar2 - fVar20 * fVar23;
        pfVar9[1] = fVar1 - fVar28 * fVar23;
        pfVar9[2] = fVar19 - fVar27 * fVar23;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dfa7a0 FUN_146dfa7a0 body=136 status=ok
// SIG undefined FUN_146dfa7a0(void)

void FUN_146dfa7a0(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  lVar2 = *(longlong *)(param_1[2] + 0x40);
  if (lVar2 == 0) {
    lVar2 = param_1[2];
  }
  local_28 = *(int *)(lVar2 + (longlong)*param_2 * 8);
  iVar1 = *(int *)(lVar2 + 4 + (longlong)*param_2 * 8) - local_28;
  local_10 = &local_30;
  local_20 = param_1[1];
  local_18 = FUN_146dfa82a;
  FUN_1400bd65e(iVar1,&local_18,
                CONCAT71((int7)((ulonglong)param_1[3] >> 8),iVar1 < *(int *)param_1[3]));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dfa82a FUN_146dfa82a body=76 status=ok
// SIG undefined FUN_146dfa82a(void)

void FUN_146dfa82a(undefined8 *param_1,int *param_2)

{
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *(int *)(param_1 + 1) + *param_2;
  (**(code **)param_1[2])(((undefined8 *)param_1[2])[1],*(undefined8 *)*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dfa878 FUN_146dfa878 body=807 status=ok
// SIG undefined FUN_146dfa878(void)

void FUN_146dfa878(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
    return;
  }
  lVar3 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  uVar6 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & param_3) * 4);
  if (uVar6 == 0xffffffff) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar7 = uVar6;
  while (uVar8 = uVar6, *(uint *)(lVar3 + (longlong)(int)uVar7 * 0x24) != param_3) {
    uVar7 = *(uint *)(lVar3 + (longlong)(int)uVar7 * 0x24 + 0x1c);
    if (uVar7 == 0xffffffff) {
      return;
    }
  }
  do {
    puVar4 = (uint *)(lVar3 + (longlong)(int)uVar8 * 0x24);
    if (*puVar4 == param_3) goto LAB_146dfa93a;
    uVar8 = puVar4[7];
  } while (puVar4[7] != 0xffffffff);
  puVar4 = (uint *)0x0;
LAB_146dfa93a:
  pfVar1 = (float *)(*(longlong *)(param_2 + 0x48) + (longlong)(int)param_3 * 0xc);
  fVar12 = (float)puVar4[6] * pfVar1[2] + (float)puVar4[4] * *pfVar1 + (float)puVar4[5] * pfVar1[1];
  uVar7 = uVar6;
  do {
    puVar4 = (uint *)(lVar3 + (longlong)(int)uVar7 * 0x24);
    uVar8 = uVar6;
    if (*puVar4 == param_3) goto LAB_146dfa9a0;
    uVar7 = puVar4[7];
  } while (uVar7 != 0xffffffff);
  puVar4 = (uint *)0x0;
LAB_146dfa9a0:
  do {
    puVar5 = (uint *)(lVar3 + (longlong)(int)uVar8 * 0x24);
    if (*puVar5 == param_3) goto LAB_146dfa9ba;
    uVar8 = puVar5[7];
  } while (puVar5[7] != 0xffffffff);
  puVar5 = (uint *)0x0;
LAB_146dfa9ba:
  fVar14 = (float)puVar5[3] * (float)puVar4[6] +
           (float)puVar5[1] * (float)puVar4[4] + (float)puVar5[2] * (float)puVar4[5];
  uVar7 = uVar6;
  do {
    puVar4 = (uint *)(lVar3 + (longlong)(int)uVar7 * 0x24);
    uVar8 = uVar6;
    if (*puVar4 == param_3) goto LAB_146dfaa06;
    uVar7 = puVar4[7];
  } while (uVar7 != 0xffffffff);
  puVar4 = (uint *)0x0;
LAB_146dfaa06:
  do {
    puVar5 = (uint *)(lVar3 + (longlong)(int)uVar8 * 0x24);
    if (*puVar5 == param_3) goto LAB_146dfaa20;
    uVar8 = puVar5[7];
  } while (puVar5[7] != 0xffffffff);
  puVar5 = (uint *)0x0;
LAB_146dfaa20:
  fVar15 = (float)puVar4[3] - (float)puVar5[6] * fVar14;
  fVar13 = (float)puVar4[1] - (float)puVar5[4] * fVar14;
  fVar16 = (float)puVar4[2] - (float)puVar5[5] * fVar14;
  uVar7 = uVar6;
  do {
    puVar4 = (uint *)(lVar3 + (longlong)(int)uVar7 * 0x24);
    if (*puVar4 == param_3) goto LAB_146dfaa7c;
    uVar7 = puVar4[7];
  } while (uVar7 != 0xffffffff);
  puVar4 = (uint *)0x0;
LAB_146dfaa7c:
  fVar11 = (pfVar1[2] - (float)puVar4[6] * fVar12) - fVar15;
  fVar9 = (pfVar1[1] - (float)puVar4[5] * fVar12) - fVar16;
  fVar10 = (*pfVar1 - (float)puVar4[4] * fVar12) - fVar13;
  fVar17 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
  fVar18 = fVar12;
  if (fVar12 <= fVar14) {
    fVar18 = fVar14;
  }
  fVar12 = (fVar18 - fVar12) *
           *(float *)(**(longlong **)(param_1 + 0x98) +
                     (longlong)
                     *(int *)(**(longlong **)(param_1 + 0x30) + (longlong)(int)param_3 * 4) * 4);
  do {
    puVar4 = (uint *)(lVar3 + (longlong)(int)uVar6 * 0x24);
    if (*puVar4 == param_3) goto LAB_146dfab40;
    uVar6 = puVar4[7];
  } while (uVar6 != 0xffffffff);
  puVar4 = (uint *)0x0;
LAB_146dfab40:
  fVar14 = (float)puVar4[5];
  fVar2 = (float)puVar4[6];
  fVar12 = (float)(-(uint)(fVar12 < fVar17) & (uint)(1.0 - fVar12 / fVar17));
  *pfVar1 = fVar10 * fVar12 + fVar13 + (float)puVar4[4] * fVar18;
  pfVar1[1] = fVar9 * fVar12 + fVar16 + fVar14 * fVar18;
  pfVar1[2] = fVar11 * fVar12 + fVar15 + fVar18 * fVar2;
  return;
}



// FUNCTION 146dfaba0 FUN_146dfaba0 body=86 status=ok
// SIG undefined FUN_146dfaba0(void)

void FUN_146dfaba0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146dfabf6 FUN_146dfabf6 body=115 status=ok
// SIG undefined FUN_146dfabf6(void)

void FUN_146dfabf6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x310,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x310)) {
      uVar2 = uVar1 / 0x310 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x310,0x10);
  }
  return;
}



// FUNCTION 146dfac6a FUN_146dfac6a body=96 status=ok
// SIG undefined FUN_146dfac6a(void)

void FUN_146dfac6a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146dfacca FUN_146dfacca body=99 status=ok
// SIG undefined FUN_146dfacca(void)

undefined8 FUN_146dfacca(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x58)) {
    uVar4 = uVar2 / 0x58 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return uVar3;
}



// FUNCTION 146dfad2e FUN_146dfad2e body=181 status=ok
// SIG undefined FUN_146dfad2e(void)

longlong FUN_146dfad2e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146dfadc6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146dfade4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146dfadc6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146dfade4 FUN_146dfade4 body=277 status=ok
// SIG undefined FUN_146dfade4(void)

undefined4 * FUN_146dfade4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146dfaefa(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_146dfafe0(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146dfb0f4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dfaefa FUN_146dfaefa body=229 status=ok
// SIG undefined FUN_146dfaefa(void)

int * FUN_146dfaefa(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146dfafe0 FUN_146dfafe0 body=161 status=ok
// SIG undefined FUN_146dfafe0(void)

undefined8 FUN_146dfafe0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146dfb082(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146dfb082 FUN_146dfb082 body=114 status=ok
// SIG undefined FUN_146dfb082(void)

void FUN_146dfb082(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146dfb0f4 FUN_146dfb0f4 body=477 status=ok
// SIG undefined FUN_146dfb0f4(void)

void FUN_146dfb0f4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dfb2d2 FUN_146dfb2d2 body=257 status=ok
// SIG undefined FUN_146dfb2d2(void)

void FUN_146dfb2d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f580e0;
  FUN_146def679(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14026dbfa(param_1 + 0x19);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146dfb3d4 FUN_146dfb3d4 body=291 status=ok
// SIG undefined FUN_146dfb3d4(void)

undefined8 *
FUN_146dfb3d4(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,float *param_7,undefined4 param_8,float param_9)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f58610;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  local_58 = param_8;
  local_68 = 0x10;
  local_60 = 0x447a0000;
  FUN_140b3a35c(param_1 + 3,param_6,param_4);
  local_48 = *param_7;
  local_44 = param_7[1];
  if (10.0 <= local_44) {
    local_44 = 10.0;
  }
  if (local_44 <= 0.01) {
    local_44 = 0.01;
  }
  if (10.0 <= local_48) {
    local_48 = 10.0;
  }
  if (local_48 <= 0.01) {
    local_48 = 0.01;
  }
  local_44 = local_44 * param_9;
  local_48 = local_48 * param_9;
  local_68 = 0x10;
  FUN_140b3a44e(param_1 + 0xc,&local_48,param_5,*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_140fb5a3a(param_1,0x3c088889,1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dfb526 FUN_146dfb526 body=212 status=ok
// SIG undefined FUN_146dfb526(void)

void FUN_146dfb526(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_2 + 0x60);
  if ((longlong)iVar1 != 0) {
    local_5c = *(undefined4 *)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x58);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = plVar3[2];
        cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (cVar5 == '\x01' && lVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
          FUN_14081f6d4(param_1,local_5c,plVar3,local_58);
        }
        else if (lVar4 != 0 && cVar5 == '\0') {
          FUN_1400d2a94(param_1,plVar3);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146dfb5fc FUN_146dfb5fc body=65 status=ok
// SIG undefined FUN_146dfb5fc(void)

void FUN_146dfb5fc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_1448f7274(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar2 * 8));
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 146dfb660 FUN_146dfb660 body=41 status=ok
// SIG undefined FUN_146dfb660(void)

void FUN_146dfb660(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      FUN_146dfb68a(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 146dfb68a FUN_146dfb68a body=171 status=ok
// SIG undefined FUN_146dfb68a(void)

void FUN_146dfb68a(longlong param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  pfVar4 = *(float **)(*(longlong *)(param_1 + 0x48) + lVar6 * 8);
  if (pfVar4 != (float *)0x0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    dVar1 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18);
    dVar2 = *(double *)(lVar5 + 8 + lVar6 * 0x18);
    dVar3 = *(double *)(param_1 + 0x40);
    *pfVar4 = *pfVar4 - (float)((((double)*pfVar4 + *(double *)(pfVar4 + 0x44)) -
                                *(double *)(lVar5 + lVar6 * 0x18)) * dVar3);
    pfVar4[1] = pfVar4[1] -
                (float)((((double)pfVar4[1] + *(double *)(pfVar4 + 0x46)) - dVar2) * dVar3);
    pfVar4[2] = pfVar4[2] -
                (float)((((double)pfVar4[2] + *(double *)(pfVar4 + 0x48)) - dVar1) * dVar3);
  }
  return;
}



// FUNCTION 146dfb736 FUN_146dfb736 body=89 status=ok
// SIG undefined FUN_146dfb736(void)

void FUN_146dfb736(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar5);
      uVar4 = FUN_1448f7274(param_3,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8));
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = uVar4;
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  return;
}



// FUNCTION 146dfb790 FUN_146dfb790 body=45 status=ok
// SIG undefined FUN_146dfb790(void)

void FUN_146dfb790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar1 + lVar3) * 8) = 0;
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  return;
}



// FUNCTION 146dfb7be FUN_146dfb7be body=62 status=ok
// SIG undefined FUN_146dfb7be(void)

void FUN_146dfb7be(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_146dfb68a(param_1,*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  return;
}



// FUNCTION 146dfb7fc FUN_146dfb7fc body=333 status=ok
// SIG undefined FUN_146dfb7fc(void)

void FUN_146dfb7fc(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 0x20) == param_3) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            iVar4 = *(int *)(lVar3 + 0x10);
            if ((longlong)iVar4 != 0) {
              lVar1 = *(longlong *)(lVar3 + 8);
              iVar6 = 1;
              lVar8 = 0;
              lVar5 = 0;
              goto LAB_146dfb8e5;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_146dfb81c;
  while( true ) {
    lVar5 = lVar5 + 0x100000000;
    iVar6 = iVar6 + 1;
    lVar8 = lVar8 + 8;
    if ((longlong)iVar4 << 3 == lVar8) break;
LAB_146dfb8e5:
    if (*(longlong *)(lVar1 + lVar8) == param_2) {
      if (iVar6 != 0) {
        iVar6 = iVar4 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(lVar1 + (lVar5 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar4 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar4 = *(int *)(lVar3 + 0x10);
        }
        *(int *)(lVar3 + 0x10) = iVar4 + -1;
      }
      break;
    }
  }
LAB_146dfb81c:
  FUN_140a35b70(param_1,param_2,param_3);
  return;
}



// FUNCTION 146dfb94a FUN_146dfb94a body=93 status=ok
// SIG undefined FUN_146dfb94a(void)

longlong FUN_146dfb94a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146cea92c(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146dfb9a8 FUN_146dfb9a8 body=62 status=ok
// SIG undefined FUN_146dfb9a8(void)

longlong FUN_146dfb9a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146e0f1e0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xd0 + *param_1;
  FUN_146e0f154(lVar2);
  return lVar2;
}



// FUNCTION 146dfb9e6 FUN_146dfb9e6 body=290 status=ok
// SIG undefined FUN_146dfb9e6(void)

void FUN_146dfb9e6(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_144a127d2(param_3,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      *(undefined4 *)(*param_3 + lVar3 * 4) = 0xffffffff;
      if (*(int *)(param_1 + 0x358) != *(int *)(param_1 + 900)) {
        uVar2 = *(ulonglong *)(*param_2 + lVar3 * 8);
        uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        lVar5 = *(longlong *)(param_1 + 0x390);
        if (*(longlong *)(param_1 + 0x390) == 0) {
          lVar5 = param_1 + 0x388;
        }
        iVar6 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_1 + 0x398) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar6 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x350) + (longlong)iVar6 * 0x18);
            if (*puVar1 == uVar2) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                *(int *)(*param_3 + lVar3 * 4) = (int)puVar1[1];
              }
              break;
            }
            iVar6 = (int)puVar1[2];
          } while (iVar6 != -1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146dfbb08 FUN_146dfbb08 body=133 status=ok
// SIG undefined FUN_146dfbb08(void)

longlong FUN_146dfbb08(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  
  do {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 == (longlong *)0x0) {
      iVar3 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar3;
      if (*(int *)(param_1 + 0x24) <= iVar3) goto LAB_146dfbb77;
LAB_146dfbb6d:
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar6 = iVar3 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      if ((int)plVar1[1] <= iVar6) {
LAB_146dfbb77:
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        FUN_146e0f9d6(param_1);
        goto LAB_146dfbb6d;
      }
      plVar1 = *(longlong **)(*plVar1 + 8 + (longlong)iVar3 * 8);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(lVar4 + 0x70);
      }
      lVar2 = plVar1[1];
      *(longlong *)(param_1 + 0x10) = lVar4;
      *(int *)(param_1 + 0x18) = (int)lVar2;
      *(undefined1 *)(param_1 + 0x1c) = uVar5;
    }
    if ((lVar4 == 0) ||
       (*(char *)(*(longlong *)(lVar4 + 0x230) + (longlong)*(int *)(param_1 + 0x18)) == '\0')) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 146dfbb8e FUN_146dfbb8e body=210 status=ok
// SIG undefined FUN_146dfbb8e(void)

undefined8 *
FUN_146dfbb8e(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x108);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 200) + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar3 * 0x20) == param_3) {
          if (lVar2 + 8 != 0 && lVar2 != 0) {
            FUN_146dfbc60(param_2,lVar2 + 8,param_4,param_5,param_6);
            return param_2;
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146dfbc60 FUN_146dfbc60 body=356 status=ok
// SIG undefined FUN_146dfbc60(void)

longlong *
FUN_146dfbc60(longlong *param_1,longlong *param_2,double *param_3,double param_4,byte param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    plVar10 = (longlong *)0x0;
    dVar6 = 1.79769313486232e+308;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar9);
      lVar8 = (longlong)(int)plVar3[1];
      lVar4 = *(longlong *)(*plVar3 + 0x28);
      dVar5 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18) - param_3[2];
      dVar12 = *(double *)(lVar4 + 8 + lVar8 * 0x18) - param_3[1];
      dVar11 = *(double *)(lVar4 + lVar8 * 0x18) - *param_3;
      dVar5 = dVar5 * dVar5 + dVar11 * dVar11 + dVar12 * dVar12;
      if (dVar5 <= param_4 * param_4) {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1406b7a4a(param_1,iVar1);
        }
        *(longlong **)(*param_1 + (longlong)iVar1 * 8) = plVar3;
      }
      if ((param_5 & dVar5 < dVar6) == 0) {
        dVar5 = dVar6;
        plVar3 = plVar10;
      }
      plVar10 = plVar3;
      lVar9 = lVar9 + 8;
      dVar6 = dVar5;
    } while ((longlong)(int)lVar7 << 3 != lVar9);
    if (((param_5 != 0) && (plVar10 != (longlong *)0x0)) && ((int)param_1[1] == 0)) {
      *(undefined4 *)(param_1 + 1) = 1;
      if (*(int *)((longlong)param_1 + 0xc) == 0) {
        FUN_1406b7a4a(param_1,0);
      }
      *(longlong **)*param_1 = plVar10;
    }
  }
  return param_1;
}



// FUNCTION 146dfbdc4 FUN_146dfbdc4 body=1198 status=ok
// SIG undefined FUN_146dfbdc4(void)

ulonglong FUN_146dfbdc4(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_d8 [32];
  uint local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined1 local_94 [4];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar17 = (longlong *)(param_1 + 0x28);
  lVar14 = param_1 + 0x38;
  local_68 = (longlong *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar14;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar15 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar17;
  if ((iStack_54 == iVar15) && (uStack_60 == lVar14)) {
    uVar6 = 0;
LAB_146dfbe69:
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar6 & 0xffffff01;
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_a8 = param_1 + 0x100;
  uVar4 = 0;
  local_b8 = uVar2;
LAB_146dfbedd:
  local_68 = *(longlong **)(*local_90 + (longlong)iStack_74 * 0x10);
  uVar6 = uVar4;
  if (local_68 != (longlong *)0x0) {
    lVar11 = *(longlong *)(*local_68 + 0x608);
    lVar9 = (longlong)(int)local_68[1] * 0x50;
    plVar1 = local_68;
    if (*(int *)(lVar11 + 8 + lVar9) != *(int *)(lVar11 + 0x34 + lVar9)) {
      plVar8 = (longlong *)(lVar11 + lVar9);
      plVar10 = plVar8 + 7;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar8[8];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar8[9] - 1U & uVar2) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulonglong *)(*plVar8 + (longlong)iVar5 * 0x10) == param_2) {
            iVar5 = *(int *)(param_1 + 0xd0);
            iVar7 = *(int *)(param_1 + 0xfc);
            uVar6 = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (iVar5 == iVar7) goto LAB_146dfc1ef;
            uVar3 = ((uint)((ulonglong)local_68 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_68 >> 4)
                    ) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            lVar11 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar11 = local_a8;
            }
            iVar12 = *(int *)(lVar11 + (ulonglong)
                                       (*(int *)(param_1 + 0x110) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                                       4);
            if (iVar12 == -1) goto LAB_146dfbf41;
            goto LAB_146dfc0cc;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x10 + *plVar8 + 8);
        } while (iVar5 != -1);
      }
    }
    if (*(ulonglong *)(*(longlong *)(*local_68 + 200) + (longlong)(int)local_68[1] * 8) != param_2)
    goto LAB_146dfc1ef;
    iVar5 = *(int *)(param_1 + 0xd0);
    iVar7 = *(int *)(param_1 + 0xfc);
    goto LAB_146dfbf41;
  }
  goto LAB_146dfc1ef;
  while (iVar12 = *(int *)(lVar11 + 0x18), iVar12 != -1) {
LAB_146dfc0cc:
    lVar11 = *(longlong *)(param_1 + 200) + (longlong)iVar12 * 0x20;
    if (*(longlong **)(*(longlong *)(param_1 + 200) + (longlong)iVar12 * 0x20) == local_68) {
      if ((lVar11 + 8U & 0xfffffffffffffff7) != 0) {
        local_68 = (longlong *)0x0;
        uVar6 = uVar4;
        if ((longlong)*(int *)(lVar11 + 0x10) == 0) goto LAB_146dfc1ef;
        puVar13 = *(undefined8 **)(lVar11 + 8);
        lVar11 = (longlong)*(int *)(lVar11 + 0x10) << 3;
        goto LAB_146dfc018;
      }
      break;
    }
  }
LAB_146dfbf41:
  local_68 = plVar1;
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if (iVar5 != iVar7) {
    uVar3 = ((uint)((ulonglong)local_68 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_68 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar11 = *(longlong *)(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar11 = local_a8;
    }
    iVar5 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar3 >> 0x10 ^ uVar3))
                              * 4);
    if (iVar5 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 200) + (longlong)iVar5 * 0x20;
        if (*(longlong **)(*(longlong *)(param_1 + 200) + (longlong)iVar5 * 0x20) == local_68) {
          uVar2 = local_b8;
          if (((lVar11 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar5 = *(int *)(lVar11 + 0x10), (longlong)iVar5 != 0)) {
            lVar9 = *(longlong *)(lVar11 + 8);
            lVar16 = 0;
            local_b4 = iVar15;
            local_b0 = lVar14;
            local_a0 = plVar17;
            do {
              plVar17 = *(longlong **)(lVar9 + lVar16);
              if ((plVar17 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar17 + 0xc))) {
                *(undefined4 *)(*(longlong *)(*plVar17 + 0x638) + (longlong)(int)plVar17[1] * 4) =
                     0x7f7fffff;
                FUN_1402bf4a4(param_1,plVar17);
                *(undefined4 *)(*(longlong *)(*plVar17 + 0x650) + (longlong)(int)plVar17[1] * 4) =
                     *(undefined4 *)
                      (*(longlong *)(*plVar17 + 0x638) + (longlong)(int)plVar17[1] * 4);
              }
              plVar17 = local_a0;
              iVar15 = local_b4;
              lVar16 = lVar16 + 8;
            } while ((longlong)iVar5 * 8 != lVar16);
            lVar14 = local_b0;
            uVar2 = local_b8;
            if (0 < *(int *)(lVar11 + 0x10)) {
              FUN_140a3609c(param_1 + 0x398,local_94,&local_68,0);
              FUN_141491c98(param_1,local_68);
              lVar14 = local_b0;
              uVar2 = local_b8;
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar11 + 0x18);
        uVar2 = local_b8;
      } while (iVar5 != -1);
    }
  }
LAB_146dfc1ef:
  local_78 = local_78 & ~uStack_84;
  FUN_1449c0562(&local_88);
  uVar4 = uVar6 & 0xffffffff;
  unaff_RBP = uVar6;
  if (local_90 == plVar17 && (CONCAT44(uStack_7c,uStack_80) == lVar14 && iStack_74 == iVar15))
  goto LAB_146dfbe69;
  goto LAB_146dfbedd;
  while( true ) {
    puVar13 = puVar13 + 1;
    lVar11 = lVar11 + -8;
    uVar2 = local_b8;
    if (lVar11 == 0) break;
LAB_146dfc018:
    plVar1 = (longlong *)*puVar13;
    if (((*(ulonglong *)(*(longlong *)(*plVar1 + 200) + (longlong)(int)plVar1[1] * 8) == param_2) &&
        (plVar1 != (longlong *)0x0)) && (2 < *(byte *)((longlong)plVar1 + 0xc))) {
      uVar2 = local_b8;
      if (puVar13 != (undefined8 *)0x0) goto LAB_146dfbf41;
      break;
    }
  }
  goto LAB_146dfc1ef;
}



// FUNCTION 146dfc274 FUN_146dfc274 body=162 status=ok
// SIG undefined FUN_146dfc274(void)

void FUN_146dfc274(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_146e0fbae(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_146e0fc64(param_1,iVar1);
      }
      lVar2 = *param_1;
      lVar3 = (longlong)iVar1 * 0x50;
      *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x28 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      ((undefined8 *)(lVar2 + lVar3))[1] = 0;
      *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0xffffffff00000080;
      *(undefined4 *)(lVar2 + 0x34 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x40 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x48 + lVar3) = 0;
      FUN_146e0fcf8(lVar2 + lVar3,param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146dfc316 FUN_146dfc316 body=311 status=ok
// SIG undefined FUN_146dfc316(void)

void FUN_146dfc316(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  if (-1 < (int)(DAT_14c75f210 | DAT_14c75f214)) {
    if (DAT_14c75f214 - DAT_14c75f210 == 0 || (int)DAT_14c75f214 < (int)DAT_14c75f210) {
      fVar7 = 1.0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2c8);
      iVar4 = (*(int *)(lVar1 + 0x170) - DAT_14c75f210) + *(int *)(lVar1 + 0x1d8);
      iVar3 = 0;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      fVar8 = (float)iVar3 / (float)(int)(DAT_14c75f214 - DAT_14c75f210);
      fVar7 = 1.0;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8;
      }
    }
    if ((0 < (int)param_2[1]) && (iVar3 = (int)(fVar7 * (float)(int)param_2[1]), 0 < iVar3)) {
      iVar4 = 0;
      uVar6 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar1 = *(longlong *)(*param_2 + uVar6 * 8);
        if (lVar1 != 0) {
          FUN_14016dd2a(param_1,lVar1,1);
          FUN_1456cc230(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x2c8),lVar1,1);
          iVar2 = (int)param_2[1];
          if (~uVar5 + iVar2 != 0) {
            memmove((void *)(*param_2 + uVar6 * 8),(void *)(*param_2 + uVar6 * 8 + 8),
                    (longlong)(int)(~uVar5 + iVar2) << 3);
            iVar2 = (int)param_2[1];
          }
          iVar4 = iVar4 + 1;
          *(int *)(param_2 + 1) = iVar2 + -1;
          FUN_1400ca182(param_2);
          uVar5 = uVar5 - 1;
        }
      } while ((iVar4 < iVar3) &&
              (uVar6 = (ulonglong)(uVar5 + 1), (int)(uVar5 + 1) < (int)param_2[1]));
    }
  }
  return;
}



// FUNCTION 146dfc44e FUN_146dfc44e body=116 status=ok
// SIG undefined FUN_146dfc44e(void)

undefined2 * FUN_146dfc44e(undefined2 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146dfc4c2 FUN_146dfc4c2 body=38 status=ok
// SIG undefined FUN_146dfc4c2(void)

undefined8 FUN_146dfc4c2(undefined8 param_1,int param_2)

{
  FUN_14062cf90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146dfc4ee FUN_146dfc4ee body=38 status=ok
// SIG undefined FUN_146dfc4ee(void)

undefined8 FUN_146dfc4ee(undefined8 param_1,int param_2)

{
  FUN_140d9d984();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146dfc51c FUN_146dfc51c body=112 status=ok
// SIG undefined FUN_146dfc51c(void)

void FUN_146dfc51c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,8);
  }
  return;
}



// FUNCTION 146dfc58c FUN_146dfc58c body=112 status=ok
// SIG undefined FUN_146dfc58c(void)

void FUN_146dfc58c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,0x10);
  }
  return;
}



// FUNCTION 146dfc5fc FUN_146dfc5fc body=52 status=ok
// SIG undefined FUN_146dfc5fc(void)

void FUN_146dfc5fc(longlong *param_1)

{
  FUN_146dfc630();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146dfc630 FUN_146dfc630 body=89 status=ok
// SIG undefined FUN_146dfc630(void)

void FUN_146dfc630(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 146dfc68a FUN_146dfc68a body=209 status=ok
// SIG undefined FUN_146dfc68a(void)

int FUN_146dfc68a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 146dfc75c FUN_146dfc75c body=209 status=ok
// SIG undefined FUN_146dfc75c(void)

int FUN_146dfc75c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 146dfc82e FUN_146dfc82e body=63 status=ok
// SIG undefined FUN_146dfc82e(void)

void FUN_146dfc82e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146dfc86e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146dfc86e FUN_146dfc86e body=97 status=ok
// SIG undefined FUN_146dfc86e(void)

ulonglong FUN_146dfc86e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146dfc8cf FUN_146dfc8cf body=1514 status=ok
// SIG undefined FUN_146dfc8cf(void)

longlong * FUN_146dfc8cf(longlong *param_1,longlong *param_2,double *param_3,double param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_188 [36];
  uint local_164;
  longlong local_160;
  undefined1 local_158 [7];
  char local_151;
  double local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  int local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar13 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar13 < 2) {
    *param_1 = 0;
    pvVar1 = (void *)*param_2;
    *(uint *)(param_1 + 1) = uVar13;
    if (uVar13 != 0) {
      FUN_145ceb326(param_1,uVar13,0);
      memcpy((void *)*param_1,pvVar1,(longlong)(int)uVar13 * 0x18);
LAB_146dfcabe:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_188);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    uVar26 = SUB84(param_4,0);
    uVar27 = (undefined4)((ulonglong)param_4 >> 0x20);
    dVar23 = param_3[5] - param_3[2];
    dVar24 = param_3[4] - param_3[1];
    dVar25 = param_3[3] - *param_3;
    if ((dVar25 <= dVar24 || dVar25 <= dVar23) && (dVar25 = dVar24, dVar24 <= dVar23)) {
      dVar25 = dVar23;
    }
    if (dVar25 < param_4) {
      puVar2 = (undefined8 *)*param_2;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 1;
      FUN_145ceb326(param_1,1,0);
      puVar3 = (undefined8 *)*param_1;
      puVar3[2] = puVar2[2];
      uVar14 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar14;
      goto LAB_146dfcabe;
    }
    dVar25 = param_4 / 10.0;
    if (dVar25 <= 0.0009999999310821295) {
      dVar25 = 0.0009999999310821295;
    }
    dVar24 = *param_3 - dVar25;
    *param_3 = dVar24;
    dVar6 = param_3[1] - dVar25;
    param_3[1] = dVar6;
    dVar23 = param_3[2] - dVar25;
    param_3[2] = dVar23;
    dVar9 = param_3[3] + dVar25;
    param_3[3] = dVar9;
    dVar8 = param_3[4] + dVar25;
    param_3[4] = dVar8;
    dVar25 = dVar25 + param_3[5];
    param_3[5] = dVar25;
    dVar25 = dVar25 - dVar23;
    dVar8 = dVar8 - dVar6;
    dVar9 = dVar9 - dVar24;
    dVar7 = dVar9;
    if ((dVar9 <= dVar8 || dVar9 <= dVar25) && (dVar7 = dVar8, dVar8 <= dVar25)) {
      dVar7 = dVar25;
    }
    *param_1 = 0;
    iVar12 = (int)param_2[1];
    pvVar1 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar12;
    if ((longlong)iVar12 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ceb326(param_1,iVar12,0);
      memcpy((void *)*param_1,pvVar1,(longlong)iVar12 * 0x18);
    }
    local_118 = 0;
    local_110 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_10c = 0xffffffff00000080;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    FUN_146dfcec0(&local_138,uVar13);
    iVar12 = 1;
    if (3 < uVar13) {
      uVar11 = (uVar13 | 1) + 0xe;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      iVar12 = 1 << ((byte)iVar12 & 0x1f);
    }
    if ((local_f0 == 0) || (local_f0 < iVar12)) {
      local_f0 = iVar12;
      FUN_1403d5990();
    }
    local_148 = 0;
    uStack_140 = 0;
    uVar14 = FUN_14481578e(&local_148,uVar13);
    if (param_4 <= 9.999999747378752e-05) {
      uVar26 = 0xe0000000;
      uVar27 = 0x3f1a36e2;
    }
    auVar19._0_8_ = dVar7 / (double)CONCAT44(uVar27,uVar26);
    auVar19._8_8_ = 0;
    auVar19 = roundsd(auVar19,auVar19,9);
    lVar15 = (longlong)auVar19._0_8_;
    dVar7 = dVar7 / (double)lVar15;
    dVar5 = (double)lVar15 * 0.5;
    uVar14 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    uVar13 = 0;
    local_160 = lVar15;
    do {
      local_164 = (uint)uVar14;
      bVar18 = (longlong)uStack_140 < 0;
      uStack_140 = uStack_140 & 0xffffffff00000000;
      if (bVar18) {
        FUN_14481578e(&local_148,0);
      }
      FUN_146c917f4(&local_138);
      if (0 < (int)param_1[1]) {
        dVar10 = (double)((ulonglong)uVar13 << 0x20) * dVar7 * -0.5 + 0.0;
        lVar16 = 0x10;
        lVar17 = 0;
        do {
          lVar4 = *param_1;
          auVar20._0_8_ =
               ((*(double *)(lVar4 + lVar16) - (dVar23 + dVar25 * 0.5)) - dVar10) / dVar7 + dVar5;
          auVar20._8_8_ = 0;
          auVar19 = roundpd(auVar20,auVar20,1);
          auVar21._8_8_ = 0;
          auVar21._0_8_ =
               ((*(double *)(lVar4 + -8 + lVar16) - (dVar6 + dVar8 * 0.5)) - dVar10) / dVar7 + dVar5
          ;
          auVar20 = roundpd(auVar21,auVar21,1);
          auVar22._8_8_ = 0;
          auVar22._0_8_ =
               ((*(double *)(lVar4 + -0x10 + lVar16) - (dVar24 + dVar9 * 0.5)) - dVar10) / dVar7 +
               dVar5;
          auVar21 = roundpd(auVar22,auVar22,1);
          local_150 = (double)(((longlong)auVar21._0_8_ * lVar15 + (longlong)auVar20._0_8_) * lVar15
                              + (longlong)auVar19._0_8_);
          local_151 = '\0';
          FUN_146c91cd4(&local_138,local_158,&local_150,&local_151);
          if (local_151 == '\x01') {
            lVar15 = (longlong)(int)uStack_140;
            uVar13 = (int)uStack_140 + 1;
            uStack_140 = CONCAT44(uStack_140._4_4_,uVar13);
            if (uStack_140._4_4_ < uVar13) {
              FUN_1446f48e2(&local_148);
            }
            *(int *)(local_148 + lVar15 * 4) = (int)lVar17;
            lVar15 = local_160;
          }
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x18;
        } while (lVar17 < (int)param_1[1]);
      }
      for (lVar16 = (longlong)(int)uStack_140; lVar16 != 0; lVar16 = lVar16 + -1) {
        uVar13 = *(uint *)(local_148 + -4 + lVar16 * 4);
        iVar12 = (int)param_1[1];
        if (~uVar13 + iVar12 != 0) {
          memmove((void *)(*param_1 + (longlong)(int)uVar13 * 0x18),
                  (void *)(*param_1 + (longlong)(int)uVar13 * 0x18 + 0x18),
                  (longlong)(int)(~uVar13 + iVar12) * 0x18);
          iVar12 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar12 + -1;
        FUN_1411223a0(param_1);
      }
      uVar14 = 0;
      uVar13 = 0x3ff00000;
    } while ((local_164 & 1) != 0);
    FUN_146ca6f88(param_1,(int)param_1[1],1);
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    FUN_145c09b70(&local_138);
  }
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146dfcec0 FUN_146dfcec0 body=428 status=ok
// SIG undefined FUN_146dfcec0(void)

void FUN_146dfcec0(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146dfd06e FUN_146dfd06e body=187 status=ok
// SIG undefined FUN_146dfd06e(void)

void FUN_146dfd06e(undefined8 *param_1,undefined8 **param_2,longlong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_3 + 0x28) & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**param_2 + 0xa0);
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146dfd0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_2,param_3,UNRECOVERED_JUMPTABLE);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  (**(code **)*param_1)(param_1,&local_28);
  if (&local_28 != param_2) {
    puVar1 = *param_2;
    *param_2 = local_28;
    local_28 = (undefined8 *)0x0;
    if (puVar1 == (undefined8 *)0x0) goto LAB_146dfd105;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
LAB_146dfd105:
  (**(code **)(**param_2 + 0xa0))(*param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 146dfd134 FUN_146dfd134 body=56 status=ok
// SIG undefined FUN_146dfd134(void)

undefined8 * FUN_146dfd134(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x180,0x10);
  FUN_146e046dc(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146dfd16e FUN_146dfd16e body=235 status=ok
// SIG undefined FUN_146dfd16e(void)

void FUN_146dfd16e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = 0;
  plVar5 = (longlong *)(param_1 + 0x118);
  do {
    plVar3 = (longlong *)(param_1 + 0x18 + lVar7 * 0x20);
    FUN_146e04ec1(param_2,plVar3);
    FUN_144a67fb4(param_2,param_1 + 0x18 + lVar7 * 0x20 + 0x10);
    if (((*(byte *)(param_2 + 0x28) & 1) != 0) && ((longlong)(int)plVar3[1] != 0)) {
      plVar4 = (longlong *)*plVar3;
      plVar3 = plVar4 + (longlong)(int)plVar3[1] * 2;
      do {
        lVar2 = *plVar4;
        cVar1 = *(char *)(lVar2 + 0xd);
        plVar6 = plVar5;
        if ((lVar2 == 0 || cVar1 != '\x01') &&
           (plVar6 = (longlong *)(param_1 + 0x138), lVar2 == 0 || cVar1 != '\0')) {
          plVar6 = plVar5;
          if (cVar1 == '\x02') {
            plVar6 = (longlong *)(param_1 + 0x158);
          }
          if (lVar2 == 0) {
            plVar6 = plVar5;
          }
        }
        *(longlong *)(*plVar6 + (ulonglong)*(ushort *)(plVar4 + 1) * 8) = lVar2;
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar3);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  return;
}



// FUNCTION 146dfd26c FUN_146dfd26c body=322 status=ok
// SIG undefined FUN_146dfd26c(void)

void FUN_146dfd26c(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar1) {
    uVar8 = 0;
    do {
      iVar5 = 0;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x40 + uVar8 * 0x48) == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x1a0);
        iVar2 = *(int *)(lVar3 + uVar8 * 4);
        lVar6 = (longlong)iVar2;
        if (iVar2 < *(int *)(lVar3 + 4 + uVar8 * 4)) {
          lVar4 = *(longlong *)(param_1 + 400);
          iVar5 = 0;
          do {
            lVar7 = (longlong)*(int *)(lVar4 + lVar6 * 4);
            if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x40 + lVar7 * 0x48) == '\0') {
              if ((longlong)uVar8 < lVar7) {
                iVar2 = *(int *)(param_1 + 0x1b8);
                *(uint *)(param_1 + 0x1b8) = iVar2 + 1U;
                if (*(uint *)(param_1 + 0x1bc) < iVar2 + 1U) {
                  FUN_1400232c6(param_1 + 0x1b0,iVar2);
                }
                *(ulonglong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar2 * 8) =
                     (lVar7 << 0x20) + uVar8;
                lVar4 = *(longlong *)(param_1 + 400);
                lVar3 = *(longlong *)(param_1 + 0x1a0);
              }
              iVar5 = iVar5 + (uint)(uVar8 != *(uint *)(lVar4 + lVar6 * 4));
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar3 + 4 + uVar8 * 4));
        }
      }
      iVar2 = *(int *)(param_1 + 0x1b8);
      *(uint *)(param_1 + 0x1b8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1bc) < iVar2 + 1U) {
        FUN_1400232c6(param_1 + 0x1b0,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar2 * 8) = (uVar8 << 0x20) + uVar8
      ;
      *(int *)(*(longlong *)(param_1 + 0x1c0) + uVar8 * 4) = iVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != (longlong)iVar1);
  }
  return;
}



// FUNCTION 146dfd3ae FUN_146dfd3ae body=149 status=ok
// SIG undefined FUN_146dfd3ae(void)

void FUN_146dfd3ae(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      lVar6 = lVar3 * 0x70;
      bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + lVar6 + 0x6c) =
             bVar1 & 0xfd |
             *(char *)(*(longlong *)(param_1 + 0x20) + 0x40 +
                      (longlong)*(int *)(lVar4 + lVar6 + 0x60) * 0x48) * '\x02';
        lVar4 = *(longlong *)(param_1 + 0x10);
        if ((*(byte *)(lVar4 + 0x6c + lVar6) & 2) != 0) {
          iVar5 = *(int *)(lVar6 + lVar4 + 0x68);
          while (iVar5 != -1) {
            lVar6 = (longlong)iVar5 * 0x70;
            bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
            if ((bVar1 & 2) != 0) break;
            *(byte *)(lVar4 + lVar6 + 0x6c) = bVar1 | 2;
            lVar4 = *(longlong *)(param_1 + 0x10);
            iVar5 = *(int *)(lVar4 + 0x68 + lVar6);
          }
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != iVar2);
  }
  return;
}



// FUNCTION 146dfd456 FUN_146dfd456 body=556 status=ok
// SIG undefined FUN_146dfd456(void)

void FUN_146dfd456(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *unaff_RBP;
  longlong lVar12;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(int *)(param_1 + 0x44) != -1)) {
    plVar1 = (longlong *)(param_1 + 0x198);
    FUN_144a1a59e(plVar1,*(int *)(param_1 + 0x28) + 1,0);
    plVar2 = (longlong *)(param_1 + 0x1b8);
    FUN_144a1a59e(plVar2,*(undefined4 *)(param_1 + 0x28),0);
    plVar3 = (longlong *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(int *)(param_1 + 0x1b4) < 0) {
      FUN_146dedcd2(plVar3,0);
    }
    if (param_2 == '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      if (0 < (longlong)iVar5) {
        unaff_RBP = (undefined1 *)0x0;
        lVar10 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x1b0);
          *(uint *)(param_1 + 0x1b0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1b4) < iVar6 + 1U) {
            FUN_1400232c6(plVar3,iVar6);
          }
          *(undefined1 **)(*plVar3 + (longlong)iVar6 * 8) = unaff_RBP;
          *(undefined4 *)(*plVar2 + lVar10 * 4) = 1;
          lVar10 = lVar10 + 1;
          unaff_RBP = &DAT_100000001 + (longlong)unaff_RBP;
        } while (iVar5 != lVar10);
      }
    }
    else {
      FUN_146dfd682(param_1);
      FUN_146dfd79c(param_1);
    }
    FUN_146dfd818(param_1,(longlong)*(int *)(param_1 + 0x44) * 0x70 + *(longlong *)(param_1 + 0x10),
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_2) & 0xffffffff);
    **(undefined4 **)(param_1 + 0x198) = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar5) {
      lVar10 = 0;
      do {
        *(int *)(*plVar1 + 4 + lVar10 * 4) =
             *(int *)(*plVar2 + lVar10 * 4) + *(int *)(*plVar1 + lVar10 * 4);
        *(undefined4 *)(*plVar2 + lVar10 * 4) = *(undefined4 *)(*plVar1 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while (iVar5 != lVar10);
    }
    plVar1 = (longlong *)(param_1 + 0x188);
    FUN_144a1a59e(plVar1,*(undefined4 *)
                          (*(longlong *)(param_1 + 0x198) +
                          (longlong)(*(int *)(param_1 + 0x1a0) + -1) * 4),0);
    iVar5 = *(int *)(param_1 + 0x1b0);
    if ((longlong)iVar5 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1a8);
      lVar11 = 0;
      do {
        iVar6 = *(int *)(lVar10 + lVar11);
        iVar7 = *(int *)(lVar10 + 4 + lVar11);
        iVar8 = *(int *)(*plVar2 + (longlong)iVar6 * 4);
        *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar8 + 1;
        if (iVar6 == iVar7) {
          *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar6;
        }
        else {
          *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar7;
          uVar9 = *(undefined4 *)(lVar10 + lVar11);
          lVar12 = (longlong)*(int *)(lVar10 + 4 + lVar11);
          iVar6 = *(int *)(*plVar2 + lVar12 * 4);
          *(int *)(*plVar2 + lVar12 * 4) = iVar6 + 1;
          *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4) = uVar9;
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar5 * 8 != lVar11);
    }
    if ((param_2 != '\0') && (iVar5 = *(int *)(param_1 + 0x18), 0 < (longlong)iVar5)) {
      lVar10 = 0;
      do {
        pbVar4 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar10);
        *pbVar4 = *pbVar4 & 0xfd;
        lVar10 = lVar10 + 0x70;
      } while ((longlong)iVar5 * 0x70 - lVar10 != 0);
    }
  }
  return;
}



// FUNCTION 146dfd682 FUN_146dfd682 body=282 status=ok
// SIG undefined FUN_146dfd682(void)

void FUN_146dfd682(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < (longlong)iVar1) {
    uVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x198);
      iVar2 = *(int *)(lVar4 + uVar9 * 4);
      lVar7 = (longlong)iVar2;
      iVar6 = 0;
      if (iVar2 < *(int *)(lVar4 + 4 + uVar9 * 4)) {
        lVar5 = *(longlong *)(param_1 + 0x188);
        iVar6 = 0;
        do {
          uVar3 = *(uint *)(lVar5 + lVar7 * 4);
          uVar8 = (ulonglong)(int)uVar3;
          if ((longlong)uVar9 < (longlong)uVar8) {
            iVar2 = *(int *)(param_1 + 0x1b0);
            *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
              FUN_1400232c6(param_1 + 0x1a8,iVar2);
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) =
                 ((ulonglong)uVar3 << 0x20) + uVar9;
            lVar5 = *(longlong *)(param_1 + 0x188);
            lVar4 = *(longlong *)(param_1 + 0x198);
            uVar8 = (ulonglong)*(uint *)(lVar5 + lVar7 * 4);
          }
          iVar6 = iVar6 + (uint)(uVar9 != (uVar8 & 0xffffffff));
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar4 + 4 + uVar9 * 4));
      }
      iVar2 = *(int *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
        FUN_1400232c6(param_1 + 0x1a8,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) = (uVar9 << 0x20) + uVar9
      ;
      *(int *)(*(longlong *)(param_1 + 0x1b8) + uVar9 * 4) = iVar6 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != (longlong)iVar1);
  }
  return;
}



// FUNCTION 146dfd79c FUN_146dfd79c body=123 status=ok
// SIG undefined FUN_146dfd79c(void)

void FUN_146dfd79c(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      lVar6 = lVar3 * 0x70;
      bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + lVar6 + 0x6c) = bVar1 & 0xfd;
        lVar4 = *(longlong *)(param_1 + 0x10);
        if ((*(byte *)(lVar4 + 0x6c + lVar6) & 2) != 0) {
          iVar5 = *(int *)(lVar6 + lVar4 + 0x68);
          while (iVar5 != -1) {
            lVar6 = (longlong)iVar5 * 0x70;
            bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
            if ((bVar1 & 2) != 0) break;
            *(byte *)(lVar4 + lVar6 + 0x6c) = bVar1 | 2;
            lVar4 = *(longlong *)(param_1 + 0x10);
            iVar5 = *(int *)(lVar4 + 0x68 + lVar6);
          }
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != iVar2);
  }
  return;
}



// FUNCTION 146dfd818 FUN_146dfd818 body=122 status=ok
// SIG undefined FUN_146dfd818(void)

void FUN_146dfd818(longlong param_1,longlong param_2,undefined4 param_3)

{
  if ((*(byte *)(param_2 + 0x6c) & 1) == 0) {
    FUN_146dfd818(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10))
    ;
    FUN_146dfd818(param_1,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_3);
    FUN_146dfd892(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2 + 0x30,(char)param_3);
  }
  return;
}



// FUNCTION 146dfd892 FUN_146dfd892 body=547 status=ok
// SIG undefined FUN_146dfd892(void)

void FUN_146dfd892(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,char param_6)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  char local_a0;
  double local_98 [6];
  double local_68 [3];
  double local_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  while( true ) {
    while( true ) {
      if (((param_6 != '\0') && ((*(byte *)(param_2 + 0x6c) & 2) == 0)) &&
         ((*(byte *)(param_4 + 0x6c) & 2) == 0)) goto LAB_146dfd95a;
      lVar8 = 0;
      do {
        dVar4 = *(double *)(param_3 + lVar8 * 8);
        pdVar2 = (double *)(param_5 + 0x18 + lVar8 * 8);
        if (*pdVar2 <= dVar4 && dVar4 != *pdVar2) goto LAB_146dfd95a;
        dVar4 = *(double *)(param_5 + lVar8 * 8);
        pdVar2 = (double *)(param_3 + 0x18 + lVar8 * 8);
        if (*pdVar2 <= dVar4 && dVar4 != *pdVar2) goto LAB_146dfd95a;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      if ((*(byte *)(param_2 + 0x6c) & 1) != 0) break;
      local_a0 = param_6;
      local_a8 = param_5;
      FUN_146dfd892(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 +
                            *(longlong *)(param_1 + 0x10),param_2,param_4);
      param_3 = param_2 + 0x30;
      param_2 = (longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
    }
    if ((*(byte *)(param_4 + 0x6c) & 1) != 0) break;
    local_a0 = param_6;
    local_a8 = param_4;
    FUN_146dfd892(param_1,param_2,param_3,
                  (longlong)*(int *)(param_4 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10));
    param_5 = param_4 + 0x30;
    param_4 = (longlong)*(int *)(param_4 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
  }
  if (param_6 == '\0') {
    iVar5 = *(int *)(param_2 + 0x60);
    iVar6 = *(int *)(param_4 + 0x60);
    lVar8 = *(longlong *)(param_1 + 0x20);
    lVar9 = (longlong)iVar5 * 200;
    local_68[2] = (double)*(undefined8 *)(lVar8 + 0x30 + lVar9);
    puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar9);
    local_68[0] = (double)*puVar3;
    local_68[1] = (double)puVar3[1];
    puVar3 = (undefined8 *)(lVar8 + 0x38 + lVar9);
    local_50[0] = (double)*puVar3;
    local_50[1] = (double)puVar3[1];
    local_50[2] = (double)*(undefined8 *)(lVar8 + 0x48 + lVar9);
    lVar9 = (longlong)iVar6 * 200;
    local_98[2] = (double)*(undefined8 *)(lVar8 + 0x30 + lVar9);
    pdVar2 = (double *)(lVar8 + 0x20 + lVar9);
    local_98[0] = *pdVar2;
    local_98[1] = pdVar2[1];
    puVar3 = (undefined8 *)(lVar8 + 0x38 + lVar9);
    local_98[3] = (double)*puVar3;
    local_98[4] = (double)puVar3[1];
    local_98[5] = (double)*(undefined8 *)(lVar8 + 0x48 + lVar9);
    lVar8 = 0;
    do {
      if (local_98[lVar8 + 3] <= local_98[lVar8 + 6] && local_98[lVar8 + 6] != local_98[lVar8 + 3])
      goto LAB_146dfd95a;
      if (local_98[lVar8 + 9] <= local_98[lVar8] && local_98[lVar8] != local_98[lVar8 + 9])
      goto LAB_146dfd95a;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    iVar7 = *(int *)(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x1b0) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x1b4) < iVar7 + 1U) {
      FUN_1400232c6(param_1 + 0x1a8,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar7 * 8) = CONCAT44(iVar6,iVar5);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar5 * 4);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar6 * 4);
    *piVar1 = *piVar1 + 1;
  }
LAB_146dfd95a:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dfdab6 FUN_146dfdab6 body=259 status=ok
// SIG undefined FUN_146dfdab6(void)

undefined8 FUN_146dfdab6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146dfdb23:
      if (*(int *)(param_1 + 0xc0) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146dfdb23;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146dfdbba(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x38));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146dfdbba FUN_146dfdbba body=595 status=ok
// SIG undefined FUN_146dfdbba(void)

ulonglong FUN_146dfdbba(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  char cVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8 [4];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar8 = param_2[7];
  dVar9 = param_2[8];
  dVar1 = param_2[9];
  dVar10 = param_2[10];
  dVar2 = param_2[0xb];
  dVar3 = param_2[0xc];
  cVar5 = FUN_14473ffaa(param_2,*param_1);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar5 == '\0') {
    pdVar4 = (double *)param_1[7];
    local_b8[2] = pdVar4[2];
    local_b8[0] = *pdVar4;
    local_b8[1] = pdVar4[1];
    pdVar4 = (double *)param_1[1];
    local_f8[0] = dVar8 - *pdVar4;
    local_f8[1] = dVar9 - pdVar4[1];
    local_f8[2] = dVar1 - pdVar4[2];
    local_98[0] = dVar10 - *pdVar4;
    local_98[1] = dVar2 - pdVar4[1];
    local_98[2] = dVar3 - pdVar4[2];
    lVar6 = 0;
    dVar9 = 1.79769313486232e+308;
    dVar8 = 0.0;
    do {
      if (*(char *)(*(longlong *)param_1[8] + lVar6) == '\x01') {
        if (0.0 < local_f8[lVar6]) goto LAB_146dfdc44;
        dVar10 = 0.0;
        dVar1 = 1.79769313486232e+308;
        if (local_98[lVar6] <= 0.0 && local_98[lVar6] != 0.0) goto LAB_146dfdc44;
      }
      else {
        dVar10 = local_f8[lVar6] * local_b8[lVar6];
        dVar1 = local_b8[lVar6] * local_98[lVar6];
      }
      dVar2 = dVar1;
      if (dVar10 <= dVar1) {
        dVar2 = dVar10;
      }
      if (dVar8 <= dVar2) {
        dVar8 = dVar2;
      }
      if (dVar10 <= dVar1) {
        dVar10 = dVar1;
      }
      if (dVar10 <= dVar9) {
        dVar9 = dVar10;
      }
      if (dVar9 < dVar8) goto LAB_146dfdc44;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    if ((dVar8 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar9)) {
      *(double *)param_1[3] = dVar8;
      local_c8 = param_2[6];
      local_f8[0] = *param_2;
      local_f8[1] = param_2[1];
      local_f8[2] = param_2[2];
      local_f8[3] = param_2[3];
      local_d8 = param_2[4];
      dStack_d0 = param_2[5];
      cVar5 = (**(code **)(**(longlong **)*param_1 + 0x10))
                        (*(longlong **)*param_1,local_f8,param_1[2]);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
    }
  }
LAB_146dfdc44:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146dfde0e FUN_146dfde0e body=172 status=ok
// SIG undefined FUN_146dfde0e(void)

undefined8 FUN_146dfde0e(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x18] != puVar3[0x23]) {
    puVar5 = puVar3 + 0x24;
    if (*(uint **)(puVar3 + 0x26) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x26);
    }
    uVar4 = puVar5[puVar3[0x28] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x16);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146dfdeba FUN_146dfdeba body=131 status=ok
// SIG undefined FUN_146dfdeba(void)

void FUN_146dfdeba(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146dfdf3e(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146dfdf3e FUN_146dfdf3e body=145 status=ok
// SIG undefined FUN_146dfdf3e(void)

void FUN_146dfdf3e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146dfdfd0 FUN_146dfdfd0 body=4584 status=ok
// SIG undefined FUN_146dfdfd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146dfdfd0(longlong param_1,double *param_2,double *param_3,double *param_4,
                       double *param_5,double *param_6,undefined1 (*param_7) [16],double *param_8,
                       longlong param_9)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar21;
  byte bVar22;
  uint uVar23;
  double **ppdVar24;
  longlong lVar25;
  uint uVar26;
  double **unaff_RBP;
  longlong lVar27;
  undefined8 *puVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  int iVar37;
  ulonglong uVar38;
  bool bVar39;
  ulonglong uVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  double dVar95;
  double dVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  double *pdVar101;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar102 [16];
  double dVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double *pdVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auStack_1258 [32];
  double *local_1238;
  double *local_1230;
  undefined1 (*local_1228) [16];
  double *local_1220;
  longlong local_1218;
  double local_1208;
  double dStack_1200;
  undefined1 local_11f8 [16];
  undefined1 local_11e8 [16];
  longlong local_11d8;
  longlong local_11d0;
  double local_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b0 [9];
  longlong local_1168;
  double *local_1160;
  double local_1158 [5];
  double dStack_1130;
  double local_1128;
  double local_1118 [4];
  double *local_10f8 [4];
  double *local_10d8;
  double *pdStack_10d0;
  undefined1 (*local_10c8) [16];
  double *local_10c0;
  undefined8 *local_10b8;
  double **local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1258;
  local_1158[3] = 0.0;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    ppdVar24 = *(double ***)(param_1 + 0x108);
    unaff_RBP = ppdVar24 + (longlong)*(int *)(param_1 + 0x110) * 0xd;
    do {
      cVar21 = FUN_14473ffaa(ppdVar24,param_6);
      if (cVar21 == '\0') {
        local_1158[0] = *param_8;
        local_1158[1] = param_8[1];
        local_1158[2] = param_8[2];
        dVar49 = *param_2;
        unaff_XMM10._8_8_ = 0;
        unaff_XMM10._0_8_ = dVar49;
        local_10f8[0] = (double *)((double)ppdVar24[7] - dVar49);
        local_10f8[1] = (double *)((double)ppdVar24[8] - param_2[1]);
        local_10f8[2] = (double *)((double)ppdVar24[9] - param_2[2]);
        local_1118[0] = (double)ppdVar24[10] - dVar49;
        local_1118[1] = (double)ppdVar24[0xb] - param_2[1];
        local_1118[2] = (double)ppdVar24[0xc] - param_2[2];
        dVar49 = 0.0;
        lVar31 = 0;
        dVar96 = 1.79769313486232e+308;
        do {
          if (*(char *)(param_9 + lVar31) == '\x01') {
            if (0.0 < (double)local_10f8[lVar31]) goto LAB_146dfe0c3;
            dVar63 = 0.0;
            dVar69 = 1.79769313486232e+308;
            if (local_1118[lVar31] <= 0.0 && local_1118[lVar31] != 0.0) goto LAB_146dfe0c3;
          }
          else {
            dVar63 = (double)local_10f8[lVar31] * local_1158[lVar31];
            dVar69 = local_1158[lVar31] * local_1118[lVar31];
          }
          dVar41 = dVar69;
          if (dVar63 <= dVar69) {
            dVar41 = dVar63;
          }
          if (dVar49 <= dVar41) {
            dVar49 = dVar41;
          }
          if (dVar63 <= dVar69) {
            dVar63 = dVar69;
          }
          if (dVar63 <= dVar96) {
            dVar96 = dVar63;
          }
          if (dVar96 < dVar49) goto LAB_146dfe0c3;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        if ((dVar49 <= param_3[4]) && (0.0 <= dVar96)) {
          local_10c8 = (undefined1 (*) [16])ppdVar24[6];
          local_10f8[0] = *ppdVar24;
          local_10f8[1] = ppdVar24[1];
          local_10f8[2] = ppdVar24[2];
          local_10f8[3] = ppdVar24[3];
          local_10d8 = ppdVar24[4];
          pdStack_10d0 = ppdVar24[5];
          local_1158[3] = dVar49;
          cVar21 = (**(code **)(*(longlong *)*param_6 + 0x10))
                             ((longlong *)*param_6,local_10f8,param_3);
          if (cVar21 == '\0') goto LAB_146dfe267;
        }
      }
LAB_146dfe0c3:
      ppdVar24 = ppdVar24 + 0xd;
    } while (ppdVar24 != unaff_RBP);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    local_10f8[0] = param_6;
    local_10f8[1] = param_2;
    local_10f8[2] = param_3;
    local_10f8[3] = local_1158 + 3;
    local_10d8 = param_5;
    pdStack_10d0 = param_4;
    local_10c8 = param_7;
    local_10c0 = param_8;
    local_10b8 = &param_9;
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      dVar49 = *(double *)(param_1 + 200);
      if ((((0.0 < dVar49) && (0 < (longlong)*(int *)(param_1 + 0xd8))) &&
          (0 < *(int *)(param_1 + 0xdc))) &&
         ((0 < *(int *)(param_1 + 0xe0) && (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x58)))))
      {
        dVar96 = *(double *)(param_1 + 0xd0);
        if (((dVar96 != 0.0) || (NAN(dVar96))) &&
           (dVar63 = param_3[4], dVar63 <= 1.8446744073709552e+19)) {
          dVar69 = *param_2;
          uVar93 = 0;
          uVar94 = 0;
          dVar41 = param_2[1];
          uVar91 = 0;
          uVar92 = 0;
          dVar70 = ABS(param_2[2]);
          dVar103 = ABS(dVar69);
          if (ABS(dVar69) <= ABS(dVar41)) {
            dVar103 = ABS(dVar41);
          }
          if (dVar103 <= dVar70) {
            dVar103 = dVar70;
          }
          unaff_XMM10._8_8_ = 0;
          unaff_XMM10._0_8_ = dVar103;
          if (dVar103 < 9.223372036854776e+18 / dVar96) {
            pdVar1 = (double *)*param_3;
            dVar71 = pdVar1[1] * dVar63 + dVar41;
            dVar80 = *pdVar1 * dVar63 + dVar69;
            dVar70 = ABS(param_2[2] + pdVar1[2] * dVar63);
            unaff_XMM10._0_8_ = ABS(dVar71);
            unaff_XMM10._8_8_ = 0;
            dVar103 = ABS(dVar80);
            if (dVar103 <= unaff_XMM10._0_8_) {
              dVar103 = unaff_XMM10._0_8_;
            }
            if (dVar103 <= dVar70) {
              dVar103 = dVar70;
            }
            if (dVar103 < 9.223372036854776e+18 / dVar96) {
              auVar97._8_8_ = 0;
              auVar97._0_8_ = ABS(dVar96 * dVar69) * 2.220446049250313e-16 + dVar96 * dVar69;
              auVar98 = roundpd(auVar97,auVar97,1);
              unaff_RBP = (double **)(longlong)auVar98._0_8_;
              unaff_XMM10._0_8_ = ABS(dVar96 * dVar41) * 2.220446049250313e-16 + dVar96 * dVar41;
              unaff_XMM10._8_8_ = 0;
              auVar99._8_8_ = 0;
              auVar99._0_8_ = unaff_XMM10._0_8_;
              auVar98 = roundpd(auVar99,auVar99,1);
              lVar27 = (longlong)auVar98._0_8_;
              dVar80 = dVar80 * dVar96;
              auVar81._8_8_ = 0;
              auVar81._0_8_ = ABS(dVar80) * 2.220446049250313e-16 + dVar80;
              auVar81 = roundpd(auVar81,auVar81,1);
              dVar71 = dVar71 * dVar96;
              auVar98._8_8_ = 0;
              auVar98._0_8_ = ABS(dVar71) * 2.220446049250313e-16 + dVar71;
              auVar98 = roundpd(auVar98,auVar98,1);
              lVar35 = (longlong)unaff_RBP - (longlong)auVar81._0_8_;
              lVar31 = -lVar35;
              if (lVar31 < 0) {
                lVar31 = lVar35;
              }
              lVar36 = lVar27 - (longlong)auVar98._0_8_;
              lVar35 = -lVar36;
              if (lVar35 < 0) {
                lVar35 = lVar36;
              }
              if ((ulonglong)(lVar35 + lVar31) <= (ulonglong)(longlong)*(int *)(param_1 + 0xd8)) {
                local_1160 = local_1118;
                local_1118[0] = 0.0;
                local_1118[1] = 0.0;
                dVar41 = dVar41 - (double)lVar27 * dVar49;
                dVar69 = dVar69 - (double)(longlong)unaff_RBP * dVar49;
                dVar70 = dVar63 * pdVar1[1] + dVar41;
                dVar103 = *pdVar1 * dVar63 + dVar69;
                dVar80 = dVar103 - dVar69;
                dVar71 = dVar70 - dVar41;
                dVar63 = ABS(dVar80);
                unaff_XMM10._0_8_ = ABS(dVar71);
                unaff_XMM10._8_8_ = 0;
                local_1168 = param_1;
                if ((9.99999993922529e-09 < dVar63) || (9.99999993922529e-09 < unaff_XMM10._0_8_)) {
                  dVar103 = ((double)(longlong)unaff_RBP * dVar49 + dVar103) * dVar96;
                  auVar108._0_8_ = ABS(dVar103) * 2.220446049250313e-16 + dVar103;
                  auVar108._8_8_ = 0;
                  auVar81 = roundpd(auVar108,auVar108,1);
                  dVar96 = ((double)lVar27 * dVar49 + dVar70) * dVar96;
                  auVar88._8_8_ = 0;
                  auVar88._0_8_ = ABS(dVar96) * 2.220446049250313e-16 + dVar96;
                  auVar98 = roundpd(auVar88,auVar88,1);
                  uVar34 = -(uint)(dVar80 < 0.0) | 1;
                  uVar23 = -(uint)(dVar71 < 0.0) | 1;
                  if (unaff_XMM10._0_8_ <= dVar63) {
                    local_11c8 = (double)(int)uVar34;
                    local_1208 = (double)(-(ulonglong)(9.99999993922529e-09 < unaff_XMM10._0_8_) &
                                          (ulonglong)((dVar80 * local_11c8) / dVar71) |
                                         ~-(ulonglong)(9.99999993922529e-09 < unaff_XMM10._0_8_) &
                                         0x3ff0000000000000);
                  }
                  else {
                    local_1208 = (double)(int)uVar23;
                    local_11c8 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar63) &
                                          (ulonglong)((dVar71 * local_1208) / dVar80) |
                                         ~-(ulonglong)(9.99999993922529e-09 < dVar63) &
                                         0x3ff0000000000000);
                  }
                  local_11d0 = -((longlong)unaff_RBP + ((ulonglong)(dVar80 < 0.0) - 1));
                  local_11d8 = -(lVar27 + -1 + (ulonglong)(dVar71 < 0.0));
                  lVar35 = (longlong)(int)uVar34;
                  lVar31 = (longlong)(int)uVar23;
                  uStack_11c0 = 0;
                  dVar103 = 1.0 / local_11c8;
                  dStack_1200 = 0.0;
                  dVar96 = 1.0 / local_1208;
                  local_11e8._0_8_ = (longlong)auVar81._0_8_ * lVar35;
                  local_11f8._0_8_ = (longlong)auVar98._0_8_ * lVar31;
                  do {
                    uVar23 = ((uint)unaff_RBP & 0xff00) << 8 | (uint)unaff_RBP & 0xff;
                    uVar23 = (uVar23 << 4 | uVar23) & 0xf0f0f0f;
                    uVar23 = (uVar23 * 4 | uVar23) & 0x33333333;
                    uVar34 = ((uint)lVar27 & 0xff00) << 8 | (uint)lVar27 & 0xff;
                    uVar34 = (uVar34 << 4 | uVar34) & 0xf0f0f0f;
                    uVar34 = (uVar34 * 4 | uVar34) & 0x33333333;
                    FUN_146dff512(&local_1168,
                                  (uVar34 * 2 | uVar34 * 4) & 0xaaaaaaaa |
                                  (uVar23 * 2 | uVar23) & 0x55555555);
                    dVar70 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < dVar63) {
                      dVar70 = ((double)(local_11d0 + (longlong)unaff_RBP) * dVar49 - dVar69) *
                               local_11c8;
                    }
                    dVar71 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < unaff_XMM10._0_8_) {
                      dVar71 = ((double)(local_11d8 + lVar27) * dVar49 - dVar41) * local_1208;
                    }
                    lVar25 = lVar35;
                    lVar36 = 0;
                    if (dVar71 < dVar70) {
                      lVar25 = 0;
                      lVar36 = lVar31;
                    }
                    unaff_RBP = (double **)((longlong)unaff_RBP + lVar25);
                    if ((longlong)unaff_RBP * lVar35 - local_11e8._0_8_ != 0 &&
                        (longlong)local_11e8._0_8_ <= (longlong)unaff_RBP * lVar35) break;
                    lVar27 = lVar27 + lVar36;
                    dVar70 = (double)(~-(ulonglong)(dVar71 < dVar70) & (ulonglong)dVar70 |
                                     (ulonglong)dVar71 & -(ulonglong)(dVar71 < dVar70));
                    auVar47._0_8_ =
                         (ulonglong)(dVar70 * dVar103 + dVar69) &
                         -(ulonglong)(9.99999993922529e-09 < dVar63);
                    auVar47._8_8_ = 0;
                    auVar56._0_8_ = ~-(ulonglong)(9.99999993922529e-09 < dVar63) & (ulonglong)dVar69
                    ;
                    auVar56._12_4_ = uVar94;
                    auVar56._8_4_ = uVar93;
                    auVar56 = auVar56 | auVar47;
                    auVar62._0_8_ =
                         (ulonglong)(dVar70 * dVar96 + dVar41) &
                         -(ulonglong)(9.99999993922529e-09 < unaff_XMM10._0_8_);
                    auVar62._8_8_ = 0;
                    auVar48._0_8_ =
                         ~-(ulonglong)(9.99999993922529e-09 < unaff_XMM10._0_8_) & (ulonglong)dVar41
                    ;
                    auVar48._12_4_ = uVar92;
                    auVar48._8_4_ = uVar91;
                    auVar48 = auVar48 | auVar62;
                    dVar41 = auVar48._0_8_;
                    uVar91 = auVar48._8_4_;
                    uVar92 = auVar48._12_4_;
                    dVar69 = auVar56._0_8_;
                    uVar93 = auVar56._8_4_;
                    uVar94 = auVar56._12_4_;
                  } while (lVar27 * lVar31 - local_11f8._0_8_ == 0 ||
                           lVar27 * lVar31 < (longlong)local_11f8._0_8_);
                }
                else {
                  uVar23 = ((uint)unaff_RBP & 0xff00) << 8 | (uint)unaff_RBP & 0xff;
                  unaff_RBP = (double **)(ulonglong)uVar23;
                  uVar23 = (uVar23 << 4 | uVar23) & 0xf0f0f0f;
                  uVar34 = (uVar23 * 4 | uVar23) & 0x33333333;
                  uVar23 = ((uint)lVar27 & 0xff00) << 8 | (uint)lVar27 & 0xff;
                  uVar23 = (uVar23 << 4 | uVar23) & 0xf0f0f0f;
                  uVar23 = (uVar23 * 4 | uVar23) & 0x33333333;
                  FUN_146dff512(&local_1168,
                                (uVar23 * 2 | uVar23 * 4) & 0xaaaaaaaa |
                                (uVar34 * 2 | uVar34) & 0x55555555);
                }
                ppdVar24 = local_10f8;
                puVar28 = local_11b0;
                for (lVar31 = 9; lVar31 != 0; lVar31 = lVar31 + -1) {
                  *puVar28 = *ppdVar24;
                  ppdVar24 = ppdVar24 + 1;
                  puVar28 = puVar28 + 1;
                }
                cVar21 = FUN_146dff1ba(param_1,local_1118);
                if (local_1118[0] != 0.0) {
                  FUN_1400020a8();
                }
                goto joined_r0x000146dfecdb;
              }
            }
          }
        }
      }
      lVar31 = *(longlong *)(param_1 + 0x30);
      lVar27 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x68;
      do {
        cVar21 = FUN_146dff2be(local_10f8,lVar31);
        if (cVar21 == '\0') goto LAB_146dfe267;
        lVar31 = lVar31 + 0x68;
        lVar27 = lVar27 + -0x68;
      } while (lVar27 != 0);
    }
  }
  else {
    local_1218 = param_9;
    local_1220 = param_8;
    local_1228 = param_7;
    local_1230 = param_6;
    local_1238 = param_5;
    cVar21 = FUN_146dfdfd0(*(longlong *)(param_1 + 0xc0),param_2,param_3,param_4);
joined_r0x000146dfecdb:
    if (cVar21 == '\0') {
LAB_146dfe267:
      unaff_RBP = (double **)0x0;
      goto LAB_146dfec02;
    }
  }
  local_108 = (double **)0x0;
  local_100 = 0xff00000000;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    iVar32 = *(int *)(param_1 + 0x44);
    if (iVar32 != -1) {
LAB_146dfe570:
      local_100 = 0xff00000001;
      local_10f8[0] = (double *)CONCAT44(local_10f8[0]._4_4_,iVar32);
      local_10f8[1] = (double *)0x0;
    }
  }
  else {
    iVar32 = 0;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_146dfe570;
  }
  dVar69 = *param_2;
  dVar41 = param_2[1];
  auVar98 = *param_7;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *(double *)param_7[1];
  auVar81 = divpd(_DAT_149934d80,auVar98);
  bVar2 = ABS(auVar98._0_8_) < 1e-08;
  dVar70 = (double)-(ulonglong)bVar2;
  bVar3 = ABS(auVar98._8_8_) < 1e-08;
  dVar80 = (double)-(ulonglong)bVar3;
  dVar71 = (double)-(ulonglong)(ABS(*(double *)param_7[1]) < 1e-08);
  auVar98 = divpd(_DAT_149934d80,auVar42);
  auVar64._8_4_ = 0xffffffff;
  auVar64._0_8_ = 0xffffffffffffffff;
  auVar64._12_4_ = 0xffffffff;
  uVar12 = CONCAT44((float)dVar80,(float)dVar70) ^ 0xffffffffffffffff;
  local_11e8._8_8_ = auVar64._8_8_;
  uVar57 = ~CONCAT44((float)dVar80,(float)dVar70) &
           CONCAT44((float)auVar81._8_8_,(float)auVar81._0_8_);
  local_1208 = (double)(float)uVar57;
  dStack_1200 = (double)(float)(uVar57 >> 0x20);
  local_11e8._0_8_ = CONCAT44(0xffc00000,(float)dVar71) ^ 0xffffffffffffffff;
  uVar57 = ~CONCAT44(0xffc00000,(float)dVar71) & CONCAT44((float)auVar98._8_8_,(float)auVar98._0_8_)
  ;
  local_11f8._0_8_ = (undefined8)(float)uVar57;
  local_11f8._8_8_ = (undefined8)(float)(uVar57 >> 0x20);
  dVar49 = param_2[2];
  dVar96 = param_3[4];
  dVar63 = param_3[4];
  uVar91 = SUB84(dVar63,0);
  uVar92 = (undefined4)((ulonglong)dVar63 >> 0x20);
  dVar63 = local_1208;
  dVar103 = dStack_1200;
LAB_146dfe637:
  uVar57 = local_100;
  dVar100 = dStack_1200;
  dVar95 = local_1208;
  uVar23 = (uint)local_100;
  lVar31 = (longlong)(int)(uint)local_100;
  unaff_RBP = (double **)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar31 == 0);
  if (lVar31 == 0) goto LAB_146dfebf8;
  ppdVar24 = local_108;
  if (local_108 == (double **)0x0) {
    ppdVar24 = local_10f8;
  }
  iVar32 = (uint)local_100 * 0x10;
  uVar38 = lVar31 - 1;
  iVar37 = (int)uVar38;
  uVar34 = local_100._4_4_;
  local_100 = CONCAT44(local_100._4_4_,iVar37);
  bVar22 = 6;
  if ((double)ppdVar24[lVar31 * 2 + -1] < param_3[4] ||
      (double)ppdVar24[lVar31 * 2 + -1] == param_3[4]) {
    lVar27 = *(longlong *)(param_1 + 0x10);
    lVar31 = (longlong)*(int *)(ppdVar24 + lVar31 * 2 + -2) * 0x70;
    pdVar1 = (double *)(lVar27 + lVar31);
    if ((*(byte *)(lVar27 + 0x6c + lVar31) & 1) == 0) {
      auVar72._8_8_ = 0;
      auVar72._0_8_ = -(ulonglong)(dVar49 < pdVar1[2] || pdVar1[5] < dVar49);
      auVar82._0_8_ = -(ulonglong)((pdVar1[3] < dVar69 || dVar69 < *pdVar1) && bVar2);
      auVar82._8_8_ = -(ulonglong)((pdVar1[4] < dVar41 || dVar41 < pdVar1[1]) && bVar3);
      uVar26 = movmskpd((int)lVar27,auVar82);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = dVar71;
      auVar8._12_4_ = 0xffffffff;
      iVar29 = movmskpd((int)lVar31,auVar72 & auVar8);
      uVar30 = iVar29 << 2 | uVar26;
      if (uVar30 == 0) {
        uVar40 = CONCAT44((float)((pdVar1[1] - dVar41) * dVar103),
                          (float)((*pdVar1 - dVar69) * dVar63)) & uVar12;
        auVar58._0_8_ = (double)(float)uVar40;
        auVar58._8_8_ = (double)(float)(uVar40 >> 0x20);
        uVar40 = CONCAT44((float)((double)local_11f8._8_8_ * 0.0),
                          (float)((pdVar1[2] - dVar49) * (double)local_11f8._0_8_)) &
                 local_11e8._0_8_;
        auVar65._0_8_ = (double)(float)uVar40;
        auVar65._8_8_ = (double)(float)(uVar40 >> 0x20);
        auVar50._0_8_ = (pdVar1[3] - dVar69) * dVar63;
        auVar50._8_8_ = (pdVar1[4] - dVar41) * dVar103;
        auVar43._8_8_ = dVar80;
        auVar43._0_8_ = dVar70;
        auVar17._8_4_ = uVar91;
        auVar17._0_8_ = dVar96;
        auVar17._12_4_ = uVar92;
        auVar98 = blendvpd(auVar50,auVar17,auVar43);
        auVar74._0_8_ = (pdVar1[5] - dVar49) * (double)local_11f8._0_8_;
        auVar74._8_8_ = (double)local_11f8._8_8_ * 0.0;
        auVar44._8_8_ = 0xffffffffffffffff;
        auVar44._0_8_ = dVar71;
        auVar18._8_4_ = uVar91;
        auVar18._0_8_ = dVar96;
        auVar18._12_4_ = uVar92;
        auVar97 = blendvpd(auVar74,auVar18,auVar44);
        auVar102._8_8_ = auVar58._8_8_;
        auVar102._0_8_ = auVar58._0_8_;
        auVar88 = minpd(auVar102,auVar98);
        auVar84._8_8_ = auVar65._8_8_;
        auVar84._0_8_ = auVar65._0_8_;
        auVar99 = minpd(auVar84,auVar97);
        auVar81 = maxpd(auVar58,auVar98);
        auVar97 = maxpd(auVar65,auVar97);
        auVar85._0_8_ = auVar99._0_8_;
        auVar51._8_8_ = auVar99._8_8_;
        auVar51._0_8_ = auVar88._0_8_;
        auVar75._8_8_ = auVar85._0_8_;
        auVar75._0_8_ = auVar88._8_8_;
        auVar104._8_8_ = auVar99._8_8_;
        auVar104._0_8_ = auVar88._8_8_;
        auVar85._8_8_ = auVar88._0_8_;
        auVar88 = maxpd(auVar88,auVar75);
        auVar98 = maxpd(auVar99,auVar51);
        auVar98 = maxpd(auVar98,auVar104);
        auVar99 = maxpd(auVar88,auVar85);
        auVar66._0_8_ = auVar97._0_8_;
        auVar52._8_8_ = auVar97._8_8_;
        auVar52._0_8_ = auVar81._0_8_;
        auVar76._8_8_ = auVar66._0_8_;
        auVar76._0_8_ = auVar81._8_8_;
        auVar105._8_8_ = auVar97._8_8_;
        auVar105._0_8_ = auVar81._8_8_;
        auVar66._8_8_ = auVar81._0_8_;
        auVar81 = minpd(auVar81,auVar76);
        auVar97 = minpd(auVar97,auVar52);
        auVar97 = minpd(auVar97,auVar105);
        auVar81 = minpd(auVar81,auVar66);
        auVar98 = maxpd(auVar98,ZEXT816(0));
        auVar19._8_4_ = uVar91;
        auVar19._0_8_ = dVar96;
        auVar19._12_4_ = uVar92;
        auVar97 = minpd(auVar97,auVar19);
        auVar86._8_8_ = -(ulonglong)(auVar97._8_8_ < auVar98._8_8_);
        auVar86._0_8_ = -(ulonglong)(auVar97._0_8_ < auVar98._0_8_);
        unaff_XMM10 = maxpd(auVar99,ZEXT816(0));
        auVar20._8_4_ = uVar91;
        auVar20._0_8_ = dVar96;
        auVar20._12_4_ = uVar92;
        auVar98 = minpd(auVar81,auVar20);
        auVar59._8_8_ = -(ulonglong)(auVar98._8_8_ < unaff_XMM10._8_8_);
        auVar59._0_8_ = -(ulonglong)(auVar98._0_8_ < unaff_XMM10._0_8_);
        uVar30 = movmskpd(uVar26,auVar59);
        iVar29 = movmskpd(0,auVar86);
        uVar30 = iVar29 << 2 | uVar30;
        bVar39 = uVar30 == 0;
      }
      else {
        bVar39 = false;
      }
      pdVar101 = unaff_XMM10._0_8_;
      dVar4 = SUB168(*(undefined1 (*) [16])(pdVar1 + 6),0);
      dVar6 = SUB168(*(undefined1 (*) [16])(pdVar1 + 6),8);
      dVar5 = SUB168(*(undefined1 (*) [16])(pdVar1 + 9),0);
      dVar7 = SUB168(*(undefined1 (*) [16])(pdVar1 + 9),8);
      auVar73._8_8_ = 0;
      auVar73._0_8_ = -(ulonglong)(dVar49 < pdVar1[8] || pdVar1[0xb] < dVar49);
      auVar83._0_8_ = -(ulonglong)((dVar5 < dVar69 || dVar69 < dVar4) && bVar2);
      auVar83._8_8_ = -(ulonglong)((dVar7 < dVar41 || dVar41 < dVar6) && bVar3);
      iVar29 = movmskpd(uVar30,auVar83);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = dVar71;
      auVar9._12_4_ = 0xffffffff;
      uVar26 = movmskpd(iVar32,auVar73 & auVar9);
      if ((uVar26 & 0x3fffffff) == 0 && iVar29 == 0) {
        auVar53._0_8_ = (dVar5 - dVar69) * dVar63;
        auVar53._8_8_ = (dVar7 - dVar41) * dVar103;
        uVar40 = CONCAT44((float)((dVar6 - dVar41) * dVar103),(float)((dVar4 - dVar69) * dVar63)) &
                 uVar12;
        auVar60._0_8_ = (double)(float)uVar40;
        auVar60._8_8_ = (double)(float)(uVar40 >> 0x20);
        auVar77._0_8_ = (pdVar1[0xb] - dVar49) * (double)local_11f8._0_8_;
        auVar77._8_8_ = (double)local_11f8._8_8_ * 0.0;
        uVar40 = CONCAT44((float)((double)local_11f8._8_8_ * 0.0),
                          (float)((pdVar1[8] - dVar49) * (double)local_11f8._0_8_)) &
                 local_11e8._0_8_;
        auVar67._0_8_ = (double)(float)uVar40;
        auVar67._8_8_ = (double)(float)(uVar40 >> 0x20);
        auVar45._8_8_ = dVar80;
        auVar45._0_8_ = dVar70;
        auVar13._8_4_ = uVar91;
        auVar13._0_8_ = dVar96;
        auVar13._12_4_ = uVar92;
        auVar98 = blendvpd(auVar53,auVar13,auVar45);
        auVar46._8_8_ = 0xffffffffffffffff;
        auVar46._0_8_ = dVar71;
        auVar14._8_4_ = uVar91;
        auVar14._0_8_ = dVar96;
        auVar14._12_4_ = uVar92;
        auVar97 = blendvpd(auVar77,auVar14,auVar46);
        auVar107._8_8_ = auVar60._8_8_;
        auVar107._0_8_ = auVar60._0_8_;
        auVar108 = minpd(auVar107,auVar98);
        auVar87._8_8_ = auVar67._8_8_;
        auVar87._0_8_ = auVar67._0_8_;
        auVar88 = minpd(auVar87,auVar97);
        auVar81 = maxpd(auVar60,auVar98);
        auVar99 = maxpd(auVar67,auVar97);
        auVar89._0_8_ = auVar88._0_8_;
        auVar54._8_8_ = auVar88._8_8_;
        auVar54._0_8_ = auVar108._0_8_;
        auVar78._8_8_ = auVar89._0_8_;
        auVar78._0_8_ = auVar108._8_8_;
        auVar89._8_8_ = auVar108._0_8_;
        auVar97 = maxpd(auVar108,auVar78);
        auVar98 = maxpd(auVar88,auVar54);
        auVar10._8_4_ = auVar88._8_4_;
        auVar10._0_8_ = auVar108._8_8_;
        auVar10._12_4_ = auVar88._12_4_;
        auVar98 = maxpd(auVar98,auVar10);
        auVar108 = maxpd(auVar97,auVar89);
        auVar68._0_8_ = auVar99._0_8_;
        auVar55._8_8_ = auVar99._8_8_;
        auVar55._0_8_ = auVar81._0_8_;
        auVar79._8_8_ = auVar68._0_8_;
        auVar79._0_8_ = auVar81._8_8_;
        auVar68._8_8_ = auVar81._0_8_;
        auVar97 = minpd(auVar81,auVar79);
        auVar88 = minpd(auVar99,auVar55);
        auVar11._8_4_ = auVar99._8_4_;
        auVar11._0_8_ = auVar81._8_8_;
        auVar11._12_4_ = auVar99._12_4_;
        auVar99 = minpd(auVar88,auVar11);
        auVar81 = minpd(auVar97,auVar68);
        auVar98 = maxpd(auVar98,ZEXT816(0));
        auVar15._8_4_ = uVar91;
        auVar15._0_8_ = dVar96;
        auVar15._12_4_ = uVar92;
        auVar97 = minpd(auVar99,auVar15);
        auVar90._8_8_ = -(ulonglong)(auVar97._8_8_ < auVar98._8_8_);
        auVar90._0_8_ = -(ulonglong)(auVar97._0_8_ < auVar98._0_8_);
        unaff_XMM10 = maxpd(auVar108,ZEXT816(0));
        auVar16._8_4_ = uVar91;
        auVar16._0_8_ = dVar96;
        auVar16._12_4_ = uVar92;
        auVar98 = minpd(auVar81,auVar16);
        pdVar106 = unaff_XMM10._0_8_;
        auVar61._8_8_ = -(ulonglong)(auVar98._8_8_ < unaff_XMM10._8_8_);
        auVar61._0_8_ = -(ulonglong)(auVar98._0_8_ < (double)pdVar106);
        iVar33 = movmskpd(0,auVar61);
        iVar32 = movmskpd(iVar29,auVar90);
        if (bVar39 && (iVar32 << 2 == 0 && iVar33 == 0)) {
          local_100 = uVar57;
          if ((double)pdVar106 <= (double)pdVar101) {
            uVar34 = *(uint *)(pdVar1 + 0xc);
            unaff_RBP = (double **)(ulonglong)uVar34;
            bVar39 = local_100._4_4_ < uVar23;
            if (bVar39) {
              FUN_146dff5be(local_10f8,uVar38 & 0xffffffff);
            }
            dVar100 = dStack_1200;
            dVar95 = local_1208;
            ppdVar24 = local_108;
            if (local_108 == (double **)0x0) {
              ppdVar24 = local_10f8;
            }
            *(uint *)(ppdVar24 + (longlong)iVar37 * 2) = uVar34;
            ppdVar24[(longlong)iVar37 * 2 + 1] = pdVar101;
            uVar93 = *(undefined4 *)((longlong)pdVar1 + 100);
            uVar38 = local_100 & 0xffffffff;
            uVar23 = (uint)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,uVar23);
            pdVar101 = pdVar106;
            if (local_100._4_4_ < uVar23) {
              FUN_146dff5be(local_10f8,uVar38);
            }
          }
          else {
            uVar34 = *(uint *)((longlong)pdVar1 + 100);
            unaff_RBP = (double **)(ulonglong)uVar34;
            bVar39 = local_100._4_4_ < uVar23;
            if (bVar39) {
              FUN_146dff5be(local_10f8,uVar38 & 0xffffffff);
            }
            dVar100 = dStack_1200;
            dVar95 = local_1208;
            ppdVar24 = local_108;
            if (local_108 == (double **)0x0) {
              ppdVar24 = local_10f8;
            }
            *(uint *)(ppdVar24 + uVar38 * 2) = uVar34;
            ppdVar24[uVar38 * 2 + 1] = pdVar106;
            uVar93 = *(undefined4 *)(pdVar1 + 0xc);
            uVar38 = local_100 & 0xffffffff;
            uVar23 = (uint)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,uVar23);
            if (local_100._4_4_ < uVar23) {
              FUN_146dff5be(local_10f8,uVar38);
            }
          }
        }
        else {
          if (bVar39) goto LAB_146dfe80c;
          dVar63 = local_1208;
          dVar103 = dStack_1200;
          if (iVar32 << 2 != 0 || iVar33 != 0) goto LAB_146dfe637;
          uVar93 = *(undefined4 *)((longlong)pdVar1 + 100);
          local_100 = uVar57;
          pdVar101 = pdVar106;
          if (uVar34 < uVar23) {
            unaff_RBP = local_10f8;
            FUN_146dff5be(unaff_RBP,uVar38 & 0xffffffff);
          }
        }
      }
      else {
        dVar95 = dVar63;
        dVar100 = dVar103;
        if (!bVar39) goto LAB_146dfe637;
LAB_146dfe80c:
        uVar93 = *(undefined4 *)(pdVar1 + 0xc);
        local_100 = uVar57;
        if (uVar34 < uVar23) {
          FUN_146dff5be(local_10f8,uVar38 & 0xffffffff);
        }
      }
      ppdVar24 = local_108;
      if (local_108 == (double **)0x0) {
        ppdVar24 = local_10f8;
      }
      *(undefined4 *)(ppdVar24 + (longlong)(int)uVar38 * 2) = uVar93;
      ppdVar24[(longlong)(int)uVar38 * 2 + 1] = pdVar101;
      dVar63 = dVar95;
      dVar103 = dVar100;
      goto LAB_146dfe637;
    }
    local_1158[4] = param_3[1];
    dStack_1130 = param_3[2];
    local_1128 = param_3[3];
    local_1238 = (double *)*param_3;
    local_1230 = local_1158 + 4;
    local_1228 = (undefined1 (*) [16])(param_3 + 6);
    local_1118[0] = dVar69;
    local_1118[1] = dVar41;
    local_1118[2] = dVar49;
    bVar22 = FUN_146cabd24((longlong)*(int *)(pdVar1 + 0xc) * 200 + *(longlong *)(param_1 + 0x20),
                           local_1118,param_3,param_6);
    bVar22 = bVar22 ^ 1;
  }
  if ((bVar22 == 6) || (bVar22 == 0)) goto LAB_146dfe637;
LAB_146dfebf8:
  if (local_108 != (double **)0x0) {
    FUN_1400020a8();
  }
LAB_146dfec02:
  if ((local_f0 ^ (ulonglong)auStack_1258) == DAT_14c707940) {
    return (ulonglong)unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146dff1ba FUN_146dff1ba body=259 status=ok
// SIG undefined FUN_146dff1ba(void)

undefined8 FUN_146dff1ba(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146dff227:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146dff227;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146dff2be(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146dff2be FUN_146dff2be body=595 status=ok
// SIG undefined FUN_146dff2be(void)

ulonglong FUN_146dff2be(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  char cVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8 [4];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar8 = param_2[7];
  dVar9 = param_2[8];
  dVar1 = param_2[9];
  dVar10 = param_2[10];
  dVar2 = param_2[0xb];
  dVar3 = param_2[0xc];
  cVar5 = FUN_14473ffaa(param_2,*param_1);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar5 == '\0') {
    pdVar4 = (double *)param_1[7];
    local_b8[2] = pdVar4[2];
    local_b8[0] = *pdVar4;
    local_b8[1] = pdVar4[1];
    pdVar4 = (double *)param_1[1];
    local_f8[0] = dVar8 - *pdVar4;
    local_f8[1] = dVar9 - pdVar4[1];
    local_f8[2] = dVar1 - pdVar4[2];
    local_98[0] = dVar10 - *pdVar4;
    local_98[1] = dVar2 - pdVar4[1];
    local_98[2] = dVar3 - pdVar4[2];
    lVar6 = 0;
    dVar9 = 1.79769313486232e+308;
    dVar8 = 0.0;
    do {
      if (*(char *)(*(longlong *)param_1[8] + lVar6) == '\x01') {
        if (0.0 < local_f8[lVar6]) goto LAB_146dff348;
        dVar10 = 0.0;
        dVar1 = 1.79769313486232e+308;
        if (local_98[lVar6] <= 0.0 && local_98[lVar6] != 0.0) goto LAB_146dff348;
      }
      else {
        dVar10 = local_f8[lVar6] * local_b8[lVar6];
        dVar1 = local_b8[lVar6] * local_98[lVar6];
      }
      dVar2 = dVar1;
      if (dVar10 <= dVar1) {
        dVar2 = dVar10;
      }
      if (dVar8 <= dVar2) {
        dVar8 = dVar2;
      }
      if (dVar10 <= dVar1) {
        dVar10 = dVar1;
      }
      if (dVar10 <= dVar9) {
        dVar9 = dVar10;
      }
      if (dVar9 < dVar8) goto LAB_146dff348;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    if ((dVar8 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar9)) {
      *(double *)param_1[3] = dVar8;
      local_c8 = param_2[6];
      local_f8[0] = *param_2;
      local_f8[1] = param_2[1];
      local_f8[2] = param_2[2];
      local_f8[3] = param_2[3];
      local_d8 = param_2[4];
      dStack_d0 = param_2[5];
      cVar5 = (**(code **)(**(longlong **)*param_1 + 0x10))
                        (*(longlong **)*param_1,local_f8,param_1[2]);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
    }
  }
LAB_146dff348:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146dff512 FUN_146dff512 body=172 status=ok
// SIG undefined FUN_146dff512(void)

undefined8 FUN_146dff512(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x16] != puVar3[0x21]) {
    puVar5 = puVar3 + 0x22;
    if (*(uint **)(puVar3 + 0x24) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x24);
    }
    uVar4 = puVar5[puVar3[0x26] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x14);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146dff5be FUN_146dff5be body=131 status=ok
// SIG undefined FUN_146dff5be(void)

void FUN_146dff5be(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146dff642(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146dff642 FUN_146dff642 body=145 status=ok
// SIG undefined FUN_146dff642(void)

void FUN_146dff642(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146dff6d3 FUN_146dff6d3 body=3767 status=ok
// SIG undefined FUN_146dff6d3(void)

void FUN_146dff6d3(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
                  double param_6,undefined8 *param_7)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_XMM3_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  ulonglong uStack_160;
  longlong local_158;
  double local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_178 = *param_3 * param_4;
  uStack_170 = 0;
  dVar3 = ABS(local_178);
  local_168 = param_4 * param_3[1];
  dVar21 = ABS(local_168);
  uStack_160 = in_XMM3_Qb;
  if ((9.99999993922529e-09 < dVar3) || (9.99999993922529e-09 < dVar21)) {
    local_128._8_4_ = (int)(in_XMM3_Qb & 0x7fffffffffffffff);
    local_128._0_8_ = dVar21;
    local_128._12_4_ = (int)((in_XMM3_Qb & 0x7fffffffffffffff) >> 0x20);
    if (dVar21 <= dVar3) {
      bVar12 = dVar3 <= 9.99999993922529e-09;
      local_108 = *param_7;
      uStack_100 = param_7[1];
      dVar22 = param_2[1] * param_6;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = ABS(dVar22) * 2.220446049250313e-16 + dVar22;
      auVar25 = roundpd(auVar25,auVar25,1);
      dVar22 = param_1[1];
      dVar23 = (double)(longlong)auVar25._0_8_ * param_5;
      dVar35 = param_2[1] - dVar23;
      bVar1 = 0.0 <= local_168;
      uVar5 = (ulonglong)(bVar1 || bVar12) - 1 | 1;
      dVar40 = dVar22;
      if (!bVar1 && !bVar12) {
        dVar40 = -dVar22;
      }
      dVar14 = *param_1;
      dVar43 = -dVar22;
      if (!bVar1 && !bVar12) {
        dVar43 = dVar22;
      }
      dVar43 = dVar43 + dVar35;
      dVar22 = dVar22 * (double)(int)uVar5;
      dVar22 = dVar22 + dVar22 + dVar43;
      dVar36 = (dVar23 + dVar22) * param_6;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
      auVar27 = roundpd(auVar27,auVar27,1);
      lVar9 = (longlong)auVar27._0_8_;
      dVar40 = (dVar40 + local_168 + dVar35 + dVar23) * param_6;
      auVar16._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar16._8_8_ = 0;
      auVar27 = roundpd(auVar16,auVar16,1);
      lVar4 = (longlong)auVar27._0_8_;
      local_1b0 = lVar9;
      if (lVar9 < lVar4) {
        local_1b0 = lVar4;
      }
      dVar40 = *param_2 * param_6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar20,auVar20,1);
      local_1a0 = (longlong)auVar27._0_8_;
      dVar40 = (double)local_1a0 * param_5;
      local_150 = *param_2 - dVar40;
      if (9.99999993922529e-09 < dVar3) {
        local_1b0 = lVar4;
      }
      bVar2 = 0.0 <= local_178;
      dVar35 = local_178 + local_150;
      local_1a8 = (ulonglong)(bVar2 || bVar12);
      uVar6 = local_1a8 - 1 | 1;
      dVar36 = (double)(int)uVar6;
      local_178 = (local_178 * dVar36) / local_168;
      local_168 = (double)-(ulonglong)(dVar21 <= 9.99999993922529e-09);
      uStack_170 = 0;
      uStack_160 = local_128._8_8_;
      dVar44 = dVar14;
      if (!bVar2 && !bVar12) {
        dVar44 = -dVar14;
      }
      local_188._0_8_ =
           ~(ulonglong)local_168 & (ulonglong)local_178 | (ulonglong)local_168 & 0x3ff0000000000000;
      local_188._8_8_ = 0;
      dVar41 = -dVar14;
      if (!bVar2 && !bVar12) {
        dVar41 = dVar14;
      }
      dVar41 = dVar41 + local_150;
      local_150 = dVar44 + local_150;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = ABS(local_150 * param_6) * 2.220446049250313e-16 + local_150 * param_6;
      auVar27 = roundpd(auVar32,auVar32,1);
      local_158 = (longlong)auVar27._0_8_;
      dVar14 = (dVar40 + dVar41) * param_6;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = ABS(dVar14) * 2.220446049250313e-16 + dVar14;
      auVar27 = roundpd(auVar33,auVar33,1);
      lVar8 = (longlong)auVar27._0_8_;
      dVar23 = (dVar23 + dVar43) * param_6;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = ABS(dVar23) * 2.220446049250313e-16 + dVar23;
      auVar27 = roundpd(auVar30,auVar30,1);
      local_1c0 = (longlong)auVar27._0_8_;
      param_6 = (dVar35 + dVar44 + dVar40) * param_6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar27 = roundpd(auVar18,auVar18,1);
      local_190 = (longlong)auVar27._0_8_;
      local_138 = local_1b0 * uVar5;
      local_198 = local_1a8 - local_1a0;
      local_1b8 = (ulonglong)(bVar1 || bVar12) - (longlong)auVar25._0_8_;
      dVar35 = 1.0 / dVar36;
      dVar40 = 1.0 / (double)local_188._0_8_;
      local_148 = uVar6 * local_158;
      local_140 = uVar6 * local_190;
      local_130 = uVar5 * uVar5;
      lVar4 = lVar8;
      dVar23 = dVar41;
      do {
        lVar11 = lVar9 * uVar5;
        if ((9.99999993922529e-09 < dVar21) && (lVar11 < local_138)) {
          dVar21 = ((double)(local_1b8 + lVar9) * param_5 - dVar22) * (double)local_188._0_8_;
          if (dVar21 < ((double)(local_198 + lVar8) * param_5 - dVar41) * dVar36) {
            dVar41 = dVar41 + dVar21 * dVar35;
            dVar22 = dVar22 + dVar21 * dVar40;
            lVar9 = lVar9 + uVar5;
            lVar11 = lVar9 * uVar5;
          }
        }
        lVar10 = local_1c0 * uVar5;
        if (lVar10 - lVar11 == 0 || lVar10 < lVar11) {
          lVar7 = local_1c0;
          do {
            lVar10 = lVar10 + local_130;
            FUN_146e00916(&local_108,(double)lVar8 * param_5,SUB84((double)lVar7 * param_5,0));
            lVar7 = lVar7 + uVar5;
          } while (lVar10 <= lVar11);
        }
        if (((double)local_128._0_8_ <= 9.99999993922529e-09) || (lVar9 == local_1b0)) {
          dVar21 = param_5 * dVar36;
        }
        else {
          dVar14 = ((double)(local_198 + lVar8) * param_5 - dVar41) * dVar36;
          dVar21 = dVar14 * dVar35;
          dVar22 = dVar22 + dVar14 * dVar40;
        }
        dVar41 = dVar41 + dVar21;
        lVar11 = local_190;
        if (lVar4 != local_190) {
          lVar11 = lVar4 - local_1a0;
          if ((longlong)(lVar11 * uVar6) < local_148) {
            dVar23 = dVar23 + param_5 * dVar36;
          }
          else {
            dVar21 = local_150;
            if (lVar11 != local_158) {
              dVar21 = dVar23;
            }
            dVar14 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < dVar3) {
              dVar14 = ((double)(longlong)(lVar11 + local_1a8) * param_5 - dVar21) * dVar36;
            }
            dVar23 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < (double)local_128._0_8_) {
              dVar23 = ((double)(local_1b8 + local_1c0) * param_5 - dVar43) * local_178;
            }
            uVar13 = 0;
            if (dVar23 < dVar14) {
              uVar13 = uVar5;
            }
            local_1c0 = local_1c0 + uVar13;
            dVar23 = (double)(-(ulonglong)(dVar3 <= 9.99999993922529e-09) & (ulonglong)dVar21 |
                             ~-(ulonglong)(dVar3 <= 9.99999993922529e-09) &
                             (ulonglong)(dVar14 * dVar35 + dVar21));
            dVar43 = (double)((ulonglong)dVar43 & (ulonglong)local_168 |
                             ~(ulonglong)local_168 & (ulonglong)(dVar14 * dVar40 + dVar43));
          }
          lVar11 = lVar4 + uVar6;
        }
        lVar8 = lVar8 + uVar6;
        lVar4 = lVar11;
        dVar21 = (double)local_128._0_8_;
      } while ((lVar9 != local_1b0) ||
              (lVar8 * uVar6 - local_140 == 0 || (longlong)(lVar8 * uVar6) < local_140));
    }
    else {
      bVar12 = dVar21 <= 9.99999993922529e-09;
      dVar22 = *param_2 * param_6;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ABS(dVar22) * 2.220446049250313e-16 + dVar22;
      auVar25 = roundpd(auVar28,auVar28,1);
      dVar22 = *param_1;
      dVar23 = (double)(longlong)auVar25._0_8_ * param_5;
      dVar35 = *param_2 - dVar23;
      bVar1 = 0.0 <= local_178;
      uVar5 = (ulonglong)(bVar1 || bVar12) - 1 | 1;
      dVar40 = dVar22;
      if (!bVar1 && !bVar12) {
        dVar40 = -dVar22;
      }
      dVar14 = param_1[1];
      dVar43 = -dVar22;
      if (!bVar1 && !bVar12) {
        dVar43 = dVar22;
      }
      dVar43 = dVar43 + dVar35;
      dVar22 = dVar22 * (double)(int)uVar5;
      dVar22 = dVar22 + dVar22 + dVar43;
      dVar36 = (dVar23 + dVar22) * param_6;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
      auVar27 = roundpd(auVar37,auVar37,1);
      lVar9 = (longlong)auVar27._0_8_;
      dVar40 = (dVar40 + local_178 + dVar35 + dVar23) * param_6;
      auVar38._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar38._8_8_ = 0;
      auVar27 = roundpd(auVar38,auVar38,1);
      lVar4 = (longlong)auVar27._0_8_;
      local_1b0 = lVar9;
      if (lVar9 < lVar4) {
        local_1b0 = lVar4;
      }
      dVar40 = param_2[1] * param_6;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar39,auVar39,1);
      local_1a0 = (longlong)auVar27._0_8_;
      dVar35 = (double)local_1a0 * param_5;
      dVar40 = param_2[1] - dVar35;
      if (9.99999993922529e-09 < dVar21) {
        local_1b0 = lVar4;
      }
      bVar2 = 0.0 <= local_168;
      dVar21 = local_168 + dVar40;
      local_1a8 = (ulonglong)(bVar2 || bVar12);
      uVar6 = local_1a8 - 1 | 1;
      dVar36 = (double)(int)uVar6;
      local_168 = (local_168 * dVar36) / local_178;
      uStack_110 = 0;
      local_178 = (double)-(ulonglong)(dVar3 <= 9.99999993922529e-09);
      local_188._8_8_ = in_XMM3_Qb;
      local_188._0_8_ = ~(ulonglong)local_178 & (ulonglong)local_168;
      uStack_170 = 0;
      uVar42 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (!bVar2 && !bVar12) {
        uVar42 = (undefined4)((ulonglong)-dVar14 >> 0x20);
      }
      local_188 = local_188 | ZEXT416((uint)((ulonglong)local_178 >> 0x20) & 0x3ff00000) << 0x20;
      dVar44 = -dVar14;
      if (!bVar2 && !bVar12) {
        dVar44 = dVar14;
      }
      local_150 = (double)CONCAT44(uVar42,SUB84(dVar14,0)) + dVar40;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = ABS(local_150 * param_6) * 2.220446049250313e-16 + local_150 * param_6;
      auVar27 = roundpd(auVar34,auVar34,1);
      local_158 = (longlong)auVar27._0_8_;
      dVar44 = dVar44 + dVar40;
      dVar40 = (dVar35 + dVar44) * param_6;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar31,auVar31,1);
      lVar8 = (longlong)auVar27._0_8_;
      dVar40 = (dVar23 + dVar43) * param_6;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar29,auVar29,1);
      local_1c0 = (longlong)auVar27._0_8_;
      param_6 = (dVar21 + (double)CONCAT44(uVar42,SUB84(dVar14,0)) + dVar35) * param_6;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar27 = roundpd(auVar17,auVar17,1);
      local_190 = (longlong)auVar27._0_8_;
      local_138 = local_1b0 * uVar5;
      local_198 = local_1a8 - local_1a0;
      local_1b8 = (ulonglong)(bVar1 || bVar12) - (longlong)auVar25._0_8_;
      dVar21 = 1.0 / dVar36;
      dVar23 = 1.0 / (double)local_188._0_8_;
      local_148 = uVar6 * local_158;
      local_140 = uVar6 * local_190;
      local_130 = uVar5 * uVar5;
      lVar4 = lVar8;
      local_118 = dVar3;
      dVar40 = dVar44;
      do {
        lVar11 = lVar9 * uVar5;
        if ((9.99999993922529e-09 < dVar3) && (lVar11 < local_138)) {
          dVar35 = ((double)(local_1b8 + lVar9) * param_5 - dVar22) * (double)local_188._0_8_;
          if (dVar35 < ((double)(local_198 + lVar8) * param_5 - dVar44) * dVar36) {
            dVar44 = dVar44 + dVar35 * dVar21;
            dVar22 = dVar22 + dVar35 * dVar23;
            lVar9 = lVar9 + uVar5;
            lVar11 = lVar9 * uVar5;
          }
        }
        lVar10 = local_1c0 * uVar5;
        if (lVar10 - lVar11 == 0 || lVar10 < lVar11) {
          lVar7 = local_1c0;
          do {
            lVar10 = lVar10 + local_130;
            FUN_146e00916(param_7,(double)lVar7 * param_5,SUB84((double)lVar8 * param_5,0));
            lVar7 = lVar7 + uVar5;
          } while (lVar10 <= lVar11);
        }
        if ((dVar3 <= 9.99999993922529e-09) || (lVar9 == local_1b0)) {
          dVar35 = param_5 * dVar36;
        }
        else {
          dVar14 = ((double)(local_198 + lVar8) * param_5 - dVar44) * dVar36;
          dVar35 = dVar14 * dVar21;
          dVar22 = dVar22 + dVar14 * dVar23;
        }
        dVar44 = dVar44 + dVar35;
        lVar11 = local_190;
        if (lVar4 != local_190) {
          lVar11 = lVar4 - local_1a0;
          if ((longlong)(lVar11 * uVar6) < local_148) {
            dVar40 = dVar40 + param_5 * dVar36;
          }
          else {
            dVar35 = local_150;
            if (lVar11 != local_158) {
              dVar35 = dVar40;
            }
            dVar14 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < local_128._0_8_) {
              dVar14 = ((double)(longlong)(lVar11 + local_1a8) * param_5 - dVar35) * dVar36;
            }
            dVar40 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < dVar3) {
              dVar40 = ((double)(local_1b8 + local_1c0) * param_5 - dVar43) * local_168;
            }
            uVar13 = 0;
            if (dVar40 < dVar14) {
              uVar13 = uVar5;
            }
            local_1c0 = local_1c0 + uVar13;
            uVar13 = -(ulonglong)(local_128._0_8_ <= 9.99999993922529e-09);
            dVar40 = (double)(uVar13 & (ulonglong)dVar35 |
                             ~uVar13 & (ulonglong)(dVar14 * dVar21 + dVar35));
            dVar43 = (double)((ulonglong)dVar43 & (ulonglong)local_178 |
                             ~(ulonglong)local_178 & (ulonglong)(dVar14 * dVar23 + dVar43));
          }
          lVar11 = lVar4 + uVar6;
        }
        lVar8 = lVar8 + uVar6;
        lVar4 = lVar11;
      } while ((lVar9 != local_1b0) ||
              (lVar8 * uVar6 - local_140 == 0 || (longlong)(lVar8 * uVar6) < local_140));
    }
  }
  else {
    dVar21 = (*param_2 - *param_1) * param_6;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
    auVar25 = roundpd(auVar24,auVar24,1);
    dVar21 = (*param_2 + *param_1) * param_6;
    auVar26._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
    auVar26._8_8_ = 0;
    auVar27 = roundpd(auVar26,auVar26,1);
    if ((longlong)auVar25._0_8_ <= (longlong)auVar27._0_8_) {
      dVar21 = (param_2[1] - param_1[1]) * param_6;
      auVar19._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
      auVar19._8_8_ = 0;
      auVar20 = roundpd(auVar19,auVar19,1);
      param_6 = (param_2[1] + param_1[1]) * param_6;
      auVar15._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar15._8_8_ = 0;
      auVar16 = roundpd(auVar15,auVar15,1);
      lVar4 = (longlong)auVar25._0_8_;
      do {
        if ((longlong)auVar20._0_8_ <= (longlong)auVar16._0_8_) {
          lVar9 = (longlong)auVar20._0_8_;
          do {
            FUN_146e00916(param_7,(double)lVar4 * param_5,SUB84((double)lVar9 * param_5,0));
            lVar9 = lVar9 + 1;
          } while ((longlong)auVar16._0_8_ + 1 != lVar9);
        }
        bVar12 = lVar4 != (longlong)auVar27._0_8_;
        lVar4 = lVar4 + 1;
      } while (bVar12);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e0058c FUN_146e0058c body=259 status=ok
// SIG undefined FUN_146e0058c(void)

undefined8 FUN_146e0058c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e005f9:
      if (*(int *)(param_1 + 0xc0) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e005f9;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e00690(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x38));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e00690 FUN_146e00690 body=644 status=ok
// SIG undefined FUN_146e00690(void)

ulonglong FUN_146e00690(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8 [4];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar9 = param_2[7];
  dVar10 = param_2[8];
  dVar1 = param_2[9];
  dVar11 = param_2[10];
  dVar2 = param_2[0xb];
  dVar3 = param_2[0xc];
  cVar6 = FUN_14473ffaa(param_2,*param_1);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar6 == '\0') {
    pdVar4 = (double *)param_1[7];
    local_b8[2] = pdVar4[2];
    local_b8[0] = *pdVar4;
    local_b8[1] = pdVar4[1];
    pdVar4 = (double *)param_1[5];
    pdVar5 = (double *)param_1[1];
    local_f8[0] = (dVar9 - *pdVar4) - *pdVar5;
    local_f8[1] = (dVar10 - pdVar4[1]) - pdVar5[1];
    local_f8[2] = (dVar1 - pdVar4[2]) - pdVar5[2];
    local_98[0] = (dVar11 + *pdVar4) - *pdVar5;
    local_98[1] = (dVar2 + pdVar4[1]) - pdVar5[1];
    local_98[2] = (dVar3 + pdVar4[2]) - pdVar5[2];
    lVar7 = 0;
    dVar10 = 1.79769313486232e+308;
    dVar9 = 0.0;
    do {
      if (*(char *)(*(longlong *)param_1[8] + lVar7) == '\x01') {
        if (0.0 < local_f8[lVar7]) goto LAB_146e0071a;
        dVar11 = 0.0;
        dVar1 = 1.79769313486232e+308;
        if (local_98[lVar7] <= 0.0 && local_98[lVar7] != 0.0) goto LAB_146e0071a;
      }
      else {
        dVar11 = local_f8[lVar7] * local_b8[lVar7];
        dVar1 = local_b8[lVar7] * local_98[lVar7];
      }
      dVar2 = dVar1;
      if (dVar11 <= dVar1) {
        dVar2 = dVar11;
      }
      if (dVar9 <= dVar2) {
        dVar9 = dVar2;
      }
      if (dVar11 <= dVar1) {
        dVar11 = dVar1;
      }
      if (dVar11 <= dVar10) {
        dVar10 = dVar11;
      }
      if (dVar10 < dVar9) goto LAB_146e0071a;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    if ((dVar9 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar10)) {
      *(double *)param_1[3] = dVar9;
      local_c8 = param_2[6];
      local_f8[0] = *param_2;
      local_f8[1] = param_2[1];
      local_f8[2] = param_2[2];
      local_f8[3] = param_2[3];
      local_d8 = param_2[4];
      dStack_d0 = param_2[5];
      cVar6 = (**(code **)(**(longlong **)*param_1 + 0x18))
                        (*(longlong **)*param_1,local_f8,param_1[2]);
      if (cVar6 == '\0') {
        uVar8 = 0;
      }
    }
  }
LAB_146e0071a:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146e00916 FUN_146e00916 body=410 status=ok
// SIG undefined FUN_146e00916(void)

void FUN_146e00916(longlong *param_1,double param_2,double param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c)) {
    param_2 = param_2 * *(double *)(lVar3 + 0xd8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = ABS(param_2) * 2.220446049250313e-16 + param_2;
    auVar9 = roundpd(auVar9,auVar9,1);
    param_3 = param_3 * *(double *)(lVar3 + 0xd8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = ABS(param_3) * 2.220446049250313e-16 + param_3;
    auVar8 = roundpd(auVar8,auVar8,1);
    uVar7 = (uint)(longlong)auVar9._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar5 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uint)(longlong)auVar8._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar7 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uVar7 * 2 | uVar7 * 4) & 0xaaaaaaaa | (uVar5 * 2 | uVar5) & 0x55555555;
    lVar6 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x98);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & uVar7) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar5 * 0x14);
        if (*puVar1 == uVar7) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return;
          }
          plVar4 = (longlong *)param_1[1];
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_146dedd8c(plVar4,iVar2);
          }
          lVar3 = *plVar4;
          *(uint *)(lVar3 + (longlong)iVar2 * 8) = puVar1[1];
          *(uint *)(lVar3 + 4 + (longlong)iVar2 * 8) = puVar1[2];
          return;
        }
        uVar5 = puVar1[3];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 146e00ab0 FUN_146e00ab0 body=131 status=ok
// SIG undefined FUN_146e00ab0(void)

void FUN_146e00ab0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e00b34(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e00b34 FUN_146e00b34 body=145 status=ok
// SIG undefined FUN_146e00b34(void)

void FUN_146e00b34(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e00bc6 FUN_146e00bc6 body=3077 status=ok
// SIG undefined FUN_146e00bc6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e00bc6(double param_1,double *param_2,undefined8 *param_3,double *param_4,
                       double *param_5,double *param_6,double *param_7,double *param_8,
                       double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  double **ppdVar14;
  ulonglong uVar15;
  int iVar16;
  double *pdVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  double **unaff_RDI;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_1258 [32];
  double *local_1238;
  double *local_1230;
  double *local_1228;
  double *local_1220;
  double *local_1218;
  double local_1208 [4];
  double local_11e8 [3];
  double *local_11d0 [9];
  double local_1188;
  double dStack_1180;
  double local_1178;
  double local_1168;
  double *local_1160;
  double local_1158 [8];
  double local_1118 [4];
  double *local_10f8 [4];
  double *local_10d8;
  double *pdStack_10d0;
  double *local_10c8;
  double *local_10c0;
  undefined8 *local_10b8;
  double **local_108;
  undefined8 local_100;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e00bdc;
  pdVar6 = (double *)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1258;
  local_1158[3] = 0.0;
  if ((longlong)*(int *)((longlong)param_1 + 0x110) != 0) {
    pdVar19 = *(double **)((longlong)param_1 + 0x108);
    pdVar17 = pdVar19 + (longlong)*(int *)((longlong)param_1 + 0x110) * 0xd;
    unaff_RDI = local_10f8;
    do {
      cVar11 = FUN_14473ffaa(pdVar19,param_6);
      if (cVar11 == '\0') {
        local_1158[0] = *param_8;
        local_1158[1] = param_8[1];
        local_1158[2] = param_8[2];
        pdVar6 = (double *)((pdVar19[7] - *param_4) - *param_2);
        local_10f8[0] = pdVar6;
        local_10f8[1] = (double *)((pdVar19[8] - param_4[1]) - param_2[1]);
        local_10f8[2] = (double *)((pdVar19[9] - param_4[2]) - param_2[2]);
        local_1118[0] = (pdVar19[10] + *param_4) - *param_2;
        local_1118[1] = (pdVar19[0xb] + param_4[1]) - param_2[1];
        local_1118[2] = (pdVar19[0xc] + param_4[2]) - param_2[2];
        uVar24 = 0;
        uVar25 = 0;
        lVar20 = 0;
        dVar27 = 1.79769313486232e+308;
        do {
          if (*(char *)((longlong)param_9 + lVar20) == '\x01') {
            if (0.0 < (double)local_10f8[lVar20]) goto LAB_146e00cba;
            dVar26 = 0.0;
            dVar28 = 1.79769313486232e+308;
            if (local_1118[lVar20] <= 0.0 && local_1118[lVar20] != 0.0) goto LAB_146e00cba;
          }
          else {
            dVar26 = (double)local_10f8[lVar20] * local_1158[lVar20];
            dVar28 = local_1158[lVar20] * local_1118[lVar20];
          }
          dVar29 = dVar28;
          if (dVar26 <= dVar28) {
            dVar29 = dVar26;
          }
          if ((double)CONCAT44(uVar25,uVar24) <= dVar29) {
            uVar24 = SUB84(dVar29,0);
            uVar25 = (undefined4)((ulonglong)dVar29 >> 0x20);
          }
          if (dVar26 <= dVar28) {
            dVar26 = dVar28;
          }
          if (dVar26 <= dVar27) {
            dVar27 = dVar26;
          }
          if (dVar27 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != dVar27
             ) goto LAB_146e00cba;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        if (((double)CONCAT44(uVar25,uVar24) < (double)param_3[4] ||
             (double)CONCAT44(uVar25,uVar24) == (double)param_3[4]) && (0.0 <= dVar27)) {
          local_1158[3] = (double)CONCAT44(uVar25,uVar24);
          local_10c8 = (double *)pdVar19[6];
          local_10f8[0] = (double *)*pdVar19;
          local_10f8[1] = (double *)pdVar19[1];
          local_10f8[2] = (double *)pdVar19[2];
          local_10f8[3] = (double *)pdVar19[3];
          local_10d8 = (double *)pdVar19[4];
          pdStack_10d0 = (double *)pdVar19[5];
          cVar11 = (**(code **)(*(longlong *)*param_6 + 0x18))
                             ((longlong *)*param_6,unaff_RDI,param_3);
          if (cVar11 == '\0') goto LAB_146e00e89;
        }
      }
LAB_146e00cba:
      pdVar19 = pdVar19 + 0xd;
    } while (pdVar19 != pdVar17);
  }
  if (*(longlong *)((longlong)param_1 + 0xc0) == 0) {
    local_10f8[0] = param_6;
    local_10f8[1] = param_2;
    local_10f8[2] = (double *)param_3;
    local_10f8[3] = local_1158 + 3;
    local_10d8 = param_5;
    pdStack_10d0 = param_4;
    local_10c8 = param_7;
    local_10c0 = param_8;
    local_10b8 = &param_9;
    if (0 < (int)*(uint *)((longlong)param_1 + 0x38)) {
      if (((((0.0 < (double)*(double **)((longlong)param_1 + 200)) &&
            (0 < (longlong)*(int *)((longlong)param_1 + 0xd8))) &&
           (0 < *(int *)((longlong)param_1 + 0xdc))) &&
          ((0 < *(int *)((longlong)param_1 + 0xe0) &&
           (*(int *)((longlong)param_1 + 0x84) < *(int *)((longlong)param_1 + 0x58))))) &&
         ((double)param_3[4] <= 1.8446744073709552e+19)) {
        pdVar19 = *(double **)((longlong)param_1 + 0xd0);
        dVar27 = *param_4;
        dVar28 = param_4[1];
        dVar26 = (dVar27 + dVar27) * (double)pdVar19;
        uVar15 = (ulonglong)dVar26;
        if (dVar27 <= dVar28) {
          dVar27 = dVar28;
        }
        dVar29 = (dVar28 + dVar28) * (double)pdVar19;
        uVar22 = (ulonglong)dVar29;
        dVar27 = (dVar27 + dVar27) * (double)pdVar19;
        uVar23 = (ulonglong)dVar27;
        dVar28 = (double)param_3[4] * (double)pdVar19;
        uVar21 = (ulonglong)dVar28;
        if ((((longlong)(dVar28 - 9.223372036854776e+18) & (longlong)uVar21 >> 0x3f | uVar21) + 2) *
            (((longlong)(dVar27 - 9.223372036854776e+18) & (longlong)uVar23 >> 0x3f | uVar23) + 2) +
            (((longlong)(dVar29 - 9.223372036854776e+18) & (longlong)uVar22 >> 0x3f | uVar22) + 2) *
            (((longlong)(dVar26 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f | uVar15) + 2)
            <= (ulonglong)(longlong)*(int *)((longlong)param_1 + 0xd8)) {
          local_1118[0] = 0.0;
          local_1118[1] = 0.0;
          local_1228 = &local_1168;
          local_1178 = param_4[2];
          local_1188 = *param_4;
          dStack_1180 = param_4[1];
          local_1238 = *(double **)((longlong)param_1 + 200);
          local_1230 = pdVar19;
          local_1168 = param_1;
          local_1160 = local_1118;
          FUN_146e017cc(&local_1188,param_2,*param_3);
          ppdVar14 = local_10f8;
          unaff_RDI = (double **)(local_11e8 + 3);
          for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
            *unaff_RDI = *ppdVar14;
            ppdVar14 = ppdVar14 + 1;
            unaff_RDI = unaff_RDI + 1;
          }
          cVar11 = FUN_146e02684(param_1,local_1118);
          if (local_1118[0] != 0.0) {
            FUN_1400020a8();
          }
          goto joined_r0x000146e016b5;
        }
      }
      lVar20 = *(longlong *)((longlong)param_1 + 0x30);
      lVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x38) * 0x68;
      unaff_RDI = local_10f8;
      do {
        cVar11 = FUN_146e02788(unaff_RDI,lVar20);
        if (cVar11 == '\0') goto LAB_146e00e89;
        lVar20 = lVar20 + 0x68;
        lVar18 = lVar18 + -0x68;
      } while (lVar18 != 0);
    }
  }
  else {
    local_1218 = param_9;
    local_1220 = param_8;
    local_1228 = param_7;
    local_1230 = param_6;
    local_1238 = param_5;
    cVar11 = FUN_146e00bc6(*(longlong *)((longlong)param_1 + 0xc0),param_2,param_3,param_4);
joined_r0x000146e016b5:
    if (cVar11 == '\0') {
LAB_146e00e89:
      unaff_RDI = (double **)0x0;
      goto LAB_146e01529;
    }
  }
  local_108 = (double **)0x0;
  local_100 = 0xff00000000;
  if (*(char *)((longlong)param_1 + 0x40) == '\x01') {
    iVar16 = *(int *)((longlong)param_1 + 0x44);
    if (iVar16 != -1) {
LAB_146e010c9:
      local_100 = 0xff00000001;
      local_10f8[0] = (double *)CONCAT44(local_10f8[0]._4_4_,iVar16);
      local_10f8[1] = (double *)0x0;
    }
  }
  else {
    iVar16 = 0;
    if (*(int *)((longlong)param_1 + 0x18) != 0) goto LAB_146e010c9;
  }
LAB_146e010fb:
  uVar15 = local_100;
  uVar13 = (uint)local_100;
  lVar20 = (longlong)(int)(uint)local_100;
  unaff_RDI = (double **)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar20 == 0);
  if (lVar20 == 0) goto LAB_146e0151f;
  ppdVar14 = local_108;
  if (local_108 == (double **)0x0) {
    ppdVar14 = local_10f8;
  }
  uVar21 = lVar20 - 1;
  iVar16 = (int)uVar21;
  uVar4 = local_100._4_4_;
  local_100 = CONCAT44(local_100._4_4_,iVar16);
  dVar27 = (double)param_3[4];
  bVar12 = 6;
  if ((double)ppdVar14[lVar20 * 2 + -1] <= dVar27) {
    pdVar19 = (double *)
              (*(longlong *)((longlong)param_1 + 0x10) +
              (longlong)*(int *)(ppdVar14 + lVar20 * 2 + -2) * 0x70);
    if ((*(byte *)(*(longlong *)((longlong)param_1 + 0x10) + 0x6c +
                  (longlong)*(int *)(ppdVar14 + lVar20 * 2 + -2) * 0x70) & 1) == 0) {
      local_11e8[0] = *param_8;
      local_11e8[1] = param_8[1];
      local_11e8[2] = param_8[2];
      dVar28 = param_4[2];
      dVar26 = *param_4;
      dVar29 = param_4[1];
      dVar1 = param_2[2];
      dVar2 = *param_2;
      dVar3 = param_2[1];
      local_1118[0] = (*pdVar19 - dVar26) - dVar2;
      local_1118[1] = (pdVar19[1] - dVar29) - dVar3;
      local_1118[2] = (pdVar19[2] - dVar28) - dVar1;
      local_1158[4] = (pdVar19[3] + dVar26) - dVar2;
      local_1158[5] = (pdVar19[4] + dVar29) - dVar3;
      local_1158[6] = (pdVar19[5] + dVar28) - dVar1;
      pdVar17 = (double *)0x0;
      lVar20 = 0;
      pdVar10 = (double *)0x7fefffffffffffff;
      do {
        if (*(char *)((longlong)param_9 + lVar20) == '\x01') {
          bVar5 = true;
          if ((0.0 < local_1118[lVar20]) ||
             (pdVar7 = (double *)0x0, pdVar8 = (double *)0x7fefffffffffffff,
             local_1158[lVar20 + 4] <= 0.0 && local_1158[lVar20 + 4] != 0.0)) goto LAB_146e01383;
        }
        else {
          pdVar7 = (double *)(local_1118[lVar20] * local_11e8[lVar20]);
          pdVar8 = (double *)(local_11e8[lVar20] * local_1158[lVar20 + 4]);
        }
        pdVar9 = pdVar8;
        if ((double)pdVar7 <= (double)pdVar8) {
          pdVar9 = pdVar7;
        }
        if ((double)pdVar17 <= (double)pdVar9) {
          pdVar17 = pdVar9;
        }
        if ((double)pdVar7 <= (double)pdVar8) {
          pdVar7 = pdVar8;
        }
        if ((double)pdVar7 <= (double)pdVar10) {
          pdVar10 = pdVar7;
        }
        bVar5 = true;
        if ((double)pdVar10 < (double)pdVar17) goto LAB_146e01383;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
      if (((double)pdVar17 <= dVar27) && (0.0 <= (double)pdVar10)) {
        bVar5 = false;
        pdVar6 = pdVar17;
      }
LAB_146e01383:
      local_1208[2] = param_8[2];
      local_1208[0] = *param_8;
      local_1208[1] = param_8[1];
      local_1118[0] = (pdVar19[6] - dVar26) - dVar2;
      local_1118[1] = (pdVar19[7] - dVar29) - dVar3;
      local_1118[2] = (pdVar19[8] - dVar28) - dVar1;
      local_1158[4] = (dVar26 + pdVar19[9]) - dVar2;
      local_1158[5] = (dVar29 + pdVar19[10]) - dVar3;
      local_1158[6] = (dVar28 + pdVar19[0xb]) - dVar1;
      uVar30 = 0;
      uVar31 = 0;
      lVar20 = 0;
      uVar24 = 0xffffffff;
      uVar25 = 0x7fefffff;
      do {
        pdVar17 = pdVar6;
        if (*(char *)((longlong)param_9 + lVar20) == '\x01') {
          if (0.0 < local_1118[lVar20]) goto LAB_146e014bb;
          dVar26 = 0.0;
          dVar28 = 1.79769313486232e+308;
          if (local_1158[lVar20 + 4] <= 0.0 && local_1158[lVar20 + 4] != 0.0) goto LAB_146e014bb;
        }
        else {
          dVar26 = local_1118[lVar20] * local_1208[lVar20];
          dVar28 = local_1208[lVar20] * local_1158[lVar20 + 4];
        }
        dVar29 = dVar28;
        if (dVar26 <= dVar28) {
          dVar29 = dVar26;
        }
        if ((double)CONCAT44(uVar31,uVar30) <= dVar29) {
          uVar30 = SUB84(dVar29,0);
          uVar31 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar28) {
          dVar26 = dVar28;
        }
        if (dVar26 <= (double)CONCAT44(uVar25,uVar24)) {
          uVar24 = SUB84(dVar26,0);
          uVar25 = (undefined4)((ulonglong)dVar26 >> 0x20);
        }
        if ((double)CONCAT44(uVar25,uVar24) <= (double)CONCAT44(uVar31,uVar30) &&
            (double)CONCAT44(uVar31,uVar30) != (double)CONCAT44(uVar25,uVar24)) goto LAB_146e014bb;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
      if ((dVar27 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != dVar27)
         || ((double)CONCAT44(uVar25,uVar24) <= 0.0 && (double)CONCAT44(uVar25,uVar24) != 0.0)) {
LAB_146e014bb:
        if (bVar5) goto LAB_146e010fb;
        uVar24 = *(undefined4 *)(pdVar19 + 0xc);
        local_100 = uVar15;
        if (uVar4 < uVar13) {
LAB_146e01668:
          FUN_146e02ba8(local_10f8,uVar21 & 0xffffffff);
        }
      }
      else if (bVar5) {
        uVar24 = *(undefined4 *)((longlong)pdVar19 + 100);
        local_100 = uVar15;
        pdVar17 = (double *)CONCAT44(uVar31,uVar30);
        if (uVar4 < uVar13) {
LAB_146e016c3:
          FUN_146e02ba8(local_10f8,uVar21 & 0xffffffff);
          pdVar17 = (double *)CONCAT44(uVar31,uVar30);
        }
      }
      else {
        local_100 = uVar15;
        if ((double)pdVar6 <= (double)CONCAT44(uVar31,uVar30) &&
            (double)CONCAT44(uVar31,uVar30) != (double)pdVar6) {
          uVar4 = *(uint *)((longlong)pdVar19 + 100);
          unaff_RDI = (double **)(ulonglong)uVar4;
          bVar5 = local_100._4_4_ < uVar13;
          if (bVar5) {
            FUN_146e02ba8(local_10f8,uVar21 & 0xffffffff);
          }
          ppdVar14 = local_108;
          if (local_108 == (double **)0x0) {
            ppdVar14 = local_10f8;
          }
          *(uint *)(ppdVar14 + uVar21 * 2) = uVar4;
          ppdVar14[uVar21 * 2 + 1] = (double *)CONCAT44(uVar31,uVar30);
          uVar24 = *(undefined4 *)(pdVar19 + 0xc);
          uVar21 = local_100 & 0xffffffff;
          uVar13 = (uint)local_100 + 1;
          local_100 = CONCAT44(local_100._4_4_,uVar13);
          if (local_100._4_4_ < uVar13) goto LAB_146e01668;
        }
        else {
          uVar4 = *(uint *)(pdVar19 + 0xc);
          unaff_RDI = (double **)(ulonglong)uVar4;
          bVar5 = local_100._4_4_ < uVar13;
          if (bVar5) {
            FUN_146e02ba8(local_10f8,uVar21 & 0xffffffff);
          }
          ppdVar14 = local_108;
          if (local_108 == (double **)0x0) {
            ppdVar14 = local_10f8;
          }
          *(uint *)(ppdVar14 + (longlong)iVar16 * 2) = uVar4;
          ppdVar14[(longlong)iVar16 * 2 + 1] = pdVar6;
          uVar24 = *(undefined4 *)((longlong)pdVar19 + 100);
          uVar21 = local_100 & 0xffffffff;
          uVar13 = (uint)local_100 + 1;
          local_100 = CONCAT44(local_100._4_4_,uVar13);
          pdVar17 = (double *)CONCAT44(uVar31,uVar30);
          if (local_100._4_4_ < uVar13) goto LAB_146e016c3;
        }
      }
      ppdVar14 = local_108;
      if (local_108 == (double **)0x0) {
        ppdVar14 = local_10f8;
      }
      *(undefined4 *)(ppdVar14 + (longlong)(int)uVar21 * 2) = uVar24;
      ppdVar14[(longlong)(int)uVar21 * 2 + 1] = pdVar17;
      goto LAB_146e010fb;
    }
    local_1118[2] = param_8[2];
    local_1118[0] = *param_8;
    local_1118[1] = param_8[1];
    local_1158[6] = param_4[2];
    local_1158[4] = *param_4;
    local_1158[5] = param_4[1];
    local_1220 = param_9;
    local_1228 = local_1118;
    local_1230 = param_7;
    local_1238 = param_6;
    bVar12 = FUN_146cac8c8((longlong)*(int *)(pdVar19 + 0xc) * 200 +
                           *(longlong *)((longlong)param_1 + 0x20),param_2,param_3,local_1158 + 4);
    bVar12 = bVar12 ^ 1;
  }
  if ((bVar12 == 6) || (bVar12 == 0)) goto LAB_146e010fb;
LAB_146e0151f:
  if (local_108 != (double **)0x0) {
    FUN_1400020a8();
  }
LAB_146e01529:
  if ((local_f0 ^ (ulonglong)auStack_1258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RDI & 0xffffffff;
}



// FUNCTION 146e017cc FUN_146e017cc body=3767 status=ok
// SIG undefined FUN_146e017cc(void)

void FUN_146e017cc(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
                  double param_6,undefined8 *param_7)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_XMM3_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  ulonglong uStack_160;
  longlong local_158;
  double local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_178 = *param_3 * param_4;
  uStack_170 = 0;
  dVar3 = ABS(local_178);
  local_168 = param_4 * param_3[1];
  dVar21 = ABS(local_168);
  uStack_160 = in_XMM3_Qb;
  if ((9.99999993922529e-09 < dVar3) || (9.99999993922529e-09 < dVar21)) {
    local_128._8_4_ = (int)(in_XMM3_Qb & 0x7fffffffffffffff);
    local_128._0_8_ = dVar21;
    local_128._12_4_ = (int)((in_XMM3_Qb & 0x7fffffffffffffff) >> 0x20);
    if (dVar21 <= dVar3) {
      bVar12 = dVar3 <= 9.99999993922529e-09;
      local_108 = *param_7;
      uStack_100 = param_7[1];
      dVar22 = param_2[1] * param_6;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = ABS(dVar22) * 2.220446049250313e-16 + dVar22;
      auVar25 = roundpd(auVar25,auVar25,1);
      dVar22 = param_1[1];
      dVar23 = (double)(longlong)auVar25._0_8_ * param_5;
      dVar35 = param_2[1] - dVar23;
      bVar1 = 0.0 <= local_168;
      uVar5 = (ulonglong)(bVar1 || bVar12) - 1 | 1;
      dVar40 = dVar22;
      if (!bVar1 && !bVar12) {
        dVar40 = -dVar22;
      }
      dVar14 = *param_1;
      dVar43 = -dVar22;
      if (!bVar1 && !bVar12) {
        dVar43 = dVar22;
      }
      dVar43 = dVar43 + dVar35;
      dVar22 = dVar22 * (double)(int)uVar5;
      dVar22 = dVar22 + dVar22 + dVar43;
      dVar36 = (dVar23 + dVar22) * param_6;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
      auVar27 = roundpd(auVar27,auVar27,1);
      lVar9 = (longlong)auVar27._0_8_;
      dVar40 = (dVar40 + local_168 + dVar35 + dVar23) * param_6;
      auVar16._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar16._8_8_ = 0;
      auVar27 = roundpd(auVar16,auVar16,1);
      lVar4 = (longlong)auVar27._0_8_;
      local_1b0 = lVar9;
      if (lVar9 < lVar4) {
        local_1b0 = lVar4;
      }
      dVar40 = *param_2 * param_6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar20,auVar20,1);
      local_1a0 = (longlong)auVar27._0_8_;
      dVar40 = (double)local_1a0 * param_5;
      local_150 = *param_2 - dVar40;
      if (9.99999993922529e-09 < dVar3) {
        local_1b0 = lVar4;
      }
      bVar2 = 0.0 <= local_178;
      dVar35 = local_178 + local_150;
      local_1a8 = (ulonglong)(bVar2 || bVar12);
      uVar6 = local_1a8 - 1 | 1;
      dVar36 = (double)(int)uVar6;
      local_178 = (local_178 * dVar36) / local_168;
      local_168 = (double)-(ulonglong)(dVar21 <= 9.99999993922529e-09);
      uStack_170 = 0;
      uStack_160 = local_128._8_8_;
      dVar44 = dVar14;
      if (!bVar2 && !bVar12) {
        dVar44 = -dVar14;
      }
      local_188._0_8_ =
           ~(ulonglong)local_168 & (ulonglong)local_178 | (ulonglong)local_168 & 0x3ff0000000000000;
      local_188._8_8_ = 0;
      dVar41 = -dVar14;
      if (!bVar2 && !bVar12) {
        dVar41 = dVar14;
      }
      dVar41 = dVar41 + local_150;
      local_150 = dVar44 + local_150;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = ABS(local_150 * param_6) * 2.220446049250313e-16 + local_150 * param_6;
      auVar27 = roundpd(auVar32,auVar32,1);
      local_158 = (longlong)auVar27._0_8_;
      dVar14 = (dVar40 + dVar41) * param_6;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = ABS(dVar14) * 2.220446049250313e-16 + dVar14;
      auVar27 = roundpd(auVar33,auVar33,1);
      lVar8 = (longlong)auVar27._0_8_;
      dVar23 = (dVar23 + dVar43) * param_6;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = ABS(dVar23) * 2.220446049250313e-16 + dVar23;
      auVar27 = roundpd(auVar30,auVar30,1);
      local_1c0 = (longlong)auVar27._0_8_;
      param_6 = (dVar35 + dVar44 + dVar40) * param_6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar27 = roundpd(auVar18,auVar18,1);
      local_190 = (longlong)auVar27._0_8_;
      local_138 = local_1b0 * uVar5;
      local_198 = local_1a8 - local_1a0;
      local_1b8 = (ulonglong)(bVar1 || bVar12) - (longlong)auVar25._0_8_;
      dVar35 = 1.0 / dVar36;
      dVar40 = 1.0 / (double)local_188._0_8_;
      local_148 = uVar6 * local_158;
      local_140 = uVar6 * local_190;
      local_130 = uVar5 * uVar5;
      lVar4 = lVar8;
      dVar23 = dVar41;
      do {
        lVar11 = lVar9 * uVar5;
        if ((9.99999993922529e-09 < dVar21) && (lVar11 < local_138)) {
          dVar21 = ((double)(local_1b8 + lVar9) * param_5 - dVar22) * (double)local_188._0_8_;
          if (dVar21 < ((double)(local_198 + lVar8) * param_5 - dVar41) * dVar36) {
            dVar41 = dVar41 + dVar21 * dVar35;
            dVar22 = dVar22 + dVar21 * dVar40;
            lVar9 = lVar9 + uVar5;
            lVar11 = lVar9 * uVar5;
          }
        }
        lVar10 = local_1c0 * uVar5;
        if (lVar10 - lVar11 == 0 || lVar10 < lVar11) {
          lVar7 = local_1c0;
          do {
            lVar10 = lVar10 + local_130;
            FUN_146e02a0e(&local_108,(double)lVar8 * param_5,SUB84((double)lVar7 * param_5,0));
            lVar7 = lVar7 + uVar5;
          } while (lVar10 <= lVar11);
        }
        if (((double)local_128._0_8_ <= 9.99999993922529e-09) || (lVar9 == local_1b0)) {
          dVar21 = param_5 * dVar36;
        }
        else {
          dVar14 = ((double)(local_198 + lVar8) * param_5 - dVar41) * dVar36;
          dVar21 = dVar14 * dVar35;
          dVar22 = dVar22 + dVar14 * dVar40;
        }
        dVar41 = dVar41 + dVar21;
        lVar11 = local_190;
        if (lVar4 != local_190) {
          lVar11 = lVar4 - local_1a0;
          if ((longlong)(lVar11 * uVar6) < local_148) {
            dVar23 = dVar23 + param_5 * dVar36;
          }
          else {
            dVar21 = local_150;
            if (lVar11 != local_158) {
              dVar21 = dVar23;
            }
            dVar14 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < dVar3) {
              dVar14 = ((double)(longlong)(lVar11 + local_1a8) * param_5 - dVar21) * dVar36;
            }
            dVar23 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < (double)local_128._0_8_) {
              dVar23 = ((double)(local_1b8 + local_1c0) * param_5 - dVar43) * local_178;
            }
            uVar13 = 0;
            if (dVar23 < dVar14) {
              uVar13 = uVar5;
            }
            local_1c0 = local_1c0 + uVar13;
            dVar23 = (double)(-(ulonglong)(dVar3 <= 9.99999993922529e-09) & (ulonglong)dVar21 |
                             ~-(ulonglong)(dVar3 <= 9.99999993922529e-09) &
                             (ulonglong)(dVar14 * dVar35 + dVar21));
            dVar43 = (double)((ulonglong)dVar43 & (ulonglong)local_168 |
                             ~(ulonglong)local_168 & (ulonglong)(dVar14 * dVar40 + dVar43));
          }
          lVar11 = lVar4 + uVar6;
        }
        lVar8 = lVar8 + uVar6;
        lVar4 = lVar11;
        dVar21 = (double)local_128._0_8_;
      } while ((lVar9 != local_1b0) ||
              (lVar8 * uVar6 - local_140 == 0 || (longlong)(lVar8 * uVar6) < local_140));
    }
    else {
      bVar12 = dVar21 <= 9.99999993922529e-09;
      dVar22 = *param_2 * param_6;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ABS(dVar22) * 2.220446049250313e-16 + dVar22;
      auVar25 = roundpd(auVar28,auVar28,1);
      dVar22 = *param_1;
      dVar23 = (double)(longlong)auVar25._0_8_ * param_5;
      dVar35 = *param_2 - dVar23;
      bVar1 = 0.0 <= local_178;
      uVar5 = (ulonglong)(bVar1 || bVar12) - 1 | 1;
      dVar40 = dVar22;
      if (!bVar1 && !bVar12) {
        dVar40 = -dVar22;
      }
      dVar14 = param_1[1];
      dVar43 = -dVar22;
      if (!bVar1 && !bVar12) {
        dVar43 = dVar22;
      }
      dVar43 = dVar43 + dVar35;
      dVar22 = dVar22 * (double)(int)uVar5;
      dVar22 = dVar22 + dVar22 + dVar43;
      dVar36 = (dVar23 + dVar22) * param_6;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
      auVar27 = roundpd(auVar37,auVar37,1);
      lVar9 = (longlong)auVar27._0_8_;
      dVar40 = (dVar40 + local_178 + dVar35 + dVar23) * param_6;
      auVar38._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar38._8_8_ = 0;
      auVar27 = roundpd(auVar38,auVar38,1);
      lVar4 = (longlong)auVar27._0_8_;
      local_1b0 = lVar9;
      if (lVar9 < lVar4) {
        local_1b0 = lVar4;
      }
      dVar40 = param_2[1] * param_6;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar39,auVar39,1);
      local_1a0 = (longlong)auVar27._0_8_;
      dVar35 = (double)local_1a0 * param_5;
      dVar40 = param_2[1] - dVar35;
      if (9.99999993922529e-09 < dVar21) {
        local_1b0 = lVar4;
      }
      bVar2 = 0.0 <= local_168;
      dVar21 = local_168 + dVar40;
      local_1a8 = (ulonglong)(bVar2 || bVar12);
      uVar6 = local_1a8 - 1 | 1;
      dVar36 = (double)(int)uVar6;
      local_168 = (local_168 * dVar36) / local_178;
      uStack_110 = 0;
      local_178 = (double)-(ulonglong)(dVar3 <= 9.99999993922529e-09);
      local_188._8_8_ = in_XMM3_Qb;
      local_188._0_8_ = ~(ulonglong)local_178 & (ulonglong)local_168;
      uStack_170 = 0;
      uVar42 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (!bVar2 && !bVar12) {
        uVar42 = (undefined4)((ulonglong)-dVar14 >> 0x20);
      }
      local_188 = local_188 | ZEXT416((uint)((ulonglong)local_178 >> 0x20) & 0x3ff00000) << 0x20;
      dVar44 = -dVar14;
      if (!bVar2 && !bVar12) {
        dVar44 = dVar14;
      }
      local_150 = (double)CONCAT44(uVar42,SUB84(dVar14,0)) + dVar40;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = ABS(local_150 * param_6) * 2.220446049250313e-16 + local_150 * param_6;
      auVar27 = roundpd(auVar34,auVar34,1);
      local_158 = (longlong)auVar27._0_8_;
      dVar44 = dVar44 + dVar40;
      dVar40 = (dVar35 + dVar44) * param_6;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar31,auVar31,1);
      lVar8 = (longlong)auVar27._0_8_;
      dVar40 = (dVar23 + dVar43) * param_6;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar29,auVar29,1);
      local_1c0 = (longlong)auVar27._0_8_;
      param_6 = (dVar21 + (double)CONCAT44(uVar42,SUB84(dVar14,0)) + dVar35) * param_6;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar27 = roundpd(auVar17,auVar17,1);
      local_190 = (longlong)auVar27._0_8_;
      local_138 = local_1b0 * uVar5;
      local_198 = local_1a8 - local_1a0;
      local_1b8 = (ulonglong)(bVar1 || bVar12) - (longlong)auVar25._0_8_;
      dVar21 = 1.0 / dVar36;
      dVar23 = 1.0 / (double)local_188._0_8_;
      local_148 = uVar6 * local_158;
      local_140 = uVar6 * local_190;
      local_130 = uVar5 * uVar5;
      lVar4 = lVar8;
      local_118 = dVar3;
      dVar40 = dVar44;
      do {
        lVar11 = lVar9 * uVar5;
        if ((9.99999993922529e-09 < dVar3) && (lVar11 < local_138)) {
          dVar35 = ((double)(local_1b8 + lVar9) * param_5 - dVar22) * (double)local_188._0_8_;
          if (dVar35 < ((double)(local_198 + lVar8) * param_5 - dVar44) * dVar36) {
            dVar44 = dVar44 + dVar35 * dVar21;
            dVar22 = dVar22 + dVar35 * dVar23;
            lVar9 = lVar9 + uVar5;
            lVar11 = lVar9 * uVar5;
          }
        }
        lVar10 = local_1c0 * uVar5;
        if (lVar10 - lVar11 == 0 || lVar10 < lVar11) {
          lVar7 = local_1c0;
          do {
            lVar10 = lVar10 + local_130;
            FUN_146e02a0e(param_7,(double)lVar7 * param_5,SUB84((double)lVar8 * param_5,0));
            lVar7 = lVar7 + uVar5;
          } while (lVar10 <= lVar11);
        }
        if ((dVar3 <= 9.99999993922529e-09) || (lVar9 == local_1b0)) {
          dVar35 = param_5 * dVar36;
        }
        else {
          dVar14 = ((double)(local_198 + lVar8) * param_5 - dVar44) * dVar36;
          dVar35 = dVar14 * dVar21;
          dVar22 = dVar22 + dVar14 * dVar23;
        }
        dVar44 = dVar44 + dVar35;
        lVar11 = local_190;
        if (lVar4 != local_190) {
          lVar11 = lVar4 - local_1a0;
          if ((longlong)(lVar11 * uVar6) < local_148) {
            dVar40 = dVar40 + param_5 * dVar36;
          }
          else {
            dVar35 = local_150;
            if (lVar11 != local_158) {
              dVar35 = dVar40;
            }
            dVar14 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < local_128._0_8_) {
              dVar14 = ((double)(longlong)(lVar11 + local_1a8) * param_5 - dVar35) * dVar36;
            }
            dVar40 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < dVar3) {
              dVar40 = ((double)(local_1b8 + local_1c0) * param_5 - dVar43) * local_168;
            }
            uVar13 = 0;
            if (dVar40 < dVar14) {
              uVar13 = uVar5;
            }
            local_1c0 = local_1c0 + uVar13;
            uVar13 = -(ulonglong)(local_128._0_8_ <= 9.99999993922529e-09);
            dVar40 = (double)(uVar13 & (ulonglong)dVar35 |
                             ~uVar13 & (ulonglong)(dVar14 * dVar21 + dVar35));
            dVar43 = (double)((ulonglong)dVar43 & (ulonglong)local_178 |
                             ~(ulonglong)local_178 & (ulonglong)(dVar14 * dVar23 + dVar43));
          }
          lVar11 = lVar4 + uVar6;
        }
        lVar8 = lVar8 + uVar6;
        lVar4 = lVar11;
      } while ((lVar9 != local_1b0) ||
              (lVar8 * uVar6 - local_140 == 0 || (longlong)(lVar8 * uVar6) < local_140));
    }
  }
  else {
    dVar21 = (*param_2 - *param_1) * param_6;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
    auVar25 = roundpd(auVar24,auVar24,1);
    dVar21 = (*param_2 + *param_1) * param_6;
    auVar26._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
    auVar26._8_8_ = 0;
    auVar27 = roundpd(auVar26,auVar26,1);
    if ((longlong)auVar25._0_8_ <= (longlong)auVar27._0_8_) {
      dVar21 = (param_2[1] - param_1[1]) * param_6;
      auVar19._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
      auVar19._8_8_ = 0;
      auVar20 = roundpd(auVar19,auVar19,1);
      param_6 = (param_2[1] + param_1[1]) * param_6;
      auVar15._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar15._8_8_ = 0;
      auVar16 = roundpd(auVar15,auVar15,1);
      lVar4 = (longlong)auVar25._0_8_;
      do {
        if ((longlong)auVar20._0_8_ <= (longlong)auVar16._0_8_) {
          lVar9 = (longlong)auVar20._0_8_;
          do {
            FUN_146e02a0e(param_7,(double)lVar4 * param_5,SUB84((double)lVar9 * param_5,0));
            lVar9 = lVar9 + 1;
          } while ((longlong)auVar16._0_8_ + 1 != lVar9);
        }
        bVar12 = lVar4 != (longlong)auVar27._0_8_;
        lVar4 = lVar4 + 1;
      } while (bVar12);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e02684 FUN_146e02684 body=259 status=ok
// SIG undefined FUN_146e02684(void)

undefined8 FUN_146e02684(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e026f1:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e026f1;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e02788(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e02788 FUN_146e02788 body=644 status=ok
// SIG undefined FUN_146e02788(void)

ulonglong FUN_146e02788(undefined8 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8 [4];
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar9 = param_2[7];
  dVar10 = param_2[8];
  dVar1 = param_2[9];
  dVar11 = param_2[10];
  dVar2 = param_2[0xb];
  dVar3 = param_2[0xc];
  cVar6 = FUN_14473ffaa(param_2,*param_1);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar6 == '\0') {
    pdVar4 = (double *)param_1[7];
    local_b8[2] = pdVar4[2];
    local_b8[0] = *pdVar4;
    local_b8[1] = pdVar4[1];
    pdVar4 = (double *)param_1[5];
    pdVar5 = (double *)param_1[1];
    local_f8[0] = (dVar9 - *pdVar4) - *pdVar5;
    local_f8[1] = (dVar10 - pdVar4[1]) - pdVar5[1];
    local_f8[2] = (dVar1 - pdVar4[2]) - pdVar5[2];
    local_98[0] = (dVar11 + *pdVar4) - *pdVar5;
    local_98[1] = (dVar2 + pdVar4[1]) - pdVar5[1];
    local_98[2] = (dVar3 + pdVar4[2]) - pdVar5[2];
    lVar7 = 0;
    dVar10 = 1.79769313486232e+308;
    dVar9 = 0.0;
    do {
      if (*(char *)(*(longlong *)param_1[8] + lVar7) == '\x01') {
        if (0.0 < local_f8[lVar7]) goto LAB_146e02812;
        dVar11 = 0.0;
        dVar1 = 1.79769313486232e+308;
        if (local_98[lVar7] <= 0.0 && local_98[lVar7] != 0.0) goto LAB_146e02812;
      }
      else {
        dVar11 = local_f8[lVar7] * local_b8[lVar7];
        dVar1 = local_b8[lVar7] * local_98[lVar7];
      }
      dVar2 = dVar1;
      if (dVar11 <= dVar1) {
        dVar2 = dVar11;
      }
      if (dVar9 <= dVar2) {
        dVar9 = dVar2;
      }
      if (dVar11 <= dVar1) {
        dVar11 = dVar1;
      }
      if (dVar11 <= dVar10) {
        dVar10 = dVar11;
      }
      if (dVar10 < dVar9) goto LAB_146e02812;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    if ((dVar9 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar10)) {
      *(double *)param_1[3] = dVar9;
      local_c8 = param_2[6];
      local_f8[0] = *param_2;
      local_f8[1] = param_2[1];
      local_f8[2] = param_2[2];
      local_f8[3] = param_2[3];
      local_d8 = param_2[4];
      dStack_d0 = param_2[5];
      cVar6 = (**(code **)(**(longlong **)*param_1 + 0x18))
                        (*(longlong **)*param_1,local_f8,param_1[2]);
      if (cVar6 == '\0') {
        uVar8 = 0;
      }
    }
  }
LAB_146e02812:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146e02a0e FUN_146e02a0e body=410 status=ok
// SIG undefined FUN_146e02a0e(void)

void FUN_146e02a0e(longlong *param_1,double param_2,double param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    param_2 = param_2 * *(double *)(lVar3 + 0xd0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = ABS(param_2) * 2.220446049250313e-16 + param_2;
    auVar9 = roundpd(auVar9,auVar9,1);
    param_3 = param_3 * *(double *)(lVar3 + 0xd0);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = ABS(param_3) * 2.220446049250313e-16 + param_3;
    auVar8 = roundpd(auVar8,auVar8,1);
    uVar7 = (uint)(longlong)auVar9._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar5 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uint)(longlong)auVar8._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar7 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uVar7 * 2 | uVar7 * 4) & 0xaaaaaaaa | (uVar5 * 2 | uVar5) & 0x55555555;
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & uVar7) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar5 * 0x14);
        if (*puVar1 == uVar7) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return;
          }
          plVar4 = (longlong *)param_1[1];
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_146dedd8c(plVar4,iVar2);
          }
          lVar3 = *plVar4;
          *(uint *)(lVar3 + (longlong)iVar2 * 8) = puVar1[1];
          *(uint *)(lVar3 + 4 + (longlong)iVar2 * 8) = puVar1[2];
          return;
        }
        uVar5 = puVar1[3];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 146e02ba8 FUN_146e02ba8 body=131 status=ok
// SIG undefined FUN_146e02ba8(void)

void FUN_146e02ba8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e02c2c(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e02c2c FUN_146e02c2c body=145 status=ok
// SIG undefined FUN_146e02c2c(void)

void FUN_146e02c2c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e02cbe FUN_146e02cbe body=259 status=ok
// SIG undefined FUN_146e02cbe(void)

undefined8 FUN_146e02cbe(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e02d2b:
      if (*(int *)(param_1 + 0xc0) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e02d2b;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e02dc2(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x38));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e02dc2 FUN_146e02dc2 body=242 status=ok
// SIG undefined FUN_146e02dc2(void)

ulonglong FUN_146e02dc2(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  double local_58 [3];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  double dStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[2] = *(double *)(param_2 + 0x12);
  local_58[0] = *(double *)(param_2 + 0xe);
  local_58[1] = *(double *)(param_2 + 0x10);
  local_40._0_4_ = param_2[0x14];
  local_40._4_4_ = param_2[0x15];
  uStack_38 = param_2[0x16];
  uStack_34 = param_2[0x17];
  local_30 = *(undefined8 *)(param_2 + 0x18);
  cVar3 = FUN_14473ffaa(param_2,*param_1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar3 == '\0') {
    lVar4 = -3;
    do {
      dVar2 = *(double *)(param_1[4] + 0x18 + lVar4 * 8);
      if ((&dStack_28)[lVar4] <= dVar2 && dVar2 != (&dStack_28)[lVar4]) goto LAB_146e02e1f;
      pdVar1 = (double *)(param_1[4] + 0x30 + lVar4 * 8);
      if (*pdVar1 <= (double)(&local_40)[lVar4] && (double)(&local_40)[lVar4] != *pdVar1)
      goto LAB_146e02e1f;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
    local_68 = *(undefined8 *)(param_2 + 0xc);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    local_88 = param_2[4];
    uStack_84 = param_2[5];
    uStack_80 = param_2[6];
    uStack_7c = param_2[7];
    local_78 = param_2[8];
    uStack_74 = param_2[9];
    uStack_70 = param_2[10];
    uStack_6c = param_2[0xb];
    cVar3 = (**(code **)(**(longlong **)*param_1 + 8))();
    if (cVar3 == '\0') {
      uVar5 = 0;
    }
  }
LAB_146e02e1f:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e02eb6 FUN_146e02eb6 body=232 status=ok
// SIG undefined FUN_146e02eb6(void)

undefined8
FUN_146e02eb6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_4 = 1;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
    iVar1 = *(int *)(lVar3 + 0x10);
    if (iVar1 < *(int *)(param_1 + 0x128)) {
      lVar3 = *(longlong *)(param_1 + 0x120) + (longlong)iVar1 * 0x18;
      if (lVar3 == 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x120) + 0x14 + (longlong)iVar1 * 0x18) == '\0') {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = (longlong)iVar1;
      if ((lVar3 != -1) && (iVar1 < *(int *)(param_1 + 0x1a8) + -1)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x1a0) + lVar3 * 4);
        lVar4 = (longlong)iVar1;
        if (*(int *)(*(longlong *)(param_1 + 0x1a0) + 4 + lVar3 * 4) <= iVar1) {
          return 1;
        }
        do {
          cVar2 = FUN_146e02f9e((longlong)*(int *)(*(longlong *)(param_1 + 400) + lVar4 * 4) * 0x48
                                + *(longlong *)(param_1 + 0x20),param_2,param_3);
          if (cVar2 == '\0') {
            *param_4 = 0;
            return 1;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(*(longlong *)(param_1 + 0x1a0) + 4 + lVar3 * 4));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 146e02f9e FUN_146e02f9e body=1274 status=ok
// SIG undefined FUN_146e02f9e(void)

ulonglong FUN_146e02f9e(longlong param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_RBP;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  double dVar3;
  double dVar6;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar17 = *(uint *)(param_1 + 0x38);
  local_c0 = (ulonglong)uVar17;
  uVar24 = uVar17 + 3;
  if (-1 < (int)uVar17) {
    uVar24 = uVar17;
  }
  local_c8 = param_1;
  if (3 < (int)uVar17) {
    lVar19 = 0x34;
    unaff_RBP = 0;
    local_d0 = param_3;
    do {
      lVar25 = *(longlong *)(local_c8 + 0x30);
      lVar16 = (unaff_RBP * 4 + 3) * 0x68;
      lVar18 = (unaff_RBP * 4 + 2) * 0x68;
      lVar22 = (unaff_RBP * 4 + 1) * 0x68;
      lVar23 = unaff_RBP * 0x1a0;
      dVar2 = param_2[3];
      dVar3 = param_2[3];
      lVar26 = -(ulonglong)(dVar3 < *(double *)(lVar25 + 0x38 + lVar22));
      auVar31._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar25 + 0x38 + lVar16));
      auVar31._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar25 + 0x38 + lVar18));
      dVar3 = param_2[1];
      dVar4 = param_2[1];
      auVar28._8_8_ = -(ulonglong)(*(double *)(lVar25 + 0x58 + lVar22) < dVar4);
      auVar28._0_8_ = -(ulonglong)(*(double *)(lVar25 + 0x58 + lVar23) < dVar3);
      auVar9._8_8_ = -(ulonglong)(*(double *)(lVar25 + 0x50 + lVar22) < *param_2);
      auVar9._0_8_ = -(ulonglong)(*(double *)(lVar25 + 0x50 + lVar23) < *param_2);
      auVar33._8_8_ = -(ulonglong)(*(double *)(lVar25 + 0x58 + lVar16) < dVar4);
      auVar33._0_8_ = -(ulonglong)(*(double *)(lVar25 + 0x58 + lVar18) < dVar3);
      dVar3 = param_2[4];
      dVar4 = param_2[4];
      auVar7._8_8_ = -(ulonglong)(*(double *)(lVar25 + 0x50 + lVar16) < *param_2);
      auVar7._0_8_ = -(ulonglong)(*(double *)(lVar25 + 0x50 + lVar18) < *param_2);
      dVar5 = param_2[2];
      dVar6 = param_2[2];
      auVar27._8_8_ = -(ulonglong)(*(double *)(lVar25 + 0x60 + lVar22) < dVar6);
      auVar27._0_8_ = -(ulonglong)(*(double *)(lVar25 + 0x60 + lVar23) < dVar5);
      auVar11._8_4_ = (int)lVar26;
      auVar11._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar25 + 0x38 + lVar23));
      auVar11._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      auVar29._8_8_ = -(ulonglong)(*(double *)(lVar25 + 0x60 + lVar16) < dVar6);
      auVar29._0_8_ = -(ulonglong)(*(double *)(lVar25 + 0x60 + lVar18) < dVar5);
      dVar2 = param_2[5];
      dVar5 = param_2[5];
      auVar32._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar25 + 0x48 + lVar22));
      auVar32._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar25 + 0x48 + lVar23));
      auVar8._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar25 + 0x40 + lVar22));
      auVar8._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar25 + 0x40 + lVar23));
      auVar30._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar25 + 0x48 + lVar16));
      auVar30._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar25 + 0x48 + lVar18));
      auVar10._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar25 + 0x40 + lVar16));
      auVar10._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar25 + 0x40 + lVar18));
      iVar13 = movmskpd((int)lVar25,auVar32 | auVar8 | auVar27 | auVar11 | auVar28 | auVar9);
      iVar15 = movmskpd((int)lVar16,auVar30 | auVar10 | auVar29 | auVar31 | auVar33 | auVar7);
      lVar16 = 0;
      lVar25 = lVar19;
      do {
        if (((uint)(iVar13 + iVar15 * 4) >> ((uint)lVar16 & 0x1f) & 1) == 0) {
          lVar18 = *(longlong *)(local_c8 + 0x30);
          local_88 = *(undefined8 *)(lVar18 + -4 + lVar25);
          puVar21 = (undefined8 *)(lVar18 + -0x34 + lVar25);
          local_b8 = *puVar21;
          uStack_b0 = puVar21[1];
          puVar21 = (undefined8 *)(lVar18 + -0x24 + lVar25);
          local_a8 = *puVar21;
          uStack_a0 = puVar21[1];
          puVar21 = (undefined8 *)(lVar18 + -0x14 + lVar25);
          local_98 = *puVar21;
          uStack_90 = puVar21[1];
          cVar12 = (**(code **)(*(longlong *)*local_d0 + 0x30))((longlong *)*local_d0,&local_b8);
          if (cVar12 == '\0') {
            piVar14 = (int *)(**(code **)(*(longlong *)*local_d0 + 0x20))();
            if (piVar14 == (int *)0x0) {
              lVar22 = (**(code **)(*(longlong *)*local_d0 + 0x28))();
              if ((lVar22 != 0) && (*(char *)(lVar18 + lVar25) == '\x01')) {
                if ((*(uint *)(lVar18 + -0xc + lVar25) >> (*(uint *)(lVar22 + 0xc) >> 0x15 & 0x1f) &
                    1) != 0) {
                  uVar17 = 1 << ((byte)(*(uint *)(lVar18 + -4 + lVar25) >> 0x15) & 0x1f) &
                           *(uint *)(lVar22 + 4);
                  goto joined_r0x000146e0348e;
                }
                goto LAB_146e0318b;
              }
            }
            else if ((*(char *)(lVar18 + lVar25) == '\x01') && (*piVar14 != 0)) {
              uVar17 = (*(uint *)(lVar18 + -0x18 + lVar25) | *(uint *)(lVar18 + -0x1c + lVar25)) >>
                       ((uint)piVar14[3] >> 0x15 & 0x1f) & 1;
joined_r0x000146e0348e:
              if (uVar17 == 0) goto LAB_146e0318b;
            }
            lVar18 = lVar18 + lVar25;
            local_88 = *(undefined8 *)(lVar18 + -4);
            local_b8 = *(undefined8 *)(lVar18 + -0x34);
            uStack_b0 = *(undefined8 *)(lVar18 + -0x2c);
            local_a8 = *(undefined8 *)(lVar18 + -0x24);
            uStack_a0 = *(undefined8 *)(lVar18 + -0x1c);
            local_98 = *(undefined8 *)(lVar18 + -0x14);
            uStack_90 = *(undefined8 *)(lVar18 + -0xc);
            cVar12 = (**(code **)(*(longlong *)*local_d0 + 8))((longlong *)*local_d0,&local_b8);
            if (cVar12 == '\0') goto LAB_146e033f2;
          }
        }
LAB_146e0318b:
        lVar16 = lVar16 + 1;
        lVar25 = lVar25 + 0x68;
      } while (lVar16 != 4);
      unaff_RBP = unaff_RBP + 1;
      lVar19 = lVar19 + 0x1a0;
      param_3 = local_d0;
    } while (unaff_RBP != (uint)((int)uVar24 >> 2));
  }
  iVar13 = ((int)uVar24 >> 2) * 4;
  uVar20 = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (iVar13 < (int)local_c0) {
    lVar19 = (longlong)iVar13;
    lVar25 = lVar19 * 0x68 + 0x50;
    do {
      lVar16 = *(longlong *)(local_c8 + 0x30);
      lVar18 = lVar19 * 0x68;
      local_88 = *(undefined8 *)(lVar16 + 0x30 + lVar18);
      local_b8 = *(undefined8 *)(lVar16 + lVar18);
      uStack_b0 = ((undefined8 *)(lVar16 + lVar18))[1];
      puVar21 = (undefined8 *)(lVar16 + 0x10 + lVar18);
      local_a8 = *puVar21;
      uStack_a0 = puVar21[1];
      puVar21 = (undefined8 *)(lVar16 + 0x20 + lVar18);
      local_98 = *puVar21;
      uStack_90 = puVar21[1];
      cVar12 = (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,&local_b8);
      if (cVar12 == '\0') {
        puVar21 = (undefined8 *)(lVar18 + lVar16);
        piVar14 = (int *)(**(code **)(*(longlong *)*param_3 + 0x20))();
        if (piVar14 == (int *)0x0) {
          lVar18 = (**(code **)(*(longlong *)*param_3 + 0x28))();
          if ((lVar18 != 0) && (*(char *)((longlong)puVar21 + 0x34) == '\x01')) {
            if ((*(uint *)(puVar21 + 5) >> (*(uint *)(lVar18 + 0xc) >> 0x15 & 0x1f) & 1) != 0) {
              uVar17 = 1 << ((byte)(*(uint *)(puVar21 + 6) >> 0x15) & 0x1f) & *(uint *)(lVar18 + 4);
              goto joined_r0x000146e03438;
            }
            goto LAB_146e0339a;
          }
        }
        else if ((*(char *)((longlong)puVar21 + 0x34) == '\x01') && (*piVar14 != 0)) {
          uVar17 = (*(uint *)((longlong)puVar21 + 0x1c) | *(uint *)(puVar21 + 3)) >>
                   ((uint)piVar14[3] >> 0x15 & 0x1f) & 1;
joined_r0x000146e03438:
          if (uVar17 == 0) goto LAB_146e0339a;
        }
        lVar18 = -3;
        do {
          dVar2 = *(double *)(lVar16 + lVar25 + lVar18 * 8);
          if ((param_2[lVar18 + 6] <= dVar2 && dVar2 != param_2[lVar18 + 6]) ||
             (pdVar1 = (double *)(lVar16 + lVar25 + 0x18 + lVar18 * 8),
             *pdVar1 <= param_2[lVar18 + 3] && param_2[lVar18 + 3] != *pdVar1)) goto LAB_146e0339a;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0);
        local_88 = puVar21[6];
        local_b8 = *puVar21;
        uStack_b0 = puVar21[1];
        local_a8 = puVar21[2];
        uStack_a0 = puVar21[3];
        local_98 = puVar21[4];
        uStack_90 = puVar21[5];
        cVar12 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_b8);
        if (cVar12 == '\0') goto LAB_146e033f2;
      }
LAB_146e0339a:
      lVar19 = lVar19 + 1;
      lVar25 = lVar25 + 0x68;
    } while ((int)local_c0 != (int)lVar19);
  }
LAB_146e033ac:
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146e033f2:
  uVar20 = 0;
  goto LAB_146e033ac;
}



// FUNCTION 146e0349a FUN_146e0349a body=172 status=ok
// SIG undefined FUN_146e0349a(void)

undefined8 FUN_146e0349a(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x18] != puVar3[0x23]) {
    puVar5 = puVar3 + 0x24;
    if (*(uint **)(puVar3 + 0x26) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x26);
    }
    uVar4 = puVar5[puVar3[0x28] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x16);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e03546 FUN_146e03546 body=131 status=ok
// SIG undefined FUN_146e03546(void)

void FUN_146e03546(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e035ca(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e035ca FUN_146e035ca body=145 status=ok
// SIG undefined FUN_146e035ca(void)

void FUN_146e035ca(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e0365c FUN_146e0365c body=178 status=ok
// SIG undefined FUN_146e0365c(void)

void FUN_146e0365c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_146e03710(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e03710 FUN_146e03710 body=1788 status=ok
// SIG undefined FUN_146e03710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146e03710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,double *param_5,undefined8 ***param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined8 *puVar1;
  double dVar2;
  undefined4 uVar3;
  undefined8 ***pppuVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *unaff_RSI;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_1158 [32];
  double *local_1138;
  undefined8 ***local_1130;
  undefined8 local_1128;
  undefined8 local_1120;
  undefined8 local_1118;
  undefined8 *local_1108;
  undefined8 local_1100 [9];
  undefined8 *local_10b8;
  double *local_10b0;
  double local_10a8 [7];
  undefined8 ***local_1070;
  undefined8 ****local_1068 [4];
  double *local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 *local_1028;
  undefined8 ****local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e03726;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1158;
  local_1070 = (undefined8 ***)0x0;
  local_1108 = param_1;
  if ((longlong)*(int *)(param_1 + 0x22) != 0) {
    puVar16 = (undefined8 *)param_1[0x21];
    unaff_RSI = puVar16 + (longlong)*(int *)(param_1 + 0x22) * 0xd;
    do {
      cVar5 = FUN_14473ffaa(puVar16,param_6);
      if (cVar5 == '\0') {
        local_10a8[2] = (double)puVar16[9];
        local_10a8[0] = (double)puVar16[7];
        local_10a8[1] = (double)puVar16[8];
        local_10a8[5] = (double)puVar16[0xc];
        local_10a8[3] = (double)puVar16[10];
        local_10a8[4] = (double)puVar16[0xb];
        lVar15 = 0;
        do {
          if ((local_10a8[lVar15 + 3] <= param_5[lVar15] &&
               param_5[lVar15] != local_10a8[lVar15 + 3]) ||
             (param_5[lVar15 + 3] <= local_10a8[lVar15] && local_10a8[lVar15] != param_5[lVar15 + 3]
             )) goto LAB_146e037ac;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
        local_1038 = puVar16[6];
        local_1068[0] = (undefined8 ****)*puVar16;
        local_1068[1] = (undefined8 ****)puVar16[1];
        local_1068[2] = (undefined8 ****)puVar16[2];
        local_1068[3] = (undefined8 ****)puVar16[3];
        local_1048 = (double *)puVar16[4];
        uStack_1040 = puVar16[5];
        cVar5 = (*(code *)(**param_6)[1])(*param_6,local_1068);
        if (cVar5 == '\0') goto LAB_146e03866;
      }
LAB_146e037ac:
      puVar16 = puVar16 + 0xd;
    } while (puVar16 != unaff_RSI);
  }
  if (local_1108[0x18] == 0) {
    local_1068[0] = (undefined8 ****)param_6;
    local_1068[2] = (undefined8 ****)param_3;
    local_1068[3] = &local_1070;
    local_1048 = param_5;
    uStack_1040 = param_4;
    local_1038 = param_7;
    local_1030 = param_8;
    local_1028 = &param_9;
    local_1068[1] = (undefined8 ****)param_2;
    if (0 < (int)*(uint *)(local_1108 + 7)) {
      if ((((0.0 < (double)local_1108[0x19]) &&
           (uVar11 = (ulonglong)*(int *)(local_1108 + 0x1b), 0 < (longlong)uVar11)) &&
          (0 < *(int *)((longlong)local_1108 + 0xdc))) &&
         ((0 < *(int *)(local_1108 + 0x1c) &&
          (*(int *)((longlong)local_1108 + 0x84) < *(int *)(local_1108 + 0xb))))) {
        dVar2 = (double)local_1108[0x1a];
        auVar22._8_8_ = 0;
        auVar22._0_8_ = ABS(*param_5 * dVar2) * 2.220446049250313e-16 + *param_5 * dVar2;
        auVar22 = roundpd(auVar22,auVar22,1);
        lVar15 = (longlong)auVar22._0_8_;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = ABS(param_5[3] * dVar2) * 2.220446049250313e-16 + param_5[3] * dVar2;
        auVar22 = roundpd(auVar23,auVar23,1);
        lVar13 = (longlong)auVar22._0_8_;
        if (lVar15 <= lVar13) {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = ABS(param_5[1] * dVar2) * 2.220446049250313e-16 + param_5[1] * dVar2;
          auVar22 = roundpd(auVar24,auVar24,1);
          lVar18 = (longlong)auVar22._0_8_;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = ABS(dVar2 * param_5[4]) * 2.220446049250313e-16 + dVar2 * param_5[4];
          auVar22 = roundpd(auVar21,auVar21,1);
          lVar14 = (longlong)auVar22._0_8_;
          if (((lVar18 <= lVar14) && (uVar12 = (lVar13 - lVar15) + 1, uVar12 <= uVar11)) &&
             ((uVar17 = (lVar14 - lVar18) + 1, uVar17 <= uVar11 &&
              (uVar17 = uVar17 * uVar12, uVar17 < uVar11 || uVar17 - uVar11 == 0)))) {
            local_10b0 = local_10a8;
            local_10a8[0] = 0.0;
            local_10a8[1] = 0.0;
            local_10b8 = local_1108;
            do {
              uVar9 = ((uint)lVar15 & 0xff00) << 8 | (uint)lVar15 & 0xff;
              uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
              uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
              lVar19 = lVar18;
              do {
                uVar10 = ((uint)lVar19 & 0xff00) << 8 | (uint)lVar19 & 0xff;
                uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
                uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
                cVar5 = FUN_146e040ee(&local_10b8,
                                      (uVar10 * 2 | uVar10 * 4) & 0xaaaaaaaa |
                                      (uVar9 * 2 | uVar9) & 0x55555555);
                if (cVar5 == '\0') goto LAB_146e03dc5;
                lVar19 = lVar19 + 1;
              } while (lVar14 + 1 != lVar19);
              bVar20 = lVar15 != lVar13;
              lVar15 = lVar15 + 1;
            } while (bVar20);
LAB_146e03dc5:
            ppppuVar8 = local_1068;
            puVar16 = local_1100;
            for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
              *puVar16 = *ppppuVar8;
              ppppuVar8 = ppppuVar8 + 1;
              puVar16 = puVar16 + 1;
            }
            uVar11 = FUN_146e03e0e(local_1108,local_10a8);
            unaff_RSI = (undefined8 *)(uVar11 & 0xffffffff);
            if (local_10a8[0] != 0.0) {
              FUN_1400020a8();
            }
            cVar5 = (char)unaff_RSI;
            goto joined_r0x000146e03cac;
          }
        }
      }
      unaff_RSI = (undefined8 *)local_1108[6];
      lVar15 = (ulonglong)*(uint *)(local_1108 + 7) * 0x68;
      do {
        cVar5 = FUN_146e03f12(local_1068,unaff_RSI);
        if (cVar5 == '\0') goto LAB_146e03866;
        unaff_RSI = unaff_RSI + 0xd;
        lVar15 = lVar15 + -0x68;
      } while (lVar15 != 0);
    }
  }
  else {
    local_1118 = param_9;
    local_1120 = param_8;
    local_1128 = param_7;
    local_1130 = param_6;
    local_1138 = param_5;
    cVar5 = FUN_146e03710(local_1108[0x18],param_2,param_3,param_4);
joined_r0x000146e03cac:
    if (cVar5 == '\0') {
LAB_146e03866:
      uVar11 = 0;
      goto LAB_146e03c37;
    }
  }
  puVar16 = local_1108;
  bVar6 = *(byte *)(local_1108 + 8);
  if ((bVar6 == 1) && (*(int *)(local_1108 + 0x32) != 0)) {
    local_1068[0] = (undefined8 ****)CONCAT71(local_1068[0]._1_7_,1);
    cVar5 = FUN_146e04006(local_1108,param_5,param_6);
    if (cVar5 != '\0') {
      uVar11 = CONCAT71((int7)((ulonglong)puVar16 >> 8),local_1068[0]._0_1_);
      goto LAB_146e03c37;
    }
    bVar6 = *(byte *)(puVar16 + 8);
    unaff_RSI = puVar16;
  }
  local_78 = (undefined8 ****)0x0;
  local_6c = 0xff;
  if ((bVar6 & 1) == 0) {
    iVar7 = 0;
    if (*(int *)(puVar16 + 3) != 0) goto LAB_146e03ab5;
  }
  else {
    iVar7 = *(int *)((longlong)puVar16 + 0x44);
    if (iVar7 != -1) {
LAB_146e03ab5:
      local_70 = 1;
      local_1068[0] = (undefined8 ****)CONCAT44(local_1068[0]._4_4_,iVar7);
      local_1068[1] = (undefined8 ****)0x0;
      local_70 = 1;
      do {
        ppppuVar8 = local_78;
        if (local_78 == (undefined8 ****)0x0) {
          ppppuVar8 = local_1068;
        }
        lVar13 = (longlong)(int)local_70;
        local_70 = local_70 - 1;
        lVar15 = puVar16[2] + (longlong)*(int *)(ppppuVar8 + lVar13 * 2 + -2) * 0x70;
        if ((*(byte *)(puVar16[2] + 0x6c + (longlong)*(int *)(ppppuVar8 + lVar13 * 2 + -2) * 0x70) &
            1) == 0) {
          lVar13 = 0;
          lVar14 = 0;
          do {
            uVar9 = local_70;
            pppuVar4 = local_1070;
            local_10a8[2] = (double)*(undefined8 *)(lVar15 + 0x10 + lVar14);
            local_10a8[0] = *(double *)(lVar15 + lVar14);
            local_10a8[1] = ((double *)(lVar15 + lVar14))[1];
            local_10a8[5] = (double)*(undefined8 *)(lVar15 + 0x28 + lVar14);
            puVar1 = (undefined8 *)(lVar15 + 0x18 + lVar14);
            local_10a8[3] = (double)*puVar1;
            local_10a8[4] = (double)puVar1[1];
            lVar18 = 0;
            do {
              if ((local_10a8[lVar18 + 3] <= param_5[lVar18] &&
                   param_5[lVar18] != local_10a8[lVar18 + 3]) ||
                 (param_5[lVar18 + 3] <= local_10a8[lVar18] &&
                  local_10a8[lVar18] != param_5[lVar18 + 3])) goto LAB_146e03bc3;
              lVar18 = lVar18 + 1;
            } while (lVar18 != 3);
            uVar3 = *(undefined4 *)(lVar15 + 0x60 + lVar13 * 4);
            lVar18 = (longlong)(int)local_70;
            local_70 = local_70 + 1;
            if (local_6c < local_70) {
              FUN_146e0419a(local_1068,uVar9);
              puVar16 = local_1108;
            }
            ppppuVar8 = local_78;
            if (local_78 == (undefined8 ****)0x0) {
              ppppuVar8 = local_1068;
            }
            *(undefined4 *)(ppppuVar8 + lVar18 * 2) = uVar3;
            ppppuVar8[lVar18 * 2 + 1] = pppuVar4;
LAB_146e03bc3:
            lVar13 = lVar13 + 1;
            lVar14 = lVar14 + 0x30;
          } while (lVar14 != 0x60);
        }
        else {
          cVar5 = FUN_146cae022((longlong)*(int *)(lVar15 + 0x60) * 200 + puVar16[4],param_5,param_6
                               );
          puVar16 = local_1108;
          if (cVar5 == '\0') {
            uVar11 = 0;
            goto LAB_146e03c25;
          }
        }
      } while (local_70 != 0);
      uVar11 = CONCAT71((int7)((ulonglong)local_1068 >> 8),1);
LAB_146e03c25:
      if (local_78 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146e03c37;
    }
  }
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_146e03c37:
  if ((local_60 ^ (ulonglong)auStack_1158) == DAT_14c707940) {
    return uVar11 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e03e0e FUN_146e03e0e body=259 status=ok
// SIG undefined FUN_146e03e0e(void)

undefined8 FUN_146e03e0e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e03e7b:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e03e7b;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e03f12(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e03f12 FUN_146e03f12 body=242 status=ok
// SIG undefined FUN_146e03f12(void)

ulonglong FUN_146e03f12(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  double local_58 [3];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  double dStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[2] = *(double *)(param_2 + 0x12);
  local_58[0] = *(double *)(param_2 + 0xe);
  local_58[1] = *(double *)(param_2 + 0x10);
  local_40._0_4_ = param_2[0x14];
  local_40._4_4_ = param_2[0x15];
  uStack_38 = param_2[0x16];
  uStack_34 = param_2[0x17];
  local_30 = *(undefined8 *)(param_2 + 0x18);
  cVar3 = FUN_14473ffaa(param_2,*param_1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar3 == '\0') {
    lVar4 = -3;
    do {
      dVar2 = *(double *)(param_1[4] + 0x18 + lVar4 * 8);
      if ((&dStack_28)[lVar4] <= dVar2 && dVar2 != (&dStack_28)[lVar4]) goto LAB_146e03f6f;
      pdVar1 = (double *)(param_1[4] + 0x30 + lVar4 * 8);
      if (*pdVar1 <= (double)(&local_40)[lVar4] && (double)(&local_40)[lVar4] != *pdVar1)
      goto LAB_146e03f6f;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
    local_68 = *(undefined8 *)(param_2 + 0xc);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    local_88 = param_2[4];
    uStack_84 = param_2[5];
    uStack_80 = param_2[6];
    uStack_7c = param_2[7];
    local_78 = param_2[8];
    uStack_74 = param_2[9];
    uStack_70 = param_2[10];
    uStack_6c = param_2[0xb];
    cVar3 = (**(code **)(**(longlong **)*param_1 + 8))();
    if (cVar3 == '\0') {
      uVar5 = 0;
    }
  }
LAB_146e03f6f:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e04006 FUN_146e04006 body=231 status=ok
// SIG undefined FUN_146e04006(void)

undefined8
FUN_146e04006(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_4 = 1;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
    iVar1 = *(int *)(lVar3 + 0x10);
    if (iVar1 < *(int *)(param_1 + 0x120)) {
      lVar3 = *(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 0x18;
      if (lVar3 == 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x14 + (longlong)iVar1 * 0x18) == '\0') {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = (longlong)iVar1;
      if ((lVar3 != -1) && (iVar1 < *(int *)(param_1 + 0x1a0) + -1)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x198) + lVar3 * 4);
        lVar4 = (longlong)iVar1;
        if (*(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar3 * 4) <= iVar1) {
          return 1;
        }
        do {
          cVar2 = FUN_146cae022((longlong)*(int *)(*(longlong *)(param_1 + 0x188) + lVar4 * 4) * 200
                                + *(longlong *)(param_1 + 0x20),param_2,param_3);
          if (cVar2 == '\0') {
            *param_4 = 0;
            return 1;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar3 * 4));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 146e040ee FUN_146e040ee body=172 status=ok
// SIG undefined FUN_146e040ee(void)

undefined8 FUN_146e040ee(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x16] != puVar3[0x21]) {
    puVar5 = puVar3 + 0x22;
    if (*(uint **)(puVar3 + 0x24) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x24);
    }
    uVar4 = puVar5[puVar3[0x26] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x14);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e0419a FUN_146e0419a body=131 status=ok
// SIG undefined FUN_146e0419a(void)

void FUN_146e0419a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e0421e(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e0421e FUN_146e0421e body=145 status=ok
// SIG undefined FUN_146e0421e(void)

void FUN_146e0421e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e042b0 FUN_146e042b0 body=745 status=ok
// SIG undefined FUN_146e042b0(void)

void FUN_146e042b0(longlong param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14008b684(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_146e04599(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_146e045c2(param_1 + 0x20,0);
    }
    if (*(int *)(param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_14479f570(param_1 + 0x30,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_1402a3552(param_1 + 0x50);
    if (*(int *)(param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      FUN_14481578e(param_1 + 0xa0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      FUN_14481578e(param_1 + 0xb0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    if (*(int *)(param_1 + 0x114) < 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN_14479f570(param_1 + 0x108,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (*(int *)(param_1 + 0x124) < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      FUN_14008b768(param_1 + 0x118,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    if (*(int *)(param_1 + 0x194) < 0) {
      *(undefined4 *)(param_1 + 400) = 0;
      FUN_14481578e(param_1 + 0x188,0);
    }
    else {
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (*(int *)(param_1 + 0x1a4) < 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      FUN_14481578e(param_1 + 0x198,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
    if (*(int *)(param_1 + 0x1b4) < 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      FUN_146dedcd2(param_1 + 0x1a8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
    if (*(int *)(param_1 + 0x1c4) < 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      FUN_14481578e(param_1 + 0x1b8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    if (*(int *)(param_1 + 0x15c) < 0) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      FUN_14481578e(param_1 + 0x150,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
    if (*(int *)(param_1 + 0x16c) < 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      FUN_14481578e(param_1 + 0x160,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x17c);
    FUN_146e04636(*(undefined8 *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x178) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x17c) != 0)) {
      FUN_146e04668(param_1 + 0x170);
    }
    *(undefined1 *)(param_1 + 0x181) = 1;
    *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1 = *(longlong *)(param_1 + 0xc0);
  } while (param_1 != 0);
  return;
}



// FUNCTION 146e04599 FUN_146e04599 body=41 status=ok
// SIG undefined FUN_146e04599(void)

void FUN_146e04599(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ca5918(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 146e045c2 FUN_146e045c2 body=116 status=ok
// SIG undefined FUN_146e045c2(void)

void FUN_146e045c2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 146e04636 FUN_146e04636 body=50 status=ok
// SIG undefined FUN_146e04636(void)

void FUN_146e04636(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e04668 FUN_146e04668 body=116 status=ok
// SIG undefined FUN_146e04668(void)

void FUN_146e04668(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf8)) {
      uVar2 = uVar1 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf8,8);
  }
  return;
}



// FUNCTION 146e046dc FUN_146e046dc body=313 status=ok
// SIG undefined FUN_146e046dc(void)

undefined8 * FUN_146e046dc(undefined8 *param_1,longlong param_2)

{
  undefined8 *_Dst;
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x301;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *param_1 = &PTR_FUN_149f5ae80;
  _Dst = param_1 + 3;
  plVar1 = param_1 + 0x23;
  lVar7 = 0;
  memset(_Dst,0,0x160);
  FUN_146e048f6(plVar1,*(undefined4 *)(param_2 + 0x120));
  FUN_146e04a08(param_1 + 0x27,*(undefined4 *)(param_2 + 0x140));
  FUN_146e04ba2(param_1 + 0x2b,*(undefined4 *)(param_2 + 0x160));
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  do {
    FUN_146e04816(_Dst + lVar7 * 4,param_2 + 0x18 + lVar7 * 0x20);
    if ((longlong)*(int *)(param_1 + lVar7 * 4 + 4) != 0) {
      plVar5 = (longlong *)_Dst[lVar7 * 4];
      plVar4 = plVar5 + (longlong)*(int *)(param_1 + lVar7 * 4 + 4) * 2;
      do {
        lVar3 = *plVar5;
        cVar2 = *(char *)(lVar3 + 0xd);
        plVar6 = plVar1;
        if ((lVar3 == 0 || cVar2 != '\x01') &&
           (plVar6 = param_1 + 0x27, lVar3 == 0 || cVar2 != '\0')) {
          plVar6 = plVar1;
          if (cVar2 == '\x02') {
            plVar6 = param_1 + 0x2b;
          }
          if (lVar3 == 0) {
            plVar6 = plVar1;
          }
        }
        *(longlong *)(*plVar6 + (ulonglong)*(ushort *)(plVar5 + 1) * 8) = lVar3;
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar4);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  return param_1;
}



// FUNCTION 146e04816 FUN_146e04816 body=222 status=ok
// SIG undefined FUN_146e04816(void)

void FUN_146e04816(longlong *param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406d59c6(param_1,(int)param_2[1]);
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_146e04d3b(&local_48,*param_2 + lVar4);
      lVar2 = *param_1;
      ppuVar1 = (undefined8 **)(lVar2 + lVar4);
      if (ppuVar1 != &local_48) {
        puVar3 = *ppuVar1;
        *ppuVar1 = local_48;
        local_48 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      *(undefined2 *)(lVar2 + 8 + lVar4) = local_40;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,1);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < (int)param_1[1]);
  }
  FUN_140816ffa(param_1 + 2,param_2 + 2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e048f6 FUN_146e048f6 body=116 status=ok
// SIG undefined FUN_146e048f6(void)

void FUN_146e048f6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1406d5bee(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e0496c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e0496c FUN_146e0496c body=62 status=ok
// SIG undefined FUN_146e0496c(void)

void FUN_146e0496c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e049aa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146e049aa FUN_146e049aa body=93 status=ok
// SIG undefined FUN_146e049aa(void)

ulonglong FUN_146e049aa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146e04a08 FUN_146e04a08 body=118 status=ok
// SIG undefined FUN_146e04a08(void)

void FUN_146e04a08(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e04a80(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e04b06(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e04a80 FUN_146e04a80 body=132 status=ok
// SIG undefined FUN_146e04a80(void)

void FUN_146e04a80(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e04b06 FUN_146e04b06 body=62 status=ok
// SIG undefined FUN_146e04b06(void)

void FUN_146e04b06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e04b44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146e04b44 FUN_146e04b44 body=93 status=ok
// SIG undefined FUN_146e04b44(void)

ulonglong FUN_146e04b44(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146e04ba2 FUN_146e04ba2 body=118 status=ok
// SIG undefined FUN_146e04ba2(void)

void FUN_146e04ba2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e04c1a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e04ca0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e04c1a FUN_146e04c1a body=132 status=ok
// SIG undefined FUN_146e04c1a(void)

void FUN_146e04c1a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e04ca0 FUN_146e04ca0 body=62 status=ok
// SIG undefined FUN_146e04ca0(void)

void FUN_146e04ca0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e04cde(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146e04cde FUN_146e04cde body=93 status=ok
// SIG undefined FUN_146e04cde(void)

ulonglong FUN_146e04cde(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146e04d3b FUN_146e04d3b body=143 status=ok
// SIG undefined FUN_146e04d3b(void)

undefined8 ** FUN_146e04d3b(undefined8 **param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = (undefined8 *)0x0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    if (&local_28 == param_1) goto LAB_146e04d82;
    local_28 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(plVar1,&local_28);
    if (&local_28 == param_1) {
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
      goto LAB_146e04d82;
    }
  }
  *param_1 = local_28;
LAB_146e04d82:
  *(short *)(param_1 + 1) = (short)param_2[1];
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e04dcc FUN_146e04dcc body=89 status=ok
// SIG undefined FUN_146e04dcc(void)

void FUN_146e04dcc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140d9df17(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e04e26 FUN_146e04e26 body=62 status=ok
// SIG undefined FUN_146e04e26(void)

void FUN_146e04e26(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e04e64(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146e04e64 FUN_146e04e64 body=93 status=ok
// SIG undefined FUN_146e04e64(void)

ulonglong FUN_146e04e64(uint param_1,uint param_2)

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



// FUNCTION 146e04ec1 FUN_146e04ec1 body=251 status=ok
// SIG undefined FUN_146e04ec1(void)

longlong * FUN_146e04ec1(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146e05026(param_2);
    }
    FUN_1406d59c6(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146e04fbe(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146e04fbe FUN_146e04fbe body=104 status=ok
// SIG undefined FUN_146e04fbe(void)

longlong * FUN_146e04fbe(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_146e108ba();
  puVar2 = (undefined2 *)(param_2 + 8);
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 146e05026 FUN_146e05026 body=95 status=ok
// SIG undefined FUN_146e05026(void)

void FUN_146e05026(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146e05086 FUN_146e05086 body=105 status=ok
// SIG undefined FUN_146e05086(void)

ulonglong FUN_146e05086(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 == 0) {
    iVar1 = (int)param_1[1];
    uVar2 = (ulonglong)iVar1;
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146e04a80(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + uVar2 * 8) = *param_2;
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(param_1[2] + -2 + (longlong)iVar1 * 2);
    *(int *)(param_1 + 3) = iVar1 + -1;
    FUN_144715f92(param_1 + 2);
    *(undefined8 *)(*param_1 + uVar2 * 8) = *param_2;
  }
  return uVar2 & 0xffff;
}



// FUNCTION 146e050f0 FUN_146e050f0 body=105 status=ok
// SIG undefined FUN_146e050f0(void)

ulonglong FUN_146e050f0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 == 0) {
    iVar1 = (int)param_1[1];
    uVar2 = (ulonglong)iVar1;
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146e04c1a(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + uVar2 * 8) = *param_2;
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(param_1[2] + -2 + (longlong)iVar1 * 2);
    *(int *)(param_1 + 3) = iVar1 + -1;
    FUN_144715f92(param_1 + 2);
    *(undefined8 *)(*param_1 + uVar2 * 8) = *param_2;
  }
  return uVar2 & 0xffff;
}



// FUNCTION 146e0515a FUN_146e0515a body=88 status=ok
// SIG undefined FUN_146e0515a(void)

void FUN_146e0515a(longlong *param_1,ushort param_2)

{
  int iVar1;
  
  if ((int)param_1[1] == param_2 + 1) {
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  else {
    *(undefined8 *)(*param_1 + (ulonglong)(uint)param_2 * 8) = 0;
    iVar1 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
      FUN_14488eebe(param_1 + 2,iVar1);
    }
    *(ushort *)(param_1[2] + (longlong)iVar1 * 2) = param_2;
  }
  return;
}



// FUNCTION 146e051b2 FUN_146e051b2 body=88 status=ok
// SIG undefined FUN_146e051b2(void)

void FUN_146e051b2(longlong *param_1,ushort param_2)

{
  int iVar1;
  
  if ((int)param_1[1] == param_2 + 1) {
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  else {
    *(undefined8 *)(*param_1 + (ulonglong)(uint)param_2 * 8) = 0;
    iVar1 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
      FUN_14488eebe(param_1 + 2,iVar1);
    }
    *(ushort *)(param_1[2] + (longlong)iVar1 * 2) = param_2;
  }
  return;
}



// FUNCTION 146e0520a FUN_146e0520a body=113 status=ok
// SIG undefined FUN_146e0520a(void)

void FUN_146e0520a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146e0527b FUN_146e0527b body=63 status=ok
// SIG undefined FUN_146e0527b(void)

ulonglong FUN_146e0527b(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x18)) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x10) >> 8),1);
  }
  else if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar1 = 1 << ((byte)(*(uint *)(param_1 + 0x30) >> 0x15) & 0x1f) & *(uint *)(param_2 + 0xc);
    uVar2 = (ulonglong)
            CONCAT31((int3)(uVar1 >> 8),
                     uVar1 == 0 ||
                     (*(uint *)(param_1 + 0x28) >> (*(uint *)(param_2 + 0x14) >> 0x15 & 0x1f) & 1)
                     == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146e052ba FUN_146e052ba body=259 status=ok
// SIG undefined FUN_146e052ba(void)

undefined8 FUN_146e052ba(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e05327:
      if (*(int *)(param_1 + 0xc0) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e05327;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e053be(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x38));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e053be FUN_146e053be body=238 status=ok
// SIG undefined FUN_146e053be(void)

undefined8 FUN_146e053be(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  double local_58 [3];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  double local_28;
  
  local_28 = (double)(DAT_14c707940 ^ (ulonglong)auStack_78);
  local_58[2] = *(double *)(param_2 + 0x48);
  local_58[0] = *(double *)(param_2 + 0x38);
  local_58[1] = *(double *)(param_2 + 0x40);
  local_40._0_4_ = *(undefined4 *)(param_2 + 0x50);
  local_40._4_4_ = *(undefined4 *)(param_2 + 0x54);
  uStack_38 = *(undefined4 *)(param_2 + 0x58);
  uStack_34 = *(undefined4 *)(param_2 + 0x5c);
  local_30 = *(undefined8 *)(param_2 + 0x60);
  cVar7 = FUN_146e0527b(param_2,*param_1);
  if (cVar7 == '\0') {
    lVar8 = -3;
    do {
      dVar2 = *(double *)(param_1[4] + 0x18 + lVar8 * 8);
      if ((&local_28)[lVar8] <= dVar2 && dVar2 != (&local_28)[lVar8]) goto LAB_146e05411;
      pdVar1 = (double *)(param_1[4] + 0x30 + lVar8 * 8);
      if (*pdVar1 <= (double)(&local_40)[lVar8] && (double)(&local_40)[lVar8] != *pdVar1)
      goto LAB_146e05411;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0);
    uVar4 = *(undefined8 *)(param_2 + 8);
    plVar5 = *(longlong **)*param_1;
    lVar8 = ((longlong *)*param_1)[5];
    iVar3 = (int)plVar5[1];
    lVar9 = (longlong)iVar3;
    *(uint *)(plVar5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
      FUN_1400f3dc4(plVar5,iVar3);
    }
    lVar6 = *plVar5;
    *(longlong *)(lVar6 + lVar9 * 0x18) = lVar8;
    *(undefined8 *)(lVar6 + 8 + lVar9 * 0x18) = uVar4;
    *(undefined4 *)(lVar6 + 0x10 + lVar9 * 0x18) = 0;
    *(undefined1 *)(lVar6 + 0x14 + lVar9 * 0x18) = 1;
  }
LAB_146e05411:
  if (((ulonglong)local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e054ae FUN_146e054ae body=172 status=ok
// SIG undefined FUN_146e054ae(void)

undefined8 FUN_146e054ae(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x18] != puVar3[0x23]) {
    puVar5 = puVar3 + 0x24;
    if (*(uint **)(puVar3 + 0x26) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x26);
    }
    uVar4 = puVar5[puVar3[0x28] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x16);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e0555a FUN_146e0555a body=131 status=ok
// SIG undefined FUN_146e0555a(void)

void FUN_146e0555a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e055de(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e055de FUN_146e055de body=145 status=ok
// SIG undefined FUN_146e055de(void)

void FUN_146e055de(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e05670 FUN_146e05670 body=95 status=ok
// SIG undefined FUN_146e05670(void)

void FUN_146e05670(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_146c9de8c(param_2,*(longlong *)(lVar1 + lVar3) + 0x110);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  FUN_146e056d0(param_1,param_2);
  return;
}



// FUNCTION 146e056d0 FUN_146e056d0 body=140 status=ok
// SIG undefined FUN_146e056d0(void)

void FUN_146e056d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_146c9de8c(param_2,lVar3 + 0x10);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_146c9de8c(param_2,lVar3 + 0x108);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146e0575c FUN_146e0575c body=170 status=ok
// SIG undefined FUN_146e0575c(void)

void FUN_146e0575c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar6 = param_2 - *(int *)(param_1 + 2);
  if (iVar6 != 0 && *(int *)(param_1 + 2) <= param_2) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    plVar1 = param_1 + 1;
    if (*(int *)((longlong)param_1 + 0x14) < param_2) {
      FUN_145891620(plVar1);
    }
    do {
      puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      uVar2 = *(undefined4 *)(param_1 + 10);
      uVar3 = *(undefined4 *)(param_1 + 3);
      *puVar5 = *param_1;
      *(undefined4 *)(puVar5 + 1) = uVar2;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 8) = uVar3;
      *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
      iVar4 = *(int *)(param_1 + 2);
      *(uint *)(param_1 + 2) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14) < iVar4 + 1U) {
        FUN_146e05912(plVar1,iVar4);
      }
      *(undefined8 **)(*plVar1 + (longlong)iVar4 * 8) = puVar5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 146e05808 FUN_146e05808 body=92 status=ok
// SIG undefined FUN_146e05808(void)

void FUN_146e05808(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x38 + *param_1);
  FUN_140d9c907(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e05864 FUN_146e05864 body=63 status=ok
// SIG undefined FUN_146e05864(void)

void FUN_146e05864(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e058a4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 146e058a4 FUN_146e058a4 body=109 status=ok
// SIG undefined FUN_146e058a4(void)

ulonglong FUN_146e058a4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 146e05912 FUN_146e05912 body=132 status=ok
// SIG undefined FUN_146e05912(void)

void FUN_146e05912(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e05998 FUN_146e05998 body=1215 status=ok
// SIG undefined FUN_146e05998(void)

void FUN_146e05998(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong **local_1b0;
  undefined1 *local_1a8;
  undefined8 *local_1a0;
  undefined2 *local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  undefined8 uStack_170;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined1 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = *param_2;
  lVar9 = (longlong)(int)param_2[1];
  local_190 = param_4;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    if ((*(char *)(*(longlong *)(lVar7 + 0x2c0) + 0xd + lVar9 * 0x10) != '\0') ||
       ((*(char *)(*(longlong *)(lVar7 + 0x2c0) + 0xb + lVar9 * 0x10) == '\x01' &&
        (*(char *)(param_1 + 0x154) != '\x01')))) goto LAB_146e05d3b;
  }
  local_188 = param_3;
  if (*(char *)(*(longlong *)(lVar7 + 0x158) + lVar9) == '\x01') {
    lVar15 = *(longlong *)(lVar7 + 0xf8) + lVar9 * 0x18;
    lVar5 = *(longlong *)(lVar15 + 8);
    if (*(longlong *)(lVar15 + 8) == 0) {
      lVar5 = lVar15;
    }
    lVar6 = (longlong)*(int *)(lVar15 + 0x10);
    local_164 = 0;
    local_168 = 0;
    uVar14 = 0;
    uVar16 = 0;
    if (lVar6 != 0) {
      local_180 = lVar6 * 8;
      lVar13 = 0;
      local_164 = 0;
      local_168 = 0;
      uVar14 = 0;
      uVar16 = 0;
      do {
        lVar12 = *(longlong *)(lVar5 + lVar13);
        if ((lVar12 != 0) &&
           ((*(byte *)(lVar12 + 0x71 + (ulonglong)((*(uint *)(lVar12 + 8) & 3) == 0) * 8) & 5) != 0)
           ) {
          uVar8 = (ulonglong)((*(uint *)(lVar12 + 8) & 3) == 0);
          uVar16 = uVar16 | *(uint *)(lVar12 + 0x58 + uVar8 * 8);
          uVar14 = uVar14 | *(uint *)(lVar12 + 0x5c + uVar8 * 8);
          local_168 = local_168 | *(uint *)(lVar12 + 0x60 + uVar8 * 8);
          local_164 = local_164 | *(uint *)(lVar12 + 100 + uVar8 * 8);
        }
        lVar13 = lVar13 + 8;
      } while (local_180 != lVar13);
    }
    lVar12 = lVar9 * 0x30;
    lVar13 = *(longlong *)(lVar7 + 0x140);
    local_108 = *(undefined8 *)(lVar13 + 0x10 + lVar12);
    local_118 = *(undefined8 *)(lVar13 + lVar12);
    uStack_110 = ((undefined8 *)(lVar13 + lVar12))[1];
    puVar1 = (undefined8 *)(lVar13 + 0x18 + lVar12);
    local_100 = *puVar1;
    uStack_f8 = puVar1[1];
    local_f0 = *(undefined8 *)(lVar13 + 0x28 + lVar12);
    uStack_170 = CONCAT44(uVar14,uVar16);
    local_148 = *(undefined4 *)(*(longlong *)(lVar7 + 0x80) + lVar9 * 4);
    local_160 = 0;
    if (param_2 != (longlong *)0x0) {
      local_160 = local_148;
    }
    local_158 = *(undefined8 *)(*(longlong *)(lVar7 + 0xb0) + lVar9 * 8);
    local_144 = 0;
    uStack_13c = 0;
    local_134 = 0;
    uStack_12c = 0;
    local_124 = 0;
    if (param_2 != (longlong *)0x0) {
      if (*(int *)(lVar15 + 0x10) != 0) {
        lVar7 = 0;
        uVar16 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar14 = 0;
        do {
          lVar9 = *(longlong *)(lVar5 + lVar7);
          if ((lVar9 != 0) &&
             ((*(byte *)(lVar9 + 0x71 + (ulonglong)((*(uint *)(lVar9 + 8) & 3) == 0) * 8) & 2) != 0)
             ) {
            uVar8 = (ulonglong)((*(uint *)(lVar9 + 8) & 3) == 0);
            uVar14 = uVar14 | *(uint *)(lVar9 + 0x48 + uVar8 * 8);
            uVar11 = uVar11 | *(uint *)(lVar9 + 0x4c + uVar8 * 8);
            local_144 = CONCAT44(uVar11,uVar14);
            uVar10 = uVar10 | *(uint *)(lVar9 + 0x50 + uVar8 * 8);
            uVar16 = uVar16 | *(uint *)(lVar9 + 0x54 + uVar8 * 8);
            uStack_13c = CONCAT44(uVar16,uVar10);
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
        lVar7 = 0;
        uVar16 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar14 = 0;
        do {
          lVar9 = *(longlong *)(lVar5 + lVar7);
          if ((lVar9 != 0) &&
             ((*(byte *)(lVar9 + 0x71 + (ulonglong)((*(uint *)(lVar9 + 8) & 3) == 0) * 8) & 5) != 0)
             ) {
            uVar8 = (ulonglong)((*(uint *)(lVar9 + 8) & 3) == 0);
            uVar14 = uVar14 | *(uint *)(lVar9 + 0x58 + uVar8 * 8);
            uVar11 = uVar11 | *(uint *)(lVar9 + 0x5c + uVar8 * 8);
            local_134 = CONCAT44(uVar11,uVar14);
            uVar10 = uVar10 | *(uint *)(lVar9 + 0x60 + uVar8 * 8);
            uVar16 = uVar16 | *(uint *)(lVar9 + 100 + uVar8 * 8);
            uStack_12c = CONCAT44(uVar16,uVar10);
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      local_124 = 1;
    }
    iVar2 = *(int *)(param_3 + 0x20);
    local_178 = param_4;
    local_150 = param_2;
    if ((longlong)iVar2 != 0) {
      lVar7 = *(longlong *)(param_3 + 0x18);
      uVar14 = 0xfffffffc;
      lVar9 = 0;
      do {
        if (uVar14 < 0xfffffffe) {
          local_98 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_7e = 0;
          local_80 = 0;
          local_b8 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_1b0 = &local_178;
          local_1b8 = &local_118;
          local_1a8 = local_78;
          local_1a0 = &local_a8;
          local_198 = &local_80;
          local_b0 = local_78;
          FUN_14480acae(*(undefined8 *)(lVar7 + lVar9),&local_e8,&local_b0,&local_c8);
        }
        uVar14 = uVar14 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar9);
    }
  }
  else {
    local_178 = (longlong *)0x0;
    uStack_170 = 0;
    FUN_146e05670(param_3 + 0x118,&local_178);
    if ((int)uStack_170 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_170 & 0xffffffff);
    }
    if (*(int *)((longlong)local_190 + 0xc) < (int)uStack_170) {
      FUN_146e0520a(local_190);
    }
    plVar4 = local_178;
    if ((int)uStack_170 != 0) {
      lVar7 = (longlong)(int)uStack_170;
      lVar9 = 0;
      do {
        plVar3 = *(longlong **)((longlong)plVar4 + lVar9 + 8);
        if (plVar3 != param_2) {
          iVar2 = (int)local_190[1];
          lVar15 = (longlong)iVar2;
          *(uint *)(local_190 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)local_190 + 0xc) < iVar2 + 1U) {
            FUN_1400f3dc4(local_190,iVar2);
          }
          lVar5 = *local_190;
          *(longlong **)(lVar5 + lVar15 * 0x18) = param_2;
          *(longlong **)(lVar5 + 8 + lVar15 * 0x18) = plVar3;
          *(undefined4 *)(lVar5 + 0x10 + lVar15 * 0x18) = 1;
          *(undefined1 *)(lVar5 + 0x14 + lVar15 * 0x18) = 1;
        }
        lVar9 = lVar9 + 0x68;
      } while (lVar7 * 0x68 - lVar9 != 0);
    }
    if (local_178 != (longlong *)0x0) {
      FUN_1400020a8(local_178);
    }
  }
LAB_146e05d3b:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e05f06 FUN_146e05f06 body=123 status=ok
// SIG undefined FUN_146e05f06(void)

void FUN_146e05f06(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e05fce FUN_146e05fce body=118 status=ok
// SIG undefined FUN_146e05fce(void)

void FUN_146e05fce(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400b4f0c(param_1,iVar1);
    }
    FUN_1447c1a60((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146e06044(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e06044 FUN_146e06044 body=63 status=ok
// SIG undefined FUN_146e06044(void)

void FUN_146e06044(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e06084(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146e06084 FUN_146e06084 body=117 status=ok
// SIG undefined FUN_146e06084(void)

ulonglong FUN_146e06084(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x30) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 146e060fa FUN_146e060fa body=223 status=ok
// SIG undefined FUN_146e060fa(void)

undefined8 FUN_146e060fa(double *param_1,longlong *param_2,double *param_3)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_58 [56];
  double local_20;
  double dStack_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(*(longlong *)(*param_2 + 0x28) + (longlong)(int)param_2[1]) == '\x01') {
    lVar2 = *(longlong *)(*param_2 + 0x40);
    lVar5 = (longlong)(int)param_2[1] * 0x30;
    local_10 = *(double *)(lVar2 + 0x28 + lVar5);
    pdVar1 = (double *)(lVar2 + 0x18 + lVar5);
    local_20 = *pdVar1;
    dStack_18 = pdVar1[1];
    dVar3 = *(double *)(lVar2 + lVar5);
    dVar7 = ((double *)(lVar2 + lVar5))[1];
    param_3[2] = *(double *)(lVar2 + 0x10 + lVar5);
    *param_3 = dVar3;
    param_3[1] = dVar7;
    param_3[3] = local_20;
    param_3[4] = dStack_18;
    param_3[5] = local_10;
    dVar3 = param_3[5] - param_3[2];
    dVar8 = param_3[4] - param_3[1];
    dVar6 = param_3[3] - *param_3;
    dVar7 = dVar6;
    if ((dVar8 >= dVar6 || dVar3 >= dVar6) && (dVar7 = dVar8, dVar8 <= dVar3)) {
      dVar7 = dVar3;
    }
    uVar4 = CONCAT71((uint7)(-(ulonglong)(dVar8 < dVar6 && dVar3 < dVar6) >> 8) & 0xffffff,1);
    if (dVar7 < *param_1) goto LAB_146e061be;
  }
  uVar4 = 0;
LAB_146e061be:
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146e061da FUN_146e061da body=79 status=ok
// SIG undefined FUN_146e061da(void)

undefined8 * FUN_146e061da(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_146e066c6(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0622a FUN_146e0622a body=69 status=ok
// SIG undefined FUN_146e0622a(void)

void FUN_146e0622a(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = in_stack_00000028;
  FUN_146e07614();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e06270 FUN_146e06270 body=253 status=ok
// SIG undefined FUN_146e06270(void)

void FUN_146e06270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = param_6;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  local_a8 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(&local_68,param_3,param_4);
  local_c8 = local_38;
  local_d0 = local_60;
  local_e8 = &local_98;
  local_98 = 0x7fefffffffffffff;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0xffefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_d8 = local_68;
  local_e0 = &local_a0;
  FUN_1447f17e6(param_1,param_2,&local_68,&local_b8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0636e FUN_146e0636e body=62 status=ok
// SIG undefined FUN_146e0636e(void)

void FUN_146e0636e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1462864c2(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e063ae FUN_146e063ae body=56 status=ok
// SIG undefined FUN_146e063ae(void)

undefined8 * FUN_146e063ae(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1e0,0x10);
  FUN_146e0852e(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146e063e6 FUN_146e063e6 body=735 status=ok
// SIG undefined FUN_146e063e6(void)

void FUN_146e063e6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x28) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140d03e72(param_2);
  }
  FUN_146e08b02(param_2,param_1 + 0x10);
  FUN_146c9d951(param_2,param_1 + 0x38);
  FUN_146c9d951(param_2,param_1 + 0x110);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x1a < iVar7) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_58 = local_58 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar3 = (uint)(float)local_58;
      if (1 < (uint)(float)local_58) {
        FUN_14572541c(param_2);
        uVar3 = (uint)(float)local_58;
      }
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_146e064d7;
  }
  FUN_146e08e3a(param_1 + 0x120,param_2);
LAB_146e064d7:
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x130),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x130) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x134),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x134) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pdVar2 = (double *)(param_1 + 0x138);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_58 = CONCAT44(local_58._4_4_,(float)*pdVar2);
    puVar4 = (ulonglong *)param_2[1];
    puVar5 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar5) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar5;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_58;
    }
  }
  else {
    pdVar6 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x189) = 1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x188) = 0;
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x18a) = 1;
      *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e066c6 FUN_146e066c6 body=178 status=ok
// SIG undefined FUN_146e066c6(void)

void FUN_146e066c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_146e0677a(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0677a FUN_146e0677a body=1760 status=ok
// SIG undefined FUN_146e0677a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e0677a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined4 *puVar1;
  double dVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong **pplVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *unaff_RSI;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1168 [32];
  double *local_1148;
  longlong *local_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 local_1128;
  longlong local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 local_1100 [9];
  longlong local_10b8;
  double *local_10b0;
  double local_10a8 [7];
  longlong *local_1070;
  longlong *local_1068 [2];
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 *local_1028;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e06790;
  local_1108 = param_9;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1168;
  local_1070 = (longlong *)0x0;
  local_1118 = param_1;
  local_1110 = param_3;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x110);
    unaff_RSI = puVar16 + (longlong)*(int *)(param_1 + 0x118) * 0xd;
    do {
      local_10a8[2] = (double)puVar16[9];
      local_10a8[0] = (double)puVar16[7];
      local_10a8[1] = (double)puVar16[8];
      local_10a8[5] = (double)puVar16[0xc];
      local_10a8[3] = (double)puVar16[10];
      local_10a8[4] = (double)puVar16[0xb];
      lVar7 = 0;
      do {
        if ((local_10a8[lVar7 + 3] <= param_5[lVar7] && param_5[lVar7] != local_10a8[lVar7 + 3]) ||
           (param_5[lVar7 + 3] <= local_10a8[lVar7] && local_10a8[lVar7] != param_5[lVar7 + 3]))
        goto LAB_146e06904;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      local_1038 = puVar16[6];
      local_1048 = (double *)puVar16[4];
      uStack_1040 = puVar16[5];
      local_1058 = puVar16[2];
      uStack_1050 = (longlong **)puVar16[3];
      local_1068[0] = (longlong *)*puVar16;
      local_1068[1] = (longlong *)puVar16[1];
      plVar4 = (longlong *)*param_6;
      iVar6 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
        FUN_140187932(plVar4,iVar6);
        param_1 = local_1118;
      }
      lVar7 = *plVar4;
      lVar12 = (longlong)iVar6 * 0x38;
      *(undefined8 *)(lVar7 + 0x30 + lVar12) = local_1038;
      puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar12);
      *puVar1 = (undefined4)local_1048;
      puVar1[1] = local_1048._4_4_;
      puVar1[2] = (undefined4)uStack_1040;
      puVar1[3] = uStack_1040._4_4_;
      puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar12);
      *puVar1 = (undefined4)local_1058;
      puVar1[1] = local_1058._4_4_;
      puVar1[2] = (undefined4)uStack_1050;
      puVar1[3] = uStack_1050._4_4_;
      *(undefined8 *)(lVar7 + lVar12) = local_1068[0];
      ((undefined8 *)(lVar7 + lVar12))[1] = local_1068[1];
LAB_146e06904:
      puVar16 = puVar16 + 0xd;
    } while (puVar16 != unaff_RSI);
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    local_1068[0] = param_6;
    local_1058 = local_1110;
    uStack_1050 = &local_1070;
    local_1048 = param_5;
    uStack_1040 = param_4;
    local_1038 = param_7;
    local_1030 = param_8;
    local_1028 = &param_9;
    local_1068[1] = (longlong *)param_2;
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      if ((((0.0 < *(double *)(local_1118 + 0xd0)) &&
           (uVar13 = (ulonglong)*(int *)(local_1118 + 0xe0), 0 < (longlong)uVar13)) &&
          (0 < *(int *)(local_1118 + 0xe4))) &&
         ((0 < *(int *)(local_1118 + 0xe8) &&
          (*(int *)(local_1118 + 0x8c) < *(int *)(local_1118 + 0x60))))) {
        dVar2 = *(double *)(local_1118 + 0xd8);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = ABS(*param_5 * dVar2) * 2.220446049250313e-16 + *param_5 * dVar2;
        auVar21 = roundpd(auVar21,auVar21,1);
        lVar7 = (longlong)auVar21._0_8_;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = ABS(param_5[3] * dVar2) * 2.220446049250313e-16 + param_5[3] * dVar2;
        auVar21 = roundpd(auVar22,auVar22,1);
        lVar12 = (longlong)auVar21._0_8_;
        if (lVar7 <= lVar12) {
          auVar23._8_8_ = 0;
          auVar23._0_8_ = ABS(param_5[1] * dVar2) * 2.220446049250313e-16 + param_5[1] * dVar2;
          auVar21 = roundpd(auVar23,auVar23,1);
          lVar18 = (longlong)auVar21._0_8_;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = ABS(dVar2 * param_5[4]) * 2.220446049250313e-16 + dVar2 * param_5[4];
          auVar21 = roundpd(auVar20,auVar20,1);
          lVar15 = (longlong)auVar21._0_8_;
          if (((lVar18 <= lVar15) && (uVar14 = (lVar12 - lVar7) + 1, uVar14 <= uVar13)) &&
             ((uVar17 = (lVar15 - lVar18) + 1, uVar17 <= uVar13 &&
              (uVar17 = uVar17 * uVar14, uVar17 < uVar13 || uVar17 - uVar13 == 0)))) {
            local_10b0 = local_10a8;
            local_10a8[0] = 0.0;
            local_10a8[1] = 0.0;
            local_10b8 = local_1118;
            do {
              uVar10 = ((uint)lVar7 & 0xff00) << 8 | (uint)lVar7 & 0xff;
              uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
              uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
              lVar8 = lVar18;
              do {
                uVar11 = ((uint)lVar8 & 0xff00) << 8 | (uint)lVar8 & 0xff;
                uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                cVar5 = FUN_146e07452(&local_10b8,
                                      (uVar11 * 2 | uVar11 * 4) & 0xaaaaaaaa |
                                      (uVar10 * 2 | uVar10) & 0x55555555);
                if (cVar5 == '\0') goto LAB_146e06e13;
                lVar8 = lVar8 + 1;
              } while (lVar15 + 1 != lVar8);
              bVar19 = lVar7 != lVar12;
              lVar7 = lVar7 + 1;
            } while (bVar19);
LAB_146e06e13:
            pplVar9 = local_1068;
            puVar16 = local_1100;
            for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar16 = *pplVar9;
              pplVar9 = pplVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            uVar13 = FUN_146e06e5c(local_1118,local_10a8);
            unaff_RSI = (undefined8 *)(uVar13 & 0xffffffff);
            if (local_10a8[0] != 0.0) {
              FUN_1400020a8();
            }
            cVar5 = (char)unaff_RSI;
            goto joined_r0x000146e06d39;
          }
        }
      }
      unaff_RSI = *(undefined8 **)(local_1118 + 0x38);
      lVar7 = (ulonglong)*(uint *)(param_1 + 0x40) * 0x68;
      do {
        cVar5 = FUN_146e06f60(local_1068,unaff_RSI);
        if (cVar5 == '\0') goto LAB_146e06d3f;
        unaff_RSI = unaff_RSI + 0xd;
        lVar7 = lVar7 + -0x68;
      } while (lVar7 != 0);
    }
  }
  else {
    local_1128 = local_1108;
    local_1130 = param_8;
    local_1138 = param_7;
    local_1140 = param_6;
    local_1148 = param_5;
    cVar5 = FUN_146e0677a(*(longlong *)(param_1 + 200),param_2,local_1110,param_4);
joined_r0x000146e06d39:
    if (cVar5 == '\0') {
LAB_146e06d3f:
      uVar13 = 0;
      goto LAB_146e06cc9;
    }
  }
  local_78 = (longlong **)0x0;
  local_6c = 0xff;
  if (*(char *)(local_1118 + 0x48) == '\x01') {
    iVar6 = *(int *)(local_1118 + 0x4c);
    if (iVar6 != -1) {
LAB_146e06b46:
      local_70 = 1;
      local_1068[0] = (longlong *)CONCAT44(local_1068[0]._4_4_,iVar6);
      local_1068[1] = (longlong *)0x0;
      local_70 = 1;
      lVar7 = local_1118;
      do {
        pplVar9 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar9 = local_1068;
        }
        lVar15 = (longlong)(int)local_70;
        local_70 = local_70 - 1;
        lVar12 = *(longlong *)(lVar7 + 0x10) + (longlong)*(int *)(pplVar9 + lVar15 * 2 + -2) * 0x70;
        if ((*(byte *)(*(longlong *)(lVar7 + 0x10) + 0x6c +
                      (longlong)*(int *)(pplVar9 + lVar15 * 2 + -2) * 0x70) & 1) == 0) {
          lVar18 = 0;
          lVar15 = 0;
          do {
            uVar10 = local_70;
            plVar4 = local_1070;
            local_10a8[2] = (double)*(undefined8 *)(lVar12 + 0x10 + lVar15);
            local_10a8[0] = *(double *)(lVar12 + lVar15);
            local_10a8[1] = ((double *)(lVar12 + lVar15))[1];
            local_10a8[5] = (double)*(undefined8 *)(lVar12 + 0x28 + lVar15);
            puVar16 = (undefined8 *)(lVar12 + 0x18 + lVar15);
            local_10a8[3] = (double)*puVar16;
            local_10a8[4] = (double)puVar16[1];
            lVar8 = 0;
            do {
              if ((local_10a8[lVar8 + 3] <= param_5[lVar8] &&
                   param_5[lVar8] != local_10a8[lVar8 + 3]) ||
                 (param_5[lVar8 + 3] <= local_10a8[lVar8] && local_10a8[lVar8] != param_5[lVar8 + 3]
                 )) goto LAB_146e06c54;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 3);
            uVar3 = *(undefined4 *)(lVar12 + 0x60 + lVar18 * 4);
            lVar8 = (longlong)(int)local_70;
            local_70 = local_70 + 1;
            if (local_6c < local_70) {
              FUN_146e074fe(local_1068,uVar10);
              lVar7 = local_1118;
            }
            pplVar9 = local_78;
            if (local_78 == (longlong **)0x0) {
              pplVar9 = local_1068;
            }
            *(undefined4 *)(pplVar9 + lVar8 * 2) = uVar3;
            pplVar9[lVar8 * 2 + 1] = plVar4;
LAB_146e06c54:
            lVar18 = lVar18 + 1;
            lVar15 = lVar15 + 0x30;
          } while (lVar15 != 0x60);
        }
        else {
          cVar5 = FUN_146e07070((longlong)*(int *)(lVar12 + 0x60) * 0x48 +
                                *(longlong *)(lVar7 + 0x20),param_5,param_6);
          lVar7 = local_1118;
          if (cVar5 == '\0') {
            uVar13 = 0;
            goto LAB_146e06cb7;
          }
        }
      } while (local_70 != 0);
      uVar13 = CONCAT71((int7)((ulonglong)local_1068 >> 8),1);
LAB_146e06cb7:
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146e06cc9;
    }
  }
  else {
    iVar6 = 0;
    if (*(int *)(local_1118 + 0x18) != 0) goto LAB_146e06b46;
  }
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_146e06cc9:
  if ((local_60 ^ (ulonglong)auStack_1168) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e06e5c FUN_146e06e5c body=259 status=ok
// SIG undefined FUN_146e06e5c(void)

undefined8 FUN_146e06e5c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e06ec9:
      if (*(int *)(param_1 + 0xc0) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e06ec9;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e06f60(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x38));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e06f60 FUN_146e06f60 body=270 status=ok
// SIG undefined FUN_146e06f60(void)

undefined8 FUN_146e06f60(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  double local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = (double)*(undefined8 *)(param_2 + 0x12);
  local_48[0] = *(double *)(param_2 + 0xe);
  local_48[1] = (double)*(undefined8 *)(param_2 + 0x10);
  local_48[5] = (double)*(undefined8 *)(param_2 + 0x18);
  local_48[3] = (double)*(undefined8 *)(param_2 + 0x14);
  local_48[4] = (double)*(undefined8 *)(param_2 + 0x16);
  lVar6 = param_1[4];
  lVar7 = 0;
  do {
    dVar3 = *(double *)(lVar6 + lVar7 * 8);
    if (local_48[lVar7 + 3] <= dVar3 && dVar3 != local_48[lVar7 + 3]) goto LAB_146e07049;
    pdVar1 = (double *)(lVar6 + 0x18 + lVar7 * 8);
    if (*pdVar1 <= local_48[lVar7] && local_48[lVar7] != *pdVar1) goto LAB_146e07049;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  local_58 = *(undefined8 *)(param_2 + 0xc);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  local_68 = param_2[8];
  uStack_64 = param_2[9];
  uStack_60 = param_2[10];
  uStack_5c = param_2[0xb];
  plVar5 = *(longlong **)*param_1;
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_140187932(plVar5,iVar4);
  }
  lVar6 = *plVar5;
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_58;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = local_68;
  puVar2[1] = uStack_64;
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_5c;
  puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar7);
  *puVar2 = local_78;
  puVar2[1] = uStack_74;
  puVar2[2] = uStack_70;
  puVar2[3] = uStack_6c;
  puVar2 = (undefined4 *)(lVar6 + lVar7);
  *puVar2 = local_88;
  puVar2[1] = uStack_84;
  puVar2[2] = uStack_80;
  puVar2[3] = uStack_7c;
LAB_146e07049:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e07070 FUN_146e07070 body=993 status=ok
// SIG undefined FUN_146e07070(void)

undefined8 FUN_146e07070(longlong param_1,double *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar6;
  double dVar7;
  int iVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_108 [44];
  uint local_dc;
  longlong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  double dVar5;
  double dVar8;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar17 = *(uint *)(param_1 + 0x38);
  local_d0 = (ulonglong)uVar17;
  local_dc = uVar17 + 3;
  if (-1 < (int)uVar17) {
    local_dc = uVar17;
  }
  local_dc = (int)local_dc >> 2;
  local_d8 = param_3;
  if (3 < (int)uVar17) {
    local_c8 = (ulonglong)local_dc;
    lVar22 = 0;
    uVar26 = 0;
    do {
      lVar23 = *(longlong *)(param_1 + 0x30);
      lVar20 = (uVar26 * 4 + 3) * 0x68;
      lVar21 = (uVar26 * 4 + 2) * 0x68;
      lVar25 = (uVar26 * 4 + 1) * 0x68;
      lVar24 = uVar26 * 0x1a0;
      dVar4 = param_2[3];
      dVar5 = param_2[3];
      lVar27 = -(ulonglong)(*(double *)(lVar23 + 0x50 + lVar20) < *param_2);
      lVar28 = -(ulonglong)(dVar5 < *(double *)(lVar23 + 0x38 + lVar25));
      auVar33._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar23 + 0x38 + lVar20));
      auVar33._0_8_ = -(ulonglong)(dVar4 < *(double *)(lVar23 + 0x38 + lVar21));
      dVar5 = param_2[1];
      dVar6 = param_2[1];
      auVar30._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x58 + lVar25) < dVar6);
      auVar30._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x58 + lVar24) < dVar5);
      auVar13._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x50 + lVar25) < *param_2);
      auVar13._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x50 + lVar24) < *param_2);
      auVar35._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x58 + lVar20) < dVar6);
      auVar35._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x58 + lVar21) < dVar5);
      dVar5 = param_2[4];
      dVar6 = param_2[4];
      auVar11._8_4_ = (int)lVar27;
      auVar11._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x50 + lVar21) < *param_2);
      auVar11._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      lVar27 = -(ulonglong)(dVar6 < *(double *)(lVar23 + 0x40 + lVar25));
      dVar7 = param_2[2];
      dVar8 = param_2[2];
      auVar29._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x60 + lVar25) < dVar8);
      auVar29._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x60 + lVar24) < dVar7);
      auVar15._8_4_ = (int)lVar28;
      auVar15._0_8_ = -(ulonglong)(dVar4 < *(double *)(lVar23 + 0x38 + lVar24));
      auVar15._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      auVar31._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x60 + lVar20) < dVar8);
      auVar31._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x60 + lVar21) < dVar7);
      dVar4 = param_2[5];
      dVar7 = param_2[5];
      auVar34._8_8_ = -(ulonglong)(dVar7 < *(double *)(lVar23 + 0x48 + lVar25));
      auVar34._0_8_ = -(ulonglong)(dVar4 < *(double *)(lVar23 + 0x48 + lVar24));
      auVar12._8_4_ = (int)lVar27;
      auVar12._0_8_ = -(ulonglong)(dVar5 < *(double *)(lVar23 + 0x40 + lVar24));
      auVar12._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
      auVar32._8_8_ = -(ulonglong)(dVar7 < *(double *)(lVar23 + 0x48 + lVar20));
      auVar32._0_8_ = -(ulonglong)(dVar4 < *(double *)(lVar23 + 0x48 + lVar21));
      auVar14._8_8_ = -(ulonglong)(dVar6 < *(double *)(lVar23 + 0x40 + lVar20));
      auVar14._0_8_ = -(ulonglong)(dVar5 < *(double *)(lVar23 + 0x40 + lVar21));
      iVar16 = movmskpd((int)lVar23,auVar34 | auVar12 | auVar29 | auVar15 | auVar30 | auVar13);
      iVar19 = movmskpd((int)lVar20,auVar32 | auVar14 | auVar31 | auVar33 | auVar35 | auVar11);
      lVar23 = 0;
      local_c0 = lVar22;
      do {
        if (((uint)(iVar16 + iVar19 * 4) >> ((uint)lVar23 & 0x1f) & 1) == 0) {
          lVar20 = *(longlong *)(param_1 + 0x30);
          local_88 = *(undefined8 *)(lVar20 + 0x30 + lVar22);
          local_b8 = *(undefined8 *)(lVar20 + lVar22);
          uStack_b0 = ((undefined8 *)(lVar20 + lVar22))[1];
          puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar22);
          local_a8 = *puVar1;
          uStack_a4 = puVar1[1];
          uStack_a0 = puVar1[2];
          uStack_9c = puVar1[3];
          puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar22);
          local_98 = *puVar1;
          uStack_94 = puVar1[1];
          uStack_90 = puVar1[2];
          uStack_8c = puVar1[3];
          plVar10 = (longlong *)*param_3;
          iVar9 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar9 + 1U) {
            FUN_140187932(plVar10,iVar9);
            param_3 = local_d8;
          }
          lVar20 = *plVar10;
          lVar21 = (longlong)iVar9 * 0x38;
          *(undefined8 *)(lVar20 + 0x30 + lVar21) = local_88;
          puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar21);
          *puVar1 = local_98;
          puVar1[1] = uStack_94;
          puVar1[2] = uStack_90;
          puVar1[3] = uStack_8c;
          puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar21);
          *puVar1 = local_a8;
          puVar1[1] = uStack_a4;
          puVar1[2] = uStack_a0;
          puVar1[3] = uStack_9c;
          *(undefined8 *)(lVar20 + lVar21) = local_b8;
          ((undefined8 *)(lVar20 + lVar21))[1] = uStack_b0;
        }
        lVar23 = lVar23 + 1;
        lVar22 = lVar22 + 0x68;
      } while (lVar23 != 4);
      uVar26 = uVar26 + 1;
      lVar22 = local_c0 + 0x1a0;
    } while (uVar26 != local_c8);
  }
  uVar17 = local_dc << 2;
  puVar18 = (undefined8 *)(ulonglong)uVar17;
  iVar16 = (int)local_d0;
  if ((int)uVar17 < iVar16) {
    lVar22 = (longlong)(int)uVar17;
    lVar23 = lVar22 * 0x68 + 0x50;
    do {
      puVar18 = (undefined8 *)(lVar22 * 0x68 + *(longlong *)(param_1 + 0x30));
      lVar20 = *(longlong *)(param_1 + 0x30) + lVar23;
      lVar21 = -3;
      do {
        dVar4 = *(double *)(lVar20 + lVar21 * 8);
        if ((param_2[lVar21 + 6] <= dVar4 && dVar4 != param_2[lVar21 + 6]) ||
           (pdVar2 = (double *)(lVar20 + 0x18 + lVar21 * 8),
           *pdVar2 <= param_2[lVar21 + 3] && param_2[lVar21 + 3] != *pdVar2)) goto LAB_146e073f9;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0);
      local_88 = puVar18[6];
      local_b8 = *puVar18;
      uStack_b0 = puVar18[1];
      local_a8 = *(undefined4 *)(puVar18 + 2);
      uStack_a4 = *(undefined4 *)((longlong)puVar18 + 0x14);
      uStack_a0 = *(undefined4 *)(puVar18 + 3);
      uStack_9c = *(undefined4 *)((longlong)puVar18 + 0x1c);
      local_98 = *(undefined4 *)(puVar18 + 4);
      uStack_94 = *(undefined4 *)((longlong)puVar18 + 0x24);
      uStack_90 = *(undefined4 *)(puVar18 + 5);
      uStack_8c = *(undefined4 *)((longlong)puVar18 + 0x2c);
      plVar10 = (longlong *)*param_3;
      iVar19 = (int)plVar10[1];
      lVar20 = (longlong)iVar19;
      *(uint *)(plVar10 + 1) = iVar19 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar19 + 1U) {
        FUN_140187932(plVar10,iVar19);
        param_3 = local_d8;
      }
      puVar18 = (undefined8 *)*plVar10;
      puVar18[lVar20 * 7 + 6] = local_88;
      puVar3 = puVar18 + lVar20 * 7 + 4;
      *(undefined4 *)puVar3 = local_98;
      *(undefined4 *)((longlong)puVar3 + 4) = uStack_94;
      *(undefined4 *)(puVar3 + 1) = uStack_90;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_8c;
      puVar3 = puVar18 + lVar20 * 7 + 2;
      *(undefined4 *)puVar3 = local_a8;
      *(undefined4 *)((longlong)puVar3 + 4) = uStack_a4;
      *(undefined4 *)(puVar3 + 1) = uStack_a0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_9c;
      puVar18[lVar20 * 7] = local_b8;
      (puVar18 + lVar20 * 7)[1] = uStack_b0;
LAB_146e073f9:
      lVar22 = lVar22 + 1;
      lVar23 = lVar23 + 0x68;
    } while (iVar16 != (int)lVar22);
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)puVar18 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e07452 FUN_146e07452 body=172 status=ok
// SIG undefined FUN_146e07452(void)

undefined8 FUN_146e07452(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x18] != puVar3[0x23]) {
    puVar5 = puVar3 + 0x24;
    if (*(uint **)(puVar3 + 0x26) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x26);
    }
    uVar4 = puVar5[puVar3[0x28] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x16);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e074fe FUN_146e074fe body=131 status=ok
// SIG undefined FUN_146e074fe(void)

void FUN_146e074fe(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e07582(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e07582 FUN_146e07582 body=145 status=ok
// SIG undefined FUN_146e07582(void)

void FUN_146e07582(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e07614 FUN_146e07614 body=231 status=ok
// SIG undefined FUN_146e07614(void)

void FUN_146e07614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_b8 = local_30;
  local_c0 = local_58;
  local_d8 = &local_90;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0x7fefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_68 = 0xffefffffffffffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c8 = local_60;
  local_d0 = param_5;
  FUN_14473e9c0(param_1,param_2,&local_60);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e076fc FUN_146e076fc body=320 status=ok
// SIG undefined FUN_146e076fc(void)

undefined8 FUN_146e076fc(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c)) {
    lVar6 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x98);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e077f2;
            goto LAB_146e077b1;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e0770f;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e0770f;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e077f2:
    if (uVar10 == uVar5) goto LAB_146e0770f;
  }
LAB_146e077b1:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e0770f:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e0783c FUN_146e0783c body=978 status=ok
// SIG undefined FUN_146e0783c(void)

undefined8 FUN_146e0783c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  plVar1 = (longlong *)(lVar2 + 0x58);
  iVar10 = *(int *)(lVar2 + 0x60);
  iVar13 = *(int *)(lVar2 + 0x8c);
  local_5c = param_2;
  if (iVar10 != iVar13) {
    lVar4 = *(longlong *)(lVar2 + 0x98);
    if (*(longlong *)(lVar2 + 0x98) == 0) {
      lVar4 = lVar2 + 0x90;
    }
    uVar12 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      iVar6 = *(int *)param_1[1];
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar12 * 0x14);
        if (*puVar9 == param_2) {
          if (puVar9 + 1 != (uint *)0x0 && puVar9 != (uint *)0x0) {
            uVar12 = puVar9[2];
            uVar7 = (ulonglong)uVar12;
            if (0 < (int)uVar12) {
              uVar3 = puVar9[1];
              uVar5 = (uVar12 + uVar3) - 1;
              local_68 = (ulonglong)uVar5;
              uVar15 = (int)(uVar5 + uVar3) / 2;
              iVar14 = *(int *)(*(longlong *)(lVar2 + 0xa8) + (longlong)(int)uVar15 * 4);
              uVar11 = uVar5;
              local_70 = uVar7;
              if (iVar14 != iVar6) goto LAB_146e07b50;
              goto LAB_146e07a37;
            }
          }
          break;
        }
        uVar12 = puVar9[3];
      } while (uVar12 != 0xffffffff);
    }
    goto LAB_146e078c9;
  }
  iVar6 = *(int *)param_1[2];
  goto LAB_146e07a9d;
  while( true ) {
    if (iVar13 < iVar6) {
      uVar3 = uVar11 + 1;
      iVar13 = uVar12 + uVar11 + 1;
    }
    else {
      if (uVar11 == uVar3) goto LAB_146e07bae;
      uVar12 = uVar11 - 1;
      iVar13 = uVar11 + uVar3 + -1;
    }
    uVar11 = iVar13 / 2;
    iVar13 = *(int *)(lVar4 + (longlong)(int)uVar11 * 4);
    if (iVar13 == iVar6) break;
LAB_146e07986:
    if (uVar3 == uVar12) {
      uVar3 = uVar3 + (iVar13 < iVar6);
LAB_146e07bae:
      if (uVar3 != 0xffffffff) {
        if ((int)uVar3 < iVar10) {
          lVar4 = (longlong)iVar10;
          do {
            *(undefined4 *)(*(longlong *)(lVar2 + 0xa8) + lVar4 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar2 + 0xa8) + -4 + lVar4 * 4);
            lVar4 = lVar4 + -1;
          } while ((int)uVar3 < lVar4);
          lVar4 = *(longlong *)(lVar2 + 0xa8);
        }
        piVar8 = (int *)(lVar4 + (longlong)(int)uVar3 * 4);
LAB_146e07a88:
        puVar9 = puVar9 + 2;
        *piVar8 = iVar6;
        goto LAB_146e07b22;
      }
      break;
    }
  }
  goto LAB_146e07b24;
  while( true ) {
    if (iVar14 < iVar6) {
      uVar3 = uVar15 + 1;
      iVar14 = uVar15 + uVar11 + 1;
    }
    else {
      if (uVar15 == uVar3) goto LAB_146e078c9;
      uVar11 = uVar15 - 1;
      iVar14 = uVar15 + uVar3 + -1;
    }
    uVar15 = iVar14 / 2;
    iVar14 = *(int *)(*(longlong *)(lVar2 + 0xa8) + (longlong)(int)uVar15 * 4);
    if (iVar14 == iVar6) break;
LAB_146e07b50:
    if (uVar3 == uVar11) goto LAB_146e078c9;
  }
LAB_146e07a37:
  if (uVar15 != 0xffffffff) {
    if ((int)uVar15 < (int)uVar5) {
      lVar4 = (longlong)(int)uVar15;
      do {
        *(undefined4 *)(*(longlong *)(lVar2 + 0xa8) + lVar4 * 4) =
             *(undefined4 *)(*(longlong *)(lVar2 + 0xa8) + 4 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while ((int)uVar5 != lVar4);
      uVar12 = puVar9[2];
    }
    puVar9[2] = uVar12 - 1;
    iVar10 = *(int *)(lVar2 + 0x60);
    iVar13 = *(int *)(lVar2 + 0x8c);
  }
LAB_146e078c9:
  iVar6 = *(int *)param_1[2];
  if (iVar10 != iVar13) {
    lVar4 = lVar2 + 0x90;
    if (*(longlong *)(lVar2 + 0x98) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x98);
    }
    uVar12 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar12 * 0x14);
        if (*puVar9 == param_2) {
          if ((puVar9 != (uint *)0x0) && (puVar9 + 1 != (uint *)0x0)) {
            uVar12 = puVar9[2];
            if (*(int *)(lVar2 + 0xe8) <= (int)uVar12) goto LAB_146e07b24;
            uVar3 = puVar9[1];
            if ((int)uVar12 < 1) {
              piVar8 = (int *)((longlong)(int)uVar3 * 4 + *(longlong *)(lVar2 + 0xa8));
              goto LAB_146e07a88;
            }
            iVar10 = uVar3 + uVar12;
            lVar4 = *(longlong *)(lVar2 + 0xa8);
            uVar11 = (int)(uVar3 + iVar10 + -1) / 2;
            iVar13 = *(int *)(lVar4 + (longlong)(int)uVar11 * 4);
            if (iVar13 == iVar6) goto LAB_146e07b24;
            uVar12 = (uVar12 + uVar3) - 1;
            goto LAB_146e07986;
          }
          break;
        }
        uVar12 = puVar9[3];
      } while (uVar12 != 0xffffffff);
    }
  }
LAB_146e07a9d:
  local_58 = &local_5c;
  FUN_146dee3ec(plVar1,&local_4c,&local_58,0);
  lVar4 = *(longlong *)(lVar2 + 0x58) + (longlong)local_4c * 0x14;
  piVar8 = (int *)(lVar4 + 4);
  *piVar8 = *(int *)(lVar2 + 0xb0);
  *(undefined4 *)(lVar4 + 8) = 1;
  iVar10 = *(int *)(lVar2 + 0xb0);
  *(uint *)(lVar2 + 0xb0) = iVar10 + *(uint *)(lVar2 + 0xe8);
  if ((uint)(*(int *)(lVar2 + 0xb4) - iVar10) < *(uint *)(lVar2 + 0xe8)) {
    FUN_1446f48e2(lVar2 + 0xa8);
  }
  *(int *)(*(longlong *)(lVar2 + 0xa8) + (longlong)*piVar8 * 4) = iVar6;
  puVar9 = (uint *)(lVar2 + 0xec);
LAB_146e07b22:
  *puVar9 = *puVar9 + 1;
LAB_146e07b24:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
}



// FUNCTION 146e07c10 FUN_146e07c10 body=132 status=ok
// SIG undefined FUN_146e07c10(void)

undefined8 FUN_146e07c10(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x60) != *(int *)(lVar2 + 0x8c)) {
    lVar3 = lVar2 + 0x90;
    if (*(longlong *)(lVar2 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x98);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x58) + (longlong)(int)uVar4 * 0x14);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return 1;
          }
          if ((int)puVar1[2] < *(int *)(lVar2 + 0xe8)) {
            return 1;
          }
          *(undefined1 *)param_1[1] = 0;
          return 0;
        }
        uVar4 = puVar1[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return 1;
}



// FUNCTION 146e07c94 FUN_146e07c94 body=560 status=ok
// SIG undefined FUN_146e07c94(void)

undefined8 FUN_146e07c94(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = *(int *)param_1[1];
  local_34 = param_2;
  if (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c)) {
    lVar5 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x98);
    }
    uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & param_2) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar6 = (uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar9 * 0x14);
        if (*puVar6 == param_2) {
          if ((puVar6 != (uint *)0x0) && (puVar6 + 1 != (uint *)0x0)) {
            uVar9 = puVar6[2];
            if (*(int *)(lVar3 + 0xe8) <= (int)uVar9) goto LAB_146e07d95;
            uVar4 = puVar6[1];
            if ((int)uVar9 < 1) {
              piVar7 = (int *)((longlong)(int)uVar4 * 4 + *(longlong *)(lVar3 + 0xa8));
              goto LAB_146e07e6b;
            }
            iVar2 = uVar4 + uVar9;
            lVar5 = *(longlong *)(lVar3 + 0xa8);
            uVar8 = (int)(uVar4 + iVar2 + -1) / 2;
            iVar10 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
            if (iVar10 == iVar1) goto LAB_146e07d95;
            uVar9 = (uVar9 + uVar4) - 1;
            goto LAB_146e07e0f;
          }
          break;
        }
        uVar9 = puVar6[3];
      } while (uVar9 != 0xffffffff);
    }
  }
  local_30 = &local_34;
  FUN_146dee3ec((longlong *)(lVar3 + 0x58),&local_24,&local_30,0);
  lVar5 = *(longlong *)(lVar3 + 0x58) + (longlong)local_24 * 0x14;
  piVar7 = (int *)(lVar5 + 4);
  *piVar7 = *(int *)(lVar3 + 0xb0);
  *(undefined4 *)(lVar5 + 8) = 1;
  iVar2 = *(int *)(lVar3 + 0xb0);
  *(uint *)(lVar3 + 0xb0) = iVar2 + *(uint *)(lVar3 + 0xe8);
  if ((uint)(*(int *)(lVar3 + 0xb4) - iVar2) < *(uint *)(lVar3 + 0xe8)) {
    FUN_1446f48e2(lVar3 + 0xa8);
  }
  *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)*piVar7 * 4) = iVar1;
  puVar6 = (uint *)(lVar3 + 0xec);
LAB_146e07d93:
  *puVar6 = *puVar6 + 1;
  goto LAB_146e07d95;
  while( true ) {
    if (iVar10 < iVar1) {
      uVar4 = uVar8 + 1;
      iVar10 = uVar9 + uVar8 + 1;
    }
    else {
      if (uVar8 == uVar4) goto LAB_146e07e83;
      uVar9 = uVar8 - 1;
      iVar10 = uVar8 + uVar4 + -1;
    }
    uVar8 = iVar10 / 2;
    iVar10 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
    if (iVar10 == iVar1) break;
LAB_146e07e0f:
    if (uVar4 == uVar9) {
      uVar4 = uVar4 + (iVar10 < iVar1);
LAB_146e07e83:
      if (uVar4 != 0xffffffff) {
        if ((int)uVar4 < iVar2) {
          lVar5 = (longlong)iVar2;
          do {
            *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + lVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + -4 + lVar5 * 4);
            lVar5 = lVar5 + -1;
          } while ((int)uVar4 < lVar5);
          lVar5 = *(longlong *)(lVar3 + 0xa8);
        }
        piVar7 = (int *)(lVar5 + (longlong)(int)uVar4 * 4);
LAB_146e07e6b:
        puVar6 = puVar6 + 2;
        *piVar7 = iVar1;
        goto LAB_146e07d93;
      }
      break;
    }
  }
LAB_146e07d95:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
}



// FUNCTION 146e07ec6 FUN_146e07ec6 body=320 status=ok
// SIG undefined FUN_146e07ec6(void)

undefined8 FUN_146e07ec6(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c)) {
    lVar6 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x98);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e07fbc;
            goto LAB_146e07f7b;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e07ed9;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e07ed9;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e07fbc:
    if (uVar10 == uVar5) goto LAB_146e07ed9;
  }
LAB_146e07f7b:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e07ed9:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}


