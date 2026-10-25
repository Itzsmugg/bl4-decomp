// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459374a4 FUN_1459374a4 body=95 status=ok
// SIG undefined FUN_1459374a4(void)

void FUN_1459374a4(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  HICON pHVar4;
  undefined7 uVar5;
  
  uVar1 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar1,L"RenderOffScreen");
  if (cVar2 == '\0') {
    pHVar4 = LoadIconW(DAT_14c8c26f8,(LPCWSTR)&DAT_0000007b);
    uVar3 = (char)pHVar4;
    uVar5 = (int7)((ulonglong)pHVar4 >> 8);
    if (pHVar4 == (HICON)0x0) {
      pHVar4 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      uVar3 = (char)pHVar4;
      uVar5 = (int7)((ulonglong)pHVar4 >> 8);
    }
    FUN_145937504(DAT_14c8c26f8,CONCAT71(uVar5,uVar3));
    return;
  }
  FUN_146915b42();
  return;
}



// FUNCTION 145937504 FUN_145937504 body=63 status=ok
// SIG undefined FUN_145937504(void)

undefined8 FUN_145937504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x260,0x10);
  FUN_14593b436(uVar1,param_1,param_2);
  DAT_14c967810 = uVar1;
  return uVar1;
}



// FUNCTION 145937544 FUN_145937544 body=1553 status=ok
// SIG undefined FUN_145937544(void)

longlong * FUN_145937544(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  code *local_118;
  longlong *local_110;
  code *local_108;
  undefined4 local_100;
  code *local_f8;
  longlong *local_f0;
  undefined ***pppuStack_e8;
  undefined8 local_e0;
  undefined **ppuStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14138aa40();
  FUN_145937bea();
  plVar6 = DAT_14c968090;
  DAT_14c968088 = (longlong *)*param_2;
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    if (DAT_14c968090 != (longlong *)0x0) {
      DAT_14c968090 = (longlong *)0x0;
LAB_145937964:
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145937a4b:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 == DAT_14c968090) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar9;
        goto joined_r0x000145937a4b;
      }
    }
    else {
      bVar10 = DAT_14c968090 != (longlong *)0x0;
      plVar6 = DAT_14c968090;
      DAT_14c968090 = plVar9;
      if (bVar10) goto LAB_145937964;
    }
  }
  pcVar5 = (code *)FUN_14001cc68(0x730,0x10);
  FUN_145938762(pcVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149efd630;
  plVar6[2] = (longlong)pcVar5;
  plVar9 = DAT_14c98e620;
  DAT_14c98e618 = pcVar5;
  if (plVar6 == DAT_14c98e620) {
    plVar4 = DAT_14c98e620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar4 = DAT_14c98e620;
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar9 = plVar6;
        goto joined_r0x0001459379a9;
      }
    }
  }
  else {
    plVar4 = plVar6;
    if (DAT_14c98e620 != (longlong *)0x0) {
      LOCK();
      plVar1 = DAT_14c98e620 + 1;
      DAT_14c98e620 = plVar6;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar4 = DAT_14c98e620;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001459379a9:
        plVar4 = DAT_14c98e620;
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar4 = DAT_14c98e620;
        }
      }
    }
  }
  DAT_14c98e620 = plVar4;
  plVar9 = DAT_14c98e620;
  DAT_14c968098 = DAT_14c98e618;
  plVar6 = DAT_14c9680a0;
  if (DAT_14c98e620 == (longlong *)0x0) {
    if (DAT_14c9680a0 == (longlong *)0x0) goto LAB_145937680;
    DAT_14c9680a0 = (longlong *)0x0;
LAB_1459379d6:
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_145937680;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar9 = plVar6;
  }
  else {
    LOCK();
    *(int *)(DAT_14c98e620 + 1) = (int)DAT_14c98e620[1] + 1;
    plVar6 = DAT_14c9680a0;
    UNLOCK();
    if (plVar9 != DAT_14c9680a0) {
      DAT_14c9680a0 = plVar9;
      if (plVar6 == (longlong *)0x0) goto LAB_145937680;
      goto LAB_1459379d6;
    }
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_145937680;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_145937680:
  plVar6 = DAT_14c98e620;
  pcVar5 = DAT_14c98e618;
  plVar9 = DAT_14c968088;
  if (DAT_14c98e620 == (longlong *)0x0) {
    local_f8 = DAT_14c98e618 + 0x148;
    if (DAT_14c98e618 == (code *)0x0) {
      local_f8 = DAT_14c98e618;
    }
    local_f0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c98e620 + 1) = (int)DAT_14c98e620[1] + 1;
    UNLOCK();
    local_f8 = pcVar5 + 0x148;
    if (pcVar5 == (code *)0x0) {
      local_f8 = pcVar5;
    }
    local_f0 = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar9 + 8))(plVar9,&local_f8);
  plVar9 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar6 = DAT_14c968088;
  local_f8 = *(code **)(DAT_14c98e618 + 200);
  plVar9 = *(longlong **)(DAT_14c98e618 + 0xd0);
  if (plVar9 == (longlong *)0x0) {
    local_f0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_f0 = plVar9;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,&local_f8);
  plVar6 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_d0 = (code *)0x0;
  uStack_c8 = 0;
  local_e0 = 0;
  ppuStack_d8 = (undefined **)0x0;
  local_f0 = (longlong *)0x0;
  pppuStack_e8 = (undefined ***)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_145787ae8(DAT_14c968098,&local_f8);
  fVar11 = (float)uStack_c8._4_4_;
  fVar12 = (float)(int)uStack_c8;
  fVar13 = (float)local_d0._4_4_;
  fVar14 = (float)(int)local_d0;
  FUN_140ecb711(local_f0,(ulonglong)pppuStack_e8 & 0xffffffff);
  if (local_f0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_118 = DAT_14c98e618;
  *(float *)(DAT_14c98e618 + 0x510) = fVar14;
  *(float *)(local_118 + 0x514) = fVar13;
  *(float *)(local_118 + 0x518) = fVar12;
  *(float *)(local_118 + 0x51c) = fVar11;
  plVar9 = DAT_14c98e620;
  plVar6 = DAT_14c968088 + 7;
  local_110 = DAT_14c98e620;
  if (DAT_14c98e620 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c98e620 + 1) = (int)DAT_14c98e620[1] + 1;
    UNLOCK();
  }
  local_108 = FUN_1469a9ac0;
  local_100 = 0;
  FUN_1459383b0(&local_f8,&local_118);
  FUN_145937e4a(plVar6,&local_108,&local_f8);
  FUN_1449db362(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  uVar7 = FUN_145937b82();
  pppuStack_e8 = (undefined ***)0x0;
  ppuStack_d8 = &PTR_LAB_149efd6e0;
  local_d0 = FUN_1428f5aba;
  local_f8 = FUN_1469b58b0;
  FUN_1446f470e(&local_120,L"Slate",1);
  FUN_14593849a(uVar7,local_120,&local_f8);
  if (local_f8 != (code *)0x0) {
    pppuVar8 = pppuStack_e8;
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuVar8 = &ppuStack_d8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  *param_1 = (longlong)DAT_14c98e618;
  plVar9 = DAT_14c98e620;
  param_1[1] = (longlong)DAT_14c98e620;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145937b56 FUN_145937b56 body=12 status=ok
// SIG undefined FUN_145937b56(void)

void FUN_145937b56(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145937b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145937b62 FUN_145937b62 body=31 status=ok
// SIG undefined FUN_145937b62(void)

undefined8 FUN_145937b62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145937b82 FUN_145937b82 body=104 status=ok
// SIG undefined FUN_145937b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145937b82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867118) {
    FUN_144b3d300(&DAT_14c867118);
    if (DAT_14c867118 == -1) {
      DAT_14c867108 = 0;
      _DAT_14c867110 = 0;
      atexit(FUN_14277e9c5);
      _Init_thread_footer(&DAT_14c867118);
    }
  }
  return &DAT_14c867108;
}



// FUNCTION 145937bea FUN_145937bea body=86 status=ok
// SIG undefined FUN_145937bea(void)

void FUN_145937bea(void)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_145937c5a();
  if ((cVar1 == '\0') || (DAT_14c9751c8 != 0)) {
    cVar1 = FUN_145937c5a();
    if ((cVar1 != '\0') || (DAT_14c96b350 != 0)) goto code_r0x000145937c16;
    FUN_14695eaec();
    puVar2 = &DAT_14c96b350;
  }
  else {
    FUN_145937c7a();
    puVar2 = &DAT_14c9751c8;
  }
  FUN_145937c40(*puVar2);
code_r0x000145937c16:
  FUN_145937d00();
  return;
}



// FUNCTION 145937c40 FUN_145937c40 body=25 status=ok
// SIG undefined FUN_145937c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145937c40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  _DAT_14c96b348 = *puVar1;
  return;
}



// FUNCTION 145937c5a FUN_145937c5a body=31 status=ok
// SIG undefined FUN_145937c5a(void)

byte FUN_145937c5a(void)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = FUN_14118da1c();
  bVar2 = FUN_14054d46e(uVar1,L"oldeditorstyle");
  return bVar2 ^ 1;
}



// FUNCTION 145937c7a FUN_145937c7a body=116 status=ok
// SIG undefined FUN_145937c7a(void)

void FUN_145937c7a(void)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141373b5e(local_28);
  FUN_145937f4c(local_28);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145937d00 FUN_145937d00 body=116 status=ok
// SIG undefined FUN_145937d00(void)

void FUN_145937d00(void)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413a52d8(local_28);
  FUN_145937d86(local_28);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145937d86 FUN_145937d86 body=195 status=ok
// SIG undefined FUN_145937d86(void)

void FUN_145937d86(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (DAT_14c98de08 != 0) {
    FUN_145ac6af4();
  }
  plVar4 = DAT_14c98de10;
  DAT_14c98de08 = *param_1;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    if (DAT_14c98de10 == (longlong *)0x0) goto LAB_145937dd1;
    DAT_14c98de10 = (longlong *)0x0;
LAB_145937e06:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145937dd1;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != DAT_14c98de10) {
      bVar5 = DAT_14c98de10 == (longlong *)0x0;
      plVar4 = DAT_14c98de10;
      DAT_14c98de10 = plVar3;
      if (bVar5) goto LAB_145937dd1;
      goto LAB_145937e06;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145937dd1;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_145937dd1:
  if (DAT_14c98de08 != 0) {
    FUN_145938026();
    return;
  }
  FUN_145937d00();
  return;
}



// FUNCTION 145937e4a FUN_145937e4a body=216 status=ok
// SIG undefined FUN_145937e4a(void)

undefined8 * FUN_145937e4a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145937f4c FUN_145937f4c body=218 status=ok
// SIG undefined FUN_145937f4c(void)

void FUN_145937f4c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (DAT_14c9751c8 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*DAT_14c9751c8 + 8))();
    FUN_145ac6b12(&DAT_14c96b458,*puVar4);
  }
  plVar5 = DAT_14c9751d0;
  DAT_14c9751c8 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    if (DAT_14c9751d0 == (longlong *)0x0) goto LAB_145937f97;
    DAT_14c9751d0 = (longlong *)0x0;
LAB_145937fdc:
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145937f97;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 != DAT_14c9751d0) {
      bVar6 = DAT_14c9751d0 == (longlong *)0x0;
      plVar5 = DAT_14c9751d0;
      DAT_14c9751d0 = plVar3;
      if (bVar6) goto LAB_145937f97;
      goto LAB_145937fdc;
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145937f97;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_145937f97:
  if (DAT_14c9751c8 != (longlong *)0x0) {
    FUN_145938026();
    return;
  }
  FUN_145937c7a();
  return;
}



// FUNCTION 145938026 FUN_145938026 body=120 status=ok
// SIG undefined FUN_145938026(void)

