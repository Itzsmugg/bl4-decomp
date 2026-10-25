// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498e35b6 Unwind@1498e35b6 body=32 status=ok
// SIG undefined Unwind@1498e35b6(void)

void Unwind_1498e35b6(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e35d6 FUN_1498e35d6 body=76 status=ok
// SIG undefined FUN_1498e35d6(void)

void * FUN_1498e35d6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498e3622 Unwind@1498e3622 body=32 status=ok
// SIG undefined Unwind@1498e3622(void)

void Unwind_1498e3622(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e3642 FUN_1498e3642 body=333 status=ok
// SIG undefined FUN_1498e3642(void)

/* WARNING: Removing unreachable block (ram,0x0001498e36f5) */
/* WARNING: Removing unreachable block (ram,0x0001498e3719) */
/* WARNING: Removing unreachable block (ram,0x0001498e3762) */
/* WARNING: Removing unreachable block (ram,0x0001498e3732) */
/* WARNING: Removing unreachable block (ram,0x0001498e3742) */
/* WARNING: Removing unreachable block (ram,0x0001498e3768) */
/* WARNING: Removing unreachable block (ram,0x0001498e3771) */
/* WARNING: Removing unreachable block (ram,0x0001498e3777) */
/* WARNING: Removing unreachable block (ram,0x0001498e3784) */

void FUN_1498e3642(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *local_28 [2];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1498e233c(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  local_28[0] = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if ((puVar1 == (undefined8 *)0x0) ||
     ((**(code **)*puVar1)(puVar1,&DAT_14ab40940,local_28), local_28[0] == (longlong *)0x0)) {
    *(undefined2 *)(param_1 + 0x81) = 0;
  }
  else {
    iVar2 = (**(code **)(*local_28[0] + 0x40))();
    if (iVar2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0xe0))
                (*(longlong **)(param_1 + 0x68),0,&DAT_14ab40910);
    }
    *(undefined2 *)(param_1 + 0x81) = 0;
    if (local_28[0] != (longlong *)0x0) {
      (**(code **)(*local_28[0] + 0x10))();
    }
  }
  return;
}



// FUNCTION 1498e3790 Unwind@1498e3790 body=20 status=ok
// SIG undefined Unwind@1498e3790(void)

void Unwind_1498e3790(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e37a6 Unwind@1498e37a6 body=38 status=ok
// SIG undefined Unwind@1498e37a6(void)

void Unwind_1498e37a6(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 1498e37cc Unwind@1498e37cc body=20 status=ok
// SIG undefined Unwind@1498e37cc(void)

void Unwind_1498e37cc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e37e2 Unwind@1498e37e2 body=38 status=ok
// SIG undefined Unwind@1498e37e2(void)

void Unwind_1498e37e2(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 1498e3808 Unwind@1498e3808 body=20 status=ok
// SIG undefined Unwind@1498e3808(void)

void Unwind_1498e3808(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e381e Unwind@1498e381e body=38 status=ok
// SIG undefined Unwind@1498e381e(void)

void Unwind_1498e381e(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  return;
}



// FUNCTION 1498e3844 FUN_1498e3844 body=35 status=ok
// SIG undefined FUN_1498e3844(void)

void FUN_1498e3844(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1498e233c(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1498e3868 FUN_1498e3868 body=44 status=ok
// SIG undefined FUN_1498e3868(void)

void FUN_1498e3868(longlong *param_1)

{
  FUN_1498eafe5(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498e3894 FUN_1498e3894 body=110 status=ok
// SIG undefined FUN_1498e3894(void)

undefined4
FUN_1498e3894(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  local_28 = param_4;
  local_24 = param_3;
  local_20 = param_2;
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3,local_20,&local_24,&local_28,&stack0x00000028);
  if ((longlong *)*local_20 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_20 + 0x10))();
  }
  return uVar2;
}



// FUNCTION 1498e3902 Unwind@1498e3902 body=41 status=ok
// SIG undefined Unwind@1498e3902(void)

void Unwind_1498e3902(undefined8 param_1,longlong param_2)

{
  if ((longlong *)**(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(*(longlong *)**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 1498e392c Unwind@1498e392c body=20 status=ok
// SIG undefined Unwind@1498e392c(void)

void Unwind_1498e392c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e3942 FUN_1498e3942 body=83 status=ok
// SIG undefined FUN_1498e3942(void)

longlong FUN_1498e3942(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1498e81a8();
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x48);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_38 = (undefined4)uVar1;
  uStack_34 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_30 = (undefined4)lVar2;
  uStack_2c = (undefined4)((ulonglong)lVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x40) = local_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_34;
  *(undefined4 *)(param_1 + 0x48) = uStack_30;
  *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
  FUN_1498ddd62();
  return param_1;
}



// FUNCTION 1498e3996 FUN_1498e3996 body=146 status=ok
// SIG undefined FUN_1498e3996(void)

void FUN_1498e3996(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_30;
  LPCRITICAL_SECTION local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(local_28);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    local_30 = 0;
    iVar1 = FUN_1498e3894(param_2,&local_30,0,0,*(undefined8 *)(param_2 + 0x40));
    if (iVar1 == 1) {
      FUN_1498e3942(param_1 + 0x120,param_2);
    }
  }
  else {
    FUN_1498e3a4c(param_1 + 0x108,param_2);
  }
  LeaveCriticalSection(local_28);
  return;
}



// FUNCTION 1498e3a28 Unwind@1498e3a28 body=35 status=ok
// SIG undefined Unwind@1498e3a28(void)

void Unwind_1498e3a28(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e3a4c FUN_1498e3a4c body=144 status=ok
// SIG undefined FUN_1498e3a4c(void)

void FUN_1498e3a4c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1498eb092(param_1,(ulonglong)uVar1);
  }
  memmove((void *)(*param_1 + 0x50),(void *)*param_1,(ulonglong)uVar1 * 0x50);
  param_1 = (longlong *)*param_1;
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  lVar2 = param_2[4];
  lVar3 = param_2[5];
  lVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar4;
  param_1[4] = lVar2;
  param_1[5] = lVar3;
  if (*param_1 != 0) {
    *param_2 = 0;
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 1498e3adc FUN_1498e3adc body=220 status=ok
// SIG undefined FUN_1498e3adc(void)

void FUN_1498e3adc(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *local_58;
  LPCRITICAL_SECTION local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_50 = (LPCRITICAL_SECTION)(param_1 + 0x18);
  local_48 = param_2;
  EnterCriticalSection(local_50);
  plVar1 = (longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) != 0) goto LAB_1498e3b46;
  do {
    if (*(int *)(param_1 + 0x110) == 0) break;
    FUN_1498e3942(plVar1,*(undefined8 *)(param_1 + 0x108));
    FUN_1498e3c1a((undefined8 *)(param_1 + 0x108));
LAB_1498e3b46:
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    local_58 = (longlong *)*local_48;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    iVar3 = FUN_1498e3894(plVar1,&local_58,param_3,param_4,uVar2);
    if (iVar3 == 0) {
      FUN_1498e3c64(plVar1);
    }
  } while (*plVar1 == 0);
  LeaveCriticalSection(local_50);
  if ((longlong *)*local_48 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_48 + 0x10))();
  }
  return;
}



// FUNCTION 1498e3bb8 Unwind@1498e3bb8 body=67 status=ok
// SIG undefined Unwind@1498e3bb8(void)

void Unwind_1498e3bb8(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x38));
  if ((longlong *)**(longlong **)(param_2 + 0x40) != (longlong *)0x0) {
    (**(code **)(*(longlong *)**(longlong **)(param_2 + 0x40) + 0x10))();
  }
  return;
}



// FUNCTION 1498e3bfc Unwind@1498e3bfc body=28 status=ok
// SIG undefined Unwind@1498e3bfc(void)

void Unwind_1498e3bfc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e3c1a FUN_1498e3c1a body=74 status=ok
// SIG undefined FUN_1498e3c1a(void)

void FUN_1498e3c1a(undefined8 *param_1)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)*param_1;
  FUN_1498ddd06(_Dst);
  iVar1 = 0;
  if (*(int *)(param_1 + 1) + -1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x50),(longlong)(*(int *)(param_1 + 1) + -1) * 0x50);
    iVar1 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_1498eb126(param_1);
  return;
}



// FUNCTION 1498e3c64 FUN_1498e3c64 body=107 status=ok
// SIG undefined FUN_1498e3c64(void)

void FUN_1498e3c64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1498e82a6();
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
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
  FUN_1498ddd62(&local_38);
  return;
}



// FUNCTION 1498e3cd0 Unwind@1498e3cd0 body=34 status=ok
// SIG undefined Unwind@1498e3cd0(void)

void Unwind_1498e3cd0(undefined8 param_1,longlong param_2)

{
  FUN_1498ddd62(param_2 + 0x20);
  return;
}



// FUNCTION 1498e3cf2 FUN_1498e3cf2 body=85 status=ok
// SIG undefined FUN_1498e3cf2(void)

void FUN_1498e3cf2(longlong param_1)

{
  FUN_1498eafe5(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_1498eb1d4(param_1 + 0x108);
  }
  FUN_1498e3c64(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x170) = 0;
  return;
}



// FUNCTION 1498e3d48 FUN_1498e3d48 body=65 status=ok
// SIG undefined FUN_1498e3d48(void)

void FUN_1498e3d48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e3d8a Unwind@1498e3d8a body=20 status=ok
// SIG undefined Unwind@1498e3d8a(void)

void Unwind_1498e3d8a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e3da0 FUN_1498e3da0 body=257 status=ok
// SIG undefined FUN_1498e3da0(void)

ulonglong FUN_1498e3da0(longlong param_1,int param_2)

