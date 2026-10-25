// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14400a8c4 FUN_14400a8c4 body=29 status=ok
// SIG undefined FUN_14400a8c4(void)

undefined8 FUN_14400a8c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400a8f0 FUN_14400a8f0 body=69 status=ok
// SIG undefined FUN_14400a8f0(void)

void FUN_14400a8f0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x90);
  *param_2 = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 8);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x21] = 0x42b40000;
  return;
}



// FUNCTION 14400a936 FUN_14400a936 body=55 status=ok
// SIG undefined FUN_14400a936(void)

void FUN_14400a936(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 4) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 8);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x20) = 0;
  param_2[0x21] = 0x42b40000;
  return;
}



// FUNCTION 14400a986 FUN_14400a986 body=68 status=ok
// SIG undefined FUN_14400a986(void)

undefined8 FUN_14400a986(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14400a9f2 FUN_14400a9f2 body=59 status=ok
// SIG undefined FUN_14400a9f2(void)

undefined8 FUN_14400a9f2(longlong *param_1)

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



// FUNCTION 14400aaa0 FUN_14400aaa0 body=29 status=ok
// SIG undefined FUN_14400aaa0(void)

undefined8 FUN_14400aaa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400abaa FUN_14400abaa body=203 status=ok
// SIG undefined FUN_14400abaa(void)

undefined8 FUN_14400abaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    piVar5 = (int *)(param_3 + 0x60);
    puVar6 = (undefined8 *)(param_2 + 0x48);
    do {
      piVar3 = piVar5 + -0x18;
      piVar4 = (int *)(puVar6 + -9);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
        piVar3 = piVar3 + 2;
        piVar4 = piVar4 + 2;
      }
      if ((int *)(puVar6 + -9) != piVar5 + -0x18) {
        iVar1 = piVar5[-4];
        _Src = *(void **)(piVar5 + -6);
        *(int *)(puVar6 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_14400ad58(puVar6,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 0x90);
          }
        }
      }
      if ((puVar6[2] != *(longlong *)(piVar5 + -2)) || (*(int *)(puVar6 + 3) != *piVar5)) {
        puVar6[2] = *(longlong *)(piVar5 + -2);
        *(int *)(puVar6 + 3) = *piVar5;
        puVar6[4] = 0;
      }
      piVar5 = piVar5 + 0x1c;
      puVar6 = puVar6 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14400ac9e FUN_14400ac9e body=59 status=ok
// SIG undefined FUN_14400ac9e(void)

undefined8 FUN_14400ac9e(longlong *param_1)

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



// FUNCTION 14400ace4 FUN_14400ace4 body=38 status=ok
// SIG undefined FUN_14400ace4(void)

void FUN_14400ace4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14400ad58 FUN_14400ad58 body=229 status=ok
// SIG undefined FUN_14400ad58(void)

void FUN_14400ad58(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14400ae4c FUN_14400ae4c body=93 status=ok
// SIG undefined FUN_14400ae4c(void)

undefined8 * FUN_14400ae4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14400aea9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14400aed8(param_1,iVar1);
      FUN_14400afb9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14400aea9 FUN_14400aea9 body=47 status=ok
// SIG undefined FUN_14400aea9(void)

void FUN_14400aea9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14400aed8 FUN_14400aed8 body=225 status=ok
// SIG undefined FUN_14400aed8(void)

void FUN_14400aed8(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14400afb9 FUN_14400afb9 body=162 status=ok
// SIG undefined FUN_14400afb9(void)

void FUN_14400afb9(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x48);
    do {
      puVar3 = param_2;
      puVar4 = puVar5 + -9;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 10);
      _Src = (void *)param_2[9];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_14400ad58(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 0x90);
      }
      puVar5[2] = param_2[0xb];
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_2 + 0xc);
      puVar5[4] = 0;
      param_2 = param_2 + 0xe;
      puVar5 = puVar5 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14400b078 FUN_14400b078 body=244 status=ok
// SIG undefined FUN_14400b078(void)

void FUN_14400b078(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 14400b1c2 FUN_14400b1c2 body=1003 status=ok
// SIG undefined FUN_14400b1c2(void)

void FUN_14400b1c2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2 + 5,0,0xa0);
  *param_2 = &PTR_FUN_14b5ea4a0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0xb] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x11] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x17] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 14400b604 FUN_14400b604 body=57 status=ok
// SIG undefined FUN_14400b604(void)

void FUN_14400b604(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0088 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0088 = FUN_140002ddd(FUN_1465a8358,uVar1,L"ClassModPassivesAspect");
  }
  return;
}



// FUNCTION 14400b64c FUN_14400b64c body=57 status=ok
// SIG undefined FUN_14400b64c(void)

void FUN_14400b64c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba00a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba00a0 = FUN_140002ddd(FUN_1465a83b8,uVar1,L"ClassModPlayerClassAspect");
  }
  return;
}



// FUNCTION 14400b694 FUN_14400b694 body=75 status=ok
// SIG undefined FUN_14400b694(void)

void FUN_14400b694(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b5eab00;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 14400b6e4 FUN_14400b6e4 body=57 status=ok
// SIG undefined FUN_14400b6e4(void)

void FUN_14400b6e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba00b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba00b8 = FUN_140002ddd(FUN_1465a844f,uVar1,L"ClassModSkillParamAspect");
  }
  return;
}



// FUNCTION 14400b76e FUN_14400b76e body=170 status=ok
// SIG undefined FUN_14400b76e(void)

undefined1 FUN_14400b76e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    bVar15 = DAT_14c950c29;
    do {
      lVar16 = *(longlong *)(param_3 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar17);
      *plVar1 = lVar16;
      lVar16 = *(longlong *)(param_3 + 8 + lVar17);
      if ((bVar15 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar16 = *(longlong *)(param_3 + 8 + lVar17);
          bVar15 = DAT_14c950c29;
        }
      }
      plVar1[1] = lVar16;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar17);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar17);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x30 + lVar17);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      *(undefined4 *)(plVar1 + 2) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
      *(undefined4 *)(plVar1 + 3) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar6;
      *(undefined4 *)(plVar1 + 4) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar8;
      *(undefined4 *)(plVar1 + 5) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar10;
      *(undefined4 *)(plVar1 + 6) = uVar11;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar12;
      *(undefined4 *)(plVar1 + 7) = uVar13;
      *(undefined4 *)((longlong)plVar1 + 0x3c) = uVar14;
      lVar17 = lVar17 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14400b84e FUN_14400b84e body=57 status=ok
// SIG undefined FUN_14400b84e(void)

void FUN_14400b84e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0228 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0228 = FUN_140002ddd(FUN_1465a8ac1,uVar1,L"CommandRingDef");
  }
  return;
}



// FUNCTION 14400b8d2 FUN_14400b8d2 body=57 status=ok
// SIG undefined FUN_14400b8d2(void)

void FUN_14400b8d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0270 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0270 = FUN_140002ddd(FUN_1465a8be8,uVar1,L"DamageAffinityDef");
  }
  return;
}



// FUNCTION 14400b9b6 FUN_14400b9b6 body=57 status=ok
// SIG undefined FUN_14400b9b6(void)

void FUN_14400b9b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0378 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0378 = FUN_140002ddd(FUN_1465a90c2,uVar1,L"DLCAspect");
  }
  return;
}



// FUNCTION 14400b9ef FUN_14400b9ef body=986 status=ok
// SIG undefined FUN_14400b9ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14400b9ef(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb9fe70 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb9fe78);
  if (cVar1 == '\0') {
    _DAT_14cb9fe78 = 0;
    uRam000000014cb9fe80 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e1510,2,&PTR_FUN_14b5e14e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e1b10,1,&PTR_FUN_14b5e1ac0);
  _DAT_14cb9ff20 = 0x47efffffe0000000;
  _DAT_14cb9ff28 = 0x47efffffe0000000;
  _DAT_14cb9ff30 = 0x47efffffe0000000;
  _DAT_14cb9ff38 = 0x47efffffe0000000;
  _DAT_14cb9ff40 = 0x47efffffe0000000;
  _DAT_14cb9ff48 = 0x47efffffe0000000;
  _DAT_14cb9ff50 = 0x47efffffe0000000;
  _DAT_14cb9ff58 = 0x47efffffe0000000;
  _DAT_14cb9ff64 = 0;
  FUN_14052b5e0(&DAT_14cb9ff60,"PlayerAwareness",0);
  _DAT_14cb9ff70 = "PlayerAwareness";
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e28f0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e3230,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e3da0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e46f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e4910);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e4a20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e4b30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e4c80);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e6950,1,&PTR_FUN_14b5e6920);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e6ea0,1,&PTR_FUN_14b5e6e50);
  ppuStack_60 = &PTR_FUN_14b5e7a90;
  local_68 = 1;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e7af0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5e8250;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e82c0,1,&PTR_FUN_14b5e8270);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e87a0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b5e8ae0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e8b00);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e8ef0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5e8fc0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5e9320,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400bddc FUN_14400bddc body=55 status=ok
// SIG undefined FUN_14400bddc(void)

void FUN_14400bddc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0428 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0428 = FUN_14171c317(FUN_1465a98e6,uVar1,L"EEntitlementRegistered");
  }
  return;
}



// FUNCTION 14400be13 FUN_14400be13 body=55 status=ok
// SIG undefined FUN_14400be13(void)

void FUN_14400be13(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0530 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0530 = FUN_14171c317(FUN_1465a9ec4,uVar1,L"EDownState");
  }
  return;
}



// FUNCTION 14400be4a FUN_14400be4a body=55 status=ok
// SIG undefined FUN_14400be4a(void)

void FUN_14400be4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0548 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0548 = FUN_14171c317(FUN_1465a9caf,uVar1,L"EExitDownStateReason");
  }
  return;
}



// FUNCTION 14400be81 FUN_14400be81 body=55 status=ok
// SIG undefined FUN_14400be81(void)

void FUN_14400be81(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0560 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0560 = FUN_14171c317(FUN_1465a9ef3,uVar1,L"EReviveState");
  }
  return;
}



