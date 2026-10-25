// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14017ee32 FUN_14017ee32 body=175 status=ok
// SIG undefined FUN_14017ee32(void)

void FUN_14017ee32(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_1 + 0x2c8);
  if (0 < iVar4) {
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x2c0);
      lVar6 = (ulonglong)uVar5 * 0x10;
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 == param_2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + lVar6 + 8) + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        iVar4 = *(int *)(param_1 + 0x2c8);
        if (~uVar5 + iVar4 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x2c0) + lVar6),
                  (void *)(*(longlong *)(param_1 + 0x2c0) + lVar6 + 0x10),
                  (longlong)(int)(~uVar5 + iVar4) << 4);
          iVar4 = *(int *)(param_1 + 0x2c8);
        }
        *(int *)(param_1 + 0x2c8) = iVar4 + -1;
        FUN_14017eee2((longlong *)(param_1 + 0x2c0));
        uVar5 = uVar5 - 1;
        iVar4 = *(int *)(param_1 + 0x2c8);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  return;
}



// FUNCTION 14017eee2 FUN_14017eee2 body=137 status=ok
// SIG undefined FUN_14017eee2(void)

void FUN_14017eee2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14017ef6c FUN_14017ef6c body=110 status=ok
// SIG undefined FUN_14017ef6c(void)

void FUN_14017ef6c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      (**(code **)*puVar3)(puVar3,param_2,param_1,param_1 + 0x48);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00014017efd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 14017efda FUN_14017efda body=304 status=ok
// SIG undefined FUN_14017efda(void)

undefined1 * FUN_14017efda(undefined1 *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  memset(param_1 + 8,0,0x100);
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  iVar3 = 0;
  if (param_2 != 0) {
    FUN_14488643a(&local_50,*(undefined8 *)(param_2 + 0xa8),param_2,param_3);
    *(undefined4 *)(param_1 + 0xc0) = local_50;
    *(undefined4 *)(param_1 + 0xc4) = uStack_4c;
    *(undefined4 *)(param_1 + 200) = uStack_48;
    *(undefined4 *)(param_1 + 0xcc) = uStack_44;
    *(undefined4 *)(param_1 + 0xd0) = local_40;
    *(undefined4 *)(param_1 + 0xd4) = uStack_3c;
    *(undefined4 *)(param_1 + 0xd8) = uStack_38;
    *(undefined4 *)(param_1 + 0xdc) = uStack_34;
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xe0) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar3 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar2;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar3 = iVar2;
      }
    }
  }
  *(int *)(param_1 + 0xe4) = iVar3;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14017f10c FUN_14017f10c body=26 status=ok
// SIG undefined FUN_14017f10c(void)

void FUN_14017f10c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14017f126(param_1,*(undefined4 *)(param_1 + 8),param_2,0x30);
    return;
  }
  return;
}



// FUNCTION 14017f126 FUN_14017f126 body=469 status=ok
// SIG undefined FUN_14017f126(void)

void FUN_14017f126(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14017f256:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14017f293:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14017f190;
LAB_14017f185:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14017f190:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x00014017f1bd;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14017f213:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14017f293;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14017f256;
code_r0x00014017f1bd:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14017f213;
    }
  }
  goto LAB_14017f185;
}



// FUNCTION 14017f2fc FUN_14017f2fc body=164 status=ok
// SIG undefined FUN_14017f2fc(void)

undefined8 * FUN_14017f2fc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)0x0) {
    lVar2 = FUN_14001cc68(0x70010);
    lVar4 = 0;
    lVar1 = 0;
    do {
      lVar3 = lVar1;
      lVar1 = lVar2 + lVar4;
      *(longlong *)(lVar2 + 0x60 + lVar4) = lVar3;
      lVar4 = lVar4 + 0x70;
    } while (lVar4 != 0x70000);
    *(longlong *)(lVar2 + 0x70000) = *param_1;
    *param_1 = lVar2;
    puVar5 = (undefined8 *)(lVar2 + 0x6ff90);
  }
  else {
    lVar3 = puVar5[0xc];
  }
  param_1[1] = lVar3;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  return puVar5;
}



// FUNCTION 14017f3a0 FUN_14017f3a0 body=81 status=ok
// SIG undefined FUN_14017f3a0(void)

longlong FUN_14017f3a0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  FUN_1400bc6c1(lVar1,*(undefined4 *)(param_1 + 0x98));
  FUN_14017f3f2(param_1 + 0x90);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14017f3f2 FUN_14017f3f2 body=99 status=ok
// SIG undefined FUN_14017f3f2(void)

void FUN_14017f3f2(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14017f456 FUN_14017f456 body=85 status=ok
// SIG undefined FUN_14017f456(void)

void FUN_14017f456(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_14017f4ac();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14017f4ac FUN_14017f4ac body=450 status=ok
// SIG undefined FUN_14017f4ac(void)

void FUN_14017f4ac(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x20);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14017f5c7:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14017f604:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x20;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14017f502;
LAB_14017f4f7:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14017f502:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x7fe) goto code_r0x00014017f52e;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 8 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14017f584:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14017f604;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14017f5c7;
code_r0x00014017f52e:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14017f584;
    }
  }
  goto LAB_14017f4f7;
}



// FUNCTION 14017f66e FUN_14017f66e body=1365 status=ok
// SIG undefined FUN_14017f66e(void)

undefined8 *
FUN_14017f66e(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar9 + 0x15a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar9 + 0x15a;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar9 = &PTR_FUN_14a1f6180;
  puVar6 = puVar9 + 2;
  FUN_144887028(puVar6);
  puVar9[0x159] = 0;
  puVar9[0x143] = 0;
  puVar9[0x144] = 0;
  memset(puVar9 + 0x147,0,0x88);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar9;
  local_b8 = puVar6;
  FUN_144887262(param_1,param_2);
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_a8,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar8 != 0)) {
    puVar7 = (undefined8 *)(lVar8 + 8);
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar9 + 0x146) = 0;
  uVar4 = *puVar7;
  puVar9[0x147] = uVar4;
  puVar9[0x148] = uVar4;
  puVar9[0x149] = *puVar7;
  if (param_4[1] != 0) {
    *(undefined4 *)(puVar9 + 0x146) = 1;
    puVar9[0x147] = param_4[1];
  }
  lVar8 = *param_4;
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x24) & 4) != 0)) {
    puVar9[0x148] = lVar8;
  }
  if (param_4[2] != 0) {
    puVar9[0x149] = param_4[2];
  }
  *(uint *)(puVar9 + 0x158) = (uint)*(byte *)(param_4 + 3);
  local_b8 = (undefined8 *)((ulonglong)local_b8 & 0xffffffffffffff00);
  FUN_14017fbc4(&local_a8,param_1,param_5,
                *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2));
  ppuVar10 = &local_a8;
  puVar7 = puVar9 + 0x14a;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar7 = *ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_14017fdf8(param_1,param_2,puVar9 + 0x13e);
  puVar9[0x156] = *(undefined8 *)(DAT_14ca63b68 + 8);
  puVar9[0x157] = DAT_14c9c0de0;
  plVar5 = *(longlong **)(param_2 + 0x30d8);
  if ((plVar5 == (longlong *)0x0) || ((*(byte *)(plVar5 + 1) & 2) == 0)) {
    local_a8 = (undefined8 *)&DAT_3f8000003f800000;
    uStack_a0 = 0x3f800000;
    uStack_9c = 0x3f800000;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,1);
    local_b0 = &local_a8;
    lVar8 = FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar5 + 0x80) == (code *)&LAB_144b15db6) {
      local_a8 = (undefined8 *)plVar5[(ulonglong)*(uint *)(plVar5 + 0xcd) + 0xd1];
    }
    else {
      local_a8 = (undefined8 *)(**(code **)(*plVar5 + 0x80))();
    }
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = *(int *)(local_a8 + 1) + 1;
      UNLOCK();
    }
    lVar8 = FUN_144735dd8(param_1,&local_a8,1);
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_a8 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
  }
  if ((*(byte *)(lVar8 + 0x68) & 0x80) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0x1c;
  }
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x50);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar11[1] = *(undefined8 *)(lVar8 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 3;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar11 + 5) = uVar12;
  *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
  puVar11[7] = 0;
  puVar11[8] = lVar8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar9[0x159] = puVar11;
  FUN_144886e74();
  uVar4 = DAT_14c9ac948;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar7 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar7 + 9;
  }
  *puVar1 = (ulonglong)puVar9;
  puVar7[1] = uVar4;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_14a1fb9b8;
  FUN_144886e74();
  puVar7[3] = puVar6;
  lVar8 = DAT_14c9ac978;
  puVar7[4] = DAT_14c9ac978;
  if (lVar8 != 0) {
    LOCK();
    piVar2 = (int *)(lVar8 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar7[5] = &DAT_14c9ac930;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar7 + 0x3c) = 0;
  *puVar7 = &PTR_FUN_14a1f6188;
  puVar7[8] = puVar6;
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar3 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar3 * 8) = puVar7;
  *(int *)(puVar7 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017fbc4 FUN_14017fbc4 body=563 status=ok
// SIG undefined FUN_14017fbc4(void)

longlong *
FUN_14017fbc4(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_58,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_58);
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  lVar2 = DAT_14c9c0d80;
  if ((DAT_14c760a84 < *(int *)(param_2 + 0x130)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar1 != 0)) {
    plVar3 = (longlong *)(lVar1 + 8);
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  param_1[8] = DAT_14c9c0d80;
  param_1[9] = lVar2;
  param_1[10] = lVar2;
  param_1[0xb] = lVar2;
  lVar2 = plVar3[2];
  *param_1 = lVar2;
  param_1[1] = plVar3[9];
  param_1[2] = lVar2;
  param_1[3] = lVar2;
  local_58 = DAT_14ca83a34;
  uStack_54 = DAT_14ca83a38;
  uStack_50 = DAT_14ca83a3c;
  uStack_4c = DAT_14ca83a40;
  local_68 = 2;
  local_60 = &local_58;
  lVar2 = FUN_1400dd219(param_2,&DAT_14ca63c38,&DAT_14ca63c58,1);
  param_1[4] = lVar2;
  local_58 = DAT_14ca83a34;
  uStack_54 = DAT_14ca83a38;
  uStack_50 = DAT_14ca83a3c;
  uStack_4c = DAT_14ca83a40;
  local_68 = 2;
  local_60 = &local_58;
  lVar2 = FUN_1400dd219(param_2,&DAT_14ca63c38,&DAT_14ca63c58,1);
  param_1[5] = lVar2;
  local_58 = DAT_14ca83a34;
  uStack_54 = DAT_14ca83a38;
  uStack_50 = DAT_14ca83a3c;
  uStack_4c = DAT_14ca83a40;
  local_68 = 2;
  local_60 = &local_58;
  lVar2 = FUN_1400dd219(param_2,&DAT_14ca63c38,&DAT_14ca63c58,1);
  param_1[6] = lVar2;
  param_1[7] = *plVar3;
  lVar2 = *param_3;
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) ||
     ((param_3[4] != 0 && ((*(byte *)(param_3[4] + 0x24) & 4) != 0)))) {
    if (param_5 == '\0') {
      *param_1 = lVar2;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      if ((*(byte *)(param_3[3] + 0x24) & 4) != 0) {
        param_1[3] = param_3[3];
      }
    }
    else {
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
      param_1[6] = param_3[6];
    }
    if (param_3[7] != 0) {
      param_1[7] = param_3[7];
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14017fdf8 FUN_14017fdf8 body=1386 status=ok
// SIG undefined FUN_14017fdf8(void)

void FUN_14017fdf8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  lVar8 = DAT_14ca97170;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_2 + 0x118c8);
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar12 = 0;
  }
  else if (iVar5 == 1) {
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar9 != DVar10);
  }
  else {
    uVar12 = 1;
  }
  if (lVar7 == 0 || *(int *)(lVar8 + uVar12 * 4) < 1) {
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 2) = 0;
  }
  else {
    bVar3 = *(byte *)(lVar7 + 0x20);
    uVar6 = *(undefined4 *)(lVar7 + 0x1c);
    bVar4 = *(byte *)(lVar7 + 0x21);
    *param_3 = *(undefined8 *)(lVar7 + 0x14);
    *(uint *)(param_3 + 1) = (uint)bVar3;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
    *(uint *)(param_3 + 2) = (uint)bVar4;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)(lVar7 + 0x2c);
      param_3[5] = *(undefined8 *)(lVar7 + 0x40);
      puVar13 = *(undefined8 **)(lVar7 + 0x70);
      goto LAB_1401801b0;
    }
  }
  local_68 = DAT_14ca85098;
  local_78 = DAT_14ca85088;
  uStack_74 = DAT_14ca8508c;
  uStack_70 = DAT_14ca85090;
  uStack_6c = DAT_14ca85094;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_4e = 0;
  local_80 = &DAT_00020008;
  local_4d = 0x47;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_60 = 0;
  local_4b = 0xff;
  local_5c = &DAT_100000001;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar14 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar14 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
    FUN_140023dd8(plVar1,0x128);
    uVar14 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar12 = uVar14 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar14,L"Substrate.DummyWritableTexture",&local_80,0);
  iVar5 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar5);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar14;
  *(int *)(uVar14 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  uVar2 = *(undefined1 *)(uVar14 + 0x94);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(plVar1,0x50);
    puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 9;
  }
  local_88 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar13[1] = *(undefined8 *)(uVar14 + 8);
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 5) = 0;
  *puVar13 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar13 + 6) = uVar2;
  *(undefined1 *)(puVar13 + 7) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
  puVar13[8] = uVar14;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  local_90 = plVar1;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_88,iVar5);
  }
  plVar1 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_68 = DAT_14ca85098;
  local_78 = DAT_14ca85088;
  uStack_74 = DAT_14ca8508c;
  uStack_70 = DAT_14ca85090;
  uStack_6c = DAT_14ca85094;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_4e = 1;
  local_80 = &DAT_00020008;
  local_4d = 0x1c;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_60 = 0;
  local_4b = 0xff;
  local_5c = &DAT_100000001;
  uVar14 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar14 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar12) {
    FUN_140023dd8(local_90,0x128);
    uVar14 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar12 = uVar14 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar14,L"Substrate.DummyWritableTexture",&local_80,0);
  iVar5 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar5);
  }
  plVar1 = local_90;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar14;
  *(int *)(uVar14 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  uVar2 = *(undefined1 *)(uVar14 + 0x94);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
    FUN_140023dd8(local_90,0x50);
    puVar15 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar11;
  puVar15[1] = *(undefined8 *)(uVar14 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar15 + 5) = 0;
  *puVar15 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar15 + 6) = uVar2;
  *(undefined1 *)(puVar15 + 7) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
  puVar15[8] = uVar14;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(local_88,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_80,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_80);
    if (local_80 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  param_3[4] = 0xffffffffffffffff;
  param_3[5] = puVar15;
LAB_1401801b0:
  param_3[6] = puVar13;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140180364 FUN_140180364 body=471 status=ok
// SIG undefined FUN_140180364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140180364(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7e20) {
    FUN_144b3d300(&DAT_14c9e7e20);
    if (DAT_14c9e7e20 == -1) {
      _DAT_14c9e7e00 = 0;
      _DAT_14c9e7e08 = (undefined8 *)0x0;
      _DAT_14c9e7e10 = 0;
      _Init_thread_footer(&DAT_14c9e7e20);
    }
  }
  _DAT_14c9e7e00 = FUN_14476842e(param_1,&DAT_14ca63b20,L"WhiteDummy",2);
  _DAT_14c9e7e10 = DAT_14c9c0de0;
  local_30 = &local_24;
  local_24 = 0;
  local_38 = 1;
  lVar2 = FUN_144888867(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  puVar4[1] = *(undefined8 *)(lVar2 + 8);
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 3;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0xffffffffffffffff;
  *puVar4 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar4 + 5) = 1;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = 0xffffffff00000000;
  puVar4[7] = 0;
  puVar4[8] = lVar2;
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar4;
  *(int *)((longlong)puVar4 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  _DAT_14c9e7e08 = puVar4;
  _DAT_14c9e7e18 = 0x3f800000;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return &DAT_14c9e7e00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018053c FUN_14018053c body=502 status=ok
// SIG undefined FUN_14018053c(void)

void FUN_14018053c(longlong *param_1,longlong *param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_3 == -1) {
    return;
  }
  lVar7 = *param_1;
  lVar13 = (longlong)param_3 * 0x10;
  FUN_14018053c(param_1,param_2,(int)*(short *)(lVar7 + 4 + lVar13));
  FUN_14018053c(param_1,param_2,(int)*(short *)(lVar7 + 6 + lVar13),param_4);
  FUN_14018053c(param_1,param_2,(int)*(short *)(lVar7 + 8 + lVar13),param_4);
  uVar3 = *(ushort *)(lVar7 + 6 + lVar13);
  uVar8 = (ushort)*(undefined4 *)(lVar7 + 4 + lVar13);
  uVar4 = *(ushort *)(lVar7 + 8 + lVar13);
  uVar5 = *(ushort *)(lVar7 + 10 + lVar13);
  if ((ushort)(uVar5 & uVar4 & uVar3 & uVar8) != 0xffff) {
    sVar10 = *(short *)(lVar7 + lVar13 + 2);
    if ((uVar8 & uVar3) != 0xffff || (longlong)sVar10 == -1) {
      if (sVar10 == -1) {
        return;
      }
      piVar1 = (int *)(*param_4 + (longlong)sVar10 * 4);
      *piVar1 = *piVar1 + 1;
      return;
    }
    *(undefined2 *)(lVar7 + lVar13 + 2) = 0xffff;
    if (uVar4 == 0xffff) {
      if (uVar5 != 0xffff) {
        return;
      }
    }
    else {
      sVar10 = *(short *)(*param_1 + 10 + (longlong)(short)uVar4 * 0x10);
      uVar9 = (uint)sVar10;
      if (uVar9 == 0xffffffff) {
        *(ushort *)(*param_1 + (longlong)(short)uVar4 * 0x10 + 10) = uVar5;
      }
      else if (uVar5 != 0xffff) {
        if (((int)(short)uVar5 < (int)param_2[1] && -1 < (short)uVar5) &&
           ((int)uVar9 < (int)param_2[1] && -1 < sVar10)) {
          FUN_1401fd248(*param_2 + (ulonglong)uVar9 * 0x18,
                        *param_2 + (ulonglong)(uint)(int)(short)uVar5 * 0x18);
        }
      }
    }
  }
  sVar10 = (short)param_3;
  if (sVar10 != -1) {
    lVar7 = *param_1;
    puVar2 = (undefined4 *)(lVar7 + (longlong)sVar10 * 0x10);
    sVar6 = *(short *)(lVar7 + (longlong)sVar10 * 0x10);
    if ((longlong)sVar6 == -1) {
      sVar11 = *(short *)(puVar2 + 2);
    }
    else {
      lVar12 = (longlong)sVar6 * 0x10;
      lVar13 = lVar7 + lVar12;
      if (*(short *)(lVar7 + 4 + lVar12) == sVar10) {
        sVar11 = *(short *)(puVar2 + 2);
        *(short *)(lVar13 + 4) = sVar11;
      }
      else {
        sVar11 = *(short *)(puVar2 + 2);
        if (*(short *)(lVar13 + 6) == sVar10) {
          *(short *)(lVar13 + 6) = sVar11;
        }
        else {
          *(short *)(lVar13 + 8) = sVar11;
        }
      }
    }
    if (sVar11 != -1) {
      *(short *)(*param_1 + (longlong)sVar11 * 0x10) = sVar6;
    }
    puVar2[2] = 0xffffffff;
    *puVar2 = 0xffffffff;
  }
  return;
}



// FUNCTION 140180732 FUN_140180732 body=116 status=ok
// SIG undefined FUN_140180732(void)

undefined8
FUN_140180732(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,char param_5)

{
  if (param_5 != '\0') {
    FUN_1401807a6(param_3,0);
  }
  if (param_4 < 0x10) {
    FUN_143560360(param_2 + 5,param_3,param_2);
  }
  else {
    param_2[5] = &PTR_FUN_14a9bb4c0;
    *param_2 = *param_3;
    *param_3 = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1401807a6 FUN_1401807a6 body=937 status=ok
// SIG undefined FUN_1401807a6(void)

ulonglong FUN_1401807a6(longlong *param_1,byte param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  DWORD DVar5;
  DWORD DVar6;
  LPVOID lpTlsValue;
  longlong lVar7;
  int iVar8;
  DWORD DVar9;
  ulonglong uVar10;
  DWORD DVar11;
  DWORD DVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  longlong *local_d8;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  DVar5 = DAT_14c7585d0;
  local_e2 = param_2;
  local_d8 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar5 = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar13 = DAT_14c7585d0 != 0xffffffff;
    DVar9 = DVar5;
    if (bVar13) {
      DVar6 = DAT_14c7585d0;
      DVar9 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar9;
    UNLOCK();
    if (bVar13) {
      TlsFree(DVar5);
      DVar5 = DVar6;
    }
  }
  plVar4 = local_d8;
  lpTlsValue = TlsGetValue(DVar5);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(DVar5,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_c8 = -0x8000000000000000;
  lVar7 = *plVar4;
  if (local_e2 == 0) {
    lVar7 = *plVar4;
    uVar10 = (ulonglong)*(uint *)(lVar7 + 0x34);
    if (*(int *)(lVar7 + 0x20) + 2 <= (int)*(uint *)(lVar7 + 0x34)) {
      FUN_140031c70(plVar4);
      lVar7 = *plVar4;
    }
    if ('\x02' < *(char *)(lVar7 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ =
           ((double)CONCAT44(local_88.s.HighPart,local_88.s.LowPart) * DAT_14c83f420 + 16777216.0) *
           10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar16 = roundpd(auVar16,auVar16,1);
      local_c8 = (longlong)auVar16._0_8_;
      iVar8 = 0;
      if (0 < DAT_14c7585cc) {
        iVar8 = DAT_14c7585cc;
      }
      auVar14._0_8_ = (double)iVar8 * 10000.0 + 0.5;
      auVar14._8_8_ = 0;
      auVar16 = roundpd(auVar14,auVar14,1);
      local_e0 = (longlong)auVar16._0_8_;
      lVar7 = *plVar4;
      bVar13 = true;
      goto LAB_140180931;
    }
  }
  else {
    uVar10 = (ulonglong)*(uint *)(lVar7 + 0x34);
  }
  bVar13 = false;
  local_e0 = 0;
LAB_140180931:
  DVar5 = *(DWORD *)(lVar7 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar7 + 0x30);
  puVar2 = *(undefined8 **)(lVar7 + 0x40);
  local_cc = (int)uVar10 + -1;
  local_e1 = local_e2 ^ 1;
  local_c0 = uVar10;
  do {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x20);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c0 < (int)DVar5) {
      bVar3 = local_cc <= iVar8;
      if (local_cc <= iVar8) {
        iVar8 = local_cc;
      }
      if ((local_e1 & bVar3) != 0) goto LAB_140180a75;
    }
    DVar9 = iVar8 * (int)local_b8;
    DVar12 = DVar9 + (int)local_b8;
    DVar6 = DVar5;
    if ((int)DVar12 < (int)DVar5) {
      DVar6 = DVar12;
    }
    DVar11 = DVar9;
    if ((int)DVar9 < (int)DVar6) {
      do {
        local_88.s.LowPart = DVar11;
        (*(code *)*puVar2)(puVar2[1],&local_88);
        DVar11 = DVar11 + 1;
      } while (DVar6 != DVar11);
    }
    plVar4 = local_d8;
    if ((int)DVar9 < (int)DVar5) {
      LOCK();
      piVar1 = (int *)(*local_d8 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar10 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d8 + 0x48) + 0x10))();
        }
        goto LAB_140180a77;
      }
    }
    if ((int)DVar12 < (int)DVar5 && bVar13) {
      QueryPerformanceCounter(&local_88);
      auVar15._0_8_ =
           ((double)CONCAT44(local_88.s.HighPart,local_88.s.LowPart) * DAT_14c83f420 + 16777216.0) *
           10000000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar16 = roundpd(auVar15,auVar15,1);
      if (local_e0 < (longlong)auVar16._0_8_ - local_c8) {
        *(undefined1 *)((longlong)plVar4 + 0xc) = 1;
LAB_140180a75:
        uVar10 = 0;
LAB_140180a77:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar10 & 0xffffffff;
      }
    }
    else if ((int)DVar5 <= (int)DVar12) goto LAB_140180a75;
    lVar7 = *plVar4;
  } while( true );
}



// FUNCTION 140180b5b FUN_140180b5b body=19 status=ok
// SIG undefined FUN_140180b5b(void)

void FUN_140180b5b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140180b6e FUN_140180b6e body=264 status=ok
// SIG undefined FUN_140180b6e(void)

undefined4
FUN_140180b6e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = param_6;
  uVar1 = FUN_140180e44(param_1 + 8,&local_38,param_4,param_5);
  if ((char)uVar1 != '\0') {
    local_40 = *(undefined8 *)
                ((longlong)&DAT_14c9a8508 + (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
    iVar4 = *(int *)(param_2 + 8) + -1;
    if (*(int *)(param_2 + 8) == 0) {
      iVar4 = 0;
    }
    iVar2 = FUN_140180c78();
    iVar3 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar3 = 0;
    }
    iVar3 = iVar3 + iVar2 + iVar4;
    iVar4 = iVar3 + 1;
    if ((0 < iVar4) && (*(int *)(param_2 + 0xc) <= iVar4)) {
      FUN_1446f8c06(param_2,iVar3 + 2);
    }
    FUN_140180cec(&local_40,param_2);
    FUN_140002184(param_2,0x2e);
    iVar4 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140180c78 FUN_140180c78 body=116 status=ok
// SIG undefined FUN_140180c78(void)

uint FUN_140180c78(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (uint)(*(ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + (ulonglong)(uVar3 & 0xffff) * 2) >> 6
                );
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (uVar2 = uVar2 + 2, 10 < (int)uVar3)) {
    uVar3 = uVar3 - 1;
    do {
      uVar2 = uVar2 + 1;
      bVar1 = 99 < uVar3;
      uVar3 = uVar3 / 10;
    } while (bVar1);
  }
  return uVar2;
}



// FUNCTION 140180cec FUN_140180cec body=343 status=ok
// SIG undefined FUN_140180cec(void)

void FUN_140180cec(uint *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_858 [32];
  undefined2 local_838 [1028];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_858;
  uVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  puVar1 = (ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + (ulonglong)(uVar3 & 0xffff) * 2);
  uVar2 = *puVar1;
  FUN_1427921ee(puVar1,local_838);
  FUN_1400020e8(param_2,local_838,uVar2 >> 6);
  if (param_1[1] != 0) {
    FUN_140002184(param_2,0x5f);
    uVar3 = param_1[1];
    lVar6 = 0xf;
    lVar4 = 0x1000000000;
    iVar5 = 0x10;
    iVar8 = uVar3 - 1;
    do {
      lVar4 = lVar4 + -0x100000000;
      local_838[lVar6] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar8 % 10) * 2);
      uVar7 = iVar8 + 9;
      lVar6 = lVar6 + -1;
      iVar5 = iVar5 + -1;
      iVar8 = iVar8 / 10;
    } while (0x12 < uVar7);
    if ((int)uVar3 < 1) {
      iVar5 = (int)lVar6;
      lVar4 = (longlong)iVar5;
      local_838[lVar4] = 0x2d;
    }
    else {
      lVar4 = lVar4 >> 0x20;
    }
    FUN_1400020e8(param_2,local_838 + lVar4,0x10 - iVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140180e44 FUN_140180e44 body=963 status=ok
// SIG undefined FUN_140180e44(void)

undefined8
FUN_140180e44(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             code *param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(byte *)(param_1 + 4) == 0) {
    local_60 = DAT_14c9a8508;
    FUN_1400021e4(&local_60,&local_58);
    if (&local_58 == param_2) {
LAB_14018104d:
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_58;
      *(int *)(param_2 + 1) = (int)uStack_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
    }
    uVar5 = 1;
  }
  else {
    uVar4 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
    if (((((*(int *)((longlong)&DAT_14c9a853c + uVar4) == 0) ||
          (uVar2 = *(uint *)((longlong)&DAT_14c9a8538 + uVar4), (int)uVar2 < 0)) ||
         (DAT_14c9647dc <= (int)uVar2)) ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)&DAT_14c9a853c + uVar4))
         ))) || (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
                 (plVar1 = (longlong *)((longlong)&DAT_14c9a8540 + uVar4), *plVar9 == 0)))) {
      *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar4) = 0;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_78 = FUN_140342cba();
        local_70 = FUN_1468c7f1e;
        local_80 = 0;
        local_88 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      plVar9 = (longlong *)*plVar1;
      if ((((plVar9 != (longlong *)0x0) && (*(int *)((longlong)&DAT_14c9a854c + uVar4) != 0)) &&
          (uVar2 = *(uint *)((longlong)&DAT_14c9a8548 + uVar4), -1 < (int)uVar2)) &&
         ((((int)uVar2 < DAT_14c9647dc &&
           (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 != 0)) &&
          ((*(int *)(lVar10 + 0x10) == *(int *)((longlong)&DAT_14c9a854c + uVar4) &&
           ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))))) {
LAB_140180f86:
        local_58 = 0;
        uStack_50 = 0;
        puVar11 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          puVar11 = (undefined8 *)*param_1;
        }
        local_70 = param_5;
        local_78 = CONCAT44(local_78._4_4_,param_4);
        local_88 = 0;
        local_80 = param_3;
        (**(code **)(*plVar9 + 0xf0))(0,&local_58,puVar11,0);
        local_60 = *(undefined8 *)
                    ((longlong)&DAT_14c9a8508 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
        iVar8 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          iVar8 = 0;
        }
        iVar3 = FUN_140180c78();
        iVar7 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar7 = 0;
        }
        iVar7 = iVar7 + iVar3 + iVar8;
        iVar8 = iVar7 + 1;
        if ((0 < iVar8) && (*(int *)((longlong)param_2 + 0xc) <= iVar8)) {
          FUN_1446f8c06(param_2,iVar7 + 2);
        }
        FUN_140180cec(&local_60,param_2);
        FUN_140002184(param_2,0x2e);
        iVar8 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar8 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar8);
        goto LAB_14018104d;
      }
      if (*(int *)((longlong)&DAT_14c9a8558 + uVar4) == 0) {
LAB_1401810c2:
        if (plVar9 != (longlong *)0x0) goto LAB_140180f86;
      }
      else {
        plVar9 = (longlong *)FUN_14007daa4(plVar1,0,0);
        if (plVar9 != (longlong *)0x0) {
          puVar6 = (undefined *)plVar9[1];
          if (DAT_14c951a40 == 0) {
            bVar12 = puVar6 != (undefined *)0x0;
            if (puVar6 != &DAT_14c951a38 && bVar12) {
              do {
                puVar6 = *(undefined **)(puVar6 + 0x30);
                bVar12 = puVar6 != (undefined *)0x0;
                if (puVar6 == &DAT_14c951a38) break;
              } while (puVar6 != (undefined *)0x0);
            }
            if (bVar12) goto LAB_1401810bf;
          }
          else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a40) != 0) {
LAB_1401810bf:
            *plVar1 = (longlong)plVar9;
            goto LAB_1401810c2;
          }
        }
        if (*plVar1 != 0) {
          *plVar1 = 0;
          *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar4) = 0;
        }
      }
    }
    uVar5 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140181208 FUN_140181208 body=575 status=ok
// SIG undefined FUN_140181208(void)

/* WARNING: Removing unreachable block (ram,0x000140181428) */
/* WARNING: Removing unreachable block (ram,0x000140181432) */