{
  uint3 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar3 = param_2 - 1;
  if (3 < uVar3) goto LAB_1498e3e3a;
  uVar1 = (uint3)(uVar3 >> 8);
  switch(uVar3) {
  case 0:
    if (*(int *)(param_1 + 0xb0) == 3) {
      uVar4 = CONCAT71((uint7)uVar1,1);
      if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
        uVar3 = 0;
        do {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),(int)uVar3 < *(int *)(param_1 + 0xd8));
          if (*(int *)(param_1 + 0xd8) <= (int)uVar3) break;
          cVar2 = FUN_1461b7448((ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0xd0),0);
          uVar3 = uVar3 + 1;
        } while (cVar2 == '\0');
      }
      goto LAB_1498e3e3c;
    }
    break;
  case 1:
    uVar3 = 0;
    uVar4 = 0;
    if (*(int *)(param_1 + 0xb0) != 3) {
      do {
        uVar4 = (ulonglong)((int)uVar3 < *(int *)(param_1 + 0xd8));
        if (*(int *)(param_1 + 0xd8) <= (int)uVar3) break;
        cVar2 = FUN_1461b7448((ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0xd0),0x3f800000);
        uVar3 = uVar3 + 1;
      } while (cVar2 == '\0');
    }
    goto LAB_1498e3e3c;
  case 2:
    uVar4 = (ulonglong)CONCAT31(uVar1,*(undefined1 *)(param_1 + 8));
    goto LAB_1498e3e3c;
  case 3:
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
      uVar4 = (ulonglong)CONCAT31(uVar1,0 < *(longlong *)(param_1 + 0x38));
      goto LAB_1498e3e3c;
    }
  }
LAB_1498e3e3a:
  uVar4 = 0;
LAB_1498e3e3c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar4;
}



// FUNCTION 1498e3ea2 Unwind@1498e3ea2 body=46 status=ok
// SIG undefined Unwind@1498e3ea2(void)

