// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145adafd4 FUN_145adafd4 body=35 status=ok
// SIG undefined FUN_145adafd4(void)

void FUN_145adafd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adaff8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7864f0;
  return;
}



// FUNCTION 145adaff8 FUN_145adaff8 body=32 status=ok
// SIG undefined FUN_145adaff8(void)

undefined8 * FUN_145adaff8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b30d8b0;
  return param_1;
}



// FUNCTION 145adb018 FUN_145adb018 body=35 status=ok
// SIG undefined FUN_145adb018(void)

void FUN_145adb018(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb03c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7f4e00;
  return;
}



// FUNCTION 145adb03c FUN_145adb03c body=32 status=ok
// SIG undefined FUN_145adb03c(void)

undefined8 * FUN_145adb03c(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab5db90;
  return param_1;
}



// FUNCTION 145adb05c FUN_145adb05c body=35 status=ok
// SIG undefined FUN_145adb05c(void)

void FUN_145adb05c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb080(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7fb550;
  return;
}



// FUNCTION 145adb080 FUN_145adb080 body=32 status=ok
// SIG undefined FUN_145adb080(void)

undefined8 * FUN_145adb080(undefined8 *param_1)

{
  FUN_14595f5ee();
  *param_1 = &PTR_FUN_14b171e30;
  return param_1;
}



// FUNCTION 145adb0a0 FUN_145adb0a0 body=38 status=ok
// SIG undefined FUN_145adb0a0(void)

undefined8 FUN_145adb0a0(undefined8 param_1,int param_2)

{
  FUN_145adb0c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adb0c6 FUN_145adb0c6 body=96 status=ok
// SIG undefined FUN_145adb0c6(void)

void FUN_145adb0c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b7070;
  FUN_140d4710a(param_1 + 0x4e);
  FUN_140d4710a(param_1 + 0x3e);
  FUN_140d4710a(param_1 + 0x2e);
  FUN_140fe7f98(param_1 + 0x1b);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145adb126 FUN_145adb126 body=35 status=ok
// SIG undefined FUN_145adb126(void)

void FUN_145adb126(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb14a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8f5460;
  return;
}



// FUNCTION 145adb14a FUN_145adb14a body=32 status=ok
// SIG undefined FUN_145adb14a(void)

undefined8 * FUN_145adb14a(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b4a1960;
  return param_1;
}



// FUNCTION 145adb16a FUN_145adb16a body=35 status=ok
// SIG undefined FUN_145adb16a(void)

void FUN_145adb16a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb18e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8f5a50;
  return;
}



// FUNCTION 145adb18e FUN_145adb18e body=32 status=ok
// SIG undefined FUN_145adb18e(void)

undefined8 * FUN_145adb18e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b4a85d0;
  return param_1;
}



// FUNCTION 145adb1ae FUN_145adb1ae body=142 status=ok
// SIG undefined FUN_145adb1ae(void)

void FUN_145adb1ae(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141208f3a(&local_38);
  lVar1 = local_38;
  if ((longlong)local_30 != 0) {
    lVar2 = 0;
    do {
      FUN_1414abad0(param_1,*(undefined8 *)(lVar1 + lVar2),2,DAT_14cbc8be8);
      lVar2 = lVar2 + 8;
    } while ((longlong)local_30 * 8 != lVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145adb23e FUN_145adb23e body=246 status=ok
// SIG undefined FUN_145adb23e(void)

undefined8 *
FUN_145adb23e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145adb336(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adb336 FUN_145adb336 body=423 status=ok
// SIG undefined FUN_145adb336(void)

void FUN_145adb336(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145adb40c:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9cd130;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145adb40c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9cd130;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145adb4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145adb4dd FUN_145adb4dd body=35 status=ok
// SIG undefined FUN_145adb4dd(void)

void FUN_145adb4dd(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb500(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb92460;
  return;
}



// FUNCTION 145adb500 FUN_145adb500 body=32 status=ok
// SIG undefined FUN_145adb500(void)

undefined8 * FUN_145adb500(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14bb3a5a0;
  return param_1;
}



// FUNCTION 145adb520 FUN_145adb520 body=62 status=ok
// SIG undefined FUN_145adb520(void)

undefined8 * FUN_145adb520(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc0b680;
  FUN_1401f95f4(param_1 + 10);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adb55e thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145adb563 FUN_145adb563 body=35 status=ok
// SIG undefined FUN_145adb563(void)

void FUN_145adb563(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb586(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd2ede0;
  return;
}



// FUNCTION 145adb586 FUN_145adb586 body=32 status=ok
// SIG undefined FUN_145adb586(void)

undefined8 * FUN_145adb586(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc139b0;
  return param_1;
}



// FUNCTION 145adb5a6 FUN_145adb5a6 body=35 status=ok
// SIG undefined FUN_145adb5a6(void)

void FUN_145adb5a6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb5ca(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd4d9c0;
  return;
}



// FUNCTION 145adb5ca FUN_145adb5ca body=32 status=ok
// SIG undefined FUN_145adb5ca(void)

undefined8 * FUN_145adb5ca(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc20740;
  return param_1;
}



// FUNCTION 145adb5ea FUN_145adb5ea body=35 status=ok
// SIG undefined FUN_145adb5ea(void)

void FUN_145adb5ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb60e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be8ade0;
  return;
}



// FUNCTION 145adb60e FUN_145adb60e body=32 status=ok
// SIG undefined FUN_145adb60e(void)

undefined8 * FUN_145adb60e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a13b450;
  return param_1;
}



// FUNCTION 145adb62e FUN_145adb62e body=35 status=ok
// SIG undefined FUN_145adb62e(void)

void FUN_145adb62e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145adb652(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be8b180;
  return;
}



// FUNCTION 145adb652 FUN_145adb652 body=32 status=ok
// SIG undefined FUN_145adb652(void)

undefined8 * FUN_145adb652(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a13bf90;
  return param_1;
}



// FUNCTION 145adb672 FUN_145adb672 body=336 status=ok
// SIG undefined FUN_145adb672(void)

undefined4 * FUN_145adb672(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145adb854(local_40);
  uVar7 = *(ulonglong *)*param_2;
  *local_38 = uVar7;
  local_38[1] = 0;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145adb7c4(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14caf5fc8 - DAT_14caf5ff4;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14caf6008)) {
      uVar4 = DAT_14caf6008 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0x14) = uVar4;
      puVar6 = DAT_14caf6000;
      if (DAT_14caf6000 == (undefined *)0x0) {
        puVar6 = &DAT_14caf5ff8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14caf6008 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14caf6000;
      if (DAT_14caf6000 == (undefined *)0x0) {
        puVar6 = &DAT_14caf5ff8;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14caf6008 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14caf6008 = iVar8;
      FUN_1414abb4e();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adb7c4 FUN_145adb7c4 body=143 status=ok
// SIG undefined FUN_145adb7c4(void)

undefined8 FUN_145adb7c4(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14caf5fc8 - DAT_14caf5ff4 != 1) && (DAT_14caf5fc8 != DAT_14caf5ff4)) {
    puVar6 = &DAT_14caf5ff8;
    if (DAT_14caf6000 != (undefined *)0x0) {
      puVar6 = DAT_14caf6000;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14caf6008 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14caf5fc0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1458c969c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145adb854 FUN_145adb854 body=279 status=ok
// SIG undefined FUN_145adb854(void)

int * FUN_145adb854(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14caf5ff0;
  iVar3 = DAT_14caf5fc8;
  if (DAT_14caf5ff4 == 0) {
    iVar2 = DAT_14caf5fc8 + 1;
    bVar7 = DAT_14caf5fcc == DAT_14caf5fc8;
    DAT_14caf5fc8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14caf5fc0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14caf5fd0,1);
    puVar4 = DAT_14caf5fe0;
    if (DAT_14caf5fe0 == (undefined4 *)0x0) {
      puVar4 = &DAT_14caf5fd0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14caf5ff0;
    DAT_14caf5ff0 = *(int *)(DAT_14caf5fc0 + 4 + lVar6 * 0x18);
    DAT_14caf5ff4 = DAT_14caf5ff4 + -1;
    if (DAT_14caf5ff4 != 0) {
      *(undefined4 *)(DAT_14caf5fc0 + (longlong)DAT_14caf5ff0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14caf5fd0;
  if (DAT_14caf5fe0 != (undefined4 *)0x0) {
    puVar4 = DAT_14caf5fe0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14caf5fc0;
  return param_1;
}



// FUNCTION 145adb976 FUN_145adb976 body=441 status=ok
// SIG undefined FUN_145adb976(void)

undefined8 * FUN_145adb976(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a87bb30;
  param_1[5] = &PTR_FUN_14a87c110;
  param_1[6] = &PTR_LAB_14a87c150;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffaaaaaa45c6c000;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x42700000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x3ed1b80a3e337e6f;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x41f1b11c3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3d0793de;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x41000000;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar1;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5b) = 0x3b82f0e1;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x5e) = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar1;
  *(undefined4 *)(param_1 + 0x5f) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x39e8c8ac;
  param_1[0x60] = 0x3f99999a3f4ccccd;
  param_1[0x61] = 0x3eb0ed5a3af68be3;
  param_1[0x62] = 0x3d3917d03f7fffff;
  param_1[99] = 0x41c800004404e874;
  param_1[100] = 0x417000003f800000;
  param_1[0x65] = &DAT_3f8000003f800000;
  param_1[0x66] = &DAT_3f8000003f800000;
  param_1[0x57] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x67) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0xc2b40000;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3dcccccd;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xfc | 2;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0x72) = local_28.Data1;
  *(undefined4 *)((longlong)param_1 + 0x394) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x73) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x39c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adbb30 FUN_145adbb30 body=148 status=ok
// SIG undefined FUN_145adbb30(void)

bool FUN_145adbb30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adbbca FUN_145adbbca body=38 status=ok
// SIG undefined FUN_145adbbca(void)

undefined8 FUN_145adbbca(undefined8 param_1,int param_2)

{
  FUN_145adbbf0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adbbf0 FUN_145adbbf0 body=72 status=ok
// SIG undefined FUN_145adbbf0(void)

void FUN_145adbbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b984f50;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145d43c70(param_1 + 0x1c);
  FUN_145adbc38(param_1);
  return;
}



// FUNCTION 145adbc38 FUN_145adbc38 body=125 status=ok
// SIG undefined FUN_145adbc38(void)

void FUN_145adbc38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f3820;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 5);
  if (*(char *)((longlong)param_1 + 0x27) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  }
  return;
}



// FUNCTION 145adbcb6 FUN_145adbcb6 body=199 status=ok
// SIG undefined FUN_145adbcb6(void)

void FUN_145adbcb6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145adbd8c();
  FUN_1409b52ac(param_1 + 0x460);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  FUN_1414a9acc(param_1);
  lVar1 = *(longlong *)(param_1 + 0x1700);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x3c0);
    if (plVar2 == (longlong *)0x0) {
      local_28 = DAT_14c846508;
      local_38 = DAT_14c8464f8;
      dStack_30 = DAT_14c846500;
    }
    else {
      (**(code **)(*plVar2 + 0x680))(plVar2,&local_38);
    }
    *(float *)(lVar1 + 0x1998) = (float)dStack_30;
    *(float *)(lVar1 + 0x199c) = (float)local_38;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adbd8c FUN_145adbd8c body=282 status=ok
// SIG undefined FUN_145adbd8c(void)

void FUN_145adbd8c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  
  if (DAT_14c76146c == '\x01') {
    lVar1 = param_1[0x79];
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    lVar3 = param_1[0x78];
    bVar4 = lVar3 != lVar1;
  }
  else {
    lVar3 = param_1[0x78];
    bVar4 = lVar3 == 0;
  }
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x3d0) != 0)) {
    if (!bVar4) {
      return;
    }
  }
  else {
    FUN_145adbea6(lVar3,param_1);
    if (param_1[0x78] != 0) {
      lVar3 = FUN_144a75eb4();
      plVar2 = (longlong *)param_1[0x78];
      if ((((plVar2 != (longlong *)0x0) && (lVar3 != 0)) && (lVar1 = plVar2[2], lVar1 != 0)) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && ((char)plVar2[0x8b] == '\x01')))) {
        lVar3 = plVar2[0x89];
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar2);
        }
        if (*(longlong **)(lVar3 + 0x430) == plVar2) {
          (**(code **)(*plVar2 + 0xe40))(plVar2,param_1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145adbdeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6e0))(param_1);
  return;
}



// FUNCTION 145adbea6 FUN_145adbea6 body=58 status=ok
// SIG undefined FUN_145adbea6(void)

void FUN_145adbea6(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x670))(param_1,param_1[0x7a]);
  FUN_141201d58(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145adbed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6a0))(param_1);
  return;
}



// FUNCTION 145adbee0 FUN_145adbee0 body=67 status=ok
// SIG undefined FUN_145adbee0(void)

void FUN_145adbee0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145adbf24(param_1);
    FUN_140e916fa(param_1,0);
    return;
  }
  FUN_140e916fa(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1403e7b96(param_1);
  return;
}



// FUNCTION 145adbf24 FUN_145adbf24 body=335 status=ok
// SIG undefined FUN_145adbf24(void)

void FUN_145adbf24(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x54 + (longlong)iVar4 * 0x58) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145adc074 FUN_145adc074 body=484 status=ok
// SIG undefined FUN_145adc074(void)