undefined8 * FUN_140181208(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = (longlong *)0x0;
  local_30 = 0xffffffffffffffff;
  local_88 = *param_3;
  local_80 = param_3[0x29];
  uStack_78 = param_3[0x2a];
  local_70 = (double)param_3[0x2b] - (double)*(float *)((longlong)param_3 + 0x194);
  local_58 = DAT_14cb1c870;
  local_68 = (undefined4)DAT_14cb1c860;
  uStack_64 = DAT_14cb1c860._4_4_;
  uStack_60 = (undefined4)DAT_14cb1c868;
  uStack_5c = DAT_14cb1c868._4_4_;
  local_50 = 0;
  local_a0 = *param_4;
  local_98 = param_3[8];
  plStack_90 = (longlong *)param_3[9];
  local_40 = 0xffffffff;
  local_38 = 0x44fa000044fa0000;
  local_28 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_90 + 0xc) = *(int *)((longlong)plStack_90 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = param_3[0x32];
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar3 = DAT_14cb1d028;
  param_2[2] = DAT_14cb1d020;
  param_2[3] = uVar3;
  param_2[4] = DAT_14cb1d030;
  uVar3 = DAT_14cb1d028;
  param_2[5] = DAT_14cb1d020;
  param_2[6] = uVar3;
  param_2[7] = DAT_14cb1d030;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xffffffff;
  if (local_a0 < 0x15) {
    if (*(int *)(param_1 + 0x1aa0) == 1) {
      local_30 = *(undefined8 *)(param_1 + 0x1a98);
    }
    FUN_14488902f(&local_a8,param_2);
  }
  else {
    FUN_140181448(&local_a8,param_2);
  }
  plVar4 = local_48;
  *param_4 = local_a0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_90 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140181448 FUN_140181448 body=239 status=ok
// SIG undefined FUN_140181448(void)

ulonglong FUN_140181448(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [64];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    param_1[2] = 0xffffffff;
    uVar2 = FUN_140181538();
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1000000000;
    FUN_140181b6a(uVar2,*param_1,param_1[1],local_80);
    puVar5 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar5 = local_80;
    }
    lVar3 = (longlong)(int)local_38;
    if (lVar3 != 0) {
      lVar6 = 0;
      do {
        param_1[2] = *(undefined4 *)(puVar5 + lVar6);
        cVar1 = FUN_14488902f(param_1,param_2);
        if (cVar1 != '\0') {
          uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_1401814f6;
        }
        lVar6 = lVar6 + 4;
      } while (lVar3 * 4 != lVar6);
    }
    param_1[2] = 0xffffffff;
    uVar4 = 0;
LAB_1401814f6:
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140181538 FUN_140181538 body=73 status=ok
// SIG undefined FUN_140181538(void)

undefined8 FUN_140181538(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0xc)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140181581 FUN_140181581 body=530 status=ok
// SIG undefined FUN_140181581(void)

bool FUN_140181581(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar10 = false;
  if ((param_1 == 0) || ((int)param_2 < 0)) goto LAB_1401816b4;
  lVar6 = *(longlong *)(param_1 + 0x20);
  bVar10 = false;
  if ((lVar6 == 0) ||
     (iVar2 = *(int *)(lVar6 + 0x20), bVar10 = false, *(int *)(lVar6 + 0xd8) + iVar2 <= (int)param_2
     )) goto LAB_1401816b4;
  if (((int)param_2 < *(int *)(lVar6 + 0x170)) &&
     ((*(int *)(lVar6 + 0x108) == 0 ||
      ((*(byte *)(*(longlong *)(lVar6 + 0x100) + (ulonglong)param_2) & 1) == 0)))) {
    if (*(int *)(*(longlong *)(lVar6 + 0x168) + (ulonglong)param_2 * 4) != -3) {
      if (param_3 == (longlong *)0x0) {
        bVar10 = true;
        goto LAB_1401816b4;
      }
      local_14 = param_2;
      if (*(code **)(*param_3 + 0x20) == (code *)&LAB_144b2ea08) {
        iVar3 = *(int *)(lVar6 + 0x50);
        if ((int)param_2 < iVar2) {
          uVar7 = param_2;
          if ((*(int *)(lVar6 + 0x98) == 0) ||
             (uVar7 = *(uint *)(*(longlong *)(lVar6 + 0x90) + (ulonglong)param_2 * 4),
             uVar7 != 0xffffffff)) {
            puVar8 = (uint *)((longlong)(int)(iVar3 * uVar7) * 4 + *(longlong *)(lVar6 + 0x120));
          }
          else {
            puVar8 = (uint *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)(param_2 * iVar3) * 4);
          }
        }
        else {
          puVar8 = (uint *)((longlong)(int)((param_2 - iVar2) * iVar3) * 4 +
                           *(longlong *)(lVar6 + 0x140));
        }
        uVar7 = 0;
        if (puVar8 != puVar8 + iVar3) {
          uVar4 = *puVar8;
          uVar9 = uVar4 >> 8 & 0xffff;
          if (uVar9 == 0) {
            if ((uVar4 & 0xff) == 0) {
LAB_14018173e:
              uVar7 = (uint)*(byte *)((longlong)param_3 + 0x1c);
            }
            else {
LAB_1401816a2:
              uVar7 = (uint)((uVar4 & 0xff & ~*(uint *)(param_3 + 3)) == 0);
            }
          }
          else {
            uVar5 = *(uint *)(lVar6 + 0x17c);
            if (((((int)uVar5 < 0) || (*(int *)(param_3[4] + 0x10) <= (int)uVar5)) ||
                (lVar6 = *(longlong *)(param_3[4] + 8),
                *(char *)(lVar6 + 0x10 + (ulonglong)uVar5 * 0x18) != '\x01')) ||
               ((plVar1 = (longlong *)(lVar6 + (ulonglong)uVar5 * 0x18), (int)plVar1[1] < (int)uVar9
                || (*(int *)(*plVar1 + 0x48 + (ulonglong)(uVar9 - 1) * 0x50) == -1))))
            goto LAB_14018173e;
            if ((uVar4 & 0xff) != 0) goto LAB_1401816a2;
          }
        }
      }
      else {
        local_28 = 0;
        uVar7 = (**(code **)(*param_3 + 0x20))(param_3,param_1,&local_14,0);
      }
      bVar10 = uVar7 != 0;
      goto LAB_1401816b4;
    }
  }
  bVar10 = false;
LAB_1401816b4:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 140181794 FUN_140181794 body=981 status=ok
// SIG undefined FUN_140181794(void)

bool FUN_140181794(longlong param_1,double *param_2,int *param_3,float param_4,float param_5,
                  double *param_6)

{
  double dVar1;
  double _X;
  double _X_00;
  int iVar2;
  bool bVar3;
  float fVar4;
  undefined1 auStack_f8 [44];
  int local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    dVar1 = *param_2;
    bVar3 = false;
    if ((dVar1 <= -DAT_14cb1cda8) || (DAT_14cb1cda8 <= dVar1)) goto LAB_140181adb;
    bVar3 = false;
    if ((param_2[1] <= -DAT_14cb1cdb0) || (bVar3 = false, DAT_14cb1cdb0 <= param_2[1]))
    goto LAB_140181adb;
    bVar3 = false;
    if ((param_2[2] <= -DAT_14cb1cdb8) || (DAT_14cb1cdb8 <= param_2[2])) goto LAB_140181adb;
    iVar2 = _finite(dVar1);
    if (iVar2 != 0) {
      iVar2 = _finite(param_2[1]);
      if (iVar2 != 0) {
        iVar2 = _finite(param_2[2]);
        if (iVar2 != 0) {
          bVar3 = false;
          if ((*param_3 < 0) || (param_3[1] < 0)) goto LAB_140181adb;
          local_b8 = (float)*param_2 * 0.01;
          fStack_b4 = (float)param_2[1] * 0.01;
          fStack_b0 = (float)param_2[2] * 0.01;
          fStack_ac = (float)param_2[2] * 0.01;
          param_4 = param_4 * 0.01;
          if (param_4 <= 0.0001) {
            param_4 = 0.0001;
          }
          local_cc = param_3[1];
          fVar4 = (float)FUN_144b3dde0(param_1,&local_cc,&local_b8,&local_c8);
          bVar3 = fVar4 < param_4 * param_4;
          if (3.4028235e+38 <= param_5 && param_6 == (double *)0x0) goto LAB_140181adb;
          if (param_4 * param_4 <= fVar4) {
            dVar1 = (double)local_c8 * 100.0;
            _X = (double)fStack_c4 * 100.0;
            _X_00 = (double)fStack_c0 * 100.0;
          }
          else {
            dVar1 = *param_2;
            _X = param_2[1];
            _X_00 = param_2[2];
          }
          if (((((-DAT_14cb1cda8 < dVar1) && (dVar1 < DAT_14cb1cda8)) && (-DAT_14cb1cdb0 < _X)) &&
              ((_X < DAT_14cb1cdb0 && (-DAT_14cb1cdb8 < _X_00)))) && (_X_00 < DAT_14cb1cdb8)) {
            iVar2 = _finite(dVar1);
            if (iVar2 != 0) {
              iVar2 = _finite(_X);
              if (iVar2 != 0) {
                iVar2 = _finite(_X_00);
                if (((iVar2 != 0) && (-1 < *param_3)) && (-1 < param_3[1])) {
                  local_9c = param_3[1];
                  FUN_144b3dd40(param_1,&local_9c,&local_98);
                  _X_00 = _X_00 - (double)(float)(((double)(fStack_8c * 100.0) +
                                                  _X_00 * (double)fStack_90 +
                                                  (double)local_98 * dVar1 + (double)fStack_94 * _X)
                                                 / ABS((double)fStack_90));
                }
              }
            }
          }
          if (param_6 != (double *)0x0) {
            *param_6 = dVar1;
            param_6[1] = _X;
            param_6[2] = _X_00;
          }
          if ((3.4028235e+38 <= param_5) || (ABS(param_2[2] - _X_00) <= (double)param_5))
          goto LAB_140181adb;
        }
      }
    }
  }
  bVar3 = false;
LAB_140181adb:
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140181b6a FUN_140181b6a body=1595 status=ok
// SIG undefined FUN_140181b6a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140181b6a(longlong param_1,float param_2,float param_3,longlong param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_438 [32];
  undefined1 local_418 [128];
  undefined1 *local_398;
  undefined8 local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined4 local_378 [190];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_438;
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(int *)(param_4 + 0x4c) < 0) {
    FUN_146bf53da(param_4,0);
  }
  lVar5 = FUN_14477bcf0();
  uVar4 = *(uint *)(lVar5 + 0x40);
  if (((param_1 != 0 && uVar4 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar21 != 0)) {
    local_398 = (undefined1 *)0x0;
    local_390 = 0x1000000000;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if ((uVar4 < 0x11) || (FUN_14380404e(local_418), 0 < *(int *)(lVar5 + 0x40))) {
      lVar24 = 0;
      do {
        lVar26 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar24 * 8);
        if (lVar26 != 0) {
          lVar6 = FUN_14477bcf0();
          uVar4 = 0xffffffff;
          if ((longlong)*(int *)(lVar6 + 0x40) != 0) {
            lVar9 = (longlong)*(int *)(lVar6 + 0x40) << 3;
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar14 * 8) == lVar26) {
                uVar4 = (uint)lVar14;
                break;
              }
              lVar14 = lVar14 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          if ((((*(uint *)(lVar21 + 0x648) >> (uVar4 & 0x1f) & 1) != 0) &&
              (param_2 < *(float *)(lVar26 + 0x30 + (ulonglong)*(byte *)(lVar26 + 0x3c) * 4) + 1.0))
             && (fVar30 = *(float *)(lVar26 + 0x30), param_3 < fVar30 + 1.0)) {
            fVar31 = 0.0;
            if (param_2 < *(float *)(lVar26 + 0x38)) {
              if (*(byte *)(lVar26 + 0x3c) != 0) {
                fVar30 = *(float *)(lVar26 + 0x34);
              }
              fVar31 = fVar30 - param_2;
            }
            lVar26 = (longlong)(int)local_390;
            uVar4 = (int)local_390 + 1;
            local_390 = CONCAT44(local_390._4_4_,uVar4);
            if (local_390._4_4_ < uVar4) {
              FUN_14380420a(local_418);
            }
            puVar7 = local_398;
            if (local_398 == (undefined1 *)0x0) {
              puVar7 = local_418;
            }
            *(int *)(puVar7 + lVar26 * 8) = (int)lVar24;
            *(float *)(puVar7 + lVar26 * 8 + 4) = fVar31;
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(lVar5 + 0x40));
    }
    iVar18 = (int)local_390;
    uVar12 = local_390 & 0xffffffff;
    if (uVar12 != 0) {
      if (1 < (int)local_390) {
        puVar7 = local_398;
        if (local_398 == (undefined1 *)0x0) {
          puVar7 = local_418;
        }
        memset(local_378,0,0x2f0);
        local_380 = puVar7 + uVar12 * 8 + -8;
        local_388 = puVar7;
        fVar30 = logf((float)iVar18);
        local_378[0] = (int)(longlong)(fVar30 + fVar30);
        ppuVar8 = &local_388;
        do {
          puVar10 = (undefined8 *)*ppuVar8;
          puVar11 = (undefined8 *)ppuVar8[1];
          iVar18 = *(int *)(ppuVar8 + 2);
          iVar22 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar10) >> 3);
          uVar4 = iVar22 + 1;
          puVar16 = puVar11;
          puVar27 = puVar10;
          if (iVar18 != 0) {
LAB_140181de5:
            puVar13 = puVar10;
            if (8 < (int)uVar4) {
              uVar2 = puVar13[uVar4 >> 1];
              puVar13[uVar4 >> 1] = *puVar13;
              *puVar13 = uVar2;
              puVar23 = puVar16 + 1;
              puVar10 = puVar13;
              do {
                puVar3 = puVar10 + 1;
                puVar17 = puVar10 + 1;
                do {
                  puVar28 = puVar17;
                  puVar10 = puVar3;
                  if (puVar16 < puVar10) break;
                  puVar3 = puVar10 + 1;
                  puVar17 = puVar28 + 1;
                } while (*(float *)((longlong)puVar10 + 4) < *(float *)((longlong)puVar13 + 4) ||
                         *(float *)((longlong)puVar10 + 4) == *(float *)((longlong)puVar13 + 4));
                puVar3 = puVar23 + -2;
                do {
                  puVar17 = puVar23;
                  puVar25 = puVar3;
                  puVar23 = puVar17 + -1;
                  if (puVar23 <= puVar13) break;
                  puVar3 = puVar25 + -1;
                } while (*(float *)((longlong)puVar13 + 4) < *(float *)((longlong)puVar17 + -4) ||
                         *(float *)((longlong)puVar13 + 4) == *(float *)((longlong)puVar17 + -4));
                if (puVar23 < puVar10) goto LAB_140181e6e;
                uVar2 = *puVar10;
                *puVar10 = *puVar23;
                *puVar23 = uVar2;
              } while( true );
            }
            for (; puVar10 = puVar13, puVar11 = puVar13, puVar13 < puVar16; puVar16 = puVar16 + -1)
            {
              while (puVar27 = puVar10, puVar10 = puVar11 + 1, puVar10 <= puVar16) {
                pfVar1 = (float *)((longlong)puVar11 + 0xc);
                puVar11 = puVar10;
                if (*pfVar1 < *(float *)((longlong)puVar27 + 4) ||
                    *pfVar1 == *(float *)((longlong)puVar27 + 4)) {
                  puVar10 = puVar27;
                }
              }
              uVar2 = *puVar27;
              *puVar27 = *puVar16;
              *puVar16 = uVar2;
            }
            goto LAB_140182097;
          }
LAB_140181f02:
          if (uVar4 != 0) {
            iVar18 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
            iVar22 = iVar18;
joined_r0x000140181f29:
            do {
              iVar20 = iVar18 * 2 + 1;
              if (iVar20 < (int)uVar4) {
                iVar19 = iVar18 * 2 + 2;
                if ((iVar19 < (int)uVar4) &&
                   (fVar30 = *(float *)((longlong)puVar10 + (longlong)iVar20 * 8 + 4),
                   pfVar1 = (float *)((longlong)puVar10 + (longlong)iVar19 * 8 + 4),
                   fVar30 < *pfVar1 || fVar30 == *pfVar1)) {
                  iVar20 = iVar19;
                }
                lVar21 = (longlong)iVar18;
                lVar5 = (longlong)iVar20;
                fVar30 = *(float *)((longlong)puVar10 + lVar5 * 8 + 4);
                pfVar1 = (float *)((longlong)puVar10 + lVar21 * 8 + 4);
                if (*pfVar1 <= fVar30 && fVar30 != *pfVar1) {
                  uVar2 = puVar10[lVar21];
                  puVar10[lVar21] = puVar10[lVar5];
                  puVar10[lVar5] = uVar2;
                  iVar18 = iVar20;
                  goto joined_r0x000140181f29;
                }
              }
              bVar29 = iVar22 != 0;
              iVar18 = iVar22 + -1;
              iVar22 = iVar18;
            } while (bVar29);
            if (1 < (int)uVar4) {
              uVar12 = (ulonglong)uVar4;
              uVar2 = *puVar10;
              *puVar10 = puVar10[uVar12 - 1];
              puVar10[uVar12 - 1] = uVar2;
              if (uVar4 != 2) {
                do {
                  uVar15 = uVar12 - 1;
                  iVar18 = 0;
                  iVar20 = 1;
                  iVar22 = 0;
                  do {
                    iVar18 = iVar18 + 2;
                    iVar19 = iVar20;
                    if (((longlong)iVar18 < (longlong)uVar15) &&
                       (fVar30 = *(float *)((longlong)puVar10 + (longlong)iVar20 * 8 + 4),
                       pfVar1 = (float *)((longlong)puVar10 + (longlong)iVar18 * 8 + 4),
                       fVar30 < *pfVar1 || fVar30 == *pfVar1)) {
                      iVar19 = iVar18;
                    }
                    lVar5 = (longlong)iVar22;
                    lVar21 = (longlong)iVar19;
                    fVar30 = *(float *)((longlong)puVar10 + lVar21 * 8 + 4);
                    pfVar1 = (float *)((longlong)puVar10 + lVar5 * 8 + 4);
                    if (fVar30 < *pfVar1 || fVar30 == *pfVar1) break;
                    uVar2 = puVar10[lVar5];
                    puVar10[lVar5] = puVar10[lVar21];
                    puVar10[lVar21] = uVar2;
                    iVar18 = iVar19 * 2;
                    iVar20 = iVar19 * 2 + 1;
                    iVar22 = iVar19;
                  } while ((longlong)iVar20 < (longlong)uVar15);
                  uVar2 = *puVar10;
                  *puVar10 = puVar10[uVar12 - 2];
                  puVar10[uVar12 - 2] = uVar2;
                  uVar12 = uVar15;
                } while (2 < uVar15);
              }
            }
          }
LAB_140182097:
          ppuVar8 = ppuVar8 + -3;
        } while (&local_388 <= ppuVar8);
        uVar12 = local_390 & 0xffffffff;
      }
      iVar18 = (int)uVar12;
      if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12);
      }
      if (*(int *)(param_4 + 0x4c) < iVar18) {
        FUN_146bf53da(param_4,uVar12);
        iVar18 = (int)local_390;
      }
      puVar7 = local_398;
      if (local_398 == (undefined1 *)0x0) {
        puVar7 = local_418;
      }
      if (iVar18 != 0) {
        lVar5 = 0;
        do {
          iVar22 = *(int *)(param_4 + 0x48);
          *(uint *)(param_4 + 0x48) = iVar22 + 1U;
          if (*(uint *)(param_4 + 0x4c) < iVar22 + 1U) {
            FUN_1401fcbb6(param_4,iVar22);
          }
          lVar21 = *(longlong *)(param_4 + 0x40);
          if (*(longlong *)(param_4 + 0x40) == 0) {
            lVar21 = param_4;
          }
          *(undefined4 *)(lVar21 + (longlong)iVar22 * 4) = *(undefined4 *)(puVar7 + lVar5);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar18 * 8 != lVar5);
      }
    }
    if (local_398 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140181e6e:
  uVar2 = *puVar13;
  *puVar13 = *puVar23;
  *puVar23 = uVar2;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -2;
  if ((longlong)puVar25 - (longlong)puVar27 < (longlong)puVar11 - (longlong)puVar28) {
    if (puVar10 < puVar16) {
      *ppuVar8 = (undefined1 *)puVar10;
      ppuVar8[1] = (undefined1 *)puVar16;
      *(int *)(ppuVar8 + 2) = iVar18;
      ppuVar8 = ppuVar8 + 3;
    }
    puVar10 = puVar13;
    puVar11 = puVar25;
    if (puVar23 <= puVar13 + 1) goto LAB_140182097;
  }
  else {
    if (puVar13 + 1 < puVar23) {
      *ppuVar8 = (undefined1 *)puVar13;
      ppuVar8[1] = (undefined1 *)puVar17;
      *(int *)(ppuVar8 + 2) = iVar18;
      ppuVar8 = ppuVar8 + 3;
    }
    puVar13 = puVar28;
    puVar17 = puVar16;
    puVar11 = puVar16;
    if (puVar16 <= puVar10) goto LAB_140182097;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar13) >> 3);
  uVar4 = iVar22 + 1;
  puVar16 = puVar17;
  puVar27 = puVar13;
  if (iVar18 == 0) goto LAB_140181f02;
  goto LAB_140181de5;
}



// FUNCTION 1401821a8 FUN_1401821a8 body=486 status=ok
// SIG undefined FUN_1401821a8(void)

void FUN_1401821a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (*(longlong *)(param_1 + 0x1738) == 0) {
    FUN_1401825b2(param_1);
  }
  else if (((((*(int *)(param_1 + 0x1734) != 0) &&
             (uVar3 = *(uint *)(param_1 + 0x1730), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)
            ) && ((plVar9 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                  plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x1734))))) &&
          ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar9;
    }
    else {
      lVar6 = 0;
    }
    lVar4 = *(longlong *)(lVar6 + 0x1518);
    plVar9 = *(longlong **)(lVar6 + 0x1520);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x1738) + 0x88);
      cVar7 = '\x01';
      cVar8 = '\x01';
      if (0x14 < uVar3) {
        cVar8 = '\x02';
        if (9 < uVar3 - 0x15) {
          cVar8 = (uVar3 == 0x200) * '\x03';
        }
      }
      uVar3 = *(uint *)(lVar4 + 0x250);
      if (0x14 < uVar3) {
        cVar7 = '\x02';
        if (9 < uVar3 - 0x15) {
          cVar7 = (uVar3 == 0x200) * '\x03';
        }
      }
      if (cVar8 != cVar7) {
        FUN_1401825b2(param_1);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1738) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1738) + 0xb8) == '\0')) {
    lVar6 = 0;
    bVar5 = true;
    do {
      bVar10 = bVar5;
      if (*(char *)(param_1 + 0xb99 + lVar6 * 0xb70) == '\x01') {
        FUN_1401828e4(param_1,lVar6 * 0xb70 + param_1 + 0x30);
      }
      lVar6 = 1;
      bVar5 = false;
    } while (bVar10);
  }
  FUN_14488b670(param_1,0,param_1 + 0x30);
  FUN_14488b670(param_1,1,param_1 + 0xba0);
  return;
}



// FUNCTION 14018238e FUN_14018238e body=72 status=ok
// SIG undefined FUN_14018238e(void)

void FUN_14018238e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb00);
  if (*(longlong *)(param_1 + 0xb00) == 0) {
    lVar1 = param_1;
  }
  FUN_1401823d6(lVar1,*(undefined4 *)(param_1 + 0xb08));
  *(undefined4 *)(param_1 + 0xb08) = 0;
  if (*(int *)(param_1 + 0xb0c) != 0) {
    FUN_140182422(param_1);
    return;
  }
  return;
}



// FUNCTION 1401823d6 FUN_1401823d6 body=75 status=ok
// SIG undefined FUN_1401823d6(void)

void FUN_1401823d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x48);
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
      plVar4 = plVar4 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140182422 FUN_140182422 body=89 status=ok
// SIG undefined FUN_140182422(void)

void FUN_140182422(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xb0c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xb0c) = 0;
    if (*(void **)((longlong)param_1 + 0xb00) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xb00),
              (longlong)*(int *)((longlong)param_1 + 0xb08) * 0x58);
      FUN_1446efa72((longlong)param_1 + 0xb00,0,0,0x58);
      return;
    }
  }
  return;
}



// FUNCTION 14018247c FUN_14018247c body=310 status=ok
// SIG undefined FUN_14018247c(void)

void FUN_14018247c(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xb08);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x21) {
    *(undefined4 *)((longlong)param_1 + 0xb0c) = 0x20;
    _Src = *(void **)((longlong)param_1 + 0xb00);
joined_r0x000140182578:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1;
    if (0x20 < *(uint *)((longlong)param_1 + 0xb0c)) {
      lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar2 * 0x58,0);
    uVar3 = uVar3 / 0x58;
    uVar4 = (uint)uVar3;
    if ((int)uVar4 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xb0c) = 0x7fffffff;
      uVar3 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0xb00);
    }
    else {
      *(uint *)((longlong)param_1 + 0xb0c) = uVar4;
      _Src = *(void **)((longlong)param_1 + 0xb00);
      if (uVar4 < 0x21) goto joined_r0x000140182578;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xb00,0,uVar3,0x58);
      memmove(*(void **)((longlong)param_1 + 0xb00),param_1,(longlong)param_2 * 0x58);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xb00,param_2,uVar3,0x58);
  return;
}



// FUNCTION 1401825b2 FUN_1401825b2 body=233 status=ok
// SIG undefined FUN_1401825b2(void)

void FUN_1401825b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14070ca4c();
  if (lVar4 != 0) {
    lVar5 = FUN_144860928();
    *(undefined4 *)(param_1 + 0x1710) = *(undefined4 *)(lVar5 + 0xea0);
    FUN_14018269c(&local_30,lVar4);
    plVar1 = local_28;
    *(undefined8 *)(param_1 + 0x1738) = local_30;
    local_30 = 0;
    plVar3 = *(longlong **)(param_1 + 0x1740);
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x1740) = plVar1;
      if (plVar3 == (longlong *)0x0) goto LAB_140182623;
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
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_140182623:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14018269c FUN_14018269c body=244 status=ok
// SIG undefined FUN_14018269c(void)

undefined8 * FUN_14018269c(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar3 = FUN_140a40fb0(param_2);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x1518), lVar3 != 0)) {
      local_48 = *(undefined4 *)(lVar3 + 0x250);
      local_50 = *(undefined8 *)(lVar3 + 0x5d0);
      local_40 = *(undefined8 *)(lVar3 + 0x480);
      plVar2 = *(longlong **)(lVar3 + 0x488);
      local_38 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        FUN_140182794(param_1,param_2,&local_50,param_3);
      }
      else {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        FUN_140182794(param_1,param_2,&local_50,param_3);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140182794 FUN_140182794 body=335 status=ok
// SIG undefined FUN_140182794(void)

undefined8 * FUN_140182794(undefined8 *param_1,longlong param_2,float *param_3)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) ||
     (fVar3 = param_3[2], (param_3[1] <= 0.0 || *param_3 <= 0.0) || fVar3 == -NAN)) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_1401827e8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((uint)fVar3 < 0x15) {
    FUN_14102fe8e(param_1);
    goto LAB_1401827e8;
  }
  if ((int)fVar3 - 0x15U < 10) {
    FUN_141125b0a(param_1);
    goto LAB_1401827e8;
  }
  if (fVar3 == 7.17465e-43) {
    uVar7 = FUN_1447210f0(param_2);
    FUN_141246736(&local_30,uVar7);
    if (local_28 != (longlong *)0x0) {
      iVar6 = (int)local_28[1];
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_28[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(local_28 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar8 = local_28;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_30 != 0) {
          *param_1 = *(undefined8 *)(local_30 + 0x3c0);
          lVar4 = *(longlong *)(local_30 + 0x3c8);
          param_1[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (local_30 != 0) goto LAB_14018282e;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_14018282e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401828e4 FUN_1401828e4 body=725 status=ok
// SIG undefined FUN_1401828e4(void)

void FUN_1401828e4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
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
  char cVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  
  if (((((*(longlong *)(param_1 + 0x1738) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x1738) + 0xb8) == '\0')) &&
       (*(int *)(param_1 + 0x1734) != 0)) &&
      ((uVar4 = *(uint *)(param_1 + 0x1730), -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))) &&
     ((plVar18 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
      plVar18 != (longlong *)0x0 &&
      (((int)plVar18[2] == *(int *)(param_1 + 0x1734) &&
       ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
      lVar21 = *plVar18;
    }
    else {
      lVar21 = 0;
    }
    lVar22 = *(longlong *)(lVar21 + 0x1518);
    plVar18 = *(longlong **)(lVar21 + 0x1520);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    if (lVar22 == 0) {
      iVar20 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar22 + 0x250);
      iVar20 = 1;
      if ((0x14 < uVar4) && (iVar20 = 2, 9 < uVar4 - 0x15)) {
        iVar20 = (uint)(uVar4 == 0x200) * 3;
      }
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    if (iVar20 != 0) {
      plVar18 = *(longlong **)(param_1 + 0x1738);
      if (plVar18 != (longlong *)0x0) {
        uVar4 = *(uint *)(plVar18 + 0x11);
        iVar17 = 1;
        if ((0x14 < uVar4) && (iVar17 = 2, 9 < uVar4 - 0x15)) {
          iVar17 = (uint)(uVar4 == 0x200) * 3;
        }
        if (iVar20 != iVar17) {
          *(undefined1 *)(param_2 + 0xb69) = 1;
          FUN_1401825b2(param_1);
          return;
        }
      }
      AcquireSRWLockShared((PSRWLOCK)(*plVar18 + 0xb0));
      iVar17 = *(int *)(param_2 + 0xb08);
      if (0 < iVar17) {
        lVar22 = 0;
        lVar21 = 0;
        do {
          lVar19 = *(longlong *)(param_2 + 0xb00);
          if (*(longlong *)(param_2 + 0xb00) == 0) {
            lVar19 = param_2;
          }
          if (*(int *)(lVar19 + 8 + lVar22) == iVar20) {
            cVar16 = FUN_14039a586(plVar18,lVar19 + lVar22);
            if (cVar16 != '\0') {
              iVar20 = (int)lVar21;
              if ((iVar20 < *(int *)(param_2 + 0xb08) + -1) &&
                 (0 < (*(int *)(param_2 + 0xb08) - iVar20) + -2)) {
                FUN_1456d364a(param_2,iVar20 + 1);
                FUN_1456d3586(param_2);
                lVar21 = *(longlong *)(param_2 + 0xb00);
                if (*(longlong *)(param_2 + 0xb00) == 0) {
                  lVar21 = param_2;
                }
                puVar3 = (undefined8 *)(lVar21 + (longlong)(*(int *)(param_2 + 0xb08) + -1) * 0x58);
                *(undefined8 *)(param_2 + 0xb10) = *puVar3;
                *(undefined4 *)(param_2 + 0xb18) = *(undefined4 *)(puVar3 + 1);
                uVar5 = *(undefined4 *)((longlong)puVar3 + 0x14);
                uVar6 = *(undefined4 *)(puVar3 + 3);
                uVar7 = *(undefined4 *)((longlong)puVar3 + 0x1c);
                uVar8 = *(undefined4 *)(puVar3 + 4);
                uVar9 = *(undefined4 *)((longlong)puVar3 + 0x24);
                uVar10 = *(undefined4 *)(puVar3 + 5);
                uVar11 = *(undefined4 *)((longlong)puVar3 + 0x2c);
                uVar12 = *(undefined4 *)(puVar3 + 6);
                uVar13 = *(undefined4 *)((longlong)puVar3 + 0x34);
                uVar14 = *(undefined4 *)(puVar3 + 7);
                uVar15 = *(undefined4 *)((longlong)puVar3 + 0x3c);
                *(undefined4 *)(param_2 + 0xb20) = *(undefined4 *)(puVar3 + 2);
                *(undefined4 *)(param_2 + 0xb24) = uVar5;
                *(undefined4 *)(param_2 + 0xb28) = uVar6;
                *(undefined4 *)(param_2 + 0xb2c) = uVar7;
                *(undefined4 *)(param_2 + 0xb30) = uVar8;
                *(undefined4 *)(param_2 + 0xb34) = uVar9;
                *(undefined4 *)(param_2 + 0xb38) = uVar10;
                *(undefined4 *)(param_2 + 0xb3c) = uVar11;
                *(undefined4 *)(param_2 + 0xb40) = uVar12;
                *(undefined4 *)(param_2 + 0xb44) = uVar13;
                *(undefined4 *)(param_2 + 0xb48) = uVar14;
                *(undefined4 *)(param_2 + 0xb4c) = uVar15;
                FUN_14488c2fc(param_2 + 0xb50);
              }
              break;
            }
            iVar17 = *(int *)(param_2 + 0xb08);
          }
          lVar21 = lVar21 + 1;
          lVar22 = lVar22 + 0x58;
        } while (lVar21 < iVar17);
      }
      *(undefined1 *)(param_2 + 0xb69) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140182a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*plVar18 + 0xb0));
      return;
    }
  }
  return;
}



// FUNCTION 140182bba FUN_140182bba body=453 status=ok
// SIG undefined FUN_140182bba(void)

void FUN_140182bba(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  ulonglong local_60;
  double dVar4;
  double dVar6;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    dVar15 = *(double *)(param_2 + 0x68);
    dVar1 = *(double *)(param_2 + 0x68);
    dVar7 = *(double *)(param_1 + 0x50);
    dVar8 = *(double *)(param_1 + 0x58);
    dVar9 = *(double *)(param_1 + 0x60);
    dVar10 = *(double *)(param_1 + 0x68);
    dVar11 = *(double *)(param_1 + 0x70);
    dVar12 = *(double *)(param_1 + 0x78);
    dVar13 = *(double *)(param_1 + 0x80);
    dVar14 = *(double *)(param_1 + 0x88);
    dVar16 = *(double *)(param_2 + 0x58);
    dVar2 = *(double *)(param_2 + 0x58);
    dVar3 = *(double *)(param_2 + 0x50);
    dVar4 = *(double *)(param_2 + 0x50);
    dVar5 = *(double *)(param_2 + 0x60);
    dVar6 = *(double *)(param_2 + 0x60);
    dVar17 = dVar8 * dVar5 * -1.0 + dVar9 * dVar16 + dVar3 * dVar10 * 1.0 + dVar15 * dVar7;
    dVar18 = dVar7 * dVar6 * 1.0 + dVar10 * dVar2 + dVar4 * dVar9 * -1.0 + dVar1 * dVar8;
    dVar15 = dVar10 * dVar5 * 1.0 + ((dVar3 * dVar8 * 1.0 + dVar15 * dVar9) - dVar16 * dVar7);
    dVar16 = dVar9 * dVar6 * -1.0 + ((dVar4 * dVar7 * -1.0 + dVar1 * dVar10) - dVar2 * dVar8);
    local_88 = dVar12 * dVar15 * -1.0 + dVar13 * dVar18 + dVar14 * dVar17 * 1.0 + dVar11 * dVar16;
    dStack_80 = dVar11 * dVar15 * 1.0 + dVar14 * dVar18 + dVar13 * dVar17 * -1.0 + dVar12 * dVar16;
    dVar1 = dVar13 * dVar15 * -1.0 + ((dVar17 * dVar11 * -1.0 + dVar16 * dVar14) - dVar18 * dVar12);
    local_78._8_4_ = SUB84(dVar1,0);
    local_78._0_8_ =
         dVar14 * dVar15 * 1.0 + ((dVar17 * dVar12 * 1.0 + dVar16 * dVar13) - dVar18 * dVar11);
    local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    FUN_140182d80(param_2);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140182d80 FUN_140182d80 body=655 status=ok
// SIG undefined FUN_140182d80(void)

void FUN_140182d80(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if ((*(char *)(param_1 + 0x70) == '\x01') && (*(char *)(param_1 + 8) == '\x01')) {
    dVar1 = *(double *)(param_1 + 0x60);
    dVar2 = *(double *)(param_1 + 0x58);
    dVar3 = *(double *)(param_1 + 0x50);
    dVar10 = dVar1 - dVar3 * 0.0;
    dVar11 = dVar3 * 0.0 - dVar2;
    dVar12 = dVar2 * 0.0 + dVar1 * -0.0;
    dVar11 = dVar11 + dVar11;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    dVar4 = *(double *)(param_1 + 0x68);
    dVar9 = (double)*(float *)(param_1 + 4);
    dVar5 = param_2[2];
    dVar6 = *param_2;
    dVar7 = param_2[1];
    dVar13 = dVar5 - dVar6 * 0.0;
    dVar14 = dVar6 * 0.0 - dVar7;
    dVar15 = dVar7 * 0.0 + dVar5 * -0.0;
    dVar14 = dVar14 + dVar14;
    dVar13 = dVar13 + dVar13;
    dVar15 = dVar15 + dVar15;
    dVar8 = param_2[3];
    *(double *)(param_1 + 0x38) =
         ((dVar7 * dVar14 - dVar13 * dVar5) + dVar15 * dVar8 + 1.0) * dVar9 +
         (*(double *)(param_1 + 0x38) -
         ((dVar2 * dVar11 - dVar10 * dVar1) + dVar12 * dVar4 + 1.0) * dVar9);
    *(double *)(param_1 + 0x40) =
         ((dVar5 * dVar15 - dVar14 * dVar6) + dVar8 * dVar13 + 0.0) * dVar9 +
         (*(double *)(param_1 + 0x40) -
         ((dVar1 * dVar12 - dVar11 * dVar3) + dVar4 * dVar10 + 0.0) * dVar9);
    *(double *)(param_1 + 0x48) =
         ((dVar6 * dVar13 - dVar15 * dVar7) + dVar8 * dVar14 + 0.0) * dVar9 +
         (*(double *)(param_1 + 0x48) -
         ((dVar3 * dVar10 - dVar12 * dVar2) + dVar4 * dVar11 + 0.0) * dVar9);
  }
  if ((double *)(param_1 + 0x50) != param_2) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[3];
    *(double *)(param_1 + 0x60) = param_2[2];
    *(double *)(param_1 + 0x68) = dVar3;
    *(double *)(param_1 + 0x50) = dVar1;
    *(double *)(param_1 + 0x58) = dVar2;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



// FUNCTION 140183010 FUN_140183010 body=774 status=ok
// SIG undefined FUN_140183010(void)

void FUN_140183010(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  undefined1 auStack_118 [40];
  double local_f0 [3];
  undefined1 local_d8 [72];
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar7 = (double *)(param_1 + 0x1b48);
  if (((ABS((float)*(double *)(param_1 + 0x1b50)) < 3.4028235e+38) &&
      (ABS((float)*pdVar7) < 3.4028235e+38)) &&
     (ABS((float)*(double *)(param_1 + 7000)) < 3.4028235e+38)) {
    dVar8 = *(double *)(param_1 + 0x1b60);
    if ((-DAT_14cb1d020 < dVar8) && (dVar8 < DAT_14cb1d020)) {
      if ((-DAT_14cb1d028 < *(double *)(param_1 + 0x1b68)) &&
         (*(double *)(param_1 + 0x1b68) < DAT_14cb1d028)) {
        if ((-DAT_14cb1d030 < *(double *)(param_1 + 0x1b70)) &&
           (*(double *)(param_1 + 0x1b70) < DAT_14cb1d030)) {
          iVar4 = _finite(dVar8);
          if (iVar4 != 0) {
            iVar4 = _finite(*(double *)(param_1 + 0x1b68));
            if (iVar4 != 0) {
              iVar4 = _finite(*(double *)(param_1 + 0x1b70));
              if ((iVar4 != 0) && (*(longlong *)(param_1 + 0x1ba8) != 0)) {
                FUN_1404a14c4(pdVar7,local_f0);
                FUN_1402f0636(param_3 + 0xd8,local_d8);
                dVar8 = (double)FUN_144719204(SUB84(*(double *)(param_3 + 0x28) + local_f0[1],0));
                dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                                (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
                *(ulonglong *)(param_3 + 0x28) =
                     ~-(ulonglong)(180.0 < dVar8) & (ulonglong)dVar8 |
                     (ulonglong)(dVar8 + -360.0) & -(ulonglong)(180.0 < dVar8);
              }
            }
          }
        }
      }
    }
  }
  local_50 = *(undefined8 *)(param_3 + 0xe8);
  local_60 = *(undefined8 *)(param_3 + 0xd8);
  uStack_58 = *(undefined8 *)(param_3 + 0xe0);
  local_78 = *(undefined4 *)(param_3 + 0x20);
  uStack_74 = *(undefined4 *)(param_3 + 0x24);
  uStack_70 = *(undefined4 *)(param_3 + 0x28);
  uStack_6c = *(undefined4 *)(param_3 + 0x2c);
  local_68 = *(undefined8 *)(param_3 + 0x30);
  FUN_140183318(local_f0,&local_78,param_3 + 0x278);
  plVar2 = local_88;
  pdVar6 = local_f0;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + 1;
    pdVar7 = pdVar7 + 1;
  }
  if ((undefined8 *)(param_1 + 0x1ba8) != &local_90) {
    *(undefined8 *)(param_1 + 0x1ba8) = local_90;
    local_90 = 0;
    plVar3 = *(longlong **)(param_1 + 0x1bb0);
    if (local_88 != plVar3) {
      local_88 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x1bb0) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  plVar2 = local_88;
  *(undefined4 *)(param_1 + 0x1bb8) = local_80;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140183318 FUN_140183318 body=610 status=ok
// SIG undefined FUN_140183318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140183318(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_100 [8];
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[8] = DAT_14cb1c858;
  uVar2 = _DAT_14cb1c850;
  param_1[6] = _DAT_14cb1c848;
  param_1[7] = uVar2;
  uVar9 = DAT_14cb1c868._4_4_;
  uVar8 = (undefined4)DAT_14cb1c868;
  uVar7 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(param_1 + 9) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 10) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar9;
  param_1[0xb] = DAT_14cb1c870;
  lVar10 = *param_3;
  param_1[0xc] = lVar10;
  lVar1 = param_3[1];
  param_1[0xd] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar10 = param_1[0xc];
  }
  *(int *)(param_1 + 0xe) = (int)param_3[2];
  if (lVar10 != 0) {
    FUN_147e49f8e(*(undefined8 *)(lVar10 + 0x598),&local_e8);
    if ((local_88 & 1) != 0) {
      local_128 = local_e8;
      dStack_120 = dStack_e0;
      local_118 = local_d8;
      dStack_110 = dStack_d0;
      FUN_1448052ee(&local_128,local_100);
      local_c8 = (double)param_2[3] - local_c8;
      dStack_c0 = (double)param_2[4] - dStack_c0;
      local_b8 = (double)param_2[5] - local_b8;
      dVar11 = -local_e8;
      dStack_e0 = -dStack_e0;
      local_d8 = local_d8 * -1.0;
      dStack_d0 = dStack_d0 * 1.0;
      dVar14 = local_c8 * local_d8 - dVar11 * local_b8;
      dVar12 = dStack_c0 * dVar11 - dStack_e0 * local_c8;
      dVar13 = local_b8 * dStack_e0 - local_d8 * dStack_c0;
      dVar13 = dVar13 + dVar13;
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar12 + dVar12;
      param_1[9] = (dVar12 * dStack_e0 - dVar14 * local_d8) + dStack_d0 * dVar13 + local_c8;
      param_1[10] = local_e8 * dVar12 + local_d8 * dVar13 + dStack_d0 * dVar14 + dStack_c0;
      param_1[0xb] = dStack_d0 * dVar12 + local_b8 + (dVar14 * dVar11 - dVar13 * dStack_e0);
      param_1[7] = (double)param_2[1] - (double)(float)local_f8;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018358c FUN_14018358c body=490 status=ok
// SIG undefined FUN_14018358c(void)

longlong * FUN_14018358c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_3 + 0x38);
  if ((longlong)iVar1 == 0) {
    plVar7 = (longlong *)0x0;
    fVar11 = 0.0;
  }
  else {
    lVar4 = *(longlong *)(param_3 + 0x30);
    fVar11 = 0.0;
    lVar8 = 0;
    plVar7 = (longlong *)0x0;
    do {
      plVar3 = (longlong *)FUN_140183782(param_2,*(undefined4 *)(lVar4 + lVar8));
      if (((plVar3 != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*plVar3 + 0x128))(plVar3), cVar2 == '\0')) &&
         (fVar10 = (float)(**(code **)(*plVar3 + 0x138))(plVar3), fVar11 < fVar10)) {
        fVar11 = (float)(**(code **)(*plVar3 + 0x138))(plVar3);
        plVar7 = plVar3;
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar1 * 4 != lVar8);
  }
  if ((longlong)*(int *)(param_3 + 0x48) != 0) {
    puVar9 = *(undefined4 **)(param_3 + 0x40);
    puVar6 = puVar9 + *(int *)(param_3 + 0x48);
    do {
      lVar4 = FUN_14791298c(param_2,*puVar9);
      if ((lVar4 != 0) && (lVar4 = FUN_147508a86(lVar4), lVar4 != 0)) {
        local_68 = 0;
        lVar8 = FUN_1479129d8(param_2,*puVar9);
        puVar5 = (undefined8 *)(lVar8 + 200);
        if (lVar8 == 0) {
          puVar5 = &DAT_14cacbf28;
        }
        local_68 = *puVar5;
        FUN_1478f838a(lVar4,&local_78,&local_68);
        local_88 = local_78;
        local_80 = (longlong)local_70;
        if (local_80 != 0) {
          local_80 = local_80 << 3;
          lVar4 = 0;
          do {
            plVar3 = *(longlong **)(local_88 + lVar4);
            cVar2 = (**(code **)(*plVar3 + 0x128))(plVar3);
            if ((cVar2 == '\0') &&
               (fVar10 = (float)(**(code **)(*plVar3 + 0x138))(plVar3), fVar11 < fVar10)) {
              fVar11 = (float)(**(code **)(*plVar3 + 0x138))(plVar3);
              plVar7 = plVar3;
            }
            lVar4 = lVar4 + 8;
          } while (local_80 != lVar4);
        }
        if (local_78 != 0) {
          FUN_1400020a8(local_78);
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 140183782 FUN_140183782 body=78 status=ok
// SIG undefined FUN_140183782(void)

void FUN_140183782(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe50 = FUN_140002ddd(FUN_1463a521a,uVar1,L"AnimNode_AssetPlayerRelevancyBase");
  }
  FUN_1401837d0(param_1,param_2,DAT_14cacbe50);
  return;
}



// FUNCTION 1401837d0 FUN_1401837d0 body=115 status=ok
// SIG undefined FUN_1401837d0(void)

longlong FUN_1401837d0(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    uVar4 = ~param_2 + (int)plVar3[1];
    if ((int)uVar4 < 0) {
      return 0;
    }
    if ((int)plVar3[1] <= (int)uVar4) {
      return 0;
    }
    if (param_3 != 0) {
      lVar1 = *(longlong *)(*plVar3 + (ulonglong)uVar4 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x70);
      if ((*(int *)(param_3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
          param_3 + 0x30)) {
        return (longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0x130);
      }
    }
  }
  return 0;
}



// FUNCTION 140183844 FUN_140183844 body=212 status=ok
// SIG undefined FUN_140183844(void)

void FUN_140183844(longlong *param_1,longlong param_2,void *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = (**(code **)(*param_1 + 0x250))(param_1,uVar1,0);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 600))
              (param_1,uVar1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x80),0);
  }
  if ((uVar2 & 2) != 0) {
    FUN_14488c8f6();
    return;
  }
  plVar3 = (longlong *)FUN_140d2ab24(uVar1);
  if ((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[6])) {
    iVar4 = 0;
    do {
      if ((~plVar3[7] & 0x1000000200U) == 0) {
        memset(param_3,0,(longlong)*(int *)((longlong)plVar3 + 0x34));
      }
      else {
        (**(code **)(*plVar3 + 0x140))(plVar3);
      }
      iVar4 = iVar4 + 1;
      param_3 = (void *)((longlong)param_3 + (longlong)*(int *)((longlong)plVar3 + 0x34));
    } while (iVar4 < (int)plVar3[6]);
  }
  return;
}



// FUNCTION 140183918 FUN_140183918 body=311 status=ok
// SIG undefined FUN_140183918(void)

void FUN_140183918(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  *(undefined4 **)(param_2 + 0x20) = puVar3 + 3;
  local_48 = CONCAT44(uVar2,uVar1);
  lVar4 = FUN_1400796d0(*(undefined8 *)(param_1 + 0x10),local_48,1);
  if (lVar4 == 0) {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_14005eb28(&local_58,0x80);
    FUN_1468fef7a(param_1,0,&local_58,0);
    local_78 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      local_78 = local_58;
    }
    FUN_1400021e4(&local_48,&local_68);
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ScriptCore.cpp",0x5ce,
                  L"Failed to find function %s in %s",puVar5);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140073682(param_1,lVar4,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140183a50 FUN_140183a50 body=115 status=ok
// SIG undefined FUN_140183a50(void)

void FUN_140183a50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + -0x518) != 0) {
    lVar3 = FUN_140183ac4();
    lVar1 = *(longlong *)(param_1 + -0x518);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && (*(longlong *)(lVar1 + 0x39e0) != 0)))) {
      FUN_14494e352(*(longlong *)(lVar1 + 0x39e0) + 0x48,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140183ac4 FUN_140183ac4 body=228 status=ok
// SIG undefined FUN_140183ac4(void)

longlong FUN_140183ac4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6e518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140ce2a3a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14638e23a;
    local_38 = &LAB_1487992bf;
    local_40 = &LAB_14653b0c3;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000e;
    local_60 = 0x10;
    local_68 = 0x3b10;
    FUN_14081cfa3(L"/Script/GbxGame",L"PlayerCameraModeManager",&DAT_14cb6e518,FUN_14653b09c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140183bb0 FUN_140183bb0 body=57 status=ok
// SIG undefined FUN_140183bb0(void)

void FUN_140183bb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaeeb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaeeb0 = FUN_140002ddd(FUN_1465edc7c,uVar1,L"OakSpawnPointBodySettings");
  }
  return;
}



// FUNCTION 140183bea FUN_140183bea body=72 status=ok
// SIG undefined FUN_140183bea(void)

ulonglong FUN_140183bea(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x10a) & 8) == 0) {
    lVar2 = FUN_140183c32(param_1 + 0x1d0);
    if (lVar2 != 0) {
      uVar3 = FUN_140183c32(param_1 + 0x1d0);
      cVar1 = FUN_140183ea4(uVar3);
      if (cVar1 == '\0') goto LAB_140183c29;
    }
    uVar4 = 0;
  }
