// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e4ac7e FUN_147e4ac7e body=137 status=ok
// SIG undefined FUN_147e4ac7e(void)

longlong * FUN_147e4ac7e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  iVar1 = (int)param_2[1];
  uVar6 = (ulonglong)iVar1;
  if (0 < (longlong)uVar6) {
    lVar2 = *param_2;
    lVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,uVar6 << 4);
    *param_1 = lVar4;
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      *(longlong *)(lVar4 + lVar7) = lVar3;
      if (lVar3 != 0) {
        FUN_144b3d910();
      }
      *(undefined4 *)(lVar4 + 8 + lVar7) = *(undefined4 *)(lVar2 + 8 + lVar7);
      lVar7 = lVar7 + 0x10;
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 147e4ad08 FUN_147e4ad08 body=128 status=ok
// SIG undefined FUN_147e4ad08(void)

longlong * FUN_147e4ad08(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  iVar1 = (int)param_2[1];
  uVar4 = (ulonglong)iVar1;
  if (0 < (longlong)uVar4) {
    lVar5 = *param_2;
    lVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,uVar4 * 0x18);
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    do {
      FUN_147e4ad88(lVar2,lVar5);
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      lVar2 = lVar2 + 0x18;
      lVar5 = lVar5 + 0x18;
    } while (uVar3 != 0);
  }
  return param_1;
}



// FUNCTION 147e4ad88 FUN_147e4ad88 body=119 status=ok
// SIG undefined FUN_147e4ad88(void)