// FUNCTION 14400beb8 FUN_14400beb8 body=55 status=ok
// SIG undefined FUN_14400beb8(void)

void FUN_14400beb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0578 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0578 = FUN_14171c317(FUN_1465a9f22,uVar1,L"ECharacterDashDirection");
  }
  return;
}



// FUNCTION 14400beef FUN_14400beef body=55 status=ok
// SIG undefined FUN_14400beef(void)

void FUN_14400beef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0608 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0608 = FUN_14171c317(FUN_1465aa1e2,uVar1,L"EDamageAffinity");
  }
  return;
}



// FUNCTION 14400bf26 FUN_14400bf26 body=55 status=ok
// SIG undefined FUN_14400bf26(void)

void FUN_14400bf26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0620 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0620 = FUN_14171c317(FUN_1465aa213,uVar1,L"EGrenadePayloadSlot");
  }
  return;
}



// FUNCTION 14400bf5d FUN_14400bf5d body=55 status=ok
// SIG undefined FUN_14400bf5d(void)

void FUN_14400bf5d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba06f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba06f8 = FUN_14171c317(FUN_1465aa68c,uVar1,L"EOakReplicatedBlackboardPlayerStat");
  }
  return;
}



// FUNCTION 14400bf94 FUN_14400bf94 body=55 status=ok
// SIG undefined FUN_14400bf94(void)

void FUN_14400bf94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0710 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0710 = FUN_14171c317(FUN_1465aa6bb,uVar1,L"EEquippedInventoryContext");
  }
  return;
}



// FUNCTION 14400bfcb FUN_14400bfcb body=55 status=ok
// SIG undefined FUN_14400bfcb(void)

void FUN_14400bfcb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0758 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0758 = FUN_14171c317(FUN_1465aa818,uVar1,L"EEridiumEncasingState");
  }
  return;
}



// FUNCTION 14400c002 FUN_14400c002 body=55 status=ok
// SIG undefined FUN_14400c002(void)

void FUN_14400c002(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba07f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba07f0 = FUN_14171c317(FUN_1465aaa4e,uVar1,L"EPlayersHaveDiedEvaluatorCheck");
  }
  return;
}



// FUNCTION 14400c05a FUN_14400c05a body=48 status=ok
// SIG undefined FUN_14400c05a(void)

longlong FUN_14400c05a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c08a FUN_14400c08a body=48 status=ok
// SIG undefined FUN_14400c08a(void)

longlong FUN_14400c08a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c0ba FUN_14400c0ba body=48 status=ok
// SIG undefined FUN_14400c0ba(void)

longlong FUN_14400c0ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c0ea FUN_14400c0ea body=48 status=ok
// SIG undefined FUN_14400c0ea(void)

longlong FUN_14400c0ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c12a FUN_14400c12a body=48 status=ok
// SIG undefined FUN_14400c12a(void)

longlong FUN_14400c12a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c15a FUN_14400c15a body=48 status=ok
// SIG undefined FUN_14400c15a(void)

longlong FUN_14400c15a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c1a2 FUN_14400c1a2 body=48 status=ok
// SIG undefined FUN_14400c1a2(void)

longlong FUN_14400c1a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c1da FUN_14400c1da body=48 status=ok
// SIG undefined FUN_14400c1da(void)

longlong FUN_14400c1da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c222 FUN_14400c222 body=48 status=ok
// SIG undefined FUN_14400c222(void)

longlong FUN_14400c222(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c252 FUN_14400c252 body=48 status=ok
// SIG undefined FUN_14400c252(void)

longlong FUN_14400c252(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c292 FUN_14400c292 body=48 status=ok
// SIG undefined FUN_14400c292(void)

longlong FUN_14400c292(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c2c2 FUN_14400c2c2 body=48 status=ok
// SIG undefined FUN_14400c2c2(void)

longlong FUN_14400c2c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c302 FUN_14400c302 body=48 status=ok
// SIG undefined FUN_14400c302(void)

longlong FUN_14400c302(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400c36a FUN_14400c36a body=242 status=ok
// SIG undefined FUN_14400c36a(void)

undefined8 FUN_14400c36a(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if ((*param_2 != *param_3) || ((int)param_2[1] != (int)param_3[1])) {
      *param_2 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      param_2[2] = 0;
    }
    plVar3 = param_3 + 4;
    plVar4 = param_2 + 4;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
      *plVar4 = *plVar3;
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
    }
    *(char *)(param_2 + 0x11) = (char)param_3[0x11];
    *(char *)(param_2 + 0x12) = (char)param_3[0x12];
    if (param_2 != param_3) {
      iVar1 = (int)param_3[0x14];
      _Src = (void *)param_3[0x13];
      *(int *)(param_2 + 0x14) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xa4) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
      }
      else {
        FUN_1446dd670(param_2 + 0x13,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)param_2[0x13],_Src,(longlong)iVar1 * 2);
        }
      }
    }
    param_2 = param_2 + 0x16;
    param_3 = param_3 + 0x16;
  }
  return 1;
}



// FUNCTION 14400c45c FUN_14400c45c body=47 status=ok
// SIG undefined FUN_14400c45c(void)

void FUN_14400c45c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14400c4a8 FUN_14400c4a8 body=38 status=ok
// SIG undefined FUN_14400c4a8(void)

void FUN_14400c4a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14400c4dc FUN_14400c4dc body=57 status=ok
// SIG undefined FUN_14400c4dc(void)

void FUN_14400c4dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba03e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba03e0 = FUN_140002ddd(FUN_1465a97be,uVar1,L"DLCDef");
  }
  return;
}



// FUNCTION 14400c515 FUN_14400c515 body=47 status=ok
// SIG undefined FUN_14400c515(void)

void FUN_14400c515(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14400c544 FUN_14400c544 body=47 status=ok
// SIG undefined FUN_14400c544(void)

void FUN_14400c544(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14400c573 FUN_14400c573 body=53 status=ok
// SIG undefined FUN_14400c573(void)

void FUN_14400c573(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14400c5a8 FUN_14400c5a8 body=84 status=ok
// SIG undefined FUN_14400c5a8(void)

longlong * FUN_14400c5a8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14400c5fc FUN_14400c5fc body=93 status=ok
// SIG undefined FUN_14400c5fc(void)

undefined8 * FUN_14400c5fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14400c515(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14400c79e(param_1,iVar1);
      FUN_14400c8e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14400c65a FUN_14400c65a body=164 status=ok
// SIG undefined FUN_14400c65a(void)

undefined8 * FUN_14400c65a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  puVar3 = param_2 + 4;
  puVar4 = param_1 + 4;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  _Src = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14400c6fe FUN_14400c6fe body=159 status=ok
// SIG undefined FUN_14400c6fe(void)

undefined8 * FUN_14400c6fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  FUN_148b913bc(param_1 + 3,param_2 + 3);
  param_1[6] = param_2[6];
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14400c79e FUN_14400c79e body=327 status=ok
// SIG undefined FUN_14400c79e(void)

void FUN_14400c79e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14400c80c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14400c80c:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14400c8e5 FUN_14400c8e5 body=132 status=ok
// SIG undefined FUN_14400c8e5(void)

void FUN_14400c8e5(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14400c9ee FUN_14400c9ee body=270 status=ok
// SIG undefined FUN_14400c9ee(void)

undefined8
FUN_14400c9ee(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             undefined2 *param_5)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,param_5);
    }
  }
  else {
    *param_5 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5 + 1,2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    param_5[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  param_5 = param_5 + 2;
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,param_5);
    }
  }
  else {
    *param_5 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 14400cd40 FUN_14400cd40 body=131 status=ok
// SIG undefined FUN_14400cd40(void)

void FUN_14400cd40(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x90);
  *param_2 = &PTR_FUN_14b5f6480;
  param_2[1] = &PTR_FUN_14b3a4a90;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  *(undefined2 *)(param_2 + 0xc) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x62) = 1;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 14400ce04 FUN_14400ce04 body=49 status=ok
// SIG undefined FUN_14400ce04(void)

void FUN_14400ce04(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14400ce50 FUN_14400ce50 body=100 status=ok
// SIG undefined FUN_14400ce50(void)

void FUN_14400ce50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  memset(param_2 + 2,0,0x160);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b5f69f0;
  *(undefined1 *)((longlong)param_2 + 0x19) = 1;
  lVar2 = 0x20;
  do {
    puVar1 = (undefined8 *)((longlong)param_2 + lVar2 + 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2) = 0;
    ((undefined8 *)((longlong)param_2 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x30) = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x170);
  return;
}



// FUNCTION 14400cec0 FUN_14400cec0 body=57 status=ok
// SIG undefined FUN_14400cec0(void)

void FUN_14400cec0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0650 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0650 = FUN_140002ddd(FUN_1465aa30f,uVar1,L"ElementalEffectCollectionDef");
  }
  return;
}



// FUNCTION 14400cfcc FUN_14400cfcc body=57 status=ok
// SIG undefined FUN_14400cfcc(void)

void FUN_14400cfcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba07c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba07c0 = FUN_140002ddd(FUN_1465aa959,uVar1,L"FactEvaluator_IsHoldingCarryable");
  }
  return;
}



// FUNCTION 14400d076 FUN_14400d076 body=57 status=ok
// SIG undefined FUN_14400d076(void)

void FUN_14400d076(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0890 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0890 = FUN_140002ddd(FUN_1465aacab,uVar1,L"FastTravelStationObjectDef");
  }
  return;
}