void Unwind_1498e3ea2(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e3ed0 FUN_1498e3ed0 body=53 status=ok
// SIG undefined FUN_1498e3ed0(void)

undefined8 * FUN_1498e3ed0(longlong param_1,undefined8 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 1498e3f06 FUN_1498e3f06 body=71 status=ok
// SIG undefined FUN_1498e3f06(void)

undefined4 FUN_1498e3f06(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = 0;
  if (*(int *)(param_1 + 0xb0) == 3) {
    uVar1 = *(undefined4 *)(param_1 + 0xa8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1498e3f4e FUN_1498e3f4e body=93 status=ok
// SIG undefined FUN_1498e3f4e(void)

int FUN_1498e3f4e(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xb0) == 3) {
    if ((*(float *)(param_1 + 0xa8) == 0.0) && (iVar1 = 2, !NAN(*(float *)(param_1 + 0xa8))))
    goto LAB_1498e3f98;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xf0) != '\0') {
    iVar1 = 3;
  }
LAB_1498e3f98:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return iVar1;
}



// FUNCTION 1498e3fac FUN_1498e3fac body=46 status=ok
// SIG undefined FUN_1498e3fac(void)

undefined4 FUN_1498e3fac(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar1;
}



// FUNCTION 1498e3fda FUN_1498e3fda body=95 status=ok
// SIG undefined FUN_1498e3fda(void)

undefined8 FUN_1498e3fda(longlong param_1,undefined8 param_2,int param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_1498e4060(param_2,param_1 + (ulonglong)(param_3 != 0) * 0x10 + 0xc0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 1498e403a Unwind@1498e403a body=37 status=ok
// SIG undefined Unwind@1498e403a(void)

void Unwind_1498e403a(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e4060 FUN_1498e4060 body=106 status=ok
// SIG undefined FUN_1498e4060(void)

undefined8 * FUN_1498e4060(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147818032(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 1498e40ca Unwind@1498e40ca body=44 status=ok
// SIG undefined Unwind@1498e40ca(void)

void Unwind_1498e40ca(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e40f6 FUN_1498e40f6 body=178 status=ok
// SIG undefined FUN_1498e40f6(void)

undefined8 * FUN_1498e40f6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 local_48 [8];
  undefined8 local_40;
  int local_34;
  LPCRITICAL_SECTION local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  if (((*(char *)(param_1 + 0xbc) == '\x01') ||
      (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 == (longlong *)0x0)) ||
     (local_30 = lpCriticalSection, iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0,&local_34),
     lpCriticalSection = local_30, local_34 == 0 || iVar2 < 0)) {
    *param_2 = 0;
  }
  else {
    if (local_34 == 2) {
      local_40 = *(undefined8 *)(param_1 + 0x68);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))
                        (*(longlong **)(param_1 + 0x70),0,&local_40,local_48);
      if (iVar2 < 0) {
        local_40 = 0;
      }
    }
    *param_2 = local_40;
    lpCriticalSection = local_30;
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1498e41a8 Unwind@1498e41a8 body=37 status=ok
// SIG undefined Unwind@1498e41a8(void)

void Unwind_1498e41a8(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x38));
  return;
}



// FUNCTION 1498e41ce FUN_1498e41ce body=48 status=ok
// SIG undefined FUN_1498e41ce(void)

ulonglong FUN_1498e41ce(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  uVar1 = *(undefined1 *)(param_1 + 0xb4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}



// FUNCTION 1498e41fe FUN_1498e41fe body=65 status=ok
// SIG undefined FUN_1498e41fe(void)

void FUN_1498e41fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e4240 Unwind@1498e4240 body=20 status=ok
// SIG undefined Unwind@1498e4240(void)

void Unwind_1498e4240(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e4256 FUN_1498e4256 body=50 status=ok
// SIG undefined FUN_1498e4256(void)

undefined1 FUN_1498e4256(longlong param_1,undefined1 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0xb4) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 1;
}



// FUNCTION 1498e4288 FUN_1498e4288 body=65 status=ok
// SIG undefined FUN_1498e4288(void)

void FUN_1498e4288(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e42ca Unwind@1498e42ca body=20 status=ok
// SIG undefined Unwind@1498e42ca(void)

void Unwind_1498e42ca(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e42f6 FUN_1498e42f6 body=238 status=ok
// SIG undefined FUN_1498e42f6(void)

void FUN_1498e42f6(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_58 [44];
  float local_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 < 0) {
    if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) goto LAB_1498e43bd;
    local_28 = local_28 & 0xffffffff00000000;
    local_2c = 0.0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))();
    fVar2 = local_2c;
    if (iVar1 == 0) goto LAB_1498e4346;
    if ((*(float *)(param_1 + 0xb0) == 1.0) && (!NAN(*(float *)(param_1 + 0xb0))))
    goto LAB_1498e43bd;
    *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
    fVar2 = 1.0;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    iVar1 = (**(code **)(*param_3 + 0x120))(param_3);
    if ((iVar1 < 0) || ((short)local_28 != 4)) goto LAB_1498e43bd;
    fVar2 = (float)uStack_20;
LAB_1498e4346:
    if ((*(float *)(param_1 + 0xb0) == fVar2) && (!NAN(*(float *)(param_1 + 0xb0)) && !NAN(fVar2)))
    goto LAB_1498e43bd;
    *(float *)(param_1 + 0xb0) = fVar2;
    if ((fVar2 == 0.0) && (!NAN(fVar2))) goto LAB_1498e43bd;
  }
  *(float *)(param_1 + 0xb4) = fVar2;
LAB_1498e43bd:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498e43f8 FUN_1498e43f8 body=57 status=ok
// SIG undefined FUN_1498e43f8(void)

int FUN_1498e43f8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1 != 0 && iVar2 + -1 == 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x70))(param_1 + 8,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e4431 FUN_1498e4431 body=140 status=ok
// SIG undefined FUN_1498e4431(void)

int FUN_1498e4431(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  short local_38 [4];
  undefined8 *puStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  puStack_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar1 = (**(code **)(*param_1 + 0x120))(0,local_38);
  iVar2 = -0x7fff0001;
  if (local_38[0] == 0xd) {
    iVar2 = iVar1;
  }
  if (iVar1 < 0) {
    iVar2 = iVar1;
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)*puStack_30)(puStack_30,&DAT_14bef5f48,param_2);
  }
  PropVariantClear((PROPVARIANT *)local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e44be FUN_1498e44be body=183 status=ok
// SIG undefined FUN_1498e44be(void)

void FUN_1498e44be(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bef5a50;
  param_1[1] = &PTR_LAB_14bef5aa0;
  param_1[2] = &PTR_LAB_14bef5ac0;
  param_1[3] = &PTR_LAB_14bef5b20;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    param_1[0xb] = 0;
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e456e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 1498e4576 Unwind@1498e4576 body=20 status=ok
// SIG undefined Unwind@1498e4576(void)

void Unwind_1498e4576(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e458c Unwind@1498e458c body=20 status=ok
// SIG undefined Unwind@1498e458c(void)

void Unwind_1498e458c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e45a2 Unwind@1498e45a2 body=20 status=ok
// SIG undefined Unwind@1498e45a2(void)

void Unwind_1498e45a2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e45b8 Unwind@1498e45b8 body=20 status=ok
// SIG undefined Unwind@1498e45b8(void)

void Unwind_1498e45b8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e45ce Unwind@1498e45ce body=20 status=ok
// SIG undefined Unwind@1498e45ce(void)

void Unwind_1498e45ce(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e45e4 Unwind@1498e45e4 body=20 status=ok
// SIG undefined Unwind@1498e45e4(void)

void Unwind_1498e45e4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e45fa FUN_1498e45fa body=189 status=ok
// SIG undefined FUN_1498e45fa(void)

undefined4 FUN_1498e45fa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (DAT_14ca83900 == 0) {
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_1446a4ef2(*param_2,param_1);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x58);
      plVar1 = (longlong *)*param_2;
      if (plVar4 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1);
          plVar4 = *(longlong **)(param_1 + 0x58);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong *)(param_1 + 0x58) = *param_2;
      }
      uVar3 = FUN_1446a4fa2(param_1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return uVar3;
}



// FUNCTION 1498e46b8 Unwind@1498e46b8 body=55 status=ok
// SIG undefined Unwind@1498e46b8(void)

void Unwind_1498e46b8(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  if ((longlong *)**(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(*(longlong *)**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 1498e46f0 Unwind@1498e46f0 body=22 status=ok
// SIG undefined Unwind@1498e46f0(void)

void Unwind_1498e46f0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e4708 FUN_1498e4708 body=86 status=ok
// SIG undefined FUN_1498e4708(void)

undefined4 FUN_1498e4708(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    uVar1 = FUN_1446a5218();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 1498e475e Unwind@1498e475e body=35 status=ok
// SIG undefined Unwind@1498e475e(void)

void Unwind_1498e475e(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e4782 FUN_1498e4782 body=92 status=ok
// SIG undefined FUN_1498e4782(void)

undefined8 FUN_1498e4782(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    uVar1 = 0;
    FUN_1498e4808(*(longlong *)(param_1 + 0x58),param_3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 1498e47de Unwind@1498e47de body=42 status=ok
// SIG undefined Unwind@1498e47de(void)

void Unwind_1498e47de(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e4808 FUN_1498e4808 body=129 status=ok
// SIG undefined FUN_1498e4808(void)

void FUN_1498e4808(longlong param_1,float param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(float *)(param_1 + 0x78) = param_2;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    *(undefined2 *)(param_1 + 0xf1) = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x30))(param_1 + 0x10,0x130,&DAT_1499d7700,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001498e4882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1498e488a Unwind@1498e488a body=42 status=ok
// SIG undefined Unwind@1498e488a(void)

void Unwind_1498e488a(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e48b4 FUN_1498e48b4 body=86 status=ok
// SIG undefined FUN_1498e48b4(void)

undefined4 FUN_1498e48b4(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    uVar1 = FUN_1446a533c();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 1498e490a Unwind@1498e490a body=35 status=ok
// SIG undefined Unwind@1498e490a(void)

void Unwind_1498e490a(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e492e FUN_1498e492e body=86 status=ok
// SIG undefined FUN_1498e492e(void)

undefined4 FUN_1498e492e(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    uVar1 = FUN_1446a53f0();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar1;
}



// FUNCTION 1498e4984 Unwind@1498e4984 body=35 status=ok
// SIG undefined Unwind@1498e4984(void)

void Unwind_1498e4984(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e49a8 FUN_1498e49a8 body=127 status=ok
// SIG undefined FUN_1498e49a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1498e49a8(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             longlong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (_DAT_14ab40870 != *param_2) {
    uVar2 = 0xc00d36ba;
    if (*param_2 == _DAT_14bef4c00) {
      uVar2 = 0x80004002;
      if ((*param_3 == _DAT_14bef4c10) &&
         (plVar1 = *(longlong **)(param_1 + 0x58), plVar1 != (longlong *)0x0)) {
        *param_4 = (longlong)plVar1;
        (**(code **)(*plVar1 + 8))();
        uVar2 = 0;
      }
    }
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e49f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)**(undefined8 **)(param_1 + -8))(param_1 + -8,param_3,param_4);
  return uVar2;
}



// FUNCTION 1498e4a50 FUN_1498e4a50 body=113 status=ok
// SIG undefined FUN_1498e4a50(void)

undefined8 FUN_1498e4a50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x40);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xc00d36d7;
      }
      else {
        *param_2 = (longlong)plVar1;
        uVar2 = 0;
        (**(code **)(*plVar1 + 8))();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar2;
}



// FUNCTION 1498e4ac2 Unwind@1498e4ac2 body=35 status=ok
// SIG undefined Unwind@1498e4ac2(void)

void Unwind_1498e4ac2(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e4ae6 FUN_1498e4ae6 body=169 status=ok
// SIG undefined FUN_1498e4ae6(void)

undefined8 FUN_1498e4ae6(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_3 == (longlong *)0x0) {
    uVar4 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (lVar1 == 0) {
      uVar4 = 0xc00d3e85;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x40))(lVar1 + 0x10);
      uVar4 = 0xc00d36b3;
      if ((-1 < iVar2) && (param_2 == 0)) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          plVar3 = (longlong *)0x0;
        }
        *param_3 = (longlong)plVar3;
        uVar4 = 0;
        (**(code **)(*plVar3 + 8))();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar4;
}



// FUNCTION 1498e4b90 Unwind@1498e4b90 body=45 status=ok
// SIG undefined Unwind@1498e4b90(void)

void Unwind_1498e4b90(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e4bbe FUN_1498e4bbe body=117 status=ok
// SIG undefined FUN_1498e4bbe(void)

undefined8 FUN_1498e4bbe(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == (longlong *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    uVar2 = 0xc00d36bf;
    if (param_2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (lVar1 == 0) {
        uVar2 = 0xc00d3e85;
      }
      else {
        *param_3 = lVar1 + 0x10;
        uVar2 = 0;
        (**(code **)(*(longlong *)(lVar1 + 0x10) + 8))();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
  }
  return uVar2;
}



// FUNCTION 1498e4c34 Unwind@1498e4c34 body=37 status=ok
// SIG undefined Unwind@1498e4c34(void)

void Unwind_1498e4c34(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e4c5a FUN_1498e4c5a body=79 status=ok
// SIG undefined FUN_1498e4c5a(void)

undefined8 FUN_1498e4c5a(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      *param_2 = 1;
      uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar1;
}



// FUNCTION 1498e4cb0 FUN_1498e4cb0 body=137 status=ok
// SIG undefined FUN_1498e4cb0(void)

undefined8 FUN_1498e4cb0(longlong param_1)

{
  longlong *plVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1498e4d5c();
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1 + -0x10);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return 0xc00d3e85;
}



// FUNCTION 1498e4d3a Unwind@1498e4d3a body=33 status=ok
// SIG undefined Unwind@1498e4d3a(void)

void Unwind_1498e4d3a(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e4d5c FUN_1498e4d5c body=114 status=ok
// SIG undefined FUN_1498e4d5c(void)

void FUN_1498e4d5c(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))();
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e4dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1498e4dce Unwind@1498e4dce body=33 status=ok
// SIG undefined Unwind@1498e4dce(void)

void Unwind_1498e4dce(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e4df0 FUN_1498e4df0 body=102 status=ok
// SIG undefined FUN_1498e4df0(void)

undefined8 FUN_1498e4df0(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      *param_4 = *(undefined4 *)(&DAT_14bef4c20 + (ulonglong)(param_2 == 0) * 4);
      uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return uVar1;
}



// FUNCTION 1498e4e56 FUN_1498e4e56 body=79 status=ok
// SIG undefined FUN_1498e4e56(void)

undefined8 FUN_1498e4e56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar1 = 0xc00d3e85;
    }
    else {
      *param_4 = 0;
      uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return uVar1;
}



// FUNCTION 1498e4ea6 FUN_1498e4ea6 body=55 status=ok
// SIG undefined FUN_1498e4ea6(void)

undefined4 FUN_1498e4ea6(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = 0xc00d3e85;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar1;
}



// FUNCTION 1498e4ede FUN_1498e4ede body=13 status=ok
// SIG undefined FUN_1498e4ede(void)

int FUN_1498e4ede(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 1498e4f22 FUN_1498e4f22 body=49 status=ok
// SIG undefined FUN_1498e4f22(void)

int FUN_1498e4f22(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 9;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (param_1 != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*param_1 + 0x40))(param_1,1);
  }
  return iVar3;
}



// FUNCTION 1498e4f54 FUN_1498e4f54 body=50 status=ok
// SIG undefined FUN_1498e4f54(void)

int FUN_1498e4f54(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x40);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + -8);
  if (plVar3 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e4f9a FUN_1498e4f9a body=105 status=ok
// SIG undefined FUN_1498e4f9a(void)

undefined4 FUN_1498e4f9a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xc00d3e85;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3,param_4,lpCriticalSection,uVar3);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1498e5004 Unwind@1498e5004 body=41 status=ok
// SIG undefined Unwind@1498e5004(void)

void Unwind_1498e5004(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e502e FUN_1498e502e body=148 status=ok
// SIG undefined FUN_1498e502e(void)

int FUN_1498e502e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int local_3c;
  LPCRITICAL_SECTION local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    iVar2 = -0x3ff2c17b;
  }
  else {
    local_38 = lpCriticalSection;
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
    lpCriticalSection = local_38;
    if (iVar2 == 0) {
      (**(code **)(*(longlong *)*param_3 + 0x108))((longlong *)*param_3,&local_3c);
      if (local_3c == 0x131) {
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      }
      iVar2 = 0;
      lpCriticalSection = local_38;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}



// FUNCTION 1498e50c2 Unwind@1498e50c2 body=41 status=ok
// SIG undefined Unwind@1498e50c2(void)

void Unwind_1498e50c2(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e50ec FUN_1498e50ec body=212 status=ok
// SIG undefined FUN_1498e50ec(void)

int FUN_1498e50ec(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  int local_44;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    iVar2 = -0x3ff2c17b;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    plVar1 = *(longlong **)(param_1 + 0x30);
    LeaveCriticalSection(lpCriticalSection);
    local_40 = plVar1;
    iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    if (iVar2 == 0) {
      local_40 = plVar1;
      (**(code **)(*(longlong *)*param_3 + 0x108))((longlong *)*param_3,&local_44);
      if (local_44 == 0x131) {
        EnterCriticalSection(lpCriticalSection);
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  return iVar2;
}



// FUNCTION 1498e51c0 Unwind@1498e51c0 body=26 status=ok
// SIG undefined Unwind@1498e51c0(void)

void Unwind_1498e51c0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e51dc Unwind@1498e51dc body=50 status=ok
// SIG undefined Unwind@1498e51dc(void)

void Unwind_1498e51dc(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 1498e520e Unwind@1498e520e body=52 status=ok
// SIG undefined Unwind@1498e520e(void)

void Unwind_1498e520e(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1498e5242 FUN_1498e5242 body=126 status=ok
// SIG undefined FUN_1498e5242(void)

undefined4
FUN_1498e5242(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(lpCriticalSection);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xc00d3e85;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x38))
                      (plVar1,param_2,param_3,param_4,param_5,lpCriticalSection,uVar3);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1498e52c0 Unwind@1498e52c0 body=45 status=ok
// SIG undefined Unwind@1498e52c0(void)

void Unwind_1498e52c0(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e52ee FUN_1498e52ee body=113 status=ok
// SIG undefined FUN_1498e52ee(void)

undefined8 FUN_1498e52ee(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0x80004003;
  }
  else if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar2 = 0xc00d3e85;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x40);
    if (plVar1 == (longlong *)0x0) {
      uVar2 = 0xc00d36b6;
    }
    else {
      *param_2 = (longlong)plVar1;
      uVar2 = 0;
      (**(code **)(*plVar1 + 8))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return uVar2;
}



// FUNCTION 1498e5360 Unwind@1498e5360 body=35 status=ok
// SIG undefined Unwind@1498e5360(void)

void Unwind_1498e5360(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e5384 FUN_1498e5384 body=128 status=ok
// SIG undefined FUN_1498e5384(void)

undefined4 FUN_1498e5384(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 0x38) == 0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x40);
      if (plVar1 == (longlong *)0x0) {
        uVar2 = 0xc00d36b6;
      }
      else {
        uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,&DAT_1499d7cc0,param_2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar2;
}



// FUNCTION 1498e5404 Unwind@1498e5404 body=37 status=ok
// SIG undefined Unwind@1498e5404(void)

void Unwind_1498e5404(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e542a FUN_1498e542a body=325 status=ok
// SIG undefined FUN_1498e542a(void)

HRESULT FUN_1498e542a(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  IMFMediaType *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_3 == (undefined8 *)0x0) {
    iVar4 = -0x7fffbffd;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    iVar4 = -0x3ff2c17b;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      puVar5 = (undefined8 *)FUN_1498e566f(param_1 + 0x60);
      local_50 = 0;
      iVar4 = *(int *)(puVar5 + 1);
      uVar1 = *puVar5;
      local_48 = iVar4;
      if (iVar4 == 0) {
        local_44 = 0;
        iVar3 = 0;
      }
      else {
        FUN_1498eb2ee(&local_50,iVar4);
        FUN_1498eb347(local_50,uVar1,iVar4);
        iVar3 = local_48;
      }
      iVar4 = -0x3ff2c947;
      if ((-1 < (int)param_2) && ((int)param_2 < iVar3)) {
        plVar2 = *(longlong **)(local_50 + (ulonglong)param_2 * 8);
        iVar4 = -0x3ff2c94c;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2);
          local_40 = (IMFMediaType *)0x0;
          iVar4 = MFCreateMediaType(&local_40);
          if ((-1 < iVar4) && (iVar4 = (**(code **)(*plVar2 + 0x100))(plVar2,local_40), -1 < iVar4))
          {
            *param_3 = local_40;
            iVar4 = 0;
            (*local_40->lpVtbl->AddRef)(local_40);
          }
          if (local_40 != (IMFMediaType *)0x0) {
            (*local_40->lpVtbl->Release)(local_40);
          }
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      FUN_14594ecec(&local_50);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return iVar4;
}



// FUNCTION 1498e5570 Unwind@1498e5570 body=49 status=ok
// SIG undefined Unwind@1498e5570(void)

void Unwind_1498e5570(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e55a2 Unwind@1498e55a2 body=26 status=ok
// SIG undefined Unwind@1498e55a2(void)

void Unwind_1498e55a2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e55be Unwind@1498e55be body=60 status=ok
// SIG undefined Unwind@1498e55be(void)

void Unwind_1498e55be(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + 0x10))();
  }
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  return;
}



// FUNCTION 1498e55fa Unwind@1498e55fa body=26 status=ok
// SIG undefined Unwind@1498e55fa(void)

void Unwind_1498e55fa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5616 Unwind@1498e5616 body=44 status=ok
// SIG undefined Unwind@1498e5616(void)

void Unwind_1498e5616(undefined8 param_1,longlong param_2)

{
  FUN_14594ecec(param_2 + 0x38);
  return;
}



// FUNCTION 1498e5642 Unwind@1498e5642 body=45 status=ok
// SIG undefined Unwind@1498e5642(void)

void Unwind_1498e5642(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e566f FUN_1498e566f body=263 status=ok
// SIG undefined FUN_1498e566f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1498e566f(undefined1 (*param_1) [16])

{
  undefined8 *puVar1;
  
  FUN_1446a6f40();
  if (_DAT_1499d7dc0 == *param_1) {
    puVar1 = &DAT_14cc31fe8;
  }
  else if (_DAT_1499d7e30 == *param_1) {
    puVar1 = &DAT_14cc31ff8;
  }
  else if (_DAT_1499d7df0 == *param_1) {
    puVar1 = &DAT_14cc32008;
  }
  else if (_DAT_1499d7dd0 == *param_1) {
    puVar1 = &DAT_14cc32018;
  }
  else {
    puVar1 = (undefined8 *)&DAT_14cc32030;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc32040) {
      FUN_144b3d300(&DAT_14cc32040);
      if (DAT_14cc32040 == -1) {
        _DAT_14cc32030 = (undefined1  [16])0x0;
        atexit((_func_5014 *)&LAB_1446a762d);
        _Init_thread_footer(&DAT_14cc32040);
      }
    }
  }
  return puVar1;
}



// FUNCTION 1498e5776 FUN_1498e5776 body=113 status=ok
// SIG undefined FUN_1498e5776(void)

undefined8 FUN_1498e5776(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 0x38) == 0) {
      uVar2 = 0xc00d3e85;
    }
    else {
      lVar1 = FUN_1498e566f(param_1 + 0x60);
      *param_2 = *(undefined4 *)(lVar1 + 8);
      uVar2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar2;
}



// FUNCTION 1498e57e8 Unwind@1498e57e8 body=37 status=ok
// SIG undefined Unwind@1498e57e8(void)

void Unwind_1498e57e8(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 1498e580e FUN_1498e580e body=38 status=ok
// SIG undefined FUN_1498e580e(void)

undefined8 FUN_1498e580e(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1498e5854 FUN_1498e5854 body=61 status=ok
// SIG undefined FUN_1498e5854(void)

undefined8 FUN_1498e5854(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x80004003;
  }
  else if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = 0xc00d3e85;
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      plVar2 = (longlong *)0x0;
    }
    *param_2 = (longlong)plVar2;
    (**(code **)(*plVar2 + 8))();
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1498e5906 FUN_1498e5906 body=49 status=ok
// SIG undefined FUN_1498e5906(void)

int FUN_1498e5906(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 0xc;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (param_1 != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
  }
  return iVar3;
}



// FUNCTION 1498e5938 FUN_1498e5938 body=50 status=ok
// SIG undefined FUN_1498e5938(void)

int FUN_1498e5938(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + -8);
  if (plVar3 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e596a FUN_1498e596a body=113 status=ok
// SIG undefined FUN_1498e596a(void)

undefined8 * FUN_1498e596a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_1498eb382(*param_1);
  uVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar4[2] = uVar1;
  puVar4[3] = lVar2;
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bef8df0;
  puVar4[4] = uVar3;
  param_2[1] = puVar4;
  return param_2;
}



// FUNCTION 1498e59dc FUN_1498e59dc body=65 status=ok
// SIG undefined FUN_1498e59dc(void)

void FUN_1498e59dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e5a1e Unwind@1498e5a1e body=20 status=ok
// SIG undefined Unwind@1498e5a1e(void)

void Unwind_1498e5a1e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5a34 FUN_1498e5a34 body=152 status=ok
// SIG undefined FUN_1498e5a34(void)

/* WARNING: Removing unreachable block (ram,0x0001498e5aad) */
/* WARNING: Removing unreachable block (ram,0x0001498e5a9b) */
/* WARNING: Removing unreachable block (ram,0x0001498e5abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1498e5a34(void)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  cVar1 = FUN_1498e5b54();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(_DAT_00000000 + 0xb8))(0,2,0);
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),-1 < iVar2);
    if (-1 < iVar2 == (iVar2 != -0x7fffbffb)) goto LAB_1498e5a96;
  }
  uVar3 = 0;
LAB_1498e5a96:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1498e5acc Unwind@1498e5acc body=70 status=ok
// SIG undefined Unwind@1498e5acc(void)

void Unwind_1498e5acc(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))();
  }
  return;
}



// FUNCTION 1498e5b12 Unwind@1498e5b12 body=21 status=ok
// SIG undefined Unwind@1498e5b12(void)

void Unwind_1498e5b12(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5b28 Unwind@1498e5b28 body=21 status=ok
// SIG undefined Unwind@1498e5b28(void)

void Unwind_1498e5b28(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5b3e Unwind@1498e5b3e body=21 status=ok
// SIG undefined Unwind@1498e5b3e(void)

void Unwind_1498e5b3e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5b54 FUN_1498e5b54 body=884 status=ok
// SIG undefined FUN_1498e5b54(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_1498e5b54(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8 [4];
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ushort local_5a;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_5a = 0;
  local_a8 = param_2;
  local_a0 = param_3;
  local_98 = param_4;
  (**(code **)(*(longlong *)*param_1 + 0x120))();
  uVar4 = 0;
  do {
    uVar3 = (uint)local_5a;
    if (uVar3 <= uVar4) {
LAB_1498e5eaf:
      return uVar4 < uVar3;
    }
    local_50 = (longlong *)0x0;
    (**(code **)(*(longlong *)*param_1 + 0x128))((longlong *)*param_1,uVar4,&local_50);
    (**(code **)(*local_50 + 0x118))(local_50,local_b8);
    if (local_b8[0] == 2) {
      local_90 = (longlong *)0x0;
      (**(code **)(*local_50 + 0x110))(local_50,&local_90);
      if (local_90 != (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        (**(code **)*local_90)(local_90,&DAT_1499d7870,&local_58);
        if (local_58 != (longlong *)0x0) {
          local_88 = (longlong *)0x0;
          (**(code **)(*local_58 + 0x40))(local_58,&local_88);
          if (local_88 != (longlong *)0x0) {
            local_b8[1] = 0;
            local_c8 = 0x206b4fc8;
            uStack_c4 = 0x4c51fcf9;
            uStack_c0 = 0x6497e3af;
            uStack_bc = 0xa0339e36;
            iVar1 = (**(code **)(*local_88 + 0x38))(local_88,&local_c8,local_b8 + 1);
            if (iVar1 == 0) {
              local_b8[2] = 0;
              (**(code **)(*local_50 + 0x138))(local_50,local_b8 + 2);
              local_80 = (longlong *)0x0;
              local_b8[3] = 0;
              (**(code **)(*local_50 + 0x158))(local_50,0,&local_80,local_b8 + 3);
              local_68 = (longlong *)0x0;
              local_78 = (longlong *)0x0;
              (**(code **)(*local_80 + 0x110))(local_80,&local_78);
              local_70 = (longlong *)0x0;
              (**(code **)*local_78)(local_78,&DAT_14bef5d50,&local_70);
              if (local_70 != (longlong *)0x0) {
                MFGetService(local_70,&DAT_14bef5b50,&DAT_14bef5b60,&local_68);
                if (local_68 != (longlong *)0x0) {
                  if ((longlong *)*local_a8 != local_68) {
                    (**(code **)(*local_68 + 8))();
                    if ((longlong *)*local_a8 != (longlong *)0x0) {
                      (**(code **)(*(longlong *)*local_a8 + 0x10))();
                    }
                    *local_a8 = (longlong)local_68;
                  }
                  plVar2 = (longlong *)*local_a0;
                  if (plVar2 != local_50) {
                    if (local_50 != (longlong *)0x0) {
                      (**(code **)(*local_50 + 8))(local_50);
                      plVar2 = (longlong *)*local_a0;
                    }
                    if (plVar2 != (longlong *)0x0) {
                      (**(code **)(*plVar2 + 0x10))();
                    }
                    *local_a0 = local_50;
                  }
                  plVar2 = (longlong *)*local_98;
                  if (plVar2 != local_58) {
                    if (local_58 != (longlong *)0x0) {
                      (**(code **)(*local_58 + 8))(local_58);
                      plVar2 = (longlong *)*local_98;
                    }
                    if (plVar2 != (longlong *)0x0) {
                      (**(code **)(*plVar2 + 0x10))();
                    }
                    *local_98 = local_58;
                  }
                  if (local_70 != (longlong *)0x0) {
                    (**(code **)(*local_70 + 0x10))();
                  }
                  if (local_78 != (longlong *)0x0) {
                    (**(code **)(*local_78 + 0x10))();
                  }
                  if (local_68 != (longlong *)0x0) {
                    (**(code **)(*local_68 + 0x10))();
                  }
                  if (local_80 != (longlong *)0x0) {
                    (**(code **)(*local_80 + 0x10))();
                  }
                  if (local_88 != (longlong *)0x0) {
                    (**(code **)(*local_88 + 0x10))();
                  }
                  if (local_58 != (longlong *)0x0) {
                    (**(code **)(*local_58 + 0x10))();
                  }
                  if (local_90 != (longlong *)0x0) {
                    (**(code **)(*local_90 + 0x10))();
                  }
                  if (local_50 != (longlong *)0x0) {
                    (**(code **)(*local_50 + 0x10))();
                  }
                  goto LAB_1498e5eaf;
                }
                if (local_70 != (longlong *)0x0) {
                  (**(code **)(*local_70 + 0x10))();
                }
              }
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x10))();
              }
              if (local_68 != (longlong *)0x0) {
                (**(code **)(*local_68 + 0x10))();
              }
              if (local_80 != (longlong *)0x0) {
                (**(code **)(*local_80 + 0x10))();
              }
            }
            if (local_88 != (longlong *)0x0) {
              (**(code **)(*local_88 + 0x10))();
            }
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
        }
        if (local_90 != (longlong *)0x0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



// FUNCTION 1498e5ec8 Unwind@1498e5ec8 body=33 status=ok
// SIG undefined Unwind@1498e5ec8(void)

void Unwind_1498e5ec8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5eea Unwind@1498e5eea body=33 status=ok
// SIG undefined Unwind@1498e5eea(void)

void Unwind_1498e5eea(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5f0c Unwind@1498e5f0c body=33 status=ok
// SIG undefined Unwind@1498e5f0c(void)

void Unwind_1498e5f0c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5f2e Unwind@1498e5f2e body=33 status=ok
// SIG undefined Unwind@1498e5f2e(void)

void Unwind_1498e5f2e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5f50 Unwind@1498e5f50 body=33 status=ok
// SIG undefined Unwind@1498e5f50(void)

void Unwind_1498e5f50(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5f72 Unwind@1498e5f72 body=33 status=ok
// SIG undefined Unwind@1498e5f72(void)

void Unwind_1498e5f72(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5f94 Unwind@1498e5f94 body=33 status=ok
// SIG undefined Unwind@1498e5f94(void)

void Unwind_1498e5f94(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5fb6 Unwind@1498e5fb6 body=33 status=ok
// SIG undefined Unwind@1498e5fb6(void)

void Unwind_1498e5fb6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e5fd8 Unwind@1498e5fd8 body=61 status=ok
// SIG undefined Unwind@1498e5fd8(void)

void Unwind_1498e5fd8(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))();
  }
  return;
}



// FUNCTION 1498e6016 Unwind@1498e6016 body=76 status=ok
// SIG undefined Unwind@1498e6016(void)

void Unwind_1498e6016(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))();
  }
  return;
}



// FUNCTION 1498e6062 Unwind@1498e6062 body=61 status=ok
// SIG undefined Unwind@1498e6062(void)

void Unwind_1498e6062(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + 0x10))();
  }
  return;
}



// FUNCTION 1498e60a0 Unwind@1498e60a0 body=33 status=ok
// SIG undefined Unwind@1498e60a0(void)

void Unwind_1498e60a0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e60c2 Unwind@1498e60c2 body=61 status=ok
// SIG undefined Unwind@1498e60c2(void)

void Unwind_1498e60c2(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x60) + 0x10))();
  }
  return;
}



// FUNCTION 1498e6100 Unwind@1498e6100 body=33 status=ok
// SIG undefined Unwind@1498e6100(void)

void Unwind_1498e6100(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e6122 Unwind@1498e6122 body=61 status=ok
// SIG undefined Unwind@1498e6122(void)

void Unwind_1498e6122(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x90) + 0x10))();
  }
  return;
}



// FUNCTION 1498e6160 Unwind@1498e6160 body=33 status=ok
// SIG undefined Unwind@1498e6160(void)

void Unwind_1498e6160(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e6182 Unwind@1498e6182 body=61 status=ok
// SIG undefined Unwind@1498e6182(void)

void Unwind_1498e6182(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x10))();
  }
  return;
}



// FUNCTION 1498e61c0 Unwind@1498e61c0 body=33 status=ok
// SIG undefined Unwind@1498e61c0(void)

void Unwind_1498e61c0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e61e2 Unwind@1498e61e2 body=61 status=ok
// SIG undefined Unwind@1498e61e2(void)

void Unwind_1498e61e2(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + 0x10))();
  }
  return;
}



// FUNCTION 1498e6220 Unwind@1498e6220 body=33 status=ok
// SIG undefined Unwind@1498e6220(void)

void Unwind_1498e6220(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e6242 Unwind@1498e6242 body=33 status=ok
// SIG undefined Unwind@1498e6242(void)

void Unwind_1498e6242(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e6264 Unwind@1498e6264 body=33 status=ok
// SIG undefined Unwind@1498e6264(void)

void Unwind_1498e6264(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e6286 Unwind@1498e6286 body=33 status=ok
// SIG undefined Unwind@1498e6286(void)

void Unwind_1498e6286(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e62a8 FUN_1498e62a8 body=134 status=ok
// SIG undefined FUN_1498e62a8(void)

undefined8 FUN_1498e62a8(undefined8 param_1,undefined4 *param_2)

{
  FUN_140002266(param_1,L"%08x-%04x-%04x-%02x%02x%02x%02x%02x%02x%02x%02x",*param_2,
                *(undefined2 *)(param_2 + 1),*(undefined2 *)((longlong)param_2 + 6),
                *(undefined1 *)(param_2 + 2),*(undefined1 *)((longlong)param_2 + 9),
                *(undefined1 *)((longlong)param_2 + 10),*(undefined1 *)((longlong)param_2 + 0xb),
                *(undefined1 *)(param_2 + 3),*(undefined1 *)((longlong)param_2 + 0xd),
                *(undefined1 *)((longlong)param_2 + 0xe),*(undefined1 *)((longlong)param_2 + 0xf));
  return param_1;
}



// FUNCTION 1498e632e FUN_1498e632e body=202 status=ok
// SIG undefined FUN_1498e632e(void)

undefined8 FUN_1498e632e(undefined8 param_1,uint param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulonglong uVar4;
  longlong local_68 [3];
  int local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar4 = (ulonglong)param_2;
  local_68[0] = 0;
  local_68[1] = 0;
  iVar3 = 4;
  do {
    iVar1 = isprint((int)(uVar4 & 0xff));
    if (iVar1 == 0) {
      pwVar2 = L"[%d]";
    }
    else {
      pwVar2 = L"%c";
    }
    FUN_140002266(local_68 + 2,pwVar2,uVar4 & 0xff);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(local_68,local_68[2],iVar1);
    if (local_68[2] != 0) {
      FUN_1400020a8();
    }
    uVar4 = uVar4 >> 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_14020fe2a(local_68,param_1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1498e63f8 Unwind@1498e63f8 body=57 status=ok
// SIG undefined Unwind@1498e63f8(void)

void Unwind_1498e63f8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e6431 FUN_1498e6431 body=951 status=ok
// SIG undefined FUN_1498e6431(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1498e6431(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 uStack_70;
  uint local_64;
  LPVOID local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1,&DAT_14ab40880,local_b0);
  if ((iVar1 < 0) || ((bVar5 = _DAT_14ab408f0 == local_b0, !bVar5 && (_DAT_14ab40900 != local_b0))))
  {
    uVar2 = 0;
  }
  else {
    local_60 = (LPVOID)0x0;
    local_8c = 0;
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,&DAT_14ab408a0);
    if (iVar1 < 0) {
      local_78 = L"UnknownCaptureDeviceName";
      uStack_70._0_4_ = 0x18;
      local_a0 = param_4;
      local_98 = param_3;
      FUN_1446e940c(&local_58,&local_78);
      local_78 = L"WmfMedia";
      uStack_70 = CONCAT44(uStack_70._4_4_,8);
      FUN_1446e940c(&local_88,&local_78);
      FUN_140208bae(&local_78,&local_88,&local_58,L"Unknown");
      FUN_140008f88(param_2,&local_78);
      param_4 = local_a0;
      param_3 = local_98;
      if (local_78 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_78 + 0x10))();
        param_4 = local_a0;
        param_3 = local_98;
      }
    }
    else {
      FUN_140056680(&local_58,local_60);
      FUN_140233b1a(&local_78,&local_58);
      FUN_140008f88(param_2,&local_78);
      if (local_78 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_78 + 0x10))();
      }
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
      CoTaskMemFree(local_60);
    }
    if (bVar5) {
      local_64 = 0;
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_14ab408e0);
      if (-1 < iVar1) {
        if ((ulonglong)local_64 < 3) {
          pwVar3 = (wchar_t *)(&PTR_u_Console_14bef8ef0)[local_64];
        }
        else {
          pwVar3 = L"Unknown";
        }
        FUN_140056680(&local_88,pwVar3);
        FUN_140ba7826(&local_58,L"Role: ",&local_88);
        FUN_144a882a8(&local_78,&local_58,&DAT_149e01f72);
        iVar1 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_3,local_78,iVar1);
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      puVar4 = (undefined8 *)&DAT_14ab408d0;
      pwVar3 = L"audcap://";
    }
    else {
      local_58 = 0;
      iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_14ab408c0);
      if (-1 < iVar1) {
        FUN_140002266(&local_78,L"Max Buffers: %i",local_58);
        iVar1 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_3,local_78,iVar1);
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar4 = (undefined8 *)&DAT_14ab408b0;
      pwVar3 = L"vidcap://";
    }
    local_64 = 0;
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_14ab40890,&local_64);
    *(bool *)param_4 = local_64 == 0 && -1 < iVar1;
    local_78 = (wchar_t *)*puVar4;
    uStack_70 = puVar4[1];
    FUN_140056680(&local_58,pwVar3);
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_78,&local_60,&local_8c);
    if (-1 < iVar1) {
      FUN_1449b8608(&local_88,&local_58,local_60);
      if (&local_88 == param_5) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_5 != 0) {
          FUN_1400020a8();
        }
        *param_5 = local_88;
        local_88 = 0;
        *(undefined4 *)(param_5 + 1) = local_80;
        *(undefined4 *)((longlong)param_5 + 0xc) = local_7c;
      }
      CoTaskMemFree(local_60);
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1498e67e8 Unwind@1498e67e8 body=60 status=ok
// SIG undefined Unwind@1498e67e8(void)

void Unwind_1498e67e8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e6824 Unwind@1498e6824 body=60 status=ok
// SIG undefined Unwind@1498e6824(void)

void Unwind_1498e6824(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e6860 Unwind@1498e6860 body=60 status=ok
// SIG undefined Unwind@1498e6860(void)

void Unwind_1498e6860(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e689c Unwind@1498e689c body=60 status=ok
// SIG undefined Unwind@1498e689c(void)

void Unwind_1498e689c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498e68d8 Unwind@1498e68d8 body=33 status=ok
// SIG undefined Unwind@1498e68d8(void)

void Unwind_1498e68d8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e68fa Unwind@1498e68fa body=33 status=ok
// SIG undefined Unwind@1498e68fa(void)

void Unwind_1498e68fa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e691c FUN_1498e691c body=110 status=ok
// SIG undefined FUN_1498e691c(void)

undefined8 * FUN_1498e691c(undefined8 *param_1)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_149f22c90;
  FUN_140996f94(param_1,1);
  FUN_1449c2eca(param_1,0);
  return param_1;
}



// FUNCTION 1498e698a Unwind@1498e698a body=55 status=ok
// SIG undefined Unwind@1498e698a(void)

void Unwind_1498e698a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(lVar1);
  return;
}



// FUNCTION 1498e69c2 FUN_1498e69c2 body=38 status=ok
// SIG undefined FUN_1498e69c2(void)

void FUN_1498e69c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 1498e69fc FUN_1498e69fc body=38 status=ok
// SIG undefined FUN_1498e69fc(void)

undefined8 FUN_1498e69fc(undefined8 param_1,int param_2)

{
  FUN_1498dbb8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6a26 FUN_1498e6a26 body=45 status=ok
// SIG undefined FUN_1498e6a26(void)

longlong FUN_1498e6a26(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498dbb8e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6a54 FUN_1498e6a54 body=45 status=ok
// SIG undefined FUN_1498e6a54(void)

longlong FUN_1498e6a54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1498dbb8e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6a82 FUN_1498e6a82 body=123 status=ok
// SIG undefined FUN_1498e6a82(void)

void FUN_1498e6a82(undefined8 *param_1,char *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x02') {
    local_38 = 2;
    local_20 = 2;
    local_30 = 0x8000000000000000;
    local_18 = 0x8000000000000000;
  }
  else {
    local_30 = *(undefined8 *)(param_2 + 8);
    local_18 = *(undefined8 *)(param_2 + 0x18);
    local_38 = 1;
    local_20 = 0;
  }
  local_28 = 0;
  local_10 = 0;
  (**(code **)*param_1)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e6afe FUN_1498e6afe body=124 status=ok
// SIG undefined FUN_1498e6afe(void)

void FUN_1498e6afe(longlong *param_1,char *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x02') {
    local_38 = 2;
    local_20 = 2;
    local_30 = 0x8000000000000000;
    local_18 = 0x8000000000000000;
  }
  else {
    local_30 = *(undefined8 *)(param_2 + 8);
    local_18 = *(undefined8 *)(param_2 + 0x18);
    local_38 = 1;
    local_20 = 0;
  }
  local_28 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x10))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e6b7c FUN_1498e6b7c body=124 status=ok
// SIG undefined FUN_1498e6b7c(void)

void FUN_1498e6b7c(longlong *param_1,char *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x02') {
    local_38 = 2;
    local_20 = 2;
    local_30 = 0x8000000000000000;
    local_18 = 0x8000000000000000;
  }
  else {
    local_30 = *(undefined8 *)(param_2 + 8);
    local_18 = *(undefined8 *)(param_2 + 0x18);
    local_38 = 1;
    local_20 = 0;
  }
  local_28 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e6bfa FUN_1498e6bfa body=124 status=ok
// SIG undefined FUN_1498e6bfa(void)

void FUN_1498e6bfa(longlong *param_1,char *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == '\x02') {
    local_38 = 2;
    local_20 = 2;
    local_30 = 0x8000000000000000;
    local_18 = 0x8000000000000000;
  }
  else {
    local_30 = *(undefined8 *)(param_2 + 8);
    local_18 = *(undefined8 *)(param_2 + 0x18);
    local_38 = 1;
    local_20 = 0;
  }
  local_28 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x40))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e6c78 FUN_1498e6c78 body=38 status=ok
// SIG undefined FUN_1498e6c78(void)

undefined8 FUN_1498e6c78(undefined8 param_1,int param_2)

{
  FUN_1498dcce2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6c9e FUN_1498e6c9e body=45 status=ok
// SIG undefined FUN_1498e6c9e(void)

longlong FUN_1498e6c9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498dcce2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6cce FUN_1498e6cce body=38 status=ok
// SIG undefined FUN_1498e6cce(void)

undefined8 FUN_1498e6cce(undefined8 param_1,int param_2)

{
  FUN_1498e253c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6cf6 FUN_1498e6cf6 body=45 status=ok
// SIG undefined FUN_1498e6cf6(void)

longlong FUN_1498e6cf6(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1446a3446(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6d24 FUN_1498e6d24 body=38 status=ok
// SIG undefined FUN_1498e6d24(void)

undefined8 FUN_1498e6d24(undefined8 param_1,int param_2)

{
  FUN_1498e44be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6d6e FUN_1498e6d6e body=50 status=ok
// SIG undefined FUN_1498e6d6e(void)

int FUN_1498e6d6e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x38);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + -0x10);
  if (plVar3 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e6dc4 FUN_1498e6dc4 body=50 status=ok
// SIG undefined FUN_1498e6dc4(void)

int FUN_1498e6dc4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x30);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + -0x18);
  if (plVar3 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e6df6 FUN_1498e6df6 body=38 status=ok
// SIG undefined FUN_1498e6df6(void)

undefined8 FUN_1498e6df6(undefined8 param_1,int param_2)

{
  FUN_1446a5852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e6e40 FUN_1498e6e40 body=50 status=ok
// SIG undefined FUN_1498e6e40(void)

int FUN_1498e6e40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + -0x10);
  if (plVar3 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e6e72 FUN_1498e6e72 body=78 status=ok
// SIG undefined FUN_1498e6e72(void)

undefined8 * FUN_1498e6e72(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147807ed0();
  return param_1;
}



// FUNCTION 1498e6ec0 Unwind@1498e6ec0 body=52 status=ok
// SIG undefined Unwind@1498e6ec0(void)

void Unwind_1498e6ec0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(lVar1);
  return;
}



// FUNCTION 1498e6ef4 FUN_1498e6ef4 body=42 status=ok
// SIG undefined FUN_1498e6ef4(void)

void FUN_1498e6ef4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(param_1);
  return;
}



// FUNCTION 1498e6f1e FUN_1498e6f1e body=65 status=ok
// SIG undefined FUN_1498e6f1e(void)

void FUN_1498e6f1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e6f60 Unwind@1498e6f60 body=20 status=ok
// SIG undefined Unwind@1498e6f60(void)

void Unwind_1498e6f60(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e6f76 FUN_1498e6f76 body=95 status=ok
// SIG undefined FUN_1498e6f76(void)

undefined8 * FUN_1498e6f76(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_1498e6fd6(uVar1);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14bef80a0;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1498e6fd6 FUN_1498e6fd6 body=76 status=ok
// SIG undefined FUN_1498e6fd6(void)

LPCRITICAL_SECTION FUN_1498e6fd6(LPCRITICAL_SECTION param_1)

{
  undefined8 *puVar1;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[1].SpinCount = (ULONG_PTR)puVar1;
  param_1[1].LockSemaphore = puVar1;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  return param_1;
}



// FUNCTION 1498e7022 FUN_1498e7022 body=41 status=ok
// SIG undefined FUN_1498e7022(void)

void FUN_1498e7022(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1498e706a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1498e704c FUN_1498e704c body=29 status=ok
// SIG undefined FUN_1498e704c(void)

undefined8 FUN_1498e704c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e706a FUN_1498e706a body=154 status=ok
// SIG undefined FUN_1498e706a(void)

void FUN_1498e706a(LPCRITICAL_SECTION param_1)

{
  ULONG_PTR UVar1;
  longlong *plVar2;
  ULONG_PTR UVar3;
  
  FUN_1498e711a();
  while (UVar1 = *(ULONG_PTR *)param_1[1].SpinCount, UVar1 != 0) {
    plVar2 = *(longlong **)(UVar1 + 8);
    UVar3 = param_1[1].SpinCount;
    param_1[1].SpinCount = UVar1;
    *(undefined8 *)(UVar1 + 8) = 0;
    if (UVar3 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(plVar2[1] + 8))(plVar2 + 1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,1);
    }
  }
  while ((ULONG_PTR *)param_1[1].SpinCount != (ULONG_PTR *)0x0) {
    param_1[1].SpinCount = *(ULONG_PTR *)param_1[1].SpinCount;
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e70fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1498e7104 Unwind@1498e7104 body=21 status=ok
// SIG undefined Unwind@1498e7104(void)

void Unwind_1498e7104(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e711a FUN_1498e711a body=82 status=ok
// SIG undefined FUN_1498e711a(void)

void FUN_1498e711a(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  do {
    iVar2 = param_1[1].LockCount;
    do {
      if (iVar2 == 0) {
        if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498e715e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          LeaveCriticalSection(param_1);
          return;
        }
        return;
      }
      plVar1 = *(longlong **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
      iVar2 = iVar2 + -1;
      param_1[1].LockCount = iVar2;
    } while (plVar1 == (longlong *)0x0);
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
  } while( true );
}



// FUNCTION 1498e716c FUN_1498e716c body=132 status=ok
// SIG undefined FUN_1498e716c(void)

void FUN_1498e716c(longlong param_1,int param_2)

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



// FUNCTION 1498e7236 FUN_1498e7236 body=68 status=ok
// SIG undefined FUN_1498e7236(void)

undefined8 * FUN_1498e7236(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef80c0;
  param_1[1] = &PTR_LAB_14bef8110;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e728c FUN_1498e728c body=65 status=ok
// SIG undefined FUN_1498e728c(void)

void FUN_1498e728c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e72ce Unwind@1498e72ce body=20 status=ok
// SIG undefined Unwind@1498e72ce(void)

void Unwind_1498e72ce(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e72e4 FUN_1498e72e4 body=65 status=ok
// SIG undefined FUN_1498e72e4(void)

void FUN_1498e72e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e7326 Unwind@1498e7326 body=20 status=ok
// SIG undefined Unwind@1498e7326(void)

void Unwind_1498e7326(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e735c FUN_1498e735c body=49 status=ok
// SIG undefined FUN_1498e735c(void)

int FUN_1498e735c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 4;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if (param_1 != (longlong *)0x0 && iVar3 == 0) {
    (**(code **)(*param_1 + 0x58))(param_1,1);
  }
  return iVar3;
}



// FUNCTION 1498e738e FUN_1498e738e body=25 status=ok
// SIG undefined FUN_1498e738e(void)

undefined8 FUN_1498e738e(longlong param_1)

{
  FUN_1498e7468(param_1 + 8,2);
  return 0;
}



// FUNCTION 1498e73a8 FUN_1498e73a8 body=25 status=ok
// SIG undefined FUN_1498e73a8(void)

undefined8 FUN_1498e73a8(longlong param_1)

{
  FUN_1498e7468(param_1 + 8,3);
  return 0;
}



// FUNCTION 1498e73c2 FUN_1498e73c2 body=22 status=ok
// SIG undefined FUN_1498e73c2(void)

undefined8 FUN_1498e73c2(longlong param_1)

{
  FUN_1498e7468(param_1 + 8,0);
  return 0;
}



// FUNCTION 1498e73d8 FUN_1498e73d8 body=25 status=ok
// SIG undefined FUN_1498e73d8(void)

undefined8 FUN_1498e73d8(longlong param_1)

{
  FUN_1498e7468(param_1 + 8,1);
  return 0;
}



// FUNCTION 1498e73fa FUN_1498e73fa body=43 status=ok
// SIG undefined FUN_1498e73fa(void)

undefined8
FUN_1498e73fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_1498e750a(param_1 + 0x28,param_6,param_7,param_5,param_4);
  return 0;
}



// FUNCTION 1498e742a FUN_1498e742a body=61 status=ok
// SIG undefined FUN_1498e742a(void)

undefined8 * FUN_1498e742a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef8130;
  FUN_146771278(param_1 + 5);
  FUN_146771278(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e7468 FUN_1498e7468 body=162 status=ok
// SIG undefined FUN_1498e7468(void)

void FUN_1498e7468(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1498e74e6;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1498e74e6:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1498e750a FUN_1498e750a body=210 status=ok
// SIG undefined FUN_1498e750a(void)

void FUN_1498e750a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1498e75ae;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1498e75ae:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1498e75dc FUN_1498e75dc body=95 status=ok
// SIG undefined FUN_1498e75dc(void)

undefined8 * FUN_1498e75dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_1498e763c(uVar1);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14bef81c0;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1498e763c FUN_1498e763c body=76 status=ok
// SIG undefined FUN_1498e763c(void)

LPCRITICAL_SECTION FUN_1498e763c(LPCRITICAL_SECTION param_1)

{
  undefined8 *puVar1;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[1].SpinCount = (ULONG_PTR)puVar1;
  param_1[1].LockSemaphore = puVar1;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  return param_1;
}



// FUNCTION 1498e7688 FUN_1498e7688 body=41 status=ok
// SIG undefined FUN_1498e7688(void)

void FUN_1498e7688(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1498e76d0(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1498e76b2 FUN_1498e76b2 body=29 status=ok
// SIG undefined FUN_1498e76b2(void)

undefined8 FUN_1498e76b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e76d0 FUN_1498e76d0 body=157 status=ok
// SIG undefined FUN_1498e76d0(void)

void FUN_1498e76d0(LPCRITICAL_SECTION param_1)

{
  ULONG_PTR UVar1;
  longlong *plVar2;
  ULONG_PTR UVar3;
  
  FUN_1498e7784();
  while (UVar1 = *(ULONG_PTR *)param_1[1].SpinCount, UVar1 != 0) {
    plVar2 = *(longlong **)(UVar1 + 8);
    UVar3 = param_1[1].SpinCount;
    param_1[1].SpinCount = UVar1;
    *(undefined8 *)(UVar1 + 8) = 0;
    if (UVar3 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(plVar2[1] + 8))(plVar2 + 1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x128))(plVar2,1);
    }
  }
  while ((ULONG_PTR *)param_1[1].SpinCount != (ULONG_PTR *)0x0) {
    param_1[1].SpinCount = *(ULONG_PTR *)param_1[1].SpinCount;
    FUN_1400020a8();
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001498e7766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1498e776e Unwind@1498e776e body=21 status=ok
// SIG undefined Unwind@1498e776e(void)

void Unwind_1498e776e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e7784 FUN_1498e7784 body=85 status=ok
// SIG undefined FUN_1498e7784(void)

void FUN_1498e7784(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  do {
    iVar2 = param_1[1].LockCount;
    do {
      if (iVar2 == 0) {
        if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498e77cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          LeaveCriticalSection(param_1);
          return;
        }
        return;
      }
      plVar1 = *(longlong **)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 8 + -8);
      iVar2 = iVar2 + -1;
      param_1[1].LockCount = iVar2;
    } while (plVar1 == (longlong *)0x0);
    (**(code **)(*plVar1 + 0x128))(plVar1,1);
  } while( true );
}



// FUNCTION 1498e77da FUN_1498e77da body=132 status=ok
// SIG undefined FUN_1498e77da(void)

void FUN_1498e77da(longlong param_1,int param_2)

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



// FUNCTION 1498e78cc FUN_1498e78cc body=68 status=ok
// SIG undefined FUN_1498e78cc(void)

undefined8 * FUN_1498e78cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef81e0;
  param_1[1] = &PTR_LAB_14bef8310;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e791a FUN_1498e791a body=65 status=ok
// SIG undefined FUN_1498e791a(void)

void FUN_1498e791a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e795c Unwind@1498e795c body=20 status=ok
// SIG undefined Unwind@1498e795c(void)

void Unwind_1498e795c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e7972 FUN_1498e7972 body=65 status=ok
// SIG undefined FUN_1498e7972(void)

void FUN_1498e7972(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e79b4 Unwind@1498e79b4 body=20 status=ok
// SIG undefined Unwind@1498e79b4(void)

void Unwind_1498e79b4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e79ca FUN_1498e79ca body=69 status=ok
// SIG undefined FUN_1498e79ca(void)

void FUN_1498e79ca(void)

{
  FUN_1498e7a24();
  if (DAT_14cc318a8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc31888 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498e7a10 Unwind@1498e7a10 body=19 status=ok
// SIG undefined Unwind@1498e7a10(void)

void Unwind_1498e7a10(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e7a24 FUN_1498e7a24 body=105 status=ok
// SIG undefined FUN_1498e7a24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498e7a24(void)

{
  DAT_14cc31890 = 0;
  if (DAT_14cc31894 != 0) {
    FUN_144727cd0(&DAT_14cc31888,0);
  }
  _DAT_14cc318b8 = 0xffffffff;
  _DAT_14cc318b0 = 0;
  if (0x80 < DAT_14cc318b4) {
    DAT_14cc318b4 = 0x80;
    FUN_1446efbd8(&DAT_14cc31898,0);
    return;
  }
  return;
}



// FUNCTION 1498e7aae FUN_1498e7aae body=49 status=ok
// SIG undefined FUN_1498e7aae(void)

int FUN_1498e7aae(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1 != (longlong *)0x0 && iVar2 + -1 == 0) {
    (**(code **)(*param_1 + 0x18))(param_1,1);
  }
  return iVar2 + -1;
}



// FUNCTION 1498e7ae0 FUN_1498e7ae0 body=39 status=ok
// SIG undefined FUN_1498e7ae0(void)

undefined8 * FUN_1498e7ae0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef8390;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e7b08 FUN_1498e7b08 body=526 status=ok
// SIG undefined FUN_1498e7b08(void)

undefined8 * FUN_1498e7b08(undefined8 *param_1,uint param_2)

{
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = DAT_14c9c0d80;
  FUN_14741cfdf(&local_148,&DAT_14ca8cf60,&DAT_14ca8d260);
  *(float *)(param_1 + 6) = (float)local_148;
  *(float *)((longlong)param_1 + 0x34) = (float)local_140;
  *(float *)(param_1 + 7) = (float)local_138;
  *(float *)((longlong)param_1 + 0x3c) = (float)local_130;
  *(float *)(param_1 + 8) = (float)local_128;
  *(float *)((longlong)param_1 + 0x44) = (float)local_120;
  *(float *)(param_1 + 9) = (float)local_118;
  *(float *)((longlong)param_1 + 0x4c) = (float)local_110;
  *(float *)(param_1 + 10) = (float)local_108;
  *(float *)((longlong)param_1 + 0x54) = (float)local_100;
  *(float *)(param_1 + 0xb) = (float)local_f8;
  *(float *)((longlong)param_1 + 0x5c) = (float)local_f0;
  *(float *)(param_1 + 0xc) = (float)local_e8;
  *(float *)((longlong)param_1 + 100) = (float)local_e0;
  *(float *)(param_1 + 0xd) = (float)local_d8;
  *(float *)((longlong)param_1 + 0x6c) = (float)local_d0;
  *(uint *)(param_1 + 0xe) = param_2 & 0xff;
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498e7d18 FUN_1498e7d18 body=138 status=ok
// SIG undefined FUN_1498e7d18(void)

code * FUN_1498e7d18(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498e7da2;
}



// FUNCTION 1498e7da2 FUN_1498e7da2 body=138 status=ok
// SIG undefined FUN_1498e7da2(void)

code * FUN_1498e7da2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BilinearClampedSamplerUVAlpha";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cfd4dc;
}



// FUNCTION 1498e7e2c FUN_1498e7e2c body=132 status=ok
// SIG undefined FUN_1498e7e2c(void)

undefined1 * FUN_1498e7e2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureY";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1498e7eb0;
}



// FUNCTION 1498e7eb4 FUN_1498e7eb4 body=91 status=ok
// SIG undefined FUN_1498e7eb4(void)

undefined8 FUN_1498e7eb4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145cfd052();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14cc32070,1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1498e7f10 Unwind@1498e7f10 body=34 status=ok
// SIG undefined Unwind@1498e7f10(void)

void Unwind_1498e7f10(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e7f32 FUN_1498e7f32 body=91 status=ok
// SIG undefined FUN_1498e7f32(void)

undefined8 FUN_1498e7f32(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145cfd052();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14cc32070,1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1498e7f8e Unwind@1498e7f8e body=34 status=ok
// SIG undefined Unwind@1498e7f8e(void)

void Unwind_1498e7f8e(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e7fb0 FUN_1498e7fb0 body=91 status=ok
// SIG undefined FUN_1498e7fb0(void)

undefined8 FUN_1498e7fb0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145cfd052();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14cc32070,1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1498e800c Unwind@1498e800c body=34 status=ok
// SIG undefined Unwind@1498e800c(void)

void Unwind_1498e800c(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e802e FUN_1498e802e body=91 status=ok
// SIG undefined FUN_1498e802e(void)

undefined8 FUN_1498e802e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145cfd052();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14cc32070,1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1498e808a Unwind@1498e808a body=34 status=ok
// SIG undefined Unwind@1498e808a(void)

void Unwind_1498e808a(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e80ac FUN_1498e80ac body=91 status=ok
// SIG undefined FUN_1498e80ac(void)

undefined8 FUN_1498e80ac(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145cfd052();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14cc32070,1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1498e8108 Unwind@1498e8108 body=34 status=ok
// SIG undefined Unwind@1498e8108(void)

void Unwind_1498e8108(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e812a FUN_1498e812a body=91 status=ok
// SIG undefined FUN_1498e812a(void)

undefined8 FUN_1498e812a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145cfd052();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,&DAT_14cc32070,1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1498e8186 Unwind@1498e8186 body=34 status=ok
// SIG undefined Unwind@1498e8186(void)

void Unwind_1498e8186(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498e81a8 FUN_1498e81a8 body=230 status=ok
// SIG undefined FUN_1498e81a8(void)

longlong * FUN_1498e81a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
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
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  local_48 = (longlong *)0x0;
  if (lVar1 != 0) {
    plVar9 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[2];
    }
    (**(code **)*plVar9)(plVar9,&local_48);
  }
  lVar2 = *param_1;
  plVar9 = (longlong *)param_1[2];
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  lVar5 = param_1[5];
  lVar6 = param_1[6];
  lVar7 = param_1[7];
  param_1[6] = CONCAT44(uStack_24,local_28);
  param_1[7] = CONCAT44(uStack_1c,uStack_20);
  param_1[4] = CONCAT44(uStack_34,local_38);
  param_1[5] = CONCAT44(uStack_2c,uStack_30);
  param_1[2] = (longlong)local_48;
  param_1[3] = CONCAT44(uStack_3c,uStack_40);
  *param_1 = lVar1;
  param_1[1] = CONCAT44(uStack_4c,uStack_50);
  uStack_80 = (undefined4)lVar3;
  uStack_7c = (undefined4)((ulonglong)lVar3 >> 0x20);
  local_78 = (undefined4)lVar4;
  uStack_74 = (undefined4)((ulonglong)lVar4 >> 0x20);
  uStack_70 = (undefined4)lVar5;
  uStack_6c = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_68 = (undefined4)lVar6;
  uStack_64 = (undefined4)((ulonglong)lVar6 >> 0x20);
  uStack_60 = (undefined4)lVar7;
  uStack_5c = (undefined4)((ulonglong)lVar7 >> 0x20);
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  if (lVar2 != 0) {
    plVar8 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_38;
    }
    local_48 = plVar9;
    (**(code **)(*plVar8 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1498e828e Unwind@1498e828e body=23 status=ok
// SIG undefined Unwind@1498e828e(void)

void Unwind_1498e828e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e82a6 FUN_1498e82a6 body=173 status=ok
// SIG undefined FUN_1498e82a6(void)

void FUN_1498e82a6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  plVar6 = (longlong *)param_1[2];
  lVar2 = param_1[4];
  lVar3 = param_1[5];
  lVar4 = param_1[6];
  lVar5 = param_1[7];
  param_1[6] = CONCAT44(uStack_24,local_28);
  param_1[7] = CONCAT44(uStack_1c,uStack_20);
  param_1[4] = CONCAT44(uStack_34,local_38);
  param_1[5] = CONCAT44(uStack_2c,uStack_30);
  param_1[2] = 0;
  param_1[3] = CONCAT44(uStack_3c,uStack_40);
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_4c,uStack_50);
  local_78 = (undefined4)lVar2;
  uStack_74 = (undefined4)((ulonglong)lVar2 >> 0x20);
  uStack_70 = (undefined4)lVar3;
  uStack_6c = (undefined4)((ulonglong)lVar3 >> 0x20);
  local_68 = (undefined4)lVar4;
  uStack_64 = (undefined4)((ulonglong)lVar4 >> 0x20);
  uStack_60 = (undefined4)lVar5;
  uStack_5c = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_28 = local_68;
  uStack_24 = uStack_64;
  uStack_20 = uStack_60;
  uStack_1c = uStack_5c;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  if (lVar1 != 0) {
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)&local_38;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}



// FUNCTION 1498e8354 Unwind@1498e8354 body=22 status=ok
// SIG undefined Unwind@1498e8354(void)

void Unwind_1498e8354(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498e836b FUN_1498e836b body=65 status=ok
// SIG undefined FUN_1498e836b(void)

undefined8 * FUN_1498e836b(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2c0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14bef85c0;
  FUN_1498dc95a(puVar1 + 2);
  return puVar1;
}



// FUNCTION 1498e83b6 FUN_1498e83b6 body=29 status=ok
// SIG undefined FUN_1498e83b6(void)

undefined8 FUN_1498e83b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498e83d4 FUN_1498e83d4 body=157 status=ok
// SIG undefined FUN_1498e83d4(void)

undefined8 *
FUN_1498e83d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = TAsyncRunnable<void>::vftable;
  param_1[2] = *param_2;
  param_1[4] = param_2[2];
  param_2[2] = 0;
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  if (param_1[2] != 0) {
    *param_2 = 0;
  }
  param_1[10] = *param_3;
  param_1[0xb] = param_3[1];
  param_3[1] = 0;
  *param_3 = 0;
  FUN_1498e6f1e();
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = *param_4;
  param_1[0xe] = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  return param_1;
}



// FUNCTION 1498e8472 FUN_1498e8472 body=125 status=ok
// SIG undefined FUN_1498e8472(void)

undefined8 * FUN_1498e8472(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *param_1 = TAsyncQueuedWork<void>::vftable;
  param_1[2] = *param_2;
  param_1[4] = param_2[2];
  param_2[2] = 0;
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  if (param_1[2] != 0) {
    *param_2 = 0;
  }
  param_1[10] = *param_3;
  param_1[0xb] = param_3[1];
  param_3[1] = 0;
  *param_3 = 0;
  FUN_1498e6f1e();
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1498e84f0 FUN_1498e84f0 body=145 status=ok
// SIG undefined FUN_1498e84f0(void)

undefined8 * FUN_1498e84f0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1498e85b6(0,param_2);
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



// FUNCTION 1498e8582 Unwind@1498e8582 body=52 status=ok
// SIG undefined Unwind@1498e8582(void)

void Unwind_1498e8582(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1498e85b6 FUN_1498e85b6 body=352 status=ok
// SIG undefined FUN_1498e85b6(void)

longlong * FUN_1498e85b6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  int iStack_34;
  undefined8 uStack_30;
  
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    iStack_5c = 0;
    uStack_58 = 0;
    uStack_68 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar5 = (int)param_1[5];
    }
    uStack_30 = CONCAT44(uStack_54,uStack_58);
    local_48 = (undefined4)local_70;
    uStack_44 = local_70._4_4_;
    uStack_40 = (undefined4)uStack_68;
    uStack_3c = uStack_68._4_4_;
    local_38 = local_60;
    iStack_34 = iStack_5c;
    local_50 = param_1;
    if ((iStack_5c != iVar5) || (uStack_68 != plVar1)) {
      do {
        if (*(longlong *)(*local_50 + 0x10 + (longlong)iStack_34 * 0x28) != 0) {
          FUN_1400020a8();
        }
        local_38 = local_38 & ~uStack_44;
        FUN_1449c0562(&local_48);
      } while (local_50 != param_1 ||
               ((longlong *)CONCAT44(uStack_3c,uStack_40) != plVar1 || iStack_34 != iVar5));
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
  return param_1;
}



// FUNCTION 1498e8716 FUN_1498e8716 body=65 status=ok
// SIG undefined FUN_1498e8716(void)

void FUN_1498e8716(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1498e8758 Unwind@1498e8758 body=20 status=ok
// SIG undefined Unwind@1498e8758(void)

void Unwind_1498e8758(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}