LAB_140183c29:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140183c32 FUN_140183c32 body=404 status=ok
// SIG undefined FUN_140183c32(void)

longlong FUN_140183c32(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140183dc6();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140183dc6 FUN_140183dc6 body=221 status=ok
// SIG undefined FUN_140183dc6(void)

longlong FUN_140183dc6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined **local_30;
  code *local_28;
  code *local_20;
  undefined *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11828 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_1437a8bb2;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dc0c31;
    local_40 = &LAB_145a1e924;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartition",&DAT_14cb11828,&DAT_147dc0c30);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140183ea4 FUN_140183ea4 body=809 status=ok
// SIG undefined FUN_140183ea4(void)

ulonglong FUN_140183ea4(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong extraout_RAX;
  longlong lVar6;
  longlong extraout_RAX_00;
  longlong lVar7;
  undefined *puVar8;
  byte bVar9;
  undefined7 uVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  ulonglong uVar10;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x48) == 2) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar6 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      iVar2 = *(int *)(lVar6 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
           (lVar7 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar6 + 0x30)) {
          lVar7 = 0;
        }
      } while ((lVar7 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    }
    uVar10 = *(ulonglong *)(lVar7 + 0x30);
    lVar6 = *(longlong *)(uVar10 + 0xc0);
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x156) & 0x40) == 0)) {
      uVar11 = (undefined7)((ulonglong)param_1 >> 8);
      bVar9 = 1;
      if ((uVar10 != 0) && (*(ulonglong *)(lVar6 + 0x30) != uVar10)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
        if (DAT_14cae90b8 == uVar10) {
LAB_140183f9a:
          plVar3 = DAT_14cae90c0;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
          lVar6 = extraout_RAX;
          if (plVar3 != (longlong *)0x0) {
            if ((*(byte *)(plVar3 + 0x1d) & 1) == 0) {
              lVar6 = (**(code **)(*plVar3 + 0x2e0))(plVar3);
              bVar9 = 0;
              uVar11 = 0;
            }
            else {
              bVar9 = 0;
              uVar11 = 0;
              lVar6 = 0;
            }
          }
        }
        else {
          DAT_14cae90b8 = uVar10;
          if (DAT_14cae9048 != DAT_14cae9074) {
            uVar4 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            puVar8 = &DAT_14cae9078;
            if (DAT_14cae9080 != (undefined *)0x0) {
              puVar8 = DAT_14cae9080;
            }
            iVar2 = *(int *)(puVar8 + (ulonglong)(DAT_14cae9088 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
            ;
            while (iVar2 != -1) {
              puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar2 * 0x18);
              if (*puVar1 == uVar10) {
                if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                  DAT_14cae90c0 = (longlong *)puVar1[1];
                  goto LAB_140183f9a;
                }
                break;
              }
              iVar2 = (int)puVar1[2];
            }
          }
          DAT_14cae90c0 = (longlong *)0x0;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
          lVar6 = extraout_RAX_00;
        }
      }
      uVar10 = CONCAT71(uVar11,bVar9 | (byte)lVar6);
      goto LAB_140183f53;
    }
  }
  uVar10 = 0;
LAB_140183f53:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar10 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401841ce FUN_1401841ce body=26 status=ok
// SIG undefined FUN_1401841ce(void)

void FUN_1401841ce(undefined8 param_1)

{
  FUN_1401841e8();
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 1401841e8 FUN_1401841e8 body=180 status=ok
// SIG undefined FUN_1401841e8(void)

void FUN_1401841e8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar5 = 0xf0;
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + lVar5);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar5) = 0;
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x100;
    } while (lVar4 < *(int *)(param_1 + 0x70));
  }
  iVar2 = *(int *)(param_1 + 0x104);
  FUN_14018429c(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x104) != 0)) {
    FUN_140626096(param_1 + 0xf8,0);
  }
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) & 0xfe;
  FUN_1401842de(param_1 + 0x38);
  return;
}



// FUNCTION 14018429c FUN_14018429c body=66 status=ok
// SIG undefined FUN_14018429c(void)

void FUN_14018429c(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 1401842de FUN_1401842de body=1200 status=ok
// SIG undefined FUN_1401842de(void)

void FUN_1401842de(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x70) = 0;
  UNLOCK();
  if (lVar4 == 0) goto LAB_1401843f3;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  local_70 = lVar4;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14018432d;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140184332;
      goto LAB_14018435c;
    }
  }
  else {
LAB_14018432d:
    if (iVar7 != 0x10) {
LAB_14018435c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_140184332;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140184332;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1401844b5;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1436364c0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1401844b5:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_140184535;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_140184535:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa2b200;
        puVar17[0x15] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa2b1a0;
        local_68[0] = &LAB_14364029e;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"FKAggregateGeomFreeRenderInfo",&DAT_14caf7c6c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1401843f3;
    }
  }
LAB_140184332:
  FUN_1436401ae(&local_70);
LAB_1401843f3:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140184790 FUN_140184790 body=93 status=ok
// SIG undefined FUN_140184790(void)

void FUN_140184790(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1401847ee();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401847ee FUN_1401847ee body=222 status=ok
// SIG undefined FUN_1401847ee(void)

void FUN_1401847ee(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  void *_Src;
  ulonglong *puVar1;
  void *_Dst;
  int iVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar2 = (int)param_4 * param_3;
    puVar1 = TlsGetValue(DAT_14ca954e4);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar3 = (longlong)_Dst + (longlong)iVar2;
    if (puVar1[1] < uVar3) {
      FUN_140023dd8(puVar1,iVar2 + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar3 = (longlong)iVar2 + (longlong)_Dst;
    }
    *puVar1 = uVar3;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1401848ce FUN_1401848ce body=1218 status=ok
// SIG undefined FUN_1401848ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401848ce(longlong *param_1,float param_2)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double _X;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((longlong *)param_1[0x157] != (longlong *)0x0) && (*(longlong *)param_1[0x157] != -1)) {
    (**(code **)(*param_1 + 0x718))(param_1,&local_a8,&local_c8);
    lVar1 = param_1[0x1e9];
    if ((lVar1 != 0) &&
       (((lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x3c20) + 0x18))(lVar1 + 0x3c20), lVar1 != 0 &&
         (param_1[0x1e9] != 0)) && (*(longlong *)(lVar1 + 0x20) != 0)))) {
      lVar1 = *(longlong *)(param_1[0x1e9] + 0x1c8);
      if (lVar1 == 0) {
        pdVar2 = (double *)&DAT_14c8464e0;
        local_98 = DAT_14c8464f0;
      }
      else {
        pdVar2 = (double *)(lVar1 + 0x260);
        local_98 = *(double *)(lVar1 + 0x270);
      }
      local_a8 = *pdVar2;
      dStack_a0 = pdVar2[1];
    }
    dVar3 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    if (0.0 < *(float *)(param_1 + 0x15f)) {
      dVar5 = (double)(param_2 / *(float *)(param_1 + 0x15f));
      local_98 = (local_98 - (double)param_1[0x15b]) * dVar5 + (double)param_1[0x15b];
      dStack_a0 = (dStack_a0 - (double)param_1[0x15a]) * dVar5 + (double)param_1[0x15a];
      local_a8 = (local_a8 - (double)param_1[0x159]) * dVar5 + (double)param_1[0x159];
      local_b8 = local_b8 - (double)param_1[0x15e];
      dStack_c0 = dStack_c0 - (double)param_1[0x15d];
      local_c8 = local_c8 - (double)param_1[0x15c];
      auVar9._8_8_ = dStack_c0;
      auVar9._0_8_ = local_c8;
      auVar13 = divpd(auVar9,_DAT_1499387d0);
      auVar14._0_8_ = local_b8 / 360.0;
      auVar14._8_8_ = 0;
      auVar10 = roundpd(auVar13,auVar13,3);
      auVar13 = roundpd(auVar14,auVar14,3);
      auVar20._0_8_ = local_b8 - auVar13._0_8_ * dVar3;
      auVar20._8_8_ = 0.0 - auVar13._8_8_ * dVar4;
      local_c8 = local_c8 - auVar10._0_8_ * dVar3;
      dStack_c0 = dStack_c0 - auVar10._8_8_ * dVar4;
      auVar16._0_8_ = local_c8 + dVar3;
      auVar16._8_8_ = dStack_c0 + dVar4;
      auVar18._0_8_ = dVar3 + auVar20._0_8_;
      auVar18._8_8_ = dVar4 + auVar20._8_8_;
      auVar10._8_8_ = -(ulonglong)(0.0 <= dStack_c0);
      auVar10._0_8_ = -(ulonglong)(0.0 <= local_c8);
      auVar13._8_4_ = SUB84(dStack_c0,0);
      auVar13._0_8_ = local_c8;
      auVar13._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
      auVar13 = blendvpd(auVar16,auVar13,auVar10);
      auVar7._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
      auVar7._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
      auVar14 = blendvpd(auVar18,auVar20,auVar7);
      auVar11._0_8_ = auVar13._0_8_ + -360.0;
      auVar11._8_8_ = auVar13._8_8_ + -360.0;
      auVar8._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
      auVar8._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
      auVar13 = blendvpd(auVar13,auVar11,auVar8);
      dVar17 = auVar14._0_8_;
      local_b8 = (double)(~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                         (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17)) * dVar5 +
                 (double)param_1[0x15e];
      dStack_c0 = auVar13._8_8_ * dVar5 + (double)param_1[0x15d];
      local_c8 = auVar13._0_8_ * dVar5 + (double)param_1[0x15c];
    }
    auVar12._8_8_ = dStack_c0;
    auVar12._0_8_ = local_c8;
    auVar13 = divpd(auVar12,_DAT_1499387d0);
    auVar6._0_8_ = local_b8 / 360.0;
    auVar6._8_8_ = 0;
    auVar14 = roundpd(auVar13,auVar13,3);
    auVar13 = roundpd(auVar6,auVar6,3);
    dVar17 = (local_c8 - auVar14._0_8_ * dVar3) * 0.008726646259971648;
    dVar19 = (dStack_c0 - auVar14._8_8_ * dVar4) * 0.008726646259971648;
    dVar15 = (local_b8 - auVar13._0_8_ * dVar3) * 0.008726646259971648;
    _X = (0.0 - auVar13._8_8_ * dVar4) * 0.008726646259971648;
    dVar3 = sin(dVar17);
    dVar4 = sin(dVar19);
    dVar5 = sin(dVar15);
    sin(_X);
    dVar17 = cos(dVar17);
    dVar19 = cos(dVar19);
    dVar15 = cos(dVar15);
    cos(_X);
    lVar1 = param_1[0x157];
    *(double *)(lVar1 + 0x30) = dVar3 * dVar4 * dVar15 - dVar17 * dVar19 * dVar5;
    *(double *)(lVar1 + 0x38) = -(dVar3 * dVar19 * dVar15) - dVar17 * dVar4 * dVar5;
    *(double *)(lVar1 + 0x40) = -(dVar19 * dVar3 * dVar5) + dVar4 * dVar17 * dVar15;
    *(double *)(lVar1 + 0x48) = dVar4 * dVar3 * dVar5 + dVar19 * dVar17 * dVar15;
    *(double *)(lVar1 + 0x50) = local_a8;
    *(double *)(lVar1 + 0x58) = dStack_a0;
    *(double *)(lVar1 + 0x60) = local_98;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x78) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x80) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    param_1[0x159] = (longlong)local_a8;
    param_1[0x15a] = (longlong)dStack_a0;
    param_1[0x15b] = (longlong)local_98;
    param_1[0x15c] = (longlong)local_c8;
    param_1[0x15d] = (longlong)dStack_c0;
    param_1[0x15e] = (longlong)local_b8;
  }
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140184d92 FUN_140184d92 body=174 status=ok
// SIG undefined FUN_140184d92(void)

void FUN_140184d92(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  if (DAT_14c75f170 == '\x01') {
    FUN_14488d62e();
    iVar1 = *(int *)(param_1 + 0xb8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        uVar4 = *(uint *)(lVar3 + 0x90);
        if ((uVar4 & 0x8c) == 4) {
          FUN_140184e40(4,lVar3,param_2);
          uVar4 = *(uint *)(lVar3 + 0x90);
          if ((uVar4 & 8) != 0) {
            FUN_140aa614a(param_1,lVar3);
            FUN_140aa60a2();
            uVar4 = *(uint *)(lVar3 + 0x90);
          }
        }
        *(uint *)(lVar3 + 0x90) = uVar4 | 4;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 140184e40 FUN_140184e40 body=1059 status=ok
// SIG undefined FUN_140184e40(void)

void FUN_140184e40(undefined8 param_1,longlong *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_158 [36];
  int local_134;
  longlong local_130;
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
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar15 = param_2[1];
  if ((longlong)(int)lVar15 == 0) {
    local_134 = 0;
LAB_140185245:
    if (*(int *)((longlong)param_2 + 0x84) < local_134) {
      iVar16 = *(int *)((longlong)param_2 + 0x84) + 1;
      goto LAB_1401851b3;
    }
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 8;
  }
  else {
    local_130 = *param_2;
    fVar21 = DAT_14c75f2e0;
    if (1.0 <= DAT_14c75f2e0) {
      fVar21 = 1.0;
    }
    dVar12 = (double)param_3;
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    dVar13 = (double)fVar21;
    lVar20 = 0;
    bVar19 = true;
    local_134 = 0;
    do {
      plVar9 = *(longlong **)(local_130 + lVar20);
      fVar21 = *(float *)((longlong)plVar9 + 0x34);
      if ((fVar21 <= 0.0) && (*(float *)(plVar9 + 7) <= 0.0)) goto LAB_1401851b1;
      plVar10 = (longlong *)*plVar9;
      if ((plVar10 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar10 + 0xc))) {
        if (1e-08 < param_3) {
          lVar11 = *plVar10;
          lVar18 = *(longlong *)(lVar11 + 0x530);
          lVar14 = (longlong)(int)plVar10[1] * 0x18;
          lVar17 = *(longlong *)(lVar11 + 0x28);
          dVar1 = *(double *)(lVar18 + 0x10 + lVar14);
          dVar2 = *(double *)(lVar17 + 0x10 + lVar14);
          dVar3 = *(double *)(lVar18 + lVar14);
          dVar4 = *(double *)(lVar18 + 8 + lVar14);
          dVar5 = *(double *)(lVar17 + 8 + lVar14);
          dVar6 = *(double *)(lVar17 + lVar14);
          lVar18 = *(longlong *)(lVar11 + 0x548);
          lVar17 = (longlong)(int)plVar10[1] * 0x10;
          local_f0 = (double)*(float *)(lVar18 + 0xc + lVar17);
          local_f8 = (double)*(float *)(lVar18 + 8 + lVar17);
          local_100 = (double)*(float *)(lVar18 + 4 + lVar17);
          local_108 = (double)*(float *)(lVar18 + lVar17);
          lVar18 = *(longlong *)(lVar11 + 0x48);
          local_110 = (double)*(float *)(lVar18 + 0xc + lVar17);
          local_118 = (double)*(float *)(lVar18 + 8 + lVar17);
          local_120 = (double)*(float *)(lVar18 + 4 + lVar17);
          local_128 = (double)*(float *)(lVar18 + lVar17);
          FUN_140185264(&local_e8,&local_128,&local_108,dVar12);
          lVar11 = *(longlong *)(lVar11 + 0x2d8);
          dVar7 = *(double *)(lVar11 + 0x10 + lVar14);
          dVar8 = *(double *)(lVar11 + 8 + lVar14);
          *(double *)(lVar11 + lVar14) =
               ((dVar3 - dVar6) / dVar12 - *(double *)(lVar11 + lVar14)) * dVar13 +
               *(double *)(lVar11 + lVar14);
          *(double *)(lVar11 + 8 + lVar14) = ((dVar4 - dVar5) / dVar12 - dVar8) * dVar13 + dVar8;
          *(double *)(lVar11 + 0x10 + lVar14) = ((dVar1 - dVar2) / dVar12 - dVar7) * dVar13 + dVar7;
          lVar18 = (longlong)(int)plVar10[1];
          lVar11 = *(longlong *)(*plVar10 + 0x2f0);
          dVar1 = *(double *)(lVar11 + 0x10 + lVar18 * 0x18);
          dVar2 = *(double *)(lVar11 + lVar18 * 0x18);
          dVar3 = *(double *)(lVar11 + 8 + lVar18 * 0x18);
          *(double *)(lVar11 + lVar18 * 0x18) = (local_e8 - dVar2) * dVar13 + dVar2;
          *(double *)(lVar11 + 8 + lVar18 * 0x18) = (local_e0 - dVar3) * dVar13 + dVar3;
          *(double *)(lVar11 + 0x10 + lVar18 * 0x18) = (local_d8 - dVar1) * dVar13 + dVar1;
          fVar21 = *(float *)((longlong)plVar9 + 0x34);
        }
        lVar18 = (longlong)(int)plVar10[1];
        lVar11 = *(longlong *)(*plVar10 + 0x2d8);
        dVar1 = *(double *)(lVar11 + lVar18 * 0x18);
        dVar2 = *(double *)(lVar11 + 8 + lVar18 * 0x18);
        dVar3 = *(double *)(lVar11 + 0x10 + lVar18 * 0x18);
        if (((double)fVar21 < dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) ||
           (lVar11 = *(longlong *)(*plVar10 + 0x2f0), dVar1 = *(double *)(lVar11 + lVar18 * 0x18),
           dVar2 = *(double *)(lVar11 + 8 + lVar18 * 0x18),
           dVar3 = *(double *)(lVar11 + 0x10 + lVar18 * 0x18),
           (double)*(float *)(plVar9 + 7) < dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2)) {
          bVar19 = false;
        }
        else if (local_134 < *(int *)((longlong)plVar9 + 0x3c)) {
          local_134 = *(int *)((longlong)plVar9 + 0x3c);
        }
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)(int)lVar15 * 8 != lVar20);
    if (bVar19) goto LAB_140185245;
  }
LAB_1401851b1:
  iVar16 = 0;
LAB_1401851b3:
  *(int *)((longlong)param_2 + 0x84) = iVar16;
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140185264 FUN_140185264 body=424 status=ok
// SIG undefined FUN_140185264(void)

void FUN_140185264(double *param_1,double *param_2,double *param_3,double param_4)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (param_4 <= 9.99999993922529e-09) {
    dVar14 = 0.0;
    dVar13 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = *param_2;
    dVar13 = param_2[1];
    dVar2 = param_2[2];
    uVar1 = -(ulonglong)
             (0.0 <= param_2[3] * param_3[3] +
                     dVar2 * param_3[2] + dVar3 * *param_3 + dVar13 * param_3[1]);
    dVar14 = (double)(~uVar1 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar1 >> 0x20) & 0x3ff00000) << 0x20);
    auVar6._0_8_ = *param_3 * dVar14 - dVar3;
    auVar6._8_8_ = param_3[1] * dVar14 - dVar13;
    auVar10._0_8_ = param_3[2] * dVar14 - dVar2;
    auVar10._8_8_ = dVar14 * param_3[3] - param_2[3];
    auVar7._8_8_ = param_4;
    auVar7._0_8_ = param_4;
    auVar7 = divpd(auVar6,auVar7);
    auVar11._8_8_ = param_4;
    auVar11._0_8_ = param_4;
    auVar11 = divpd(auVar10,auVar11);
    dVar2 = dVar2 * -1.0;
    dVar4 = param_2[3] * 1.0;
    dVar5 = auVar7._0_8_;
    dVar8 = auVar7._8_8_;
    dVar12 = auVar11._8_8_;
    dVar9 = auVar11._0_8_;
    dVar14 = (dVar2 * dVar8 + (dVar5 * dVar4 * 1.0 - dVar3 * dVar12)) - dVar9 * dVar13 * -1.0;
    dVar13 = (dVar4 * dVar8 + (dVar5 * dVar2 * -1.0 - dVar13 * dVar12)) - dVar9 * dVar3 * 1.0;
    dVar14 = dVar14 + dVar14;
    dVar13 = dVar13 + dVar13;
    dVar3 = dVar4 * dVar9 + dVar8 * dVar3 + (dVar12 * dVar2 - dVar5 * param_2[1]);
    dVar3 = dVar3 + dVar3;
  }
  *param_1 = dVar14;
  param_1[1] = dVar13;
  param_1[2] = dVar3;
  return;
}



// FUNCTION 14018540c FUN_14018540c body=332 status=ok
// SIG undefined FUN_14018540c(void)

undefined8 FUN_14018540c(longlong *param_1)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float *in_stack_00000028;
  float *in_stack_00000030;
  undefined4 *in_stack_00000038;
  
  uVar5 = 0;
  *in_stack_00000028 = 0.0;
  *in_stack_00000030 = 0.0;
  *in_stack_00000038 = 0x7fffffff;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    if (*(char *)(*(longlong *)(*param_1 + 0x4b8) + (longlong)(int)param_1[1]) == '\x01') {
      uVar5 = 0;
    }
    else {
      fVar1 = *(float *)(*(longlong *)(*param_1 + 0x488) + (longlong)(int)param_1[1] * 4);
      lVar3 = FUN_140185558(param_1);
      if (lVar3 == 0) {
        *in_stack_00000028 = DAT_14c75f178 * fVar1;
        puVar4 = &DAT_14c75f174;
        fVar7 = DAT_14c75f17c;
      }
      else {
        *in_stack_00000028 = (float)*(double *)(lVar3 + 0x30) * fVar1;
        puVar4 = (undefined4 *)(lVar3 + 0x50);
        fVar7 = (float)*(double *)(lVar3 + 0x38);
      }
      *in_stack_00000030 = fVar1 * fVar7;
      uVar2 = *puVar4;
      *in_stack_00000038 = uVar2;
      uVar5 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      if (0.0 < DAT_14c993a90) {
        if (*(char *)(*(longlong *)(*param_1 + 0x158) + (longlong)(int)param_1[1]) == '\x01') {
          lVar3 = *(longlong *)(*param_1 + 0x110);
          lVar6 = (longlong)(int)param_1[1] * 0x30;
          dVar8 = *(double *)(lVar3 + 0x28 + lVar6) - *(double *)(lVar3 + 0x10 + lVar6);
          dVar10 = *(double *)(lVar3 + 0x20 + lVar6) - *(double *)(lVar3 + 8 + lVar6);
          dVar9 = *(double *)(lVar3 + 0x18 + lVar6) - *(double *)(lVar3 + lVar6);
          if (dVar9 <= dVar10) {
            dVar9 = dVar10;
          }
          if (dVar9 <= dVar8) {
            dVar9 = dVar8;
          }
          if (DAT_14c993a90 < (float)dVar9) {
            *in_stack_00000030 = (DAT_14c993a90 / (float)dVar9) * *in_stack_00000030;
          }
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 140185558 FUN_140185558 body=85 status=ok
// SIG undefined FUN_140185558(void)

void FUN_140185558(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(*(longlong *)(*param_1 + 0xf8) + 0x10 + (longlong)(int)param_1[1] * 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18);
    puVar3 = (undefined8 *)puVar1[1];
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = puVar1;
    }
    uVar2 = *puVar3;
  }
  FUN_14488dbdf(param_1,uVar2,0xffffffff,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401855ae FUN_1401855ae body=717 status=ok
// SIG undefined FUN_1401855ae(void)

undefined8
FUN_1401855ae(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_3[5];
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  local_80 = *(undefined8 *)(lVar4 + 0x60);
  (**(code **)(*param_1 + 0x18))(param_1,lVar4,1);
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  uVar7 = *(uint *)((longlong)param_3 + 0xc) & 0xffe00000;
  *(uint *)((longlong)param_3 + 0xc) = uVar7 + 0xffff;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined4 *)param_3 = *(undefined4 *)param_4;
  *(undefined4 *)((longlong)param_3 + 4) = *(undefined4 *)((longlong)param_4 + 4);
  uVar8 = *(uint *)((longlong)param_4 + 0xc) & 0xf0000;
  *(uint *)((longlong)param_3 + 0xc) = uVar8 + uVar7 + 0xffff;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  *(uint *)((longlong)param_3 + 0xc) =
       uVar7 + (*(ushort *)((longlong)param_4 + 0xc) | uVar8) + 0x100000;
  puVar1 = param_4 + 2;
  if (param_4[2] == 0) {
    lVar10 = param_4[4];
    if (lVar10 != 0) {
      lVar11 = param_4[3];
      *(longlong *)(lVar10 + 0x20) = lVar11;
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x10) = *puVar1;
      }
      *puVar1 = 0;
      param_4[3] = 0;
      param_4[4] = 0;
    }
    if (*(longlong *)(lVar10 + 0x20) == 0) {
      uVar9 = 0;
    }
    else {
      *(undefined8 **)(*(longlong *)(lVar10 + 0x20) + 0x10) = param_3;
      uVar9 = *(undefined8 *)(lVar10 + 0x20);
    }
    param_3[3] = uVar9;
    param_3[2] = 0;
    param_3[4] = lVar10;
    *(undefined8 **)(lVar10 + 0x20) = param_3;
  }
  else {
    *(undefined8 **)(param_4[2] + 0x18) = param_3;
    *(undefined8 **)(param_4[3] + 0x10) = param_3;
    param_3[2] = param_4[2];
    param_3[3] = param_4[3];
    lVar10 = param_4[4];
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      do {
        *(undefined8 **)(lVar10 + 0x20) = param_3;
        lVar10 = *(longlong *)(lVar10 + 0x18);
      } while (lVar10 != 0);
      uVar9 = param_4[4];
    }
    param_3[4] = uVar9;
  }
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  *(uint *)((longlong)param_4 + 0xc) = *(uint *)((longlong)param_4 + 0xc) & 0xffe00000 | 0xffff;
  param_4[4] = 0;
  param_4[5] = 0;
  *puVar1 = 0;
  param_4[3] = 0;
  param_3[5] = lVar4;
  *(longlong **)(lVar4 + 0x18) = param_1;
  *(undefined1 *)(lVar4 + 0x71) = 2;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_14018587e(lVar4,&local_78,param_3);
  lVar10 = *(longlong *)(*(longlong *)(param_1[0x11] + 0x10) + 0x538);
  iVar2 = (int)param_1[0x19];
  *(uint *)(param_1 + 0x19) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xcc) < iVar2 + 1U) {
    FUN_140186098(param_1 + 0x18,iVar2);
  }
  lVar11 = param_1[0x18];
  lVar12 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar11 + lVar12) = 0;
  ((undefined8 *)(lVar11 + lVar12))[1] = 0;
  puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar12);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar11 + lVar12) = 2;
  *(longlong *)(lVar11 + 0x10 + lVar12) = (longlong)*(int *)(lVar10 + 0x58) + 1;
  *(undefined8 **)(lVar11 + 0x18 + lVar12) = param_3;
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x60);
  uVar3 = *(undefined4 *)param_3;
  lVar10 = param_1[0x17];
  iVar2 = (int)param_1[0x1c];
  lVar11 = (longlong)iVar2;
  *(uint *)(param_1 + 0x1c) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xe4) < iVar2 + 1U) {
    FUN_140185a68(param_1 + 0x1b,iVar2);
  }
  lVar12 = param_1[0x1b];
  *(undefined8 *)(lVar12 + lVar11 * 0x28) = uVar5;
  *(int *)(lVar12 + 8 + lVar11 * 0x28) = (int)local_80;
  *(undefined8 *)(lVar12 + 0x10 + lVar11 * 0x28) = uVar9;
  *(int *)(lVar12 + 0x18 + lVar11 * 0x28) = (int)uVar6;
  *(undefined4 *)(lVar12 + 0x1c + lVar11 * 0x28) = uVar3;
  *(uint *)(lVar12 + 0x20 + lVar11 * 0x28) = (uint)((int)lVar10 != 1);
  (**(code **)(*param_1 + 0x28))(param_1,lVar4,0);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018587e FUN_14018587e body=489 status=ok
// SIG undefined FUN_14018587e(void)

undefined8 FUN_14018587e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar5 + 0xb8) == 1) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x28);
    *(ulonglong *)(param_1 + 0x60) = uVar6;
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x50) + (longlong)*(short *)(param_1 + 0x2c) * 8)
             + 200);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_88 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(lVar5 + 0x50) + (longlong)*(short *)(param_1 + 0x2c) * 8) + 0xd0);
    uVar7 = 0;
    iVar4 = *(int *)(lVar5 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((*(byte *)(lVar3 + 0xdf) & 1) == 0) {
      uVar8 = *(undefined4 *)(lVar3 + 0xc0);
    }
    else {
      uVar8 = 0x400;
      uVar7 = 2;
    }
    local_50 = *(undefined8 *)(lVar3 + 0xd0);
    local_58 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10);
    local_80 = param_2;
    FUN_1400021e4(&local_50,local_68);
    local_b0 = 0;
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,uVar7);
    local_c8 = CONCAT44(local_c8._4_4_,uVar8);
    local_98 = 1;
    local_b8 = 0x7fffffff;
    local_a8 = &local_58;
    iVar4 = FUN_1400f3752(uVar2,lVar3 + 0x58,local_88,-iVar4 & uVar1);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    param_2 = local_80;
    if (iVar4 < 0) {
      local_c0 = &local_78;
      local_78 = 0;
      uStack_70 = 0;
      local_c8 = 0;
      FUN_145763094(iVar4,
                    "CurrentResource->GetParentDevice()->GetParentAdapter()->CreatePlacedResource(CurrentResource->GetDesc(), HeapAndOffset.Heap, HeapAndOffset.Offset, CreateState, ResourceStateMode, D3D12_RESOURCE_STATE_TBD, ClearValue, &NewResource, *Name.ToString())"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Resources.cpp",0x61b);
    }
    *(longlong *)(param_1 + 0x10) = local_58;
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    lVar5 = local_58;
  }
  *(ulonglong *)(param_1 + 0x58) = uVar6 + *(longlong *)(lVar5 + 0x40);
  for (lVar5 = *(longlong *)(param_1 + 0x40); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
    lVar3 = *(longlong *)(lVar5 + 0x28);
    *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  }
  FUN_14017ef6c(*(undefined8 *)(param_1 + 8),param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140185a68 FUN_140185a68 body=373 status=ok
// SIG undefined FUN_140185a68(void)

void FUN_140185a68(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140185af3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140185af3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140185c36 FUN_140185c36 body=99 status=ok
// SIG undefined FUN_140185c36(void)

undefined4 FUN_140185c36(longlong param_1,float param_2)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(char *)(param_1 + 0xf8) == '\x01') {
      param_2 = *(float *)(param_1 + 0x100) - param_2;
      *(float *)(param_1 + 0x100) = param_2;
      if (param_2 <= 0.0) {
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xfc);
        bifrost::experimental::processCallbacks();
      }
    }
    else {
      bifrost::tick((double)param_2);
    }
  }
  return CONCAT31((int3)(*(uint *)(param_1 + 8) >> 8),(*(uint *)(param_1 + 8) & 0x10) == 0);
}



// FUNCTION 140185c9a FUN_140185c9a body=29 status=ok
// SIG undefined FUN_140185c9a(void)

undefined8 FUN_140185c9a(longlong param_1,undefined8 param_2)

{
  FUN_140185cb8(param_1 + 0x650);
  return param_2;
}



// FUNCTION 140185cb8 FUN_140185cb8 body=283 status=ok
// SIG undefined FUN_140185cb8(void)