// FUNCTION 14400d0af FUN_14400d0af body=1255 status=ok
// SIG undefined FUN_14400d0af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14400d0af(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cba03a0 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5edde0,1,&PTR_FUN_14b5edd60);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5edf90);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b5ee340;
  local_58 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5ee360,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ee700);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ee830);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5efc40);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b5efe50 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b5efe58 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b5efe60 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  FUN_14098d3d2(FUN_14400beb8,L"/Script/OakGame",L"ECharacterDashDirection",&DAT_14cba0570);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f02b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f09b0,1,&PTR_FUN_14b5f0980);
  FUN_14098d3d2(FUN_14400beef,L"/Script/OakGame",L"EDamageAffinity",&DAT_14cba0600);
  FUN_14098d3d2(FUN_14400bf26,L"/Script/OakGame",L"EGrenadePayloadSlot",&DAT_14cba0618);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f0e10);
  local_40 = "bone";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f0fd0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f1090);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f1150);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f1210);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f1ce0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f1da0);
  FUN_14098d3d2(FUN_14400bf5d,L"/Script/OakGame",L"EOakReplicatedBlackboardPlayerStat",
                &DAT_14cba06f0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b5f2130;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f2150);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b5f2e60;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f2eb0,1,&PTR_FUN_14b5f2e80);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f3210,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f3330);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f3460);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b5f3740;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f3760);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cba0818);
  if (cVar1 == '\0') {
    _DAT_14cba0818 = 0;
    uRam000000014cba0820 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f4890,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f4e40,1,&PTR_FUN_14b5f4df0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f4f00);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400d598 FUN_14400d598 body=55 status=ok
// SIG undefined FUN_14400d598(void)

void FUN_14400d598(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba08e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba08e0 = FUN_14171c317(FUN_1465ab3a9,uVar1,L"EAtt_FirmwareAspect");
  }
  return;
}



// FUNCTION 14400d5e0 FUN_14400d5e0 body=55 status=ok
// SIG undefined FUN_14400d5e0(void)

void FUN_14400d5e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0cb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0cb0 = FUN_14171c317(FUN_1465ac113,uVar1,L"EGbxBrainAspectIsCloakedContext");
  }
  return;
}



// FUNCTION 14400d618 FUN_14400d618 body=48 status=ok
// SIG undefined FUN_14400d618(void)

longlong FUN_14400d618(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d648 FUN_14400d648 body=48 status=ok
// SIG undefined FUN_14400d648(void)

longlong FUN_14400d648(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d678 FUN_14400d678 body=48 status=ok
// SIG undefined FUN_14400d678(void)

longlong FUN_14400d678(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d6a8 FUN_14400d6a8 body=48 status=ok
// SIG undefined FUN_14400d6a8(void)

longlong FUN_14400d6a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d6d8 FUN_14400d6d8 body=48 status=ok
// SIG undefined FUN_14400d6d8(void)

longlong FUN_14400d6d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d708 FUN_14400d708 body=48 status=ok
// SIG undefined FUN_14400d708(void)

longlong FUN_14400d708(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d738 FUN_14400d738 body=48 status=ok
// SIG undefined FUN_14400d738(void)

longlong FUN_14400d738(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d768 FUN_14400d768 body=48 status=ok
// SIG undefined FUN_14400d768(void)

longlong FUN_14400d768(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d798 FUN_14400d798 body=48 status=ok
// SIG undefined FUN_14400d798(void)

longlong FUN_14400d798(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14400d822 FUN_14400d822 body=57 status=ok
// SIG undefined FUN_14400d822(void)

void FUN_14400d822(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba08f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba08f8 = FUN_140002ddd(FUN_1465ab40f,uVar1,L"FirmwareAspect");
  }
  return;
}



// FUNCTION 14400d8aa FUN_14400d8aa body=57 status=ok
// SIG undefined FUN_14400d8aa(void)

void FUN_14400d8aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0928 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0928 = FUN_140002ddd(FUN_1465ab43e,uVar1,L"FirmwareDef");
  }
  return;
}



// FUNCTION 14400d93a FUN_14400d93a body=57 status=ok
// SIG undefined FUN_14400d93a(void)

void FUN_14400d93a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0b18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0b18 = FUN_140002ddd(FUN_1465ab8cf,uVar1,L"FirmwareTransferMachineDef");
  }
  return;
}



// FUNCTION 14400d982 FUN_14400d982 body=57 status=ok
// SIG undefined FUN_14400d982(void)

void FUN_14400d982(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0b30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0b30 = FUN_140002ddd(FUN_1465ab961,uVar1,L"GadgetStatsContainer");
  }
  return;
}



// FUNCTION 14400d9ca FUN_14400d9ca body=93 status=ok
// SIG undefined FUN_14400d9ca(void)

void FUN_14400d9ca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x88);
  param_2[1] = 0;
  param_2[0xd] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  param_2[0x11] = 0;
  *param_2 = &PTR_FUN_14b6040c0;
  return;
}



// FUNCTION 14400da34 FUN_14400da34 body=57 status=ok
// SIG undefined FUN_14400da34(void)

void FUN_14400da34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0b48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0b48 = FUN_140002ddd(FUN_1465ab9f3,uVar1,L"GadgetStatsDef");
  }
  return;
}



// FUNCTION 14400daac FUN_14400daac body=57 status=ok
// SIG undefined FUN_14400daac(void)

void FUN_14400daac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0b60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0b60 = FUN_140002ddd(FUN_1465aba85,uVar1,L"GadgetUIAspect");
  }
  return;
}



// FUNCTION 14400db44 FUN_14400db44 body=57 status=ok
// SIG undefined FUN_14400db44(void)

void FUN_14400db44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c08 = FUN_140002ddd(FUN_1465abe2d,uVar1,L"GbxActorPartDef_DisplayName");
  }
  return;
}



// FUNCTION 14400dbe0 FUN_14400dbe0 body=57 status=ok
// SIG undefined FUN_14400dbe0(void)

void FUN_14400dbe0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0cc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0cc8 = FUN_140002ddd(FUN_1465ac179,uVar1,L"GbxBrainAspectSettings_Cloaked");
  }
  return;
}



// FUNCTION 14400dc36 FUN_14400dc36 body=57 status=ok
// SIG undefined FUN_14400dc36(void)

void FUN_14400dc36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0cf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0cf8 = FUN_140002ddd(FUN_1465ac265,uVar1,L"GbxBrainAspectSettings_CloakOverride");
  }
  return;
}



// FUNCTION 14400dca8 FUN_14400dca8 body=57 status=ok
// SIG undefined FUN_14400dca8(void)

void FUN_14400dca8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d58 = FUN_140002ddd(FUN_1465ac405,uVar1,L"GbxBrainAspectSettings_OakResourceLock");
  }
  return;
}



// FUNCTION 14400dcf0 FUN_14400dcf0 body=162 status=ok
// SIG undefined FUN_14400dcf0(void)

void FUN_14400dcf0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe8);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *param_2 = &PTR_FUN_14b602dd0;
  return;
}



// FUNCTION 14400dd92 FUN_14400dd92 body=57 status=ok
// SIG undefined FUN_14400dd92(void)

void FUN_14400dd92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d70 = FUN_140002ddd(FUN_1465ac45f,uVar1,L"GbxBrainAspect_OakResourceLock");
  }
  return;
}



// FUNCTION 14400ddda FUN_14400ddda body=57 status=ok
// SIG undefined FUN_14400ddda(void)

void FUN_14400ddda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d88 = FUN_140002ddd(FUN_1465ac4f1,uVar1,L"GbxBrainAspectSettings_OrderRewind");
  }
  return;
}



// FUNCTION 14400de3e FUN_14400de3e body=159 status=ok
// SIG undefined FUN_14400de3e(void)

void FUN_14400de3e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b6036e0;
  return;
}



// FUNCTION 14400dede FUN_14400dede body=57 status=ok
// SIG undefined FUN_14400dede(void)

void FUN_14400dede(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0dd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0dd0 = FUN_140002ddd(FUN_1465ac5ff,uVar1,L"GbxBrainAspect_Revive");
  }
  return;
}



// FUNCTION 14400df34 FUN_14400df34 body=2362 status=ok
// SIG undefined FUN_14400df34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14400df34(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba08a0 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5f9c70,1,&PTR_FUN_14b5f9c40);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b5f9da0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5f9dc0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fa130);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fa360);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5fa6d0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5fb060,1,0);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cba09b0);
  if (cVar1 == '\0') {
    _DAT_14cba09b0 = 0;
    uRam000000014cba09b8 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cba09c0 = 0x47efffffe0000000;
  _DAT_14cba09c8 = 0x47efffffe0000000;
  _DAT_14cba09d0 = 0x47efffffe0000000;
  _DAT_14cba09d8 = 0x47efffffe0000000;
  _DAT_14cba09e0 = 0x47efffffe0000000;
  _DAT_14cba09e8 = 0x47efffffe0000000;
  _DAT_14cba09f0 = 0x47efffffe0000000;
  _DAT_14cba09f8 = 0x47efffffe0000000;
  local_60 = "Cash";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a00 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cba0a08,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14400d5cf);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a1c = 0;
  FUN_14052b5e0(&DAT_14cba0a18,"PlayerAwareness",0);
  _DAT_14cba0a28 = "PlayerAwareness";
  local_60 = "basic";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a30 = (ulonglong)uVar2;
  local_60 = "challenge";
  local_58 = 9;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a38 = (ulonglong)uVar2;
  local_60 = "online";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a40 = (ulonglong)uVar2;
  local_60 = "social";
  local_58 = 6;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a48 = (ulonglong)uVar2;
  local_60 = "alert";
  local_58 = 5;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a50 = (ulonglong)uVar2;
  local_60 = "photo_mode";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a58 = (ulonglong)uVar2;
  local_60 = "generic_task";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a60 = (ulonglong)uVar2;
  local_60 = "mission";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a68 = (ulonglong)uVar2;
  local_60 = "mail";
  local_58 = 4;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a70 = (ulonglong)uVar2;
  local_60 = "respawn";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a78 = (ulonglong)uVar2;
  local_60 = "tutorial";
  local_58 = 8;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a80 = (ulonglong)uVar2;
  local_60 = "special_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a88 = (ulonglong)uVar2;
  local_60 = "generic_notification";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a90 = (ulonglong)uVar2;
  local_60 = "vault_card";
  local_58 = 10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0a98 = (ulonglong)uVar2;
  local_60 = "ONLINE_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0aa0 = (ulonglong)uVar2;
  local_60 = "INGAME_MESSAGE";
  local_58 = 0xe;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0aa8 = (ulonglong)uVar2;
  local_60 = "NOTIFICATION_MESSAGE";
  local_58 = 0x14;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0ab0 = (ulonglong)uVar2;
  local_60 = "MENU_TUTORIAL_MESSAGE";
  local_58 = 0x15;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0ab8 = (ulonglong)uVar2;
  local_60 = "collectible";
  local_58 = 0xb;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cba0ac0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cba0ac8,L"UNSET",1);
  local_60 = "init";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "update";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "config_update";
  local_58 = 0xd;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_60 = "deinit";
  local_58 = 6;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&DAT_14cba0ad0,L"Party",1);
  FUN_1446f470e(&DAT_14cba0ad8,&DAT_149e063b2,1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5fc430,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fc4f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fc590);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fc620);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fc700);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b5fce90,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fd150);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fd2c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fd700);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fd9f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fdc50);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fdf10);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b5fe2c0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fe2e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5fef10);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ff0c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ff340);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ff4d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ff6f0);
  FUN_1446f470e(&DAT_14cba0de0,L"SkipStartAnimation",1);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b5ff9a0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400e870 FUN_14400e870 body=55 status=ok