void FUN_145adc074(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_50 = FUN_14623cba8;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cb92bb0,param_1);
      local_50 = FUN_148ec4e8a;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cb92bb8,param_1);
      local_50 = (code *)&LAB_148ec510c;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cb92ad8,param_1);
      local_50 = (code *)&LAB_148ec5168;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cb92ce8,param_1);
      local_50 = (code *)&LAB_148ec51c6;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cb92ce0,param_1);
      local_50 = FUN_148ec5200;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cb92cf8,param_1);
      local_50 = (code *)&LAB_148ec53e8;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc25a(param_1,param_2,&DAT_14cbc9c28,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc380(param_1,param_2,&DAT_14cb92ce0,param_1);
      local_50 = FUN_140de0f20;
      local_48 = 0;
      local_58 = &local_50;
      FUN_145adc380(param_1,param_2,&DAT_14cbc9c28,param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adc25a FUN_145adc25a body=293 status=ok
// SIG undefined FUN_145adc25a(void)

void FUN_145adc25a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1414abd52(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adc380 FUN_145adc380 body=402 status=ok
// SIG undefined FUN_145adc380(void)

void FUN_145adc380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1414abdd6(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1414abdd6(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1414abdd6(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adc514 FUN_145adc514 body=40 status=ok
// SIG undefined FUN_145adc514(void)

undefined8 FUN_145adc514(undefined8 param_1,int param_2)

{
  FUN_145adc53c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adc53c FUN_145adc53c body=69 status=ok
// SIG undefined FUN_145adc53c(void)

void FUN_145adc53c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b212880;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145adc582(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145adc582 FUN_145adc582 body=53 status=ok
// SIG undefined FUN_145adc582(void)

void FUN_145adc582(longlong *param_1)

{
  FUN_145adc5b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145adc5b8 FUN_145adc5b8 body=90 status=ok
// SIG undefined FUN_145adc5b8(void)

void FUN_145adc5b8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145adc612 FUN_145adc612 body=244 status=ok
// SIG undefined FUN_145adc612(void)

byte FUN_145adc612(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    bVar6 = 0;
  }
  else {
    lVar7 = uVar8 * 0x10 + -8;
    bVar6 = 0;
    do {
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + lVar7) == 0) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
        lVar5 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
        lVar5 = local_50;
      }
      if (((lVar5 == param_2) || (*(int *)(lVar1 + lVar7) == 0)) ||
         (plVar2 = *(longlong **)(lVar1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
LAB_145adc6a6:
        FUN_145adc7a0(param_1,(int)uVar8 + -1);
        FUN_145adc708(param_1);
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x30))();
        if (cVar4 == '\0') goto LAB_145adc6a6;
      }
      bVar6 = bVar6 | lVar5 == param_2;
      lVar7 = lVar7 + -0x10;
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adc708 FUN_145adc708 body=62 status=ok
// SIG undefined FUN_145adc708(void)

void FUN_145adc708(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145adc746(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145adc746 FUN_145adc746 body=89 status=ok
// SIG undefined FUN_145adc746(void)

ulonglong FUN_145adc746(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145adc7a0 FUN_145adc7a0 body=108 status=ok
// SIG undefined FUN_145adc7a0(void)

void FUN_145adc7a0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_1449db362(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145adc80c FUN_145adc80c body=154 status=ok
// SIG undefined FUN_145adc80c(void)

bool FUN_145adc80c(longlong param_1,undefined8 param_2)

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



// FUNCTION 145adc8b6 FUN_145adc8b6 body=51 status=ok
// SIG undefined FUN_145adc8b6(void)

void FUN_145adc8b6(longlong param_1,undefined8 param_2)

{
  FUN_145adc914(param_1 + 0x788);
  FUN_14140e334(param_1,0);
  FUN_145adc8ea(param_1,param_2);
  return;
}



// FUNCTION 145adc8ea FUN_145adc8ea body=41 status=ok
// SIG undefined FUN_145adc8ea(void)

void FUN_145adc8ea(undefined8 param_1,undefined8 param_2)

{
  FUN_14597f7c0(param_1,0);
  FUN_1414abe7c(param_1,param_2);
  return;
}



// FUNCTION 145adc914 FUN_145adc914 body=90 status=ok
// SIG undefined FUN_145adc914(void)

void FUN_145adc914(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar1 = (undefined8 *)*param_1;
  LOCK();
  puVar2 = (undefined8 *)*param_1;
  bVar3 = puVar1 == puVar2;
  if (bVar3) {
    *param_1 = 0;
    puVar2 = puVar1;
  }
  UNLOCK();
  while (!bVar3) {
    SwitchToThread();
    puVar1 = (undefined8 *)*param_1;
    LOCK();
    puVar2 = (undefined8 *)*param_1;
    bVar3 = puVar1 == puVar2;
    if (bVar3) {
      *param_1 = 0;
      puVar2 = puVar1;
    }
    UNLOCK();
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145adc976 FUN_145adc976 body=564 status=ok
// SIG undefined FUN_145adc976(void)

undefined8 * FUN_145adc976(undefined8 *param_1)

{
  FUN_140fe702e();
  *param_1 = &PTR_FUN_14b6618f0;
  param_1[0x72] = &PTR_FUN_14b661f60;
  param_1[0x73] = &PTR_FUN_14b661f80;
  param_1[0x74] = &PTR_FUN_14b661fb0;
  param_1[0x75] = &PTR_FUN_14b661fc0;
  param_1[0x76] = &PTR_FUN_14b662030;
  param_1[0x77] = &PTR_FUN_14b662060;
  param_1[0x78] = &PTR_FUN_14b662090;
  param_1[0x7f] = &PTR_FUN_14b662140;
  param_1[0x80] = &PTR_FUN_14b6621b0;
  param_1[0x81] = &PTR_FUN_14b662220;
  param_1[0x82] = &PTR_FUN_14b662250;
  param_1[0x83] = &PTR_FUN_14b662290;
  param_1[0x84] = &PTR_FUN_14b662330;
  param_1[0x85] = &PTR_FUN_14b662350;
  param_1[0x89] = &PTR_FUN_14b662370;
  param_1[0x8a] = &PTR_FUN_14b662430;
  param_1[0x8b] = &PTR_FUN_14b6624b0;
  param_1[0x8c] = &PTR_FUN_14b662500;
  param_1[0x8d] = &PTR_FUN_14b662540;
  param_1[0x8e] = &PTR_FUN_14b662560;
  param_1[0x8f] = &PTR_FUN_14b662580;
  param_1[0x90] = &PTR_FUN_14b6625a0;
  param_1[0x91] = &PTR_FUN_14b6625c0;
  param_1[0x92] = &PTR_FUN_14b6625e0;
  param_1[0x93] = &PTR_FUN_14b662600;
  param_1[0x94] = &PTR_FUN_14b662620;
  param_1[0x95] = &PTR_FUN_14b662640;
  param_1[0x96] = &PTR_FUN_14b662660;
  param_1[0x34b] = &PTR_FUN_14b662680;
  param_1[0x352] = &PTR_FUN_14b662690;
  param_1[0x353] = &PTR_FUN_14b6626d0;
  param_1[0x354] = &PTR_FUN_14b662710;
  param_1[0x355] = &PTR_FUN_14b662760;
  param_1[0x356] = &PTR_FUN_14b662790;
  param_1[0x359] = &PTR_FUN_14b6627d0;
  param_1[0x35a] = &PTR_FUN_14b6627e0;
  param_1[0x35b] = &PTR_FUN_14b662810;
  param_1[0x35c] = &PTR_FUN_14b6628b0;
  return param_1;
}



// FUNCTION 145adcbaa FUN_145adcbaa body=1310 status=ok
// SIG undefined FUN_145adcbaa(void)

void FUN_145adcbaa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  char *pcVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  longlong local_158 [2];
  undefined2 *local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar5 = FUN_141164a58();
  plVar6 = (longlong *)FUN_1414ac2f6(uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_145adcfac;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = -1;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0xffffffff;
  local_e8 = (undefined2 *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  FUN_145add0ca(param_2);
  plVar1 = (longlong *)(param_2 + 0x18);
  FUN_140056680(local_158 + 2,L"NumPartyMembers");
  puVar8 = local_148;
  if ((int)uStack_140 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar7 = (ulonglong)((int)uStack_140 - 1);
  if ((int)uStack_140 == 0) {
    uVar7 = 0;
  }
  uVar2 = FUN_144a49b4a(uVar7,puVar8);
  iVar3 = FUN_140dfa800(plVar1,uVar2,local_158 + 2);
  uVar7 = 0;
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x38 + *(longlong *)(param_2 + 0x18);
  }
  pcVar10 = (char *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    pcVar10 = (char *)0x0;
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (pcVar10 == (char *)0x0) {
    uVar2 = 0xffffffff;
  }
  else if (*pcVar10 == '\x01') {
    uVar2 = *(undefined4 *)(pcVar10 + 8);
  }
  else {
    uVar2 = 0;
  }
  FUN_140056680(local_158 + 2,L"MaxPartyMembers");
  puVar8 = local_148;
  if ((int)uStack_140 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar7 = (ulonglong)((int)uStack_140 - 1);
  if ((int)uStack_140 == 0) {
    uVar7 = 0;
  }
  uVar4 = FUN_144a49b4a(uVar7,puVar8);
  iVar3 = FUN_140dfa800(plVar1,uVar4,local_158 + 2);
  uVar7 = 0;
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x38 + *plVar1;
  }
  pcVar10 = (char *)(uVar7 + 0x10);
  if (uVar7 == 0) {
    pcVar10 = (char *)0x0;
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (pcVar10 == (char *)0x0) {
    uVar4 = 0xffffffff;
  }
  else if (*pcVar10 == '\x01') {
    uVar4 = *(undefined4 *)(pcVar10 + 8);
  }
  else {
    uVar4 = 0;
  }
  iVar3 = (int)uStack_120 + -1;
  if ((int)uStack_120 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(&local_108,local_128,iVar3);
  iVar3 = (int)uStack_130 + -1;
  if ((int)uStack_130 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(&local_118,local_138,iVar3);
  local_98 = CONCAT44(uVar4,uVar2);
  local_170 = 0xffffffff;
  local_178 = 0;
  iVar3 = FUN_1447ee042(&local_118,L"Menu",4,1);
  if (iVar3 == -1) {
    if ((int)uStack_110 == (int)plVar6[0x15]) {
      if (1 < (int)uStack_110) {
        lVar9 = 0;
        while( true ) {
          uVar11 = *(ushort *)(local_118 + lVar9);
          uVar7 = (ulonglong)uVar11;
          uVar12 = *(ushort *)(plVar6[0x14] + lVar9);
          if (uVar11 != uVar12) break;
          if (uVar11 == 0) goto LAB_145add07d;
LAB_145add04d:
          lVar9 = lVar9 + 2;
        }
        if ((uVar12 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar13]) goto LAB_145add04d;
        }
        if (uVar11 != uVar12) goto LAB_145adce2f;
      }
    }
    else if ((int)plVar6[0x15] + (int)uStack_110 != 1) {
LAB_145adce2f:
      FUN_140212f8e(local_158);
      lVar9 = local_158[0];
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0;
      FUN_14021300e(local_158 + 2,0x7b2,1,1);
      local_f8 = (lVar9 - (longlong)local_148) / 10000000;
      goto LAB_145adce9b;
    }
LAB_145add07d:
    local_f8 = plVar6[0x18];
  }
LAB_145adce9b:
  local_60 = 0;
  FUN_140056680(local_158 + 2,L"ZoneIdent");
  puVar8 = local_148;
  if ((int)uStack_140 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar7 = (ulonglong)((int)uStack_140 - 1);
  if ((int)uStack_140 == 0) {
    uVar7 = 0;
  }
  uVar2 = FUN_144a49b4a(uVar7,puVar8);
  iVar3 = FUN_140dfa800(plVar1,uVar2,local_158 + 2);
  uVar7 = 0;
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x38 + *plVar1;
  }
  lVar9 = uVar7 + 0x10;
  if (uVar7 == 0) {
    lVar9 = 0;
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar9 == 0) {
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_1414ac560(local_158 + 2);
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_e8 = local_148;
    uStack_e0 = uStack_140;
  }
  else {
    FUN_140b74056(lVar9,local_158);
    FUN_1414ac560(local_158 + 2,local_158);
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_e8 = local_148;
    uStack_e0 = uStack_140;
  }
  uStack_140 = 0;
  local_148 = (undefined2 *)0x0;
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*plVar6 + 0x2b8))(plVar6,&local_118);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1414ac4aa(&local_118);
LAB_145adcfac:
  if ((local_50 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145add0ca FUN_145add0ca body=1984 status=ok
// SIG undefined FUN_145add0ca(void)

void FUN_145add0ca(longlong param_1,longlong *param_2,wchar_t **param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined2 *local_c8;
  int local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong *local_88 [2];
  longlong *local_78 [2];
  wchar_t *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = L"DiscordState_InMenus";
  local_60._0_4_ = 0x14;
  FUN_1446e940c(local_88,&local_68);
  local_68 = L"OakPresence";
  local_60._0_4_ = 0xb;
  FUN_1446e940c(&local_98,&local_68);
  FUN_140208bae(local_78,&local_98,local_88,L"In Menus");
  local_68 = L"DiscordState_InGameplay";
  local_60._0_4_ = 0x17;
  FUN_1446e940c(&local_98,&local_68);
  local_68 = L"OakPresence";
  local_60 = CONCAT44(local_60._4_4_,0xb);
  FUN_1446e940c(&local_a8,&local_68);
  FUN_140208bae(local_88,&local_a8,&local_98,L"Level {PlayerLevel} {CharacterName}");
  plVar1 = (longlong *)(param_1 + 0x18);
  puVar10 = DAT_14cb8e470;
  if (DAT_14cb8e478 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  uVar8 = (ulonglong)(DAT_14cb8e478 - 1);
  if (DAT_14cb8e478 == 0) {
    uVar8 = 0;
  }
  uVar4 = FUN_144a49b4a(uVar8,puVar10);
  iVar5 = FUN_140dfa800(plVar1,uVar4);
  uVar8 = 0;
  if (iVar5 != -1) {
    uVar8 = (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x18);
  }
  if (uVar8 != 0) {
    FUN_140b74056(uVar8 + 0x10,&local_68);
    if ((int)local_60 == DAT_14cbceb48) {
      if ((int)local_60 < 2) {
        bVar15 = true;
      }
      else {
        lVar12 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)local_68 + lVar12);
          uVar6 = (uint)uVar2;
          uVar3 = *(ushort *)(DAT_14cbceb40 + lVar12);
          uVar13 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_145add7a9;
            }
            iVar5 = uVar6 - uVar13;
            goto LAB_145add803;
          }
          if (uVar2 == 0) break;
LAB_145add7a9:
          lVar12 = lVar12 + 2;
        }
        iVar5 = 0;
LAB_145add803:
        bVar15 = iVar5 == 0;
      }
    }
    else {
      bVar15 = DAT_14cbceb48 + (int)local_60 == 1;
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (bVar15) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = 0;
      param_2[1] = 0;
      uVar7 = FUN_1447a1f4a(local_78);
      FUN_144a787a6(param_3,uVar7);
    }
    else {
      FUN_140b74056(uVar8 + 0x10,&local_68);
      if ((int)local_60 == DAT_14cbceb58) {
        if ((int)local_60 < 2) {
          bVar15 = true;
        }
        else {
          lVar12 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)local_68 + lVar12);
            uVar6 = (uint)uVar2;
            uVar3 = *(ushort *)(DAT_14cbceb50 + lVar12);
            uVar13 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_145add2c7;
              }
              iVar5 = uVar6 - uVar13;
              goto LAB_145add2f2;
            }
            if (uVar2 == 0) break;
LAB_145add2c7:
            lVar12 = lVar12 + 2;
          }
          iVar5 = 0;
LAB_145add2f2:
          bVar15 = iVar5 == 0;
        }
      }
      else {
        bVar15 = DAT_14cbceb58 + (int)local_60 == 1;
      }
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (bVar15) {
        FUN_140056680(&local_68,L"PlayerLevel");
        pwVar9 = local_68;
        if ((int)local_60 == 0) {
          pwVar9 = L"";
        }
        uVar8 = (ulonglong)((int)local_60 - 1);
        if ((int)local_60 == 0) {
          uVar8 = 0;
        }
        uVar4 = FUN_144a49b4a(uVar8,pwVar9);
        iVar5 = FUN_140dfa800(plVar1,uVar4,&local_68);
        uVar8 = 0;
        if (iVar5 != -1) {
          uVar8 = (longlong)iVar5 * 0x38 + *plVar1;
        }
        lVar12 = uVar8 + 0x10;
        if (uVar8 == 0) {
          lVar12 = 0;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_68,L"CharacterDef");
        pwVar9 = local_68;
        if ((int)local_60 == 0) {
          pwVar9 = L"";
        }
        uVar8 = (ulonglong)((int)local_60 - 1);
        if ((int)local_60 == 0) {
          uVar8 = 0;
        }
        uVar4 = FUN_144a49b4a(uVar8,pwVar9);
        iVar5 = FUN_140dfa800(plVar1,uVar4,&local_68);
        uVar8 = 0;
        if (iVar5 != -1) {
          uVar8 = (longlong)iVar5 * 0x38 + *plVar1;
        }
        lVar14 = uVar8 + 0x10;
        if (uVar8 == 0) {
          lVar14 = 0;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_68,L"ZoneIdent");
        pwVar9 = local_68;
        if ((int)local_60 == 0) {
          pwVar9 = L"";
        }
        uVar8 = (ulonglong)((int)local_60 - 1);
        if ((int)local_60 == 0) {
          uVar8 = 0;
        }
        uVar4 = FUN_144a49b4a(uVar8,pwVar9);
        iVar5 = FUN_140dfa800(plVar1,uVar4,&local_68);
        uVar8 = 0;
        if (iVar5 != -1) {
          uVar8 = (longlong)iVar5 * 0x38 + *plVar1;
        }
        lVar11 = uVar8 + 0x10;
        if (uVar8 == 0) {
          lVar11 = 0;
        }
        if (local_68 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (((lVar12 != 0) && (lVar14 != 0)) && (lVar11 != 0)) {
          local_98 = 0;
          uStack_90 = 0;
          FUN_140b74056(lVar12,&local_68);
          FUN_140233b1a(&local_a8,&local_68);
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          FUN_140b74056(lVar14,&local_c8);
          puVar10 = local_c8;
          if (local_c0 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          FUN_1446f470e(&local_b8,puVar10,1);
          FUN_140b6da64(&local_68,&local_b8);
          FUN_140233b1a(&local_b8,&local_68);
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
          local_58 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 8))();
          }
          local_50 = local_a0;
          FUN_140056680(&local_c8,L"PlayerLevel");
          FUN_140233eec(&local_98,&local_c8,&local_68);
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
          local_58 = local_b8;
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 8))();
          }
          local_50 = local_b0;
          FUN_140056680(&local_c8,L"CharacterName");
          FUN_140233eec(&local_98,&local_c8,&local_68);
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          FUN_14023409e(local_d8,local_88,1);
          FUN_140233c04(&local_68,local_d8,&local_98);
          uVar7 = FUN_1447a1f4a(&local_68);
          FUN_144a787a6(param_2,uVar7);
          if (local_68 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_68 + 0x10))();
          }
          FUN_140b74056(lVar11,&local_c8);
          FUN_140b7416e(&local_68,&local_c8);
          if (&local_68 == param_3) {
            if (local_68 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_3 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            *param_3 = local_68;
            local_68 = (wchar_t *)0x0;
            *(int *)(param_3 + 1) = (int)local_60;
            *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
            local_60 = 0;
          }
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x10))();
          }
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 0x10))();
          }
          FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145add88c FUN_145add88c body=254 status=ok
// SIG undefined FUN_145add88c(void)

longlong *
FUN_145add88c(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_145add98e(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145adda06(&local_30,plVar1);
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



// FUNCTION 145add98e FUN_145add98e body=120 status=ok
// SIG undefined FUN_145add98e(void)

undefined8 * FUN_145add98e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b428120;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b428140;
  param_1[6] = &PTR_FUN_14b428180;
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



// FUNCTION 145adda06 FUN_145adda06 body=162 status=ok
// SIG undefined FUN_145adda06(void)

void FUN_145adda06(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145adda45;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145adda45;
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
LAB_145adda45:
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
                    /* WARNING: Could not recover jumptable at 0x000145addaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145addaa8 FUN_145addaa8 body=72 status=ok
// SIG undefined FUN_145addaa8(void)

void FUN_145addaa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9bb620;
  FUN_145addb26();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145addaf0(param_1 + 1);
  return;
}



// FUNCTION 145addaf0 FUN_145addaf0 body=53 status=ok
// SIG undefined FUN_145addaf0(void)

void FUN_145addaf0(longlong *param_1)

{
  FUN_145addba2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145addb26 FUN_145addb26 body=60 status=ok
// SIG undefined FUN_145addb26(void)

void FUN_145addb26(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_145addb62(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000145addb5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 145addb62 FUN_145addb62 body=63 status=ok
// SIG undefined FUN_145addb62(void)

void FUN_145addb62(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145addba2(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140195a98(param_1);
    return;
  }
  FUN_147b9bbf0(param_1);
  FUN_145addba2(param_1);
  return;
}



// FUNCTION 145addba2 FUN_145addba2 body=89 status=ok
// SIG undefined FUN_145addba2(void)

void FUN_145addba2(longlong param_1)

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



// FUNCTION 145addbfc FUN_145addbfc body=350 status=ok
// SIG undefined FUN_145addbfc(void)

void FUN_145addbfc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  FUN_145addd5a();
  if (param_2 != 0) {
    lVar3 = FUN_144a7b4ca();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_145addc43;
  }
  param_2 = 0;
LAB_145addc43:
  FUN_14485c47a(param_1 + 0x181,param_2);
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x181);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar3 = FUN_14034eff0(plVar4);
  if (((lVar3 != 0) && (cVar2 = FUN_1410cda3e(lVar3), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar2 != '\0')) {
    return;
  }
  lVar5 = FUN_1403b0700(plVar4);
  lVar3 = *(longlong *)(lVar5 + 0x40);
  if (lVar3 == 0) {
    uVar6 = FUN_140355b7c();
    lVar3 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0x40) = lVar3;
  }
  if (((*(longlong *)(lVar5 + 0x48) == 0) && (lVar3 != 0)) && (*(longlong *)(lVar5 + 0x38) != 0)) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar6 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x38));
    }
    *(undefined8 *)(lVar5 + 0x48) = uVar6;
  }
  (**(code **)(*param_1 + 0x640))(param_1);
  uVar6 = FUN_14129b2e6(plVar4);
  FUN_14485c47a(param_1 + 0x182,uVar6);
  return;
}



// FUNCTION 145addd5a FUN_145addd5a body=12 status=ok
// SIG undefined FUN_145addd5a(void)

void FUN_145addd5a(longlong param_1)

{
  FUN_14485c47a(param_1 + 1000);
  return;
}



// FUNCTION 145addd66 FUN_145addd66 body=93 status=ok
// SIG undefined FUN_145addd66(void)

void FUN_145addd66(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(longlong **)(param_1 + 0x3f0) = param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))();
    lVar2 = FUN_1401548e0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      plVar3 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        plVar3 = param_2;
      }
      goto LAB_145adddb0;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_145adddb0:
  *(longlong **)(param_1 + 0xc18) = plVar3;
  return;
}



// FUNCTION 145adddc4 FUN_145adddc4 body=862 status=ok
// SIG undefined FUN_145adddc4(void)

bool FUN_145adddc4(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  void *_Src;
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined *local_d8;
  undefined8 *local_d0;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  ushort local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  bVar11 = false;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_145ade092;
  uVar5 = FUN_140cb9f34();
  lVar6 = FUN_1414adc80(uVar5,param_3 + 0x18);
  local_100 = *(undefined8 *)(lVar6 + 0x28);
  local_f8 = *(undefined4 *)(lVar6 + 0x30);
  uStack_f4 = *(undefined4 *)(lVar6 + 0x34);
  uStack_f0 = *(undefined4 *)(lVar6 + 0x38);
  uStack_ec = *(undefined4 *)(lVar6 + 0x3c);
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(lVar6 + 0x48);
  lVar10 = (longlong)local_e0;
  _Src = *(void **)(lVar6 + 0x40);
  if (lVar10 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar10 * 2);
  }
  FUN_145ade124(param_1,param_2,&local_100);
  lVar10 = FUN_1447210f0(param_2);
  if ((lVar10 == 0) || (plVar7 = *(longlong **)(lVar10 + 0x1f0), plVar7 == (longlong *)0x0)) {
LAB_145added2:
    lVar6 = FUN_140963a30(lVar6);
    if ((lVar6 != 0) && (plVar7 = *(longlong **)(param_2 + 0xa08), plVar7 != (longlong *)0x0)) {
      uVar5 = FUN_1407ca880();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar5);
      if (plVar7 != (longlong *)0x0) {
        uVar5 = FUN_1407ca880();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar5);
        bVar11 = false;
        if ((plVar7 != plVar8) && (bVar11 = false, plVar8 != (longlong *)0x0)) {
          local_78 = 0;
          local_70 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_6c = 0xffffffff00000080;
          local_64 = 0;
          local_58 = 0;
          local_50 = 0;
          local_a8 = 4;
          local_c0 = (undefined8 *)(CONCAT44(local_c0._4_4_,param_4) & 0xffffffff000000ff);
          local_a0 = 1;
          local_d8 = &DAT_14cbd3df0;
          local_d0 = &local_c0;
          FUN_140881f5a(&local_98,local_c4,&local_d8,0);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
          if (pcVar1 != (code *)0x0) {
            puVar9 = &local_c0;
            if (0x18 < local_a8) {
              puVar9 = local_c0;
            }
            (*pcVar1)(puVar9);
          }
          if (0x18 < local_a8) {
            FUN_1400020a8(local_c0);
          }
          local_108 = 0;
          FUN_14485c47a(&local_108,param_2);
          local_c0 = (undefined8 *)local_108;
          iVar4 = FUN_141340124((longlong *)(param_1 + 0x1e0),
                                (uint)((ulonglong)local_108 >> 0x20) ^ (uint)local_108);
          if (iVar4 != -1) {
            lVar10 = *(longlong *)(param_1 + 0x1e0);
            if ((lVar10 + (longlong)iVar4 * 0x60 != 0) && (lVar10 + (longlong)iVar4 * 0x60 != -8)) {
              FUN_145fcf304(&local_98);
            }
          }
          uVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
          cVar3 = FUN_14096df60(uVar5,lVar6,0,&local_98);
          bVar11 = cVar3 != '\0';
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_98);
        }
        goto LAB_145ade092;
      }
    }
  }
  else {
    lVar10 = FUN_1403ca142();
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30)) goto LAB_145added2;
    lVar10 = FUN_14021f720(plVar7);
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0xec) == 0)) {
      bVar2 = (**(code **)(*plVar7 + 0x498))(plVar7);
      if (5 < bVar2) goto LAB_145added2;
    }
  }
  bVar11 = false;
LAB_145ade092:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ade124 FUN_145ade124 body=259 status=ok
// SIG undefined FUN_145ade124(void)

void FUN_145ade124(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = FUN_140963a30(param_3);
  if (lVar6 != 0) {
    if ((longlong)*(int *)(param_1 + 0x248) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x240);
      lVar8 = (longlong)*(int *)(param_1 + 0x248) * 0x30;
      do {
        lVar7 = FUN_14479d2ce(lVar6);
        if (lVar7 == param_2) {
          if (lVar6 != 0) goto LAB_145ade1cc;
          break;
        }
        lVar6 = lVar6 + 0x30;
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != 0);
    }
    iVar2 = *(int *)(param_1 + 0x248);
    *(uint *)(param_1 + 0x248) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24c) < iVar2 + 1U) {
      FUN_145ade228((longlong *)(param_1 + 0x240),iVar2);
    }
    lVar6 = *(longlong *)(param_1 + 0x240);
    puVar1 = (undefined8 *)(lVar6 + (longlong)iVar2 * 0x30);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_14485c47a(lVar6 + (longlong)iVar2 * 0x30,param_2);
    puVar1[1] = *param_3;
    uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar4 = *(undefined4 *)(param_3 + 2);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
    *(undefined4 *)(puVar1 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar5;
    FUN_144a787a6(puVar1 + 4,param_3 + 3);
  }
LAB_145ade1cc:
  if (param_3[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ade228 FUN_145ade228 body=147 status=ok
// SIG undefined FUN_145ade228(void)

void FUN_145ade228(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ade2bc FUN_145ade2bc body=129 status=ok
// SIG undefined FUN_145ade2bc(void)

undefined8 * FUN_145ade2bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab8fb40;
  param_1[5] = &PTR_LAB_14ab90540;
  param_1[6] = &PTR_LAB_14ab90580;
  param_1[0x55] = &PTR_LAB_14ab905d0;
  param_1[0x56] = &PTR_LAB_14ab90650;
  param_1[0x57] = &PTR_LAB_14ab90660;
  FUN_145ade33e(param_1 + 0xc4);
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ade33e FUN_145ade33e body=124 status=ok
// SIG undefined FUN_145ade33e(void)

void FUN_145ade33e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145ade3ba FUN_145ade3ba body=68 status=ok
// SIG undefined FUN_145ade3ba(void)

void FUN_145ade3ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a28c370;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_145ade3fe(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145ade3fe FUN_145ade3fe body=67 status=ok
// SIG undefined FUN_145ade3fe(void)

void FUN_145ade3fe(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ade442 FUN_145ade442 body=139 status=ok
// SIG undefined FUN_145ade442(void)

void FUN_145ade442(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *(longlong *)(param_1 + 0x30);
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar3)(puVar3,local_48);
  }
  uVar2 = FUN_140315458();
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar1 = FUN_145af0668(puVar4,uVar2,local_58);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ade4ce FUN_145ade4ce body=106 status=ok
// SIG undefined FUN_145ade4ce(void)

undefined8 * FUN_145ade4ce(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a2a0610;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 145ade550 FUN_145ade550 body=139 status=ok
// SIG undefined FUN_145ade550(void)

void FUN_145ade550(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *(longlong *)(param_1 + 0x30);
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar3)(puVar3,local_48);
  }
  uVar2 = FUN_140282766();
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar1 = FUN_145af0668(puVar4,uVar2,local_58);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ade5dc FUN_145ade5dc body=106 status=ok
// SIG undefined FUN_145ade5dc(void)

undefined8 * FUN_145ade5dc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a337230;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 145ade66a FUN_145ade66a body=124 status=ok
// SIG undefined FUN_145ade66a(void)

undefined8 * FUN_145ade66a(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a503700;
  param_1[5] = &PTR_FUN_14a503a00;
  FUN_140ca8f8e(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x46) = 1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x30,lVar1 + 0xcc0);
  *(undefined4 *)(param_1 + 0x2d) = 6;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x418000003f400000;
  return param_1;
}



// FUNCTION 145ade6e6 FUN_145ade6e6 body=40 status=ok
// SIG undefined FUN_145ade6e6(void)

undefined8 FUN_145ade6e6(undefined8 param_1,int param_2)

{
  FUN_145ade70e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ade70e FUN_145ade70e body=57 status=ok
// SIG undefined FUN_145ade70e(void)

void FUN_145ade70e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a928a70;
  FUN_145ade747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ade747 FUN_145ade747 body=38 status=ok
// SIG undefined FUN_145ade747(void)

void FUN_145ade747(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c1ff90(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145ade778 FUN_145ade778 body=124 status=ok
// SIG undefined FUN_145ade778(void)

undefined8 * FUN_145ade778(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ab851e0;
  param_1[5] = &PTR_FUN_14ab85be0;
  param_1[6] = &PTR_LAB_14ab85c20;
  param_1[0x55] = &PTR_FUN_14ab85c70;
  param_1[0x56] = &PTR_FUN_14ab85cf0;
  param_1[0x57] = &PTR_FUN_14ab85d00;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) & 0xf3;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  return param_1;
}



// FUNCTION 145ade7f4 FUN_145ade7f4 body=40 status=ok
// SIG undefined FUN_145ade7f4(void)

undefined8 FUN_145ade7f4(undefined8 param_1,int param_2)

{
  FUN_145ade81c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ade81c FUN_145ade81c body=132 status=ok
// SIG undefined FUN_145ade81c(void)

void FUN_145ade81c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ad5fbb0;
  plVar3 = (longlong *)param_1[0x1b];
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
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a7dee(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145ade8a0(param_1);
  return;
}



// FUNCTION 145ade8a0 FUN_145ade8a0 body=98 status=ok
// SIG undefined FUN_145ade8a0(void)

void FUN_145ade8a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14adae1f0;
  FUN_144a76fd2(param_1 + 10);
  plVar3 = (longlong *)param_1[9];
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ade902 FUN_145ade902 body=92 status=ok
// SIG undefined FUN_145ade902(void)

undefined8 * FUN_145ade902(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aed4b10;
  param_1[5] = &PTR_LAB_14aed4db0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ade96a FUN_145ade96a body=31 status=ok
// SIG undefined FUN_145ade96a(void)

undefined8 FUN_145ade96a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ade994 FUN_145ade994 body=92 status=ok
// SIG undefined FUN_145ade994(void)

undefined8 * FUN_145ade994(undefined8 *param_1)

{
  FUN_145ade9f0();
  *param_1 = &PTR_FUN_14bedfad0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0x101;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x1010302;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 145ade9f0 FUN_145ade9f0 body=32 status=ok
// SIG undefined FUN_145ade9f0(void)

undefined8 * FUN_145ade9f0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bedc0a0;
  return param_1;
}



// FUNCTION 145adea10 FUN_145adea10 body=424 status=ok
// SIG undefined FUN_145adea10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145adea10(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  
  FUN_145adebf0();
  FUN_145adec3a();
  puVar2 = DAT_14ca80e68;
  if (DAT_14ca80e68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca80e68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (DAT_14ca80e48 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80e38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80e28 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80e00);
  if (DAT_14ca80df0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = -0x140;
  puVar3 = &DAT_14ca80d80;
  do {
    *(undefined4 *)(puVar3 + 0x48) = 0;
    if (*(longlong *)(puVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145adebb8(puVar3);
    puVar3 = puVar3 + -0x50;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0);
  _DAT_14ca80c88 = 0;
  if (DAT_14ca80c80 != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(&DAT_14ca80c40);
  _DAT_14ca80c38 = 0;
  if (DAT_14ca80c30 != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(&DAT_14ca80bf0);
  FUN_1414adea7(DAT_14ca80bd8,DAT_14ca80be0);
  if (DAT_14ca80bd8 != 0) {
    FUN_1400020a8();
  }
  FUN_1414adea7(DAT_14ca80bc8,DAT_14ca80bd0);
  if (DAT_14ca80bc8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145adebb8 FUN_145adebb8 body=55 status=ok
// SIG undefined FUN_145adebb8(void)

void FUN_145adebb8(longlong *param_1)

{
  FUN_1402a2cb4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145adebf0 FUN_145adebf0 body=74 status=ok
// SIG undefined FUN_145adebf0(void)

void FUN_145adebf0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar2 = DAT_14ca80ea0;
  puVar3 = DAT_14ca80eb0;
  do {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar1;
  } while (bVar4);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145adec3a FUN_145adec3a body=83 status=ok
// SIG undefined FUN_145adec3a(void)

void FUN_145adec3a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar2 = DAT_14ca80e80;
  puVar3 = DAT_14ca80e90;
  do {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar1;
  } while (bVar4);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_145711c9a(puVar1 + 1);
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145adec8e FUN_145adec8e body=254 status=ok
// SIG undefined FUN_145adec8e(void)

undefined8
FUN_145adec8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9af6e0;
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
  *local_48 = &PTR_FUN_14b9af670;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145aded8e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aded8e FUN_145aded8e body=216 status=ok
// SIG undefined FUN_145aded8e(void)

undefined8 * FUN_145aded8e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145adee74 FUN_145adee74 body=24 status=ok
// SIG undefined FUN_145adee74(void)

bool FUN_145adee74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145adee8c FUN_145adee8c body=254 status=ok
// SIG undefined FUN_145adee8c(void)

undefined8
FUN_145adee8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9b8990;
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
  *local_48 = &PTR_FUN_14b9b8920;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145adef8c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adef8c FUN_145adef8c body=216 status=ok
// SIG undefined FUN_145adef8c(void)

undefined8 * FUN_145adef8c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145adf072 FUN_145adf072 body=24 status=ok
// SIG undefined FUN_145adf072(void)

bool FUN_145adf072(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145adf08a FUN_145adf08a body=254 status=ok
// SIG undefined FUN_145adf08a(void)

undefined8
FUN_145adf08a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9b8a70;
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
  *local_48 = &PTR_FUN_14b9b8a00;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145adf18a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adf18a FUN_145adf18a body=216 status=ok
// SIG undefined FUN_145adf18a(void)

undefined8 * FUN_145adf18a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145adf270 FUN_145adf270 body=24 status=ok
// SIG undefined FUN_145adf270(void)

bool FUN_145adf270(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145adf288 FUN_145adf288 body=38 status=ok
// SIG undefined FUN_145adf288(void)

void FUN_145adf288(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140083894();
  FUN_145adf2ae();
  FUN_145adf30e(uVar1,&DAT_14cbf71a8);
  return;
}



// FUNCTION 145adf2ae FUN_145adf2ae body=96 status=ok
// SIG undefined FUN_145adf2ae(void)

void FUN_145adf2ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf7230) {
    FUN_144b3d300(&DAT_14cbf7230);
    if (DAT_14cbf7230 == -1) {
      FUN_145adf356();
      atexit((_func_5014 *)&LAB_14440b4cf);
      _Init_thread_footer(&DAT_14cbf7230);
      return;
    }
  }
  return;
}



// FUNCTION 145adf30e FUN_145adf30e body=71 status=ok
// SIG undefined FUN_145adf30e(void)

void FUN_145adf30e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_1414aded0(param_1 + 0x10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adf356 FUN_145adf356 body=125 status=ok
// SIG undefined FUN_145adf356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145adf356(void)

{
  _DAT_14cbf71b0 = 0;
  _DAT_14cbf71b8 = 0;
  DAT_14cbf71a8 = &PTR_FUN_14ba87dc0;
  _DAT_14cbf71e0 = 0;
  _DAT_14cbf71e8 = 0;
  _DAT_14cbf71c0 = 0;
  uRam000000014cbf71c8 = 0;
  _DAT_14cbf71ec = 0xffffffff00000080;
  _DAT_14cbf71f4 = 0;
  _DAT_14cbf7200 = 0;
  _DAT_14cbf7208 = 0;
  _DAT_14cbf7210 = 0;
  uRam000000014cbf7218 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14cbf7220);
  return;
}



// FUNCTION 145adf3e2 FUN_145adf3e2 body=40 status=ok
// SIG undefined FUN_145adf3e2(void)

undefined8 FUN_145adf3e2(undefined8 param_1,int param_2)

{
  FUN_145adf40a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adf40a FUN_145adf40a body=116 status=ok
// SIG undefined FUN_145adf40a(void)

void FUN_145adf40a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8590b0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145adf47e(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145adf47e(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145adf47e FUN_145adf47e body=55 status=ok
// SIG undefined FUN_145adf47e(void)

void FUN_145adf47e(longlong *param_1)

{
  FUN_1414adfa2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145adf4b6 FUN_145adf4b6 body=38 status=ok
// SIG undefined FUN_145adf4b6(void)

undefined8 FUN_145adf4b6(undefined8 param_1,int param_2)

{
  FUN_145adf4dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adf4dc FUN_145adf4dc body=165 status=ok
// SIG undefined FUN_145adf4dc(void)

void FUN_145adf4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9c9f80;
  FUN_140dd876d(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_140dd8e91(param_1[0x5e],*(undefined4 *)(param_1 + 0x5f));
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_140dd8e91(param_1[0x58],*(undefined4 *)(param_1 + 0x59));
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145adf582 FUN_145adf582 body=88 status=ok
// SIG undefined FUN_145adf582(void)

undefined8 * FUN_145adf582(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b27bbd0;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    if (param_1[0xaa] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  FUN_145adf5da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145adf5da FUN_145adf5da body=149 status=ok
// SIG undefined FUN_145adf5da(void)

void FUN_145adf5da(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b431ac0;
  FUN_144760e21(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x7a];
  if (lVar1 != 0) {
    FUN_146562aac(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1449db362(param_1 + 0x75);
  FUN_144760e21(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145adf67a FUN_145adf67a body=56 status=ok
// SIG undefined FUN_145adf67a(void)

undefined8 * FUN_145adf67a(undefined8 *param_1)

{
  FUN_145adf6b2();
  *param_1 = &PTR_FUN_14b88b560;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  return param_1;
}



// FUNCTION 145adf6b2 FUN_145adf6b2 body=814 status=ok
// SIG undefined FUN_145adf6b2(void)

undefined8 * FUN_145adf6b2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b46b300;
  param_1[5] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[4] = 0;
  param_1[7] = puVar5;
  param_1[6] = puVar5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0x2d000000500;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x94) = 1;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 200;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x41000000;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb7) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1b] = uVar1;
  param_1[0x1c] = DAT_14c8464f0;
  puVar5 = &DAT_14c846400;
  puVar7 = param_1 + 0x1e;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = &DAT_14c846400;
  puVar7 = param_1 + 0x2e;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x68) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x344) = uVar2;
  *(undefined4 *)(param_1 + 0x69) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34c) = uVar4;
  param_1[0x6a] = DAT_14c8464f0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ab) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b3) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff;
  param_1[0x79] = 0;
  FUN_140056680(param_1 + 0x7a,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e2) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0x10;
  *(undefined8 *)((longlong)param_1 + 0x422) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 4;
  *(undefined1 *)((longlong)param_1 + 0x434) = 0x10;
  *(undefined8 *)((longlong)param_1 + 0x436) = 0;
  param_1[0x88] = 4;
  *(undefined1 *)(param_1 + 0x89) = 0x10;
  *(undefined8 *)((longlong)param_1 + 0x44a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 4;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45d) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined2 *)(param_1 + 0x97) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0x3c23d70abf800000;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 5;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f9) = 0;
  *(undefined4 *)(param_1 + 0xa3) = 2;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 2;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined4 *)(param_1 + 0xa9) = 2;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0xac) = 2;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 2;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  param_1[0xb7] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5c3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0;
  return param_1;
}



// FUNCTION 145adf9e0 FUN_145adf9e0 body=9 status=ok
// SIG undefined FUN_145adf9e0(void)

void FUN_145adf9e0(longlong param_1)

{
  FUN_145adf9ea(param_1 + 0x10);
  return;
}



// FUNCTION 145adf9ea FUN_145adf9ea body=155 status=ok
// SIG undefined FUN_145adf9ea(void)

void FUN_145adf9ea(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145adfa86(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145adfa86 FUN_145adfa86 body=53 status=ok
// SIG undefined FUN_145adfa86(void)

void FUN_145adfa86(longlong *param_1)

{
  FUN_145adfabc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145adfabc FUN_145adfabc body=88 status=ok
// SIG undefined FUN_145adfabc(void)

void FUN_145adfabc(longlong param_1)

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



// FUNCTION 145adfb1c FUN_145adfb1c body=297 status=ok
// SIG undefined FUN_145adfb1c(void)

undefined8 * FUN_145adfb1c(undefined8 *param_1)

{
  FUN_141333e36();
  *param_1 = &PTR_FUN_14ac43f80;
  FUN_140785382(param_1 + 0x3d,10);
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x45) = 0x101;
  *param_1 = &PTR_FUN_14b603c90;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x4a) = 4;
  *(undefined4 *)(param_1 + 0x47) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x4b) = 3;
  *(char *)(param_1 + 0x4c) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x4d] = 0;
  *(undefined2 *)(param_1 + 0x51) = 4;
  *(undefined4 *)(param_1 + 0x4e) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x52) = 3;
  *(char *)(param_1 + 0x53) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x58) = 4;
  *(undefined4 *)(param_1 + 0x55) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x59) = 3;
  *(char *)(param_1 + 0x5a) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 4;
  *(undefined4 *)(param_1 + 0x5c) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x60) = 3;
  *(char *)(param_1 + 0x61) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 145adfc46 FUN_145adfc46 body=170 status=ok
// SIG undefined FUN_145adfc46(void)

void FUN_145adfc46(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    lVar2 = FUN_1400d7050(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_38 = FUN_141143fc4;
        local_30 = 0;
        FUN_145adfcf2(lVar2 + 0x3d88,&local_28,param_1 + -6);
        param_1[3] = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adfcf2 FUN_145adfcf2 body=254 status=ok
// SIG undefined FUN_145adfcf2(void)

undefined8
FUN_145adfcf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9aef00;
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
  *local_48 = &PTR_FUN_14b9aee90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145adfdf2(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145adfdf2 FUN_145adfdf2 body=216 status=ok
// SIG undefined FUN_145adfdf2(void)

undefined8 * FUN_145adfdf2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145adfed8 FUN_145adfed8 body=24 status=ok
// SIG undefined FUN_145adfed8(void)

bool FUN_145adfed8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145adfef0 FUN_145adfef0 body=349 status=ok
// SIG undefined FUN_145adfef0(void)

void FUN_145adfef0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 *local_88;
  undefined4 local_7c;
  longlong local_78;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = FUN_1447210f0();
  local_7c = FUN_145ae004e();
  local_88 = &local_7c;
  local_90 = &local_78;
  FUN_1414ae211(local_70);
  FUN_1414ae31c(&local_90,local_70,param_1 + 0xdac,param_1 + 0xdb0);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1414ae1a9(local_70);
  FUN_1414ae31c(&local_90,local_70,param_1 + 0xda8,param_1 + 0xdb4);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_145ae009c(param_1);
  FUN_145ae0290(param_1);
  FUN_145ae0484(param_1);
  FUN_145ae0054(param_1);
  FUN_1414ae27a(param_1);
  if (((*(char *)(param_1 + 0x6b5) == '\x01') && (DAT_14c872bf2 == '\x01')) && (local_78 != 0)) {
    lVar1 = FUN_1400f6f32();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_1489b060a(*(longlong *)(lVar1 + 0x30),param_3,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae004e FUN_145ae004e body=6 status=ok
// SIG undefined FUN_145ae004e(void)

undefined8 FUN_145ae004e(void)

{
  return 7;
}



// FUNCTION 145ae0054 FUN_145ae0054 body=72 status=ok
// SIG undefined FUN_145ae0054(void)

void FUN_145ae0054(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = FUN_1447210f0();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_140704886();
      if (lVar1 != 0) {
        FUN_1414ae486(lVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ae009c FUN_145ae009c body=499 status=ok
// SIG undefined FUN_145ae009c(void)

void FUN_145ae009c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined8 local_ec;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0xdb8) == 0) {
    local_f0[0] = 0;
    local_ec = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    iStack_c8 = 0;
    local_c0 = 0xc69c4000;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_5f = 1;
    local_5d = 0;
    local_5c = 0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar4 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[2] = lVar5;
    *local_58 = &PTR_FUN_14b996b90;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,param_1);
    puVar4[4] = FUN_148dc0cde;
    *(undefined4 *)(puVar4 + 5) = 0;
    FUN_144a450dc(&uStack_d0,&local_58);
    FUN_1449db362(&local_58);
    uVar2 = FUN_1447210f0(param_1);
    FUN_1414ae211(&local_58);
    lVar3 = FUN_140149a73(uVar2,0);
    if (lVar3 == 0) {
      local_5c = 2;
    }
    else {
      FUN_140983ba6(&local_58,lVar3,local_f0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined8 *)0x0;
    if ((iStack_c8 != 0) &&
       (plVar1 = (longlong *)CONCAT44(uStack_cc,uStack_d0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
      puVar4 = local_58;
    }
    *(undefined8 **)(param_1 + 0xdb8) = puVar4;
    FUN_1409838b8(local_f0);
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae0290 FUN_145ae0290 body=499 status=ok
// SIG undefined FUN_145ae0290(void)

void FUN_145ae0290(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined8 local_ec;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0xdc0) == 0) {
    local_f0[0] = 0;
    local_ec = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    iStack_c8 = 0;
    local_c0 = 0xc69c4000;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_5f = 1;
    local_5d = 0;
    local_5c = 0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar4 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[2] = lVar5;
    *local_58 = &PTR_FUN_14b996b90;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,param_1);
    puVar4[4] = FUN_148dc0d8a;
    *(undefined4 *)(puVar4 + 5) = 0;
    FUN_144a450dc(&uStack_d0,&local_58);
    FUN_1449db362(&local_58);
    uVar2 = FUN_1447210f0(param_1);
    FUN_1414ae1a9(&local_58);
    lVar3 = FUN_140149a73(uVar2,0);
    if (lVar3 == 0) {
      local_5c = 2;
    }
    else {
      FUN_140983ba6(&local_58,lVar3,local_f0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined8 *)0x0;
    if ((iStack_c8 != 0) &&
       (plVar1 = (longlong *)CONCAT44(uStack_cc,uStack_d0), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
      puVar4 = local_58;
    }
    *(undefined8 **)(param_1 + 0xdc0) = puVar4;
    FUN_1409838b8(local_f0);
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae0484 FUN_145ae0484 body=655 status=ok
// SIG undefined FUN_145ae0484(void)

void FUN_145ae0484(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((longlong)*(int *)(param_1 + 0x6d0) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x6c8);
    lVar5 = (longlong)*(int *)(param_1 + 0x6d0) * 0x60;
    lVar1 = lVar7 + 0x28;
    lVar9 = 0;
    local_118 = lVar7;
    local_110 = lVar5;
    do {
      if ((DAT_14cb758b8 != 0) && (lVar4 = FUN_144837462(DAT_14cb758b8,lVar1 + lVar9), lVar4 != 0))
      {
        cVar3 = FUN_140114204(lVar4 + 0x68);
        if ((cVar3 != '\0') && (*(longlong *)(lVar7 + 0x58 + lVar9) == 0)) {
          local_f8[0] = 0;
          local_f4 = 0;
          local_ec = 0;
          local_e8 = 0;
          uStack_d4 = 0;
          iStack_d0 = 0;
          local_e4 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          local_c8 = 0xc69c4000;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_67 = 1;
          local_65 = 0;
          local_64 = 0;
          local_108 = (undefined8 *)0x0;
          local_100 = 0;
          FUN_1446efa72(&local_108,0,3,0x10);
          puVar8 = local_108;
          local_100 = 3;
          *local_108 = &PTR_LAB_14b996c70;
          local_108[1] = lVar4;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_108[2] = lVar5;
          *local_108 = &PTR_FUN_14b996c00;
          local_108[3] = 0;
          FUN_14485c47a(local_108 + 3,param_1);
          puVar8[4] = FUN_1461be5cc;
          *(undefined4 *)(puVar8 + 5) = 0;
          FUN_144a450dc(&uStack_d8,&local_108);
          FUN_1449db362(&local_108);
          uStack_b8 = FUN_1401b2ade(param_1);
          uVar6 = FUN_1447210f0(param_1);
          lVar7 = FUN_140149a73(uVar6,0);
          if (lVar7 == 0) {
            local_64 = 2;
          }
          else {
            FUN_140983ba6(lVar4 + 0x68,lVar7,local_f8);
          }
          lVar7 = local_118;
          if (iStack_d0 == 0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            plVar2 = (longlong *)CONCAT44(uStack_d4,uStack_d8);
            puVar8 = (undefined8 *)0x0;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x38))(plVar2,&local_108);
              puVar8 = local_108;
            }
          }
          *(undefined8 **)(lVar7 + 0x58 + lVar9) = puVar8;
          FUN_1409838b8(local_f8);
          lVar5 = local_110;
        }
      }
      lVar9 = lVar9 + 0x60;
    } while (lVar5 != lVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae0720 FUN_145ae0720 body=40 status=ok
// SIG undefined FUN_145ae0720(void)

undefined8 FUN_145ae0720(undefined8 param_1,int param_2)

{
  FUN_145ae0748();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae0748 FUN_145ae0748 body=773 status=ok
// SIG undefined FUN_145ae0748(void)

void FUN_145ae0748(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b92cec0;
  param_1[0x72] = &PTR_FUN_14b92d590;
  param_1[0x73] = &PTR_FUN_14b92d610;
  param_1[0x74] = &PTR_FUN_14b92d680;
  param_1[0x75] = &PTR_FUN_14b92d6a8;
  param_1[0x76] = &PTR_FUN_14b92d6c0;
  param_1[0xa4] = &PTR_FUN_14b92d6f0;
  param_1[0xa5] = &PTR_FUN_14b92d740;
  param_1[0xa6] = &PTR_FUN_14b92d770;
  param_1[0xa7] = &PTR_FUN_14b92d7a0;
  param_1[0xa8] = &PTR_FUN_14b92d7b8;
  param_1[0x118] = &PTR_FUN_14b92d7d0;
  param_1[0x119] = &PTR_FUN_14b92d800;
  param_1[0x11a] = &PTR_FUN_14b92d830;
  param_1[0x11b] = &PTR_FUN_14b92d860;
  puVar1 = (undefined8 *)param_1[0x154];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x153];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x152];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1449e6b18((longlong)param_1 + 0xa7c);
  FUN_1449e6b18(param_1 + 0x14e);
  FUN_1449e6b18((longlong)param_1 + 0xa64);
  FUN_1449e6b18(param_1 + 0x14b);
  FUN_1449e6b18((longlong)param_1 + 0xa4c);
  FUN_1449e6b18(param_1 + 0x148);
  FUN_1449e6b18((longlong)param_1 + 0xa34);
  FUN_1449e6b18(param_1 + 0x145);
  FUN_140368c45(param_1[0x133],*(undefined4 *)(param_1 + 0x134));
  if (param_1[0x133] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[0x131],*(undefined4 *)(param_1 + 0x132));
  if (param_1[0x131] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12f] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef6a7a(param_1[0x12d],*(undefined4 *)(param_1 + 0x12e));
  if (param_1[0x12d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x128] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x124] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x120] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11c] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef7316(param_1);
  return;
}



// FUNCTION 145ae0a4e FUN_145ae0a4e body=29 status=ok
// SIG undefined FUN_145ae0a4e(void)

undefined8 FUN_145ae0a4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae0a6c FUN_145ae0a6c body=38 status=ok
// SIG undefined FUN_145ae0a6c(void)

undefined8 FUN_145ae0a6c(undefined8 param_1,int param_2)

{
  FUN_145ae0a92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae0a92 FUN_145ae0a92 body=188 status=ok
// SIG undefined FUN_145ae0a92(void)

void FUN_145ae0a92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b92d9e0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x22] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x22] + 0x50));
  }
  if ((param_1[0x1c] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1c] + 0x50));
  }
  if ((param_1[0x16] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x16] + 0x50));
  }
  if ((param_1[0x10] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x10] + 0x50));
    return;
  }
  return;
}



// FUNCTION 145ae0b5c FUN_145ae0b5c body=45 status=ok
// SIG undefined FUN_145ae0b5c(void)

undefined8 FUN_145ae0b5c(undefined8 param_1,int param_2)

{
  FUN_145ae0b8a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 145ae0b8a FUN_145ae0b8a body=232 status=ok
// SIG undefined FUN_145ae0b8a(void)

void FUN_145ae0b8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b182880;
  FUN_1414aeae6(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae0c72(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae0caa(param_1 + 0x16);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145ae0c72 FUN_145ae0c72 body=55 status=ok
// SIG undefined FUN_145ae0c72(void)

void FUN_145ae0c72(longlong *param_1)

{
  FUN_145ae0d5c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae0caa FUN_145ae0caa body=55 status=ok
// SIG undefined FUN_145ae0caa(void)

void FUN_145ae0caa(longlong *param_1)

{
  FUN_145ae0ce2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae0ce2 FUN_145ae0ce2 body=121 status=ok
// SIG undefined FUN_145ae0ce2(void)

void FUN_145ae0ce2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145ae0d5c FUN_145ae0d5c body=349 status=ok
// SIG undefined FUN_145ae0d5c(void)

void FUN_145ae0d5c(longlong *param_1,int param_2)

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
      FUN_14583c236(*local_70 + (longlong)iStack_54 * 0x68 + 8);
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
    FUN_14059f004(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae0ebc FUN_145ae0ebc body=344 status=ok
// SIG undefined FUN_145ae0ebc(void)

void FUN_145ae0ebc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  local_1c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145ae1016(puVar2,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae1016 FUN_145ae1016 body=146 status=ok
// SIG undefined FUN_145ae1016(void)

void FUN_145ae1016(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_38 = param_2;
  FUN_141107e97(param_1,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae10aa FUN_145ae10aa body=40 status=ok
// SIG undefined FUN_145ae10aa(void)

undefined8 FUN_145ae10aa(undefined8 param_1,int param_2)

{
  FUN_145ae10d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae10d2 FUN_145ae10d2 body=622 status=ok
// SIG undefined FUN_145ae10d2(void)

void FUN_145ae10d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b19c230;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (param_1[0xf7] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae1340(param_1 + 0xef);
  *(undefined4 *)(param_1 + 0xee) = 0;
  if (param_1[0xed] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae1340(param_1 + 0xe5);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (param_1[0xe3] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(param_1 + 0xdb);
  FUN_1456d172d(param_1[0xd9],*(undefined4 *)(param_1 + 0xda));
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd7) = 0;
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae13b0(param_1 + 0xce);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae13e6(param_1 + 0xc3);
  *(undefined4 *)(param_1 + 0xc2) = 0;
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae141c(param_1 + 0xb9);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae1452(param_1 + 0xaf);
  *(undefined4 *)(param_1 + 0xae) = 0;
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  FUN_14144e2c2(param_1 + 0xa5);
  FUN_145ae1376(param_1 + 0x81);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae1488(param_1 + 0x77);
  FUN_145ae14bd(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_14121cc12(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145ae1340 FUN_145ae1340 body=53 status=ok
// SIG undefined FUN_145ae1340(void)

void FUN_145ae1340(longlong *param_1)

{
  FUN_145ae15be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae1376 FUN_145ae1376 body=58 status=ok
// SIG undefined FUN_145ae1376(void)

void FUN_145ae1376(longlong param_1)

{
  FUN_1458454e0(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1);
  return;
}



// FUNCTION 145ae13b0 FUN_145ae13b0 body=53 status=ok
// SIG undefined FUN_145ae13b0(void)

void FUN_145ae13b0(longlong *param_1)

{
  FUN_145ae150a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae13e6 FUN_145ae13e6 body=53 status=ok
// SIG undefined FUN_145ae13e6(void)

void FUN_145ae13e6(longlong *param_1)

{
  FUN_145ae19b8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae141c FUN_145ae141c body=53 status=ok
// SIG undefined FUN_145ae141c(void)

void FUN_145ae141c(longlong *param_1)

{
  FUN_145ae1564();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae1452 FUN_145ae1452 body=53 status=ok
// SIG undefined FUN_145ae1452(void)

void FUN_145ae1452(longlong *param_1)

{
  FUN_145ae185a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae1488 FUN_145ae1488 body=53 status=ok
// SIG undefined FUN_145ae1488(void)

void FUN_145ae1488(longlong *param_1)

{
  FUN_145ae1710();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae14bd FUN_145ae14bd body=77 status=ok
// SIG undefined FUN_145ae14bd(void)

void FUN_145ae14bd(longlong param_1,int param_2)

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



// FUNCTION 145ae150a FUN_145ae150a body=90 status=ok
// SIG undefined FUN_145ae150a(void)

void FUN_145ae150a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145ae1564 FUN_145ae1564 body=90 status=ok
// SIG undefined FUN_145ae1564(void)

void FUN_145ae1564(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145ae15be FUN_145ae15be body=337 status=ok
// SIG undefined FUN_145ae15be(void)

void FUN_145ae15be(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae1710 FUN_145ae1710 body=329 status=ok
// SIG undefined FUN_145ae1710(void)

void FUN_145ae1710(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_14582d750((longlong)iStack_4c * 0x50 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae185a FUN_145ae185a body=348 status=ok
// SIG undefined FUN_145ae185a(void)

void FUN_145ae185a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae19b8 FUN_145ae19b8 body=353 status=ok
// SIG undefined FUN_145ae19b8(void)

void FUN_145ae19b8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae1b1a FUN_145ae1b1a body=173 status=ok
// SIG undefined FUN_145ae1b1a(void)

ulonglong FUN_145ae1b1a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ae1bc8(param_1,&local_30);
  if ((local_30 == 0) || (*(int *)(local_30 + 8) < 1)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      uVar3 = FUN_1406d9ab2();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      param_1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    bVar5 = 1 < *(int *)(param_1 + 8);
  }
  else {
    bVar5 = true;
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae1bc8 FUN_145ae1bc8 body=182 status=ok
// SIG undefined FUN_145ae1bc8(void)

undefined8 * FUN_145ae1bc8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar3 = FUN_1406d9ab2();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_28);
    *param_2 = local_28;
    param_2[1] = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ae1c8c FUN_145ae1c8c body=57 status=ok
// SIG undefined FUN_145ae1c8c(void)

void FUN_145ae1c8c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14a176320;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145ae1ccc FUN_145ae1ccc body=63 status=ok
// SIG undefined FUN_145ae1ccc(void)

undefined8 FUN_145ae1ccc(undefined2 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_14019108b(uVar1);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_144880847(uVar1,0);
    uVar3 = 1;
    if (cVar2 == '\0') {
      uVar3 = FUN_142dc9966(*param_1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 145ae1d14 FUN_145ae1d14 body=128 status=ok
// SIG undefined FUN_145ae1d14(void)

undefined8 * FUN_145ae1d14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *param_1 = &PTR_FUN_14a3e2b80;
  FUN_1400b22c2(param_1 + 0xf,&DAT_149e02088);
  param_1[0x11] = 0;
  param_1[0x12] = DAT_14c99d1d8;
  *(undefined2 *)(param_1 + 0x13) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x9a) = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 145ae1d94 FUN_145ae1d94 body=68 status=ok
// SIG undefined FUN_145ae1d94(void)

void FUN_145ae1d94(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae1dd8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e3a10;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xba) = 1;
  return;
}



// FUNCTION 145ae1dd8 FUN_145ae1dd8 body=68 status=ok
// SIG undefined FUN_145ae1dd8(void)

undefined8 * FUN_145ae1dd8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5e4a20;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0xfb;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 145ae1e28 FUN_145ae1e28 body=125 status=ok
// SIG undefined FUN_145ae1e28(void)

undefined8 * FUN_145ae1e28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6df1c0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145ae1eb0 FUN_145ae1eb0 body=57 status=ok
// SIG undefined FUN_145ae1eb0(void)

undefined8 * FUN_145ae1eb0(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a775a50;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145ae1ef8 FUN_145ae1ef8 body=54 status=ok
// SIG undefined FUN_145ae1ef8(void)

undefined8 * FUN_145ae1ef8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae1f3c FUN_145ae1f3c body=54 status=ok
// SIG undefined FUN_145ae1f3c(void)

undefined8 * FUN_145ae1f3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae1f80 FUN_145ae1f80 body=54 status=ok
// SIG undefined FUN_145ae1f80(void)

undefined8 * FUN_145ae1f80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae1fbe FUN_145ae1fbe body=60 status=ok
// SIG undefined FUN_145ae1fbe(void)

undefined8 * FUN_145ae1fbe(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2ca2a0;
  param_1[6] = &PTR_FUN_14b2ca590;
  param_1[0x13] = 0x3f80000041200000;
  return param_1;
}



// FUNCTION 145ae2006 FUN_145ae2006 body=57 status=ok
// SIG undefined FUN_145ae2006(void)

undefined8 * FUN_145ae2006(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b43c690;
  if (DAT_14cb90b78 == '\0') {
    DAT_14cb90b78 = '\x01';
    FUN_140861e20(0,0);
  }
  return param_1;
}



// FUNCTION 145ae204a FUN_145ae204a body=57 status=ok
// SIG undefined FUN_145ae204a(void)

undefined8 * FUN_145ae204a(undefined8 *param_1)

{
  FUN_1457913e0();
  *param_1 = &PTR_FUN_14b532a90;
  param_1[5] = &PTR_FUN_14b533030;
  param_1[0x2d] = &PTR_FUN_14b533070;
  return param_1;
}



// FUNCTION 145ae2092 FUN_145ae2092 body=54 status=ok
// SIG undefined FUN_145ae2092(void)

undefined8 * FUN_145ae2092(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae20d6 FUN_145ae20d6 body=54 status=ok
// SIG undefined FUN_145ae20d6(void)

undefined8 * FUN_145ae20d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae210c FUN_145ae210c body=45 status=ok
// SIG undefined FUN_145ae210c(void)

void FUN_145ae210c(longlong param_1)

{
  FUN_145ae2139(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ae2139 FUN_145ae2139 body=40 status=ok
// SIG undefined FUN_145ae2139(void)

void FUN_145ae2139(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148e21f3e(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 145ae2161 FUN_145ae2161 body=88 status=ok
// SIG undefined FUN_145ae2161(void)

void FUN_145ae2161(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae21ba(puVar1);
  *puVar1 = &PTR_FUN_14bd0ae20;
  puVar1[0x21] = &PTR_FUN_14bd0b130;
  puVar1[0x22] = &PTR_FUN_14bd0b160;
  puVar1[0x23] = &PTR_FUN_14bd0b180;
  puVar1[0x24] = &PTR_FUN_14bd0b198;
  return;
}



// FUNCTION 145ae21ba FUN_145ae21ba body=183 status=ok
// SIG undefined FUN_145ae21ba(void)

undefined8 * FUN_145ae21ba(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411b565c();
  *param_1 = &PTR_FUN_14bd0d3d0;
  param_1[0x21] = &PTR_FUN_14bd0d6e0;
  param_1[0x22] = &PTR_FUN_14bd0d710;
  param_1[0x23] = &PTR_FUN_14bd0d730;
  param_1[0x24] = &PTR_FUN_14bd0d748;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_1 + 0x28);
  FUN_140e6507e(param_1 + 0x2e);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae2272 FUN_145ae2272 body=339 status=ok
// SIG undefined FUN_145ae2272(void)

void FUN_145ae2272(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  undefined8 local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145ae29ec();
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    local_88 = FUN_140082f10();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    FUN_145ae27ae(local_80,lVar1,&local_88);
    if (local_5c == '\0') {
      do {
        (**(code **)(*param_1 + 0x738))(param_1,local_50);
        FUN_145ae2832(local_80);
      } while (local_5c == '\0');
    }
    if (local_28 == '\x01') {
      FUN_14024445c(local_78);
    }
  }
  FUN_14034eff0(param_1);
  FUN_145ae23c6(&DAT_14cb71688,local_80,param_1,FUN_1486b12da);
  FUN_145ae23c6(&DAT_14cb716a0,local_80,param_1,FUN_1486b1338);
  FUN_145ae25ba(&DAT_14cb71658,local_80,param_1,FUN_1486b1396);
  FUN_145ae25ba(&DAT_14cb71670,local_80,param_1,FUN_1486b13f8);
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae23c6 FUN_145ae23c6 body=244 status=ok
// SIG undefined FUN_145ae23c6(void)

undefined8
FUN_145ae23c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b403cd0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b403c60;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ae24bc(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae24bc FUN_145ae24bc body=216 status=ok
// SIG undefined FUN_145ae24bc(void)

undefined8 * FUN_145ae24bc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ae25a2 FUN_145ae25a2 body=24 status=ok
// SIG undefined FUN_145ae25a2(void)

bool FUN_145ae25a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ae25ba FUN_145ae25ba body=244 status=ok
// SIG undefined FUN_145ae25ba(void)

undefined8
FUN_145ae25ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b403b80;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b403d40;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_145ae26b0(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae26b0 FUN_145ae26b0 body=216 status=ok
// SIG undefined FUN_145ae26b0(void)

undefined8 * FUN_145ae26b0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ae2796 FUN_145ae2796 body=24 status=ok
// SIG undefined FUN_145ae2796(void)

bool FUN_145ae2796(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ae27ae FUN_145ae27ae body=130 status=ok
// SIG undefined FUN_145ae27ae(void)

undefined4 * FUN_145ae27ae(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_145ae2832(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae2832 FUN_145ae2832 body=442 status=ok
// SIG undefined FUN_145ae2832(void)

void FUN_145ae2832(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar12 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar11;
      puVar10 = param_1 + 4;
      if (lVar12 <= lVar11) {
        lVar9 = lVar11 - lVar12;
        puVar10 = param_1 + 0xe;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar10 + lVar9 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar6 = FUN_144a79cc8(lVar9), lVar6 != 0)) &&
         ((uVar1 = *param_1, (uVar1 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar1 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_145ae29cf;
          uVar1 = *param_1;
        }
        if ((uVar1 & 4) != 0) {
          if (((*(byte *)(lVar6 + 0x240) & 0x20) == 0) ||
             (bVar4 = 1, (*(byte *)(lVar6 + 0x242) & 8) != 0)) {
            bVar4 = 1;
            if ((*(byte *)(lVar6 + 0x241) & 0x20) == 0) {
              bVar4 = (*(byte *)(lVar6 + 0x241) & 0x40) >> 6;
            }
          }
          pcVar3 = *(char **)(lVar6 + 0x2e8);
          if (*(longlong *)(lVar6 + 0xc0) == 0) {
            pcVar7 = (char *)0x0;
          }
          else {
            pcVar7 = (char *)FUN_144a8afea();
          }
          if (pcVar3 == (char *)0x0) {
            bVar13 = true;
          }
          else {
            bVar13 = *pcVar3 == '\x02';
          }
          if ((bVar4 & ((pcVar7 == (char *)0x0 || pcVar3 == pcVar7) | bVar13)) != 1)
          goto LAB_145ae29cf;
        }
        lVar8 = FUN_144a8afe2(lVar6);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar6) {
LAB_145ae295b:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar11;
            return;
          }
          lVar6 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_145ae295b;
        }
      }
LAB_145ae29cf:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar12);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 145ae29ec FUN_145ae29ec body=425 status=ok
// SIG undefined FUN_145ae29ec(void)

void FUN_145ae29ec(longlong param_1)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145ae2b96();
  uVar3 = FUN_1401b4c98(param_1);
  plVar4 = (longlong *)FUN_14093f908(param_1);
  fVar7 = (float)(**(code **)(*plVar4 + 0x668))(plVar4);
  lVar5 = FUN_14093f908(param_1);
  fVar1 = *(float *)(lVar5 + 0x4d0);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar2 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_c0[2] = lVar6;
  *local_c0 = &PTR_FUN_14a909b80;
  local_c0[3] = 0;
  FUN_14485c47a(local_c0 + 3,param_1);
  puVar2[4] = &LAB_14093f654;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 1;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar3,param_1 + 0x408,&local_a8,fVar7 / fVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  FUN_1449db362(&local_c0);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae2b96 FUN_145ae2b96 body=635 status=ok
// SIG undefined FUN_145ae2b96(void)

void FUN_145ae2b96(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  longlong local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0 [7];
  char local_94;
  undefined8 local_88;
  byte local_78;
  char local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141348dd0();
  lVar5 = FUN_1447210f0(param_1);
  FUN_145ae2e96(lVar5,param_1);
  uVar6 = FUN_1401b4c98(param_1);
  bVar2 = *(byte *)(lVar5 + 0x152);
  if (((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
     ((char)param_1[0x2f] == '\x03')) {
    (**(code **)(*param_1 + 0x6b8))(param_1);
    fVar1 = *(float *)((longlong)param_1 + 0x3cc);
    if (0.0 < fVar1) {
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_d0[2] = lVar7;
      *local_d0 = &PTR_FUN_14a909bf0;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,param_1);
      puVar3[4] = &LAB_140310ccc;
      local_b8 = 0;
      local_b0[0] = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_e8 = local_c0;
      local_c0[0] = 1;
      local_bc = 0xbf800000;
      FUN_1406f4044(uVar6,param_1 + 0x7a,&local_b8,fVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
    }
  }
  local_d8 = FUN_1400d1928();
  if ((local_d8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_d8);
  }
  FUN_145ae2e12(&local_b8,lVar5,&local_d8);
  if (local_94 == '\0') {
    do {
      (**(code **)(*param_1 + 0x688))(param_1,local_88);
      FUN_145ae3022(&local_b8);
    } while (local_94 == '\0');
  }
  if (local_60 == '\x01') {
    FUN_14024445c(local_b0);
  }
  if ((int)param_1[0x76] != 0) {
    FUN_145bdcbf2(param_1);
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae2e12 FUN_145ae2e12 body=130 status=ok
// SIG undefined FUN_145ae2e12(void)

undefined4 * FUN_145ae2e12(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_145ae3022(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae2e96 FUN_145ae2e96 body=233 status=ok
// SIG undefined FUN_145ae2e96(void)

void FUN_145ae2e96(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  if (*(longlong *)(param_1 + 0x178) == param_2) {
    return;
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x178) = param_2;
    if (param_2 == 0) goto LAB_145ae2f1f;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x178) = param_2;
  }
  lVar1 = FUN_144a79cc8(param_2);
  if ((lVar1 != 0) && (pcVar2 = *(char **)(lVar1 + 0x2e8), pcVar2 != (char *)0x0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(pcVar2 + 8) = param_2;
    if ((*pcVar2 == '\0') && ((longlong)*(int *)(param_1 + 0x1a8) != 0)) {
      pcVar2 = *(char **)(param_1 + 0x1a0);
      lVar1 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
      do {
        if (*pcVar2 == '\x02') {
          if (pcVar2 != (char *)0x0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(param_2);
            }
            *(longlong *)(pcVar2 + 8) = param_2;
          }
          break;
        }
        pcVar2 = pcVar2 + 0x78;
        lVar1 = lVar1 + -0x78;
      } while (lVar1 != 0);
    }
  }
LAB_145ae2f1f:
  FUN_145ae2f80(param_1 + 0x800,*(undefined8 *)(param_1 + 0x178));
  return;
}



// FUNCTION 145ae2f80 FUN_145ae2f80 body=162 status=ok
// SIG undefined FUN_145ae2f80(void)

void FUN_145ae2f80(longlong *param_1,undefined8 param_2)

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
        goto LAB_145ae300d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ae300d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ae3022 FUN_145ae3022 body=475 status=ok
// SIG undefined FUN_145ae3022(void)

void FUN_145ae3022(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint *puVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar6 = lVar12;
      puVar9 = param_1 + 4;
      if (lVar13 <= lVar12) {
        lVar6 = lVar12 - lVar13;
        puVar9 = param_1 + 0xe;
      }
      lVar6 = *(longlong *)(*(longlong *)puVar9 + lVar6 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar6 != 0) && (lVar7 = FUN_144a79cc8(lVar6), lVar7 != 0)) &&
         ((uVar5 = *param_1, (uVar5 & 1) == 0 || ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar5 & 2) != 0) {
          cVar4 = FUN_144affb44(lVar6);
          if (cVar4 == '\0') goto LAB_145ae31e5;
          uVar5 = *param_1;
        }
        if ((uVar5 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_145ae3173:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_145ae3173;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_145ae31e5;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_145ae3166:
            *(longlong *)(param_1 + 0xc) = lVar6;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_145ae3166;
        }
      }
LAB_145ae31e5:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 145ae31fe FUN_145ae31fe body=109 status=ok
// SIG undefined FUN_145ae31fe(void)

void FUN_145ae31fe(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x39a) & 0x20) == 0) {
    local_18 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_145ae326c(param_1 + 0x3a8,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae326c FUN_145ae326c body=188 status=ok
// SIG undefined FUN_145ae326c(void)

void FUN_145ae326c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ae3328(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 145ae3328 FUN_145ae3328 body=132 status=ok
// SIG undefined FUN_145ae3328(void)

void FUN_145ae3328(longlong param_1,int param_2)

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



// FUNCTION 145ae33ac FUN_145ae33ac body=148 status=ok
// SIG undefined FUN_145ae33ac(void)

bool FUN_145ae33ac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae3442 FUN_145ae3442 body=86 status=ok
// SIG undefined FUN_145ae3442(void)

void FUN_145ae3442(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1414af4b4();
  local_20 = param_1;
  FUN_1414af2f8(&local_20,0);
  FUN_1414af2f8(&local_20,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae349a FUN_145ae349a body=124 status=ok
// SIG undefined FUN_145ae349a(void)

void FUN_145ae349a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (*(int *)(param_1 + 0x1b0) < 1) {
      FUN_1415522a8(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x1b) == '\0')) {
        (**(code **)(*plVar3 + 0x48))();
        (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x78))();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  FUN_145ae3518(param_1);
  return;
}



// FUNCTION 145ae3518 FUN_145ae3518 body=148 status=ok
// SIG undefined FUN_145ae3518(void)

int FUN_145ae3518(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x1b0);
  if (lVar5 < 1) {
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 << 4;
    iVar4 = 0;
    do {
      lVar5 = lVar5 + -0x10;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + lVar5);
      iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1);
      if (iVar2 == -1) {
        FUN_140033559(".\\Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp",0x4ae,
                      L"Handler returned invalid \'GetReservedPacketBits\' value.");
      }
      else {
        *(int *)((longlong)plVar1 + 0x14) = iVar3;
        iVar3 = iVar3 - iVar2;
        iVar4 = iVar4 + iVar2;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
    iVar4 = iVar4 + (uint)(0 < *(int *)(param_1 + 0x1b0));
  }
  return iVar4;
}



// FUNCTION 145ae35ac FUN_145ae35ac body=41 status=ok
// SIG undefined FUN_145ae35ac(void)

void FUN_145ae35ac(undefined8 param_1)

{
  FUN_145ae35d6();
  FUN_1413d8c86(param_1);
  FUN_1413d8be4(&DAT_14cb89728,param_1);
  return;
}



// FUNCTION 145ae35d6 FUN_145ae35d6 body=165 status=ok
// SIG undefined FUN_145ae35d6(void)

void FUN_145ae35d6(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141220240(param_1,&local_28);
  if (param_1 + 0x87 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x87] != 0) {
      FUN_1400020a8();
    }
    param_1[0x87] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0x88) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x444) = local_1c;
  }
  (**(code **)(*param_1 + 0x6f0))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae367c FUN_145ae367c body=475 status=ok
// SIG undefined FUN_145ae367c(void)

void FUN_145ae367c(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_1447210f0();
  if ((lVar5 == 0) || (*(double *)(lVar5 + 0x6d0) <= 2.0 && *(double *)(lVar5 + 0x6d0) != 2.0)) {
    *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) | 0x10;
  }
  else {
    bVar2 = *(byte *)((longlong)param_1 + 0x39a);
    if ((bVar2 & 0x10) == 0) {
      uVar6 = 0x10;
      if ((bVar2 & 4) == 0) {
        uVar6 = 1;
      }
      *(byte *)((longlong)param_1 + 0x39a) = bVar2 | 0x10;
      cVar4 = (**(code **)(*param_1 + 0x680))(param_1,0);
      if ((cVar4 != '\0') && (FUN_144a7d35a(lVar5,&local_50), -1 < (int)local_48)) {
        do {
          if ((int)local_50[1] <= (int)local_48) break;
          lVar5 = FUN_14479d2ce((ulonglong)local_48 * 8 + *local_50);
          if (lVar5 != 0) {
            local_60 = param_1[0x7a];
            if ((local_60 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            local_78 = 0;
            uStack_70 = 0;
            FUN_145bd9f10(lVar5,&local_60,uVar6,param_1);
          }
          uVar1 = local_48 + 1;
          bVar3 = -2 < (int)local_48;
          local_48 = uVar1;
        } while (bVar3);
      }
    }
    else {
      cVar4 = (**(code **)(*param_1 + 0x680))(param_1,0);
      if ((cVar4 != '\0') && (FUN_144a7d35a(lVar5,&local_50), -1 < (int)local_48)) {
        do {
          if ((int)local_50[1] <= (int)local_48) break;
          lVar5 = FUN_14479d2ce((ulonglong)local_48 * 8 + *local_50);
          if (lVar5 != 0) {
            local_58 = param_1[0x7a];
            if ((local_58 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            local_78 = 0;
            uStack_70 = 0;
            FUN_145bd9f10(lVar5,&local_58,2,param_1);
          }
          uVar1 = local_48 + 1;
          bVar3 = -2 < (int)local_48;
          local_48 = uVar1;
        } while (bVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae3858 FUN_145ae3858 body=103 status=ok
// SIG undefined FUN_145ae3858(void)

undefined8 * FUN_145ae3858(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_LAB_14b432200;
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0xc;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 145ae38c0 FUN_145ae38c0 body=38 status=ok
// SIG undefined FUN_145ae38c0(void)

undefined8 FUN_145ae38c0(undefined8 param_1,int param_2)

{
  FUN_145ae38e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae38e6 FUN_145ae38e6 body=167 status=ok
// SIG undefined FUN_145ae38e6(void)

void FUN_145ae38e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9cb370;
  FUN_141282245(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_140dd876d(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_140dd8e91(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145ae398e FUN_145ae398e body=32 status=ok
// SIG undefined FUN_145ae398e(void)

void FUN_145ae398e(void)

{
  FUN_145ae39ae();
  FUN_1401aee94();
                    /* WARNING: Could not recover jumptable at 0x000145ae39a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCurrentDirectoryW(&DAT_14c8c2c00);
  return;
}



// FUNCTION 145ae39ae FUN_145ae39ae body=215 status=ok
// SIG undefined FUN_145ae39ae(void)

void FUN_145ae39ae(void)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1401af92e(FUN_1456d6024);
  lVar1 = *(longlong *)(lVar1 + 0x68);
  if (*(uint *)(lVar1 + 0x40) < 2) {
    FUN_145ae3a86(local_48);
    FUN_144a882a8(&local_38,local_48,&DAT_149e065c6);
    if ((longlong *)(lVar1 + 0x38) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0x38) = local_38;
      local_38 = 0;
      *(undefined4 *)(lVar1 + 0x40) = (undefined4)local_30;
      *(undefined4 *)(lVar1 + 0x44) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae3a86 FUN_145ae3a86 body=94 status=ok
// SIG undefined FUN_145ae3a86(void)

undefined8 * FUN_145ae3a86(undefined8 *param_1)

{
  DWORD DVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  DVar1 = 0x80;
  do {
    FUN_1409ee492(param_1,DVar1,1);
    DVar1 = GetCurrentDirectoryW(*(DWORD *)(param_1 + 1),(LPWSTR)*param_1);
    if (DVar1 == 0) {
      FUN_1446f8bcc(param_1,0);
      return param_1;
    }
  } while (*(uint *)(param_1 + 1) <= DVar1);
  FUN_14077541c(param_1,DVar1 + 1,1);
  return param_1;
}



// FUNCTION 145ae3aee FUN_145ae3aee body=162 status=ok
// SIG undefined FUN_145ae3aee(void)

void FUN_145ae3aee(longlong *param_1,undefined8 param_2)

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
        goto LAB_145ae3b7b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145ae3b7b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145ae3b90 FUN_145ae3b90 body=108 status=ok
// SIG undefined FUN_145ae3b90(void)

undefined8 FUN_145ae3b90(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x68) == '\0') {
      param_1 = param_1 + 0xe0;
LAB_145ae3bb0:
      uVar1 = FUN_1414afdc8(param_1,param_2,param_3);
      return uVar1;
    }
    if (((*(char *)(param_2 + 0x68) == '\x01') && (*(longlong *)(param_1 + 0x88) != 0)) &&
       (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
      param_1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
      if (param_1 != 0) {
        param_1 = param_1 + 0x1a8;
        goto LAB_145ae3bb0;
      }
    }
  }
  return 0;
}



// FUNCTION 145ae3bfc FUN_145ae3bfc body=134 status=ok
// SIG undefined FUN_145ae3bfc(void)

void FUN_145ae3bfc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xc00);
  *(undefined8 *)(param_1 + 0xbf8) = uVar3;
  *(longlong *)(param_1 + 0xc00) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ae3c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ae3c82 FUN_145ae3c82 body=83 status=ok
// SIG undefined FUN_145ae3c82(void)

longlong * FUN_145ae3c82(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_145811774();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145ae3cd6 FUN_145ae3cd6 body=160 status=ok
// SIG undefined FUN_145ae3cd6(void)

void FUN_145ae3cd6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  if (*(longlong *)(param_1 + 0xc08) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0xc08);
  }
  else {
    if (*(longlong *)(param_1 + 0xc18) != 0) goto LAB_145ae3d10;
    puVar6 = (undefined8 *)(param_1 + 0xc18);
  }
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[1];
  *puVar6 = uVar3;
  puVar6[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_145ae3d10:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ae3d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ae3d76 FUN_145ae3d76 body=346 status=ok
// SIG undefined FUN_145ae3d76(void)

void FUN_145ae3d76(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145ae3ed2(param_1,local_24,iVar1 != 0,puVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae3ed2 FUN_145ae3ed2 body=218 status=ok
// SIG undefined FUN_145ae3ed2(void)

void FUN_145ae3ed2(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  char *pcVar7;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0x62fb);
    lVar5 = 0;
    bVar3 = bVar1;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      if ((param_2 >> (int)lVar5 & 1) != 0) {
        pcVar7 = (char *)(param_1 + lVar5 * 0x28 + 0x6300);
        if (param_3 == '\0') {
          FUN_1400bc8c2();
        }
        else {
          FUN_1400bc96c(pcVar7,param_4);
        }
        bVar4 = (byte)(1 << (sbyte)lVar5);
        bVar3 = ~bVar4 & *(byte *)(param_1 + 0x62fb);
        if (*pcVar7 != '\0') {
          bVar3 = *(byte *)(param_1 + 0x62fb) | bVar4;
        }
        *(byte *)(param_1 + 0x62fb) = bVar3;
      }
      lVar5 = 1;
      bVar2 = false;
    } while (bVar6);
    if (bVar3 != bVar1) {
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x34);
      FUN_146075b2a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145ae3fac FUN_145ae3fac body=273 status=ok
// SIG undefined FUN_145ae3fac(void)

undefined4 * FUN_145ae3fac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145ae41fa(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_145ae40be(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_145ae42e0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae40be FUN_145ae40be body=132 status=ok
// SIG undefined FUN_145ae40be(void)

undefined8 FUN_145ae40be(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_145ae4144();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_1458d159e(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_145ae4100;
    }
  }
  uVar2 = 0;
LAB_145ae4100:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae4144 FUN_145ae4144 body=180 status=ok
// SIG undefined FUN_145ae4144(void)

int FUN_145ae4144(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_1458d150c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145ae41d2;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145ae41d2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae41fa FUN_145ae41fa body=230 status=ok
// SIG undefined FUN_145ae41fa(void)

int * FUN_145ae41fa(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 145ae42e0 FUN_145ae42e0 body=448 status=ok
// SIG undefined FUN_145ae42e0(void)

void FUN_145ae42e0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145ae44ae FUN_145ae44ae body=124 status=ok
// SIG undefined FUN_145ae44ae(void)

void FUN_145ae44ae(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae452c FUN_145ae452c body=124 status=ok
// SIG undefined FUN_145ae452c(void)

void FUN_145ae452c(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae45aa FUN_145ae45aa body=143 status=ok
// SIG undefined FUN_145ae45aa(void)

void FUN_145ae45aa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *(longlong *)(param_1 + 0x30);
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar2)(puVar2,local_48);
  }
  FUN_140540e6e();
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar1 = FUN_145af0668(puVar3,&DAT_14ca1bfd0,local_58);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae463a FUN_145ae463a body=106 status=ok
// SIG undefined FUN_145ae463a(void)

undefined8 * FUN_145ae463a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a2a12c0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 145ae46bc FUN_145ae46bc body=143 status=ok
// SIG undefined FUN_145ae46bc(void)

void FUN_145ae46bc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [7];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = *(longlong *)(param_1 + 0x30);
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar2)(puVar2,local_48);
  }
  FUN_1404558b0();
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x10);
  }
  uVar1 = FUN_145af0668(puVar3,&DAT_14ca5fb90,local_58);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae474c FUN_145ae474c body=106 status=ok
// SIG undefined FUN_145ae474c(void)

undefined8 * FUN_145ae474c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a312960;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 145ae47d4 FUN_145ae47d4 body=132 status=ok
// SIG undefined FUN_145ae47d4(void)

ulonglong FUN_145ae47d4(ushort *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*param_1;
  lVar3 = uVar2 * 0x3c;
  if (((((uint)(&DAT_14ca814c8)[uVar2 * 0xf] >> 0x1d & (uint)(&DAT_14ca814d8)[uVar2 * 0xf] >> 0x1c &
        (*(uint *)(&DAT_14ca814cc + lVar3) & 8) >> 3) == 0) &&
      ((*(uint *)(param_1 + 2) & 0x80000001) == 1)) || ((int)(&DAT_14ca814b8)[uVar2 * 0xf] < 3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar2;
    if (((uVar2 == 0x30) ||
        (uVar1 = DAT_14ca838f8, *(ulonglong *)(&DAT_14ca814b0 + lVar3) == DAT_14ca838f8)) ||
       ((uVar1 = CONCAT71((int7)(DAT_14ca838f8 >> 8),1), (char)(&DAT_14ca814d8)[uVar2 * 0xf] < '\0'
        && ((*(byte *)((longlong)&DAT_14ca814d0 + lVar3 + 3) & 2) != 0)))) {
      uVar2 = CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)((longlong)&DAT_14ca814d0 + lVar3 + 7)) &
              0xffffffffffffff04;
      uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
    }
  }
  return uVar1;
}



// FUNCTION 145ae4858 FUN_145ae4858 body=93 status=ok
// SIG undefined FUN_145ae4858(void)

void FUN_145ae4858(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae48b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a6bf8e0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  uVar2 = DAT_14c846518;
  puVar1[0xe] = DAT_14c846510;
  puVar1[0xf] = uVar2;
  puVar1[0x10] = DAT_14c846520;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 145ae48b6 FUN_145ae48b6 body=44 status=ok
// SIG undefined FUN_145ae48b6(void)

undefined8 * FUN_145ae48b6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149f85460;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0xff;
  return param_1;
}



// FUNCTION 145ae48e2 FUN_145ae48e2 body=40 status=ok
// SIG undefined FUN_145ae48e2(void)

undefined8 FUN_145ae48e2(undefined8 param_1,int param_2)

{
  FUN_145ae490a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae490a FUN_145ae490a body=97 status=ok
// SIG undefined FUN_145ae490a(void)

void FUN_145ae490a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b30ea60;
  param_1[6] = &PTR_FUN_14b30ed20;
  puVar1 = (undefined8 *)param_1[9];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[9] = *puVar1;
    FUN_14129df96(puVar1 + 2);
    FUN_1400020a8(puVar1);
    puVar1 = (undefined8 *)param_1[9];
  }
  FUN_140af926c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ae496c FUN_145ae496c body=40 status=ok
// SIG undefined FUN_145ae496c(void)

undefined8 FUN_145ae496c(undefined8 param_1,int param_2)

{
  FUN_145ae4994();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ae4994 FUN_145ae4994 body=190 status=ok
// SIG undefined FUN_145ae4994(void)

void FUN_145ae4994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba88950;
  FUN_145ae4a52(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_14906d704(param_1 + 0xd);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_14906d734(param_1 + 0xf,0);
  }
  FUN_144a76fd2(param_1 + 0x17);
  FUN_144a4509c(param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145ae4a52(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14596f3b0(param_1);
  return;
}



// FUNCTION 145ae4a52 FUN_145ae4a52 body=44 status=ok
// SIG undefined FUN_145ae4a52(void)

void FUN_145ae4a52(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_14102a02c(param_1);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ae4a7e FUN_145ae4a7e body=213 status=ok
// SIG undefined FUN_145ae4a7e(void)

bool FUN_145ae4a7e(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ae4b54 FUN_145ae4b54 body=3005 status=ok
// SIG undefined FUN_145ae4b54(void)

void FUN_145ae4b54(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 **ppuVar15;
  longlong lVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  uint uVar23;
  longlong **pplVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined2 **local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 **local_b0;
  void *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined2 *local_98;
  uint local_90;
  undefined2 *local_88;
  uint local_80;
  longlong *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((param_2 != (longlong *)0x0) && (plVar13 = (longlong *)FUN_144a126be(), plVar13 == param_2)
        ) && (param_2[6] != 0)) &&
      ((lVar26 = *(longlong *)(param_2[6] + 0x2b0), lVar26 != 0 &&
       (lVar26 = *(longlong *)(lVar26 + 0x3f0), lVar26 != 0)))) &&
     (*(longlong *)(lVar26 + 0x30) != 0)) {
    lVar14 = FUN_14144e1dc();
    local_f0 = *(longlong *)(lVar26 + 0x30);
    if (((local_f0 != 0) && (lVar14 != 0)) &&
       ((lVar26 = *(longlong *)(local_f0 + 0x10), lVar26 != 0 &&
        ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar26 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar26 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
          lVar14 + 0x30)))))) {
      uVar20 = *(uint *)(local_f0 + 0x88);
      if ((longlong)(int)uVar20 != 0) {
        local_f8 = (longlong *)(param_1 + 0x30);
        if ((uint)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) < uVar20) {
          if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar20);
          }
          FUN_1414b069c(local_f8,uVar20);
          if (uVar20 < 4) {
            iVar11 = 1;
          }
          else {
            uVar20 = (uVar20 | 1) + 0xe;
            iVar11 = 0x1f;
            if (uVar20 != 0) {
              for (; uVar20 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            iVar11 = 1 << ((byte)iVar11 & 0x1f);
          }
          if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x78) < iVar11)) {
            *(int *)(param_1 + 0x78) = iVar11;
            FUN_1414b04be(local_f8);
          }
        }
        lVar26 = *(longlong *)(local_f0 + 0x80);
        if ((longlong)*(int *)(local_f0 + 0x88) == 0) {
          iVar11 = 0;
        }
        else {
          local_c8 = (longlong)*(int *)(local_f0 + 0x88) * 0xc0 + lVar26;
          local_e8 = param_1 + 0x40;
          local_d8 = param_1 + 0x68;
          local_d0 = param_2;
          do {
            uVar20 = *(uint *)(lVar26 + 0xb8);
            if ((int)uVar20 < 2) {
              FUN_1400021e4(lVar26,&local_88);
            }
            else {
              local_88 = (undefined2 *)0x0;
              pvVar3 = *(void **)(lVar26 + 0xb0);
              local_80 = uVar20;
              FUN_1446dd670(&local_88,(ulonglong)uVar20,0);
              memcpy(local_88,pvVar3,(ulonglong)uVar20 * 2);
            }
            puVar17 = &DAT_149dfb77a;
            if (local_80 != 0) {
              puVar17 = local_88;
            }
            local_78 = (longlong *)param_2[3];
            FUN_1400021e4(&local_78,&local_c0);
            pplVar24 = (longlong **)&DAT_149dfb77a;
            if ((int)uStack_b8 != 0) {
              pplVar24 = local_c0;
            }
            FUN_140002266(&local_98,L"gbx.LoadingRange.%s.%s",pplVar24,puVar17);
            if (local_c0 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            puVar17 = &DAT_149dfb77a;
            if (local_90 != 0) {
              puVar17 = local_98;
            }
            local_108 = 0;
            ppuVar15 = (undefined2 **)
                       (**(code **)(*DAT_14c8407a8 + 0x10))
                                 (DAT_14c8407a8,puVar17,0x3f800000,&DAT_149dfb77a);
            if (ppuVar15 != (undefined2 **)0x0) {
              uVar20 = *(uint *)((longlong)param_2 + 0xc);
              if ((int)uVar20 < DAT_14c9647dc) {
                lVar14 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
              }
              else {
                lVar14 = 0;
              }
              iVar11 = *(int *)(lVar14 + 0x10);
              if (*(int *)(lVar14 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar12 = DAT_14c964868 + 1;
                bVar27 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar27) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar12);
                }
                LOCK();
                iVar11 = *(int *)(lVar14 + 0x10);
                bVar27 = iVar11 == 0;
                if (bVar27) {
                  *(int *)(lVar14 + 0x10) = iVar12;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar27) {
                  iVar11 = iVar12;
                }
              }
              uVar23 = *(uint *)(local_f0 + 0xc);
              if ((int)uVar23 < DAT_14c9647dc) {
                lVar14 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
              }
              else {
                lVar14 = 0;
              }
              iVar12 = *(int *)(lVar14 + 0x10);
              local_e0 = ppuVar15;
              if (*(int *)(lVar14 + 0x10) == 0) {
                LOCK();
                iVar12 = DAT_14c964868 + 1;
                UNLOCK();
                iVar19 = DAT_14c964868 + 1;
                bVar27 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar12;
                if (bVar27) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                iVar12 = *(int *)(lVar14 + 0x10);
                bVar27 = iVar12 == 0;
                if (bVar27) {
                  *(int *)(lVar14 + 0x10) = iVar19;
                  iVar12 = 0;
                }
                UNLOCK();
                if (bVar27) {
                  iVar12 = iVar19;
                }
              }
              plVar13 = (longlong *)(**(code **)(*local_e0 + 0x68))(local_e0);
              puVar17 = local_98;
              uStack_b8 = CONCAT44(iVar11,uVar20);
              local_b0 = (undefined2 **)CONCAT44(iVar12,uVar23);
              local_a8 = (void *)0x0;
              lVar14 = (longlong)(int)local_90;
              local_a0 = local_90;
              local_c0 = (longlong **)param_1;
              if (lVar14 == 0) {
                local_9c = 0;
              }
              else {
                FUN_1446dd670(&local_a8,local_90,0);
                memcpy(local_a8,puVar17,lVar14 * 2);
              }
              local_78 = (longlong *)0x0;
              local_70 = 0;
              FUN_1446efa72(&local_78,0,5,0x10);
              plVar4 = local_78;
              local_70 = 5;
              *local_78 = (longlong)&PTR_LAB_149e170a0;
              LOCK();
              UNLOCK();
              lVar16 = DAT_14c758608 + 1;
              lVar14 = DAT_14c758608 + 1;
              if (lVar16 == 0) {
                LOCK();
                UNLOCK();
                lVar16 = DAT_14c758608 + 2;
                lVar14 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar14;
              local_78[2] = lVar16;
              *local_78 = (longlong)&PTR_FUN_14a1cc820;
              local_78[3] = 0;
              if (param_1 == 0) {
                iVar11 = 0;
              }
              else {
                uVar20 = *(uint *)(param_1 + 0xc);
                *(uint *)(local_78 + 3) = uVar20;
                if ((int)uVar20 < DAT_14c9647dc) {
                  lVar14 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
                }
                else {
                  lVar14 = 0;
                }
                iVar11 = *(int *)(lVar14 + 0x10);
                if (*(int *)(lVar14 + 0x10) == 0) {
                  LOCK();
                  iVar11 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar12 = DAT_14c964868 + 1;
                  bVar27 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar11;
                  if (bVar27) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar12);
                  }
                  LOCK();
                  iVar11 = *(int *)(lVar14 + 0x10);
                  bVar27 = iVar11 == 0;
                  if (bVar27) {
                    *(int *)(lVar14 + 0x10) = iVar12;
                    iVar11 = 0;
                  }
                  UNLOCK();
                  if (bVar27) {
                    iVar11 = iVar12;
                  }
                }
              }
              pvVar3 = local_a8;
              *(int *)((longlong)plVar4 + 0x1c) = iVar11;
              *(undefined4 *)(plVar4 + 4) = (undefined4)local_c0;
              *(undefined4 *)((longlong)plVar4 + 0x24) = local_c0._4_4_;
              *(int *)(plVar4 + 5) = (int)uStack_b8;
              *(undefined4 *)((longlong)plVar4 + 0x2c) = uStack_b8._4_4_;
              plVar4[6] = (longlong)local_b0;
              plVar4[7] = 0;
              lVar14 = (longlong)(int)local_a0;
              *(uint *)(plVar4 + 8) = local_a0;
              if (lVar14 == 0) {
                *(undefined4 *)((longlong)plVar4 + 0x44) = 0;
              }
              else {
                FUN_1446dd670(plVar4 + 7,local_a0,0);
                memcpy((void *)plVar4[7],pvVar3,lVar14 * 2);
              }
              if (((local_70 == 0) || (local_78 == (longlong *)0x0)) ||
                 (cVar10 = (**(code **)(*local_78 + 0x30))(), cVar10 == '\0')) {
                if (local_70 == 0) goto LAB_145ae50ee;
                if (local_78 != (longlong *)0x0) {
                  (**(code **)*local_78)(local_78,0);
                  FUN_1446efa72(&local_78,0,0,0x10);
                  goto LAB_145ae50db;
                }
              }
              else {
                if (*(int *)((longlong)plVar13 + 0x14) < 1) {
                  iVar11 = (int)plVar13[1];
                  iVar12 = (int)plVar13[2] + -1;
                  *(int *)(plVar13 + 2) = iVar12;
                  if (iVar12 <= iVar11) {
                    iVar12 = iVar11;
                    if (0 < iVar11) {
                      iVar19 = 0;
                      do {
                        if (((*(int *)(*plVar13 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                            (plVar4 = *(longlong **)(*plVar13 + (longlong)iVar19 * 0x10),
                            plVar4 == (longlong *)0x0)) ||
                           (cVar10 = (**(code **)(*plVar4 + 0x28))(), cVar10 != '\0')) {
                          FUN_14005b288(plVar13,iVar19);
                          FUN_14005b248(plVar13);
                        }
                        else {
                          iVar19 = iVar19 + 1;
                        }
                        iVar12 = (int)plVar13[1];
                      } while (iVar19 < iVar12);
                    }
                    iVar19 = iVar12 * 2;
                    if (iVar19 < 3) {
                      iVar19 = 2;
                    }
                    *(int *)(plVar13 + 2) = iVar19;
                    if ((iVar19 < iVar11) && (*(int *)((longlong)plVar13 + 0xc) != iVar12)) {
                      FUN_14045812c(plVar13);
                    }
                  }
                }
                if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
                  (**(code **)(*local_78 + 0x38))();
                }
                lVar14 = plVar13[1];
                uVar20 = (int)lVar14 + 1;
                *(uint *)(plVar13 + 1) = uVar20;
                if (*(uint *)((longlong)plVar13 + 0xc) < uVar20) {
                  FUN_1447a71f6(plVar13);
                }
                lVar16 = *plVar13;
                lVar14 = (longlong)(int)lVar14 * 0x10;
                *(undefined8 *)(lVar16 + lVar14) = 0;
                *(undefined4 *)(lVar16 + 8 + lVar14) = 0;
                *(longlong **)(lVar16 + lVar14) = local_78;
                local_78 = (longlong *)0x0;
                *(int *)(lVar16 + 8 + lVar14) = local_70;
LAB_145ae50db:
                local_70 = 0;
LAB_145ae50ee:
                if (local_78 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_a8 != (void *)0x0) {
                FUN_1400020a8();
              }
              puVar17 = local_98;
              local_c0 = (void *)0x0;
              lVar14 = (longlong)(int)local_90;
              uStack_b8 = CONCAT44(uStack_b8._4_4_,local_90);
              if (lVar14 == 0) {
                uStack_b8 = (ulonglong)local_90;
              }
              else {
                FUN_1446dd670(&local_c0,local_90,0);
                memcpy(local_c0,puVar17,lVar14 * 2);
              }
              local_b0 = local_e0;
              if (*(int *)(param_1 + 100) == 0) {
                iVar11 = *(int *)(param_1 + 0x38);
                *(int *)(param_1 + 0x38) = iVar11 + 1;
                if (*(int *)(param_1 + 0x3c) == iVar11) {
                  FUN_1447711aa(local_f8,iVar11);
                }
                lVar14 = local_e8;
                lVar21 = (longlong)iVar11;
                iVar12 = FUN_144a54ea4(local_e8,1);
                lVar16 = *(longlong *)(param_1 + 0x50);
                if (*(longlong *)(param_1 + 0x50) == 0) {
                  lVar16 = lVar14;
                }
                iVar19 = iVar12 + 0x1f;
                if (-1 < iVar12) {
                  iVar19 = iVar12;
                }
                bVar5 = (byte)iVar12 & 0x1f;
                puVar1 = (uint *)(lVar16 + (longlong)(iVar19 >> 5) * 4);
                *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
              }
              else {
                iVar11 = *(int *)(param_1 + 0x60);
                lVar21 = (longlong)iVar11;
                iVar12 = *(int *)(*(longlong *)(param_1 + 0x30) + 4 + lVar21 * 0x20);
                *(int *)(param_1 + 0x60) = iVar12;
                iVar19 = *(int *)(param_1 + 100) + -1;
                *(int *)(param_1 + 100) = iVar19;
                if (iVar19 != 0) {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar12 * 0x20) =
                       0xffffffff;
                }
              }
              lVar14 = *(longlong *)(param_1 + 0x50);
              if (*(longlong *)(param_1 + 0x50) == 0) {
                lVar14 = local_e8;
              }
              iVar12 = iVar11 + 0x1f;
              if (-1 < iVar11) {
                iVar12 = iVar11;
              }
              puVar1 = (uint *)(lVar14 + (longlong)(iVar12 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
              lVar14 = *(longlong *)(param_1 + 0x30);
              lVar21 = lVar21 * 0x20;
              puVar2 = (undefined8 *)(lVar14 + lVar21);
              *(longlong ***)(lVar14 + lVar21) = local_c0;
              uVar25 = 0;
              local_c0 = (longlong **)0x0;
              *(int *)(lVar14 + 8 + lVar21) = (int)uStack_b8;
              *(undefined4 *)(lVar14 + 0xc + lVar21) = uStack_b8._4_4_;
              uStack_b8 = 0;
              *(undefined2 ***)(lVar14 + 0x10 + lVar21) = local_b0;
              *(undefined4 *)(lVar14 + 0x18 + lVar21) = 0xffffffff;
              iVar12 = *(int *)(lVar14 + 8 + lVar21);
              iVar19 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                puVar17 = &DAT_149dfb77a;
                if (iVar12 != 0) {
                  puVar17 = (undefined2 *)*puVar2;
                }
                lVar14 = 0;
                uVar25 = 0;
                do {
                  uVar20 = ((uint)(0x19 < (ushort)puVar17[lVar14] - 0x61) * 0x20 +
                           (uint)(ushort)puVar17[lVar14]) - 0x20;
                  uVar23 = (uint)(uVar25 >> 8) ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(((uint)uVar25 ^ uVar20) & 0xff) * 4);
                  uVar25 = (ulonglong)
                           (uVar23 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar23 & 0xff ^ uVar20 >> 8 & 0xff) * 4));
                  lVar14 = lVar14 + 1;
                } while (iVar19 != (int)lVar14);
              }
              uVar20 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
              iVar12 = 1;
              if (uVar20 == 1) {
LAB_145ae52ba:
                if (((int)uVar20 < 1) || (iVar12 <= *(int *)(param_1 + 0x78))) {
                  uVar20 = *(int *)(param_1 + 0x78) - 1U & (uint)uVar25;
                  *(uint *)((longlong)puVar2 + 0x1c) = uVar20;
                  lVar14 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar14 = local_d8;
                  }
                  *(undefined4 *)(puVar2 + 3) =
                       *(undefined4 *)
                        (lVar14 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar20)
                                  * 4);
                  lVar14 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar14 = local_d8;
                  }
                  *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar20
                                    ) * 4) = iVar11;
                }
                else {
                  *(int *)(param_1 + 0x78) = iVar12;
                  FUN_1414b04be(local_f8);
                }
              }
              else {
                iVar19 = FUN_1414b012a(local_f8,uVar25);
                if (iVar19 == -1) {
                  if (3 < uVar20) {
                    uVar18 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
                    lVar14 = 0x3f;
                    if (uVar18 != 0) {
                      for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    iVar12 = 1 << ((byte)lVar14 & 0x1f);
                  }
                  goto LAB_145ae52ba;
                }
                lVar14 = *local_f8;
                if (*(longlong *)(lVar14 + (longlong)iVar19 * 0x20) != 0) {
                  FUN_1400020a8();
                }
                puVar22 = (undefined4 *)(lVar14 + (longlong)iVar19 * 0x20);
                uVar6 = *(undefined4 *)puVar2;
                uVar7 = *(undefined4 *)((longlong)puVar2 + 4);
                uVar8 = *(undefined4 *)(puVar2 + 1);
                uVar9 = *(undefined4 *)((longlong)puVar2 + 0xc);
                *(undefined8 *)(puVar22 + 4) = puVar2[2];
                *puVar22 = uVar6;
                puVar22[1] = uVar7;
                puVar22[2] = uVar8;
                puVar22[3] = uVar9;
                FUN_1470f481e(local_f8,iVar11);
              }
              param_2 = local_d0;
              if (local_c0 != (longlong **)0x0) {
                FUN_1400020a8();
              }
            }
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar26 = lVar26 + 0xc0;
          } while (lVar26 != local_c8);
          lVar26 = *(longlong *)(local_f0 + 0x80);
          iVar11 = *(int *)(local_f0 + 0x88);
        }
        local_c0 = &local_78;
        local_b0 = &local_88;
        local_88 = (undefined2 *)((ulonglong)local_88 & 0xffffffff00000000);
        uStack_b8 = param_1;
        local_78 = param_2;
        if (iVar11 != 0) {
          lVar14 = (longlong)iVar11 * 0xc0;
          do {
            FUN_1414b01ee(&local_c0,lVar26);
            lVar26 = lVar26 + 0xc0;
            lVar14 = lVar14 + -0xc0;
          } while (lVar14 != 0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae5712 FUN_145ae5712 body=171 status=ok
// SIG undefined FUN_145ae5712(void)

void FUN_145ae5712(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x18);
  }
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar6 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar6) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6) != 0)) goto LAB_145ae5765;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar6);
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145ae5765;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_145ae57be(*(longlong *)(param_1 + 0x38),param_1 + 0x30);
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
LAB_145ae5765:
  *param_2 = 0;
  return;
}



// FUNCTION 145ae57be FUN_145ae57be body=180 status=ok
// SIG undefined FUN_145ae57be(void)

void FUN_145ae57be(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x68)) {
    plVar1 = (longlong *)(param_1 + 0x60);
    lVar4 = 0x10;
    uVar5 = 0;
    do {
      if ((*(int *)(*plVar1 + lVar4) == 0) ||
         (plVar2 = *(longlong **)(*plVar1 + -8 + lVar4), plVar2 == (longlong *)0x0)) {
        lVar3 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_40);
        lVar3 = local_40;
      }
      if (lVar3 == *param_2) {
        FUN_145ae58b2(plVar1,uVar5 & 0xffffffff);
        FUN_145ae5874(plVar1);
        break;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x68));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ae5874 FUN_145ae5874 body=62 status=ok
// SIG undefined FUN_145ae5874(void)

void FUN_145ae5874(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145ae5920(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 145ae58b2 FUN_145ae58b2 body=109 status=ok
// SIG undefined FUN_145ae58b2(void)

void FUN_145ae58b2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  FUN_1449db362(lVar1 + (longlong)(int)param_2 * 0x18 + 8);
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145ae5920 FUN_145ae5920 body=111 status=ok
// SIG undefined FUN_145ae5920(void)

ulonglong FUN_145ae5920(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 145ae598f FUN_145ae598f body=53 status=ok
// SIG undefined FUN_145ae598f(void)

void FUN_145ae598f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae59c4(puVar1);
  *puVar1 = &PTR_FUN_14b6b8df0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 2;
  return;
}



// FUNCTION 145ae59c4 FUN_145ae59c4 body=272 status=ok
// SIG undefined FUN_145ae59c4(void)

undefined8 * FUN_145ae59c4(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b06ae20;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_145ae5ad4(param_1);
  }
  return param_1;
}



// FUNCTION 145ae5ad4 FUN_145ae5ad4 body=222 status=ok
// SIG undefined FUN_145ae5ad4(void)

void FUN_145ae5ad4(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar5 = 0;
  }
  plVar4 = (longlong *)(param_1 + 0x78);
  FUN_145ae5bb2(plVar4,*(undefined4 *)(lVar5 + 0x1f8));
  FUN_145ae5d10(plVar4,*(undefined4 *)(lVar5 + 0x1f8));
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cb8dd18);
  iVar1 = *(int *)(lVar5 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x1f0) + lVar6) == *plVar2) {
        uVar3 = (int)(lVar6 >> 4) * -0x33333333;
        if ((int)uVar3 < 0) {
          return;
        }
        if (iVar1 <= (int)uVar3) {
          return;
        }
        if (1 < (byte)(*(char *)(*(longlong *)(lVar5 + 0x1f0) + 8 +
                                (ulonglong)(uVar3 & 0x7fffffff) * 0x50) - 1U)) {
          return;
        }
        FUN_1447715ec((ulonglong)(uVar3 & 0x7fffffff) * 0x70 + *plVar4 + 0x10,lVar5 + 0x130);
        return;
      }
      lVar6 = lVar6 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar6);
  }
  return;
}