double * FUN_140185cb8(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_88 [40];
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  char local_30;
  undefined7 uStack_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_2 + 6) = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x48;
    do {
      FUN_140185dd4(lVar1,&local_60);
      if (local_30 == '\0' || *(char *)(param_2 + 6) == '\0') {
        if (local_30 != '\0') {
          param_2[6] = (double)CONCAT71(uStack_2f,local_30);
          param_2[4] = local_40;
          param_2[5] = dStack_38;
          param_2[2] = local_50;
          param_2[3] = dStack_48;
          *param_2 = local_60;
          param_2[1] = dStack_58;
        }
      }
      else {
        dVar3 = *param_2;
        if (local_60 <= *param_2) {
          dVar3 = local_60;
        }
        *param_2 = dVar3;
        dVar3 = param_2[1];
        if (dStack_58 <= param_2[1]) {
          dVar3 = dStack_58;
        }
        param_2[1] = dVar3;
        dVar3 = param_2[2];
        if (local_50 <= param_2[2]) {
          dVar3 = local_50;
        }
        param_2[2] = dVar3;
        dVar3 = param_2[3];
        if (param_2[3] <= dStack_48) {
          dVar3 = dStack_48;
        }
        param_2[3] = dVar3;
        dVar3 = param_2[4];
        if (param_2[4] <= local_40) {
          dVar3 = local_40;
        }
        param_2[4] = dVar3;
        dVar3 = param_2[5];
        if (param_2[5] <= dStack_38) {
          dVar3 = dStack_38;
        }
        param_2[5] = dVar3;
      }
      lVar1 = lVar1 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140185dd4 FUN_140185dd4 body=217 status=ok
// SIG undefined FUN_140185dd4(void)

double * FUN_140185dd4(longlong *param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (param_1[3] != 0)) && (*(int *)(lVar2 + 0x20) != 0)) &&
     ((cVar4 = FUN_144b3e610(lVar2 + 0x90), cVar4 != '\0' && (param_1[6] != 0)))) {
    lVar2 = *param_1;
    fVar1 = *(float *)(lVar2 + 0x98);
    fVar3 = *(float *)(lVar2 + 0x94);
    *param_2 = (double)*(float *)(lVar2 + 0x90) * 100.0;
    param_2[1] = (double)fVar3 * 100.0;
    param_2[2] = (double)fVar1 * 100.0;
    fVar3 = *(float *)(lVar2 + 0xa4);
    fVar1 = *(float *)(lVar2 + 0xa8);
    param_2[3] = (double)*(float *)(lVar2 + 0xa0) * 100.0;
    param_2[4] = (double)fVar3 * 100.0;
    param_2[5] = (double)fVar1 * 100.0;
    *(undefined1 *)(param_2 + 6) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 140185eae FUN_140185eae body=143 status=ok
// SIG undefined FUN_140185eae(void)

bool FUN_140185eae(longlong *param_1,longlong *param_2,int *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140185f3e();
  iVar1 = (int)param_1[1];
  if (param_4 < iVar1) {
    lVar5 = (longlong)param_4;
    bVar3 = true;
    do {
      lVar5 = lVar5 + 1;
      lVar2 = *(longlong *)(*param_1 + -8 + lVar5 * 8);
      if (lVar2 != 0) {
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          if (param_2 != (longlong *)0x0) {
            *param_2 = lVar2;
          }
          if (param_3 == (int *)0x0) {
            return bVar3;
          }
          *param_3 = param_4;
          return bVar3;
        }
      }
      bVar3 = lVar5 < iVar1;
      param_4 = param_4 + 1;
    } while (iVar1 != param_4);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 140185f3e FUN_140185f3e body=221 status=ok
// SIG undefined FUN_140185f3e(void)

longlong FUN_140185f3e(void)

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
  if (DAT_14caa6410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14325ba7c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147461b5d;
    local_40 = FUN_14325bc3a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeInfoMap",&DAT_14caa6410,&DAT_147461b5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa6410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018601c FUN_14018601c body=123 status=ok
// SIG undefined FUN_14018601c(void)

void FUN_14018601c(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x100000;
  if (*(char *)(param_1 + 0xea) == '\0') {
    LOCK();
    DAT_14ca84ee0 = DAT_14ca84ee0 - *(longlong *)(param_1 + 0xe0);
    UNLOCK();
  }
  FUN_14488df26(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_14488e164(param_1 + 0x78,param_2 + 0x78);
  return;
}



// FUNCTION 140186098 FUN_140186098 body=255 status=ok
// SIG undefined FUN_140186098(void)

void FUN_140186098(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140186198 FUN_140186198 body=91 status=ok
// SIG undefined FUN_140186198(void)

void FUN_140186198(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1401861f4(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1401861f4(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1401861f4 FUN_1401861f4 body=160 status=ok
// SIG undefined FUN_1401861f4(void)

void FUN_1401861f4(longlong *param_1,undefined4 param_2)

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
        goto LAB_14018627f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14018627f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140186294 FUN_140186294 body=348 status=ok
// SIG undefined FUN_140186294(void)

void FUN_140186294(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x41) {
    uVar6 = 0x40;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x40 < *(uint *)(param_1 + 0x8c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140186325;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140186325:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 1)) {
      uVar6 = uVar4 >> 1 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar6;
  FUN_1401863f0(param_1,param_2,uVar6,2);
  return;
}



// FUNCTION 1401863f0 FUN_1401863f0 body=139 status=ok
// SIG undefined FUN_1401863f0(void)

void FUN_1401863f0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14018647c FUN_14018647c body=63 status=ok
// SIG undefined FUN_14018647c(void)

undefined8 * FUN_14018647c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae0a310;
  FUN_1401864bc(param_1 + 0x24);
  FUN_140137a40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401864bc FUN_1401864bc body=61 status=ok
// SIG undefined FUN_1401864bc(void)

void FUN_1401864bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_1401864f9(lVar1,*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401864f9 FUN_1401864f9 body=89 status=ok
// SIG undefined FUN_1401864f9(void)

void FUN_1401864f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-0xd];
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
      plVar4 = plVar4 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140186552 FUN_140186552 body=85 status=ok
// SIG undefined FUN_140186552(void)

void FUN_140186552(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1401865a8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401865a8 FUN_1401865a8 body=450 status=ok
// SIG undefined FUN_1401865a8(void)

void FUN_1401865a8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401866c3:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140186700:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401865fe;
LAB_1401865f3:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401865fe:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014018662a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140186680:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140186700;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401866c3;
code_r0x00014018662a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140186680;
    }
  }
  goto LAB_1401865f3;
}



// FUNCTION 140186776 FUN_140186776 body=143 status=ok
// SIG undefined FUN_140186776(void)

void FUN_140186776(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1410ef2be(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined1 *)((longlong)iVar1 * 0x10 + *param_1 + 10);
      do {
        *(undefined2 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d99db0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140186806 FUN_140186806 body=29 status=ok
// SIG undefined FUN_140186806(void)

void FUN_140186806(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140186824 FUN_140186824 body=31 status=ok
// SIG undefined FUN_140186824(void)

undefined8 FUN_140186824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140186866 FUN_140186866 body=242 status=ok
// SIG undefined FUN_140186866(void)

ulonglong FUN_140186866(ulonglong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  char *_Str2;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  size_t _MaxCount;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Str2 = (char *)*param_2;
  _MaxCount = (size_t)*(int *)(param_2 + 1);
  uVar2 = *param_1;
  iVar3 = (int)param_1[1];
  if (_MaxCount == 1) {
    local_44 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_50 = uVar2;
    local_48 = iVar3;
    uVar4 = FUN_1427916e0(&local_50,*_Str2);
    uVar5 = (ulonglong)uVar4;
  }
  else {
    uVar5 = 0xffffffff;
    if (*(int *)(param_2 + 1) <= iVar3) {
      uVar7 = ((longlong)iVar3 + uVar2) - _MaxCount;
      if (param_3 == 0) {
        if (uVar2 <= uVar7) {
          uVar6 = 0;
          do {
            iVar3 = strncmp((char *)(uVar2 + uVar6),_Str2,_MaxCount);
            if (iVar3 == 0) goto LAB_140186954;
            lVar1 = uVar2 + uVar6;
            uVar6 = uVar6 + 1;
          } while (lVar1 + 1U <= uVar7);
        }
      }
      else if (uVar2 <= uVar7) {
        uVar6 = 0;
        do {
          iVar3 = FUN_14018695a(uVar2 + uVar6,_Str2,_MaxCount);
          if (iVar3 == 0) goto LAB_140186954;
          lVar1 = uVar2 + uVar6;
          uVar6 = uVar6 + 1;
        } while (lVar1 + 1U <= uVar7);
      }
    }
  }
LAB_1401868dc:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_140186954:
  uVar5 = uVar6 & 0xffffffff;
  goto LAB_1401868dc;
}



// FUNCTION 14018695a FUN_14018695a body=97 status=ok
// SIG undefined FUN_14018695a(void)

int FUN_14018695a(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar4 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar4);
    bVar2 = *(byte *)(param_2 + lVar4);
    uVar3 = (uint)bVar1;
    if (bVar1 == bVar2) {
      if (param_3 == 1 || uVar3 == 0) {
        return 0;
      }
    }
    else {
      if (0x7f < (bVar2 | bVar1)) {
LAB_1401869b6:
        return uVar3 - bVar2;
      }
      uVar3 = (uint)(byte)(&DAT_149e05da0)[bVar1];
      bVar2 = (&DAT_149e05da0)[bVar2];
      if ((&DAT_149e05da0)[bVar1] != bVar2) goto LAB_1401869b6;
      if (param_3 == 1) {
        return 0;
      }
    }
    param_3 = param_3 + -1;
    lVar4 = lVar4 + 1;
  } while( true );
}



// FUNCTION 1401869bc FUN_1401869bc body=81 status=ok
// SIG undefined FUN_1401869bc(void)

byte FUN_1401869bc(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x4b0))();
  bVar2 = false;
  if ((lVar1 != 0) && ((char)param_1[0x134] == '\0')) {
    bVar2 = *(int *)(lVar1 + 0x60) != 0;
  }
  if ((char)param_1[0x134] == '\0') {
    bVar3 = false;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x4b0))(param_1);
    bVar3 = lVar1 != 0;
  }
  return bVar2 | bVar3;
}



// FUNCTION 140186a0e FUN_140186a0e body=114 status=ok
// SIG undefined FUN_140186a0e(void)

undefined8 FUN_140186a0e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar3 = FUN_140186a80();
    lVar1 = *(longlong *)(param_1 + 0xf0);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && (*(char *)(*(longlong *)(lVar1 + 0x1e70) + 0x4c) != '\x01')))) {
      puVar4 = (undefined8 *)(lVar1 + 0x1de8);
      goto LAB_140186a6b;
    }
  }
  puVar4 = (undefined8 *)(param_1 + 0x938);
LAB_140186a6b:
  return *puVar4;
}



// FUNCTION 140186a80 FUN_140186a80 body=228 status=ok
// SIG undefined FUN_140186a80(void)

longlong FUN_140186a80(void)

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
  if (DAT_14cb95790 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144ae7c60;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14637144c;
    local_38 = &LAB_148a365bd;
    local_40 = &LAB_146579513;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x1e78;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"IpConnection",&DAT_14cb95790,&DAT_148a365bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95790;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140186b65 FUN_140186b65 body=284 status=ok
// SIG undefined FUN_140186b65(void)

void FUN_140186b65(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined8 auStack_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_d0,0,0x98);
  FUN_140186c82();
  auStack_c8[DAT_14c9ed130] = &DAT_14c9ed0e8;
  auStack_68[DAT_14c9ed130] = 0;
  FUN_140186d9e();
  auStack_c8[DAT_14c9ed258] = &DAT_14c9ed210;
  auStack_68[DAT_14c9ed258] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,local_d0,param_2);
  if (cVar1 != '\0') {
    if (local_138 != 0) {
      *param_3 = local_138;
      param_3[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_4 = lStack_120;
      param_4[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140186c82 FUN_140186c82 body=284 status=ok
// SIG undefined FUN_140186c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140186c82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ed190) {
    FUN_144b3d300(&DAT_14c9ed190);
    if (DAT_14c9ed190 == -1) {
      FUN_1456d3748();
      FUN_140db5666(&DAT_14c9ed0e8,2,&DAT_14c9ed080,L"FLumenFrontLayerTranslucencyGBufferVS",
                    L"/Engine/Private/Lumen/LumenFrontLayerTranslucency.usf",L"MainVS",0,1,
                    FUN_1471dcb90,FUN_1471dcb68,FUN_141767e22,&LAB_1471dcb64,&LAB_14712ac0c,
                    &LAB_14712ac08,0x108,0);
      _DAT_14c9ed0e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142d0ca7e);
      _Init_thread_footer(&DAT_14c9ed190);
    }
  }
  return &DAT_14c9ed0e8;
}



// FUNCTION 140186d9e FUN_140186d9e body=284 status=ok
// SIG undefined FUN_140186d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140186d9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ed2b8) {
    FUN_144b3d300(&DAT_14c9ed2b8);
    if (DAT_14c9ed2b8 == -1) {
      FUN_1456d3892();
      FUN_140db5666(&DAT_14c9ed210,2,&DAT_14c9ed1a8,L"FLumenFrontLayerTranslucencyGBufferPS",
                    L"/Engine/Private/Lumen/LumenFrontLayerTranslucency.usf",L"MainPS",3,1,
                    FUN_1471dcc42,FUN_1471dcc1a,FUN_141767e56,&LAB_1471dcc16,&LAB_14712ac0c,
                    &LAB_14712ac08,0x108,0);
      _DAT_14c9ed210 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142d0ca8a);
      _Init_thread_footer(&DAT_14c9ed2b8);
    }
  }
  return &DAT_14c9ed210;
}



// FUNCTION 140186ec5 FUN_140186ec5 body=19 status=ok
// SIG undefined FUN_140186ec5(void)

void FUN_140186ec5(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140186ed8 FUN_140186ed8 body=270 status=ok
// SIG undefined FUN_140186ed8(void)

longlong FUN_140186ed8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x20);
    pvVar2 = *(void **)(param_2 + 0x18);
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      FUN_1447bda9e((undefined8 *)(param_1 + 0x18),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  FUN_140186fe6(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x58);
    pvVar2 = *(void **)(param_2 + 0x50);
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      FUN_1447bda9e((undefined8 *)(param_1 + 0x50),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x50),pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  FUN_140186fe6(param_1 + 0x60,param_2 + 0x60);
  puVar4 = (undefined8 *)(param_2 + 0x70);
  puVar5 = (undefined8 *)(param_1 + 0x70);
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 140186fe6 FUN_140186fe6 body=93 status=ok
// SIG undefined FUN_140186fe6(void)

undefined8 * FUN_140186fe6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144724f11(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1456d3af0(param_1,iVar1);
      FUN_1456d39db(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140187044 FUN_140187044 body=1687 status=ok
// SIG undefined FUN_140187044(void)

int * FUN_140187044(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  int *_Src;
  undefined4 *puVar2;
  void *_Dst;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_14488f93c(param_1,iVar17);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar10 = iVar21 + 1;
    iVar14 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar14 = iVar21;
    }
    if (iVar14 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        iVar4 = iVar21;
        if (iVar21 + 0x20U < 0xa0) {
          iVar10 = 0x80;
        }
        else {
          uVar20 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar20) {
              uVar5 = uVar20;
            }
          }
          else {
            uVar5 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar5 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar13 + 0xf);
              if (uVar5 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar22 = 0x32;
                  if (0x32 < bVar9) {
                    uVar22 = (ulonglong)bVar9;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_14018753d;
                    lVar8 = uVar22 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar8 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar16 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
              iVar4 = (int)param_1[5];
            }
          }
LAB_14018753d:
          iVar7 = (int)(uVar13 >> 2);
          iVar10 = -0x20;
          if ((int)uVar20 <= iVar7) {
            iVar10 = iVar7 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar12,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar8 = (longlong)iVar17;
    iVar21 = *(int *)(*param_1 + 4 + lVar8 * 0x60);
    *(int *)(param_1 + 6) = iVar21;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x60) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar20 = 1;
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar21 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar21 = iVar17;
  }
  puVar11[iVar21 >> 5] = puVar11[iVar21 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  _Src = (int *)(*param_1 + lVar8 * 0x60);
  uVar3 = param_4[1];
  puVar2 = (undefined4 *)(*param_1 + lVar8 * 0x60);
  *puVar2 = *(undefined4 *)*param_4;
  FUN_1401876dc(puVar2 + 2,uVar3);
  puVar2[0x16] = 0xffffffff;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar12 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar12 = (longlong *)param_1[8];
      }
      iVar21 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar21 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar21 * 0x60);
          if (*(int *)(*param_1 + (longlong)iVar21 * 0x60) == *_Src) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_144aa7c3c((longlong)_Dst + 8);
            memmove(_Dst,_Src,0x58);
            FUN_1470a3e2c(param_1,iVar17);
            goto LAB_1401873fc;
          }
          iVar21 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar21 != -1);
      }
    }
    if (3 < uVar5) {
      uVar13 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar20 = 1 << ((byte)lVar8 & 0x1f);
    }
  }
  if (((int)uVar5 < 1) || ((int)uVar20 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    _Src[0x17] = param_3;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[0x16] = *(int *)((longlong)plVar12 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar17;
    goto LAB_1401873fc;
  }
  *(uint *)(param_1 + 9) = uVar20;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar20 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar20 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_140187203:
    uVar5 = 0;
    do {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar15;
      }
      *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar20 != uVar5);
  }
  else {
    if (uVar20 == 0) goto LAB_1401873fc;
    FUN_1446efa72(plVar12,0,uVar20,4);
    if (0 < (int)uVar20) goto LAB_140187203;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar13 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar20 = *puVar11;
    if (uVar20 == 0) {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      uVar13 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar13) goto LAB_1401873fc;
        iVar10 = iVar10 + 0x20;
        uVar20 = puVar11[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar20 & uVar20);
    uVar22 = uVar16 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar4) {
      iVar4 = iVar21;
    }
  }
  if (iVar4 < iVar21) {
    uVar20 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar19 = (longlong)iVar4 * 0x60;
      uVar22 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar8 + lVar19);
      iVar21 = (int)uVar22;
      *(int *)(lVar8 + 0x5c + lVar19) = iVar21;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar15;
      }
      *(undefined4 *)(lVar8 + 0x58 + lVar19) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar15;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar20 = ~(uint)uVar16 & uVar20;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar8 = (longlong)iVar4;
      uVar5 = puVar11[lVar8] & uVar20;
      if (uVar5 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar7 = iVar14;
        if (iVar14 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar14 <= iVar4) break;
        lVar19 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar11[lVar8 + lVar19 + 1];
          if (uVar5 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar7 - lVar8 == lVar19) goto LAB_1401873fc;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar19 + 1);
        uVar20 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar22 = uVar16 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar21);
  }
LAB_1401873fc:
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 1401876dc FUN_1401876dc body=125 status=ok
// SIG undefined FUN_1401876dc(void)