// SIG undefined FUN_14400e870(void)

void FUN_14400e870(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0fc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0fc8 = FUN_14171c317(FUN_1465ada2f,uVar1,L"EGbxBrainTaskTeleportRotation");
  }
  return;
}



// FUNCTION 14400e8a7 FUN_14400e8a7 body=55 status=ok
// SIG undefined FUN_14400e8a7(void)

void FUN_14400e8a7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0fe0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0fe0 = FUN_14171c317(FUN_1465ada5e,uVar1,L"EGbxBrainTaskPostTeleportRotation");
  }
  return;
}



// FUNCTION 14400e8de FUN_14400e8de body=55 status=ok
// SIG undefined FUN_14400e8de(void)

void FUN_14400e8de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1108 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1108 = FUN_14171c317(FUN_1465adc0b,uVar1,L"EChallengeType");
  }
  return;
}



// FUNCTION 14400e915 FUN_14400e915 body=55 status=ok
// SIG undefined FUN_14400e915(void)

void FUN_14400e915(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1120 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1120 = FUN_14171c317(FUN_1465adc3a,uVar1,L"EChallengeStatusEffectIdentifier");
  }
  return;
}



// FUNCTION 14400e94c FUN_14400e94c body=55 status=ok
// SIG undefined FUN_14400e94c(void)

void FUN_14400e94c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1138 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1138 = FUN_14171c317(FUN_1465adc69,uVar1,L"EEquipmentChallengeCriteria");
  }
  return;
}



// FUNCTION 14400e9da FUN_14400e9da body=57 status=ok
// SIG undefined FUN_14400e9da(void)

void FUN_14400e9da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e80 = FUN_140002ddd(FUN_1465ad4c9,uVar1,L"GbxBrainTaskSettings_ChargeAttack");
  }
  return;
}



// FUNCTION 14400ea22 FUN_14400ea22 body=57 status=ok
// SIG undefined FUN_14400ea22(void)

void FUN_14400ea22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e98 = FUN_140002ddd(FUN_1465ad55b,uVar1,L"GbxBrainTaskSettings_Cloak");
  }
  return;
}



// FUNCTION 14400ea6a FUN_14400ea6a body=57 status=ok
// SIG undefined FUN_14400ea6a(void)

void FUN_14400ea6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0eb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0eb0 = FUN_140002ddd(FUN_1465ad5ed,uVar1,L"GbxBrainTaskSettings_Uncloak");
  }
  return;
}



// FUNCTION 14400eab2 FUN_14400eab2 body=57 status=ok
// SIG undefined FUN_14400eab2(void)

void FUN_14400eab2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ec8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ec8 = FUN_140002ddd(FUN_1465ad67f,uVar1,L"GbxBrainTaskSettings_FFYLTaunt");
  }
  return;
}



// FUNCTION 14400eafa FUN_14400eafa body=343 status=ok
// SIG undefined FUN_14400eafa(void)

void FUN_14400eafa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x238);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  *(undefined4 *)((longlong)param_2 + 0x124) = 8;
  *(undefined4 *)((longlong)param_2 + 300) = 0xbf800000;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  param_2[0x42] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b60b0b0;
  param_2[0x4d] = 0;
  return;
}



// FUNCTION 14400ec52 FUN_14400ec52 body=57 status=ok
// SIG undefined FUN_14400ec52(void)

void FUN_14400ec52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ee0 = FUN_140002ddd(FUN_1465ad6d9,uVar1,L"OakBrainTask_FFYLTaunt");
  }
  return;
}



// FUNCTION 14400ec9a FUN_14400ec9a body=57 status=ok
// SIG undefined FUN_14400ec9a(void)

void FUN_14400ec9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ef8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ef8 = FUN_140002ddd(FUN_1465ad76b,uVar1,L"GbxBrainTaskSettings_Land");
  }
  return;
}



// FUNCTION 14400ecf0 FUN_14400ecf0 body=57 status=ok
// SIG undefined FUN_14400ecf0(void)

void FUN_14400ecf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0f68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0f68 = FUN_140002ddd(FUN_1465ad857,uVar1,L"GbxBrainTaskSettings_Revive");
  }
  return;
}



// FUNCTION 14400ed38 FUN_14400ed38 body=336 status=ok
// SIG undefined FUN_14400ed38(void)

void FUN_14400ed38(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x238);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 2;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_2 + 0xbf) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 2;
  param_2[0x23] = 0;
  *(undefined4 *)((longlong)param_2 + 0x124) = 8;
  *(undefined4 *)((longlong)param_2 + 300) = 0xbf800000;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  param_2[0x42] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b60b9d0;
  return;
}



// FUNCTION 14400ee88 FUN_14400ee88 body=57 status=ok
// SIG undefined FUN_14400ee88(void)

void FUN_14400ee88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0f80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0f80 = FUN_140002ddd(FUN_1465ad8b1,uVar1,L"GbxBrainTask_Revive");
  }
  return;
}



// FUNCTION 14400eed0 FUN_14400eed0 body=57 status=ok
// SIG undefined FUN_14400eed0(void)

void FUN_14400eed0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0f98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0f98 = FUN_140002ddd(FUN_1465ad943,uVar1,L"GbxBrainTaskSettings_SwoopAttack");
  }
  return;
}



// FUNCTION 14400ef18 FUN_14400ef18 body=57 status=ok
// SIG undefined FUN_14400ef18(void)

void FUN_14400ef18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0fb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0fb0 = FUN_140002ddd(FUN_1465ad9d5,uVar1,L"GbxBrainTaskSettings_TakeOff");
  }
  return;
}



// FUNCTION 14400ef60 FUN_14400ef60 body=57 status=ok
// SIG undefined FUN_14400ef60(void)

void FUN_14400ef60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ff8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ff8 = FUN_140002ddd(FUN_1465adac5,uVar1,L"GbxBrainTaskSettings_Teleport");
  }
  return;
}



// FUNCTION 14400efa8 FUN_14400efa8 body=57 status=ok
// SIG undefined FUN_14400efa8(void)

void FUN_14400efa8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1010 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1010 = FUN_140002ddd(FUN_1465adb57,uVar1,L"GbxBrainTaskSettings_UseGadget");
  }
  return;
}



// FUNCTION 14400f05c FUN_14400f05c body=57 status=ok
// SIG undefined FUN_14400f05c(void)

void FUN_14400f05c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1168 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1168 = FUN_140002ddd(FUN_1418c43d3,uVar1,L"GbxChallengeDef");
  }
  return;
}



// FUNCTION 14400f095 FUN_14400f095 body=53 status=ok
// SIG undefined FUN_14400f095(void)

void FUN_14400f095(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x48);
    do {
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*pbVar1])(pbVar1 + -0x38);
      pbVar1 = pbVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14400f0ca FUN_14400f0ca body=1650 status=ok
// SIG undefined FUN_14400f0ca(void)