void FUN_145938026(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  longlong **local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (**(code **)(*param_1 + 8))();
  local_20 = &local_30;
  local_30 = param_1;
  FUN_1459380a6(local_14);
  if ((DAT_14c968098 != 0) &&
     (plVar1 = *(longlong **)(DAT_14c968098 + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459380a6 FUN_1459380a6 body=342 status=ok
// SIG undefined FUN_1459380a6(void)

undefined4 * FUN_1459380a6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
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
  FUN_145938294(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1459381fe(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c96b460 - DAT_14c96b48c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c96b4a0)) {
      uVar10 = DAT_14c96b4a0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c96b498;
      if (DAT_14c96b498 == (undefined *)0x0) {
        puVar7 = &DAT_14c96b490;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c96b4a0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c96b498;
      if (DAT_14c96b498 == (undefined *)0x0) {
        puVar7 = &DAT_14c96b490;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c96b4a0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c96b4a0 = iVar9;
      FUN_14137062c();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459381fe FUN_1459381fe body=150 status=ok
// SIG undefined FUN_1459381fe(void)

undefined8 FUN_1459381fe(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c96b460 - DAT_14c96b48c != 1) && (DAT_14c96b460 != DAT_14c96b48c)) {
    puVar6 = &DAT_14c96b490;
    if (DAT_14c96b498 != (undefined *)0x0) {
      puVar6 = DAT_14c96b498;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c96b4a0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c96b458 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145ac6c04(&DAT_14c96b458,*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145938294 FUN_145938294 body=283 status=ok
// SIG undefined FUN_145938294(void)

int * FUN_145938294(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c96b488;
  iVar3 = DAT_14c96b460;
  if (DAT_14c96b48c == 0) {
    iVar2 = DAT_14c96b460 + 1;
    bVar7 = DAT_14c96b464 == DAT_14c96b460;
    DAT_14c96b460 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c96b458,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c96b468,1);
    puVar4 = DAT_14c96b478;
    if (DAT_14c96b478 == (undefined *)0x0) {
      puVar4 = &DAT_14c96b468;
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
    lVar6 = (longlong)DAT_14c96b488;
    DAT_14c96b488 = *(int *)(DAT_14c96b458 + 4 + lVar6 * 0x18);
    DAT_14c96b48c = DAT_14c96b48c + -1;
    if (DAT_14c96b48c != 0) {
      *(undefined4 *)(DAT_14c96b458 + (longlong)DAT_14c96b488 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c96b468;
  if (DAT_14c96b478 != (undefined *)0x0) {
    puVar4 = DAT_14c96b478;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c96b458;
  return param_1;
}



// FUNCTION 1459383b0 FUN_1459383b0 body=233 status=ok
// SIG undefined FUN_1459383b0(void)

longlong * FUN_1459383b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149efde30;
    uVar8 = FUN_144a3f946();
    puVar5[2] = uVar8;
    *puVar5 = &PTR_FUN_149efd650;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149efde30;
    uVar8 = FUN_144a3f946();
    puVar5[2] = uVar8;
    *puVar5 = &PTR_FUN_149efd650;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 14593849a FUN_14593849a body=261 status=ok
// SIG undefined FUN_14593849a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x000145938598 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14593849a(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  undefined8 local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1459385a0();
  local_68 = *param_3;
  local_58[0] = 0;
  local_78 = param_2;
  if (local_68 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
    (**(code **)*plVar5)(plVar5,local_58);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1459386ce(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x50;
  *(undefined8 *)(lVar3 + lVar4) = local_78;
  *(longlong *)(lVar3 + 0x10 + lVar4) = local_68;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = local_58[0];
  local_58[0] = 0;
  puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  if ((*(longlong *)(lVar3 + 0x10 + lVar4) == 0) && (local_68 != 0)) {
    (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459385a0 FUN_1459385a0 body=243 status=ok
// SIG undefined FUN_1459385a0(void)

void FUN_1459385a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_4c;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    local_4c = 0;
    bVar5 = *plVar2 == param_2;
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar6 = plVar2 + lVar7 * 10 + 10;
      iVar11 = iVar9;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar4;
        if (lVar12 <= lVar8) break;
        lVar3 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = plVar6 + 10;
        iVar10 = iVar11;
      } while (bVar5 == (lVar3 == param_2));
      iVar4 = iVar10 - iVar9;
      if (bVar5 == false) {
        if (local_4c != iVar9) {
          memmove(plVar2 + (longlong)local_4c * 10,plVar2 + lVar7 * 10,(longlong)iVar4 * 0x50);
        }
        local_4c = local_4c + iVar4;
      }
      else {
        FUN_145938693(plVar2 + lVar7 * 10,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar12);
    *(int *)(param_1 + 1) = local_4c;
  }
  return;
}



// FUNCTION 145938693 FUN_145938693 body=58 status=ok
// SIG undefined FUN_145938693(void)

void FUN_145938693(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459386ce FUN_1459386ce body=147 status=ok
// SIG undefined FUN_1459386ce(void)

void FUN_1459386ce(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145938762 FUN_145938762 body=2095 status=ok
// SIG undefined FUN_145938762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145938762(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  LARGE_INTEGER local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1459397da();
  *param_1 = &PTR_FUN_149efb0a0;
  param_1[0x29] = &PTR_FUN_149efb290;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_145938ffe(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffffffffffff;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 2;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  puVar6 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar6 = &PTR_LAB_149efce30;
  param_1[0x7a] = puVar6;
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_149efd700;
  puVar7[2] = puVar6;
  param_1[0x7b] = puVar7;
  QueryPerformanceCounter(&local_78);
  param_1[0x7c] = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x3d0888893d088889;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x462) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0xffffffff;
  param_1[0x97] = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"simmobile");
  if (cVar4 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    uVar5 = FUN_14054d46e(&DAT_14c846b20,L"faketouches");
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x98) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c1) = 0x10000;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x9d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4ea) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 2;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x158,0x10);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_149efd720;
  puVar6 = puVar7 + 2;
  FUN_14593a60e(puVar6);
  param_1[0xa4] = puVar6;
  param_1[0xa5] = puVar7;
  FUN_14593908c(param_1 + 0xa4,puVar6);
  param_1[0xa8] = 0;
  param_1[0xa9] = 0x8000000006;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 2;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc2),4000);
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined1 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x63d) = 0;
  param_1[200] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0x700000000;
  param_1[0xda] = 0;
  param_1[0xdb] = 0x2000000000;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f1) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149efd740;
  plVar8[2] = (longlong)&PTR_LAB_149efd760;
  param_1[0xe4] = plVar8 + 2;
  param_1[0xe5] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  *(byte *)(param_1 + 0x34) = DAT_14c867cd8 ^ 1;
  fVar12 = (float)FUN_145939570();
  local_78.QuadPart = (ulonglong)(uint)local_78.s.HighPart << 0x20;
  FUN_145938f92(&local_78);
  _DAT_14c98e464 = 0.0;
  if (local_78.s.LowPart != 0) {
    _DAT_14c98e464 = fVar12 * (float)(int)local_78.s.LowPart;
  }
  if (_DAT_14c98e464 <= 5.0) {
    _DAT_14c98e464 = 5.0;
  }
  *(float *)(param_1 + 0x35) = _DAT_14c98e464;
  if (DAT_14c872ce0 != 0) {
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"MobileSlateUI",L"bTouchFallbackToMouse",param_1 + 0x9d);
    local_88 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"CursorControl",L"bAllowSoftwareCursor",(longlong)param_1 + 0x4e9);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar5 = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
  *(undefined1 *)((longlong)param_1 + 0x1a2) = uVar5;
  FUN_1446f470e(&local_58,L"InputCore",1);
  uVar9 = FUN_144a52528();
  FUN_14493e38c(uVar9,local_58);
  FUN_145939a0a();
  FUN_14593a176();
  *(undefined1 *)((longlong)param_1 + 0x471) = 1;
  if (*(int *)(param_1 + 0x90) != 3) {
    FUN_1446efa72(param_1 + 0x8f,0,3,0x10);
    *(undefined4 *)(param_1 + 0x90) = 3;
  }
  puVar6 = (undefined8 *)param_1[0x8f];
  *puVar6 = &DAT_149efe500;
  uVar9 = FUN_144a3f946();
  puVar6[2] = uVar9;
  *puVar6 = &PTR_FUN_149efd8c0;
  puVar6[3] = param_1;
  puVar6[4] = &LAB_1469a9b5a;
  *(undefined4 *)(puVar6 + 5) = 0;
  if (DAT_14c9680a8 == -1) {
    iVar11 = -1;
  }
  else {
    plVar8 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar8 + 0x48))(plVar8,&local_78);
    iVar11 = DAT_14c9680a8;
  }
  FUN_141370954(param_1,local_68,iVar11,0);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  (**(code **)(*(longlong *)param_1[0xa4] + 0x18))();
  puVar10 = (uint *)(param_1 + 0xa6);
  if ((uint *)param_1[0xa8] != (uint *)0x0) {
    puVar10 = (uint *)param_1[0xa8];
  }
  *puVar10 = *puVar10 | 0x20;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar8 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"Slate.EnableGlobalInvalidation",1);
  if (plVar8 != (longlong *)0x0) {
    local_78.QuadPart = 0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,2,0x10);
    LVar3 = local_78;
    local_70 = 2;
    *(undefined ***)local_78 = &PTR_LAB_149e170a0;
    uVar9 = FUN_144a3f946();
    *(undefined8 *)(LVar3.QuadPart + 0x10) = uVar9;
    *(undefined ***)LVar3 = &PTR_FUN_149efd930;
    *(undefined8 **)(LVar3.QuadPart + 0x18) = param_1;
    (**(code **)(*plVar8 + 200))(plVar8,&local_78);
    FUN_1449db362(&local_78);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145938f92 FUN_145938f92 body=52 status=ok
// SIG undefined FUN_145938f92(void)

undefined8 FUN_145938f92(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (DAT_14c967020 == '\x01') {
    uVar1 = 0x60;
    if (DAT_14c967024 == '\0') {
      uVar1 = 0;
    }
  }
  else {
    DAT_14c967020 = '\x01';
    DAT_14c967024 = '\x01';
    uVar1 = 0x60;
  }
  *param_1 = uVar1;
  return 0;
}



// FUNCTION 145938fc6 FUN_145938fc6 body=56 status=ok
// SIG undefined FUN_145938fc6(void)

void FUN_145938fc6(longlong param_1)

{
  if (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 300)) {
    return;
  }
  FUN_1469b4f2c(param_1 + 0xf8);
  FUN_1469b5074(param_1 + 0xf8);
  return;
}



// FUNCTION 145938ffe FUN_145938ffe body=142 status=ok
// SIG undefined FUN_145938ffe(void)

void FUN_145938ffe(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 2;
  return;
}



// FUNCTION 14593908c FUN_14593908c body=162 status=ok
// SIG undefined FUN_14593908c(void)

void FUN_14593908c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1459390cb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1459390cb;
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
LAB_1459390cb:
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
                    /* WARNING: Could not recover jumptable at 0x00014593912a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14593912e FUN_14593912e body=289 status=ok
// SIG undefined FUN_14593912e(void)

longlong * FUN_14593912e(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = (longlong)&PTR_LAB_149ec59e0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = -1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = FUN_1459393a6(local_38,param_1);
  *param_1 = (longlong)&PTR_FUN_149ec5ad0;
  *(undefined1 *)(param_1 + 0xe) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x71) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  FUN_141370838(uVar1,local_38);
  *(undefined4 *)((longlong)param_1 + 0x5c) = local_38[0];
  (**(code **)(*param_1 + 0x48))(param_1,local_38);
  *(undefined4 *)(param_1 + 0xb) = local_38[0];
  (**(code **)(*param_1 + 0x48))(param_1,&local_3c);
  (**(code **)(*param_1 + 0x50))(param_1,&local_40);
  (**(code **)(*param_1 + 0x78))(param_1,local_40,local_3c,3);
  (**(code **)(*param_1 + 0x48))(param_1,local_38);
  FUN_1459392b8(param_1 + 0xc,local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145939250 FUN_145939250 body=103 status=ok
// SIG undefined FUN_145939250(void)

undefined4 * FUN_145939250(undefined8 param_1,undefined4 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9670ac) {
    FUN_144b3d300(&DAT_14c9670ac);
    if (DAT_14c9670ac == -1) {
      DAT_14c9670a8 = 0;
      _Init_thread_footer(&DAT_14c9670ac);
    }
  }
  *param_2 = DAT_14c9670a8;
  return param_2;
}



// FUNCTION 1459392b8 FUN_1459392b8 body=105 status=ok
// SIG undefined FUN_1459392b8(void)

void FUN_1459392b8(longlong *param_1,int *param_2)

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
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145939322(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 145939322 FUN_145939322 body=132 status=ok
// SIG undefined FUN_145939322(void)

void FUN_145939322(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459393a6 FUN_1459393a6 body=223 status=ok
// SIG undefined FUN_1459393a6(void)

undefined8 FUN_1459393a6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149ec9620;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149ec95b0;
  local_30[3] = param_2;
  local_30[4] = &LAB_146913ef8;
  FUN_145939486(&DAT_14c867268,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145939486 FUN_145939486 body=216 status=ok
// SIG undefined FUN_145939486(void)

undefined8 * FUN_145939486(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145939570 FUN_145939570 body=431 status=ok
// SIG undefined FUN_145939570(void)

float FUN_145939570(void)

{
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  cVar1 = FUN_14593973a(1,5);
  fVar5 = 1.0;
  if (cVar1 != '\0') {
    iVar2 = FUN_145939720(1);
    if (iVar2 == 0) {
      dVar3 = (double)FUN_14593975d(1);
      dVar4 = (double)FUN_14593975d(5);
    }
    else {
      switch(iVar2) {
      case 1:
        dVar3 = (double)FUN_1467f69e1(&DAT_149efe501);
        dVar4 = (double)FUN_1467f69e1(5);
        break;
      case 2:
        dVar3 = (double)FUN_1467f69f6(&DAT_149efe501);
        dVar4 = (double)FUN_1467f69f6(5);
        break;
      case 3:
        dVar3 = (double)FUN_1467f6a17(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6a17(5);
        break;
      case 4:
        dVar3 = (double)FUN_1467f6a2c(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6a2c(5);
        break;
      default:
        goto switchD_1459395e4_caseD_5;
      case 6:
        dVar3 = (double)FUN_1467f6a41(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6a41(5);
        break;
      case 7:
        dVar3 = (double)FUN_1467f6a62(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6a62(5);
        break;
      case 8:
        dVar3 = (double)FUN_1467f6a83(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6a83(5);
        break;
      case 9:
        dVar3 = (double)FUN_1467f6aa4(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6aa4(5);
        break;
      case 0xb:
        dVar3 = (double)FUN_1467f6ab9(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6ab9(5);
        break;
      case 0xc:
        dVar3 = (double)FUN_1467f6ace(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6ace(5);
        break;
      case 0xd:
        dVar3 = (double)FUN_1467f6aef(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6aef(5);
        break;
      case 0x12:
        dVar3 = (double)FUN_1467f6b10(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6b10(5);
        break;
      case 0x14:
        dVar3 = (double)FUN_1467f6b80(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6b80(5);
        break;
      case 0x16:
        dVar3 = (double)FUN_1467f6b95(&DAT_149efe501);
        dVar4 = (double)FUN_1467f6b95(5);
      }
    }
    fVar5 = (float)((1.0 / dVar4) * dVar3);
  }
switchD_1459395e4_caseD_5:
  return fVar5;
}



// FUNCTION 145939720 FUN_145939720 body=25 status=ok
// SIG undefined FUN_145939720(void)

undefined4 FUN_145939720(byte param_1)

{
  if (param_1 != 0x4b) {
    return *(undefined4 *)(&DAT_149e24c10 + (ulonglong)param_1 * 4);
  }
  return 0x17;
}



// FUNCTION 14593973a FUN_14593973a body=35 status=ok
// SIG undefined FUN_14593973a(void)

bool FUN_14593973a(byte param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != 0x4b) && (param_2 != 0x4b)) {
    bVar1 = *(int *)(&DAT_149e24c10 + (ulonglong)param_1 * 4) ==
            *(int *)(&DAT_149e24c10 + (ulonglong)param_2 * 4);
  }
  return bVar1;
}



// FUNCTION 14593975d FUN_14593975d body=125 status=ok
// SIG undefined FUN_14593975d(void)

double FUN_14593975d(undefined1 param_1)

{
  double dVar1;
  
  switch(param_1) {
  case 0:
    return 1e-06;
  case 1:
    return 0.001;
  case 2:
    return 0.01;
  default:
    return 1.0;
  case 4:
    return 1000.0;
  case 5:
    dVar1 = 1.0;
    break;
  case 6:
    dVar1 = 12.0;
    break;
  case 7:
    dVar1 = 36.0;
    break;
  case 8:
    dVar1 = 63360.0;
    break;
  case 9:
    return 9.4605284e+15;
  }
  return dVar1 / 39.3700787;
}



// FUNCTION 1459397da FUN_1459397da body=472 status=ok
// SIG undefined FUN_1459397da(void)

undefined8 * FUN_1459397da(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_149ed0670;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar2 = FUN_14001cc68(0x90,0x10);
  FUN_1459399b4(uVar2);
  param_1[0x19] = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149ed04a0;
  puVar3[2] = uVar2;
  param_1[0x1a] = puVar3;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 2;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x21),4000);
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  lVar4 = FUN_140008f10();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_149ed04c0;
  FUN_1448b6402(lVar4 + 0x120,local_58,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459399b4 FUN_1459399b4 body=85 status=ok
// SIG undefined FUN_1459399b4(void)

undefined8 * FUN_1459399b4(undefined8 *param_1)

{
  FUN_14593c4ae();
  *param_1 = &PTR_FUN_149eee530;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 145939a0a FUN_145939a0a body=771 status=ok
// SIG undefined FUN_145939a0a(void)

void FUN_145939a0a(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((DAT_14c98e608 != (longlong *)0x0) && (DAT_14c98e610 != (longlong *)0x0)) &&
     (0 < (int)DAT_14c98e610[1])) goto LAB_145939b57;
  plVar3 = (longlong *)FUN_14001cc68(0x120,0x10);
  FUN_145939fe6(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efd810;
  plVar4[2] = (longlong)plVar3;
  if ((plVar3 != (longlong *)0x0) &&
     (((plVar3[1] == 0 || (plVar3[2] == 0)) || (*(int *)(plVar3[2] + 8) < 1)))) {
    if (plVar4 == (longlong *)0x0) {
      plVar3[1] = (longlong)(plVar3 + 1);
      plVar6 = (longlong *)plVar3[2];
      if (plVar6 != (longlong *)0x0) {
LAB_145939bc6:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        plVar3[2] = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_145939ab8;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3[1] = (longlong)(plVar3 + 1);
      if ((longlong *)plVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar3[2];
        if (plVar6 != (longlong *)0x0) goto LAB_145939bc6;
        plVar3[2] = (longlong)plVar4;
      }
LAB_145939ab8:
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  uVar5 = FUN_145939d0e();
  local_38 = plVar3[3];
  FUN_145939e28(uVar5,&local_30);
  plVar6 = local_28;
  if (local_30 == 0) {
    DAT_14c98e608 = plVar3;
    plVar6 = DAT_14c98e610;
    if (DAT_14c98e610 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar2 = DAT_14c98e610;
      plVar6 = plVar4;
      if (DAT_14c98e610 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)DAT_14c98e610 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    DAT_14c98e610 = plVar6;
    (**(code **)(*plVar3 + 8))(plVar3);
    FUN_145939d74(plVar3 + 1);
  }
  else {
    DAT_14c98e608 = (longlong *)(local_30 + -8);
    plVar3 = local_28;
    if (local_28 == (longlong *)0x0) {
      if (DAT_14c98e610 != (longlong *)0x0) {
LAB_145939c41:
        plVar2 = DAT_14c98e610;
        LOCK();
        piVar1 = (int *)((longlong)DAT_14c98e610 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        DAT_14c98e610 = plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_145939ce4;
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (DAT_14c98e610 != local_28) {
        LOCK();
        *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
        UNLOCK();
        if (DAT_14c98e610 != (longlong *)0x0) goto LAB_145939c41;
        DAT_14c98e610 = local_28;
      }
LAB_145939ce4:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_145939b57:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145939d0e FUN_145939d0e body=101 status=ok
// SIG undefined FUN_145939d0e(void)

undefined * FUN_145939d0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e848) {
    FUN_144b3d300(&DAT_14c98e848);
    if (DAT_14c98e848 == -1) {
      FUN_145939eee();
      atexit((_func_5014 *)&LAB_1428f8a60);
      _Init_thread_footer(&DAT_14c98e848);
    }
  }
  return &DAT_14c98e6e8;
}



// FUNCTION 145939d74 FUN_145939d74 body=180 status=ok
// SIG undefined FUN_145939d74(void)

void FUN_145939d74(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c98ea70;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14c98ea7c = DAT_14c98ea7c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c98ea68 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c98ea68 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c98ea7c = DAT_14c98ea7c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145939e11;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14c98ea7c = DAT_14c98ea7c + -1;
LAB_145939e11:
  FUN_14474d06a(&DAT_14c98ea68,0);
  return;
}



// FUNCTION 145939e28 FUN_145939e28 body=198 status=ok
// SIG undefined FUN_145939e28(void)

void FUN_145939e28(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xd0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80;
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80) == lVar1) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar4 + 0x68);
            lVar1 = *(longlong *)(lVar4 + 0x70);
            param_2[1] = lVar1;
            if (lVar1 != 0) {
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
            }
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x78);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 145939eee FUN_145939eee body=247 status=ok
// SIG undefined FUN_145939eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145939eee(void)

{
  _DAT_14c98e6e8 = &PTR_FUN_149eff4e8;
  _DAT_14c98e6f0 = 0;
  uRam000000014c98e6f8 = 0;
  _DAT_14c98e700 = 2;
  _DAT_14c98e704 = 0;
  uRam000000014c98e70c = 0;
  _DAT_14c98e714 = 0x200000000;
  _DAT_14c98e740 = 0;
  _DAT_14c98e748 = 0;
  _DAT_14c98e71c = 0;
  ram0x00014c98e724 = 0;
  _DAT_14c98e72c = 0;
  _DAT_14c98e74c = 0xffffffff00000080;
  DAT_14c98e754 = 0;
  DAT_14c98e760 = 0;
  DAT_14c98e768 = 0;
  DAT_14c98e790 = 0;
  DAT_14c98e798 = 0;
  DAT_14c98e770 = 0;
  _DAT_14c98e778 = 0;
  _DAT_14c98e79c = 0xffffffff00000080;
  DAT_14c98e7a4 = 0;
  DAT_14c98e7b0 = 0;
  DAT_14c98e7b8 = 0;
  _DAT_14c98e7e0 = 0;
  _DAT_14c98e7e8 = 0;
  DAT_14c98e7c0 = 0;
  _DAT_14c98e7c8 = 0;
  _DAT_14c98e7ec = 0xffffffff00000080;
  _DAT_14c98e7f4 = 0;
  DAT_14c98e800 = 0;
  DAT_14c98e808 = 0;
  _DAT_14c98e830 = 0;
  uRam000000014c98e838 = 0;
  _DAT_14c98e820 = 0;
  uRam000000014c98e828 = 0;
  DAT_14c98e810 = 0;
  DAT_14c98e818 = 0;
  _DAT_14c98e840 = 2;
  return;
}



// FUNCTION 145939fe6 FUN_145939fe6 body=398 status=ok
// SIG undefined FUN_145939fe6(void)

undefined8 * FUN_145939fe6(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  wchar_t *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2);
  uVar1 = *puVar3;
  local_60 = L"Generic Commands";
  local_58 = 0x10;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"GenericCommands";
  local_58 = 0xf;
  FUN_1446e940c(local_68,&local_60);
  FUN_140208bae(&local_60,local_68,local_64,L"Common Commands");
  FUN_1446f470e(&local_70,L"GenericCommands",1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_70;
  param_1[4] = 0;
  param_1[5] = local_60;
  if (local_60 == (wchar_t *)0x0) {
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    (**(code **)(*(longlong *)local_60 + 8))();
    pwVar4 = local_60;
  }
  *(undefined4 *)(param_1 + 6) = local_58;
  param_1[7] = uVar1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_LAB_149efd7f8;
  if (pwVar4 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar4 + 0x10))();
  }
  *param_1 = &PTR_FUN_149efd7e8;
  memset(param_1 + 0x12,0,0x90);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593a176 FUN_14593a176 body=771 status=ok
// SIG undefined FUN_14593a176(void)

void FUN_14593a176(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((DAT_14c98e5f8 != (longlong *)0x0) && (DAT_14c98e600 != (longlong *)0x0)) &&
     (0 < (int)DAT_14c98e600[1])) goto LAB_14593a2c3;
  plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
  FUN_14593a47a(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efd8a0;
  plVar4[2] = (longlong)plVar3;
  if ((plVar3 != (longlong *)0x0) &&
     (((plVar3[1] == 0 || (plVar3[2] == 0)) || (*(int *)(plVar3[2] + 8) < 1)))) {
    if (plVar4 == (longlong *)0x0) {
      plVar3[1] = (longlong)(plVar3 + 1);
      plVar6 = (longlong *)plVar3[2];
      if (plVar6 != (longlong *)0x0) {
LAB_14593a332:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        plVar3[2] = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_14593a224;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3[1] = (longlong)(plVar3 + 1);
      if ((longlong *)plVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar3[2];
        if (plVar6 != (longlong *)0x0) goto LAB_14593a332;
        plVar3[2] = (longlong)plVar4;
      }
LAB_14593a224:
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  uVar5 = FUN_145939d0e();
  local_38 = plVar3[3];
  FUN_145939e28(uVar5,&local_30);
  plVar6 = local_28;
  if (local_30 == 0) {
    DAT_14c98e5f8 = plVar3;
    plVar6 = DAT_14c98e600;
    if (DAT_14c98e600 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar2 = DAT_14c98e600;
      plVar6 = plVar4;
      if (DAT_14c98e600 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)DAT_14c98e600 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    DAT_14c98e600 = plVar6;
    (**(code **)(*plVar3 + 8))(plVar3);
    FUN_145939d74(plVar3 + 1);
  }
  else {
    DAT_14c98e5f8 = (longlong *)(local_30 + -8);
    plVar3 = local_28;
    if (local_28 == (longlong *)0x0) {
      if (DAT_14c98e600 != (longlong *)0x0) {
LAB_14593a3ad:
        plVar2 = DAT_14c98e600;
        LOCK();
        piVar1 = (int *)((longlong)DAT_14c98e600 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        DAT_14c98e600 = plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_14593a450;
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (DAT_14c98e600 != local_28) {
        LOCK();
        *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
        UNLOCK();
        if (DAT_14c98e600 != (longlong *)0x0) goto LAB_14593a3ad;
        DAT_14c98e600 = local_28;
      }
LAB_14593a450:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14593a2c3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14593a47a FUN_14593a47a body=402 status=ok
// SIG undefined FUN_14593a47a(void)

undefined8 * FUN_14593a47a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  wchar_t *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = DAT_14c96b350;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2);
  uVar1 = *puVar3;
  local_60 = L"DockingTabCommands";
  local_58 = 0x12;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"TabCommands";
  local_58 = 0xb;
  FUN_1446e940c(local_68,&local_60);
  FUN_140208bae(&local_60,local_68,local_64,L"Docking Tab Commands");
  FUN_1446f470e(&local_70,L"TabCommands",1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_70;
  param_1[4] = 0;
  param_1[5] = local_60;
  if (local_60 == (wchar_t *)0x0) {
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    (**(code **)(*(longlong *)local_60 + 8))();
    pwVar4 = local_60;
  }
  *(undefined4 *)(param_1 + 6) = local_58;
  param_1[7] = uVar1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_LAB_149efd888;
  if (pwVar4 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar4 + 0x10))();
  }
  *param_1 = &PTR_FUN_149efd878;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593a60e FUN_14593a60e body=844 status=ok
// SIG undefined FUN_14593a60e(void)

undefined8 * FUN_14593a60e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149ef9ff0;
  param_1[3] = 0x3f00000001010101;
  *(undefined4 *)(param_1 + 4) = 0x3f000000;
  puVar1 = param_1 + 0xb;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar2 = param_1 + 0x15;
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
  FUN_1413a517a(param_1 + 5,&DAT_14c965770);
  FUN_1413a517a(param_1 + 8,&DAT_14c965788);
  local_61 = 0;
  local_60 = &DAT_14c964e60;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 0;
  local_60 = &DAT_14c9659b0;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 1;
  local_60 = &DAT_14c964e90;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 1;
  local_60 = &DAT_14c965998;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 2;
  local_60 = &DAT_14c964e78;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 2;
  local_60 = &DAT_14c965968;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 3;
  local_60 = &DAT_14c964ea8;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 3;
  local_60 = &DAT_14c965980;
  local_58 = &local_61;
  FUN_14593a95c(puVar1,local_4c,&local_60);
  local_61 = 0;
  local_60 = &DAT_14c964d88;
  local_58 = &local_61;
  FUN_14593ac80(puVar2,local_4c,&local_60);
  local_61 = 0;
  local_60 = &DAT_14c964de8;
  local_58 = &local_61;
  FUN_14593ac80(puVar2,local_4c,&local_60);
  local_61 = 0;
  local_60 = &DAT_14c966d68;
  local_58 = &local_61;
  FUN_14593ac80(puVar2,local_4c,&local_60);
  local_61 = 1;
  local_60 = &DAT_14c964dd0;
  local_58 = &local_61;
  FUN_14593ac80(puVar2,local_4c,&local_60);
  local_61 = 1;
  local_60 = &DAT_14c966d80;
  local_58 = &local_61;
  FUN_14593ac80(puVar2,local_4c,&local_60);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593a95c FUN_14593a95c body=370 status=ok
// SIG undefined FUN_14593a95c(void)

undefined4 * FUN_14593a95c(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14593ab8c(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  uVar10 = *puVar1;
  *local_40 = uVar10;
  local_40[1] = puVar1[1];
  lVar8 = puVar1[2];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar10 = *local_40;
  }
  *(undefined1 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar5 = (uint)uVar10 & 0xffff;
  uVar9 = ((uint)uVar10 << 0x10 | uVar5) + (int)((ulonglong)uVar10 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14593aad0(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x24) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_141370c54(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593aad0 FUN_14593aad0 body=188 status=ok
// SIG undefined FUN_14593aad0(void)

undefined8 FUN_14593aad0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if (*plVar11 == *param_3) {
          plVar3 = (longlong *)plVar11[2];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_1469b4e48(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 14593ab8c FUN_14593ab8c body=243 status=ok
// SIG undefined FUN_14593ab8c(void)

int * FUN_14593ab8c(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14593ac80 FUN_14593ac80 body=359 status=ok
// SIG undefined FUN_14593ac80(void)

undefined4 * FUN_14593ac80(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14593aea4(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  uVar10 = *puVar1;
  *local_40 = uVar10;
  local_40[1] = puVar1[1];
  lVar8 = puVar1[2];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar10 = *local_40;
  }
  *(undefined1 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar5 = (uint)uVar10 & 0xffff;
  uVar9 = ((uint)uVar10 << 0x10 | uVar5) + (int)((ulonglong)uVar10 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14593ade8(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x24) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_141370e38(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593ade8 FUN_14593ade8 body=188 status=ok
// SIG undefined FUN_14593ade8(void)

undefined8 FUN_14593ade8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if (*plVar11 == *param_3) {
          plVar3 = (longlong *)plVar11[2];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_1469b4eba(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 14593aea4 FUN_14593aea4 body=231 status=ok
// SIG undefined FUN_14593aea4(void)

int * FUN_14593aea4(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14593af8c FUN_14593af8c body=1168 status=ok
// SIG undefined FUN_14593af8c(void)

void FUN_14593af8c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  char *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  uVar4 = local_30;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    uVar4 = (ulonglong)local_38;
  }
  plVar5 = DAT_14c966fe0;
  local_68 = DAT_14c966fd8;
  local_70 = DAT_14c966fd0;
  local_38 = (uint)uVar4 & 0xfffffff0;
  local_60 = DAT_14c966fe0;
  if (DAT_14c966fe0 == (longlong *)0x0) {
    local_70 = DAT_14c966fd0;
    local_68 = DAT_14c966fd8;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966fe0 + 1) = (int)DAT_14c966fe0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar1 = param_1 + 8;
  local_90 = L"Closes the focused major tab";
  local_98 = L"Close Major Tab";
  local_a0 = ".CloseMajorTab";
  local_a8 = L"CloseMajorTab_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0x90,L"TabCommands",L"CloseMajorTab");
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_70 = local_50;
    local_68 = uStack_48;
    local_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_70 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
    local_68 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
    local_60 = DAT_14c966e90;
  }
  local_38 = local_38 & 0xfffffff0;
  if (local_60 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    plVar5 = local_60;
  }
  local_58 = local_58 & 0xfffffff0;
  local_90 = L"Closes the current window\'s active minor tab";
  local_98 = L"Close Minor Tab";
  local_a0 = ".CloseMinorTab";
  local_a8 = L"CloseMinorTab_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xa0,L"TabCommands",L"CloseMinorTab");
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_70 = local_50;
    local_68 = uStack_48;
    local_60 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_70 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
    local_68 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
    local_60 = DAT_14c966e90;
  }
  local_38 = local_38 & 0xfffffff0;
  if (local_60 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    plVar5 = local_60;
  }
  local_58 = local_58 & 0xfffffff0;
  local_90 = L"Closes the focused tab, prioritizing minor tabs over major tabs";
  local_98 = L"Close Focused Tab";
  local_a0 = ".CloseFocusedTab";
  local_a8 = L"CloseFocusedTab_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xb0,L"TabCommands",L"CloseFocusedTab");
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593b436 FUN_14593b436 body=2667 status=ok
// SIG undefined FUN_14593b436(void)

undefined8 * FUN_14593b436(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  HHOOK pHVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [10];
  byte local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar5 = (code *)FUN_14001cc68(0x100,0x10);
  FUN_14593c542(pcVar5);
  local_70 = pcVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ec9fe0;
  plVar6[2] = (longlong)pcVar5;
  local_68 = plVar6;
  FUN_14593c3a4(param_1,&local_70);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  *param_1 = &PTR_FUN_149ec7090;
  param_1[0x13] = &PTR_FUN_149ec71d0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = param_2;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 1;
  local_88 = (undefined8 *)((ulonglong)local_88._4_4_ << 0x20);
  FUN_141471170(param_1 + 0x26,L"Slate.DeferWindowsMessageProcessing",param_1 + 0x25,
                L"Whether windows message processing is deferred until tick or if they are processed immediately"
               );
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  uVar7 = FUN_14001cc68(0xb8,0x10);
  FUN_141371da6(uVar7,param_1);
  param_1[0x3e] = uVar7;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar7 = DAT_14c967818;
  *(undefined8 *)((longlong)param_1 + 0x234) = DAT_14c967818;
  *(undefined8 *)((longlong)param_1 + 0x23c) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x244) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 0x121) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  DisableProcessWindowsGhosting();
  FUN_14593c0c6(param_1[0x16],param_3);
  OleInitialize((LPVOID)0x0);
  lVar8 = FUN_14001cc68(0x100,0x10);
  FUN_14593bef4(lVar8);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149eca000;
  plVar9[2] = lVar8;
  param_1[0x3a] = lVar8;
  plVar6 = (longlong *)param_1[0x3b];
  if (plVar9 == plVar6) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar9;
        goto joined_r0x00014593bc98;
      }
    }
  }
  else {
    param_1[0x3b] = plVar9;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x00014593bc98:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  cVar4 = FUN_141371524(param_1[0x3a]);
  if (cVar4 == '\0') {
    param_1[0x3a] = 0;
    plVar6 = (longlong *)param_1[0x3b];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x3b] = 0;
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  puVar10 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar10 = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149eca090;
  plVar6[2] = (longlong)puVar10;
  FUN_14593c28c(puVar10);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x3c] = puVar10;
    plVar9 = (longlong *)param_1[0x3d];
    if (plVar9 == (longlong *)0x0) goto LAB_14593b74a;
    param_1[0x3d] = 0;
LAB_14593bd15:
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
    if (plVar6 == (longlong *)0x0) goto LAB_14593b74a;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x3c] = puVar10;
    plVar9 = (longlong *)param_1[0x3d];
    if (plVar6 == plVar9) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[0x3d] = plVar6;
      if (plVar9 != (longlong *)0x0) goto LAB_14593bd15;
    }
  }
  LOCK();
  plVar9 = plVar6 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_14593b74a:
  FUN_140c2d49a(param_1 + 0x2a);
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication",L"bConsumeAltSpace",(longlong)param_1 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 8;
  *(undefined4 *)(param_1 + 0x40) = 8;
  *(undefined4 *)(param_1 + 0x41) = 0x18;
  SystemParametersInfoW(0x3a,8,param_1 + 0x3f,0);
  SystemParametersInfoW(0x34,8,param_1 + 0x40,0);
  SystemParametersInfoW(0x32,0x18,param_1 + 0x41,0);
  local_71 = *(byte *)((longlong)param_1 + 0x1fc) >> 2 & 1;
  local_72 = *(byte *)((longlong)param_1 + 0x204) >> 2 & 1;
  local_73 = *(byte *)((longlong)param_1 + 0x20c) >> 2 & 1;
  local_74 = *(byte *)((longlong)param_1 + 0x1fc) >> 3 & 1;
  local_75 = *(byte *)((longlong)param_1 + 0x204) >> 3 & 1;
  local_76 = *(byte *)((longlong)param_1 + 0x20c) >> 3 & 1;
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"StickyKeysHotkey",&local_71);
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"ToggleKeysHotkey",&local_72);
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"FilterKeysHotkey",&local_73);
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"StickyKeysConfirmation",
                &local_74);
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"ToggleKeysConfirmation",
                &local_75);
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"FilterKeysConfirmation",
                &local_76);
  *(uint *)((longlong)param_1 + 0x1fc) =
       (*(uint *)((longlong)param_1 + 0x1fc) & 0xfffffff3) + (uint)local_71 * 4 + (uint)local_74 * 8
  ;
  *(uint *)((longlong)param_1 + 0x204) =
       (*(uint *)((longlong)param_1 + 0x204) & 0xfffffff3) + (uint)local_72 * 4 + (uint)local_75 * 8
  ;
  *(uint *)((longlong)param_1 + 0x20c) =
       (*(uint *)((longlong)param_1 + 0x20c) & 0xfffffff3) + (uint)local_73 * 4 + (uint)local_76 * 8
  ;
  local_88 = &DAT_14c872ce8;
  FUN_14593bea2(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"StickyKeysHotkey");
  local_88 = &DAT_14c872ce8;
  FUN_14593bea2(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"ToggleKeysHotkey",local_72);
  local_88 = &DAT_14c872ce8;
  FUN_14593bea2(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"FilterKeysHotkey",local_73);
  local_88 = &DAT_14c872ce8;
  FUN_14593bea2(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"StickyKeysConfirmation",local_74
               );
  local_88 = &DAT_14c872ce8;
  FUN_14593bea2(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"ToggleKeysConfirmation",local_75
               );
  local_88 = &DAT_14c872ce8;
  FUN_14593bea2(DAT_14c872ce0,L"WindowsApplication.Accessibility",L"FilterKeysConfirmation",local_76
               );
  FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872ce8);
  local_70 = FUN_146919dac;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14593c1a2(local_80,param_1);
  FUN_14593bf7e(param_1,0);
  FUN_141371036(param_1);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"NoGamepad");
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"FilterLowLevelMouse");
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x15) == '\0')) {
    pHVar11 = SetWindowsHookExW(0xe,FUN_146919efc,(HINSTANCE)0x0,0);
    param_1[0x14] = pHVar11;
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar6 = DAT_14c8407a8;
  local_70 = (code *)0x0;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,3,0x10);
  local_68 = (longlong *)CONCAT44(local_68._4_4_,3);
  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_70 + 0x10) = lVar12;
  *(undefined ***)local_70 = &PTR_FUN_149eca020;
  *(undefined8 **)(local_70 + 0x18) = param_1;
  *(code **)(local_70 + 0x20) = FUN_146919e92;
  *(undefined4 *)(local_70 + 0x28) = 0;
  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
  (**(code **)(*plVar6 + 0xb0))
            (plVar6,L"WindowsApplication.ApplyLowLevelMouseFilter",
             L"Applies Low Level mouse filter that filters out mouse inputs that act like touch inputs"
             ,&local_70);
  FUN_1449db362(&local_70);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar6 = DAT_14c8407a8;
  local_70 = (code *)0x0;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,3,0x10);
  local_68 = (longlong *)CONCAT44(local_68._4_4_,3);
  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_70 + 0x10) = lVar12;
  *(undefined ***)local_70 = &PTR_FUN_149eca020;
  *(undefined8 **)(local_70 + 0x18) = param_1;
  *(code **)(local_70 + 0x20) = FUN_146919ed0;
  *(undefined4 *)(local_70 + 0x28) = 0;
  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
  (**(code **)(*plVar6 + 0xb0))
            (plVar6,L"WindowsApplication.RemoveLowLevelMouseFilter",
             L"Removes Low Level mouse filter that filters out mouse inputs that act like touch inputs"
             ,&local_70);
  FUN_1449db362(&local_70);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593bea2 FUN_14593bea2 body=81 status=ok
// SIG undefined FUN_14593bea2(void)

void FUN_14593bea2(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  wchar_t *pwVar2;
  
  lVar1 = FUN_14052bcbc(param_1,param_5);
  if (lVar1 != 0) {
    pwVar2 = L"False";
    if (param_4 != '\0') {
      pwVar2 = L"True";
    }
    FUN_1410abc54(lVar1,param_2,param_3,pwVar2);
    return;
  }
  return;
}



// FUNCTION 14593bef4 FUN_14593bef4 body=138 status=ok
// SIG undefined FUN_14593bef4(void)

void FUN_14593bef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ec8380;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return;
}



// FUNCTION 14593bf7e FUN_14593bf7e body=299 status=ok
// SIG undefined FUN_14593bf7e(void)

void FUN_14593bf7e(longlong param_1,char param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != '\0') {
    SystemParametersInfoW(0x3b,8,(PVOID)(param_1 + 0x1f8),0);
    SystemParametersInfoW(0x35,8,(PVOID)(param_1 + 0x200),0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  local_20 = *(ulonglong *)(param_1 + 0x1f8);
  if ((local_20 >> 0x20 & 1) == 0) {
    local_20 = local_20 & 0xfffffff2ffffffff;
    SystemParametersInfoW(0x3b,8,&local_20,0);
  }
  local_28 = *(ulonglong *)(param_1 + 0x200);
  if ((local_28 >> 0x20 & 1) == 0) {
    local_28 = local_28 & 0xfffffff2ffffffff;
    SystemParametersInfoW(0x35,8,&local_28,0);
  }
  local_48 = *(undefined4 *)(param_1 + 0x208);
  uStack_44 = *(uint *)(param_1 + 0x20c);
  uStack_40 = *(undefined4 *)(param_1 + 0x210);
  uStack_3c = *(undefined4 *)(param_1 + 0x214);
  local_38 = *(undefined8 *)(param_1 + 0x218);
  if ((uStack_44 & 1) == 0) {
    uStack_44 = uStack_44 & 0xfffffff2;
    SystemParametersInfoW(0x33,0x18,&local_48,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593c0c6 FUN_14593c0c6 body=218 status=ok
// SIG undefined FUN_14593c0c6(void)

void FUN_14593c0c6(HINSTANCE param_1,HICON param_2)

{
  ATOM AVar1;
  undefined1 auStack_78 [40];
  WNDCLASSW local_50;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50.style = 8;
  local_50._4_4_ = 0;
  local_50.lpfnWndProc = FUN_1408c4ee8;
  local_50.cbClsExtra = 0;
  local_50.cbWndExtra = 0;
  local_50.hCursor = (HCURSOR)0x0;
  local_50.hbrBackground = (HBRUSH)0x0;
  local_50.lpszMenuName = (LPCWSTR)0x0;
  local_50.lpszClassName = L"UnrealWindow";
  local_50.hInstance = param_1;
  local_50.hIcon = param_2;
  AVar1 = RegisterClassW(&local_50);
  if (AVar1 == 0) {
    if (DAT_14c8426d8 == 0) {
      MessageBoxW((HWND)0x0,L"Window Registration Failed!",L"Error!",0x30);
    }
    else {
      FUN_14275ab18(DAT_14c8426d8,0);
      MessageBoxW((HWND)0x0,L"Window Registration Failed!",L"Error!",0x30);
      if (DAT_14c8426d8 != 0) {
        FUN_14275ad76(DAT_14c8426d8,0);
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593c1a2 FUN_14593c1a2 body=232 status=ok
// SIG undefined FUN_14593c1a2(void)

undefined8 FUN_14593c1a2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_149eca020;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_1448b6402(&DAT_14c8688a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593c28c FUN_14593c28c body=248 status=ok
// SIG undefined FUN_14593c28c(void)

void FUN_14593c28c(LPVOID *param_1)

{
  byte bVar1;
  char cVar2;
  HRESULT HVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (((bVar1 == 0) && (cVar2 = FUN_14593c384(0), cVar2 != '\0')) &&
     (HVar3 = CoCreateInstance((IID *)&DAT_1499d76c0,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d76a0,param_1)
     , HVar3 != 0)) {
    *param_1 = (LPVOID)0x0;
  }
  return;
}



// FUNCTION 14593c384 FUN_14593c384 body=32 status=ok
// SIG undefined FUN_14593c384(void)

bool FUN_14593c384(char param_1)

{
  uint uVar1;
  
  uVar1 = CoInitializeEx((LPVOID)0x0,(uint)(param_1 == '\0') * 2);
  return uVar1 < 2;
}



// FUNCTION 14593c3a4 FUN_14593c3a4 body=266 status=ok
// SIG undefined FUN_14593c3a4(void)

undefined8 * FUN_14593c3a4(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_149ec5760;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = &PTR_FUN_149ec8100;
  param_1[3] = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149ec9570;
  puVar3[2] = puVar2;
  param_1[4] = puVar3;
  uVar4 = FUN_14001cc68(0x30,0x10);
  FUN_14593c4ae(uVar4);
  param_1[5] = uVar4;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ec9590;
  puVar2[2] = uVar4;
  param_1[6] = puVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 2;
  return param_1;
}



// FUNCTION 14593c4ae FUN_14593c4ae body=147 status=ok
// SIG undefined FUN_14593c4ae(void)

undefined8 * FUN_14593c4ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149ec5670;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149ec9550;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[2] = &PTR_FUN_149ec9568;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x80;
  *(undefined4 *)(puVar1 + 9) = 0xffffffff;
  param_1[4] = puVar1 + 2;
  param_1[5] = puVar1;
  return param_1;
}



// FUNCTION 14593c542 FUN_14593c542 body=966 status=ok
// SIG undefined FUN_14593c542(void)

longlong * FUN_14593c542(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  LPCWSTR pWVar4;
  int iVar5;
  HCURSOR pHVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [40];
  LPCWSTR local_90;
  longlong local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  LPCWSTR local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = (longlong)&PTR_FUN_149ec7c10;
  uVar8 = 0;
  do {
    param_1[uVar8 + 2] = 0;
    param_1[uVar8 + 0x11] = 0;
    pHVar6 = (HCURSOR)0x0;
    switch(uVar8 & 0xffffffff) {
    case 0:
      cVar1 = FUN_14137101c();
      if ((cVar1 != '\0') || (DAT_14c9673f0 == '\x01')) {
        FUN_1414927bc(&local_78);
        local_90 = L"";
        puVar7 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar7 = local_78;
        }
        FUN_140002266(&local_68,L"%s/Slate/Cursor/invisible.cur",puVar7);
        uVar2 = FUN_1401aee94();
        FUN_140056680(&local_88,uVar2);
        iVar5 = local_60 + -1;
        if (local_60 == 0) {
          iVar5 = 0;
        }
        FUN_1412cfe60(&local_58,&local_88,iVar5 + 1 + (uint)(local_80 == 0));
        FUN_1401aebe8(&local_58,local_68,iVar5);
        pWVar4 = local_90;
        if (local_50 != 0) {
          local_90 = local_58;
          pWVar4 = local_58;
        }
        goto LAB_14593c6cd;
      }
      pHVar6 = (HCURSOR)0x0;
      goto switchD_14593c5b3_default;
    case 1:
      pWVar4 = (LPCWSTR)0x7f00;
      break;
    case 2:
      pWVar4 = (LPCWSTR)0x7f01;
      break;
    case 3:
      pWVar4 = (LPCWSTR)0x7f84;
      break;
    case 4:
      pWVar4 = (LPCWSTR)0x7f85;
      break;
    case 5:
      pWVar4 = (LPCWSTR)0x7f82;
      break;
    case 6:
      pWVar4 = (LPCWSTR)0x7f83;
      break;
    case 7:
      pWVar4 = (LPCWSTR)0x7f86;
      break;
    case 8:
      pWVar4 = (LPCWSTR)0x7f03;
      break;
    case 9:
      goto switchD_14593c5b3_caseD_9;
    case 10:
      FUN_1414927bc(&local_78);
      puVar7 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar7 = local_78;
      }
      pwVar3 = L"%sEditor/Slate/Cursor/grabhand.cur";
      goto LAB_14593c74d;
    case 0xb:
      FUN_1414927bc(&local_78);
      puVar7 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar7 = local_78;
      }
      pwVar3 = L"%sEditor/Slate/Cursor/grabhand_closed.cur";
LAB_14593c74d:
      FUN_140002266(&local_68,pwVar3,puVar7);
      uVar2 = FUN_1401aee94();
      FUN_140056680(&local_88,uVar2);
      iVar5 = local_60 + -1;
      if (local_60 == 0) {
        iVar5 = 0;
      }
      FUN_1412cfe60(&local_58,&local_88,iVar5 + 1 + (uint)(local_80 == 0));
      FUN_1401aebe8(&local_58,local_68,iVar5);
      pWVar4 = L"";
      if (local_50 != 0) {
        pWVar4 = local_58;
      }
      pHVar6 = LoadCursorFromFileW(pWVar4);
      if (local_58 != (LPCWSTR)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (pHVar6 == (HCURSOR)0x0) {
switchD_14593c5b3_caseD_9:
        pWVar4 = (LPCWSTR)0x7f89;
        break;
      }
      goto switchD_14593c5b3_default;
    case 0xc:
      pWVar4 = (LPCWSTR)0x7f88;
      break;
    case 0xd:
      FUN_1414927bc(&local_78);
      puVar7 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar7 = local_78;
      }
      FUN_140002266(&local_68,L"%sEditor/Slate/Icons/eyedropper.cur",puVar7);
      uVar2 = FUN_1401aee94();
      FUN_140056680(&local_88,uVar2);
      iVar5 = local_60 + -1;
      if (local_60 == 0) {
        iVar5 = 0;
      }
      FUN_1412cfe60(&local_58,&local_88,iVar5 + 1 + (uint)(local_80 == 0));
      FUN_1401aebe8(&local_58,local_68,iVar5);
      pWVar4 = L"";
      if (local_50 != 0) {
        pWVar4 = local_58;
      }
LAB_14593c6cd:
      pHVar6 = LoadCursorFromFileW(pWVar4);
      if (local_58 != (LPCWSTR)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    default:
      goto switchD_14593c5b3_default;
    }
    pHVar6 = LoadCursorW((HINSTANCE)0x0,pWVar4);
switchD_14593c5b3_default:
    param_1[uVar8 + 2] = (longlong)pHVar6;
    uVar8 = uVar8 + 1;
    if (uVar8 == 0xf) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 14593c90a FUN_14593c90a body=3675 status=ok
// SIG undefined FUN_14593c90a(void)

void FUN_14593c90a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  char *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  uVar5 = local_30;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    uVar5 = (ulonglong)local_38;
  }
  plVar4 = DAT_14c966ec0;
  local_68 = DAT_14c966eb8;
  local_70 = DAT_14c966eb0;
  local_38 = (uint)uVar5 & 0xfffffff0;
  local_60 = DAT_14c966ec0;
  if (DAT_14c966ec0 == (longlong *)0x0) {
    local_70 = DAT_14c966eb0;
    local_68 = DAT_14c966eb8;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966ec0 + 1) = (int)DAT_14c966ec0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar1 = param_1 + 8;
  local_90 = L"Cut selection";
  local_98 = L"Cut";
  local_a0 = ".Cut";
  local_a8 = L"Cut_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0x90,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966ed8;
  local_68 = DAT_14c966ed0;
  local_70 = DAT_14c966ec8;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966ed8;
  if (DAT_14c966ed8 == (longlong *)0x0) {
    local_70 = DAT_14c966ec8;
    local_68 = DAT_14c966ed0;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966ed8 + 1) = (int)DAT_14c966ed8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Copy selection";
  local_98 = L"Copy";
  local_a0 = ".Copy";
  local_a8 = L"Copy_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xa0,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966ef0;
  local_68 = DAT_14c966ee8;
  local_70 = DAT_14c966ee0;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966ef0;
  if (DAT_14c966ef0 == (longlong *)0x0) {
    local_70 = DAT_14c966ee0;
    local_68 = DAT_14c966ee8;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966ef0 + 1) = (int)DAT_14c966ef0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Paste clipboard contents";
  local_98 = L"Paste";
  local_a0 = ".Paste";
  local_a8 = L"Paste_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xb0,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966f08;
  local_68 = DAT_14c966f00;
  local_70 = DAT_14c966ef8;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966f08;
  if (DAT_14c966f08 == (longlong *)0x0) {
    local_70 = DAT_14c966ef8;
    local_68 = DAT_14c966f00;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f08 + 1) = (int)DAT_14c966f08[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Duplicate selection";
  local_98 = L"Duplicate";
  local_a0 = ".Duplicate";
  local_a8 = L"Duplicate_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xc0,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966f20;
  local_68 = DAT_14c966f18;
  local_70 = DAT_14c966f10;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966f20;
  if (DAT_14c966f20 == (longlong *)0x0) {
    local_70 = DAT_14c966f10;
    local_68 = DAT_14c966f18;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f20 + 1) = (int)DAT_14c966f20[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Undo last action";
  local_98 = L"Undo";
  local_a0 = ".Undo";
  local_a8 = L"Undo_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xd0,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966f38;
  local_68 = DAT_14c966f30;
  local_70 = DAT_14c966f28;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966f38;
  if (DAT_14c966f38 == (longlong *)0x0) {
    local_70 = DAT_14c966f28;
    local_68 = DAT_14c966f30;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f38 + 1) = (int)DAT_14c966f38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Redo last action";
  local_98 = L"Redo";
  local_a0 = ".Redo";
  local_a8 = L"Redo_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xe0,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = DAT_14c966f50;
  uStack_48 = DAT_14c966f48;
  local_50 = DAT_14c966f40;
  local_40 = DAT_14c966f50;
  if (DAT_14c966f50 == (longlong *)0x0) {
    local_50 = DAT_14c966f40;
    uStack_48 = DAT_14c966f48;
    local_40 = (longlong *)0x0;
    local_38 = local_38 & 0xfffffff0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f50 + 1) = (int)DAT_14c966f50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = local_38 & 0xfffffff0;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = DAT_14c966f68;
  local_68 = DAT_14c966f60;
  local_70 = DAT_14c966f58;
  local_60 = DAT_14c966f68;
  if (DAT_14c966f68 == (longlong *)0x0) {
    local_70 = DAT_14c966f58;
    local_68 = DAT_14c966f60;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f68 + 1) = (int)DAT_14c966f68[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Delete current selection";
  local_98 = L"Delete";
  local_a0 = ".Delete";
  local_a8 = L"Delete_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0xf0,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966f80;
  local_68 = DAT_14c966f78;
  local_70 = DAT_14c966f70;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966f80;
  if (DAT_14c966f80 == (longlong *)0x0) {
    local_70 = DAT_14c966f70;
    local_68 = DAT_14c966f78;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f80 + 1) = (int)DAT_14c966f80[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Rename current selection";
  local_98 = L"Rename";
  local_a0 = ".Rename";
  local_a8 = L"Rename_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0x100,L"GenericCommands");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_50 = CONCAT44(DAT_14c966e80._4_4_,(undefined4)DAT_14c966e80);
  uStack_48 = CONCAT44(DAT_14c966e88._4_4_,(undefined4)DAT_14c966e88);
  local_40 = DAT_14c966e90;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c966f98;
  local_68 = DAT_14c966f90;
  local_70 = DAT_14c966f88;
  local_38 = local_38 & 0xfffffff0;
  local_60 = DAT_14c966f98;
  if (DAT_14c966f98 == (longlong *)0x0) {
    local_70 = DAT_14c966f88;
    local_68 = DAT_14c966f90;
    local_60 = (longlong *)0x0;
    local_58 = local_58 & 0xfffffff0 | 2;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966f98 + 1) = (int)DAT_14c966f98[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = local_58 & 0xfffffff0 | 2;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_90 = L"Select everything in the current scope";
  local_98 = L"Select All";
  local_a0 = ".SelectAll";
  local_a8 = L"SelectAll_ToolTip";
  local_88 = &local_70;
  local_80 = &local_50;
  FUN_14593d77e(lVar1,param_1 + 0x110,L"GenericCommands",L"SelectAll");
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593d77e FUN_14593d77e body=998 status=ok
// SIG undefined FUN_14593d77e(void)

void FUN_14593d77e(undefined8 *param_1,undefined8 param_2,wchar_t *param_3,wchar_t *param_4,
                  wchar_t *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  void *_Src;
  int iVar4;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong local_88 [4];
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98e6e0) && (FUN_144b3d300(&DAT_14c98e6e0), DAT_14c98e6e0 == -1)) {
    FUN_140056680(&DAT_14c98e6d0,L"UICommands");
    atexit((_func_5014 *)&LAB_1428f8a4f);
    _Init_thread_footer(&DAT_14c98e6e0);
  }
  local_d0 = param_2;
  if ((param_3 == (wchar_t *)0x0) || (sVar5 = wcslen(param_3), (int)sVar5 < 1)) {
    _Src = DAT_14c98e6d0;
    local_68 = (wchar_t *)0x0;
    lVar7 = (longlong)DAT_14c98e6d8;
    local_60 = DAT_14c98e6d8;
    if (lVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,DAT_14c98e6d8,0);
      memcpy(local_68,_Src,lVar7 * 2);
    }
  }
  else {
    FUN_1449b8608(local_88,&DAT_14c98e6d0,&DAT_149e0635c);
    FUN_144a882a8(&local_68,local_88,param_3);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_141160160(&local_90,param_1[2],param_6);
  local_f8 = (longlong **)0x0;
  iVar8 = 0;
  FUN_141372808(local_88,param_1[6],local_90,0);
  local_58 = param_5;
  local_50 = 0;
  if (param_5 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_5);
    local_50 = (int)sVar5;
  }
  FUN_1446e940c(local_a4,&local_58);
  local_58 = local_68;
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = iVar8;
  }
  FUN_1446e940c(local_a8,&local_58);
  FUN_140208bae(local_a0,local_a8,local_a4,param_8);
  local_58 = param_4;
  if (param_4 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_4);
    iVar8 = (int)sVar5;
  }
  local_50 = iVar8;
  FUN_1446e940c(local_ac,&local_58);
  local_58 = local_68;
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  FUN_1446e940c(local_b0,&local_58);
  FUN_140208bae(&local_58,local_b0,local_ac,param_7);
  FUN_1446f470e(&local_b8,param_4,1);
  plVar6 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
LAB_14593db24:
    local_c8 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14593db24;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar9 = iVar8 == iVar4;
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar4 = iVar8;
      }
      iVar8 = iVar4;
      UNLOCK();
    } while (!bVar9);
    local_c8 = *param_1;
    bVar3 = false;
  }
  local_e0 = param_10;
  local_e8 = param_9;
  local_f0 = local_88;
  local_f8 = local_a0;
  local_c0 = plVar6;
  FUN_14137284c(&local_c8,local_d0,local_b8,&local_58);
  if (!bVar3) {
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
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14593db66 FUN_14593db66 body=32 status=ok
// SIG undefined FUN_14593db66(void)

undefined8 FUN_14593db66(undefined8 param_1,undefined4 param_2)

{
  FUN_140002266(param_1,L"Touch%d",param_2);
  return param_1;
}



// FUNCTION 14593db86 FUN_14593db86 body=35 status=ok
// SIG undefined FUN_14593db86(void)

longlong FUN_14593db86(longlong param_1,undefined8 param_2)

{
  FUN_1446f470e(param_1,param_2,1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 14593dbaa FUN_14593dbaa body=58 status=ok
// SIG undefined FUN_14593dbaa(void)

longlong FUN_14593dbaa(longlong param_1,undefined8 param_2)

{
  FUN_144a5dc74();
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1413a4324(param_1 + 0x18,param_2);
  return param_1;
}



// FUNCTION 14593dbe4 FUN_14593dbe4 body=55 status=ok
// SIG undefined FUN_14593dbe4(void)

void FUN_14593dbe4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014593dc17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14593dc1c FUN_14593dc1c body=55 status=ok
// SIG undefined FUN_14593dc1c(void)

void FUN_14593dc1c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014593dc4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14593dc54 FUN_14593dc54 body=141 status=ok
// SIG undefined FUN_14593dc54(void)

longlong * FUN_14593dc54(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149ec52d0;
  puVar1[1] = *param_2;
  puVar1[2] = param_2[1];
  lVar2 = param_2[2];
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_144a3f946();
  puVar1[4] = uVar3;
  *puVar1 = &PTR_FUN_149ec5260;
  puVar1[5] = FUN_1428479b0;
  return param_1;
}



// FUNCTION 14593dce2 FUN_14593dce2 body=76 status=ok
// SIG undefined FUN_14593dce2(void)

undefined8 FUN_14593dce2(undefined8 param_1,undefined2 param_2)

{
  undefined1 auStack_38 [36];
  undefined2 local_14;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = 0;
  local_14 = param_2;
  FUN_140056680(param_1,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593dd30 FUN_14593dd30 body=1220 status=ok
// SIG undefined FUN_14593dd30(void)

void FUN_14593dd30(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  longlong lVar10;
  int iVar11;
  
  if ((*(char *)(param_1 + 0x42) == '\x03') && (DAT_14c966da8 != DAT_14c966dd4)) {
    lVar3 = *param_2;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    puVar9 = DAT_14c966de0;
    if (DAT_14c966de0 == (undefined *)0x0) {
      puVar9 = &DAT_14c966dd8;
    }
    for (iVar8 = *(int *)(puVar9 + (ulonglong)
                                   ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7)
                                    + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) &
                                   DAT_14c966de8 - 1U) * 4); iVar8 != -1;
        iVar8 = *(int *)((longlong)iVar8 * 0x30 + DAT_14c966da0 + 0x28)) {
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar8 * 0x30) == lVar3) {
        lVar3 = *param_3;
        uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar7 = (uint)lVar3 & 0xffff;
        iVar8 = *(int *)(puVar9 + (ulonglong)
                                  ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                                   (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) &
                                  DAT_14c966de8 - 1U) * 4);
        goto LAB_14593de18;
      }
    }
  }
  goto LAB_14593e103;
LAB_14593de18:
  if (iVar8 == -1) goto LAB_14593e103;
  if (*(longlong *)(DAT_14c966da0 + (longlong)iVar8 * 0x30) == lVar3) {
    FUN_1413a51d4(param_2);
    if ((param_2[1] != 0) && (*(char *)(param_2[1] + 0x42) == '\x02')) {
      FUN_1413a51d4(param_3);
      if ((param_3[1] != 0) && (*(char *)(param_3[1] + 0x42) == '\x02')) {
        FUN_1413a51d4(param_2);
        if ((param_2[1] == 0) || (*(char *)(param_2[1] + 0x18) == '\0')) {
          FUN_1413a51d4(param_3);
          if ((param_3[1] == 0) || (*(char *)(param_3[1] + 0x18) == '\0')) {
            FUN_1413a47ae(param_1);
            iVar8 = DAT_14c966da8;
            if (DAT_14c966da8 != DAT_14c966dd4) {
              lVar3 = *param_2;
              uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
              uVar7 = (uint)lVar3 & 0xffff;
              puVar9 = DAT_14c966de0;
              if (DAT_14c966de0 == (undefined *)0x0) {
                puVar9 = &DAT_14c966dd8;
              }
              iVar11 = *(int *)(puVar9 + (ulonglong)
                                         (DAT_14c966de8 - 1U &
                                         (int)((ulonglong)lVar3 >> 0x20) +
                                         ((uint)lVar3 << 0x10 | uVar7) +
                                         (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
              if (iVar11 != -1) goto LAB_14593df26;
            }
            lVar10 = 0;
            goto LAB_14593df3f;
          }
        }
      }
    }
    goto LAB_14593e103;
  }
  iVar8 = *(int *)((longlong)iVar8 * 0x30 + DAT_14c966da0 + 0x28);
  goto LAB_14593de18;
  while( true ) {
    iVar11 = *(int *)(lVar10 + 0x28);
    lVar10 = 0;
    if (iVar11 == -1) break;
LAB_14593df26:
    lVar10 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
    if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar3) break;
  }
LAB_14593df3f:
  *(undefined1 *)(*(longlong *)(lVar10 + 0x18) + 0x18) = 1;
  if (iVar8 == DAT_14c966dd4) {
LAB_14593e147:
    lVar10 = 0;
  }
  else {
    lVar3 = *param_3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    puVar9 = DAT_14c966de0;
    if (DAT_14c966de0 == (undefined *)0x0) {
      puVar9 = &DAT_14c966dd8;
    }
    iVar11 = *(int *)(puVar9 + (ulonglong)
                               (DAT_14c966de8 - 1U &
                               (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar11 == -1) goto LAB_14593e147;
    do {
      lVar10 = DAT_14c966da0 + (longlong)iVar11 * 0x30;
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar11 * 0x30) == lVar3) break;
      iVar11 = *(int *)(lVar10 + 0x28);
      lVar10 = 0;
    } while (iVar11 != -1);
  }
  *(undefined1 *)(*(longlong *)(lVar10 + 0x18) + 0x18) = 2;
  if (iVar8 == DAT_14c966dd4) {
LAB_14593e14e:
    lVar10 = 0;
  }
  else {
    lVar3 = *param_3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    puVar9 = DAT_14c966de0;
    if (DAT_14c966de0 == (undefined *)0x0) {
      puVar9 = &DAT_14c966dd8;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)
                              (DAT_14c966de8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 == -1) goto LAB_14593e14e;
    do {
      lVar10 = DAT_14c966da0 + (longlong)iVar8 * 0x30;
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar8 * 0x30) == lVar3) break;
      iVar8 = *(int *)(lVar10 + 0x28);
      lVar10 = 0;
    } while (iVar8 != -1);
  }
  uVar6 = FUN_1413a517a(*(longlong *)(lVar10 + 0x18) + 0x20);
  if (DAT_14c966da8 == DAT_14c966dd4) {
LAB_14593e155:
    lVar10 = 0;
  }
  else {
    lVar3 = *param_2;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    puVar9 = &DAT_14c966dd8;
    if (DAT_14c966de0 != (undefined *)0x0) {
      puVar9 = DAT_14c966de0;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)
                              (DAT_14c966de8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 == -1) goto LAB_14593e155;
    do {
      lVar10 = DAT_14c966da0 + (longlong)iVar8 * 0x30;
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar8 * 0x30) == lVar3) break;
      iVar8 = *(int *)(lVar10 + 0x28);
      lVar10 = 0;
    } while (iVar8 != -1);
  }
  FUN_1413a517a(*(longlong *)(lVar10 + 0x18) + 0x20,uVar6);
LAB_14593e103:
  plVar4 = (longlong *)param_2[2];
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
  plVar4 = (longlong *)param_3[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014593e191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14593e1f4 FUN_14593e1f4 body=87 status=ok
// SIG undefined FUN_14593e1f4(void)

void FUN_14593e1f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14593e24c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593e24c FUN_14593e24c body=145 status=ok
// SIG undefined FUN_14593e24c(void)

void FUN_14593e24c(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  FUN_140dba9e6(*param_1,param_2[0x34]);
  if (*(char *)(param_2 + 0x43) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x42]);
    return;
  }
  return;
}



// FUNCTION 14593e2de FUN_14593e2de body=150 status=ok
// SIG undefined FUN_14593e2de(void)

undefined8 FUN_14593e2de(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_14593e376();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14593e376 FUN_14593e376 body=221 status=ok
// SIG undefined FUN_14593e376(void)

longlong FUN_14593e376(void)

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
  if (DAT_14cb921c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f8c60;
    local_40 = &LAB_14656c527;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x5d0;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUIView",&DAT_14cb921c8,FUN_14656c500);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb921c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593e454 FUN_14593e454 body=132 status=ok
// SIG undefined FUN_14593e454(void)

void FUN_14593e454(longlong param_1,int param_2)

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



// FUNCTION 14593e4d8 FUN_14593e4d8 body=52 status=ok
// SIG undefined FUN_14593e4d8(void)

void FUN_14593e4d8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14593e50c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aeb9cb0;
  puVar1[0x39] = 0x4014000000000000;
  return;
}



// FUNCTION 14593e50c FUN_14593e50c body=274 status=ok
// SIG undefined FUN_14593e50c(void)

undefined8 * FUN_14593e50c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1413d1192();
  param_1[0x21] = &DAT_3f8000003f800000;
  param_1[0x22] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 **)((longlong)param_1 + 0x11c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x124) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = &DAT_3f8000003f800000;
  param_1[0x27] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x4000000040000000;
  *param_1 = &PTR_FUN_14aebd1e0;
  param_1[0x2d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2b] = DAT_14c8464e0;
  param_1[0x2c] = uVar1;
  param_1[0x30] = DAT_14c8462a0;
  uVar1 = DAT_14c846298;
  param_1[0x2e] = DAT_14c846290;
  param_1[0x2f] = uVar1;
  uVar1 = DAT_14c8462e0;
  param_1[0x31] = DAT_14c8462d8;
  param_1[0x32] = uVar1;
  param_1[0x33] = DAT_14c8462e8;
  param_1[0x34] = 0x4059000000000000;
  param_1[0x35] = 0x40;
  param_1[0x36] = 0;
  param_1[0x37] = 0x401921fb54442d18;
  param_1[0x38] = 0x3feeb851e0000000;
  return param_1;
}



// FUNCTION 14593e61e FUN_14593e61e body=61 status=ok
// SIG undefined FUN_14593e61e(void)

undefined8 * FUN_14593e61e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14593e6c6();
  FUN_14593e65c(puVar1);
  *puVar1 = &PTR_FUN_14b964cf0;
  puVar1[0x2d] = 0x4234000042480000;
  puVar1[0x2e] = 0x3f34fdf442aa0000;
  *(undefined1 *)(puVar1 + 0x2f) = 1;
  return puVar1;
}



// FUNCTION 14593e65c FUN_14593e65c body=106 status=ok
// SIG undefined FUN_14593e65c(void)

undefined8 * FUN_14593e65c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b021d90;
  param_1[3] = 0x3f6666663f666666;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f00000044fa0000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x42c8000041a00000;
  memset(param_1 + 10,0,0x118);
  return param_1;
}



// FUNCTION 14593e6c6 FUN_14593e6c6 body=113 status=ok
// SIG undefined FUN_14593e6c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14593e6c6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbc6248;
  if (DAT_14cbc6248 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1800,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x30;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbc6248;
    _DAT_14cbc6250 = _DAT_14cbc6250 + 0x10;
  }
  DAT_14cbc6248 = (undefined8 *)*puVar2;
  _DAT_14cbc6254 = _DAT_14cbc6254 + 1;
  return;
}



// FUNCTION 14593e738 FUN_14593e738 body=416 status=ok
// SIG undefined FUN_14593e738(void)

bool FUN_14593e738(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      (((char)param_1[3] == (char)param_2[3] &&
       (*(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c))))) &&
     ((param_1[4] == param_2[4] &&
      (((char)param_1[6] == (char)param_2[6] && ((char)param_1[0xb] == (char)param_2[0xb])))))) {
    iVar1 = (int)param_1[0xd];
    if (iVar1 == (int)param_2[0xd]) {
      if (1 < iVar1) {
        lVar3 = 0;
        while( true ) {
          uVar4 = *(ushort *)(param_1[0xc] + lVar3);
          uVar5 = (ulonglong)uVar4;
          uVar6 = *(ushort *)(param_2[0xc] + lVar3);
          if (uVar4 != uVar6) break;
          if (uVar4 == 0) goto LAB_14593e813;
LAB_14593e7e3:
          lVar3 = lVar3 + 2;
        }
        if ((uVar6 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_14593e7e3;
        }
        if (uVar4 != uVar6) {
          return false;
        }
      }
    }
    else if ((int)param_2[0xd] + iVar1 != 1) {
      return false;
    }
LAB_14593e813:
    if ((((((int)param_1[0x10] == (int)param_2[0x10]) &&
          (*(char *)((longlong)param_1 + 0x84) == *(char *)((longlong)param_2 + 0x84))) &&
         (*(char *)((longlong)param_1 + 0x85) == *(char *)((longlong)param_2 + 0x85))) &&
        (((*(char *)((longlong)param_1 + 0x86) == *(char *)((longlong)param_2 + 0x86) &&
          ((int)param_1[0x12] == (int)param_2[0x12])) &&
         ((cVar2 = FUN_14593e8d8(param_1[0x11],param_2[0x11]), cVar2 != '\0' &&
          (((int)param_1[0x15] == (int)param_2[0x15] &&
           (cVar2 = FUN_14593e91c(param_1[0x14],param_2[0x14]), cVar2 != '\0')))))))) &&
       ((char)param_1[0x1d] == (char)param_2[0x1d])) {
      return (char)param_1[0x29] == (char)param_2[0x29];
    }
  }
  return false;
}



// FUNCTION 14593e8d8 FUN_14593e8d8 body=68 status=ok
// SIG undefined FUN_14593e8d8(void)

char FUN_14593e8d8(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  while( true ) {
    if (param_3 == 0) {
      return cVar1;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_148e2a876(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return '\0';
}



// FUNCTION 14593e91c FUN_14593e91c body=76 status=ok
// SIG undefined FUN_14593e91c(void)

char FUN_14593e91c(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  while( true ) {
    if (param_3 == 0) {
      return cVar1;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_148e238f2(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return '\0';
}



// FUNCTION 14593e968 FUN_14593e968 body=40 status=ok
// SIG undefined FUN_14593e968(void)

undefined8 FUN_14593e968(undefined8 param_1,int param_2)

{
  FUN_14593e990();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14593e990 FUN_14593e990 body=180 status=ok
// SIG undefined FUN_14593e990(void)

void FUN_14593e990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac1c090;
  param_1[5] = &PTR_FUN_14ac1c350;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14593ea44(param_1 + 0x16);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14593ea7a(param_1 + 7);
  FUN_145971254(param_1);
  return;
}



// FUNCTION 14593ea44 FUN_14593ea44 body=53 status=ok
// SIG undefined FUN_14593ea44(void)

void FUN_14593ea44(longlong *param_1)

{
  FUN_14593eab0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14593ea7a FUN_14593ea7a body=53 status=ok
// SIG undefined FUN_14593ea7a(void)

void FUN_14593ea7a(longlong *param_1)

{
  FUN_14593eb0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14593eab0 FUN_14593eab0 body=90 status=ok
// SIG undefined FUN_14593eab0(void)

void FUN_14593eab0(longlong param_1)

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



// FUNCTION 14593eb0a FUN_14593eb0a body=90 status=ok
// SIG undefined FUN_14593eb0a(void)

void FUN_14593eb0a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 14593eb6c FUN_14593eb6c body=210 status=ok
// SIG undefined FUN_14593eb6c(void)

undefined8 * FUN_14593eb6c(undefined8 *param_1)

{
  FUN_140c83e26();
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x200000000;
  *param_1 = &PTR_FUN_14b6d6460;
  FUN_140e47e4e(param_1 + 0x20);
  param_1[0x20] = &PTR_FUN_14b6d6970;
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3cc) = 0;
  FUN_140e47e4e(param_1 + 0x7a);
  param_1[0x7a] = &PTR_FUN_14b6d6970;
  *(undefined4 *)(param_1 + 0xd3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x69c) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0x22] = DAT_14cadde58;
  *(undefined8 *)((longlong)param_1 + 0x224) = DAT_14cadde60;
  param_1[0x7c] = DAT_14cadde68;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = DAT_14cadde70;
  return param_1;
}



// FUNCTION 14593ec3e FUN_14593ec3e body=60 status=ok
// SIG undefined FUN_14593ec3e(void)

void FUN_14593ec3e(longlong param_1)

{
  FUN_14593ed52();
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14593ec7a FUN_14593ec7a body=71 status=ok
// SIG undefined FUN_14593ec7a(void)

undefined8 * FUN_14593ec7a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14593ecc2 FUN_14593ecc2 body=144 status=ok
// SIG undefined FUN_14593ecc2(void)

void FUN_14593ecc2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x18c) = (int)uVar4;
    FUN_1403738d6(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14593ed52 FUN_14593ed52 body=106 status=ok
// SIG undefined FUN_14593ed52(void)

void FUN_14593ed52(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_140373856(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(uint *)(param_1 + 0x1a4) < 0x21) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0x20;
  FUN_14008f53c(param_1 + 400,0);
  return;
}



// FUNCTION 14593edbc FUN_14593edbc body=369 status=ok
// SIG undefined FUN_14593edbc(void)

undefined8 FUN_14593edbc(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = rand();
  fVar8 = ((float)(uVar4 & 0x7fff) / 32767.0) * *param_1;
  pfVar1 = param_1 + 2;
  pfVar2 = param_1 + 0x66;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  fStack_5c = 0.0;
  uStack_58 = 0;
  uStack_68 = pfVar2;
  if (param_1[0x6a] == 0.0) {
    fVar7 = 0.0;
  }
  else {
    FUN_144a81a4c(&local_70);
    fVar7 = param_1[0x6a];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  fStack_7c = fStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = pfVar1;
  if ((fStack_5c != fVar7) || (uStack_68 != pfVar2)) {
    fVar9 = 0.0;
    do {
      pfVar6 = *(float **)(local_98 + 0x60);
      if (*(float **)(local_98 + 0x60) == (float *)0x0) {
        pfVar6 = local_98;
      }
      bVar3 = fVar9 <= fVar8;
      fVar9 = fVar9 + pfVar6[(longlong)(int)fStack_7c * 6 + 2];
      if ((bVar3) && (fVar8 <= fVar9)) {
        uVar5 = *(undefined8 *)(pfVar6 + (longlong)(int)fStack_7c * 6);
        *param_2 = uVar5;
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        goto LAB_14593eef5;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_144a81a4c(&local_90);
    } while (local_98 != pfVar1 ||
             ((float *)CONCAT44(uStack_84,uStack_88) != pfVar2 || fStack_7c != fVar7));
  }
  uVar5 = 0;
LAB_14593eef5:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593ef2e FUN_14593ef2e body=37 status=ok
// SIG undefined FUN_14593ef2e(void)

void FUN_14593ef2e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  FUN_14593ef54(param_2);
  return;
}



// FUNCTION 14593ef54 FUN_14593ef54 body=150 status=ok
// SIG undefined FUN_14593ef54(void)

undefined8 * FUN_14593ef54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b09fb70;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 4) = 0x43960000;
  *(undefined1 *)(param_1 + 8) = 3;
  *(char *)(param_1 + 9) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 4;
  *(undefined4 *)(param_1 + 0xb) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xf) = 3;
  *(char *)(param_1 + 0x10) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x11] = 0x451c4000449c4000;
  return param_1;
}



// FUNCTION 14593efea FUN_14593efea body=63 status=ok
// SIG undefined FUN_14593efea(void)

void FUN_14593efea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14593f02a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14593f02a FUN_14593f02a body=93 status=ok
// SIG undefined FUN_14593f02a(void)

ulonglong FUN_14593f02a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14593f08e FUN_14593f08e body=228 status=ok
// SIG undefined FUN_14593f08e(void)

longlong FUN_14593f08e(void)

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
  if (DAT_14cb54130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1485fe28f;
    local_40 = &LAB_1461e5d04;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x538;
    FUN_14081cfa3(L"/Script/GbxTimeOfDay",L"WorldTimeOfDayActor",&DAT_14cb54130,FUN_1464acb20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb54130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593f178 FUN_14593f178 body=228 status=ok
// SIG undefined FUN_14593f178(void)

longlong FUN_14593f178(void)

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
  if (DAT_14cb6a968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148768e61;
    local_40 = FUN_146528085;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"JunkSystemNotificationReceiver",&DAT_14cb6a968,&DAT_148768e60
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593f264 FUN_14593f264 body=228 status=ok
// SIG undefined FUN_14593f264(void)

longlong FUN_14593f264(void)

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
  if (DAT_14cb91478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1489f2059;
    local_40 = FUN_146569208;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxPreSwizzleInputModifiers",&DAT_14cb91478,
                  &DAT_1489f2058);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593f34a FUN_14593f34a body=40 status=ok
// SIG undefined FUN_14593f34a(void)

undefined8 FUN_14593f34a(undefined8 param_1,int param_2)

{
  FUN_14593f372();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14593f372 FUN_14593f372 body=77 status=ok
// SIG undefined FUN_14593f372(void)

void FUN_14593f372(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528e50;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14b528ec0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14593f3c6 FUN_14593f3c6 body=228 status=ok
// SIG undefined FUN_14593f3c6(void)

longlong FUN_14593f3c6(void)

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
  if (DAT_14cba06c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148b8ff7d;
    local_40 = &LAB_145acf7e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x918;
    FUN_14081cfa3(L"/Script/OakGame",L"Enhancement",&DAT_14cba06c0,&DAT_148b8ff7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba06c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593f4b0 FUN_14593f4b0 body=228 status=ok
// SIG undefined FUN_14593f4b0(void)

longlong FUN_14593f4b0(void)

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
  if (DAT_14cbaf4f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c49fe1;
    local_40 = FUN_1465efaa1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakTrackableObject",&DAT_14cbaf4f0,&DAT_148c49fe0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf4f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593f59c FUN_14593f59c body=228 status=ok
// SIG undefined FUN_14593f59c(void)

longlong FUN_14593f59c(void)

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
  if (DAT_14cbc00b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148cb4acb;
    local_40 = &LAB_145866fdf;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x28c0;
    FUN_14081cfa3(L"/Script/OakGame",L"SiloBaseObject",&DAT_14cbc00b0,FUN_146615ac8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc00b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593f68a FUN_14593f68a body=148 status=ok
// SIG undefined FUN_14593f68a(void)

undefined8 * FUN_14593f68a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba51760;
  FUN_144a5dc74(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 2;
  return param_1;
}



// FUNCTION 14593f71e FUN_14593f71e body=44 status=ok
// SIG undefined FUN_14593f71e(void)

undefined8 FUN_14593f71e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413d305a(param_1,param_3);
  FUN_14593f74a(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 14593f74a FUN_14593f74a body=342 status=ok
// SIG undefined FUN_14593f74a(void)

undefined8 * FUN_14593f74a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
switchD_14593f7fb_default:
    *param_2 = 0;
    goto LAB_14593f7c3;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xa8) + 0x20);
  if (cVar1 == '\x01') {
    param_3 = param_3 + 0x168;
    goto LAB_14593f789;
  }
  switch(cVar1) {
  case '\x02':
    param_3 = param_3 + 0x180;
    break;
  case '\x03':
    param_3 = param_3 + 0x198;
    break;
  case '\x04':
    param_3 = param_3 + 0x1b0;
    break;
  case '\x05':
    param_3 = param_3 + 0x240;
    break;
  case '\x06':
    param_3 = param_3 + 600;
    break;
  case '\a':
    param_3 = param_3 + 0x270;
    break;
  case '\b':
    param_3 = param_3 + 0x288;
    break;
  case '\t':
    param_3 = param_3 + 0x2a0;
    break;
  case '\n':
    local_40 = FUN_148977064;
    local_38 = 0;
    FUN_1489773ac(local_30,param_1);
    FUN_14104d758(param_3 + 0x150,param_2,local_30);
    goto LAB_14593f7bb;
  default:
    goto switchD_14593f7fb_default;
  }
LAB_14593f789:
  local_40 = FUN_14116576c;
  local_38 = 0;
  FUN_14593f8a2(local_30);
  FUN_14036a282(param_3,param_2,local_30);
LAB_14593f7bb:
  FUN_1449db362(local_30);
LAB_14593f7c3:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14593f8a2 FUN_14593f8a2 body=428 status=ok
// SIG undefined FUN_14593f8a2(void)

longlong * FUN_14593f8a2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_14593f982:
    *puVar5 = &PTR_LAB_14b3f7890;
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
    *puVar5 = &PTR_FUN_14b4281e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14593f982;
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
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3f7890;
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
    *puVar5 = &PTR_FUN_14b4281e0;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14593fa4e FUN_14593fa4e body=271 status=ok
// SIG undefined FUN_14593fa4e(void)

undefined8 * FUN_14593fa4e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14a309ea0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a309e30;
  local_30[3] = param_1;
  FUN_14593fb5e(param_2 + 0x5378,local_38,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593fb5e FUN_14593fb5e body=216 status=ok
// SIG undefined FUN_14593fb5e(void)

undefined8 * FUN_14593fb5e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14593fc44 FUN_14593fc44 body=118 status=ok
// SIG undefined FUN_14593fc44(void)

void FUN_14593fc44(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_14593fcba(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14593fcba FUN_14593fcba body=132 status=ok
// SIG undefined FUN_14593fcba(void)

void FUN_14593fcba(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 14593fd4c FUN_14593fd4c body=40 status=ok
// SIG undefined FUN_14593fd4c(void)

undefined8 FUN_14593fd4c(undefined8 param_1,int param_2)

{
  FUN_14593fd74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14593fd74 FUN_14593fd74 body=71 status=ok
// SIG undefined FUN_14593fd74(void)

void FUN_14593fd74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab7bbd0;
  FUN_14067009e(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14593fdbc FUN_14593fdbc body=103 status=ok
// SIG undefined FUN_14593fdbc(void)

void FUN_14593fdbc(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = local_28;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
            (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),1,param_1 + 0x38);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593fe3e FUN_14593fe3e body=207 status=ok
// SIG undefined FUN_14593fe3e(void)

void FUN_14593fe3e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_14593feee;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14593feee:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14593ff16 FUN_14593ff16 body=78 status=ok
// SIG undefined FUN_14593ff16(void)

undefined8 * FUN_14593ff16(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a6169a0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14593ff64 FUN_14593ff64 body=40 status=ok
// SIG undefined FUN_14593ff64(void)

undefined8 FUN_14593ff64(undefined8 param_1,int param_2)

{
  FUN_14593ff8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14593ff8c FUN_14593ff8c body=198 status=ok
// SIG undefined FUN_14593ff8c(void)

void FUN_14593ff8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b66c140;
  FUN_1449db362(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145940052(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145940088(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145940052 FUN_145940052 body=53 status=ok
// SIG undefined FUN_145940052(void)

void FUN_145940052(longlong *param_1)

{
  FUN_145940118();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145940088 FUN_145940088 body=53 status=ok
// SIG undefined FUN_145940088(void)

void FUN_145940088(longlong *param_1)

{
  FUN_1459400be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459400be FUN_1459400be body=90 status=ok
// SIG undefined FUN_1459400be(void)

void FUN_1459400be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145940118 FUN_145940118 body=90 status=ok
// SIG undefined FUN_145940118(void)

void FUN_145940118(longlong param_1)

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



// FUNCTION 145940178 FUN_145940178 body=221 status=ok
// SIG undefined FUN_145940178(void)

longlong FUN_145940178(void)

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
  if (DAT_14cb1ec00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ea9c93;
    local_40 = FUN_146428ce4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/AIModule",L"BehaviorTreeManager",&DAT_14cb1ec00,&DAT_147ea9c92);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ec00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594025c FUN_14594025c body=182 status=ok
// SIG undefined FUN_14594025c(void)

void FUN_14594025c(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_38 = 0;
  FUN_14570d169(&local_20,param_1[1],(int)param_1[2],0);
  param_1 = (longlong *)*param_1;
  if (param_1 != &local_20) {
    lVar3 = *param_1;
    *param_1 = local_20;
    local_20 = 0;
    if (lVar3 == 0) goto LAB_1459402b7;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_20 != 0) {
    LOCK();
    puVar1 = (uint *)(local_20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1459402b7:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145940314 FUN_145940314 body=40 status=ok
// SIG undefined FUN_145940314(void)

undefined8 FUN_145940314(undefined8 param_1,int param_2)

{
  FUN_14594033c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594033c FUN_14594033c body=766 status=ok
// SIG undefined FUN_14594033c(void)

void FUN_14594033c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aeb4870;
  param_1[5] = &PTR_FUN_14aeb4c30;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x72) == '\x01') {
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  if (param_1[0x5c] != 0) {
    plVar3 = param_1 + 0x60;
    if ((longlong *)param_1[0x5e] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x5e];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x54] != 0) {
    plVar3 = param_1 + 0x58;
    if ((longlong *)param_1[0x56] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x56];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x4c] != 0) {
    plVar3 = param_1 + 0x50;
    if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x4e];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    plVar3 = param_1 + 0x32;
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x30];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x26] != 0) {
    plVar3 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1e];
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
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14594063a thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145940640 FUN_145940640 body=12 status=ok
// SIG undefined FUN_145940640(void)

void FUN_145940640(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145940649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14594064c FUN_14594064c body=31 status=ok
// SIG undefined FUN_14594064c(void)

undefined8 FUN_14594064c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145940684 FUN_145940684 body=31 status=ok
// SIG undefined FUN_145940684(void)

undefined8 FUN_145940684(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459406a4 FUN_1459406a4 body=31 status=ok
// SIG undefined FUN_1459406a4(void)

undefined8 FUN_1459406a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459406c4 FUN_1459406c4 body=132 status=ok
// SIG undefined FUN_1459406c4(void)

void FUN_1459406c4(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x14) == param_2) {
          FUN_145940748(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145940748 FUN_145940748 body=85 status=ok
// SIG undefined FUN_145940748(void)

void FUN_145940748(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_14594079e();
  return;
}



// FUNCTION 14594079e FUN_14594079e body=112 status=ok
// SIG undefined FUN_14594079e(void)

void FUN_14594079e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 14594081c FUN_14594081c body=40 status=ok
// SIG undefined FUN_14594081c(void)

undefined8 FUN_14594081c(undefined8 param_1,int param_2)

{
  FUN_145940844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145940844 FUN_145940844 body=71 status=ok
// SIG undefined FUN_145940844(void)

void FUN_145940844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b693260;
  FUN_14594088b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14594088b FUN_14594088b body=63 status=ok
// SIG undefined FUN_14594088b(void)

void FUN_14594088b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459408ca FUN_1459408ca body=45 status=ok
// SIG undefined FUN_1459408ca(void)

void FUN_1459408ca(undefined8 param_1,longlong param_2)

{
  FUN_1459408f7(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459408f7 FUN_1459408f7 body=49 status=ok
// SIG undefined FUN_1459408f7(void)

void FUN_1459408f7(longlong param_1,int param_2)

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



// FUNCTION 145940928 FUN_145940928 body=169 status=ok
// SIG undefined FUN_145940928(void)

bool FUN_145940928(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459409d2 FUN_1459409d2 body=496 status=ok
// SIG undefined FUN_1459409d2(void)

void FUN_1459409d2(undefined8 param_1,longlong *param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && (1 < (int)param_2[1])) {
    plVar3 = (longlong *)FUN_145940bc4();
    lVar10 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar10 + 0x1f0);
    AcquireSRWLockShared(SRWLock);
    cVar1 = FUN_145940c3a(lVar10,param_2);
    ReleaseSRWLockShared(SRWLock);
    if (cVar1 != '\0') {
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_1401031ac(param_3,0,local_58);
      FUN_140002266(local_58 + 2,L"TextureRenderTarget2D\'%s\'");
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)FUN_145940bc4(param_1);
      lVar10 = *plVar3;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar10 + 0x1f0));
      *(int *)(lVar10 + 0x1e8) = *(int *)(lVar10 + 0x1e8) + 1;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar10 + 0x1f0));
      lVar6 = *(longlong *)(lVar10 + 0x38);
      *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 2;
      if ((longlong)*(int *)(lVar10 + 0x40) != 0) {
        lVar10 = (longlong)*(int *)(lVar10 + 0x40) * 0x448 + lVar6;
        do {
          iVar2 = *(int *)(lVar6 + 0x1f8);
          if (iVar2 == (int)param_2[1]) {
            if (1 < iVar2) {
              lVar7 = 0;
              while( true ) {
                uVar4 = *(ushort *)(*(longlong *)(lVar6 + 0x1f0) + lVar7);
                uVar5 = (ulonglong)uVar4;
                uVar8 = *(ushort *)(*param_2 + lVar7);
                if (uVar4 != uVar8) break;
                if (uVar4 == 0) goto LAB_145940b64;
LAB_145940b30:
                lVar7 = lVar7 + 2;
              }
              if ((uVar8 | uVar4) < 0x80) {
                uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                uVar9 = (ulonglong)uVar8;
                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_145940b30;
              }
              if (uVar4 != uVar8) goto LAB_145940b91;
            }
LAB_145940b64:
            FUN_1449a0272(lVar6 + 0x1d8,local_58 + 2);
            iVar2 = *(int *)(lVar6 + 0x1d4);
            if (*(char *)(lVar6 + 0x1d0) == '\0') {
              if (iVar2 != 0) goto LAB_145940b91;
              iVar2 = 0;
            }
            *(undefined1 *)(lVar6 + 0x1d0) = 0;
            *(int *)(lVar6 + 0x1d4) = iVar2 + 1;
          }
          else if ((int)param_2[1] + iVar2 == 1) goto LAB_145940b64;
LAB_145940b91:
          lVar6 = lVar6 + 0x448;
        } while (lVar6 != lVar10);
      }
      if (local_58[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145940bc4 FUN_145940bc4 body=116 status=ok
// SIG undefined FUN_145940bc4(void)

longlong FUN_145940bc4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145940c3a FUN_145940c3a body=196 status=ok
// SIG undefined FUN_145940c3a(void)

undefined4 FUN_145940c3a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  iVar2 = (int)param_2[1];
  lVar7 = lVar1;
LAB_145940c6e:
  if (iVar2 == *(int *)(lVar7 + 0x1f8)) {
    if (1 < iVar2) {
      lVar3 = 0;
      do {
        uVar5 = *(ushort *)(*param_2 + lVar3);
        uVar6 = (ulonglong)uVar5;
        uVar4 = *(ushort *)(*(longlong *)(lVar7 + 0x1f0) + lVar3);
        if (uVar5 == uVar4) {
          if (uVar5 == 0) break;
        }
        else {
          if (0x7f < (uVar4 | uVar5)) goto LAB_145940cdf;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_145940cdf;
        }
        lVar3 = lVar3 + 2;
      } while( true );
    }
    goto LAB_145940ce5;
  }
  if (*(int *)(lVar7 + 0x1f8) + iVar2 == 1) goto LAB_145940ce5;
  goto LAB_145940ccb;
LAB_145940cdf:
  if (uVar5 == uVar4) {
LAB_145940ce5:
    iVar2 = (int)((ulonglong)(lVar7 - lVar1) >> 3) * 0x77975b9;
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != -1);
  }
LAB_145940ccb:
  lVar7 = lVar7 + 0x448;
  if (lVar7 == (longlong)*(int *)(param_1 + 0x40) * 0x448 + lVar1) {
    return 0;
  }
  goto LAB_145940c6e;
}



// FUNCTION 145940cfe FUN_145940cfe body=46 status=ok
// SIG undefined FUN_145940cfe(void)

void FUN_145940cfe(longlong param_1)

{
  FUN_145940d2c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145940d2c FUN_145940d2c body=41 status=ok
// SIG undefined FUN_145940d2c(void)

void FUN_145940d2c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1413d5a30(param_1);
    param_1 = param_1 + 0xf8;
  }
  return;
}



// FUNCTION 145940d56 FUN_145940d56 body=226 status=ok
// SIG undefined FUN_145940d56(void)

longlong * FUN_145940d56(longlong *param_1)

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
  pcVar13 = FUN_1460303b8;
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



// FUNCTION 145940e3e FUN_145940e3e body=136 status=ok
// SIG undefined FUN_145940e3e(void)

code * FUN_145940e3e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceDataByteOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471383b4;
}



// FUNCTION 145940ec6 FUN_145940ec6 body=138 status=ok
// SIG undefined FUN_145940ec6(void)

code * FUN_145940ec6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgsByteOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145940e3e;
}



// FUNCTION 145940f5e FUN_145940f5e body=269 status=ok
// SIG undefined FUN_145940f5e(void)

void FUN_145940f5e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14cbcdbd0;
  local_60 = DAT_14cbcdbc8;
  FUN_1448075d0(local_50);
  puVar2 = (undefined8 *)FUN_144a06846(param_2,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar2 != (byte *)0x0) && ((~*(byte *)*puVar2 & 3) == 0)) {
    local_58 = DAT_14cbcdbb8;
    local_60 = DAT_14cbcdbb0;
    FUN_1448075d0(local_50);
    puVar2 = (undefined8 *)FUN_144a06846(puVar2,local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar2 != (byte *)0x0) && ((*(byte *)*puVar2 & 3) == 1)) {
      cVar1 = FUN_1410c4486(puVar2,0);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
    }
  }
  FUN_140aae57a(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594106c FUN_14594106c body=281 status=ok
// SIG undefined FUN_14594106c(void)

undefined4 * FUN_14594106c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14594120e(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_40[2] = 0xffffffff;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_145941186(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1459412f4(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145941186 FUN_145941186 body=136 status=ok
// SIG undefined FUN_145941186(void)

undefined8 FUN_145941186(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_14587a9ce(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14594120e FUN_14594120e body=230 status=ok
// SIG undefined FUN_14594120e(void)

int * FUN_14594120e(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1459412f4 FUN_1459412f4 body=428 status=ok
// SIG undefined FUN_1459412f4(void)

void FUN_1459412f4(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 1459414a2 FUN_1459414a2 body=46 status=ok
// SIG undefined FUN_1459414a2(void)

void FUN_1459414a2(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1459415be(param_1,0);
  if (cVar1 == '\0') {
    FUN_1459414d0(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1459414d0 FUN_1459414d0 body=56 status=ok
// SIG undefined FUN_1459414d0(void)

void FUN_1459414d0(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  
  FUN_145941508();
  if (*(longlong *)(param_1 + 0x11e8) != 0) {
    cVar2 = FUN_14594153c();
    if (cVar2 != '\0') {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x11e8) + 0x3ba0);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}



// FUNCTION 145941508 FUN_145941508 body=51 status=ok
// SIG undefined FUN_145941508(void)

void FUN_145941508(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0x86] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x870))();
    if (cVar1 != '\0') {
      *(byte *)(param_1[0x86] + 0x5b5) = *(byte *)(param_1[0x86] + 0x5b5) | 0x20;
    }
  }
  return;
}



// FUNCTION 14594153c FUN_14594153c body=129 status=ok
// SIG undefined FUN_14594153c(void)

undefined8 FUN_14594153c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  
  cVar3 = (**(code **)(*param_1 + 0xed0))();
  if ((cVar3 == '\0') || ((*(byte *)(param_1 + 0x6d5) & 4) == 0)) {
LAB_145941560:
    uVar4 = 0;
  }
  else {
    if (param_1[0x76c] != 0) {
      dVar1 = (double)param_1[0x25];
      dVar2 = (double)param_1[0x26];
      fVar5 = (float)(**(code **)(*param_1 + 0xcf8))(param_1);
      if (dVar1 * dVar1 + dVar2 * dVar2 <
          (double)(fVar5 * fVar5 * *(float *)(param_1[0x76c] + 0x18))) goto LAB_145941560;
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1459415be FUN_1459415be body=755 status=ok
// SIG undefined FUN_1459415be(void)

undefined8 FUN_1459415be(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_1449ce97a();
  if ((((cVar4 != '\0') && (cVar4 = (**(code **)(*param_1 + 0x700))(param_1), cVar4 != '\0')) &&
      (lVar1 = param_1[0xd0a], lVar1 != 0)) && (*(char *)(lVar1 + 0x4449) == '\x01')) {
    uVar5 = 0;
    cVar4 = FUN_140fb2a86(lVar1,0);
    if (cVar4 == '\0') goto LAB_145941640;
    cVar4 = FUN_1449ce97a(param_1);
    if ((((cVar4 != '\0') && (param_1[0xd0a] != 0)) &&
        ((cVar4 = (**(code **)(*param_1 + 0x870))(param_1), cVar4 != '\0' &&
         ((param_1[0xd0a] == 0 || (cVar4 = FUN_140ed89ca(), cVar4 == '\0')))))) &&
       (((longlong *)param_1[0x23d] == (longlong *)0x0 ||
        (cVar4 = (**(code **)(*(longlong *)param_1[0x23d] + 0xeb8))(), cVar4 == '\0')))) {
      FUN_144b21218(param_1[0xd0a],&local_78);
      dVar7 = local_78 * local_78 + dStack_70 * dStack_70;
      if ((dVar7 != 1.0) || (NAN(dVar7))) {
        dVar6 = DAT_14c8464e0;
        local_68 = DAT_14c8464f0;
        dVar2 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar7) {
          dVar2 = dStack_70 * (1.0 / SQRT(dVar7));
          dVar6 = local_78 * (1.0 / SQRT(dVar7));
          local_68 = 0.0;
        }
      }
      else {
        dVar6 = local_78;
        local_68 = (double)(-(ulonglong)(local_68 == 0.0) & (ulonglong)local_68);
        dVar2 = dStack_70;
      }
      local_78 = dVar6;
      dStack_70 = dVar2;
      if (((9.999999747378752e-05 < ABS(dVar6)) || (9.999999747378752e-05 < ABS(dVar2))) ||
         (9.999999747378752e-05 < ABS(local_68))) {
        FUN_1436034f6(param_1,local_90);
        local_80 = 0;
        local_90[0] = 0;
        FUN_140d2943c(local_90,&local_a8,&local_78);
        local_68 = local_98;
        local_78 = local_a8;
        dStack_70 = dStack_a0;
        bVar3 = local_a8 < 0.0 || ABS(local_a8) < ABS(dStack_a0 * 0.949999988079071);
        cVar4 = (**(code **)(*(longlong *)(param_1[0xd0a] + 0x178) + 0xd8))(param_1[0xd0a] + 0x178);
        if ((cVar4 != '\0') || (bVar3)) {
          cVar4 = bVar3 * '\x02';
          if (ABS(local_a8) < ABS(dStack_a0 * 0.949999988079071)) {
            cVar4 = (0.0 <= dStack_70) * '\x02' + '\x01';
          }
          FUN_140fb28f2(param_1,cVar4);
          uVar5 = CONCAT71((uint7)(-(ulonglong)bVar3 >> 8) & 0xffffff,1);
          goto LAB_145941640;
        }
      }
    }
  }
  uVar5 = 0;
LAB_145941640:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1459418b2 FUN_1459418b2 body=159 status=ok
// SIG undefined FUN_1459418b2(void)

undefined8 * FUN_1459418b2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_1413d6220(&local_38,param_3);
  FUN_145941952(param_1 + 0x68,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145941952 FUN_145941952 body=216 status=ok
// SIG undefined FUN_145941952(void)

undefined8 * FUN_145941952(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145941a2c FUN_145941a2c body=136 status=ok
// SIG undefined FUN_145941a2c(void)

code * FUN_145941a2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairSampleCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471868dc;
}



// FUNCTION 145941ab4 FUN_145941ab4 body=138 status=ok
// SIG undefined FUN_145941ab4(void)

code * FUN_145941ab4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairOnlyDepthClosestHZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186a7a;
}



// FUNCTION 145941b3e FUN_145941b3e body=138 status=ok
// SIG undefined FUN_145941b3e(void)

code * FUN_145941b3e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairSampleData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPackedHairSample>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145941a2c;
}



// FUNCTION 145941bc8 FUN_145941bc8 body=42 status=ok
// SIG undefined FUN_145941bc8(void)

void FUN_145941bc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145941bf2(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145941bf2 FUN_145941bf2 body=84 status=ok
// SIG undefined FUN_145941bf2(void)

void FUN_145941bf2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145941c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145941c46 FUN_145941c46 body=102 status=ok
// SIG undefined FUN_145941c46(void)

ulonglong FUN_145941c46(longlong param_1)

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
LAB_145941c8f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145941c8f;
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



// FUNCTION 145941cc4 FUN_145941cc4 body=145 status=ok
// SIG undefined FUN_145941cc4(void)

undefined8
FUN_145941cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  
  lVar4 = FUN_141498ff6(param_2,param_1);
  if ((lVar4 != 0) && (cVar1 = FUN_140a30ba2(lVar4), cVar1 != '\0')) {
    uVar2 = FUN_141498f32(param_4,param_1,param_2);
    uVar3 = FUN_145941fd0(param_3,param_1,param_2);
    uVar5 = FUN_145941d56(lVar4,uVar3,uVar2,
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
    return uVar5;
  }
  return 0;
}



// FUNCTION 145941d56 FUN_145941d56 body=193 status=ok
// SIG undefined FUN_145941d56(void)

undefined4
FUN_145941d56(longlong param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((char)param_4 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x181) & 0x20;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x181) & 0x10;
  }
  if ((((bVar1 == 0) || ((int)param_2 < 0)) || (*(int *)(param_1 + 0x150) <= (int)param_2)) ||
     (((int)param_3 < 0 || (*(int *)(param_1 + 0x140) <= (int)param_3)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_145941e18((ulonglong)param_2 * 0x88 + *(longlong *)(param_1 + 0x148),
                          (ulonglong)param_3 * 0xa8 + *(longlong *)(param_1 + 0x138),param_4,param_5
                         );
    cVar2 = FUN_140e58abc(param_1);
    if (cVar2 == '\0') {
      FUN_145941f62(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return uVar3;
}



// FUNCTION 145941e18 FUN_145941e18 body=199 status=ok
// SIG undefined FUN_145941e18(void)

undefined8 FUN_145941e18(longlong param_1,longlong param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && ((longlong)*(int *)(param_2 + 0x88) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x80) + lVar2) == param_1) {
        if (*(char *)(param_1 + 0x80) != '\x01') {
          return 0;
        }
        if (*(char *)(param_2 + 0x90) != '\x01') {
          return 0;
        }
        if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x80) == '\x01') {
          param_4 = FUN_148935970(param_1);
        }
        if ((param_3 != '\0') && (cVar1 = FUN_145941ee0(param_1,param_4), cVar1 == '\0')) {
          return 0;
        }
        cVar1 = *(char *)(param_2 + 0x91);
        *(char *)(param_2 + 0x91) = param_3;
        *(undefined4 *)(param_2 + 0x9c) = param_4;
        if (cVar1 == param_3) {
          return 0;
        }
        FUN_14128cdea(param_2);
        FUN_140d10d50(param_2 + 0x18,param_2);
        return 1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_2 + 0x88) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 145941ee0 FUN_145941ee0 body=130 status=ok
// SIG undefined FUN_145941ee0(void)

bool FUN_145941ee0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar2 = FUN_1413d6430();
  iVar3 = FUN_1413d64c6(param_1);
  if (iVar2 < iVar3) {
    bVar5 = true;
    if ((0 < param_2) &&
       (((*(longlong *)(param_1 + 0x50) == 0 ||
         (*(char *)(*(longlong *)(param_1 + 0x50) + 0x80) == '\0')) &&
        ((longlong)*(int *)(param_1 + 0x68) != 0)))) {
      lVar4 = 0;
      iVar2 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar4);
        if (*(int *)(lVar1 + 0x9c) == param_2) {
          iVar2 = iVar2 + (uint)*(byte *)(lVar1 + 0x91);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x68) * 8 != lVar4);
      bVar5 = iVar2 == 0;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 145941f62 FUN_145941f62 body=109 status=ok
// SIG undefined FUN_145941f62(void)

void FUN_145941f62(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_5;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb62110);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145941fd0 FUN_145941fd0 body=199 status=ok
// SIG undefined FUN_145941fd0(void)

int FUN_145941fd0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_1;
  if (iVar2 == -1) {
    if (*(longlong *)(param_1 + 1) == 0) {
      iVar2 = -1;
    }
    else {
      lVar3 = FUN_141498ff6(param_3);
      if (lVar3 == 0) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = -1;
        if ((longlong)*(int *)(lVar3 + 0x150) != 0) {
          uVar4 = 0;
          do {
            puVar1 = *(ulonglong **)(*(longlong *)(lVar3 + 0x148) + 0x50 + uVar4);
            if (puVar1 == (ulonglong *)0x0) {
              uVar5 = 0;
              uVar6 = 0;
            }
            else {
              uVar5 = *puVar1;
              uVar6 = uVar5 & 0xffffffff;
              uVar5 = uVar5 & 0xffffffff00000000;
            }
            if ((*(ulonglong *)(param_1 + 1) ==
                 *(ulonglong *)(*(longlong *)(lVar3 + 0x148) + 0x48 + uVar4)) ||
               (*(ulonglong *)(param_1 + 1) == (uVar6 | uVar5) && (uVar6 | uVar5) != 0)) {
              iVar2 = (int)(uVar4 >> 3) * -0xf0f0f0f;
              break;
            }
            uVar4 = uVar4 + 0x88;
          } while ((longlong)*(int *)(lVar3 + 0x150) * 0x88 != uVar4);
        }
        *param_1 = iVar2;
      }
    }
  }
  return iVar2;
}



// FUNCTION 145942098 FUN_145942098 body=132 status=ok
// SIG undefined FUN_145942098(void)

void FUN_145942098(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14594211c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14594211c FUN_14594211c body=152 status=ok
// SIG undefined FUN_14594211c(void)

void FUN_14594211c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x20 + 0x18);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x18);
  plVar5 = *(longlong **)(*param_1 + 0x10 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_14820849c(param_1,param_2);
  return;
}



// FUNCTION 1459421b4 FUN_1459421b4 body=105 status=ok
// SIG undefined FUN_1459421b4(void)

void FUN_1459421b4(longlong *param_1)

{
  FUN_14594221d(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1407ddd8e(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145942205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14594221d FUN_14594221d body=45 status=ok
// SIG undefined FUN_14594221d(void)

void FUN_14594221d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14594224e FUN_14594224e body=229 status=ok
// SIG undefined FUN_14594224e(void)

void FUN_14594224e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8b9d20;
  if ((longlong *)param_1[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x38] + 0x38))();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145942334(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145942334(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145942334(param_1 + 0x18);
  FUN_1459423c2(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145942334 FUN_145942334 body=53 status=ok
// SIG undefined FUN_145942334(void)

void FUN_145942334(longlong *param_1)

{
  FUN_14594236a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14594236a FUN_14594236a body=88 status=ok
// SIG undefined FUN_14594236a(void)

void FUN_14594236a(longlong param_1)

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



// FUNCTION 1459423c2 FUN_1459423c2 body=58 status=ok
// SIG undefined FUN_1459423c2(void)

void FUN_1459423c2(longlong param_1)

{
  FUN_1459423fc(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459423fc FUN_1459423fc body=53 status=ok
// SIG undefined FUN_1459423fc(void)

void FUN_1459423fc(longlong *param_1)

{
  FUN_145942432();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145942432 FUN_145942432 body=88 status=ok
// SIG undefined FUN_145942432(void)

void FUN_145942432(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147a76b3c(param_1);
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



// FUNCTION 14594248a FUN_14594248a body=351 status=ok
// SIG undefined FUN_14594248a(void)

void FUN_14594248a(longlong param_1,short *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  ushort uVar9;
  float fVar10;
  undefined1 auStack_58 [32];
  short *local_38;
  short *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_144a78877(*param_2,param_2[1]);
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      do {
        lVar5 = (longlong)iVar4 * 0x30;
        lVar6 = lVar3 + lVar5;
        if ((*(short *)(lVar3 + lVar5) == *param_2) && (*(short *)(lVar3 + 2 + lVar5) == param_2[1])
           ) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
            uVar9 = *(ushort *)(lVar6 + 0x10) | param_2[8];
            *(ushort *)(lVar6 + 0x10) = uVar9;
            uVar8 = 0x20;
            uVar2 = 0x20;
            if ((uVar9 != 0) && (uVar2 = 0, uVar9 != 0)) {
              for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
              }
            }
            uVar9 = param_2[8];
            if ((uVar9 != 0) && (uVar8 = 0, uVar9 != 0)) {
              for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
            if (uVar8 == uVar2) {
              fVar10 = *(float *)(lVar6 + 0x14);
              if (*(float *)(lVar6 + 0x14) <= *(float *)(param_2 + 10)) {
                fVar10 = *(float *)(param_2 + 10);
              }
LAB_1459425b9:
              *(float *)(lVar6 + 0x14) = fVar10;
            }
            else if (uVar8 < uVar2) {
              fVar10 = *(float *)(param_2 + 10);
              goto LAB_1459425b9;
            }
            lVar3 = lVar3 + lVar5 + 0x18;
            lVar6 = 0;
            do {
              bVar1 = *(byte *)((longlong)param_2 + lVar6 + 0x18);
              bVar7 = *(byte *)(lVar3 + lVar6);
              if (bVar7 < bVar1) {
                bVar7 = bVar1;
              }
              *(byte *)(lVar3 + lVar6) = bVar7;
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x10);
            goto LAB_14594253d;
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x28);
      } while (iVar4 != -1);
    }
  }
  local_30 = param_2 + 4;
  local_38 = param_2;
  FUN_1459425ea((longlong *)(param_1 + 0xa0),local_24);
LAB_14594253d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459425ea FUN_1459425ea body=307 status=ok
// SIG undefined FUN_1459425ea(void)

undefined4 * FUN_1459425ea(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459427c0(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar10 = *(uint *)*param_3;
  *local_40 = uVar10;
  uVar11 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  local_40[2] = *puVar1;
  local_40[3] = uVar11;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = FUN_144a78877(uVar10 & 0xffff,uVar10 >> 0x10);
  cVar9 = FUN_14594271e(param_1,uVar10,local_40,&local_4c);
  uVar8 = local_4c;
  if (cVar9 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar11 < 4) {
      iVar13 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      local_40[0xb] = uVar10;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[10] = *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                        (longlong)(int)uVar10) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1413d796c(param_1);
    }
  }
  *param_2 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594271e FUN_14594271e body=161 status=ok
// SIG undefined FUN_14594271e(void)

undefined8 FUN_14594271e(longlong *param_1,uint param_2,short *param_3,int *param_4)

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
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      lVar2 = *param_1;
      do {
        lVar13 = (longlong)iVar12 * 0x30;
        puVar1 = (undefined4 *)(lVar2 + lVar13);
        if ((*(short *)(lVar2 + lVar13) == *param_3) &&
           (*(short *)(lVar2 + 2 + lVar13) == param_3[1])) {
          uVar3 = *(undefined4 *)param_3;
          uVar4 = *(undefined4 *)(param_3 + 2);
          uVar5 = *(undefined4 *)(param_3 + 4);
          uVar6 = *(undefined4 *)(param_3 + 6);
          uVar7 = *(undefined4 *)(param_3 + 8);
          uVar8 = *(undefined4 *)(param_3 + 10);
          uVar9 = *(undefined4 *)(param_3 + 0xc);
          uVar10 = *(undefined4 *)(param_3 + 0xe);
          *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 0x10);
          puVar1[4] = uVar7;
          puVar1[5] = uVar8;
          puVar1[6] = uVar9;
          puVar1[7] = uVar10;
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          FUN_147d58ed4(uVar3,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = puVar1[10];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 1459427c0 FUN_1459427c0 body=251 status=ok
// SIG undefined FUN_1459427c0(void)

int * FUN_1459427c0(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1459428c6 FUN_1459428c6 body=89 status=ok
// SIG undefined FUN_1459428c6(void)

void FUN_1459428c6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_145942920(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145942958(param_1 + 0x20);
  return;
}



// FUNCTION 145942920 FUN_145942920 body=55 status=ok
// SIG undefined FUN_145942920(void)

void FUN_145942920(longlong *param_1)

{
  FUN_1413d7b3a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145942958 FUN_145942958 body=55 status=ok
// SIG undefined FUN_145942958(void)

void FUN_145942958(longlong *param_1)

{
  FUN_145942990(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145942990 FUN_145942990 body=123 status=ok
// SIG undefined FUN_145942990(void)

void FUN_145942990(longlong param_1,int param_2)

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



// FUNCTION 145942a0c FUN_145942a0c body=109 status=ok
// SIG undefined FUN_145942a0c(void)

void FUN_145942a0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  switchD_143c3d4dc::caseD_1f();
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) != 0)) {
    FUN_1413d7d56();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000145942a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145942a84 FUN_145942a84 body=105 status=ok
// SIG undefined FUN_145942a84(void)

void FUN_145942a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b478560;
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_1413d7d8a(param_1);
  return;
}



// FUNCTION 145942aee FUN_145942aee body=124 status=ok
// SIG undefined FUN_145942aee(void)

void FUN_145942aee(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1458c464e(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x10) = param_2;
      FUN_145942b6a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145942b6a FUN_145942b6a body=53 status=ok
// SIG undefined FUN_145942b6a(void)

void FUN_145942b6a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145942ba0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_1458c46cc(param_1,*(undefined4 *)(param_1 + 0x10),iVar1);
    return;
  }
  return;
}



// FUNCTION 145942ba0 FUN_145942ba0 body=108 status=ok
// SIG undefined FUN_145942ba0(void)

ulonglong FUN_145942ba0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145942c0c FUN_145942c0c body=46 status=ok
// SIG undefined FUN_145942c0c(void)

void FUN_145942c0c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144a7c8f6();
  if (lVar1 != 0) {
    uVar2 = FUN_145942c3a();
    FUN_145942c42(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 145942c3a FUN_145942c3a body=8 status=ok
// SIG undefined FUN_145942c3a(void)

undefined ** FUN_145942c3a(void)

{
  return &PTR_PTR_14c7640f0;
}



// FUNCTION 145942c42 FUN_145942c42 body=41 status=ok
// SIG undefined FUN_145942c42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145942c42(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x90));
  }
  _DAT_14c7626a0 = param_2;
  return;
}



// FUNCTION 145942c6c FUN_145942c6c body=26 status=ok
// SIG undefined FUN_145942c6c(void)

undefined8 FUN_145942c6c(longlong param_1,undefined8 param_2)

{
  FUN_1413d7f08(param_1 + 0x48);
  return param_2;
}



// FUNCTION 145942c86 FUN_145942c86 body=40 status=ok
// SIG undefined FUN_145942c86(void)

undefined8 FUN_145942c86(undefined8 param_1,int param_2)

{
  FUN_145942cae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145942cae FUN_145942cae body=63 status=ok
// SIG undefined FUN_145942cae(void)

void FUN_145942cae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abddef0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145942cee FUN_145942cee body=21 status=ok
// SIG undefined FUN_145942cee(void)

undefined8 FUN_145942cee(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145942d04 FUN_145942d04 body=176 status=ok
// SIG undefined FUN_145942d04(void)

void FUN_145942d04(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400bc96c(*(longlong *)(param_1 + 0xa0) + 0x11f0,&DAT_14cb712a8);
    FUN_1400bc96c(*(longlong *)(param_1 + 0xa0) + 0x1218,&DAT_14cb712a8);
    FUN_140257a06(*(undefined8 *)(param_1 + 0xa0),&DAT_14cb712a8,0);
  }
  lVar1 = FUN_144a782da(param_1 + 0x6c0,&DAT_14cb72618);
  if (lVar1 != 0) {
    FUN_1413d8066(lVar1,&DAT_14cb712a8);
  }
  if ((*(longlong *)(param_1 + -0xf80) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + -0xf80) + 0x120), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  }
  FUN_1400da9ba(param_1 + 0x22f8,uVar2);
  return;
}



// FUNCTION 145942db4 FUN_145942db4 body=188 status=ok
// SIG undefined FUN_145942db4(void)

void FUN_145942db4(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14cb44458 != DAT_14cb44484) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cb44488;
    if (DAT_14cb44490 != (undefined *)0x0) {
      puVar5 = DAT_14cb44490;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14cb44498 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cb44450 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        puVar3 = (undefined8 *)puVar1[1];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        FUN_145942e96(param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 145942e70 FUN_145942e70 body=38 status=ok
// SIG undefined FUN_145942e70(void)

undefined8 FUN_145942e70(undefined8 param_1,int param_2)

{
  FUN_1413d8912();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145942e96 FUN_145942e96 body=232 status=ok
// SIG undefined FUN_145942e96(void)

void FUN_145942e96(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if (DAT_14cb44458 != DAT_14cb44484) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14cb44488;
    if (DAT_14cb44490 != (undefined *)0x0) {
      puVar5 = DAT_14cb44490;
    }
    for (iVar2 = *(int *)(puVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14cb44498 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cb44450 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14cb44450 + (longlong)iVar2 * 0x18) == param_1) {
        puVar5 = &DAT_14cb44488;
        if (DAT_14cb44490 != (undefined *)0x0) {
          puVar5 = DAT_14cb44490;
        }
        lVar1 = DAT_14cb44450 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar4 == iVar2) {
          piVar6 = (int *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14cb44450 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar6;
          } while (iVar4 != iVar2);
        }
        *piVar6 = *(int *)(lVar1 + 0x10);
        FUN_145942f7e();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145942f7e FUN_145942f7e body=128 status=ok
// SIG undefined FUN_145942f7e(void)

void FUN_145942f7e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb44450;
  if (DAT_14cb44484 != 0) {
    *(int *)(DAT_14cb44450 + (longlong)DAT_14cb44480 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb44484) {
    iVar4 = DAT_14cb44480;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb44484 = DAT_14cb44484 + 1;
  puVar3 = &DAT_14cb44460;
  if (DAT_14cb44470 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb44470;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb44480 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14594300a FUN_14594300a body=116 status=ok
// SIG undefined FUN_14594300a(void)

undefined8 * FUN_14594300a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b1fc6f0;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  return param_1;
}



// FUNCTION 14594307e FUN_14594307e body=104 status=ok
// SIG undefined FUN_14594307e(void)

undefined8 FUN_14594307e(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1459430e8(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459430e8 FUN_1459430e8 body=22 status=ok
// SIG undefined FUN_1459430e8(void)

ulonglong FUN_1459430e8(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbc54d0;
  if (DAT_14cbc54d0 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbc54d0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc54d0 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbc54d0 + 0x1fc) < (int)DAT_14cbc54d0[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbc54d0 + 0x300))(DAT_14cbc54d0);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1459430fe FUN_1459430fe body=104 status=ok
// SIG undefined FUN_1459430fe(void)

undefined8 FUN_1459430fe(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145943168(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145943168 FUN_145943168 body=22 status=ok
// SIG undefined FUN_145943168(void)

undefined8 FUN_145943168(int *param_1)

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
  
  plVar4 = DAT_14cbcbd50;
  if (DAT_14cbcbd50 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbcbd50 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbcbd50 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbcbd50[0x3a] <= *(int *)((longlong)DAT_14cbcbd50 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbcbd50 + 0x300))(DAT_14cbcbd50);
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



// FUNCTION 14594317e FUN_14594317e body=366 status=ok
// SIG undefined FUN_14594317e(void)

void FUN_14594317e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459432ee();
  lVar4 = FUN_1407f492e(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      lVar4 = FUN_140e16172(lVar4);
      if (lVar4 != 0) {
        local_28 = *(undefined4 *)(lVar4 + 0xe0);
        uStack_24 = *(undefined4 *)(lVar4 + 0xe4);
        uStack_20 = *(undefined4 *)(lVar4 + 0xe8);
        uStack_1c = *(undefined4 *)(lVar4 + 0xec);
        FUN_1412a49e6(param_1,"Event_Init_Cursor_Position",&local_28);
      }
    }
  }
  lVar4 = FUN_14479d2ce(param_1 + 900);
  if (lVar4 != 0) {
    lVar5 = FUN_140ade7fe();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_145960068(param_1,lVar4 + 0x1a0,0);
      if (*(char *)(param_1 + 0x3ba) == '\x01') {
        uVar1 = *(undefined4 *)(lVar4 + 0x1ac);
        uVar2 = *(undefined4 *)(lVar4 + 0x1b0);
        uVar3 = *(undefined4 *)(lVar4 + 0x1b4);
        *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(lVar4 + 0x1a8);
        *(undefined4 *)(param_1 + 0x5e4) = uVar1;
        *(undefined4 *)(param_1 + 0x5e8) = uVar2;
        *(undefined4 *)(param_1 + 0x5ec) = uVar3;
        if ((*(char *)(param_1 + 0xcd) == '\0') && (*(char *)(param_1 + 0xce) == '\0')) {
          FUN_14596032c(param_1,param_1 + 0x5e0);
        }
        else {
          *(undefined1 *)(param_1 + 0x5d7) = 1;
        }
      }
      FUN_145943868(param_1,*(undefined4 *)(lVar4 + 0x1b8));
      FUN_145943610(param_1,*(undefined1 *)(lVar4 + 0x1bc));
      FUN_14594373c(param_1,*(undefined1 *)(lVar4 + 0x1bd));
      FUN_14594399c(param_1,*(undefined1 *)(lVar4 + 0x1be));
    }
  }
  FUN_14594332c(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459432ee FUN_1459432ee body=61 status=ok
// SIG undefined FUN_1459432ee(void)

void FUN_1459432ee(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 900);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 900);
    FUN_1459433d0(uVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14594332c FUN_14594332c body=141 status=ok
// SIG undefined FUN_14594332c(void)

void FUN_14594332c(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14101baae();
  if (lVar2 != 0) {
    lVar3 = FUN_14030d4a0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_1459433ba(param_1);
      if (cVar1 != '\0') {
        local_19 = FUN_1413d8b3e(lVar2);
        FUN_140755a72(param_1,"Event_SetRadarEnabled");
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459433ba FUN_1459433ba body=21 status=ok
// SIG undefined FUN_1459433ba(void)

ulonglong FUN_1459433ba(longlong param_1)

{
  undefined8 in_RAX;
  
  if (*(char *)(param_1 + 0xca) == '\x01') {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0xcc)) ^ 1;
  }
  return 0;
}



// FUNCTION 1459433d0 FUN_1459433d0 body=199 status=ok
// SIG undefined FUN_1459433d0(void)

void FUN_1459433d0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  iVar1 = *(int *)(param_1 + 0x158);
  local_28 = param_2;
  FUN_14594353a(param_1 + 0x150);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x158) == 0)) {
    cVar2 = FUN_144729dda(param_1 + 200);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(param_1 + 200);
      FUN_14144f736(lVar4 + 0x200,&DAT_14cb92840,1);
      uVar3 = FUN_145943b04(param_1);
      FUN_1401861f4(param_1 + 0xe8,uVar3);
    }
  }
  FUN_145943498(param_1 + 0xd0,local_28 + 0x3c0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145943498 FUN_145943498 body=162 status=ok
// SIG undefined FUN_145943498(void)

void FUN_145943498(longlong *param_1,undefined8 param_2)

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
        goto LAB_145943525;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145943525:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14594353a FUN_14594353a body=214 status=ok
// SIG undefined FUN_14594353a(void)

void FUN_14594353a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar6 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar4 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar4;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar3;
        if (lVar5 <= lVar7) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar11 == (plVar2[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(plVar2 + iVar6,plVar2 + lVar4,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar6;
  }
  return;
}



// FUNCTION 145943610 FUN_145943610 body=298 status=ok
// SIG undefined FUN_145943610(void)

void FUN_145943610(longlong param_1,char param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x5d4) != param_2) {
    *(char *)(param_1 + 0x5d4) = param_2;
    puVar1 = &DAT_149fc3c38;
    if (param_2 != '\0') {
      puVar1 = (undefined2 *)&DAT_149fc3c40;
    }
    FUN_140056680(&local_c8,puVar1);
    plVar2 = (longlong *)FUN_143eb474e(param_1);
    if (plVar2 != (longlong *)0x0) {
      _Str = local_c8;
      if (local_c0 == 0) {
        _Str = L"";
      }
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
      }
      (**(code **)(*plVar2 + 0x218))(plVar2,"high_contrast_hud",local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14594373c FUN_14594373c body=298 status=ok
// SIG undefined FUN_14594373c(void)

void FUN_14594373c(longlong param_1,char param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x5d5) != param_2) {
    *(char *)(param_1 + 0x5d5) = param_2;
    puVar1 = &DAT_149fc3c38;
    if (param_2 != '\0') {
      puVar1 = (undefined2 *)&DAT_149fc3c40;
    }
    FUN_140056680(&local_c8,puVar1);
    plVar2 = (longlong *)FUN_143eb474e(param_1);
    if (plVar2 != (longlong *)0x0) {
      _Str = local_c8;
      if (local_c0 == 0) {
        _Str = L"";
      }
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
      }
      (**(code **)(*plVar2 + 0x218))(plVar2,"high_contrast_crosshair",local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145943868 FUN_145943868 body=307 status=ok
// SIG undefined FUN_145943868(void)

void FUN_145943868(longlong param_1,int param_2)

{
  longlong *plVar1;
  size_t sVar2;
  undefined2 *puVar3;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x5d0) != param_2) {
    *(int *)(param_1 + 0x5d0) = param_2;
    if (param_2 - 1U < 3) {
      puVar3 = (undefined2 *)
               (&DAT_14b9dc4d8 + *(int *)(&DAT_14b9dc4d8 + (ulonglong)(param_2 - 1U) * 4));
    }
    else {
      puVar3 = &DAT_149fc3c38;
    }
    FUN_140056680(&local_c8,puVar3);
    plVar1 = (longlong *)FUN_143eb474e(param_1);
    if (plVar1 != (longlong *)0x0) {
      _Str = local_c8;
      if (local_c0 == 0) {
        _Str = L"";
      }
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar2 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar2 & 0xffffffff,1);
      }
      (**(code **)(*plVar1 + 0x218))(plVar1,"colorblind_mode",local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14594399c FUN_14594399c body=358 status=ok
// SIG undefined FUN_14594399c(void)

void FUN_14594399c(longlong param_1,char param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  size_t sVar3;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  wchar_t *local_d0;
  int local_c8;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x5d6) != param_2) {
    *(char *)(param_1 + 0x5d6) = param_2;
    puVar1 = &DAT_149fc3c38;
    if (param_2 != '\0') {
      puVar1 = (undefined2 *)&DAT_149fc3c40;
    }
    FUN_140056680(&local_d0,puVar1);
    plVar2 = (longlong *)FUN_143eb474e(param_1);
    if (plVar2 != (longlong *)0x0) {
      _Str = local_d0;
      if (local_c8 == 0) {
        _Str = L"";
      }
      local_40 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_38 = 0;
        local_30 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
      }
      (**(code **)(*plVar2 + 0x218))(plVar2,"engoodification",local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    if ((*(char *)(param_1 + 0xcd) == '\0') && (*(char *)(param_1 + 0xce) == '\0')) {
      FUN_140755a72(param_1,"Event_SetEngoodification",param_1 + 0x5d6);
    }
    else {
      *(undefined1 *)(param_1 + 0x5d8) = 1;
    }
    if (local_d0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145943b04 FUN_145943b04 body=137 status=ok
// SIG undefined FUN_145943b04(void)

undefined4 FUN_145943b04(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0xffffffff;
  if (param_1[0x18] != 0) {
    lVar4 = FUN_1449db7f2();
    lVar1 = param_1[0x18];
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar4 = FUN_140334a94(lVar1,uVar5);
      if (lVar4 != 0) {
        cVar3 = FUN_141107632(lVar4);
        if (cVar3 == '\0') {
          uVar6 = *(undefined4 *)(lVar1 + 0xe0);
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 145943b94 FUN_145943b94 body=41 status=ok
// SIG undefined FUN_145943b94(void)

void FUN_145943b94(undefined8 param_1)

{
  FUN_145943bbe();
  FUN_1413d8c86(param_1);
  FUN_1413d8be4(&DAT_14cb89728,param_1);
  return;
}



// FUNCTION 145943bbe FUN_145943bbe body=51 status=ok
// SIG undefined FUN_145943bbe(void)

void FUN_145943bbe(longlong param_1,undefined8 param_2)

{
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x15);
  FUN_144a787a6(param_1 + 0x428,param_2);
  return;
}



// FUNCTION 145943bf2 FUN_145943bf2 body=89 status=ok
// SIG undefined FUN_145943bf2(void)

undefined8 * FUN_145943bf2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x430);
  _Src = *(void **)(param_1 + 0x428);
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



// FUNCTION 145943c4c FUN_145943c4c body=116 status=ok
// SIG undefined FUN_145943c4c(void)

undefined8 FUN_145943c4c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((((lVar3 != 0) && (*(short *)(lVar3 + 4) < 0)) &&
          (lVar4 = FUN_14479d2ce(lVar3 + 0x18), lVar4 != 0)) &&
         (*(int *)(lVar4 + 0x394) != *(int *)(lVar3 + 0x20))) {
        *(int *)(lVar3 + 0x20) = *(int *)(lVar4 + 0x394);
        uVar5 = 1;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5;
}



// FUNCTION 145943cc0 FUN_145943cc0 body=143 status=ok
// SIG undefined FUN_145943cc0(void)

void FUN_145943cc0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145943d5c FUN_145943d5c body=129 status=ok
// SIG undefined FUN_145943d5c(void)

undefined8 * FUN_145943d5c(undefined8 *param_1)

{
  FUN_145943dde();
  *param_1 = &PTR_FUN_14ac0bd30;
  FUN_141118a4c(param_1 + 0x21);
  param_1[0x28] = 0;
  FUN_14111896e(param_1 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x85) = 1;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xffffffe3 | 4;
  *(undefined4 *)(param_1 + 0x18) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1f) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined4 *)(param_1 + 0x2f) = 0x3fc00000;
  return param_1;
}



// FUNCTION 145943dde FUN_145943dde body=128 status=ok
// SIG undefined FUN_145943dde(void)

undefined8 * FUN_145943dde(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145943e5e();
  *param_1 = &PTR_FUN_14ac0cd60;
  FUN_14111896e(param_1 + 0x12);
  FUN_14111896e(param_1 + 0x19);
  param_1[0x20] = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x20] = lVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x1f) = 0x42c80000;
  return param_1;
}



// FUNCTION 145943e5e FUN_145943e5e body=172 status=ok
// SIG undefined FUN_145943e5e(void)

undefined8 * FUN_145943e5e(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = (*(uint *)(param_1 + 9) & 0xfffffffc) + 1;
  *param_1 = &PTR_FUN_14ac0c8c0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x4480000044800000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x4120000041200000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0x100;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xffffffc0 | 0x3e;
  *(undefined4 *)(param_1 + 0xd) = 0;
  lVar1 = FUN_145943f0a();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[8] = lVar1;
  return param_1;
}



// FUNCTION 145943f0a FUN_145943f0a body=228 status=ok
// SIG undefined FUN_145943f0a(void)

longlong FUN_145943f0a(void)

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
  if (DAT_14cb20010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145869c1a;
    local_38 = &LAB_147ee7e1b;
    local_40 = FUN_14642dbcb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryItemType_Point",&DAT_14cb20010,&DAT_147ee7e1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145943ffc FUN_145943ffc body=179 status=ok
// SIG undefined FUN_145943ffc(void)

void FUN_145943ffc(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40))) {
    local_48 = &LAB_148aa1b58;
    local_40 = 0;
    FUN_14594446e(local_38,param_1,&local_48);
    local_48 = *(undefined1 **)(param_1 + 0x30);
    FUN_148aa1a16(param_1 + 0x20,&local_48,
                  (longlong)*(int *)(param_1 + 0x48) * 0x10 + *(longlong *)(param_1 + 0x38),local_38
                 );
    FUN_1449db362(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1459440bc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459440bc FUN_1459440bc body=135 status=ok
// SIG undefined FUN_1459440bc(void)

void FUN_1459440bc(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &LAB_1458847b6;
  local_40 = 0;
  FUN_14594446e(local_38,param_1,&local_48);
  local_48 = *(undefined1 **)(param_1 + 0x30);
  FUN_145944144(param_1 + 0x20,&local_48,local_38);
  FUN_1449db362(local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145944144 FUN_145944144 body=314 status=ok
// SIG undefined FUN_145944144(void)

void FUN_145944144(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f2760;
  plVar1 = plVar3 + 2;
  local_48 = (longlong *)*param_3;
  *param_3 = 0;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_145944346(plVar1,*param_2,&local_48);
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_1459443cc(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145944280(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145944280(param_1);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145944280 FUN_145944280 body=196 status=ok
// SIG undefined FUN_145944280(void)

void FUN_145944280(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar4 = FUN_1413da074(&local_38);
    *(longlong *)(param_1 + 8) = lVar4;
    if (local_38 != 0) {
      FUN_1400020a8();
      lVar4 = *(longlong *)(param_1 + 8);
    }
    if (lVar4 == 0) goto LAB_145944302;
  }
  local_38 = *param_2;
  plStack_30 = (longlong *)param_2[1];
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1411d7792(lVar4,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145944302:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145944346 FUN_145944346 body=133 status=ok
// SIG undefined FUN_145944346(void)

undefined8 * FUN_145944346(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f2780;
  param_1[4] = &PTR_LAB_14b4f27a8;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_14114e6dc(param_1 + 7,param_3);
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1449db362(param_3);
  return param_1;
}



// FUNCTION 1459443cc FUN_1459443cc body=162 status=ok
// SIG undefined FUN_1459443cc(void)

void FUN_1459443cc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14594440b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14594440b;
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
LAB_14594440b:
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
                    /* WARNING: Could not recover jumptable at 0x00014594446a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}