undefined8 * FUN_1401876dc(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14018775a();
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



// FUNCTION 14018775a FUN_14018775a body=150 status=ok
// SIG undefined FUN_14018775a(void)

longlong * FUN_14018775a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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



// FUNCTION 1401877f0 FUN_1401877f0 body=169 status=ok
// SIG undefined FUN_1401877f0(void)

undefined8 FUN_1401877f0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0xb0) == param_2) {
          FUN_1456d3b66(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xb0 + *param_1 + 0xa0);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14018789a FUN_14018789a body=152 status=ok
// SIG undefined FUN_14018789a(void)

void FUN_14018789a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140187932(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
      puVar2 = puVar2 + 7;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cae484(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140187932 FUN_140187932 body=369 status=ok
// SIG undefined FUN_140187932(void)

void FUN_140187932(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1401879b9;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_1401879b9:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140187aa4 FUN_140187aa4 body=90 status=ok
// SIG undefined FUN_140187aa4(void)

undefined8 * FUN_140187aa4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 140187afe FUN_140187afe body=156 status=ok
// SIG undefined FUN_140187afe(void)

longlong FUN_140187afe(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_140187b9a();
  if (DAT_14caa0fa8 != DAT_14caa0fd4) {
    lVar2 = *param_1;
    puVar4 = &DAT_14caa0fd8;
    if (DAT_14caa0fe0 != (undefined *)0x0) {
      puVar4 = DAT_14caa0fe0;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14caa0fe8 - 1U &
                              (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      while (plVar1 = (longlong *)(DAT_14caa0fa0 + (longlong)iVar3 * 0x18), *plVar1 != lVar2) {
        iVar3 = (int)plVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 140187b9a FUN_140187b9a body=152 status=ok
// SIG undefined FUN_140187b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140187b9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0ff0) {
    FUN_144b3d300(&DAT_14caa0ff0);
    if (DAT_14caa0ff0 == -1) {
      DAT_14caa0fc0 = 0;
      DAT_14caa0fc8 = 0;
      DAT_14caa0fa0 = 0;
      _DAT_14caa0fa8 = 0;
      _DAT_14caa0fcc = 0xffffffff00000080;
      DAT_14caa0fd4 = 0;
      DAT_14caa0fe0 = 0;
      DAT_14caa0fe8 = 0;
      atexit(FUN_14323e144);
      _Init_thread_footer(&DAT_14caa0ff0);
      return;
    }
  }
  return;
}



// FUNCTION 140187c32 FUN_140187c32 body=423 status=ok
// SIG undefined FUN_140187c32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140187c32(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (DAT_14cb3d9e0 == 0) {
    DAT_14cb3d9e0 = DAT_14c9c0de0;
    _DAT_14cb3d9e8 = DAT_14cb3e340;
    _DAT_14cb3d9f0 = DAT_14ca214c8;
    _DAT_14cb3d9f8 = DAT_14ca30ff8;
    _DAT_14cb3da00 = DAT_14cb3e358;
    _DAT_14cb3da08 = DAT_14caaffe0;
    _DAT_14cb3da10 = DAT_14cab0058;
    _DAT_14cb3da18 = DAT_14c9c9d38;
  }
  lVar5 = *(longlong *)(param_2 + 0x48);
  uVar8 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar9 = (ulonglong)uVar8;
  FUN_140187dda();
  *(uint *)(param_2 + 0x50) = uVar8 + _DAT_14cb3e4cc;
  cVar3 = *(char *)(lVar5 + 0x5a);
  cVar4 = *(char *)(lVar5 + 0x59);
  lVar6 = *(longlong *)(param_2 + 0x38);
  *(float *)(lVar6 + uVar9) = (float)(int)*(char *)(lVar5 + 0x58);
  *(float *)(lVar6 + 4 + uVar9) = (float)(int)cVar4;
  *(float *)(lVar6 + 8 + uVar9) = (float)(int)cVar3;
  dVar1 = *(double *)(lVar5 + 0x20);
  dVar2 = *(double *)(lVar5 + 0x18);
  *(float *)(lVar6 + 0x10 + uVar9) = (float)*(double *)(lVar5 + 0x10);
  *(float *)(lVar6 + 0x14 + uVar9) = (float)dVar2;
  *(float *)(lVar6 + 0x18 + uVar9) = (float)dVar1;
  dVar1 = *(double *)(lVar5 + 0x38);
  dVar2 = *(double *)(lVar5 + 0x30);
  *(float *)(lVar6 + 0x20 + uVar9) = (float)*(double *)(lVar5 + 0x28);
  *(float *)(lVar6 + 0x24 + uVar9) = (float)dVar2;
  *(float *)(lVar6 + 0x28 + uVar9) = (float)dVar1;
  dVar1 = *(double *)(lVar5 + 0x50);
  dVar2 = *(double *)(lVar5 + 0x48);
  *(float *)(lVar6 + 0x30 + uVar9) = (float)*(double *)(lVar5 + 0x40);
  *(float *)(lVar6 + 0x34 + uVar9) = (float)dVar2;
  *(float *)(lVar6 + 0x38 + uVar9) = (float)dVar1;
  puVar7 = (undefined8 *)(DAT_14ca94db8 + 0x10);
  if (*(longlong *)(lVar5 + 0x60) != 0) {
    puVar7 = (undefined8 *)(lVar5 + 0x60);
  }
  *(undefined8 *)(lVar6 + 0x40 + uVar9) = *puVar7;
  *(undefined8 *)(lVar6 + 0x48 + uVar9) =
       *(undefined8 *)
        ((longlong)&DAT_14cb3d9e0 +
        (ulonglong)
        ((uint)*(byte *)(lVar5 + 0x5a) << 5 |
        (uint)*(byte *)(lVar5 + 0x59) * 0x10 + (uint)*(byte *)(lVar5 + 0x58) * 8));
  return;
}



// FUNCTION 140187dda FUN_140187dda body=258 status=ok
// SIG undefined FUN_140187dda(void)

void FUN_140187dda(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e510) {
    FUN_144b3d300(&DAT_14cb3e510);
    if (DAT_14cb3e510 == -1) {
      FUN_1456d3ca6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3e490,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a7e72d);
      _Init_thread_footer(&DAT_14cb3e510);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140187ede FUN_140187ede body=70 status=ok
// SIG undefined FUN_140187ede(void)

void FUN_140187ede(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e05060;
  if (param_1[0xb] != 0) {
    FUN_140187fa0(param_1[0xb],1,0);
    plVar1 = (longlong *)param_1[0xb];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  FUN_1400e0f74(param_1);
  return;
}



// FUNCTION 140187f24 FUN_140187f24 body=38 status=ok
// SIG undefined FUN_140187f24(void)

undefined8 FUN_140187f24(undefined8 param_1,int param_2)

{
  FUN_140187f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140187f4a FUN_140187f4a body=85 status=ok
// SIG undefined FUN_140187f4a(void)

void FUN_140187f4a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e06640;
  FUN_14018802a(param_1[3]);
  param_1[3] = 0;
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140187f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 140187fa0 FUN_140187fa0 body=138 status=ok
// SIG undefined FUN_140187fa0(void)

void FUN_140187fa0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 != '\0') {
    plVar1 = (longlong *)param_1[4];
    if (plVar1 == (longlong *)0x0) {
      if ((int)param_1[2] != 0) {
        (**(code **)(*param_1 + 0x30))(param_1);
        LOCK();
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        UNLOCK();
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x30))(param_1);
        LOCK();
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        UNLOCK();
        if ((longlong *)param_1[3] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[3] + 0x10))();
        }
        goto LAB_14018801c;
      }
    }
  }
  if (param_1[4] == 0) {
    return;
  }
  (**(code **)(*(longlong *)param_1[3] + 0x20))((longlong *)param_1[3],0xffffffff,0);
LAB_14018801c:
  param_1[4] = 0;
  return;
}



// FUNCTION 14018802a FUN_14018802a body=854 status=ok
// SIG undefined FUN_14018802a(void)

void FUN_14018802a(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  cVar6 = (**(code **)(*param_1 + 8))();
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (cVar6 == '\0') {
    if ((iVar2 < DAT_14c83f280) && (FUN_144b3d300(&DAT_14c83f280), DAT_14c83f280 == -1)) {
      DAT_14c83f200 = 0;
      DAT_14c83f240 = &DAT_14c83f200;
      atexit(FUN_142750901);
      _Init_thread_footer(&DAT_14c83f280);
    }
    puVar5 = DAT_14c83f240;
    plVar3 = (longlong *)param_1[2];
    (**(code **)(*plVar3 + 0x18))();
    uVar7 = FUN_14493c560();
    if (uVar7 == 0) {
      uVar8 = 0;
      uVar11 = 0;
      lVar10 = 0;
    }
    else {
      uVar11 = (ulonglong)(uVar7 >> 0xe);
      uVar8 = uVar7 & 0x3fff;
      lVar10 = (ulonglong)(uVar8 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar11 * 8);
    }
    *(longlong **)(lVar10 + 8) = plVar3;
    do {
      uVar4 = *puVar5;
      uVar9 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar9 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14274643a();
      }
      if (uVar7 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(&DAT_14c833b00 + uVar11 * 8) + (ulonglong)(uVar8 * 0x18);
      }
      *(uint *)(lVar10 + 0x10) = (uint)uVar4 & 0x3ffffff;
      LOCK();
      uVar1 = *puVar5;
      if (uVar4 == uVar1) {
        *puVar5 = uVar9 | uVar7;
      }
      UNLOCK();
    } while (uVar4 != uVar1);
  }
  else {
    if ((iVar2 < DAT_14c83f340) && (FUN_144b3d300(&DAT_14c83f340), DAT_14c83f340 == -1)) {
      DAT_14c83f2c0 = 0;
      DAT_14c83f300 = &DAT_14c83f2c0;
      atexit(FUN_1427508c2);
      _Init_thread_footer(&DAT_14c83f340);
    }
    puVar5 = DAT_14c83f300;
    plVar3 = (longlong *)param_1[2];
    (**(code **)(*plVar3 + 0x18))();
    uVar7 = FUN_14493c560();
    if (uVar7 == 0) {
      uVar8 = 0;
      uVar11 = 0;
      lVar10 = 0;
    }
    else {
      uVar11 = (ulonglong)(uVar7 >> 0xe);
      uVar8 = uVar7 & 0x3fff;
      lVar10 = (ulonglong)(uVar8 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar11 * 8);
    }
    *(longlong **)(lVar10 + 8) = plVar3;
    do {
      uVar4 = *puVar5;
      uVar9 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar9 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14274643a();
      }
      if (uVar7 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(&DAT_14c833b00 + uVar11 * 8) + (ulonglong)(uVar8 * 0x18);
      }
      *(uint *)(lVar10 + 0x10) = (uint)uVar4 & 0x3ffffff;
      LOCK();
      uVar1 = *puVar5;
      if (uVar4 == uVar1) {
        *puVar5 = uVar9 | uVar7;
      }
      UNLOCK();
    } while (uVar4 != uVar1);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14018838c FUN_14018838c body=39 status=ok
// SIG undefined FUN_14018838c(void)

undefined8 FUN_14018838c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    uVar1 = 1;
  }
  else {
    if ((char)param_1[0xb] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001401883a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1 + 8,param_2,0);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1401883b4 FUN_1401883b4 body=458 status=ok
// SIG undefined FUN_1401883b4(void)

ulonglong FUN_1401883b4(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  longlong local_88;
  undefined8 *local_80;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_40;
  char local_3f;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((&DAT_149e1da58)[*(byte *)(param_2 + 0x10)] == '\x01') {
    if (*(char *)(param_1 + 0x88) == '\x01') {
      uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (*(int *)(param_1 + 0x68) < 2) {
        param_4 = (longlong *)CONCAT71(uVar5,1);
      }
      else {
        bVar4 = (**(code **)*param_3)(param_3,param_1 + 0x60,*(undefined1 *)(param_1 + 0x80));
        param_4 = (longlong *)CONCAT71(uVar5,*(char *)(param_1 + 0x81) != '\0' ^ bVar4);
      }
      goto LAB_14018841f;
    }
    local_88 = param_1 + 0x238;
    local_90 = &PTR_FUN_149e35110;
    local_80 = param_3;
    FUN_14488fa50(&local_78);
    if ((&DAT_149e1dc64)[local_38] == '\x01') {
      uVar5 = (undefined7)((ulonglong)param_4 >> 8);
      if ((((local_78 == DAT_14c75d628) && (iStack_74 == DAT_14c75d62c)) &&
          (local_70 == DAT_14c75d630)) && (local_6c == DAT_14c75d634)) {
        param_4 = (longlong *)CONCAT71(uVar5,local_60[0]);
LAB_1401884c4:
        bVar3 = false;
      }
      else {
        bVar3 = true;
        if (((local_78 != DAT_14c75d558) || (iStack_74 != DAT_14c75d55c)) ||
           (local_70 != DAT_14c75d560)) goto LAB_140188572;
        if (local_6c == DAT_14c75d564) {
          if (local_58 < 2) {
            param_4 = (longlong *)CONCAT71(uVar5,1);
          }
          else {
            bVar4 = (**(code **)*param_3)(param_3,local_60,local_40);
            param_4 = (longlong *)
                      CONCAT71((int7)((ulonglong)local_60 >> 8),local_3f != '\0' ^ bVar4);
          }
          goto LAB_1401884c4;
        }
      }
    }
    else {
      if (param_4 != (longlong *)0x0) {
        plVar2 = (longlong *)CONCAT44(iStack_74,local_78);
        plVar1 = (longlong *)*param_4;
        if (plVar1 != plVar2) {
          *param_4 = (longlong)plVar2;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
        *(int *)(param_4 + 1) = local_70;
      }
LAB_140188572:
      bVar3 = true;
    }
    (*(code *)(&PTR_LAB_149e1d9c0)[local_38])();
    if (!bVar3) goto LAB_14018841f;
  }
  param_4 = (longlong *)0x0;
LAB_14018841f:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (ulonglong)param_4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140188580 FUN_140188580 body=275 status=ok
// SIG undefined FUN_140188580(void)

void FUN_140188580(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140188694 FUN_140188694 body=255 status=ok
// SIG undefined FUN_140188694(void)

void FUN_140188694(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140188794 FUN_140188794 body=232 status=ok
// SIG undefined FUN_140188794(void)

undefined8 FUN_140188794(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  iVar3 = *(int *)(param_3 + 1);
  uVar4 = *param_3;
  local_38 = iVar3;
  if (iVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_14010d3c6(&local_40,iVar3,0);
    FUN_14010d359(local_40,uVar4,iVar3);
  }
  local_48 = 0;
  FUN_14010c062(param_1,param_2,&local_40,0);
  FUN_14007f2db(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_2 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401888a4 FUN_1401888a4 body=279 status=ok
// SIG undefined FUN_1401888a4(void)

undefined8 FUN_1401888a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  
  lVar3 = *(longlong *)(param_2 + 0x18);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar10 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar10 != -1) {
      plVar9 = (longlong *)(param_1 + 0x20);
      lVar4 = *plVar9;
      do {
        lVar8 = (longlong)iVar10 * 0x20;
        lVar2 = lVar4 + lVar8;
        if (*(longlong *)(lVar4 + lVar8) == lVar3) {
          iVar11 = *(int *)(lVar6 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          if (iVar11 == iVar10) {
            piVar7 = (int *)(lVar6 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          }
          else {
            do {
              piVar7 = (int *)((longlong)iVar11 * 0x20 + lVar4 + 0x18);
              iVar11 = *piVar7;
            } while (iVar11 != iVar10);
          }
          *piVar7 = *(int *)(lVar2 + 0x18);
          plVar5 = *(longlong **)(*plVar9 + 0x10 + lVar8);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar7 = (int *)((longlong)plVar5 + 0xc);
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (*piVar7 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_1401889c6(plVar9,iVar10);
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x18);
      } while (iVar10 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  return 1;
}



// FUNCTION 1401889bc FUN_1401889bc body=9 status=ok
// SIG undefined FUN_1401889bc(void)

void FUN_1401889bc(longlong param_1)

{
  FUN_140188a38(param_1 + 0x10);
  return;
}



// FUNCTION 1401889c6 FUN_1401889c6 body=114 status=ok
// SIG undefined FUN_1401889c6(void)

void FUN_1401889c6(longlong *param_1,int param_2)

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



// FUNCTION 140188a38 FUN_140188a38 body=244 status=ok
// SIG undefined FUN_140188a38(void)

void FUN_140188a38(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14acb52c0;
  iVar3 = *(int *)(param_1 + 4);
  if ((longlong)iVar3 != 0) {
    lVar4 = param_1[3];
    lVar7 = 0;
    do {
      if ((*(longlong **)(lVar4 + lVar7) != (longlong *)0x0) &&
         (plVar6 = (longlong *)**(longlong **)(lVar4 + lVar7), plVar6 != (longlong *)0x0)) {
        if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
          plVar6 = (longlong *)**(undefined8 **)(lVar4 + lVar7);
          if (plVar6 != (longlong *)0x0) goto LAB_140188a7f;
        }
        else {
LAB_140188a7f:
          (**(code **)*plVar6)(plVar6,1);
        }
        *(undefined8 *)(lVar4 + lVar7) = 0;
        plVar6 = *(longlong **)(lVar4 + 8 + lVar7);
        if (plVar6 != (longlong *)0x0) {
          *(undefined8 *)(lVar4 + 8 + lVar7) = 0;
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
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  FUN_140188b2d(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140188b2c FUN_140188b2c body=1 status=ok
// SIG undefined FUN_140188b2c(void)

void FUN_140188b2c(void)

{
  return;
}



// FUNCTION 140188b2d FUN_140188b2d body=75 status=ok
// SIG undefined FUN_140188b2d(void)

void FUN_140188b2d(longlong param_1,int param_2)

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



// FUNCTION 140188b78 FUN_140188b78 body=155 status=ok
// SIG undefined FUN_140188b78(void)

undefined8 * FUN_140188b78(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
  }
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  }
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_149f62ba0;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  puVar3[3] = uVar5;
  puVar3[4] = uVar4;
  puVar3[5] = uVar6;
  *(undefined4 *)(puVar3 + 6) = uVar2;
  return puVar3;
}



// FUNCTION 140188c14 FUN_140188c14 body=87 status=ok
// SIG undefined FUN_140188c14(void)

void FUN_140188c14(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_149f62b40;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined4 *)(puVar5 + 4) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  puVar5[6] = uVar3;
  puVar5[7] = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(puVar5 + 8) = uVar2;
  return;
}



// FUNCTION 140188c6c FUN_140188c6c body=57 status=ok
// SIG undefined FUN_140188c6c(void)

void FUN_140188c6c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_149f61410;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  return;
}



// FUNCTION 140188ca6 FUN_140188ca6 body=57 status=ok
// SIG undefined FUN_140188ca6(void)

void FUN_140188ca6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_149f615f0;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  return;
}



// FUNCTION 140188ce0 FUN_140188ce0 body=73 status=ok
// SIG undefined FUN_140188ce0(void)

void FUN_140188ce0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_149f62a30;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  puVar3[4] = uVar2;
  return;
}



// FUNCTION 140188d2a FUN_140188d2a body=73 status=ok
// SIG undefined FUN_140188d2a(void)

void FUN_140188d2a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_149f62ae0;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  puVar3[4] = uVar2;
  return;
}



// FUNCTION 140188d74 FUN_140188d74 body=144 status=ok
// SIG undefined FUN_140188d74(void)

void FUN_140188d74(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  if ((*(int *)(param_1 + 0x70) != *(int *)(param_2 + 1)) ||
     (cVar5 = FUN_140188e04(*(undefined8 *)(param_1 + 0x68),*param_2), cVar5 == '\0')) {
    FUN_140d7e6a6((undefined8 *)(param_1 + 0x68),param_2);
    plVar3 = *(longlong **)(param_1 + 0x88);
    if (plVar3 != (longlong *)0x0) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar6 == iVar4;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar7);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_145964d6a();
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
                    /* WARNING: Could not recover jumptable at 0x000140188e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140188e04 FUN_140188e04 body=48 status=ok
// SIG undefined FUN_140188e04(void)

undefined8 FUN_140188e04(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) ||
         (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 140188e46 FUN_140188e46 body=577 status=ok
// SIG undefined FUN_140188e46(void)

void FUN_140188e46(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = (**(code **)(*param_1 + 0x818))(param_1,param_3);
  if (cVar4 != '\0') {
    if ((char)param_2 == '\0') {
      FUN_140189130((longlong)param_1 + 0x59b,param_1,param_3);
    }
    else {
      FUN_1401890a6((longlong)param_1 + 0x59c,param_1,param_3);
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,0,0xffffffff);
  lVar3 = param_1[0x28];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x27];
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar7);
      if (plVar2 != (longlong *)0x0) {
        if (DAT_14cac6e60 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_142b47bc4;
          local_78 = &LAB_1478989f1;
          local_80 = &LAB_146391124;
          local_88 = L"Engine";
          local_90 = 0x10000000000;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
            DAT_14cac6e60 + 0x30)) {
          lVar6 = (**(code **)(*plVar2 + 0x7b8))(plVar2,param_3,0,0xffffffff);
          if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x108) == lVar5)) {
            FUN_140188e46(plVar2,param_2);
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  if (((char)param_2 == '\0') && (DAT_14cad1cf8 != '\0')) {
    cVar4 = (**(code **)(*param_1 + 0x480))(param_1,0);
    if ((cVar4 != '\0') &&
       ((param_1[0x15] != 0 && (*(longlong **)(param_1[0x15] + 0x1c8) == param_1)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401890a6 FUN_1401890a6 body=137 status=ok
// SIG undefined FUN_1401890a6(void)

void FUN_1401890a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401891ba(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140189130 FUN_140189130 body=137 status=ok
// SIG undefined FUN_140189130(void)

void FUN_140189130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401894e0(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401891ba FUN_1401891ba body=250 status=ok
// SIG undefined FUN_1401891ba(void)

undefined8 * FUN_1401891ba(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14018923d;
  FUN_1401892b6(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x59c,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14018923d;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x000140189279:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x000140189279;
      }
    }
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
LAB_14018923d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401892b6 FUN_1401892b6 body=120 status=ok
// SIG undefined FUN_1401892b6(void)

undefined8 * FUN_1401892b6(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e6c) {
    FUN_144b3d300(&DAT_14cad1e6c);
    if (DAT_14cad1e6c == -1) {
      FUN_1446ddc76(&DAT_14cad1e64,"OnComponentSleep",1);
      _Init_thread_footer(&DAT_14cad1e6c);
    }
  }
  *param_2 = DAT_14cad1e64;
  return param_2;
}



// FUNCTION 14018932e FUN_14018932e body=434 status=ok
// SIG undefined FUN_14018932e(void)

undefined8 * FUN_14018932e(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  longlong lVar9;
  uint uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14c963d90 != DAT_14c963dbc) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    puVar8 = &DAT_14c963dc0;
    if (DAT_14c963dc8 != (undefined *)0x0) {
      puVar8 = DAT_14c963dc8;
    }
    iVar7 = *(int *)(puVar8 + (ulonglong)(DAT_14c963dd0 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    while (iVar7 != -1) {
      lVar3 = DAT_14c963d88 + (longlong)iVar7 * 0x60;
      if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar7 * 0x60) == param_2) {
        if (((lVar3 != 0) && ((longlong *)(lVar3 + 8) != (longlong *)0x0)) &&
           (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c))) {
          uVar6 = (uint)((ulonglong)param_3 >> 0x10);
          uVar10 = (uint)param_3 & 0xffff;
          lVar9 = lVar3 + 0x40;
          if (*(longlong *)(lVar3 + 0x48) != 0) {
            lVar9 = *(longlong *)(lVar3 + 0x48);
          }
          iVar7 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(lVar3 + 0x50) - 1U &
                                   (int)((ulonglong)param_3 >> 0x20) +
                                   ((uint)param_3 << 0x10 | uVar10) +
                                   (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar7 != -1) {
            lVar3 = *(longlong *)(lVar3 + 8);
            goto LAB_140189452;
          }
        }
        break;
      }
      iVar7 = *(int *)(lVar3 + 0x58);
    }
  }
  goto LAB_14018949c;
  while (iVar7 = *(int *)(lVar9 + 0x18), iVar7 != -1) {
LAB_140189452:
    lVar9 = lVar3 + (longlong)iVar7 * 0x20;
    if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x20) == param_3) {
      if ((lVar9 != 0) && (lVar9 != -8)) {
        uVar4 = *(undefined8 *)(lVar9 + 8);
        lVar3 = *(longlong *)(lVar9 + 0x10);
        if (lVar3 == 0) {
          *param_1 = uVar4;
          param_1[1] = 0;
        }
        else {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          plVar5 = (longlong *)param_1[1];
          *param_1 = uVar4;
          param_1[1] = lVar3;
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
        }
      }
      break;
    }
  }
LAB_14018949c:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  return param_1;
}



// FUNCTION 1401894e0 FUN_1401894e0 body=250 status=ok
// SIG undefined FUN_1401894e0(void)

undefined8 * FUN_1401894e0(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_140189563;
  FUN_1401895dc(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x59b,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_140189563;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014018959f:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014018959f;
      }
    }
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
LAB_140189563:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401895dc FUN_1401895dc body=120 status=ok
// SIG undefined FUN_1401895dc(void)

undefined8 * FUN_1401895dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e60) {
    FUN_144b3d300(&DAT_14cad1e60);
    if (DAT_14cad1e60 == -1) {
      FUN_1446ddc76(&DAT_14cad1e58,"OnComponentWake",1);
      _Init_thread_footer(&DAT_14cad1e60);
    }
  }
  *param_2 = DAT_14cad1e58;
  return param_2;
}



// FUNCTION 140189654 FUN_140189654 body=255 status=ok
// SIG undefined FUN_140189654(void)

undefined8 FUN_140189654(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x19c);
  }
  else {
    if (*(int *)(lVar3 + 0xa0) == *(int *)(lVar3 + 0xcc)) {
      return 0;
    }
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = lVar3 + 0xd0;
    if (*(longlong *)(lVar3 + 0xd8) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0xd8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar3 + 0xe0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 == -1) {
      return 0;
    }
    while (plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x98) + (longlong)iVar6 * 0x14),
          *plVar1 != param_2) {
      iVar6 = *(int *)((longlong)plVar1 + 0xc);
      if (iVar6 == -1) {
        return 0;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if ((uint *)(plVar1 + 1) == (uint *)0x0) {
      return 0;
    }
    uVar2 = *(uint *)(plVar1 + 1);
  }
  if ((-1 < (int)uVar2) && ((int)uVar2 < (int)param_1[0x1af])) {
    return *(undefined8 *)(param_1[0x1ae] + (ulonglong)uVar2 * 8);
  }
  return 0;
}



// FUNCTION 140189754 FUN_140189754 body=658 status=ok
// SIG undefined FUN_140189754(void)

undefined8 FUN_140189754(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  undefined8 local_488 [16];
  undefined8 local_408 [16];
  undefined8 local_388;
  undefined8 local_380;
  undefined1 local_360;
  undefined1 local_2d8;
  undefined8 local_2c8 [16];
  undefined1 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined1 local_af;
  undefined8 local_ac;
  undefined1 *local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined3 uStack_48;
  undefined5 local_45;
  undefined3 uStack_40;
  undefined8 uStack_3d;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_360 = 0;
  local_2d8 = 0;
  local_238 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_230 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_228 = DAT_14c8464f0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = &DAT_3f8000003f800000;
  puStack_1c0 = &DAT_3f8000003f800000;
  local_1b8 = 0xffffffff00000000;
  local_1b0 = 0x42c80000;
  local_158 = 0;
  local_150 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0xffffffff00000000;
  local_108 = 0;
  local_100 = 0;
  uStack_fc = 0x80;
  uStack_f8 = 0xffffffff;
  uStack_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffffffffffff;
  local_d0 = 0xbf8000003f800000;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  local_af = 1;
  local_ac = 0x42b4000042b40000;
  local_9c = 0;
  local_a4 = &DAT_3f8000003f800000;
  local_94 = 0;
  local_98 = 0;
  local_90 = 0x3f800000bf800000;
  local_88 = 0x3f800000;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_67 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_3d = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_45 = 0;
  puVar2 = &DAT_14c846400;
  puVar3 = local_2c8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_248 = 1;
  local_388 = *param_3;
  local_380 = param_3[1];
  local_4a8 = (undefined4)DAT_14c8464e0;
  uStack_4a4 = DAT_14c8464e0._4_4_;
  uStack_4a0 = (undefined4)DAT_14c8464e8;
  uStack_49c = DAT_14c8464e8._4_4_;
  local_498 = DAT_14c8464f0;
  puVar2 = &DAT_14c846400;
  puVar3 = local_488;
  local_220 = local_388;
  local_218 = local_380;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_408;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_144891fa0(param_1,&local_4a8);
  FUN_144891d70(&local_4a8);
  if ((local_28 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401899e7 FUN_1401899e7 body=3764 status=ok
// SIG undefined FUN_1401899e7(void)

/* WARNING: Removing unreachable block (ram,0x000140189e5e) */

void FUN_1401899e7(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  void *pvVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_2b8 [32];
  double *local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [12];
  undefined4 uStack_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(float *)(param_1 + 0x41c) <= 0.0) {
    FUN_144920f26(param_1 + 8000,param_1 + 0xab0,0);
  }
  else {
    local_148 = *(double *)(param_1 + 0xa00);
    local_158 = *(double *)(param_1 + 0x9c0);
    dStack_150 = *(double *)(param_1 + 0x9e0);
    dVar3 = (double)*(float *)(param_1 + 0x41c);
    local_298 = &local_158;
    dStack_140 = (local_148 * dVar3 + *(double *)(param_1 + 0x1058)) * local_148 +
                 (dVar3 * local_158 + *(double *)(param_1 + 0x1048)) * local_158 +
                 (dStack_150 * dVar3 + *(double *)(param_1 + 0x1050)) * dStack_150;
    FUN_1407300cb(param_1 + 8000,param_1 + 0xab0,0,1);
  }
  if ((*(int *)(param_1 + 0x1dd0) == 0) ||
     (plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0xfd0), plVar2 == (longlong *)0x0)) {
    pvVar12 = (void *)(param_1 + 8000);
    if (*(void **)(param_1 + 0x2000) != (void *)0x0) {
      pvVar12 = *(void **)(param_1 + 0x2000);
    }
    iVar1 = *(int *)(param_1 + 0x2010);
    *(int *)(param_1 + 0x2250) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2254) == 0) {
      *(undefined4 *)(param_1 + 0x2254) = 6;
    }
    else {
      FUN_144715b40((void *)(param_1 + 0x2180),iVar1);
      if (iVar1 != 0) {
        pvVar13 = (void *)(param_1 + 0x2180);
        if (*(void **)(param_1 + 0x2240) != (void *)0x0) {
          pvVar13 = *(void **)(param_1 + 0x2240);
        }
        memcpy(pvVar13,pvVar12,(longlong)iVar1 << 5);
      }
    }
    pvVar12 = (void *)(param_1 + 0x2020);
    if (*(void **)(param_1 + 0x2120) != (void *)0x0) {
      pvVar12 = *(void **)(param_1 + 0x2120);
    }
    iVar1 = *(int *)(param_1 + 0x2130);
    *(int *)(param_1 + 0x2370) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2374) == 0) {
      *(undefined4 *)(param_1 + 0x2374) = 8;
    }
    else {
      FUN_144715cb0((void *)(param_1 + 0x2260),iVar1);
      if (iVar1 != 0) {
        pvVar13 = (void *)(param_1 + 0x2260);
        if (*(void **)(param_1 + 0x2360) != (void *)0x0) {
          pvVar13 = *(void **)(param_1 + 0x2360);
        }
        memcpy(pvVar13,pvVar12,(longlong)iVar1 << 5);
      }
    }
    *(undefined8 *)(param_1 + 0x2390) = *(undefined8 *)(param_1 + 0x1058);
    uVar16 = *(undefined4 *)(param_1 + 0x1048);
    uVar14 = *(undefined4 *)(param_1 + 0x104c);
    uVar15 = *(undefined4 *)(param_1 + 0x1050);
    uVar17 = *(undefined4 *)(param_1 + 0x1054);
  }
  else {
    local_1e8 = *(double *)(param_1 + 0x10b0);
    local_298 = (double *)&local_1f8;
    local_1f8 = *(double *)(param_1 + 0x10a0);
    uStack_1f0 = *(double *)(param_1 + 0x10a8);
    local_208 = *(double *)(param_1 + 0x10c8);
    local_218 = *(undefined4 *)(param_1 + 0x10b8);
    uStack_214 = *(undefined4 *)(param_1 + 0x10bc);
    uStack_210 = *(undefined4 *)(param_1 + 0x10c0);
    uStack_20c = *(undefined4 *)(param_1 + 0x10c4);
    (**(code **)(*plVar2 + 0x58))(plVar2,0xffffffff,&local_218);
    dVar3 = cos(((double)CONCAT44(uStack_20c,uStack_210) * 3.1415927410125732) / 180.0);
    dVar4 = sin(((double)CONCAT44(uStack_20c,uStack_210) * 3.1415927410125732) / 180.0);
    dVar21 = sin(((double)CONCAT44(uStack_20c,uStack_210) * 3.1415927410125732) / 180.0);
    dVar26 = cos(((double)CONCAT44(uStack_20c,uStack_210) * 3.1415927410125732) / 180.0);
    dVar31 = cos(((double)CONCAT44(uStack_214,local_218) * 3.1415927410125732) / 180.0);
    local_288._8_4_ = extraout_XMM0_Dc;
    local_288._0_8_ = dVar31;
    local_288._12_4_ = extraout_XMM0_Dd;
    dVar31 = sin(((double)CONCAT44(uStack_214,local_218) * 3.1415927410125732) / 180.0);
    dVar5 = sin(((double)CONCAT44(uStack_214,local_218) * 3.1415927410125732) / 180.0);
    local_278._8_4_ = extraout_XMM0_Dc_01;
    local_278._0_8_ = dVar5;
    local_278._12_4_ = extraout_XMM0_Dd_01;
    dVar6 = cos(((double)CONCAT44(uStack_214,local_218) * 3.1415927410125732) / 180.0);
    local_268 = ZEXT812(0);
    uStack_25c = 0x3ff00000;
    local_228._12_4_ = extraout_XMM0_Dd_00;
    local_228._8_4_ = extraout_XMM0_Dc_00;
    dVar8 = dVar31 * 0.0;
    uVar14 = local_288._12_4_;
    dVar18 = local_288._0_8_ * 0.0;
    dVar7 = dVar6 * 0.0 + 0.0;
    local_228._0_8_ = dVar31 + dVar7;
    local_238._8_4_ = extraout_XMM0_Dc_02;
    local_238._0_8_ = dVar7 + dVar8;
    local_238._12_4_ = extraout_XMM0_Dd_02;
    dVar19 = (dVar26 * dVar6 - dVar21 * 0.0) + dVar8 + 0.0;
    dVar33 = (dVar26 * 0.0 - dVar21 * 1.0) + 0.0 + 0.0;
    dVar31 = (dVar26 * -dVar5 - dVar21 * 0.0) + dVar18 + 0.0;
    dVar30 = (dVar26 * 0.0 - dVar21 * 0.0) + 0.0 + 0.0;
    dVar6 = dVar3 * 0.0 + dVar6 * dVar4 + dVar8 + 0.0;
    dVar7 = dVar3 * 1.0 + dVar4 * 0.0 + 0.0 + 0.0;
    dVar26 = dVar3 * 0.0 + dVar4 * -dVar5 + dVar18 + 0.0;
    dVar5 = dVar3 * 0.0 + dVar4 * 0.0 + 0.0 + 0.0;
    uVar16 = local_278._12_4_;
    dVar3 = local_278._0_8_ * -0.0 + 0.0;
    local_288._8_4_ = local_288._8_4_;
    local_288._0_8_ = local_288._0_8_ + dVar3;
    local_288._12_4_ = uVar14;
    local_278._8_4_ = local_278._8_4_;
    local_278._0_8_ = dVar3 + dVar18;
    local_278._12_4_ = uVar16;
    dVar3 = cos((local_208 * 3.1415927410125732) / 180.0);
    local_258._8_4_ = extraout_XMM0_Dc_03;
    local_258._0_8_ = dVar3;
    local_258._12_4_ = extraout_XMM0_Dd_03;
    dVar3 = sin((local_208 * 3.1415927410125732) / 180.0);
    dVar4 = sin((local_208 * 3.1415927410125732) / 180.0);
    local_248._8_4_ = extraout_XMM0_Dc_04;
    local_248._0_8_ = dVar4;
    local_248._12_4_ = extraout_XMM0_Dd_04;
    dVar21 = cos((local_208 * 3.1415927410125732) / 180.0);
    dVar24 = dVar30 * 0.0 + dVar31 * 0.0 + dVar33 * 0.0 + dVar19 * 1.0;
    dVar27 = dVar30 * 0.0 + dVar31 * -dVar3 + dVar33 * dVar21 + dVar19 * 0.0;
    dVar8 = dVar30 * (double)local_268._0_8_ +
            (double)local_258._0_8_ * dVar31 + dVar33 * dVar4 + dVar19 * 0.0;
    dVar30 = dVar30 * stack0xfffffffffffffda0 + dVar31 * 0.0 + dVar33 * 0.0 + dVar19 * 0.0;
    dVar29 = dVar5 * 0.0 + dVar26 * 0.0 + dVar7 * 0.0 + dVar6 * 1.0;
    dVar32 = dVar5 * 0.0 + dVar26 * -dVar3 + dVar7 * dVar21 + dVar6 * 0.0;
    dVar31 = dVar5 * (double)local_268._0_8_ +
             (double)local_258._0_8_ * dVar26 + dVar7 * dVar4 + dVar6 * 0.0;
    dVar6 = dVar5 * stack0xfffffffffffffda0 + dVar26 * 0.0 + dVar7 * 0.0 + dVar6 * 0.0;
    dVar4 = (double)local_288._0_8_ * 0.0 + (double)local_228._0_8_ * 1.0 + 0.0 + 0.0;
    dVar26 = (double)local_288._0_8_ * -dVar3 + (double)local_228._0_8_ * 0.0 + dVar21 * 0.0 + 0.0;
    dVar19 = (double)local_258._0_8_ * (double)local_288._0_8_ +
             (double)local_228._0_8_ * 0.0 + (double)local_248._0_8_ * 0.0 + 0.0;
    dVar22 = (double)local_288._0_8_ * 0.0 + (double)local_228._0_8_ * 0.0 + 0.0 + 0.0;
    dVar5 = (double)local_278._0_8_ * 0.0 + (double)local_238._0_8_ * 1.0 + 0.0 + 0.0;
    dVar3 = -dVar3 * (double)local_278._0_8_ + (double)local_238._0_8_ * 0.0 + dVar21 * 0.0 + 0.0;
    dVar18 = (double)local_258._0_8_ * (double)local_278._0_8_ +
             (double)local_238._0_8_ * 0.0 + (double)local_248._0_8_ * 0.0 + (double)local_268._0_8_
    ;
    dVar10 = (double)local_278._0_8_ * 0.0 + (double)local_238._0_8_ * 0.0 + 0.0 +
             stack0xfffffffffffffda0;
    dVar25 = dVar30 * 0.0 + dVar8 * (double)local_268._0_8_ + dVar27 * 1.0 + dVar24 * 0.0;
    dVar28 = dVar30 * 0.0 + dVar8 * stack0xfffffffffffffda0 + dVar27 * 0.0 + dVar24 * 0.0;
    dVar9 = dVar30 * (double)local_268._0_8_ + dVar8 * 0.0 + dVar27 * 0.0 + dVar24 * 1.0;
    dVar27 = dVar30 * stack0xfffffffffffffda0 + dVar8 * 0.0 + dVar27 * 0.0 + dVar24 * 0.0;
    dVar33 = dVar6 * 0.0 + dVar31 * (double)local_268._0_8_ + dVar32 * 1.0 + dVar29 * 0.0;
    dVar24 = dVar6 * 0.0 + dVar31 * stack0xfffffffffffffda0 + dVar32 * 0.0 + dVar29 * 0.0;
    dVar7 = dVar6 * (double)local_268._0_8_ + dVar31 * 0.0 + dVar32 * 0.0 + dVar29 * 1.0;
    dVar8 = dVar6 * stack0xfffffffffffffda0 + dVar31 * 0.0 + dVar32 * 0.0 + dVar29 * 0.0;
    dVar21 = dVar22 * 0.0 + dVar19 * (double)local_268._0_8_ + dVar26 * 1.0 + dVar4 * 0.0;
    dVar31 = dVar22 * 0.0 + dVar19 * stack0xfffffffffffffda0 + dVar26 * 0.0 + dVar4 * 0.0;
    dVar20 = dVar22 * (double)local_268._0_8_ + dVar19 * 0.0 + dVar26 * 0.0 + dVar4 * 1.0;
    dVar23 = dVar22 * stack0xfffffffffffffda0 + dVar19 * 0.0 + dVar26 * 0.0 + dVar4 * 0.0;
    dVar30 = dVar10 * 0.0 + dVar18 * (double)local_268._0_8_ + dVar3 * 1.0 + dVar5 * 0.0;
    dVar19 = dVar10 * 0.0 + dVar18 * stack0xfffffffffffffda0 + dVar3 * 0.0 + dVar5 * 0.0;
    dVar6 = dVar10 * (double)local_268._0_8_ + dVar18 * 0.0 + dVar3 * 0.0 + dVar5 * 1.0;
    dVar3 = dVar10 * stack0xfffffffffffffda0 + dVar18 * 0.0 + dVar3 * 0.0 + dVar5 * 0.0;
    local_278._8_4_ = SUB84(dVar3,0);
    local_278._0_8_ = dVar6;
    local_278._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar26 = dVar7 * 0.0;
    dVar5 = dVar8 * 0.0;
    local_288._8_4_ = SUB84(dVar5,0);
    local_288._0_8_ = dVar26;
    local_288._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_268._8_4_ = SUB84(local_1f8,0);
    local_268._0_8_ = local_1f8;
    uStack_25c = (int)((ulonglong)local_1f8 >> 0x20);
    dVar18 = ((dVar33 * -uStack_1f0 - dVar25 * local_1f8) - dVar21 * local_1e8) + dVar30;
    dVar10 = ((dVar24 * -uStack_1f0 - dVar28 * local_1f8) - dVar31 * local_1e8) + dVar19;
    dVar30 = dVar30 * 0.0;
    dVar19 = dVar19 * 0.0;
    dVar3 = dVar6 * 0.0;
    dVar4 = (double)local_278._8_8_ * 0.0;
    dVar32 = dVar25 + dVar33 * 0.0 + dVar21 * 0.0 + dVar30;
    dVar11 = dVar28 + dVar24 * 0.0 + dVar31 * 0.0 + dVar19;
    dVar22 = dVar33 + dVar25 * 0.0 + dVar21 * 0.0 + dVar30;
    dVar29 = dVar24 + dVar28 * 0.0 + dVar31 * 0.0 + dVar19;
    dVar30 = dVar25 * 0.0 + dVar33 * 0.0 + dVar21 + dVar30;
    dVar19 = dVar28 * 0.0 + dVar24 * 0.0 + dVar31 + dVar19;
    dVar31 = dVar9 + dVar26 + dVar20 * 0.0 + dVar3;
    dVar5 = dVar27 + dVar5 + dVar23 * 0.0 + dVar4;
    dVar33 = dVar7 + dVar9 * 0.0 + dVar20 * 0.0 + dVar3;
    dVar24 = dVar8 + dVar27 * 0.0 + dVar23 * 0.0 + dVar4;
    dVar3 = dVar9 * 0.0 + dVar26 + dVar20 + dVar3;
    dVar4 = dVar27 * 0.0 + (double)local_288._8_8_ + dVar23 + dVar4;
    dVar6 = ((-uStack_1f0 * dVar7 - dVar9 * local_1f8) - dVar20 * local_1e8) + dVar6;
    dVar26 = ((-uStack_1f0 * dVar8 - dVar27 * stack0xfffffffffffffda0) - dVar23 * local_1e8) +
             (double)local_278._8_8_;
    (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x60))
              (*(longlong **)(DAT_14cb0d2b0 + 0xfd0),&local_1d8,0xffffffff);
    local_158 = dVar5 * local_178 + local_198 * dVar31 + local_1b8 * dVar11 + local_1d8 * dVar32;
    dVar21 = dVar5 * dStack_170 + dStack_190 * dVar31 + dStack_1b0 * dVar11 + dStack_1d0 * dVar32;
    local_228._8_4_ = SUB84(dVar21,0);
    local_228._0_8_ = local_158;
    local_228._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    local_148 = dVar5 * local_168 + dVar31 * local_188 + dVar11 * local_1a8 + dVar32 * local_1c8;
    dStack_140 = dVar5 * dStack_160 +
                 dVar31 * dStack_180 + dVar11 * dStack_1a0 + dVar32 * dStack_1c0;
    stack0xfffffffffffffda0 = dStack_140;
    local_268._0_8_ = local_148;
    dVar7 = dVar24 * dStack_170 + dStack_190 * dVar33 + dStack_1b0 * dVar29 + dStack_1d0 * dVar22;
    local_128 = dVar24 * local_168 + dVar33 * local_188 + dVar29 * local_1a8 + dVar22 * local_1c8;
    dStack_120 = dVar24 * dStack_160 +
                 dVar33 * dStack_180 + dVar29 * dStack_1a0 + dVar22 * dStack_1c0;
    dVar5 = dVar4 * dStack_170 + dStack_190 * dVar3 + dStack_1b0 * dVar19 + dStack_1d0 * dVar30;
    dVar8 = dVar4 * dStack_160 + dVar3 * dStack_180 + dVar19 * dStack_1a0 + dVar30 * dStack_1c0;
    dVar31 = dStack_170 * dVar26 + dStack_190 * dVar6 + dStack_1b0 * dVar10 + dStack_1d0 * dVar18;
    dVar21 = dVar26 * dStack_160 + dVar6 * dStack_180 + dVar10 * dStack_1a0 + dStack_1c0 * dVar18;
    dStack_150 = (double)local_228._8_8_;
    local_138._8_4_ = SUB84(dVar7,0);
    local_138._0_8_ =
         dVar24 * local_178 + local_198 * dVar33 + local_1b8 * dVar29 + local_1d8 * dVar22;
    local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_118._8_4_ = SUB84(dVar5,0);
    local_118._0_8_ =
         dVar4 * local_178 + local_198 * dVar3 + local_1b8 * dVar19 + local_1d8 * dVar30;
    local_118._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_108._8_4_ = SUB84(dVar8,0);
    local_108._0_8_ =
         dVar4 * local_168 + dVar3 * local_188 + dVar19 * local_1a8 + dVar30 * local_1c8;
    local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_f8._8_4_ = SUB84(dVar31,0);
    local_f8._0_8_ =
         local_178 * dVar26 + local_198 * dVar6 + local_1b8 * dVar10 + local_1d8 * dVar18;
    local_f8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    local_e8._8_4_ = SUB84(dVar21,0);
    local_e8._0_8_ =
         dVar26 * local_168 + dVar6 * local_188 + dVar10 * local_1a8 + local_1c8 * dVar18;
    local_e8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    if (*(float *)(param_1 + 0x41c) <= 0.0) {
      FUN_144920f26(param_1 + 0x2180,&local_158,0);
    }
    else {
      local_1c8 = *(double *)(param_1 + 0xa00);
      local_1d8 = *(double *)(param_1 + 0x9c0);
      dStack_1d0 = *(double *)(param_1 + 0x9e0);
      dVar3 = (double)*(float *)(param_1 + 0x41c);
      dStack_1c0 = (local_1c8 * dVar3 + *(double *)(param_1 + 0x1058)) * local_1c8 +
                   (dVar3 * local_1d8 + *(double *)(param_1 + 0x1048)) * local_1d8 +
                   (dStack_1d0 * dVar3 + *(double *)(param_1 + 0x1050)) * dStack_1d0;
      local_298 = &local_1d8;
      FUN_1407300cb(param_1 + 0x2180,&local_158,0,1);
    }
    *(double *)(param_1 + 0x2390) = local_1e8;
    uVar16 = (undefined4)local_1f8;
    uVar14 = local_1f8._4_4_;
    uVar15 = (undefined4)uStack_1f0;
    uVar17 = uStack_1f0._4_4_;
  }
  *(undefined4 *)(param_1 + 0x2380) = uVar16;
  *(undefined4 *)(param_1 + 0x2384) = uVar14;
  *(undefined4 *)(param_1 + 0x2388) = uVar15;
  *(undefined4 *)(param_1 + 0x238c) = uVar17;
  dVar3 = *(double *)(param_1 + 0xb08) - *(double *)(param_1 + 0xb00);
  dVar21 = *(double *)(param_1 + 0xae8) - *(double *)(param_1 + 0xae0);
  dVar26 = *(double *)(param_1 + 0xac8) - *(double *)(param_1 + 0xac0);
  dVar31 = dVar26 * dVar26 + dVar21 * dVar21;
  dVar4 = dVar3 * dVar3 + dVar31;
  if (9.999999439624929e-11 < dVar4) {
    dVar5 = 1.0 / SQRT(dVar4);
    dVar31 = (*(double *)(param_1 + 0xb28) - *(double *)(param_1 + 0xb20)) * dVar5;
    dVar3 = -dVar3 * dVar5;
    dVar21 = -dVar21 * dVar5;
    dVar26 = -dVar26 * dVar5;
  }
  *(bool *)(param_1 + 0x2140) = 9.999999439624929e-11 < dVar4;
  *(double *)(param_1 + 0x2150) = dVar26;
  *(double *)(param_1 + 0x2158) = dVar21;
  *(double *)(param_1 + 0x2160) = dVar3;
  *(double *)(param_1 + 0x2168) = dVar31;
  *(float *)(param_1 + 0x2170) =
       (float)((*(double *)(param_1 + 0x8a8) - *(double *)(param_1 + 0x8a0)) /
              (*(double *)(param_1 + 0x880) - *(double *)(param_1 + 0x888)));
  if ((local_d0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14018a89c FUN_14018a89c body=153 status=ok
// SIG undefined FUN_14018a89c(void)

void FUN_14018a89c(longlong *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_14018a936(param_1,param_2);
  return;
}



// FUNCTION 14018a936 FUN_14018a936 body=232 status=ok
// SIG undefined FUN_14018a936(void)

undefined8 * FUN_14018a936(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 14018aa1e FUN_14018aa1e body=394 status=ok
// SIG undefined FUN_14018aa1e(void)

longlong FUN_14018aa1e(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_14018aba8();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 14018aba8 FUN_14018aba8 body=221 status=ok
// SIG undefined FUN_14018aba8(void)

longlong FUN_14018aba8(void)

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
  if (DAT_14cacad68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478d0521;
    local_40 = FUN_1463a0c34;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Engine",L"AnimationAsset",&DAT_14cacad68,FUN_1463a0c12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacad68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018ac86 FUN_14018ac86 body=438 status=ok
// SIG undefined FUN_14018ac86(void)

void FUN_14018ac86(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  ushort param_5,undefined8 param_6,char param_7,char param_8)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1417ecfdc(param_1,iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x28);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[2] = *(undefined8 *)(param_3 + 4);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)puVar1 = *param_3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar5;
  *(undefined4 *)(puVar1 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar7;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1[2] + 0xa0);
  if (param_7 != '\0') {
    plVar3 = (longlong *)param_1[2];
    local_50 = (uint)param_5;
    (**(code **)(*plVar3 + 0x188))(plVar3);
    if (param_8 != '\0') {
      local_4c = 0xabadf00d;
      puVar4 = (ulonglong *)plVar3[1];
      if (puVar4[1] < *puVar4 + 4) {
        if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar3 + 0x170))(plVar3,&local_4c,4);
        }
        else {
          FUN_14572512c(plVar3,&local_4c);
        }
      }
      else {
        *puVar4 = *puVar4 + 4;
      }
    }
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1[2] + 0xa0);
  local_58 = 0;
  (**(code **)(*(longlong *)*param_2 + 0xd8))((longlong *)*param_2,param_1[2],0,param_6);
  *(int *)((longlong)puVar1 + 0x24) = *(int *)(param_1[2] + 0xa0) - *(int *)(puVar1 + 4);
  if (param_8 != '\0') {
    FUN_14368e12f(param_2,param_4,param_6,param_1[2]);
  }
  *(int *)((longlong)puVar1 + 0x1c) = *(int *)(param_1[2] + 0xa0) - *(int *)(puVar1 + 3);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018ae3e FUN_14018ae3e body=432 status=ok
// SIG undefined FUN_14018ae3e(void)

void FUN_14018ae3e(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x20) < 1) {
      cVar5 = FUN_14018b00e(param_1,param_2);
      if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
      }
    }
    else {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      uVar7 = *(uint *)(param_1 + 0x18);
      if ((int)uVar7 < 1) {
        uVar9 = 0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x10);
        uVar9 = 0;
        bVar6 = DAT_14c950c29;
        do {
          uVar1 = (uVar7 >> 1) + uVar9;
          uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar1 * 0x10);
          if (((bVar6 & 1) != 0) && (uVar3 != 0)) {
            FUN_1456cec3c(uVar3);
            bVar6 = DAT_14c950c29;
          }
          if (uVar3 < param_2) {
            uVar9 = uVar1 + (uVar7 & 1);
          }
          bVar4 = 1 < uVar7;
          uVar7 = uVar7 >> 1;
        } while (bVar4);
        uVar7 = *(uint *)(param_1 + 0x18);
      }
      plVar8 = (longlong *)(param_1 + 0x10);
      if ((int)uVar9 < (int)uVar7) {
        uVar3 = *(ulonglong *)(*plVar8 + (ulonglong)uVar9 * 0x10);
        if ((DAT_14c950c29 == 1) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
        }
        if ((uVar3 <= param_2) && ((ulonglong)uVar9 * 0x10 + *plVar8 != -8)) goto LAB_14018af75;
      }
      local_51 = 1;
      FUN_147db00fa(plVar8,&local_50);
    }
  }
LAB_14018af75:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018b00e FUN_14018b00e body=555 status=ok
// SIG undefined FUN_14018b00e(void)

bool FUN_14018b00e(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [44];
  uint local_5c;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  if (param_2 == 0) {
    bVar11 = false;
  }
  else if ((int)param_1[4] < 1) {
    local_50 = &local_58;
    iVar3 = FUN_1449b3bee(param_1);
    bVar11 = 0 < iVar3;
  }
  else {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    uVar5 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    if ((longlong)(int)param_1[1] != 0) {
      lVar7 = *param_1;
      lVar9 = (longlong)(int)param_1[1] << 3;
      lVar4 = 0;
      lVar10 = 0;
      do {
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(param_2);
          bVar2 = DAT_14c950c29;
        }
        if (*(ulonglong *)(lVar7 + lVar4 * 8) == param_2) {
          if ((uint)lVar4 != 0xffffffff) {
            *(undefined8 *)(*param_1 + (lVar10 >> 0x20) * 8) = 0;
            uVar5 = (uint)lVar4;
          }
          break;
        }
        lVar10 = lVar10 + 0x100000000;
        lVar4 = lVar4 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    if ((bVar2 & 1) != 0) {
      FUN_1456cec3c(param_2);
      bVar2 = DAT_14c950c29;
    }
    if ((bVar2 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar8 = *(uint *)(param_1 + 3);
    local_5c = uVar5;
    if ((int)uVar8 < 1) {
      uVar5 = 0;
    }
    else {
      lVar7 = param_1[2];
      uVar5 = 0;
      bVar2 = DAT_14c950c29;
      do {
        uVar6 = (uVar8 >> 1) + uVar5;
        uVar1 = *(ulonglong *)(lVar7 + (ulonglong)uVar6 * 0x10);
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 < param_2) {
          uVar5 = uVar6 + (uVar8 & 1);
        }
        bVar11 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar11);
      uVar8 = *(uint *)(param_1 + 3);
    }
    uVar6 = 0xffffffff;
    if ((int)uVar5 < (int)uVar8) {
      lVar7 = (ulonglong)uVar5 * 0x10;
      uVar1 = *(ulonglong *)(param_1[2] + lVar7);
      if ((DAT_14c950c29 == 1) && (uVar1 != 0)) {
        FUN_1456cec3c(uVar1);
      }
      if (uVar1 <= param_2) {
        iVar3 = (int)param_1[3];
        if (~uVar5 + iVar3 != 0) {
          memmove((void *)(param_1[2] + lVar7),(void *)(param_1[2] + lVar7 + 0x10),
                  (longlong)(int)(~uVar5 + iVar3) << 4);
          iVar3 = (int)param_1[3];
        }
        *(int *)(param_1 + 3) = iVar3 + -1;
        FUN_1417fabb8(param_1 + 2);
        uVar6 = uVar5;
      }
    }
    bVar11 = (uVar6 & local_5c) != 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar11;
}



// FUNCTION 14018b23a FUN_14018b23a body=897 status=ok
// SIG undefined FUN_14018b23a(void)

void FUN_14018b23a(longlong *param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  
  if (param_2 == 0) {
    return;
  }
  if ((int)param_1[4] < 1) {
    if (param_3 == '\0') {
      uVar7 = (ulonglong)(int)param_1[1];
      if (uVar7 != 0) {
        lVar4 = *param_1;
        lVar5 = 0;
        do {
          if (*(ulonglong *)(lVar4 + lVar5) == param_2) {
            return;
          }
          lVar5 = lVar5 + 8;
        } while (uVar7 << 3 != lVar5);
        goto LAB_14018b3c6;
      }
      iVar6 = 0;
    }
    else {
      uVar7 = (ulonglong)*(uint *)(param_1 + 1);
      lVar4 = *param_1;
LAB_14018b3c6:
      iVar6 = (int)uVar7;
      if (0 < iVar6) {
        uVar9 = 0;
        uVar7 = uVar7 & 0xffffffff;
        do {
          uVar8 = (int)(uVar7 >> 1) + uVar9;
          uVar12 = *(ulonglong *)(lVar4 + (ulonglong)uVar8 * 8);
          uVar10 = (uint)uVar7;
          if (uVar12 != 0) {
            bVar2 = *(int *)(uVar12 + 0x50) < *(int *)(param_2 + 0x50);
            if (*(int *)(uVar12 + 0x50) == *(int *)(param_2 + 0x50)) {
              bVar2 = uVar12 < param_2;
            }
            if (bVar2) {
              uVar9 = uVar8 + (uVar10 & 1);
            }
          }
          uVar7 = uVar7 >> 1;
        } while (1 < uVar10);
        goto LAB_14018b41e;
      }
    }
    uVar9 = 0;
LAB_14018b41e:
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
      iVar6 = (int)param_1[1];
    }
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_140831cc2(param_1,iVar6);
    }
    uVar7 = (ulonglong)uVar9;
    memmove((void *)(*param_1 + uVar7 * 8 + 8),(void *)(*param_1 + uVar7 * 8),
            (ulonglong)(iVar6 - uVar9) << 3);
    *(ulonglong *)(*param_1 + uVar7 * 8) = param_2;
    if (DAT_14c950c29 != 1) {
      return;
    }
    FUN_1456cec3c(param_2);
    return;
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  uVar9 = *(uint *)(param_1 + 3);
  lVar4 = param_1[2];
  uVar10 = 0;
  bVar3 = DAT_14c950c29;
  if (0 < (int)uVar9) {
    do {
      uVar8 = (uVar9 >> 1) + uVar10;
      uVar7 = *(ulonglong *)(lVar4 + (ulonglong)uVar8 * 0x10);
      if (((bVar3 & 1) != 0) && (uVar7 != 0)) {
        FUN_1456cec3c(uVar7);
        bVar3 = DAT_14c950c29;
      }
      if (uVar7 < param_2) {
        uVar10 = uVar8 + (uVar9 & 1);
      }
      bVar2 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar2);
    uVar9 = *(uint *)(param_1 + 3);
    lVar4 = param_1[2];
  }
  plVar1 = param_1 + 2;
  if ((int)uVar10 < (int)uVar9) {
    uVar7 = *(ulonglong *)(lVar4 + (ulonglong)uVar10 * 0x10);
    if ((DAT_14c950c29 == 1) && (uVar7 != 0)) {
      FUN_1456cec3c(uVar7);
      lVar4 = *plVar1;
    }
    if ((uVar7 <= param_2) &&
       (puVar11 = (undefined1 *)(lVar4 + (ulonglong)uVar10 * 0x10 + 8), puVar11 != (undefined1 *)0x0
       )) goto LAB_14018b388;
  }
  uVar9 = *(uint *)(param_1 + 3);
  uVar10 = 0;
  if ((int)uVar9 < 1) {
LAB_14018b324:
    *(uint *)(param_1 + 3) = uVar9 + 1;
    if (*(uint *)((longlong)param_1 + 0x1c) == uVar9) {
      FUN_1417faaaa(plVar1,uVar9);
    }
    uVar12 = (ulonglong)uVar10;
    memmove((void *)(uVar12 * 0x10 + *plVar1 + 0x10),(void *)(*plVar1 + uVar12 * 0x10),
            (ulonglong)(uVar9 - uVar10) << 4);
  }
  else {
    uVar10 = 0;
    bVar3 = DAT_14c950c29;
    do {
      if ((bVar3 & 1) != 0) {
        FUN_1456cec3c(param_2);
        bVar3 = DAT_14c950c29;
      }
      uVar8 = (uVar9 >> 1) + uVar10;
      uVar7 = *(ulonglong *)((ulonglong)uVar8 * 0x10 + lVar4);
      if (((bVar3 & 1) != 0) && (uVar7 != 0)) {
        FUN_1456cec3c(uVar7);
        bVar3 = DAT_14c950c29;
      }
      if (uVar7 < param_2) {
        uVar10 = uVar8 + (uVar9 & 1);
      }
      bVar2 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar2);
    uVar9 = *(uint *)(param_1 + 3);
    if ((int)uVar9 <= (int)uVar10) goto LAB_14018b324;
    uVar12 = (ulonglong)uVar10;
    uVar7 = *(ulonglong *)(*plVar1 + uVar12 * 0x10);
    if (((bVar3 & 1) != 0) && (uVar7 != 0)) {
      FUN_1456cec3c(uVar7);
      bVar3 = DAT_14c950c29;
    }
    if ((bVar3 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    if (param_2 < uVar7) {
      uVar9 = *(uint *)(param_1 + 3);
      goto LAB_14018b324;
    }
  }
  lVar4 = *plVar1 + uVar12 * 0x10;
  *(ulonglong *)(*plVar1 + uVar12 * 0x10) = param_2;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  *(undefined1 *)(lVar4 + 8) = 0;
  puVar11 = (undefined1 *)(lVar4 + 8);
LAB_14018b388:
  *puVar11 = 0;
  return;
}



// FUNCTION 14018b5bc FUN_14018b5bc body=20 status=ok
// SIG undefined FUN_14018b5bc(void)

ulonglong FUN_14018b5bc(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c0))();
  return uVar1 ^ 1;
}



// FUNCTION 14018b5d4 FUN_14018b5d4 body=362 status=ok
// SIG undefined FUN_14018b5d4(void)

undefined4 *
FUN_14018b5d4(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_1447262c2(param_4);
  if (plVar3 == (longlong *)0x0) {
LAB_14018b686:
    FUN_140232ee4(param_4,&local_38);
    if (local_38 != 0) {
      if (*(char *)(param_1 + 8) == '\x01') {
        uVar2 = *(undefined4 *)(local_38 + 0x3c);
      }
      else {
        if (*(char *)(param_1 + 8) != '\0') goto LAB_14018b69e;
        uVar2 = FUN_143daada8();
      }
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar2;
      *(undefined1 *)(param_2 + 8) = 2;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      goto LAB_14018b662;
    }
LAB_14018b69e:
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  else {
    uVar4 = FUN_14018b740();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 == (longlong *)0x0) goto LAB_14018b686;
    uVar4 = FUN_14018b740();
    plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
    if ((plVar3 == plVar5) || (plVar5 == (longlong *)0x0)) goto LAB_14018b686;
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
LAB_14018b656:
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = uVar2;
      *(undefined1 *)(param_2 + 8) = 2;
      goto LAB_14018b662;
    }
    if (*(char *)(param_1 + 8) == '\0') {
      uVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
      goto LAB_14018b656;
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
LAB_14018b662:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018b740 FUN_14018b740 body=228 status=ok
// SIG undefined FUN_14018b740(void)

longlong FUN_14018b740(void)

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
  if (DAT_14cb55208 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14861cc67;
    local_40 = FUN_1464b102f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"BalancedActor",&DAT_14cb55208,&DAT_14861cc66);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55208;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018b826 FUN_14018b826 body=55 status=ok
// SIG undefined FUN_14018b826(void)

void FUN_14018b826(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14489a2c5(param_2,param_1 + 0x138,param_1 + 0x168,param_3,2,0);
  return;
}



// FUNCTION 14018b85e FUN_14018b85e body=433 status=ok
// SIG undefined FUN_14018b85e(void)

void FUN_14018b85e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  size_t _Size;
  void *_Dst;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
  plVar4 = (longlong *)*plVar3;
  *(longlong **)(param_2 + 0x20) = plVar3 + 1;
  *(longlong **)(param_2 + 0x30) = plVar4;
  iVar1 = (int)plVar3[1];
  *(longlong *)(param_2 + 0x20) = (longlong)plVar3 + 0xc;
  uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4);
  iVar2 = *(int *)((longlong)plVar4 + 0x34);
  _Size = (size_t)iVar2;
  iVar7 = (int)param_3[1];
  if (((iVar7 != 0) && (0 < iVar7)) && ((plVar4[7] & 0x1040000000U) == 0)) {
    lVar11 = *param_3;
    iVar8 = iVar7;
    do {
      if ((plVar4[7] & 0x1000000000U) == 0) {
        (**(code **)(*plVar4 + 0x148))(plVar4,lVar11);
      }
      lVar11 = lVar11 + _Size;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((iVar7 != 0 || iVar1 != 0) &&
     (*(undefined4 *)(param_3 + 1) = 0, *(int *)((longlong)param_3 + 0xc) != iVar1)) {
    FUN_14474d398(param_3,iVar1,iVar2,uVar6);
  }
  pcVar9 = *(char **)(param_2 + 0x20);
  if (*pcVar9 != 'f') {
    lVar11 = 0;
    do {
      iVar1 = (int)param_3[1];
      iVar7 = iVar1 + 1;
      *(int *)(param_3 + 1) = iVar7;
      if (*(int *)((longlong)param_3 + 0xc) <= iVar1) {
        FUN_14097bbd2(param_3,iVar1,iVar2,uVar6);
        iVar7 = (int)param_3[1];
      }
      if (iVar7 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)((longlong)iVar1 * _Size + *param_3);
      }
      if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
        (**(code **)(*plVar4 + 0x160))(plVar4,_Dst);
      }
      else {
        memset(_Dst,0,_Size);
      }
      if ((int)param_3[1] == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *param_3 + lVar11;
      }
      pbVar5 = *(byte **)(param_2 + 0x20);
      *(byte **)(param_2 + 0x20) = pbVar5 + 1;
      (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2,lVar10);
      pcVar9 = *(char **)(param_2 + 0x20);
      lVar11 = lVar11 + _Size;
    } while (*pcVar9 != 'f');
  }
  *(char **)(param_2 + 0x20) = pcVar9 + (pcVar9 != (char *)0x0);
  return;
}



// FUNCTION 14018ba10 FUN_14018ba10 body=192 status=ok
// SIG undefined FUN_14018ba10(void)

void FUN_14018ba10(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  
  lVar3 = **(longlong **)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x20) = (longlong)*(longlong **)(param_2 + 0x20) + 0xc;
  for (lVar4 = *(longlong *)(lVar3 + 0x70); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x48)) {
    if (((*(uint *)(lVar4 + 0x39) & 0x8000020) == 0) && (0 < *(int *)(lVar4 + 0x30))) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(lVar4 + 0x44);
        iVar2 = *(int *)(lVar4 + 0x34);
        pbVar5 = *(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = pbVar5 + 1;
        (*(code *)(&DAT_14c962c70)[*pbVar5])
                  (*(undefined8 *)(param_2 + 0x18),param_2,iVar2 * lVar6 + iVar1 + param_3);
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar4 + 0x30));
    }
  }
  if ((*(byte *)(lVar3 + 0xb2) & 0x20) != 0) {
    (**(code **)(**(longlong **)(lVar3 + 0xb8) + 0x50))(*(longlong **)(lVar3 + 0xb8),param_3);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  return;
}