longlong FUN_14400f0ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_148b9d72c(param_1 + 0x48,param_2 + 0x48);
  lVar11 = *(longlong *)(param_2 + 0x60);
  if (*(longlong *)(param_1 + 0x60) != lVar11) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(longlong *)(param_1 + 0x60) = lVar11;
  if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  uVar10 = FUN_14477b664();
  uVar10 = FUN_14477b664(uVar10);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1457b9864(param_1 + 0x78,param_2 + 0x78);
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 200);
  FUN_148b9d780(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_1447715ec(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined2 *)(param_1 + 0x11c) = *(undefined2 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  lVar11 = *(longlong *)(param_2 + 0x120);
  if (*(longlong *)(param_1 + 0x120) != lVar11) {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(longlong *)(param_1 + 0x120) = lVar11;
  if (*(longlong *)(param_1 + 0x128) != *(longlong *)(param_2 + 0x128)) {
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  uVar10 = FUN_14477b664();
  uVar10 = FUN_14477b664(uVar10);
  *(undefined8 *)(param_1 + 0x128) = uVar10;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  uVar10 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x13d) = *(undefined8 *)(param_2 + 0x13d);
  *(undefined8 *)(param_1 + 0x138) = uVar10;
  FUN_148b9d7d0(param_1 + 0x148,param_2 + 0x148);
  *(undefined2 *)(param_1 + 0x160) = *(undefined2 *)(param_2 + 0x160);
  if (param_1 != param_2) {
    lVar11 = param_2 + 0x168;
    if (*(longlong *)(param_2 + 0x198) != 0) {
      lVar11 = *(longlong *)(param_2 + 0x198);
    }
    FUN_1400709d4(param_1 + 0x168,lVar11,*(undefined4 *)(param_2 + 0x1a0),
                  *(undefined4 *)(param_1 + 0x1a4));
  }
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  if ((*(longlong *)(param_1 + 0x1b8) != *(longlong *)(param_2 + 0x1b8)) ||
     (*(int *)(param_1 + 0x1c0) != *(int *)(param_2 + 0x1c0))) {
    *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1d0);
  uVar4 = *(undefined4 *)(param_2 + 0x1d4);
  uVar5 = *(undefined4 *)(param_2 + 0x1d8);
  uVar6 = *(undefined4 *)(param_2 + 0x1dc);
  uVar7 = *(undefined4 *)(param_2 + 0x1dd);
  uVar8 = *(undefined4 *)(param_2 + 0x1e1);
  uVar9 = *(undefined4 *)(param_2 + 0x1e5);
  *(undefined4 *)(param_1 + 0x1d9) = *(undefined4 *)(param_2 + 0x1d9);
  *(undefined4 *)(param_1 + 0x1dd) = uVar7;
  *(undefined4 *)(param_1 + 0x1e1) = uVar8;
  *(undefined4 *)(param_1 + 0x1e5) = uVar9;
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  *(undefined4 *)(param_1 + 0x1d4) = uVar4;
  *(undefined4 *)(param_1 + 0x1d8) = uVar5;
  *(undefined4 *)(param_1 + 0x1dc) = uVar6;
  (**(code **)(*(longlong *)(param_1 + 0x1f0) + 0x20))(param_1 + 0x1f0,0);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  FUN_1406022fe(param_1 + 0x200,param_2 + 0x200);
  (**(code **)(*(longlong *)(param_1 + 0x210) + 0x20))(param_1 + 0x210,0);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  FUN_1406022fe(param_1 + 0x220,param_2 + 0x220);
  FUN_1403de7ba(param_1 + 0x230,param_2 + 0x230);
  FUN_1465a9244(param_1 + 0x250,param_2 + 0x250);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  FUN_1403de7ba(param_1 + 0x270,param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  if ((*(longlong *)(param_1 + 0x298) != *(longlong *)(param_2 + 0x298)) ||
     (*(int *)(param_1 + 0x2a0) != *(int *)(param_2 + 0x2a0))) {
    *(longlong *)(param_1 + 0x298) = *(longlong *)(param_2 + 0x298);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x2b0) != *(longlong *)(param_2 + 0x2b0)) ||
     (*(int *)(param_1 + 0x2b8) != *(int *)(param_2 + 0x2b8))) {
    *(longlong *)(param_1 + 0x2b0) = *(longlong *)(param_2 + 0x2b0);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  FUN_1406fa324(param_1 + 0x2c8,param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  FUN_148b9d824(param_1 + 0x2e8,param_2 + 0x2e8);
  if ((*(longlong *)(param_1 + 0x2f8) != 0) && (*(int *)(param_1 + 0x300) != -1)) {
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  FUN_148b9d874(param_1 + 0x308,param_2 + 0x308);
  *(undefined2 *)(param_1 + 800) = *(undefined2 *)(param_2 + 800);
  *(undefined1 *)(param_1 + 0x322) = *(undefined1 *)(param_2 + 0x322);
  FUN_148b9d8c8(param_1 + 0x328,param_2 + 0x328);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x338);
  FUN_148b9d918(param_1 + 0x340,param_2 + 0x340);
  FUN_148b9d96c(param_1 + 0x358,param_2 + 0x358);
  lVar11 = *(longlong *)(param_2 + 0x368);
  if (*(longlong *)(param_1 + 0x368) != lVar11) {
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  *(longlong *)(param_1 + 0x368) = lVar11;
  if (*(longlong *)(param_1 + 0x370) != *(longlong *)(param_2 + 0x370)) {
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  uVar10 = FUN_14477b664();
  uVar10 = FUN_14477b664(uVar10);
  *(undefined8 *)(param_1 + 0x370) = uVar10;
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  FUN_148b9d9bc(param_1 + 0x388,param_2 + 0x388);
  FUN_148b9da10(param_1 + 0x3a0,param_2 + 0x3a0);
  lVar11 = *(longlong *)(param_2 + 0x3b0);
  if (*(longlong *)(param_1 + 0x3b0) != lVar11) {
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  *(longlong *)(param_1 + 0x3b0) = lVar11;
  if (*(longlong *)(param_1 + 0x3b8) != *(longlong *)(param_2 + 0x3b8)) {
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  uVar10 = FUN_14477b664();
  uVar10 = FUN_14477b664(uVar10);
  *(undefined8 *)(param_1 + 0x3b8) = uVar10;
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  FUN_1447715ec(param_1 + 1000,param_2 + 1000);
  FUN_1465a9244(param_1 + 0x410,param_2 + 0x410);
  FUN_148b9da64(param_1 + 0x428,param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  FUN_140d7e6a6(param_1 + 0x440,param_2 + 0x440);
  FUN_148b9dab4(param_1 + 0x450,param_2 + 0x450);
  FUN_1403de7ba(param_1 + 0x460,param_2 + 0x460);
  FUN_1406fa324(param_1 + 0x480,param_2 + 0x480);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_2 + 0x490);
  FUN_148b9db04(param_1 + 0x498,param_2 + 0x498);
  return param_1;
}



// FUNCTION 14400f742 FUN_14400f742 body=1618 status=ok
// SIG undefined FUN_14400f742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14400f742(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6044d0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b604650);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b604d90);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6050f0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b605550);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6057e0);
  _DAT_14cba0f20 = 0x47efffffe0000000;
  _DAT_14cba0f28 = 0x47efffffe0000000;
  _DAT_14cba0f30 = 0x47efffffe0000000;
  _DAT_14cba0f38 = 0x47efffffe0000000;
  _DAT_14cba0f40 = 0x47efffffe0000000;
  _DAT_14cba0f48 = 0x47efffffe0000000;
  _DAT_14cba0f50 = 0x47efffffe0000000;
  _DAT_14cba0f58 = 0x47efffffe0000000;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b605d30);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b606200);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b606420);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b607160;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6071a0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6072e0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1038 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba1040);
  if (cVar1 == '\0') {
    _DAT_14cba1040 = 0;
    uRam000000014cba1048 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cba1054 = 0;
  FUN_14052b5e0(&DAT_14cba1050,"PlayerAwareness",0);
  _DAT_14cba1060 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1068 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1070 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1078 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1080 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1088 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1090 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1098 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10a0 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10a8 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10b0 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10b8 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10c0 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10c8 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10d0 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10d8 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10e0 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10e8 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10f0 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba10f8 = (ulonglong)uVar2;
  local_60 = &PTR_FUN_14b609e40;
  uStack_58 = 3;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b609ef0,1,&PTR_FUN_14b609ea0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400fd9d FUN_14400fd9d body=55 status=ok
// SIG undefined FUN_14400fd9d(void)

void FUN_14400fd9d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1300 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1300 = FUN_14171c317(FUN_1465ae7c6,uVar1,L"HealthComparator");
  }
  return;
}



// FUNCTION 14400fdd9 FUN_14400fdd9 body=55 status=ok
// SIG undefined FUN_14400fdd9(void)

void FUN_14400fdd9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1390 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1390 = FUN_14171c317(FUN_1465aeae4,uVar1,L"ShieldValueComparator");
  }
  return;
}



// FUNCTION 14400fe12 FUN_14400fe12 body=227 status=ok
// SIG undefined FUN_14400fe12(void)

longlong FUN_14400fe12(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_14400fef6;
    local_40 = FUN_14400fef9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_LastDeathIcon",&DAT_14cba1490,
                  &DAT_14400fe10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14400fef9 FUN_14400fef9 body=53 status=ok
// SIG undefined FUN_14400fef9(void)

void FUN_14400fef9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f5062a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b60e9e0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  return;
}



// FUNCTION 14400ff33 FUN_14400ff33 body=47 status=ok
// SIG undefined FUN_14400ff33(void)

longlong FUN_14400ff33(void)

{
  if (DAT_14cba1498 == 0) {
    FUN_14073dd9a(&DAT_14cba1498,&PTR_LAB_14b60e998);
  }
  return DAT_14cba1498;
}



// FUNCTION 14400ff66 FUN_14400ff66 body=114 status=ok
// SIG undefined FUN_14400ff66(void)

void FUN_14400ff66(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b611170;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x69) = 0;
  return;
}



// FUNCTION 14400ffd8 FUN_14400ffd8 body=227 status=ok
// SIG undefined FUN_14400ffd8(void)

longlong FUN_14400ffd8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464da83c;
    local_38 = &LAB_14400ff63;
    local_40 = FUN_14400ff66;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProvider_LastDeathIcon",&DAT_14cba1568,
                  &DAT_14400ff62);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440100bc FUN_1440100bc body=47 status=ok
// SIG undefined FUN_1440100bc(void)

longlong FUN_1440100bc(void)

{
  if (DAT_14cba1570 == 0) {
    FUN_14073dd9a(&DAT_14cba1570,&PTR_FUN_14b611128);
  }
  return DAT_14cba1570;
}



// FUNCTION 1440100ec FUN_1440100ec body=55 status=ok
// SIG undefined FUN_1440100ec(void)

void FUN_1440100ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1648 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1648 = FUN_140002ddd(FUN_144010123,uVar1,L"GbxGameReplayNexusConfigFilterCondition");
  }
  return;
}



// FUNCTION 144010123 FUN_144010123 body=47 status=ok
// SIG undefined FUN_144010123(void)

longlong FUN_144010123(void)

{
  if (DAT_14cba1640 == 0) {
    FUN_14086a14e(&DAT_14cba1640,&PTR_FUN_14b613388);
  }
  return DAT_14cba1640;
}



// FUNCTION 144010152 FUN_144010152 body=48 status=ok
// SIG undefined FUN_144010152(void)

void FUN_144010152(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b617f10;
  return;
}



// FUNCTION 144010182 FUN_144010182 body=55 status=ok
// SIG undefined FUN_144010182(void)

void FUN_144010182(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1660 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1660 = FUN_140002ddd(FUN_1440101b9,uVar1,L"GbxGameReplayNexusConfigFilterData");
  }
  return;
}



// FUNCTION 1440101b9 FUN_1440101b9 body=47 status=ok
// SIG undefined FUN_1440101b9(void)

longlong FUN_1440101b9(void)

{
  if (DAT_14cba1658 == 0) {
    FUN_14086a14e(&DAT_14cba1658,&PTR_FUN_14b613500);
  }
  return DAT_14cba1658;
}



// FUNCTION 1440101e8 FUN_1440101e8 body=48 status=ok
// SIG undefined FUN_1440101e8(void)