longlong * FUN_147e4ad88(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  iVar1 = (int)param_2[1];
  uVar7 = (ulonglong)iVar1;
  if (0 < (longlong)uVar7) {
    lVar2 = *param_2;
    lVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,uVar7 << 4);
    *param_1 = lVar4;
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    lVar5 = 0;
    do {
      uVar3 = ((undefined8 *)(lVar2 + lVar5))[1];
      *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
      ((undefined8 *)(lVar4 + lVar5))[1] = uVar3;
      lVar5 = lVar5 + 0x10;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 147e4ae00 FUN_147e4ae00 body=126 status=ok
// SIG undefined FUN_147e4ae00(void)

void FUN_147e4ae00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x18;
    do {
      *(undefined4 *)(lVar1 + -0x10 + lVar4) = 0;
      lVar3 = (longlong)*(int *)(lVar1 + -0xc + lVar4);
      if ((-1 < lVar3) && (lVar2 = *(longlong *)(lVar1 + -0x18 + lVar4), lVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar2,lVar3 << 4);
      }
      *(undefined8 *)(lVar1 + -0x18 + lVar4) = 0;
      *(undefined4 *)(lVar1 + -0xc + lVar4) = 0x80000000;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 147e4ae7e FUN_147e4ae7e body=114 status=ok
// SIG undefined FUN_147e4ae7e(void)

void FUN_147e4ae7e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] << 4;
    do {
      if (*(longlong *)(lVar1 + -0x10 + lVar2) != 0) {
        FUN_144b3f230();
      }
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e4aef0 FUN_147e4aef0 body=44 status=ok
// SIG undefined FUN_147e4aef0(void)

undefined8 FUN_147e4aef0(undefined8 param_1,int param_2)

{
  FUN_147e4af1c();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4af1c FUN_147e4af1c body=66 status=ok
// SIG undefined FUN_147e4af1c(void)

void FUN_147e4af1c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aba2b40;
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  FUN_147e4af5e(param_1 + 5);
  FUN_147e4afd0(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e4af5e FUN_147e4af5e body=114 status=ok
// SIG undefined FUN_147e4af5e(void)

void FUN_147e4af5e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] << 3;
    do {
      if (*(longlong *)(lVar1 + -8 + lVar2) != 0) {
        FUN_144b3f230();
      }
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e4afd0 FUN_147e4afd0 body=122 status=ok
// SIG undefined FUN_147e4afd0(void)

void FUN_147e4afd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x60;
    do {
      if (*(longlong *)(lVar1 + -0x60 + lVar2) != 0) {
        FUN_144b3f230();
      }
      lVar2 = lVar2 + -0x60;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x60);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e4b04a FUN_147e4b04a body=31 status=ok
// SIG undefined FUN_147e4b04a(void)

undefined8 FUN_147e4b04a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e4b07e FUN_147e4b07e body=93 status=ok
// SIG undefined FUN_147e4b07e(void)

void FUN_147e4b07e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba2c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e4b0dc FUN_147e4b0dc body=93 status=ok
// SIG undefined FUN_147e4b0dc(void)

void FUN_147e4b0dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba2c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e4b13a FUN_147e4b13a body=126 status=ok
// SIG undefined FUN_147e4b13a(void)

void FUN_147e4b13a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba2c10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e4b1a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e4b294 FUN_147e4b294 body=29 status=ok
// SIG undefined FUN_147e4b294(void)

undefined8 FUN_147e4b294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e4b2b2 FUN_147e4b2b2 body=83 status=ok
// SIG undefined FUN_147e4b2b2(void)

void FUN_147e4b2b2(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a8f30;
  uVar2 = (ushort)DAT_14c9a8f30;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a8fc8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a8f30);
  }
  else {
    (*DAT_14c9a8fc8)();
  }
  *(undefined1 *)(param_2 + 4) = 9;
  return;
}



// FUNCTION 147e4b306 FUN_147e4b306 body=83 status=ok
// SIG undefined FUN_147e4b306(void)

void FUN_147e4b306(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a8f30;
  uVar2 = (ushort)DAT_14c9a8f30;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a8fc8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a8f30);
  }
  else {
    (*DAT_14c9a8fc8)();
  }
  *(undefined1 *)(param_2 + 4) = 9;
  return;
}



// FUNCTION 147e4b35a FUN_147e4b35a body=81 status=ok
// SIG undefined FUN_147e4b35a(void)

void FUN_147e4b35a(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 147e4b3c2 FUN_147e4b3c2 body=283 status=ok
// SIG undefined FUN_147e4b3c2(void)

undefined8 FUN_147e4b3c2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 147e4b506 FUN_147e4b506 body=59 status=ok
// SIG undefined FUN_147e4b506(void)

undefined8 FUN_147e4b506(longlong *param_1)

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



// FUNCTION 147e4b5a4 FUN_147e4b5a4 body=85 status=ok
// SIG undefined FUN_147e4b5a4(void)

void FUN_147e4b5a4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147e4b5fa FUN_147e4b5fa body=39 status=ok
// SIG undefined FUN_147e4b5fa(void)

void FUN_147e4b5fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14072f9ac();
  FUN_14470ec92(uVar1,param_1,&DAT_14cb1cf38,0);
  return;
}



// FUNCTION 147e4b622 FUN_147e4b622 body=147 status=ok
// SIG undefined FUN_147e4b622(void)

void FUN_147e4b622(longlong param_1,int param_2)

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



// FUNCTION 147e4b6b6 FUN_147e4b6b6 body=44 status=ok
// SIG undefined FUN_147e4b6b6(void)

undefined8 FUN_147e4b6b6(undefined8 param_1,int param_2)

{
  FUN_144bdf150();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4b6ea FUN_147e4b6ea body=102 status=ok
// SIG undefined FUN_147e4b6ea(void)

size_t FUN_147e4b6ea(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    iVar1 = *(int *)(lVar2 + 8);
    iVar4 = *(int *)(param_1 + 0x28) + (int)param_3;
    uVar3 = iVar4 - iVar1;
    if (0 < (int)uVar3) {
      *(int *)(lVar2 + 8) = iVar4;
      if ((uint)(*(int *)(lVar2 + 0xc) - iVar1) < uVar3) {
        FUN_1447403be();
      }
    }
    memcpy((void *)((longlong)*(int *)(param_1 + 0x28) + **(longlong **)(param_1 + 0x18)),param_2,
           param_3);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_3;
  }
  return param_3;
}



// FUNCTION 147e4b750 FUN_147e4b750 body=1 status=ok
// SIG undefined FUN_147e4b750(void)

void FUN_147e4b750(void)

{
  return;
}



// FUNCTION 147e4b7a6 FUN_147e4b7a6 body=45 status=ok
// SIG undefined FUN_147e4b7a6(void)

undefined8 * FUN_147e4b7a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4b7d4 FUN_147e4b7d4 body=45 status=ok
// SIG undefined FUN_147e4b7d4(void)

undefined8 * FUN_147e4b7d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4b802 FUN_147e4b802 body=45 status=ok
// SIG undefined FUN_147e4b802(void)

undefined8 * FUN_147e4b802(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4b83c FUN_147e4b83c body=45 status=ok
// SIG undefined FUN_147e4b83c(void)

undefined8 * FUN_147e4b83c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4b86a FUN_147e4b86a body=135 status=ok
// SIG undefined FUN_147e4b86a(void)

void FUN_147e4b86a(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e4b8f2 FUN_147e4b8f2 body=35 status=ok
// SIG undefined FUN_147e4b8f2(void)

undefined8 FUN_147e4b8f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4b946 FUN_147e4b946 body=86 status=ok
// SIG undefined FUN_147e4b946(void)

void FUN_147e4b946(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 8;
  FUN_144b4abc0(param_2,&local_11,*(undefined8 *)(param_1 + 0x10));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4b9ae FUN_147e4b9ae body=35 status=ok
// SIG undefined FUN_147e4b9ae(void)

undefined8 FUN_147e4b9ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4ba02 FUN_147e4ba02 body=86 status=ok
// SIG undefined FUN_147e4ba02(void)

void FUN_147e4ba02(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 8;
  FUN_144b4abc0(param_2,&local_11,*(undefined8 *)(param_1 + 0x10));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4ba6a FUN_147e4ba6a body=35 status=ok
// SIG undefined FUN_147e4ba6a(void)

undefined8 FUN_147e4ba6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4babe FUN_147e4babe body=86 status=ok
// SIG undefined FUN_147e4babe(void)

void FUN_147e4babe(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_11;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 8;
  FUN_144b4abc0(param_2,&local_11,*(undefined8 *)(param_1 + 0x10));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4bb26 FUN_147e4bb26 body=349 status=ok
// SIG undefined FUN_147e4bb26(void)

longlong FUN_147e4bb26(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (undefined4 *)param_1[1];
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    local_30 = 0x40;
    puVar1 = (undefined4 *)(*DAT_14c787670)(0,&local_30,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"hkAsyncThreadPoolMutex");
    }
    *puVar1 = 0;
    FUN_144bdde80(puVar1 + 2);
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    LOCK();
    puVar2 = (undefined4 *)param_1[1];
    bVar6 = puVar2 == (undefined4 *)0x0;
    if (bVar6) {
      param_1[1] = (longlong)puVar1;
      puVar2 = (undefined4 *)0x0;
    }
    UNLOCK();
    puVar5 = puVar1;
    if ((!bVar6) && (puVar5 = puVar2, puVar1 != (undefined4 *)0x0)) {
      FUN_144be5d10(puVar1);
      (*DAT_14c787678)(0,puVar1,0);
    }
  }
  FUN_144be5d20(puVar5);
  if ((char)param_1[2] == '\0') {
    lVar3 = FUN_144be8020(*param_1);
    if (lVar3 != 1) {
      FUN_144be90e0(0x21dbd06c);
      lVar3 = *param_1;
      local_30 = 0x1f0;
      lVar4 = (*DAT_14c787670)(0,&local_30,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkaiNavMeshInstanceData");
      }
      FUN_144c3ff90(lVar4,lVar3);
      FUN_144be90e0(0x25659f08);
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_144be5e70(puVar5);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_1;
}



// FUNCTION 147e4bc84 FUN_147e4bc84 body=349 status=ok
// SIG undefined FUN_147e4bc84(void)

longlong FUN_147e4bc84(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (undefined4 *)param_1[1];
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    local_30 = 0x40;
    puVar1 = (undefined4 *)(*DAT_14c787670)(0,&local_30,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"hkAsyncThreadPoolMutex");
    }
    *puVar1 = 0;
    FUN_144bdde80(puVar1 + 2);
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    LOCK();
    puVar2 = (undefined4 *)param_1[1];
    bVar6 = puVar2 == (undefined4 *)0x0;
    if (bVar6) {
      param_1[1] = (longlong)puVar1;
      puVar2 = (undefined4 *)0x0;
    }
    UNLOCK();
    puVar5 = puVar1;
    if ((!bVar6) && (puVar5 = puVar2, puVar1 != (undefined4 *)0x0)) {
      FUN_144be5d10(puVar1);
      (*DAT_14c787678)(0,puVar1,0);
    }
  }
  FUN_144be5d20(puVar5);
  if ((char)param_1[2] == '\0') {
    lVar3 = FUN_144be8020(*param_1);
    if (lVar3 != 1) {
      FUN_144be90e0(0x21dbd06c);
      lVar3 = *param_1;
      local_30 = 0xd8;
      lVar4 = (*DAT_14c787670)(0,&local_30,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkaiClusterGraphInstanceData");
      }
      FUN_144c37680(lVar4,lVar3);
      FUN_144be90e0(0x25659f08);
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_144be5e70(puVar5);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_1;
}



// FUNCTION 147e4bde2 FUN_147e4bde2 body=349 status=ok
// SIG undefined FUN_147e4bde2(void)

longlong FUN_147e4bde2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (undefined4 *)param_1[1];
  if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
    local_30 = 0x40;
    puVar1 = (undefined4 *)(*DAT_14c787670)(0,&local_30,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar1,"hkAsyncThreadPoolMutex");
    }
    *puVar1 = 0;
    FUN_144bdde80(puVar1 + 2);
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    LOCK();
    puVar2 = (undefined4 *)param_1[1];
    bVar6 = puVar2 == (undefined4 *)0x0;
    if (bVar6) {
      param_1[1] = (longlong)puVar1;
      puVar2 = (undefined4 *)0x0;
    }
    UNLOCK();
    puVar5 = puVar1;
    if ((!bVar6) && (puVar5 = puVar2, puVar1 != (undefined4 *)0x0)) {
      FUN_144be5d10(puVar1);
      (*DAT_14c787678)(0,puVar1,0);
    }
  }
  FUN_144be5d20(puVar5);
  if ((char)param_1[2] == '\0') {
    lVar3 = FUN_144be8020(*param_1);
    if (lVar3 != 1) {
      FUN_144be90e0(0x21dbd06c);
      lVar3 = *param_1;
      local_30 = 0xa0;
      lVar4 = (*DAT_14c787670)(0,&local_30,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkaiNavVolumeInstanceData");
      }
      FUN_144c4a190(lVar4,lVar3);
      FUN_144be90e0(0x25659f08);
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_144be5e70(puVar5);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_1;
}



// FUNCTION 147e4bf40 FUN_147e4bf40 body=199 status=ok
// SIG undefined FUN_147e4bf40(void)

/* WARNING: Removing unreachable block (ram,0x000147e4bf81) */
/* WARNING: Removing unreachable block (ram,0x000147e4bf54) */
/* WARNING: Removing unreachable block (ram,0x000147e4bf73) */
/* WARNING: Removing unreachable block (ram,0x000147e4bf8f) */
/* WARNING: Removing unreachable block (ram,0x000147e4bf75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e4bf40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14cb1cfe0;
  LOCK();
  UNLOCK();
  DAT_14cb1cfe0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1cfe8 = _DAT_14cb1cfe8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((longlong)DAT_14cb1cfd0 != 0) {
          lVar3 = 0;
          do {
            if ((*(int *)(DAT_14cb1cfc8 + 8 + lVar3) != 0) &&
               (*(longlong *)(DAT_14cb1cfc8 + lVar3) != 0)) {
              FUN_140b00e2e(&DAT_14cb1cfc8);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)DAT_14cb1cfd0 * 0x10 != lVar3);
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1cfe8 = _DAT_14cb1cfe8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e4c008 FUN_147e4c008 body=107 status=ok
// SIG undefined FUN_147e4c008(void)

void FUN_147e4c008(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147e4c074(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147e4c074 FUN_147e4c074 body=132 status=ok
// SIG undefined FUN_147e4c074(void)

void FUN_147e4c074(longlong param_1,int param_2)

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



// FUNCTION 147e4c0fa FUN_147e4c0fa body=146 status=ok
// SIG undefined FUN_147e4c0fa(void)

void FUN_147e4c0fa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1e0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1e0)) {
      uVar5 = uVar4 / 0x1e0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1e0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e4c18e FUN_147e4c18e body=147 status=ok
// SIG undefined FUN_147e4c18e(void)

void FUN_147e4c18e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e4c222 FUN_147e4c222 body=137 status=ok
// SIG undefined FUN_147e4c222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e4c222(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1cd38 = _DAT_14cb1cd38 + 1;
  UNLOCK();
  uVar1 = FUN_147e4c2ac(DAT_14cb1cd30);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb1cd30;
  LOCK();
  _DAT_14cb1cd38 = _DAT_14cb1cd38 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_147e4c32e(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1cd30;
  LOCK();
  _DAT_14cb1cd38 = _DAT_14cb1cd38 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_147e4c32e(param_1 + 4);
  LOCK();
  _DAT_14cb1cd38 = _DAT_14cb1cd38 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147e4c2ac FUN_147e4c2ac body=130 status=ok
// SIG undefined FUN_147e4c2ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e4c2ac(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_147e4c31e:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_147e4c31e;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 147e4c32e FUN_147e4c32e body=73 status=ok
// SIG undefined FUN_147e4c32e(void)

void FUN_147e4c32e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_147e4c2ac(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 147e4c378 FUN_147e4c378 body=147 status=ok
// SIG undefined FUN_147e4c378(void)

void FUN_147e4c378(longlong param_1,int param_2)

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



// FUNCTION 147e4c40c FUN_147e4c40c body=137 status=ok
// SIG undefined FUN_147e4c40c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e4c40c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb1cd48 = _DAT_14cb1cd48 + 1;
  UNLOCK();
  uVar1 = FUN_147e4c496(DAT_14cb1cd40);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cb1cd40;
  LOCK();
  _DAT_14cb1cd48 = _DAT_14cb1cd48 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_147e4c518(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb1cd40;
  LOCK();
  _DAT_14cb1cd48 = _DAT_14cb1cd48 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_147e4c518(param_1 + 4);
  LOCK();
  _DAT_14cb1cd48 = _DAT_14cb1cd48 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 147e4c496 FUN_147e4c496 body=130 status=ok
// SIG undefined FUN_147e4c496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e4c496(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_147e4c508:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_147e4c508;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 147e4c518 FUN_147e4c518 body=61 status=ok
// SIG undefined FUN_147e4c518(void)

void FUN_147e4c518(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_147e4c496(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 147e4c556 FUN_147e4c556 body=147 status=ok
// SIG undefined FUN_147e4c556(void)

void FUN_147e4c556(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e4c5ea FUN_147e4c5ea body=112 status=ok
// SIG undefined FUN_147e4c5ea(void)

void FUN_147e4c5ea(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 147e4c65a FUN_147e4c65a body=126 status=ok
// SIG undefined FUN_147e4c65a(void)

longlong FUN_147e4c65a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_147e4c76c();
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_147e34b1e((undefined8 *)(param_1 + 0x38),iVar1,0);
    FUN_147e34b80(*(undefined8 *)(param_1 + 0x38),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 147e4c6d8 FUN_147e4c6d8 body=147 status=ok
// SIG undefined FUN_147e4c6d8(void)

void FUN_147e4c6d8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e4c76c FUN_147e4c76c body=113 status=ok
// SIG undefined FUN_147e4c76c(void)

longlong * FUN_147e4c76c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FUN_144b3d910();
  }
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  param_1[4] = param_2[4];
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = param_1[3];
  }
  if (lVar2 != 0) {
    FUN_144b3d910();
  }
  return param_1;
}



// FUNCTION 147e4c7de FUN_147e4c7de body=86 status=ok
// SIG undefined FUN_147e4c7de(void)

void FUN_147e4c7de(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x48) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 8;
    return;
  }
  FUN_147e4c834(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_147e4c899(lVar1,param_2,param_3);
  return;
}



// FUNCTION 147e4c834 FUN_147e4c834 body=101 status=ok
// SIG undefined FUN_147e4c834(void)

void FUN_147e4c834(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147e43c12(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 147e4c899 FUN_147e4c899 body=82 status=ok
// SIG undefined FUN_147e4c899(void)

void FUN_147e4c899(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147e4c8ec FUN_147e4c8ec body=132 status=ok
// SIG undefined FUN_147e4c8ec(void)

void FUN_147e4c8ec(longlong param_1,int param_2)

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



// FUNCTION 147e4c972 FUN_147e4c972 body=102 status=ok
// SIG undefined FUN_147e4c972(void)

void FUN_147e4c972(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= iVar5) {
    FUN_147e4c9d8(param_1,iVar1);
    iVar5 = (int)param_1[1];
  }
  lVar3 = *param_1;
  uVar2 = *param_3;
  lVar4 = *param_2;
  *(longlong *)(lVar3 + (longlong)iVar5 * 0x10) = lVar4;
  if (lVar4 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)(lVar3 + (longlong)iVar5 * 0x10 + 8) = uVar2;
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 147e4c9d8 FUN_147e4c9d8 body=355 status=ok
// SIG undefined FUN_147e4c9d8(void)

void FUN_147e4c9d8(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)(uVar2 * 2);
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar9 * 0x10,&local_50)
  ;
  iVar6 = (int)param_1[1];
  if (0 < iVar6) {
    plVar7 = (longlong *)*param_1;
    lVar4 = 0;
    iVar5 = iVar6;
    do {
      *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)((longlong)plVar7 + lVar4);
      *(undefined8 *)((longlong)plVar7 + lVar4) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)((longlong)plVar7 + lVar4 + 8);
      lVar4 = lVar4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    do {
      if (*plVar7 != 0) {
        FUN_144b3f230();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar1 = uVar9 * 0x10 + 0x10;
  uVar8 = uVar9;
  if (uVar1 <= local_50) {
    uVar8 = uVar9 + 1;
    local_50 = local_50 - 0x10;
    if (uVar1 <= local_50) {
      uVar8 = uVar8 + (local_50 + uVar9 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = lVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4cb3c FUN_147e4cb3c body=102 status=ok
// SIG undefined FUN_147e4cb3c(void)

void FUN_147e4cb3c(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= iVar5) {
    FUN_147e4c9d8(param_1,iVar1);
    iVar5 = (int)param_1[1];
  }
  lVar3 = *param_1;
  uVar2 = *param_3;
  lVar4 = *param_2;
  *(longlong *)(lVar3 + (longlong)iVar5 * 0x10) = lVar4;
  if (lVar4 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)(lVar3 + (longlong)iVar5 * 0x10 + 8) = uVar2;
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 147e4cba2 FUN_147e4cba2 body=102 status=ok
// SIG undefined FUN_147e4cba2(void)

void FUN_147e4cba2(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= iVar5) {
    FUN_147e4c9d8(param_1,iVar1);
    iVar5 = (int)param_1[1];
  }
  lVar3 = *param_1;
  uVar2 = *param_3;
  lVar4 = *param_2;
  *(longlong *)(lVar3 + (longlong)iVar5 * 0x10) = lVar4;
  if (lVar4 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)(lVar3 + (longlong)iVar5 * 0x10 + 8) = uVar2;
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 147e4cc08 FUN_147e4cc08 body=139 status=ok
// SIG undefined FUN_147e4cc08(void)

void FUN_147e4cc08(undefined8 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_14aba30f0;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  return;
}



// FUNCTION 147e4cc94 FUN_147e4cc94 body=44 status=ok
// SIG undefined FUN_147e4cc94(void)

undefined8 FUN_147e4cc94(undefined8 param_1,int param_2)

{
  FUN_147e4ccc0();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4ccc0 FUN_147e4ccc0 body=244 status=ok
// SIG undefined FUN_147e4ccc0(void)

void FUN_147e4ccc0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14aba30f0;
  lVar2 = 0xd8;
  do {
    plVar1 = *(longlong **)((longlong)param_1 + lVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0xb8);
  lVar2 = 0xb0;
  do {
    plVar1 = *(longlong **)((longlong)param_1 + lVar2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x68);
  FUN_147e4cdb4(param_1 + 7);
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],(longlong)*(int *)((longlong)param_1 + 0x34) * 0x60
              );
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],(longlong)*(int *)((longlong)param_1 + 0x24) << 2);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e4cdb4 FUN_147e4cdb4 body=203 status=ok
// SIG undefined FUN_147e4cdb4(void)

void FUN_147e4cdb4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],(longlong)*(int *)((longlong)param_1 + 0x2c) << 7);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) * 0x60
              );
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e4ce7f FUN_147e4ce7f body=204 status=ok
// SIG undefined FUN_147e4ce7f(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147e4ce7f(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144cae180(*param_1,local_38);
  lVar1 = local_38[0];
  local_38[1] = 0x38;
  uVar2 = (*DAT_14c787670)(0,local_38 + 1,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(uVar2,"hkGeometry");
  }
  FUN_144bde880(uVar2,lVar1);
  lVar1 = *(longlong *)(*param_2 + 0x18);
  *(undefined8 *)(*param_2 + 0x18) = uVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  if (local_38[0] != 0) {
    FUN_144b3f230();
  }
  if (*param_1 != 0) {
    FUN_144b3f230();
  }
  if (*param_2 != 0) {
    FUN_144b3f230();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4cf4c FUN_147e4cf4c body=129 status=ok
// SIG undefined FUN_147e4cf4c(void)

void FUN_147e4cf4c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147e5434e(param_1,local_30,param_2);
  if (local_30[0] == (int)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_147e54438(*param_1 + (longlong)local_30[0] * 0xe8 + 8,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 147e4cfe6 FUN_147e4cfe6 body=132 status=ok
// SIG undefined FUN_147e4cfe6(void)

longlong * FUN_147e4cfe6(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_14382139c(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e4d06a FUN_147e4d06a body=166 status=ok
// SIG undefined FUN_147e4d06a(void)

void FUN_147e4d06a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0xc4)) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xb8),
               (longlong)*(int *)(param_1 + 0xc4) << 5);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0xb4)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xa8),
               (longlong)*(int *)(param_1 + 0xb4) << 4);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  return;
}



// FUNCTION 147e4d110 FUN_147e4d110 body=44 status=ok
// SIG undefined FUN_147e4d110(void)

undefined8 FUN_147e4d110(undefined8 param_1,int param_2)

{
  FUN_147e4d16e();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4d13c FUN_147e4d13c body=47 status=ok
// SIG undefined FUN_147e4d13c(void)

void FUN_147e4d13c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  FUN_147e4d2cc(param_1 + 0x18);
  return;
}



// FUNCTION 147e4d16e FUN_147e4d16e body=134 status=ok
// SIG undefined FUN_147e4d16e(void)

void FUN_147e4d16e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba3240;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x4c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],(longlong)*(int *)((longlong)param_1 + 0x4c) << 2);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14aba3260;
  FUN_147e4d1f4(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e4d1f4 FUN_147e4d1f4 body=65 status=ok
// SIG undefined FUN_147e4d1f4(void)

void FUN_147e4d1f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 0x10);
  }
  FUN_147e4d236(param_1);
  return;
}



// FUNCTION 147e4d236 FUN_147e4d236 body=149 status=ok
// SIG undefined FUN_147e4d236(void)

void FUN_147e4d236(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)(int)param_1[1];
  if (lVar1 != 0) {
    lVar2 = *param_1 + -0xe8 + lVar1 * 0xe8;
    lVar1 = lVar1 * -0xe8;
    do {
      FUN_147e4ccc0(lVar2 + 8);
      FUN_144b49dd0(lVar2);
      lVar2 = lVar2 + -0xe8;
      lVar1 = lVar1 + 0xe8;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0xe8);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e4d2cc FUN_147e4d2cc body=146 status=ok
// SIG undefined FUN_147e4d2cc(void)

void FUN_147e4d2cc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)(int)param_1[1];
  if (lVar1 != 0) {
    lVar2 = lVar1 * -0xe8;
    lVar1 = lVar1 * 0xe8 + *param_1;
    do {
      FUN_147e4ccc0(lVar1 + -0xe0);
      FUN_144b49dd0(lVar1 + -0xe8);
      lVar2 = lVar2 + 0xe8;
      lVar1 = lVar1 + -0xe8;
    } while (lVar2 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    if (((param_1[2] != 0) && (*(int *)(param_1[2] + 4) != -2)) && (-1 < (int)param_1[3])) {
      lVar1 = -1;
      do {
        *(undefined4 *)(param_1[2] + 0xc + lVar1 * 8) = 0xffffffff;
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)param_1[3]);
    }
  }
  return;
}



// FUNCTION 147e4d35e FUN_147e4d35e body=73 status=ok
// SIG undefined FUN_147e4d35e(void)

undefined8 * FUN_147e4d35e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba32b0;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4d3a8 FUN_147e4d3a8 body=123 status=ok
// SIG undefined FUN_147e4d3a8(void)

void FUN_147e4d3a8(longlong param_1,short param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != -1 && param_2 != -1) {
    iVar3 = *(int *)(param_1 + 0x330);
    iVar1 = iVar3 + 1;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar3) {
      FUN_141807bca(param_1 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
      iVar3 = *(int *)(param_1 + 0x330);
    }
    lVar2 = *(longlong *)(param_1 + 0x328);
    *(int *)(param_1 + 0x330) = iVar1;
    *(short *)(lVar2 + (longlong)iVar3 * 4) = param_2;
    *(short *)(lVar2 + 2 + (longlong)iVar3 * 4) = param_3;
  }
  return;
}



// FUNCTION 147e4d424 FUN_147e4d424 body=80 status=ok
// SIG undefined FUN_147e4d424(void)

undefined8 * FUN_147e4d424(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba3320;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  FUN_14006c6ec(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e4d474 FUN_147e4d474 body=26 status=ok
// SIG undefined FUN_147e4d474(void)

undefined8 FUN_147e4d474(longlong param_1,undefined8 param_2)

{
  FUN_144bf9220(param_1 + -0x20);
  return param_2;
}



// FUNCTION 147e4d48e FUN_147e4d48e body=265 status=ok
// SIG undefined FUN_147e4d48e(void)

longlong FUN_147e4d48e(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
  FUN_147e4d598(param_1 + 0x70);
  FUN_147e4d626(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x1f90) = 0;
  *(undefined8 *)(param_1 + 0x1f98) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1fa0) = 0;
  *(undefined8 *)(param_1 + 0x1fa8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1fb0) = 0;
  *(undefined8 *)(param_1 + 0x1fb8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1fc0) = 0;
  *(undefined8 *)(param_1 + 0x1fc8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1fd0) = 0;
  *(undefined8 *)(param_1 + 0x1fd8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1fe0) = 0;
  *(undefined8 *)(param_1 + 0x1fe8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1ff0) = 0;
  *(undefined8 *)(param_1 + 0x1ff8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x2000) = 0;
  *(undefined8 *)(param_1 + 0x2008) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x2010) = 0;
  *(undefined8 *)(param_1 + 0x2018) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x2020) = 0;
  *(undefined8 *)(param_1 + 0x2028) = 0x8000000000000000;
  FUN_147e4cc08(param_1 + 0x2030);
  *(undefined1 *)(param_1 + 0x2110) = 0;
  *(undefined4 *)(param_1 + 0x2114) = 0;
  FUN_144be90e0(0x6bfcf476);
  return param_1;
}



// FUNCTION 147e4d598 FUN_147e4d598 body=142 status=ok
// SIG undefined FUN_147e4d598(void)

undefined4 * FUN_147e4d598(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined4 **)(param_1 + 2) = param_1 + 6;
  *(undefined8 *)(param_1 + 4) = 0x8000001000000000;
  *(undefined4 **)(param_1 + 0xe) = param_1 + 0x12;
  *(undefined8 *)(param_1 + 0x10) = 0x8000001000000000;
  *(undefined4 **)(param_1 + 0x22) = param_1 + 0x26;
  *(undefined8 *)(param_1 + 0x24) = 0x8000004000000000;
  *(undefined4 **)(param_1 + 0x6a) = param_1 + 0x6e;
  *(undefined8 *)(param_1 + 0x6c) = 0x8000000800000008;
  param_1[0x76] = 0x100;
  FUN_144bfb550(param_1 + 0x6e,0,8);
  return param_1;
}



// FUNCTION 147e4d626 FUN_147e4d626 body=186 status=ok
// SIG undefined FUN_147e4d626(void)

undefined8 * FUN_147e4d626(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  param_1[0xe] = param_1 + 0x10;
  param_1[0xf] = 0x8000004000000000;
  param_1[0x350] = 0xffffffffffffffff;
  param_1[0x351] = 0;
  param_1[0x352] = 0x8000000000000000;
  FUN_147e4d598(param_1 + 0x353);
  *(undefined4 *)(param_1 + 0x38f) = 0;
  param_1[0x390] = param_1 + 0x392;
  param_1[0x391] = 0x8000001000000000;
  param_1[0x397] = 0;
  param_1[0x398] = 0x8000000000000000;
  param_1[0x39e] = 0;
  param_1[0x39f] = 0x8000000000000000;
  param_1[0x3a0] = param_1;
  return param_1;
}



// FUNCTION 147e4d6e0 FUN_147e4d6e0 body=334 status=ok
// SIG undefined FUN_147e4d6e0(void)

void FUN_147e4d6e0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  longlong param_5,longlong *param_6)

{
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 local_280;
  longlong local_278;
  longlong lStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  longlong local_250;
  longlong lStack_248;
  longlong local_240;
  longlong lStack_238;
  undefined1 local_230 [480];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2d8 = *(longlong *)(param_5 + 8);
  local_2d0 = local_2d8 + (longlong)*(int *)(param_5 + 0x10) * 0xc;
  FUN_144cd8bd0(&local_2d8,&local_2c8);
  local_278 = 0;
  lStack_270 = 0;
  local_250 = 0;
  lStack_248 = 0;
  local_240 = 0;
  lStack_238 = 0;
  FUN_147e4d598(local_230);
  local_2a0 = *param_3;
  uStack_298 = param_3[1];
  local_290 = *(undefined4 *)(param_3 + 2);
  uStack_28c = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_288 = *(undefined4 *)(param_3 + 3);
  uStack_284 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_280 = *(undefined4 *)(param_3 + 4);
  local_278 = *(longlong *)(param_5 + 8);
  lStack_270 = local_278 + (longlong)*(int *)(param_5 + 0x10) * 0xc;
  local_258 = local_2b8;
  local_268 = local_2c8;
  uStack_264 = uStack_2c4;
  uStack_260 = uStack_2c0;
  uStack_25c = uStack_2bc;
  local_250 = *param_6;
  lStack_248 = local_250 + (longlong)(int)param_6[1] * 0xc;
  local_240 = *(longlong *)(param_5 + 0x28);
  lStack_238 = local_240 + (longlong)*(int *)(param_5 + 0x30) * 4;
  local_50 = param_5 + 0x18;
  local_2b0 = param_1;
  local_2a8 = param_4;
  local_2a4 = param_2;
  FUN_147e4e09a(param_5 + 0x38,&local_2b0);
  FUN_147e52b06(local_230);
  if ((local_48 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4d830 FUN_147e4d830 body=81 status=ok
// SIG undefined FUN_147e4d830(void)

void FUN_147e4d830(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_147e4d8de(param_1 + 0x70);
  FUN_147e4d882(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x1fe8) = 0;
  *(undefined4 *)(param_1 + 0x1ff8) = 0;
  *(undefined4 *)(param_1 + 0x2008) = 0;
  *(undefined4 *)(param_1 + 0x2018) = 0;
  *(undefined4 *)(param_1 + 0x2028) = 0;
  return;
}



// FUNCTION 147e4d882 FUN_147e4d882 body=92 status=ok
// SIG undefined FUN_147e4d882(void)

void FUN_147e4d882(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x1a80) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1a90) = 0;
  FUN_147e4dc9c(param_1 + 0x1a98);
  *(undefined4 *)(param_1 + 0x1cf8) = 0;
  *(undefined4 *)(param_1 + 0x1d48) = 0;
  *(undefined4 *)(param_1 + 0x1d58) = 0;
  *(undefined4 *)(param_1 + 0x1d68) = 0;
  *(undefined4 *)(param_1 + 0x1d78) = 0;
  *(undefined4 *)(param_1 + 0x1d88) = 0;
  return;
}



// FUNCTION 147e4d8de FUN_147e4d8de body=100 status=ok
// SIG undefined FUN_147e4d8de(void)

void FUN_147e4d8de(longlong param_1)

{
  FUN_147e4d942();
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != param_1 + 0x98) {
    FUN_147e4dc2a(param_1 + 0x88);
  }
  *(undefined8 *)(param_1 + 0x198) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}



// FUNCTION 147e4d942 FUN_147e4d942 body=76 status=ok
// SIG undefined FUN_147e4d942(void)

void FUN_147e4d942(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  if (*(undefined4 **)(param_1 + 2) != param_1 + 6) {
    FUN_147e4d98e(param_1 + 2);
  }
  param_1[0x10] = 0;
  if (*(undefined4 **)(param_1 + 0xe) == param_1 + 0x12) {
    return;
  }
  FUN_147e4dad2(param_1 + 0xe);
  return;
}



// FUNCTION 147e4d98e FUN_147e4d98e body=114 status=ok
// SIG undefined FUN_147e4d98e(void)

void FUN_147e4d98e(longlong param_1)

{
  uint uVar1;
  
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    uVar1 = *(int *)(param_1 + 8) - 1;
    uVar1 = (int)uVar1 >> 0x10 | uVar1;
    uVar1 = (int)uVar1 >> 8 | uVar1;
    uVar1 = (int)uVar1 >> 4 | uVar1;
    uVar1 = (int)uVar1 >> 2 | uVar1;
    uVar1 = (int)uVar1 >> 1 | uVar1;
    if ((int)uVar1 < 0xf) {
      FUN_147e4da00(&PTR_vftable_14c6e47c0,param_1,param_1 + 0x10,0x10);
      return;
    }
    if (uVar1 + 1 < *(uint *)(param_1 + 0xc)) {
      FUN_147e4da00(&PTR_vftable_14c6e47c0,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147e4da00 FUN_147e4da00 body=210 status=ok
// SIG undefined FUN_147e4da00(void)

void FUN_147e4da00(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_144be9620(param_2,param_4);
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < (int)param_4 && param_3 != 0) {
    FUN_144b3d470(param_3,*param_2,(longlong)(int)uVar2 * 2);
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,*(int *)((longlong)param_2 + 0xc) * 2);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  else {
    uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 <= (int)uVar3) {
      uVar3 = param_4;
    }
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 * 2);
    FUN_144b3d470(lVar1,*param_2,(longlong)(int)uVar3 * 2);
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,*(int *)((longlong)param_2 + 0xc) * 2);
    *param_2 = lVar1;
    uVar2 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar2 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar2;
  }
  return;
}



// FUNCTION 147e4dad2 FUN_147e4dad2 body=114 status=ok
// SIG undefined FUN_147e4dad2(void)

void FUN_147e4dad2(longlong param_1)

{
  uint uVar1;
  
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    uVar1 = *(int *)(param_1 + 8) - 1;
    uVar1 = (int)uVar1 >> 0x10 | uVar1;
    uVar1 = (int)uVar1 >> 8 | uVar1;
    uVar1 = (int)uVar1 >> 4 | uVar1;
    uVar1 = (int)uVar1 >> 2 | uVar1;
    uVar1 = (int)uVar1 >> 1 | uVar1;
    if ((int)uVar1 < 0xf) {
      FUN_147e4db44(&PTR_vftable_14c6e47c0,param_1,param_1 + 0x10,0x10);
      return;
    }
    if (uVar1 + 1 < *(uint *)(param_1 + 0xc)) {
      FUN_147e4db44(&PTR_vftable_14c6e47c0,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147e4db44 FUN_147e4db44 body=229 status=ok
// SIG undefined FUN_147e4db44(void)

void FUN_147e4db44(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_144be9620(param_2,param_4);
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < (int)param_4 && param_3 != 0) {
    FUN_144b3d470(param_3,*param_2,(longlong)(int)uVar2 << 2);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,(ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 2);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  else {
    uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 <= (int)uVar3) {
      uVar3 = param_4;
    }
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 << 2);
    FUN_144b3d470(lVar1,*param_2,(longlong)(int)uVar3 << 2);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,(ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 2);
    *param_2 = lVar1;
    uVar2 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar2 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar2;
  }
  return;
}



// FUNCTION 147e4dc2a FUN_147e4dc2a body=114 status=ok
// SIG undefined FUN_147e4dc2a(void)

void FUN_147e4dc2a(longlong param_1)

{
  uint uVar1;
  
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    uVar1 = *(int *)(param_1 + 8) - 1;
    uVar1 = (int)uVar1 >> 0x10 | uVar1;
    uVar1 = (int)uVar1 >> 8 | uVar1;
    uVar1 = (int)uVar1 >> 4 | uVar1;
    uVar1 = (int)uVar1 >> 2 | uVar1;
    uVar1 = (int)uVar1 >> 1 | uVar1;
    if ((int)uVar1 < 0x3f) {
      FUN_147e4db44(&PTR_vftable_14c6e47c0,param_1,param_1 + 0x10,0x40);
      return;
    }
    if (uVar1 + 1 < *(uint *)(param_1 + 0xc)) {
      FUN_147e4db44(&PTR_vftable_14c6e47c0,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147e4dc9c FUN_147e4dc9c body=84 status=ok
// SIG undefined FUN_147e4dc9c(void)

void FUN_147e4dc9c(longlong param_1)

{
  FUN_147e4d8de();
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != param_1 + 0x1f8) {
    FUN_147e4d98e(param_1 + 0x1e8);
  }
  *(undefined8 *)(param_1 + 0x218) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x228) = 0;
  return;
}



// FUNCTION 147e4dcf0 FUN_147e4dcf0 body=316 status=ok
// SIG undefined FUN_147e4dcf0(void)

ulonglong FUN_147e4dcf0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_48 = uVar4 * 0xc;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar5 = uVar4 * 0xc + 0xc;
  uVar3 = local_48;
  uVar6 = uVar4;
  if (uVar5 <= local_48) {
    uVar6 = uVar4 + 1;
    local_48 = local_48 - 0xc;
    uVar3 = local_48;
    if (uVar5 <= local_48) {
      uVar4 = local_48 + uVar4 * -0xc;
      uVar5 = 0xaaaaaaaaaaaaaaab;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar6 = uVar6 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(param_2 + 8)),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  *param_1 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4de2e FUN_147e4de2e body=336 status=ok
// SIG undefined FUN_147e4de2e(void)

ulonglong FUN_147e4de2e(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar8 * 0xc,&local_40);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      *(undefined4 *)(lVar6 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar9);
      *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
      lVar9 = lVar9 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = uVar8 * 0xc + 0xc;
  uVar7 = local_40;
  uVar10 = uVar8;
  if (uVar1 <= local_40) {
    uVar10 = uVar8 + 1;
    local_40 = local_40 - 0xc;
    uVar7 = local_40;
    if (uVar1 <= local_40) {
      uVar8 = local_40 + uVar8 * -0xc;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar7 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar10 = uVar10 + uVar8 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0xc);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  *param_1 = lVar6;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4df80 FUN_147e4df80 body=281 status=ok
// SIG undefined FUN_147e4df80(void)

void FUN_147e4df80(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_40 = uVar4 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar4 * 4 + 4;
  uVar3 = uVar4;
  if (uVar1 <= local_40) {
    uVar3 = uVar4 + 1;
    local_40 = local_40 - 4;
    if (uVar1 <= local_40) {
      uVar3 = uVar3 + (local_40 + uVar4 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_2 + 8)),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar3;
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4e09a FUN_147e4e09a body=129 status=ok
// SIG undefined FUN_147e4e09a(void)

void FUN_147e4e09a(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[0xc] = 0;
  FUN_147e4d8de(param_1 + 0xe);
  param_1[8] = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  param_1[4] = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  local_28 = param_1;
  FUN_147e4e11c(param_2);
  FUN_147e52952(param_1 + 0xe,param_2 + 0x80);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4e11c FUN_147e4e11c body=387 status=ok
// SIG undefined FUN_147e4e11c(void)

void FUN_147e4e11c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int *local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  int *local_58;
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = (int)((ulonglong)(param_1[0xf] - param_1[0xe]) >> 2);
  *(undefined4 *)(param_1[0x4c] + 8) = 0;
  puVar1 = param_1 + 0x10;
  local_44 = iVar4;
  FUN_147e4d8de(puVar1);
  iVar2 = (int)((ulonglong)(param_1[0xd] - param_1[0xc]) >> 2) * -0x55555555;
  *(int *)((longlong)param_1 + 0x21c) = iVar4;
  *(int *)(param_1 + 0x44) = iVar2;
  FUN_144caf790(puVar1,iVar4 + iVar2 + 1);
  FUN_147e4e2a0(param_2,puVar1,param_1[0x4c]);
  local_a0 = &local_60;
  local_a8 = *(undefined4 *)(param_1 + 1);
  local_78 = *(undefined4 *)(param_1 + 0xe);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x74);
  uStack_70 = *(undefined4 *)(param_1 + 0xf);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x7c);
  local_60 = param_2;
  local_58 = &local_44;
  local_50 = param_1;
  FUN_147e4e6b0(*param_1,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2);
  local_7c = 0;
  iVar2 = (int)((ulonglong)(param_1[0xd] - param_1[0xc]) >> 2) * -0x55555555;
  if (0 < iVar2) {
    do {
      local_98 = param_2;
      local_90 = param_1;
      local_88 = &local_7c;
      FUN_147e4ec76(*param_1,*(undefined8 *)(param_1[0xc] + (longlong)local_7c * 0xc),param_1 + 2,
                    &local_98);
      local_7c = local_7c + 1;
    } while (local_7c < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x22);
  if (0 < (longlong)iVar2) {
    lVar3 = 0;
    do {
      *(int *)(param_1[0x21] + lVar3 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (iVar2 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4e2a0 FUN_147e4e2a0 body=1038 status=ok
// SIG undefined FUN_147e4e2a0(void)

void FUN_147e4e2a0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
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
  iVar1 = (int)param_3[1];
  iVar8 = iVar1 + 1;
  iVar5 = iVar1;
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) <= iVar1) {
    FUN_147e4ed86(param_3);
    iVar5 = (int)param_3[1];
  }
  lVar4 = *param_3;
  lVar6 = (longlong)iVar5 * 0x40;
  *(undefined8 *)(lVar4 + lVar6) = 0;
  ((undefined8 *)(lVar4 + lVar6))[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = 1;
  puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x24 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0x3f800000;
  *(int *)(param_3 + 1) = iVar8;
  iVar5 = iVar1 + 2;
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) <= iVar8) {
    FUN_147e4ed86(param_3);
    iVar8 = (int)param_3[1];
  }
  lVar4 = *param_3;
  lVar6 = (longlong)iVar8 * 0x40;
  puVar3 = (undefined4 *)(lVar4 + 0x10 + lVar6);
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  puVar3 = (undefined4 *)(lVar4 + lVar6);
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x20 + lVar6) = 1;
  *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar6) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x38 + lVar6) = 0x3f800000;
  *(int *)(param_3 + 1) = iVar5;
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) <= iVar5) {
    FUN_147e4ed86(param_3);
    iVar5 = (int)param_3[1];
  }
  lVar4 = *param_3;
  lVar6 = (longlong)iVar5 * 0x40;
  *(undefined8 *)(lVar4 + lVar6) = 1;
  puVar2 = (undefined8 *)(lVar4 + 8 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar6) = 0x3f800000;
  *(undefined4 *)(lVar4 + 0x38 + lVar6) = 0;
  *(int *)(param_3 + 1) = iVar1 + 3;
  lVar4 = *param_1;
  iVar5 = *(int *)(lVar4 + 0x30);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(lVar4 + 0x34) & 0x7fffffff) <= iVar5) {
    FUN_147e4ee9e(lVar4 + 0x28);
    iVar5 = *(int *)(lVar4 + 0x30);
  }
  lVar6 = *(longlong *)(lVar4 + 0x28);
  lVar7 = (longlong)iVar5 * 0xe0;
  *(int *)(lVar4 + 0x30) = iVar1;
  puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + lVar7) = 0;
  ((undefined8 *)(lVar6 + lVar7))[1] = 0;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x38 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x48 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0x50 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x58 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x68 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x78 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0x80 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x88 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar6 + 0x98 + lVar7) = 0x3f800000;
  puVar2 = (undefined8 *)(lVar6 + 0x9c + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar6 + 0xac + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0xb0 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0xc4 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0xb8 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0xd4 + lVar7) = 0x3f800000;
  lVar4 = *param_1;
  iVar5 = *(int *)(lVar4 + 0x30);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(lVar4 + 0x34) & 0x7fffffff) <= iVar5) {
    FUN_147e4ee9e(lVar4 + 0x28);
    iVar5 = *(int *)(lVar4 + 0x30);
  }
  lVar6 = *(longlong *)(lVar4 + 0x28);
  lVar7 = (longlong)iVar5 * 0xe0;
  *(int *)(lVar4 + 0x30) = iVar1;
  *(undefined8 *)(lVar6 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x18 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x28 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x38 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar6 + 0x48 + lVar7) = 0x3f800000;
  puVar2 = (undefined8 *)(lVar6 + 0x4c + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x58 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x68 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x70 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x80 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x88 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x98 + lVar7) = 0x3f80000000000000;
  puVar3 = (undefined4 *)(lVar6 + 0xa0 + lVar7);
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  puVar3 = (undefined4 *)(lVar6 + 0xb0 + lVar7);
  *puVar3 = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  *(undefined8 *)(lVar6 + 0xc0 + lVar7) = 1;
  *(undefined8 *)(lVar6 + 200 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0xd0 + lVar7) = 0xbf800000bf800000;
  *(undefined4 *)(lVar6 + 0xd8 + lVar7) = 0x3f800000;
  lVar4 = *param_1;
  iVar5 = *(int *)(lVar4 + 0x30);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(lVar4 + 0x34) & 0x7fffffff) <= iVar5) {
    FUN_147e4ee9e(lVar4 + 0x28);
    iVar5 = *(int *)(lVar4 + 0x30);
  }
  lVar6 = *(longlong *)(lVar4 + 0x28);
  lVar7 = (longlong)iVar5 * 0xe0;
  *(int *)(lVar4 + 0x30) = iVar1;
  *(undefined8 *)(lVar6 + lVar7) = 0;
  puVar2 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar2 = local_98;
  puVar2[1] = uStack_90;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = local_a8;
  puVar2[1] = uStack_a0;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0x38 + lVar7);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b0;
  *(undefined8 *)(lVar6 + 0x48 + lVar7) = 0x3f80000000000000;
  *(undefined8 *)(lVar6 + 0x50 + lVar7) = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x58 + lVar7);
  *puVar2 = local_68;
  puVar2[1] = uStack_60;
  *(undefined8 *)(lVar6 + 0x68 + lVar7) = 0;
  puVar2 = (undefined8 *)(lVar6 + 0x70 + lVar7);
  *puVar2 = local_78;
  puVar2[1] = uStack_70;
  *(undefined8 *)(lVar6 + 0x80 + lVar7) = 1;
  puVar3 = (undefined4 *)(lVar6 + 0x88 + lVar7);
  *puVar3 = (undefined4)local_88;
  puVar3[1] = local_88._4_4_;
  puVar3[2] = (undefined4)uStack_80;
  puVar3[3] = uStack_80._4_4_;
  *(undefined8 *)(lVar6 + 0x98 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0xa0 + lVar7) = 1;
  puVar2 = (undefined8 *)(lVar6 + 0xa8 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + 0xb8 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 200 + lVar7) = 0;
  *(undefined8 *)(lVar6 + 0xd0 + lVar7) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0xd8 + lVar7) = 0;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_147e4ed48(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4e6b0 FUN_147e4e6b0 body=1477 status=ok
// SIG undefined FUN_147e4e6b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e4e6b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int in_EDX;
  ulonglong uVar18;
  int *piVar19;
  undefined8 *puVar20;
  int *piVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar31 [16];
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float fVar32;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined1 auStack_1248 [32];
  int local_1228;
  int local_1220;
  undefined1 local_1218;
  int **local_1208;
  int *local_1200;
  longlong *local_11f8;
  longlong local_11f0;
  undefined8 *local_11e8;
  undefined1 **local_11e0;
  undefined1 *local_11d8;
  undefined1 **local_11d0;
  longlong *local_11c8;
  undefined8 local_11c0;
  int **local_11b8;
  undefined1 *local_11b0;
  undefined8 local_11a8;
  int *local_11a0;
  undefined8 local_1198;
  longlong local_1190;
  longlong local_1188;
  int local_117c;
  float local_1178;
  float fStack_1174;
  float fStack_1170;
  float fStack_116c;
  float local_1168;
  float fStack_1164;
  float fStack_1160;
  float fStack_115c;
  float local_1158;
  float fStack_1154;
  float fStack_1150;
  float fStack_114c;
  float local_1148;
  float fStack_1144;
  float fStack_1140;
  float fStack_113c;
  float local_1138;
  float fStack_1134;
  float fStack_1130;
  float fStack_112c;
  float local_1128;
  float fStack_1124;
  float fStack_1120;
  float fStack_111c;
  undefined8 local_1118 [10];
  undefined8 local_10c8 [10];
  int local_1078;
  int iStack_1074;
  int iStack_1070;
  int iStack_106c;
  int local_1068;
  int iStack_1064;
  int iStack_1060;
  int iStack_105c;
  int local_1058;
  int iStack_1054;
  int iStack_1050;
  int iStack_104c;
  int local_1048;
  int iStack_1044;
  int iStack_1040;
  int iStack_103c;
  undefined1 *local_1030;
  ulonglong local_1028;
  undefined1 local_1020 [8];
  int local_1018 [962];
  undefined1 *local_110;
  ulonglong local_108;
  undefined1 local_100 [32];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined8 local_a0;
  int local_98;
  ulonglong local_90;
  
  uVar29 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1248;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  local_1190 = *(longlong *)(lVar17 + 0x28);
  local_1188 = (longlong)*(int *)(lVar17 + 0x30) * 0x10 + local_1190;
  lVar15 = (longlong)in_EDX * 0x10;
  lVar23 = (longlong)*(int *)(local_1190 + 4 + lVar15);
  lVar16 = (longlong)*(int *)(local_1190 + 8 + lVar15);
  lVar17 = *(longlong *)(param_1 + 0x20);
  local_b0 = *(int *)(lVar17 + 8 + (longlong)*(int *)(local_1190 + lVar15) * 0xc);
  uVar1 = *(undefined8 *)(lVar17 + (longlong)*(int *)(local_1190 + lVar15) * 0xc);
  local_a4 = *(int *)(lVar17 + 8 + lVar23 * 0xc);
  uVar2 = *(undefined8 *)(lVar17 + lVar23 * 0xc);
  uVar3 = *(undefined8 *)(lVar17 + lVar16 * 0xc);
  local_98 = *(int *)(lVar17 + 8 + lVar16 * 0xc);
  local_ac._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_b8._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  iVar11 = (int)uVar1;
  iVar24 = (int)uVar2;
  iVar22 = iVar24;
  if (iVar11 < iVar24) {
    iVar22 = iVar11;
  }
  iVar9 = local_ac._4_4_;
  if (local_b8._4_4_ < local_ac._4_4_) {
    iVar9 = local_b8._4_4_;
  }
  iVar10 = local_a4;
  if (local_b0 < local_a4) {
    iVar10 = local_b0;
  }
  uVar4 = uVar1;
  if (iVar11 < iVar24) {
    uVar4 = uVar2;
  }
  if (local_b8._4_4_ < local_ac._4_4_) {
    local_b8._4_4_ = local_ac._4_4_;
  }
  iVar11 = local_b0;
  if (local_b0 < local_a4) {
    iVar11 = local_a4;
  }
  iVar24 = (int)uVar3;
  if (iVar24 <= iVar22) {
    iVar22 = iVar24;
  }
  local_a0._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
  if (local_a0._4_4_ <= iVar9) {
    iVar9 = local_a0._4_4_;
  }
  if (local_98 <= iVar10) {
    iVar10 = local_98;
  }
  iVar25 = (int)uVar4;
  if ((int)uVar4 < iVar24) {
    iVar25 = iVar24;
  }
  if (local_b8._4_4_ < local_a0._4_4_) {
    local_b8._4_4_ = local_a0._4_4_;
  }
  if (iVar11 < local_98) {
    iVar11 = local_98;
  }
  piVar21 = (int *)*param_4;
  iVar24 = *piVar21;
  auVar31._4_12_ = unaff_XMM7._4_12_;
  auVar31._0_4_ = (float)iVar22;
  fVar32 = (float)local_b8._4_4_;
  auVar30._4_12_ = unaff_XMM6._4_12_;
  auVar30._0_4_ = (float)iVar25;
  local_117c = in_EDX;
  local_b8 = uVar1;
  local_ac = uVar2;
  local_a0 = uVar3;
  FUN_147e4f2a0(local_e0,param_3);
  local_110 = local_100;
  local_108 = 0x8000000800000000;
  iVar22 = (int)((ulonglong)(param_4[1] - (longlong)piVar21) >> 2);
  iVar25 = iVar22 + 1;
  local_108._0_4_ = 0;
  uVar26 = extraout_XMM0_Db;
  uVar27 = extraout_XMM0_Dc;
  uVar28 = extraout_XMM0_Dd;
  if (7 < iVar22) {
    FUN_147e4f588(&local_110,&PTR_vftable_14c6e47c0,iVar25);
    uVar26 = extraout_XMM0_Db_00;
    uVar27 = extraout_XMM0_Dc_00;
    uVar28 = extraout_XMM0_Dd_00;
  }
  uVar1 = param_6;
  local_1138 = fRam000000014c6daea8;
  local_1158 = fRam000000014c6daea4;
  fStack_1174 = _DAT_14c6daea0;
  auVar7._4_4_ = unaff_XMM8_Db;
  auVar7._0_4_ = (float)iVar9;
  auVar7._8_4_ = unaff_XMM8_Dc;
  auVar7._12_4_ = unaff_XMM8_Dd;
  auVar31 = insertps(auVar31,auVar7,0x1c);
  auVar8._4_4_ = unaff_XMM9_Db;
  auVar8._0_4_ = fVar32;
  auVar8._8_4_ = unaff_XMM9_Dc;
  auVar8._12_4_ = unaff_XMM9_Dd;
  auVar30 = insertps(auVar30,auVar8,0x1c);
  if (iVar25 < (int)local_108 || (int)local_108 <= iVar22) {
    local_108 = CONCAT44(local_108._4_4_,iVar25);
  }
  auVar5._4_4_ = uVar26;
  auVar5._0_4_ = (float)iVar10;
  auVar5._8_4_ = uVar27;
  auVar5._12_4_ = uVar28;
  auVar31 = insertps(auVar31,auVar5,0x28);
  auVar6._4_4_ = uVar29;
  auVar6._0_4_ = (float)(iVar11 + iVar24);
  auVar6._8_4_ = in_XMM1_Dc;
  auVar6._12_4_ = in_XMM1_Dd;
  auVar30 = insertps(auVar30,auVar6,0x28);
  uVar12 = (uint)((ulonglong)(param_4[1] - *param_4) >> 2);
  if (0 < (int)uVar12) {
    uVar13 = (ulonglong)(uVar12 & 0x7fffffff);
    lVar17 = 0;
    do {
      *(undefined4 *)(local_110 + uVar13 * 4) = *(undefined4 *)(*param_4 + lVar17);
      lVar17 = lVar17 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  local_1168 = auVar30._0_4_ + fStack_1174;
  local_1148 = auVar30._4_4_ + local_1158;
  local_1128 = auVar30._8_4_ + local_1138;
  fStack_1174 = auVar31._0_4_ - fStack_1174;
  local_1158 = auVar31._4_4_ - local_1158;
  local_1138 = auVar31._8_4_ - local_1138;
  local_11a0 = local_1018;
  local_1198 = 0xf80000000;
  lVar17 = 0;
  do {
    *(undefined4 *)((longlong)local_1018 + lVar17) = 0xffffffff;
    lVar17 = lVar17 + 0xf0;
  } while (lVar17 != 0xf00);
  local_1030 = local_1020;
  local_1028 = 0x8000000800000000;
  local_1178 = (float)CONCAT31(local_1178._1_3_,1);
  FUN_147e4f6b2(&local_1030,(int)((ulonglong)(param_4[1] - *param_4) >> 2) + 1,&local_1178);
  local_1200 = &local_117c;
  local_1208 = &local_1200;
  local_11f8 = &local_1190;
  local_11e8 = &local_b8;
  local_11e0 = &local_110;
  local_11d8 = (undefined1 *)&param_5;
  local_11c0 = uVar1;
  local_11b8 = &local_11a0;
  local_11b0 = local_e0;
  local_11f0 = param_1;
  local_11d0 = &local_1030;
  local_11c8 = param_4;
  local_11a8 = param_3;
  local_1178 = fStack_1174;
  fStack_1170 = fStack_1174;
  fStack_116c = fStack_1174;
  fStack_1164 = local_1168;
  fStack_1160 = local_1168;
  fStack_115c = local_1168;
  fStack_1154 = local_1158;
  fStack_1150 = local_1158;
  fStack_114c = local_1158;
  fStack_1144 = local_1148;
  fStack_1140 = local_1148;
  fStack_113c = local_1148;
  fStack_1134 = local_1138;
  fStack_1130 = local_1138;
  fStack_112c = local_1138;
  fStack_1124 = local_1128;
  fStack_1120 = local_1128;
  fStack_111c = local_1128;
  FUN_147e4f718(param_1 + 0x40);
  if (-1 < local_1198) {
    uVar13 = (ulonglong)local_1198._4_4_ + 1;
    uVar18 = 0;
    piVar21 = local_11a0;
    do {
      if (*piVar21 != -1) {
        uVar13 = uVar18 & 0xffffffff;
        break;
      }
      uVar18 = uVar18 + 1;
      piVar21 = piVar21 + 0x3c;
    } while (uVar13 != uVar18);
    if ((int)uVar13 <= (int)local_1198._4_4_) {
      uVar18 = uVar13 & 0xffffffff;
      do {
        piVar21 = local_11a0 + uVar18 * 0x3c;
        local_1228 = piVar21[0x3a];
        local_1220 = piVar21[0x3b];
        local_1078 = piVar21[0x2a];
        iStack_1074 = piVar21[0x2b];
        iStack_1070 = piVar21[0x2c];
        iStack_106c = piVar21[0x2d];
        local_1068 = piVar21[0x2e];
        iStack_1064 = piVar21[0x2f];
        iStack_1060 = piVar21[0x30];
        iStack_105c = piVar21[0x31];
        local_1058 = piVar21[0x32];
        iStack_1054 = piVar21[0x33];
        iStack_1050 = piVar21[0x34];
        iStack_104c = piVar21[0x35];
        local_1048 = piVar21[0x36];
        iStack_1044 = piVar21[0x37];
        iStack_1040 = piVar21[0x38];
        iStack_103c = piVar21[0x39];
        piVar19 = local_11a0 + uVar18 * 0x3c + 0x16;
        puVar20 = local_10c8;
        for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar20 = *(undefined8 *)piVar19;
          piVar19 = piVar19 + 2;
          puVar20 = puVar20 + 1;
        }
        puVar20 = local_1118;
        for (lVar17 = 10; piVar21 = piVar21 + 2, lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar20 = *(undefined8 *)piVar21;
          puVar20 = puVar20 + 1;
        }
        local_1218 = 0;
        FUN_147e4f36a(uVar1,local_1118,local_10c8,&local_1078);
        piVar21 = local_11a0 + (longlong)(int)uVar13 * 0x3c + 0x3c;
        uVar18 = (longlong)(int)uVar13;
        do {
          uVar14 = uVar18;
          if ((longlong)(int)local_1198._4_4_ <= (longlong)uVar14) goto LAB_147e4ea90;
          uVar18 = uVar14 + 1;
          iVar22 = *piVar21;
          piVar21 = piVar21 + 0x3c;
        } while (iVar22 == -1);
        uVar13 = uVar18 & 0xffffffff;
      } while ((int)uVar14 < (int)local_1198._4_4_);
    }
  }
LAB_147e4ea90:
  uVar13 = local_1028;
  local_1028 = local_1028 & 0xffffffff00000000;
  if ((-1 < (longlong)uVar13) && (local_1030 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
  }
  if (-1 < (int)local_1198) {
    (*DAT_14c787678)(DAT_14c6e47c8,local_11a0,0);
  }
  uVar13 = local_108 >> 0x20;
  local_108 = local_108 & 0xffffffff00000000;
  lVar17 = (longlong)(int)uVar13;
  if ((-1 < lVar17) && (local_110 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,local_110,lVar17 << 2);
  }
  if ((local_90 ^ (ulonglong)auStack_1248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e4ec76 FUN_147e4ec76 body=209 status=ok
// SIG undefined FUN_147e4ec76(void)

void FUN_147e4ec76(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147e4f2a0(&local_50,param_3);
  if ((int)param_2 == 0) {
    local_58 = local_30;
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_78 = local_50;
    uStack_70 = uStack_48;
    local_a8 = *param_3;
    uStack_a4 = param_3[1];
    uStack_a0 = param_3[2];
    uStack_9c = param_3[3];
    local_98 = param_3[4];
    uStack_94 = param_3[5];
    uStack_90 = param_3[6];
    uStack_8c = param_3[7];
    local_88 = param_3[8];
    FUN_147e52280(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + (param_2 >> 0x1d)),&local_a8,
                  &local_78,param_4);
  }
  else {
    FUN_147e524f2(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + (param_2 >> 0x20) * 8),param_3,
                  param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4ed48 FUN_147e4ed48 body=61 status=ok
// SIG undefined FUN_147e4ed48(void)

void FUN_147e4ed48(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x198);
  FUN_147e4effe(param_1,iVar1 + 3);
  iVar2 = 0;
  do {
    FUN_144cafad0(param_1,iVar1 + iVar2,0,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  return;
}



// FUNCTION 147e4ed86 FUN_147e4ed86 body=278 status=ok
// SIG undefined FUN_147e4ed86(void)

void FUN_147e4ed86(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_38 = uVar4 * 0x40;
  uVar2 = (*DAT_14c787670)(DAT_14c6e47a8,&local_38,DAT_14c6e47ac);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 6);
  uVar1 = uVar4 * 0x40 + 0x40;
  uVar3 = uVar4;
  if (uVar1 <= local_38) {
    uVar3 = uVar4 + 1;
    local_38 = local_38 - 0x40;
    if (uVar1 <= local_38) {
      uVar3 = uVar3 + (local_38 + uVar4 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar3;
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4ee9e FUN_147e4ee9e body=350 status=ok
// SIG undefined FUN_147e4ee9e(void)

ulonglong FUN_147e4ee9e(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)(uVar2 * 2);
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar7 * 0xe0,&local_50)
  ;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      memcpy((void *)(lVar5 + lVar9),(void *)(lVar9 + lVar3),0xe0);
      lVar9 = lVar9 + 0xe0;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar1 = uVar7 * 0xe0 + 0xe0;
  uVar6 = local_50;
  uVar10 = uVar7;
  if (uVar1 <= local_50) {
    uVar10 = uVar7 + 1;
    local_50 = local_50 - 0xe0;
    uVar6 = local_50;
    if (uVar1 <= local_50) {
      uVar7 = local_50 + uVar7 * -0xe0 >> 5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      uVar6 = SUB168(auVar4 * ZEXT816(0x2492492492492493),0);
      uVar10 = uVar10 + uVar7 / 7;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0xe0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  *param_1 = lVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4effe FUN_147e4effe body=116 status=ok
// SIG undefined FUN_147e4effe(void)

void FUN_147e4effe(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144caf9b0();
  local_1c = 0xffffffff;
  FUN_147e4f0b2(param_1 + 0x88,&PTR_vftable_14c6e47c0,param_2);
  *(undefined4 *)(param_1 + 0x198) = param_2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_147e4f074(param_1 + 0x1a8,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4f074 FUN_147e4f074 body=62 status=ok
// SIG undefined FUN_147e4f074(void)

void FUN_147e4f074(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_147e4f25e();
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if ((int)(*(int *)(param_1 + 0x30) + 0x1fU & 0xffffffe0) <= iVar2) {
    return;
  }
  FUN_147e4f1e4(param_1);
  return;
}



// FUNCTION 147e4f0b2 FUN_147e4f0b2 body=306 status=ok
// SIG undefined FUN_147e4f0b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e4f0b2(longlong *param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_3) {
    FUN_140163394(param_1,param_2,param_3);
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < param_3) {
    *(int *)(param_1 + 1) = param_3;
    auVar4 = _DAT_149931e80;
    uVar3 = *param_4;
    uVar6 = ~uVar2 + param_3;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = uVar6;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = 0;
    lVar1 = *param_1 + (longlong)(int)uVar2 * 4;
    uVar5 = 0;
    auVar10 = pmovsxbq(in_XMM1,0x302);
    auVar11 = pmovsxbq(in_XMM2,0x100);
    auVar8 = auVar8 | _DAT_149931e80;
    do {
      lVar7 = auVar8._0_8_;
      lVar9 = auVar8._8_8_;
      if ((bool)(~(lVar7 < (longlong)(uVar5 ^ auVar4._0_8_)) & 1)) {
        *(undefined4 *)(lVar1 + uVar5 * 4) = uVar3;
      }
      auVar12._8_4_ = (int)uVar5;
      auVar12._0_8_ = uVar5;
      auVar12._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar12._8_8_ | auVar11._8_8_) ^ auVar4._8_8_) <= lVar9) {
        *(undefined4 *)(lVar1 + 4 + uVar5 * 4) = uVar3;
      }
      auVar12 = (auVar12 | auVar10) ^ auVar4;
      if (auVar12._0_8_ <= lVar7) {
        *(undefined4 *)(lVar1 + 8 + uVar5 * 4) = uVar3;
      }
      if (auVar12._8_8_ <= lVar9) {
        *(undefined4 *)(lVar1 + 0xc + uVar5 * 4) = uVar3;
      }
      uVar5 = uVar5 + 4;
    } while (((ulonglong)uVar6 + 4 & 0xfffffffffffffffc) != uVar5);
  }
  else if (param_3 < (int)uVar2) {
    *(int *)(param_1 + 1) = param_3;
  }
  return;
}



// FUNCTION 147e4f1e4 FUN_147e4f1e4 body=121 status=ok
// SIG undefined FUN_147e4f1e4(void)

void FUN_147e4f1e4(longlong *param_1,ulonglong param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (0 < param_3) {
    uVar5 = param_3 + (int)param_2;
    uVar4 = -1 << ((byte)param_2 & 0x1f);
    uVar6 = uVar5 & 0x1f;
    uVar8 = -1 << (sbyte)uVar6;
    uVar7 = param_2 >> 5 & 0x7ffffff;
    uVar5 = uVar5 >> 5;
    lVar3 = *param_1;
    if ((uint)uVar7 != uVar5) {
      puVar1 = (uint *)(lVar3 + uVar7 * 4);
      *puVar1 = *puVar1 & ~uVar4;
      if (uVar6 != 0) {
        puVar2 = (uint *)(lVar3 + (ulonglong)uVar5 * 4);
        *puVar2 = *puVar2 & uVar8;
      }
      FUN_144bfb550(puVar1 + 1,0,(longlong)(int)(uVar5 + ~(uint)uVar7));
      return;
    }
    uVar4 = uVar4 & ~uVar8;
    if (uVar4 != 0) {
      puVar1 = (uint *)(lVar3 + uVar7 * 4);
      *puVar1 = *puVar1 & ~uVar4;
    }
  }
  return;
}



// FUNCTION 147e4f25e FUN_147e4f25e body=65 status=ok
// SIG undefined FUN_147e4f25e(void)

void FUN_147e4f25e(longlong param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x30) = param_2;
  iVar1 = param_2 + 0x1f >> 5;
  if ((int)(*(uint *)(param_1 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_140163394(param_1,&PTR_vftable_14c6e47a0,iVar1);
  }
  if (*(int *)(param_1 + 8) != iVar1) {
    *(int *)(param_1 + 8) = iVar1;
  }
  return;
}



// FUNCTION 147e4f2a0 FUN_147e4f2a0 body=201 status=ok
// SIG undefined FUN_147e4f2a0(void)

longlong * FUN_147e4f2a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x14);
  *param_1 = (longlong)iVar4 * (longlong)iVar2 - (longlong)iVar6 * (longlong)iVar5;
  param_1[1] = (longlong)iVar1 * (longlong)iVar6 - (longlong)iVar3 * (longlong)iVar4;
  param_1[2] = (longlong)iVar3 * (longlong)iVar5 - (longlong)iVar2 * (longlong)iVar1;
  FUN_147e4f4e2(&local_28);
  lVar11 = 0;
  bVar13 = false;
  plVar12 = &local_28;
  bVar9 = true;
  do {
    bVar10 = bVar9;
    uVar7 = (ulonglong)bVar13;
    uVar8 = -*plVar12;
    bVar13 = *plVar12 != 0 || uVar8 < uVar7;
    param_1[lVar11 + 3] = uVar8 - uVar7;
    lVar11 = 1;
    plVar12 = &local_20;
    bVar9 = false;
  } while (bVar10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4f36a FUN_147e4f36a body=376 status=ok
// SIG undefined FUN_147e4f36a(void)

void FUN_147e4f36a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  int param_5,int param_6,undefined1 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  
  lVar2 = param_1[2];
  lVar28 = *(longlong *)*param_1;
  iVar27 = *(int *)(lVar28 + 0x30);
  iVar1 = iVar27 + 1;
  if ((int)(*(uint *)(lVar28 + 0x34) & 0x7fffffff) <= iVar27) {
    FUN_147e4ee9e(lVar28 + 0x28,iVar1);
    iVar27 = *(int *)(lVar28 + 0x30);
  }
  lVar3 = *(longlong *)(lVar28 + 0x28);
  *(int *)(lVar28 + 0x30) = iVar1;
  puVar29 = (undefined8 *)(lVar3 + (longlong)iVar27 * 0xe0);
  for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
    *puVar29 = *param_2;
    param_2 = param_2 + 1;
    puVar29 = puVar29 + 1;
  }
  puVar29 = (undefined8 *)(lVar3 + 0x50 + (longlong)iVar27 * 0xe0);
  puVar30 = puVar29;
  for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
    *puVar30 = *param_3;
    param_3 = param_3 + 1;
    puVar30 = puVar30 + 1;
  }
  uVar5 = *(undefined4 *)param_4;
  uVar6 = *(undefined4 *)((longlong)param_4 + 4);
  uVar7 = *(undefined4 *)(param_4 + 1);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar9 = *(undefined4 *)(param_4 + 2);
  uVar10 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar11 = *(undefined4 *)(param_4 + 3);
  uVar12 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar13 = *(undefined4 *)(param_4 + 4);
  uVar14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar15 = *(undefined4 *)(param_4 + 5);
  uVar16 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar17 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar18 = *(undefined4 *)(param_4 + 7);
  uVar19 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)((longlong)puVar29 + 0x84) = uVar17;
  *(undefined4 *)(puVar29 + 0x11) = uVar18;
  *(undefined4 *)((longlong)puVar29 + 0x8c) = uVar19;
  *(undefined4 *)(puVar29 + 0xe) = uVar13;
  *(undefined4 *)((longlong)puVar29 + 0x74) = uVar14;
  *(undefined4 *)(puVar29 + 0xf) = uVar15;
  *(undefined4 *)((longlong)puVar29 + 0x7c) = uVar16;
  *(undefined4 *)(puVar29 + 0xc) = uVar9;
  *(undefined4 *)((longlong)puVar29 + 100) = uVar10;
  *(undefined4 *)(puVar29 + 0xd) = uVar11;
  *(undefined4 *)((longlong)puVar29 + 0x6c) = uVar12;
  *(undefined4 *)(puVar29 + 10) = uVar5;
  *(undefined4 *)((longlong)puVar29 + 0x54) = uVar6;
  *(undefined4 *)(puVar29 + 0xb) = uVar7;
  *(undefined4 *)((longlong)puVar29 + 0x5c) = uVar8;
  if (param_5 == -1) {
    param_5 = *(int *)param_1[1];
  }
  if (param_6 == -1) {
    param_6 = *(int *)param_1[1];
  }
  iVar1 = *(int *)(lVar2 + 0x218);
  FUN_147e4effe(lVar2 + 0x80,iVar1 + 1);
  FUN_147e521ee(lVar2 + 0x80,iVar1,param_5 + -1,param_6 + -1,param_7);
  plVar4 = *(longlong **)(lVar2 + 0x260);
  iVar27 = (int)plVar4[1];
  iVar1 = iVar27 + 1;
  if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) <= iVar27) {
    FUN_147e4ed86(plVar4,iVar1);
    iVar27 = (int)plVar4[1];
  }
  lVar2 = *plVar4;
  lVar28 = (longlong)iVar27 * 0x40;
  uVar20 = *param_4;
  uVar21 = param_4[1];
  uVar22 = param_4[2];
  uVar23 = param_4[3];
  uVar24 = param_4[4];
  uVar25 = param_4[5];
  uVar26 = param_4[7];
  puVar29 = (undefined8 *)(lVar2 + 0x30 + lVar28);
  *puVar29 = param_4[6];
  puVar29[1] = uVar26;
  puVar29 = (undefined8 *)(lVar2 + 0x20 + lVar28);
  *puVar29 = uVar24;
  puVar29[1] = uVar25;
  puVar29 = (undefined8 *)(lVar2 + 0x10 + lVar28);
  *puVar29 = uVar22;
  puVar29[1] = uVar23;
  *(undefined8 *)(lVar2 + lVar28) = uVar20;
  ((undefined8 *)(lVar2 + lVar28))[1] = uVar21;
  *(int *)(plVar4 + 1) = iVar1;
  return;
}



// FUNCTION 147e4f4e2 FUN_147e4f4e2 body=166 status=ok
// SIG undefined FUN_147e4f4e2(void)

longlong FUN_147e4f4e2(longlong param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uStack_38;
  ulonglong local_30;
  
  iVar1 = param_3[2];
  lVar4 = param_2[2];
  bVar13 = false;
  iVar2 = param_3[1];
  lVar9 = param_2[1];
  iVar3 = *param_3;
  lVar5 = *param_2;
  uVar8 = (longlong)iVar3 * *param_2;
  uVar12 = (longlong)iVar2 * param_2[1];
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar6 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,uVar12) || CARRY8(uVar8 + uVar12,uVar6);
    *puVar11 = uVar8 + uVar12 + uVar6;
    uVar8 = SUB168(SEXT816((longlong)iVar3) * SEXT816(lVar5),8);
    uVar12 = SUB168(SEXT816((longlong)iVar2) * SEXT816(lVar9),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  lVar9 = 0;
  bVar13 = false;
  uVar8 = lVar4 * iVar1;
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar12 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,*puVar11) || CARRY8(uVar8 + *puVar11,uVar12);
    *(ulonglong *)(param_1 + lVar9 * 8) = uVar8 + *puVar11 + uVar12;
    lVar9 = 1;
    uVar8 = SUB168(SEXT816(lVar4) * SEXT816((longlong)iVar1),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  return param_1;
}



// FUNCTION 147e4f588 FUN_147e4f588 body=296 status=ok
// SIG undefined FUN_147e4f588(void)

void FUN_147e4f588(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 4,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar5 * 4 + 4;
  uVar4 = uVar5;
  if (uVar1 <= local_50) {
    uVar4 = uVar5 + 1;
    local_50 = local_50 - 4;
    if (uVar1 <= local_50) {
      uVar4 = uVar4 + (local_50 + uVar5 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 2);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4f6b2 FUN_147e4f6b2 body=102 status=ok
// SIG undefined FUN_147e4f6b2(void)

void FUN_147e4f6b2(longlong *param_1,undefined **param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (int)param_2;
  uVar3 = (ulonglong)param_2 & 0xffffffff;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    param_2 = &PTR_vftable_14c6e47c0;
    FUN_14180788c(param_1,&PTR_vftable_14c6e47c0,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    memset((void *)((longlong)(int)uVar1 + *param_1),
           (int)CONCAT71((int7)((ulonglong)param_2 >> 8),*param_3),(ulonglong)(~uVar1 + iVar2) + 1);
    return;
  }
  if (iVar2 < (int)uVar1) {
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



// FUNCTION 147e4f718 FUN_147e4f718 body=126 status=ok
// SIG undefined FUN_147e4f718(void)

void FUN_147e4f718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_438 [32];
  undefined4 local_418;
  undefined1 local_414 [1020];
  undefined1 *local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_18 = local_414;
  local_418 = 1;
  if ((~*(uint *)(DAT_14c787698 + 0x20) & 0x820000) == 0) {
    FUN_147e4f797(param_2);
  }
  else {
    FUN_147e4f840(param_2,param_1,param_3,&local_418);
  }
  if ((local_8 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4f797 FUN_147e4f797 body=169 status=ok
// SIG undefined FUN_147e4f797(void)

void FUN_147e4f797(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_4 + 0x400);
  uVar3 = (ulonglong)(lVar1 - param_4) >> 2;
  iVar2 = (int)uVar3;
  while (iVar2 != 0) {
    *(longlong *)(param_4 + 0x400) = lVar1 + -4;
    lVar4 = (longlong)param_2 + (longlong)*(int *)(lVar1 + -4) * 0x80 + *param_2;
    lVar5 = lVar4;
    if (1 < (int)uVar3) {
      *(longlong *)(param_4 + 0x400) = lVar1 + -8;
      lVar5 = (longlong)param_2 + (longlong)*(int *)(lVar1 + -8) * 0x80 + *param_2;
      FUN_147e4f8ea(param_1,lVar4,param_3,param_4);
    }
    FUN_147e4f8ea(param_1,lVar5,param_3,param_4);
    lVar1 = *(longlong *)(param_4 + 0x400);
    uVar3 = (ulonglong)(lVar1 - param_4) >> 2;
    iVar2 = (int)uVar3;
  }
  return;
}



// FUNCTION 147e4f840 FUN_147e4f840 body=169 status=ok
// SIG undefined FUN_147e4f840(void)

void FUN_147e4f840(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_4 + 0x400);
  uVar3 = (ulonglong)(lVar1 - param_4) >> 2;
  iVar2 = (int)uVar3;
  while (iVar2 != 0) {
    *(longlong *)(param_4 + 0x400) = lVar1 + -4;
    lVar4 = (longlong)param_2 + (longlong)*(int *)(lVar1 + -4) * 0x80 + *param_2;
    lVar5 = lVar4;
    if (1 < (int)uVar3) {
      *(longlong *)(param_4 + 0x400) = lVar1 + -8;
      lVar5 = (longlong)param_2 + (longlong)*(int *)(lVar1 + -8) * 0x80 + *param_2;
      FUN_147e520c0(param_1,lVar4,param_3,param_4);
    }
    FUN_147e520c0(param_1,lVar5,param_3,param_4);
    lVar1 = *(longlong *)(param_4 + 0x400);
    uVar3 = (ulonglong)(lVar1 - param_4) >> 2;
    iVar2 = (int)uVar3;
  }
  return;
}



// FUNCTION 147e4f8ea FUN_147e4f8ea body=253 status=ok
// SIG undefined FUN_147e4f8ea(void)

void FUN_147e4f8ea(float *param_1,float *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  auVar4._4_4_ = -(uint)((param_2[0x11] <= param_1[0x15] && param_1[0x11] <= param_2[0x15]) &&
                        ((param_2[9] <= param_1[0xd] && param_1[9] <= param_2[0xd]) &&
                        (param_2[1] <= param_1[5] && param_1[1] <= param_2[5])));
  auVar4._0_4_ = -(uint)((param_2[0x10] <= param_1[0x14] && param_1[0x10] <= param_2[0x14]) &&
                        ((param_2[8] <= param_1[0xc] && param_1[8] <= param_2[0xc]) &&
                        (*param_2 <= param_1[4] && *param_1 <= param_2[4])));
  auVar4._8_4_ = -(uint)((param_2[0x12] <= param_1[0x16] && param_1[0x12] <= param_2[0x16]) &&
                        ((param_2[10] <= param_1[0xe] && param_1[10] <= param_2[0xe]) &&
                        (param_2[2] <= param_1[6] && param_1[2] <= param_2[6])));
  auVar4._12_4_ =
       -(uint)((param_2[0x13] <= param_1[0x17] && param_1[0x13] <= param_2[0x17]) &&
              ((param_2[0xb] <= param_1[0xf] && param_1[0xb] <= param_2[0xf]) &&
              (param_2[3] <= param_1[7] && param_1[3] <= param_2[7])));
  iVar2 = movmskps((int)in_RAX,auVar4);
  iVar1 = *(int *)(&DAT_149990100 + CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar2) * 4);
  auVar4 = pshufb(*(undefined1 (*) [16])(param_2 + 0x18),
                  *(undefined1 (*) [16])(&DAT_14998fc00 + (uint)(iVar2 << 4)));
  if (((uint)param_2[0x1d] & 1) == 0) {
    **(undefined1 (**) [16])(param_4 + 0x400) = auVar4;
    *(longlong *)(param_4 + 0x400) = *(longlong *)(param_4 + 0x400) + (longlong)iVar1 * 4;
  }
  else if (0 < iVar1) {
    iVar2 = 0;
    do {
      uVar3 = auVar4._4_4_;
      if (((iVar2 != 1) && (uVar3 = auVar4._12_4_, iVar2 != 3)) &&
         (uVar3 = auVar4._0_4_, iVar2 == 2)) {
        uVar3 = auVar4._8_4_;
      }
      FUN_147e4f9e8(*param_3,uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}



// FUNCTION 147e4f9e8 FUN_147e4f9e8 body=703 status=ok
// SIG undefined FUN_147e4f9e8(void)

void FUN_147e4f9e8(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 *local_120;
  undefined8 *local_118;
  undefined8 *local_108;
  undefined1 *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_58;
  int local_50;
  undefined8 local_4c;
  int local_44;
  undefined8 local_40;
  int local_38;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)*param_1 != param_2) {
    lVar1 = *(longlong *)param_1[1];
    lVar7 = (longlong)param_2 * 0x10;
    lVar8 = (longlong)*(int *)(lVar1 + 4 + lVar7);
    lVar6 = (longlong)*(int *)(lVar1 + 8 + lVar7);
    lVar2 = *(longlong *)(param_1[2] + 0x20);
    local_50 = *(int *)(lVar2 + 8 + (longlong)*(int *)(lVar1 + lVar7) * 0xc);
    local_58 = *(undefined8 *)(lVar2 + (longlong)*(int *)(lVar1 + lVar7) * 0xc);
    local_44 = *(int *)(lVar2 + 8 + lVar8 * 0xc);
    local_4c = *(undefined8 *)(lVar2 + lVar8 * 0xc);
    local_38 = *(int *)(lVar2 + 8 + lVar6 * 0xc);
    local_40 = *(undefined8 *)(lVar2 + lVar6 * 0xc);
    cVar4 = FUN_144d14620(param_1[3],&local_58);
    if (cVar4 == '\0') {
      local_a8 = local_58;
      local_a0 = (undefined1 *)CONCAT44((int)local_4c - (int)local_58,local_50);
      local_98 = CONCAT44(local_44 - local_50,local_4c._4_4_ - local_58._4_4_);
      local_88 = local_38 - local_50;
      local_90 = CONCAT44(local_40._4_4_ - local_58._4_4_,(int)local_40 - (int)local_58);
      FUN_147e4f2a0(&local_80,&local_a8);
      local_a9 = local_70 == 0;
      if ((bool)local_a9) {
        if (local_78 == 0 && local_80 == 0) goto LAB_147e4fa8c;
        uVar5 = *(undefined4 *)param_1[5];
      }
      else {
        uVar5 = 0;
      }
      **(undefined4 **)param_1[4] = uVar5;
      if (((longlong)(int)local_4c - (longlong)(int)local_58) *
          ((longlong)local_40._4_4_ - (longlong)local_58._4_4_) <
          ((longlong)local_4c._4_4_ - (longlong)local_58._4_4_) *
          ((longlong)(int)local_40 - (longlong)(int)local_58)) {
        **(undefined1 **)param_1[6] = 1;
      }
      else {
        *(bool *)*(undefined8 *)param_1[6] = *(int *)*param_1 < param_2;
      }
      local_a8 = param_1[7];
      local_a0 = &local_a9;
      local_98 = param_1[8];
      local_90 = param_1[9];
      puVar3 = (undefined4 *)param_1[0xb];
      local_b8 = puVar3[8];
      local_120 = &local_d8;
      local_d8 = *puVar3;
      uStack_d4 = puVar3[1];
      uStack_d0 = puVar3[2];
      uStack_cc = puVar3[3];
      local_c8 = puVar3[4];
      uStack_c4 = puVar3[5];
      uStack_c0 = puVar3[6];
      uStack_bc = puVar3[7];
      local_128 = param_1[10];
      local_e8 = *(longlong *)param_1[6];
      local_e0 = (int)((longlong *)param_1[6])[1] + local_e8;
      local_f8 = *(longlong *)param_1[4];
      local_f0 = local_f8 + (longlong)(int)((longlong *)param_1[4])[1] * 4;
      local_100 = local_34;
      local_118 = &local_a8;
      local_108 = &local_58;
      FUN_147e4fca8(&local_80);
    }
  }
LAB_147e4fa8c:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e4fca8 FUN_147e4fca8 body=2929 status=ok
// SIG undefined FUN_147e4fca8(void)

void FUN_147e4fca8(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  byte bVar19;
  undefined1 *puVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_738 [32];
  undefined8 *local_718;
  undefined4 local_710;
  byte local_701;
  undefined8 *local_700;
  ulonglong local_6f8;
  longlong *local_6f0;
  uint local_6e4;
  longlong local_6e0;
  ulonglong local_6d8;
  ulonglong local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  ulonglong local_6b8;
  ulonglong local_6b0;
  longlong *local_6a8;
  longlong local_6a0;
  longlong local_698;
  longlong *local_690;
  longlong local_688;
  ulonglong local_680;
  longlong local_678;
  longlong local_670;
  undefined8 local_668;
  int local_660;
  undefined8 local_658;
  int local_650;
  undefined8 local_648;
  undefined4 local_640;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined8 local_608;
  undefined8 local_5f8;
  int local_5f0;
  undefined8 local_5a8;
  undefined1 local_558 [64];
  longlong local_518;
  longlong local_510;
  longlong local_508;
  undefined1 *local_500;
  undefined1 *local_4f8;
  undefined1 local_4f0 [40];
  undefined1 local_4c8 [64];
  undefined1 local_488 [64];
  undefined8 local_448 [10];
  undefined8 local_3f8 [10];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined1 local_350 [40];
  undefined1 *local_328;
  ulonglong local_320;
  undefined1 local_318 [640];
  undefined8 local_98;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_738;
  local_6c8 = (param_2[1] - *param_2 >> 2) * -0x5555555555555555;
  local_670 = *param_1;
  local_678 = param_1[1];
  local_6b0 = param_1[2];
  puVar20 = (undefined1 *)param_1[3];
  puVar13 = (undefined1 *)param_1[4];
  local_698 = local_6b0;
  if ((longlong)local_6b0 < 0) {
    bVar27 = false;
    ppuVar11 = &local_328;
    bVar3 = true;
    do {
      bVar4 = bVar3;
      uVar26 = (ulonglong)bVar27;
      bVar27 = puVar20 != (undefined1 *)0x0 || (ulonglong)-(longlong)puVar20 < uVar26;
      *ppuVar11 = (undefined1 *)(-(longlong)puVar20 - uVar26);
      ppuVar11 = (undefined1 **)&local_98;
      puVar20 = puVar13;
      bVar3 = false;
    } while (bVar4);
    local_678 = -local_678;
    local_698 = -local_6b0;
    local_670 = -local_670;
    puVar13 = (undefined1 *)CONCAT44(local_98._4_4_,(undefined4)local_98);
    puVar20 = local_328;
  }
  local_328 = local_318;
  local_320 = 0x8000000800000000;
  local_320._0_4_ = 0;
  uVar21 = (uint)local_6c8;
  local_6a8 = param_4;
  local_690 = param_3;
  if (8 < (int)uVar21) {
    FUN_147e50c84(&local_328,uVar21 & 0x7fffffff);
  }
  if ((uint)local_320 != uVar21) {
    local_320 = CONCAT44(local_320._4_4_,uVar21);
  }
  lVar10 = *param_2;
  if (0 < (int)((ulonglong)(param_2[1] - lVar10) >> 2) * -0x55555555) {
    lVar17 = 4;
    lVar22 = 0;
    lVar24 = 0;
    do {
      local_98._0_4_ = *(undefined4 *)(lVar10 + -4 + lVar17);
      local_98._4_4_ = *(undefined4 *)(lVar10 + lVar17);
      FUN_147e50dda(param_6,&local_98,local_328 + lVar22);
      lVar24 = lVar24 + 1;
      lVar10 = *param_2;
      lVar17 = lVar17 + 0xc;
      lVar22 = lVar22 + 0x50;
    } while (lVar24 < (int)((ulonglong)(param_2[1] - lVar10) >> 2) * -0x55555555);
  }
  local_638 = (undefined4)*param_2;
  uStack_634 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_630 = (undefined4)param_2[1];
  uStack_62c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar7 = FUN_144d14f10(param_5);
  plVar2 = local_690;
  local_6e0 = *param_2;
  uVar23 = (ulonglong)iVar7;
  local_6f8 = uVar23 * 3;
  local_700 = (undefined8 *)(local_6e0 + uVar23 * 0xc);
  local_640 = *(undefined4 *)(local_700 + 1);
  local_648 = *local_700;
  puVar1 = (undefined4 *)*local_690;
  local_358 = *(undefined8 *)(param_5 + 8);
  local_378 = *param_5;
  uStack_374 = param_5[1];
  uStack_370 = param_5[2];
  uStack_36c = param_5[3];
  local_368 = param_5[4];
  uStack_364 = param_5[5];
  uStack_360 = param_5[6];
  uStack_35c = param_5[7];
  local_6f0 = param_2;
  FUN_143821324(local_350,&local_378,*puVar1);
  iVar7 = (int)((ulonglong)(plVar2[1] - (longlong)puVar1) >> 2);
  uVar26 = 0;
  local_6d8 = uVar23;
  if (0 < iVar7) {
    uVar23 = 1;
    if (1 < (longlong)iVar7) {
      uVar23 = (longlong)iVar7;
    }
    uVar25 = 0;
    do {
      local_388 = *(undefined8 *)(param_5 + 8);
      local_3a8 = *param_5;
      uStack_3a4 = param_5[1];
      uStack_3a0 = param_5[2];
      uStack_39c = param_5[3];
      local_398 = param_5[4];
      uStack_394 = param_5[5];
      uStack_390 = param_5[6];
      uStack_38c = param_5[7];
      FUN_143821324(local_350,&local_3a8,puVar1[uVar25]);
      bVar6 = *(byte *)(*local_6a8 + uVar25);
      iVar7 = FUN_147e511b8(local_350,&local_648);
      uVar26 = uVar25;
      if (iVar7 <= (int)-(bVar6 ^ 1)) break;
      uVar25 = uVar25 + 1;
      uVar26 = uVar23;
    } while (uVar23 != uVar25);
  }
  uVar23 = local_6b0;
  local_6b8 = (ulonglong)((longlong)local_6b0 < 0);
  puVar9 = (undefined8 *)(local_328 + local_6d8 * 0x50);
  puVar16 = puVar9;
  puVar18 = local_3f8;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar18 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar16 = local_448;
  for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar16 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar16 = puVar16 + 1;
  }
  iVar7 = (int)local_6c8;
  iVar15 = (int)local_6d8 + iVar7;
  uVar25 = (longlong)(int)(iVar15 + (uint)((longlong)local_6b0 < 0) * 2 + -1) % (longlong)iVar7;
  local_6d0 = uVar25 & 0xffffffff;
  local_98._0_4_ = *(undefined4 *)local_700;
  local_98._4_4_ = *(undefined4 *)((longlong)local_700 + 4);
  lVar10 = (longlong)(int)uVar25;
  local_5a8._0_4_ = *(undefined4 *)(local_6e0 + lVar10 * 0xc);
  local_5a8._4_4_ = *(undefined4 *)(local_6e0 + 4 + lVar10 * 0xc);
  local_701 = FUN_147e5125a(param_6,&local_5a8,&local_98,local_488);
  plVar2 = local_690;
  uVar21 = (uint)((longlong)uVar23 >> 0x3f) | 1;
  local_6b0 = (ulonglong)uVar21;
  iVar15 = (int)(iVar15 + uVar21) % iVar7;
  lVar10 = *local_6f0;
  local_6e0 = CONCAT44(local_6e0._4_4_,iVar15);
  local_98._0_4_ = *(undefined4 *)(lVar10 + (longlong)iVar15 * 0xc);
  local_98._4_4_ = *(undefined4 *)(lVar10 + 4 + (longlong)iVar15 * 0xc);
  local_5a8._0_4_ = *(undefined4 *)(lVar10 + local_6f8 * 4);
  local_5a8._4_4_ = *(undefined4 *)(lVar10 + 4 + local_6f8 * 4);
  uVar5 = FUN_147e5125a(param_6,&local_5a8,&local_98,local_4c8);
  local_6f8 = CONCAT71(local_6f8._1_7_,uVar5);
  local_6b8 = (ulonglong)((iVar7 + (int)local_6b8 * 2) - 1);
  uVar25 = local_6d8 & 0xffffffff;
  uVar23 = local_6d0;
  puVar9 = (undefined8 *)(uVar26 & 0xffffffff);
  bVar6 = local_701;
  do {
    while( true ) {
      local_700 = puVar9;
      lVar10 = *plVar2;
      uVar12 = uVar23 & 0xffffffff;
      if (local_700 != (undefined8 *)((ulonglong)(plVar2[1] - lVar10) >> 2 & 0xffffffff)) break;
LAB_147e5013e:
      uVar14 = SUB84(local_700,0);
      iVar7 = (int)uVar12;
      bVar19 = (byte)local_6f8;
      if ((bVar6 & 1) != 0) {
        local_718 = (undefined8 *)CONCAT44(local_718._4_4_,0xffffffff);
        local_710 = uVar14;
        FUN_147e5081a(param_7,local_328 + (longlong)iVar7 * 0x50,local_3f8,local_488);
        uVar14 = SUB84(local_700,0);
        bVar19 = (byte)local_6f8;
      }
      if (iVar7 == (uint)local_6e0) {
        if ((bVar19 & 1) != 0) {
          local_718 = (undefined8 *)CONCAT44(local_718._4_4_,0xffffffff);
          local_710 = uVar14;
          FUN_147e5081a(param_7,local_448,local_328 + (longlong)(int)(uint)local_6e0 * 0x50,
                        local_4c8);
        }
        uVar26 = local_320 >> 0x20;
        local_320 = local_320 & 0xffffffff00000000;
        lVar10 = (longlong)(int)uVar26;
        if ((-1 < lVar10) && (local_328 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_328,lVar10 * 0x50);
        }
        if ((local_48 ^ (ulonglong)auStack_738) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      lVar17 = (longlong)iVar7;
      puVar9 = (undefined8 *)(local_328 + lVar17 * 0x50);
      puVar16 = local_3f8;
      for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar16 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar16 = puVar16 + 1;
      }
      uVar23 = (longlong)((int)local_6b8 + iVar7) % (longlong)(int)local_6c8;
      lVar10 = *local_6f0;
      local_98._0_4_ = *(undefined4 *)(lVar10 + lVar17 * 0xc);
      local_98._4_4_ = *(undefined4 *)(lVar10 + 4 + lVar17 * 0xc);
      lVar17 = (longlong)(int)uVar23;
      local_5a8._0_4_ = *(undefined4 *)(lVar10 + lVar17 * 0xc);
      local_5a8._4_4_ = *(undefined4 *)(lVar10 + 4 + lVar17 * 0xc);
      bVar6 = FUN_147e5125a(param_6,&local_5a8,&local_98,local_488);
      uVar25 = uVar12 & 0xffffffff;
      puVar9 = local_700;
    }
    bVar19 = *(byte *)(*local_6a8 + (longlong)local_700);
    lVar17 = *local_6f0;
    local_6e4 = (uint)uVar25;
    local_701 = bVar6;
    local_6d0 = uVar23 & 0xffffffff;
    iVar7 = FUN_147e511b8(local_350,lVar17 + (longlong)(int)uVar23 * 0xc);
    iVar15 = -(bVar19 ^ 1);
    uVar12 = local_6d0;
    bVar6 = local_701;
    if (iVar7 <= iVar15) goto LAB_147e5013e;
    lVar22 = (longlong)(int)(uint)local_6e0;
    local_688 = (longlong)(int)uVar23 * 3;
    iVar7 = FUN_147e511b8(local_350,lVar22 * 0xc + lVar17);
    if (iVar7 <= iVar15) {
      local_680 = (ulonglong)(uint)((int)local_6c8 + (int)local_6b0);
      uVar23 = local_6f8 & 0xff;
      uVar21 = (uint)local_6e0;
      local_6a0 = lVar17;
      do {
        local_6d8 = (ulonglong)uVar21;
        lVar10 = local_6a0;
        if ((uVar23 & 1) != 0) {
          local_710 = SUB84(local_700,0);
          local_718 = (undefined8 *)CONCAT44(local_718._4_4_,0xffffffff);
          FUN_147e5081a(param_7,local_448,local_328 + lVar22 * 0x50,local_4c8);
          lVar10 = *local_6f0;
        }
        puVar9 = (undefined8 *)(local_328 + lVar22 * 0x50);
        puVar16 = local_448;
        for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar16 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar16 = puVar16 + 1;
        }
        uVar21 = ((int)local_6d8 + (int)local_680) % (int)local_6c8;
        local_6c0 = (longlong)(int)uVar21;
        lVar17 = local_6c0 * 0xc;
        local_98._0_4_ = *(undefined4 *)(lVar10 + lVar17);
        local_98._4_4_ = *(undefined4 *)(lVar10 + 4 + lVar17);
        local_5a8._0_4_ = *(undefined4 *)(lVar10 + lVar22 * 0xc);
        local_5a8._4_4_ = *(undefined4 *)(lVar10 + 4 + lVar22 * 0xc);
        uVar8 = FUN_147e5125a(param_6,&local_5a8,&local_98,local_4c8);
        uVar23 = (ulonglong)uVar8;
        bVar6 = *(byte *)(*local_6a8 + (longlong)local_700);
        local_6a0 = *local_6f0;
        iVar7 = FUN_147e511b8(local_350,lVar17 + local_6a0);
        lVar22 = local_6c0;
      } while (iVar7 <= (int)-(bVar6 ^ 1));
      local_6f8 = CONCAT71(local_6f8._1_7_,(char)uVar8);
      local_6e0 = CONCAT44(local_6e0._4_4_,uVar21);
      lVar10 = *plVar2;
    }
    local_6c0 = lVar22;
    puVar16 = local_700;
    local_518 = local_670;
    local_510 = local_678;
    local_508 = local_698;
    local_500 = puVar20;
    local_4f8 = puVar13;
    FUN_143821324(local_4f0,&local_518,-*(int *)(lVar10 + (longlong)local_700 * 4));
    FUN_147e50bee(param_6,local_4f0,local_558);
    local_650 = *(int *)(*plVar2 + (longlong)puVar16 * 4);
    lVar10 = *local_6f0;
    local_5f8 = *(undefined8 *)(lVar10 + (longlong)(int)local_6e4 * 0xc);
    local_5f0 = *(int *)(lVar10 + 8 + (longlong)(int)local_6e4 * 0xc) - local_650;
    local_658 = *(undefined8 *)(lVar10 + local_688 * 4);
    local_650 = *(int *)(lVar10 + 8 + local_688 * 4) - local_650;
    local_718 = &local_98;
    FUN_147e51d12(param_6,param_5);
    FUN_147e50f05(&local_98,local_80,local_68,local_50);
    puVar9 = &local_98;
    puVar18 = &local_5a8;
    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar18 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar18 = puVar18 + 1;
    }
    uVar14 = SUB84(puVar16,0);
    if ((local_701 & 1) != 0) {
      local_718 = (undefined8 *)CONCAT44(local_718._4_4_,0xffffffff);
      local_710 = uVar14;
      FUN_147e5081a(param_7,&local_5a8,local_3f8,local_488);
    }
    puVar9 = &local_5a8;
    puVar18 = local_3f8;
    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar18 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar18 = puVar18 + 1;
    }
    local_660 = *(int *)(*plVar2 + (longlong)puVar16 * 4);
    lVar10 = *local_6f0;
    local_658 = *(undefined8 *)(lVar10 + (longlong)(int)local_6d8 * 0xc);
    local_650 = *(int *)(lVar10 + 8 + (longlong)(int)local_6d8 * 0xc) - local_660;
    local_668 = *(undefined8 *)(lVar10 + local_6c0 * 0xc);
    local_660 = *(int *)(lVar10 + 8 + local_6c0 * 0xc) - local_660;
    local_718 = &local_98;
    FUN_147e51d12(param_6,param_5);
    FUN_147e50f05(&local_98,local_80,local_68,local_50);
    puVar9 = &local_98;
    puVar18 = &local_5f8;
    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar18 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar18 = puVar18 + 1;
    }
    if ((local_6f8 & 1) != 0) {
      local_718 = (undefined8 *)CONCAT44(local_718._4_4_,0xffffffff);
      local_710 = uVar14;
      FUN_147e5081a(param_7,local_448,&local_5f8,local_4c8);
    }
    puVar9 = &local_5f8;
    puVar18 = local_448;
    for (lVar10 = 10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar18 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar18 = puVar18 + 1;
    }
    puVar9 = (undefined8 *)((longlong)puVar16 + 1);
    uVar21 = (int)uVar26 + 1;
    uVar26 = (ulonglong)uVar21;
    local_718 = (undefined8 *)CONCAT44(local_718._4_4_,uVar21);
    local_710 = uVar14;
    FUN_147e5081a(param_7,&local_5f8,&local_5a8,local_558);
    uVar23 = local_6d0;
    uVar25 = (ulonglong)local_6e4;
    bVar6 = local_701;
    if ((int)puVar9 < (int)((ulonglong)(plVar2[1] - *plVar2) >> 2)) {
      local_608 = *(undefined8 *)(param_5 + 8);
      local_628 = *param_5;
      uStack_624 = param_5[1];
      uStack_620 = param_5[2];
      uStack_61c = param_5[3];
      local_618 = param_5[4];
      uStack_614 = param_5[5];
      uStack_610 = param_5[6];
      uStack_60c = param_5[7];
      FUN_143821324(local_350,&local_628,*(undefined4 *)(*plVar2 + 4 + (longlong)puVar16 * 4));
      uVar25 = (ulonglong)local_6e4;
      bVar6 = local_701;
    }
  } while( true );
}



// FUNCTION 147e5081a FUN_147e5081a body=978 status=ok
// SIG undefined FUN_147e5081a(void)

void FUN_147e5081a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_378 [32];
  int local_358;
  int local_350;
  undefined1 local_348;
  undefined8 *local_338;
  undefined4 *local_330;
  undefined8 local_328 [10];
  undefined8 local_2d8 [10];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int local_248;
  int local_244;
  undefined1 local_240 [72];
  float local_1f8;
  float local_1f4;
  undefined1 local_1f0 [72];
  float local_1a8;
  float local_1a4;
  int local_160;
  int local_15c;
  undefined8 local_158 [10];
  undefined8 local_108 [10];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (param_5 < 1) {
    param_5 = 0;
  }
  iVar15 = (int)((ulonglong)(((longlong *)*param_1)[1] - *(longlong *)*param_1) >> 2);
  iVar4 = param_5 + -1;
  if (iVar15 < param_5) {
    iVar4 = -1;
  }
  iVar14 = 0;
  if (0 < param_6) {
    iVar14 = param_6;
  }
  iVar20 = iVar14 + -1;
  if (iVar15 < iVar14) {
    iVar20 = -1;
  }
  iVar15 = iVar20;
  if (iVar20 < iVar4) {
    iVar15 = iVar4;
  }
  if (-1 < iVar15) {
    if ((*(char *)param_1[1] == '\x01') && (iVar4 == 0 || iVar20 == 0)) {
      lVar9 = param_1[2];
      local_b8 = *param_4;
      uStack_b4 = param_4[1];
      uStack_b0 = param_4[2];
      uStack_ac = param_4[3];
      local_a8 = param_4[4];
      uStack_a4 = param_4[5];
      uStack_a0 = param_4[6];
      uStack_9c = param_4[7];
      local_98 = param_4[8];
      uStack_94 = param_4[9];
      uStack_90 = param_4[10];
      uStack_8c = param_4[0xb];
      local_88 = param_4[0xc];
      uStack_84 = param_4[0xd];
      uStack_80 = param_4[0xe];
      uStack_7c = param_4[0xf];
      puVar12 = local_108;
      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *param_3;
        param_3 = param_3 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar12 = local_158;
      for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *param_2;
        param_2 = param_2 + 1;
        puVar12 = puVar12 + 1;
      }
      local_348 = 1;
      local_358 = iVar4;
      local_350 = iVar20;
      FUN_147e4f36a(lVar9,local_158);
    }
    else {
      local_338 = param_2;
      local_330 = param_4;
      uVar6 = FUN_147e5162a(param_3);
      plVar19 = (longlong *)param_1[3];
      uVar1 = *(uint *)((longlong)plVar19 + 0xc);
      uVar16 = (uVar6 >> 4) * -0x61c8864f;
      lVar9 = *plVar19;
      while( true ) {
        uVar11 = (ulonglong)(uVar16 & uVar1);
        uVar2 = *(uint *)(lVar9 + uVar11 * 0xf0);
        if (uVar2 == 0xffffffff) break;
        if (uVar2 == uVar6) goto LAB_147e509ca;
        uVar16 = (uVar16 & uVar1) + 1;
      }
      uVar11 = (longlong)(int)uVar1 + 1;
LAB_147e509ca:
      uVar18 = uVar11;
      if ((int)uVar1 < (int)uVar11) {
LAB_147e509cf:
        puVar12 = local_338;
        uVar7 = FUN_147e5162a(local_338);
        puVar13 = local_328;
        for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar12 = local_2d8;
        for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *param_3;
          param_3 = param_3 + 1;
          puVar12 = puVar12 + 1;
        }
        local_288 = *local_330;
        uStack_284 = local_330[1];
        uStack_280 = local_330[2];
        uStack_27c = local_330[3];
        local_278 = local_330[4];
        uStack_274 = local_330[5];
        uStack_270 = local_330[6];
        uStack_26c = local_330[7];
        local_268 = local_330[8];
        uStack_264 = local_330[9];
        uStack_260 = local_330[10];
        uStack_25c = local_330[0xb];
        local_258 = local_330[0xc];
        uStack_254 = local_330[0xd];
        uStack_250 = local_330[0xe];
        uStack_24c = local_330[0xf];
        local_248 = iVar4;
        local_244 = iVar20;
        FUN_147e51584(plVar19,uVar7);
      }
      else {
LAB_147e50a58:
        memcpy(local_240,(void *)(lVar9 + (longlong)(int)uVar11 * 0xf0 + 8),0xe8);
        if (((((local_160 != iVar4) || (local_15c != iVar20)) ||
             (((ABS(*(float *)(param_3 + 9)) + ABS(local_1f8)) * 1.1920929e-07 <
               ABS(local_1f8 - *(float *)(param_3 + 9)) &&
              ((ABS(*(float *)((longlong)param_3 + 0x4c)) + ABS(local_1f4)) * 1.1920929e-07 <
               ABS(local_1f4 - *(float *)((longlong)param_3 + 0x4c)))))) ||
            (cVar5 = FUN_147e51717(local_240,param_3), cVar5 == '\0')) ||
           ((((ABS(*(float *)(local_338 + 9)) + ABS(local_1a8)) * 1.1920929e-07 <
              ABS(local_1a8 - *(float *)(local_338 + 9)) &&
             ((ABS(*(float *)((longlong)local_338 + 0x4c)) + ABS(local_1a4)) * 1.1920929e-07 <
              ABS(local_1a4 - *(float *)((longlong)local_338 + 0x4c)))) ||
            (cVar5 = FUN_147e51717(local_1f0,local_338), cVar5 == '\0')))) {
          plVar19 = (longlong *)param_1[3];
          iVar15 = *(int *)((longlong)plVar19 + 0xc);
          lVar9 = *plVar19;
          iVar14 = (int)uVar18 + 1;
          do {
            do {
              iVar17 = iVar14;
              iVar14 = 0;
            } while (iVar15 < iVar17);
            puVar10 = (uint *)((longlong)iVar17 * 0xf0 + lVar9);
            uVar11 = (longlong)iVar17;
            do {
              if (*puVar10 == 0xffffffff) {
                uVar11 = (ulonglong)(iVar15 + 1);
LAB_147e50b3a:
                uVar18 = uVar11 & 0xffffffff;
                if (iVar15 < (int)uVar11) goto LAB_147e509cf;
                goto LAB_147e50a58;
              }
              if (*puVar10 == uVar6) goto LAB_147e50b3a;
              puVar10 = puVar10 + 0x3c;
              bVar3 = (longlong)uVar11 < (longlong)iVar15;
              uVar11 = uVar11 + 1;
            } while (bVar3);
          } while( true );
        }
        FUN_147e51488(param_1[3],uVar11);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e50bee FUN_147e50bee body=149 status=ok
// SIG undefined FUN_147e50bee(void)

void FUN_147e50bee(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147e51b8c(&local_88,param_1,param_2);
  local_58 = local_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  FUN_147e5133a(&local_58);
  param_3[0xc] = local_28;
  param_3[0xd] = uStack_24;
  param_3[0xe] = uStack_20;
  param_3[0xf] = uStack_1c;
  param_3[8] = local_38;
  param_3[9] = uStack_34;
  param_3[10] = uStack_30;
  param_3[0xb] = uStack_2c;
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e50c84 FUN_147e50c84 body=341 status=ok
// SIG undefined FUN_147e50c84(void)

ulonglong FUN_147e50c84(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)(uVar2 * 2);
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar6 * 0x50,&local_50)
  ;
  FUN_144b3d470(uVar4,*param_1,(longlong)*(int *)(param_1 + 1) * 0x50);
  uVar1 = uVar6 * 0x50 + 0x50;
  uVar5 = local_50;
  uVar7 = uVar6;
  if (uVar1 <= local_50) {
    uVar7 = uVar6 + 1;
    local_50 = local_50 - 0x50;
    uVar5 = local_50;
    if (uVar1 <= local_50) {
      uVar6 = local_50 + uVar6 * -0x50;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar5 = SUB168(auVar3 * ZEXT816(0xcccccccccccccccd),0);
      uVar7 = uVar7 + uVar6 / 0x50;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0x50);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e50dda FUN_147e50dda body=154 status=ok
// SIG undefined FUN_147e50dda(void)

void FUN_147e50dda(int *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_80;
  undefined8 *local_78;
  undefined8 local_68 [3];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2[1] - param_1[1];
  local_88 = *param_2 - *param_1;
  local_78 = local_68;
  FUN_147e50e75(param_1[3],param_1[6],param_1[4],param_1[7]);
  FUN_147e50f05(local_68,local_50,local_38,local_20);
  puVar2 = local_68;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e50e75 FUN_147e50e75 body=144 status=ok
// SIG undefined FUN_147e50e75(void)

void FUN_147e50e75(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = (longlong)param_4 * (longlong)param_1 - (longlong)param_3 * (longlong)param_2;
  if (lVar1 != 0) {
    lVar3 = (longlong)param_4 * (longlong)param_5 - (longlong)param_2 * (longlong)param_6;
    lVar2 = (longlong)param_1 * (longlong)param_6 - (longlong)param_3 * (longlong)param_5;
    lVar5 = -lVar2;
    lVar4 = -lVar3;
    if (-1 < lVar1) {
      lVar5 = lVar2;
      lVar4 = lVar3;
    }
    *param_7 = lVar4;
    param_7[1] = lVar4 >> 0x3f;
    param_7[2] = lVar4 >> 0x3f;
    param_7[3] = lVar5;
    param_7[4] = lVar5 >> 0x3f;
    lVar4 = -lVar1;
    if (-lVar1 < 0) {
      lVar4 = lVar1;
    }
    param_7[5] = lVar5 >> 0x3f;
    param_7[6] = lVar4;
    param_7[7] = 0;
    param_7[8] = 0;
  }
  return;
}



// FUNCTION 147e50f05 FUN_147e50f05 body=226 status=ok
// SIG undefined FUN_147e50f05(void)

void FUN_147e50f05(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_147e50fe8(param_3,&local_34);
  lVar2 = FUN_147e510dd(param_1,&local_38);
  iVar4 = 0;
  iVar3 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)((float)lVar2 / (float)uVar1) + (local_38 - local_34) * 0x800000;
  }
  *param_4 = iVar3;
  lVar2 = FUN_147e510dd(param_2,&local_38);
  if (lVar2 != 0) {
    iVar4 = (int)((float)lVar2 / (float)uVar1) + (local_38 - local_34) * 0x800000;
  }
  param_4[1] = iVar4;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e50fe8 FUN_147e50fe8 body=119 status=ok
// SIG undefined FUN_147e50fe8(void)

ulonglong FUN_147e50fe8(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1[2] == 0) {
    if (param_1[1] == 0) {
      *param_2 = 0;
      return *param_1;
    }
    lVar4 = 1;
    iVar3 = 1;
  }
  else {
    lVar4 = 2;
    iVar3 = 2;
  }
  iVar1 = FUN_147e5105f();
  *param_2 = iVar3 * 0x40 - iVar1;
  uVar2 = param_1[lVar4] << ((byte)iVar1 & 0x3f);
  if (iVar1 != 0) {
    uVar2 = uVar2 | param_1[iVar3 - 1] >> (-(byte)iVar1 & 0x3f);
  }
  return uVar2;
}



// FUNCTION 147e5105f FUN_147e5105f body=126 status=ok
// SIG undefined FUN_147e5105f(void)

int FUN_147e5105f(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)(param_1 >> 1) & 0x7fffffff | (uint)param_1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar1 >> 0x10 | uVar1);
  uVar1 = (uint)(param_1 >> 0x20);
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar1 >> 0x10 | uVar1);
  iVar2 = 0x40 - iVar2;
  if (0 < iVar3) {
    iVar2 = 0x20 - iVar3;
  }
  return iVar2;
}



// FUNCTION 147e510dd FUN_147e510dd body=218 status=ok
// SIG undefined FUN_147e510dd(void)

ulonglong FUN_147e510dd(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar2 = param_1[2];
  uVar4 = (longlong)uVar2 >> 0x3f;
  if (uVar2 == uVar4) {
    if (param_1[1] == uVar2) {
      if (-1 < (longlong)(*param_1 ^ uVar2)) {
        *param_2 = 0;
        return *param_1;
      }
      *param_2 = 1;
      return uVar2 & 0x8000000000000000 | *param_1 >> 1;
    }
    lVar6 = 1;
    iVar5 = 1;
    uVar2 = param_1[1];
  }
  else {
    lVar6 = 2;
    iVar5 = 2;
  }
  iVar1 = FUN_147e5105f(uVar2 ^ uVar4);
  iVar3 = iVar1 + -1;
  *param_2 = iVar5 * 0x40 - iVar3;
  if (iVar1 < 1) {
    uVar2 = param_1[lVar6] >> 1 | uVar4 & 0x8000000000000000;
  }
  else {
    uVar2 = param_1[lVar6] << ((byte)iVar3 & 0x3f);
    if (iVar3 != 0) {
      uVar2 = uVar2 | param_1[iVar5 - 1] >> (0x41U - (char)iVar1 & 0x3f);
    }
  }
  return uVar2;
}



// FUNCTION 147e511b8 FUN_147e511b8 body=160 status=ok
// SIG undefined FUN_147e511b8(void)

uint FUN_147e511b8(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147e4f4e2(&local_28,param_1);
  lVar7 = 0;
  bVar9 = false;
  puVar6 = &local_28;
  plVar8 = &local_30;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    puVar1 = (ulonglong *)(param_1 + 0x18 + lVar7 * 8);
    uVar2 = (ulonglong)bVar9;
    uVar3 = *puVar6 + *puVar1;
    bVar9 = CARRY8(*puVar6,*puVar1) || CARRY8(uVar3,uVar2);
    *plVar8 = uVar3 + uVar2;
    lVar7 = 1;
    puVar6 = &local_20;
    plVar8 = &local_38;
    bVar4 = false;
  } while (bVar5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (uint)(local_30 != 0 || local_38 != 0) | (uint)(local_38 >> 0x3f);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5125a FUN_147e5125a body=222 status=ok
// SIG undefined FUN_147e5125a(void)

ulonglong FUN_147e5125a(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (longlong)param_2[1] - (longlong)param_3[1];
  lVar3 = (longlong)*param_3 - (longlong)*param_2;
  local_60 = param_1[3] * lVar2 + param_1[4] * lVar3;
  iVar1 = param_1[7];
  uStack_58 = local_60 >> 0x3f;
  local_50 = param_1[6] * lVar2 + iVar1 * lVar3;
  uStack_48 = local_50 >> 0x3f;
  local_40 = ((longlong)*param_1 - (longlong)*param_2) * lVar2 +
             ((longlong)param_1[1] - (longlong)param_2[1]) * lVar3;
  uStack_38 = local_40 >> 0x3f;
  FUN_147e5133a(&local_60);
  param_4[0xc] = local_30;
  param_4[0xd] = uStack_2c;
  param_4[0xe] = uStack_28;
  param_4[0xf] = uStack_24;
  param_4[8] = (undefined4)local_40;
  param_4[9] = local_40._4_4_;
  param_4[10] = (undefined4)uStack_38;
  param_4[0xb] = uStack_38._4_4_;
  param_4[4] = (undefined4)local_50;
  param_4[5] = local_50._4_4_;
  param_4[6] = (undefined4)uStack_48;
  param_4[7] = uStack_48._4_4_;
  *param_4 = (undefined4)local_60;
  param_4[1] = local_60._4_4_;
  param_4[2] = (undefined4)uStack_58;
  param_4[3] = uStack_58._4_4_;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)(iVar1 * lVar3) >> 8),(int)lVar3 != 0 || (int)lVar2 != 0) &
           0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5133a FUN_147e5133a body=168 status=ok
// SIG undefined FUN_147e5133a(void)

void FUN_147e5133a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_147e513e3(param_1 + 0x10,&local_24);
  iVar1 = local_24 * 0x800000;
  lVar3 = FUN_147e513e3(param_1,&local_24);
  *(int *)(param_1 + 0x30) = (int)(float)lVar3 + local_24 * 0x800000;
  *(int *)(param_1 + 0x34) = (int)(float)lVar2 + iVar1;
  lVar2 = FUN_147e513e3(param_1 + 0x20,&local_24);
  *(int *)(param_1 + 0x38) = (int)(float)lVar2 + local_24 * 0x800000;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e513e3 FUN_147e513e3 body=164 status=ok
// SIG undefined FUN_147e513e3(void)

ulonglong FUN_147e513e3(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = (longlong)uVar2 >> 0x3f;
  if (uVar2 == uVar3) {
    if ((longlong)(*param_1 ^ uVar2) < 0) {
      *param_2 = 1;
      uVar2 = uVar2 & 0x8000000000000000 | *param_1 >> 1;
    }
    else {
      *param_2 = 0;
      uVar2 = *param_1;
    }
  }
  else {
    iVar1 = FUN_147e5105f(uVar2 ^ uVar3);
    *param_2 = 0x41 - iVar1;
    if (iVar1 < 1) {
      uVar2 = uVar3 & 0x8000000000000000 | param_1[1] >> 1;
    }
    else {
      uVar2 = param_1[1] << ((byte)(iVar1 + -1) & 0x3f);
      if (iVar1 + -1 != 0) {
        uVar2 = uVar2 | *param_1 >> ((byte)(0x41 - iVar1) & 0x3f);
      }
    }
  }
  return uVar2;
}



// FUNCTION 147e51488 FUN_147e51488 body=252 status=ok
// SIG undefined FUN_147e51488(void)

void FUN_147e51488(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined4 *)(*param_1 + (param_2 & 0xffffffff) * 0xf0) = 0xffffffff;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  lVar3 = *param_1;
  uVar7 = (uint)param_2;
  do {
    uVar7 = uVar1 + uVar7 & uVar1;
  } while (*(int *)(lVar3 + (ulonglong)uVar7 * 0xf0) != -1);
  uVar6 = (ulonglong)((uint)param_2 + 1 & uVar1);
  uVar8 = *(uint *)(lVar3 + uVar6 * 0xf0);
  if (uVar8 != 0xffffffff) {
    uVar7 = uVar7 + 1 & uVar1;
    do {
      uVar9 = (uVar8 >> 4) * -0x61c8864f & uVar1;
      uVar5 = (uint)uVar6;
      uVar4 = (uint)param_2;
      if ((uVar5 < uVar7) || (uVar9 <= uVar4)) {
        if (uVar5 < uVar4) {
          if ((uVar9 <= uVar4) && (uVar5 < uVar9)) {
LAB_147e51534:
            lVar2 = (param_2 & 0xffffffff) * 0xf0;
            *(uint *)(lVar3 + lVar2) = uVar8;
            memcpy((void *)(*param_1 + lVar2 + 8),(void *)(*param_1 + uVar6 * 0xf0 + 8),0xe8);
            *(undefined4 *)(*param_1 + uVar6 * 0xf0) = 0xffffffff;
            uVar1 = *(uint *)((longlong)param_1 + 0xc);
            lVar3 = *param_1;
            param_2 = uVar6;
          }
        }
        else if ((uVar9 <= uVar4) || (uVar7 <= uVar9)) goto LAB_147e51534;
      }
      uVar6 = (ulonglong)(uVar5 + 1 & uVar1);
      uVar8 = *(uint *)(lVar3 + uVar6 * 0xf0);
    } while (uVar8 != 0xffffffff);
  }
  return;
}



// FUNCTION 147e51584 FUN_147e51584 body=165 status=ok
// SIG undefined FUN_147e51584(void)

void FUN_147e51584(longlong *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < (int)param_1[1] * 2) {
    FUN_147e51a40(param_1,local_24,uVar1 * 2 + 2);
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
  }
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  do {
    lVar3 = (ulonglong)(uVar2 & uVar1) * 0xf0;
    uVar2 = (uVar2 & uVar1) + 1;
  } while (*(int *)(*param_1 + lVar3) != -1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *(uint *)(*param_1 + lVar3) = param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    memcpy((void *)(*param_1 + lVar3 + 8),param_3,0xe8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147e5162a FUN_147e5162a body=92 status=ok
// SIG undefined FUN_147e5162a(void)

uint FUN_147e5162a(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_147e51686(param_1 + 0x30);
  uVar2 = FUN_147e51686(param_1 + 0x18);
  uVar3 = FUN_147e51686(param_1);
  uVar3 = uVar3 ^ uVar3 * 0x40 + uVar2 + (uVar2 >> 2) + 0x9e3779b9;
  return uVar3 ^ (uVar1 >> 2) + uVar1 + -0x61c88647 + uVar3 * 0x40;
}



// FUNCTION 147e51686 FUN_147e51686 body=145 status=ok
// SIG undefined FUN_147e51686(void)

uint FUN_147e51686(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = (int)*param_1;
  uVar2 = iVar1 * -0x61c8864f;
  uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | iVar1 * -0x4f000000;
  iVar1 = (int)((ulonglong)*param_1 >> 0x20);
  uVar2 = iVar1 * -0x61c8864f;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar2 = (uVar3 >> 2) + uVar3 + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  lVar4 = 0;
  do {
    iVar1 = (int)param_1[lVar4 + 1];
    uVar3 = iVar1 * -0x61c8864f;
    uVar5 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
    iVar1 = (int)((ulonglong)param_1[lVar4 + 1] >> 0x20);
    uVar3 = iVar1 * -0x61c8864f;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
    uVar3 = uVar3 * 0x40 + (uVar5 >> 2) + uVar5 + 0x9e3779b9 ^ uVar3;
    uVar2 = (uVar3 >> 2) + uVar2 * 0x40 + uVar3 + 0x9e3779b9 ^ uVar2;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2);
  return uVar2;
}



// FUNCTION 147e51717 FUN_147e51717 body=241 status=ok
// SIG undefined FUN_147e51717(void)

undefined8 FUN_147e51717(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = param_2[8];
  local_30 = param_2[6];
  uStack_28 = param_2[7];
  local_38 = param_2[2];
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_50 = *(undefined8 *)(param_1 + 0x10);
  local_60 = *(undefined8 *)(param_1 + 0xc);
  uStack_58 = *(undefined8 *)(param_1 + 0xe);
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = *(undefined8 *)(param_1 + 4);
  cVar1 = FUN_147e51809();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_80 = param_2[8];
    local_90 = param_2[6];
    uStack_88 = param_2[7];
    local_98 = param_2[5];
    local_a8 = param_2[3];
    uStack_a0 = param_2[4];
    local_c0 = *(undefined8 *)(param_1 + 0xc);
    uStack_b8 = *(undefined8 *)(param_1 + 0xe);
    local_b0 = *(undefined8 *)(param_1 + 0x10);
    local_d8 = param_1[6];
    uStack_d4 = param_1[7];
    uStack_d0 = param_1[8];
    uStack_cc = param_1[9];
    local_c8 = *(undefined8 *)(param_1 + 10);
    uVar2 = FUN_147e51809();
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e51809 FUN_147e51809 body=121 status=ok
// SIG undefined FUN_147e51809(void)

undefined8 FUN_147e51809(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [5];
  longlong local_40 [5];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147e51883(local_40,param_1 + 0x18,param_2);
  uVar1 = FUN_147e51883(local_68,param_2 + 0x18,param_1);
  uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  lVar2 = 0;
  do {
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),(byte)uVar1 & local_68[lVar2] == local_40[lVar2])
    ;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 5);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e51883 FUN_147e51883 body=143 status=ok
// SIG undefined FUN_147e51883(void)

undefined4 * FUN_147e51883(undefined4 *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e51913(param_2,param_3,&local_50);
  if (*(longlong *)(param_3 + 0x10) < 0) {
    lVar5 = 0;
    bVar6 = false;
    do {
      uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
      puVar1 = &uStack_38 + lVar5;
      uVar3 = (ulonglong)bVar6;
      uVar4 = *puVar1 - uVar2;
      bVar6 = *puVar1 < uVar2 || uVar4 < uVar3;
      *puVar1 = uVar4 - uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
  }
  *(undefined8 *)(param_1 + 8) = local_30;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = (undefined4)uStack_38;
  param_1[7] = uStack_38._4_4_;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e51913 FUN_147e51913 body=299 status=ok
// SIG undefined FUN_147e51913(void)

void FUN_147e51913(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  ulonglong auStack_78 [4];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_1;
  local_58 = auVar5 * auVar8;
  lVar13 = 2;
  bVar16 = false;
  uVar15 = local_58._8_8_;
  do {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar2;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_1[lVar13 + -1];
    uVar12 = SUB168(auVar6 * auVar9,8);
    uVar11 = SUB168(auVar6 * auVar9,0);
    uVar3 = (ulonglong)bVar16;
    uVar4 = uVar11 + uVar15;
    bVar16 = CARRY8(uVar11,uVar15) || CARRY8(uVar4,uVar3);
    *(ulonglong *)(local_58 + lVar13 * 8 + -8) = uVar4 + uVar3;
    *(ulonglong *)(local_58 + lVar13 * 8) = uVar12;
    lVar13 = lVar13 + 1;
    uVar15 = uVar12;
  } while (lVar13 != 4);
  uStack_40 = uStack_40 + (ulonglong)bVar16;
  lVar13 = 1;
  bVar16 = false;
  do {
    uVar2 = param_2[lVar13];
    lVar14 = 0;
    bVar17 = false;
    uVar15 = 0;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1[lVar14];
      auStack_78[3] = SUB168(auVar7 * auVar10,8);
      uVar11 = SUB168(auVar7 * auVar10,0);
      uVar3 = (ulonglong)bVar17;
      uVar4 = uVar11 + uVar15;
      bVar17 = CARRY8(uVar11,uVar15) || CARRY8(uVar4,uVar3);
      auStack_78[lVar14] = uVar4 + uVar3;
      lVar14 = lVar14 + 1;
      uVar15 = auStack_78[3];
    } while (lVar14 != 3);
    auStack_78[3] = auStack_78[3] + bVar17;
    lVar14 = 0;
    bVar17 = false;
    do {
      puVar1 = (ulonglong *)(local_58 + lVar14 * 8 + lVar13 * 8);
      uVar2 = (ulonglong)bVar17;
      uVar15 = *puVar1 + auStack_78[lVar14];
      bVar17 = CARRY8(*puVar1,auStack_78[lVar14]) || CARRY8(uVar15,uVar2);
      *puVar1 = uVar15 + uVar2;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 3);
    (&uStack_40)[lVar13] = auStack_78[3] + bVar17;
    lVar13 = 2;
    bVar17 = !bVar16;
    bVar16 = true;
  } while (bVar17);
  param_3[8] = local_38;
  param_3[9] = uStack_34;
  param_3[10] = uStack_30;
  param_3[0xb] = uStack_2c;
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = (undefined4)uStack_40;
  param_3[7] = uStack_40._4_4_;
  *param_3 = local_58._0_4_;
  param_3[1] = local_58._4_4_;
  param_3[2] = local_58._8_4_;
  param_3[3] = local_58._12_4_;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e51a40 FUN_147e51a40 body=330 status=ok
// SIG undefined FUN_147e51a40(void)

undefined4 * FUN_147e51a40(longlong *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined1 local_130 [232];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = param_1[1];
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  lVar3 = *param_1;
  lVar5 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                    (&PTR_vftable_14c6e47c0,(longlong)(int)param_3 * 0xf0);
  if (lVar5 == 0) {
    uVar6 = 0x80040200;
  }
  else {
    *param_1 = lVar5;
    if (0 < (int)param_3) {
      lVar5 = 0;
      do {
        *(undefined4 *)(*param_1 + lVar5) = 0xffffffff;
        lVar5 = lVar5 + 0xf0;
      } while ((ulonglong)param_3 * 0xf0 - lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((longlong)param_1 + 0xc) = param_3 - 1;
    local_138 = param_2;
    if (-1 < (int)uVar1) {
      lVar5 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar5);
        if (iVar2 != -1) {
          memcpy(local_130,(void *)(lVar5 + lVar3 + 8),0xe8);
          FUN_147e51584(param_1,iVar2,local_130);
        }
        lVar5 = lVar5 + 0xf0;
      } while ((ulonglong)uVar1 * 0xf0 + 0xf0 != lVar5);
    }
    if (-1 < (int)lVar4) {
      (*DAT_14c787678)(DAT_14c6e47c8,lVar3,0);
    }
    uVar6 = 0;
    param_2 = local_138;
  }
  *param_2 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e51b8c FUN_147e51b8c body=222 status=ok
// SIG undefined FUN_147e51b8c(void)

undefined8 * FUN_147e51b8c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147e51c6b(&local_40,param_3,param_2 + 0x18);
  FUN_147e51c6b(&local_50,param_3,param_2 + 0xc);
  *param_1 = local_50;
  param_1[1] = uStack_48;
  *(undefined4 *)(param_1 + 2) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3c;
  *(undefined4 *)(param_1 + 3) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_34;
  FUN_147e4f4e2(&local_40,param_3,param_2);
  lVar8 = 0;
  bVar9 = false;
  puVar6 = (ulonglong *)&local_40;
  plVar7 = &local_58;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    uVar1 = *(ulonglong *)(param_3 + 0x18 + lVar8 * 8);
    uVar2 = (ulonglong)bVar9;
    uVar3 = uVar1 + *puVar6;
    bVar9 = CARRY8(uVar1,*puVar6) || CARRY8(uVar3,uVar2);
    *plVar7 = uVar3 + uVar2;
    lVar8 = 1;
    puVar6 = (ulonglong *)&uStack_38;
    plVar7 = &local_60;
    bVar4 = false;
  } while (bVar5);
  param_1[4] = local_58;
  param_1[5] = local_60;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e51c6b FUN_147e51c6b body=166 status=ok
// SIG undefined FUN_147e51c6b(void)

longlong FUN_147e51c6b(longlong param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uStack_38;
  ulonglong local_30;
  
  iVar1 = param_3[2];
  lVar4 = param_2[2];
  bVar13 = false;
  iVar2 = param_3[1];
  lVar9 = param_2[1];
  iVar3 = *param_3;
  lVar5 = *param_2;
  uVar8 = (longlong)iVar3 * *param_2;
  uVar12 = (longlong)iVar2 * param_2[1];
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar6 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,uVar12) || CARRY8(uVar8 + uVar12,uVar6);
    *puVar11 = uVar8 + uVar12 + uVar6;
    uVar8 = SUB168(SEXT816((longlong)iVar3) * SEXT816(lVar5),8);
    uVar12 = SUB168(SEXT816((longlong)iVar2) * SEXT816(lVar9),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  lVar9 = 0;
  bVar13 = false;
  uVar8 = lVar4 * iVar1;
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar12 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,*puVar11) || CARRY8(uVar8 + *puVar11,uVar12);
    *(ulonglong *)(param_1 + lVar9 * 8) = uVar8 + *puVar11 + uVar12;
    lVar9 = 1;
    uVar8 = SUB168(SEXT816(lVar4) * SEXT816((longlong)iVar1),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  return param_1;
}



// FUNCTION 147e51d12 FUN_147e51d12 body=774 status=ok
// SIG undefined FUN_147e51d12(void)

void FUN_147e51d12(int *param_1,undefined8 param_2,int *param_3,int *param_4,longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  int *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = (longlong)param_3[2] - (longlong)param_1[2];
  local_110 = (longlong)param_3[1] - (longlong)param_1[1];
  lVar10 = (longlong)*param_3 - (longlong)*param_1;
  local_94 = (undefined4)lVar10;
  local_90 = (undefined4)local_110;
  local_8c = (undefined4)local_108;
  lVar9 = (longlong)param_4[2] - (longlong)param_1[2];
  lVar11 = (longlong)param_4[1] - (longlong)param_1[1];
  lVar8 = (longlong)*param_4 - (longlong)*param_1;
  local_a0 = (undefined4)lVar8;
  local_9c = (undefined4)lVar11;
  local_98 = (undefined4)lVar9;
  local_100 = param_1;
  FUN_147e52019(&local_58,&local_a0,param_2);
  FUN_147e52019(&local_68,&local_94,param_2);
  piVar3 = local_100;
  bVar13 = false;
  puVar7 = &local_58;
  plVar6 = &local_c0;
  puVar12 = &local_68;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    uVar1 = (ulonglong)bVar13;
    uVar2 = *puVar7 - *puVar12;
    bVar13 = *puVar7 < *puVar12 || uVar2 < uVar1;
    *plVar6 = uVar2 - uVar1;
    puVar7 = &local_50;
    plVar6 = &local_c8;
    puVar12 = &local_60;
    bVar4 = false;
  } while (bVar5);
  if (local_c8 != 0 || local_c0 != 0) {
    local_a8 = lVar11 * lVar10 - lVar8 * local_110;
    local_b0 = lVar8 * local_108 - lVar10 * lVar9;
    local_b8 = lVar9 * local_110 - lVar11 * local_108;
    FUN_147e52019(&local_78,local_100 + 3,&local_b8);
    FUN_147e52019(&local_88,piVar3 + 6,&local_b8);
    if (local_c8 < 0) {
      *param_5 = local_88;
      param_5[1] = local_80;
      param_5[2] = local_80 >> 0x3f;
      bVar13 = false;
      plVar6 = &local_d0;
      bVar4 = true;
      do {
        bVar5 = bVar4;
        uVar1 = (ulonglong)bVar13;
        bVar13 = local_78 != 0 || (ulonglong)-local_78 < uVar1;
        *plVar6 = -local_78 - uVar1;
        local_78 = local_70;
        plVar6 = &local_d8;
        bVar4 = false;
      } while (bVar5);
      param_5[3] = local_d0;
      param_5[4] = local_d8;
      param_5[5] = local_d8 >> 0x3f;
      bVar13 = false;
      plVar6 = &local_e0;
      bVar4 = true;
      do {
        bVar5 = bVar4;
        uVar1 = (ulonglong)bVar13;
        bVar13 = local_c0 != 0 || (ulonglong)-local_c0 < uVar1;
        *plVar6 = -local_c0 - uVar1;
        plVar6 = &local_e8;
        local_c0 = local_c8;
        bVar4 = false;
      } while (bVar5);
      param_5[6] = local_e0;
      param_5[7] = local_e8;
    }
    else {
      bVar13 = false;
      plVar6 = &local_f0;
      bVar4 = true;
      do {
        bVar5 = bVar4;
        uVar1 = (ulonglong)bVar13;
        bVar13 = local_88 != 0 || (ulonglong)-local_88 < uVar1;
        *plVar6 = -local_88 - uVar1;
        local_88 = local_80;
        plVar6 = &local_f8;
        bVar4 = false;
      } while (bVar5);
      *param_5 = local_f0;
      param_5[1] = local_f8;
      param_5[2] = local_f8 >> 0x3f;
      param_5[3] = local_78;
      param_5[4] = local_70;
      param_5[5] = local_70 >> 0x3f;
      param_5[6] = local_c0;
      param_5[7] = local_c8;
    }
    param_5[8] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e52019 FUN_147e52019 body=166 status=ok
// SIG undefined FUN_147e52019(void)

longlong FUN_147e52019(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uStack_38;
  ulonglong local_30;
  
  lVar4 = param_3[2];
  iVar1 = param_2[2];
  bVar13 = false;
  iVar2 = param_2[1];
  lVar9 = param_3[1];
  iVar3 = *param_2;
  lVar5 = *param_3;
  uVar8 = (longlong)iVar3 * *param_3;
  uVar12 = (longlong)iVar2 * param_3[1];
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar6 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,uVar12) || CARRY8(uVar8 + uVar12,uVar6);
    *puVar11 = uVar8 + uVar12 + uVar6;
    uVar8 = SUB168(SEXT816((longlong)iVar3) * SEXT816(lVar5),8);
    uVar12 = SUB168(SEXT816((longlong)iVar2) * SEXT816(lVar9),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  lVar9 = 0;
  bVar13 = false;
  uVar8 = lVar4 * iVar1;
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar12 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,*puVar11) || CARRY8(uVar8 + *puVar11,uVar12);
    *(ulonglong *)(param_1 + lVar9 * 8) = uVar8 + *puVar11 + uVar12;
    lVar9 = 1;
    uVar8 = SUB168(SEXT816((longlong)iVar1) * SEXT816(lVar4),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  return param_1;
}



// FUNCTION 147e520c0 FUN_147e520c0 body=302 status=ok
// SIG undefined FUN_147e520c0(void)

void FUN_147e520c0(float *param_1,float *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined8 in_RAX;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar2 = param_2[0x18];
  fVar3 = param_2[0x19];
  fVar4 = param_2[0x1a];
  fVar5 = param_2[0x1b];
  auVar10._4_4_ =
       -(uint)((param_2[0x11] <= param_1[0x15] && param_1[0x11] <= param_2[0x15]) &&
              ((param_2[1] <= param_1[5] && param_1[1] <= param_2[5]) &&
              (param_2[9] <= param_1[0xd] && param_1[9] <= param_2[0xd])));
  auVar10._0_4_ =
       -(uint)((param_2[0x10] <= param_1[0x14] && param_1[0x10] <= param_2[0x14]) &&
              ((*param_2 <= param_1[4] && *param_1 <= param_2[4]) &&
              (param_2[8] <= param_1[0xc] && param_1[8] <= param_2[0xc])));
  auVar10._8_4_ =
       -(uint)((param_2[0x12] <= param_1[0x16] && param_1[0x12] <= param_2[0x16]) &&
              ((param_2[2] <= param_1[6] && param_1[2] <= param_2[6]) &&
              (param_2[10] <= param_1[0xe] && param_1[10] <= param_2[0xe])));
  auVar10._12_4_ =
       -(uint)((param_2[0x13] <= param_1[0x17] && param_1[0x13] <= param_2[0x17]) &&
              ((param_2[3] <= param_1[7] && param_1[3] <= param_2[7]) &&
              (param_2[0xb] <= param_1[0xf] && param_1[0xb] <= param_2[0xf])));
  iVar6 = movmskps((int)in_RAX,auVar10);
  auVar12._4_4_ = fVar2;
  auVar12._0_4_ = fVar2;
  auVar12._8_4_ = fVar2;
  auVar12._12_4_ = fVar2;
  auVar11._4_4_ = fVar3;
  auVar11._0_4_ = fVar3;
  auVar11._8_4_ = fVar3;
  auVar11._12_4_ = fVar3;
  auVar13._4_4_ = fVar4;
  auVar13._0_4_ = fVar4;
  auVar13._8_4_ = fVar4;
  auVar13._12_4_ = fVar4;
  iVar1 = *(int *)(&DAT_149990100 + CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar6) * 4);
  uVar7 = iVar6 << 6;
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar5;
  auVar9._12_4_ = fVar5;
  auVar10 = auVar9 & *(undefined1 (*) [16])(&DAT_14998fd30 + uVar7) |
            auVar13 & *(undefined1 (*) [16])(&DAT_14998fd20 + uVar7) |
            auVar11 & *(undefined1 (*) [16])(&DAT_14998fd10 + uVar7) |
            auVar12 & *(undefined1 (*) [16])(&DAT_14998fd00 + uVar7);
  if (((uint)param_2[0x1d] & 1) == 0) {
    **(undefined1 (**) [16])(param_4 + 0x400) = auVar10;
    *(longlong *)(param_4 + 0x400) = *(longlong *)(param_4 + 0x400) + (longlong)iVar1 * 4;
  }
  else if (0 < iVar1) {
    iVar6 = 0;
    do {
      uVar8 = auVar10._4_4_;
      if (((iVar6 != 1) && (uVar8 = auVar10._12_4_, iVar6 != 3)) &&
         (uVar8 = auVar10._0_4_, iVar6 == 2)) {
        uVar8 = auVar10._8_4_;
      }
      FUN_147e4f9e8(*param_3,uVar8);
      iVar6 = iVar6 + 1;
    } while (iVar1 != iVar6);
  }
  return;
}



// FUNCTION 147e521ee FUN_147e521ee body=146 status=ok
// SIG undefined FUN_147e521ee(void)

void FUN_147e521ee(longlong param_1,uint param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x19c) + -1;
  if (param_3 < iVar1) {
    FUN_144cafad0(param_1,param_2,param_3 + 2);
    iVar1 = *(int *)(param_1 + 0x19c) + -1;
  }
  if (param_4 < iVar1) {
    FUN_144cafad0(param_1,param_2,param_4 + 2);
  }
  uVar2 = 0;
  if (param_5 != '\0') {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
  }
  *(uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)((int)param_2 >> 5) * 4) =
       uVar2 | *(uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)((int)param_2 >> 5) * 4) &
               ~(1 << (param_2 & 0x1f));
  return;
}



// FUNCTION 147e52280 FUN_147e52280 body=625 status=ok
// SIG undefined FUN_147e52280(void)

void FUN_147e52280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  uint local_1f4;
  undefined8 local_1f0;
  uint *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  uint *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [10];
  undefined2 local_148;
  undefined8 *local_140;
  undefined8 local_138 [10];
  undefined8 local_e8 [10];
  undefined8 local_98 [3];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1f0 = param_2;
  local_1e0 = param_4;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    puVar12 = *(uint **)(param_1 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x38);
    local_1e8 = puVar12 + (longlong)*(int *)(param_1 + 0x20) * 0xc;
    do {
      local_1b8 = local_1f0;
      local_1a0 = local_1e0;
      local_148 = 0;
      local_140 = &local_1b8;
      uVar5 = *puVar12;
      uVar10 = (ulonglong)(int)uVar5;
      lVar6 = (longlong)*(int *)(lVar2 + 4 + uVar10 * 0x14);
      local_1c0 = *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc);
      local_1c8 = *(undefined8 *)(lVar3 + lVar6 * 0xc);
      local_1b0 = puVar12;
      local_1a8 = param_3;
      uVar4 = FUN_147e511b8(param_3,&local_1c8);
      local_1f4 = 0;
      uVar8 = (ulonglong)uVar5;
      do {
        iVar1 = *(int *)(lVar2 + 0xc + (longlong)(int)uVar8 * 0x14);
        uVar8 = (ulonglong)iVar1;
        lVar6 = (longlong)*(int *)(lVar2 + 4 + uVar8 * 0x14);
        local_1d0 = *(undefined4 *)(lVar3 + 8 + lVar6 * 0xc);
        local_1d8 = *(undefined8 *)(lVar3 + lVar6 * 0xc);
        uVar5 = FUN_147e511b8(param_3,&local_1d8);
        if ((int)(uVar4 ^ uVar5) < 0) {
          local_208 = local_98;
          FUN_147e51d12(local_1f0,param_3,&local_1c8,&local_1d8);
          uVar7 = FUN_147e50f05(local_98,local_80,local_68,local_50);
          puVar9 = local_98;
          puVar11 = local_198;
          for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          if ((int)uVar5 < 0) {
            puVar9 = local_198;
            puVar11 = local_138;
            for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            local_148 = CONCAT11(local_148._1_1_,1);
            local_1f4 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          else if ((local_1f4 & 1) == 0) {
            puVar9 = local_198;
            puVar11 = local_e8;
            for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            local_148 = CONCAT11(1,(undefined1)local_148);
          }
          else {
            FUN_147e52632(&local_1b8,local_138);
            local_148 = local_148 & 0xff00;
            local_1f4 = 0;
          }
          uVar10 = (ulonglong)*puVar12;
        }
        local_1c0 = local_1d0;
        local_1c8 = local_1d8;
        uVar4 = uVar5;
      } while (iVar1 != (int)uVar10);
      if ((local_1f4 & 1) != 0) {
        FUN_147e52632(&local_1b8,local_138,local_e8);
      }
      puVar12 = puVar12 + 0xc;
    } while (puVar12 != local_1e8);
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e524f2 FUN_147e524f2 body=319 status=ok
// SIG undefined FUN_147e524f2(void)

void FUN_147e524f2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8 [10];
  undefined8 local_178 [10];
  undefined1 local_128 [64];
  undefined8 local_e8 [10];
  undefined8 local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar5 = (longlong)*(int *)(param_1 + 0x20);
  local_1d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + -8 + lVar5 * 8);
  local_1e0 = param_3;
  FUN_147e50dda(param_2,&local_1d0,local_98);
  if (0 < lVar5) {
    lVar3 = 0;
    local_1e8 = param_1;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(local_1e8 + 0x18) + lVar3 * 8);
      local_1d8 = uVar1;
      FUN_147e50dda(param_2,&local_1d8,local_e8);
      FUN_147e5125a(param_2,&local_1d0,&local_1d8,local_128);
      puVar4 = local_e8;
      puVar6 = local_178;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = local_98;
      puVar6 = local_1c8;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_147e5271c(local_1e0,local_1c8,local_178,local_128);
      puVar4 = local_e8;
      puVar6 = local_98;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar3 = lVar3 + 1;
      local_1d0 = uVar1;
    } while (lVar5 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e52632 FUN_147e52632 body=233 status=ok
// SIG undefined FUN_147e52632(void)

void FUN_147e52632(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_148 [10];
  undefined8 local_f8 [10];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar1 = (undefined4 *)*param_1;
  local_158 = puVar1[8];
  local_178 = *puVar1;
  uStack_174 = puVar1[1];
  uStack_170 = puVar1[2];
  uStack_16c = puVar1[3];
  local_168 = puVar1[4];
  uStack_164 = puVar1[5];
  uStack_160 = puVar1[6];
  uStack_15c = puVar1[7];
  FUN_147e52834(&local_68,&local_178,param_1[1] + 8);
  FUN_147e5133a(&local_68);
  lVar2 = param_1[3];
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = uStack_50;
  uStack_8c = uStack_4c;
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  puVar4 = local_f8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_148;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_147e5271c(lVar2);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5271c FUN_147e5271c body=280 status=ok
// SIG undefined FUN_147e5271c(void)

void FUN_147e5271c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  
  lVar2 = param_1[1];
  lVar28 = *(longlong *)*param_1;
  iVar27 = *(int *)(lVar28 + 0x30);
  iVar1 = iVar27 + 1;
  if ((int)(*(uint *)(lVar28 + 0x34) & 0x7fffffff) <= iVar27) {
    FUN_147e4ee9e(lVar28 + 0x28,iVar1);
    iVar27 = *(int *)(lVar28 + 0x30);
  }
  lVar3 = *(longlong *)(lVar28 + 0x28);
  *(int *)(lVar28 + 0x30) = iVar1;
  puVar29 = (undefined8 *)(lVar3 + (longlong)iVar27 * 0xe0);
  for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
    *puVar29 = *param_2;
    param_2 = param_2 + 1;
    puVar29 = puVar29 + 1;
  }
  puVar29 = (undefined8 *)(lVar3 + 0x50 + (longlong)iVar27 * 0xe0);
  puVar30 = puVar29;
  for (lVar28 = 10; lVar28 != 0; lVar28 = lVar28 + -1) {
    *puVar30 = *param_3;
    param_3 = param_3 + 1;
    puVar30 = puVar30 + 1;
  }
  uVar5 = *(undefined4 *)param_4;
  uVar6 = *(undefined4 *)((longlong)param_4 + 4);
  uVar7 = *(undefined4 *)(param_4 + 1);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar9 = *(undefined4 *)(param_4 + 2);
  uVar10 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar11 = *(undefined4 *)(param_4 + 3);
  uVar12 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar13 = *(undefined4 *)(param_4 + 4);
  uVar14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar15 = *(undefined4 *)(param_4 + 5);
  uVar16 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar17 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar18 = *(undefined4 *)(param_4 + 7);
  uVar19 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)((longlong)puVar29 + 0x84) = uVar17;
  *(undefined4 *)(puVar29 + 0x11) = uVar18;
  *(undefined4 *)((longlong)puVar29 + 0x8c) = uVar19;
  *(undefined4 *)(puVar29 + 0xe) = uVar13;
  *(undefined4 *)((longlong)puVar29 + 0x74) = uVar14;
  *(undefined4 *)(puVar29 + 0xf) = uVar15;
  *(undefined4 *)((longlong)puVar29 + 0x7c) = uVar16;
  *(undefined4 *)(puVar29 + 0xc) = uVar9;
  *(undefined4 *)((longlong)puVar29 + 100) = uVar10;
  *(undefined4 *)(puVar29 + 0xd) = uVar11;
  *(undefined4 *)((longlong)puVar29 + 0x6c) = uVar12;
  *(undefined4 *)(puVar29 + 10) = uVar5;
  *(undefined4 *)((longlong)puVar29 + 0x54) = uVar6;
  *(undefined4 *)(puVar29 + 0xb) = uVar7;
  *(undefined4 *)((longlong)puVar29 + 0x5c) = uVar8;
  FUN_147e52914(lVar2 + 0x80,*(undefined4 *)param_1[2]);
  plVar4 = *(longlong **)(lVar2 + 0x260);
  iVar27 = (int)plVar4[1];
  iVar1 = iVar27 + 1;
  if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) <= iVar27) {
    FUN_147e4ed86(plVar4,iVar1);
    iVar27 = (int)plVar4[1];
  }
  lVar2 = *plVar4;
  lVar28 = (longlong)iVar27 * 0x40;
  uVar20 = *param_4;
  uVar21 = param_4[1];
  uVar22 = param_4[2];
  uVar23 = param_4[3];
  uVar24 = param_4[4];
  uVar25 = param_4[5];
  uVar26 = param_4[7];
  puVar29 = (undefined8 *)(lVar2 + 0x30 + lVar28);
  *puVar29 = param_4[6];
  puVar29[1] = uVar26;
  puVar29 = (undefined8 *)(lVar2 + 0x20 + lVar28);
  *puVar29 = uVar24;
  puVar29[1] = uVar25;
  puVar29 = (undefined8 *)(lVar2 + 0x10 + lVar28);
  *puVar29 = uVar22;
  puVar29[1] = uVar23;
  *(undefined8 *)(lVar2 + lVar28) = uVar20;
  ((undefined8 *)(lVar2 + lVar28))[1] = uVar21;
  *(int *)(plVar4 + 1) = iVar1;
  return;
}



// FUNCTION 147e52834 FUN_147e52834 body=222 status=ok
// SIG undefined FUN_147e52834(void)

undefined8 * FUN_147e52834(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147e51c6b(&local_40,param_3,param_2 + 0x18);
  FUN_147e51c6b(&local_50,param_3,param_2 + 0xc);
  *param_1 = local_50;
  param_1[1] = uStack_48;
  *(undefined4 *)(param_1 + 2) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3c;
  *(undefined4 *)(param_1 + 3) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_34;
  FUN_147e4f4e2(&local_40,param_3,param_2);
  lVar8 = 0;
  bVar9 = false;
  puVar6 = (ulonglong *)&local_40;
  plVar7 = &local_58;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    uVar1 = *(ulonglong *)(param_3 + 0x18 + lVar8 * 8);
    uVar2 = (ulonglong)bVar9;
    uVar3 = uVar1 + *puVar6;
    bVar9 = CARRY8(uVar1,*puVar6) || CARRY8(uVar3,uVar2);
    *plVar7 = uVar3 + uVar2;
    lVar8 = 1;
    puVar6 = (ulonglong *)&uStack_38;
    plVar7 = &local_60;
    bVar4 = false;
  } while (bVar5);
  param_1[4] = local_58;
  param_1[5] = local_60;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e52914 FUN_147e52914 body=62 status=ok
// SIG undefined FUN_147e52914(void)

void FUN_147e52914(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x198);
  FUN_147e4effe(param_1,iVar1 + 1);
  FUN_144cafad0(param_1,iVar1,param_2 + *(int *)(param_1 + 0x19c) + 1,1);
  return;
}



// FUNCTION 147e52952 FUN_147e52952 body=119 status=ok
// SIG undefined FUN_147e52952(void)

longlong FUN_147e52952(longlong param_1,longlong param_2)

{
  FUN_144caf5b0();
  FUN_147e529ca(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_2 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  FUN_147e52a68(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 147e529ca FUN_147e529ca body=158 status=ok
// SIG undefined FUN_147e529ca(void)

longlong * FUN_147e529ca(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar1 = param_2 + 2;
    if ((longlong *)*param_2 == plVar1) {
      *param_1 = (longlong)(param_1 + 2);
      lVar2 = 0;
      do {
        *(undefined4 *)((longlong)(param_1 + 2) + lVar2 * 4) =
             *(undefined4 *)((longlong)plVar1 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x40);
    }
    else {
      *param_1 = *param_2;
      *param_2 = (longlong)plVar1;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000040;
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 147e52a68 FUN_147e52a68 body=158 status=ok
// SIG undefined FUN_147e52a68(void)

longlong * FUN_147e52a68(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar1 = param_2 + 2;
    if ((longlong *)*param_2 == plVar1) {
      *param_1 = (longlong)(param_1 + 2);
      lVar2 = 0;
      do {
        *(undefined4 *)((longlong)(param_1 + 2) + lVar2 * 4) =
             *(undefined4 *)((longlong)plVar1 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 8);
    }
    else {
      *param_1 = *param_2;
      *param_2 = (longlong)plVar1;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000008;
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 147e52b06 FUN_147e52b06 body=97 status=ok
// SIG undefined FUN_147e52b06(void)

void FUN_147e52b06(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x1b4)) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1a8),
               (longlong)*(int *)(param_1 + 0x1b4) << 2);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0x80000000;
  FUN_147e52b68(param_1);
  return;
}



// FUNCTION 147e52b68 FUN_147e52b68 body=97 status=ok
// SIG undefined FUN_147e52b68(void)

void FUN_147e52b68(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x94)) && (*(longlong *)(param_1 + 0x88) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x88),
               (longlong)*(int *)(param_1 + 0x94) << 2);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  FUN_147e52bca(param_1);
  return;
}



// FUNCTION 147e52bca FUN_147e52bca body=135 status=ok
// SIG undefined FUN_147e52bca(void)

void FUN_147e52bca(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x44)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x38),
               (longlong)*(int *)(param_1 + 0x44) << 2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 8),
               (ulonglong)*(uint *)(param_1 + 0x14) * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 147e52c51 FUN_147e52c51 body=243 status=ok
// SIG undefined FUN_147e52c51(void)

void FUN_147e52c51(undefined8 *param_1,ulonglong param_2,int param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined8 local_70 [10];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = -1;
  if ((int)param_2 == -1) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar2 = *param_5;
    iVar1 = *(int *)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
    uVar5 = 0xffffffff;
    if (iVar1 != -1) {
      do {
        uVar5 = param_2 & 0xffffffff;
        lVar3 = (longlong)(int)param_2 * 0x10;
        local_88 = iVar1;
        if ((*(int *)(lVar2 + 0xc + lVar3) != -1) ||
           (param_2 = (ulonglong)*(int *)(lVar3 + lVar2), param_2 == 0xffffffffffffffff)) break;
      } while (*(int *)(lVar2 + 8 + param_2 * 0x10) == iVar1);
    }
  }
  if (param_3 == -1) {
    param_4 = 0xffffffff;
  }
  local_98 = (undefined4)*param_5;
  uStack_94 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_90 = (undefined4)param_5[1];
  uStack_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_a8 = &local_98;
  puVar4 = local_70;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  local_84 = param_3;
  local_80 = param_4;
  FUN_147e52d46(param_6,local_70,uVar5,local_88);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e52d46 FUN_147e52d46 body=413 status=ok
// SIG undefined FUN_147e52d46(void)

void FUN_147e52d46(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  iVar1 = (int)param_5[3];
  iVar8 = *(int *)((longlong)param_5 + 0x14);
  iVar10 = 0;
  if (iVar8 != iVar1) {
    lVar3 = *param_5;
    do {
      lVar6 = (longlong)iVar8 * 0x10;
      if (((int)param_5[2] != *(int *)(lVar3 + 8 + lVar6)) ||
         (((int)param_5[2] != -1 && (*(int *)(lVar3 + lVar6 + 0xc) != -1)))) {
        iVar10 = 0;
        if (iVar8 != iVar1) {
          iVar10 = 0;
          goto LAB_147e52e19;
        }
        break;
      }
      iVar8 = *(int *)(lVar3 + 4 + lVar6);
      iVar10 = 0;
    } while (iVar8 != iVar1);
  }
LAB_147e52d73:
  param_1 = (longlong *)*param_1;
  iVar8 = (int)param_1[1];
  iVar1 = iVar8 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= iVar8) {
    FUN_147e52ee4(param_1,iVar1);
    iVar8 = (int)param_1[1];
  }
  lVar3 = *param_1;
  lVar6 = (longlong)iVar8 * 0x60;
  *(int *)(param_1 + 1) = iVar1;
  puVar9 = (undefined8 *)(lVar3 + lVar6);
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(lVar3 + 0x50 + lVar6) = param_3;
  *(undefined4 *)(lVar3 + 0x54 + lVar6) = param_4;
  *(int *)(lVar3 + 0x58 + lVar6) = iVar10;
  return;
LAB_147e52e19:
  plVar4 = (longlong *)param_1[1];
  iVar5 = (int)plVar4[1];
  iVar2 = iVar5 + 1;
  if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) <= iVar5) {
    FUN_141807990(plVar4,&PTR_vftable_14c6e47a0,iVar2);
    iVar5 = (int)plVar4[1];
  }
  lVar6 = (longlong)iVar8;
  *(int *)(*plVar4 + (longlong)iVar5 * 4) = iVar8;
  *(int *)(plVar4 + 1) = iVar2;
  iVar10 = iVar10 + 1;
  iVar8 = *(int *)(lVar3 + 4 + lVar6 * 0x10);
  if (iVar8 == iVar1) goto LAB_147e52d73;
  iVar2 = *(int *)(lVar3 + 8 + lVar6 * 0x10);
  while ((lVar6 = (longlong)iVar8 * 0x10, iVar2 == *(int *)(lVar3 + 8 + lVar6) &&
         ((iVar2 == -1 || (*(int *)(lVar3 + lVar6 + 0xc) == -1))))) {
    iVar8 = *(int *)(lVar3 + 4 + lVar6);
    if (iVar8 == iVar1) goto LAB_147e52d73;
  }
  if (iVar8 == iVar1) goto LAB_147e52d73;
  goto LAB_147e52e19;
}



// FUNCTION 147e52ee4 FUN_147e52ee4 body=350 status=ok
// SIG undefined FUN_147e52ee4(void)

ulonglong FUN_147e52ee4(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar8 * 0x60);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    lVar3 = *param_1;
    lVar12 = 0;
    do {
      puVar10 = (undefined8 *)(lVar3 + lVar12);
      puVar11 = (undefined8 *)(lVar6 + lVar12);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar12 = lVar12 + 0x60;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = uVar8 * 0x60 + 0x60;
  uVar7 = local_50;
  uVar13 = uVar8;
  if (uVar1 <= local_50) {
    uVar13 = uVar8 + 1;
    local_50 = local_50 - 0x60;
    uVar7 = local_50;
    if (uVar1 <= local_50) {
      uVar8 = local_50 + uVar8 * -0x60;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar7 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar13 = uVar13 + uVar8 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0x60);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar13;
  *param_1 = lVar6;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e53044 FUN_147e53044 body=121 status=ok
// SIG undefined FUN_147e53044(void)

void FUN_147e53044(longlong param_1,int param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_144cafe40();
  uVar3 = *(uint *)(*(longlong *)(param_3 + 0x88) + (longlong)(int)param_4 * 4);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)param_2 * 4);
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  *(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)param_2 * 4) = uVar3;
  if ((*(uint *)(*(longlong *)(param_3 + 0x1a8) + (longlong)((int)param_4 >> 5) * 4) >>
       (param_4 & 0x1f) & 1) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a8) + (longlong)(param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}



// FUNCTION 147e530bd FUN_147e530bd body=205 status=ok
// SIG undefined FUN_147e530bd(void)

void FUN_147e530bd(ulonglong param_1,int param_2,int param_3,longlong *param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  ulonglong local_10;
  
  uVar3 = param_1 & 0xffffffff;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_3;
  if ((int)param_1 == -1) {
    if (param_2 == -1) {
      local_20 = param_2;
    }
    local_38 = (undefined4)*param_4;
    uStack_34 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_30 = (undefined4)param_4[1];
    uStack_2c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_28 = 0xffffffff;
  }
  else {
    lVar2 = *param_4;
    lVar4 = (longlong)(int)param_1 * 0x10;
    if (param_2 == -1) {
      local_20 = param_2;
    }
    local_28 = *(undefined4 *)(lVar2 + 8 + lVar4);
    local_38 = (undefined4)*param_4;
    uStack_34 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_30 = (undefined4)param_4[1];
    uStack_2c = *(undefined4 *)((longlong)param_4 + 0xc);
    iVar1 = *(int *)(lVar2 + 8 + lVar4);
    if (iVar1 != -1) {
      do {
        lVar4 = (longlong)(int)uVar3 * 0x10;
        if ((*(int *)(lVar2 + 0xc + lVar4) != -1) ||
           (uVar3 = (ulonglong)*(int *)(lVar4 + lVar2), uVar3 == 0xffffffffffffffff)) break;
      } while (*(int *)(lVar2 + 8 + uVar3 * 0x10) == iVar1);
    }
  }
  local_24 = param_2;
  FUN_147e5398e(param_5,&local_38);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5318c FUN_147e5318c body=248 status=ok
// SIG undefined FUN_147e5318c(void)

undefined4 FUN_147e5318c(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  longlong **local_40;
  int *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  iVar3 = FUN_144caf540(param_2,param_3,1,*(int *)(param_2 + 0x38) + 1);
  local_44 = 0;
  if (iVar3 != -1) {
    local_44 = iVar3 + -1;
  }
  local_58 = &local_4c;
  local_4c = (undefined4)param_1[3];
  uStack_48 = 0;
  local_40 = &local_60;
  local_2c = *(int *)(param_2 + 0x38) + 1;
  local_38 = &local_2c;
  local_68 = &local_40;
  local_60 = param_1;
  FUN_147e53650(param_2,param_3,local_2c,*(int *)(param_2 + 0x3c) + local_2c);
  iVar4 = (int)param_1[1];
  iVar3 = iVar4 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
    FUN_147e53724(param_1,iVar3);
    iVar4 = (int)param_1[1];
  }
  lVar1 = *param_1;
  *(int *)(lVar1 + 8 + (longlong)iVar4 * 0xc) = local_44;
  *(ulonglong *)(lVar1 + (longlong)iVar4 * 0xc) = CONCAT44(uStack_48,local_4c);
  *(int *)(param_1 + 1) = iVar3;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (int)lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e53286 FUN_147e53286 body=239 status=ok
// SIG undefined FUN_147e53286(void)

byte FUN_147e53286(undefined8 param_1,longlong param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined4 ***local_88;
  int *local_80;
  int *local_78;
  byte *local_70;
  undefined8 local_68;
  byte local_59;
  int local_58;
  int local_54;
  int **local_50;
  int *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = FUN_144caf540(param_2,param_3,1,*(int *)(param_2 + 0x38) + 1);
  iVar3 = iVar2 + -1;
  bVar1 = 0;
  if (iVar2 == -1) {
    iVar3 = 0;
  }
  if (iVar3 == param_4[2]) {
    local_54 = *param_4;
    local_80 = &local_54;
    local_58 = local_54 + param_4[1];
    local_78 = &local_58;
    local_70 = &local_59;
    local_59 = 1;
    local_50 = &local_80;
    local_3c = *(int *)(param_2 + 0x38) + 1;
    local_48 = &local_3c;
    local_88 = &local_50;
    local_68 = param_1;
    FUN_147e53376(param_2,param_3,local_3c,*(int *)(param_2 + 0x3c) + local_3c);
    bVar1 = local_54 == local_58 & local_59;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e53376 FUN_147e53376 body=160 status=ok
// SIG undefined FUN_147e53376(void)

void FUN_147e53376(undefined8 param_1,undefined4 param_2,int param_3,int param_4,undefined8 *param_5
                  )

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144caf580(param_1,local_28,param_2);
  if (param_3 < param_4) {
    lVar3 = (longlong)param_3;
    do {
      if (*(short *)(local_28[0] + lVar3 * 2) != 0) {
        puVar2 = (undefined8 *)*param_5;
        iVar1 = *(int *)*puVar2;
        if ((iVar1 == *(int *)puVar2[1]) ||
           ((int)lVar3 - *(int *)param_5[1] !=
            *(int *)(*(longlong *)(puVar2[3] + 0x10) + (longlong)iVar1 * 4))) {
          *(undefined1 *)puVar2[2] = 0;
          break;
        }
        *(int *)*puVar2 = iVar1 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e53418 FUN_147e53418 body=341 status=ok
// SIG undefined FUN_147e53418(void)

void FUN_147e53418(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x50);
  piVar2 = (int *)(param_2 + 0x50);
  uVar4 = *(uint *)(param_2 + 0x50);
  if (*(byte *)(param_1 + 0x54) < *(byte *)(param_2 + 0x54)) {
    if (param_1 != param_2) {
      lVar7 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar7 = param_2;
      }
      FUN_147e4c7de(param_1,lVar7,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    }
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    *piVar1 = *piVar2;
  }
  if (uVar3 == 0xffffffff || uVar4 == 0xffffffff) {
    if (uVar3 == 0xffffffff && uVar4 != 0xffffffff) {
LAB_147e534ee:
      if (param_1 != param_2) {
        lVar7 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar7 = param_2;
        }
        FUN_147e4c7de(param_1,lVar7,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_1 + 0x4c))
        ;
      }
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
      *piVar1 = *piVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    if ((uVar3 & uVar4) == 0xffffffff) {
      lVar7 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar7 = param_2;
      }
      iVar5 = *(int *)(param_2 + 0x48);
      if ((longlong)iVar5 != 0) {
        lVar8 = 0;
        do {
          lVar6 = *(longlong *)(lVar7 + lVar8);
          if (lVar6 != 0) {
            local_40 = lVar6;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c();
            }
            FUN_147e5356e(param_1,&local_40);
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar5 * 8 != lVar8);
      }
    }
  }
  else if (*piVar1 < *piVar2) goto LAB_147e534ee;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5356e FUN_147e5356e body=104 status=ok
// SIG undefined FUN_147e5356e(void)

void FUN_147e5356e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_147e535d6();
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
      FUN_147e43b9c(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    lVar1 = *param_2;
    *(longlong *)(lVar3 + (longlong)iVar2 * 8) = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      return;
    }
  }
  return;
}



// FUNCTION 147e535d6 FUN_147e535d6 body=122 status=ok
// SIG undefined FUN_147e535d6(void)

ulonglong FUN_147e535d6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar4 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x48) << 3;
    uVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *param_2;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar4 + uVar3 * 8) == lVar1) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 147e53650 FUN_147e53650 body=127 status=ok
// SIG undefined FUN_147e53650(void)

void FUN_147e53650(undefined8 param_1,undefined4 param_2,int param_3,int param_4,undefined8 *param_5
                  )

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144caf580(param_1,local_30,param_2);
  if (param_3 < param_4) {
    lVar1 = (longlong)param_3;
    do {
      if (*(short *)(local_30[0] + lVar1 * 2) != 0) {
        FUN_147e536d0(*param_5,(int)lVar1 - *(int *)param_5[1]);
      }
      lVar1 = lVar1 + 1;
    } while (param_4 != (int)lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e536d0 FUN_147e536d0 body=84 status=ok
// SIG undefined FUN_147e536d0(void)

void FUN_147e536d0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 0x18);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(lVar2 + 0x1c) & 0x7fffffff) <= iVar3) {
    FUN_1401f86b2(lVar2 + 0x10,&PTR_vftable_14c6e47a0,iVar1);
    iVar3 = *(int *)(lVar2 + 0x18);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar3 * 4) = param_2;
  *(int *)(lVar2 + 0x18) = iVar1;
  *(int *)(param_1[1] + 4) = *(int *)(param_1[1] + 4) + 1;
  return;
}



// FUNCTION 147e53724 FUN_147e53724 body=306 status=ok
// SIG undefined FUN_147e53724(void)

ulonglong FUN_147e53724(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_30 = uVar6 * 0xc;
  lVar4 = (*DAT_14c787670)(DAT_14c6e47a8,&local_30,DAT_14c6e47ac);
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      *(undefined4 *)(lVar4 + 8 + lVar8) = *(undefined4 *)(lVar1 + 8 + lVar8);
      *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar1 + lVar8);
      lVar8 = lVar8 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar7 = uVar6 * 0xc + 0xc;
  uVar5 = local_30;
  uVar9 = uVar6;
  if (uVar7 <= local_30) {
    uVar9 = uVar6 + 1;
    local_30 = local_30 - 0xc;
    uVar5 = local_30;
    if (uVar7 <= local_30) {
      uVar6 = local_30 + uVar6 * -0xc;
      uVar7 = 0xaaaaaaaaaaaaaaab;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar5 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar9 = uVar9 + uVar6 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (*DAT_14c787678)(CONCAT71((int7)(uVar7 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = lVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e53858 FUN_147e53858 body=308 status=ok
// SIG undefined FUN_147e53858(void)

ulonglong FUN_147e53858(undefined8 *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_40 = uVar4 * 0xc;
  uVar2 = (*DAT_14c787670)(DAT_14c6e47a8,&local_40,DAT_14c6e47ac);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar5 = uVar4 * 0xc + 0xc;
  uVar3 = local_40;
  uVar6 = uVar4;
  if (uVar5 <= local_40) {
    uVar6 = uVar4 + 1;
    local_40 = local_40 - 0xc;
    uVar3 = local_40;
    if (uVar5 <= local_40) {
      uVar4 = local_40 + uVar4 * -0xc;
      uVar5 = 0xaaaaaaaaaaaaaaab;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar6 = uVar6 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(CONCAT71((int7)(uVar5 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5398e FUN_147e5398e body=316 status=ok
// SIG undefined FUN_147e5398e(void)

void FUN_147e5398e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = (int)param_2[3];
  iVar12 = *(int *)((longlong)param_2 + 0x14);
  iVar10 = 0;
  if (iVar12 != iVar1) {
    lVar4 = *param_2;
    do {
      lVar9 = (longlong)iVar12 * 0x10;
      iVar11 = *(int *)(lVar4 + 8 + lVar9);
      if (((int)param_2[2] != iVar11) ||
         (((int)param_2[2] != -1 && (*(int *)(lVar4 + lVar9 + 0xc) != -1)))) {
        iVar10 = 0;
        if (iVar12 != iVar1) {
          iVar10 = 0;
          goto LAB_147e53a15;
        }
        break;
      }
      iVar12 = *(int *)(lVar4 + 4 + lVar9);
      iVar10 = 0;
    } while (iVar12 != iVar1);
  }
LAB_147e539af:
  *(int *)(*(longlong *)*param_1 + -4 + (longlong)(int)((longlong *)*param_1)[1] * 0x60) = iVar10;
  return;
LAB_147e53a15:
  lVar9 = (longlong)iVar12 * 0x10;
  uVar2 = *(undefined4 *)(lVar4 + 0xc + lVar9);
  plVar5 = (longlong *)param_1[2];
  iVar7 = (int)plVar5[1];
  iVar3 = iVar7 + 1;
  if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) <= iVar7) {
    FUN_147e53aca(plVar5,iVar3);
    iVar7 = (int)plVar5[1];
  }
  lVar6 = *plVar5;
  lVar8 = (longlong)iVar7;
  *(int *)(lVar6 + lVar8 * 0xc) = iVar12;
  *(undefined4 *)(lVar6 + 4 + lVar8 * 0xc) = uVar2;
  *(int *)(lVar6 + 8 + lVar8 * 0xc) = iVar11;
  *(int *)(plVar5 + 1) = iVar3;
  iVar10 = iVar10 + 1;
  iVar12 = *(int *)(lVar4 + 4 + lVar9);
  if (iVar12 == iVar1) goto LAB_147e539af;
  iVar3 = *(int *)(lVar4 + 8 + lVar9);
  while( true ) {
    lVar9 = (longlong)iVar12 * 0x10;
    iVar11 = *(int *)(lVar4 + 8 + lVar9);
    if ((iVar3 != iVar11) || ((iVar3 != -1 && (*(int *)(lVar4 + lVar9 + 0xc) != -1)))) break;
    iVar12 = *(int *)(lVar4 + 4 + lVar9);
    if (iVar12 == iVar1) goto LAB_147e539af;
  }
  if (iVar12 == iVar1) goto LAB_147e539af;
  goto LAB_147e53a15;
}



// FUNCTION 147e53aca FUN_147e53aca body=306 status=ok
// SIG undefined FUN_147e53aca(void)

ulonglong FUN_147e53aca(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_30 = uVar6 * 0xc;
  lVar4 = (*DAT_14c787670)(DAT_14c6e47a8,&local_30,DAT_14c6e47ac);
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      *(undefined4 *)(lVar4 + 8 + lVar8) = *(undefined4 *)(lVar1 + 8 + lVar8);
      *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar1 + lVar8);
      lVar8 = lVar8 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar7 = uVar6 * 0xc + 0xc;
  uVar5 = local_30;
  uVar9 = uVar6;
  if (uVar7 <= local_30) {
    uVar9 = uVar6 + 1;
    local_30 = local_30 - 0xc;
    uVar5 = local_30;
    if (uVar7 <= local_30) {
      uVar6 = local_30 + uVar6 * -0xc;
      uVar7 = 0xaaaaaaaaaaaaaaab;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar5 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar9 = uVar9 + uVar6 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (*DAT_14c787678)(CONCAT71((int7)(uVar7 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = lVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e53bfe FUN_147e53bfe body=158 status=ok
// SIG undefined FUN_147e53bfe(void)

void FUN_147e53bfe(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_1[2] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) * 0xc)
    ;
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e53c9c FUN_147e53c9c body=507 status=ok
// SIG undefined FUN_147e53c9c(void)

void FUN_147e53c9c(longlong param_1)

{
  FUN_147e4ccc0(param_1 + 0x2030);
  FUN_147e53e98(param_1 + 0x2010);
  *(undefined4 *)(param_1 + 0x2008) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x200c)) && (*(longlong *)(param_1 + 0x2000) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x2000),
               (longlong)*(int *)(param_1 + 0x200c) * 0xc);
  }
  *(undefined8 *)(param_1 + 0x2000) = 0;
  *(undefined4 *)(param_1 + 0x200c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1ff8) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x1ffc)) && (*(longlong *)(param_1 + 0x1ff0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1ff0),
               (longlong)*(int *)(param_1 + 0x1ffc) << 2);
  }
  *(undefined8 *)(param_1 + 0x1ff0) = 0;
  *(undefined4 *)(param_1 + 0x1ffc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1fe8) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x1fec)) && (*(longlong *)(param_1 + 0x1fe0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1fe0),
               (longlong)*(int *)(param_1 + 0x1fec) << 2);
  }
  *(undefined8 *)(param_1 + 0x1fe0) = 0;
  *(undefined4 *)(param_1 + 0x1fec) = 0x80000000;
  FUN_147e53f8a(param_1 + 0x1fb0);
  FUN_147e54066(param_1 + 0x1f90);
  FUN_147e540f4(param_1 + 0x250);
  FUN_147e53f2a(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (longlong)*(int *)(param_1 + 0x34) << 2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (longlong)*(int *)(param_1 + 0x24) << 6);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (longlong)*(int *)(param_1 + 0x14) * 0xc);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 147e53e98 FUN_147e53e98 body=146 status=ok
// SIG undefined FUN_147e53e98(void)

void FUN_147e53e98(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e53f2a FUN_147e53f2a body=95 status=ok
// SIG undefined FUN_147e53f2a(void)

void FUN_147e53f2a(longlong param_1)

{
  FUN_147e52b06(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0 && -1 < (longlong)*(int *)(param_1 + 0x34)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (longlong)*(int *)(param_1 + 0x34) * 0xe0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  return;
}



// FUNCTION 147e53f8a FUN_147e53f8a body=219 status=ok
// SIG undefined FUN_147e53f8a(void)

void FUN_147e53f8a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[4] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x2c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],(longlong)*(int *)((longlong)param_1 + 0x2c) * 0xc)
    ;
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x60);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e54066 FUN_147e54066 body=142 status=ok
// SIG undefined FUN_147e54066(void)

void FUN_147e54066(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x68);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e540f4 FUN_147e540f4 body=124 status=ok
// SIG undefined FUN_147e540f4(void)

void FUN_147e540f4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1cf8) = 0;
  if (*(longlong *)(param_1 + 0x1cf0) != 0 && -1 < (longlong)*(int *)(param_1 + 0x1cfc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1cf0),
               (longlong)*(int *)(param_1 + 0x1cfc) << 3);
  }
  *(undefined8 *)(param_1 + 0x1cf0) = 0;
  *(undefined4 *)(param_1 + 0x1cfc) = 0x80000000;
  FUN_147e54170(param_1 + 0x1a98);
  FUN_147e54222(param_1 + 0x20);
  FUN_147e542c4(param_1);
  return;
}



// FUNCTION 147e54170 FUN_147e54170 body=178 status=ok
// SIG undefined FUN_147e54170(void)

void FUN_147e54170(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0 && -1 < (longlong)*(int *)(param_1 + 0x22c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x220),
               (longlong)*(int *)(param_1 + 0x22c) << 4);
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 500)) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x1e8),
               (ulonglong)*(uint *)(param_1 + 500) * 2);
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 500) = 0x80000000;
  FUN_147e52b06(param_1);
  return;
}



// FUNCTION 147e54222 FUN_147e54222 body=162 status=ok
// SIG undefined FUN_147e54222(void)

void FUN_147e54222(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1a70) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x1a74)) && (*(longlong *)(param_1 + 0x1a68) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1a68),
               (longlong)*(int *)(param_1 + 0x1a74) * 0xf0);
  }
  *(undefined8 *)(param_1 + 0x1a68) = 0;
  *(undefined4 *)(param_1 + 0x1a74) = 0x80000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0 && -1 < (longlong)*(int *)(param_1 + 0x5c)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x50),
               (longlong)*(int *)(param_1 + 0x5c) * 0x68);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  return;
}



// FUNCTION 147e542c4 FUN_147e542c4 body=138 status=ok
// SIG undefined FUN_147e542c4(void)

void FUN_147e542c4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 5);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x50);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e5434e FUN_147e5434e body=234 status=ok
// SIG undefined FUN_147e5434e(void)

uint * FUN_147e5434e(longlong *param_1,uint *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  
  plVar1 = param_1 + 2;
  FUN_147e544b0(plVar1,(int)param_1[1]);
  if ((*param_3 & 0xfffffffffffffffe) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_144bea740();
  }
  lVar7 = param_1[2];
  uVar8 = *(uint *)(param_1 + 3);
  uVar5 = (ulonglong)(uVar8 & uVar3);
  do {
    puVar2 = (uint *)(lVar7 + uVar5 * 8);
    if ((int)puVar2[1] < 0) {
      puVar6 = (uint *)(param_1 + 1);
      uVar8 = *puVar6;
      *puVar2 = uVar3;
      puVar2[1] = uVar8;
      lVar7 = *plVar1;
LAB_147e54409:
      *param_2 = *puVar6;
      param_2[1] = (uint)((ulonglong)((longlong)puVar2 - lVar7) >> 3);
      return param_2;
    }
    if (*puVar2 == uVar3) {
      uVar5 = *(ulonglong *)(*param_1 + (ulonglong)puVar2[1] * 0xe8) & 0xfffffffffffffffe;
      if (((*param_3 & 0xfffffffffffffffe) == 0) || (uVar5 == 0)) {
        iVar4 = -(uint)((*param_3 & 0xfffffffffffffffe) != 0);
        if (uVar5 != 0) goto LAB_147e543d6;
      }
      else {
        iVar4 = FUN_144bfb930();
        lVar7 = *plVar1;
      }
      if (iVar4 == 0) {
        puVar6 = puVar2 + 1;
        goto LAB_147e54409;
      }
      uVar8 = *(uint *)(param_1 + 3);
    }
LAB_147e543d6:
    uVar5 = (longlong)(int)uVar8 & ((ulonglong)((longlong)puVar2 - lVar7) >> 3) + 1;
  } while( true );
}



// FUNCTION 147e54438 FUN_147e54438 body=119 status=ok
// SIG undefined FUN_147e54438(void)

longlong FUN_147e54438(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    FUN_147e54d92(param_1 + 0x18,&PTR_vftable_14c6e47a0,*(undefined8 *)(param_2 + 0x18),
                  *(undefined4 *)(param_2 + 0x20));
    FUN_147e54e62(param_1 + 0x28,&PTR_vftable_14c6e47a0,*(undefined8 *)(param_2 + 0x28),
                  *(undefined4 *)(param_2 + 0x30));
  }
  FUN_147e54d32(param_1 + 0x38,param_2 + 0x38);
  FUN_144cad680(param_1 + 0x68,param_2 + 0x68);
  FUN_144cad130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 147e544b0 FUN_147e544b0 body=54 status=ok
// SIG undefined FUN_147e544b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e544b0(longlong *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_58 [32];
  longlong lStack_38;
  ulonglong uStack_30;
  longlong lVar10;
  
  if (-2 < param_2) {
    param_2 = param_2 + 1;
    if ((ulonglong)((longlong)param_2 * 3) >> 0x20 == 0) {
      iVar5 = (int)param_1[1];
      if (((-1 < iVar5) && (((longlong)iVar5 & 0x7fffffffffffffffU) >> 0x1f == 0)) &&
         ((uint)(iVar5 * 2) < (uint)((longlong)param_2 * 3))) {
        uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
        iVar5 = 4;
        if (4 < param_2) {
          iVar5 = param_2;
        }
        uVar3 = iVar5 * 2 - 1;
        uVar3 = (int)uVar3 >> 0x10 | uVar3;
        uVar3 = (int)uVar3 >> 8 | uVar3;
        uVar3 = (int)uVar3 >> 4 | uVar3;
        uVar3 = (int)uVar3 >> 2 | uVar3;
        uVar3 = (int)uVar3 >> 1 | uVar3;
        uVar1 = uVar3 + 1;
        lVar6 = (longlong)(int)uVar1 << 3;
        if (*(code **)(PTR_vftable_14c6e47a0 + 8) == FUN_14475e3a6) {
          lStack_38 = lVar6;
          if (*(code **)(PTR_vftable_14c6e47a0 + 0x10) == FUN_14486e206) {
            lVar6 = (*DAT_14c787670)(CONCAT71(0x14486e2,DAT_14c6e47a8),&lStack_38,DAT_14c6e47ac);
          }
          else {
            lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))
                              (&PTR_vftable_14c6e47a0,lVar6,&lStack_38);
          }
        }
        else {
          lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
        }
        auVar2 = _DAT_149931e80;
        if (-1 < (int)uVar3) {
          lVar10 = (ulonglong)uVar1 - 1;
          auVar11._8_4_ = (int)lVar10;
          auVar11._0_8_ = lVar10;
          auVar11._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          auVar13 = pmovsxbq(in_XMM1,0x302);
          auVar14 = pmovsxbq(in_XMM2,0x100);
          uVar7 = 0;
          auVar11 = auVar11 ^ _DAT_149931e80;
          lVar10 = auVar11._0_8_;
          auVar15 = pmovsxbq(in_XMM5,0x404);
          do {
            auVar16 = auVar14 ^ auVar2;
            lVar12 = auVar11._8_8_;
            if ((bool)(~(lVar10 < auVar16._0_8_) & 1)) {
              *(undefined4 *)(lVar6 + 4 + uVar7) = 0xffffffff;
            }
            if (auVar16._8_8_ <= lVar12) {
              *(undefined4 *)(lVar6 + 0xc + uVar7) = 0xffffffff;
            }
            auVar16 = auVar13 ^ auVar2;
            if (auVar16._0_8_ <= lVar10) {
              *(undefined4 *)(lVar6 + 0x14 + uVar7) = 0xffffffff;
            }
            if (auVar16._8_8_ <= lVar12) {
              *(undefined4 *)(lVar6 + 0x1c + uVar7) = 0xffffffff;
            }
            lVar12 = auVar14._8_8_;
            auVar14._0_8_ = auVar14._0_8_ + auVar15._0_8_;
            auVar14._8_8_ = lVar12 + auVar15._8_8_;
            lVar12 = auVar13._8_8_;
            auVar13._0_8_ = auVar13._0_8_ + auVar15._0_8_;
            auVar13._8_8_ = lVar12 + auVar15._8_8_;
            uVar7 = uVar7 + 0x20;
          } while (((ulonglong)uVar1 * 8 + 0x18 & 0xffffffffffffffe0) != uVar7);
        }
        lVar10 = *param_1;
        if ((lVar10 == 0) || (*(int *)(lVar10 + 4) == -2)) {
          *param_1 = lVar6;
          *(uint *)(param_1 + 1) = uVar3;
        }
        else {
          uVar1 = *(uint *)(param_1 + 1);
          uVar7 = (ulonglong)uVar1;
          *param_1 = lVar6;
          *(uint *)(param_1 + 1) = uVar3;
          if (-1 < (int)uVar1) {
            uVar7 = uVar7 + 1;
            uVar4 = 0;
            do {
              uVar1 = *(uint *)(lVar10 + 4 + uVar4 * 8);
              if (-1 < (int)uVar1) {
                uVar3 = *(uint *)(lVar10 + uVar4 * 8);
                lVar6 = *param_1;
                uVar9 = (ulonglong)(*(uint *)(param_1 + 1) & uVar3);
                if (*(int *)(lVar6 + 4 + uVar9 * 8) < 0) {
                  puVar8 = (uint *)(lVar6 + uVar9 * 8);
                }
                else {
                  do {
                    uVar9 = uVar9 + 1 & (longlong)(int)*(uint *)(param_1 + 1);
                    puVar8 = (uint *)(lVar6 + uVar9 * 8);
                  } while (-1 < (int)puVar8[1]);
                }
                *puVar8 = uVar3;
                puVar8[1] = uVar1;
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar7);
          }
          (*DAT_14c787678)(CONCAT71((int7)(uVar7 >> 8),DAT_14c6e47a8),lVar10,0);
        }
        if ((uStack_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e54552 FUN_147e54552 body=317 status=ok
// SIG undefined FUN_147e54552(void)

ulonglong FUN_147e54552(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)(uVar2 * 2);
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar4 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar6 * 0xe8,&local_48)
  ;
  FUN_147e54690(uVar4,*param_1,*(undefined4 *)(param_1 + 1));
  uVar1 = uVar6 * 0xe8 + 0xe8;
  uVar5 = local_48;
  uVar7 = uVar6;
  if (uVar1 <= local_48) {
    uVar7 = uVar6 + 1;
    local_48 = local_48 - 0xe8;
    uVar5 = local_48;
    if (uVar1 <= local_48) {
      uVar6 = local_48 + uVar6 * -0xe8 >> 3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar5 = SUB168(auVar3 * ZEXT816(0x8d3dcb08d3dcb09),0);
      uVar7 = uVar7 + uVar6 / 0x1d;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0xe8);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e54690 FUN_147e54690 body=121 status=ok
// SIG undefined FUN_147e54690(void)

void FUN_147e54690(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    param_1 = param_1 + 8;
    lVar2 = param_2 + 8;
    iVar1 = param_3;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -8) = 0;
      FUN_147e5470a(param_1,lVar2);
      param_1 = param_1 + 0xe8;
      lVar2 = lVar2 + 0xe8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    do {
      FUN_147e4ccc0(param_2 + 8);
      FUN_144b49dd0(param_2);
      param_2 = param_2 + 0xe8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e5470a FUN_147e5470a body=271 status=ok
// SIG undefined FUN_147e5470a(void)

undefined8 * FUN_147e5470a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_14aba30f0;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  FUN_147e548da(param_2 + 0x18,&PTR_vftable_14c6e47a0);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  FUN_147e5493c(param_2 + 0x28,&PTR_vftable_14c6e47a0);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_147e5481a(param_1 + 7,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  lVar1 = 0xe;
  do {
    param_1[lVar1] = *(undefined8 *)(param_2 + lVar1 * 8);
    *(undefined8 *)(param_2 + lVar1 * 8) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x17);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  lVar1 = 0x18;
  do {
    param_1[lVar1] = *(undefined8 *)(param_2 + lVar1 * 8);
    *(undefined8 *)(param_2 + lVar1 * 8) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1c);
  return param_1;
}



// FUNCTION 147e5481a FUN_147e5481a body=192 status=ok
// SIG undefined FUN_147e5481a(void)

undefined8 * FUN_147e5481a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  FUN_147e549a6(param_2,&PTR_vftable_14c6e47a0);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  FUN_147e54a10(param_2 + 2,&PTR_vftable_14c6e47a0);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  FUN_147e54a7a(param_2 + 4,&PTR_vftable_14c6e47a0);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[4] = 0;
  param_2[5] = 0;
  return param_1;
}



// FUNCTION 147e548da FUN_147e548da body=97 status=ok
// SIG undefined FUN_147e548da(void)

void FUN_147e548da(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e5493c FUN_147e5493c body=105 status=ok
// SIG undefined FUN_147e5493c(void)

void FUN_147e5493c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x60);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e549a6 FUN_147e549a6 body=105 status=ok
// SIG undefined FUN_147e549a6(void)

void FUN_147e549a6(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e54a10 FUN_147e54a10 body=105 status=ok
// SIG undefined FUN_147e54a10(void)

void FUN_147e54a10(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x60);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e54a7a FUN_147e54a7a body=97 status=ok
// SIG undefined FUN_147e54a7a(void)

void FUN_147e54a7a(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 7);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 7);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e54adc FUN_147e54adc body=282 status=ok
// SIG undefined FUN_147e54adc(void)

undefined8 * FUN_147e54adc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_LAB_14aba30f0;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar8 = *(uint *)(param_2 + 0x20);
  if (0 < (int)uVar8) {
    lVar2 = *(longlong *)(param_2 + 0x18);
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(ulonglong)uVar8 * 4);
    param_1[3] = lVar3;
    *(uint *)(param_1 + 4) = uVar8;
    *(uint *)((longlong)param_1 + 0x24) = uVar8;
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (uVar8 != (uint)lVar4);
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar9 = (ulonglong)iVar1;
  if (0 < (longlong)uVar9) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
    param_1[5] = lVar3;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    lVar4 = 0;
    do {
      puVar6 = (undefined8 *)(lVar2 + lVar4);
      puVar7 = (undefined8 *)(lVar3 + lVar4);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar4 = lVar4 + 0x60;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  FUN_147e54bf6(param_1 + 7,param_2 + 0x38);
  FUN_144cad5e0(param_1 + 0xd,param_2 + 0x68);
  FUN_144cad060(param_1 + 0x17,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 147e54bf6 FUN_147e54bf6 body=316 status=ok
// SIG undefined FUN_147e54bf6(void)

longlong * FUN_147e54bf6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  iVar1 = (int)param_2[1];
  uVar7 = (ulonglong)iVar1;
  if (0 < (longlong)uVar7) {
    lVar2 = *param_2;
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,uVar7 * 0xc);
    *param_1 = lVar3;
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)(lVar2 + 8 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
      lVar4 = lVar4 + 0xc;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  iVar1 = (int)param_2[3];
  uVar7 = (ulonglong)iVar1;
  if (0 < (longlong)uVar7) {
    lVar2 = param_2[2];
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
    param_1[2] = lVar3;
    *(int *)(param_1 + 3) = iVar1;
    *(int *)((longlong)param_1 + 0x1c) = iVar1;
    lVar4 = 0;
    do {
      puVar8 = (undefined8 *)(lVar4 + lVar2);
      puVar9 = (undefined8 *)(lVar3 + lVar4);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      lVar4 = lVar4 + 0x60;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  iVar1 = (int)param_2[5];
  uVar7 = (ulonglong)iVar1;
  if (0 < (longlong)uVar7) {
    lVar2 = param_2[4];
    lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
    param_1[4] = lVar3;
    *(int *)(param_1 + 5) = iVar1;
    *(int *)((longlong)param_1 + 0x2c) = iVar1;
    lVar4 = 0;
    do {
      puVar8 = (undefined8 *)(lVar2 + lVar4);
      puVar9 = (undefined8 *)(lVar3 + lVar4);
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      lVar4 = lVar4 + 0x80;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 147e54d32 FUN_147e54d32 body=96 status=ok
// SIG undefined FUN_147e54d32(void)

undefined8 * FUN_147e54d32(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 != param_1) {
    FUN_147e54f3c(param_1,&PTR_vftable_14c6e47a0,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_147e55018(param_1 + 2,&PTR_vftable_14c6e47a0,param_2[2],*(undefined4 *)(param_2 + 3));
    FUN_147e550f2(param_1 + 4,&PTR_vftable_14c6e47a0,param_2[4],*(undefined4 *)(param_2 + 5));
  }
  return param_1;
}



// FUNCTION 147e54d92 FUN_147e54d92 body=71 status=ok
// SIG undefined FUN_147e54d92(void)

void FUN_147e54d92(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e54dda(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 << 2);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e54dda FUN_147e54dda body=135 status=ok
// SIG undefined FUN_147e54dda(void)

void FUN_147e54dda(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e54e62 FUN_147e54e62 body=75 status=ok
// SIG undefined FUN_147e54e62(void)

void FUN_147e54e62(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e54eae(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 * 0x60);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e54eae FUN_147e54eae body=142 status=ok
// SIG undefined FUN_147e54eae(void)

void FUN_147e54eae(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e54f3c FUN_147e54f3c body=75 status=ok
// SIG undefined FUN_147e54f3c(void)

void FUN_147e54f3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e54f88(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 * 0xc);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e54f88 FUN_147e54f88 body=143 status=ok
// SIG undefined FUN_147e54f88(void)

void FUN_147e54f88(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0xc);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e55018 FUN_147e55018 body=75 status=ok
// SIG undefined FUN_147e55018(void)

void FUN_147e55018(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e55064(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 * 0x60);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e55064 FUN_147e55064 body=142 status=ok
// SIG undefined FUN_147e55064(void)

void FUN_147e55064(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x60);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e550f2 FUN_147e550f2 body=71 status=ok
// SIG undefined FUN_147e550f2(void)

void FUN_147e550f2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_147e5513a(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 << 7);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e5513a FUN_147e5513a body=134 status=ok
// SIG undefined FUN_147e5513a(void)

void FUN_147e5513a(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 7);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 7);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 147e551d2 FUN_147e551d2 body=44 status=ok
// SIG undefined FUN_147e551d2(void)

undefined8 FUN_147e551d2(undefined8 param_1,int param_2)

{
  FUN_147e554f8();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e551fe FUN_147e551fe body=44 status=ok
// SIG undefined FUN_147e551fe(void)

undefined8 FUN_147e551fe(undefined8 param_1,int param_2)

{
  FUN_147e5522a();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e5522a FUN_147e5522a body=89 status=ok
// SIG undefined FUN_147e5522a(void)

void FUN_147e5522a(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aba35e0;
  if (param_1[0x1b] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1a] != 0) {
    FUN_144b3f230();
  }
  FUN_147e4aaf0(param_1 + 0x14);
  FUN_147e4ab7c(param_1 + 0xe);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e55284 FUN_147e55284 body=183 status=ok
// SIG undefined FUN_147e55284(void)

void FUN_147e55284(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < (int)param_3) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + 8 + lVar2) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 1;
      *(undefined ***)(param_1 + lVar2) = &PTR_LAB_14aba35e0;
      FUN_147e46bc6(param_1 + 0x20 + lVar2);
      puVar1 = (undefined8 *)(param_1 + 0xd0 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined ***)(param_1 + lVar2) = &PTR_LAB_14aba35c0;
      puVar1 = (undefined8 *)(param_1 + 0xe0 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0xf0 + lVar2) = 0x8000000000000000;
      lVar2 = lVar2 + 0x100;
    } while ((ulonglong)param_3 << 8 != lVar2);
  }
  return;
}



// FUNCTION 147e5533c FUN_147e5533c body=67 status=ok
// SIG undefined FUN_147e5533c(void)

void FUN_147e5533c(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3 + 1;
    plVar1 = (longlong *)((ulonglong)param_3 * 0x100 + param_1);
    do {
      plVar1 = plVar1 + -0x20;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 147e55394 FUN_147e55394 body=62 status=ok
// SIG undefined FUN_147e55394(void)

void FUN_147e55394(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + uVar2 * 8);
      *(longlong *)(param_1 + uVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        FUN_144b3d910();
      }
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  return;
}



// FUNCTION 147e553d2 FUN_147e553d2 body=51 status=ok
// SIG undefined FUN_147e553d2(void)

void FUN_147e553d2(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3 + 1;
    do {
      if (*(longlong *)(param_1 + -0x10 + uVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 147e55406 FUN_147e55406 body=98 status=ok
// SIG undefined FUN_147e55406(void)

void FUN_147e55406(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + uVar4 * 8);
      lVar1 = *(longlong *)(param_2 + uVar4 * 8);
      if (lVar3 != lVar1) {
        if (lVar1 == 0) {
          uVar2 = 0;
        }
        else {
          FUN_144b3d910(lVar1);
          lVar3 = *(longlong *)(param_1 + uVar4 * 8);
          uVar2 = *(undefined8 *)(param_2 + uVar4 * 8);
        }
        *(undefined8 *)(param_1 + uVar4 * 8) = uVar2;
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
  }
  return;
}



// FUNCTION 147e55498 FUN_147e55498 body=60 status=ok
// SIG undefined FUN_147e55498(void)

void FUN_147e55498(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3 + 1;
    puVar1 = (undefined8 *)((ulonglong)param_3 * 0x10 + param_1);
    do {
      puVar1 = puVar1 + -2;
      (**(code **)*puVar1)(puVar1,0);
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 147e554d4 FUN_147e554d4 body=35 status=ok
// SIG undefined FUN_147e554d4(void)

undefined8 FUN_147e554d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e554f8 FUN_147e554f8 body=124 status=ok
// SIG undefined FUN_147e554f8(void)

void FUN_147e554f8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aba35c0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1d],
               (longlong)*(int *)((longlong)param_1 + 0xf4) << 2);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  if (param_1[0x1c] != 0) {
    FUN_144b3f230();
  }
  FUN_147e5522a(param_1);
  return;
}



// FUNCTION 147e55574 FUN_147e55574 body=156 status=ok
// SIG undefined FUN_147e55574(void)

void FUN_147e55574(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = (int)param_1[1];
  if (iVar4 <= (int)param_1[2] * 2) {
    FUN_147e55612(param_1,local_1c,iVar4 * 2);
    iVar4 = (int)param_1[1];
  }
  uVar5 = param_2 * -0x61c8864f;
  lVar1 = *param_1;
  uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | param_2 * -0x4f000000)
          & iVar4 - 1U;
  lVar3 = (longlong)(int)uVar5;
  iVar6 = *(int *)(lVar1 + lVar3 * 4);
  iVar2 = 1;
  do {
    if (iVar6 == -1) {
LAB_147e555d7:
      *(int *)(param_1 + 2) = (int)param_1[2] + iVar2;
      *(int *)(lVar1 + lVar3 * 4) = param_2;
      if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (iVar6 == param_2) {
      iVar2 = 0;
      goto LAB_147e555d7;
    }
    uVar5 = uVar5 + 1 & iVar4 - 1U;
    lVar3 = (longlong)(int)uVar5;
    iVar6 = *(int *)(lVar1 + lVar3 * 4);
  } while( true );
}



// FUNCTION 147e55612 FUN_147e55612 body=338 status=ok
// SIG undefined FUN_147e55612(void)

undefined4 * FUN_147e55612(longlong *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = 8;
  if (8 < (int)param_3) {
    uVar4 = param_3;
  }
  local_40 = 0;
  local_38 = 0x8000000000000000;
  FUN_147e55766(&local_40,param_1);
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 < uVar4) {
    FUN_147e4b86a(param_1,&PTR_vftable_14c6e47a0,uVar4);
    uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  }
  uVar2 = uVar2 >> 1 | uVar2;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1);
  if (*(uint *)(param_1 + 1) != uVar2) {
    *(uint *)(param_1 + 1) = uVar2;
  }
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      *(undefined4 *)(*param_1 + uVar3 * 4) = 0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (*(int *)(local_40 + uVar3 * 4) != -1) {
        FUN_147e55574(param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  *param_2 = 0;
  uVar3 = local_38 >> 0x20;
  local_38 = local_38 & 0xffffffff00000000;
  lVar5 = (longlong)(int)uVar3;
  if ((-1 < lVar5) && (local_40 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_40,lVar5 << 2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e55766 FUN_147e55766 body=88 status=ok
// SIG undefined FUN_147e55766(void)

void FUN_147e55766(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    FUN_14382139c(param_1,&PTR_vftable_14c6e47a0);
    FUN_14382139c(param_2,&PTR_vftable_14c6e47a0);
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 147e557be FUN_147e557be body=4401 status=ok
// SIG undefined FUN_147e557be(void)

void FUN_147e557be(undefined2 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  longlong param_9,undefined2 *param_10,undefined2 *param_11,undefined8 param_12,
                  undefined8 param_13,longlong *param_14,longlong *param_15,longlong *param_16)

{
  int iVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_52;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_4;
  if (*(int *)(param_3 + 0x1a60) == 0) {
    local_68 = 0x40;
    puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar6,"hkReferencedObject");
    }
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
    *puVar6 = &PTR_FUN_14aba4340;
    uVar3 = *param_2;
    puVar6[4] = 0;
    puVar6[3] = &PTR_FUN_14aba4360;
    puVar6[5] = uVar3;
    puVar6[7] = param_2;
    if ((param_15 != (longlong *)0x0 && param_14 != (longlong *)0x0) && param_16 != (longlong *)0x0)
    {
      lVar10 = *param_14;
      if (lVar10 == 0) {
        local_68 = 0x70;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"hkReferencedTask");
        }
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        puVar8 = puVar7 + 4;
        *puVar7 = &PTR_FUN_14aba4250;
        puVar7[4] = &PTR_FUN_14aba4270;
        puVar7[5] = param_8;
        puVar7[6] = local_70;
        puVar7[7] = param_3;
        puVar7[8] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_144b3d910(puVar6);
        }
        puVar7[9] = param_12;
        puVar7[10] = param_13;
        *puVar7 = &PTR_FUN_14aba4200;
        puVar7[4] = &PTR_FUN_14aba4220;
        puVar7[0xb] = param_5;
        if (puVar7 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        *(undefined4 *)(puVar7 + 0xc) = param_6;
        plVar4 = (longlong *)*param_14;
        *param_14 = (longlong)puVar8;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      else {
        *(undefined8 *)(lVar10 + 0x38) = param_5;
        *(undefined4 *)(lVar10 + 0x40) = param_6;
      }
      FUN_144be3ae0(param_9,&local_50,*param_14,param_7);
      uVar9 = (undefined2)local_50;
      iVar5 = *(int *)(param_9 + 0x330);
      iVar1 = iVar5 + 1;
      if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
        FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
        iVar5 = *(int *)(param_9 + 0x330);
      }
      lVar10 = *(longlong *)(param_9 + 0x328);
      *(int *)(param_9 + 0x330) = iVar1;
      *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = param_1;
      *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
      puVar7 = (undefined8 *)*param_15;
      if (puVar7 == (undefined8 *)0x0) {
        local_68 = 0x60;
        puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar8,"hkReferencedTask");
        }
        puVar8[1] = 0xffffffff;
        puVar8[2] = 1;
        puVar7 = puVar8 + 4;
        *puVar8 = &PTR_FUN_14aba4250;
        puVar8[4] = &PTR_FUN_14aba4270;
        puVar8[5] = param_8;
        puVar8[6] = local_70;
        puVar8[7] = param_3;
        puVar8[8] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_144b3d910(puVar6);
        }
        puVar8[9] = param_12;
        puVar8[10] = param_13;
        *puVar8 = &PTR_FUN_14aba42a0;
        puVar8[4] = &PTR_FUN_14aba42c0;
        if (puVar8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        *(undefined4 *)((longlong)puVar8 + 0x5c) = param_6;
        plVar4 = (longlong *)*param_15;
        *param_15 = (longlong)puVar7;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          puVar7 = (undefined8 *)*param_15;
        }
      }
      FUN_144be3ae0(param_9,&local_68,puVar7,param_7);
      uVar9 = (undefined2)local_68;
      *param_10 = (undefined2)local_68;
      uVar2 = (undefined2)local_50;
      iVar5 = *(int *)(param_9 + 0x330);
      iVar1 = iVar5 + 1;
      if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
        FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
        iVar5 = *(int *)(param_9 + 0x330);
      }
      lVar10 = *(longlong *)(param_9 + 0x328);
      *(int *)(param_9 + 0x330) = iVar1;
      *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = uVar2;
      *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
      if (*param_16 == 0) {
        local_68 = 0x70;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"hkReferencedTask");
        }
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        puVar8 = puVar7 + 4;
        *puVar7 = &PTR_FUN_14aba4250;
        puVar7[4] = &PTR_FUN_14aba4270;
        puVar7[5] = param_8;
        puVar7[6] = local_70;
        puVar7[7] = param_3;
        puVar7[8] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_144b3d910(puVar6);
        }
        puVar7[9] = param_12;
        puVar7[10] = param_13;
        *puVar7 = &PTR_FUN_14aba42f0;
        puVar7[4] = &PTR_FUN_14aba4310;
        if (puVar7 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        puVar7[0xb] = param_5;
        plVar4 = (longlong *)*param_16;
        *param_16 = (longlong)puVar8;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      else {
        *(undefined8 *)(*param_16 + 0x38) = param_5;
      }
      lVar10 = *param_16;
      puVar7 = &local_68;
      goto LAB_147e56151;
    }
    local_68 = 0x70;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkReferencedTask");
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = &PTR_FUN_14aba4250;
    puVar7[4] = &PTR_FUN_14aba4270;
    puVar7[5] = param_8;
    puVar7[6] = local_70;
    puVar7[7] = param_3;
    puVar7[8] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar6);
    }
    puVar7[9] = param_12;
    puVar7[10] = param_13;
    *puVar7 = &PTR_FUN_14aba4200;
    puVar7[4] = &PTR_FUN_14aba4220;
    puVar7[0xb] = param_5;
    *(undefined4 *)(puVar7 + 0xc) = param_6;
    FUN_144be3b70(param_9,&local_50,puVar7,param_7);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
    }
    uVar9 = (undefined2)local_50;
    iVar5 = *(int *)(param_9 + 0x330);
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
      FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
      iVar5 = *(int *)(param_9 + 0x330);
    }
    lVar10 = *(longlong *)(param_9 + 0x328);
    *(int *)(param_9 + 0x330) = iVar1;
    *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = param_1;
    *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
    local_68 = 0x60;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkReferencedTask");
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = &PTR_FUN_14aba4250;
    puVar7[4] = &PTR_FUN_14aba4270;
    puVar7[5] = param_8;
    puVar7[6] = local_70;
    puVar7[7] = param_3;
    puVar7[8] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar6);
    }
    puVar7[9] = param_12;
    puVar7[10] = param_13;
    *puVar7 = &PTR_FUN_14aba42a0;
    puVar7[4] = &PTR_FUN_14aba42c0;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = param_6;
    FUN_144be3b70(param_9,&local_68,puVar7,param_7);
    *param_10 = (undefined2)local_68;
    uVar9 = (undefined2)local_68;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
      uVar9 = *param_10;
    }
    uVar2 = (undefined2)local_50;
    iVar5 = *(int *)(param_9 + 0x330);
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
      FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
      iVar5 = *(int *)(param_9 + 0x330);
    }
    lVar10 = *(longlong *)(param_9 + 0x328);
    *(int *)(param_9 + 0x330) = iVar1;
    *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = uVar2;
    *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
    local_68 = 0x70;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkReferencedTask");
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = &PTR_FUN_14aba4250;
    puVar7[4] = &PTR_FUN_14aba4270;
    puVar7[5] = param_8;
    puVar7[6] = local_70;
    puVar7[7] = param_3;
    puVar7[8] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar6);
    }
    puVar7[9] = param_12;
    puVar7[10] = param_13;
    *puVar7 = &PTR_FUN_14aba42f0;
    puVar7[4] = &PTR_FUN_14aba4310;
    puVar7[0xb] = param_5;
    puVar8 = &local_68;
  }
  else {
    local_68 = *(undefined8 *)(param_3 + 0x1a58);
    uStack_60 = *(undefined4 *)(param_3 + 0x1a60);
    uStack_5c = *(undefined4 *)(param_3 + 0x1a64);
    local_50 = 0x48;
    puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar6,"hkReferencedObject");
    }
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
    *puVar6 = &PTR_FUN_14aba41c0;
    uVar3 = *param_2;
    puVar6[4] = 0;
    puVar6[3] = &PTR_FUN_14aba41e0;
    puVar6[5] = uVar3;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_68._4_4_;
    *(undefined4 *)(puVar6 + 7) = uStack_60;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_5c;
    puVar6[8] = param_2;
    if ((param_15 != (longlong *)0x0 && param_14 != (longlong *)0x0) && param_16 != (longlong *)0x0)
    {
      lVar10 = *param_14;
      if (lVar10 == 0) {
        local_50 = 0x70;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"hkReferencedTask");
        }
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        puVar8 = puVar7 + 4;
        *puVar7 = &PTR_FUN_14aba3fd0;
        puVar7[4] = &PTR_FUN_14aba3ff0;
        puVar7[5] = param_8;
        puVar7[6] = local_70;
        puVar7[7] = param_3;
        puVar7[8] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_144b3d910(puVar6);
        }
        puVar7[9] = param_12;
        puVar7[10] = param_13;
        *puVar7 = &PTR_FUN_14aba3f80;
        puVar7[4] = &PTR_FUN_14aba3fa0;
        puVar7[0xb] = param_5;
        if (puVar7 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        *(undefined4 *)(puVar7 + 0xc) = param_6;
        plVar4 = (longlong *)*param_14;
        *param_14 = (longlong)puVar8;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      else {
        *(undefined8 *)(lVar10 + 0x38) = param_5;
        *(undefined4 *)(lVar10 + 0x40) = param_6;
      }
      FUN_144be3ae0(param_9,&local_52,*param_14,param_7);
      uVar9 = local_52;
      iVar5 = *(int *)(param_9 + 0x330);
      iVar1 = iVar5 + 1;
      if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
        FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
        iVar5 = *(int *)(param_9 + 0x330);
      }
      lVar10 = *(longlong *)(param_9 + 0x328);
      *(int *)(param_9 + 0x330) = iVar1;
      *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = param_1;
      *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
      puVar7 = (undefined8 *)*param_15;
      if (puVar7 == (undefined8 *)0x0) {
        local_50 = 0x60;
        puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar8,"hkReferencedTask");
        }
        puVar8[1] = 0xffffffff;
        puVar8[2] = 1;
        puVar7 = puVar8 + 4;
        *puVar8 = &PTR_FUN_14aba3fd0;
        puVar8[4] = &PTR_FUN_14aba3ff0;
        puVar8[5] = param_8;
        puVar8[6] = local_70;
        puVar8[7] = param_3;
        puVar8[8] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_144b3d910(puVar6);
        }
        puVar8[9] = param_12;
        puVar8[10] = param_13;
        *puVar8 = &PTR_FUN_14aba4070;
        puVar8[4] = &PTR_FUN_14aba4090;
        if (puVar8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        *(undefined4 *)((longlong)puVar8 + 0x5c) = param_6;
        plVar4 = (longlong *)*param_15;
        *param_15 = (longlong)puVar7;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          puVar7 = (undefined8 *)*param_15;
        }
      }
      FUN_144be3ae0(param_9,&local_50,puVar7,param_7);
      uVar9 = (undefined2)local_50;
      *param_10 = (undefined2)local_50;
      iVar5 = *(int *)(param_9 + 0x330);
      iVar1 = iVar5 + 1;
      if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
        FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
        iVar5 = *(int *)(param_9 + 0x330);
      }
      lVar10 = *(longlong *)(param_9 + 0x328);
      *(int *)(param_9 + 0x330) = iVar1;
      *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = local_52;
      *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
      if (*param_16 == 0) {
        local_50 = 0x70;
        puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar7,"hkReferencedTask");
        }
        puVar7[1] = 0xffffffff;
        puVar7[2] = 1;
        puVar8 = puVar7 + 4;
        *puVar7 = &PTR_FUN_14aba3fd0;
        puVar7[4] = &PTR_FUN_14aba3ff0;
        puVar7[5] = param_8;
        puVar7[6] = local_70;
        puVar7[7] = param_3;
        puVar7[8] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          FUN_144b3d910(puVar6);
        }
        puVar7[9] = param_12;
        puVar7[10] = param_13;
        *puVar7 = &PTR_FUN_14aba4100;
        puVar7[4] = &PTR_FUN_14aba4120;
        if (puVar7 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        puVar7[0xb] = param_5;
        plVar4 = (longlong *)*param_16;
        *param_16 = (longlong)puVar8;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      else {
        *(undefined8 *)(*param_16 + 0x38) = param_5;
      }
      lVar10 = *param_16;
      puVar7 = &local_50;
LAB_147e56151:
      FUN_144be3ae0(param_9,puVar7,lVar10,param_7);
      uVar9 = *(undefined2 *)puVar7;
      *param_11 = uVar9;
      goto LAB_147e56172;
    }
    local_50 = 0x70;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkReferencedTask");
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = &PTR_FUN_14aba3fd0;
    puVar7[4] = &PTR_FUN_14aba3ff0;
    puVar7[5] = param_8;
    puVar7[6] = local_70;
    puVar7[7] = param_3;
    puVar7[8] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar6);
    }
    puVar7[9] = param_12;
    puVar7[10] = param_13;
    *puVar7 = &PTR_FUN_14aba3f80;
    puVar7[4] = &PTR_FUN_14aba3fa0;
    puVar7[0xb] = param_5;
    *(undefined4 *)(puVar7 + 0xc) = param_6;
    FUN_144be3b70(param_9,&local_52,puVar7,param_7);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
    }
    uVar9 = local_52;
    iVar5 = *(int *)(param_9 + 0x330);
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
      FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
      iVar5 = *(int *)(param_9 + 0x330);
    }
    lVar10 = *(longlong *)(param_9 + 0x328);
    *(int *)(param_9 + 0x330) = iVar1;
    *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = param_1;
    *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
    local_50 = 0x60;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkReferencedTask");
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = &PTR_FUN_14aba3fd0;
    puVar7[4] = &PTR_FUN_14aba3ff0;
    puVar7[5] = param_8;
    puVar7[6] = local_70;
    puVar7[7] = param_3;
    puVar7[8] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar6);
    }
    puVar7[9] = param_12;
    puVar7[10] = param_13;
    *puVar7 = &PTR_FUN_14aba4070;
    puVar7[4] = &PTR_FUN_14aba4090;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = param_6;
    FUN_144be3b70(param_9,&local_50,puVar7,param_7);
    *param_10 = (undefined2)local_50;
    uVar9 = (undefined2)local_50;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
      uVar9 = *param_10;
    }
    iVar5 = *(int *)(param_9 + 0x330);
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
      FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
      iVar5 = *(int *)(param_9 + 0x330);
    }
    lVar10 = *(longlong *)(param_9 + 0x328);
    *(int *)(param_9 + 0x330) = iVar1;
    *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = local_52;
    *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
    local_50 = 0x70;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_50,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkReferencedTask");
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 1;
    *puVar7 = &PTR_FUN_14aba3fd0;
    puVar7[4] = &PTR_FUN_14aba3ff0;
    puVar7[5] = param_8;
    puVar7[6] = local_70;
    puVar7[7] = param_3;
    puVar7[8] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_144b3d910(puVar6);
    }
    puVar7[9] = param_12;
    puVar7[10] = param_13;
    *puVar7 = &PTR_FUN_14aba4100;
    puVar7[4] = &PTR_FUN_14aba4120;
    puVar7[0xb] = param_5;
    puVar8 = &local_50;
  }
  FUN_144be3b70(param_9,puVar8,puVar7,param_7);
  uVar9 = *(undefined2 *)puVar8;
  *param_11 = uVar9;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar7);
    uVar9 = *param_11;
  }
LAB_147e56172:
  uVar2 = *param_10;
  iVar5 = *(int *)(param_9 + 0x330);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(param_9 + 0x334) & 0x7fffffff) <= iVar5) {
    FUN_141807bca(param_9 + 0x328,&PTR_vftable_14c6e47a0,iVar1);
    iVar5 = *(int *)(param_9 + 0x330);
  }
  lVar10 = *(longlong *)(param_9 + 0x328);
  *(int *)(param_9 + 0x330) = iVar1;
  *(undefined2 *)(lVar10 + (longlong)iVar5 * 4) = uVar2;
  *(undefined2 *)(lVar10 + 2 + (longlong)iVar5 * 4) = uVar9;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e568f0 FUN_147e568f0 body=322 status=ok
// SIG undefined FUN_147e568f0(void)

undefined8 * FUN_147e568f0(undefined8 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_14aba39b0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = &PTR_FUN_14aba39d0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  *(undefined4 *)((longlong)param_1 + 0x75) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x317) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c4) = 0;
  param_1[0x319] = param_1 + 0x31b;
  param_1[0x31a] = 0x8000001000000000;
  param_1[0x333] = param_1 + 0x335;
  param_1[0x334] = 0x8000001000000000;
  param_1[0x33d] = 0;
  param_1[0x33e] = param_1 + 0x340;
  param_1[0x33f] = 0x8000002000000000;
  *(undefined1 *)(param_1 + 0x360) = 0;
  param_1[0x361] = 0;
  *(undefined4 *)(param_1 + 0x362) = 0;
  *(undefined4 *)(param_1 + 0x366) = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  FUN_147e56b1c(param_1 + 0x364);
  param_1[0x367] = 0;
  param_1[0x368] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x369) = 0;
  return param_1;
}



// FUNCTION 147e56a32 FUN_147e56a32 body=44 status=ok
// SIG undefined FUN_147e56a32(void)

undefined8 FUN_147e56a32(undefined8 param_1,int param_2)

{
  FUN_147e56d14();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e56a5e FUN_147e56a5e body=44 status=ok
// SIG undefined FUN_147e56a5e(void)

undefined8 FUN_147e56a5e(undefined8 param_1,int param_2)

{
  FUN_147e56a8a();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e56a8a FUN_147e56a8a body=146 status=ok
// SIG undefined FUN_147e56a8a(void)

void FUN_147e56a8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba39d0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],(longlong)*(int *)((longlong)param_1 + 0x44) << 5);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],(longlong)*(int *)((longlong)param_1 + 0x34) << 4);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  return;
}



// FUNCTION 147e56b1c FUN_147e56b1c body=161 status=ok
// SIG undefined FUN_147e56b1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e56b1c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_147e56bbe(param_1,2);
  uVar4 = uRam000000014c6dae88;
  uVar3 = _DAT_14c6dae80;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)param_1) = _DAT_14c6dae80;
  ((undefined8 *)(lVar2 + (longlong)param_1))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + (longlong)param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar2 + 0x40 + (longlong)param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar6 = uRam000000014c6daed8;
  uVar5 = _DAT_14c6daed0;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + (longlong)param_1);
  *puVar1 = _DAT_14c6daed0;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x30 + (longlong)param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x50 + (longlong)param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x60 + (longlong)param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + 0x70 + (longlong)param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = *param_1;
  puVar1 = (undefined8 *)(lVar2 + 0x80 + (longlong)param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar2 + 0xa0 + (longlong)param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar2 + 0xc0 + (longlong)param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar2 + 0x90 + (longlong)param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0xb0 + (longlong)param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0xd0 + (longlong)param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0xe0 + (longlong)param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + 0xf0 + (longlong)param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}



// FUNCTION 147e56bbe FUN_147e56bbe body=79 status=ok
// SIG undefined FUN_147e56bbe(void)

void FUN_147e56bbe(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != param_2) {
    uVar3 = *(uint *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0xc) == 0) {
      *(uint *)(param_1 + 0xc) = uVar1;
      uVar3 = uVar1;
    }
    if ((int)(uVar3 & 0x7fffffff) < (int)param_2 && (int)uVar1 < (int)param_2) {
      uVar2 = FUN_147e56cbc(param_2);
      FUN_147e56c0e(param_1,uVar2);
    }
    *(uint *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 147e56c0e FUN_147e56c0e body=172 status=ok
// SIG undefined FUN_147e56c0e(void)

void FUN_147e56c0e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong)(int)param_2 << 7;
  lVar1 = (*DAT_14c787670)(0,&local_28,0);
  lVar2 = *param_1 + (longlong)param_1;
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  FUN_144b3d470(lVar1,lVar2,(longlong)(int)param_1[1] << 7);
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    lVar2 = *param_1 + (longlong)param_1;
    if (*param_1 == 0) {
      lVar2 = 0;
    }
    (*DAT_14c787678)(0,lVar2,0);
  }
  lVar2 = lVar1 - (longlong)param_1;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar2;
  *(uint *)((longlong)param_1 + 0xc) = param_2 | 0x80000000;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e56cbc FUN_147e56cbc body=88 status=ok
// SIG undefined FUN_147e56cbc(void)

int FUN_147e56cbc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1U >> 0x10 | param_1 - 1U;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  iVar2 = (uVar1 >> 1 | uVar1) + 1;
  if (iVar2 < param_1) {
    FUN_144bfc170(0x5d9e6698,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                  ,0x1f0,"Capacity reservation overflow");
  }
  return iVar2;
}



// FUNCTION 147e56d14 FUN_147e56d14 body=373 status=ok
// SIG undefined FUN_147e56d14(void)

void FUN_147e56d14(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aba39b0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1b44)) && (param_1[0x367] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x367],
               (longlong)*(int *)((longlong)param_1 + 0x1b44) << 2);
  }
  param_1[0x367] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b44) = 0x80000000;
  if (*(int *)((longlong)param_1 + 0x1b2c) < 0) {
    lVar1 = (longlong)param_1 + param_1[0x364] + 0x1b20;
    if (param_1[0x364] == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_147e56e8a(param_1 + 0x16);
  FUN_147e56a8a(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],(longlong)*(int *)((longlong)param_1 + 0x54) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],(longlong)*(int *)((longlong)param_1 + 0x44) << 2);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],(longlong)*(int *)((longlong)param_1 + 0x34) << 5);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e56e8a FUN_147e56e8a body=260 status=ok
// SIG undefined FUN_147e56e8a(void)

void FUN_147e56e8a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1948) = 0;
  if (*(longlong *)(param_1 + 0x1940) != 0 && -1 < (longlong)*(int *)(param_1 + 0x194c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1940),
               (longlong)*(int *)(param_1 + 0x194c) << 3);
  }
  *(undefined8 *)(param_1 + 0x1940) = 0;
  *(undefined4 *)(param_1 + 0x194c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18f0) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x18f4)) && (*(longlong *)(param_1 + 0x18e8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18e8),
               (longlong)*(int *)(param_1 + 0x18f4) << 2);
  }
  *(undefined8 *)(param_1 + 0x18e8) = 0;
  *(undefined4 *)(param_1 + 0x18f4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1820) = 0;
  if (*(longlong *)(param_1 + 0x1818) != 0 && -1 < (longlong)*(int *)(param_1 + 0x1824)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1818),
               (longlong)*(int *)(param_1 + 0x1824) * 0xc);
  }
  *(undefined8 *)(param_1 + 0x1818) = 0;
  *(undefined4 *)(param_1 + 0x1824) = 0x80000000;
  return;
}



// FUNCTION 147e56f8e FUN_147e56f8e body=90 status=ok
// SIG undefined FUN_147e56f8e(void)

undefined8 * FUN_147e56f8e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_14aba3a90;
  param_1[4] = &PTR_FUN_14aba3ab0;
  lVar1 = *param_2;
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
    if (*param_2 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 147e56fe8 FUN_147e56fe8 body=98 status=ok
// SIG undefined FUN_147e56fe8(void)

undefined8 * FUN_147e56fe8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba3a90;
  param_1[4] = &PTR_FUN_14aba3ab0;
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e5705c FUN_147e5705c body=652 status=ok
// SIG undefined FUN_147e5705c(void)

undefined8 * FUN_147e5705c(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_14aba3b90;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  FUN_147e4cc08(param_1 + 10);
  param_1[0x26] = 0;
  param_1[0x27] = 0x8000000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x8000000000000000;
  param_1[0x2a] = &PTR_FUN_14aba39d0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x8000000000000000;
  *(undefined4 *)((longlong)param_1 + 0x16d) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x8000000000000000;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x335) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19b4) = 0;
  param_1[0x337] = param_1 + 0x339;
  param_1[0x338] = 0x8000001000000000;
  param_1[0x351] = param_1 + 0x353;
  param_1[0x352] = 0x8000001000000000;
  param_1[0x35b] = 0;
  param_1[0x35c] = param_1 + 0x35e;
  param_1[0x35d] = 0x8000002000000000;
  *(undefined1 *)(param_1 + 0x37e) = 0;
  param_1[0x37f] = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  FUN_147e56b1c(param_1 + 0x382);
  param_1[0x385] = 0;
  param_1[0x386] = 0x8000000000000000;
  param_1[0x387] = 0;
  param_1[0x388] = 0x8000000000000000;
  param_1[0x389] = 0;
  param_1[0x38a] = 0x8000000000000000;
  FUN_147e572e8(param_1 + 0x38c);
  FUN_147e572e8(param_1 + 0x842);
  param_1[0xcf9] = 0;
  param_1[0xcfa] = 0x8000000000000000;
  param_1[0xcfb] = 0;
  param_1[0xcfc] = 0x8000000000000000;
  param_1[0xcfd] = 0;
  param_1[0xcfe] = 0x8000000000000000;
  param_1[0xcff] = 0;
  param_1[0xd00] = 0x8000000000000000;
  param_1[0xd01] = 0;
  param_1[0xd02] = 0x8000000000000000;
  param_1[0xd03] = 0;
  param_1[0xd04] = 0x8000000000000000;
  param_1[0xd0e] = param_1 + 0xd10;
  param_1[0xd0f] = 0x8000001100000000;
  param_1[0xd98] = param_1 + 0xd9a;
  param_1[0xd99] = 0x8000001100000000;
  param_1[0xe2a] = param_1 + 0xe2c;
  param_1[0xe2b] = 0x8000001100000000;
  param_1[0xeb4] = param_1 + 0xeb6;
  param_1[0xeb5] = 0x8000001100000000;
  param_1[0xf46] = param_1 + 0xf48;
  param_1[0xf47] = 0x8000001100000000;
  param_1[0xfd0] = param_1 + 0xfd2;
  param_1[0xfd1] = 0x8000001100000000;
  FUN_144bdde80(param_1 + 0x105a);
  return param_1;
}



// FUNCTION 147e572e8 FUN_147e572e8 body=493 status=ok
// SIG undefined FUN_147e572e8(void)

longlong FUN_147e572e8(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x8000000000000000;
  FUN_147e4cc08(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x8000000000000000;
  *(longlong *)(param_1 + 0x1d0) = param_1 + 0x1e0;
  *(undefined8 *)(param_1 + 0x1d8) = 0x8000001100000000;
  *(longlong *)(param_1 + 0x620) = param_1 + 0x630;
  *(undefined8 *)(param_1 + 0x628) = 0x8000001100000000;
  FUN_144bdde80(param_1 + 0xa70);
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0xaa0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  *(undefined8 *)(param_1 + 0xab0) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x22c8) = 0;
  *(undefined4 *)(param_1 + 0x22d4) = 0;
  *(longlong *)(param_1 + 0x22d8) = param_1 + 0x22e8;
  *(undefined8 *)(param_1 + 0x22e0) = 0x8000001000000000;
  *(longlong *)(param_1 + 0x23a8) = param_1 + 0x23b8;
  *(undefined8 *)(param_1 + 0x23b0) = 0x8000001000000000;
  *(undefined8 *)(param_1 + 0x23f8) = 0;
  *(longlong *)(param_1 + 0x2400) = param_1 + 0x2410;
  *(undefined8 *)(param_1 + 0x2408) = 0x8000002000000000;
  *(undefined1 *)(param_1 + 0x2510) = 0;
  *(undefined8 *)(param_1 + 0x2518) = 0;
  *(undefined4 *)(param_1 + 0x2520) = 0;
  *(undefined ***)(param_1 + 0x2530) = &PTR_FUN_14aba39d0;
  *(undefined8 *)(param_1 + 0x2538) = 0;
  *(undefined8 *)(param_1 + 0x2540) = 0;
  *(undefined4 *)(param_1 + 0x2548) = 1;
  *(undefined1 *)(param_1 + 0x254c) = 1;
  *(undefined8 *)(param_1 + 0x2558) = 0;
  *(undefined4 *)(param_1 + 0x2560) = 0;
  *(undefined4 *)(param_1 + 0x254d) = 0;
  *(undefined4 *)(param_1 + 0x2564) = 0x80000000;
  *(undefined8 *)(param_1 + 0x2568) = 0;
  *(undefined8 *)(param_1 + 0x2570) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x2584) = 0;
  *(undefined8 *)(param_1 + 0x258c) = 0;
  *(undefined8 *)(param_1 + 0x2578) = 0;
  *(undefined8 *)(param_1 + 0x2580) = 0;
  FUN_147e56b1c(param_1 + 0x2580);
  *(undefined4 *)(param_1 + 0x25a8) = 0;
  *(undefined8 *)(param_1 + 0x2598) = 0;
  *(undefined8 *)(param_1 + 0x25a0) = 0;
  FUN_147e56b1c(param_1 + 0x2598);
  return param_1;
}



// FUNCTION 147e574d6 FUN_147e574d6 body=44 status=ok
// SIG undefined FUN_147e574d6(void)

undefined8 FUN_147e574d6(undefined8 param_1,int param_2)

{
  FUN_147e57502();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e57502 FUN_147e57502 body=898 status=ok
// SIG undefined FUN_147e57502(void)

void FUN_147e57502(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aba3b90;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x105a));
  FUN_14006c6ec(param_1 + 0xf3e);
  FUN_14006c6ec(param_1 + 0xe22);
  FUN_14006c6ec(param_1 + 0xd06);
  *(undefined4 *)(param_1 + 0xd04) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x6824)) && (param_1[0xd03] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd03],
               (longlong)*(int *)((longlong)param_1 + 0x6824) * 0x220);
  }
  param_1[0xd03] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6824) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd02) = 0;
  if (param_1[0xd01] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x6814)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd01],
               (longlong)*(int *)((longlong)param_1 + 0x6814) << 3);
  }
  param_1[0xd01] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6814) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd00) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x6804)) && (param_1[0xcff] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xcff],
               (longlong)*(int *)((longlong)param_1 + 0x6804) << 2);
  }
  param_1[0xcff] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6804) = 0x80000000;
  FUN_147e57884(param_1 + 0xcfb);
  *(undefined4 *)(param_1 + 0xcfa) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x67d4)) && (param_1[0xcf9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xcf9],
               (longlong)*(int *)((longlong)param_1 + 0x67d4) << 2);
  }
  param_1[0xcf9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x67d4) = 0x80000000;
  FUN_147e57910(param_1 + 0x842);
  FUN_147e57910(param_1 + 0x38c);
  *(undefined4 *)(param_1 + 0x38a) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c54)) && (param_1[0x389] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x389],
               (longlong)*(int *)((longlong)param_1 + 0x1c54) << 2);
  }
  param_1[0x389] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x388) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c44)) && (param_1[0x387] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x387],
               (longlong)*(int *)((longlong)param_1 + 0x1c44) << 2);
  }
  param_1[0x387] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x386) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c34)) && (param_1[0x385] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x385],
               (longlong)*(int *)((longlong)param_1 + 0x1c34) << 2);
  }
  param_1[0x385] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c34) = 0x80000000;
  if (*(int *)((longlong)param_1 + 0x1c1c) < 0) {
    lVar1 = (longlong)param_1 + param_1[0x382] + 0x1c10;
    if (param_1[0x382] == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_147e56e8a(param_1 + 0x34);
  FUN_147e56a8a(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x14c)) && (param_1[0x28] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x28],
               (longlong)*(int *)((longlong)param_1 + 0x14c) << 4);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x26],
               (longlong)*(int *)((longlong)param_1 + 0x13c) << 5);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  FUN_147e4ccc0(param_1 + 10);
  FUN_147e57b84(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e57884 FUN_147e57884 body=140 status=ok
// SIG undefined FUN_147e57884(void)

void FUN_147e57884(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_1[2] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e57910 FUN_147e57910 body=628 status=ok
// SIG undefined FUN_147e57910(void)

void FUN_147e57910(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x25a4) < 0) {
    lVar1 = *(longlong *)(param_1 + 0x2598) + param_1 + 0x2598;
    if (*(longlong *)(param_1 + 0x2598) == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
  if (*(int *)(param_1 + 0x258c) < 0) {
    lVar1 = *(longlong *)(param_1 + 0x2580) + param_1 + 0x2580;
    if (*(longlong *)(param_1 + 0x2580) == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_147e56a8a(param_1 + 0x2530);
  FUN_147e56e8a(param_1 + 0xac0);
  *(undefined4 *)(param_1 + 0xab0) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0xab4)) && (*(longlong *)(param_1 + 0xaa8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xaa8),
               (longlong)*(int *)(param_1 + 0xab4) << 4);
  }
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  *(undefined4 *)(param_1 + 0xab4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0xaa4)) && (*(longlong *)(param_1 + 0xa98) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xa98),
               (longlong)*(int *)(param_1 + 0xaa4) << 5);
  }
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined4 *)(param_1 + 0xaa4) = 0x80000000;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa70));
  FUN_14006c6ec(param_1 + 400);
  *(undefined4 *)(param_1 + 0x178) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x17c)) && (*(longlong *)(param_1 + 0x170) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x170),
               (longlong)*(int *)(param_1 + 0x17c) << 2);
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x16c)) && (*(longlong *)(param_1 + 0x160) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x160),
               (longlong)*(int *)(param_1 + 0x16c) << 2);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x154)) && (*(longlong *)(param_1 + 0x148) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x148),
               (longlong)*(int *)(param_1 + 0x154) << 2);
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0x80000000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x13c)) && (*(longlong *)(param_1 + 0x130) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x130),
               (longlong)*(int *)(param_1 + 0x13c) << 2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  FUN_147e4ccc0(param_1 + 0x50);
  FUN_147e57b84(param_1 + 0x18);
  return;
}



// FUNCTION 147e57b84 FUN_147e57b84 body=215 status=ok
// SIG undefined FUN_147e57b84(void)

void FUN_147e57b84(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[4] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x2c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],(longlong)*(int *)((longlong)param_1 + 0x2c) * 0x70
              );
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_1[2] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e57c5c FUN_147e57c5c body=140 status=ok
// SIG undefined FUN_147e57c5c(void)

longlong * FUN_147e57c5c(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_147e57e02(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}