// FUNCTION 14018bad0 FUN_14018bad0 body=224 status=ok
// SIG undefined FUN_14018bad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018bad0(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)DAT_14c84635c;
  fVar1 = DAT_14c84635c._4_4_;
  if (1.0 < *(double *)(param_1 + 0x8a8) || *(double *)(param_1 + 0x8a8) == 1.0) {
    fVar2 = (float)*(double *)(param_1 + 0x930) + (float)*(double *)(param_1 + 0x930);
    fVar1 = (float)*(double *)(param_1 + 0x958) + (float)*(double *)(param_1 + 0x958);
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(param_1 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar1) {
    fVar1 = 1048576.0;
  }
  if (fVar1 <= 0.01) {
    fVar1 = 0.01;
  }
  FUN_14018bbb0(fVar1,fVar2,param_2);
  *(undefined4 *)(param_2 + 0x20) = 0;
  fVar2 = DAT_14c9f1f20;
  if (DAT_14c9f1f20 <= DAT_14c9ecd48) {
    fVar2 = DAT_14c9ecd48;
  }
  if (1000.0 <= fVar2) {
    fVar2 = 1000.0;
  }
  if (fVar2 <= 0.01) {
    fVar2 = 0.01;
  }
  *(float *)(param_2 + 0x14) = fVar2;
  if (0.0 <= param_3) {
    *(float *)(param_2 + 8) = param_3;
    fVar2 = tanf(param_3);
    *(float *)(param_2 + 0xc) = fVar2;
  }
  return;
}



// FUNCTION 14018bbb0 FUN_14018bbb0 body=394 status=ok
// SIG undefined FUN_14018bbb0(void)

void FUN_14018bbb0(float param_1,float param_2,float *param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = DAT_14c7604a8;
  if (10.0 <= DAT_14c7604a8) {
    fVar4 = 10.0;
  }
  if (fVar4 <= 0.1) {
    fVar4 = 0.1;
  }
  *param_3 = fVar4;
  fVar4 = DAT_14c7604ac;
  if (100.0 <= DAT_14c7604ac) {
    fVar4 = 100.0;
  }
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  param_3[4] = fVar4;
  fVar4 = DAT_14c9ecd48;
  if (1000.0 <= DAT_14c9ecd48) {
    fVar4 = 1000.0;
  }
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  param_3[5] = fVar4;
  param_3[6] = param_1;
  lVar1 = DAT_14c9ece60;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
      fVar4 = param_3[5];
      param_1 = param_3[6];
    }
    if (*(int *)(lVar1 + uVar3 * 4) != 0) {
      if (param_1 <= param_2) {
        param_2 = param_1;
      }
      if (param_2 <= fVar4) {
        param_2 = fVar4;
      }
      param_3[7] = param_2;
      fVar4 = DAT_14c760544;
      if (DAT_14c760544 <= param_2) {
        fVar4 = param_2;
      }
      goto LAB_14018bc54;
    }
  }
  fVar5 = DAT_14c9f1f1c;
  if (param_1 <= DAT_14c9f1f1c) {
    fVar5 = param_1;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  param_3[7] = fVar5;
  fVar4 = DAT_14c760544;
LAB_14018bc54:
  param_3[1] = fVar4;
  fVar4 = DAT_14c9f1f20;
  if (100.0 <= DAT_14c9f1f20) {
    fVar4 = 100.0;
  }
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  param_3[8] = fVar4;
  fVar4 = DAT_14c7604b0;
  if (1000.0 <= DAT_14c7604b0) {
    fVar4 = 1000.0;
  }
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  param_3[9] = fVar4;
  fVar4 = 3.58732e-43;
  if ((int)*(float *)(DAT_14c9ed788 + 4) < 0x100) {
    fVar4 = *(float *)(DAT_14c9ed788 + 4);
  }
  fVar5 = 1.4013e-45;
  if (1 < (int)fVar4) {
    fVar5 = fVar4;
  }
  param_3[0xc] = fVar5;
  param_3[2] = 0.1;
  param_3[3] = 0.100334674;
  param_3[10] = 0.0;
  param_3[0xb] = 0.0;
  return;
}



// FUNCTION 14018bd3a FUN_14018bd3a body=87 status=ok
// SIG undefined FUN_14018bd3a(void)

void FUN_14018bd3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14018be86();
  return;
}



// FUNCTION 14018bd92 FUN_14018bd92 body=149 status=ok
// SIG undefined FUN_14018bd92(void)

void FUN_14018bd92(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (-1 < param_2) {
    param_2 = param_2 * 4;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < param_2) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    uVar3 = *puVar2 + lVar1 & uVar5;
    uVar4 = uVar3 + (longlong)param_2;
    if (puVar2[1] < uVar4) {
      FUN_140023dd8(puVar2,param_2 + (uint)(0xf < param_2) * 8 + 8);
      uVar3 = lVar1 + *puVar2 & uVar5;
      uVar4 = (longlong)param_2 + uVar3;
    }
    *puVar2 = uVar4;
    *param_1 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456bd9fc(param_2,4);
}



// FUNCTION 14018be28 FUN_14018be28 body=93 status=ok
// SIG undefined FUN_14018be28(void)

void FUN_14018be28(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) < param_2) {
    iVar3 = 0x80;
    if (0x9f < param_2 + 0x1fU) {
      uVar2 = param_2 + 0x1fU >> 5;
      if (*(int *)(param_1 + 0x1c) + 0x1fU < 0xa0) {
        uVar1 = 4;
        if (4 < uVar2) {
          uVar1 = uVar2;
        }
      }
      else {
        uVar1 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
      }
      iVar3 = -0x20;
      if (uVar2 <= uVar1) {
        iVar3 = uVar1 << 5;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    FUN_14742bf28(param_1,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 14018be86 FUN_14018be86 body=233 status=ok
// SIG undefined FUN_14018be86(void)

void FUN_14018be86(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 14018bf70 FUN_14018bf70 body=224 status=ok
// SIG undefined FUN_14018bf70(void)

void FUN_14018bf70(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  longlong lVar9;
  
  if (DAT_14c761ae8 - 1U < 3) {
    bVar8 = (bool)((*(byte *)(*(longlong *)(param_1 + 8) + 0x78) & 0x40) >> 6);
    bVar7 = *(byte *)(param_1 + 0x171);
    if (((bVar7 & 0x20) == 0) != bVar8) {
      return;
    }
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x171);
    if ((bVar7 & 0x20) == 0) {
      return;
    }
    bVar8 = false;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar5 = *(longlong *)(param_1 + 0x148);
    lVar9 = 0;
    do {
      uVar2 = *(ushort *)(lVar4 + 4 + lVar9);
      if (bVar8 == false) {
        bVar6 = *(int *)(lVar5 + 0x2b08) <= (int)(uint)uVar2;
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x2b30 + (ulonglong)bVar6 * 0x10) +
                        (ulonglong)((-(uint)bVar6 ^ (uint)uVar2) & 0xffff) * 4);
        *piVar1 = *piVar1 + -1;
      }
      else {
        FUN_14018c1ac(lVar5 + 0x2af0);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    bVar7 = *(byte *)(param_1 + 0x171);
  }
  *(byte *)(param_1 + 0x171) = bVar7 & 0xdf | bVar8 << 5;
  return;
}



// FUNCTION 14018c050 FUN_14018c050 body=115 status=ok
// SIG undefined FUN_14018c050(void)

void FUN_14018c050(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb8)) {
      uVar2 = uVar1 / 0xb8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb8,8);
  }
  return;
}



// FUNCTION 14018c0c4 FUN_14018c0c4 body=232 status=ok
// SIG undefined FUN_14018c0c4(void)

undefined8 * FUN_14018c0c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 14018c1ac FUN_14018c1ac body=127 status=ok
// SIG undefined FUN_14018c1ac(void)

void FUN_14018c1ac(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  
  bVar3 = *(int *)(param_1 + 0x18) <= (int)(param_2 & 0xffff);
  param_1 = param_1 + (ulonglong)bVar3 * 0x10;
  plVar7 = (longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  uVar5 = (ulonglong)(-(uint)bVar3 ^ param_2) & 0xffff;
  iVar4 = (int)uVar5;
  if (iVar2 <= iVar4) {
    uVar6 = (iVar4 - iVar2) + 1;
    *(int *)(param_1 + 0x48) = iVar4 + 1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar6) {
      FUN_1447808da(plVar7);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar7),0,(longlong)(int)uVar6 << 2);
  }
  piVar1 = (int *)(*plVar7 + uVar5 * 4);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 14018c22c FUN_14018c22c body=272 status=ok
// SIG undefined FUN_14018c22c(void)

void FUN_14018c22c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14018c33c FUN_14018c33c body=931 status=ok
// SIG undefined FUN_14018c33c(void)

void FUN_14018c33c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 0x560;
  FUN_1449ad616();
  iVar2 = *(int *)(param_1 + 0x4e8);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x4e0);
    if (*(uint **)(param_1 + 0x4e0) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x4d0);
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar15) goto LAB_14018c4da;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar16 = 0xffffffff;
    do {
      FUN_144a13f80(local_70,&local_60,(longlong)iVar6 * 0x14 + *(longlong *)(param_1 + 0x4c0),0);
      uVar16 = ~(uint)uVar17 & uVar16;
      puVar9 = *(uint **)(param_1 + 0x4e0);
      if (*(uint **)(param_1 + 0x4e0) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x4d0);
      }
      iVar2 = *(int *)(param_1 + 0x4e8);
      iVar6 = (int)uVar15;
      lVar14 = (longlong)iVar6;
      uVar7 = puVar9[lVar14] & uVar16;
      if (uVar7 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = puVar9[lVar14 + lVar10 + 1];
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar14 == lVar10) goto LAB_14018c4da;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar16 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14018c4da:
  local_68 = param_1 + 0x4c0;
  lVar14 = 0;
  do {
    FUN_145bd9614(param_1 + 0x470 + lVar14);
    lVar14 = lVar14 + 0x50;
  } while (lVar14 != 0xf0);
  if ((longlong)(int)param_2[1] != 0) {
    puVar13 = (undefined8 *)*param_2;
    puVar12 = puVar13 + (longlong)(int)param_2[1] * 2;
    do {
      local_58 = puVar13 + 1;
      local_60 = puVar13;
      FUN_144a405ac(param_1 + 0x470,local_4c,&local_60,0);
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar12);
  }
  lVar14 = *(longlong *)(param_1 + 0x6a0);
  if ((char)param_2[2] == '\0') {
    FUN_140102786(*param_2,(int)param_2[1]);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  if (*(char *)(lVar14 + 0xe0) == '\0') {
    FUN_1433e3ca1(*(undefined8 *)(lVar14 + 0xd0),*(undefined4 *)(lVar14 + 0xd8));
    *(undefined1 *)(lVar14 + 0xe0) = 1;
  }
  iVar2 = (int)param_2[1];
  iVar6 = *(int *)(lVar14 + 0xd8);
  if (iVar2 != 0 || iVar6 < 1) {
    iVar8 = 0;
    iVar11 = 0;
    local_74 = iVar6;
    do {
      if ((iVar8 <= iVar2) && (iVar11 == iVar6)) break;
      lVar10 = *(longlong *)(*(longlong *)(lVar14 + 0xd0) + (longlong)iVar11 * 0xc);
      lVar3 = *(longlong *)(*param_2 + (longlong)iVar8 * 0x10);
      if (lVar3 == lVar10) {
        puVar13 = (undefined8 *)(*param_2 + (longlong)iVar8 * 0x10);
        lVar10 = *(longlong *)(lVar14 + 0xd0) + (longlong)iVar11 * 0xc;
        bVar4 = *(byte *)(lVar10 + 8) | *(byte *)((longlong)puVar13 + 0xc);
        if ((bVar4 & 2) != 0) {
          local_58 = puVar13 + 1;
          local_60 = puVar13;
          FUN_144a405ac(param_1 + 0x510,local_4c,&local_60,0);
          bVar4 = *(byte *)(lVar10 + 8) | *(byte *)((longlong)puVar13 + 0xc);
          iVar6 = local_74;
        }
        if ((bVar4 & 1) != 0) {
          FUN_144a8b5fe(local_70,*puVar13);
          local_58 = puVar13 + 1;
          local_60 = puVar13;
          FUN_144a405ac(local_68,local_4c,&local_60,0);
          iVar6 = local_74;
        }
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 1;
      }
      else {
        iVar5 = (int)lVar3 - (int)lVar10;
        if (iVar5 == 0) {
          iVar5 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar10 >> 0x20);
        }
        if (iVar5 < 0) {
          iVar8 = iVar8 + 1;
        }
        else {
          iVar11 = iVar11 + 1;
        }
      }
    } while ((iVar8 != iVar2) || (iVar6 <= iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018c6e0 FUN_14018c6e0 body=140 status=ok
// SIG undefined FUN_14018c6e0(void)

longlong FUN_14018c6e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0xa8);
  EnterCriticalSection(lpCriticalSection);
  lVar2 = FUN_14018c76c(param_1 + 8,0);
  if (lVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
      FUN_14626a04a((longlong *)(param_1 + 0x88),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = param_2;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return lVar2;
}



// FUNCTION 14018c76c FUN_14018c76c body=149 status=ok
// SIG undefined FUN_14018c76c(void)

undefined8 FUN_14018c76c(int *param_1,undefined1 *param_2)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *param_1;
  if (iVar4 < param_1[0x1c]) {
    piVar3 = param_1 + 2;
    if (*(int **)(param_1 + 0x1a) != (int *)0x0) {
      piVar3 = *(int **)(param_1 + 0x1a);
    }
    piVar3 = piVar3 + (longlong)iVar4 * 4 + 2;
    do {
      if (0 < *piVar3) {
        _Dst = *(undefined8 **)(piVar3 + -2);
        uVar1 = *_Dst;
        uVar5 = *piVar3 - 1;
        if (uVar5 == 0) {
          iVar2 = 0;
        }
        else {
          memmove(_Dst,_Dst + 1,(ulonglong)uVar5 << 3);
          iVar2 = *piVar3 + -1;
        }
        *piVar3 = iVar2;
        *param_1 = iVar4;
        LOCK();
        param_1[0x1e] = param_1[0x1e] + -1;
        UNLOCK();
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = (char)iVar4;
          return uVar1;
        }
        return uVar1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (param_1[0x1c] != iVar4);
  }
  return 0;
}



// FUNCTION 14018c802 FUN_14018c802 body=148 status=ok
// SIG undefined FUN_14018c802(void)

void FUN_14018c802(longlong param_1,int param_2)

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
    uVar4 = lVar3 << 3;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 3)) {
      uVar5 = uVar4 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14018c898 FUN_14018c898 body=52 status=ok
// SIG undefined FUN_14018c898(void)

void FUN_14018c898(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x6a0);
  FUN_14018c8cc(param_1 + 4,lVar1);
  param_1[0x10] = lVar1 + 0xb0;
  return;
}



// FUNCTION 14018c8cc FUN_14018c8cc body=143 status=ok
// SIG undefined FUN_14018c8cc(void)

void FUN_14018c8cc(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_144717630();
  FUN_1448859f0(param_1,*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(uint *)(param_1 + 8);
  if (-1 < (int)uVar4) {
    plVar1 = (longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(uint *)(param_1 + 0x24) == uVar4) {
      iVar3 = 0;
      uVar2 = uVar4;
    }
    else {
      FUN_140036888(plVar1);
      uVar4 = *(uint *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0x20);
      uVar2 = *(uint *)(param_1 + 0x24);
    }
    *(uint *)(param_1 + 0x20) = uVar4 + iVar3;
    if (uVar2 - iVar3 < uVar4) {
      FUN_1400c29fa(plVar1);
    }
    memset((void *)((longlong)iVar3 + *plVar1),0,(longlong)(int)uVar4);
    *(undefined1 *)*plVar1 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 14018c95c FUN_14018c95c body=324 status=ok
// SIG undefined FUN_14018c95c(void)

undefined8 FUN_14018c95c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xd8);
    lVar5 = (longlong)*(int *)(param_1 + 0xe0) * 0x50;
    do {
      if (*(char *)(lVar6 + 0x40) == '\x01') {
        if ((*(char *)(lVar6 + 8) != '\0') ||
           (fVar9 = *(float *)(lVar6 + 0x3c) + *(float *)(lVar6 + 0x48),
           *(float *)(lVar6 + 0x34) <= fVar9 && fVar9 != *(float *)(lVar6 + 0x34)))
        goto LAB_14018ca59;
      }
      else if (((*(int *)(lVar6 + 0x18) != 0) &&
               (((uVar1 = *(uint *)(lVar6 + 0x14), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))
                && (plVar8 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar8 != (longlong *)0x0)))) &&
              ((((int)plVar8[2] == *(int *)(lVar6 + 0x18) &&
                ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (*plVar8 != 0)))) {
        iVar2 = *(int *)(lVar6 + 0x10);
        if ((iVar2 == 0) || (uVar1 = *(uint *)(lVar6 + 0xc), (int)uVar1 < 0)) {
LAB_14018ca9b:
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar4 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 2) != iVar2)) ||
               ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) goto LAB_14018ca9b;
            uVar7 = *puVar4;
          }
        }
        cVar3 = FUN_14489e746(*plVar8,lVar6,uVar7,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
        if (cVar3 != '\0') {
LAB_14018ca59:
          FUN_14489ea98(param_1);
          FUN_14018caa0(param_1);
          return 0;
        }
      }
      lVar6 = lVar6 + 0x50;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
  }
  return 1;
}



// FUNCTION 14018caa0 FUN_14018caa0 body=439 status=ok
// SIG undefined FUN_14018caa0(void)

void FUN_14018caa0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [48];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_1[0x1c] != 0) {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x400000000;
    lVar2 = FUN_1447210f0(param_1[7]);
    if (lVar2 == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)*(double *)(lVar2 + 0x6d0);
    }
    if ((longlong)(int)param_1[0x1c] != 0) {
      lVar2 = param_1[0x1b];
      uVar1 = *(undefined4 *)(param_1[7] + 0x74);
      lVar6 = (longlong)(int)param_1[0x1c] * 0x50 + lVar2;
      do {
        FUN_144b39d0c(lVar2,fVar9,uVar1,local_a0);
        if (*(char *)(lVar2 + 8) == '\x01') {
          fVar7 = *(float *)(lVar2 + 0x30);
          fVar8 = *(float *)(lVar2 + 0x34);
          if (fVar7 <= fVar8) {
            if ((longlong)*(int *)(lVar2 + 0x28) != 0) {
              lVar4 = (longlong)*(int *)(lVar2 + 0x28) * 0x18;
              lVar5 = *(longlong *)(lVar2 + 0x20) + 0xc;
              do {
                if (*(char *)(lVar5 + 8) == '\x01') {
                  *(undefined1 *)(lVar5 + 8) = 2;
                  (**(code **)(*param_1 + 0x78))(param_1,lVar5,2);
                }
                *(undefined1 *)(lVar5 + 8) = 0;
                lVar5 = lVar5 + 0x18;
                lVar4 = lVar4 + -0x18;
              } while (lVar4 != 0);
              fVar7 = *(float *)(lVar2 + 0x30);
              fVar8 = *(float *)(lVar2 + 0x34);
            }
            *(float *)(lVar2 + 0x34) = fVar8 - fVar7;
            FUN_144b39d0c(lVar2,fVar9,uVar1,local_a0);
          }
        }
        lVar2 = lVar2 + 0x50;
      } while (lVar2 != lVar6);
      puVar3 = local_a0;
      if (local_70 != (undefined1 *)0x0) {
        puVar3 = local_70;
      }
      if ((longlong)(int)local_68 != 0) {
        lVar2 = (longlong)(int)local_68 * 0xc;
        do {
          (**(code **)(*param_1 + 0x78))(param_1,puVar3,puVar3[8]);
          puVar3 = puVar3 + 0xc;
          lVar2 = lVar2 + -0xc;
        } while (lVar2 != 0);
      }
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14018cc58 FUN_14018cc58 body=104 status=ok
// SIG undefined FUN_14018cc58(void)

ulonglong FUN_14018cc58(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 == 0) ||
        ((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0)))) ||
       ((*(uint *)(lVar3 + 0x10) != uVar2 || ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))) {
      uVar4 = FUN_144729dda(param_2);
      uVar4 = uVar4 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 14018ccc0 FUN_14018ccc0 body=153 status=ok
// SIG undefined FUN_14018ccc0(void)

void FUN_14018ccc0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x50)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x50,8);
      uVar3 = uVar3 / 0x50;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x50,8);
    }
  }
  return;
}



// FUNCTION 14018cd5a FUN_14018cd5a body=1344 status=ok
// SIG undefined FUN_14018cd5a(void)