void FUN_1440101e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b618070;
  return;
}



// FUNCTION 14401021c FUN_14401021c body=98 status=ok
// SIG undefined FUN_14401021c(void)

void FUN_14401021c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b613680;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14401027e FUN_14401027e body=220 status=ok
// SIG undefined FUN_14401027e(void)

longlong FUN_14401027e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1670 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_144010219;
    local_40 = FUN_14401021c;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxGameReplayNexusConfigFilter",&DAT_14cba1670,&DAT_144010218
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1670;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14401035b FUN_14401035b body=47 status=ok
// SIG undefined FUN_14401035b(void)

longlong FUN_14401035b(void)

{
  if (DAT_14cba1678 == 0) {
    FUN_14073dd9a(&DAT_14cba1678,&PTR_FUN_14b613638);
  }
  return DAT_14cba1678;
}



// FUNCTION 14401038a FUN_14401038a body=55 status=ok
// SIG undefined FUN_14401038a(void)

void FUN_14401038a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1690 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1690 = FUN_14171c317(FUN_1465af735,uVar1,L"ECinematicMissionGrantPlayMode");
  }
  return;
}



// FUNCTION 1440103c1 FUN_1440103c1 body=55 status=ok
// SIG undefined FUN_1440103c1(void)

void FUN_1440103c1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba16a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba16a8 = FUN_14171c317(FUN_1465af764,uVar1,L"ECinematicMissionGrantStage");
  }
  return;
}



// FUNCTION 1440103f8 FUN_1440103f8 body=55 status=ok
// SIG undefined FUN_1440103f8(void)

void FUN_1440103f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba17b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba17b0 = FUN_140002ddd(FUN_14401042f,uVar1,L"GbxMomentNodeSettings_LoadingScreenWait");
  }
  return;
}



// FUNCTION 14401042f FUN_14401042f body=47 status=ok
// SIG undefined FUN_14401042f(void)

longlong FUN_14401042f(void)

{
  if (DAT_14cba17a8 == 0) {
    FUN_14086a14e(&DAT_14cba17a8,&PTR_FUN_14b614ab8);
  }
  return DAT_14cba17a8;
}



// FUNCTION 14401045e FUN_14401045e body=48 status=ok
// SIG undefined FUN_14401045e(void)

void FUN_14401045e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b6199d0;
  return;
}



// FUNCTION 14401048e FUN_14401048e body=55 status=ok
// SIG undefined FUN_14401048e(void)

void FUN_14401048e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba17c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba17c8 = FUN_140002ddd(FUN_1440104c5,uVar1,L"GbxMomentNodeState_LoadingScreenWait");
  }
  return;
}



// FUNCTION 1440104c5 FUN_1440104c5 body=47 status=ok
// SIG undefined FUN_1440104c5(void)

longlong FUN_1440104c5(void)

{
  if (DAT_14cba17c0 == 0) {
    FUN_14086a14e(&DAT_14cba17c0,&PTR_FUN_14b614b60);
  }
  return DAT_14cba17c0;
}



// FUNCTION 1440104f4 FUN_1440104f4 body=48 status=ok
// SIG undefined FUN_1440104f4(void)

void FUN_1440104f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b619c20;
  return;
}



// FUNCTION 144010524 FUN_144010524 body=38 status=ok
// SIG undefined FUN_144010524(void)

undefined8 FUN_144010524(undefined8 param_1,int param_2)

{
  FUN_1407e87c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401054a FUN_14401054a body=102 status=ok
// SIG undefined FUN_14401054a(void)

undefined8 * FUN_14401054a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b60ee50;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (*(char *)(param_1 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  FUN_1407e874e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440105b0 FUN_1440105b0 body=65 status=ok
// SIG undefined FUN_1440105b0(void)

undefined8 * FUN_1440105b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b611170;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d048(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440105f2 FUN_1440105f2 body=77 status=ok
// SIG undefined FUN_1440105f2(void)

undefined8 * FUN_1440105f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b613680;
  FUN_144011f6b(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401064e FUN_14401064e body=274 status=ok
// SIG undefined FUN_14401064e(void)

void FUN_14401064e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b615bd0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 144010778 FUN_144010778 body=57 status=ok
// SIG undefined FUN_144010778(void)

void FUN_144010778(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba12a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba12a0 = FUN_140002ddd(FUN_1465ae608,uVar1,L"GbxChallengeListDef");
  }
  return;
}



// FUNCTION 144010902 FUN_144010902 body=29 status=ok
// SIG undefined FUN_144010902(void)

undefined8 FUN_144010902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401095c FUN_14401095c body=47 status=ok
// SIG undefined FUN_14401095c(void)

void FUN_14401095c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1440109a2 FUN_1440109a2 body=141 status=ok
// SIG undefined FUN_1440109a2(void)

undefined8 FUN_1440109a2(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x28);
    do {
      FUN_1447715ec(puVar2 + -5,param_3);
      if (puVar2 + -5 != param_3) {
        iVar1 = *(int *)(param_3 + 6);
        _Src = (void *)param_3[5];
        *(int *)(puVar2 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      param_3 = param_3 + 7;
      puVar2 = puVar2 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144010a58 FUN_144010a58 body=59 status=ok
// SIG undefined FUN_144010a58(void)

undefined8 FUN_144010a58(longlong *param_1)

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



// FUNCTION 144010a9e FUN_144010a9e body=54 status=ok
// SIG undefined FUN_144010a9e(void)

void FUN_144010a9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 144010b24 FUN_144010b24 body=29 status=ok
// SIG undefined FUN_144010b24(void)

undefined8 FUN_144010b24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144010b7e FUN_144010b7e body=59 status=ok
// SIG undefined FUN_144010b7e(void)

void FUN_144010b7e(undefined8 param_1,longlong param_2)

{
  FUN_144010d58(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30));
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144010bd0 FUN_144010bd0 body=138 status=ok
// SIG undefined FUN_144010bd0(void)

undefined8 FUN_144010bd0(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x28);
    do {
      FUN_1447715ec(puVar3 + -5,param_3);
      if (puVar3 + -5 != param_3) {
        FUN_144010d58(*puVar3,*(undefined4 *)(puVar3 + 1));
        iVar1 = *(int *)(param_3 + 6);
        uVar2 = param_3[5];
        *(int *)(puVar3 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar3 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_144010d9a(puVar3,iVar1);
          FUN_144010edd(*puVar3,uVar2,iVar1);
        }
      }
      param_3 = param_3 + 7;
      puVar3 = puVar3 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 144010c82 FUN_144010c82 body=59 status=ok
// SIG undefined FUN_144010c82(void)

undefined8 FUN_144010c82(longlong *param_1)

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



// FUNCTION 144010cc8 FUN_144010cc8 body=66 status=ok
// SIG undefined FUN_144010cc8(void)

void FUN_144010cc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_144010d58(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30));
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 144010d58 FUN_144010d58 body=65 status=ok
// SIG undefined FUN_144010d58(void)

void FUN_144010d58(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144010d9a FUN_144010d9a body=323 status=ok
// SIG undefined FUN_144010d9a(void)

void FUN_144010d9a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_144010e04;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_144010e04:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 144010edd FUN_144010edd body=129 status=ok
// SIG undefined FUN_144010edd(void)

void FUN_144010edd(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    do {
      FUN_1447a97f4(puVar2 + -5,param_2);
      *puVar2 = 0;
      iVar1 = *(int *)(param_2 + 0x30);
      _Src = *(void **)(param_2 + 0x28);
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 0x38;
      puVar2 = puVar2 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144010f7c FUN_144010f7c body=120 status=ok
// SIG undefined FUN_144010f7c(void)

void FUN_144010f7c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 144011010 FUN_144011010 body=120 status=ok
// SIG undefined FUN_144011010(void)

void FUN_144011010(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 144011088 FUN_144011088 body=123 status=ok
// SIG undefined FUN_144011088(void)

undefined8 * FUN_144011088(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011120 FUN_144011120 body=114 status=ok
// SIG undefined FUN_144011120(void)

void FUN_144011120(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 144011192 FUN_144011192 body=123 status=ok
// SIG undefined FUN_144011192(void)

undefined8 * FUN_144011192(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14401122a FUN_14401122a body=114 status=ok
// SIG undefined FUN_14401122a(void)

void FUN_14401122a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14401129c FUN_14401129c body=123 status=ok
// SIG undefined FUN_14401129c(void)

undefined8 * FUN_14401129c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011334 FUN_144011334 body=114 status=ok
// SIG undefined FUN_144011334(void)

void FUN_144011334(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 1440113a6 FUN_1440113a6 body=123 status=ok
// SIG undefined FUN_1440113a6(void)

undefined8 * FUN_1440113a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011422 FUN_144011422 body=29 status=ok
// SIG undefined FUN_144011422(void)

undefined8 FUN_144011422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011574 FUN_144011574 body=111 status=ok
// SIG undefined FUN_144011574(void)

undefined8 FUN_144011574(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14401160c FUN_14401160c body=59 status=ok
// SIG undefined FUN_14401160c(void)

undefined8 FUN_14401160c(longlong *param_1)

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



// FUNCTION 144011658 FUN_144011658 body=119 status=ok
// SIG undefined FUN_144011658(void)

void FUN_144011658(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    plVar1 = param_2 + 10;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_2 + 0xe) * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar3 = plVar1;
      if (0x18 < *(ushort *)(param_2 + 0xd)) {
        plVar3 = (longlong *)*plVar1;
      }
      (*pcVar2)(plVar3);
    }
    if (0x18 < *(ushort *)(param_2 + 0xd)) {
      FUN_1400020a8(*plVar1);
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14401171e FUN_14401171e body=122 status=ok
// SIG undefined FUN_14401171e(void)

undefined8 * FUN_14401171e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b5150;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011798 FUN_144011798 body=55 status=ok
// SIG undefined FUN_144011798(void)

void FUN_144011798(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba17b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba17b0 = FUN_140002ddd(FUN_14401042f,uVar1,L"GbxMomentNodeSettings_LoadingScreenWait");
  }
  return;
}



// FUNCTION 1440117d0 FUN_1440117d0 body=29 status=ok
// SIG undefined FUN_1440117d0(void)

undefined8 FUN_1440117d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440118a2 FUN_1440118a2 body=54 status=ok
// SIG undefined FUN_1440118a2(void)

undefined1 FUN_1440118a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 144011900 FUN_144011900 body=59 status=ok
// SIG undefined FUN_144011900(void)

undefined8 FUN_144011900(longlong *param_1)

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



// FUNCTION 144011946 FUN_144011946 body=114 status=ok
// SIG undefined FUN_144011946(void)

void FUN_144011946(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 144011a06 FUN_144011a06 body=123 status=ok
// SIG undefined FUN_144011a06(void)

undefined8 * FUN_144011a06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011a82 FUN_144011a82 body=55 status=ok
// SIG undefined FUN_144011a82(void)

void FUN_144011a82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba17c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba17c8 = FUN_140002ddd(FUN_1440104c5,uVar1,L"GbxMomentNodeState_LoadingScreenWait");
  }
  return;
}



// FUNCTION 144011ad6 FUN_144011ad6 body=120 status=ok
// SIG undefined FUN_144011ad6(void)

void FUN_144011ad6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 144011b4e FUN_144011b4e body=123 status=ok
// SIG undefined FUN_144011b4e(void)

undefined8 * FUN_144011b4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011be6 FUN_144011be6 body=120 status=ok
// SIG undefined FUN_144011be6(void)

void FUN_144011be6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 144011c5e FUN_144011c5e body=123 status=ok
// SIG undefined FUN_144011c5e(void)

undefined8 * FUN_144011c5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011cf6 FUN_144011cf6 body=120 status=ok
// SIG undefined FUN_144011cf6(void)

void FUN_144011cf6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 144011d6e FUN_144011d6e body=123 status=ok
// SIG undefined FUN_144011d6e(void)

undefined8 * FUN_144011d6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011e06 FUN_144011e06 body=120 status=ok
// SIG undefined FUN_144011e06(void)

void FUN_144011e06(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 144011e7e FUN_144011e7e body=123 status=ok
// SIG undefined FUN_144011e7e(void)

undefined8 * FUN_144011e7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144011f32 FUN_144011f32 body=57 status=ok
// SIG undefined FUN_144011f32(void)

void FUN_144011f32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba18e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba18e8 = FUN_140002ddd(FUN_1465b03e6,uVar1,L"GbxMomentNodeState_OakPlayCutscene");
  }
  return;
}



// FUNCTION 144011f6b FUN_144011f6b body=77 status=ok
// SIG undefined FUN_144011f6b(void)

void FUN_144011f6b(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    do {
      FUN_144010d58(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144011fb8 FUN_144011fb8 body=2766 status=ok
// SIG undefined FUN_144011fb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144011fb8(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1190 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba1198);
  if (cVar1 == '\0') {
    _DAT_14cba1198 = 0;
    uRam000000014cba11a0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cba11a8 = 0x47efffffe0000000;
  _DAT_14cba11b0 = 0x47efffffe0000000;
  _DAT_14cba11b8 = 0x47efffffe0000000;
  _DAT_14cba11c0 = 0x47efffffe0000000;
  _DAT_14cba11c8 = 0x47efffffe0000000;
  _DAT_14cba11d0 = 0x47efffffe0000000;
  _DAT_14cba11d8 = 0x47efffffe0000000;
  _DAT_14cba11e0 = 0x47efffffe0000000;
  _DAT_14cba11ec = 0;
  FUN_14052b5e0(&DAT_14cba11e8,"PlayerAwareness",0);
  _DAT_14cba11f8 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1200 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1208 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1210 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1218 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1220 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1228 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1230 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1238 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1240 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1248 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1250 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1258 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1260 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1268 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1270 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1278 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1280 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1288 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba1290 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b60d610,1,&PTR_FUN_14b60d5e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60d730);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60d7e0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b60da00;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60da20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60db50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60dc10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60dcd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60dd90);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b60dfb0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60dfd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e090);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e160);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e230);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e350);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e400);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e510);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e630);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e7c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b60e900);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b60ed60,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b60f200,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b60f650,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b60fab0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b60ff20,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b610370,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6107d0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b610c40,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b6110a0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b611450,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b611810,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b611c00,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b611fc0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b612380,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b612730,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b612ae0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b612ea0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b613260,1,0);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b613970,1,&PTR_FUN_14b613920);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b614000;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b614040);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b614290);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b614570);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6147e0);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6149f0);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b614ba0);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 8;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b615320);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b6155e0);
  uStack_58 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b615a20);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144012a88 FUN_144012a88 body=55 status=ok
// SIG undefined FUN_144012a88(void)

void FUN_144012a88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1bb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1bb8 = FUN_14171c317(FUN_1465b15b1,uVar1,L"EGbxRewardExperienceOp");
  }
  return;
}



// FUNCTION 144012abf FUN_144012abf body=55 status=ok
// SIG undefined FUN_144012abf(void)

void FUN_144012abf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1c48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1c48 = FUN_14171c317(FUN_1465b1862,uVar1,L"EActionSkillModType");
  }
  return;
}



// FUNCTION 144012af6 FUN_144012af6 body=47 status=ok
// SIG undefined FUN_144012af6(void)

longlong FUN_144012af6(void)

{
  if (DAT_14cba1d58 == 0) {
    FUN_14000fc22(&DAT_14cba1d58,&PTR_FUN_14b620028);
  }
  return DAT_14cba1d58;
}



// FUNCTION 144012b25 FUN_144012b25 body=47 status=ok
// SIG undefined FUN_144012b25(void)

longlong FUN_144012b25(void)

{
  if (DAT_14cba1d60 == 0) {
    FUN_14000fc22(&DAT_14cba1d60,&PTR_FUN_14b6200f0);
  }
  return DAT_14cba1d60;
}



// FUNCTION 144012b54 FUN_144012b54 body=47 status=ok
// SIG undefined FUN_144012b54(void)

longlong FUN_144012b54(void)

{
  if (DAT_14cba1d68 == 0) {
    FUN_14000fc22(&DAT_14cba1d68,&PTR_FUN_14b6201b0);
  }
  return DAT_14cba1d68;
}



// FUNCTION 144012b84 FUN_144012b84 body=55 status=ok
// SIG undefined FUN_144012b84(void)

void FUN_144012b84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1d78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1d78 = FUN_140002ddd(FUN_144012bbb,uVar1,L"GbxSkillComponent_ActionSkill_CorpoHacker");
  }
  return;
}



// FUNCTION 144012bbb FUN_144012bbb body=47 status=ok
// SIG undefined FUN_144012bbb(void)

longlong FUN_144012bbb(void)

{
  if (DAT_14cba1d70 == 0) {
    FUN_14086a14e(&DAT_14cba1d70,&PTR_FUN_14b620270);
  }
  return DAT_14cba1d70;
}



// FUNCTION 144012bea FUN_144012bea body=48 status=ok
// SIG undefined FUN_144012bea(void)

void FUN_144012bea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000170;
  *puVar1 = &PTR_FUN_14b6253d0;
  return;
}



// FUNCTION 144012c1a FUN_144012c1a body=55 status=ok
// SIG undefined FUN_144012c1a(void)

void FUN_144012c1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1d90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1d90 =
         FUN_140002ddd(FUN_144012c51,uVar1,L"GbxSkillComponentData_ActionSkill_CorpoHacker");
  }
  return;
}



// FUNCTION 144012c51 FUN_144012c51 body=47 status=ok
// SIG undefined FUN_144012c51(void)

longlong FUN_144012c51(void)

{
  if (DAT_14cba1d88 == 0) {
    FUN_14086a14e(&DAT_14cba1d88,&PTR_FUN_14b620338);
  }
  return DAT_14cba1d88;
}



// FUNCTION 144012c80 FUN_144012c80 body=48 status=ok
// SIG undefined FUN_144012c80(void)

void FUN_144012c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14b6255d0;
  return;
}



// FUNCTION 144012cb0 FUN_144012cb0 body=55 status=ok
// SIG undefined FUN_144012cb0(void)

void FUN_144012cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1da8 =
         FUN_140002ddd(FUN_144012ce7,uVar1,L"GbxSkillComponent_ActionSkill_CorpoHacker_VPN");
  }
  return;
}



// FUNCTION 144012ce7 FUN_144012ce7 body=47 status=ok
// SIG undefined FUN_144012ce7(void)

longlong FUN_144012ce7(void)

{
  if (DAT_14cba1da0 == 0) {
    FUN_14086a14e(&DAT_14cba1da0,&PTR_FUN_14b620400);
  }
  return DAT_14cba1da0;
}



// FUNCTION 144012d16 FUN_144012d16 body=48 status=ok
// SIG undefined FUN_144012d16(void)

void FUN_144012d16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000180;
  *puVar1 = &PTR_FUN_14b625730;
  return;
}



// FUNCTION 144012d46 FUN_144012d46 body=55 status=ok
// SIG undefined FUN_144012d46(void)

void FUN_144012d46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1dc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1dc0 =
         FUN_140002ddd(FUN_144012d7d,uVar1,L"GbxSkillComponentData_ActionSkill_CorpoHacker_VPN");
  }
  return;
}



// FUNCTION 144012d7d FUN_144012d7d body=47 status=ok
// SIG undefined FUN_144012d7d(void)

longlong FUN_144012d7d(void)

{
  if (DAT_14cba1db8 == 0) {
    FUN_14086a14e(&DAT_14cba1db8,&PTR_FUN_14b620528);
  }
  return DAT_14cba1db8;
}



// FUNCTION 144012dac FUN_144012dac body=48 status=ok
// SIG undefined FUN_144012dac(void)

void FUN_144012dac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000268;
  *puVar1 = &PTR_FUN_14b625890;
  return;
}



// FUNCTION 144012ddc FUN_144012ddc body=55 status=ok
// SIG undefined FUN_144012ddc(void)