void FUN_14018cd5a(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_a8 [44];
  uint local_7c;
  undefined8 local_78;
  longlong *plStack_70;
  char local_68;
  undefined1 local_67;
  ulonglong local_60;
  
  cVar4 = (char)param_3;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar14 = *(longlong *)(param_1 + 0x30);
  if ((*(char *)(lVar14 + 0x58) != '\x01') || (*(char *)(param_1 + 0xa0) == '\0')) {
    if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
      plVar12 = *(longlong **)(lVar14 + 0x48);
      plVar10 = plVar12 + *(int *)(lVar14 + 0x50);
      local_7c = param_3 & 0xff;
      uVar11 = local_7c;
      do {
        plVar3 = (longlong *)*plVar12;
        if ((plVar3 != (longlong *)0x0) && (plVar3[6] == *param_2)) {
          if (cVar4 == '\x01') {
            plVar13 = *(longlong **)(param_1 + 0x10);
            if (plVar13 == (longlong *)0x0) {
LAB_14018cfbc:
              local_78 = 0;
              plStack_70 = (longlong *)0x0;
              bVar16 = true;
            }
            else {
              iVar6 = (int)plVar13[1];
              do {
                if (iVar6 == 0) goto LAB_14018cfbc;
                LOCK();
                iVar5 = (int)plVar13[1];
                bVar16 = iVar6 == iVar5;
                if (bVar16) {
                  *(int *)(plVar13 + 1) = iVar6 + 1;
                  iVar5 = iVar6;
                }
                iVar6 = iVar5;
                UNLOCK();
              } while (!bVar16);
              uVar8 = *(undefined8 *)(param_1 + 8);
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar13 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
              bVar16 = false;
              local_78 = uVar8;
              plStack_70 = plVar13;
            }
            plVar13 = plStack_70;
            (**(code **)(*plVar3 + 0x2a8))(plVar3,&local_78);
          }
          else {
            if (uVar11 == 2) {
              plVar13 = *(longlong **)(param_1 + 0x10);
              if (plVar13 == (longlong *)0x0) {
LAB_14018cfa1:
                local_78 = 0;
                plStack_70 = (longlong *)0x0;
                bVar16 = true;
              }
              else {
                iVar6 = (int)plVar13[1];
                do {
                  if (iVar6 == 0) goto LAB_14018cfa1;
                  LOCK();
                  iVar5 = (int)plVar13[1];
                  bVar16 = iVar6 == iVar5;
                  if (bVar16) {
                    *(int *)(plVar13 + 1) = iVar6 + 1;
                    iVar5 = iVar6;
                  }
                  iVar6 = iVar5;
                  UNLOCK();
                } while (!bVar16);
                uVar8 = *(undefined8 *)(param_1 + 8);
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar13 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                bVar16 = false;
                local_78 = uVar8;
                plStack_70 = plVar13;
              }
              lVar14 = *plVar3;
              uVar8 = 0;
            }
            else {
              if (uVar11 != 3) {
                plVar13 = *(longlong **)(param_1 + 0x10);
                if (plVar13 == (longlong *)0x0) {
LAB_14018cffb:
                  local_78 = 0;
                  plStack_70 = (longlong *)0x0;
                  bVar16 = true;
                }
                else {
                  iVar6 = (int)plVar13[1];
                  do {
                    if (iVar6 == 0) goto LAB_14018cffb;
                    LOCK();
                    iVar5 = (int)plVar13[1];
                    bVar16 = iVar6 == iVar5;
                    if (bVar16) {
                      *(int *)(plVar13 + 1) = iVar6 + 1;
                      iVar5 = iVar6;
                    }
                    iVar6 = iVar5;
                    UNLOCK();
                  } while (!bVar16);
                  uVar8 = *(undefined8 *)(param_1 + 8);
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar1 = plVar13 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar13 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                  bVar16 = false;
                  local_78 = uVar8;
                  plStack_70 = plVar13;
                }
                plVar13 = plStack_70;
                (**(code **)(*plVar3 + 0x2a0))(plVar3,&local_78);
                goto LAB_14018d017;
              }
              plVar13 = *(longlong **)(param_1 + 0x10);
              if (plVar13 == (longlong *)0x0) {
LAB_14018cfda:
                local_78 = 0;
                plStack_70 = (longlong *)0x0;
                bVar16 = true;
              }
              else {
                iVar6 = (int)plVar13[1];
                do {
                  if (iVar6 == 0) goto LAB_14018cfda;
                  LOCK();
                  iVar5 = (int)plVar13[1];
                  bVar16 = iVar6 == iVar5;
                  if (bVar16) {
                    *(int *)(plVar13 + 1) = iVar6 + 1;
                    iVar5 = iVar6;
                  }
                  iVar6 = iVar5;
                  UNLOCK();
                } while (!bVar16);
                uVar8 = *(undefined8 *)(param_1 + 8);
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar13 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                bVar16 = false;
                local_78 = uVar8;
                plStack_70 = plVar13;
              }
              lVar14 = *plVar3;
              uVar8 = 1;
            }
            plVar13 = plStack_70;
            (**(code **)(lVar14 + 0x2b0))(plVar3,&local_78,uVar8);
          }
LAB_14018d017:
          plVar3 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          uVar11 = local_7c;
          if (!bVar16) {
            LOCK();
            plVar3 = plVar13 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              uVar11 = local_7c;
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                uVar11 = local_7c;
              }
            }
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar10);
      lVar14 = *(longlong *)(param_1 + 0x30);
    }
    if (((((*(char *)(lVar14 + 0x68) == '\x04') &&
          (lVar9 = *(longlong *)(lVar14 + 0x78), lVar9 != 0)) &&
         (lVar7 = FUN_140789e1e(), lVar7 != 0)) &&
        ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)))) &&
       ((*(longlong *)(lVar14 + 0x78) != 0 &&
        (plVar12 = *(longlong **)(param_1 + 0x38), plVar12 != (longlong *)0x0)))) {
      uVar8 = FUN_140d4a144();
      plVar12 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,uVar8);
      if (plVar12 != (longlong *)0x0) {
        uVar8 = FUN_140d4a144();
        plVar10 = (longlong *)FUN_144718840(plVar12,uVar8);
        if (plVar10 != (longlong *)0x0 && plVar12 != plVar10) {
          uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
          FUN_1413283d6(uVar8,(longlong *)(lVar14 + 0x78),param_2,param_3);
        }
      }
    }
    plVar12 = *(longlong **)(param_1 + 0xa8);
    if (plVar12 != (longlong *)0x0) {
      if (cVar4 == '\0') {
        local_68 = *(char *)(param_1 + 0xa0) != '\0';
        plStack_70 = (longlong *)*param_2;
        local_78 = *(undefined8 *)(param_1 + 0x38);
        uVar8 = DAT_14cb680a8;
      }
      else {
        local_68 = cVar4 + -1;
        local_67 = *(char *)(param_1 + 0xa0) != '\0';
        plStack_70 = (longlong *)*param_2;
        local_78 = *(undefined8 *)(param_1 + 0x38);
        uVar8 = DAT_14cb680b8;
      }
      uVar8 = FUN_14477b072(plVar12,uVar8);
      (**(code **)(*plVar12 + 0x248))(plVar12,uVar8,&local_78);
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        puVar15 = (uint *)(*(longlong *)(param_1 + 0xc0) + 0xc);
        lVar14 = (longlong)*(int *)(param_1 + 200) * 0x1c;
        do {
          if ((((*(longlong *)(puVar15 + -3) == *param_2) && ((char)puVar15[-1] == cVar4)) &&
              ((*(longlong *)(puVar15 + 2) != 0 &&
               (((puVar15[1] != 0 && (uVar11 = *puVar15, -1 < (int)uVar11)) &&
                ((int)uVar11 < DAT_14c9647dc)))))) &&
             (((plVar12 = (longlong *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0 && (*(uint *)(plVar12 + 2) == puVar15[1])) &&
              ((uVar8 = *(undefined8 *)(param_1 + 0x38), (*(uint *)(plVar12 + 1) & 0x10200000) == 0
               && ((*plVar12 != 0 &&
                   (lVar9 = FUN_1400796d0(*(undefined8 *)(*plVar12 + 0x10),
                                          *(longlong *)(puVar15 + 2),1), lVar9 != 0)))))))) {
            FUN_14132854b(puVar15,uVar8);
          }
          puVar15 = puVar15 + 7;
          lVar14 = lVar14 + -0x1c;
        } while (lVar14 != 0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14018d29c FUN_14018d29c body=47 status=ok
// SIG undefined FUN_14018d29c(void)

void FUN_14018d29c(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x7d) = 0;
  FUN_14068f02a(param_1 + 0x28);
  FUN_14068f634(param_1 + 0x28);
  FUN_144aa591c(param_1);
  return;
}



// FUNCTION 14018d2cc FUN_14018d2cc body=353 status=ok
// SIG undefined FUN_14018d2cc(void)

void FUN_14018d2cc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14018d353;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14018d353:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14018d42e FUN_14018d42e body=315 status=ok
// SIG undefined FUN_14018d42e(void)

void FUN_14018d42e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14018d498;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14018d498:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14018d56a FUN_14018d56a body=12 status=ok
// SIG undefined FUN_14018d56a(void)

void FUN_14018d56a(longlong param_1)

{
  *(byte *)(param_1 + 0x264) = *(byte *)(param_1 + 0x264) & 0xfd;
  FUN_14018d576();
  return;
}



// FUNCTION 14018d576 FUN_14018d576 body=1050 status=ok
// SIG undefined FUN_14018d576(void)

bool FUN_14018d576(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 local_d8;
  int local_d0;
  code *local_c8;
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
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(longlong *)(param_1 + 8) = param_3;
  if (param_3 != 0) {
    FUN_14018da78(param_1 + 0x38,param_3,param_4,1);
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(longlong *)(param_1 + 8) + 0x194) >> 2 & 1;
    }
    *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) & 0xfffffffe | uVar6;
    if (DAT_14cb366a0 == 0) {
      local_f0 = &local_c8;
      local_c8 = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = (code *)&LAB_140eca530;
      local_f8 = &LAB_148063819;
      local_100 = (code *)&LAB_1460672b6;
      local_108 = L"Niagara";
      local_110 = 0;
      local_118 = 0x10000006;
      local_120 = 8;
      local_128 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    lVar9 = DAT_14cb366a0;
    lVar7 = *(longlong *)(DAT_14cb366a0 + 0x110);
    if (lVar7 == 0) {
      FUN_140aa6c08(DAT_14cb366a0);
      lVar7 = *(longlong *)(lVar9 + 0x110);
    }
    lVar9 = *(longlong *)(param_1 + 8);
    if (lVar9 == 0) {
      bVar12 = true;
    }
    else {
      bVar12 = *(int *)(lVar9 + 0x368) < 1;
    }
    cVar1 = *(char *)(lVar7 + 0x3a);
    lVar7 = FUN_14018d992();
    if (DAT_14c951858 == 0) {
      local_f0 = &local_c8;
      local_c8 = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = FUN_14081d0ea;
      local_f8 = &LAB_1468c5283;
      local_100 = FUN_142809da0;
      local_108 = L"Engine";
      local_110 = 0x400000000;
      local_118 = 0x10000000;
      local_120 = 8;
      local_128 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar9 = *(longlong *)(lVar9 + 0x20);
    bVar11 = true;
    if (lVar9 != 0) {
      do {
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (lVar10 = lVar9,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
          lVar10 = 0;
        }
      } while ((lVar10 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
      if (lVar10 != 0) {
        bVar11 = (*(byte *)(lVar10 + 0x51) & 8) == 0;
      }
    }
    if (bVar12 || cVar1 != '\x01') {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
      if (DAT_14cb43108 < 1) {
        bVar5 = bVar11 & DAT_14cb43108 == 0;
      }
    }
    *(byte *)(param_1 + 0x268) = bVar5;
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x368);
    if (iVar3 < 1) {
      local_58 = 0;
      uStack_50 = 0;
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
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
    }
    else {
      local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x360);
      local_d0 = iVar3;
      FUN_148032af4(&local_d8,&local_c8);
    }
    uVar8 = FUN_14018dc5c(&local_c8);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    if (param_2 == 0) {
      lVar7 = *(longlong *)(param_1 + 8);
      iVar3 = *(int *)(lVar7 + 0x390);
      if ((longlong)iVar3 != 0) {
        uVar2 = *(undefined1 *)(lVar7 + 0x30);
        lVar7 = *(longlong *)(lVar7 + 0x388);
        lVar9 = 0;
        do {
          plVar4 = *(longlong **)(lVar7 + 0x40 + lVar9);
          if (plVar4 == (longlong *)0x0) {
            uVar6 = *(uint *)(param_1 + 0x264);
          }
          else {
            bVar5 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar2);
            *(uint *)(param_1 + 0x264) =
                 (*(uint *)(param_1 + 0x264) & 0xfffffffb) +
                 (uint)(byte)((byte)((*(uint *)(param_1 + 0x264) & 4) >> 2) | bVar5) * 4;
            plVar4 = *(longlong **)(lVar7 + 0x40 + lVar9);
            bVar5 = (**(code **)(*plVar4 + 0x350))(plVar4,uVar2);
            uVar6 = (*(uint *)(param_1 + 0x264) & 0xfffffff7) +
                    (uint)(byte)((byte)((*(uint *)(param_1 + 0x264) & 8) >> 3) | bVar5) * 8;
            *(uint *)(param_1 + 0x264) = uVar6;
          }
        } while (((~uVar6 & 0xc) != 0) &&
                (bVar12 = (longlong)iVar3 * 0x50 + -0x50 != lVar9, lVar9 = lVar9 + 0x50, bVar12));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 != 0;
}



// FUNCTION 14018d992 FUN_14018d992 body=228 status=ok
// SIG undefined FUN_14018d992(void)

longlong FUN_14018d992(void)

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
  if (DAT_14cb436a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14638c09e;
    local_38 = &LAB_1481f47f3;
    local_40 = FUN_140bd4743;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x560;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSystem",&DAT_14cb436a8,&DAT_1481f47f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb436a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018da78 FUN_14018da78 body=483 status=ok
// SIG undefined FUN_14018da78(void)

void FUN_14018da78(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if (*(byte *)(param_2 + 0x30) - 3 < 6) {
      FUN_144842084(param_2,&local_48);
      if ((local_48 != 0) && (lVar3 = (longlong)*(int *)(local_48 + 0x50), lVar3 != 0)) {
        if (*(char *)(local_48 + 0x40) == '\0') {
          lVar2 = *(longlong *)(local_48 + 0x48);
LAB_14018daea:
          if (lVar2 != 0) {
            cVar1 = *(char *)(lVar2 + 0x3c);
            if (cVar1 == '\0') goto LAB_14018db08;
            goto LAB_14018db17;
          }
        }
        else {
          lVar2 = *(longlong *)(local_48 + 0x48);
          if (((local_3c == 0 && local_40 == 0) && local_38 == 0) && local_34 == 0) {
            lVar3 = lVar3 * 0x368;
            do {
              if ((((*(int *)(lVar2 + 8) == *(int *)(local_48 + 0x30)) &&
                   (*(int *)(lVar2 + 0xc) == *(int *)(local_48 + 0x34))) &&
                  (*(int *)(lVar2 + 0x10) == *(int *)(local_48 + 0x38))) &&
                 (*(int *)(lVar2 + 0x14) == *(int *)(local_48 + 0x3c))) goto LAB_14018daea;
              lVar2 = lVar2 + 0x368;
              lVar3 = lVar3 + -0x368;
            } while (lVar3 != 0);
          }
          else {
            lVar3 = lVar3 * 0x368;
            do {
              if (((*(int *)(lVar2 + 8) == local_40) && (*(int *)(lVar2 + 0xc) == local_3c)) &&
                 ((*(int *)(lVar2 + 0x10) == local_38 && (*(int *)(lVar2 + 0x14) == local_34))))
              goto LAB_14018daea;
              lVar2 = lVar2 + 0x368;
              lVar3 = lVar3 + -0x368;
            } while (lVar3 != 0);
          }
        }
      }
    }
    else if (*(byte *)(param_2 + 0x30) - 9 < 4) {
LAB_14018db08:
      if (*(char *)(param_2 + 0x348) != '\0') {
        cVar1 = '\0';
LAB_14018db17:
        if (cVar1 == param_3) {
          (**(code **)(*param_1 + 0x30))(param_1,0);
          local_48 = *(longlong *)(param_2 + 0xf0);
          local_40 = *(int *)(param_2 + 0xf8);
          FUN_140096e5c(param_1);
          FUN_14008d088(param_1 + 6,param_2 + 0x100);
          FUN_14009c6e4(param_1 + 8,param_2 + 0x110);
          if (param_4 != '\0') {
            *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 7;
            FUN_140219f72(param_1);
          }
          param_1[0x11] = param_2 + 0xd0;
          goto LAB_14018dc33;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x30))(param_1,1);
LAB_14018dc33:
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14018dc5c FUN_14018dc5c body=588 status=ok
// SIG undefined FUN_14018dc5c(void)

undefined8 * FUN_14018dc5c(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar10 = *(ushort *)(param_1 + 0xb);
    lVar13 = (ulonglong)*(ushort *)((longlong)param_1 + 0x5c) + (ulonglong)uVar10;
    lVar14 = (*(int *)(param_1 + 0xe) + lVar13) * 0x10;
    uVar12 = lVar14 + ((ulonglong)*(uint *)((longlong)param_1 + 0x4c) * 4 + 0xf & 0xfffffffffffffff0
                      ) + 0xf0;
    uVar8 = ((uint)uVar10 + (uint)uVar10 * 2 + 0xf & 0xfffffff0) + uVar12;
    lVar9 = ((uint)*(ushort *)((longlong)param_1 + 0x5a) +
             (uint)*(ushort *)((longlong)param_1 + 0x5a) * 2 + 0xf & 0xfffffff0) + uVar8;
    puVar6 = (undefined8 *)FUN_14001cc68(lVar9,0x10);
    uVar7 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      *(int *)(puVar6 + 0x18) = (int)lVar9;
      puVar6[2] = puVar6 + 0x1c;
      puVar6[3] = (ulonglong)(uint)((int)lVar13 << 4) + 0xe0 + (longlong)puVar6;
      puVar6[4] = (ulonglong)((int)lVar14 + 0xf0) + (longlong)puVar6;
      lVar13 = (uVar12 & 0xffffffff) + (longlong)puVar6;
      puVar6[0xb] = lVar13;
      lVar9 = (uVar8 & 0xffffffff) + (longlong)puVar6;
      puVar6[0xd] = lVar9;
      uVar10 = *(ushort *)(param_1 + 0xb);
      puVar6[0xc] = lVar13 + (ulonglong)uVar10;
      uVar11 = *(ushort *)((longlong)param_1 + 0x5a);
      puVar6[0xe] = lVar9 + (ulonglong)uVar11;
      *(undefined4 *)(puVar6 + 0xf) = 0;
      if (*(int *)((longlong)param_1 + 100) != 0) {
        lVar9 = 0;
        uVar8 = 0;
        do {
          *(undefined8 *)(puVar6[3] + lVar9) = 0;
          *(undefined4 *)(puVar6[3] + 8 + lVar9) = *(undefined4 *)(param_1[8] + 8 + lVar9);
          *(undefined4 *)(puVar6[3] + 0xc + lVar9) = *(undefined4 *)(param_1[8] + 0xc + lVar9);
          uVar8 = uVar8 + 1;
          uVar7 = *(uint *)((longlong)param_1 + 100);
          lVar9 = lVar9 + 0x10;
        } while (uVar8 < uVar7);
        uVar10 = *(ushort *)(param_1 + 0xb);
        uVar11 = *(ushort *)((longlong)param_1 + 0x5a);
      }
      puVar6[5] = param_1[2];
      puVar6[6] = param_1[3];
      puVar6[7] = param_1[4];
      puVar6[8] = param_1[5];
      puVar6[9] = param_1[6];
      puVar6[10] = param_1[7];
      iVar2 = *(int *)((longlong)param_1 + 0x54);
      *(int *)(puVar6 + 0x11) = iVar2;
      *(uint *)((longlong)puVar6 + 0x8c) = (uint)uVar10;
      *(uint *)(puVar6 + 0x12) = (uint)uVar11;
      *(uint *)(puVar6 + 0x13) = (uint)*(ushort *)(param_1 + 0xc);
      uVar1 = *(ushort *)((longlong)param_1 + 0x62);
      *(uint *)((longlong)puVar6 + 0x9c) = (uint)uVar1;
      *puVar6 = *param_1;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 9);
      *(uint *)((longlong)puVar6 + 0x94) = (uint)*(ushort *)((longlong)param_1 + 0x5e);
      iVar3 = *(int *)((longlong)param_1 + 0x4c);
      *(int *)(puVar6 + 0x14) = iVar3;
      iVar4 = *(int *)((longlong)param_1 + 0x6c);
      *(int *)((longlong)puVar6 + 0xa4) = iVar4;
      *(uint *)((longlong)puVar6 + 0x7c) = *(uint *)((longlong)param_1 + 0x74) & 0xffffffef;
      puVar6[0x17] = param_1[0xf];
      *(uint *)(puVar6 + 0x10) = uVar7;
      iVar5 = *(int *)(param_1 + 0xd);
      *(int *)((longlong)puVar6 + 0x84) = iVar5;
      *(uint *)(puVar6 + 0x15) =
           (iVar2 + (uint)uVar1 + iVar5 + (uint)uVar10 + (uint)uVar11 * 2) * 9 +
           (iVar4 + iVar3) * 0x10 + 0x300;
      *(int *)((longlong)puVar6 + 0xac) = iVar3 * 4;
      *(int *)(puVar6 + 0x16) = iVar3 * 4;
      *(int *)((longlong)puVar6 + 0xb4) = iVar3 << 3;
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14018dea8 FUN_14018dea8 body=771 status=ok
// SIG undefined FUN_14018dea8(void)

void FUN_14018dea8(longlong *param_1,double *param_2,double *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  size_t _Size;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_118 [40];
  longlong local_f0;
  void *local_e8;
  ulonglong uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar8 = *(uint *)(param_1 + 1);
  lVar15 = (longlong)(int)uVar8;
  local_e8 = (void *)0x0;
  uStack_e0 = (ulonglong)uVar8;
  if (lVar15 != 0) {
    FUN_144941252(&local_e8);
    _Size = lVar15 * 8;
    memset(local_e8,0,_Size);
    if (0 < (int)uVar8) {
      lVar11 = 0;
      do {
        *(ulonglong *)((longlong)local_e8 + lVar11) =
             ~-(ulonglong)(0.0 < *param_3) &
             (ulonglong)(*(double *)(*param_1 + 8 + lVar11 * 2) - param_2[1]) |
             (ulonglong)(*(double *)(*param_1 + lVar11 * 2) - *param_2) &
             -(ulonglong)(0.0 < *param_3);
        lVar11 = lVar11 + 8;
      } while (_Size - lVar11 != 0);
      local_f0 = lVar15 * 8 + -8;
      lVar11 = 1;
      lVar15 = 0;
      do {
        puVar14 = (undefined8 *)(lVar15 * 2 + *param_1);
        if (*(double *)((longlong)local_e8 + lVar15) <= 0.0) {
          iVar16 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar16 + 1U;
          plVar12 = param_5;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar16 + 1U) {
            FUN_14489624a(param_5,iVar16);
          }
        }
        else {
          iVar16 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar16 + 1U;
          plVar12 = param_4;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar16 + 1U) {
            FUN_14489624a(param_4,iVar16);
          }
        }
        uVar10 = puVar14[1];
        puVar1 = (undefined8 *)(*plVar12 + (longlong)iVar16 * 0x10);
        *puVar1 = *puVar14;
        puVar1[1] = uVar10;
        dVar2 = *(double *)((longlong)local_e8 + lVar15);
        lVar13 = lVar11;
        if (local_f0 == lVar15) {
          lVar13 = 0;
        }
        dVar3 = *(double *)((longlong)local_e8 + lVar13 * 8);
        if (dVar2 * dVar3 < 0.0) {
          lVar9 = *param_1;
          dVar4 = *(double *)(lVar9 + lVar13 * 0x10);
          dVar5 = *(double *)(lVar9 + 8 + lVar13 * 0x10);
          dVar6 = *(double *)(lVar9 + lVar15 * 2);
          dVar7 = *(double *)(lVar9 + 8 + lVar15 * 2);
          iVar16 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar16 + 1U) {
            FUN_14489624a(param_4,iVar16);
          }
          dVar2 = -dVar2 / (dVar3 - dVar2);
          dVar7 = (dVar5 - dVar7) * dVar2 + dVar7;
          dVar6 = (dVar4 - dVar6) * dVar2 + dVar6;
          lVar13 = *param_4;
          *(double *)(lVar13 + (longlong)iVar16 * 0x10) = dVar6;
          *(double *)(lVar13 + 8 + (longlong)iVar16 * 0x10) = dVar7;
          iVar16 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar16 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar16 + 1U) {
            FUN_14489624a(param_5,iVar16);
          }
          lVar13 = *param_5;
          *(double *)(lVar13 + (longlong)iVar16 * 0x10) = dVar6;
          *(double *)(lVar13 + 8 + (longlong)iVar16 * 0x10) = dVar7;
        }
        lVar15 = lVar15 + 8;
        lVar11 = lVar11 + 1;
      } while (_Size - lVar15 != 0);
    }
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14018e1ac FUN_14018e1ac body=601 status=ok
// SIG undefined FUN_14018e1ac(void)

ulonglong FUN_14018e1ac(longlong param_1,int param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(DAT_14ca35a68 + 4);
  if (10.0 <= fVar9) {
    fVar9 = 10.0;
  }
  if (fVar9 <= 0.1) {
    fVar9 = 0.1;
  }
  param_2 = param_2 + -1;
  fVar7 = (float)param_2;
  fVar10 = fVar9 * param_3;
  if (fVar7 <= fVar9 * param_3) {
    fVar10 = fVar7;
  }
  if (fVar10 <= 1e-05) {
    fVar10 = 1e-05;
  }
  iVar2 = -((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1);
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 < 0) {
    uVar5 = 0;
  }
  else {
    if (fVar7 <= param_3) {
      param_3 = fVar7;
    }
    if (param_3 <= 1e-05) {
      param_3 = 1e-05;
    }
    iVar6 = -iVar2;
    iVar3 = iVar2 * 2;
    fVar9 = 0.0;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      fVar7 = ABS((float)iVar6);
      fVar8 = 1.0 - fVar7;
      fVar10 = 0.0;
      if (0.0 <= fVar8) {
        fVar10 = fVar8;
      }
      if (param_4 <= 1.0) {
        fVar7 = fVar7 / param_3;
        fVar7 = expf(fVar7 * fVar7 * -16.7);
        fVar7 = (fVar10 - fVar7) * param_4 + fVar7;
      }
      else {
        fVar7 = powf(fVar10,param_4);
      }
      if (iVar3 == 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = 1.0 - ABS((float)(iVar6 + 1));
        fVar8 = 0.0;
        if (0.0 <= fVar10) {
          fVar8 = fVar10;
        }
        if (param_4 <= 1.0) {
          fVar10 = ABS((float)(iVar6 + 1)) / param_3;
          fVar10 = expf(fVar10 * fVar10 * -16.7);
          fVar10 = (fVar8 - fVar10) * param_4 + fVar10;
        }
        else {
          fVar10 = powf(fVar8,param_4);
        }
      }
      fVar7 = fVar7 + fVar10;
      *(float *)(param_1 + uVar4 * 8) = fVar10 / fVar7 + (float)iVar6;
      *(float *)(param_1 + 4 + uVar4 * 8) = fVar7;
      fVar9 = fVar9 + fVar7;
      uVar5 = uVar4 + 1;
      iVar6 = iVar6 + 2;
      iVar3 = iVar3 + -2;
    } while (iVar6 <= iVar2);
    uVar1 = 0xffffffffffffffff;
    do {
      *(float *)(param_1 + 0xc + uVar1 * 8) = *(float *)(param_1 + 0xc + uVar1 * 8) * (1.0 / fVar9);
      uVar1 = uVar1 + 1;
    } while (uVar4 != uVar1);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14018e405 FUN_14018e405 body=4292 status=ok
// SIG undefined FUN_14018e405(void)

void FUN_14018e405(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,char param_10)

{
  ulonglong *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined *puVar18;
  int iVar19;
  undefined8 **ppuVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  undefined8 unaff_R13;
  undefined8 *puVar30;
  ulonglong uVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined1 local_261;
  undefined8 *local_260;
  ulonglong *local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 *local_238;
  undefined8 local_230;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  ulonglong *local_1e8;
  undefined1 local_1d9;
  longlong local_1d8 [14];
  undefined8 local_168 [14];
  undefined8 local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  ulonglong local_60;
  undefined7 uVar31;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (*param_7 == 0) {
    uVar29 = 0;
  }
  else {
    uVar31 = (undefined7)((ulonglong)unaff_R13 >> 8);
    uVar29 = (undefined4)CONCAT71(uVar31,1);
    if ((int)param_7[2] == (int)param_7[1]) {
      uVar29 = (undefined4)
               CONCAT71(uVar31,*(int *)((longlong)param_7 + 0x14) !=
                               *(int *)((longlong)param_7 + 0xc));
    }
  }
  bVar33 = true;
  if ((((int)param_6[1] == (int)DAT_14c967818) &&
      (*(int *)((longlong)param_6 + 0xc) == DAT_14c967818._4_4_)) &&
     ((int)param_6[2] == *(int *)(*(longlong *)(*param_6 + 0x38) + 0x84))) {
    bVar33 = *(int *)((longlong)param_6 + 0x14) != *(int *)(*(longlong *)(*param_6 + 0x38) + 0x88);
  }
  local_238 = (undefined8 *)CONCAT71(local_238._1_7_,bVar33);
  if ((*(int *)(DAT_14ca35a50 + 4) == 2) ||
     (uVar10 = *(uint *)(param_8 + 1), 0x20 < uVar10 && *(int *)(DAT_14ca35a50 + 4) != 0)) {
    uVar10 = 0;
  }
  local_228 = CONCAT44(local_228._4_4_,uVar10);
  cVar2 = *(char *)(param_3 + 0x13820);
  puVar18 = &DAT_14ca2c3a0;
  if (param_10 != '\0') {
    puVar18 = &DAT_14ca36298;
  }
  uVar26 = *(undefined8 *)(puVar18 + 0x10);
  local_240 = *param_6;
  local_1d8[1] = param_6[1];
  local_1d8[2] = param_6[2];
  local_1d8[0] = *(longlong *)(*(longlong *)(local_240 + 0x38) + 0x84);
  local_1e8 = param_1;
  FUN_144a2c7c2(local_168);
  local_260 = (undefined8 *)uVar26;
  if ((char)uVar29 == '\0') {
    lVar17 = 0;
    local_248 = 0;
  }
  else {
    lVar17 = *param_7;
    local_d8 = *(undefined8 **)(lVar17 + 0x84);
    uStack_d0 = (undefined4)param_7[1];
    uStack_cc = (undefined4)((ulonglong)param_7[1] >> 0x20);
    uStack_c8 = (undefined4)param_7[2];
    uStack_c4 = (undefined4)((ulonglong)param_7[2] >> 0x20);
    FUN_144a2c7c2(local_1d8);
    local_248 = uVar26;
  }
  puVar24 = (undefined1 *)0x4000009;
  if (cVar2 != '\0') {
    puVar24 = &DAT_00020008;
  }
  local_d8 = (undefined8 *)
             ((ulonglong)puVar24 |
             (ulonglong)((uint)*(undefined8 *)(*(longlong *)(*param_6 + 0x38) + 0x60) & 0x204000));
  local_a5 = *(undefined1 *)(*(longlong *)(*param_6 + 0x38) + 0x93);
  local_bc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_218 = param_5[1];
  local_220 = param_5[2];
  local_a6 = 0;
  local_a4 = 0xff00;
  local_ac = 0x10001;
  local_a8 = 0x101;
  uStack_d0 = 1;
  local_b8 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  iVar15 = (int)*param_5;
  local_b4 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_b4 = iVar15;
  }
  if (local_b4 < 2) {
    local_b4 = 1;
  }
  iVar15 = (int)((ulonglong)*param_5 >> 0x20);
  local_b0 = DAT_14ca84e40;
  if (iVar15 < DAT_14ca84e40) {
    local_b0 = iVar15;
  }
  if (local_b0 < 2) {
    local_b0 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar32 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar25 = uVar32 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar25) {
    FUN_140023dd8(puVar1,0x128);
    uVar32 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar25 = uVar32 + 0x120;
  }
  local_230 = CONCAT44(local_230._4_4_,uVar29);
  *(ulonglong *)(param_2 + 0x70) = uVar25;
  local_250 = param_3;
  FUN_1456bbb8c(uVar32,param_4,&local_d8,0);
  iVar15 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar15 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar15);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar15 * 8) = uVar32;
  *(int *)(uVar32 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  local_258 = puVar1;
  if (cVar2 == '\0') {
    puVar13 = puVar28 + 0x1c8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
      FUN_140023dd8(puVar1,0xe50);
      puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar28 + 0x1c8;
    }
    *puVar1 = (ulonglong)puVar13;
    *puVar28 = &PTR_FUN_14a2d2c48;
    puVar28[0x10] = 0;
    puVar28[0x11] = 0;
    puVar28[0x20] = 0;
    puVar28[0x21] = 0;
    lVar11 = 0x110;
    do {
      puVar13 = (undefined8 *)((longlong)puVar28 + lVar11 + 0x10);
      *puVar13 = 0;
      puVar13[1] = 0x3f80000000000000;
      *(undefined8 *)((longlong)puVar28 + lVar11) = 0;
      ((undefined8 *)((longlong)puVar28 + lVar11))[1] = 0x3f80000000000000;
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0x510);
    lVar11 = 0xd40;
    do {
      *(undefined1 (*) [16])((longlong)puVar28 + lVar11) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar28 + lVar11 + 0x10) = 0xffff0000;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xe00);
    *(undefined4 *)((longlong)puVar28 + 0xe14) = 0;
    *(undefined1 (*) [16])(puVar28 + 0x1c0) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar28 + 0x1c2) = 0;
    *(undefined4 *)(puVar28 + 0x1c3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar28 + 0xe1c) = 0xffffffff;
    *(undefined4 *)(puVar28 + 0x1c4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar28 + 0xe24) = 0xffffffff;
    *(undefined4 *)(puVar28 + 0x1c5) = 0;
    *(undefined2 *)((longlong)puVar28 + 0xe2c) = 0;
    puVar28[0x1c6] = 0;
    iVar15 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar15);
    }
    uVar25 = local_228;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar15 * 8) = puVar28;
    lVar11 = *param_9;
    uVar10 = *(uint *)(param_9 + 1);
    lVar6 = *param_8;
    lVar8 = param_8[1];
    uVar12 = (ulonglong)(int)lVar8;
    puVar13 = local_168;
    puVar22 = puVar28 + 2;
    for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar28[0x10] = local_240;
    puVar28[0x11] = local_260;
    plVar21 = local_1d8;
    plVar23 = puVar28 + 0x12;
    for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
      *plVar23 = *plVar21;
      plVar21 = plVar21 + 1;
      plVar23 = plVar23 + 1;
    }
    puVar28[0x20] = lVar17;
    puVar28[0x21] = local_248;
    iVar15 = (int)local_228;
    uVar9 = (uint)local_230;
    if (0 < (longlong)uVar12) {
      uVar14 = 0;
      do {
        *(undefined4 *)(puVar28 + uVar14 + 0x22) = *(undefined4 *)(lVar6 + uVar14 * 8);
        *(undefined4 *)((longlong)puVar28 + uVar14 * 8 + 0x114) =
             *(undefined4 *)(lVar6 + 4 + uVar14 * 8);
        if (uVar14 + 1 < uVar12) {
          *(undefined4 *)(puVar28 + uVar14 + 0x23) = *(undefined4 *)(lVar6 + 8 + uVar14 * 8);
          *(undefined4 *)((longlong)puVar28 + uVar14 * 8 + 0x11c) =
               *(undefined4 *)(lVar6 + 0xc + uVar14 * 8);
        }
        uVar14 = uVar14 + 2;
      } while (uVar14 < uVar12);
    }
    if (0 < (int)uVar10) {
      lVar17 = 0;
      do {
        uVar26 = ((undefined8 *)(lVar11 + lVar17))[1];
        puVar13 = (undefined8 *)((longlong)puVar28 + lVar17 + 0x510);
        *puVar13 = *(undefined8 *)(lVar11 + lVar17);
        puVar13[1] = uVar26;
        lVar17 = lVar17 + 0x10;
      } while ((ulonglong)uVar10 << 4 != lVar17);
    }
    *(int *)(puVar28 + 0x1a2) = (int)lVar8;
    local_d8 = *(undefined8 **)(*(longlong *)(*param_6 + 0x38) + 0x84);
    uStack_d0 = (undefined4)param_6[1];
    uStack_cc = (undefined4)((ulonglong)param_6[1] >> 0x20);
    uStack_c8 = (undefined4)param_6[2];
    uStack_c4 = (undefined4)((ulonglong)param_6[2] >> 0x20);
    local_278 = 3;
    local_260 = puVar28 + 2;
    FUN_14473d930(&local_f8,&local_d8,&uStack_d0,1);
    lVar17 = local_250;
    puVar28[0x1a6] = local_f8;
    puVar28[0x1a7] = uStack_f0;
    iVar27 = (int)(local_218 >> 0x20);
    fVar35 = 1.0 / (float)((int)local_220 - (int)local_218);
    fVar34 = 1.0 / (float)((int)(local_220 >> 0x20) - iVar27);
    *(float *)(puVar28 + 0x1a4) = fVar35 * *(float *)(puVar28 + 0x1a6);
    *(float *)((longlong)puVar28 + 0xd24) = fVar34 * *(float *)((longlong)puVar28 + 0xd34);
    *(float *)(puVar28 + 0x1a5) =
         *(float *)(puVar28 + 0x1a7) - (float)(int)local_218 * fVar35 * *(float *)(puVar28 + 0x1a6);
    *(float *)((longlong)puVar28 + 0xd2c) =
         *(float *)((longlong)puVar28 + 0xd3c) -
         (float)iVar27 * fVar34 * *(float *)((longlong)puVar28 + 0xd34);
    puVar28[0x1a8] = uVar32;
    puVar28[0x1a9] = 0;
    *(undefined4 *)(puVar28 + 0x1aa) = 0xffff0000;
    uVar26 = *(undefined8 *)(local_250 + 0x13818);
    uVar10 = (uVar9 & 0xff) + (uint)(byte)local_238 * 2;
    FUN_142f2c750();
    FUN_1448e935e(uVar26,&local_d8,&DAT_14ca36838,(uVar10 * 0x20 | uVar10) + iVar15);
    FUN_142f2c750();
    puVar28 = local_d8;
    uVar26 = CONCAT44(uStack_cc,uStack_d0);
    if (iVar15 == 0) {
      uVar7 = *(undefined8 *)(lVar17 + 0x13818);
      FUN_142f47ec2();
      puVar22 = local_260;
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_1448f70da(puVar28,&DAT_14ca36690,local_260);
      FUN_142f47ec2();
      FUN_140069376(param_2);
      puVar1 = local_258;
      puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar30 + 0x41;
      if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
        FUN_140023dd8(local_258,0x210);
        puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar30 + 0x41;
      }
      *local_258 = (ulonglong)puVar13;
      local_d8 = puVar22;
      uStack_d0 = (undefined4)DAT_14ca366d8;
      uStack_cc = (undefined4)((ulonglong)DAT_14ca366d8 >> 0x20);
      if (DAT_14ca366d8 != 0) {
        LOCK();
        *(int *)(DAT_14ca366d8 + 8) = *(int *)(DAT_14ca366d8 + 8) + 1;
        UNLOCK();
      }
      uStack_c8 = 0x4ca36690;
      uStack_c4 = 1;
      local_278 = CONCAT31(local_278._1_3_,2);
      FUN_140068f1a(puVar30,&local_f8,&local_d8,1);
      *puVar30 = &PTR_FUN_14a2d2c70;
      puVar30[0x37] = puVar22;
      puVar30[0x38] = uVar7;
      puVar30[0x39] = puVar28;
      puVar30[0x3a] = uVar26;
      puVar30[0x3b] = local_218;
      puVar30[0x3c] = local_220;
      puVar30[0x3d] = 0;
      puVar30[0x3e] = 0;
      *(undefined8 *)((longlong)puVar30 + 500) = 0;
      *(undefined8 *)((longlong)puVar30 + 0x1fc) = 0;
    }
    else {
      local_238 = local_d8;
      uVar7 = *(undefined8 *)(lVar17 + 0x13818);
      local_230 = uVar26;
      FUN_142f2c510();
      FUN_1448e935e(uVar7,&local_d8,&DAT_14ca365e0,uVar25 & 0xffffffff);
      FUN_142f2c510();
      puVar13 = local_d8;
      uVar26 = CONCAT44(uStack_cc,uStack_d0);
      local_228 = DAT_14ca94df8;
      local_240 = DAT_14c9c0d98;
      local_248 = DAT_14c9c0d50;
      local_1f0 = param_6[1];
      local_1f8 = param_6[2];
      local_200 = *(undefined8 *)(*(longlong *)(*param_6 + 0x38) + 0x84);
      uVar29 = *(undefined4 *)(lVar17 + 0x3090);
      uVar4 = *(undefined4 *)(lVar17 + 0x1dd4);
      uVar5 = *(undefined4 *)(lVar17 + 0x3094);
      local_261 = (&DAT_00001de6)[lVar17];
      local_250 = *param_5;
      local_208 = param_5[1];
      local_210 = param_5[2];
      FUN_142f47ec2();
      FUN_140069376(param_2);
      puVar1 = local_258;
      puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar30 + 0x4d;
      if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
        FUN_140023dd8(local_258,0x270);
        puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar30 + 0x4d;
      }
      *local_258 = (ulonglong)puVar28;
      local_d8 = local_260;
      uStack_d0 = (undefined4)DAT_14ca366d8;
      uStack_cc = (undefined4)((ulonglong)DAT_14ca366d8 >> 0x20);
      if (DAT_14ca366d8 != 0) {
        LOCK();
        *(int *)(DAT_14ca366d8 + 8) = *(int *)(DAT_14ca366d8 + 8) + 1;
        UNLOCK();
      }
      uStack_c8 = 0x4ca36690;
      uStack_c4 = 1;
      local_278 = CONCAT31(local_278._1_3_,2);
      FUN_140068f1a(puVar30,&local_1d9,&local_d8,1);
      *puVar30 = &PTR_FUN_14a2d2c50;
      *(undefined4 *)(puVar30 + 0x37) = uVar29;
      *(undefined4 *)((longlong)puVar30 + 0x1bc) = uVar4;
      *(undefined4 *)(puVar30 + 0x38) = uVar5;
      *(undefined1 *)((longlong)puVar30 + 0x1c4) = local_261;
      *(undefined2 *)((longlong)puVar30 + 0x1c5) = local_db;
      *(undefined1 *)((longlong)puVar30 + 0x1c7) = local_d9;
      puVar30[0x39] = local_250;
      puVar30[0x3a] = local_208;
      puVar30[0x3b] = local_210;
      puVar30[0x3c] = local_200;
      puVar30[0x3d] = local_1f0;
      puVar30[0x3e] = local_1f8;
      puVar30[0x3f] = puVar13;
      puVar30[0x40] = uVar26;
      puVar30[0x41] = local_238;
      puVar30[0x42] = local_230;
      puVar30[0x43] = local_248;
      puVar30[0x44] = local_240;
      puVar30[0x45] = local_228;
      *(undefined1 *)(puVar30 + 0x46) = 0;
      uVar29 = (undefined4)local_f8;
      *(undefined4 *)((longlong)puVar30 + 0x234) = local_f8._3_4_;
      *(undefined4 *)((longlong)puVar30 + 0x231) = uVar29;
      puVar30[0x47] = puVar13;
      puVar30[0x48] = uVar26;
      puVar30[0x49] = local_238;
      puVar30[0x4a] = local_230;
      puVar30[0x4b] = local_260;
      *(undefined1 *)(puVar30 + 0x4c) = 0;
    }
    iVar15 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar15 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  }
  else {
    puVar13 = puVar28 + 0x1b4;
    if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
      FUN_140023dd8(puVar1,0xdb0);
      puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar28 + 0x1b4;
    }
    *puVar1 = (ulonglong)puVar13;
    *puVar28 = &PTR_FUN_14a2d2c20;
    puVar28[0x10] = 0;
    puVar28[0x11] = 0;
    puVar28[0x20] = 0;
    puVar28[0x21] = 0;
    lVar11 = 0x110;
    do {
      puVar13 = (undefined8 *)((longlong)puVar28 + lVar11 + 0x10);
      *puVar13 = 0;
      puVar13[1] = 0x3f80000000000000;
      *(undefined8 *)((longlong)puVar28 + lVar11) = 0;
      ((undefined8 *)((longlong)puVar28 + lVar11))[1] = 0x3f80000000000000;
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0x510);
    puVar28[0x1b2] = 0;
    iVar15 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar15 * 8) = puVar28;
    lVar11 = *param_9;
    uVar10 = *(uint *)(param_9 + 1);
    lVar6 = *param_8;
    lVar8 = param_8[1];
    uVar25 = (ulonglong)(int)lVar8;
    puVar13 = local_168;
    puVar22 = puVar28 + 2;
    for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar28[0x10] = local_240;
    puVar28[0x11] = local_260;
    plVar21 = local_1d8;
    plVar23 = puVar28 + 0x12;
    for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
      *plVar23 = *plVar21;
      plVar21 = plVar21 + 1;
      plVar23 = plVar23 + 1;
    }
    puVar28[0x20] = lVar17;
    puVar28[0x21] = local_248;
    iVar15 = (int)local_228;
    uVar9 = (uint)local_230;
    if (0 < (longlong)uVar25) {
      uVar12 = 0;
      do {
        *(undefined4 *)(puVar28 + uVar12 + 0x22) = *(undefined4 *)(lVar6 + uVar12 * 8);
        *(undefined4 *)((longlong)puVar28 + uVar12 * 8 + 0x114) =
             *(undefined4 *)(lVar6 + 4 + uVar12 * 8);
        if (uVar12 + 1 < uVar25) {
          *(undefined4 *)(puVar28 + uVar12 + 0x23) = *(undefined4 *)(lVar6 + 8 + uVar12 * 8);
          *(undefined4 *)((longlong)puVar28 + uVar12 * 8 + 0x11c) =
               *(undefined4 *)(lVar6 + 0xc + uVar12 * 8);
        }
        uVar12 = uVar12 + 2;
      } while (uVar12 < uVar25);
    }
    if (0 < (int)uVar10) {
      lVar17 = 0;
      do {
        uVar26 = ((undefined8 *)(lVar11 + lVar17))[1];
        puVar13 = (undefined8 *)((longlong)puVar28 + lVar17 + 0x510);
        *puVar13 = *(undefined8 *)(lVar11 + lVar17);
        puVar13[1] = uVar26;
        lVar17 = lVar17 + 0x10;
      } while ((ulonglong)uVar10 << 4 != lVar17);
    }
    *(int *)(puVar28 + 0x1a2) = (int)lVar8;
    local_f8 = *(undefined8 *)(uVar32 + 0x84);
    uStack_f0 = local_218;
    local_e8 = local_220;
    local_260 = puVar28 + 2;
    FUN_144a2c7c2(&local_d8);
    puVar1 = local_258;
    ppuVar20 = &local_d8;
    puVar13 = puVar28 + 0x1a4;
    for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar13 = *ppuVar20;
      ppuVar20 = ppuVar20 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar3 = *(undefined1 *)(uVar32 + 0x94);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar22 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
      FUN_140023dd8(local_258,0x50);
      puVar22 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar22 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar13;
    puVar22[1] = *(undefined8 *)(uVar32 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 0;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar22 + 5) = 0;
    *puVar22 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar22 + 6) = uVar3;
    *(undefined1 *)(puVar22 + 7) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x35) = 0;
    puVar22[8] = uVar32;
    iVar27 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar27 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar27 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar27);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar27 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar28[0x1b2] = puVar22;
    uVar26 = *(undefined8 *)(local_250 + 0x13818);
    uVar10 = (uVar9 & 0xff) + (uint)(byte)local_238 * 2;
    FUN_142f2c990();
    FUN_1448e935e(uVar26,&local_d8,&DAT_14ca36980,iVar15 + (uVar10 * 0x20 | uVar10));
    FUN_142f2c990();
    puVar28 = local_d8;
    lVar17 = CONCAT44(uStack_cc,uStack_d0);
    iVar27 = *(int *)((longlong)param_5 + 0x14) - *(int *)((longlong)param_5 + 0xc);
    iVar15 = iVar27 + 7;
    iVar27 = iVar27 + 0xe;
    if (-1 < iVar15) {
      iVar27 = iVar15;
    }
    iVar19 = (int)param_5[2] - (int)param_5[1];
    iVar15 = iVar19 + 7;
    iVar19 = iVar19 + 0xe;
    if (-1 < iVar15) {
      iVar19 = iVar15;
    }
    FUN_142f489ee();
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    FUN_1448f70da(puVar28,&DAT_14ca36a30,local_260,&local_d8);
    FUN_140069376(param_2);
    puVar1 = local_258;
    uVar26 = 2;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar26 = 4;
    }
    puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar30 + 0x3d;
    local_250 = lVar17;
    if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
      FUN_140023dd8(local_258,0x1f0);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar30 + 0x3d;
    }
    *local_258 = (ulonglong)puVar13;
    local_d8 = local_260;
    uStack_d0 = (undefined4)DAT_14ca36a78;
    uStack_cc = (undefined4)((ulonglong)DAT_14ca36a78 >> 0x20);
    if (DAT_14ca36a78 != 0) {
      LOCK();
      *(int *)(DAT_14ca36a78 + 8) = *(int *)(DAT_14ca36a78 + 8) + 1;
      UNLOCK();
    }
    uStack_c8 = 0x4ca36a30;
    uStack_c4 = 1;
    local_278 = CONCAT31(local_278._1_3_,2);
    FUN_140068f1a(puVar30,&local_f8,&local_d8,uVar26);
    *puVar30 = &PTR_FUN_14a2d2c30;
    puVar30[0x37] = &DAT_14ca36a30;
    puVar30[0x38] = local_260;
    puVar30[0x39] = puVar28;
    puVar30[0x3a] = local_250;
    *(int *)(puVar30 + 0x3b) = iVar19 >> 3;
    *(int *)((longlong)puVar30 + 0x1dc) = iVar27 >> 3;
    *(undefined4 *)(puVar30 + 0x3c) = 1;
    iVar15 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar15 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar15);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar15 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  }
  FUN_140069100(param_2,puVar30);
  *local_1e8 = uVar32;
  local_1e8[1] = local_218;
  local_1e8[2] = local_220;
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018f4ca FUN_14018f4ca body=1657 status=ok
// SIG undefined FUN_14018f4ca(void)

bool FUN_14018f4ca(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) goto LAB_14018f937;
  if ((((*(int *)(param_3 + 0x4c) == 0) || (uVar2 = *(uint *)(param_3 + 0x48), (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_3 + 0x4c))) ||
      (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
       ((*plVar10 == 0 || (lVar9 = *(longlong *)(*plVar10 + 0xa8), lVar9 == 0))))))))
  goto LAB_14018f937;
  if (DAT_14cb939a8 == 0) {
    local_90 = &local_78;
    local_78 = FUN_140940982;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_146522c26;
    local_98 = &LAB_148a0db91;
    local_a0 = &LAB_146572ba7;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 8;
    local_c8 = 0xdd8;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
  }
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30)) goto LAB_14018f937;
  bVar1 = *(byte *)(lVar9 + 0xbd8);
  if (*(int *)(lVar9 + 0xbf0) <= (int)(uint)bVar1) goto LAB_14018f937;
  lVar8 = *(longlong *)
           (*(longlong *)(lVar9 + 0xbe8) + 0x28 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
  if (lVar8 == 0) goto LAB_14018f937;
  lVar6 = FUN_14018fdb8();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_14018f937;
  *(undefined4 *)(param_2 + (longlong)DAT_14cbe7ad8 * 4) = *(undefined4 *)(lVar8 + 0xe8);
  *(undefined4 *)(param_2 + (longlong)DAT_14cbe7bd8 * 4) = *(undefined4 *)(lVar8 + 0xf0);
  *(undefined4 *)(param_2 + (longlong)DAT_14cbe7c18 * 4) = *(undefined4 *)(lVar8 + 0xf4);
  bVar1 = *(byte *)(lVar9 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(lVar9 + 0xbf0)) {
    plVar10 = *(longlong **)
               (*(longlong *)(lVar9 + 0xbe8) + 0x10 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
               );
    if (plVar10 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar10 + 0x2c0))(plVar10);
      iVar4 = (**(code **)(*plVar10 + 0x2b8))(plVar10);
      iVar5 = (**(code **)(*plVar10 + 0x2d8))(plVar10);
      if (iVar4 == 0) {
        iVar3 = iVar5;
      }
      fVar12 = (float)(**(code **)(*plVar10 + 0x388))(plVar10);
      bVar1 = *(byte *)(lVar9 + 0xbd8);
      if ((int)(uint)bVar1 < *(int *)(lVar9 + 0xbf0)) {
        lVar6 = *(longlong *)
                 (*(longlong *)(lVar9 + 0xbe8) + 0x20 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
        if (lVar6 == 0) goto LAB_14018fa7f;
        lVar7 = FUN_14018fcd2();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_14018fa7f;
        bVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30;
        *(uint *)(param_2 + 0x30 + (longlong)DAT_14cbe7e58 * 4) = (uint)bVar11;
        if (bVar11) {
          bVar1 = *(byte *)(lVar9 + 0xbd8);
          if (((int)(uint)bVar1 < *(int *)(lVar9 + 0xbf0)) &&
             (lVar6 = *(longlong *)
                       (*(longlong *)(lVar9 + 0xbe8) + 0x40 +
                       (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar6 != 0)) {
            fVar12 = *(float *)(lVar6 + 0xa0);
          }
          fVar14 = fVar12 * 100.0;
          if (100.0 <= fVar14) {
            fVar14 = 100.0;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          iVar3 = (int)fVar14;
          iVar4 = 100;
        }
      }
      else {
LAB_14018fa7f:
        *(undefined4 *)(param_2 + 0x30 + (longlong)DAT_14cbe7e58 * 4) = 0;
      }
      *(float *)(param_2 + (longlong)DAT_14cbe7b58 * 4) = fVar12;
      *(int *)(param_2 + 0x30 + (longlong)DAT_14cbe7d98 * 4) = iVar3;
      *(int *)(param_2 + 0x30 + (longlong)DAT_14cbe7dd8 * 4) = iVar4;
      *(int *)(param_2 + 0x30 + (longlong)DAT_14cbe7e18 * 4) = iVar5;
    }
  }
  *(undefined4 *)(param_2 + 0x30 + (longlong)DAT_14cbe7cd8 * 4) = 0;
  bVar1 = *(byte *)(lVar9 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(lVar9 + 0xbf0)) {
    plVar10 = *(longlong **)
               (*(longlong *)(lVar9 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar10 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2e0))();
      if (plVar10 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar10 + 8))(plVar10);
        lVar7 = FUN_14018fb44();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          *(uint *)(param_2 + 0x30 + (longlong)DAT_14cbe7cd8 * 4) =
               (uint)*(byte *)((longlong)plVar10 + 0x121);
        }
      }
    }
  }
  lVar6 = FUN_14018fe9e(*(undefined8 *)(lVar9 + 0x1b0));
  if (lVar6 != 0) {
    *(uint *)(param_2 + 0x30 + (longlong)DAT_14cbe7ed8 * 4) = (uint)*(byte *)(lVar6 + 0xac1);
  }
  plVar10 = (longlong *)FUN_1401901a6(lVar9);
  if (plVar10 == (longlong *)0x0) {
LAB_14018f8fc:
    *(undefined4 *)(param_2 + (longlong)DAT_14cbe7b98 * 4) = 0;
    uVar15 = 0;
  }
  else {
    (**(code **)(*plVar10 + 0x680))(plVar10,&local_78);
    dVar13 = (double)FUN_144719204(local_70 + 90.0);
    *(float *)(param_2 + (longlong)DAT_14cbe7c98 * 4) =
         (float)(double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)dVar13 |
                        (ulonglong)(dVar13 + 360.0) & -(ulonglong)(dVar13 < 0.0)) / 360.0;
    *(undefined4 *)(param_2 + (longlong)DAT_14cbe7c58 * 4) = 0;
    if (*(char *)((longlong)plVar10 + 0x3291) != '\x01') {
      lVar8 = FUN_14011c349();
      uVar15 = 0;
      if (plVar10[0x5e8] != 0) {
        fVar12 = *(float *)(lVar8 + 0x458);
        lVar8 = FUN_1447210f0();
        if (lVar8 != 0) {
          if (*(double *)(lVar8 + 0x6d0) - (double)plVar10[0x5bc] <= (double)fVar12) {
            uVar15 = 0x3f800000;
          }
          else {
            uVar15 = 0;
          }
        }
      }
      *(undefined4 *)(param_2 + (longlong)DAT_14cbe7d58 * 4) = uVar15;
      goto LAB_14018f8fc;
    }
    *(float *)(param_2 + (longlong)DAT_14cbe7c58 * 4) = *(float *)(plVar10 + 0x653) * 0.01;
    lVar6 = FUN_14011c349();
    uVar16 = 0;
    uVar15 = 0;
    if (plVar10[0x5e8] != 0) {
      fVar12 = *(float *)(lVar6 + 0x458);
      lVar6 = FUN_1447210f0();
      uVar15 = 0;
      if (lVar6 != 0) {
        if (*(double *)(lVar6 + 0x6d0) - (double)plVar10[0x5bc] <= (double)fVar12) {
          uVar15 = 0x3f800000;
        }
        else {
          uVar15 = 0;
        }
      }
    }
    *(undefined4 *)(param_2 + (longlong)DAT_14cbe7d58 * 4) = uVar15;
    if (*(int *)(lVar8 + 0xec) == 1) {
      uVar16 = 0x3f800000;
    }
    *(undefined4 *)(param_2 + (longlong)DAT_14cbe7b98 * 4) = uVar16;
    uVar15 = *(undefined4 *)(lVar8 + 0xec);
  }
  *(undefined4 *)(param_2 + 0x30 + (longlong)DAT_14cbe7e98 * 4) = uVar15;
  *(undefined4 *)(param_2 + 0x30 + (longlong)DAT_14cbe7d18 * 4) = 0;
  lVar9 = FUN_14018fb7e(lVar9);
  if (lVar9 != 0) {
    *(undefined4 *)(param_2 + 0x30 + (longlong)DAT_14cbe7d18 * 4) = *(undefined4 *)(lVar9 + 0x6c);
  }
LAB_14018f937:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018fb44 FUN_14018fb44 body=57 status=ok
// SIG undefined FUN_14018fb44(void)

void FUN_14018fb44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba97b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba97b0 = FUN_140002ddd(FUN_1465d4a7a,uVar1,L"OakDamageTypeDef");
  }
  return;
}



// FUNCTION 14018fb7e FUN_14018fb7e body=109 status=ok
// SIG undefined FUN_14018fb7e(void)

void FUN_14018fb7e(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined1 *)(param_1 + 0xbd8);
  local_20 = FUN_14018fbec();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1448a09a2(param_1,&local_20,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018fbec FUN_14018fbec body=228 status=ok
// SIG undefined FUN_14018fbec(void)

longlong FUN_14018fbec(void)

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
  if (DAT_14cbc0fb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148cc2d6b;
    local_40 = &LAB_145c54b95;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponBehavior_Borg",&DAT_14cbc0fb8,FUN_14661a1aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0fb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018fcd2 FUN_14018fcd2 body=228 status=ok
// SIG undefined FUN_14018fcd2(void)

longlong FUN_14018fcd2(void)

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
  if (DAT_14cbc1118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f1464;
    local_38 = &LAB_148cc3047;
    local_40 = FUN_1418d3f7c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponBehavior_Repair",&DAT_14cbc1118,FUN_14661a6e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc1118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018fdb8 FUN_14018fdb8 body=228 status=ok
// SIG undefined FUN_14018fdb8(void)

longlong FUN_14018fdb8(void)

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
  if (DAT_14cbc11f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a8ee9a;
    local_38 = &LAB_148cc310e;
    local_40 = &LAB_140b54a43;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponBehavior_Sight",&DAT_14cbc11f8,FUN_14661aba6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc11f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018fe9e FUN_14018fe9e body=286 status=ok
// SIG undefined FUN_14018fe9e(void)

undefined8 FUN_14018fe9e(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14018ffce FUN_14018ffce body=241 status=ok
// SIG undefined FUN_14018ffce(void)

longlong FUN_14018ffce(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if ((*(longlong **)(param_1 + 0x3f70) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar2 == '\0')) {
    lVar5 = FUN_14011c349();
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x78f0) * 0x48 + 0x28;
    iVar7 = *(uint *)(param_1 + 0x78f0) + 1;
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 1) {
        return 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x78e8);
      plVar6 = (longlong *)(lVar1 + -0x5c + lVar4);
      lVar4 = lVar4 + -0x48;
    } while (*plVar6 != *(longlong *)(lVar5 + 0x80));
    if (*(longlong *)(lVar1 + -8 + lVar4) == 0) {
      return 0;
    }
    plVar6 = *(longlong **)(lVar1 + lVar4);
  }
  else {
    uVar3 = FUN_1401902e2();
    if ((int)uVar3 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x78f0) <= (int)uVar3) {
      return 0;
    }
    lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(param_1 + 0x78e8);
    if (lVar4 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0x20) == 0) {
      return 0;
    }
    plVar6 = *(longlong **)(lVar4 + 0x28);
  }
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(*plVar6 + 8))();
  if (lVar4 != 0) {
    lVar5 = FUN_1401900c0();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 1401900c0 FUN_1401900c0 body=228 status=ok
// SIG undefined FUN_1401900c0(void)

longlong FUN_1401900c0(void)

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
  if (DAT_14cbbfed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148cb48cd;
    local_40 = &LAB_145c336c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb60;
    FUN_14081cfa3(L"/Script/OakGame",L"Shield",&DAT_14cbbfed0,FUN_1466153b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401901a6 FUN_1401901a6 body=315 status=ok
// SIG undefined FUN_1401901a6(void)

longlong FUN_1401901a6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x3c0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_140190233;
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_140190210;
  }
LAB_140190233:
  lVar1 = 0;
LAB_140190210:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401902e2 FUN_1401902e2 body=703 status=ok
// SIG undefined FUN_1401902e2(void)

uint FUN_1401902e2(void)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar7 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar8 = plVar7;
  if (cVar2 == '\0') {
LAB_14019031d:
    if (*plVar8 == 0) goto LAB_140190469;
    plVar8 = plVar7;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar8 = (longlong *)(*plVar7 + 0x30);
        goto LAB_140190332;
      }
LAB_1401903fe:
      if (((DAT_14c9a1ab0 == 0) || (*plVar7 == 0)) ||
         (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
         plVar7 == (longlong *)0x0)) goto LAB_14019034a;
      puVar10 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar7 + 0x2a0))(plVar7,plVar1,puVar10);
LAB_14019044e:
      if (cVar2 == '\0') goto LAB_14019034a;
      goto LAB_1401904b3;
    }
LAB_140190332:
    if (*plVar8 == 0) goto LAB_1401903fe;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar8 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar7 != 0 &&
        (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
        plVar7 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar1);
      goto LAB_14019044e;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar8 = (longlong *)(*plVar7 + 0x30);
      goto LAB_14019031d;
    }
LAB_140190469:
    lVar4 = FUN_140162146();
    if (lVar4 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_1401904b3:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_14019034a:
  lVar4 = plVar1[5];
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    plVar1[5] = lVar4;
  }
  lVar6 = plVar1[6];
  if (lVar6 == 0) {
    uVar9 = 0xffffffff;
    if ((lVar4 == 0) || (plVar1[4] == 0)) goto LAB_1401903a7;
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      plVar1[6] = 0;
      goto LAB_1401903a7;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,plVar1 + 4);
    plVar1[6] = lVar6;
    if (lVar6 == 0) goto LAB_1401903a7;
  }
  uVar9 = 0xffffffff;
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    uVar3 = 0;
    do {
      if (plVar1[0x10] == *plVar7) {
        uVar9 = -(uint)((int)plVar7[1] == 0) | uVar3;
        break;
      }
      uVar3 = uVar3 + (int)plVar7[1];
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
LAB_1401903a7:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1401905a2 FUN_1401905a2 body=84 status=ok
// SIG undefined FUN_1401905a2(void)

void FUN_1401905a2(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  local_10 = param_3[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1401905f7(&local_28,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401905f7 FUN_1401905f7 body=927 status=ok
// SIG undefined FUN_1401905f7(void)

void FUN_1401905f7(undefined8 *param_1,ushort param_2,undefined8 *param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  bool bVar13;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined8 *local_68;
  longlong local_60;
  ushort *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar6 = (ushort *)*param_1;
  iVar10 = *(int *)(param_1 + 1);
  puVar1 = puVar6 + iVar10;
  puVar7 = puVar6;
  puVar12 = puVar6;
  if ((param_4 & 1) == 0) {
    if (iVar10 != 0) {
      do {
        iVar10 = 0;
        lVar3 = 0;
        puVar9 = puVar6;
        while (*puVar9 != param_2) {
          puVar9 = puVar9 + 1;
          lVar3 = lVar3 + 0x100000000;
          iVar10 = iVar10 + -1;
          puVar7 = puVar6;
          puVar12 = puVar1;
          if (puVar9 == puVar1) goto LAB_1401908cd;
        }
        if ((param_4 & 4) == 0) {
          iVar11 = -iVar10;
        }
        else {
          if (iVar10 != 0) {
            local_60 = (lVar3 >> 0x20) * 2 + -2;
            lVar3 = 0;
            uVar5 = 0;
            local_6c = param_4;
            local_68 = param_3;
            do {
              uVar4 = uVar5;
              iVar2 = iswspace(*(wint_t *)((longlong)puVar6 + lVar3));
              uVar5 = (iVar2 != 0) + uVar4;
              if (iVar2 == 0) break;
              bVar13 = local_60 != lVar3;
              lVar3 = lVar3 + 2;
            } while (bVar13);
            puVar6 = puVar6 + uVar5;
            iVar11 = 0;
            iVar8 = ((iVar2 == 0) - 1) - uVar4;
            param_3 = local_68;
            param_4 = local_6c;
            if (iVar8 == iVar10) goto LAB_14019072f;
            lVar3 = (longlong)(int)-(((uVar4 + 1) - (uint)(iVar2 == 0)) + iVar10);
            do {
              iVar2 = iswspace(puVar6[lVar3 + -1]);
              param_3 = local_68;
              param_4 = local_6c;
              if (iVar2 == 0) {
                iVar11 = iVar8 - iVar10;
                goto LAB_14019072f;
              }
              iVar8 = iVar8 + -1;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          iVar11 = 0;
        }
LAB_14019072f:
        if (((param_4 & 2) == 0) || (iVar11 != 0)) {
          local_58 = puVar6;
          local_50 = iVar11;
          (*(code *)*param_3)(param_3[1],&local_58);
        }
        puVar6 = puVar9 + 1;
        puVar7 = puVar1;
        puVar12 = puVar1;
      } while (puVar6 != puVar1);
    }
  }
  else if (iVar10 != 0) {
    do {
      iVar10 = 0;
      lVar3 = 0;
      puVar9 = puVar6;
      while ((ushort)((ushort)(*puVar9 - 0x41 < 0x1a) * 0x20 + *puVar9) !=
             (ushort)((ushort)(param_2 - 0x41 < 0x1a) * 0x20 + param_2)) {
        puVar9 = puVar9 + 1;
        lVar3 = lVar3 + 0x100000000;
        iVar10 = iVar10 + -1;
        puVar7 = puVar6;
        puVar12 = puVar1;
        if (puVar9 == puVar1) goto LAB_1401908cd;
      }
      if ((param_4 & 4) == 0) {
        iVar11 = -iVar10;
      }
      else {
        if (iVar10 != 0) {
          local_60 = (lVar3 >> 0x20) * 2 + -2;
          lVar3 = 0;
          uVar5 = 0;
          local_6c = param_4;
          local_68 = param_3;
          do {
            uVar4 = uVar5;
            iVar2 = iswspace(*(wint_t *)((longlong)puVar6 + lVar3));
            uVar5 = (iVar2 != 0) + uVar4;
            if (iVar2 == 0) break;
            bVar13 = local_60 != lVar3;
            lVar3 = lVar3 + 2;
          } while (bVar13);
          puVar6 = puVar6 + uVar5;
          iVar11 = 0;
          iVar8 = ((iVar2 == 0) - 1) - uVar4;
          param_3 = local_68;
          param_4 = local_6c;
          if (iVar8 == iVar10) goto LAB_140190893;
          lVar3 = (longlong)(int)-(((uVar4 + 1) - (uint)(iVar2 == 0)) + iVar10);
          do {
            iVar2 = iswspace(puVar6[lVar3 + -1]);
            param_3 = local_68;
            param_4 = local_6c;
            if (iVar2 == 0) {
              iVar11 = iVar8 - iVar10;
              goto LAB_140190893;
            }
            iVar8 = iVar8 + -1;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        iVar11 = 0;
      }
LAB_140190893:
      if (((param_4 & 2) == 0) || (iVar11 != 0)) {
        local_58 = puVar6;
        local_50 = iVar11;
        (*(code *)*param_3)(param_3[1],&local_58);
      }
      puVar6 = puVar9 + 1;
      puVar7 = puVar1;
      puVar12 = puVar1;
    } while (puVar6 != puVar1);
  }
LAB_1401908cd:
  iVar10 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar7) >> 1);
  if ((param_4 & 4) != 0) {
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      uVar5 = 0;
      lVar3 = 0;
      do {
        iVar2 = iswspace(*(wint_t *)((longlong)puVar7 + lVar3));
        uVar5 = (iVar2 != 0) + uVar5;
        if (iVar2 == 0) break;
        bVar13 = (longlong)iVar10 * 2 + -2 != lVar3;
        lVar3 = lVar3 + 2;
      } while (bVar13);
      puVar7 = puVar7 + uVar5;
      if (iVar10 - uVar5 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)(int)(iVar10 - uVar5);
        do {
          iVar10 = iswspace(puVar7[lVar3 + -1]);
          if (iVar10 == 0) goto LAB_14019094f;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar3 = 0;
      }
LAB_14019094f:
      iVar10 = (int)lVar3;
    }
  }
  if (((param_4 & 2) == 0) || (iVar10 != 0)) {
    local_58 = puVar7;
    local_50 = iVar10;
    (*(code *)*param_3)(param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140190998 FUN_140190998 body=226 status=ok
// SIG undefined FUN_140190998(void)

longlong * FUN_140190998(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14645fd54;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140190a7c FUN_140190a7c body=145 status=ok
// SIG undefined FUN_140190a7c(void)

void FUN_140190a7c(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x13) == '\x01') {
    local_28 = *(undefined4 *)(param_2 + 0x38);
    uStack_24 = *(undefined4 *)(param_2 + 0x3c);
    uStack_20 = *(undefined8 *)(param_2 + 0x40);
    local_18 = *(undefined8 *)(param_2 + 0x48);
    uStack_10 = *(undefined4 *)(param_2 + 0x50);
    uStack_c = *(undefined4 *)(param_2 + 0x54);
  }
  else {
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    bVar1 = *(byte *)(param_2 + 0x50);
    uStack_10 = CONCAT31(uStack_10._1_3_,bVar1);
    if (bVar1 != 2) {
      if (1 < bVar1) goto LAB_140190aa7;
      uStack_20 = 0;
    }
    local_18 = 0;
  }
LAB_140190aa7:
  FUN_140190b0e(param_1 + 0x20,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140190b0e FUN_140190b0e body=87 status=ok
// SIG undefined FUN_140190b0e(void)

void FUN_140190b0e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != 0)) &&
     ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x000140190b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140190b70 FUN_140190b70 body=340 status=ok
// SIG undefined FUN_140190b70(void)

undefined8 * FUN_140190b70(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140190cc4();
  *param_1 = &PTR_FUN_14aa0eeb0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_144805afa(param_1 + 0x29);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xf1 | 4;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0x29 | 0x52;
  *(undefined8 *)((longlong)param_1 + 0x18c) = DAT_14cad0ef0;
  param_1[0x3d] = 0;
  *(byte *)((longlong)param_1 + 0x185) = *(byte *)((longlong)param_1 + 0x185) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0x15d) = 5;
  FUN_1400bcfd8(param_1 + 0x29);
  param_1[0x5d] = DAT_14c846520;
  uVar3 = DAT_14c846518._4_4_;
  uVar2 = (undefined4)DAT_14c846518;
  uVar1 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x5b) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar3;
  FUN_144757f48(param_1,8);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xdf;
  param_1[0x5a] = 0;
  param_1[0x5e] = 0;
  return param_1;
}



// FUNCTION 140190cc4 FUN_140190cc4 body=106 status=ok
// SIG undefined FUN_140190cc4(void)

undefined8 * FUN_140190cc4(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_149f70cf0;
  param_1[5] = 0;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 140190d84 FUN_140190d84 body=119 status=ok
// SIG undefined FUN_140190d84(void)

void FUN_140190d84(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_140b883e2();
  }
  if (*(char *)(param_1 + 0x4c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c8) = 0;
    FUN_143dcfb10(param_1 + 0x3a8);
  }
  if (*(char *)(param_1 + 0x560) == '\x01') {
    *(undefined1 *)(param_1 + 0x560) = 0;
    FUN_143dcfb10(param_1 + 0x550);
    if (*(int *)(param_1 + 0x558) == 0) {
      FUN_145bdc562(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140190e02 FUN_140190e02 body=186 status=ok
// SIG undefined FUN_140190e02(void)

char FUN_140190e02(ushort *param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  int local_30;
  char local_2c;
  char local_2a;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_1;
  bVar1 = (&DAT_14ca814cc)[(ulonglong)uVar2 * 0x3c];
  FUN_140190ebe(local_40,*(undefined4 *)(param_1 + 2));
  FUN_140190fde(&local_30,local_40,uVar2);
  cVar3 = '\x02';
  if ((((bVar1 & 0x10) != 0) || (local_2a == '\0')) &&
     ((local_2c != '\x01' || (DAT_14c760ab8 != 0)))) {
    if ((int)DAT_14c760ac4 < 2) {
      iVar4 = 1;
    }
    else {
      iVar4 = 4;
      if (4 < DAT_14c760ac4) {
        iVar4 = (uint)(8 < DAT_14c760ac4) * 8 + 8;
      }
    }
    cVar3 = (local_30 != iVar4) * '\x02';
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140190ebe FUN_140190ebe body=126 status=ok
// SIG undefined FUN_140190ebe(void)

int * FUN_140190ebe(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 + 3;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  iVar2 = param_2 % 4;
  if (iVar2 == 3) {
    iVar3 = 1;
  }
  else {
    iVar4 = 8;
    if (iVar2 != 1) {
      iVar4 = (uint)(iVar2 == 0) << 4;
    }
    iVar3 = 4;
    if (iVar2 != 2) {
      iVar3 = iVar4;
    }
  }
  *param_1 = iVar3;
  *(bool *)(param_1 + 1) = (iVar1 >> 2 & 0x80000001U) == 1;
  iVar1 = param_2 + 7;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  FUN_140190f3c((longlong)param_1 + 5,iVar1 >> 3);
  return param_1;
}



// FUNCTION 140190f3c FUN_140190f3c body=161 status=ok
// SIG undefined FUN_140190f3c(void)

void FUN_140190f3c(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2 + 3;
  uVar2 = param_2 + 7;
  uVar3 = param_2 + 0xf;
  uVar4 = param_2 + 0x1f;
  uVar5 = param_2 + 0x3f;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
    uVar2 = param_2;
    uVar3 = param_2;
    uVar4 = param_2;
    uVar5 = param_2;
  }
  *(bool *)param_1 = (param_2 & 0x80000001) == 1;
  *(bool *)(param_1 + 1) = ((int)param_2 / 2 & 0x80000001U) == 1;
  *(bool *)(param_1 + 2) = ((int)uVar1 >> 2 & 0x80000001U) == 1;
  *(bool *)(param_1 + 3) = ((int)uVar2 >> 3 & 0x80000001U) == 1;
  *(bool *)(param_1 + 4) = ((int)uVar3 >> 4 & 0x80000001U) == 1;
  *(bool *)(param_1 + 5) = ((int)uVar4 >> 5 & 0x80000001U) == 1;
  *(bool *)(param_1 + 6) = ((int)uVar5 >> 6 & 0x80000001U) == 1;
  return;
}



// FUNCTION 140190fde FUN_140190fde body=173 status=ok
// SIG undefined FUN_140190fde(void)

undefined4 * FUN_140190fde(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(param_3 & 0xffff);
  if ((&DAT_14ca814b8)[uVar2 * 0xf] == 1) {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined2 *)((longlong)param_2 + 9) = 0;
  }
  if (((&DAT_14ca814cc)[uVar2 * 0x3c] & 0x10) == 0) {
    *(undefined1 *)((longlong)param_2 + 6) = 0;
  }
  cVar1 = FUN_14019108b(param_3);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if (((int)(&DAT_14ca814b8)[uVar2 * 0xf] < 4) || (((&DAT_14ca814cd)[uVar2 * 0x3c] & 3) == 0)) {
    *(undefined1 *)((longlong)param_2 + 10) = 0;
  }
  if (*(char *)((longlong)param_2 + 6) == '\x01') {
    *(undefined1 *)((longlong)param_2 + 5) = 0;
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 6);
  *(undefined2 *)((longlong)param_1 + 0xe) = *(undefined2 *)((longlong)param_2 + 0xe);
  return param_1;
}



// FUNCTION 14019108b FUN_14019108b body=115 status=ok
// SIG undefined FUN_14019108b(void)

undefined8 FUN_14019108b(ushort param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = (ulonglong)param_1 * 0x3c;
  if (((*(byte *)((longlong)&DAT_14ca814c8 + lVar1 + 2) & 0x40) != 0) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + lVar1 + 7) & 2) != 0)) {
    puVar2 = &DAT_14ca96ce8;
    if (DAT_14ca96d38 != (undefined *)0x0) {
      puVar2 = DAT_14ca96d38;
    }
    if ((*(uint *)(puVar2 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
      puVar2 = &DAT_14ca96d48;
      if (DAT_14ca96d98 != (undefined *)0x0) {
        puVar2 = DAT_14ca96d98;
      }
      if ((*(uint *)(puVar2 + (ulonglong)(param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f)) != 0) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                        3 < (int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf]);
      }
    }
  }
  return 0;
}



// FUNCTION 14019110a FUN_14019110a body=208 status=ok
// SIG undefined FUN_14019110a(void)

void FUN_14019110a(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_1401911da(param_1);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar2) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_14006f3bd(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146e10818(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1401911da FUN_1401911da body=353 status=ok
// SIG undefined FUN_1401911da(void)

void FUN_1401911da(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140191261;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140191261:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401913b4 FUN_1401913b4 body=128 status=ok
// SIG undefined FUN_1401913b4(void)

undefined8 FUN_1401913b4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((((lVar2 != 0) && (*(longlong **)(lVar2 + 0x138) != (longlong *)0x0)) &&
      (*(int *)(lVar2 + 0x134) != 0)) &&
     ((uVar1 = *(uint *)(lVar2 + 0x130), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 != 0) &&
       ((*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x134) &&
        ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x138) + 0x10))();
      if (lVar2 != 0) {
        uVar3 = FUN_1447210f0(lVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140191434 FUN_140191434 body=157 status=ok
// SIG undefined FUN_140191434(void)

int FUN_140191434(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_1401914d2(&local_31,lVar3 + (longlong)iVar4 * 0x70,param_3);
        if (cVar1 != '\0') goto LAB_1401914ad;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x68 + (longlong)iVar4 * 0x70);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1401914ad:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401914d2 FUN_1401914d2 body=76 status=ok
// SIG undefined FUN_1401914d2(void)

undefined8 FUN_1401914d2(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_2 + 0x18) == *(longlong *)(param_3 + 0x18)) &&
       (*(int *)(param_2 + 0x38) == *(int *)(param_3 + 0x38))) &&
      (*(longlong *)(param_2 + 8) == *(longlong *)(param_3 + 8))) &&
     (*(int *)(param_2 + 0x20) == *(int *)(param_3 + 0x20))) {
    uVar1 = 0;
    if ((*(longlong *)(param_2 + 0x40) == *(longlong *)(param_3 + 0x40)) &&
       (*(longlong *)(param_2 + 0x48) == *(longlong *)(param_3 + 0x48))) {
      uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x58) >> 8),
                       *(longlong *)(param_2 + 0x58) == *(longlong *)(param_3 + 0x58));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14019151e FUN_14019151e body=145 status=ok
// SIG undefined FUN_14019151e(void)

undefined8 FUN_14019151e(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_140191574;
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
LAB_140191595:
    bVar1 = DAT_14c950c29 & plVar3 != (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_14019153c;
LAB_140191574:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_140191595;
    }
    bVar1 = DAT_14c950c29 & 1;
  }
  if (bVar1 != 0) {
    FUN_1456cec3c(plVar3);
  }
LAB_14019153c:
                    /* WARNING: Could not recover jumptable at 0x000140191548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x410))(plVar3);
  return uVar2;
}



// FUNCTION 1401915b0 FUN_1401915b0 body=163 status=ok
// SIG undefined FUN_1401915b0(void)

undefined8 * FUN_1401915b0(undefined8 *param_1,char param_2,uint param_3)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0x100000000;
  param_1[0x185] = 0;
  param_1[0x186] = 0x10000000000;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4c) = 0;
  if (param_2 == '\0') {
    *param_1 = 0x7fffffff7fffffff;
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_3);
    }
    if (0x100 < param_3) {
      FUN_1401916a2(param_1 + 5,param_3);
    }
  }
  else {
    *param_1 = 0x8000000040;
  }
  uVar1 = FUN_140191654(param_1 + 2);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 140191654 FUN_140191654 body=69 status=ok
// SIG undefined FUN_140191654(void)

longlong FUN_140191654(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_147178a2e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 8;
  FUN_140191699(lVar2);
  return lVar2;
}



// FUNCTION 140191699 FUN_140191699 body=8 status=ok
// SIG undefined FUN_140191699(void)

void FUN_140191699(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1401916a2 FUN_1401916a2 body=44 status=ok
// SIG undefined FUN_1401916a2(void)

void FUN_1401916a2(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x100;
  if (0x100 < param_2) {
    uVar1 = param_2;
  }
  if (uVar1 != *(uint *)(param_1 + 0xc0c)) {
    *(uint *)(param_1 + 0xc0c) = uVar1;
    FUN_1401916ce(param_1,*(undefined4 *)(param_1 + 0xc08));
    return;
  }
  return;
}



// FUNCTION 1401916ce FUN_1401916ce body=145 status=ok
// SIG undefined FUN_1401916ce(void)

void FUN_1401916ce(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if (param_3 < 0x101) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 * 0xc);
      FUN_140191760((longlong)param_1 + 0xc00,0);
      return;
    }
  }
  else {
    FUN_140191760((longlong)param_1 + 0xc00,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 * 0xc);
      return;
    }
  }
  return;
}



// FUNCTION 140191760 FUN_140191760 body=453 status=ok
// SIG undefined FUN_140191760(void)

void FUN_140191760(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xc);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14019187e:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401918bb:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xc;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401917b9;
LAB_1401917ae:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401917b9:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x154e) goto code_r0x0001401917e5;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14019183b:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401918bb;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14019187e;
code_r0x0001401917e5:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14019183b;
    }
  }
  goto LAB_1401917ae;
}



// FUNCTION 140191926 FUN_140191926 body=285 status=ok
// SIG undefined FUN_140191926(void)

void FUN_140191926(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  FUN_140191baa(param_1,param_2);
  local_48 = 0xe64f41ab697dd581;
  uStack_40 = 0xbeb7b628aa4a51ec;
  iVar1 = FUN_1448a256a(param_1);
  if (0x4b < iVar1) {
    local_58 = 0xe64f41ab697dd581;
    uStack_50 = 0xbeb7b628aa4a51ec;
    iVar1 = FUN_1448a256a(param_1);
    if (iVar1 < 0x4e) {
      if (param_1 == 0) {
        FUN_140056680(&local_68,&DAT_149e01fe8);
      }
      else {
        FUN_14010318a(param_1,&local_68,0);
      }
      puVar2 = local_68;
      if (local_60 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimSequenceBase.cpp",0x45f,
                    L"This package (%s) was saved with a version that had to be backed out and is no longer able to be loaded."
                    ,puVar2);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140191a44 FUN_140191a44 body=126 status=ok
// SIG undefined FUN_140191a44(void)

undefined8 * FUN_140191a44(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948b30) {
    FUN_144b3d300(&DAT_14c948b30);
    if (DAT_14c948b30 == -1) {
      DAT_14c948b20 = 0;
      uRam000000014c948b28 = 0;
      atexit((_func_5014 *)&LAB_1427d71df);
      _Init_thread_footer(&DAT_14c948b30);
    }
  }
  puVar1 = &DAT_14c948b20;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10);
  }
  return puVar1;
}



// FUNCTION 140191ac2 FUN_140191ac2 body=232 status=ok
// SIG undefined FUN_140191ac2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140191ac2(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c87e460) {
    FUN_144b3d300(&DAT_14c87e460);
    if (DAT_14c87e460 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14c87d788);
      DAT_14c87e3a0 = 0;
      _DAT_14c87e3a8 = 0x4000000000;
      DAT_14c87d790 = 0;
      _DAT_14c87d798 = 0;
      DAT_14c87e3b8 = 0;
      _DAT_14c87e3c0 = 0x4000000000;
      uRam000000014c87e3c8 = 0xffffffff;
      DAT_14c87e450 = 0;
      _DAT_14c87e458 = 0;
      atexit((_func_5014 *)&LAB_142790ecc);
      _Init_thread_footer(&DAT_14c87e460);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c87d788);
  FUN_1448a2778(&DAT_14c87d788,param_1,param_2);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c87d788);
  return param_1;
}



// FUNCTION 140191baa FUN_140191baa body=135 status=ok
// SIG undefined FUN_140191baa(void)

void FUN_140191baa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (0x151 < *(int *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140191c56 FUN_140191c56 body=101 status=ok
// SIG undefined FUN_140191c56(void)

void FUN_140191c56(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_140191cbb(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 140191cbb FUN_140191cbb body=66 status=ok
// SIG undefined FUN_140191cbb(void)

void FUN_140191cbb(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_140191cfe(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140191cfe FUN_140191cfe body=48 status=ok
// SIG undefined FUN_140191cfe(void)

void FUN_140191cfe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_140191d94(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_140191d2e(param_1);
  return;
}



// FUNCTION 140191d2e FUN_140191d2e body=101 status=ok
// SIG undefined FUN_140191d2e(void)

void FUN_140191d2e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f48bf8;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140191d94 FUN_140191d94 body=174 status=ok
// SIG undefined FUN_140191d94(void)

void FUN_140191d94(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_144716727(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e42(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e74(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140191e42 FUN_140191e42 body=49 status=ok
// SIG undefined FUN_140191e42(void)

void FUN_140191e42(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140191e74 FUN_140191e74 body=55 status=ok
// SIG undefined FUN_140191e74(void)

void FUN_140191e74(longlong *param_1)

{
  FUN_140191eac(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140191eac FUN_140191eac body=123 status=ok
// SIG undefined FUN_140191eac(void)

void FUN_140191eac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
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



// FUNCTION 140191f3c FUN_140191f3c body=118 status=ok
// SIG undefined FUN_140191f3c(void)

void FUN_140191f3c(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  
  cVar2 = (char)param_2;
  cVar1 = (char)param_1[0x21];
  *(char *)(param_1 + 0x21) = cVar2;
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x318))
              (param_1,CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar1) & 0xffffffff,param_2);
  }
  if (param_1 != (longlong *)0x0) {
    lVar4 = 0;
    plVar3 = param_1;
    do {
      if ((*(uint *)(plVar3 + 1) & 0x30) != 0) goto LAB_140191f91;
      plVar3 = (longlong *)plVar3[4];
    } while (plVar3 != (longlong *)0x0);
  }
  lVar4 = param_1[4];
LAB_140191f91:
  FUN_1448a4dfe(&DAT_14cb0a930,lVar4,param_1,param_1[0x2f],cVar1,cVar2);
  return;
}



// FUNCTION 140191fb4 FUN_140191fb4 body=108 status=ok
// SIG undefined FUN_140191fb4(void)

void FUN_140191fb4(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x2e8) = 0;
    local_18 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_140192ad0(param_1 + 0x28,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140192022 FUN_140192022 body=269 status=ok
// SIG undefined FUN_140192022(void)

int FUN_140192022(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  char local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x1a0);
  iVar1 = *(int *)(param_1 + 0x1a8);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)(lVar5 + uVar3) == param_2) {
        iVar2 = (int)(uVar3 >> 3) * -0x11111111;
        if (iVar2 != -1) goto LAB_14019206e;
        break;
      }
      uVar3 = uVar3 + 0x78;
    } while (lVar4 * 0x78 - uVar3 != 0);
  }
  local_90[1] = 1;
  local_48 = 0;
  local_40 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(uint *)(param_1 + 0x1a8) = iVar1 + 1U;
  local_90[0] = param_2;
  if (*(uint *)(param_1 + 0x1ac) < iVar1 + 1U) {
    FUN_147db1350((longlong *)(param_1 + 0x1a0),iVar1);
    lVar5 = *(longlong *)(param_1 + 0x1a0);
  }
  FUN_1456d546a(lVar4 * 0x78 + lVar5,local_90);
  FUN_1456d5336(local_90);
  iVar2 = iVar1;
LAB_14019206e:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140192130 FUN_140192130 body=159 status=ok
// SIG undefined FUN_140192130(void)

undefined8 FUN_140192130(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1401921d0(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1401921d0 FUN_1401921d0 body=91 status=ok
// SIG undefined FUN_1401921d0(void)

void FUN_1401921d0(longlong *param_1,int param_2)

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
  FUN_1401922a4(param_1,param_2,1);
  return;
}



// FUNCTION 14019222c FUN_14019222c body=119 status=ok
// SIG undefined FUN_14019222c(void)

void FUN_14019222c(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_28 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_140192ff0(param_1 + 0x28,local_2c,&local_28,0);
    *(longlong *)(param_2 + 0x2e8) = param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401922a4 FUN_1401922a4 body=136 status=ok
// SIG undefined FUN_1401922a4(void)

void FUN_1401922a4(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140192332 FUN_140192332 body=404 status=ok
// SIG undefined FUN_140192332(void)

longlong * FUN_140192332(uint *param_1,longlong *param_2,byte param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  int *piVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  
  piVar3 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1401923b6;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar3 + 4);
    while( true ) {
      if (0 < piVar3[1]) {
        (**(code **)(**(longlong **)(piVar3 + 0xe) + 0x20))
                  (*(longlong **)(piVar3 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar3[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1401923b6:
  if (param_1[1] == 0) {
LAB_140192487:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((*(uint *)(plVar6 + 2) != param_1[1] ||
          ((*(uint *)(plVar6 + 1) & ((uint)(param_3 ^ 1) << 0x15 | 0x10000000)) != 0))))
      goto LAB_140192487;
      lVar7 = *plVar6;
      *param_2 = 0;
      if (lVar7 == 0) goto LAB_140192428;
      FUN_1401924dc(lVar7);
    }
  }
  *param_2 = lVar7;
LAB_140192428:
  piVar3 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) {
        return param_2;
      }
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1401924dc FUN_1401924dc body=63 status=ok
// SIG undefined FUN_1401924dc(void)

void FUN_1401924dc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  LOCK();
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  UNLOCK();
  if ((*(uint *)(lVar2 + 8) >> 0x1d & 1) == 0) {
    FUN_1447f71cc(lVar2,0x20000000);
    return;
  }
  return;
}