void FUN_144012ddc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1dd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1dd8 =
         FUN_140002ddd(FUN_144012e13,uVar1,L"GbxSkillComponent_ActionSkill_CorpoHacker_Contagion");
  }
  return;
}



// FUNCTION 144012e13 FUN_144012e13 body=47 status=ok
// SIG undefined FUN_144012e13(void)

longlong FUN_144012e13(void)

{
  if (DAT_14cba1dd0 == 0) {
    FUN_14086a14e(&DAT_14cba1dd0,&PTR_FUN_14b620600);
  }
  return DAT_14cba1dd0;
}



// FUNCTION 144012e42 FUN_144012e42 body=48 status=ok
// SIG undefined FUN_144012e42(void)

void FUN_144012e42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001c8;
  *puVar1 = &PTR_FUN_14b625a30;
  return;
}



// FUNCTION 144012e72 FUN_144012e72 body=55 status=ok
// SIG undefined FUN_144012e72(void)

void FUN_144012e72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1df0 =
         FUN_140002ddd(FUN_144012ea9,uVar1,
                       L"GbxSkillComponentData_ActionSkill_CorpoHacker_Contagion");
  }
  return;
}



// FUNCTION 144012ea9 FUN_144012ea9 body=47 status=ok
// SIG undefined FUN_144012ea9(void)

longlong FUN_144012ea9(void)

{
  if (DAT_14cba1de8 == 0) {
    FUN_14086a14e(&DAT_14cba1de8,&PTR_FUN_14b620730);
  }
  return DAT_14cba1de8;
}



// FUNCTION 144012ed8 FUN_144012ed8 body=48 status=ok
// SIG undefined FUN_144012ed8(void)

void FUN_144012ed8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000198;
  *puVar1 = &PTR_FUN_14b625b90;
  return;
}



// FUNCTION 144012f08 FUN_144012f08 body=55 status=ok
// SIG undefined FUN_144012f08(void)

void FUN_144012f08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1e08 =
         FUN_140002ddd(FUN_144012f3f,uVar1,
                       L"GbxSkillComponent_ActionSkill_CorpoHacker_ViralManifestation");
  }
  return;
}



// FUNCTION 144012f3f FUN_144012f3f body=47 status=ok
// SIG undefined FUN_144012f3f(void)

longlong FUN_144012f3f(void)

{
  if (DAT_14cba1e00 == 0) {
    FUN_14086a14e(&DAT_14cba1e00,&PTR_FUN_14b620820);
  }
  return DAT_14cba1e00;
}



// FUNCTION 144012f6e FUN_144012f6e body=48 status=ok
// SIG undefined FUN_144012f6e(void)

void FUN_144012f6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000220;
  *puVar1 = &PTR_FUN_14b625d30;
  return;
}



// FUNCTION 144012f9e FUN_144012f9e body=55 status=ok
// SIG undefined FUN_144012f9e(void)

void FUN_144012f9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1e20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1e20 =
         FUN_140002ddd(FUN_144012fd5,uVar1,
                       L"GbxSkillComponentData_ActionSkill_CorpoHacker_ViralManifestation");
  }
  return;
}



// FUNCTION 144012fd5 FUN_144012fd5 body=47 status=ok
// SIG undefined FUN_144012fd5(void)

longlong FUN_144012fd5(void)

{
  if (DAT_14cba1e18 == 0) {
    FUN_14086a14e(&DAT_14cba1e18,&PTR_FUN_14b620a98);
  }
  return DAT_14cba1e18;
}



// FUNCTION 144013004 FUN_144013004 body=48 status=ok
// SIG undefined FUN_144013004(void)

void FUN_144013004(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000200;
  *puVar1 = &PTR_FUN_14b625e90;
  return;
}



// FUNCTION 144013034 FUN_144013034 body=47 status=ok
// SIG undefined FUN_144013034(void)

longlong FUN_144013034(void)

{
  if (DAT_14cba1e50 == 0) {
    FUN_14073dd9a(&DAT_14cba1e50,&PTR_LAB_14b620e80);
  }
  return DAT_14cba1e50;
}



// FUNCTION 144013063 FUN_144013063 body=47 status=ok
// SIG undefined FUN_144013063(void)

longlong FUN_144013063(void)

{
  if (DAT_14cba1e30 == 0) {
    FUN_14000fc22(&DAT_14cba1e30,&PTR_FUN_14b620bb8);
  }
  return DAT_14cba1e30;
}



// FUNCTION 144013092 FUN_144013092 body=2114 status=ok
// SIG undefined FUN_144013092(void)

void FUN_144013092(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *_Src;
  undefined4 *puVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_144013278;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar4[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_144013278:
  uStack_50 = 0;
  uStack_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_50);
            goto LAB_14401342c;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &uStack_50) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_50,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_50,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar4[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_50,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_50,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
LAB_14401342c:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_80 = FUN_1408a629c;
      local_88 = &DAT_14c9520b8;
      local_90 = 0;
      local_98 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_54);
            goto LAB_1440135df;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_54) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_54,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_54,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar4[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_54,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_54,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (undefined4)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
LAB_1440135df:
  uVar7 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_4c,uStack_50);
  local_70 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_68 = (undefined4)uStack_40;
  uStack_64 = uStack_40._4_4_;
  uStack_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  FUN_144215ee0(&local_70,uVar2,uVar7);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440138d5 FUN_1440138d5 body=47 status=ok
// SIG undefined FUN_1440138d5(void)

longlong FUN_1440138d5(void)

{
  if (DAT_14cba1e38 == 0) {
    FUN_14000fc22(&DAT_14cba1e38,&PTR_FUN_14b620cc8);
  }
  return DAT_14cba1e38;
}



// FUNCTION 144013904 FUN_144013904 body=2114 status=ok
// SIG undefined FUN_144013904(void)

void FUN_144013904(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *_Src;
  undefined4 *puVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_144013aea;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar4[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_144013aea:
  uStack_50 = 0;
  uStack_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_50);
            goto LAB_144013c9e;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &uStack_50) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_50,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_50,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar4[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_50,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_50,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
LAB_144013c9e:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_80 = FUN_1408a629c;
      local_88 = &DAT_14c9520b8;
      local_90 = 0;
      local_98 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_54);
            goto LAB_144013e51;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_54) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_54,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_54,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar4[6]);
        local_98 = local_98 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_54,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_54,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (undefined4)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
LAB_144013e51:
  uVar7 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_4c,uStack_50);
  local_70 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_68 = (undefined4)uStack_40;
  uStack_64 = uStack_40._4_4_;
  uStack_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  FUN_144215d8a(&local_70,uVar2,uVar7);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144014147 FUN_144014147 body=47 status=ok
// SIG undefined FUN_144014147(void)

longlong FUN_144014147(void)

{
  if (DAT_14cba1e40 == 0) {
    FUN_14000fc22(&DAT_14cba1e40,&PTR_FUN_14b620d50);
  }
  return DAT_14cba1e40;
}



// FUNCTION 144014176 FUN_144014176 body=777 status=ok
// SIG undefined FUN_144014176(void)

void FUN_144014176(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_14401434e;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_70 = CONCAT44(local_70._4_4_,(int)plVar4[6]);
        local_78 = local_78 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_14401434e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  FUN_144215ff8();
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144014480 FUN_144014480 body=34 status=ok
// SIG undefined FUN_144014480(void)

void FUN_144014480(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1440144a8();
  FUN_14069c8d6(uVar1,&PTR_s_AddTetheredEnemy_14b620d90,3);
  return;
}



// FUNCTION 1440144a8 FUN_1440144a8 body=220 status=ok
// SIG undefined FUN_1440144a8(void)

longlong FUN_1440144a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1e48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_144014585;
    local_40 = FUN_144014588;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxSkillComponentFunctions_ActionSkill_CorpoHacker",
                  &DAT_14cba1e48,FUN_144014480);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1e48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144014588 FUN_144014588 body=91 status=ok
// SIG undefined FUN_144014588(void)

void FUN_144014588(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b620ec0;
  return;
}



// FUNCTION 1440145e4 FUN_1440145e4 body=38 status=ok
// SIG undefined FUN_1440145e4(void)

undefined8 FUN_1440145e4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144014626 FUN_144014626 body=57 status=ok
// SIG undefined FUN_144014626(void)

void FUN_144014626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1958 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1958 = FUN_140002ddd(FUN_1465b0c2e,uVar1,L"GbxMomentNodeState_OakTravelToAINode");
  }
  return;
}



// FUNCTION 14401467c FUN_14401467c body=114 status=ok
// SIG undefined FUN_14401467c(void)

void FUN_14401467c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1440146ee FUN_1440146ee body=123 status=ok
// SIG undefined FUN_1440146ee(void)

undefined8 * FUN_1440146ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144014786 FUN_144014786 body=114 status=ok
// SIG undefined FUN_144014786(void)

void FUN_144014786(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 144014814 FUN_144014814 body=120 status=ok
// SIG undefined FUN_144014814(void)

void FUN_144014814(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 14401488c FUN_14401488c body=123 status=ok
// SIG undefined FUN_14401488c(void)

undefined8 * FUN_14401488c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144014924 FUN_144014924 body=114 status=ok
// SIG undefined FUN_144014924(void)

void FUN_144014924(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 144014996 FUN_144014996 body=123 status=ok
// SIG undefined FUN_144014996(void)

undefined8 * FUN_144014996(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144014a2e FUN_144014a2e body=114 status=ok
// SIG undefined FUN_144014a2e(void)

void FUN_144014a2e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 144014aa0 FUN_144014aa0 body=123 status=ok
// SIG undefined FUN_144014aa0(void)

undefined8 * FUN_144014aa0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144014b38 FUN_144014b38 body=126 status=ok
// SIG undefined FUN_144014b38(void)

void FUN_144014b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b623de0;
  FUN_1461fcfc0(param_1 + 0xe);
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144014bd2 FUN_144014bd2 body=114 status=ok
// SIG undefined FUN_144014bd2(void)

void FUN_144014bd2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 144014c44 FUN_144014c44 body=123 status=ok
// SIG undefined FUN_144014c44(void)

undefined8 * FUN_144014c44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


